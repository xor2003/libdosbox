/* PLEASE DO NOT MODIFY THIS FILE. ALL CHANGES WILL BE LOST! LOOK FOR README FOR DETAILS */

/* 
 *
 */

                #include "iplay.h"

                

 bool _group32(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group32:
    _begin:
seg001_0_proc:
	// 19644 
loc_19050:
	// 5560 
cs=0xaa7;eip=0x000000; 	J(CALL(_callsubx,0));	// 19646 call    _callsubx ;~ 0AA7:0000
cs=0xaa7;eip=0x000003; 	J(JC(loc_192b9));	// 19647 jb      loc_192B9 ;~ 0AA7:0003
cs=0xaa7;eip=0x000007; 	T(MOV(dx, offset(dseg,_acurrentsoundcard)));	// 19648 mov     dx, offset _aCurrentSoundcard ; "\rCurrent Soundcard settings:\r\n\n$" ;~ 0AA7:0007
cs=0xaa7;eip=0x00000a; 	T(MOV(ah, 9));	// 19649 mov     ah, 9 ;~ 0AA7:000A
cs=0xaa7;eip=0x00000c; 	S(_INT(0x21));	// 19650 int     21h             ; DOS - PRINT STRING ;~ 0AA7:000C
cs=0xaa7;eip=0x00000e; 	T(MOV(ax, ds));	// 19652 mov     ax, ds ;~ 0AA7:000E
cs=0xaa7;eip=0x000010; 	T(MOV(es, ax));	// 19653 mov     es, ax ;~ 0AA7:0010
cs=0xaa7;eip=0x000012; 	T(MOV(di, offset(dseg,_buffer_1)));	// 19655 mov     di, offset _buffer_1 ; 2800h ;~ 0AA7:0012
cs=0xaa7;eip=0x000015; 	J(CALLF(sub_12d05,0));	// 19656 call    sub_12D05 ;~ 0AA7:0015
cs=0xaa7;eip=0x00001a; 	X(MOV(*(raddr(es,di)), '$'));	// 19657 mov     byte ptr es:[di], '$' ;~ 0AA7:001A
cs=0xaa7;eip=0x00001e; 	T(MOV(dx, offset(dseg,_buffer_1)));	// 19658 mov     dx, offset _buffer_1 ; 2800h ;~ 0AA7:001E
cs=0xaa7;eip=0x000021; 	T(MOV(ah, 9));	// 19659 mov     ah, 9 ;~ 0AA7:0021
cs=0xaa7;eip=0x000023; 	S(_INT(0x21));	// 19660 int     21h             ; DOS - PRINT STRING ;~ 0AA7:0023
cs=0xaa7;eip=0x000025; 	T(MOV(dx, offset(dseg,_myendl)));	// 19662 mov     dx, offset _myendl ; "\r\n$" ;~ 0AA7:0025
cs=0xaa7;eip=0x000028; 	T(MOV(ah, 9));	// 19663 mov     ah, 9 ;~ 0AA7:0028
cs=0xaa7;eip=0x00002a; 	S(_INT(0x21));	// 19664 int     21h             ; DOS - PRINT STRING ;~ 0AA7:002A
cs=0xaa7;eip=0x00002c; 	J(CALLF(_deinit_125b9,0));	// 19666 call    _deinit_125B9 ;~ 0AA7:002C
cs=0xaa7;eip=0x000031; 	T(MOV(ax, 0x4C00));	// 19667 mov     ax, 4C00h ;~ 0AA7:0031
cs=0xaa7;eip=0x000034; 	S(_INT(0x21));	// 19668 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 0AA7:0034
exit(0);
loc_19086:
	// 5561 
cs=0xaa7;eip=0x000036; 	T(MOV(dx, 0));	// 19673 mov     dx, 0 ;~ 0AA7:0036
cs=0xaa7;eip=0x000039; 	T(MOV(ah, 9));	// 19674 mov     ah, 9 ;~ 0AA7:0039
cs=0xaa7;eip=0x00003b; 	S(_INT(0x21));	// 19675 int     21h             ; DOS - PRINT STRING ;~ 0AA7:003B
cs=0xaa7;eip=0x00003d; 	T(MOV(ax, 0x4C00));	// 19677 mov     ax, 4C00h ;~ 0AA7:003D
cs=0xaa7;eip=0x000040; 	S(_INT(0x21));	// 19678 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 0AA7:0040
exit(0);
_start:
	// 19685 
cs=0xaa7;eip=0x000042; 	T(MOV(ax, seg_offset(dseg)));	// 19691 mov     ax, seg dseg ;~ 0AA7:0042
cs=0xaa7;eip=0x000045; 	T(MOV(ds, ax));	// 19692 mov     ds, ax ;~ 0AA7:0045
cs=0xaa7;eip=0x000047; 	X(MOV(_esseg_atstart, es));	// 19694 mov     _esseg_atstart, es ;~ 0AA7:0047
cs=0xaa7;eip=0x00004b; 	T(MOV(ax, sp));	// 19695 mov     ax, sp ;~ 0AA7:004B
cs=0xaa7;eip=0x00004d; 	T(ADD(ax, 0x13));	// 19696 add     ax, 13h ;~ 0AA7:004D
cs=0xaa7;eip=0x000050; 	T(MOV(cl, 4));	// 19697 mov     cl, 4 ;~ 0AA7:0050
cs=0xaa7;eip=0x000052; 	T(SHR(ax, cl));	// 19698 shr     ax, cl ;~ 0AA7:0052
cs=0xaa7;eip=0x000054; 	T(MOV(bx, ss));	// 19699 mov     bx, ss ;~ 0AA7:0054
cs=0xaa7;eip=0x000056; 	T(ADD(bx, ax));	// 19700 add     bx, ax ;~ 0AA7:0056
cs=0xaa7;eip=0x000058; 	T(MOV(ax, es));	// 19701 mov     ax, es ;~ 0AA7:0058
cs=0xaa7;eip=0x00005a; 	T(SUB(bx, ax));	// 19702 sub     bx, ax ;~ 0AA7:005A
cs=0xaa7;eip=0x00005c; 	T(MOV(ah, 0x4A));	// 19703 mov     ah, 4Ah ;~ 0AA7:005C
cs=0xaa7;eip=0x00005e; 	S(_INT(0x21));	// 19704 int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 0AA7:005E
cs=0xaa7;eip=0x000060; 	T(CLD);	// 19707 cld ;~ 0AA7:0060
cs=0xaa7;eip=0x000061; 	T(XOR(dl, dl));	// 19708 xor     dl, dl ;~ 0AA7:0061
cs=0xaa7;eip=0x000063; 	T(MOV(cx, 0x4D50));	// 19709 mov     cx, 4D50h       ; PM ;~ 0AA7:0063
cs=0xaa7;eip=0x000066; 	T(MOV(bx, 0x5344));	// 19710 mov     bx, 5344h       ; DS ;~ 0AA7:0066
cs=0xaa7;eip=0x000069; 	T(MOV(ax, 0x60FF));	// 19711 mov     ax, 60FFh ;~ 0AA7:0069
cs=0xaa7;eip=0x00006c; 	S(_INT(0x2F));	// 19712 int     2Fh ;~ 0AA7:006C
cs=0xaa7;eip=0x00006e; 	T(CMP(ax, 0x4F4B));	// 19713 cmp     ax, 4F4Bh       ; 'KO' check for single instance ;~ 0AA7:006E
cs=0xaa7;eip=0x000071; 	J(JNZ(loc_190d3));	// 19714 jnz     short loc_190D3 ;~ 0AA7:0071
cs=0xaa7;eip=0x000073; 	T(MOV(dx, offset(dseg,_acriticalerrort)));	// 19715 mov     dx, offset _aCriticalErrorT ; "\r\n\nCritical error: The player jumped"... ;~ 0AA7:0073
cs=0xaa7;eip=0x000076; 	T(MOV(ah, 9));	// 19716 mov     ah, 9 ;~ 0AA7:0076
cs=0xaa7;eip=0x000078; 	S(_INT(0x21));	// 19717 int     21h             ; DOS - PRINT STRING ;~ 0AA7:0078
cs=0xaa7;eip=0x00007a; 	T(XOR(ah, ah));	// 19719 xor     ah, ah ;~ 0AA7:007A
cs=0xaa7;eip=0x00007c; 	S(_INT(0x16));	// 19720 int     16h             ; KEYBOARD - READ CHAR FROM BUFFER, WAIT IF EMPTY ;~ 0AA7:007C
cs=0xaa7;eip=0x00007e; 	T(MOV(ax, 0x4C02));	// 19722 mov     ax, 4C02h ;~ 0AA7:007E
cs=0xaa7;eip=0x000081; 	S(_INT(0x21));	// 19723 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 0AA7:0081
exit(2);
loc_190d3:
	// 5562 
cs=0xaa7;eip=0x000083; 	J(CALL(_loadcfg,0));	// 19728 call    _loadcfg ;~ 0AA7:0083
cs=0xaa7;eip=0x000086; 	J(CALL(_parse_cmdline,0));	// 19729 call    _parse_cmdline ;~ 0AA7:0086
cs=0xaa7;eip=0x000089; 	T(BT(ebp, 8));	// 19730 bt      ebp, 8 ;~ 0AA7:0089
cs=0xaa7;eip=0x00008e; 	J(JC(loc_19050));	// 19731 jb      loc_19050 ;~ 0AA7:008E
cs=0xaa7;eip=0x000092; 	T(TEST(ebp, 0x80000080));	// 19732 test    ebp, 80000080h ;~ 0AA7:0092
cs=0xaa7;eip=0x000099; 	J(JNZ(loc_19086));	// 19733 jnz     short loc_19086 ;~ 0AA7:0099
cs=0xaa7;eip=0x00009b; 	T(BT(ebp, 0x0B));	// 19734 bt      ebp, 0Bh ;~ 0AA7:009B
cs=0xaa7;eip=0x0000a0; 	J(JNC(loc_190f7));	// 19735 jnb     short loc_190F7 ;~ 0AA7:00A0
cs=0xaa7;eip=0x0000a2; 	X(OR(*(db*)(((db*)&_configword)), 4));	// 19736 or      byte ptr _configword, 4 ;~ 0AA7:00A2
loc_190f7:
	// 5563 
cs=0xaa7;eip=0x0000a7; 	T(BT(ebp, 3));	// 19739 bt      ebp, 3 ;~ 0AA7:00A7
cs=0xaa7;eip=0x0000ac; 	J(JNC(loc_19103));	// 19740 jnb     short loc_19103 ;~ 0AA7:00AC
cs=0xaa7;eip=0x0000ae; 	X(AND(*(db*)(((db*)&_configword)), 0x0FB));	// 19741 and     byte ptr _configword, 0FBh ;~ 0AA7:00AE
loc_19103:
	// 5564 
cs=0xaa7;eip=0x0000b3; 	T(BT(ebp, 6));	// 19744 bt      ebp, 6 ;~ 0AA7:00B3
cs=0xaa7;eip=0x0000b8; 	J(JNC(loc_19114));	// 19745 jnb     short loc_19114 ;~ 0AA7:00B8
cs=0xaa7;eip=0x0000ba; 	X(AND(*(db*)(((db*)&_configword)+1), 0x0F1));	// 19746 and     byte ptr _configword+1, 0F1h ;~ 0AA7:00BA
cs=0xaa7;eip=0x0000bf; 	X(OR(*(db*)(((db*)&_configword)+1), 2));	// 19747 or      byte ptr _configword+1, 2 ;~ 0AA7:00BF
loc_19114:
	// 5565 
cs=0xaa7;eip=0x0000c4; 	T(BT(ebp, 5));	// 19750 bt      ebp, 5 ;~ 0AA7:00C4
cs=0xaa7;eip=0x0000c9; 	J(JNC(loc_19125));	// 19751 jnb     short loc_19125 ;~ 0AA7:00C9
cs=0xaa7;eip=0x0000cb; 	X(AND(*(db*)(((db*)&_configword)+1), 0x0F1));	// 19752 and     byte ptr _configword+1, 0F1h ;~ 0AA7:00CB
cs=0xaa7;eip=0x0000d0; 	X(OR(*(db*)(((db*)&_configword)+1), 4));	// 19753 or      byte ptr _configword+1, 4 ;~ 0AA7:00D0
loc_19125:
	// 5566 
cs=0xaa7;eip=0x0000d5; 	T(BT(ebp, 0x13));	// 19756 bt      ebp, 13h ;~ 0AA7:00D5
cs=0xaa7;eip=0x0000da; 	J(JNC(loc_19131));	// 19757 jnb     short loc_19131 ;~ 0AA7:00DA
cs=0xaa7;eip=0x0000dc; 	X(AND(*(db*)(((db*)&_configword)+1), 0x0F1));	// 19758 and     byte ptr _configword+1, 0F1h ;~ 0AA7:00DC
loc_19131:
	// 5567 
cs=0xaa7;eip=0x0000e1; 	T(BT(ebp, 4));	// 19761 bt      ebp, 4 ;~ 0AA7:00E1
cs=0xaa7;eip=0x0000e6; 	J(JNC(loc_1913d));	// 19762 jnb     short loc_1913D ;~ 0AA7:00E6
cs=0xaa7;eip=0x0000e8; 	X(AND(*(db*)(((db*)&_configword)), 0x0FD));	// 19763 and     byte ptr _configword, 0FDh ;~ 0AA7:00E8
loc_1913d:
	// 5568 
cs=0xaa7;eip=0x0000ed; 	T(BT(ebp, 0x14));	// 19766 bt      ebp, 14h ;~ 0AA7:00ED
cs=0xaa7;eip=0x0000f2; 	J(JNC(loc_19149));	// 19767 jnb     short loc_19149 ;~ 0AA7:00F2
cs=0xaa7;eip=0x0000f4; 	X(AND(*(db*)(((db*)&_configword)), 0x0FE));	// 19768 and     byte ptr _configword, 0FEh ;~ 0AA7:00F4
loc_19149:
	// 5569 
cs=0xaa7;eip=0x0000f9; 	T(BT(ebp, 0x0E));	// 19771 bt      ebp, 0Eh ;~ 0AA7:00F9
cs=0xaa7;eip=0x0000fe; 	J(JNC(loc_19155));	// 19772 jnb     short loc_19155 ;~ 0AA7:00FE
cs=0xaa7;eip=0x000100; 	X(AND(*(db*)(((db*)&_configword)), 0x0BF));	// 19773 and     byte ptr _configword, 0BFh ;~ 0AA7:0100
loc_19155:
	// 5570 
cs=0xaa7;eip=0x000105; 	T(BT(ebp, 2));	// 19776 bt      ebp, 2 ;~ 0AA7:0105
cs=0xaa7;eip=0x00010a; 	J(JNC(loc_19161));	// 19777 jnb     short loc_19161 ;~ 0AA7:010A
cs=0xaa7;eip=0x00010c; 	X(OR(*(db*)(((db*)&_configword)), 0x40));	// 19778 or      byte ptr _configword, 40h ;~ 0AA7:010C
loc_19161:
	// 5571 
cs=0xaa7;eip=0x000111; 	T(BT(ebp, 0x15));	// 19781 bt      ebp, 15h ;~ 0AA7:0111
cs=0xaa7;eip=0x000116; 	T(SETB(al));	// 19782 setb    al ;~ 0AA7:0116
cs=0xaa7;eip=0x000119; 	X(MOV(byte_1de86, al));	// 19783 mov     byte_1DE86, al ;~ 0AA7:0119
cs=0xaa7;eip=0x00011c; 	T(MOV(al, byte_1dcf8));	// 19784 mov     al, byte_1DCF8 ;~ 0AA7:011C
cs=0xaa7;eip=0x00011f; 	T(MOV(ah, al));	// 19785 mov     ah, al ;~ 0AA7:011F
cs=0xaa7;eip=0x000121; 	T(AND(al, 0x0F));	// 19786 and     al, 0Fh ;~ 0AA7:0121
cs=0xaa7;eip=0x000123; 	X(MOV(byte_1de82, al));	// 19787 mov     byte_1DE82, al ;~ 0AA7:0123
cs=0xaa7;eip=0x000126; 	T(SHR(ah, 4));	// 19788 shr     ah, 4 ;~ 0AA7:0126
cs=0xaa7;eip=0x000129; 	X(MOV(byte_1de83, ah));	// 19789 mov     byte_1DE83, ah ;~ 0AA7:0129
cs=0xaa7;eip=0x00012d; 	X(MOV(_videomempointer, 0x0B8000000));	// 19790 mov     _videomempointer, 0B8000000h ;~ 0AA7:012D
cs=0xaa7;eip=0x000136; 	T(MOV(ax, 0x3508));	// 19791 mov     ax, 3508h ;~ 0AA7:0136
cs=0xaa7;eip=0x000139; 	S(_INT(0x21));	// 19792 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 0AA7:0139
cs=0xaa7;eip=0x00013b; 	X(MOV(_oint8off_1de14, bx));	// 19795 mov     _oint8off_1DE14, bx ;~ 0AA7:013B
cs=0xaa7;eip=0x00013f; 	X(MOV(_oint8seg_1de16, es));	// 19796 mov     _oint8seg_1DE16, es ;~ 0AA7:013F
cs=0xaa7;eip=0x000143; 	T(MOV(ax, 0x3509));	// 19797 mov     ax, 3509h ;~ 0AA7:0143
cs=0xaa7;eip=0x000146; 	S(_INT(0x21));	// 19798 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 0AA7:0146
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x000148; 	X(MOV(*(dw*)(((db*)&_oint9_1c1a4)), bx));	// 19801 mov     word ptr cs:_oint9_1C1A4, bx ;~ 0AA7:0148
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x00014d; 	X(MOV(*(dw*)(((db*)&_oint9_1c1a4)+2), es));	// 19802 mov     word ptr cs:_oint9_1C1A4+2, es ;~ 0AA7:014D
cs=0xaa7;eip=0x000152; 	T(MOV(ax, 0x3524));	// 19803 mov     ax, 3524h ;~ 0AA7:0152
cs=0xaa7;eip=0x000155; 	S(_INT(0x21));	// 19804 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 0AA7:0155
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x000157; 	X(MOV(*(dw*)(((db*)&_oint24_1c1ac)), bx));	// 19807 mov     word ptr cs:_oint24_1C1AC, bx ;~ 0AA7:0157
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x00015c; 	X(MOV(*(dw*)(((db*)&_oint24_1c1ac)+2), es));	// 19808 mov     word ptr cs:_oint24_1C1AC+2, es ;~ 0AA7:015C
cs=0xaa7;eip=0x000161; 	T(MOV(ax, 0x352F));	// 19809 mov     ax, 352Fh ;~ 0AA7:0161
cs=0xaa7;eip=0x000164; 	S(_INT(0x21));	// 19810 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 0AA7:0164
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x000166; 	X(MOV(*(dw*)(((db*)&_oint2f_1c1b4)), bx));	// 19813 mov     word ptr cs:_oint2f_1C1B4, bx ;~ 0AA7:0166
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x00016b; 	X(MOV(*(dw*)(((db*)&_oint2f_1c1b4)+2), es));	// 19814 mov     word ptr cs:_oint2f_1C1B4+2, es ;~ 0AA7:016B
cs=0xaa7;eip=0x000170; 	X(PUSH(ds));	// 19815 push    ds ;~ 0AA7:0170
cs=0xaa7;eip=0x000171; 	T(MOV(ax, cs));	// 19816 mov     ax, cs ;~ 0AA7:0171
cs=0xaa7;eip=0x000173; 	T(MOV(ds, ax));	// 19817 mov     ds, ax ;~ 0AA7:0173
cs=0xaa7;eip=0x000175; 	T(MOV(dx, m2c::k_int9_keyb));	// 19819 mov     dx, offset _int9_keyb ;~ 0AA7:0175
cs=0xaa7;eip=0x000178; 	T(MOV(ax, 0x2509));	// 19820 mov     ax, 2509h ;~ 0AA7:0178
cs=0xaa7;eip=0x00017b; 	S(_INT(0x21));	// 19821 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 0AA7:017B
cs=0xaa7;eip=0x00017d; 	T(MOV(dx, m2c::k_int24));	// 19824 mov     dx, offset _int24 ;~ 0AA7:017D
cs=0xaa7;eip=0x000180; 	T(MOV(ax, 0x2524));	// 19825 mov     ax, 2524h ;~ 0AA7:0180
cs=0xaa7;eip=0x000183; 	S(_INT(0x21));	// 19826 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 0AA7:0183
cs=0xaa7;eip=0x000185; 	T(MOV(dx, m2c::k_int2f_checkmyself));	// 19829 mov     dx, offset _int2f_checkmyself ;~ 0AA7:0185
cs=0xaa7;eip=0x000188; 	T(MOV(ax, 0x252F));	// 19830 mov     ax, 252Fh ;~ 0AA7:0188
cs=0xaa7;eip=0x00018b; 	S(_INT(0x21));	// 19831 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 0AA7:018B
cs=0xaa7;eip=0x00018d; 	X(POP(ds));	// 19834 pop     ds ;~ 0AA7:018D
cs=0xaa7;eip=0x00018e; 	T(MOV(ah, 0x34));	// 19836 mov     ah, 34h ;~ 0AA7:018E
cs=0xaa7;eip=0x000190; 	S(_INT(0x21));	// 19837 int     21h             ; DOS - 2+ internal - RETURN CritSectFlag (InDOS) POINTER ;~ 0AA7:0190
cs=0xaa7;eip=0x000192; 	X(MOV(_critsectpoint_off, bx));	// 19838 mov     _critsectpoint_off, bx ;~ 0AA7:0192
cs=0xaa7;eip=0x000196; 	X(MOV(_critsectpoint_seg, es));	// 19839 mov     _critsectpoint_seg, es ;~ 0AA7:0196
cs=0xaa7;eip=0x00019a; 	X(PUSH(ds));	// 19840 push    ds ;~ 0AA7:019A
cs=0xaa7;eip=0x00019b; 	T(MOV(ax, 0x5D06));	// 19841 mov     ax, 5D06h ;~ 0AA7:019B
cs=0xaa7;eip=0x00019e; 	S(_INT(0x21));	// 19842 int     21h             ; DOS - 3.1+ internal - GET ADDRESS OF DOS SWAPPABLE DATA AREA ;~ 0AA7:019E
cs=0xaa7;eip=0x0001a0; 	T(MOV(ax, ds));	// 19844 mov     ax, ds ;~ 0AA7:01A0
cs=0xaa7;eip=0x0001a2; 	X(POP(ds));	// 19845 pop     ds ;~ 0AA7:01A2
cs=0xaa7;eip=0x0001a3; 	X(MOV(_swapdata_off, si));	// 19846 mov     _swapdata_off, si ;~ 0AA7:01A3
cs=0xaa7;eip=0x0001a7; 	X(MOV(_swapdata_seg, ax));	// 19847 mov     _swapdata_seg, ax ;~ 0AA7:01A7
cs=0xaa7;eip=0x0001aa; 	X(MOV(byte_1de70, 0x0FF));	// 19848 mov     byte_1DE70, 0FFh ;~ 0AA7:01AA
cs=0xaa7;eip=0x0001af; 	J(CALL(_mouse_init,0));	// 19849 call    _mouse_init ;~ 0AA7:01AF
cs=0xaa7;eip=0x0001b2; 	T(MOV(bl, *(db*)(((db*)&_configword)+1)));	// 19850 mov     bl, byte ptr _configword+1 ;~ 0AA7:01B2
cs=0xaa7;eip=0x0001b6; 	T(SHR(bl, 1));	// 19851 shr     bl, 1 ;~ 0AA7:01B6
cs=0xaa7;eip=0x0001b8; 	T(AND(bx, 7));	// 19852 and     bx, 7 ;~ 0AA7:01B8
cs=0xaa7;eip=0x0001bb; 	T(CMP(bl, 5));	// 19853 cmp     bl, 5 ;~ 0AA7:01BB
cs=0xaa7;eip=0x0001be; 	J(JBE(loc_19212));	// 19854 jbe     short loc_19212 ;~ 0AA7:01BE
cs=0xaa7;eip=0x0001c0; 	T(XOR(bl, bl));	// 19855 xor     bl, bl ;~ 0AA7:01C0
loc_19212:
	// 5572 
cs=0xaa7;eip=0x0001c2; 	T(SHL(bx, 1));	// 19858 shl     bx, 1 ;~ 0AA7:01C2
cs=0xaa7;eip=0x0001c4; 	T(MOV(ax, *(dw*)(((db*)&off_1ca8e)+bx)));	// 19859 mov     ax, off_1CA8E[bx] ;~ 0AA7:01C4
cs=0xaa7;eip=0x0001c8; 	X(MOV(off_1de3c, ax));	// 19860 mov     off_1DE3C, ax ;~ 0AA7:01C8
cs=0xaa7;eip=0x0001cb; 	T(CMP(*(_buffer_1db6c), 0x40));	// 19861 cmp     _buffer_1DB6C, 40h ; '@' ;~ 0AA7:01CB
cs=0xaa7;eip=0x0001d0; 	J(JZ(loc_19d94));	// 19862 jz      loc_19D94 ;~ 0AA7:01D0
cs=0xaa7;eip=0x0001d4; 	T(CMP(*(_buffer_1db6c), 0x20));	// 19863 cmp     _buffer_1DB6C, 20h ; ' ' ;~ 0AA7:01D4
cs=0xaa7;eip=0x0001d9; 	J(JBE(loc_192ca));	// 19864 jbe     loc_192CA ;~ 0AA7:01D9
cs=0xaa7;eip=0x0001dd; 	X(MOV(word_1de4e, 2));	// 19865 mov     word_1DE4E, 2 ;~ 0AA7:01DD
cs=0xaa7;eip=0x0001e3; 	J(CALL(_find_mods,0));	// 19866 call    _find_mods ;~ 0AA7:01E3
cs=0xaa7;eip=0x0001e6; 	J(JC(loc_19256));	// 19867 jb      short loc_19256 ;~ 0AA7:01E6
cs=0xaa7;eip=0x0001e8; 	J(CALL(_callsubx,0));	// 19868 call    _callsubx ;~ 0AA7:01E8
cs=0xaa7;eip=0x0001eb; 	J(JC(loc_19256));	// 19869 jb      short loc_19256 ;~ 0AA7:01EB
cs=0xaa7;eip=0x0001ed; 	J(CALL(_readallmoules,0));	// 19870 call    _readallmoules ;~ 0AA7:01ED
cs=0xaa7;eip=0x0001f0; 	J(JC(loc_19250));	// 19871 jb      short loc_19250 ;~ 0AA7:01F0
cs=0xaa7;eip=0x0001f2; 	T(CMP(*(db*)(((db*)&word_1de50)), 0x1C));	// 19872 cmp     byte ptr word_1DE50, 1Ch ;~ 0AA7:01F2
cs=0xaa7;eip=0x0001f7; 	J(JZ(loc_192e0));	// 19873 jz      loc_192E0 ;~ 0AA7:01F7
cs=0xaa7;eip=0x0001fb; 	X(MOV(byte_1de7e, 0));	// 19874 mov     byte_1DE7E, 0 ;~ 0AA7:01FB
loc_19250:
	// 5573 
cs=0xaa7;eip=0x000200; 	T(CLI);	// 19878 cli ;~ 0AA7:0200
cs=0xaa7;eip=0x000201; 	J(CALLF(_deinit_125b9,0));	// 19879 call    _deinit_125B9 ;~ 0AA7:0201
loc_19256:
	// 5574 
cs=0xaa7;eip=0x000206; 	J(CALL(_mouse_deinit,0));	// 19883 call    _mouse_deinit ;~ 0AA7:0206
cs=0xaa7;eip=0x000209; 	X(PUSH(ds));	// 19884 push    ds ;~ 0AA7:0209
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x00020a; 	T(LDS(dx, *(dd*)(((db*)&_oint2f_1c1b4))));	// 19885 lds     dx, cs:_oint2f_1C1B4 ;~ 0AA7:020A
cs=0xaa7;eip=0x00020f; 	T(MOV(ax, 0x252F));	// 19886 mov     ax, 252Fh ;~ 0AA7:020F
cs=0xaa7;eip=0x000212; 	S(_INT(0x21));	// 19887 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 0AA7:0212
cs=0xaa7;eip=0x000214; 	X(POP(ds));	// 19890 pop     ds ;~ 0AA7:0214
cs=0xaa7;eip=0x000215; 	X(PUSH(ds));	// 19891 push    ds ;~ 0AA7:0215
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x000216; 	T(LDS(dx, *(dd*)(((db*)&_oint24_1c1ac))));	// 19892 lds     dx, cs:_oint24_1C1AC ;~ 0AA7:0216
cs=0xaa7;eip=0x00021b; 	T(MOV(ax, 0x2524));	// 19893 mov     ax, 2524h ;~ 0AA7:021B
cs=0xaa7;eip=0x00021e; 	S(_INT(0x21));	// 19894 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 0AA7:021E
cs=0xaa7;eip=0x000220; 	X(POP(ds));	// 19897 pop     ds ;~ 0AA7:0220
cs=0xaa7;eip=0x000221; 	X(PUSH(ds));	// 19898 push    ds ;~ 0AA7:0221
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x000222; 	T(LDS(dx, *(dd*)(((db*)&_oint9_1c1a4))));	// 19899 lds     dx, cs:_oint9_1C1A4 ;~ 0AA7:0222
cs=0xaa7;eip=0x000227; 	T(MOV(ax, 0x2509));	// 19900 mov     ax, 2509h ;~ 0AA7:0227
cs=0xaa7;eip=0x00022a; 	S(_INT(0x21));	// 19901 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 0AA7:022A
cs=0xaa7;eip=0x00022c; 	X(POP(ds));	// 19904 pop     ds ;~ 0AA7:022C
cs=0xaa7;eip=0x00022d; 	T(MOV(ax, 3));	// 19905 mov     ax, 3 ;~ 0AA7:022D
cs=0xaa7;eip=0x000230; 	S(_INT(0x10));	// 19906 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 0AA7:0230
cs=0xaa7;eip=0x000232; 	J(CALL(_txt_enableblink,0));	// 19908 call    _txt_enableblink ;~ 0AA7:0232
cs=0xaa7;eip=0x000235; 	T(MOV(cx, 0));	// 19909 mov     cx, 0 ;~ 0AA7:0235
cs=0xaa7;eip=0x000238; 	T(MOV(dx, 0x124F));	// 19910 mov     dx, 124Fh ;~ 0AA7:0238
cs=0xaa7;eip=0x00023b; 	T(MOV(bl, 0x78));	// 19911 mov     bl, 78h ; 'x' ;~ 0AA7:023B
cs=0xaa7;eip=0x00023d; 	T(MOV(ax, 0x7F03));	// 19912 mov     ax, 7F03h ;~ 0AA7:023D
cs=0xaa7;eip=0x000240; 	J(CALL(_draw_frame,0));	// 19913 call    _draw_frame ;~ 0AA7:0240
cs=0xaa7;eip=0x000243; 	J(CALL(_txt_draw_top_title,0));	// 19914 call    _txt_draw_top_title ;~ 0AA7:0243
cs=0xaa7;eip=0x000246; 	T(MOV(si, offset(dseg,_hopeyoulike)));	// 19915 mov     si, offset _hopeyoulike ; str ;~ 0AA7:0246
cs=0xaa7;eip=0x000249; 	T(LES(di, _videomempointer));	// 19916 les     di, _videomempointer ;~ 0AA7:0249
cs=0xaa7;eip=0x00024d; 	J(CALL(_write_scr,0));	// 19918 call    _write_scr ;~ 0AA7:024D
cs=0xaa7;eip=0x000250; 	T(MOV(dx, 0x1300));	// 19919 mov     dx, 1300h ;~ 0AA7:0250
cs=0xaa7;eip=0x000253; 	T(XOR(bh, bh));	// 19920 xor     bh, bh ;~ 0AA7:0253
cs=0xaa7;eip=0x000255; 	T(MOV(ah, 2));	// 19921 mov     ah, 2 ;~ 0AA7:0255
cs=0xaa7;eip=0x000257; 	S(_INT(0x10));	// 19922 int     10h             ; - VIDEO - SET CURSOR POSITION ;~ 0AA7:0257
cs=0xaa7;eip=0x000259; 	T(CMP(byte_1de7e, 0));	// 19925 cmp     byte_1DE7E, 0 ;~ 0AA7:0259
cs=0xaa7;eip=0x00025e; 	J(JZ(loc_192c3));	// 19926 jz      short loc_192C3 ;~ 0AA7:025E
cs=0xaa7;eip=0x000260; 	T(MOV(dx, 0x1400));	// 19927 mov     dx, 1400h ;~ 0AA7:0260
cs=0xaa7;eip=0x000263; 	T(XOR(bh, bh));	// 19928 xor     bh, bh ;~ 0AA7:0263
cs=0xaa7;eip=0x000265; 	T(MOV(ah, 2));	// 19929 mov     ah, 2 ;~ 0AA7:0265
cs=0xaa7;eip=0x000267; 	S(_INT(0x10));	// 19930 int     10h             ; - VIDEO - SET CURSOR POSITION ;~ 0AA7:0267
loc_192b9:
	// 5575 
cs=0xaa7;eip=0x000269; 	X(PUSH(ds));	// 19935 push    ds ;~ 0AA7:0269
cs=0xaa7;eip=0x00026a; 	T(LDS(dx, _messagepointer));	// 19936 lds     dx, _messagepointer ;~ 0AA7:026A
cs=0xaa7;eip=0x00026e; 	T(MOV(ah, 9));	// 19937 mov     ah, 9 ;~ 0AA7:026E
cs=0xaa7;eip=0x000270; 	S(_INT(0x21));	// 19938 int     21h             ; DOS - PRINT STRING ;~ 0AA7:0270
cs=0xaa7;eip=0x000272; 	X(POP(ds));	// 19940 pop     ds ;~ 0AA7:0272
loc_192c3:
	// 5576 
cs=0xaa7;eip=0x000273; 	T(MOV(ah, 0x4C));	// 19943 mov     ah, 4Ch ; 'L' ;~ 0AA7:0273
cs=0xaa7;eip=0x000275; 	T(MOV(al, byte_1de7e));	// 19944 mov     al, byte_1DE7E ;~ 0AA7:0275
cs=0xaa7;eip=0x000278; 	S(_INT(0x21));	// 19945 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 0AA7:0278
exit(byte_1de7e);
loc_192ca:
	// 5577 
cs=0xaa7;eip=0x00027a; 	X(MOV(byte_1de7e, 5));	// 19950 mov     byte_1DE7E, 5 ;~ 0AA7:027A
cs=0xaa7;eip=0x00027f; 	X(MOV(*(dw*)(((db*)&_messagepointer)), offset(dseg,_anotenoughmemor)));	// 19951 mov     word ptr _messagepointer, offset _aNotEnoughMemor ; "Not enough memory.\r\n$" ;~ 0AA7:027F
cs=0xaa7;eip=0x000285; 	X(MOV(*(dw*)(((db*)&_messagepointer)+2), ds));	// 19952 mov     word ptr _messagepointer+2, ds ;~ 0AA7:0285
cs=0xaa7;eip=0x000289; 	J(CALL(_callsubx,0));	// 19953 call    _callsubx ;~ 0AA7:0289
cs=0xaa7;eip=0x00028c; 	J(JC(loc_19256));	// 19954 jb      loc_19256 ;~ 0AA7:028C
loc_192e0:
	// 5578 
cs=0xaa7;eip=0x000290; 	T(MOV(si, offset(dseg,_mystr)));	// 19957 mov     si, offset _mystr ; str ;~ 0AA7:0290
cs=0xaa7;eip=0x000293; 	J(CALL(_dosgetcurdir,0));	// 19958 call    _dosgetcurdir ;~ 0AA7:0293
cs=0xaa7;eip=0x000296; 	X(MOV(word_1de62, 0));	// 19959 mov     word_1DE62, 0 ;~ 0AA7:0296
cs=0xaa7;eip=0x00029c; 	X(MOV(word_1de5e, 0));	// 19960 mov     word_1DE5E, 0 ;~ 0AA7:029C
cs=0xaa7;eip=0x0002a2; 	X(MOV(byte_1de7f, 1));	// 19961 mov     byte_1DE7F, 1 ;~ 0AA7:02A2
loc_192f7:
	// 5579 
cs=0xaa7;eip=0x0002a7; 	J(CALL(_setvideomode,0));	// 19965 call    _setvideomode ;~ 0AA7:02A7
cs=0xaa7;eip=0x0002aa; 	X(MOV(byte_1de70, 1));	// 19966 mov     byte_1DE70, 1 ;~ 0AA7:02AA
loc_192ff:
	// 5580 
cs=0xaa7;eip=0x0002af; 	T(MOV(cx, 0));	// 19970 mov     cx, 0 ;~ 0AA7:02AF
cs=0xaa7;eip=0x0002b2; 	T(MOV(dx, 0x1B4F));	// 19971 mov     dx, 1B4Fh ;~ 0AA7:02B2
cs=0xaa7;eip=0x0002b5; 	T(MOV(bl, 0x78));	// 19972 mov     bl, 78h ; 'x' ;~ 0AA7:02B5
cs=0xaa7;eip=0x0002b7; 	T(MOV(ax, 0x7F03));	// 19973 mov     ax, 7F03h ;~ 0AA7:02B7
cs=0xaa7;eip=0x0002ba; 	J(CALL(_draw_frame,0));	// 19974 call    _draw_frame ;~ 0AA7:02BA
cs=0xaa7;eip=0x0002bd; 	J(CALL(_txt_draw_top_title,0));	// 19975 call    _txt_draw_top_title ;~ 0AA7:02BD
cs=0xaa7;eip=0x0002c0; 	T(MOV(ax, ds));	// 19976 mov     ax, ds ;~ 0AA7:02C0
cs=0xaa7;eip=0x0002c2; 	T(MOV(es, ax));	// 19977 mov     es, ax ;~ 0AA7:02C2
cs=0xaa7;eip=0x0002c4; 	T(MOV(di, offset(dseg,_buffer_1)));	// 19979 mov     di, offset _buffer_1 ; 2800h ;~ 0AA7:02C4
cs=0xaa7;eip=0x0002c7; 	J(CALLF(sub_12d05,0));	// 19980 call    sub_12D05 ;~ 0AA7:02C7
cs=0xaa7;eip=0x0002cc; 	X(MOV(*(raddr(es,di)), 0));	// 19981 mov     byte ptr es:[di], 0 ;~ 0AA7:02CC
cs=0xaa7;eip=0x0002d0; 	T(SUB(di, 0x16EF));	// 19982 sub     di, 16EFh ;~ 0AA7:02D0
cs=0xaa7;eip=0x0002d4; 	T(AND(di, 0x0FFFE));	// 19983 and     di, 0FFFEh ;~ 0AA7:02D4
cs=0xaa7;eip=0x0002d7; 	T(MOV(ax, 0x50));	// 19984 mov     ax, 50h ; 'P' ;~ 0AA7:02D7
cs=0xaa7;eip=0x0002da; 	T(SUB(ax, di));	// 19985 sub     ax, di ;~ 0AA7:02DA
cs=0xaa7;eip=0x0002dc; 	T(ADD(ax, 0x320));	// 19986 add     ax, 320h ;~ 0AA7:02DC
cs=0xaa7;eip=0x0002df; 	T(LES(di, _videomempointer));	// 19987 les     di, _videomempointer ;~ 0AA7:02DF
cs=0xaa7;eip=0x0002e3; 	T(ADD(di, ax));	// 19989 add     di, ax          ; videoptr ;~ 0AA7:02E3
cs=0xaa7;eip=0x0002e5; 	T(MOV(si, offset(dseg,_buffer_1)));	// 19990 mov     si, offset _buffer_1 ; str ;~ 0AA7:02E5
cs=0xaa7;eip=0x0002e8; 	T(MOV(ah, 0x78));	// 19991 mov     ah, 78h ; 'x'   ; color ;~ 0AA7:02E8
cs=0xaa7;eip=0x0002ea; 	J(CALL(_put_message,0));	// 19992 call    _put_message ;~ 0AA7:02EA
cs=0xaa7;eip=0x0002ed; 	T(MOV(cx, 0x604));	// 19993 mov     cx, 604h ;~ 0AA7:02ED
cs=0xaa7;eip=0x0002f0; 	T(MOV(dx, 0x84B));	// 19994 mov     dx, 84Bh ;~ 0AA7:02F0
cs=0xaa7;eip=0x0002f3; 	T(MOV(bl, 0x7F));	// 19995 mov     bl, 7Fh ;~ 0AA7:02F3
cs=0xaa7;eip=0x0002f5; 	T(MOV(ax, 0x7803));	// 19996 mov     ax, 7803h ;~ 0AA7:02F5
cs=0xaa7;eip=0x0002f8; 	J(CALL(_draw_frame,0));	// 19997 call    _draw_frame ;~ 0AA7:02F8
cs=0xaa7;eip=0x0002fb; 	T(MOV(ah, 0x19));	// 19998 mov     ah, 19h ;~ 0AA7:02FB
cs=0xaa7;eip=0x0002fd; 	S(_INT(0x21));	// 19999 int     21h             ; DOS - GET DEFAULT DISK NUMBER ;~ 0AA7:02FD
cs=0xaa7;eip=0x0002ff; 	T(MOV(edx, 0x5C3A41));	// 20000 mov     edx, 5C3A41h    ; "A:\" ;~ 0AA7:02FF
cs=0xaa7;eip=0x000305; 	T(ADD(dl, al));	// 20001 add     dl, al ;~ 0AA7:0305
cs=0xaa7;eip=0x000307; 	X(MOV(_buffer_1dc6c, edx));	// 20002 mov     _buffer_1DC6C, edx ;~ 0AA7:0307
cs=0xaa7;eip=0x00030c; 	T(MOV(si, offset(dseg,_buffer_1dc6c)+3));	// 20003 mov     si, (offset _buffer_1DC6C+3) ;~ 0AA7:030C
cs=0xaa7;eip=0x00030f; 	T(XOR(dl, dl));	// 20004 xor     dl, dl ;~ 0AA7:030F
cs=0xaa7;eip=0x000311; 	T(MOV(ah, 0x47));	// 20005 mov     ah, 47h ;~ 0AA7:0311
cs=0xaa7;eip=0x000313; 	S(_INT(0x21));	// 20006 int     21h             ; DOS - 2+ - GET CURRENT DIRECTORY ;~ 0AA7:0313
cs=0xaa7;eip=0x000315; 	T(MOV(si, offset(dseg,_buffer_1dc6c)));	// 20009 mov     si, offset _buffer_1DC6C ;~ 0AA7:0315
cs=0xaa7;eip=0x000318; 	J(CALL(_mystrlen,0));	// 20010 call    _mystrlen ;~ 0AA7:0318
cs=0xaa7;eip=0x00031b; 	T(SHR(ax, 1));	// 20011 shr     ax, 1 ;~ 0AA7:031B
cs=0xaa7;eip=0x00031d; 	T(NEG(ax));	// 20012 neg     ax ;~ 0AA7:031D
cs=0xaa7;eip=0x00031f; 	T(ADD(ax, 0x257));	// 20013 add     ax, 257h ;~ 0AA7:031F
cs=0xaa7;eip=0x000322; 	T(SHL(ax, 1));	// 20014 shl     ax, 1 ;~ 0AA7:0322
cs=0xaa7;eip=0x000324; 	T(LES(di, _videomempointer));	// 20015 les     di, _videomempointer ;~ 0AA7:0324
cs=0xaa7;eip=0x000328; 	T(ADD(di, ax));	// 20016 add     di, ax          ; videoptr ;~ 0AA7:0328
cs=0xaa7;eip=0x00032a; 	T(MOV(si, offset(dseg,_buffer_1dc6c)));	// 20017 mov     si, offset _buffer_1DC6C ; str ;~ 0AA7:032A
cs=0xaa7;eip=0x00032d; 	T(MOV(ah, 0x7B));	// 20018 mov     ah, 7Bh ; '{'   ; color ;~ 0AA7:032D
cs=0xaa7;eip=0x00032f; 	J(CALL(_put_message,0));	// 20019 call    _put_message ;~ 0AA7:032F
cs=0xaa7;eip=0x000332; 	T(CMP(byte_1de7f, 1));	// 20020 cmp     byte_1DE7F, 1 ;~ 0AA7:0332
cs=0xaa7;eip=0x000337; 	J(JNZ(loc_19395));	// 20021 jnz     short loc_19395 ;~ 0AA7:0337
cs=0xaa7;eip=0x000339; 	T(MOV(si, offset(dseg,_msg)));	// 20022 mov     si, offset _msg ; "Searching directory for modules  " ;~ 0AA7:0339
cs=0xaa7;eip=0x00033c; 	T(MOV(ax, 0x7E0D));	// 20023 mov     ax, 7E0Dh ;~ 0AA7:033C
cs=0xaa7;eip=0x00033f; 	J(CALL(_message_1be77,0));	// 20024 call    _message_1BE77 ;~ 0AA7:033F
cs=0xaa7;eip=0x000342; 	J(CALL(_modules_search,0));	// 20025 call    _modules_search ;~ 0AA7:0342
loc_19395:
	// 5581 
cs=0xaa7;eip=0x000345; 	X(MOV(byte_1de7e, 0));	// 20028 mov     byte_1DE7E, 0 ;~ 0AA7:0345
cs=0xaa7;eip=0x00034a; 	X(MOV(word_1de60, 0x0FFFF));	// 20029 mov     word_1DE60, 0FFFFh ;~ 0AA7:034A
cs=0xaa7;eip=0x000350; 	T(MOV(cx, 0x906));	// 20030 mov     cx, 906h ;~ 0AA7:0350
cs=0xaa7;eip=0x000353; 	T(MOV(dx, 0x1949));	// 20031 mov     dx, 1949h ;~ 0AA7:0353
cs=0xaa7;eip=0x000356; 	T(MOV(bl, 0x7F));	// 20032 mov     bl, 7Fh ;~ 0AA7:0356
cs=0xaa7;eip=0x000358; 	T(MOV(ax, 0x7803));	// 20033 mov     ax, 7803h ;~ 0AA7:0358
cs=0xaa7;eip=0x00035b; 	J(CALL(_draw_frame,0));	// 20034 call    _draw_frame ;~ 0AA7:035B
loc_193ae:
	// 5582 
cs=0xaa7;eip=0x00035e; 	J(CALL(_filelist_198b8,0));	// 20038 call    _filelist_198B8 ;~ 0AA7:035E
cs=0xaa7;eip=0x000361; 	T(MOV(ax, word_1de62));	// 20039 mov     ax, word_1DE62 ;~ 0AA7:0361
cs=0xaa7;eip=0x000364; 	T(MOV(bl, 0x10));	// 20040 mov     bl, 10h ;~ 0AA7:0364
cs=0xaa7;eip=0x000366; 	J(CALL(_recolortxt,0));	// 20041 call    _recolortxt ;~ 0AA7:0366
cs=0xaa7;eip=0x000369; 	J(CALL(_useless_197f2,0));	// 20042 call    _useless_197F2 ;~ 0AA7:0369
loc_193bc:
	// 5583 
cs=0xaa7;eip=0x00036c; 	T(MOV(al, byte_1de7c));	// 20046 mov     al, byte_1DE7C ;~ 0AA7:036C
cs=0xaa7;eip=0x00036f; 	T(XOR(al, 1));	// 20047 xor     al, 1 ;~ 0AA7:036F
cs=0xaa7;eip=0x000371; 	X(MOV(byte_1de7d, al));	// 20048 mov     byte_1DE7D, al ;~ 0AA7:0371
cs=0xaa7;eip=0x000374; 	J(CALL(_mouse_show,0));	// 20049 call    _mouse_show ;~ 0AA7:0374
loc_193c7:
	// 5584 
cs=0xaa7;eip=0x000377; 	T(TEST(byte_1de90, 2));	// 20052 test    byte_1DE90, 2 ;~ 0AA7:0377
cs=0xaa7;eip=0x00037c; 	J(JNZ(loc_19848));	// 20053 jnz     loc_19848 ;~ 0AA7:037C
cs=0xaa7;eip=0x000380; 	T(TEST(byte_1de90, 1));	// 20054 test    byte_1DE90, 1 ;~ 0AA7:0380
cs=0xaa7;eip=0x000385; 	J(JNZ(loc_19827));	// 20055 jnz     loc_19827 ;~ 0AA7:0385
cs=0xaa7;eip=0x000389; 	T(MOV(al, byte_1de7c));	// 20056 mov     al, byte_1DE7C ;~ 0AA7:0389
cs=0xaa7;eip=0x00038c; 	T(CMP(al, byte_1de7d));	// 20057 cmp     al, byte_1DE7D ;~ 0AA7:038C
cs=0xaa7;eip=0x000390; 	J(JZ(loc_193ff));	// 20058 jz      short loc_193FF ; keyboard message loop here ;~ 0AA7:0390
cs=0xaa7;eip=0x000392; 	X(MOV(byte_1de7d, al));	// 20059 mov     byte_1DE7D, al ;~ 0AA7:0392
cs=0xaa7;eip=0x000395; 	T(LES(di, _videomempointer));	// 20060 les     di, _videomempointer ;~ 0AA7:0395
cs=0xaa7;eip=0x000399; 	T(ADD(di, 0x104A));	// 20061 add     di, 104Ah       ; videoptr ;~ 0AA7:0399
cs=0xaa7;eip=0x00039d; 	T(MOV(ah, 0x78));	// 20062 mov     ah, 78h ; 'x'   ; color ;~ 0AA7:039D
cs=0xaa7;eip=0x00039f; 	T(MOV(si, offset(dseg,_ahitbackspacetore)));	// 20063 mov     si, offset _aHitBackspaceToRe ; "Hit backspace to return to playmode, F-"... ;~ 0AA7:039F
cs=0xaa7;eip=0x0003a2; 	T(CMP(byte_1de7c, 0));	// 20064 cmp     byte_1DE7C, 0 ;~ 0AA7:03A2
cs=0xaa7;eip=0x0003a7; 	J(JZ(loc_193fc));	// 20065 jz      short loc_193FC ;~ 0AA7:03A7
cs=0xaa7;eip=0x0003a9; 	T(MOV(si, offset(dseg,_apressf1forhelpqu)));	// 20066 mov     si, offset _aPressF1ForHelpQu ; "                 Press F-1 for help, Qu"... ;~ 0AA7:03A9
loc_193fc:
	// 5585 
cs=0xaa7;eip=0x0003ac; 	J(CALL(_put_message,0));	// 20069 call    _put_message ;~ 0AA7:03AC
loc_193ff:
	// 5586 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0003af; 	T(MOV(ax, *(dw*)(((db*)&_key_code))));	// 20072 mov     ax, cs:_key_code ; keyboard message loop here ;~ 0AA7:03AF
cs=0xaa7;eip=0x0003b3; 	T(OR(ax, ax));	// 20073 or      ax, ax ;~ 0AA7:03B3
cs=0xaa7;eip=0x0003b5; 	J(JZ(loc_193c7));	// 20074 jz      short loc_193C7 ;~ 0AA7:03B5
cs=0xaa7;eip=0x0003b7; 	X(PUSH(ax));	// 20075 push    ax ;~ 0AA7:03B7
cs=0xaa7;eip=0x0003b8; 	J(CALL(_mouse_hide,0));	// 20076 call    _mouse_hide ;~ 0AA7:03B8
cs=0xaa7;eip=0x0003bb; 	X(POP(ax));	// 20077 pop     ax ;~ 0AA7:03BB
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0003bc; 	X(MOV(*(dw*)(((db*)&_key_code)), 0));	// 20078 mov     cs:_key_code, 0 ;~ 0AA7:03BC
cs=0xaa7;eip=0x0003c3; 	T(CMP(al, 1));	// 20079 cmp     al, 1 ;~ 0AA7:03C3
cs=0xaa7;eip=0x0003c5; 	J(JZ(loc_1964e));	// 20080 jz      loc_1964E ;~ 0AA7:03C5
cs=0xaa7;eip=0x0003c9; 	T(CMP(al, 0x48));	// 20081 cmp     al, 48h ; 'H' ;~ 0AA7:03C9
cs=0xaa7;eip=0x0003cb; 	J(JZ(loc_1957f));	// 20082 jz      loc_1957F ;~ 0AA7:03CB
cs=0xaa7;eip=0x0003cf; 	T(CMP(al, 0x50));	// 20083 cmp     al, 50h ; 'P' ;~ 0AA7:03CF
cs=0xaa7;eip=0x0003d1; 	J(JZ(loc_1953c));	// 20084 jz      loc_1953C ;~ 0AA7:03D1
cs=0xaa7;eip=0x0003d5; 	T(CMP(al, 0x47));	// 20085 cmp     al, 47h ; 'G' ;~ 0AA7:03D5
cs=0xaa7;eip=0x0003d7; 	J(JZ(loc_195a7));	// 20086 jz      loc_195A7 ;~ 0AA7:03D7
cs=0xaa7;eip=0x0003db; 	T(CMP(al, 0x4F));	// 20087 cmp     al, 4Fh ; 'O' ;~ 0AA7:03DB
cs=0xaa7;eip=0x0003dd; 	J(JZ(loc_195be));	// 20088 jz      loc_195BE ;~ 0AA7:03DD
cs=0xaa7;eip=0x0003e1; 	T(CMP(al, 0x49));	// 20089 cmp     al, 49h ; 'I' ;~ 0AA7:03E1
cs=0xaa7;eip=0x0003e3; 	J(JZ(loc_195ea));	// 20090 jz      loc_195EA ;~ 0AA7:03E3
cs=0xaa7;eip=0x0003e7; 	T(CMP(al, 0x51));	// 20091 cmp     al, 51h ; 'Q' ;~ 0AA7:03E7
cs=0xaa7;eip=0x0003e9; 	J(JZ(loc_19610));	// 20092 jz      loc_19610 ;~ 0AA7:03E9
cs=0xaa7;eip=0x0003ed; 	T(CMP(al, 0x0E));	// 20093 cmp     al, 0Eh ;~ 0AA7:03ED
cs=0xaa7;eip=0x0003ef; 	J(JZ(loc_19762));	// 20094 jz      loc_19762 ;~ 0AA7:03EF
cs=0xaa7;eip=0x0003f3; 	T(CMP(al, 0x53));	// 20095 cmp     al, 53h ; 'S' ;~ 0AA7:03F3
cs=0xaa7;eip=0x0003f5; 	J(JZ(loc_19657));	// 20096 jz      loc_19657 ;~ 0AA7:03F5
cs=0xaa7;eip=0x0003f9; 	T(CMP(al, 0x3B));	// 20097 cmp     al, 3Bh ; ';' ;~ 0AA7:03F9
cs=0xaa7;eip=0x0003fb; 	J(JZ(loc_19788));	// 20098 jz      loc_19788 ;~ 0AA7:03FB
cs=0xaa7;eip=0x0003ff; 	T(CMP(al, 0x42));	// 20099 cmp     al, 42h ; 'B' ;~ 0AA7:03FF
cs=0xaa7;eip=0x000401; 	J(JZ(loc_197d6));	// 20100 jz      loc_197D6 ;~ 0AA7:0401
cs=0xaa7;eip=0x000405; 	T(CMP(al, 0x43));	// 20101 cmp     al, 43h ; 'C' ;~ 0AA7:0405
cs=0xaa7;eip=0x000407; 	J(JZ(loc_197e7));	// 20102 jz      loc_197E7 ;~ 0AA7:0407
cs=0xaa7;eip=0x00040b; 	T(CMP(al, 0x1C));	// 20103 cmp     al, 1Ch ;~ 0AA7:040B
cs=0xaa7;eip=0x00040d; 	J(JNZ(loc_193bc));	// 20104 jnz     loc_193BC ;~ 0AA7:040D
cs=0xaa7;eip=0x000411; 	T(MOV(ax, word_1de62));	// 20105 mov     ax, word_1DE62 ;~ 0AA7:0411
loc_19464:
	// 5587 
cs=0xaa7;eip=0x000414; 	T(ADD(ax, word_1de5e));	// 20108 add     ax, word_1DE5E ;~ 0AA7:0414
cs=0xaa7;eip=0x000418; 	T(MOV(dx, ax));	// 20109 mov     dx, ax ;~ 0AA7:0418
cs=0xaa7;eip=0x00041a; 	T(SHL(ax, 1));	// 20110 shl     ax, 1 ;~ 0AA7:041A
cs=0xaa7;eip=0x00041c; 	T(ADD(ax, dx));	// 20111 add     ax, dx ;~ 0AA7:041C
cs=0xaa7;eip=0x00041e; 	T(ADD(ax, word_1de52));	// 20112 add     ax, word_1DE52 ;~ 0AA7:041E
cs=0xaa7;eip=0x000422; 	T(MOV(fs, ax));	// 20113 mov     fs, ax ;~ 0AA7:0422
cs=0xaa7;eip=0x000424; 	T(MOV(si, 0x0C));	// 20114 mov     si, 0Ch ;~ 0AA7:0424
cs=0xaa7;eip=0x000427; 	T(MOV(ax, ds));	// 20115 mov     ax, ds ;~ 0AA7:0427
cs=0xaa7;eip=0x000429; 	T(MOV(es, ax));	// 20116 mov     es, ax ;~ 0AA7:0429
cs=0xaa7;eip=0x00042b; 	T(MOV(di, offset(dseg,_buffer_1db6c)));	// 20118 mov     di, offset _buffer_1DB6C ;~ 0AA7:042B
cs=0xaa7;eip=0x00042e; 	T(MOV(dx, di));	// 20119 mov     dx, di ;~ 0AA7:042E
cs=0xaa7;eip=0x000430; 	T(CLD);	// 20120 cld ;~ 0AA7:0430
cs=0xaa7;eip=0x000431; 	X(MOVS(*(dd*)(raddr(es,di)), *(dd*)(raddr(fs,si)), di, si, 4));	// 20121 movs    dword ptr es:[di], dword ptr fs:[si] ;~ 0AA7:0431
cs=0xaa7;eip=0x000434; 	X(MOVS(*(dd*)(raddr(es,di)), *(dd*)(raddr(fs,si)), di, si, 4));	// 20122 movs    dword ptr es:[di], dword ptr fs:[si] ;~ 0AA7:0434
cs=0xaa7;eip=0x000437; 	X(MOVS(*(dd*)(raddr(es,di)), *(dd*)(raddr(fs,si)), di, si, 4));	// 20123 movs    dword ptr es:[di], dword ptr fs:[si] ;~ 0AA7:0437
cs=0xaa7;eip=0x00043a; 	X(MOV(*(raddr(ds,di)), 0));	// 20124 mov     byte ptr [di], 0 ;~ 0AA7:043A
cs=0xaa7;eip=0x00043d; 	T(CMP(*(raddr(fs,2)), 0));	// 20125 cmp     byte ptr fs:2, 0 ;~ 0AA7:043D
cs=0xaa7;eip=0x000443; 	J(JZ(loc_194eb));	// 20126 jz      short loc_194EB ;~ 0AA7:0443
cs=0xaa7;eip=0x000445; 	T(CMP(*(raddr(fs,2)), 1));	// 20127 cmp     byte ptr fs:2, 1 ;~ 0AA7:0445
cs=0xaa7;eip=0x00044b; 	J(JZ(loc_19506));	// 20128 jz      short loc_19506 ;~ 0AA7:044B
cs=0xaa7;eip=0x00044d; 	X(PUSH(dx));	// 20129 push    dx ;~ 0AA7:044D
cs=0xaa7;eip=0x00044e; 	T(MOV(cx, 0x501));	// 20130 mov     cx, 501h ;~ 0AA7:044E
cs=0xaa7;eip=0x000451; 	T(MOV(dx, 0x1A4E));	// 20131 mov     dx, 1A4Eh ;~ 0AA7:0451
cs=0xaa7;eip=0x000454; 	T(MOV(bl, 0x7F));	// 20132 mov     bl, 7Fh ;~ 0AA7:0454
cs=0xaa7;eip=0x000456; 	T(MOV(ax, 0x7800));	// 20133 mov     ax, 7800h ;~ 0AA7:0456
cs=0xaa7;eip=0x000459; 	J(CALL(_draw_frame,0));	// 20134 call    _draw_frame ;~ 0AA7:0459
cs=0xaa7;eip=0x00045c; 	T(MOV(si, offset(dseg,_aloadingmodule)));	// 20135 mov     si, offset _aLoadingModule ; _msg ;~ 0AA7:045C
cs=0xaa7;eip=0x00045f; 	T(MOV(ax, 0x7E0D));	// 20136 mov     ax, 7E0Dh ;~ 0AA7:045F
cs=0xaa7;eip=0x000462; 	J(CALL(_message_1be77,0));	// 20137 call    _message_1BE77 ;~ 0AA7:0462
cs=0xaa7;eip=0x000465; 	X(POP(dx));	// 20138 pop     dx ;~ 0AA7:0465
cs=0xaa7;eip=0x000466; 	J(CALL(_read_module,0));	// 20139 call    _read_module ;~ 0AA7:0466
cs=0xaa7;eip=0x000469; 	J(JNC(loc_194e3));	// 20140 jnb     short loc_194E3 ;~ 0AA7:0469
cs=0xaa7;eip=0x00046b; 	T(MOV(si, offset(dseg,_anotenoughmemo_0)));	// 20141 mov     si, offset _aNotEnoughMemo_0 ; "Not enough memory available to load all"... ;~ 0AA7:046B
cs=0xaa7;eip=0x00046e; 	T(CMP(ax, 0x0FFFE));	// 20142 cmp     ax, 0FFFEh ;~ 0AA7:046E
cs=0xaa7;eip=0x000471; 	J(JZ(loc_194ce));	// 20143 jz      short loc_194CE ;~ 0AA7:0471
cs=0xaa7;eip=0x000473; 	T(MOV(si, offset(dseg,_anotenoughdram_0)));	// 20144 mov     si, offset _aNotEnoughDram_0 ; "Not enough DRAM on your UltraSound to l"... ;~ 0AA7:0473
cs=0xaa7;eip=0x000476; 	T(CMP(ax, 0x0FFFD));	// 20145 cmp     ax, 0FFFDh ;~ 0AA7:0476
cs=0xaa7;eip=0x000479; 	J(JZ(loc_194ce));	// 20146 jz      short loc_194CE ;~ 0AA7:0479
cs=0xaa7;eip=0x00047b; 	T(MOV(si, offset(dseg,_amoduleiscorrupt)));	// 20147 mov     si, offset _aModuleIsCorrupt ; _msg ;~ 0AA7:047B
loc_194ce:
	// 5588 
cs=0xaa7;eip=0x00047e; 	T(MOV(ax, 0x7E0D));	// 20151 mov     ax, 7E0Dh ;~ 0AA7:047E
cs=0xaa7;eip=0x000481; 	J(CALL(_message_1be77,0));	// 20152 call    _message_1BE77 ;~ 0AA7:0481
cs=0xaa7;eip=0x000484; 	T(XOR(ax, ax));	// 20153 xor     ax, ax ;~ 0AA7:0484
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x000486; 	X(MOV(*(dw*)(((db*)&_key_code)), ax));	// 20154 mov     cs:_key_code, ax ;~ 0AA7:0486
loc_194da:
	// 5589 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x00048a; 	X(XCHG(ax, *(dw*)(((db*)&_key_code))));	// 20157 xchg    ax, cs:_key_code ;~ 0AA7:048A
cs=0xaa7;eip=0x00048f; 	T(OR(ax, ax));	// 20158 or      ax, ax ;~ 0AA7:048F
cs=0xaa7;eip=0x000491; 	J(JZ(loc_194da));	// 20159 jz      short loc_194DA ;~ 0AA7:0491
loc_194e3:
	// 5590 
cs=0xaa7;eip=0x000493; 	X(MOV(byte_1de7f, 0));	// 20162 mov     byte_1DE7F, 0 ;~ 0AA7:0493
cs=0xaa7;eip=0x000498; 	J(JMP(loc_192f7));	// 20163 jmp     loc_192F7 ;~ 0AA7:0498
loc_194eb:
	// 5591 
cs=0xaa7;eip=0x00049b; 	X(MOV(byte_1de7f, 1));	// 20167 mov     byte_1DE7F, 1 ;~ 0AA7:049B
cs=0xaa7;eip=0x0004a0; 	T(MOV(dx, offset(dseg,_buffer_1db6c)));	// 20168 mov     dx, offset _buffer_1DB6C ;~ 0AA7:04A0
cs=0xaa7;eip=0x0004a3; 	T(MOV(ah, 0x3B));	// 20169 mov     ah, 3Bh ;~ 0AA7:04A3
cs=0xaa7;eip=0x0004a5; 	S(_INT(0x21));	// 20170 int     21h             ; DOS - 2+ - CHANGE THE CURRENT DIRECTORY (CHDIR) ;~ 0AA7:04A5
cs=0xaa7;eip=0x0004a7; 	X(MOV(word_1de62, 0));	// 20172 mov     word_1DE62, 0 ;~ 0AA7:04A7
cs=0xaa7;eip=0x0004ad; 	X(MOV(word_1de5e, 0));	// 20173 mov     word_1DE5E, 0 ;~ 0AA7:04AD
cs=0xaa7;eip=0x0004b3; 	J(JMP(loc_192ff));	// 20174 jmp     loc_192FF ;~ 0AA7:04B3
loc_19506:
	// 5592 
cs=0xaa7;eip=0x0004b6; 	X(MOV(byte_1de7f, 1));	// 20178 mov     byte_1DE7F, 1 ;~ 0AA7:04B6
cs=0xaa7;eip=0x0004bb; 	T(MOV(dl, *(raddr(fs,0x0D))));	// 20179 mov     dl, fs:0Dh ;~ 0AA7:04BB
cs=0xaa7;eip=0x0004c0; 	T(SUB(dl, 'A'));	// 20180 sub     dl, 'A' ;~ 0AA7:04C0
cs=0xaa7;eip=0x0004c3; 	J(JC(loc_193bc));	// 20181 jb      loc_193BC ;~ 0AA7:04C3
cs=0xaa7;eip=0x0004c7; 	T(CMP(dl, 0x1A));	// 20182 cmp     dl, 1Ah ;~ 0AA7:04C7
cs=0xaa7;eip=0x0004ca; 	J(JNC(loc_193bc));	// 20183 jnb     loc_193BC ;~ 0AA7:04CA
cs=0xaa7;eip=0x0004ce; 	T(MOV(bl, dl));	// 20184 mov     bl, dl ;~ 0AA7:04CE
cs=0xaa7;eip=0x0004d0; 	T(INC(bl));	// 20185 inc     bl ;~ 0AA7:04D0
cs=0xaa7;eip=0x0004d2; 	X(PUSH(dx));	// 20186 push    dx ;~ 0AA7:04D2
cs=0xaa7;eip=0x0004d3; 	T(MOV(ax, 0x440F));	// 20187 mov     ax, 440Fh ;~ 0AA7:04D3
cs=0xaa7;eip=0x0004d6; 	S(_INT(0x21));	// 20188 int     21h             ; DOS - 2+ - IOCTL - ;~ 0AA7:04D6
cs=0xaa7;eip=0x0004d8; 	X(POP(dx));	// 20189 pop     dx ;~ 0AA7:04D8
cs=0xaa7;eip=0x0004d9; 	T(MOV(ah, 0x0E));	// 20190 mov     ah, 0Eh ;~ 0AA7:04D9
cs=0xaa7;eip=0x0004db; 	S(_INT(0x21));	// 20191 int     21h             ; DOS - SELECT DISK ;~ 0AA7:04DB
cs=0xaa7;eip=0x0004dd; 	X(MOV(word_1de62, 0));	// 20194 mov     word_1DE62, 0 ;~ 0AA7:04DD
cs=0xaa7;eip=0x0004e3; 	X(MOV(word_1de5e, 0));	// 20195 mov     word_1DE5E, 0 ;~ 0AA7:04E3
cs=0xaa7;eip=0x0004e9; 	J(JMP(loc_192ff));	// 20196 jmp     loc_192FF ;~ 0AA7:04E9
loc_1953c:
	// 5593 
cs=0xaa7;eip=0x0004ec; 	T(CMP(word_1de62, 0x0E));	// 20201 cmp     word_1DE62, 0Eh ;~ 0AA7:04EC
cs=0xaa7;eip=0x0004f1; 	J(JNC(loc_1955d));	// 20202 jnb     short loc_1955D ;~ 0AA7:04F1
cs=0xaa7;eip=0x0004f3; 	T(MOV(bx, word_1de54));	// 20203 mov     bx, word_1DE54 ;~ 0AA7:04F3
cs=0xaa7;eip=0x0004f7; 	T(DEC(bx));	// 20204 dec     bx ;~ 0AA7:04F7
cs=0xaa7;eip=0x0004f8; 	T(MOV(ax, word_1de62));	// 20205 mov     ax, word_1DE62 ;~ 0AA7:04F8
cs=0xaa7;eip=0x0004fb; 	T(CMP(ax, bx));	// 20206 cmp     ax, bx ;~ 0AA7:04FB
cs=0xaa7;eip=0x0004fd; 	J(JNC(loc_193bc));	// 20207 jnb     loc_193BC ;~ 0AA7:04FD
cs=0xaa7;eip=0x000501; 	T(MOV(bl, 0x70));	// 20208 mov     bl, 70h ; 'p' ;~ 0AA7:0501
cs=0xaa7;eip=0x000503; 	J(CALL(_recolortxt,0));	// 20209 call    _recolortxt ;~ 0AA7:0503
cs=0xaa7;eip=0x000506; 	X(INC(word_1de62));	// 20210 inc     word_1DE62 ;~ 0AA7:0506
cs=0xaa7;eip=0x00050a; 	J(JMP(loc_193ae));	// 20211 jmp     loc_193AE ;~ 0AA7:050A
loc_1955d:
	// 5594 
cs=0xaa7;eip=0x00050d; 	T(CMP(word_1de54, 0x0F));	// 20215 cmp     word_1DE54, 0Fh ;~ 0AA7:050D
cs=0xaa7;eip=0x000512; 	J(JC(loc_193bc));	// 20216 jb      loc_193BC ;~ 0AA7:0512
cs=0xaa7;eip=0x000516; 	T(MOV(ax, word_1de54));	// 20217 mov     ax, word_1DE54 ;~ 0AA7:0516
cs=0xaa7;eip=0x000519; 	T(SUB(ax, word_1de5e));	// 20218 sub     ax, word_1DE5E ;~ 0AA7:0519
cs=0xaa7;eip=0x00051d; 	J(JC(loc_193bc));	// 20219 jb      loc_193BC ;~ 0AA7:051D
cs=0xaa7;eip=0x000521; 	T(CMP(ax, 0x10));	// 20220 cmp     ax, 10h ;~ 0AA7:0521
cs=0xaa7;eip=0x000524; 	J(JC(loc_193bc));	// 20221 jb      loc_193BC ;~ 0AA7:0524
cs=0xaa7;eip=0x000528; 	X(INC(word_1de5e));	// 20222 inc     word_1DE5E ;~ 0AA7:0528
cs=0xaa7;eip=0x00052c; 	J(JMP(loc_193ae));	// 20223 jmp     loc_193AE ;~ 0AA7:052C
loc_1957f:
	// 5595 
cs=0xaa7;eip=0x00052f; 	T(CMP(word_1de62, 0));	// 20228 cmp     word_1DE62, 0 ;~ 0AA7:052F
cs=0xaa7;eip=0x000534; 	J(JZ(loc_19595));	// 20229 jz      short loc_19595 ;~ 0AA7:0534
cs=0xaa7;eip=0x000536; 	T(MOV(ax, word_1de62));	// 20230 mov     ax, word_1DE62 ;~ 0AA7:0536
cs=0xaa7;eip=0x000539; 	T(MOV(bl, 0x70));	// 20231 mov     bl, 70h ; 'p' ;~ 0AA7:0539
cs=0xaa7;eip=0x00053b; 	J(CALL(_recolortxt,0));	// 20232 call    _recolortxt ;~ 0AA7:053B
cs=0xaa7;eip=0x00053e; 	X(DEC(word_1de62));	// 20233 dec     word_1DE62 ;~ 0AA7:053E
cs=0xaa7;eip=0x000542; 	J(JMP(loc_193ae));	// 20234 jmp     loc_193AE ;~ 0AA7:0542
loc_19595:
	// 5596 
cs=0xaa7;eip=0x000545; 	X(SUB(word_1de5e, 1));	// 20238 sub     word_1DE5E, 1 ;~ 0AA7:0545
cs=0xaa7;eip=0x00054a; 	J(JNC(loc_193ae));	// 20239 jnb     loc_193AE ;~ 0AA7:054A
cs=0xaa7;eip=0x00054e; 	X(MOV(word_1de5e, 0));	// 20240 mov     word_1DE5E, 0 ;~ 0AA7:054E
cs=0xaa7;eip=0x000554; 	J(JMP(loc_193ae));	// 20241 jmp     loc_193AE ;~ 0AA7:0554
loc_195a7:
	// 5597 
cs=0xaa7;eip=0x000557; 	T(MOV(ax, word_1de62));	// 20245 mov     ax, word_1DE62 ;~ 0AA7:0557
cs=0xaa7;eip=0x00055a; 	T(MOV(bl, 0x70));	// 20246 mov     bl, 70h ; 'p' ;~ 0AA7:055A
cs=0xaa7;eip=0x00055c; 	J(CALL(_recolortxt,0));	// 20247 call    _recolortxt ;~ 0AA7:055C
cs=0xaa7;eip=0x00055f; 	X(MOV(word_1de62, 0));	// 20248 mov     word_1DE62, 0 ;~ 0AA7:055F
cs=0xaa7;eip=0x000565; 	X(MOV(word_1de5e, 0));	// 20249 mov     word_1DE5E, 0 ;~ 0AA7:0565
cs=0xaa7;eip=0x00056b; 	J(JMP(loc_193ae));	// 20250 jmp     loc_193AE ;~ 0AA7:056B
loc_195be:
	// 5598 
cs=0xaa7;eip=0x00056e; 	T(MOV(ax, word_1de62));	// 20254 mov     ax, word_1DE62 ;~ 0AA7:056E
cs=0xaa7;eip=0x000571; 	T(MOV(bl, 0x70));	// 20255 mov     bl, 70h ; 'p' ;~ 0AA7:0571
cs=0xaa7;eip=0x000573; 	J(CALL(_recolortxt,0));	// 20256 call    _recolortxt ;~ 0AA7:0573
cs=0xaa7;eip=0x000576; 	T(MOV(ax, word_1de54));	// 20257 mov     ax, word_1DE54 ;~ 0AA7:0576
cs=0xaa7;eip=0x000579; 	T(DEC(ax));	// 20258 dec     ax ;~ 0AA7:0579
cs=0xaa7;eip=0x00057a; 	T(CMP(ax, 0x0F));	// 20259 cmp     ax, 0Fh ;~ 0AA7:057A
cs=0xaa7;eip=0x00057d; 	J(JC(loc_195de));	// 20260 jb      short loc_195DE ;~ 0AA7:057D
cs=0xaa7;eip=0x00057f; 	T(SUB(ax, 0x0E));	// 20261 sub     ax, 0Eh ;~ 0AA7:057F
cs=0xaa7;eip=0x000582; 	X(MOV(word_1de5e, ax));	// 20262 mov     word_1DE5E, ax ;~ 0AA7:0582
cs=0xaa7;eip=0x000585; 	X(MOV(word_1de62, 0x0E));	// 20263 mov     word_1DE62, 0Eh ;~ 0AA7:0585
cs=0xaa7;eip=0x00058b; 	J(JMP(loc_193ae));	// 20264 jmp     loc_193AE ;~ 0AA7:058B
loc_195de:
	// 5599 
cs=0xaa7;eip=0x00058e; 	X(MOV(word_1de5e, 0));	// 20268 mov     word_1DE5E, 0 ;~ 0AA7:058E
cs=0xaa7;eip=0x000594; 	X(MOV(word_1de62, ax));	// 20269 mov     word_1DE62, ax ;~ 0AA7:0594
cs=0xaa7;eip=0x000597; 	J(JMP(loc_193ae));	// 20270 jmp     loc_193AE ;~ 0AA7:0597
loc_195ea:
	// 5600 
cs=0xaa7;eip=0x00059a; 	T(MOV(ax, word_1de62));	// 20274 mov     ax, word_1DE62 ;~ 0AA7:059A
cs=0xaa7;eip=0x00059d; 	T(MOV(bl, 0x70));	// 20275 mov     bl, 70h ; 'p' ;~ 0AA7:059D
cs=0xaa7;eip=0x00059f; 	J(CALL(_recolortxt,0));	// 20276 call    _recolortxt ;~ 0AA7:059F
cs=0xaa7;eip=0x0005a2; 	T(XOR(ax, ax));	// 20277 xor     ax, ax ;~ 0AA7:05A2
cs=0xaa7;eip=0x0005a4; 	X(XCHG(ax, word_1de62));	// 20278 xchg    ax, word_1DE62 ;~ 0AA7:05A4
cs=0xaa7;eip=0x0005a8; 	T(OR(ax, ax));	// 20279 or      ax, ax ;~ 0AA7:05A8
cs=0xaa7;eip=0x0005aa; 	J(JNZ(loc_193ae));	// 20280 jnz     loc_193AE ;~ 0AA7:05AA
cs=0xaa7;eip=0x0005ae; 	X(SUB(word_1de5e, 0x0F));	// 20281 sub     word_1DE5E, 0Fh ;~ 0AA7:05AE
cs=0xaa7;eip=0x0005b3; 	J(JNC(loc_193ae));	// 20282 jnb     loc_193AE ;~ 0AA7:05B3
cs=0xaa7;eip=0x0005b7; 	X(MOV(word_1de5e, 0));	// 20283 mov     word_1DE5E, 0 ;~ 0AA7:05B7
cs=0xaa7;eip=0x0005bd; 	J(JMP(loc_193ae));	// 20284 jmp     loc_193AE ;~ 0AA7:05BD
loc_19610:
	// 5601 
cs=0xaa7;eip=0x0005c0; 	T(MOV(ax, word_1de62));	// 20288 mov     ax, word_1DE62 ;~ 0AA7:05C0
cs=0xaa7;eip=0x0005c3; 	T(MOV(bl, 0x70));	// 20289 mov     bl, 70h ; 'p' ;~ 0AA7:05C3
cs=0xaa7;eip=0x0005c5; 	J(CALL(_recolortxt,0));	// 20290 call    _recolortxt ;~ 0AA7:05C5
cs=0xaa7;eip=0x0005c8; 	T(MOV(ax, word_1de54));	// 20291 mov     ax, word_1DE54 ;~ 0AA7:05C8
cs=0xaa7;eip=0x0005cb; 	T(DEC(ax));	// 20292 dec     ax ;~ 0AA7:05CB
cs=0xaa7;eip=0x0005cc; 	T(CMP(ax, 0x0F));	// 20293 cmp     ax, 0Fh ;~ 0AA7:05CC
cs=0xaa7;eip=0x0005cf; 	J(JC(loc_19648));	// 20294 jb      short loc_19648 ;~ 0AA7:05CF
cs=0xaa7;eip=0x0005d1; 	T(MOV(ax, 0x0E));	// 20295 mov     ax, 0Eh ;~ 0AA7:05D1
cs=0xaa7;eip=0x0005d4; 	X(XCHG(ax, word_1de62));	// 20296 xchg    ax, word_1DE62 ;~ 0AA7:05D4
cs=0xaa7;eip=0x0005d8; 	T(CMP(ax, 0x0E));	// 20297 cmp     ax, 0Eh ;~ 0AA7:05D8
cs=0xaa7;eip=0x0005db; 	J(JNZ(loc_193ae));	// 20298 jnz     loc_193AE ;~ 0AA7:05DB
cs=0xaa7;eip=0x0005df; 	X(ADD(word_1de5e, 0x0F));	// 20299 add     word_1DE5E, 0Fh ;~ 0AA7:05DF
cs=0xaa7;eip=0x0005e4; 	T(MOV(ax, word_1de54));	// 20300 mov     ax, word_1DE54 ;~ 0AA7:05E4
cs=0xaa7;eip=0x0005e7; 	T(SUB(ax, 0x0F));	// 20301 sub     ax, 0Fh ;~ 0AA7:05E7
cs=0xaa7;eip=0x0005ea; 	T(CMP(word_1de5e, ax));	// 20302 cmp     word_1DE5E, ax ;~ 0AA7:05EA
cs=0xaa7;eip=0x0005ee; 	J(JBE(loc_193ae));	// 20303 jbe     loc_193AE ;~ 0AA7:05EE
cs=0xaa7;eip=0x0005f2; 	X(MOV(word_1de5e, ax));	// 20304 mov     word_1DE5E, ax ;~ 0AA7:05F2
cs=0xaa7;eip=0x0005f5; 	J(JMP(loc_193ae));	// 20305 jmp     loc_193AE ;~ 0AA7:05F5
loc_19648:
	// 5602 
cs=0xaa7;eip=0x0005f8; 	X(MOV(word_1de62, ax));	// 20309 mov     word_1DE62, ax ;~ 0AA7:05F8
cs=0xaa7;eip=0x0005fb; 	J(JMP(loc_193ae));	// 20310 jmp     loc_193AE ;~ 0AA7:05FB
loc_1964e:
	// 5603 
cs=0xaa7;eip=0x0005fe; 	T(MOV(si, offset(dseg,_mystr)));	// 20315 mov     si, offset _mystr ; str ;~ 0AA7:05FE
cs=0xaa7;eip=0x000601; 	J(CALL(_doschdir,0));	// 20316 call    _doschdir ;~ 0AA7:0601
cs=0xaa7;eip=0x000604; 	J(JMP(loc_19250));	// 20317 jmp     loc_19250 ;~ 0AA7:0604
loc_19657:
	// 5604 
cs=0xaa7;eip=0x000607; 	T(MOV(ax, word_1de5e));	// 20321 mov     ax, word_1DE5E ;~ 0AA7:0607
cs=0xaa7;eip=0x00060a; 	T(ADD(ax, word_1de62));	// 20322 add     ax, word_1DE62 ;~ 0AA7:060A
cs=0xaa7;eip=0x00060e; 	T(MOV(dx, ax));	// 20323 mov     dx, ax ;~ 0AA7:060E
cs=0xaa7;eip=0x000610; 	T(SHL(ax, 1));	// 20324 shl     ax, 1 ;~ 0AA7:0610
cs=0xaa7;eip=0x000612; 	T(ADD(ax, dx));	// 20325 add     ax, dx ;~ 0AA7:0612
cs=0xaa7;eip=0x000614; 	T(ADD(ax, word_1de52));	// 20326 add     ax, word_1DE52 ;~ 0AA7:0614
cs=0xaa7;eip=0x000618; 	T(MOV(fs, ax));	// 20327 mov     fs, ax ;~ 0AA7:0618
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x00061a; 	T(TEST(*(dw*)(((db*)&_keyb_switches)), 4));	// 20328 test    cs:_keyb_switches, 4 ;~ 0AA7:061A
cs=0xaa7;eip=0x000621; 	J(JNZ(loc_196b0));	// 20329 jnz     short loc_196B0 ;~ 0AA7:0621
cs=0xaa7;eip=0x000623; 	T(CMP(*(raddr(fs,2)), 2));	// 20330 cmp     byte ptr fs:2, 2 ;~ 0AA7:0623
cs=0xaa7;eip=0x000629; 	J(JNZ(loc_193bc));	// 20331 jnz     loc_193BC ;~ 0AA7:0629
cs=0xaa7;eip=0x00062d; 	X(MOV(word_1de60, 0x0FFFF));	// 20332 mov     word_1DE60, 0FFFFh ;~ 0AA7:062D
cs=0xaa7;eip=0x000633; 	T(TEST(*(raddr(fs,3)), 0x40));	// 20333 test    byte ptr fs:3, 40h ;~ 0AA7:0633
cs=0xaa7;eip=0x000639; 	J(JNZ(loc_19698));	// 20334 jnz     short loc_19698 ;~ 0AA7:0639
cs=0xaa7;eip=0x00063b; 	X(OR(*(raddr(fs,3)), 0x40));	// 20335 or      byte ptr fs:3, 40h ;~ 0AA7:063B
cs=0xaa7;eip=0x000641; 	X(INC(word_1de5c));	// 20336 inc     word_1DE5C ;~ 0AA7:0641
cs=0xaa7;eip=0x000645; 	J(JMP(loc_1953c));	// 20337 jmp     loc_1953C ;~ 0AA7:0645
loc_19698:
	// 5605 
cs=0xaa7;eip=0x000648; 	X(AND(*(raddr(fs,3)), 0x0BF));	// 20341 and     byte ptr fs:3, 0BFh ;~ 0AA7:0648
cs=0xaa7;eip=0x00064e; 	X(SUB(word_1de5c, 1));	// 20342 sub     word_1DE5C, 1 ;~ 0AA7:064E
cs=0xaa7;eip=0x000653; 	J(JNC(loc_1953c));	// 20343 jnb     loc_1953C ;~ 0AA7:0653
cs=0xaa7;eip=0x000657; 	X(MOV(word_1de5c, 0));	// 20344 mov     word_1DE5C, 0 ;~ 0AA7:0657
cs=0xaa7;eip=0x00065d; 	J(JMP(loc_1953c));	// 20345 jmp     loc_1953C ;~ 0AA7:065D
loc_196b0:
	// 5606 
cs=0xaa7;eip=0x000660; 	T(CMP(word_1de5c, 0));	// 20349 cmp     word_1DE5C, 0 ;~ 0AA7:0660
cs=0xaa7;eip=0x000665; 	J(JZ(loc_193bc));	// 20350 jz      loc_193BC ;~ 0AA7:0665
cs=0xaa7;eip=0x000669; 	T(MOV(cx, 0x602));	// 20351 mov     cx, 602h ;~ 0AA7:0669
cs=0xaa7;eip=0x00066c; 	T(MOV(dx, 0x1A4E));	// 20352 mov     dx, 1A4Eh ;~ 0AA7:066C
cs=0xaa7;eip=0x00066f; 	T(MOV(bl, 0x7F));	// 20353 mov     bl, 7Fh ;~ 0AA7:066F
cs=0xaa7;eip=0x000671; 	T(MOV(ax, 0x7800));	// 20354 mov     ax, 7800h ;~ 0AA7:0671
cs=0xaa7;eip=0x000674; 	J(CALL(_draw_frame,0));	// 20355 call    _draw_frame ;~ 0AA7:0674
cs=0xaa7;eip=0x000677; 	T(MOV(si, offset(dseg,_adeletemarkedfil)));	// 20356 mov     si, offset _aDeleteMarkedFil ; "Delete marked files? [Y/N]" ;~ 0AA7:0677
cs=0xaa7;eip=0x00067a; 	T(MOV(ax, 0x7E0D));	// 20357 mov     ax, 7E0Dh ;~ 0AA7:067A
cs=0xaa7;eip=0x00067d; 	J(CALL(_message_1be77,0));	// 20358 call    _message_1BE77 ;~ 0AA7:067D
loc_196d0:
	// 5607 
cs=0xaa7;eip=0x000680; 	T(XOR(ax, ax));	// 20362 xor     ax, ax ;~ 0AA7:0680
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x000682; 	X(XCHG(ax, *(dw*)(((db*)&_key_code))));	// 20363 xchg    ax, cs:_key_code ;~ 0AA7:0682
cs=0xaa7;eip=0x000687; 	T(OR(ax, ax));	// 20364 or      ax, ax ;~ 0AA7:0687
cs=0xaa7;eip=0x000689; 	J(JZ(loc_196d0));	// 20365 jz      short loc_196D0 ;~ 0AA7:0689
cs=0xaa7;eip=0x00068b; 	J(JS(loc_196d0));	// 20366 js      short loc_196D0 ;~ 0AA7:068B
cs=0xaa7;eip=0x00068d; 	X(MOV(byte_1de7f, 0));	// 20367 mov     byte_1DE7F, 0 ;~ 0AA7:068D
cs=0xaa7;eip=0x000692; 	T(CMP(ax, 0x15));	// 20368 cmp     ax, 15h ;~ 0AA7:0692
cs=0xaa7;eip=0x000695; 	J(JNZ(loc_192ff));	// 20369 jnz     loc_192FF ;~ 0AA7:0695
cs=0xaa7;eip=0x000699; 	T(MOV(fs, word_1de52));	// 20370 mov     fs, word_1DE52 ;~ 0AA7:0699
cs=0xaa7;eip=0x00069d; 	T(MOV(cx, word_1de54));	// 20371 mov     cx, word_1DE54 ;~ 0AA7:069D
loc_196f1:
	// 5608 
cs=0xaa7;eip=0x0006a1; 	T(TEST(*(raddr(fs,3)), 0x40));	// 20374 test    byte ptr fs:3, 40h ;~ 0AA7:06A1
cs=0xaa7;eip=0x0006a7; 	J(JZ(loc_19744));	// 20375 jz      short loc_19744 ;~ 0AA7:06A7
cs=0xaa7;eip=0x0006a9; 	T(CMP(*(raddr(fs,2)), 2));	// 20376 cmp     byte ptr fs:2, 2 ;~ 0AA7:06A9
cs=0xaa7;eip=0x0006af; 	J(JNZ(loc_19744));	// 20377 jnz     short loc_19744 ;~ 0AA7:06AF
cs=0xaa7;eip=0x0006b1; 	X(PUSH(cx));	// 20378 push    cx ;~ 0AA7:06B1
cs=0xaa7;eip=0x0006b2; 	X(PUSH(fs));	// 20379 push    fs ;~ 0AA7:06B2
cs=0xaa7;eip=0x0006b4; 	T(MOV(cx, 0x602));	// 20380 mov     cx, 602h ;~ 0AA7:06B4
cs=0xaa7;eip=0x0006b7; 	T(MOV(dx, 0x1A4E));	// 20381 mov     dx, 1A4Eh ;~ 0AA7:06B7
cs=0xaa7;eip=0x0006ba; 	T(MOV(bl, 0x7F));	// 20382 mov     bl, 7Fh ;~ 0AA7:06BA
cs=0xaa7;eip=0x0006bc; 	T(MOV(ax, 0x7800));	// 20383 mov     ax, 7800h ;~ 0AA7:06BC
cs=0xaa7;eip=0x0006bf; 	J(CALL(_draw_frame,0));	// 20384 call    _draw_frame ;~ 0AA7:06BF
cs=0xaa7;eip=0x0006c2; 	X(POP(fs));	// 20385 pop     fs ;~ 0AA7:06C2
cs=0xaa7;eip=0x0006c4; 	X(PUSH(fs));	// 20386 push    fs ;~ 0AA7:06C4
cs=0xaa7;eip=0x0006c6; 	T(MOV(eax, *(dd*)(raddr(fs,0x0C))));	// 20387 mov     eax, fs:0Ch ;~ 0AA7:06C6
cs=0xaa7;eip=0x0006cb; 	X(MOV(*(dd*)((_afile)), eax));	// 20388 mov     dword ptr _aFile, eax ; "File" ;~ 0AA7:06CB
cs=0xaa7;eip=0x0006cf; 	T(MOV(eax, *(dd*)(raddr(fs,0x10))));	// 20389 mov     eax, fs:10h ;~ 0AA7:06CF
cs=0xaa7;eip=0x0006d4; 	X(MOV(*(dd*)((_aname)), eax));	// 20390 mov     dword ptr _aName, eax ; "name" ;~ 0AA7:06D4
cs=0xaa7;eip=0x0006d8; 	T(MOV(eax, *(dd*)(raddr(fs,0x14))));	// 20391 mov     eax, fs:14h ;~ 0AA7:06D8
cs=0xaa7;eip=0x0006dd; 	X(MOV(*(dd*)((_a_ext)), eax));	// 20392 mov     dword ptr _a_ext, eax ; ".Ext" ;~ 0AA7:06DD
cs=0xaa7;eip=0x0006e1; 	T(MOV(si, offset(dseg,_adeletingfile)));	// 20393 mov     si, offset _aDeletingFile ; "Deleting file: " ;~ 0AA7:06E1
cs=0xaa7;eip=0x0006e4; 	T(MOV(ax, 0x7E0D));	// 20394 mov     ax, 7E0Dh ;~ 0AA7:06E4
cs=0xaa7;eip=0x0006e7; 	J(CALL(_message_1be77,0));	// 20395 call    _message_1BE77 ;~ 0AA7:06E7
cs=0xaa7;eip=0x0006ea; 	T(MOV(dx, offset(dseg,_afile)));	// 20396 mov     dx, offset _aFile ; "File" ;~ 0AA7:06EA
cs=0xaa7;eip=0x0006ed; 	T(MOV(ah, 0x41));	// 20397 mov     ah, 41h ;~ 0AA7:06ED
cs=0xaa7;eip=0x0006ef; 	S(_INT(0x21));	// 20398 int     21h             ; DOS - 2+ - DELETE A FILE (UNLINK) ;~ 0AA7:06EF
cs=0xaa7;eip=0x0006f1; 	X(POP(fs));	// 20400 pop     fs ;~ 0AA7:06F1
cs=0xaa7;eip=0x0006f3; 	X(POP(cx));	// 20401 pop     cx ;~ 0AA7:06F3
loc_19744:
	// 5609 
cs=0xaa7;eip=0x0006f4; 	T(MOV(ax, fs));	// 20405 mov     ax, fs ;~ 0AA7:06F4
cs=0xaa7;eip=0x0006f6; 	T(ADD(ax, 3));	// 20406 add     ax, 3 ;~ 0AA7:06F6
cs=0xaa7;eip=0x0006f9; 	T(MOV(fs, ax));	// 20407 mov     fs, ax ;~ 0AA7:06F9
cs=0xaa7;eip=0x0006fb; 	T(DEC(cx));	// 20409 dec     cx ;~ 0AA7:06FB
cs=0xaa7;eip=0x0006fc; 	J(JNZ(loc_196f1));	// 20410 jnz     short loc_196F1 ;~ 0AA7:06FC
cs=0xaa7;eip=0x0006fe; 	X(MOV(word_1de62, 0));	// 20411 mov     word_1DE62, 0 ;~ 0AA7:06FE
cs=0xaa7;eip=0x000704; 	X(MOV(word_1de5e, 0));	// 20412 mov     word_1DE5E, 0 ;~ 0AA7:0704
cs=0xaa7;eip=0x00070a; 	X(MOV(byte_1de7f, 1));	// 20413 mov     byte_1DE7F, 1 ;~ 0AA7:070A
cs=0xaa7;eip=0x00070f; 	J(JMP(loc_192ff));	// 20414 jmp     loc_192FF ;~ 0AA7:070F
loc_19762:
	// 5610 
cs=0xaa7;eip=0x000712; 	T(CMP(byte_1de7c, 1));	// 20419 cmp     byte_1DE7C, 1 ;~ 0AA7:0712
cs=0xaa7;eip=0x000717; 	J(JZ(loc_193bc));	// 20420 jz      loc_193BC ;~ 0AA7:0717
cs=0xaa7;eip=0x00071b; 	T(MOV(cx, 0x602));	// 20421 mov     cx, 602h ;~ 0AA7:071B
cs=0xaa7;eip=0x00071e; 	T(MOV(dx, 0x1A4E));	// 20422 mov     dx, 1A4Eh ;~ 0AA7:071E
cs=0xaa7;eip=0x000721; 	T(MOV(bl, 0x7F));	// 20423 mov     bl, 7Fh ;~ 0AA7:0721
cs=0xaa7;eip=0x000723; 	T(MOV(ax, 0x7800));	// 20424 mov     ax, 7800h ;~ 0AA7:0723
cs=0xaa7;eip=0x000726; 	J(CALL(_draw_frame,0));	// 20425 call    _draw_frame ;~ 0AA7:0726
cs=0xaa7;eip=0x000729; 	J(CALL(__dispatch_call,off_1de3c));	// 20426 call    off_1DE3C ;~ 0AA7:0729
cs=0xaa7;eip=0x00072d; 	J(CALL(_keyb_19efd,0));	// 20427 call    _keyb_19EFD ;~ 0AA7:072D
cs=0xaa7;eip=0x000730; 	X(MOV(byte_1de7f, 0));	// 20428 mov     byte_1DE7F, 0 ;~ 0AA7:0730
cs=0xaa7;eip=0x000735; 	J(JMP(loc_192f7));	// 20429 jmp     loc_192F7 ;~ 0AA7:0735
loc_19788:
	// 5611 
cs=0xaa7;eip=0x000738; 	T(MOV(cx, 0x604));	// 20433 mov     cx, 604h ;~ 0AA7:0738
cs=0xaa7;eip=0x00073b; 	T(MOV(dx, 0x84B));	// 20434 mov     dx, 84Bh ;~ 0AA7:073B
cs=0xaa7;eip=0x00073e; 	T(MOV(bl, 0x7F));	// 20435 mov     bl, 7Fh ;~ 0AA7:073E
cs=0xaa7;eip=0x000740; 	T(MOV(ax, 0x7803));	// 20436 mov     ax, 7803h ;~ 0AA7:0740
cs=0xaa7;eip=0x000743; 	J(CALL(_draw_frame,0));	// 20437 call    _draw_frame ;~ 0AA7:0743
cs=0xaa7;eip=0x000746; 	T(MOV(cx, 0x906));	// 20438 mov     cx, 906h ;~ 0AA7:0746
cs=0xaa7;eip=0x000749; 	T(MOV(dx, 0x1949));	// 20439 mov     dx, 1949h ;~ 0AA7:0749
cs=0xaa7;eip=0x00074c; 	T(MOV(bl, 0x7F));	// 20440 mov     bl, 7Fh ;~ 0AA7:074C
cs=0xaa7;eip=0x00074e; 	T(MOV(ax, 0x7803));	// 20441 mov     ax, 7803h ;~ 0AA7:074E
cs=0xaa7;eip=0x000751; 	J(CALL(_draw_frame,0));	// 20442 call    _draw_frame ;~ 0AA7:0751
cs=0xaa7;eip=0x000754; 	T(LES(di, _videomempointer));	// 20443 les     di, _videomempointer ;~ 0AA7:0754
cs=0xaa7;eip=0x000758; 	T(ADD(di, 0x1042));	// 20445 add     di, 1042h ;~ 0AA7:0758
cs=0xaa7;eip=0x00075c; 	T(MOV(cx, 0x4E));	// 20446 mov     cx, 4Eh ; 'N' ;~ 0AA7:075C
cs=0xaa7;eip=0x00075f; 	T(MOV(ax, 0x7820));	// 20447 mov     ax, 7820h       ; 'x' ;~ 0AA7:075F
cs=0xaa7;eip=0x000762; 	T(CLD);	// 20448 cld ;~ 0AA7:0762
	// 20449 rep stosw ;~ 0AA7:0763
cs=0xaa7;eip=0x000763; 	X(	REP STOSW);	// 20449 rep stosw ;~ 0AA7:0763
cs=0xaa7;eip=0x000765; 	T(MOV(si, offset(dseg,str_)));	// 20450 mov     si, offset str_ ; str ;~ 0AA7:0765
cs=0xaa7;eip=0x000768; 	T(LES(di, _videomempointer));	// 20451 les     di, _videomempointer ;~ 0AA7:0768
cs=0xaa7;eip=0x00076c; 	J(CALL(_write_scr,0));	// 20452 call    _write_scr ;~ 0AA7:076C
loc_197bf:
	// 5612 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x00076f; 	T(CMP(*(db*)(((db*)&_key_code)), 0));	// 20455 cmp     byte ptr cs:_key_code, 0 ;~ 0AA7:076F
cs=0xaa7;eip=0x000775; 	J(JLE(loc_197bf));	// 20456 jle     short loc_197BF ;~ 0AA7:0775
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x000777; 	X(MOV(*(dw*)(((db*)&_key_code)), 0));	// 20457 mov     cs:_key_code, 0 ;~ 0AA7:0777
cs=0xaa7;eip=0x00077e; 	X(MOV(byte_1de7f, 0));	// 20458 mov     byte_1DE7F, 0 ;~ 0AA7:077E
cs=0xaa7;eip=0x000783; 	J(JMP(loc_192f7));	// 20459 jmp     loc_192F7 ;~ 0AA7:0783
loc_197d6:
	// 5613 
cs=0xaa7;eip=0x000786; 	J(CALL(_mouse_deinit,0));	// 20463 call    _mouse_deinit ;~ 0AA7:0786
cs=0xaa7;eip=0x000789; 	J(CALL(_dosexec,0));	// 20464 call    _dosexec ;~ 0AA7:0789
cs=0xaa7;eip=0x00078c; 	J(CALL(_mouse_init,0));	// 20465 call    _mouse_init ;~ 0AA7:078C
cs=0xaa7;eip=0x00078f; 	X(MOV(byte_1de7f, 0));	// 20466 mov     byte_1DE7F, 0 ;~ 0AA7:078F
cs=0xaa7;eip=0x000794; 	J(JMP(loc_192f7));	// 20467 jmp     loc_192F7 ;~ 0AA7:0794
loc_197e7:
	// 5614 
cs=0xaa7;eip=0x000797; 	X(XOR(*(db*)(((db*)&_configword)), 0x20));	// 20471 xor     byte ptr _configword, 20h ;~ 0AA7:0797
cs=0xaa7;eip=0x00079c; 	J(CALL(_useless_197f2,0));	// 20472 call    _useless_197F2 ;~ 0AA7:079C
cs=0xaa7;eip=0x00079f; 	J(JMP(loc_193bc));	// 20473 jmp     loc_193BC ;~ 0AA7:079F
seg001_7d7_proc:
	// 20502 
loc_19827:
	// 5616 
cs=0xaa7;eip=0x0007d7; 	J(CALL(_mouse_hide,0));	// 20503 call    _mouse_hide ;~ 0AA7:07D7
cs=0xaa7;eip=0x0007da; 	X(AND(byte_1de90, 0x0FE));	// 20504 and     byte_1DE90, 0FEh ;~ 0AA7:07DA
cs=0xaa7;eip=0x0007df; 	T(MOV(bx, offset(dseg,_str_24461)));	// 20505 mov     bx, offset _str_24461 ; _mystr ;~ 0AA7:07DF
cs=0xaa7;eip=0x0007e2; 	T(MOV(ax, _mousecolumn));	// 20506 mov     ax, _mousecolumn ;~ 0AA7:07E2
cs=0xaa7;eip=0x0007e5; 	T(MOV(bp, _mouserow));	// 20507 mov     bp, _mouserow ;~ 0AA7:07E5
cs=0xaa7;eip=0x0007e9; 	T(SHR(ax, 3));	// 20508 shr     ax, 3 ;~ 0AA7:07E9
cs=0xaa7;eip=0x0007ec; 	T(SHR(bp, 3));	// 20509 shr     bp, 3 ;~ 0AA7:07EC
cs=0xaa7;eip=0x0007ef; 	J(CALL(_mouse_1c7cf,0));	// 20510 call    _mouse_1C7CF ;~ 0AA7:07EF
cs=0xaa7;eip=0x0007f2; 	J(JC(loc_193bc));	// 20511 jb      loc_193BC ;~ 0AA7:07F2
cs=0xaa7;eip=0x0007f6; __disp=bx;
	J(return __dispatch_call(__disp, _state););	// 20512 jmp     bx ;~ 0AA7:07F6
loc_19848:
	// 5617 
cs=0xaa7;eip=0x0007f8; 	J(CALL(_mouse_hide,0));	// 20516 call    _mouse_hide ;~ 0AA7:07F8
cs=0xaa7;eip=0x0007fb; 	T(MOV(bx, offset(dseg,mystr)));	// 20517 mov     bx, offset mystr ; _mystr ;~ 0AA7:07FB
cs=0xaa7;eip=0x0007fe; 	T(MOV(ax, _mousecolumn));	// 20518 mov     ax, _mousecolumn ;~ 0AA7:07FE
cs=0xaa7;eip=0x000801; 	T(MOV(bp, _mouserow));	// 20519 mov     bp, _mouserow ;~ 0AA7:0801
cs=0xaa7;eip=0x000805; 	T(SHR(ax, 3));	// 20520 shr     ax, 3 ;~ 0AA7:0805
cs=0xaa7;eip=0x000808; 	T(SHR(bp, 3));	// 20521 shr     bp, 3 ;~ 0AA7:0808
cs=0xaa7;eip=0x00080b; 	J(CALL(_mouse_1c7cf,0));	// 20522 call    _mouse_1C7CF ;~ 0AA7:080B
cs=0xaa7;eip=0x00080e; 	J(JC(loc_193bc));	// 20523 jb      loc_193BC ;~ 0AA7:080E
cs=0xaa7;eip=0x000812; 	X(PUSH(es));	// 20524 push    es ;~ 0AA7:0812
cs=0xaa7;eip=0x000813; 	T(XOR(dx, dx));	// 20525 xor     dx, dx ;~ 0AA7:0813
cs=0xaa7;eip=0x000815; 	T(MOV(es, dx));	// 20526 mov     es, dx ;~ 0AA7:0815
cs=0xaa7;eip=0x000817; 	T(MOV(edx, *(dd*)(raddr(es,0x46C))));	// 20528 mov     edx, es:46Ch ;~ 0AA7:0817
cs=0xaa7;eip=0x00081d; 	T(CMP(edx, dword_1de88));	// 20529 cmp     edx, dword_1DE88 ;~ 0AA7:081D
cs=0xaa7;eip=0x000822; 	J(JZ(loc_1987c));	// 20530 jz      short loc_1987C ;~ 0AA7:0822
cs=0xaa7;eip=0x000824; 	X(MOV(dword_1de88, edx));	// 20531 mov     dword_1DE88, edx ;~ 0AA7:0824
cs=0xaa7;eip=0x000829; 	X(POP(es));	// 20532 pop     es ;~ 0AA7:0829
cs=0xaa7;eip=0x00082a; __disp=bx;
	J(return __dispatch_call(__disp, _state););	// 20534 jmp     bx ;~ 0AA7:082A
loc_1987c:
	// 5618 
cs=0xaa7;eip=0x00082c; 	X(POP(es));	// 20538 pop     es ;~ 0AA7:082C
cs=0xaa7;eip=0x00082d; 	J(JMP(loc_193bc));	// 20539 jmp     loc_193BC ;~ 0AA7:082D
loc_19880:
	// 5619 
cs=0xaa7;eip=0x000830; 	T(CMP(bp, 0x0E));	// 20544 cmp     bp, 0Eh ;~ 0AA7:0830
cs=0xaa7;eip=0x000833; 	J(JA(loc_193bc));	// 20545 ja      loc_193BC ;~ 0AA7:0833
cs=0xaa7;eip=0x000837; 	T(MOV(ax, bp));	// 20546 mov     ax, bp ;~ 0AA7:0837
cs=0xaa7;eip=0x000839; 	J(JMP(loc_19464));	// 20547 jmp     loc_19464 ;~ 0AA7:0839
_modules_search:
	// 20836 
cs=0xaa7;eip=0x000a03; 	X(MOV(word_1de64, 2192));	// 20837 mov     word_1DE64, 2192 ;~ 0AA7:0A03
cs=0xaa7;eip=0x000a09; 	X(MOV(word_1de66, 0));	// 20838 mov     word_1DE66, 0 ;~ 0AA7:0A09
cs=0xaa7;eip=0x000a0f; 	T(CMP(word_1de52, 0));	// 20839 cmp     word_1DE52, 0 ;~ 0AA7:0A0F
cs=0xaa7;eip=0x000a14; 	J(JZ(loc_19a6e));	// 20840 jz      short loc_19A6E ;~ 0AA7:0A14
cs=0xaa7;eip=0x000a16; 	T(MOV(es, word_1de52));	// 20841 mov     es, word_1DE52 ;~ 0AA7:0A16
cs=0xaa7;eip=0x000a1a; 	T(MOV(ah, 0x49));	// 20843 mov     ah, 49h ;~ 0AA7:0A1A
cs=0xaa7;eip=0x000a1c; 	S(_INT(0x21));	// 20844 int     21h             ; DOS - 2+ - FREE MEMORY ;~ 0AA7:0A1C
loc_19a6e:
	// 5638 
cs=0xaa7;eip=0x000a1e; 	T(MOV(bx, 0x1000));	// 20848 mov     bx, 1000h ;~ 0AA7:0A1E
cs=0xaa7;eip=0x000a21; 	T(MOV(ah, 0x48));	// 20849 mov     ah, 48h ;~ 0AA7:0A21
cs=0xaa7;eip=0x000a23; 	S(_INT(0x21));	// 20850 int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 0AA7:0A23
cs=0xaa7;eip=0x000a25; 	J(JC(loc_19250));	// 20852 jb      loc_19250 ;~ 0AA7:0A25
cs=0xaa7;eip=0x000a29; 	X(MOV(word_1de52, ax));	// 20853 mov     word_1DE52, ax ;~ 0AA7:0A29
cs=0xaa7;eip=0x000a2c; 	T(MOV(es, ax));	// 20854 mov     es, ax ;~ 0AA7:0A2C
cs=0xaa7;eip=0x000a2e; 	T(XOR(di, di));	// 20856 xor     di, di ;~ 0AA7:0A2E
cs=0xaa7;eip=0x000a30; 	T(MOV(cx, 0x4000));	// 20857 mov     cx, 4000h ;~ 0AA7:0A30
cs=0xaa7;eip=0x000a33; 	T(XOR(eax, eax));	// 20858 xor     eax, eax ;~ 0AA7:0A33
cs=0xaa7;eip=0x000a36; 	T(CLD);	// 20859 cld ;~ 0AA7:0A36
	// 20860 rep stosd ;~ 0AA7:0A37
cs=0xaa7;eip=0x000a37; 	X(	REP STOSD);	// 20860 rep stosd ;~ 0AA7:0A37
cs=0xaa7;eip=0x000a3a; 	X(MOV(*(dd*)((_buffer_1db6c)), 0x2A2E2A));	// 20861 mov     dword ptr _buffer_1DB6C, 2A2E2Ah ; '*.*' ;~ 0AA7:0A3A
cs=0xaa7;eip=0x000a43; 	X(MOV(word_1de5c, 0));	// 20862 mov     word_1DE5C, 0 ;~ 0AA7:0A43
cs=0xaa7;eip=0x000a49; 	X(MOV(word_1de54, 0));	// 20863 mov     word_1DE54, 0 ;~ 0AA7:0A49
cs=0xaa7;eip=0x000a4f; 	X(MOV(word_1de56, 0));	// 20864 mov     word_1DE56, 0 ;~ 0AA7:0A4F
cs=0xaa7;eip=0x000a55; 	X(MOV(word_1de58, 0));	// 20865 mov     word_1DE58, 0 ;~ 0AA7:0A55
cs=0xaa7;eip=0x000a5b; 	X(MOV(word_1de5a, 0));	// 20866 mov     word_1DE5A, 0 ;~ 0AA7:0A5B
cs=0xaa7;eip=0x000a61; 	T(CLD);	// 20867 cld ;~ 0AA7:0A61
cs=0xaa7;eip=0x000a62; 	X(MOV(word_1de4e, 0x12));	// 20868 mov     word_1DE4E, 12h ;~ 0AA7:0A62
cs=0xaa7;eip=0x000a68; 	J(CALL(_find_mods,0));	// 20869 call    _find_mods ;~ 0AA7:0A68
cs=0xaa7;eip=0x000a6b; 	T(MOV(es, word_1de52));	// 20870 mov     es, word_1DE52 ;~ 0AA7:0A6B
cs=0xaa7;eip=0x000a6f; 	J(JC(loc_19ca2));	// 20871 jb      loc_19CA2 ;~ 0AA7:0A6F
loc_19ac3:
	// 5639 
cs=0xaa7;eip=0x000a73; 	T(LFS(di, _videomempointer));	// 20874 lfs     di, _videomempointer ;~ 0AA7:0A73
cs=0xaa7;eip=0x000a78; 	T(ADD(di, word_1de64));	// 20876 add     di, word_1DE64 ;~ 0AA7:0A78
cs=0xaa7;eip=0x000a7c; 	T(MOV(bx, word_1de66));	// 20877 mov     bx, word_1DE66 ;~ 0AA7:0A7C
cs=0xaa7;eip=0x000a80; 	T(MOV(ah, 0x7F));	// 20878 mov     ah, 7Fh ;~ 0AA7:0A80
cs=0xaa7;eip=0x000a82; 	T(MOV(al, *((_slider)+bx)));	// 20879 mov     al, byte ptr _slider[bx] ; "
cs=0xaa7;eip=0x000a86; 	X(MOV(*(dw*)(raddr(fs,di)), ax));	// 20880 mov     fs:[di], ax ;~ 0AA7:0A86
cs=0xaa7;eip=0x000a89; 	X(INC(word_1de66));	// 20881 inc     word_1DE66 ;~ 0AA7:0A89
cs=0xaa7;eip=0x000a8d; 	X(AND(word_1de66, 7));	// 20882 and     word_1DE66, 7 ;~ 0AA7:0A8D
cs=0xaa7;eip=0x000a92; 	T(TEST(byte_1dc01, 0x10));	// 20883 test    byte_1DC01, 10h ;~ 0AA7:0A92
cs=0xaa7;eip=0x000a97; 	J(JZ(loc_19b1d));	// 20884 jz      short loc_19B1D ;~ 0AA7:0A97
cs=0xaa7;eip=0x000a99; 	T(CMP(*(dw*)((_buffer_1db6c)), '.'));	// 20885 cmp     word ptr _buffer_1DB6C, '.' ;~ 0AA7:0A99
cs=0xaa7;eip=0x000a9e; 	J(JZ(loc_19b1d));	// 20886 jz      short loc_19B1D ;~ 0AA7:0A9E
cs=0xaa7;eip=0x000aa0; 	X(MOV(*(raddr(es,2)), 0));	// 20887 mov     byte ptr es:2, 0 ;~ 0AA7:0AA0
cs=0xaa7;eip=0x000aa6; 	T(MOV(si, offset(dseg,_buffer_1db6c)));	// 20888 mov     si, offset _buffer_1DB6C ;~ 0AA7:0AA6
cs=0xaa7;eip=0x000aa9; 	T(MOV(di, 0x0C));	// 20889 mov     di, 0Ch ;~ 0AA7:0AA9
cs=0xaa7;eip=0x000aac; 	T(CLD);	// 20890 cld ;~ 0AA7:0AAC
cs=0xaa7;eip=0x000aad; 	X(MOVSD);	// 20891 movsd ;~ 0AA7:0AAD
cs=0xaa7;eip=0x000aaf; 	X(MOVSD);	// 20892 movsd ;~ 0AA7:0AAF
cs=0xaa7;eip=0x000ab1; 	X(MOVSD);	// 20893 movsd ;~ 0AA7:0AB1
cs=0xaa7;eip=0x000ab3; 	X(MOVSB);	// 20894 movsb ;~ 0AA7:0AB3
cs=0xaa7;eip=0x000ab4; 	X(INC(word_1de56));	// 20895 inc     word_1DE56 ;~ 0AA7:0AB4
cs=0xaa7;eip=0x000ab8; 	T(MOV(ax, es));	// 20896 mov     ax, es ;~ 0AA7:0AB8
cs=0xaa7;eip=0x000aba; 	T(ADD(ax, 3));	// 20897 add     ax, 3 ;~ 0AA7:0ABA
cs=0xaa7;eip=0x000abd; 	T(MOV(es, ax));	// 20898 mov     es, ax ;~ 0AA7:0ABD
cs=0xaa7;eip=0x000abf; 	X(INC(word_1de54));	// 20900 inc     word_1DE54 ;~ 0AA7:0ABF
cs=0xaa7;eip=0x000ac3; 	T(CMP(word_1de54, 0x52B));	// 20901 cmp     word_1DE54, 52Bh ;~ 0AA7:0AC3
cs=0xaa7;eip=0x000ac9; 	J(JNC(loc_19ca2));	// 20902 jnb     loc_19CA2 ;~ 0AA7:0AC9
loc_19b1d:
	// 5640 
cs=0xaa7;eip=0x000acd; 	X(PUSH(es));	// 20906 push    es ;~ 0AA7:0ACD
cs=0xaa7;eip=0x000ace; 	J(CALL(_dosfindnext,0));	// 20907 call    _dosfindnext ;~ 0AA7:0ACE
cs=0xaa7;eip=0x000ad1; 	X(POP(es));	// 20908 pop     es ;~ 0AA7:0AD1
cs=0xaa7;eip=0x000ad2; 	J(JNC(loc_19ac3));	// 20910 jnb     short loc_19AC3 ;~ 0AA7:0AD2
cs=0xaa7;eip=0x000ad4; 	X(MOV(*(dd*)((_buffer_1db6c)), 0x2A2E2A));	// 20911 mov     dword ptr _buffer_1DB6C, 2A2E2Ah ; '*.*' ;~ 0AA7:0AD4
cs=0xaa7;eip=0x000add; 	X(MOV(word_1de4e, 2));	// 20912 mov     word_1DE4E, 2 ;~ 0AA7:0ADD
cs=0xaa7;eip=0x000ae3; 	X(PUSH(es));	// 20913 push    es ;~ 0AA7:0AE3
cs=0xaa7;eip=0x000ae4; 	J(CALL(_find_mods,0));	// 20914 call    _find_mods ;~ 0AA7:0AE4
cs=0xaa7;eip=0x000ae7; 	X(POP(es));	// 20915 pop     es ;~ 0AA7:0AE7
cs=0xaa7;eip=0x000ae8; 	J(JC(loc_19ca2));	// 20917 jb      loc_19CA2 ;~ 0AA7:0AE8
loc_19b3c:
	// 5641 
cs=0xaa7;eip=0x000aec; 	T(LFS(di, _videomempointer));	// 20920 lfs     di, _videomempointer ;~ 0AA7:0AEC
cs=0xaa7;eip=0x000af1; 	T(ADD(di, word_1de64));	// 20921 add     di, word_1DE64 ;~ 0AA7:0AF1
cs=0xaa7;eip=0x000af5; 	T(MOV(bx, word_1de66));	// 20922 mov     bx, word_1DE66 ;~ 0AA7:0AF5
cs=0xaa7;eip=0x000af9; 	T(MOV(ah, 0x7F));	// 20923 mov     ah, 7Fh ;~ 0AA7:0AF9
cs=0xaa7;eip=0x000afb; 	T(MOV(al, *((_slider)+bx)));	// 20924 mov     al, byte ptr _slider[bx] ; "
cs=0xaa7;eip=0x000aff; 	X(MOV(*(dw*)(raddr(fs,di)), ax));	// 20925 mov     fs:[di], ax ;~ 0AA7:0AFF
cs=0xaa7;eip=0x000b02; 	X(INC(word_1de66));	// 20926 inc     word_1DE66 ;~ 0AA7:0B02
cs=0xaa7;eip=0x000b06; 	X(AND(word_1de66, 7));	// 20927 and     word_1DE66, 7 ;~ 0AA7:0B06
cs=0xaa7;eip=0x000b0b; 	T(TEST(byte_1dc01, 0x10));	// 20928 test    byte_1DC01, 10h ;~ 0AA7:0B0B
cs=0xaa7;eip=0x000b10; 	J(JNZ(loc_19c99));	// 20929 jnz     loc_19C99 ;~ 0AA7:0B10
cs=0xaa7;eip=0x000b14; 	T(MOV(si, offset(dseg,_buffer_1db6c)));	// 20930 mov     si, offset _buffer_1DB6C ;~ 0AA7:0B14
cs=0xaa7;eip=0x000b17; 	T(MOV(cx, 8));	// 20931 mov     cx, 8 ;~ 0AA7:0B17
loc_19b6a:
	// 5642 
cs=0xaa7;eip=0x000b1a; 	T(INC(si));	// 20934 inc     si ;~ 0AA7:0B1A
cs=0xaa7;eip=0x000b1b; 	T(CMP(*(raddr(ds,si)), 0));	// 20935 cmp     byte ptr [si], 0 ;~ 0AA7:0B1B
cs=0xaa7;eip=0x000b1e; 	J(JZ(loc_19c99));	// 20936 jz      loc_19C99 ;~ 0AA7:0B1E
cs=0xaa7;eip=0x000b22; 	T(CMP(*(raddr(ds,si)), '.'));	// 20937 cmp     byte ptr [si], '.' ;~ 0AA7:0B22
cs=0xaa7;eip=0x000b25; 	J(JZ(loc_19b7d));	// 20938 jz      short loc_19B7D ;~ 0AA7:0B25
cs=0xaa7;eip=0x000b27; 	T(DEC(cx));	// 20939 dec     cx ;~ 0AA7:0B27
cs=0xaa7;eip=0x000b28; 	J(JNZ(loc_19b6a));	// 20940 jnz     short loc_19B6A ;~ 0AA7:0B28
cs=0xaa7;eip=0x000b2a; 	J(JMP(loc_19c99));	// 20941 jmp     loc_19C99 ;~ 0AA7:0B2A
loc_19b7d:
	// 5643 
cs=0xaa7;eip=0x000b2d; 	T(MOV(edx, *(dd*)(raddr(ds,si))));	// 20945 mov     edx, [si] ;~ 0AA7:0B2D
cs=0xaa7;eip=0x000b30; 	T(MOV(si, offset(dseg,_a_mod_nst_669_s)));	// 20946 mov     si, offset _a_mod_nst_669_s ; ".MOD.NST.669.STM.S3M.MTM.PSM.WOW.INR.FA"... ;~ 0AA7:0B30
loc_19b83:
	// 5644 
cs=0xaa7;eip=0x000b33; 	T(MOV(eax, *(dd*)(raddr(ds,si))));	// 20949 mov     eax, [si] ;~ 0AA7:0B33
cs=0xaa7;eip=0x000b36; 	T(OR(al, al));	// 20950 or      al, al ;~ 0AA7:0B36
cs=0xaa7;eip=0x000b38; 	J(JZ(loc_19c99));	// 20951 jz      loc_19C99 ;~ 0AA7:0B38
cs=0xaa7;eip=0x000b3c; 	T(ADD(si, 4));	// 20952 add     si, 4 ;~ 0AA7:0B3C
cs=0xaa7;eip=0x000b3f; 	T(CMP(eax, edx));	// 20953 cmp     eax, edx ;~ 0AA7:0B3F
cs=0xaa7;eip=0x000b42; 	J(JNZ(loc_19b83));	// 20954 jnz     short loc_19B83 ;~ 0AA7:0B42
cs=0xaa7;eip=0x000b44; 	T(MOV(si, offset(dseg,_buffer_1db6c)));	// 20955 mov     si, offset _buffer_1DB6C ;~ 0AA7:0B44
cs=0xaa7;eip=0x000b47; 	T(MOV(dx, si));	// 20956 mov     dx, si ;~ 0AA7:0B47
cs=0xaa7;eip=0x000b49; 	X(MOV(*(raddr(es,2)), 2));	// 20957 mov     byte ptr es:2, 2 ;~ 0AA7:0B49
cs=0xaa7;eip=0x000b4f; 	X(MOV(*(dw*)(raddr(es,0)), 0));	// 20958 mov     word ptr es:0, 0 ;~ 0AA7:0B4F
cs=0xaa7;eip=0x000b56; 	T(MOV(di, 0x0C));	// 20959 mov     di, 0Ch ;~ 0AA7:0B56
cs=0xaa7;eip=0x000b59; 	T(CLD);	// 20960 cld ;~ 0AA7:0B59
cs=0xaa7;eip=0x000b5a; 	X(MOVSD);	// 20961 movsd ;~ 0AA7:0B5A
cs=0xaa7;eip=0x000b5c; 	X(MOVSD);	// 20962 movsd ;~ 0AA7:0B5C
cs=0xaa7;eip=0x000b5e; 	X(MOVSD);	// 20963 movsd ;~ 0AA7:0B5E
cs=0xaa7;eip=0x000b60; 	X(MOVSB);	// 20964 movsb ;~ 0AA7:0B60
cs=0xaa7;eip=0x000b61; 	T(MOV(si, offset(dseg,byte_1dc01)));	// 20965 mov     si, offset byte_1DC01 ;~ 0AA7:0B61
cs=0xaa7;eip=0x000b64; 	T(MOV(di, 3));	// 20966 mov     di, 3 ;~ 0AA7:0B64
cs=0xaa7;eip=0x000b67; 	X(MOVSB);	// 20967 movsb ;~ 0AA7:0B67
cs=0xaa7;eip=0x000b68; 	X(AND(*(raddr(es,3)), 0x3F));	// 20968 and     byte ptr es:3, 3Fh ;~ 0AA7:0B68
cs=0xaa7;eip=0x000b6e; 	X(MOVSD);	// 20969 movsd ;~ 0AA7:0B6E
cs=0xaa7;eip=0x000b70; 	X(MOVSD);	// 20970 movsd ;~ 0AA7:0B70
cs=0xaa7;eip=0x000b72; 	T(MOV(ebp, eax));	// 20971 mov     ebp, eax ;~ 0AA7:0B72
cs=0xaa7;eip=0x000b75; 	X(INC(word_1de58));	// 20972 inc     word_1DE58 ;~ 0AA7:0B75
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x000b79; 	T(CMP(*(dw*)(((db*)&_key_code)), 1));	// 20973 cmp     cs:_key_code, 1 ;~ 0AA7:0B79
cs=0xaa7;eip=0x000b7f; 	J(JNZ(loc_19bdd));	// 20974 jnz     short loc_19BDD ;~ 0AA7:0B7F
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x000b81; 	X(MOV(*(dw*)(((db*)&_key_code)), 0));	// 20975 mov     cs:_key_code, 0 ;~ 0AA7:0B81
cs=0xaa7;eip=0x000b88; 	X(OR(*(db*)(((db*)&_configword)), 0x20));	// 20976 or      byte ptr _configword, 20h ;~ 0AA7:0B88
loc_19bdd:
	// 5645 
cs=0xaa7;eip=0x000b8d; 	T(MOV(si, offset(dseg,asc_1da00)));	// 20979 mov     si, offset asc_1DA00 ; "                      " ;~ 0AA7:0B8D
cs=0xaa7;eip=0x000b90; 	T(MOV(cx, 0x16));	// 20980 mov     cx, 16h ;~ 0AA7:0B90
cs=0xaa7;eip=0x000b93; 	T(TEST(*(db*)(((db*)&_configword)), 0x20));	// 20981 test    byte ptr _configword, 20h ;~ 0AA7:0B93
cs=0xaa7;eip=0x000b98; 	J(JNZ(loc_19c80));	// 20982 jnz     loc_19C80 ;~ 0AA7:0B98
cs=0xaa7;eip=0x000b9c; 	T(MOV(ax, 0x3D00));	// 20983 mov     ax, 3D00h ;~ 0AA7:0B9C
cs=0xaa7;eip=0x000b9f; 	S(_INT(0x21));	// 20984 int     21h             ; DOS - 2+ - OPEN DISK FILE WITH HANDLE ;~ 0AA7:0B9F
cs=0xaa7;eip=0x000ba1; 	J(JC(loc_19c86));	// 20988 jb      loc_19C86 ;~ 0AA7:0BA1
cs=0xaa7;eip=0x000ba5; 	T(MOV(bx, ax));	// 20989 mov     bx, ax ;~ 0AA7:0BA5
cs=0xaa7;eip=0x000ba7; 	T(MOV(dx, offset(dseg,_buffer_1dc6c)));	// 20990 mov     dx, offset _buffer_1DC6C ;~ 0AA7:0BA7
cs=0xaa7;eip=0x000baa; 	T(MOV(bx, ax));	// 20991 mov     bx, ax ;~ 0AA7:0BAA
cs=0xaa7;eip=0x000bac; 	T(MOV(cx, 0x80));	// 20992 mov     cx, 80h ; '
cs=0xaa7;eip=0x000baf; 	T(MOV(ah, 0x3F));	// 20993 mov     ah, 3Fh ; '?' ;~ 0AA7:0BAF
cs=0xaa7;eip=0x000bb1; 	X(PUSH(bx));	// 20994 push    bx ;~ 0AA7:0BB1
cs=0xaa7;eip=0x000bb2; 	S(_INT(0x21));	// 20995 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 0AA7:0BB2
cs=0xaa7;eip=0x000bb4; 	X(POP(bx));	// 20998 pop     bx ;~ 0AA7:0BB4
cs=0xaa7;eip=0x000bb5; 	X(PUSHF);	// 20999 pushf ;~ 0AA7:0BB5
cs=0xaa7;eip=0x000bb6; 	T(MOV(ah, 0x3E));	// 21000 mov     ah, 3Eh ;~ 0AA7:0BB6
cs=0xaa7;eip=0x000bb8; 	S(_INT(0x21));	// 21001 int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 0AA7:0BB8
cs=0xaa7;eip=0x000bba; 	X(POPF);	// 21003 popf ;~ 0AA7:0BBA
cs=0xaa7;eip=0x000bbb; 	J(JC(loc_19c86));	// 21004 jb      short loc_19C86 ;~ 0AA7:0BBB
cs=0xaa7;eip=0x000bbd; 	T(MOV(si, offset(dseg,byte_1dc7c)));	// 21005 mov     si, offset byte_1DC7C ;~ 0AA7:0BBD
cs=0xaa7;eip=0x000bc0; 	T(MOV(cx, 0x16));	// 21006 mov     cx, 16h ;~ 0AA7:0BC0
cs=0xaa7;eip=0x000bc3; 	T(CMP(ebp, 0x524E492E));	// 21007 cmp     ebp, 524E492Eh  ; .INR ;~ 0AA7:0BC3
cs=0xaa7;eip=0x000bca; 	J(JZ(loc_19c80));	// 21008 jz      short loc_19C80 ;~ 0AA7:0BCA
cs=0xaa7;eip=0x000bcc; 	T(MOV(si, offset(dseg,unk_1dc7b)));	// 21009 mov     si, offset unk_1DC7B ;~ 0AA7:0BCC
cs=0xaa7;eip=0x000bcf; 	T(MOV(cx, 0x16));	// 21010 mov     cx, 16h ;~ 0AA7:0BCF
cs=0xaa7;eip=0x000bd2; 	T(CMP(ebp, 0x544C552E));	// 21011 cmp     ebp, 544C552Eh  ; .ULT ;~ 0AA7:0BD2
cs=0xaa7;eip=0x000bd9; 	J(JZ(loc_19c80));	// 21012 jz      short loc_19C80 ;~ 0AA7:0BD9
cs=0xaa7;eip=0x000bdb; 	T(MOV(si, offset(dseg,unk_1dc70)));	// 21013 mov     si, offset unk_1DC70 ;~ 0AA7:0BDB
cs=0xaa7;eip=0x000bde; 	T(MOV(cx, 0x16));	// 21014 mov     cx, 16h ;~ 0AA7:0BDE
cs=0xaa7;eip=0x000be1; 	T(CMP(ebp, 0x4D544D2E));	// 21015 cmp     ebp, 4D544D2Eh  ; .MTM ;~ 0AA7:0BE1
cs=0xaa7;eip=0x000be8; 	J(JZ(loc_19c80));	// 21016 jz      short loc_19C80 ;~ 0AA7:0BE8
cs=0xaa7;eip=0x000bea; 	T(CMP(ebp, 0x4D53502E));	// 21017 cmp     ebp, 4D53502Eh  ; .PSM ;~ 0AA7:0BEA
cs=0xaa7;eip=0x000bf1; 	J(JZ(loc_19c80));	// 21018 jz      short loc_19C80 ;~ 0AA7:0BF1
cs=0xaa7;eip=0x000bf3; 	T(CMP(ebp, 0x5241462E));	// 21019 cmp     ebp, 5241462Eh  ; .FAR ;~ 0AA7:0BF3
cs=0xaa7;eip=0x000bfa; 	J(JZ(loc_19c80));	// 21020 jz      short loc_19C80 ;~ 0AA7:0BFA
cs=0xaa7;eip=0x000bfc; 	T(CMP(ebp, 0x3936362E));	// 21021 cmp     ebp, 3936362Eh  ; .669 ;~ 0AA7:0BFC
cs=0xaa7;eip=0x000c03; 	J(JZ(loc_19c71));	// 21022 jz      short loc_19C71 ;~ 0AA7:0C03
cs=0xaa7;eip=0x000c05; 	T(MOV(si, offset(dseg,byte_1dc7c)));	// 21023 mov     si, offset byte_1DC7C ;~ 0AA7:0C05
cs=0xaa7;eip=0x000c08; 	T(MOV(cx, 0x16));	// 21024 mov     cx, 16h ;~ 0AA7:0C08
cs=0xaa7;eip=0x000c0b; 	T(CMP(ebp, 0x5353542E));	// 21025 cmp     ebp, 5353542Eh  ; .TSS ;~ 0AA7:0C0B
cs=0xaa7;eip=0x000c12; 	J(JZ(loc_19c80));	// 21026 jz      short loc_19C80 ;~ 0AA7:0C12
cs=0xaa7;eip=0x000c14; 	T(MOV(si, offset(dseg,_buffer_1dc6c)));	// 21027 mov     si, offset _buffer_1DC6C ;~ 0AA7:0C14
cs=0xaa7;eip=0x000c17; 	T(MOV(cx, 0x16));	// 21028 mov     cx, 16h ;~ 0AA7:0C17
cs=0xaa7;eip=0x000c1a; 	X(MOV(*(dw*)(raddr(ds,si+0x14)), '  '));	// 21029 mov     word ptr [si+14h], '  ' ;~ 0AA7:0C1A
cs=0xaa7;eip=0x000c1f; 	J(JMP(loc_19c80));	// 21030 jmp     short loc_19C80 ;~ 0AA7:0C1F
loc_19c71:
	// 5646 
cs=0xaa7;eip=0x000c21; 	T(MOV(si, offset(dseg,_buffer_1dc6c)+1));	// 21034 mov     si, (offset _buffer_1DC6C+1) ;~ 0AA7:0C21
cs=0xaa7;eip=0x000c24; 	T(MOV(cx, 0x54));	// 21035 mov     cx, 54h ; 'T' ;~ 0AA7:0C24
loc_19c77:
	// 5647 
cs=0xaa7;eip=0x000c27; 	T(INC(si));	// 21038 inc     si ;~ 0AA7:0C27
cs=0xaa7;eip=0x000c28; 	T(CMP(*(raddr(ds,si)), ' '));	// 21039 cmp     byte ptr [si], ' ' ;~ 0AA7:0C28
cs=0xaa7;eip=0x000c2b; 	J(LOOPE(loc_19c77));	// 21040 loope   loc_19C77 ;~ 0AA7:0C2B
cs=0xaa7;eip=0x000c2d; 	T(MOV(cx, 0x16));	// 21041 mov     cx, 16h ;~ 0AA7:0C2D
loc_19c80:
	// 5648 
cs=0xaa7;eip=0x000c30; 	T(MOV(di, 0x1A));	// 21045 mov     di, 1Ah ;~ 0AA7:0C30
cs=0xaa7;eip=0x000c33; 	J(CALL(_cpy_printable,0));	// 21046 call    _cpy_printable ;~ 0AA7:0C33
loc_19c86:
	// 5649 
cs=0xaa7;eip=0x000c36; 	T(MOV(ax, es));	// 21050 mov     ax, es ;~ 0AA7:0C36
cs=0xaa7;eip=0x000c38; 	T(ADD(ax, 3));	// 21051 add     ax, 3 ;~ 0AA7:0C38
cs=0xaa7;eip=0x000c3b; 	T(MOV(es, ax));	// 21052 mov     es, ax ;~ 0AA7:0C3B
cs=0xaa7;eip=0x000c3d; 	X(INC(word_1de54));	// 21054 inc     word_1DE54 ;~ 0AA7:0C3D
cs=0xaa7;eip=0x000c41; 	T(CMP(word_1de54, 0x52B));	// 21055 cmp     word_1DE54, 52Bh ;~ 0AA7:0C41
cs=0xaa7;eip=0x000c47; 	J(JNC(loc_19ca2));	// 21056 jnb     short loc_19CA2 ;~ 0AA7:0C47
loc_19c99:
	// 5650 
cs=0xaa7;eip=0x000c49; 	X(PUSH(es));	// 21060 push    es ;~ 0AA7:0C49
cs=0xaa7;eip=0x000c4a; 	J(CALL(_dosfindnext,0));	// 21061 call    _dosfindnext ;~ 0AA7:0C4A
cs=0xaa7;eip=0x000c4d; 	X(POP(es));	// 21062 pop     es ;~ 0AA7:0C4D
cs=0xaa7;eip=0x000c4e; 	J(JNC(loc_19b3c));	// 21063 jnb     loc_19B3C ;~ 0AA7:0C4E
loc_19ca2:
	// 5651 
cs=0xaa7;eip=0x000c52; 	T(MOV(ah, 0x19));	// 21067 mov     ah, 19h ;~ 0AA7:0C52
cs=0xaa7;eip=0x000c54; 	S(_INT(0x21));	// 21068 int     21h             ; DOS - GET DEFAULT DISK NUMBER ;~ 0AA7:0C54
cs=0xaa7;eip=0x000c56; 	X(PUSH(ax));	// 21069 push    ax ;~ 0AA7:0C56
cs=0xaa7;eip=0x000c57; 	T(XOR(dl, dl));	// 21070 xor     dl, dl ;~ 0AA7:0C57
loc_19ca9:
	// 5652 
cs=0xaa7;eip=0x000c59; 	X(PUSH(dx));	// 21073 push    dx ;~ 0AA7:0C59
cs=0xaa7;eip=0x000c5a; 	T(MOV(ah, 0x0E));	// 21074 mov     ah, 0Eh ;~ 0AA7:0C5A
cs=0xaa7;eip=0x000c5c; 	S(_INT(0x21));	// 21075 int     21h             ; DOS - SELECT DISK ;~ 0AA7:0C5C
cs=0xaa7;eip=0x000c5e; 	T(MOV(ah, 0x19));	// 21078 mov     ah, 19h ;~ 0AA7:0C5E
cs=0xaa7;eip=0x000c60; 	S(_INT(0x21));	// 21079 int     21h             ; DOS - GET DEFAULT DISK NUMBER ;~ 0AA7:0C60
cs=0xaa7;eip=0x000c62; 	X(POP(dx));	// 21080 pop     dx ;~ 0AA7:0C62
cs=0xaa7;eip=0x000c63; 	T(CMP(al, dl));	// 21081 cmp     al, dl ;~ 0AA7:0C63
cs=0xaa7;eip=0x000c65; 	J(JNZ(loc_19cdf));	// 21082 jnz     short loc_19CDF ;~ 0AA7:0C65
cs=0xaa7;eip=0x000c67; 	T(MOV(eax, 0x5D3A415B));	// 21083 mov     eax, 5D3A415Bh  ; [A:] ;~ 0AA7:0C67
cs=0xaa7;eip=0x000c6d; 	T(ADD(ah, dl));	// 21084 add     ah, dl ;~ 0AA7:0C6D
cs=0xaa7;eip=0x000c6f; 	X(MOV(*(dd*)(raddr(es,0x0C)), eax));	// 21085 mov     es:0Ch, eax ;~ 0AA7:0C6F
cs=0xaa7;eip=0x000c74; 	X(MOV(*(raddr(es,0x10)), 0));	// 21086 mov     byte ptr es:10h, 0 ;~ 0AA7:0C74
cs=0xaa7;eip=0x000c7a; 	X(MOV(*(raddr(es,2)), 1));	// 21087 mov     byte ptr es:2, 1 ;~ 0AA7:0C7A
cs=0xaa7;eip=0x000c80; 	X(INC(word_1de5a));	// 21088 inc     word_1DE5A ;~ 0AA7:0C80
cs=0xaa7;eip=0x000c84; 	T(MOV(ax, es));	// 21089 mov     ax, es ;~ 0AA7:0C84
cs=0xaa7;eip=0x000c86; 	T(ADD(ax, 3));	// 21090 add     ax, 3 ;~ 0AA7:0C86
cs=0xaa7;eip=0x000c89; 	T(MOV(es, ax));	// 21091 mov     es, ax ;~ 0AA7:0C89
cs=0xaa7;eip=0x000c8b; 	X(INC(word_1de54));	// 21093 inc     word_1DE54 ;~ 0AA7:0C8B
loc_19cdf:
	// 5653 
cs=0xaa7;eip=0x000c8f; 	T(INC(dl));	// 21096 inc     dl ;~ 0AA7:0C8F
cs=0xaa7;eip=0x000c91; 	T(CMP(dl, 0x1A));	// 21097 cmp     dl, 1Ah ;~ 0AA7:0C91
cs=0xaa7;eip=0x000c94; 	J(JC(loc_19ca9));	// 21098 jb      short loc_19CA9 ;~ 0AA7:0C94
cs=0xaa7;eip=0x000c96; 	X(POP(dx));	// 21099 pop     dx ;~ 0AA7:0C96
cs=0xaa7;eip=0x000c97; 	T(MOV(ah, 0x0E));	// 21100 mov     ah, 0Eh ;~ 0AA7:0C97
cs=0xaa7;eip=0x000c99; 	S(_INT(0x21));	// 21101 int     21h             ; DOS - SELECT DISK ;~ 0AA7:0C99
cs=0xaa7;eip=0x000c9b; 	T(MOV(es, word_1de52));	// 21104 mov     es, word_1DE52 ;~ 0AA7:0C9B
cs=0xaa7;eip=0x000c9f; 	T(MOV(ax, word_1de54));	// 21106 mov     ax, word_1DE54 ;~ 0AA7:0C9F
cs=0xaa7;eip=0x000ca2; 	T(MOV(bx, ax));	// 21107 mov     bx, ax ;~ 0AA7:0CA2
cs=0xaa7;eip=0x000ca4; 	T(SHL(ax, 1));	// 21108 shl     ax, 1 ;~ 0AA7:0CA4
cs=0xaa7;eip=0x000ca6; 	T(ADD(bx, ax));	// 21109 add     bx, ax ;~ 0AA7:0CA6
cs=0xaa7;eip=0x000ca8; 	T(MOV(ah, 0x4A));	// 21110 mov     ah, 4Ah ;~ 0AA7:0CA8
cs=0xaa7;eip=0x000caa; 	S(_INT(0x21));	// 21111 int     21h             ; DOS - 2+ - ADJUST MEMORY BLOCK SIZE (SETBLOCK) ;~ 0AA7:0CAA
cs=0xaa7;eip=0x000cac; 	T(CLC);	// 21114 clc ;~ 0AA7:0CAC
cs=0xaa7;eip=0x000cad; 	J(RETN(0));	// 21115 retn ;~ 0AA7:0CAD
seg001_d44_proc:
	// 21231 
loc_19d94:
	// 5662 
cs=0xaa7;eip=0x000d44; 	X(MOV(byte_1de7e, 4));	// 21232 mov     byte_1DE7E, 4 ;~ 0AA7:0D44
cs=0xaa7;eip=0x000d49; 	X(MOV(*(dw*)(((db*)&_messagepointer)), offset(dseg,_alistfilenotfou)));	// 21233 mov     word ptr _messagepointer, offset _aListFileNotFou ; "List file not found.\r\n$" ;~ 0AA7:0D49
cs=0xaa7;eip=0x000d4f; 	X(MOV(*(dw*)(((db*)&_messagepointer)+2), ds));	// 21234 mov     word ptr _messagepointer+2, ds ;~ 0AA7:0D4F
cs=0xaa7;eip=0x000d53; 	T(MOV(dx, offset(dseg,_buffer_1db6c)+1));	// 21235 mov     dx, (offset _buffer_1DB6C+1) ;~ 0AA7:0D53
cs=0xaa7;eip=0x000d56; 	T(MOV(ax, 0x3D00));	// 21236 mov     ax, 3D00h ;~ 0AA7:0D56
cs=0xaa7;eip=0x000d59; 	S(_INT(0x21));	// 21237 int     21h             ; DOS - 2+ - OPEN DISK FILE WITH HANDLE ;~ 0AA7:0D59
cs=0xaa7;eip=0x000d5b; 	J(JC(loc_19256));	// 21241 jb      loc_19256 ;~ 0AA7:0D5B
cs=0xaa7;eip=0x000d5f; 	X(PUSH(ax));	// 21242 push    ax ;~ 0AA7:0D5F
cs=0xaa7;eip=0x000d60; 	J(CALL(_callsubx,0));	// 21243 call    _callsubx ;~ 0AA7:0D60
cs=0xaa7;eip=0x000d63; 	X(POP(bx));	// 21244 pop     bx ;~ 0AA7:0D63
cs=0xaa7;eip=0x000d64; 	J(JC(loc_19256));	// 21245 jb      loc_19256 ;~ 0AA7:0D64
loc_19db8:
	// 5663 
cs=0xaa7;eip=0x000d68; 	T(MOV(dx, offset(dseg,_buffer_1db6c)));	// 21249 mov     dx, offset _buffer_1DB6C ;~ 0AA7:0D68
loc_19dbb:
	// 5664 
cs=0xaa7;eip=0x000d6b; 	T(MOV(cx, 1));	// 21252 mov     cx, 1 ;~ 0AA7:0D6B
cs=0xaa7;eip=0x000d6e; 	T(MOV(ah, 0x3F));	// 21253 mov     ah, 3Fh ; '?' ;~ 0AA7:0D6E
cs=0xaa7;eip=0x000d70; 	X(PUSH(bx));	// 21254 push    bx ;~ 0AA7:0D70
cs=0xaa7;eip=0x000d71; 	X(PUSH(dx));	// 21255 push    dx ;~ 0AA7:0D71
cs=0xaa7;eip=0x000d72; 	S(_INT(0x21));	// 21256 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 0AA7:0D72
cs=0xaa7;eip=0x000d74; 	X(POP(dx));	// 21259 pop     dx ;~ 0AA7:0D74
cs=0xaa7;eip=0x000d75; 	X(POP(bx));	// 21260 pop     bx ;~ 0AA7:0D75
cs=0xaa7;eip=0x000d76; 	T(MOV(di, dx));	// 21261 mov     di, dx ;~ 0AA7:0D76
cs=0xaa7;eip=0x000d78; 	J(JC(loc_19e03));	// 21262 jb      short loc_19E03 ;~ 0AA7:0D78
cs=0xaa7;eip=0x000d7a; 	T(OR(ax, ax));	// 21263 or      ax, ax ;~ 0AA7:0D7A
cs=0xaa7;eip=0x000d7c; 	J(JZ(loc_19e03));	// 21264 jz      short loc_19E03 ;~ 0AA7:0D7C
cs=0xaa7;eip=0x000d7e; 	T(INC(dx));	// 21265 inc     dx ;~ 0AA7:0D7E
cs=0xaa7;eip=0x000d7f; 	T(CMP(*(raddr(ds,di)), 0x1A));	// 21266 cmp     byte ptr [di], 1Ah ;~ 0AA7:0D7F
cs=0xaa7;eip=0x000d82; 	J(JZ(loc_19e03));	// 21267 jz      short loc_19E03 ;~ 0AA7:0D82
cs=0xaa7;eip=0x000d84; 	T(CMP(*(raddr(ds,di)), ' '));	// 21268 cmp     byte ptr [di], ' ' ;~ 0AA7:0D84
cs=0xaa7;eip=0x000d87; 	J(JNC(loc_19dbb));	// 21269 jnb     short loc_19DBB ;~ 0AA7:0D87
cs=0xaa7;eip=0x000d89; 	X(MOV(*(raddr(ds,di)), 0));	// 21270 mov     byte ptr [di], 0 ;~ 0AA7:0D89
cs=0xaa7;eip=0x000d8c; 	T(CMP(*(_buffer_1db6c), 0));	// 21271 cmp     _buffer_1DB6C, 0 ;~ 0AA7:0D8C
cs=0xaa7;eip=0x000d91; 	J(JZ(loc_19db8));	// 21272 jz      short loc_19DB8 ;~ 0AA7:0D91
cs=0xaa7;eip=0x000d93; 	T(CMP(*(_buffer_1db6c), ';'));	// 21273 cmp     _buffer_1DB6C, ';' ;~ 0AA7:0D93
cs=0xaa7;eip=0x000d98; 	J(JZ(loc_19db8));	// 21274 jz      short loc_19DB8 ;~ 0AA7:0D98
cs=0xaa7;eip=0x000d9a; 	X(PUSH(bx));	// 21275 push    bx ;~ 0AA7:0D9A
cs=0xaa7;eip=0x000d9b; 	X(MOV(word_1de4e, 2));	// 21276 mov     word_1DE4E, 2 ;~ 0AA7:0D9B
cs=0xaa7;eip=0x000da1; 	J(CALL(_find_mods,0));	// 21277 call    _find_mods ;~ 0AA7:0DA1
cs=0xaa7;eip=0x000da4; 	J(JC(loc_19df9));	// 21278 jb      short loc_19DF9 ;~ 0AA7:0DA4
cs=0xaa7;eip=0x000da6; 	J(CALL(_readallmoules,0));	// 21279 call    _readallmoules ;~ 0AA7:0DA6
loc_19df9:
	// 5665 
cs=0xaa7;eip=0x000da9; 	X(POP(bx));	// 21282 pop     bx ;~ 0AA7:0DA9
cs=0xaa7;eip=0x000daa; 	T(CMP(word_1de50, 1));	// 21283 cmp     word_1DE50, 1 ;~ 0AA7:0DAA
cs=0xaa7;eip=0x000daf; 	J(JNZ(loc_19db8));	// 21284 jnz     short loc_19DB8 ;~ 0AA7:0DAF
cs=0xaa7;eip=0x000db1; 	J(JMP(loc_19e09));	// 21285 jmp     short loc_19E09 ;~ 0AA7:0DB1
loc_19e03:
	// 5666 
cs=0xaa7;eip=0x000db3; 	X(MOV(*(raddr(ds,di)), 0));	// 21290 mov     byte ptr [di], 0 ;~ 0AA7:0DB3
cs=0xaa7;eip=0x000db6; 	J(CALL(_readallmoules,0));	// 21291 call    _readallmoules ;~ 0AA7:0DB6
loc_19e09:
	// 5667 
cs=0xaa7;eip=0x000db9; 	X(MOV(byte_1de7e, 0));	// 21294 mov     byte_1DE7E, 0 ;~ 0AA7:0DB9
cs=0xaa7;eip=0x000dbe; 	J(JMP(loc_19250));	// 21295 jmp     loc_19250 ;~ 0AA7:0DBE
_int9_keyb:
	// 25594 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x00302d; 	T(CMP(*(&byte_1c1b8), 1));	// 25595 cmp     cs:byte_1C1B8, 1 ;~ 0AA7:302D
cs=0xaa7;eip=0x003033; 	J(JZ(loc_1c11f));	// 25596 jz      loc_1C11F ;~ 0AA7:3033
cs=0xaa7;eip=0x003037; 	X(PUSH(ax));	// 25597 push    ax ;~ 0AA7:3037
cs=0xaa7;eip=0x003038; 	S(IN(al, 0x60));	// 25598 in      al, 60h         ; 8042 keyboard controller data register ;~ 0AA7:3038
cs=0xaa7;eip=0x00303a; 	T(CMP(al, 0x0E0));	// 25599 cmp     al, 0E0h ; '
cs=0xaa7;eip=0x00303c; 	J(JZ(_l_escaped_scancode));	// 25600 jz      _l_escaped_scancode ;~ 0AA7:303C
cs=0xaa7;eip=0x003040; 	T(CMP(al, 0x0E1));	// 25601 cmp     al, 0E1h ; '
cs=0xaa7;eip=0x003042; 	J(JZ(_l_escaped_scancode));	// 25602 jz      _l_escaped_scancode ;~ 0AA7:3042
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x003046; 	T(MOV(ah, *(&_prev_scan_code)));	// 25603 mov     ah, cs:_prev_scan_code ;~ 0AA7:3046
cs=0xaa7;eip=0x00304b; 	T(OR(ah, ah));	// 25604 or      ah, ah ;~ 0AA7:304B
cs=0xaa7;eip=0x00304d; 	J(JZ(loc_1c0a5));	// 25605 jz      short loc_1C0A5 ;~ 0AA7:304D
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x00304f; 	X(MOV(*(&_prev_scan_code), 0));	// 25606 mov     cs:_prev_scan_code, 0 ;~ 0AA7:304F
loc_1c0a5:
	// 5991 
cs=0xaa7;eip=0x003055; 	T(CMP(al, 0x36));	// 25609 cmp     al, 36h ; '6' ;~ 0AA7:3055
cs=0xaa7;eip=0x003057; 	J(JZ(_l_rshift));	// 25610 jz      short _l_rshift ;~ 0AA7:3057
cs=0xaa7;eip=0x003059; 	T(CMP(al, 0x0B6));	// 25611 cmp     al, 0B6h ; '
cs=0xaa7;eip=0x00305b; 	J(JZ(_l_rshiftup));	// 25612 jz      short _l_rshiftup ;~ 0AA7:305B
cs=0xaa7;eip=0x00305d; 	T(CMP(al, 0x2A));	// 25613 cmp     al, 2Ah ; '*' ;~ 0AA7:305D
cs=0xaa7;eip=0x00305f; 	J(JZ(_l_lshift));	// 25614 jz      short _l_lshift ;~ 0AA7:305F
cs=0xaa7;eip=0x003061; 	T(CMP(al, 0x0AA));	// 25615 cmp     al, 0AAh ; '
cs=0xaa7;eip=0x003063; 	J(JZ(_l_lshiftup));	// 25616 jz      short _l_lshiftup ;~ 0AA7:3063
cs=0xaa7;eip=0x003065; 	T(CMP(al, 0x1D));	// 25617 cmp     al, 1Dh ;~ 0AA7:3065
cs=0xaa7;eip=0x003067; 	J(JZ(_l_ctrl));	// 25618 jz      short _l_ctrl ;~ 0AA7:3067
cs=0xaa7;eip=0x003069; 	T(CMP(al, 0x9D));	// 25619 cmp     al, 9Dh ;~ 0AA7:3069
cs=0xaa7;eip=0x00306b; 	J(JZ(_l_lctrlup));	// 25620 jz      short _l_lctrlup ;~ 0AA7:306B
cs=0xaa7;eip=0x00306d; 	T(CMP(al, 0x38));	// 25621 cmp     al, 38h ; '8' ;~ 0AA7:306D
cs=0xaa7;eip=0x00306f; 	J(JZ(_l_alt));	// 25622 jz      short _l_alt ;~ 0AA7:306F
cs=0xaa7;eip=0x003071; 	T(CMP(al, 0x0B8));	// 25623 cmp     al, 0B8h ; '
cs=0xaa7;eip=0x003073; 	J(JZ(_l_altup));	// 25624 jz      short _l_altup ;~ 0AA7:3073
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x003075; 	X(MOV(*(dw*)(((db*)&_key_code)), ax));	// 25625 mov     cs:_key_code, ax ;~ 0AA7:3075
loc_1c0c9:
	// 5992 
cs=0xaa7;eip=0x003079; 	S(IN(al, 0x61));	// 25629 in      al, 61h         ; PC/XT PPI port B bits: ;~ 0AA7:3079
cs=0xaa7;eip=0x00307b; 	T(OR(al, 0x80));	// 25637 or      al, 80h ;~ 0AA7:307B
cs=0xaa7;eip=0x00307d; 	S(OUT(0x61, al));	// 25638 out     61h, al         ; PC/XT PPI port B bits: ;~ 0AA7:307D
cs=0xaa7;eip=0x00307f; 	T(AND(al, 0x7F));	// 25646 and     al, 7Fh ;~ 0AA7:307F
cs=0xaa7;eip=0x003081; 	S(OUT(0x61, al));	// 25647 out     61h, al         ; PC/XT PPI port B bits: ;~ 0AA7:3081
cs=0xaa7;eip=0x003083; 	T(MOV(al, 0x20));	// 25655 mov     al, 20h ; ' ' ;~ 0AA7:3083
cs=0xaa7;eip=0x003085; 	S(OUT(0x20, al));	// 25656 out     20h, al         ; Interrupt controller, 8259A. ;~ 0AA7:3085
cs=0xaa7;eip=0x003087; 	X(POP(ax));	// 25657 pop     ax ;~ 0AA7:3087
cs=0xaa7;eip=0x003088; 	J(IRET);	// 25658 iret ;~ 0AA7:3088
_l_rshift:
	// 5993 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x003089; 	X(OR(*(dw*)(((db*)&_keyb_switches)), 1));	// 25662 or      cs:_keyb_switches, 1 ;~ 0AA7:3089
cs=0xaa7;eip=0x00308f; 	J(JMP(loc_1c0c9));	// 25663 jmp     short loc_1C0C9 ;~ 0AA7:308F
_l_rshiftup:
	// 5994 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x003091; 	X(AND(*(dw*)(((db*)&_keyb_switches)), ~1));	// 25667 and     cs:_keyb_switches, not 1 ;~ 0AA7:3091
cs=0xaa7;eip=0x003097; 	J(JMP(loc_1c0c9));	// 25668 jmp     short loc_1C0C9 ;~ 0AA7:3097
_l_lshift:
	// 5995 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x003099; 	X(OR(*(dw*)(((db*)&_keyb_switches)), 0x2));	// 25672 or      cs:_keyb_switches, 10b ;~ 0AA7:3099
cs=0xaa7;eip=0x00309f; 	J(JMP(loc_1c0c9));	// 25673 jmp     short loc_1C0C9 ;~ 0AA7:309F
_l_lshiftup:
	// 5996 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0030a1; 	X(AND(*(dw*)(((db*)&_keyb_switches)), ~0x2));	// 25677 and     cs:_keyb_switches, not 10b ;~ 0AA7:30A1
cs=0xaa7;eip=0x0030a7; 	J(JMP(loc_1c0c9));	// 25678 jmp     short loc_1C0C9 ;~ 0AA7:30A7
_l_ctrl:
	// 5997 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0030a9; 	X(OR(*(dw*)(((db*)&_keyb_switches)), 0x4));	// 25682 or      cs:_keyb_switches, 100b ;~ 0AA7:30A9
cs=0xaa7;eip=0x0030af; 	J(JMP(loc_1c0c9));	// 25683 jmp     short loc_1C0C9 ;~ 0AA7:30AF
_l_lctrlup:
	// 5998 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0030b1; 	X(AND(*(dw*)(((db*)&_keyb_switches)), ~0x4));	// 25687 and     cs:_keyb_switches, not 100b ;~ 0AA7:30B1
cs=0xaa7;eip=0x0030b7; 	J(JMP(loc_1c0c9));	// 25688 jmp     short loc_1C0C9 ;~ 0AA7:30B7
_l_alt:
	// 5999 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0030b9; 	X(OR(*(dw*)(((db*)&_keyb_switches)), 0x8));	// 25693 or      cs:_keyb_switches, 1000b ;~ 0AA7:30B9
cs=0xaa7;eip=0x0030bf; 	J(JMP(loc_1c0c9));	// 25694 jmp     short loc_1C0C9 ;~ 0AA7:30BF
_l_altup:
	// 6000 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0030c1; 	X(AND(*(dw*)(((db*)&_keyb_switches)), ~0x8));	// 25698 and     cs:_keyb_switches, not 1000b ;~ 0AA7:30C1
cs=0xaa7;eip=0x0030c7; 	J(JMP(loc_1c0c9));	// 25699 jmp     short loc_1C0C9 ;~ 0AA7:30C7
_l_escaped_scancode:
	// 6001 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0030c9; 	X(MOV(*(&_prev_scan_code), al));	// 25704 mov     cs:_prev_scan_code, al ;~ 0AA7:30C9
cs=0xaa7;eip=0x0030cd; 	J(JMP(loc_1c0c9));	// 25705 jmp     short loc_1C0C9 ;~ 0AA7:30CD
loc_1c11f:
	// 6002 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0030cf; __disp=*(dd*)(((db*)&_oint9_1c1a4));
printf("int9\n");
	J(return __dispatch_call(__disp, _state););	// 25709 jmp     cs:_oint9_1C1A4 ;~ 0AA7:30CF
_int24:
	// 25757 
cs=0xaa7;eip=0x0030f9; 	T(MOV(al, 3));	// 25758 mov     al, 3 ;~ 0AA7:30F9
cs=0xaa7;eip=0x0030fb; 	T(TEST(ah, 8));	// 25759 test    ah, 8 ;~ 0AA7:30FB
cs=0xaa7;eip=0x0030fe; 	J(JNZ(locret_1c159));	// 25760 jnz     short locret_1C159 ;~ 0AA7:30FE
cs=0xaa7;eip=0x003100; 	T(MOV(al, 0));	// 25761 mov     al, 0 ;~ 0AA7:3100
cs=0xaa7;eip=0x003102; 	T(TEST(ah, 0x20));	// 25762 test    ah, 20h ;~ 0AA7:3102
cs=0xaa7;eip=0x003105; 	J(JNZ(locret_1c159));	// 25763 jnz     short locret_1C159 ;~ 0AA7:3105
cs=0xaa7;eip=0x003107; 	T(MOV(al, 1));	// 25764 mov     al, 1 ;~ 0AA7:3107
locret_1c159:
	// 6003 
cs=0xaa7;eip=0x003109; 	J(IRET);	// 25768 iret ;~ 0AA7:3109
_int2f_checkmyself:
	// 25775 
cs=0xaa7;eip=0x00310a; 	X(PUSHF);	// 25776 pushf ;~ 0AA7:310A
cs=0xaa7;eip=0x00310b; 	T(CMP(ax, 0x60FF));	// 25777 cmp     ax, 60FFh ;~ 0AA7:310B
cs=0xaa7;eip=0x00310e; 	J(JZ(_lyesitsme));	// 25778 jz      short _lyesitsme ; DS ;~ 0AA7:310E
loc_1c160:
	// 6004 
cs=0xaa7;eip=0x003110; 	X(POPF);	// 25782 popf ;~ 0AA7:3110
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x003111; __disp=*(dd*)(((db*)&_oint2f_1c1b4));
printf("int2f\n");
	J(return __dispatch_call(__disp, _state););	// 25783 jmp     cs:_oint2f_1C1B4 ;~ 0AA7:3111
_lyesitsme:
	// 6005 
cs=0xaa7;eip=0x003116; 	T(CMP(bx, 0x5344));	// 25787 cmp     bx, 5344h       ; DS ;~ 0AA7:3116
cs=0xaa7;eip=0x00311a; 	J(JNZ(loc_1c160));	// 25788 jnz     short loc_1C160 ;~ 0AA7:311A
cs=0xaa7;eip=0x00311c; 	T(CMP(cx, 0x4D50));	// 25789 cmp     cx, 4D50h       ; PM ;~ 0AA7:311C
cs=0xaa7;eip=0x003120; 	J(JNZ(loc_1c160));	// 25790 jnz     short loc_1C160 ;~ 0AA7:3120
cs=0xaa7;eip=0x003122; 	X(POPF);	// 25791 popf ;~ 0AA7:3122
cs=0xaa7;eip=0x003123; 	T(CMP(dl, 1));	// 25792 cmp     dl, 1 ;~ 0AA7:3123
cs=0xaa7;eip=0x003126; 	J(JZ(loc_1c17c));	// 25793 jz      short loc_1C17C ;~ 0AA7:3126
cs=0xaa7;eip=0x003128; 	T(MOV(ax, 0x4F4B));	// 25794 mov     ax, 4F4Bh       ; KO ;~ 0AA7:3128
cs=0xaa7;eip=0x00312b; 	J(IRET);	// 25795 iret ;~ 0AA7:312B
loc_1c17c:
	// 6006 
cs=0xaa7;eip=0x00312c; 	X(PUSH(ax));	// 25799 push    ax ;~ 0AA7:312C
cs=0xaa7;eip=0x00312d; 	X(PUSH(ds));	// 25800 push    ds ;~ 0AA7:312D
cs=0xaa7;eip=0x00312e; 	T(MOV(ax, seg_offset(dseg)));	// 25801 mov     ax, seg dseg ;~ 0AA7:312E
cs=0xaa7;eip=0x003131; 	T(MOV(ds, ax));	// 25802 mov     ds, ax ;~ 0AA7:3131
cs=0xaa7;eip=0x003133; 	X(MOV(byte_1de7c, 1));	// 25803 mov     byte_1DE7C, 1 ;~ 0AA7:3133
cs=0xaa7;eip=0x003138; 	X(POP(ds));	// 25804 pop     ds ;~ 0AA7:3138
cs=0xaa7;eip=0x003139; 	X(POP(ax));	// 25805 pop     ax ;~ 0AA7:3139
cs=0xaa7;eip=0x00313a; 	J(IRET);	// 25806 iret ;~ 0AA7:313A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_int24: 	goto _int24;
        case m2c::k_int2f_checkmyself: 	goto _int2f_checkmyself;
        case m2c::k_int9_keyb: 	goto _int9_keyb;
        case m2c::k_l_alt: 	goto _l_alt;
        case m2c::k_l_altup: 	goto _l_altup;
        case m2c::k_l_ctrl: 	goto _l_ctrl;
        case m2c::k_l_escaped_scancode: 	goto _l_escaped_scancode;
        case m2c::k_l_lctrlup: 	goto _l_lctrlup;
        case m2c::k_l_lshift: 	goto _l_lshift;
        case m2c::k_l_lshiftup: 	goto _l_lshiftup;
        case m2c::k_l_rshift: 	goto _l_rshift;
        case m2c::k_l_rshiftup: 	goto _l_rshiftup;
        case m2c::k_lyesitsme: 	goto _lyesitsme;
        case m2c::k_modules_search: 	goto _modules_search;
        case m2c::k_start: 	goto _start;
        case m2c::kloc_19050: 	goto loc_19050;
        case m2c::kloc_19086: 	goto loc_19086;
        case m2c::kloc_190d3: 	goto loc_190d3;
        case m2c::kloc_190f7: 	goto loc_190f7;
        case m2c::kloc_19103: 	goto loc_19103;
        case m2c::kloc_19114: 	goto loc_19114;
        case m2c::kloc_19125: 	goto loc_19125;
        case m2c::kloc_19131: 	goto loc_19131;
        case m2c::kloc_1913d: 	goto loc_1913d;
        case m2c::kloc_19149: 	goto loc_19149;
        case m2c::kloc_19155: 	goto loc_19155;
        case m2c::kloc_19161: 	goto loc_19161;
        case m2c::kloc_19212: 	goto loc_19212;
        case m2c::kloc_19250: 	goto loc_19250;
        case m2c::kloc_19256: 	goto loc_19256;
        case m2c::kloc_192b9: 	goto loc_192b9;
        case m2c::kloc_192c3: 	goto loc_192c3;
        case m2c::kloc_192ca: 	goto loc_192ca;
        case m2c::kloc_192e0: 	goto loc_192e0;
        case m2c::kloc_192f7: 	goto loc_192f7;
        case m2c::kloc_192ff: 	goto loc_192ff;
        case m2c::kloc_19395: 	goto loc_19395;
        case m2c::kloc_193ae: 	goto loc_193ae;
        case m2c::kloc_193bc: 	goto loc_193bc;
        case m2c::kloc_193c7: 	goto loc_193c7;
        case m2c::kloc_193fc: 	goto loc_193fc;
        case m2c::kloc_193ff: 	goto loc_193ff;
        case m2c::kloc_19464: 	goto loc_19464;
        case m2c::kloc_194ce: 	goto loc_194ce;
        case m2c::kloc_194da: 	goto loc_194da;
        case m2c::kloc_194e3: 	goto loc_194e3;
        case m2c::kloc_194eb: 	goto loc_194eb;
        case m2c::kloc_19506: 	goto loc_19506;
        case m2c::kloc_1953c: 	goto loc_1953c;
        case m2c::kloc_1955d: 	goto loc_1955d;
        case m2c::kloc_1957f: 	goto loc_1957f;
        case m2c::kloc_19595: 	goto loc_19595;
        case m2c::kloc_195a7: 	goto loc_195a7;
        case m2c::kloc_195be: 	goto loc_195be;
        case m2c::kloc_195de: 	goto loc_195de;
        case m2c::kloc_195ea: 	goto loc_195ea;
        case m2c::kloc_19610: 	goto loc_19610;
        case m2c::kloc_19648: 	goto loc_19648;
        case m2c::kloc_1964e: 	goto loc_1964e;
        case m2c::kloc_19657: 	goto loc_19657;
        case m2c::kloc_19698: 	goto loc_19698;
        case m2c::kloc_196b0: 	goto loc_196b0;
        case m2c::kloc_196d0: 	goto loc_196d0;
        case m2c::kloc_196f1: 	goto loc_196f1;
        case m2c::kloc_19744: 	goto loc_19744;
        case m2c::kloc_19762: 	goto loc_19762;
        case m2c::kloc_19788: 	goto loc_19788;
        case m2c::kloc_197bf: 	goto loc_197bf;
        case m2c::kloc_197d6: 	goto loc_197d6;
        case m2c::kloc_197e7: 	goto loc_197e7;
        case m2c::kloc_19827: 	goto loc_19827;
        case m2c::kloc_19848: 	goto loc_19848;
        case m2c::kloc_1987c: 	goto loc_1987c;
        case m2c::kloc_19880: 	goto loc_19880;
        case m2c::kloc_19a6e: 	goto loc_19a6e;
        case m2c::kloc_19ac3: 	goto loc_19ac3;
        case m2c::kloc_19b1d: 	goto loc_19b1d;
        case m2c::kloc_19b3c: 	goto loc_19b3c;
        case m2c::kloc_19b6a: 	goto loc_19b6a;
        case m2c::kloc_19b7d: 	goto loc_19b7d;
        case m2c::kloc_19b83: 	goto loc_19b83;
        case m2c::kloc_19bdd: 	goto loc_19bdd;
        case m2c::kloc_19c71: 	goto loc_19c71;
        case m2c::kloc_19c77: 	goto loc_19c77;
        case m2c::kloc_19c80: 	goto loc_19c80;
        case m2c::kloc_19c86: 	goto loc_19c86;
        case m2c::kloc_19c99: 	goto loc_19c99;
        case m2c::kloc_19ca2: 	goto loc_19ca2;
        case m2c::kloc_19ca9: 	goto loc_19ca9;
        case m2c::kloc_19cdf: 	goto loc_19cdf;
        case m2c::kloc_19db8: 	goto loc_19db8;
        case m2c::kloc_19dbb: 	goto loc_19dbb;
        case m2c::kloc_19df9: 	goto loc_19df9;
        case m2c::kloc_19e03: 	goto loc_19e03;
        case m2c::kloc_19e09: 	goto loc_19e09;
        case m2c::kloc_1c0a5: 	goto loc_1c0a5;
        case m2c::kloc_1c0c9: 	goto loc_1c0c9;
        case m2c::kloc_1c11f: 	goto loc_1c11f;
        case m2c::kloc_1c160: 	goto loc_1c160;
        case m2c::kloc_1c17c: 	goto loc_1c17c;
        case m2c::klocret_1c159: 	goto locret_1c159;
        case m2c::kseg001_d44_proc: 	goto seg001_d44_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _useless_197f2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _useless_197f2:
    _begin:
cs=0xaa7;eip=0x0007a2; 	T(TEST(*(db*)(((db*)&_configword)), 0x20));	// 20482 test    byte ptr _configword, 20h ;~ 0AA7:07A2
cs=0xaa7;eip=0x0007a7; 	J(JNZ(loc_19810));	// 20483 jnz     short loc_19810 ;~ 0AA7:07A7
cs=0xaa7;eip=0x0007a9; 	X(MOV(word_1d614, 0x664F));	// 20484 mov     word_1D614, 664Fh ;~ 0AA7:07A9
cs=0xaa7;eip=0x0007af; 	X(MOV(byte_1d616, 0x66));	// 20485 mov     byte_1D616, 66h ; 'f' ;~ 0AA7:07AF
cs=0xaa7;eip=0x0007b4; 	X(MOV(word_1d669, 0x664F));	// 20486 mov     word_1D669, 664Fh ;~ 0AA7:07B4
cs=0xaa7;eip=0x0007ba; 	X(MOV(byte_1d66b, 0x66));	// 20487 mov     byte_1D66B, 66h ; 'f' ;~ 0AA7:07BA
cs=0xaa7;eip=0x0007bf; 	J(RETN(0));	// 20488 retn ;~ 0AA7:07BF
loc_19810:
	// 5615 
cs=0xaa7;eip=0x0007c0; 	X(MOV(word_1d614, 0x6E4F));	// 20492 mov     word_1D614, 6E4Fh ;~ 0AA7:07C0
cs=0xaa7;eip=0x0007c6; 	X(MOV(byte_1d616, 0x20));	// 20493 mov     byte_1D616, 20h ; ' ' ;~ 0AA7:07C6
cs=0xaa7;eip=0x0007cb; 	X(MOV(word_1d669, 0x6E4F));	// 20494 mov     word_1D669, 6E4Fh ;~ 0AA7:07CB
cs=0xaa7;eip=0x0007d1; 	X(MOV(byte_1d66b, 0x20));	// 20495 mov     byte_1D66B, 20h ; ' ' ;~ 0AA7:07D1
cs=0xaa7;eip=0x0007d6; 	J(RETN(0));	// 20496 retn ;~ 0AA7:07D6

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_useless_197f2: 	goto _useless_197f2;
        case m2c::kloc_19810: 	goto loc_19810;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _dosgetcurdir(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _dosgetcurdir:
    _begin:
cs=0xaa7;eip=0x00083c; 	X(PUSH(si));	// 20555 push    si ;~ 0AA7:083C
cs=0xaa7;eip=0x00083d; 	T(MOV(ah, 0x19));	// 20556 mov     ah, 19h ;~ 0AA7:083D
cs=0xaa7;eip=0x00083f; 	S(_INT(0x21));	// 20557 int     21h             ; DOS - GET DEFAULT DISK NUMBER ;~ 0AA7:083F
cs=0xaa7;eip=0x000841; 	X(POP(si));	// 20558 pop     si ;~ 0AA7:0841
cs=0xaa7;eip=0x000842; 	X(MOV(*(raddr(ds,si)), al));	// 20559 mov     [si], al ;~ 0AA7:0842
cs=0xaa7;eip=0x000844; 	X(MOV(*(raddr(ds,si+1)), '\\'));	// 20560 mov     byte ptr [si+1], '\' ;~ 0AA7:0844
cs=0xaa7;eip=0x000848; 	T(ADD(si, 2));	// 20561 add     si, 2 ;~ 0AA7:0848
cs=0xaa7;eip=0x00084b; 	T(XOR(dl, dl));	// 20562 xor     dl, dl ;~ 0AA7:084B
cs=0xaa7;eip=0x00084d; 	T(MOV(ah, 0x47));	// 20563 mov     ah, 47h ;~ 0AA7:084D
cs=0xaa7;eip=0x00084f; 	S(_INT(0x21));	// 20564 int     21h             ; DOS - 2+ - GET CURRENT DIRECTORY ;~ 0AA7:084F
cs=0xaa7;eip=0x000851; 	J(RETN(0));	// 20567 retn ;~ 0AA7:0851

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_dosgetcurdir: 	goto _dosgetcurdir;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _doschdir(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _doschdir:
    _begin:
cs=0xaa7;eip=0x000852; 	T(MOV(dl, *(raddr(ds,si))));	// 20577 mov     dl, [si] ;~ 0AA7:0852
cs=0xaa7;eip=0x000854; 	T(INC(si));	// 20578 inc     si ;~ 0AA7:0854
cs=0xaa7;eip=0x000855; 	X(PUSH(si));	// 20579 push    si ;~ 0AA7:0855
cs=0xaa7;eip=0x000856; 	T(MOV(ah, 0x0E));	// 20580 mov     ah, 0Eh ;~ 0AA7:0856
cs=0xaa7;eip=0x000858; 	S(_INT(0x21));	// 20581 int     21h             ; DOS - SELECT DISK ;~ 0AA7:0858
cs=0xaa7;eip=0x00085a; 	X(POP(dx));	// 20584 pop     dx ;~ 0AA7:085A
cs=0xaa7;eip=0x00085b; 	T(MOV(ah, 0x3B));	// 20585 mov     ah, 3Bh ;~ 0AA7:085B
cs=0xaa7;eip=0x00085d; 	S(_INT(0x21));	// 20586 int     21h             ; DOS - 2+ - CHANGE THE CURRENT DIRECTORY (CHDIR) ;~ 0AA7:085D
cs=0xaa7;eip=0x00085f; 	J(RETN(0));	// 20588 retn ;~ 0AA7:085F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_doschdir: 	goto _doschdir;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group33(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group33:
    _begin:
seg001_860_proc:
	// 20594 
loc_198b0:
	// 5620 
cs=0xaa7;eip=0x000860; 	T(MOV(ax, word_1de62));	// 20595 mov     ax, word_1DE62 ;~ 0AA7:0860
cs=0xaa7;eip=0x000863; 	T(MOV(bl, 0x70));	// 20596 mov     bl, 70h ; 'p' ;~ 0AA7:0863
cs=0xaa7;eip=0x000865; 	J(return _recolortxt(0, _state););	// 20597 jmp     _recolortxt ;~ 0AA7:0865
_filelist_198b8:
	// 20603 
cs=0xaa7;eip=0x000868; 	T(CLD);	// 20607 cld ;~ 0AA7:0868
cs=0xaa7;eip=0x000869; 	T(MOV(ax, word_1de5e));	// 20608 mov     ax, word_1DE5E ;~ 0AA7:0869
cs=0xaa7;eip=0x00086c; 	T(CMP(ax, word_1de60));	// 20609 cmp     ax, word_1DE60 ;~ 0AA7:086C
cs=0xaa7;eip=0x000870; 	J(JZ(loc_198b0));	// 20610 jz      short loc_198B0 ;~ 0AA7:0870
cs=0xaa7;eip=0x000872; 	X(MOV(word_1de60, ax));	// 20611 mov     word_1DE60, ax ;~ 0AA7:0872
cs=0xaa7;eip=0x000875; 	T(MOV(cx, word_1de54));	// 20612 mov     cx, word_1DE54 ;~ 0AA7:0875
cs=0xaa7;eip=0x000879; 	T(SUB(cx, word_1de5e));	// 20613 sub     cx, word_1DE5E ;~ 0AA7:0879
cs=0xaa7;eip=0x00087d; 	T(CMP(cx, 0x0F));	// 20614 cmp     cx, 0Fh ;~ 0AA7:087D
cs=0xaa7;eip=0x000880; 	J(JC(loc_198d5));	// 20615 jb      short loc_198D5 ;~ 0AA7:0880
cs=0xaa7;eip=0x000882; 	T(MOV(cx, 0x0F));	// 20616 mov     cx, 0Fh ;~ 0AA7:0882
loc_198d5:
	// 5621 
cs=0xaa7;eip=0x000885; 	T(MOV(ax, word_1de5e));	// 20619 mov     ax, word_1DE5E ;~ 0AA7:0885
cs=0xaa7;eip=0x000888; 	T(MOV(dx, ax));	// 20620 mov     dx, ax ;~ 0AA7:0888
cs=0xaa7;eip=0x00088a; 	T(SHL(ax, 1));	// 20621 shl     ax, 1 ;~ 0AA7:088A
cs=0xaa7;eip=0x00088c; 	T(ADD(ax, dx));	// 20622 add     ax, dx ;~ 0AA7:088C
cs=0xaa7;eip=0x00088e; 	T(ADD(ax, word_1de52));	// 20623 add     ax, word_1DE52 ;~ 0AA7:088E
cs=0xaa7;eip=0x000892; 	T(MOV(fs, ax));	// 20624 mov     fs, ax ;~ 0AA7:0892
cs=0xaa7;eip=0x000894; 	T(MOV(ax, 0x654));	// 20626 mov     ax, 654h ;~ 0AA7:0894
loc_198e7:
	// 5622 
cs=0xaa7;eip=0x000897; 	X(PUSH(ax));	// 20629 push    ax ;~ 0AA7:0897
cs=0xaa7;eip=0x000898; 	X(PUSH(cx));	// 20630 push    cx ;~ 0AA7:0898
cs=0xaa7;eip=0x000899; 	T(LES(di, _videomempointer));	// 20631 les     di, _videomempointer ;~ 0AA7:0899
cs=0xaa7;eip=0x00089d; 	T(ADD(di, ax));	// 20632 add     di, ax ;~ 0AA7:089D
cs=0xaa7;eip=0x00089f; 	T(MOV(bp, di));	// 20633 mov     bp, di ;~ 0AA7:089F
cs=0xaa7;eip=0x0008a1; 	T(MOV(ah, 0x7E));	// 20634 mov     ah, 7Eh ; '~' ;~ 0AA7:08A1
cs=0xaa7;eip=0x0008a3; 	T(CMP(*(raddr(fs,2)), 2));	// 20635 cmp     byte ptr fs:2, 2 ;~ 0AA7:08A3
cs=0xaa7;eip=0x0008a9; 	J(JZ(loc_198fd));	// 20636 jz      short loc_198FD ;~ 0AA7:08A9
cs=0xaa7;eip=0x0008ab; 	T(MOV(ah, 0x7B));	// 20637 mov     ah, 7Bh ; '{' ;~ 0AA7:08AB
loc_198fd:
	// 5623 
cs=0xaa7;eip=0x0008ad; 	T(MOV(si, 0x0C));	// 20640 mov     si, 0Ch ;~ 0AA7:08AD
cs=0xaa7;eip=0x0008b0; 	T(MOV(cx, 0x0C));	// 20641 mov     cx, 0Ch ;~ 0AA7:08B0
loc_19903:
	// 5624 
cs=0xaa7;eip=0x0008b3; 	T(MOV(al, *(raddr(fs,si))));	// 20644 mov     al, fs:[si] ;~ 0AA7:08B3
cs=0xaa7;eip=0x0008b6; 	T(OR(al, al));	// 20645 or      al, al ;~ 0AA7:08B6
cs=0xaa7;eip=0x0008b8; 	J(JZ(loc_19914));	// 20646 jz      short loc_19914 ; " " fill the space after file names ;~ 0AA7:08B8
cs=0xaa7;eip=0x0008ba; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 20647 mov     es:[di], ax ;~ 0AA7:08BA
cs=0xaa7;eip=0x0008bd; 	T(INC(si));	// 20648 inc     si ;~ 0AA7:08BD
cs=0xaa7;eip=0x0008be; 	T(ADD(di, 2));	// 20649 add     di, 2 ;~ 0AA7:08BE
cs=0xaa7;eip=0x0008c1; 	T(DEC(cx));	// 20650 dec     cx ;~ 0AA7:08C1
cs=0xaa7;eip=0x0008c2; 	J(JNZ(loc_19903));	// 20651 jnz     short loc_19903 ;~ 0AA7:08C2
loc_19914:
	// 5625 
cs=0xaa7;eip=0x0008c4; 	T(MOV(ax, 0x7E20));	// 20654 mov     ax, 7E20h       ; " " fill the space after file names ;~ 0AA7:08C4
cs=0xaa7;eip=0x0008c7; 	T(CLD);	// 20655 cld ;~ 0AA7:08C7
	// 20656 rep stosw ;~ 0AA7:08C8
cs=0xaa7;eip=0x0008c8; 	X(	REP STOSW);	// 20656 rep stosw ;~ 0AA7:08C8
cs=0xaa7;eip=0x0008ca; 	T(CMP(*(raddr(fs,2)), 2));	// 20657 cmp     byte ptr fs:2, 2 ;~ 0AA7:08CA
cs=0xaa7;eip=0x0008d0; 	J(JZ(loc_1992a));	// 20658 jz      short loc_1992A ;~ 0AA7:08D0
cs=0xaa7;eip=0x0008d2; 	T(MOV(cx, 51));	// 20659 mov     cx, 51 ;~ 0AA7:08D2
	// 20660 rep stosw ;~ 0AA7:08D5
cs=0xaa7;eip=0x0008d5; 	X(	REP STOSW);	// 20660 rep stosw ;~ 0AA7:08D5
cs=0xaa7;eip=0x0008d7; 	J(JMP(loc_199e7));	// 20661 jmp     loc_199E7 ;~ 0AA7:08D7
loc_1992a:
	// 5626 
cs=0xaa7;eip=0x0008da; 	X(PUSH(bp));	// 20665 push    bp ;~ 0AA7:08DA
cs=0xaa7;eip=0x0008db; 	T(MOV(ax, ds));	// 20666 mov     ax, ds ;~ 0AA7:08DB
cs=0xaa7;eip=0x0008dd; 	T(MOV(es, ax));	// 20667 mov     es, ax ;~ 0AA7:08DD
cs=0xaa7;eip=0x0008df; 	T(MOV(di, offset(dseg,_buffer_1)));	// 20669 mov     di, offset _buffer_1 ; 2800h ;~ 0AA7:08DF
cs=0xaa7;eip=0x0008e2; 	T(MOV(bp, 8));	// 20670 mov     bp, 8           ; count ;~ 0AA7:08E2
cs=0xaa7;eip=0x0008e5; 	T(MOV(eax, *(dd*)(raddr(fs,8))));	// 20671 mov     eax, fs:8 ;~ 0AA7:08E5
cs=0xaa7;eip=0x0008ea; 	J(CALL(_my_u32toa_fill,0));	// 20672 call    _my_u32toa_fill ;~ 0AA7:08EA
cs=0xaa7;eip=0x0008ed; 	T(MOV(ax, *(dw*)(raddr(fs,6))));	// 20673 mov     ax, fs:6 ;~ 0AA7:08ED
cs=0xaa7;eip=0x0008f1; 	T(AND(al, 0x1F));	// 20674 and     al, 1Fh ;~ 0AA7:08F1
cs=0xaa7;eip=0x0008f3; 	T(MOVZX(eax, al));	// 20675 movzx   eax, al ;~ 0AA7:08F3
cs=0xaa7;eip=0x0008f7; 	T(MOV(bp, 3));	// 20676 mov     bp, 3           ; count ;~ 0AA7:08F7
cs=0xaa7;eip=0x0008fa; 	J(CALL(_my_u32toa_fill,0));	// 20677 call    _my_u32toa_fill ;~ 0AA7:08FA
cs=0xaa7;eip=0x0008fd; 	X(MOV(*(raddr(ds,di)), '-'));	// 20678 mov     byte ptr [di], '-' ;~ 0AA7:08FD
cs=0xaa7;eip=0x000900; 	T(INC(di));	// 20679 inc     di ;~ 0AA7:0900
cs=0xaa7;eip=0x000901; 	T(MOV(ax, *(dw*)(raddr(fs,6))));	// 20680 mov     ax, fs:6 ;~ 0AA7:0901
cs=0xaa7;eip=0x000905; 	T(SHR(ax, 5));	// 20681 shr     ax, 5 ;~ 0AA7:0905
cs=0xaa7;eip=0x000908; 	T(AND(eax, 0x0F));	// 20682 and     eax, 0Fh ;~ 0AA7:0908
cs=0xaa7;eip=0x00090c; 	T(si = offset(dseg,_ajanfebmaraprmayj)+eax+eax*2);	// 20683 lea     si, _aJanfebmaraprmayj[eax+eax*2] ; "   JanFebMarAprMayJunJulAugSepOctNovDec" ;~ 0AA7:090C
cs=0xaa7;eip=0x000914; 	T(CLD);	// 20684 cld ;~ 0AA7:0914
cs=0xaa7;eip=0x000915; 	X(MOVSW);	// 20685 movsw ;~ 0AA7:0915
cs=0xaa7;eip=0x000916; 	X(MOVSB);	// 20686 movsb ;~ 0AA7:0916
cs=0xaa7;eip=0x000917; 	X(MOV(*(raddr(ds,di)), '-'));	// 20687 mov     byte ptr [di], '-' ;~ 0AA7:0917
cs=0xaa7;eip=0x00091a; 	T(INC(di));	// 20688 inc     di ;~ 0AA7:091A
cs=0xaa7;eip=0x00091b; 	T(MOVZX(eax, *(dw*)(raddr(fs,6))));	// 20689 movzx   eax, word ptr fs:6 ;~ 0AA7:091B
cs=0xaa7;eip=0x000922; 	T(SHR(ax, 9));	// 20690 shr     ax, 9 ;~ 0AA7:0922
cs=0xaa7;eip=0x000925; 	T(ADD(ax, 1980));	// 20691 add     ax, 1980 ;~ 0AA7:0925
cs=0xaa7;eip=0x000928; 	T(MOV(bp, 4));	// 20692 mov     bp, 4           ; count ;~ 0AA7:0928
cs=0xaa7;eip=0x00092b; 	J(CALL(_my_u32toa_fill,0));	// 20693 call    _my_u32toa_fill ;~ 0AA7:092B
cs=0xaa7;eip=0x00092e; 	X(MOV(*(raddr(ds,di)), ' '));	// 20694 mov     byte ptr [di], ' ' ;~ 0AA7:092E
cs=0xaa7;eip=0x000931; 	T(INC(di));	// 20695 inc     di ;~ 0AA7:0931
cs=0xaa7;eip=0x000932; 	T(MOV(ax, *(dw*)(raddr(fs,4))));	// 20696 mov     ax, fs:4 ;~ 0AA7:0932
cs=0xaa7;eip=0x000936; 	T(SHR(ax, 0x0B));	// 20697 shr     ax, 0Bh ;~ 0AA7:0936
cs=0xaa7;eip=0x000939; 	T(MOV(dl, 10));	// 20698 mov     dl, 10 ;~ 0AA7:0939
cs=0xaa7;eip=0x00093b; 	T(DIV1(dl));	// 20699 div     dl ;~ 0AA7:093B
cs=0xaa7;eip=0x00093d; 	T(OR(ax, '00'));	// 20700 or      ax, '00' ;~ 0AA7:093D
cs=0xaa7;eip=0x000940; 	X(MOV(*(dw*)(raddr(ds,di)), ax));	// 20701 mov     [di], ax ;~ 0AA7:0940
cs=0xaa7;eip=0x000942; 	X(MOV(*(raddr(ds,di+2)), ':'));	// 20702 mov     byte ptr [di+2], ':' ;~ 0AA7:0942
cs=0xaa7;eip=0x000946; 	T(MOV(ax, *(dw*)(raddr(fs,4))));	// 20703 mov     ax, fs:4 ;~ 0AA7:0946
cs=0xaa7;eip=0x00094a; 	T(SHR(ax, 5));	// 20704 shr     ax, 5 ;~ 0AA7:094A
cs=0xaa7;eip=0x00094d; 	T(AND(ax, 0x3F));	// 20705 and     ax, 3Fh ;~ 0AA7:094D
cs=0xaa7;eip=0x000950; 	T(DIV1(dl));	// 20706 div     dl ;~ 0AA7:0950
cs=0xaa7;eip=0x000952; 	T(OR(ax, '00'));	// 20707 or      ax, '00' ;~ 0AA7:0952
cs=0xaa7;eip=0x000955; 	X(MOV(*(dw*)(raddr(ds,di+3)), ax));	// 20708 mov     [di+3], ax ;~ 0AA7:0955
cs=0xaa7;eip=0x000958; 	X(MOV(*(dw*)(raddr(ds,di+5)), ' '));	// 20709 mov     word ptr [di+5], ' ' ;~ 0AA7:0958
cs=0xaa7;eip=0x00095d; 	X(POP(bp));	// 20710 pop     bp ;~ 0AA7:095D
cs=0xaa7;eip=0x00095e; 	T(MOV(si, offset(dseg,_buffer_1)));	// 20711 mov     si, offset _buffer_1 ; str ;~ 0AA7:095E
cs=0xaa7;eip=0x000961; 	T(MOV(es, *(dw*)(((db*)&_videomempointer)+2)));	// 20712 mov     es, word ptr _videomempointer+2 ;~ 0AA7:0961
cs=0xaa7;eip=0x000965; 	T(di = bp+0x18);	// 20714 lea     di, [bp+18h] ;~ 0AA7:0965
cs=0xaa7;eip=0x000968; 	T(MOV(ah, 0x7F));	// 20715 mov     ah, 7Fh ;~ 0AA7:0968
cs=0xaa7;eip=0x00096a; 	J(CALL(_text_1bf69,0));	// 20716 call    _text_1BF69 ;~ 0AA7:096A
cs=0xaa7;eip=0x00096d; 	T(TEST(*(raddr(fs,3)), 0x40));	// 20717 test    byte ptr fs:3, 40h ;~ 0AA7:096D
cs=0xaa7;eip=0x000973; 	J(JZ(loc_199cf));	// 20718 jz      short loc_199CF ;~ 0AA7:0973
cs=0xaa7;eip=0x000975; 	T(MOV(si, offset(dseg,_amarkedtodelete)));	// 20719 mov     si, offset _aMarkedToDelete ; "<Marked to Delete>    " ;~ 0AA7:0975
cs=0xaa7;eip=0x000978; 	T(MOV(ah, 0x7F));	// 20720 mov     ah, 7Fh ;~ 0AA7:0978
cs=0xaa7;eip=0x00097a; 	J(CALL(_text_1bf69,0));	// 20721 call    _text_1BF69 ;~ 0AA7:097A
cs=0xaa7;eip=0x00097d; 	J(JMP(loc_199e7));	// 20722 jmp     short loc_199E7 ;~ 0AA7:097D
loc_199cf:
	// 5627 
cs=0xaa7;eip=0x00097f; 	T(MOV(ah, 0x7E));	// 20726 mov     ah, 7Eh ; '~' ;~ 0AA7:097F
cs=0xaa7;eip=0x000981; 	T(MOV(si, 0x1A));	// 20727 mov     si, 1Ah ;~ 0AA7:0981
loc_199d4:
	// 5628 
cs=0xaa7;eip=0x000984; 	T(MOV(al, *(raddr(fs,si))));	// 20730 mov     al, fs:[si] ;~ 0AA7:0984
cs=0xaa7;eip=0x000987; 	T(OR(al, al));	// 20731 or      al, al ;~ 0AA7:0987
cs=0xaa7;eip=0x000989; 	J(JZ(loc_199e7));	// 20732 jz      short loc_199E7 ;~ 0AA7:0989
cs=0xaa7;eip=0x00098b; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 20733 mov     es:[di], ax ;~ 0AA7:098B
cs=0xaa7;eip=0x00098e; 	T(INC(si));	// 20734 inc     si ;~ 0AA7:098E
cs=0xaa7;eip=0x00098f; 	T(ADD(di, 2));	// 20735 add     di, 2 ;~ 0AA7:098F
cs=0xaa7;eip=0x000992; 	T(CMP(si, 0x30));	// 20736 cmp     si, 30h ; '0' ;~ 0AA7:0992
cs=0xaa7;eip=0x000995; 	J(JC(loc_199d4));	// 20737 jb      short loc_199D4 ;~ 0AA7:0995
loc_199e7:
	// 5629 
cs=0xaa7;eip=0x000997; 	T(MOV(ax, fs));	// 20741 mov     ax, fs ;~ 0AA7:0997
cs=0xaa7;eip=0x000999; 	T(ADD(ax, 3));	// 20742 add     ax, 3 ;~ 0AA7:0999
cs=0xaa7;eip=0x00099c; 	T(MOV(fs, ax));	// 20743 mov     fs, ax ;~ 0AA7:099C
cs=0xaa7;eip=0x00099e; 	X(POP(cx));	// 20745 pop     cx ;~ 0AA7:099E
cs=0xaa7;eip=0x00099f; 	X(POP(ax));	// 20746 pop     ax ;~ 0AA7:099F
cs=0xaa7;eip=0x0009a0; 	T(ADD(ax, 0x0A0));	// 20747 add     ax, 0A0h ; '
cs=0xaa7;eip=0x0009a3; 	T(DEC(cx));	// 20748 dec     cx ;~ 0AA7:09A3
cs=0xaa7;eip=0x0009a4; 	J(JNZ(loc_198e7));	// 20749 jnz     loc_198E7 ;~ 0AA7:09A4
cs=0xaa7;eip=0x0009a8; 	J(RETN(0));	// 20750 retn ;~ 0AA7:09A8

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_filelist_198b8: 	goto _filelist_198b8;
        case m2c::kloc_198d5: 	goto loc_198d5;
        case m2c::kloc_198e7: 	goto loc_198e7;
        case m2c::kloc_198fd: 	goto loc_198fd;
        case m2c::kloc_19903: 	goto loc_19903;
        case m2c::kloc_19914: 	goto loc_19914;
        case m2c::kloc_1992a: 	goto loc_1992a;
        case m2c::kloc_199cf: 	goto loc_199cf;
        case m2c::kloc_199d4: 	goto loc_199d4;
        case m2c::kloc_199e7: 	goto loc_199e7;
        case m2c::kseg001_860_proc: 	goto seg001_860_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _recolortxt(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _recolortxt:
    _begin:
cs=0xaa7;eip=0x0009a9; 	T(IMUL3_2(di,ax,0x0A0));	// 20759 imul    di, ax, 0A0h ; '
cs=0xaa7;eip=0x0009ad; 	T(ADD(di, 0x651));	// 20760 add     di, 651h ;~ 0AA7:09AD
cs=0xaa7;eip=0x0009b1; 	T(MOV(cx, 64));	// 20761 mov     cx, 64 ;~ 0AA7:09B1
loc_19a04:
	// 5630 
cs=0xaa7;eip=0x0009b4; 	T(MOV(al, *(raddr(es,di))));	// 20764 mov     al, es:[di] ;~ 0AA7:09B4
cs=0xaa7;eip=0x0009b7; 	T(AND(al, 0x0F));	// 20765 and     al, 0Fh ;~ 0AA7:09B7
cs=0xaa7;eip=0x0009b9; 	T(OR(al, bl));	// 20766 or      al, bl ;~ 0AA7:09B9
cs=0xaa7;eip=0x0009bb; 	X(MOV(*(raddr(es,di)), al));	// 20767 mov     es:[di], al ;~ 0AA7:09BB
cs=0xaa7;eip=0x0009be; 	T(ADD(di, 2));	// 20768 add     di, 2 ;~ 0AA7:09BE
cs=0xaa7;eip=0x0009c1; 	T(DEC(cx));	// 20769 dec     cx ;~ 0AA7:09C1
cs=0xaa7;eip=0x0009c2; 	J(JNZ(loc_19a04));	// 20770 jnz     short loc_19A04 ;~ 0AA7:09C2
cs=0xaa7;eip=0x0009c4; 	J(RETN(0));	// 20771 retn ;~ 0AA7:09C4

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_recolortxt: 	goto _recolortxt;
        case m2c::kloc_19a04: 	goto loc_19a04;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _cpy_printable(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _cpy_printable:
    _begin:
cs=0xaa7;eip=0x0009c5; 	X(PUSH(si));	// 20779 push    si ;~ 0AA7:09C5
cs=0xaa7;eip=0x0009c6; 	X(PUSH(di));	// 20780 push    di ;~ 0AA7:09C6
loc_19a17:
	// 5631 
cs=0xaa7;eip=0x0009c7; 	T(MOV(al, *(raddr(ds,si))));	// 20783 mov     al, [si] ;~ 0AA7:09C7
cs=0xaa7;eip=0x0009c9; 	T(INC(si));	// 20784 inc     si ;~ 0AA7:09C9
cs=0xaa7;eip=0x0009ca; 	T(CMP(al, ' '));	// 20785 cmp     al, ' ' ;~ 0AA7:09CA
cs=0xaa7;eip=0x0009cc; 	J(JC(loc_19a25));	// 20786 jb      short loc_19A25 ;~ 0AA7:09CC
cs=0xaa7;eip=0x0009ce; 	X(MOV(*(raddr(es,di)), al));	// 20787 mov     es:[di], al ;~ 0AA7:09CE
cs=0xaa7;eip=0x0009d1; 	T(INC(di));	// 20788 inc     di ;~ 0AA7:09D1
cs=0xaa7;eip=0x0009d2; 	T(DEC(cx));	// 20789 dec     cx ;~ 0AA7:09D2
cs=0xaa7;eip=0x0009d3; 	J(JNZ(loc_19a17));	// 20790 jnz     short loc_19A17 ;~ 0AA7:09D3
loc_19a25:
	// 5632 
cs=0xaa7;eip=0x0009d5; 	T(CLD);	// 20793 cld ;~ 0AA7:09D5
cs=0xaa7;eip=0x0009d6; 	T(MOV(al, ' '));	// 20794 mov     al, ' ' ;~ 0AA7:09D6
	// 20795 rep stosb ;~ 0AA7:09D8
cs=0xaa7;eip=0x0009d8; 	X(	REP STOSB);	// 20795 rep stosb ;~ 0AA7:09D8
cs=0xaa7;eip=0x0009da; 	X(POP(di));	// 20796 pop     di ;~ 0AA7:09DA
cs=0xaa7;eip=0x0009db; 	X(POP(si));	// 20797 pop     si ;~ 0AA7:09DB
cs=0xaa7;eip=0x0009dc; 	J(RETN(0));	// 20798 retn ;~ 0AA7:09DC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_cpy_printable: 	goto _cpy_printable;
        case m2c::kloc_19a17: 	goto loc_19a17;
        case m2c::kloc_19a25: 	goto loc_19a25;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_9dd_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_9dd_proc:
    _begin:
cs=0xaa7;eip=0x0009dd; 	T(DEC(cx));	// 20802 dec     cx ;~ 0AA7:09DD
cs=0xaa7;eip=0x0009de; 	J(JZ(locret_19a3e));	// 20803 jz      short locret_19A3E ;~ 0AA7:09DE
cs=0xaa7;eip=0x0009e0; 	T(MOV(al, *(raddr(es,si))));	// 20804 mov     al, es:[si] ;~ 0AA7:09E0
cs=0xaa7;eip=0x0009e3; 	T(INC(si));	// 20805 inc     si ;~ 0AA7:09E3
loc_19a34:
	// 5633 
cs=0xaa7;eip=0x0009e4; 	X(XOR(*(raddr(es,si)), al));	// 20808 xor     es:[si], al ;~ 0AA7:09E4
cs=0xaa7;eip=0x0009e7; 	T(MOV(al, *(raddr(es,si))));	// 20809 mov     al, es:[si] ;~ 0AA7:09E7
cs=0xaa7;eip=0x0009ea; 	T(INC(si));	// 20810 inc     si ;~ 0AA7:09EA
cs=0xaa7;eip=0x0009eb; 	T(DEC(cx));	// 20811 dec     cx ;~ 0AA7:09EB
cs=0xaa7;eip=0x0009ec; 	J(JNZ(loc_19a34));	// 20812 jnz     short loc_19A34 ;~ 0AA7:09EC
locret_19a3e:
	// 5634 
cs=0xaa7;eip=0x0009ee; 	J(RETN(0));	// 20815 retn ;~ 0AA7:09EE
ret_aa7_9ef:
	// 5635 
cs=0xaa7;eip=0x0009ef; 	T(DEC(cx));	// 20817 dec     cx ;~ 0AA7:09EF
cs=0xaa7;eip=0x0009f0; 	J(JZ(locret_19a52));	// 20818 jz      short locret_19A52 ;~ 0AA7:09F0
cs=0xaa7;eip=0x0009f2; 	T(MOV(al, *(raddr(es,si))));	// 20819 mov     al, es:[si] ;~ 0AA7:09F2
cs=0xaa7;eip=0x0009f5; 	T(INC(si));	// 20820 inc     si ;~ 0AA7:09F5
loc_19a46:
	// 5636 
cs=0xaa7;eip=0x0009f6; 	T(MOV(ah, *(raddr(es,si))));	// 20823 mov     ah, es:[si] ;~ 0AA7:09F6
cs=0xaa7;eip=0x0009f9; 	X(XOR(*(raddr(es,si)), al));	// 20824 xor     es:[si], al ;~ 0AA7:09F9
cs=0xaa7;eip=0x0009fc; 	T(MOV(al, ah));	// 20825 mov     al, ah ;~ 0AA7:09FC
cs=0xaa7;eip=0x0009fe; 	T(INC(si));	// 20826 inc     si ;~ 0AA7:09FE
cs=0xaa7;eip=0x0009ff; 	T(DEC(cx));	// 20827 dec     cx ;~ 0AA7:09FF
cs=0xaa7;eip=0x000a00; 	J(JNZ(loc_19a46));	// 20828 jnz     short loc_19A46 ;~ 0AA7:0A00
locret_19a52:
	// 5637 
cs=0xaa7;eip=0x000a02; 	J(RETN(0));	// 20831 retn ;~ 0AA7:0A02

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_19a34: 	goto loc_19a34;
        case m2c::kloc_19a46: 	goto loc_19a46;
        case m2c::klocret_19a3e: 	goto locret_19a3e;
        case m2c::klocret_19a52: 	goto locret_19a52;
        case m2c::kret_aa7_9ef: 	goto ret_aa7_9ef;
        case m2c::kseg001_9dd_proc: 	goto seg001_9dd_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _parse_cmdline(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _parse_cmdline:
    _begin:
cs=0xaa7;eip=0x000cae; 	T(MOV(ax, ds));	// 21123 mov     ax, ds ;~ 0AA7:0CAE
cs=0xaa7;eip=0x000cb0; 	T(MOV(es, ax));	// 21124 mov     es, ax ;~ 0AA7:0CB0
cs=0xaa7;eip=0x000cb2; 	T(XOR(ebp, ebp));	// 21126 xor     ebp, ebp ;~ 0AA7:0CB2
cs=0xaa7;eip=0x000cb5; 	T(MOV(ds, _esseg_atstart));	// 21127 mov     ds, _esseg_atstart ;~ 0AA7:0CB5
cs=0xaa7;eip=0x000cb9; 	T(MOV(si, 0x80));	// 21129 mov     si, 80h ; '
cs=0xaa7;eip=0x000cbc; 	T(MOV(di, offset(dseg,_buffer_1db6c)));	// 21130 mov     di, offset _buffer_1DB6C ;~ 0AA7:0CBC
cs=0xaa7;eip=0x000cbf; 	T(XOR(dl, dl));	// 21131 xor     dl, dl ;~ 0AA7:0CBF
cs=0xaa7;eip=0x000cc1; 	T(CLD);	// 21132 cld ;~ 0AA7:0CC1
cs=0xaa7;eip=0x000cc2; 	T(LODSB);	// 21133 lodsb ;~ 0AA7:0CC2
cs=0xaa7;eip=0x000cc3; 	T(MOVZX(cx, al));	// 21134 movzx   cx, al          ; number of bytes on commandline ;~ 0AA7:0CC3
cs=0xaa7;eip=0x000cc6; 	T(STC);	// 21135 stc ;~ 0AA7:0CC6
cs=0xaa7;eip=0x000cc7; 	J(JCXZ(loc_19d64));	// 21136 jcxz    short loc_19D64 ;~ 0AA7:0CC7
loc_19d19:
	// 5654 
cs=0xaa7;eip=0x000cc9; 	T(LODSB);	// 21140 lodsb ;~ 0AA7:0CC9
cs=0xaa7;eip=0x000cca; 	T(CMP(al, 0x0D));	// 21141 cmp     al, 0Dh ;~ 0AA7:0CCA
cs=0xaa7;eip=0x000ccc; 	J(JZ(loc_19d63));	// 21142 jz      short loc_19D63 ;~ 0AA7:0CCC
cs=0xaa7;eip=0x000cce; 	T(OR(al, al));	// 21143 or      al, al ;~ 0AA7:0CCE
cs=0xaa7;eip=0x000cd0; 	J(JZ(loc_19d63));	// 21144 jz      short loc_19D63 ;~ 0AA7:0CD0
cs=0xaa7;eip=0x000cd2; 	T(CMP(al, ' '));	// 21145 cmp     al, ' ' ;~ 0AA7:0CD2
cs=0xaa7;eip=0x000cd4; 	J(JNZ(loc_19d4e));	// 21146 jnz     short loc_19D4E ;~ 0AA7:0CD4
cs=0xaa7;eip=0x000cd6; 	T(DEC(cx));	// 21147 dec     cx ;~ 0AA7:0CD6
cs=0xaa7;eip=0x000cd7; 	J(JNZ(loc_19d19));	// 21148 jnz     short loc_19D19 ;~ 0AA7:0CD7
cs=0xaa7;eip=0x000cd9; 	T(STC);	// 21149 stc ;~ 0AA7:0CD9
cs=0xaa7;eip=0x000cda; 	J(JMP(loc_19d64));	// 21150 jmp     short loc_19D64 ;~ 0AA7:0CDA
loc_19d2c:
	// 5655 
cs=0xaa7;eip=0x000cdc; 	T(LODSB);	// 21154 lodsb ;~ 0AA7:0CDC
cs=0xaa7;eip=0x000cdd; 	T(CMP(al, 0x0D));	// 21155 cmp     al, 0Dh ;~ 0AA7:0CDD
cs=0xaa7;eip=0x000cdf; 	J(JZ(loc_19d63));	// 21156 jz      short loc_19D63 ;~ 0AA7:0CDF
cs=0xaa7;eip=0x000ce1; 	T(OR(al, al));	// 21157 or      al, al ;~ 0AA7:0CE1
cs=0xaa7;eip=0x000ce3; 	J(JZ(loc_19d63));	// 21158 jz      short loc_19D63 ;~ 0AA7:0CE3
cs=0xaa7;eip=0x000ce5; 	T(CMP(al, '?'));	// 21159 cmp     al, '?' ;~ 0AA7:0CE5
cs=0xaa7;eip=0x000ce7; 	J(JZ(loc_19d47));	// 21160 jz      short loc_19D47 ;~ 0AA7:0CE7
cs=0xaa7;eip=0x000ce9; 	T(AND(al, 0x0DF));	// 21161 and     al, 0DFh ;~ 0AA7:0CE9
cs=0xaa7;eip=0x000ceb; 	T(SUB(al, 'A'));	// 21162 sub     al, 'A' ;~ 0AA7:0CEB
cs=0xaa7;eip=0x000ced; 	T(MOVZX(eax, al));	// 21163 movzx   eax, al ;~ 0AA7:0CED
cs=0xaa7;eip=0x000cf1; 	T(BTS(ebp, eax));	// 21164 bts     ebp, eax ;~ 0AA7:0CF1
cs=0xaa7;eip=0x000cf5; 	J(JMP(loc_19d19));	// 21165 jmp     short loc_19D19 ;~ 0AA7:0CF5
loc_19d47:
	// 5656 
cs=0xaa7;eip=0x000cf7; 	T(BTS(ebp, 0x1F));	// 21169 bts     ebp, 1Fh ;~ 0AA7:0CF7
cs=0xaa7;eip=0x000cfc; 	J(JMP(loc_19d19));	// 21170 jmp     short loc_19D19 ;~ 0AA7:0CFC
loc_19d4e:
	// 5657 
cs=0xaa7;eip=0x000cfe; 	T(CMP(al, '/'));	// 21175 cmp     al, '/' ;~ 0AA7:0CFE
cs=0xaa7;eip=0x000d00; 	J(JZ(loc_19d2c));	// 21176 jz      short loc_19D2C ;~ 0AA7:0D00
cs=0xaa7;eip=0x000d02; 	X(STOSB);	// 21177 stosb ;~ 0AA7:0D02
cs=0xaa7;eip=0x000d03; 	T(LODSB);	// 21178 lodsb ;~ 0AA7:0D03
cs=0xaa7;eip=0x000d04; 	T(CMP(al, 0x0D));	// 21179 cmp     al, 0Dh ;~ 0AA7:0D04
cs=0xaa7;eip=0x000d06; 	J(JZ(loc_19d63));	// 21180 jz      short loc_19D63 ;~ 0AA7:0D06
cs=0xaa7;eip=0x000d08; 	T(OR(al, al));	// 21181 or      al, al ;~ 0AA7:0D08
cs=0xaa7;eip=0x000d0a; 	J(JZ(loc_19d63));	// 21182 jz      short loc_19D63 ;~ 0AA7:0D0A
cs=0xaa7;eip=0x000d0c; 	T(CMP(al, ' '));	// 21183 cmp     al, ' ' ;~ 0AA7:0D0C
cs=0xaa7;eip=0x000d0e; 	J(JZ(loc_19d63));	// 21184 jz      short loc_19D63 ;~ 0AA7:0D0E
cs=0xaa7;eip=0x000d10; 	J(LOOP(loc_19d4e));	// 21185 loop    loc_19D4E ;~ 0AA7:0D10
cs=0xaa7;eip=0x000d12; 	X(STOSB);	// 21186 stosb ;~ 0AA7:0D12
loc_19d63:
	// 5658 
cs=0xaa7;eip=0x000d13; 	T(CLC);	// 21190 clc ;~ 0AA7:0D13
loc_19d64:
	// 5659 
cs=0xaa7;eip=0x000d14; 	X(MOV(*(raddr(es,di)), 0));	// 21194 mov     byte ptr es:[di], 0 ;~ 0AA7:0D14
cs=0xaa7;eip=0x000d18; 	T(MOV(ax, es));	// 21195 mov     ax, es ;~ 0AA7:0D18
cs=0xaa7;eip=0x000d1a; 	T(MOV(ds, ax));	// 21196 mov     ds, ax ;~ 0AA7:0D1A
cs=0xaa7;eip=0x000d1c; 	J(RETN(0));	// 21198 retn ;~ 0AA7:0D1C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_parse_cmdline: 	goto _parse_cmdline;
        case m2c::kloc_19d19: 	goto loc_19d19;
        case m2c::kloc_19d2c: 	goto loc_19d2c;
        case m2c::kloc_19d47: 	goto loc_19d47;
        case m2c::kloc_19d4e: 	goto loc_19d4e;
        case m2c::kloc_19d63: 	goto loc_19d63;
        case m2c::kloc_19d64: 	goto loc_19d64;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _readallmoules(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _readallmoules:
    _begin:
cs=0xaa7;eip=0x000d1d; 	T(MOV(dx, offset(dseg,_buffer_1db6c)));	// 21207 mov     dx, offset _buffer_1DB6C ;~ 0AA7:0D1D
cs=0xaa7;eip=0x000d20; 	J(CALL(_read_module,0));	// 21208 call    _read_module ;~ 0AA7:0D20
cs=0xaa7;eip=0x000d23; 	J(JC(loc_19d83));	// 21209 jb      short loc_19D83 ;~ 0AA7:0D23
cs=0xaa7;eip=0x000d25; 	T(CMP(word_1de50, 1));	// 21210 cmp     word_1DE50, 1 ;~ 0AA7:0D25
cs=0xaa7;eip=0x000d2a; 	J(JZ(loc_19d81));	// 21211 jz      short loc_19D81 ;~ 0AA7:0D2A
cs=0xaa7;eip=0x000d2c; 	J(CALL(_dosfindnext,0));	// 21212 call    _dosfindnext ;~ 0AA7:0D2C
cs=0xaa7;eip=0x000d2f; 	J(JNC(_readallmoules));	// 21213 jnb     short _readallmoules ;~ 0AA7:0D2F
loc_19d81:
	// 5660 
cs=0xaa7;eip=0x000d31; 	T(CLC);	// 21216 clc ;~ 0AA7:0D31
cs=0xaa7;eip=0x000d32; 	J(RETN(0));	// 21217 retn ;~ 0AA7:0D32
loc_19d83:
	// 5661 
cs=0xaa7;eip=0x000d33; 	X(MOV(byte_1de7e, 3));	// 21221 mov     byte_1DE7E, 3 ;~ 0AA7:0D33
cs=0xaa7;eip=0x000d38; 	X(MOV(*(dw*)(((db*)&_messagepointer)), offset(dseg,_amoduleloaderro)));	// 21222 mov     word ptr _messagepointer, offset _aModuleLoadErro ; "Module load error.\r\n$" ;~ 0AA7:0D38
cs=0xaa7;eip=0x000d3e; 	X(MOV(*(dw*)(((db*)&_messagepointer)+2), ds));	// 21223 mov     word ptr _messagepointer+2, ds ;~ 0AA7:0D3E
cs=0xaa7;eip=0x000d42; 	T(STC);	// 21224 stc ;~ 0AA7:0D42
cs=0xaa7;eip=0x000d43; 	J(RETN(0));	// 21225 retn ;~ 0AA7:0D43

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_readallmoules: 	goto _readallmoules;
        case m2c::kloc_19d81: 	goto loc_19d81;
        case m2c::kloc_19d83: 	goto loc_19d83;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group34(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group34:
    _begin:
_read_module:
	// 21301 
cs=0xaa7;eip=0x000dc1; 	X(MOV(byte_1de7e, 3));	// 21303 mov     byte_1DE7E, 3 ;~ 0AA7:0DC1
cs=0xaa7;eip=0x000dc6; 	X(MOV(*(dw*)(((db*)&_messagepointer)), offset(dseg,_amoduleloaderro)));	// 21304 mov     word ptr _messagepointer, offset _aModuleLoadErro ; "Module load error.\r\n$" ;~ 0AA7:0DC6
cs=0xaa7;eip=0x000dcc; 	X(MOV(*(dw*)(((db*)&_messagepointer)+2), ds));	// 21305 mov     word ptr _messagepointer+2, ds ;~ 0AA7:0DCC
cs=0xaa7;eip=0x000dd0; 	T(MOV(si, dx));	// 21306 mov     si, dx ;~ 0AA7:0DD0
loc_19e22:
	// 5668 
cs=0xaa7;eip=0x000dd2; 	T(INC(si));	// 21309 inc     si ;~ 0AA7:0DD2
cs=0xaa7;eip=0x000dd3; 	T(CMP(*(raddr(ds,si-1)), 0));	// 21310 cmp     byte ptr [si-1], 0 ;~ 0AA7:0DD3
cs=0xaa7;eip=0x000dd7; 	J(JNZ(loc_19e22));	// 21311 jnz     short loc_19E22 ;~ 0AA7:0DD7
cs=0xaa7;eip=0x000dd9; 	T(MOV(cx, 0x0C));	// 21312 mov     cx, 0Ch ;~ 0AA7:0DD9
loc_19e2c:
	// 5669 
cs=0xaa7;eip=0x000ddc; 	T(DEC(si));	// 21315 dec     si ;~ 0AA7:0DDC
cs=0xaa7;eip=0x000ddd; 	T(CMP(*(raddr(ds,si-1)), ':'));	// 21316 cmp     byte ptr [si-1], ':' ;~ 0AA7:0DDD
cs=0xaa7;eip=0x000de1; 	J(JZ(loc_19e41));	// 21317 jz      short loc_19E41 ;~ 0AA7:0DE1
cs=0xaa7;eip=0x000de3; 	T(CMP(*(raddr(ds,si-1)), '\\'));	// 21318 cmp     byte ptr [si-1], '\' ;~ 0AA7:0DE3
cs=0xaa7;eip=0x000de7; 	J(JZ(loc_19e41));	// 21319 jz      short loc_19E41 ;~ 0AA7:0DE7
cs=0xaa7;eip=0x000de9; 	T(CMP(si, dx));	// 21320 cmp     si, dx ;~ 0AA7:0DE9
cs=0xaa7;eip=0x000deb; 	J(JBE(loc_19e41));	// 21321 jbe     short loc_19E41 ;~ 0AA7:0DEB
cs=0xaa7;eip=0x000ded; 	T(DEC(cx));	// 21322 dec     cx ;~ 0AA7:0DED
cs=0xaa7;eip=0x000dee; 	J(JNZ(loc_19e2c));	// 21323 jnz     short loc_19E2C ;~ 0AA7:0DEE
cs=0xaa7;eip=0x000df0; 	T(DEC(si));	// 21324 dec     si ;~ 0AA7:0DF0
loc_19e41:
	// 5670 
cs=0xaa7;eip=0x000df1; 	T(MOV(di, offset(dseg,_afilename_ext)));	// 21328 mov     di, offset _aFilename_ext ; "FileName.Ext" ;~ 0AA7:0DF1
cs=0xaa7;eip=0x000df4; 	T(MOV(cx, 0x0C));	// 21329 mov     cx, 0Ch ;~ 0AA7:0DF4
loc_19e47:
	// 5671 
cs=0xaa7;eip=0x000df7; 	T(MOV(al, *(raddr(ds,si))));	// 21332 mov     al, [si] ;~ 0AA7:0DF7
cs=0xaa7;eip=0x000df9; 	T(INC(si));	// 21333 inc     si ;~ 0AA7:0DF9
cs=0xaa7;eip=0x000dfa; 	T(OR(al, al));	// 21334 or      al, al ;~ 0AA7:0DFA
cs=0xaa7;eip=0x000dfc; 	J(JZ(loc_19e5e));	// 21335 jz      short loc_19E5E ;~ 0AA7:0DFC
cs=0xaa7;eip=0x000dfe; 	T(CMP(al, 'a'));	// 21336 cmp     al, 'a' ;~ 0AA7:0DFE
cs=0xaa7;eip=0x000e00; 	J(JC(loc_19e58));	// 21337 jb      short loc_19E58 ;~ 0AA7:0E00
cs=0xaa7;eip=0x000e02; 	T(CMP(al, 'z'));	// 21338 cmp     al, 'z' ;~ 0AA7:0E02
cs=0xaa7;eip=0x000e04; 	J(JA(loc_19e58));	// 21339 ja      short loc_19E58 ;~ 0AA7:0E04
cs=0xaa7;eip=0x000e06; 	T(AND(al, 0x0DF));	// 21340 and     al, 0DFh        ; upper case ;~ 0AA7:0E06
loc_19e58:
	// 5672 
cs=0xaa7;eip=0x000e08; 	X(MOV(*(raddr(ds,di)), al));	// 21344 mov     [di], al ;~ 0AA7:0E08
cs=0xaa7;eip=0x000e0a; 	T(INC(di));	// 21345 inc     di ;~ 0AA7:0E0A
cs=0xaa7;eip=0x000e0b; 	T(DEC(cx));	// 21346 dec     cx ;~ 0AA7:0E0B
cs=0xaa7;eip=0x000e0c; 	J(JNZ(loc_19e47));	// 21347 jnz     short loc_19E47 ;~ 0AA7:0E0C
loc_19e5e:
	// 5673 
cs=0xaa7;eip=0x000e0e; 	T(MOV(ax, ds));	// 21350 mov     ax, ds ;~ 0AA7:0E0E
cs=0xaa7;eip=0x000e10; 	T(MOV(es, ax));	// 21351 mov     es, ax ;~ 0AA7:0E10
cs=0xaa7;eip=0x000e12; 	T(MOV(al, ' '));	// 21352 mov     al, ' ' ;~ 0AA7:0E12
cs=0xaa7;eip=0x000e14; 	T(CLD);	// 21353 cld ;~ 0AA7:0E14
	// 21354 rep stosb ;~ 0AA7:0E15
cs=0xaa7;eip=0x000e15; 	X(	REP STOSB);	// 21354 rep stosb ;~ 0AA7:0E15
cs=0xaa7;eip=0x000e17; 	J(CALLF(_moduleread,0));	// 21355 call    _moduleread ;~ 0AA7:0E17
cs=0xaa7;eip=0x000e1c; 	J(JC(loc_1a042));	// 21356 jb      loc_1A042 ;~ 0AA7:0E1C
cs=0xaa7;eip=0x000e20; 	X(MOV(_current_patterns, 0));	// 21357 mov     _current_patterns, 0 ;~ 0AA7:0E20
cs=0xaa7;eip=0x000e26; 	X(MOV(byte_1de84, 0));	// 21358 mov     byte_1DE84, 0 ;~ 0AA7:0E26
cs=0xaa7;eip=0x000e2b; 	J(CALLF(sub_126a9,0));	// 21359 call    sub_126A9 ;~ 0AA7:0E2B
cs=0xaa7;eip=0x000e30; 	X(MOV(*(dd*)((_module_type_txt)), eax));	// 21360 mov     dword ptr _module_type_txt, eax ; "    " ;~ 0AA7:0E30
cs=0xaa7;eip=0x000e34; 	T(XOR(ch, ch));	// 21361 xor     ch, ch ;~ 0AA7:0E34
cs=0xaa7;eip=0x000e36; 	X(MOV(_amount_of_x, cx));	// 21362 mov     _amount_of_x, cx ;~ 0AA7:0E36
cs=0xaa7;eip=0x000e3a; 	X(MOV(byte_1de73, bl));	// 21363 mov     byte_1DE73, bl ;~ 0AA7:0E3A
cs=0xaa7;eip=0x000e3e; 	J(CALLF(_read_sndsettings,0));	// 21364 call    _read_sndsettings ;~ 0AA7:0E3E
cs=0xaa7;eip=0x000e43; 	X(MOV(_outp_freq, bp));	// 21365 mov     _outp_freq, bp ;~ 0AA7:0E43
cs=0xaa7;eip=0x000e47; 	J(CALLF(sub_1265d,0));	// 21366 call    sub_1265D ;~ 0AA7:0E47
cs=0xaa7;eip=0x000e4c; 	X(MOV(byte_1de78, dl));	// 21367 mov     byte_1DE78, dl ;~ 0AA7:0E4C
cs=0xaa7;eip=0x000e50; 	T(MOV(al, dh));	// 21368 mov     al, dh ;~ 0AA7:0E50
cs=0xaa7;eip=0x000e52; 	T(AND(al, 0x10));	// 21369 and     al, 10h ;~ 0AA7:0E52
cs=0xaa7;eip=0x000e54; 	T(SHR(al, 4));	// 21370 shr     al, 4 ;~ 0AA7:0E54
cs=0xaa7;eip=0x000e57; 	X(MOV(byte_1de7b, al));	// 21371 mov     byte_1DE7B, al ;~ 0AA7:0E57
cs=0xaa7;eip=0x000e5a; 	X(MOV(*(dw*)(((db*)&_segfsbx_1de28)), si));	// 21372 mov     word ptr _segfsbx_1DE28, si ;~ 0AA7:0E5A
cs=0xaa7;eip=0x000e5e; 	X(MOV(*(dw*)(((db*)&_segfsbx_1de28)+2), es));	// 21373 mov     word ptr _segfsbx_1DE28+2, es ;~ 0AA7:0E5E
cs=0xaa7;eip=0x000e62; 	T(MOV(si, di));	// 21374 mov     si, di ;~ 0AA7:0E62
cs=0xaa7;eip=0x000e64; 	T(MOV(di, offset(dseg,asc_1cc2d)));	// 21375 mov     di, offset asc_1CC2D ; "                              " ;~ 0AA7:0E64
cs=0xaa7;eip=0x000e67; 	T(MOV(cx, 30));	// 21376 mov     cx, 30 ;~ 0AA7:0E67
loc_19eba:
	// 5674 
cs=0xaa7;eip=0x000e6a; 	T(MOV(al, *(raddr(es,si))));	// 21379 mov     al, es:[si] ;~ 0AA7:0E6A
cs=0xaa7;eip=0x000e6d; 	T(OR(al, al));	// 21380 or      al, al ;~ 0AA7:0E6D
cs=0xaa7;eip=0x000e6f; 	J(JZ(loc_19ec7));	// 21381 jz      short loc_19EC7 ;~ 0AA7:0E6F
cs=0xaa7;eip=0x000e71; 	X(MOV(*(raddr(ds,di)), al));	// 21382 mov     [di], al ;~ 0AA7:0E71
cs=0xaa7;eip=0x000e73; 	T(INC(si));	// 21383 inc     si ;~ 0AA7:0E73
cs=0xaa7;eip=0x000e74; 	T(INC(di));	// 21384 inc     di ;~ 0AA7:0E74
cs=0xaa7;eip=0x000e75; 	J(LOOP(loc_19eba));	// 21385 loop    loc_19EBA ;~ 0AA7:0E75
loc_19ec7:
	// 5675 
cs=0xaa7;eip=0x000e77; 	T(MOV(cx, 17));	// 21388 mov     cx, 17 ;~ 0AA7:0E77
cs=0xaa7;eip=0x000e7a; 	T(XOR(si, si));	// 21389 xor     si, si ;~ 0AA7:0E7A
loc_19ecc:
	// 5676 
cs=0xaa7;eip=0x000e7c; 	T(MOV(al, *(raddr(es,si))));	// 21392 mov     al, es:[si] ;~ 0AA7:0E7C
cs=0xaa7;eip=0x000e7f; 	X(MOV(*((_a130295211558)+si), al));	// 21393 mov     byte ptr _a130295211558[si], al ; "13/02/95 21:15:58" ;~ 0AA7:0E7F
cs=0xaa7;eip=0x000e83; 	T(INC(si));	// 21394 inc     si ;~ 0AA7:0E83
cs=0xaa7;eip=0x000e84; 	J(LOOP(loc_19ecc));	// 21395 loop    loc_19ECC ;~ 0AA7:0E84
cs=0xaa7;eip=0x000e86; 	J(CALL(_video_prp_mtr_positn,0));	// 21396 call    _video_prp_mtr_positn ;~ 0AA7:0E86
cs=0xaa7;eip=0x000e89; 	T(XOR(edx, edx));	// 21397 xor     edx, edx ;~ 0AA7:0E89
cs=0xaa7;eip=0x000e8c; 	T(MOV(eax, 317));	// 21398 mov     eax, 317 ;~ 0AA7:0E8C
cs=0xaa7;eip=0x000e92; 	T(MOVZX(ebx, _amount_of_x));	// 21399 movzx   ebx, _amount_of_x ;~ 0AA7:0E92
cs=0xaa7;eip=0x000e98; 	T(DIV4(ebx));	// 21400 div     ebx ;~ 0AA7:0E98
cs=0xaa7;eip=0x000e9b; 	X(MOV(_volume_1de34, eax));	// 21401 mov     _volume_1DE34, eax ;~ 0AA7:0E9B
cs=0xaa7;eip=0x000e9f; 	X(MOV(byte_1de7c, 0));	// 21402 mov     byte_1DE7C, 0 ;~ 0AA7:0E9F
cs=0xaa7;eip=0x000ea4; 	J(CALLF(sub_12eba,0));	// 21403 call    sub_12EBA ;~ 0AA7:0EA4
cs=0xaa7;eip=0x000ea9; 	J(CALL(__dispatch_call,off_1de3c));	// 21404 call    off_1DE3C ;~ 0AA7:0EA9
_keyb_19efd:
	// 21411 
cs=0xaa7;eip=0x000ead; 	J(CALLF(sub_1265d,0));	// 21413 call    sub_1265D ;~ 0AA7:0EAD
cs=0xaa7;eip=0x000eb2; 	X(MOV(byte_1de72, ah));	// 21414 mov     byte_1DE72, ah ;~ 0AA7:0EB2
cs=0xaa7;eip=0x000eb6; 	X(MOV(byte_1de74, al));	// 21415 mov     byte_1DE74, al ;~ 0AA7:0EB6
cs=0xaa7;eip=0x000eb9; 	X(MOV(byte_1de75, bh));	// 21416 mov     byte_1DE75, bh ;~ 0AA7:0EB9
cs=0xaa7;eip=0x000ebd; 	X(MOV(byte_1de76, ch));	// 21417 mov     byte_1DE76, ch ;~ 0AA7:0EBD
cs=0xaa7;eip=0x000ec1; 	T(MOV(ax, -1));	// 21418 mov     ax, -1 ;~ 0AA7:0EC1
cs=0xaa7;eip=0x000ec4; 	J(CALLF(_change_volume,0));	// 21419 call    _change_volume ;~ 0AA7:0EC4
cs=0xaa7;eip=0x000ec9; 	X(MOV(word_1de6a, ax));	// 21420 mov     word_1DE6A, ax ;~ 0AA7:0EC9
cs=0xaa7;eip=0x000ecc; 	T(MOV(ax, -1));	// 21421 mov     ax, -1 ;~ 0AA7:0ECC
cs=0xaa7;eip=0x000ecf; 	J(CALLF(_change_amplif,0));	// 21422 call    _change_amplif ;~ 0AA7:0ECF
cs=0xaa7;eip=0x000ed4; 	X(MOV(word_1de6c, ax));	// 21423 mov     word_1DE6C, ax ;~ 0AA7:0ED4
cs=0xaa7;eip=0x000ed7; 	J(CALLF(_get_playsettings,0));	// 21424 call    _get_playsettings ;~ 0AA7:0ED7
cs=0xaa7;eip=0x000edc; 	X(MOV(_flg_play_settings, al));	// 21425 mov     _flg_play_settings, al ;~ 0AA7:0EDC
cs=0xaa7;eip=0x000edf; 	J(CALL(__dispatch_call,_offs_draw));	// 21426 call    _offs_draw ;~ 0AA7:0EDF
cs=0xaa7;eip=0x000ee3; 	T(CMP(byte_1de7c, 1));	// 21427 cmp     byte_1DE7C, 1 ;~ 0AA7:0EE3
cs=0xaa7;eip=0x000ee8; 	J(JZ(loc_1a393));	// 21428 jz      loc_1A393 ;~ 0AA7:0EE8
cs=0xaa7;eip=0x000eec; 	T(TEST(byte_1de90, 2));	// 21429 test    byte_1DE90, 2 ;~ 0AA7:0EEC
cs=0xaa7;eip=0x000ef1; 	J(JNZ(loc_1a3c5));	// 21430 jnz     loc_1A3C5 ;~ 0AA7:0EF1
cs=0xaa7;eip=0x000ef5; 	T(TEST(byte_1de90, 1));	// 21431 test    byte_1DE90, 1 ;~ 0AA7:0EF5
cs=0xaa7;eip=0x000efa; 	J(JNZ(loc_1a3a7));	// 21432 jnz     loc_1A3A7 ;~ 0AA7:0EFA
cs=0xaa7;eip=0x000efe; 	T(XOR(ax, ax));	// 21433 xor     ax, ax ;~ 0AA7:0EFE
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x000f00; 	X(XCHG(ax, *(dw*)(((db*)&_key_code))));	// 21434 xchg    ax, cs:_key_code ;~ 0AA7:0F00
cs=0xaa7;eip=0x000f05; 	T(OR(ax, ax));	// 21435 or      ax, ax ;~ 0AA7:0F05
cs=0xaa7;eip=0x000f07; 	J(JZ(_keyb_19efd));	// 21436 jz      short _keyb_19EFD ;~ 0AA7:0F07
cs=0xaa7;eip=0x000f09; 	X(MOV(word_1de50, ax));	// 21437 mov     word_1DE50, ax ;~ 0AA7:0F09
cs=0xaa7;eip=0x000f0c; 	T(MOV(cx, 2));	// 21438 mov     cx, 2 ;~ 0AA7:0F0C
cs=0xaa7;eip=0x000f0f; 	T(CMP(ax, 0x0E04D));	// 21439 cmp     ax, 0E04Dh      ; gr_right ;~ 0AA7:0F0F
cs=0xaa7;eip=0x000f12; 	J(JZ(loc_1a044));	// 21440 jz      loc_1A044 ;~ 0AA7:0F12
cs=0xaa7;eip=0x000f16; 	T(MOV(cx, 10));	// 21441 mov     cx, 10 ;~ 0AA7:0F16
cs=0xaa7;eip=0x000f19; 	T(CMP(ax, 0x0E048));	// 21442 cmp     ax, 0E048h      ; gr_up ;~ 0AA7:0F19
cs=0xaa7;eip=0x000f1c; 	J(JZ(loc_1a044));	// 21443 jz      loc_1A044 ;~ 0AA7:0F1C
cs=0xaa7;eip=0x000f20; 	T(MOV(cx, 2));	// 21444 mov     cx, 2 ;~ 0AA7:0F20
cs=0xaa7;eip=0x000f23; 	T(CMP(ax, 0x0E04B));	// 21445 cmp     ax, 0E04Bh      ; gr_left ;~ 0AA7:0F23
cs=0xaa7;eip=0x000f26; 	J(JZ(loc_1a070));	// 21446 jz      loc_1A070 ;~ 0AA7:0F26
cs=0xaa7;eip=0x000f2a; 	T(MOV(ecx, 10));	// 21447 mov     ecx, 10 ;~ 0AA7:0F2A
cs=0xaa7;eip=0x000f30; 	T(CMP(ax, 0x0E050));	// 21448 cmp     ax, 0E050h ;~ 0AA7:0F30
cs=0xaa7;eip=0x000f33; 	J(JZ(loc_1a070));	// 21449 jz      loc_1A070       ; gr_down ;~ 0AA7:0F33
cs=0xaa7;eip=0x000f37; 	T(CMP(al, 0x4D));	// 21450 cmp     al, 4Dh ; 'M' ;~ 0AA7:0F37
cs=0xaa7;eip=0x000f39; 	J(JZ(loc_1a0cc));	// 21451 jz      loc_1A0CC ;~ 0AA7:0F39
cs=0xaa7;eip=0x000f3d; 	T(CMP(al, 0x48));	// 21452 cmp     al, 48h ; 'H' ;~ 0AA7:0F3D
cs=0xaa7;eip=0x000f3f; 	J(JZ(loc_1a0a4));	// 21453 jz      loc_1A0A4 ;~ 0AA7:0F3F
cs=0xaa7;eip=0x000f43; 	T(CMP(al, 0x4B));	// 21454 cmp     al, 4Bh ; 'K' ;~ 0AA7:0F43
cs=0xaa7;eip=0x000f45; 	J(JZ(loc_1a0fe));	// 21455 jz      loc_1A0FE ;~ 0AA7:0F45
cs=0xaa7;eip=0x000f49; 	T(CMP(al, 0x50));	// 21456 cmp     al, 50h ; 'P' ;~ 0AA7:0F49
cs=0xaa7;eip=0x000f4b; 	J(JZ(loc_1a0b5));	// 21457 jz      loc_1A0B5 ;~ 0AA7:0F4B
cs=0xaa7;eip=0x000f4f; 	T(CMP(al, 0x4E));	// 21458 cmp     al, 4Eh ; 'N' ;~ 0AA7:0F4F
cs=0xaa7;eip=0x000f51; 	J(JZ(loc_1a134));	// 21459 jz      loc_1A134 ;~ 0AA7:0F51
cs=0xaa7;eip=0x000f55; 	T(CMP(al, 0x4A));	// 21460 cmp     al, 4Ah ; 'J' ;~ 0AA7:0F55
cs=0xaa7;eip=0x000f57; 	J(JZ(loc_1a15d));	// 21461 jz      loc_1A15D ;~ 0AA7:0F57
cs=0xaa7;eip=0x000f5b; 	T(CMP(al, 0x1A));	// 21462 cmp     al, 1Ah ;~ 0AA7:0F5B
cs=0xaa7;eip=0x000f5d; 	J(JZ(loc_1a1ab));	// 21463 jz      loc_1A1AB ;~ 0AA7:0F5D
cs=0xaa7;eip=0x000f61; 	T(CMP(al, 0x1B));	// 21464 cmp     al, 1Bh ;~ 0AA7:0F61
cs=0xaa7;eip=0x000f63; 	J(JZ(loc_1a182));	// 21465 jz      loc_1A182 ;~ 0AA7:0F63
cs=0xaa7;eip=0x000f67; 	T(CMP(al, 0x3B));	// 21466 cmp     al, 3Bh ; ';' ;~ 0AA7:0F67
cs=0xaa7;eip=0x000f69; 	J(JZ(loc_1a1d9));	// 21467 jz      loc_1A1D9 ;~ 0AA7:0F69
cs=0xaa7;eip=0x000f6d; 	T(CMP(al, 0x3C));	// 21468 cmp     al, 3Ch ; '<' ;~ 0AA7:0F6D
cs=0xaa7;eip=0x000f6f; 	J(JZ(loc_1a1df));	// 21469 jz      loc_1A1DF ;~ 0AA7:0F6F
cs=0xaa7;eip=0x000f73; 	T(CMP(al, 0x3D));	// 21470 cmp     al, 3Dh ; '=' ;~ 0AA7:0F73
cs=0xaa7;eip=0x000f75; 	J(JZ(loc_1a1e5));	// 21471 jz      loc_1A1E5 ;~ 0AA7:0F75
cs=0xaa7;eip=0x000f79; 	T(CMP(al, 0x3E));	// 21472 cmp     al, 3Eh ; '>' ;~ 0AA7:0F79
cs=0xaa7;eip=0x000f7b; 	J(JZ(loc_1a200));	// 21473 jz      loc_1A200 ;~ 0AA7:0F7B
cs=0xaa7;eip=0x000f7f; 	T(CMP(al, 0x3F));	// 21474 cmp     al, 3Fh ; '?' ;~ 0AA7:0F7F
cs=0xaa7;eip=0x000f81; 	J(JZ(loc_1a225));	// 21475 jz      loc_1A225 ;~ 0AA7:0F81
cs=0xaa7;eip=0x000f85; 	T(CMP(al, 0x40));	// 21476 cmp     al, 40h ; '@' ;~ 0AA7:0F85
cs=0xaa7;eip=0x000f87; 	J(JZ(loc_1a22b));	// 21477 jz      loc_1A22B ;~ 0AA7:0F87
cs=0xaa7;eip=0x000f8b; 	T(CMP(al, 0x42));	// 21478 cmp     al, 42h ; 'B' ;~ 0AA7:0F8B
cs=0xaa7;eip=0x000f8d; 	J(JZ(loc_1a231));	// 21479 jz      loc_1A231 ;~ 0AA7:0F8D
cs=0xaa7;eip=0x000f91; 	T(CMP(al, 0x43));	// 21480 cmp     al, 43h ; 'C' ;~ 0AA7:0F91
cs=0xaa7;eip=0x000f93; 	J(JZ(loc_1a244));	// 21481 jz      loc_1A244 ;~ 0AA7:0F93
cs=0xaa7;eip=0x000f97; 	T(CMP(al, 0x44));	// 21482 cmp     al, 44h ; 'D' ;~ 0AA7:0F97
cs=0xaa7;eip=0x000f99; 	J(JZ(loc_1a25c));	// 21483 jz      loc_1A25C ;~ 0AA7:0F99
cs=0xaa7;eip=0x000f9d; 	T(CMP(al, 0x57));	// 21484 cmp     al, 57h ; 'W' ;~ 0AA7:0F9D
cs=0xaa7;eip=0x000f9f; 	J(JZ(loc_1a274));	// 21485 jz      loc_1A274 ;~ 0AA7:0F9F
cs=0xaa7;eip=0x000fa3; 	T(CMP(al, 0x58));	// 21486 cmp     al, 58h ; 'X' ;~ 0AA7:0FA3
cs=0xaa7;eip=0x000fa5; 	J(JZ(loc_1a283));	// 21487 jz      loc_1A283 ;~ 0AA7:0FA5
cs=0xaa7;eip=0x000fa9; 	T(CMP(al, 0x26));	// 21488 cmp     al, 26h ; '&' ;~ 0AA7:0FA9
cs=0xaa7;eip=0x000fab; 	J(JZ(loc_1a124));	// 21489 jz      loc_1A124 ;~ 0AA7:0FAB
cs=0xaa7;eip=0x000faf; 	T(CMP(al, 0x32));	// 21490 cmp     al, 32h ; '2' ;~ 0AA7:0FAF
cs=0xaa7;eip=0x000fb1; 	J(JZ(loc_1a128));	// 21491 jz      loc_1A128 ;~ 0AA7:0FB1
cs=0xaa7;eip=0x000fb5; 	T(CMP(al, 0x13));	// 21492 cmp     al, 13h ;~ 0AA7:0FB5
cs=0xaa7;eip=0x000fb7; 	J(JZ(loc_1a12c));	// 21493 jz      loc_1A12C ;~ 0AA7:0FB7
cs=0xaa7;eip=0x000fbb; 	T(CMP(al, 0x1F));	// 21494 cmp     al, 1Fh ;~ 0AA7:0FBB
cs=0xaa7;eip=0x000fbd; 	J(JZ(loc_1a130));	// 21495 jz      loc_1A130 ;~ 0AA7:0FBD
cs=0xaa7;eip=0x000fc1; 	T(CMP(al, 0x0F));	// 21496 cmp     al, 0Fh ;~ 0AA7:0FC1
cs=0xaa7;eip=0x000fc3; 	J(JZ(loc_1a297));	// 21497 jz      loc_1A297 ;~ 0AA7:0FC3
cs=0xaa7;eip=0x000fc7; 	T(CMP(al, 0x45));	// 21498 cmp     al, 45h ; 'E' ;~ 0AA7:0FC7
cs=0xaa7;eip=0x000fc9; 	J(JZ(loc_1a2f1));	// 21499 jz      loc_1A2F1 ;~ 0AA7:0FC9
cs=0xaa7;eip=0x000fcd; 	T(CMP(al, 0x46));	// 21500 cmp     al, 46h ; 'F' ;~ 0AA7:0FCD
cs=0xaa7;eip=0x000fcf; 	J(JZ(loc_1a315));	// 21501 jz      loc_1A315 ;~ 0AA7:0FCF
cs=0xaa7;eip=0x000fd3; 	T(CMP(al, 0x4F));	// 21502 cmp     al, 4Fh ; 'O' ;~ 0AA7:0FD3
cs=0xaa7;eip=0x000fd5; 	J(JZ(loc_1a32e));	// 21503 jz      loc_1A32E ;~ 0AA7:0FD5
cs=0xaa7;eip=0x000fd9; 	T(CMP(al, 0x1C));	// 21504 cmp     al, 1Ch ;~ 0AA7:0FD9
cs=0xaa7;eip=0x000fdb; 	J(JZ(_l_enter));	// 21505 jz      _l_enter ;~ 0AA7:0FDB
cs=0xaa7;eip=0x000fdf; 	T(CMP(al, 1));	// 21506 cmp     al, 1 ;~ 0AA7:0FDF
cs=0xaa7;eip=0x000fe1; 	J(JZ(_l_esc));	// 21507 jz      _l_esc ;~ 0AA7:0FE1
cs=0xaa7;eip=0x000fe5; 	J(JC(_keyb_19efd));	// 21508 jb      _keyb_19EFD ;~ 0AA7:0FE5
cs=0xaa7;eip=0x000fe9; 	T(CMP(al, 0x0B));	// 21509 cmp     al, 0Bh ;~ 0AA7:0FE9
cs=0xaa7;eip=0x000feb; 	J(JBE(loc_1a33e));	// 21510 jbe     loc_1A33E ;~ 0AA7:0FEB
cs=0xaa7;eip=0x000fef; 	J(JMP(_keyb_19efd));	// 21511 jmp     _keyb_19EFD ;~ 0AA7:0FEF
loc_1a042:
	// 5677 
cs=0xaa7;eip=0x000ff2; 	T(STC);	// 21515 stc ;~ 0AA7:0FF2
cs=0xaa7;eip=0x000ff3; 	J(RETN(0));	// 21516 retn ;~ 0AA7:0FF3
loc_1a044:
	// 5678 
cs=0xaa7;eip=0x000ff4; 	X(PUSH(cx));	// 21521 push    cx ;~ 0AA7:0FF4
cs=0xaa7;eip=0x000ff5; 	J(CALLF(_get_12f7c,0));	// 21522 call    _get_12F7C ;~ 0AA7:0FF5
cs=0xaa7;eip=0x000ffa; 	T(AND(bx, 0x3F));	// 21523 and     bx, 3Fh ;~ 0AA7:0FFA
cs=0xaa7;eip=0x000ffd; 	T(MOVZX(eax, ax));	// 21524 movzx   eax, ax ;~ 0AA7:0FFD
cs=0xaa7;eip=0x001001; 	T(SHL(eax, 6));	// 21525 shl     eax, 6 ;~ 0AA7:1001
cs=0xaa7;eip=0x001005; 	T(OR(al, bl));	// 21526 or      al, bl ;~ 0AA7:1005
cs=0xaa7;eip=0x001007; 	T(INC(eax));	// 21527 inc     eax ;~ 0AA7:1007
cs=0xaa7;eip=0x001009; 	T(MOV(bl, al));	// 21528 mov     bl, al ;~ 0AA7:1009
cs=0xaa7;eip=0x00100b; 	T(AND(bl, 0x3F));	// 21529 and     bl, 3Fh ;~ 0AA7:100B
cs=0xaa7;eip=0x00100e; 	T(SHR(eax, 6));	// 21530 shr     eax, 6 ;~ 0AA7:100E
cs=0xaa7;eip=0x001012; 	T(MOV(bh, 1));	// 21531 mov     bh, 1 ;~ 0AA7:1012
cs=0xaa7;eip=0x001014; 	J(CALLF(sub_12f56,0));	// 21532 call    sub_12F56 ;~ 0AA7:1014
cs=0xaa7;eip=0x001019; 	X(POP(cx));	// 21533 pop     cx ;~ 0AA7:1019
cs=0xaa7;eip=0x00101a; 	T(DEC(cx));	// 21534 dec     cx ;~ 0AA7:101A
cs=0xaa7;eip=0x00101b; 	J(JNZ(loc_1a044));	// 21535 jnz     short loc_1A044 ;~ 0AA7:101B
cs=0xaa7;eip=0x00101d; 	J(JMP(_keyb_19efd));	// 21536 jmp     _keyb_19EFD ;~ 0AA7:101D
loc_1a070:
	// 5679 
cs=0xaa7;eip=0x001020; 	X(PUSH(cx));	// 21541 push    cx ;~ 0AA7:1020
cs=0xaa7;eip=0x001021; 	J(CALLF(_get_12f7c,0));	// 21542 call    _get_12F7C ;~ 0AA7:1021
cs=0xaa7;eip=0x001026; 	T(AND(bx, 0x3F));	// 21543 and     bx, 3Fh ;~ 0AA7:1026
cs=0xaa7;eip=0x001029; 	T(MOVZX(eax, ax));	// 21544 movzx   eax, ax ;~ 0AA7:1029
cs=0xaa7;eip=0x00102d; 	T(SHL(eax, 6));	// 21545 shl     eax, 6 ;~ 0AA7:102D
cs=0xaa7;eip=0x001031; 	T(OR(al, bl));	// 21546 or      al, bl ;~ 0AA7:1031
cs=0xaa7;eip=0x001033; 	T(SUB(eax, 1));	// 21547 sub     eax, 1 ;~ 0AA7:1033
cs=0xaa7;eip=0x001037; 	J(JC(loc_1a0a0));	// 21548 jb      short loc_1A0A0 ;~ 0AA7:1037
cs=0xaa7;eip=0x001039; 	T(MOV(bl, al));	// 21549 mov     bl, al ;~ 0AA7:1039
cs=0xaa7;eip=0x00103b; 	T(AND(bl, 0x3F));	// 21550 and     bl, 3Fh ;~ 0AA7:103B
cs=0xaa7;eip=0x00103e; 	T(SHR(eax, 6));	// 21551 shr     eax, 6 ;~ 0AA7:103E
cs=0xaa7;eip=0x001042; 	T(MOV(bh, 1));	// 21552 mov     bh, 1 ;~ 0AA7:1042
cs=0xaa7;eip=0x001044; 	J(CALLF(sub_12f56,0));	// 21553 call    sub_12F56 ;~ 0AA7:1044
cs=0xaa7;eip=0x001049; 	X(POP(cx));	// 21554 pop     cx ;~ 0AA7:1049
cs=0xaa7;eip=0x00104a; 	T(DEC(cx));	// 21555 dec     cx ;~ 0AA7:104A
cs=0xaa7;eip=0x00104b; 	J(JNZ(loc_1a070));	// 21556 jnz     short loc_1A070 ;~ 0AA7:104B
cs=0xaa7;eip=0x00104d; 	J(JMP(_keyb_19efd));	// 21557 jmp     _keyb_19EFD ;~ 0AA7:104D
loc_1a0a0:
	// 5680 
cs=0xaa7;eip=0x001050; 	X(POP(cx));	// 21561 pop     cx ;~ 0AA7:1050
cs=0xaa7;eip=0x001051; 	J(JMP(_keyb_19efd));	// 21562 jmp     _keyb_19EFD ;~ 0AA7:1051
loc_1a0a4:
	// 5681 
cs=0xaa7;eip=0x001054; 	X(SUB(byte_1de84, 1));	// 21566 sub     byte_1DE84, 1 ;~ 0AA7:1054
cs=0xaa7;eip=0x001059; 	J(JNC(_keyb_19efd));	// 21567 jnb     _keyb_19EFD ;~ 0AA7:1059
cs=0xaa7;eip=0x00105d; 	X(MOV(byte_1de84, 0));	// 21568 mov     byte_1DE84, 0 ;~ 0AA7:105D
cs=0xaa7;eip=0x001062; 	J(JMP(_keyb_19efd));	// 21569 jmp     _keyb_19EFD ;~ 0AA7:1062
loc_1a0b5:
	// 5682 
cs=0xaa7;eip=0x001065; 	X(INC(byte_1de84));	// 21573 inc     byte_1DE84 ;~ 0AA7:1065
cs=0xaa7;eip=0x001069; 	T(MOV(ax, _amount_of_x));	// 21574 mov     ax, _amount_of_x ;~ 0AA7:1069
cs=0xaa7;eip=0x00106c; 	T(CMP(byte_1de84, al));	// 21575 cmp     byte_1DE84, al ;~ 0AA7:106C
cs=0xaa7;eip=0x001070; 	J(JC(_keyb_19efd));	// 21576 jb      _keyb_19EFD ;~ 0AA7:1070
cs=0xaa7;eip=0x001074; 	T(DEC(al));	// 21577 dec     al ;~ 0AA7:1074
cs=0xaa7;eip=0x001076; 	X(MOV(byte_1de84, al));	// 21578 mov     byte_1DE84, al ;~ 0AA7:1076
cs=0xaa7;eip=0x001079; 	J(JMP(_keyb_19efd));	// 21579 jmp     _keyb_19EFD ;~ 0AA7:1079
loc_1a0cc:
	// 5683 
cs=0xaa7;eip=0x00107c; 	T(LFS(bx, _segfsbx_1de28));	// 21583 lfs     bx, _segfsbx_1DE28 ;~ 0AA7:107C
cs=0xaa7;eip=0x001081; 	T(MOV(al, 0x50));	// 21584 mov     al, 50h ; 'P' ;~ 0AA7:1081
cs=0xaa7;eip=0x001083; 	X(MUL1_1(byte_1de84));	// 21585 mul     byte_1DE84 ;~ 0AA7:1083
cs=0xaa7;eip=0x001087; 	T(ADD(bx, ax));	// 21586 add     bx, ax ;~ 0AA7:1087
cs=0xaa7;eip=0x001089; 	T(MOV(cl, 8));	// 21587 mov     cl, 8 ;~ 0AA7:1089
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x00108b; 	T(TEST(*(dw*)(((db*)&_keyb_switches)), 3));	// 21588 test    cs:_keyb_switches, 3 ;~ 0AA7:108B
cs=0xaa7;eip=0x001092; 	J(JNZ(loc_1a0e6));	// 21589 jnz     short loc_1A0E6 ;~ 0AA7:1092
cs=0xaa7;eip=0x001094; 	T(MOV(cl, 1));	// 21590 mov     cl, 1 ;~ 0AA7:1094
loc_1a0e6:
	// 5684 
cs=0xaa7;eip=0x001096; 	T(MOV(al, *(raddr(fs,bx+0x3A))));	// 21593 mov     al, fs:[bx+3Ah] ;~ 0AA7:1096
cs=0xaa7;eip=0x00109a; 	T(ADD(al, cl));	// 21594 add     al, cl ;~ 0AA7:109A
cs=0xaa7;eip=0x00109c; 	T(CMP(al, 0x80));	// 21595 cmp     al, 80h ; '
cs=0xaa7;eip=0x00109e; 	J(JBE(loc_1a0f2));	// 21596 jbe     short loc_1A0F2 ;~ 0AA7:109E
cs=0xaa7;eip=0x0010a0; 	T(MOV(al, 0x80));	// 21597 mov     al, 80h ; '
loc_1a0f2:
	// 5685 
cs=0xaa7;eip=0x0010a2; 	T(MOV(ch, byte_1de84));	// 21601 mov     ch, byte_1DE84 ;~ 0AA7:10A2
cs=0xaa7;eip=0x0010a6; 	J(CALLF(sub_12afd,0));	// 21602 call    sub_12AFD ;~ 0AA7:10A6
cs=0xaa7;eip=0x0010ab; 	J(JMP(_keyb_19efd));	// 21603 jmp     _keyb_19EFD ;~ 0AA7:10AB
loc_1a0fe:
	// 5686 
cs=0xaa7;eip=0x0010ae; 	T(LFS(bx, _segfsbx_1de28));	// 21607 lfs     bx, _segfsbx_1DE28 ;~ 0AA7:10AE
cs=0xaa7;eip=0x0010b3; 	T(MOV(al, 0x50));	// 21608 mov     al, 50h ; 'P' ;~ 0AA7:10B3
cs=0xaa7;eip=0x0010b5; 	X(MUL1_1(byte_1de84));	// 21609 mul     byte_1DE84 ;~ 0AA7:10B5
cs=0xaa7;eip=0x0010b9; 	T(ADD(bx, ax));	// 21610 add     bx, ax ;~ 0AA7:10B9
cs=0xaa7;eip=0x0010bb; 	T(MOV(cl, 8));	// 21611 mov     cl, 8 ;~ 0AA7:10BB
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0010bd; 	T(TEST(*(dw*)(((db*)&_keyb_switches)), 3));	// 21612 test    cs:_keyb_switches, 3 ;~ 0AA7:10BD
cs=0xaa7;eip=0x0010c4; 	J(JNZ(loc_1a118));	// 21613 jnz     short loc_1A118 ;~ 0AA7:10C4
cs=0xaa7;eip=0x0010c6; 	T(MOV(cl, 1));	// 21614 mov     cl, 1 ;~ 0AA7:10C6
loc_1a118:
	// 5687 
cs=0xaa7;eip=0x0010c8; 	T(MOV(al, *(raddr(fs,bx+0x3A))));	// 21617 mov     al, fs:[bx+3Ah] ;~ 0AA7:10C8
cs=0xaa7;eip=0x0010cc; 	T(SUB(al, cl));	// 21618 sub     al, cl ;~ 0AA7:10CC
cs=0xaa7;eip=0x0010ce; 	J(JNC(loc_1a0f2));	// 21619 jnb     short loc_1A0F2 ;~ 0AA7:10CE
cs=0xaa7;eip=0x0010d0; 	T(MOV(al, 0));	// 21620 mov     al, 0 ;~ 0AA7:10D0
cs=0xaa7;eip=0x0010d2; 	J(JMP(loc_1a0f2));	// 21621 jmp     short loc_1A0F2 ;~ 0AA7:10D2
loc_1a124:
	// 5688 
cs=0xaa7;eip=0x0010d4; 	T(MOV(al, 0));	// 21625 mov     al, 0 ;~ 0AA7:10D4
cs=0xaa7;eip=0x0010d6; 	J(JMP(loc_1a0f2));	// 21626 jmp     short loc_1A0F2 ;~ 0AA7:10D6
loc_1a128:
	// 5689 
cs=0xaa7;eip=0x0010d8; 	T(MOV(al, 64));	// 21630 mov     al, 64 ;~ 0AA7:10D8
cs=0xaa7;eip=0x0010da; 	J(JMP(loc_1a0f2));	// 21631 jmp     short loc_1A0F2 ;~ 0AA7:10DA
loc_1a12c:
	// 5690 
cs=0xaa7;eip=0x0010dc; 	T(MOV(al, 128));	// 21635 mov     al, 128 ;~ 0AA7:10DC
cs=0xaa7;eip=0x0010de; 	J(JMP(loc_1a0f2));	// 21636 jmp     short loc_1A0F2 ;~ 0AA7:10DE
loc_1a130:
	// 5691 
cs=0xaa7;eip=0x0010e0; 	T(MOV(al, 166));	// 21640 mov     al, 166 ;~ 0AA7:10E0
cs=0xaa7;eip=0x0010e2; 	J(JMP(loc_1a0f2));	// 21641 jmp     short loc_1A0F2 ;~ 0AA7:10E2
loc_1a134:
	// 5692 
cs=0xaa7;eip=0x0010e4; 	T(MOV(ax, -1));	// 21645 mov     ax, -1 ;~ 0AA7:10E4
cs=0xaa7;eip=0x0010e7; 	J(CALLF(_change_volume,0));	// 21646 call    _change_volume ;~ 0AA7:10E7
cs=0xaa7;eip=0x0010ec; 	T(MOV(cx, 32));	// 21647 mov     cx, 32 ;~ 0AA7:10EC
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0010ef; 	T(TEST(*(dw*)(((db*)&_keyb_switches)), 3));	// 21648 test    cs:_keyb_switches, 3 ;~ 0AA7:10EF
cs=0xaa7;eip=0x0010f6; 	J(JNZ(loc_1a14b));	// 21649 jnz     short loc_1A14B ;~ 0AA7:10F6
cs=0xaa7;eip=0x0010f8; 	T(MOV(cx, 2));	// 21650 mov     cx, 2 ;~ 0AA7:10F8
loc_1a14b:
	// 5693 
cs=0xaa7;eip=0x0010fb; 	T(ADD(ax, cx));	// 21653 add     ax, cx ;~ 0AA7:10FB
cs=0xaa7;eip=0x0010fd; 	T(CMP(ax, 256));	// 21654 cmp     ax, 256 ;~ 0AA7:10FD
cs=0xaa7;eip=0x001100; 	J(JC(loc_1a155));	// 21655 jb      short loc_1A155 ;~ 0AA7:1100
cs=0xaa7;eip=0x001102; 	T(MOV(ax, 256));	// 21656 mov     ax, 256 ;~ 0AA7:1102
loc_1a155:
	// 5694 
cs=0xaa7;eip=0x001105; 	J(CALLF(_change_volume,0));	// 21659 call    _change_volume ;~ 0AA7:1105
cs=0xaa7;eip=0x00110a; 	J(JMP(_keyb_19efd));	// 21660 jmp     _keyb_19EFD ;~ 0AA7:110A
loc_1a15d:
	// 5695 
cs=0xaa7;eip=0x00110d; 	T(MOV(ax, -1));	// 21664 mov     ax, -1 ;~ 0AA7:110D
cs=0xaa7;eip=0x001110; 	J(CALLF(_change_volume,0));	// 21665 call    _change_volume ;~ 0AA7:1110
cs=0xaa7;eip=0x001115; 	T(MOV(cx, 32));	// 21666 mov     cx, 32 ;~ 0AA7:1115
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x001118; 	T(TEST(*(dw*)(((db*)&_keyb_switches)), 3));	// 21667 test    cs:_keyb_switches, 3 ;~ 0AA7:1118
cs=0xaa7;eip=0x00111f; 	J(JNZ(loc_1a174));	// 21668 jnz     short loc_1A174 ;~ 0AA7:111F
cs=0xaa7;eip=0x001121; 	T(MOV(cx, 2));	// 21669 mov     cx, 2 ;~ 0AA7:1121
loc_1a174:
	// 5696 
cs=0xaa7;eip=0x001124; 	T(SUB(ax, cx));	// 21672 sub     ax, cx ;~ 0AA7:1124
cs=0xaa7;eip=0x001126; 	J(JNC(loc_1a17a));	// 21673 jnb     short loc_1A17A ;~ 0AA7:1126
cs=0xaa7;eip=0x001128; 	T(XOR(ax, ax));	// 21674 xor     ax, ax ;~ 0AA7:1128
loc_1a17a:
	// 5697 
cs=0xaa7;eip=0x00112a; 	J(CALLF(_change_volume,0));	// 21677 call    _change_volume ;~ 0AA7:112A
cs=0xaa7;eip=0x00112f; 	J(JMP(_keyb_19efd));	// 21678 jmp     _keyb_19EFD ;~ 0AA7:112F
loc_1a182:
	// 5698 
cs=0xaa7;eip=0x001132; 	T(MOV(ax, 0x0FFFF));	// 21682 mov     ax, 0FFFFh ;~ 0AA7:1132
cs=0xaa7;eip=0x001135; 	J(CALLF(_change_amplif,0));	// 21683 call    _change_amplif ;~ 0AA7:1135
cs=0xaa7;eip=0x00113a; 	T(MOV(cx, 1));	// 21684 mov     cx, 1 ;~ 0AA7:113A
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x00113d; 	T(TEST(*(dw*)(((db*)&_keyb_switches)), 3));	// 21685 test    cs:_keyb_switches, 3 ;~ 0AA7:113D
cs=0xaa7;eip=0x001144; 	J(JNZ(loc_1a199));	// 21686 jnz     short loc_1A199 ;~ 0AA7:1144
cs=0xaa7;eip=0x001146; 	T(MOV(cx, 0x0A));	// 21687 mov     cx, 0Ah ;~ 0AA7:1146
loc_1a199:
	// 5699 
cs=0xaa7;eip=0x001149; 	T(ADD(ax, cx));	// 21690 add     ax, cx ;~ 0AA7:1149
cs=0xaa7;eip=0x00114b; 	T(CMP(ax, 2500));	// 21691 cmp     ax, 2500 ;~ 0AA7:114B
cs=0xaa7;eip=0x00114e; 	J(JC(loc_1a1a3));	// 21692 jb      short loc_1A1A3 ;~ 0AA7:114E
cs=0xaa7;eip=0x001150; 	T(MOV(ax, 2500));	// 21693 mov     ax, 2500 ;~ 0AA7:1150
loc_1a1a3:
	// 5700 
cs=0xaa7;eip=0x001153; 	J(CALLF(_change_amplif,0));	// 21696 call    _change_amplif ;~ 0AA7:1153
cs=0xaa7;eip=0x001158; 	J(JMP(_keyb_19efd));	// 21697 jmp     _keyb_19EFD ;~ 0AA7:1158
loc_1a1ab:
	// 5701 
cs=0xaa7;eip=0x00115b; 	T(MOV(ax, -1));	// 21701 mov     ax, -1 ;~ 0AA7:115B
cs=0xaa7;eip=0x00115e; 	J(CALLF(_change_amplif,0));	// 21702 call    _change_amplif ;~ 0AA7:115E
cs=0xaa7;eip=0x001163; 	T(MOV(cx, 1));	// 21703 mov     cx, 1 ;~ 0AA7:1163
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x001166; 	T(TEST(*(dw*)(((db*)&_keyb_switches)), 3));	// 21704 test    cs:_keyb_switches, 3 ;~ 0AA7:1166
cs=0xaa7;eip=0x00116d; 	J(JNZ(loc_1a1c2));	// 21705 jnz     short loc_1A1C2 ;~ 0AA7:116D
cs=0xaa7;eip=0x00116f; 	T(MOV(cx, 10));	// 21706 mov     cx, 10 ;~ 0AA7:116F
loc_1a1c2:
	// 5702 
cs=0xaa7;eip=0x001172; 	T(SUB(ax, cx));	// 21709 sub     ax, cx ;~ 0AA7:1172
cs=0xaa7;eip=0x001174; 	J(JNC(loc_1a1c9));	// 21710 jnb     short loc_1A1C9 ;~ 0AA7:1174
cs=0xaa7;eip=0x001176; 	T(MOV(ax, 50));	// 21711 mov     ax, 50 ;~ 0AA7:1176
loc_1a1c9:
	// 5703 
cs=0xaa7;eip=0x001179; 	T(CMP(ax, 50));	// 21714 cmp     ax, 50 ;~ 0AA7:1179
cs=0xaa7;eip=0x00117c; 	J(JA(loc_1a1d1));	// 21715 ja      short loc_1A1D1 ;~ 0AA7:117C
cs=0xaa7;eip=0x00117e; 	T(MOV(ax, 50));	// 21716 mov     ax, 50 ;~ 0AA7:117E
loc_1a1d1:
	// 5704 
cs=0xaa7;eip=0x001181; 	J(CALLF(_change_amplif,0));	// 21719 call    _change_amplif ;~ 0AA7:1181
cs=0xaa7;eip=0x001186; 	J(JMP(_keyb_19efd));	// 21720 jmp     _keyb_19EFD ;~ 0AA7:1186
loc_1a1d9:
	// 5705 
cs=0xaa7;eip=0x001189; 	J(CALL(_f1_help,0));	// 21724 call    _f1_help ;~ 0AA7:1189
cs=0xaa7;eip=0x00118c; 	J(JMP(_keyb_19efd));	// 21725 jmp     _keyb_19EFD ;~ 0AA7:118C
loc_1a1df:
	// 5706 
cs=0xaa7;eip=0x00118f; 	J(CALL(_f2_waves,0));	// 21729 call    _f2_waves ;~ 0AA7:118F
cs=0xaa7;eip=0x001192; 	J(JMP(_keyb_19efd));	// 21730 jmp     _keyb_19EFD ;~ 0AA7:1192
loc_1a1e5:
	// 5707 
cs=0xaa7;eip=0x001195; 	J(CALL(_f3_textmetter,0));	// 21734 call    _f3_textmetter ;~ 0AA7:1195
cs=0xaa7;eip=0x001198; 	X(MOV(byte_1de85, 0));	// 21735 mov     byte_1DE85, 0 ;~ 0AA7:1198
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x00119d; 	T(TEST(*(dw*)(((db*)&_keyb_switches)), 3));	// 21736 test    cs:_keyb_switches, 3 ;~ 0AA7:119D
cs=0xaa7;eip=0x0011a4; 	J(JZ(_keyb_19efd));	// 21737 jz      _keyb_19EFD ;~ 0AA7:11A4
cs=0xaa7;eip=0x0011a8; 	X(MOV(byte_1de85, 1));	// 21738 mov     byte_1DE85, 1 ;~ 0AA7:11A8
cs=0xaa7;eip=0x0011ad; 	J(JMP(_keyb_19efd));	// 21739 jmp     _keyb_19EFD ;~ 0AA7:11AD
loc_1a200:
	// 5708 
cs=0xaa7;eip=0x0011b0; 	T(CMP(_offs_draw, m2c::k_f4_draw));	// 21743 cmp     _offs_draw, offset _f4_draw ;~ 0AA7:11B0
cs=0xaa7;eip=0x0011b6; 	J(JNZ(loc_1a219));	// 21744 jnz     short loc_1A219 ;~ 0AA7:11B6
cs=0xaa7;eip=0x0011b8; 	T(MOV(ax, word_1de6e));	// 21745 mov     ax, word_1DE6E ;~ 0AA7:11B8
cs=0xaa7;eip=0x0011bb; 	T(DEC(ax));	// 21746 dec     ax ;~ 0AA7:11BB
cs=0xaa7;eip=0x0011bc; 	X(ADD(_current_patterns, ax));	// 21747 add     _current_patterns, ax ;~ 0AA7:11BC
cs=0xaa7;eip=0x0011c0; 	T(MOV(ax, _current_patterns));	// 21748 mov     ax, _current_patterns ;~ 0AA7:11C0
cs=0xaa7;eip=0x0011c3; 	T(CMP(ax, word_1de46));	// 21749 cmp     ax, word_1DE46 ;~ 0AA7:11C3
cs=0xaa7;eip=0x0011c7; 	J(JC(loc_1a21f));	// 21750 jb      short loc_1A21F ;~ 0AA7:11C7
loc_1a219:
	// 5709 
cs=0xaa7;eip=0x0011c9; 	X(MOV(_current_patterns, 0));	// 21753 mov     _current_patterns, 0 ;~ 0AA7:11C9
loc_1a21f:
	// 5710 
cs=0xaa7;eip=0x0011cf; 	J(CALL(_f4_patternnae,0));	// 21756 call    _f4_patternnae ;~ 0AA7:11CF
cs=0xaa7;eip=0x0011d2; 	J(JMP(_keyb_19efd));	// 21757 jmp     _keyb_19EFD ;~ 0AA7:11D2
loc_1a225:
	// 5711 
cs=0xaa7;eip=0x0011d5; 	J(CALL(_f5_graphspectr,0));	// 21761 call    _f5_graphspectr ;~ 0AA7:11D5
cs=0xaa7;eip=0x0011d8; 	J(JMP(_keyb_19efd));	// 21762 jmp     _keyb_19EFD ;~ 0AA7:11D8
loc_1a22b:
	// 5712 
cs=0xaa7;eip=0x0011db; 	J(CALL(_f6_undoc,0));	// 21766 call    _f6_undoc ;~ 0AA7:11DB
cs=0xaa7;eip=0x0011de; 	J(JMP(_keyb_19efd));	// 21767 jmp     _keyb_19EFD ;~ 0AA7:11DE
loc_1a231:
	// 5713 
cs=0xaa7;eip=0x0011e1; 	J(CALL(__dispatch_call,off_1de42));	// 21771 call    off_1DE42 ;~ 0AA7:11E1
cs=0xaa7;eip=0x0011e5; 	J(CALL(_dosexec,0));	// 21772 call    _dosexec ;~ 0AA7:11E5
cs=0xaa7;eip=0x0011e8; 	X(MOV(byte_1de70, 0x0FF));	// 21773 mov     byte_1DE70, 0FFh ;~ 0AA7:11E8
cs=0xaa7;eip=0x0011ed; 	J(CALL(__dispatch_call,off_1de3c));	// 21774 call    off_1DE3C ;~ 0AA7:11ED
cs=0xaa7;eip=0x0011f1; 	J(JMP(_keyb_19efd));	// 21775 jmp     _keyb_19EFD ;~ 0AA7:11F1
loc_1a244:
	// 5714 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0011f4; 	T(TEST(*(dw*)(((db*)&_keyb_switches)), 0x4));	// 21779 test    cs:_keyb_switches, 100b ;~ 0AA7:11F4
cs=0xaa7;eip=0x0011fb; 	J(JNZ(loc_1a274));	// 21780 jnz     short loc_1A274 ;~ 0AA7:11FB
cs=0xaa7;eip=0x0011fd; 	J(CALLF(_get_playsettings,0));	// 21781 call    _get_playsettings ;~ 0AA7:11FD
cs=0xaa7;eip=0x001202; 	T(XOR(al, 1));	// 21782 xor     al, 1 ;~ 0AA7:1202
cs=0xaa7;eip=0x001204; 	J(CALLF(_set_playsettings,0));	// 21783 call    _set_playsettings ;~ 0AA7:1204
cs=0xaa7;eip=0x001209; 	J(JMP(_keyb_19efd));	// 21784 jmp     _keyb_19EFD ;~ 0AA7:1209
loc_1a25c:
	// 5715 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x00120c; 	T(TEST(*(dw*)(((db*)&_keyb_switches)), 0x4));	// 21788 test    cs:_keyb_switches, 100b ;~ 0AA7:120C
cs=0xaa7;eip=0x001213; 	J(JNZ(loc_1a283));	// 21789 jnz     short loc_1A283 ;~ 0AA7:1213
cs=0xaa7;eip=0x001215; 	J(CALLF(_get_playsettings,0));	// 21790 call    _get_playsettings ;~ 0AA7:1215
cs=0xaa7;eip=0x00121a; 	T(XOR(al, 2));	// 21791 xor     al, 2 ;~ 0AA7:121A
cs=0xaa7;eip=0x00121c; 	J(CALLF(_set_playsettings,0));	// 21792 call    _set_playsettings ;~ 0AA7:121C
cs=0xaa7;eip=0x001221; 	J(JMP(_keyb_19efd));	// 21793 jmp     _keyb_19EFD ;~ 0AA7:1221
loc_1a274:
	// 5716 
cs=0xaa7;eip=0x001224; 	J(CALLF(_get_playsettings,0));	// 21798 call    _get_playsettings ;~ 0AA7:1224
cs=0xaa7;eip=0x001229; 	T(XOR(al, 4));	// 21799 xor     al, 4 ;~ 0AA7:1229
cs=0xaa7;eip=0x00122b; 	J(CALLF(_set_playsettings,0));	// 21800 call    _set_playsettings ;~ 0AA7:122B
cs=0xaa7;eip=0x001230; 	J(JMP(_keyb_19efd));	// 21801 jmp     _keyb_19EFD ;~ 0AA7:1230
loc_1a283:
	// 5717 
cs=0xaa7;eip=0x001233; 	J(CALLF(_get_playsettings,0));	// 21806 call    _get_playsettings ;~ 0AA7:1233
cs=0xaa7;eip=0x001238; 	T(XOR(al, 0x10));	// 21807 xor     al, 10h ;~ 0AA7:1238
cs=0xaa7;eip=0x00123a; 	J(CALLF(_set_playsettings,0));	// 21808 call    _set_playsettings ;~ 0AA7:123A
cs=0xaa7;eip=0x00123f; 	X(XOR(*(db*)(((db*)&_configword)+1), 1));	// 21809 xor     byte ptr _configword+1, 1 ;~ 0AA7:123F
cs=0xaa7;eip=0x001244; 	J(JMP(_keyb_19efd));	// 21810 jmp     _keyb_19EFD ;~ 0AA7:1244
loc_1a297:
	// 5718 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x001247; 	T(TEST(*(dw*)(((db*)&_keyb_switches)), 0x4));	// 21814 test    cs:_keyb_switches, 100b ;~ 0AA7:1247
cs=0xaa7;eip=0x00124e; 	J(JNZ(loc_1a2c1));	// 21815 jnz     short loc_1A2C1 ;~ 0AA7:124E
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x001250; 	T(TEST(*(dw*)(((db*)&_keyb_switches)), 0x8));	// 21816 test    cs:_keyb_switches, 1000b ;~ 0AA7:1250
cs=0xaa7;eip=0x001257; 	J(JNZ(loc_1a2d1));	// 21817 jnz     short loc_1A2D1 ;~ 0AA7:1257
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x001259; 	T(TEST(*(dw*)(((db*)&_keyb_switches)), 0x3));	// 21818 test    cs:_keyb_switches, 11b ;~ 0AA7:1259
cs=0xaa7;eip=0x001260; 	J(JNZ(loc_1a2e1));	// 21819 jnz     short loc_1A2E1 ;~ 0AA7:1260
cs=0xaa7;eip=0x001262; 	J(CALLF(_get_playsettings,0));	// 21820 call    _get_playsettings ;~ 0AA7:1262
cs=0xaa7;eip=0x001267; 	T(XOR(al, 8));	// 21821 xor     al, 8 ;~ 0AA7:1267
cs=0xaa7;eip=0x001269; 	J(CALLF(_set_playsettings,0));	// 21822 call    _set_playsettings ;~ 0AA7:1269
cs=0xaa7;eip=0x00126e; 	J(JMP(_keyb_19efd));	// 21823 jmp     _keyb_19EFD ;~ 0AA7:126E
loc_1a2c1:
	// 5719 
cs=0xaa7;eip=0x001271; 	T(MOV(cx, 0x0FF));	// 21827 mov     cx, 0FFh ;~ 0AA7:1271
cs=0xaa7;eip=0x001274; 	T(XOR(bx, bx));	// 21828 xor     bx, bx ;~ 0AA7:1274
cs=0xaa7;eip=0x001276; 	T(MOV(dx, 0x7D0F));	// 21829 mov     dx, 7D0Fh ;~ 0AA7:1276
cs=0xaa7;eip=0x001279; 	J(CALLF(sub_12cad,0));	// 21830 call    sub_12CAD ;~ 0AA7:1279
cs=0xaa7;eip=0x00127e; 	J(JMP(_keyb_19efd));	// 21831 jmp     _keyb_19EFD ;~ 0AA7:127E
loc_1a2d1:
	// 5720 
cs=0xaa7;eip=0x001281; 	T(MOV(cx, 0x0FF));	// 21835 mov     cx, 0FFh ;~ 0AA7:1281
cs=0xaa7;eip=0x001284; 	T(XOR(bx, bx));	// 21836 xor     bx, bx ;~ 0AA7:1284
cs=0xaa7;eip=0x001286; 	T(MOV(dx, 0x910F));	// 21837 mov     dx, 910Fh ;~ 0AA7:1286
cs=0xaa7;eip=0x001289; 	J(CALLF(sub_12cad,0));	// 21838 call    sub_12CAD ;~ 0AA7:1289
cs=0xaa7;eip=0x00128e; 	J(JMP(_keyb_19efd));	// 21839 jmp     _keyb_19EFD ;~ 0AA7:128E
loc_1a2e1:
	// 5721 
cs=0xaa7;eip=0x001291; 	T(MOV(cx, 0x0FF));	// 21843 mov     cx, 0FFh ;~ 0AA7:1291
cs=0xaa7;eip=0x001294; 	T(XOR(bx, bx));	// 21844 xor     bx, bx ;~ 0AA7:1294
cs=0xaa7;eip=0x001296; 	T(MOV(dx, 0x960F));	// 21845 mov     dx, 960Fh ;~ 0AA7:1296
cs=0xaa7;eip=0x001299; 	J(CALLF(sub_12cad,0));	// 21846 call    sub_12CAD ;~ 0AA7:1299
cs=0xaa7;eip=0x00129e; 	J(JMP(_keyb_19efd));	// 21847 jmp     _keyb_19EFD ;~ 0AA7:129E
loc_1a2f1:
	// 5722 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0012a1; 	T(TEST(*(dw*)(((db*)&_keyb_switches)), 0x4));	// 21851 test    cs:_keyb_switches, 100b ;~ 0AA7:12A1
cs=0xaa7;eip=0x0012a8; 	J(JZ(_keyb_19efd));	// 21852 jz      _keyb_19EFD ;~ 0AA7:12A8
cs=0xaa7;eip=0x0012ac; 	T(MOV(al, 0x0FF));	// 21853 mov     al, 0FFh ;~ 0AA7:12AC
cs=0xaa7;eip=0x0012ae; 	J(CALLF(_getset_playstate,0));	// 21854 call    _getset_playstate ;~ 0AA7:12AE
cs=0xaa7;eip=0x0012b3; 	T(MOV(ah, al));	// 21855 mov     ah, al ;~ 0AA7:12B3
cs=0xaa7;eip=0x0012b5; 	T(MOV(al, 1));	// 21856 mov     al, 1 ;~ 0AA7:12B5
cs=0xaa7;eip=0x0012b7; 	T(CMP(ah, al));	// 21857 cmp     ah, al ;~ 0AA7:12B7
cs=0xaa7;eip=0x0012b9; 	J(JNZ(loc_1a30d));	// 21858 jnz     short loc_1A30D ;~ 0AA7:12B9
cs=0xaa7;eip=0x0012bb; 	T(MOV(al, 0));	// 21859 mov     al, 0 ;~ 0AA7:12BB
loc_1a30d:
	// 5723 
cs=0xaa7;eip=0x0012bd; 	J(CALLF(_getset_playstate,0));	// 21862 call    _getset_playstate ;~ 0AA7:12BD
cs=0xaa7;eip=0x0012c2; 	J(JMP(_keyb_19efd));	// 21863 jmp     _keyb_19EFD ;~ 0AA7:12C2
loc_1a315:
	// 5724 
cs=0xaa7;eip=0x0012c5; 	T(MOV(al, 0x0FF));	// 21867 mov     al, 0FFh ;~ 0AA7:12C5
cs=0xaa7;eip=0x0012c7; 	J(CALLF(_getset_playstate,0));	// 21868 call    _getset_playstate ;~ 0AA7:12C7
cs=0xaa7;eip=0x0012cc; 	T(MOV(ah, al));	// 21869 mov     ah, al ;~ 0AA7:12CC
cs=0xaa7;eip=0x0012ce; 	T(MOV(al, 2));	// 21870 mov     al, 2 ;~ 0AA7:12CE
cs=0xaa7;eip=0x0012d0; 	T(CMP(ah, al));	// 21871 cmp     ah, al ;~ 0AA7:12D0
cs=0xaa7;eip=0x0012d2; 	J(JNZ(loc_1a326));	// 21872 jnz     short loc_1A326 ;~ 0AA7:12D2
cs=0xaa7;eip=0x0012d4; 	T(MOV(al, 0));	// 21873 mov     al, 0 ;~ 0AA7:12D4
loc_1a326:
	// 5725 
cs=0xaa7;eip=0x0012d6; 	J(CALLF(_getset_playstate,0));	// 21876 call    _getset_playstate ;~ 0AA7:12D6
cs=0xaa7;eip=0x0012db; 	J(JMP(_keyb_19efd));	// 21877 jmp     _keyb_19EFD ;~ 0AA7:12DB
loc_1a32e:
	// 5726 
cs=0xaa7;eip=0x0012de; 	T(MOV(cx, 0x0FF));	// 21881 mov     cx, 0FFh ;~ 0AA7:12DE
cs=0xaa7;eip=0x0012e1; 	T(XOR(bx, bx));	// 21882 xor     bx, bx ;~ 0AA7:12E1
cs=0xaa7;eip=0x0012e3; 	T(MOV(dx, 0x0D));	// 21883 mov     dx, 0Dh ;~ 0AA7:12E3
cs=0xaa7;eip=0x0012e6; 	J(CALLF(sub_12cad,0));	// 21884 call    sub_12CAD ;~ 0AA7:12E6
cs=0xaa7;eip=0x0012eb; 	J(JMP(_keyb_19efd));	// 21885 jmp     _keyb_19EFD ;~ 0AA7:12EB
loc_1a33e:
	// 5727 
cs=0xaa7;eip=0x0012ee; 	T(SUB(al, 2));	// 21889 sub     al, 2 ;~ 0AA7:12EE
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0012f0; 	T(TEST(*(dw*)(((db*)&_keyb_switches)), 0x3));	// 21890 test    cs:_keyb_switches, 11b ;~ 0AA7:12F0
cs=0xaa7;eip=0x0012f7; 	J(JZ(loc_1a34b));	// 21891 jz      short loc_1A34B ;~ 0AA7:12F7
cs=0xaa7;eip=0x0012f9; 	T(ADD(al, 10));	// 21892 add     al, 10 ;~ 0AA7:12F9
loc_1a34b:
	// 5728 
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0012fb; 	T(TEST(*(dw*)(((db*)&_keyb_switches)), 0x4));	// 21895 test    cs:_keyb_switches, 100b ;~ 0AA7:12FB
cs=0xaa7;eip=0x001302; 	J(JZ(loc_1a356));	// 21896 jz      short loc_1A356 ;~ 0AA7:1302
cs=0xaa7;eip=0x001304; 	T(ADD(al, 20));	// 21897 add     al, 20 ;~ 0AA7:1304
loc_1a356:
	// 5729 
cs=0xaa7;eip=0x001306; 	T(CMP(al, *(db*)(((db*)&_amount_of_x))));	// 21900 cmp     al, byte ptr _amount_of_x ;~ 0AA7:1306
cs=0xaa7;eip=0x00130a; 	J(JNC(_keyb_19efd));	// 21901 jnb     _keyb_19EFD ;~ 0AA7:130A
cs=0xaa7;eip=0x00130e; 	T(MOV(ch, al));	// 21902 mov     ch, al ;~ 0AA7:130E
cs=0xaa7;eip=0x001310; 	T(LFS(bx, _segfsbx_1de28));	// 21903 lfs     bx, _segfsbx_1DE28 ;~ 0AA7:1310
cs=0xaa7;eip=0x001315; 	T(MOV(ah, 80));	// 21904 mov     ah, 80 ;~ 0AA7:1315
cs=0xaa7;eip=0x001317; 	T(MUL1_1(ah));	// 21905 mul     ah ;~ 0AA7:1317
cs=0xaa7;eip=0x001319; 	T(ADD(bx, ax));	// 21906 add     bx, ax ;~ 0AA7:1319
cs=0xaa7;eip=0x00131b; 	X(XOR(*(raddr(fs,bx+0x17)), 2));	// 21907 xor     byte ptr fs:[bx+17h], 2 ;~ 0AA7:131B
cs=0xaa7;eip=0x001320; 	T(MOV(bx, 0x0FE));	// 21908 mov     bx, 0FEh ; '
cs=0xaa7;eip=0x001323; 	T(XOR(cl, cl));	// 21909 xor     cl, cl ;~ 0AA7:1323
cs=0xaa7;eip=0x001325; 	T(XOR(dx, dx));	// 21910 xor     dx, dx ;~ 0AA7:1325
cs=0xaa7;eip=0x001327; 	J(CALLF(sub_12cad,0));	// 21911 call    sub_12CAD ;~ 0AA7:1327
cs=0xaa7;eip=0x00132c; 	J(JMP(_keyb_19efd));	// 21912 jmp     _keyb_19EFD ;~ 0AA7:132C
_l_enter:
	// 5730 
cs=0xaa7;eip=0x00132f; 	J(CALL(__dispatch_call,_offs_draw));	// 21917 call    _offs_draw ;~ 0AA7:132F
cs=0xaa7;eip=0x001333; 	J(CALL(__dispatch_call,_offs_draw2));	// 21918 call    _offs_draw2 ;~ 0AA7:1333
cs=0xaa7;eip=0x001337; 	T(CLC);	// 21919 clc ;~ 0AA7:1337
cs=0xaa7;eip=0x001338; 	J(RETN(0));	// 21920 retn ;~ 0AA7:1338
_l_esc:
	// 5731 
cs=0xaa7;eip=0x001339; 	X(MOV(byte_1de7c, 1));	// 21925 mov     byte_1DE7C, 1 ;~ 0AA7:1339
cs=0xaa7;eip=0x00133e; 	X(AND(byte_1de90, 0x0FD));	// 21926 and     byte_1DE90, 0FDh ;~ 0AA7:133E
loc_1a393:
	// 5732 
cs=0xaa7;eip=0x001343; 	J(CALL(__dispatch_call,_offs_draw));	// 21929 call    _offs_draw ;~ 0AA7:1343
cs=0xaa7;eip=0x001347; 	J(CALL(__dispatch_call,_offs_draw2));	// 21930 call    _offs_draw2 ;~ 0AA7:1347
cs=0xaa7;eip=0x00134b; 	J(CALLF(_snd_offx,0));	// 21931 call    _snd_offx ;~ 0AA7:134B
cs=0xaa7;eip=0x001350; 	J(CALLF(_memfree_125da,0));	// 21932 call    _memfree_125DA ;~ 0AA7:1350
cs=0xaa7;eip=0x001355; 	T(CLC);	// 21933 clc ;~ 0AA7:1355
cs=0xaa7;eip=0x001356; 	J(RETN(0));	// 21934 retn ;~ 0AA7:1356
loc_1a3a7:
	// 5733 
cs=0xaa7;eip=0x001357; 	X(AND(byte_1de90, 0x0FE));	// 21938 and     byte_1DE90, 0FEh ;~ 0AA7:1357
cs=0xaa7;eip=0x00135c; 	T(MOV(bx, offset(dseg,stru_244ab)));	// 21939 mov     bx, offset stru_244AB ; _mystr ;~ 0AA7:135C
cs=0xaa7;eip=0x00135f; 	T(MOV(ax, _mousecolumn));	// 21940 mov     ax, _mousecolumn ;~ 0AA7:135F
cs=0xaa7;eip=0x001362; 	T(MOV(bp, _mouserow));	// 21941 mov     bp, _mouserow ;~ 0AA7:1362
cs=0xaa7;eip=0x001366; 	T(SHR(ax, 3));	// 21942 shr     ax, 3 ;~ 0AA7:1366
cs=0xaa7;eip=0x001369; 	T(SHR(bp, 3));	// 21943 shr     bp, 3 ;~ 0AA7:1369
cs=0xaa7;eip=0x00136c; 	J(CALL(_mouse_1c7cf,0));	// 21944 call    _mouse_1C7CF ;~ 0AA7:136C
cs=0xaa7;eip=0x00136f; 	J(JC(_keyb_19efd));	// 21945 jb      _keyb_19EFD ;~ 0AA7:136F
cs=0xaa7;eip=0x001373; __disp=bx;
	J(return __dispatch_call(__disp, _state););	// 21946 jmp     bx ;~ 0AA7:1373
loc_1a3c5:
	// 5734 
cs=0xaa7;eip=0x001375; 	T(MOV(bx, offset(dseg,stru_244b7)));	// 21950 mov     bx, offset stru_244B7 ; _mystr ;~ 0AA7:1375
cs=0xaa7;eip=0x001378; 	T(MOV(ax, _mousecolumn));	// 21951 mov     ax, _mousecolumn ;~ 0AA7:1378
cs=0xaa7;eip=0x00137b; 	T(MOV(bp, _mouserow));	// 21952 mov     bp, _mouserow ;~ 0AA7:137B
cs=0xaa7;eip=0x00137f; 	T(SHR(ax, 3));	// 21953 shr     ax, 3 ;~ 0AA7:137F
cs=0xaa7;eip=0x001382; 	T(SHR(bp, 3));	// 21954 shr     bp, 3 ;~ 0AA7:1382
cs=0xaa7;eip=0x001385; 	J(CALL(_mouse_1c7cf,0));	// 21955 call    _mouse_1C7CF ;~ 0AA7:1385
cs=0xaa7;eip=0x001388; 	J(JC(_keyb_19efd));	// 21956 jb      _keyb_19EFD ;~ 0AA7:1388
cs=0xaa7;eip=0x00138c; 	X(PUSH(es));	// 21957 push    es ;~ 0AA7:138C
cs=0xaa7;eip=0x00138d; 	T(XOR(dx, dx));	// 21958 xor     dx, dx ;~ 0AA7:138D
cs=0xaa7;eip=0x00138f; 	T(MOV(es, dx));	// 21959 mov     es, dx ;~ 0AA7:138F
cs=0xaa7;eip=0x001391; 	T(MOV(edx, *(dd*)(raddr(es,0x46C))));	// 21961 mov     edx, es:46Ch ;~ 0AA7:1391
cs=0xaa7;eip=0x001397; 	T(CMP(edx, dword_1de88));	// 21962 cmp     edx, dword_1DE88 ;~ 0AA7:1397
cs=0xaa7;eip=0x00139c; 	J(JZ(loc_1a3f6));	// 21963 jz      short loc_1A3F6 ;~ 0AA7:139C
cs=0xaa7;eip=0x00139e; 	X(MOV(dword_1de88, edx));	// 21964 mov     dword_1DE88, edx ;~ 0AA7:139E
cs=0xaa7;eip=0x0013a3; 	X(POP(es));	// 21965 pop     es ;~ 0AA7:13A3
cs=0xaa7;eip=0x0013a4; __disp=bx;
	J(return __dispatch_call(__disp, _state););	// 21967 jmp     bx ;~ 0AA7:13A4
loc_1a3f6:
	// 5735 
cs=0xaa7;eip=0x0013a6; 	X(POP(es));	// 21971 pop     es ;~ 0AA7:13A6
cs=0xaa7;eip=0x0013a7; 	J(return _group32(m2c::kloc_193bc, _state););	// 21972 jmp     loc_193BC ;~ 0AA7:13A7
_f1_help:
	// 21979 
cs=0xaa7;eip=0x0013aa; 	X(MOV(off_1de3c, m2c::k_text_init));	// 21981 mov     off_1DE3C, offset _text_init ;~ 0AA7:13AA
cs=0xaa7;eip=0x0013b0; 	X(MOV(_offs_draw, m2c::k_f1_draw));	// 21982 mov     _offs_draw, offset _f1_draw ;~ 0AA7:13B0
cs=0xaa7;eip=0x0013b6; 	X(MOV(_offs_draw2, m2c::k_text_init2));	// 21983 mov     _offs_draw2, offset _text_init2 ;~ 0AA7:13B6
cs=0xaa7;eip=0x0013bc; 	X(MOV(off_1de42, m2c::kloc_1a4a6));	// 21984 mov     off_1DE42, offset loc_1A4A6 ;~ 0AA7:13BC
cs=0xaa7;eip=0x0013c2; 	J(CALL(_text_init,0));	// 21985 call    _text_init ;~ 0AA7:13C2
cs=0xaa7;eip=0x0013c5; 	J(RETN(0));	// 21986 retn ;~ 0AA7:13C5
_f3_textmetter:
	// 22007 
cs=0xaa7;eip=0x0013e2; 	X(MOV(off_1de3c, m2c::k_text_init));	// 22009 mov     off_1DE3C, offset _text_init ;~ 0AA7:13E2
cs=0xaa7;eip=0x0013e8; 	X(MOV(_offs_draw, m2c::k_f3_draw));	// 22010 mov     _offs_draw, offset _f3_draw ;~ 0AA7:13E8
cs=0xaa7;eip=0x0013ee; 	X(MOV(_offs_draw2, m2c::k_text_init2));	// 22011 mov     _offs_draw2, offset _text_init2 ;~ 0AA7:13EE
cs=0xaa7;eip=0x0013f4; 	X(MOV(off_1de42, m2c::kloc_1a4a6));	// 22012 mov     off_1DE42, offset loc_1A4A6 ;~ 0AA7:13F4
cs=0xaa7;eip=0x0013fa; 	J(CALL(_text_init,0));	// 22013 call    _text_init ;~ 0AA7:13FA
cs=0xaa7;eip=0x0013fd; 	J(RETN(0));	// 22014 retn ;~ 0AA7:13FD
_f4_patternnae:
	// 22021 
cs=0xaa7;eip=0x0013fe; 	X(MOV(off_1de3c, m2c::k_text_init));	// 22023 mov     off_1DE3C, offset _text_init ;~ 0AA7:13FE
cs=0xaa7;eip=0x001404; 	X(MOV(_offs_draw, m2c::k_f4_draw));	// 22024 mov     _offs_draw, offset _f4_draw ;~ 0AA7:1404
cs=0xaa7;eip=0x00140a; 	X(MOV(_offs_draw2, m2c::k_text_init2));	// 22025 mov     _offs_draw2, offset _text_init2 ;~ 0AA7:140A
cs=0xaa7;eip=0x001410; 	X(MOV(off_1de42, m2c::kloc_1a4a6));	// 22026 mov     off_1DE42, offset loc_1A4A6 ;~ 0AA7:1410
cs=0xaa7;eip=0x001416; 	J(CALL(_text_init,0));	// 22027 call    _text_init ;~ 0AA7:1416
cs=0xaa7;eip=0x001419; 	J(RETN(0));	// 22028 retn ;~ 0AA7:1419
_f6_undoc:
	// 22049 
cs=0xaa7;eip=0x001436; 	X(MOV(off_1de3c, m2c::k_text_init));	// 22051 mov     off_1DE3C, offset _text_init ;~ 0AA7:1436
cs=0xaa7;eip=0x00143c; 	X(MOV(_offs_draw, m2c::k_f6_draw));	// 22052 mov     _offs_draw, offset _f6_draw ;~ 0AA7:143C
cs=0xaa7;eip=0x001442; 	X(MOV(_offs_draw2, m2c::k_text_init2));	// 22053 mov     _offs_draw2, offset _text_init2 ;~ 0AA7:1442
cs=0xaa7;eip=0x001448; 	X(MOV(off_1de42, m2c::kloc_1a4a6));	// 22054 mov     off_1DE42, offset loc_1A4A6 ;~ 0AA7:1448
cs=0xaa7;eip=0x00144e; 	J(CALL(_text_init,0));	// 22055 call    _text_init ;~ 0AA7:144E
cs=0xaa7;eip=0x001451; 	J(RETN(0));	// 22056 retn ;~ 0AA7:1451
_text_init:
	// 22063 
cs=0xaa7;eip=0x001452; 	J(CALL(_text_init2,0));	// 22065 call    _text_init2 ;~ 0AA7:1452
cs=0xaa7;eip=0x001455; 	J(RETN(0));	// 22066 retn ;~ 0AA7:1455
seg001_1456_proc:
	// 22071 
loc_1a4a6:
	// 5736 
cs=0xaa7;eip=0x001456; 	J(CALL(_text_init2,0));	// 22073 call    _text_init2 ;~ 0AA7:1456
cs=0xaa7;eip=0x001459; 	J(RETN(0));	// 22074 retn ;~ 0AA7:1459
_text_init2:
	// 22079 
cs=0xaa7;eip=0x00145a; 	T(CMP(byte_1de86, 1));	// 22085 cmp     byte_1DE86, 1 ;~ 0AA7:145A
cs=0xaa7;eip=0x00145f; 	J(JZ(loc_1a4f2));	// 22086 jz      short loc_1A4F2 ;~ 0AA7:145F
cs=0xaa7;eip=0x001461; 	T(CMP(_amount_of_x, 0x0A));	// 22087 cmp     _amount_of_x, 0Ah ;~ 0AA7:1461
cs=0xaa7;eip=0x001466; 	J(JBE(loc_1a4f2));	// 22088 jbe     short loc_1A4F2 ;~ 0AA7:1466
cs=0xaa7;eip=0x001468; 	J(JMP(loc_1a5ab));	// 22089 jmp     loc_1A5AB ;~ 0AA7:1468
seg001_14a2_proc:
	// 22137 
loc_1a4f2:
	// 5740 
cs=0xaa7;eip=0x0014a2; 	J(CALL(_setvideomode,0));	// 22139 call    _setvideomode ;~ 0AA7:14A2
cs=0xaa7;eip=0x0014a5; 	T(CMP(byte_1de86, 1));	// 22140 cmp     byte_1DE86, 1 ;~ 0AA7:14A5
cs=0xaa7;eip=0x0014aa; 	J(JZ(loc_1a55b));	// 22141 jz      short loc_1A55B ;~ 0AA7:14AA
cs=0xaa7;eip=0x0014ac; 	X(MOV(word_1de6e, 0x0A));	// 22142 mov     word_1DE6E, 0Ah ;~ 0AA7:14AC
cs=0xaa7;eip=0x0014b2; 	T(MOV(eax, _videomempointer));	// 22143 mov     eax, _videomempointer ;~ 0AA7:14B2
cs=0xaa7;eip=0x0014b6; 	T(ADD(ax, 0x0B40));	// 22144 add     ax, 0B40h ;~ 0AA7:14B6
cs=0xaa7;eip=0x0014b9; 	X(MOV(_videopoint_shiftd, eax));	// 22145 mov     _videopoint_shiftd, eax ;~ 0AA7:14B9
cs=0xaa7;eip=0x0014bd; 	T(CMP(byte_1de70, 0));	// 22146 cmp     byte_1DE70, 0 ;~ 0AA7:14BD
cs=0xaa7;eip=0x0014c2; 	J(JZ(loc_1a545));	// 22147 jz      short loc_1A545 ;~ 0AA7:14C2
cs=0xaa7;eip=0x0014c4; 	T(CMP(byte_1de70, 1));	// 22148 cmp     byte_1DE70, 1 ;~ 0AA7:14C4
cs=0xaa7;eip=0x0014c9; 	J(JZ(loc_1a529));	// 22149 jz      short loc_1A529 ;~ 0AA7:14C9
cs=0xaa7;eip=0x0014cb; 	T(MOV(cx, 0));	// 22150 mov     cx, 0 ;~ 0AA7:14CB
cs=0xaa7;eip=0x0014ce; 	T(MOV(dx, 0x1B4F));	// 22151 mov     dx, 1B4Fh ;~ 0AA7:14CE
cs=0xaa7;eip=0x0014d1; 	T(MOV(bl, 0x78));	// 22152 mov     bl, 78h ; 'x' ;~ 0AA7:14D1
cs=0xaa7;eip=0x0014d3; 	T(MOV(ax, 0x7F03));	// 22153 mov     ax, 7F03h ;~ 0AA7:14D3
cs=0xaa7;eip=0x0014d6; 	J(CALL(_draw_frame,0));	// 22154 call    _draw_frame ;~ 0AA7:14D6
loc_1a529:
	// 5741 
cs=0xaa7;eip=0x0014d9; 	T(MOV(cx, 0x1103));	// 22157 mov     cx, 1103h ;~ 0AA7:14D9
cs=0xaa7;eip=0x0014dc; 	T(MOV(dx, 0x1A25));	// 22158 mov     dx, 1A25h ;~ 0AA7:14DC
cs=0xaa7;eip=0x0014df; 	T(MOV(bl, 0x7F));	// 22159 mov     bl, 7Fh ;~ 0AA7:14DF
cs=0xaa7;eip=0x0014e1; 	T(MOV(ax, 0x7803));	// 22160 mov     ax, 7803h ;~ 0AA7:14E1
cs=0xaa7;eip=0x0014e4; 	J(CALL(_draw_frame,0));	// 22161 call    _draw_frame ;~ 0AA7:14E4
cs=0xaa7;eip=0x0014e7; 	T(MOV(cx, 0x112A));	// 22162 mov     cx, 112Ah ;~ 0AA7:14E7
cs=0xaa7;eip=0x0014ea; 	T(MOV(dx, 0x1A4C));	// 22163 mov     dx, 1A4Ch ;~ 0AA7:14EA
cs=0xaa7;eip=0x0014ed; 	T(MOV(bl, 0x7F));	// 22164 mov     bl, 7Fh ;~ 0AA7:14ED
cs=0xaa7;eip=0x0014ef; 	T(MOV(ax, 0x7803));	// 22165 mov     ax, 7803h ;~ 0AA7:14EF
cs=0xaa7;eip=0x0014f2; 	J(CALL(_draw_frame,0));	// 22166 call    _draw_frame ;~ 0AA7:14F2
loc_1a545:
	// 5742 
cs=0xaa7;eip=0x0014f5; 	T(MOV(cx, 0x501));	// 22169 mov     cx, 501h ;~ 0AA7:14F5
cs=0xaa7;eip=0x0014f8; 	T(MOV(dx, 0x104E));	// 22170 mov     dx, 104Eh ;~ 0AA7:14F8
cs=0xaa7;eip=0x0014fb; 	T(MOV(bl, 0x7F));	// 22171 mov     bl, 7Fh ;~ 0AA7:14FB
cs=0xaa7;eip=0x0014fd; 	T(MOV(ax, 0x7803));	// 22172 mov     ax, 7803h ;~ 0AA7:14FD
cs=0xaa7;eip=0x001500; 	J(CALL(_draw_frame,0));	// 22173 call    _draw_frame ;~ 0AA7:1500
cs=0xaa7;eip=0x001503; 	X(MOV(byte_1de70, 0));	// 22174 mov     byte_1DE70, 0 ;~ 0AA7:1503
cs=0xaa7;eip=0x001508; 	J(JMP(loc_1a628));	// 22175 jmp     loc_1A628 ;~ 0AA7:1508
loc_1a55b:
	// 5743 
cs=0xaa7;eip=0x00150b; 	X(MOV(word_1de6e, 7));	// 22179 mov     word_1DE6E, 7 ;~ 0AA7:150B
cs=0xaa7;eip=0x001511; 	T(MOV(eax, _videomempointer));	// 22180 mov     eax, _videomempointer ;~ 0AA7:1511
cs=0xaa7;eip=0x001515; 	T(ADD(ax, 0x960));	// 22181 add     ax, 960h ;~ 0AA7:1515
cs=0xaa7;eip=0x001518; 	X(MOV(_videopoint_shiftd, eax));	// 22182 mov     _videopoint_shiftd, eax ;~ 0AA7:1518
cs=0xaa7;eip=0x00151c; 	T(MOV(cx, 0));	// 22183 mov     cx, 0 ;~ 0AA7:151C
cs=0xaa7;eip=0x00151f; 	T(MOV(dx, 0x184F));	// 22184 mov     dx, 184Fh ;~ 0AA7:151F
cs=0xaa7;eip=0x001522; 	T(MOV(bl, 0x78));	// 22185 mov     bl, 78h ; 'x' ;~ 0AA7:1522
cs=0xaa7;eip=0x001524; 	T(MOV(ax, 0x7F03));	// 22186 mov     ax, 7F03h ;~ 0AA7:1524
cs=0xaa7;eip=0x001527; 	J(CALL(_draw_frame,0));	// 22187 call    _draw_frame ;~ 0AA7:1527
cs=0xaa7;eip=0x00152a; 	T(MOV(cx, 0x0E03));	// 22188 mov     cx, 0E03h ;~ 0AA7:152A
cs=0xaa7;eip=0x00152d; 	T(MOV(dx, 0x1725));	// 22189 mov     dx, 1725h ;~ 0AA7:152D
cs=0xaa7;eip=0x001530; 	T(MOV(bl, 0x7F));	// 22190 mov     bl, 7Fh ;~ 0AA7:1530
cs=0xaa7;eip=0x001532; 	T(MOV(ax, 0x7803));	// 22191 mov     ax, 7803h ;~ 0AA7:1532
cs=0xaa7;eip=0x001535; 	J(CALL(_draw_frame,0));	// 22192 call    _draw_frame ;~ 0AA7:1535
cs=0xaa7;eip=0x001538; 	T(MOV(cx, 0x0E2A));	// 22193 mov     cx, 0E2Ah ;~ 0AA7:1538
cs=0xaa7;eip=0x00153b; 	T(MOV(dx, 0x174C));	// 22194 mov     dx, 174Ch ;~ 0AA7:153B
cs=0xaa7;eip=0x00153e; 	T(MOV(bl, 0x7F));	// 22195 mov     bl, 7Fh ;~ 0AA7:153E
cs=0xaa7;eip=0x001540; 	T(MOV(ax, 0x7803));	// 22196 mov     ax, 7803h ;~ 0AA7:1540
cs=0xaa7;eip=0x001543; 	J(CALL(_draw_frame,0));	// 22197 call    _draw_frame ;~ 0AA7:1543
cs=0xaa7;eip=0x001546; 	T(MOV(cx, 0x501));	// 22198 mov     cx, 501h ;~ 0AA7:1546
cs=0xaa7;eip=0x001549; 	T(MOV(dx, 0x0D4E));	// 22199 mov     dx, 0D4Eh ;~ 0AA7:1549
cs=0xaa7;eip=0x00154c; 	T(MOV(bl, 0x7F));	// 22200 mov     bl, 7Fh ;~ 0AA7:154C
cs=0xaa7;eip=0x00154e; 	T(MOV(ax, 0x7803));	// 22201 mov     ax, 7803h ;~ 0AA7:154E
cs=0xaa7;eip=0x001551; 	J(CALL(_draw_frame,0));	// 22202 call    _draw_frame ;~ 0AA7:1551
cs=0xaa7;eip=0x001554; 	X(MOV(byte_1de70, 0));	// 22203 mov     byte_1DE70, 0 ;~ 0AA7:1554
cs=0xaa7;eip=0x001559; 	J(JMP(loc_1a628));	// 22204 jmp     short loc_1A628 ;~ 0AA7:1559
loc_1a5ab:
	// 5744 
cs=0xaa7;eip=0x00155b; 	T(CMP(byte_1de70, 2));	// 22208 cmp     byte_1DE70, 2 ;~ 0AA7:155B
cs=0xaa7;eip=0x001560; 	J(JZ(loc_1a61a));	// 22209 jz      short loc_1A61A ;~ 0AA7:1560
cs=0xaa7;eip=0x001562; 	T(MOV(ax, 3));	// 22210 mov     ax, 3 ;~ 0AA7:1562
cs=0xaa7;eip=0x001565; 	T(CMP(byte_1de70, 1));	// 22211 cmp     byte_1DE70, 1 ;~ 0AA7:1565
cs=0xaa7;eip=0x00156a; 	J(JZ(loc_1a5c3));	// 22212 jz      short loc_1A5C3 ;~ 0AA7:156A
cs=0xaa7;eip=0x00156c; 	T(CMP(byte_1de70, 0));	// 22213 cmp     byte_1DE70, 0 ;~ 0AA7:156C
cs=0xaa7;eip=0x001571; 	J(JNZ(loc_1a5c5));	// 22214 jnz     short loc_1A5C5 ;~ 0AA7:1571
loc_1a5c3:
	// 5745 
cs=0xaa7;eip=0x001573; 	T(OR(al, 0x80));	// 22217 or      al, 80h ;~ 0AA7:1573
loc_1a5c5:
	// 5746 
cs=0xaa7;eip=0x001575; 	S(_INT(0x10));	// 22220 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 0AA7:1575
cs=0xaa7;eip=0x001577; 	J(CALL(_txt_blinkingoff,0));	// 22222 call    _txt_blinkingoff ;~ 0AA7:1577
cs=0xaa7;eip=0x00157a; 	T(MOV(ax, 0x1112));	// 22223 mov     ax, 1112h ;~ 0AA7:157A
cs=0xaa7;eip=0x00157d; 	T(XOR(bl, bl));	// 22224 xor     bl, bl ;~ 0AA7:157D
cs=0xaa7;eip=0x00157f; 	S(_INT(0x10));	// 22225 int     10h             ; - VIDEO - TEXT-MODE CHARACTER GENERATOR FUNCTIONS (PS, EGA, VGA) ;~ 0AA7:157F
cs=0xaa7;eip=0x001581; 	T(MOV(dx, 0x3300));	// 22230 mov     dx, 3300h ;~ 0AA7:1581
cs=0xaa7;eip=0x001584; 	T(XOR(bh, bh));	// 22231 xor     bh, bh ;~ 0AA7:1584
cs=0xaa7;eip=0x001586; 	T(MOV(ah, 2));	// 22232 mov     ah, 2 ;~ 0AA7:1586
cs=0xaa7;eip=0x001588; 	S(_INT(0x10));	// 22233 int     10h             ; - VIDEO - SET CURSOR POSITION ;~ 0AA7:1588
cs=0xaa7;eip=0x00158a; 	X(MOV(byte_1de70, 2));	// 22236 mov     byte_1DE70, 2 ;~ 0AA7:158A
cs=0xaa7;eip=0x00158f; 	X(MOV(word_1de6e, 0x20));	// 22237 mov     word_1DE6E, 20h ; ' ' ;~ 0AA7:158F
cs=0xaa7;eip=0x001595; 	T(MOV(eax, _videomempointer));	// 22238 mov     eax, _videomempointer ;~ 0AA7:1595
cs=0xaa7;eip=0x001599; 	T(ADD(ax, 6400));	// 22239 add     ax, 6400 ;~ 0AA7:1599
cs=0xaa7;eip=0x00159c; 	X(MOV(_videopoint_shiftd, eax));	// 22240 mov     _videopoint_shiftd, eax ;~ 0AA7:159C
cs=0xaa7;eip=0x0015a0; 	T(MOV(cx, 0));	// 22241 mov     cx, 0 ;~ 0AA7:15A0
cs=0xaa7;eip=0x0015a3; 	T(MOV(dx, 0x314F));	// 22242 mov     dx, 314Fh ;~ 0AA7:15A3
cs=0xaa7;eip=0x0015a6; 	T(MOV(bl, 0x78));	// 22243 mov     bl, 78h ; 'x' ;~ 0AA7:15A6
cs=0xaa7;eip=0x0015a8; 	T(MOV(ax, 0x7F03));	// 22244 mov     ax, 7F03h ;~ 0AA7:15A8
cs=0xaa7;eip=0x0015ab; 	J(CALL(_draw_frame,0));	// 22245 call    _draw_frame ;~ 0AA7:15AB
cs=0xaa7;eip=0x0015ae; 	T(MOV(cx, 0x2703));	// 22246 mov     cx, 2703h ;~ 0AA7:15AE
cs=0xaa7;eip=0x0015b1; 	T(MOV(dx, 0x3025));	// 22247 mov     dx, 3025h ;~ 0AA7:15B1
cs=0xaa7;eip=0x0015b4; 	T(MOV(bl, 0x7F));	// 22248 mov     bl, 7Fh ;~ 0AA7:15B4
cs=0xaa7;eip=0x0015b6; 	T(MOV(ax, 0x7803));	// 22249 mov     ax, 7803h ;~ 0AA7:15B6
cs=0xaa7;eip=0x0015b9; 	J(CALL(_draw_frame,0));	// 22250 call    _draw_frame ;~ 0AA7:15B9
cs=0xaa7;eip=0x0015bc; 	T(MOV(cx, 0x272A));	// 22251 mov     cx, 272Ah ;~ 0AA7:15BC
cs=0xaa7;eip=0x0015bf; 	T(MOV(dx, 0x304C));	// 22252 mov     dx, 304Ch ;~ 0AA7:15BF
cs=0xaa7;eip=0x0015c2; 	T(MOV(bl, 0x7F));	// 22253 mov     bl, 7Fh ;~ 0AA7:15C2
cs=0xaa7;eip=0x0015c4; 	T(MOV(ax, 0x7803));	// 22254 mov     ax, 7803h ;~ 0AA7:15C4
cs=0xaa7;eip=0x0015c7; 	J(CALL(_draw_frame,0));	// 22255 call    _draw_frame ;~ 0AA7:15C7
loc_1a61a:
	// 5747 
cs=0xaa7;eip=0x0015ca; 	T(MOV(cx, 0x501));	// 22258 mov     cx, 501h ;~ 0AA7:15CA
cs=0xaa7;eip=0x0015cd; 	T(MOV(dx, 0x264E));	// 22259 mov     dx, 264Eh ;~ 0AA7:15CD
cs=0xaa7;eip=0x0015d0; 	T(MOV(bl, 0x7F));	// 22260 mov     bl, 7Fh ;~ 0AA7:15D0
cs=0xaa7;eip=0x0015d2; 	T(MOV(ax, 0x7803));	// 22261 mov     ax, 7803h ;~ 0AA7:15D2
cs=0xaa7;eip=0x0015d5; 	J(CALL(_draw_frame,0));	// 22262 call    _draw_frame ;~ 0AA7:15D5
loc_1a628:
	// 5748 
cs=0xaa7;eip=0x0015d8; 	J(CALL(_txt_draw_top_title,0));	// 22266 call    _txt_draw_top_title ;~ 0AA7:15D8
cs=0xaa7;eip=0x0015db; 	T(MOV(ax, ds));	// 22267 mov     ax, ds ;~ 0AA7:15DB
cs=0xaa7;eip=0x0015dd; 	T(MOV(bx, offset(dseg,_buffer_1)));	// 22268 mov     bx, offset _buffer_1 ; 2800h ;~ 0AA7:15DD
cs=0xaa7;eip=0x0015e0; 	T(SHR(bx, 4));	// 22269 shr     bx, 4 ;~ 0AA7:15E0
cs=0xaa7;eip=0x0015e3; 	T(ADD(ax, bx));	// 22270 add     ax, bx ;~ 0AA7:15E3
cs=0xaa7;eip=0x0015e5; 	X(MOV(_buffer_1seg, ax));	// 22271 mov     _buffer_1seg, ax ;~ 0AA7:15E5
cs=0xaa7;eip=0x0015e8; 	T(MOVZX(si, _snd_card_type));	// 22272 movzx   si, _snd_card_type ;~ 0AA7:15E8
cs=0xaa7;eip=0x0015ed; 	T(CMP(si, 0x0A));	// 22273 cmp     si, 0Ah ;~ 0AA7:15ED
cs=0xaa7;eip=0x0015f0; 	J(JC(loc_1a645));	// 22274 jb      short loc_1A645 ;~ 0AA7:15F0
cs=0xaa7;eip=0x0015f2; 	T(MOV(si, 0x0A));	// 22275 mov     si, 0Ah ;~ 0AA7:15F2
loc_1a645:
	// 5749 
cs=0xaa7;eip=0x0015f5; 	T(SHL(si, 1));	// 22278 shl     si, 1 ;~ 0AA7:15F5
cs=0xaa7;eip=0x0015f7; 	T(MOV(si, *(dw*)(((db*)&_table_sndcrdname)+si)));	// 22279 mov     si, _table_sndcrdname[si] ; str ;~ 0AA7:15F7
cs=0xaa7;eip=0x0015fb; 	T(LES(di, _videopoint_shiftd));	// 22280 les     di, _videopoint_shiftd ;~ 0AA7:15FB
cs=0xaa7;eip=0x0015ff; 	T(ADD(di, 0x58));	// 22281 add     di, 58h ; 'X'   ; videoptr ;~ 0AA7:15FF
cs=0xaa7;eip=0x001602; 	T(MOV(ah, 0x7F));	// 22282 mov     ah, 7Fh         ; color ;~ 0AA7:1602
cs=0xaa7;eip=0x001604; 	J(CALL(_put_message,0));	// 22283 call    _put_message ;~ 0AA7:1604
cs=0xaa7;eip=0x001607; 	T(CMP(_snd_card_type, 0));	// 22284 cmp     _snd_card_type, 0 ;~ 0AA7:1607
cs=0xaa7;eip=0x00160c; 	J(JNZ(loc_1a687));	// 22285 jnz     short loc_1A687 ;~ 0AA7:160C
cs=0xaa7;eip=0x00160e; 	X(PUSH(di));	// 22286 push    di ;~ 0AA7:160E
cs=0xaa7;eip=0x00160f; 	X(PUSH(es));	// 22287 push    es ;~ 0AA7:160F
cs=0xaa7;eip=0x001610; 	J(CALLF(sub_1265d,0));	// 22288 call    sub_1265D ;~ 0AA7:1610
cs=0xaa7;eip=0x001615; 	X(POP(es));	// 22289 pop     es ;~ 0AA7:1615
cs=0xaa7;eip=0x001616; 	X(POP(di));	// 22290 pop     di ;~ 0AA7:1616
cs=0xaa7;eip=0x001617; 	X(MOV(*(dw*)(raddr(es,di)), 0x7F20));	// 22291 mov     word ptr es:[di], 7F20h ;~ 0AA7:1617
cs=0xaa7;eip=0x00161c; 	T(ADD(di, 2));	// 22292 add     di, 2           ; videoptr ;~ 0AA7:161C
cs=0xaa7;eip=0x00161f; 	T(MOVZX(si, dh));	// 22293 movzx   si, dh ;~ 0AA7:161F
cs=0xaa7;eip=0x001622; 	T(AND(si, 0x60));	// 22294 and     si, 1100000b ;~ 0AA7:1622
cs=0xaa7;eip=0x001625; 	T(SHR(si, 3));	// 22295 shr     si, 3 ;~ 0AA7:1625
cs=0xaa7;eip=0x001628; 	T(ADD(si, offset(dseg,_a256)));	// 22296 add     si, offset _a256 ; str ;~ 0AA7:1628
cs=0xaa7;eip=0x00162c; 	T(MOV(ah, 0x7F));	// 22297 mov     ah, 7Fh         ; color ;~ 0AA7:162C
cs=0xaa7;eip=0x00162e; 	J(CALL(_put_message,0));	// 22298 call    _put_message ;~ 0AA7:162E
cs=0xaa7;eip=0x001631; 	T(MOV(si, offset(dseg,_akb)));	// 22299 mov     si, offset _aKb ; str ;~ 0AA7:1631
cs=0xaa7;eip=0x001634; 	J(CALL(_put_message,0));	// 22300 call    _put_message ;~ 0AA7:1634
loc_1a687:
	// 5750 
cs=0xaa7;eip=0x001637; 	T(CMP(_snd_card_type, 0x0A));	// 22303 cmp     _snd_card_type, 0Ah ;~ 0AA7:1637
cs=0xaa7;eip=0x00163c; 	J(JZ(loc_1a6b7));	// 22304 jz      short loc_1A6B7 ;~ 0AA7:163C
cs=0xaa7;eip=0x00163e; 	T(MOV(si, offset(dseg,_buffer_1dc6c)+2));	// 22305 mov     si, (offset _buffer_1DC6C+2) ;~ 0AA7:163E
cs=0xaa7;eip=0x001641; 	X(MOV(*(dw*)(((db*)&_buffer_1dc6c)), 0x2820));	// 22306 mov     word ptr _buffer_1DC6C, 2820h ; ' )' ;~ 0AA7:1641
cs=0xaa7;eip=0x001647; 	T(XOR(dx, dx));	// 22307 xor     dx, dx ;~ 0AA7:1647
cs=0xaa7;eip=0x001649; 	T(MOV(ax, _outp_freq));	// 22308 mov     ax, _outp_freq ;~ 0AA7:1649
cs=0xaa7;eip=0x00164c; 	T(MOV(cx, 1000));	// 22309 mov     cx, 1000 ;~ 0AA7:164C
cs=0xaa7;eip=0x00164f; 	T(DIV2(cx));	// 22310 div     cx ;~ 0AA7:164F
cs=0xaa7;eip=0x001651; 	J(CALL(_my_u8toa10,0));	// 22311 call    _my_u8toa10 ;~ 0AA7:1651
cs=0xaa7;eip=0x001654; 	X(MOV(*(dd*)(raddr(ds,si)), 0x297A486B));	// 22312 mov     dword ptr [si], 297A486Bh ; 'kHz(' ;~ 0AA7:1654
cs=0xaa7;eip=0x00165b; 	X(MOV(*(raddr(ds,si+4)), 0));	// 22313 mov     byte ptr [si+4], 0 ;~ 0AA7:165B
cs=0xaa7;eip=0x00165f; 	T(MOV(si, offset(dseg,_buffer_1dc6c)));	// 22314 mov     si, offset _buffer_1DC6C ; str ;~ 0AA7:165F
cs=0xaa7;eip=0x001662; 	T(MOV(ah, 0x7F));	// 22315 mov     ah, 7Fh         ; color ;~ 0AA7:1662
cs=0xaa7;eip=0x001664; 	J(CALL(_put_message,0));	// 22316 call    _put_message ;~ 0AA7:1664
loc_1a6b7:
	// 5751 
cs=0xaa7;eip=0x001667; 	T(MOV(al, 0x78));	// 22319 mov     al, 78h ; 'x' ;~ 0AA7:1667
cs=0xaa7;eip=0x001669; 	T(CMP(byte_1de7b, 1));	// 22320 cmp     byte_1DE7B, 1 ;~ 0AA7:1669
cs=0xaa7;eip=0x00166e; 	J(JNZ(loc_1a6c2));	// 22321 jnz     short loc_1A6C2 ;~ 0AA7:166E
cs=0xaa7;eip=0x001670; 	T(MOV(al, 0x7C));	// 22322 mov     al, 7Ch ; '|' ;~ 0AA7:1670
loc_1a6c2:
	// 5752 
cs=0xaa7;eip=0x001672; 	X(MOV(byte_1cceb, al));	// 22325 mov     byte_1CCEB, al ;~ 0AA7:1672
cs=0xaa7;eip=0x001675; 	T(LES(di, _videopoint_shiftd));	// 22326 les     di, _videopoint_shiftd ;~ 0AA7:1675
cs=0xaa7;eip=0x001679; 	T(MOV(si, offset(dseg,_bottom_menu)));	// 22327 mov     si, offset _bottom_menu ; str ;~ 0AA7:1679
cs=0xaa7;eip=0x00167c; 	J(CALL(_write_scr,0));	// 22328 call    _write_scr ;~ 0AA7:167C
cs=0xaa7;eip=0x00167f; 	J(CALLF(sub_126a9,0));	// 22329 call    sub_126A9 ;~ 0AA7:167F
cs=0xaa7;eip=0x001684; 	X(MOV(*(dw*)(((db*)&dword_1de2c)), si));	// 22330 mov     word ptr dword_1DE2C, si ;~ 0AA7:1684
cs=0xaa7;eip=0x001688; 	X(MOV(*(dw*)(((db*)&dword_1de2c)+2), es));	// 22331 mov     word ptr dword_1DE2C+2, es ;~ 0AA7:1688
cs=0xaa7;eip=0x00168c; 	X(PUSH(cx));	// 22332 push    cx ;~ 0AA7:168C
cs=0xaa7;eip=0x00168d; 	T(MOV(si, offset(dseg,_buffer_1dc6c)));	// 22333 mov     si, offset _buffer_1DC6C ;~ 0AA7:168D
cs=0xaa7;eip=0x001690; 	T(MOV(al, ch));	// 22334 mov     al, ch ;~ 0AA7:1690
cs=0xaa7;eip=0x001692; 	X(PUSH(bx));	// 22335 push    bx ;~ 0AA7:1692
cs=0xaa7;eip=0x001693; 	J(CALL(_my_u8toa10,0));	// 22336 call    _my_u8toa10 ;~ 0AA7:1693
cs=0xaa7;eip=0x001696; 	X(POP(bx));	// 22337 pop     bx ;~ 0AA7:1696
cs=0xaa7;eip=0x001697; 	X(MOV(*(raddr(ds,si)), '/'));	// 22338 mov     byte ptr [si], '/' ;~ 0AA7:1697
cs=0xaa7;eip=0x00169a; 	T(INC(si));	// 22339 inc     si ;~ 0AA7:169A
cs=0xaa7;eip=0x00169b; 	T(MOVZX(ax, bh));	// 22340 movzx   ax, bh ;~ 0AA7:169B
cs=0xaa7;eip=0x00169e; 	X(MOV(word_1de46, ax));	// 22341 mov     word_1DE46, ax ;~ 0AA7:169E
cs=0xaa7;eip=0x0016a1; 	J(CALL(_my_u8toa10,0));	// 22342 call    _my_u8toa10 ;~ 0AA7:16A1
cs=0xaa7;eip=0x0016a4; 	X(MOV(*(dd*)(raddr(ds,si)), '   '));	// 22343 mov     dword ptr [si], '   ' ;~ 0AA7:16A4
cs=0xaa7;eip=0x0016ab; 	T(MOV(si, offset(dseg,_buffer_1dc6c)));	// 22344 mov     si, offset _buffer_1DC6C ; str ;~ 0AA7:16AB
cs=0xaa7;eip=0x0016ae; 	T(LES(di, _videopoint_shiftd));	// 22345 les     di, _videopoint_shiftd ;~ 0AA7:16AE
cs=0xaa7;eip=0x0016b2; 	T(ADD(di, 0x2AA));	// 22346 add     di, 2AAh        ; videoptr ;~ 0AA7:16B2
cs=0xaa7;eip=0x0016b6; 	T(MOV(ah, 0x7F));	// 22347 mov     ah, 7Fh         ; color ;~ 0AA7:16B6
cs=0xaa7;eip=0x0016b8; 	J(CALL(_put_message,0));	// 22348 call    _put_message ;~ 0AA7:16B8
cs=0xaa7;eip=0x0016bb; 	X(POP(cx));	// 22349 pop     cx ;~ 0AA7:16BB
cs=0xaa7;eip=0x0016bc; 	T(MOV(si, offset(dseg,_buffer_1dc6c)));	// 22350 mov     si, offset _buffer_1DC6C ;~ 0AA7:16BC
cs=0xaa7;eip=0x0016bf; 	T(MOV(al, cl));	// 22351 mov     al, cl ;~ 0AA7:16BF
cs=0xaa7;eip=0x0016c1; 	J(CALL(_my_u8toa10,0));	// 22352 call    _my_u8toa10 ;~ 0AA7:16C1
cs=0xaa7;eip=0x0016c4; 	X(MOV(*(dd*)(raddr(ds,si)), '   '));	// 22353 mov     dword ptr [si], '   ' ;~ 0AA7:16C4
cs=0xaa7;eip=0x0016cb; 	T(SUB(si, cx));	// 22354 sub     si, cx          ; str ;~ 0AA7:16CB
cs=0xaa7;eip=0x0016cd; 	T(LES(di, _videopoint_shiftd));	// 22355 les     di, _videopoint_shiftd ;~ 0AA7:16CD
cs=0xaa7;eip=0x0016d1; 	T(ADD(di, 0x20A));	// 22356 add     di, 20Ah        ; videoptr ;~ 0AA7:16D1
cs=0xaa7;eip=0x0016d5; 	T(MOV(ah, 0x7F));	// 22357 mov     ah, 7Fh         ; color ;~ 0AA7:16D5
cs=0xaa7;eip=0x0016d7; 	J(CALL(_put_message,0));	// 22358 call    _put_message ;~ 0AA7:16D7
cs=0xaa7;eip=0x0016da; 	T(MOV(bx, 0x0FFFF));	// 22359 mov     bx, 0FFFFh ;~ 0AA7:16DA
cs=0xaa7;eip=0x0016dd; 	T(MOV(ah, 0x48));	// 22360 mov     ah, 48h ;~ 0AA7:16DD
cs=0xaa7;eip=0x0016df; 	S(_INT(0x21));	// 22361 int     21h             ; DOS - 2+ - ALLOCATE MEMORY ;~ 0AA7:16DF
cs=0xaa7;eip=0x0016e1; 	T(MOV(ax, bx));	// 22363 mov     ax, bx ;~ 0AA7:16E1
cs=0xaa7;eip=0x0016e3; 	T(SHR(ax, 6));	// 22364 shr     ax, 6 ;~ 0AA7:16E3
cs=0xaa7;eip=0x0016e6; 	T(MOV(si, offset(dseg,_buffer_1dc6c)));	// 22365 mov     si, offset _buffer_1DC6C ;~ 0AA7:16E6
cs=0xaa7;eip=0x0016e9; 	J(CALL(_my_u16toa10,0));	// 22366 call    _my_u16toa10 ;~ 0AA7:16E9
cs=0xaa7;eip=0x0016ec; 	X(MOV(*(dd*)(raddr(ds,si)), 0x20424B));	// 22367 mov     dword ptr [si], 20424Bh ; 'KB ' ;~ 0AA7:16EC
cs=0xaa7;eip=0x0016f3; 	T(CMP(si, offset(dseg,_buffer_1dc6c)+2));	// 22368 cmp     si, (offset _buffer_1DC6C+2) ;~ 0AA7:16F3
cs=0xaa7;eip=0x0016f7; 	J(JC(loc_1a74d));	// 22369 jb      short loc_1A74D ;~ 0AA7:16F7
cs=0xaa7;eip=0x0016f9; 	X(MOV(*(raddr(ds,si+2)), 0));	// 22370 mov     byte ptr [si+2], 0 ;~ 0AA7:16F9
loc_1a74d:
	// 5753 
cs=0xaa7;eip=0x0016fd; 	T(SUB(si, cx));	// 22373 sub     si, cx          ; str ;~ 0AA7:16FD
cs=0xaa7;eip=0x0016ff; 	T(LES(di, _videopoint_shiftd));	// 22374 les     di, _videopoint_shiftd ;~ 0AA7:16FF
cs=0xaa7;eip=0x001703; 	T(ADD(di, 0x12E));	// 22375 add     di, 12Eh        ; videoptr ;~ 0AA7:1703
cs=0xaa7;eip=0x001707; 	T(MOV(ah, 0x7F));	// 22376 mov     ah, 7Fh         ; color ;~ 0AA7:1707
cs=0xaa7;eip=0x001709; 	J(CALL(_put_message,0));	// 22377 call    _put_message ;~ 0AA7:1709
cs=0xaa7;eip=0x00170c; 	J(RETN(0));	// 22378 retn ;~ 0AA7:170C
seg001_18a8_proc:
	// 22539 
_f3_draw:
	// 5760 
cs=0xaa7;eip=0x0018a8; 	J(CALL(_txt_draw_bottom,0));	// 22540 call    _txt_draw_bottom ;~ 0AA7:18A8
cs=0xaa7;eip=0x0018ab; 	T(CMP(byte_1de85, 1));	// 22541 cmp     byte_1DE85, 1 ;~ 0AA7:18AB
cs=0xaa7;eip=0x0018b0; 	J(JZ(loc_1a913));	// 22542 jz      short loc_1A913 ;~ 0AA7:18B0
cs=0xaa7;eip=0x0018b2; 	T(MOV(es, _buffer_1seg));	// 22543 mov     es, _buffer_1seg ;~ 0AA7:18B2
cs=0xaa7;eip=0x0018b6; 	T(XOR(di, di));	// 22545 xor     di, di ;~ 0AA7:18B6
cs=0xaa7;eip=0x0018b8; 	T(MOV(cx, 0x50));	// 22546 mov     cx, 50h ; 'P' ;~ 0AA7:18B8
cs=0xaa7;eip=0x0018bb; 	T(MOV(ax, 0x4001));	// 22547 mov     ax, 4001h ;~ 0AA7:18BB
cs=0xaa7;eip=0x0018be; 	J(CALLF(_volume_prep,0));	// 22548 call    _volume_prep ;~ 0AA7:18BE
loc_1a913:
	// 5761 
cs=0xaa7;eip=0x0018c3; 	X(MOV(_buffer_2seg, offset(dseg,_buffer_1)));	// 22551 mov     _buffer_2seg, offset _buffer_1 ; 2800h ;~ 0AA7:18C3
cs=0xaa7;eip=0x0018c9; 	T(LFS(bx, _segfsbx_1de28));	// 22552 lfs     bx, _segfsbx_1DE28 ;~ 0AA7:18C9
cs=0xaa7;eip=0x0018ce; 	T(LES(di, _videomempointer));	// 22553 les     di, _videomempointer ;~ 0AA7:18CE
cs=0xaa7;eip=0x0018d2; 	T(ADD(di, 0x3C4));	// 22555 add     di, 3C4h ;~ 0AA7:18D2
cs=0xaa7;eip=0x0018d6; 	T(MOV(cx, _amount_of_x));	// 22556 mov     cx, _amount_of_x ;~ 0AA7:18D6
cs=0xaa7;eip=0x0018da; 	T(CMP(cx, word_1de6e));	// 22557 cmp     cx, word_1DE6E ;~ 0AA7:18DA
cs=0xaa7;eip=0x0018de; 	J(JBE(loc_1a934));	// 22558 jbe     short loc_1A934 ;~ 0AA7:18DE
cs=0xaa7;eip=0x0018e0; 	T(MOV(cx, word_1de6e));	// 22559 mov     cx, word_1DE6E ;~ 0AA7:18E0
loc_1a934:
	// 5762 
cs=0xaa7;eip=0x0018e4; 	X(INC(byte_1de71));	// 22562 inc     byte_1DE71 ;~ 0AA7:18E4
cs=0xaa7;eip=0x0018e8; 	T(XOR(ax, ax));	// 22563 xor     ax, ax ;~ 0AA7:18E8
loc_1a93a:
	// 5763 
cs=0xaa7;eip=0x0018ea; 	X(PUSH(ax));	// 22566 push    ax ;~ 0AA7:18EA
cs=0xaa7;eip=0x0018eb; 	X(PUSH(cx));	// 22567 push    cx ;~ 0AA7:18EB
cs=0xaa7;eip=0x0018ec; 	X(PUSH(di));	// 22568 push    di ;~ 0AA7:18EC
cs=0xaa7;eip=0x0018ed; 	T(MOV(dl, al));	// 22569 mov     dl, al ;~ 0AA7:18ED
cs=0xaa7;eip=0x0018ef; 	T(ADD(al, '1'));	// 22570 add     al, '1' ;~ 0AA7:18EF
cs=0xaa7;eip=0x0018f1; 	T(CMP(al, '9'));	// 22571 cmp     al, '9' ;~ 0AA7:18F1
cs=0xaa7;eip=0x0018f3; 	J(JBE(loc_1a947));	// 22572 jbe     short loc_1A947 ;~ 0AA7:18F3
cs=0xaa7;eip=0x0018f5; 	T(ADD(al, 7));	// 22573 add     al, 7 ;~ 0AA7:18F5
loc_1a947:
	// 5764 
cs=0xaa7;eip=0x0018f7; 	T(MOV(ah, 0x1E));	// 22576 mov     ah, 1Eh ;~ 0AA7:18F7
cs=0xaa7;eip=0x0018f9; 	T(CMP(dl, byte_1de84));	// 22577 cmp     dl, byte_1DE84 ;~ 0AA7:18F9
cs=0xaa7;eip=0x0018fd; 	J(JZ(loc_1a951));	// 22578 jz      short loc_1A951 ;~ 0AA7:18FD
cs=0xaa7;eip=0x0018ff; 	T(MOV(ah, 0x7E));	// 22579 mov     ah, 7Eh ; '~' ;~ 0AA7:18FF
loc_1a951:
	// 5765 
cs=0xaa7;eip=0x001901; 	X(MOV(*(dw*)(raddr(es,di+2)), ax));	// 22582 mov     es:[di+2], ax ;~ 0AA7:1901
cs=0xaa7;eip=0x001905; 	T(MOV(al, ' '));	// 22583 mov     al, ' ' ;~ 0AA7:1905
cs=0xaa7;eip=0x001907; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 22584 mov     es:[di], ax ;~ 0AA7:1907
cs=0xaa7;eip=0x00190a; 	X(MOV(*(dw*)(raddr(es,di+4)), ax));	// 22585 mov     es:[di+4], ax ;~ 0AA7:190A
cs=0xaa7;eip=0x00190e; 	T(ADD(di, 6));	// 22586 add     di, 6 ;~ 0AA7:190E
cs=0xaa7;eip=0x001911; 	T(MOVZX(si, *(raddr(fs,bx+0x35))));	// 22587 movzx   si, byte ptr fs:[bx+35h] ;~ 0AA7:1911
cs=0xaa7;eip=0x001916; 	T(MOV(al, ' '));	// 22588 mov     al, ' ' ;~ 0AA7:1916
cs=0xaa7;eip=0x001918; 	T(TEST(si, 0x0F));	// 22589 test    si, 0Fh ;~ 0AA7:1918
cs=0xaa7;eip=0x00191c; 	J(JZ(loc_1a975));	// 22590 jz      short loc_1A975 ;~ 0AA7:191C
cs=0xaa7;eip=0x00191e; 	T(MOV(ax, si));	// 22591 mov     ax, si ;~ 0AA7:191E
cs=0xaa7;eip=0x001920; 	T(SHR(al, 4));	// 22592 shr     al, 4 ;~ 0AA7:1920
cs=0xaa7;eip=0x001923; 	T(ADD(al, '0'));	// 22593 add     al, '0' ;~ 0AA7:1923
loc_1a975:
	// 5766 
cs=0xaa7;eip=0x001925; 	T(MOV(ah, 0x7F));	// 22596 mov     ah, 7Fh ;~ 0AA7:1925
cs=0xaa7;eip=0x001927; 	X(MOV(*(dw*)(raddr(es,di+4)), ax));	// 22597 mov     es:[di+4], ax ;~ 0AA7:1927
cs=0xaa7;eip=0x00192b; 	T(AND(si, 0x0F));	// 22598 and     si, 0Fh ;~ 0AA7:192B
cs=0xaa7;eip=0x00192e; 	T(SHL(si, 1));	// 22599 shl     si, 1 ;~ 0AA7:192E
cs=0xaa7;eip=0x001930; 	T(MOV(al, *((_notes)+si)));	// 22600 mov     al, byte ptr _notes[si] ; "  C-C#D-D#E-F-F#G-G#A-A#B-" ;~ 0AA7:1930
cs=0xaa7;eip=0x001934; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 22601 mov     es:[di], ax ;~ 0AA7:1934
cs=0xaa7;eip=0x001937; 	T(MOV(al, *(((_notes)+1)+si)));	// 22602 mov     al, byte ptr (_notes+1)[si] ; " C-C#D-D#E-F-F#G-G#A-A#B-" ;~ 0AA7:1937
cs=0xaa7;eip=0x00193b; 	X(MOV(*(dw*)(raddr(es,di+2)), ax));	// 22603 mov     es:[di+2], ax ;~ 0AA7:193B
cs=0xaa7;eip=0x00193f; 	T(ADD(di, 8));	// 22604 add     di, 8 ;~ 0AA7:193F
cs=0xaa7;eip=0x001942; 	T(TEST(*(raddr(fs,bx+0x17)), 1));	// 22605 test    byte ptr fs:[bx+17h], 1 ;~ 0AA7:1942
cs=0xaa7;eip=0x001947; 	J(JNZ(loc_1a9ad));	// 22606 jnz     short loc_1A9AD ;~ 0AA7:1947
cs=0xaa7;eip=0x001949; 	T(MOV(si, offset(dseg,_amute)));	// 22607 mov     si, offset _aMute ; "<Mute>                " ;~ 0AA7:1949
cs=0xaa7;eip=0x00194c; 	T(MOV(ah, 0x7F));	// 22608 mov     ah, 7Fh ;~ 0AA7:194C
cs=0xaa7;eip=0x00194e; 	T(TEST(*(raddr(fs,bx+0x17)), 2));	// 22609 test    byte ptr fs:[bx+17h], 2 ;~ 0AA7:194E
cs=0xaa7;eip=0x001953; 	J(JNZ(loc_1a9a8));	// 22610 jnz     short loc_1A9A8 ;~ 0AA7:1953
loc_1a9a5:
	// 5767 
cs=0xaa7;eip=0x001955; 	T(MOV(si, offset(dseg,asc_1da00)));	// 22613 mov     si, offset asc_1DA00 ; "                      " ;~ 0AA7:1955
loc_1a9a8:
	// 5768 
cs=0xaa7;eip=0x001958; 	J(CALL(_put_message,0));	// 22616 call    _put_message ;~ 0AA7:1958
cs=0xaa7;eip=0x00195b; 	J(JMP(loc_1a9c2));	// 22617 jmp     short loc_1A9C2 ;~ 0AA7:195B
loc_1a9ad:
	// 5769 
cs=0xaa7;eip=0x00195d; 	T(MOVZX(eax, *(raddr(fs,bx+2))));	// 22621 movzx   eax, byte ptr fs:[bx+2] ;~ 0AA7:195D
cs=0xaa7;eip=0x001963; 	T(DEC(ax));	// 22622 dec     ax ;~ 0AA7:1963
cs=0xaa7;eip=0x001964; 	J(JS(loc_1a9a5));	// 22623 js      short loc_1A9A5 ;~ 0AA7:1964
cs=0xaa7;eip=0x001966; 	T(SHL(ax, 6));	// 22624 shl     ax, 6 ;~ 0AA7:1966
cs=0xaa7;eip=0x001969; 	T(MOV(si, ax));	// 22625 mov     si, ax ;~ 0AA7:1969
cs=0xaa7;eip=0x00196b; 	T(ADD(si, *(dw*)(((db*)&dword_1de2c))));	// 22626 add     si, word ptr dword_1DE2C ;~ 0AA7:196B
cs=0xaa7;eip=0x00196f; 	J(CALL(_txt_1abae,0));	// 22627 call    _txt_1ABAE ;~ 0AA7:196F
loc_1a9c2:
	// 5770 
cs=0xaa7;eip=0x001972; 	T(ADD(di, 2));	// 22630 add     di, 2 ;~ 0AA7:1972
cs=0xaa7;eip=0x001975; 	T(CMP(byte_1de85, 1));	// 22631 cmp     byte_1DE85, 1 ;~ 0AA7:1975
cs=0xaa7;eip=0x00197a; 	J(JNZ(loc_1aa1a));	// 22632 jnz     short loc_1AA1A ;~ 0AA7:197A
cs=0xaa7;eip=0x00197c; 	X(PUSH(di));	// 22633 push    di ;~ 0AA7:197C
cs=0xaa7;eip=0x00197d; 	X(PUSH(es));	// 22634 push    es ;~ 0AA7:197D
cs=0xaa7;eip=0x00197e; 	T(MOV(ax, ds));	// 22635 mov     ax, ds ;~ 0AA7:197E
cs=0xaa7;eip=0x001980; 	T(MOV(es, ax));	// 22636 mov     es, ax ;~ 0AA7:1980
cs=0xaa7;eip=0x001982; 	T(MOV(di, offset(dseg,_buffer_1)));	// 22638 mov     di, offset _buffer_1 ; 2800h ;~ 0AA7:1982
cs=0xaa7;eip=0x001985; 	T(CLD);	// 22639 cld ;~ 0AA7:1985
cs=0xaa7;eip=0x001986; 	T(MOVZX(eax, *(raddr(fs,bx+2))));	// 22640 movzx   eax, byte ptr fs:[bx+2] ;~ 0AA7:1986
cs=0xaa7;eip=0x00198c; 	T(MOV(bp, 2));	// 22641 mov     bp, 2 ;~ 0AA7:198C
cs=0xaa7;eip=0x00198f; 	J(CALL(_my_u32toa_fill,0));	// 22642 call    _my_u32toa_fill ;~ 0AA7:198F
cs=0xaa7;eip=0x001992; 	T(MOV(bp, 4));	// 22643 mov     bp, 4 ;~ 0AA7:1992
cs=0xaa7;eip=0x001995; 	T(MOVZX(eax, *(raddr(fs,bx+0x22))));	// 22644 movzx   eax, byte ptr fs:[bx+22h] ;~ 0AA7:1995
cs=0xaa7;eip=0x00199b; 	J(CALL(_my_u32toa_fill,0));	// 22645 call    _my_u32toa_fill ;~ 0AA7:199B
cs=0xaa7;eip=0x00199e; 	T(MOV(bp, 7));	// 22646 mov     bp, 7 ;~ 0AA7:199E
cs=0xaa7;eip=0x0019a1; 	T(MOVZX(eax, *(dw*)(raddr(fs,bx+0x1E))));	// 22647 movzx   eax, word ptr fs:[bx+1Eh] ;~ 0AA7:19A1
cs=0xaa7;eip=0x0019a7; 	J(CALL(_my_u32toa_fill,0));	// 22648 call    _my_u32toa_fill ;~ 0AA7:19A7
cs=0xaa7;eip=0x0019aa; 	T(MOV(ax, ds));	// 22649 mov     ax, ds ;~ 0AA7:19AA
cs=0xaa7;eip=0x0019ac; 	T(MOV(es, ax));	// 22650 mov     es, ax ;~ 0AA7:19AC
cs=0xaa7;eip=0x0019ae; 	T(MOV(eax, 0x20202020));	// 22651 mov     eax, '    ' ;~ 0AA7:19AE
cs=0xaa7;eip=0x0019b4; 	T(MOV(cx, 4));	// 22652 mov     cx, 4 ;~ 0AA7:19B4
	// 22653 rep stosd ;~ 0AA7:19B7
cs=0xaa7;eip=0x0019b7; 	X(	REP STOSD);	// 22653 rep stosd ;~ 0AA7:19B7
cs=0xaa7;eip=0x0019ba; 	X(MOV(*(raddr(ds,di)), 0));	// 22654 mov     byte ptr [di], 0 ;~ 0AA7:19BA
cs=0xaa7;eip=0x0019bd; 	X(POP(es));	// 22655 pop     es ;~ 0AA7:19BD
cs=0xaa7;eip=0x0019be; 	X(POP(di));	// 22657 pop     di ;~ 0AA7:19BE
cs=0xaa7;eip=0x0019bf; 	T(MOV(si, offset(dseg,_buffer_1)));	// 22658 mov     si, offset _buffer_1 ; 2800h ;~ 0AA7:19BF
cs=0xaa7;eip=0x0019c2; 	T(MOV(ah, 0x7E));	// 22659 mov     ah, 7Eh ; '~' ;~ 0AA7:19C2
cs=0xaa7;eip=0x0019c4; 	J(CALL(_put_message,0));	// 22660 call    _put_message ;~ 0AA7:19C4
cs=0xaa7;eip=0x0019c7; 	J(JMP(loc_1aacb));	// 22661 jmp     loc_1AACB ;~ 0AA7:19C7
loc_1aa1a:
	// 5771 
cs=0xaa7;eip=0x0019ca; 	T(CMP(_snd_card_type, 0x0A));	// 22665 cmp     _snd_card_type, 0Ah ;~ 0AA7:19CA
cs=0xaa7;eip=0x0019cf; 	J(JZ(loc_1aa62));	// 22666 jz      short loc_1AA62 ;~ 0AA7:19CF
cs=0xaa7;eip=0x0019d1; 	T(MOV(si, _buffer_2seg));	// 22667 mov     si, _buffer_2seg ;~ 0AA7:19D1
cs=0xaa7;eip=0x0019d5; 	T(MOV(cx, 0x50));	// 22668 mov     cx, 50h ; 'P' ;~ 0AA7:19D5
cs=0xaa7;eip=0x0019d8; 	T(XOR(eax, eax));	// 22669 xor     eax, eax ;~ 0AA7:19D8
cs=0xaa7;eip=0x0019db; 	T(XOR(edx, edx));	// 22670 xor     edx, edx ;~ 0AA7:19DB
loc_1aa2e:
	// 5772 
cs=0xaa7;eip=0x0019de; 	T(MOV(dl, *(raddr(ds,si))));	// 22673 mov     dl, [si] ;~ 0AA7:19DE
cs=0xaa7;eip=0x0019e0; 	T(OR(dl, dl));	// 22674 or      dl, dl ;~ 0AA7:19E0
cs=0xaa7;eip=0x0019e2; 	J(JNS(loc_1aa36));	// 22675 jns     short loc_1AA36 ;~ 0AA7:19E2
cs=0xaa7;eip=0x0019e4; 	T(NEG(dl));	// 22676 neg     dl ;~ 0AA7:19E4
loc_1aa36:
	// 5773 
cs=0xaa7;eip=0x0019e6; 	T(INC(si));	// 22679 inc     si ;~ 0AA7:19E6
cs=0xaa7;eip=0x0019e7; 	T(ADD(eax, edx));	// 22680 add     eax, edx ;~ 0AA7:19E7
cs=0xaa7;eip=0x0019ea; 	T(DEC(cx));	// 22681 dec     cx ;~ 0AA7:19EA
cs=0xaa7;eip=0x0019eb; 	J(JNZ(loc_1aa2e));	// 22682 jnz     short loc_1AA2E ;~ 0AA7:19EB
cs=0xaa7;eip=0x0019ed; 	X(MOV(_buffer_2seg, si));	// 22683 mov     _buffer_2seg, si ;~ 0AA7:19ED
cs=0xaa7;eip=0x0019f1; 	T(XOR(edx, edx));	// 22684 xor     edx, edx ;~ 0AA7:19F1
cs=0xaa7;eip=0x0019f4; 	X(DIV4(_volume_1de34));	// 22685 div     _volume_1DE34 ;~ 0AA7:19F4
cs=0xaa7;eip=0x0019f9; 	T(CMP(al, 60));	// 22686 cmp     al, 60 ;~ 0AA7:19F9
cs=0xaa7;eip=0x0019fb; 	J(JC(loc_1aa4f));	// 22687 jb      short loc_1AA4F ;~ 0AA7:19FB
cs=0xaa7;eip=0x0019fd; 	T(MOV(al, 60));	// 22688 mov     al, 60 ;~ 0AA7:19FD
loc_1aa4f:
	// 5774 
cs=0xaa7;eip=0x0019ff; 	T(CMP(byte_1de83, 0));	// 22691 cmp     byte_1DE83, 0 ;~ 0AA7:19FF
cs=0xaa7;eip=0x001a04; 	J(JZ(loc_1aa5c));	// 22692 jz      short loc_1AA5C ;~ 0AA7:1A04
cs=0xaa7;eip=0x001a06; 	T(CMP(al, *(raddr(fs,bx+0x1A))));	// 22693 cmp     al, fs:[bx+1Ah] ;~ 0AA7:1A06
cs=0xaa7;eip=0x001a0a; 	J(JC(loc_1aa73));	// 22694 jb      short loc_1AA73 ;~ 0AA7:1A0A
loc_1aa5c:
	// 5775 
cs=0xaa7;eip=0x001a0c; 	X(MOV(*(raddr(fs,bx+0x1A)), al));	// 22697 mov     fs:[bx+1Ah], al ;~ 0AA7:1A0C
cs=0xaa7;eip=0x001a10; 	J(JMP(loc_1aa88));	// 22698 jmp     short loc_1AA88 ;~ 0AA7:1A10
loc_1aa62:
	// 5776 
cs=0xaa7;eip=0x001a12; 	T(TEST(*(raddr(fs,bx+0x17)), 1));	// 22702 test    byte ptr fs:[bx+17h], 1 ;~ 0AA7:1A12
cs=0xaa7;eip=0x001a17; 	J(JZ(loc_1aa73));	// 22703 jz      short loc_1AA73 ;~ 0AA7:1A17
cs=0xaa7;eip=0x001a19; 	T(MOV(al, *(raddr(fs,bx+0x22))));	// 22704 mov     al, fs:[bx+22h] ;~ 0AA7:1A19
cs=0xaa7;eip=0x001a1d; 	X(MOV(*(raddr(fs,bx+0x1A)), al));	// 22705 mov     fs:[bx+1Ah], al ;~ 0AA7:1A1D
cs=0xaa7;eip=0x001a21; 	J(JMP(loc_1aa88));	// 22706 jmp     short loc_1AA88 ;~ 0AA7:1A21
loc_1aa73:
	// 5777 
cs=0xaa7;eip=0x001a23; 	X(AND(byte_1de71, 0x1F));	// 22712 and     byte_1DE71, 1Fh ;~ 0AA7:1A23
cs=0xaa7;eip=0x001a28; 	J(JNZ(loc_1aa88));	// 22713 jnz     short loc_1AA88 ;~ 0AA7:1A28
cs=0xaa7;eip=0x001a2a; 	T(MOV(al, byte_1de83));	// 22714 mov     al, byte_1DE83 ;~ 0AA7:1A2A
cs=0xaa7;eip=0x001a2d; 	X(SUB(*(raddr(fs,bx+0x1A)), al));	// 22715 sub     fs:[bx+1Ah], al ;~ 0AA7:1A2D
cs=0xaa7;eip=0x001a31; 	J(JNS(loc_1aa88));	// 22716 jns     short loc_1AA88 ;~ 0AA7:1A31
cs=0xaa7;eip=0x001a33; 	X(MOV(*(raddr(fs,bx+0x1A)), 0));	// 22717 mov     byte ptr fs:[bx+1Ah], 0 ;~ 0AA7:1A33
loc_1aa88:
	// 5778 
cs=0xaa7;eip=0x001a38; 	T(MOVZX(cx, *(raddr(fs,bx+0x1A))));	// 22721 movzx   cx, byte ptr fs:[bx+1Ah] ;~ 0AA7:1A38
cs=0xaa7;eip=0x001a3d; 	T(SHR(cx, 1));	// 22722 shr     cx, 1 ;~ 0AA7:1A3D
cs=0xaa7;eip=0x001a3f; 	T(MOV(dx, 30));	// 22723 mov     dx, 30 ;~ 0AA7:1A3F
cs=0xaa7;eip=0x001a42; 	T(SUB(dx, cx));	// 22724 sub     dx, cx ;~ 0AA7:1A42
cs=0xaa7;eip=0x001a44; 	J(JCXZ(_volume_endstr));	// 22725 jcxz    short _volume_endstr ;~ 0AA7:1A44
cs=0xaa7;eip=0x001a46; 	T(MOV(si, cx));	// 22726 mov     si, cx ;~ 0AA7:1A46
cs=0xaa7;eip=0x001a48; 	T(MOV(cx, 0x0D));	// 22727 mov     cx, 0Dh ;~ 0AA7:1A48
cs=0xaa7;eip=0x001a4b; 	T(CMP(si, cx));	// 22728 cmp     si, cx ;~ 0AA7:1A4B
cs=0xaa7;eip=0x001a4d; 	J(JA(_volume_medium));	// 22729 ja      short _volume_medium ;~ 0AA7:1A4D
cs=0xaa7;eip=0x001a4f; 	T(MOV(cx, si));	// 22730 mov     cx, si ;~ 0AA7:1A4F
_volume_medium:
	// 5779 
cs=0xaa7;eip=0x001a51; 	T(MOV(ax, 0x7A16));	// 22733 mov     ax, 7A16h ;~ 0AA7:1A51
cs=0xaa7;eip=0x001a54; 	T(CLD);	// 22734 cld ;~ 0AA7:1A54
	// 22735 rep stosw ;~ 0AA7:1A55
cs=0xaa7;eip=0x001a55; 	X(	REP STOSW);	// 22735 rep stosw ;~ 0AA7:1A55
cs=0xaa7;eip=0x001a57; 	T(SUB(si, 0x0D));	// 22736 sub     si, 0Dh ;~ 0AA7:1A57
cs=0xaa7;eip=0x001a5a; 	J(JBE(_volume_endstr));	// 22737 jbe     short _volume_endstr ;~ 0AA7:1A5A
cs=0xaa7;eip=0x001a5c; 	T(MOV(cx, 0x0C));	// 22738 mov     cx, 0Ch ;~ 0AA7:1A5C
cs=0xaa7;eip=0x001a5f; 	T(CMP(si, cx));	// 22739 cmp     si, cx ;~ 0AA7:1A5F
cs=0xaa7;eip=0x001a61; 	J(JA(_volume_higher));	// 22740 ja      short _volume_higher ;~ 0AA7:1A61
cs=0xaa7;eip=0x001a63; 	T(MOV(cx, si));	// 22741 mov     cx, si ;~ 0AA7:1A63
_volume_higher:
	// 5780 
cs=0xaa7;eip=0x001a65; 	T(MOV(ah, 0x7E));	// 22744 mov     ah, 7Eh ; '~' ;~ 0AA7:1A65
	// 22745 rep stosw ;~ 0AA7:1A67
cs=0xaa7;eip=0x001a67; 	X(	REP STOSW);	// 22745 rep stosw ;~ 0AA7:1A67
cs=0xaa7;eip=0x001a69; 	T(SUB(si, 0x0C));	// 22746 sub     si, 0Ch ;~ 0AA7:1A69
cs=0xaa7;eip=0x001a6c; 	J(JBE(_volume_endstr));	// 22747 jbe     short _volume_endstr ;~ 0AA7:1A6C
cs=0xaa7;eip=0x001a6e; 	T(MOV(cx, si));	// 22748 mov     cx, si ;~ 0AA7:1A6E
cs=0xaa7;eip=0x001a70; 	T(MOV(ah, 0x7C));	// 22749 mov     ah, 7Ch ; '|' ;~ 0AA7:1A70
	// 22750 rep stosw ;~ 0AA7:1A72
cs=0xaa7;eip=0x001a72; 	X(	REP STOSW);	// 22750 rep stosw ;~ 0AA7:1A72
_volume_endstr:
	// 5781 
cs=0xaa7;eip=0x001a74; 	T(MOV(cx, dx));	// 22754 mov     cx, dx ;~ 0AA7:1A74
cs=0xaa7;eip=0x001a76; 	T(MOV(ax, 0x7816));	// 22755 mov     ax, 7816h ;~ 0AA7:1A76
	// 22756 rep stosw ;~ 0AA7:1A79
cs=0xaa7;eip=0x001a79; 	X(	REP STOSW);	// 22756 rep stosw ;~ 0AA7:1A79
loc_1aacb:
	// 5782 
cs=0xaa7;eip=0x001a7b; 	X(POP(di));	// 22759 pop     di ;~ 0AA7:1A7B
cs=0xaa7;eip=0x001a7c; 	X(PUSH(di));	// 22760 push    di ;~ 0AA7:1A7C
cs=0xaa7;eip=0x001a7d; 	T(ADD(di, 0x7A));	// 22761 add     di, 7Ah ; 'z' ;~ 0AA7:1A7D
cs=0xaa7;eip=0x001a80; 	T(MOV(si, offset(dseg,asc_1d6e0)));	// 22762 mov     si, offset asc_1D6E0 ; "               " ;~ 0AA7:1A80
cs=0xaa7;eip=0x001a83; 	T(MOV(al, *(raddr(fs,bx+0x0A))));	// 22763 mov     al, fs:[bx+0Ah] ;~ 0AA7:1A83
cs=0xaa7;eip=0x001a87; 	T(CMP(al, 0x1D));	// 22764 cmp     al, 1Dh ;~ 0AA7:1A87
cs=0xaa7;eip=0x001a89; 	J(JZ(loc_1ab0d));	// 22765 jz      short loc_1AB0D ;~ 0AA7:1A89
cs=0xaa7;eip=0x001a8b; 	T(CMP(al, 0x0E));	// 22766 cmp     al, 0Eh ;~ 0AA7:1A8B
cs=0xaa7;eip=0x001a8d; 	J(JNZ(loc_1aaf0));	// 22767 jnz     short loc_1AAF0 ;~ 0AA7:1A8D
cs=0xaa7;eip=0x001a8f; 	T(MOV(si, offset(dseg,_asetlooppoint)));	// 22768 mov     si, offset _aSetLoopPoint ; "Set Loop Point " ;~ 0AA7:1A8F
cs=0xaa7;eip=0x001a92; 	T(MOV(al, *(raddr(fs,bx+0x0B))));	// 22769 mov     al, fs:[bx+0Bh] ;~ 0AA7:1A92
cs=0xaa7;eip=0x001a96; 	T(CMP(al, 0x60));	// 22770 cmp     al, 60h ; '`' ;~ 0AA7:1A96
cs=0xaa7;eip=0x001a98; 	J(JZ(loc_1aaf7));	// 22771 jz      short loc_1AAF7 ;~ 0AA7:1A98
cs=0xaa7;eip=0x001a9a; 	T(MOV(si, offset(dseg,_asetfilter)));	// 22772 mov     si, offset _aSetFilter ; "Set Filter     " ;~ 0AA7:1A9A
cs=0xaa7;eip=0x001a9d; 	T(SHR(al, 4));	// 22773 shr     al, 4 ;~ 0AA7:1A9D
loc_1aaf0:
	// 5783 
cs=0xaa7;eip=0x001aa0; 	T(XOR(ah, ah));	// 22776 xor     ah, ah ;~ 0AA7:1AA0
cs=0xaa7;eip=0x001aa2; 	T(SHL(ax, 4));	// 22777 shl     ax, 4 ;~ 0AA7:1AA2
cs=0xaa7;eip=0x001aa5; 	T(ADD(si, ax));	// 22778 add     si, ax ;~ 0AA7:1AA5
loc_1aaf7:
	// 5784 
cs=0xaa7;eip=0x001aa7; 	T(MOV(ah, 0x7E));	// 22782 mov     ah, 7Eh ; '~' ;~ 0AA7:1AA7
cs=0xaa7;eip=0x001aa9; 	J(CALL(_put_message,0));	// 22783 call    _put_message ;~ 0AA7:1AA9
cs=0xaa7;eip=0x001aac; 	X(POP(di));	// 22784 pop     di ;~ 0AA7:1AAC
cs=0xaa7;eip=0x001aad; 	X(POP(cx));	// 22785 pop     cx ;~ 0AA7:1AAD
cs=0xaa7;eip=0x001aae; 	X(POP(ax));	// 22786 pop     ax ;~ 0AA7:1AAE
cs=0xaa7;eip=0x001aaf; 	T(ADD(di, 0x0A0));	// 22787 add     di, 0A0h ; '
cs=0xaa7;eip=0x001ab3; 	T(ADD(bx, 0x50));	// 22788 add     bx, 50h ; 'P' ;~ 0AA7:1AB3
cs=0xaa7;eip=0x001ab6; 	T(INC(ax));	// 22789 inc     ax ;~ 0AA7:1AB6
cs=0xaa7;eip=0x001ab7; 	T(DEC(cx));	// 22790 dec     cx ;~ 0AA7:1AB7
cs=0xaa7;eip=0x001ab8; 	J(JNZ(loc_1a93a));	// 22791 jnz     loc_1A93A ;~ 0AA7:1AB8
cs=0xaa7;eip=0x001abc; 	J(RETN(0));	// 22792 retn ;~ 0AA7:1ABC
loc_1ab0d:
	// 5785 
cs=0xaa7;eip=0x001abd; 	T(MOV(si, offset(dseg,_aarpeggio)));	// 22796 mov     si, offset _aArpeggio ; "Arpeggio       " ;~ 0AA7:1ABD
cs=0xaa7;eip=0x001ac0; 	T(MOV(al, *(raddr(fs,bx+0x0B))));	// 22797 mov     al, fs:[bx+0Bh] ;~ 0AA7:1AC0
cs=0xaa7;eip=0x001ac4; 	T(CMP(al, 0x37));	// 22798 cmp     al, 37h ; '7' ;~ 0AA7:1AC4
cs=0xaa7;eip=0x001ac6; 	J(JZ(loc_1ab5d));	// 22799 jz      short loc_1AB5D ; min ;~ 0AA7:1AC6
cs=0xaa7;eip=0x001ac8; 	T(CMP(al, 0x47));	// 22800 cmp     al, 47h ; 'G' ;~ 0AA7:1AC8
cs=0xaa7;eip=0x001aca; 	J(JZ(loc_1ab67));	// 22801 jz      short loc_1AB67 ; maj ;~ 0AA7:1ACA
cs=0xaa7;eip=0x001acc; 	T(CMP(al, 0x48));	// 22802 cmp     al, 48h ; 'H' ;~ 0AA7:1ACC
cs=0xaa7;eip=0x001ace; 	J(JZ(loc_1ab53));	// 22803 jz      short loc_1AB53 ; puls ;~ 0AA7:1ACE
cs=0xaa7;eip=0x001ad0; 	T(XOR(cl, cl));	// 22804 xor     cl, cl ;~ 0AA7:1AD0
cs=0xaa7;eip=0x001ad2; 	J(CALL(sub_1ab8c,0));	// 22805 call    sub_1AB8C ;~ 0AA7:1AD2
cs=0xaa7;eip=0x001ad5; 	X(MOV(*(dw*)(raddr(ds,si+9)), ax));	// 22806 mov     [si+9], ax ;~ 0AA7:1AD5
cs=0xaa7;eip=0x001ad8; 	T(MOV(cl, *(raddr(fs,bx+0x0B))));	// 22807 mov     cl, fs:[bx+0Bh] ;~ 0AA7:1AD8
cs=0xaa7;eip=0x001adc; 	T(SHR(cl, 4));	// 22808 shr     cl, 4 ;~ 0AA7:1ADC
cs=0xaa7;eip=0x001adf; 	J(CALL(sub_1ab8c,0));	// 22809 call    sub_1AB8C ;~ 0AA7:1ADF
cs=0xaa7;eip=0x001ae2; 	X(MOV(*(dw*)(raddr(ds,si+0x0B)), ax));	// 22810 mov     [si+0Bh], ax ;~ 0AA7:1AE2
cs=0xaa7;eip=0x001ae5; 	T(MOV(cl, *(raddr(fs,bx+0x0B))));	// 22811 mov     cl, fs:[bx+0Bh] ;~ 0AA7:1AE5
cs=0xaa7;eip=0x001ae9; 	T(AND(cl, 0x0F));	// 22812 and     cl, 0Fh ;~ 0AA7:1AE9
cs=0xaa7;eip=0x001aec; 	J(CALL(sub_1ab8c,0));	// 22813 call    sub_1AB8C ;~ 0AA7:1AEC
cs=0xaa7;eip=0x001aef; 	X(MOV(*(dw*)(raddr(ds,si+0x0D)), ax));	// 22814 mov     [si+0Dh], ax ;~ 0AA7:1AEF
cs=0xaa7;eip=0x001af2; 	J(JMP(loc_1aaf7));	// 22815 jmp     short loc_1AAF7 ;~ 0AA7:1AF2
loc_1ab44:
	// 5786 
cs=0xaa7;eip=0x001af4; 	X(MOV(*(dd*)(raddr(ds,si+9)), 0x20202020));	// 22820 mov     dword ptr [si+9], '    ' ;~ 0AA7:1AF4
cs=0xaa7;eip=0x001afc; 	X(MOV(*(dw*)(raddr(ds,si+0x0D)), '  '));	// 22821 mov     word ptr [si+0Dh], '  ' ;~ 0AA7:1AFC
cs=0xaa7;eip=0x001b01; 	J(JMP(loc_1aaf7));	// 22822 jmp     short loc_1AAF7 ;~ 0AA7:1B01
loc_1ab53:
	// 5787 
cs=0xaa7;eip=0x001b03; 	X(MOV(*(dd*)(raddr(ds,si+0x0B)), 0x73756C70));	// 22826 mov     dword ptr [si+0Bh], 73756C70h ; puls ;~ 0AA7:1B03
cs=0xaa7;eip=0x001b0b; 	J(JMP(loc_1ab6f));	// 22827 jmp     short loc_1AB6F ;~ 0AA7:1B0B
loc_1ab5d:
	// 5788 
cs=0xaa7;eip=0x001b0d; 	X(MOV(*(dd*)(raddr(ds,si+0x0B)), 0x206E696D));	// 22831 mov     dword ptr [si+0Bh], 206E696Dh ; min ;~ 0AA7:1B0D
cs=0xaa7;eip=0x001b15; 	J(JMP(loc_1ab6f));	// 22832 jmp     short loc_1AB6F ;~ 0AA7:1B15
loc_1ab67:
	// 5789 
cs=0xaa7;eip=0x001b17; 	X(MOV(*(dd*)(raddr(ds,si+0x0B)), 0x206A616D));	// 22836 mov     dword ptr [si+0Bh], 206A616Dh ; maj ;~ 0AA7:1B17
loc_1ab6f:
	// 5790 
cs=0xaa7;eip=0x001b1f; 	T(MOV(al, *(raddr(fs,bx+0x35))));	// 22840 mov     al, fs:[bx+35h] ;~ 0AA7:1B1F
cs=0xaa7;eip=0x001b23; 	T(AND(ax, 0x0F));	// 22841 and     ax, 0Fh ;~ 0AA7:1B23
cs=0xaa7;eip=0x001b26; 	J(JZ(loc_1ab44));	// 22842 jz      short loc_1AB44 ;~ 0AA7:1B26
cs=0xaa7;eip=0x001b28; 	T(CMP(al, 0x0C));	// 22843 cmp     al, 0Ch ;~ 0AA7:1B28
cs=0xaa7;eip=0x001b2a; 	J(JA(loc_1ab44));	// 22844 ja      short loc_1AB44 ;~ 0AA7:1B2A
cs=0xaa7;eip=0x001b2c; 	T(SHL(ax, 1));	// 22845 shl     ax, 1 ;~ 0AA7:1B2C
cs=0xaa7;eip=0x001b2e; 	X(PUSH(si));	// 22846 push    si ;~ 0AA7:1B2E
cs=0xaa7;eip=0x001b2f; 	T(MOV(si, ax));	// 22847 mov     si, ax ;~ 0AA7:1B2F
cs=0xaa7;eip=0x001b31; 	T(MOV(ax, *(dw*)((_notes)+si)));	// 22848 mov     ax, word ptr _notes[si] ; "  C-C#D-D#E-F-F#G-G#A-A#B-" ;~ 0AA7:1B31
cs=0xaa7;eip=0x001b35; 	X(POP(si));	// 22849 pop     si ;~ 0AA7:1B35
cs=0xaa7;eip=0x001b36; 	X(MOV(*(dw*)(raddr(ds,si+9)), ax));	// 22850 mov     [si+9], ax ;~ 0AA7:1B36
cs=0xaa7;eip=0x001b39; 	J(JMP(loc_1aaf7));	// 22851 jmp     loc_1AAF7 ;~ 0AA7:1B39
seg001_1b71_proc:
	// 22901 
_f4_draw:
	// 5794 
cs=0xaa7;eip=0x001b71; 	J(CALL(_txt_draw_bottom,0));	// 22903 call    _txt_draw_bottom ;~ 0AA7:1B71
cs=0xaa7;eip=0x001b74; 	T(LES(di, _videomempointer));	// 22904 les     di, _videomempointer ;~ 0AA7:1B74
cs=0xaa7;eip=0x001b78; 	T(ADD(di, 0x3C6));	// 22905 add     di, 3C6h ;~ 0AA7:1B78
cs=0xaa7;eip=0x001b7c; 	T(MOV(si, offset(dseg,_asamplename)));	// 22906 mov     si, offset _aSamplename ; "# SampleName   " ;~ 0AA7:1B7C
cs=0xaa7;eip=0x001b7f; 	T(MOV(ah, 0x7E));	// 22907 mov     ah, 7Eh ; '~' ;~ 0AA7:1B7F
cs=0xaa7;eip=0x001b81; 	J(CALL(_text_1bf69,0));	// 22908 call    _text_1BF69 ;~ 0AA7:1B81
cs=0xaa7;eip=0x001b84; 	T(MOV(di, *(dw*)(((db*)&_videomempointer))));	// 22909 mov     di, word ptr _videomempointer ;~ 0AA7:1B84
cs=0xaa7;eip=0x001b88; 	T(ADD(di, 0x464));	// 22910 add     di, 464h ;~ 0AA7:1B88
cs=0xaa7;eip=0x001b8c; 	T(LFS(bx, dword_1de2c));	// 22911 lfs     bx, dword_1DE2C ;~ 0AA7:1B8C
cs=0xaa7;eip=0x001b91; 	T(MOV(bp, _current_patterns));	// 22912 mov     bp, _current_patterns ;~ 0AA7:1B91
cs=0xaa7;eip=0x001b95; 	T(IMUL3_2(ax,bp,0x40));	// 22913 imul    ax, bp, 40h ; '@' ;~ 0AA7:1B95
cs=0xaa7;eip=0x001b98; 	T(ADD(bx, ax));	// 22914 add     bx, ax ;~ 0AA7:1B98
cs=0xaa7;eip=0x001b9a; 	T(MOV(dl, *(db*)(((db*)&word_1de6e))));	// 22915 mov     dl, byte ptr word_1DE6E ;~ 0AA7:1B9A
cs=0xaa7;eip=0x001b9e; 	T(DEC(dl));	// 22916 dec     dl ;~ 0AA7:1B9E
loc_1abf0:
	// 5795 
cs=0xaa7;eip=0x001ba0; 	T(CMP(bp, word_1de46));	// 22919 cmp     bp, word_1DE46 ;~ 0AA7:1BA0
cs=0xaa7;eip=0x001ba4; 	J(JNC(locret_1acf5));	// 22920 jnb     locret_1ACF5 ;~ 0AA7:1BA4
cs=0xaa7;eip=0x001ba8; 	X(PUSH(bx));	// 22921 push    bx ;~ 0AA7:1BA8
cs=0xaa7;eip=0x001ba9; 	X(PUSH(dx));	// 22922 push    dx ;~ 0AA7:1BA9
cs=0xaa7;eip=0x001baa; 	X(PUSH(bp));	// 22923 push    bp ;~ 0AA7:1BAA
cs=0xaa7;eip=0x001bab; 	X(PUSH(di));	// 22924 push    di ;~ 0AA7:1BAB
cs=0xaa7;eip=0x001bac; 	T(MOV(ax, ds));	// 22925 mov     ax, ds ;~ 0AA7:1BAC
cs=0xaa7;eip=0x001bae; 	T(MOV(es, ax));	// 22926 mov     es, ax ;~ 0AA7:1BAE
cs=0xaa7;eip=0x001bb0; 	T(MOV(di, offset(dseg,_buffer_1)));	// 22928 mov     di, offset _buffer_1 ; 2800h ;~ 0AA7:1BB0
cs=0xaa7;eip=0x001bb3; 	T(CLD);	// 22929 cld ;~ 0AA7:1BB3
cs=0xaa7;eip=0x001bb4; 	T(MOVZX(eax, bp));	// 22930 movzx   eax, bp ;~ 0AA7:1BB4
cs=0xaa7;eip=0x001bb8; 	T(INC(ax));	// 22931 inc     ax ;~ 0AA7:1BB8
cs=0xaa7;eip=0x001bb9; 	T(MOV(bp, 2));	// 22932 mov     bp, 2 ;~ 0AA7:1BB9
cs=0xaa7;eip=0x001bbc; 	J(CALL(_my_pnt_u32toa_fill,0));	// 22933 call    _my_pnt_u32toa_fill ;~ 0AA7:1BBC
cs=0xaa7;eip=0x001bbf; 	X(MOV(*(dd*)(raddr(ds,di)), 0x7B0220));	// 22934 mov     dword ptr [di], 7B0220h ;  { ;~ 0AA7:1BBF
cs=0xaa7;eip=0x001bc6; 	T(ADD(di, 3));	// 22935 add     di, 3 ;~ 0AA7:1BC6
cs=0xaa7;eip=0x001bc9; 	T(MOV(si, bx));	// 22936 mov     si, bx ;~ 0AA7:1BC9
cs=0xaa7;eip=0x001bcb; 	T(MOV(cx, 8));	// 22937 mov     cx, 8 ;~ 0AA7:1BCB
cs=0xaa7;eip=0x001bce; 	T(CLD);	// 22938 cld ;~ 0AA7:1BCE
	// 22939 rep movs dword ptr es:[di], dword ptr fs:[si] ;~ 0AA7:1BCF
cs=0xaa7;eip=0x001bcf; 	X(	REP MOVS(*(dd*)(raddr(es,di)), *(dd*)(raddr(fs,si)), di, si, 4));	// 22939 rep movs dword ptr es:[di], dword ptr fs:[si] ;~ 0AA7:1BCF
cs=0xaa7;eip=0x001bd3; 	T(TEST(*(raddr(fs,bx+0x3C)), 1));	// 22940 test    byte ptr fs:[bx+3Ch], 1 ;~ 0AA7:1BD3
cs=0xaa7;eip=0x001bd8; 	J(JNZ(loc_1ac35));	// 22941 jnz     short loc_1AC35 ;~ 0AA7:1BD8
cs=0xaa7;eip=0x001bda; 	T(MOV(si, offset(dseg,unk_1d6c3)));	// 22942 mov     si, offset unk_1D6C3 ;~ 0AA7:1BDA
cs=0xaa7;eip=0x001bdd; 	T(MOV(cx, 9));	// 22943 mov     cx, 9 ;~ 0AA7:1BDD
	// 22944 rep movsb ;~ 0AA7:1BE0
cs=0xaa7;eip=0x001be0; 	X(	REP MOVSB);	// 22944 rep movsb ;~ 0AA7:1BE0
cs=0xaa7;eip=0x001be2; 	J(JMP(loc_1acd2));	// 22945 jmp     loc_1ACD2 ;~ 0AA7:1BE2
loc_1ac35:
	// 5796 
cs=0xaa7;eip=0x001be5; 	T(MOV(eax, *(dd*)(raddr(fs,bx+0x20))));	// 22949 mov     eax, fs:[bx+20h] ;~ 0AA7:1BE5
cs=0xaa7;eip=0x001bea; 	T(MOV(bp, 7));	// 22950 mov     bp, 7 ;~ 0AA7:1BEA
cs=0xaa7;eip=0x001bed; 	J(CALL(_my_pnt_u32toa_fill,0));	// 22951 call    _my_pnt_u32toa_fill ;~ 0AA7:1BED
cs=0xaa7;eip=0x001bf0; 	T(MOVZX(eax, *(raddr(fs,bx+0x3D))));	// 22952 movzx   eax, byte ptr fs:[bx+3Dh] ;~ 0AA7:1BF0
cs=0xaa7;eip=0x001bf6; 	T(MOV(bp, 3));	// 22953 mov     bp, 3 ;~ 0AA7:1BF6
cs=0xaa7;eip=0x001bf9; 	J(CALL(_my_pnt_u32toa_fill,0));	// 22954 call    _my_pnt_u32toa_fill ;~ 0AA7:1BF9
cs=0xaa7;eip=0x001bfc; 	T(MOV(eax, 0x363120));	// 22955 mov     eax, 363120h    ; ' 16' ;~ 0AA7:1BFC
cs=0xaa7;eip=0x001c02; 	T(TEST(*(raddr(fs,bx+0x3C)), 4));	// 22956 test    byte ptr fs:[bx+3Ch], 4 ;~ 0AA7:1C02
cs=0xaa7;eip=0x001c07; 	J(JNZ(loc_1ac5f));	// 22957 jnz     short loc_1AC5F ;~ 0AA7:1C07
cs=0xaa7;eip=0x001c09; 	T(MOV(eax, 0x382020));	// 22958 mov     eax, 382020h    ; '  8' ;~ 0AA7:1C09
loc_1ac5f:
	// 5797 
cs=0xaa7;eip=0x001c0f; 	X(MOV(*(dd*)(raddr(ds,di)), eax));	// 22961 mov     [di], eax ;~ 0AA7:1C0F
cs=0xaa7;eip=0x001c12; 	T(MOV(al, 0x1D));	// 22962 mov     al, 1Dh ;~ 0AA7:1C12
cs=0xaa7;eip=0x001c14; 	T(TEST(*(raddr(fs,bx+0x3C)), 0x10));	// 22963 test    byte ptr fs:[bx+3Ch], 10h ;~ 0AA7:1C14
cs=0xaa7;eip=0x001c19; 	J(JNZ(loc_1ac6d));	// 22964 jnz     short loc_1AC6D ;~ 0AA7:1C19
cs=0xaa7;eip=0x001c1b; 	T(MOV(al, ' '));	// 22965 mov     al, ' ' ;~ 0AA7:1C1B
loc_1ac6d:
	// 5798 
cs=0xaa7;eip=0x001c1d; 	X(MOV(*(raddr(ds,di+3)), al));	// 22968 mov     [di+3], al ;~ 0AA7:1C1D
cs=0xaa7;eip=0x001c20; 	T(ADD(di, 4));	// 22969 add     di, 4 ;~ 0AA7:1C20
cs=0xaa7;eip=0x001c23; 	T(MOVZX(eax, *(dw*)(raddr(fs,bx+0x36))));	// 22970 movzx   eax, word ptr fs:[bx+36h] ;~ 0AA7:1C23
cs=0xaa7;eip=0x001c29; 	T(MOV(bp, 6));	// 22971 mov     bp, 6 ;~ 0AA7:1C29
cs=0xaa7;eip=0x001c2c; 	J(CALL(_my_pnt_u32toa_fill,0));	// 22972 call    _my_pnt_u32toa_fill ;~ 0AA7:1C2C
cs=0xaa7;eip=0x001c2f; 	X(MOV(*(dd*)(raddr(ds,di)), 0x7A487E02));	// 22973 mov     dword ptr [di], 7A487E02h ;  H ;~ 0AA7:1C2F
cs=0xaa7;eip=0x001c36; 	T(ADD(di, 4));	// 22974 add     di, 4 ;~ 0AA7:1C36
cs=0xaa7;eip=0x001c39; 	X(MOV(*(dd*)(raddr(ds,di)), 0x7F0220));	// 22975 mov     dword ptr [di], 7F0220h ;  square ;~ 0AA7:1C39
cs=0xaa7;eip=0x001c40; 	T(ADD(di, 3));	// 22976 add     di, 3 ;~ 0AA7:1C40
cs=0xaa7;eip=0x001c43; 	T(MOV(eax, 0x20202020));	// 22977 mov     eax, '    ' ;~ 0AA7:1C43
cs=0xaa7;eip=0x001c49; 	T(MOV(ah, *(raddr(fs,bx+0x3E))));	// 22978 mov     ah, fs:[bx+3Eh] ;~ 0AA7:1C49
cs=0xaa7;eip=0x001c4d; 	T(AND(ah, 0x0F));	// 22979 and     ah, 0Fh ;~ 0AA7:1C4D
cs=0xaa7;eip=0x001c50; 	T(TEST(ah, 8));	// 22980 test    ah, 8 ;~ 0AA7:1C50
cs=0xaa7;eip=0x001c53; 	J(JZ(loc_1acac));	// 22981 jz      short loc_1ACAC ;~ 0AA7:1C53
cs=0xaa7;eip=0x001c55; 	T(MOV(al, '-'));	// 22982 mov     al, '-' ;~ 0AA7:1C55
cs=0xaa7;eip=0x001c57; 	T(NEG(ah));	// 22983 neg     ah ;~ 0AA7:1C57
cs=0xaa7;eip=0x001c59; 	T(ADD(ah, 0x10));	// 22984 add     ah, 10h ;~ 0AA7:1C59
loc_1acac:
	// 5799 
cs=0xaa7;eip=0x001c5c; 	T(OR(ah, '0'));	// 22987 or      ah, '0' ;~ 0AA7:1C5C
cs=0xaa7;eip=0x001c5f; 	X(MOV(*(dd*)(raddr(ds,di)), eax));	// 22988 mov     [di], eax ;~ 0AA7:1C5F
cs=0xaa7;eip=0x001c62; 	T(ADD(di, 4));	// 22989 add     di, 4 ;~ 0AA7:1C62
cs=0xaa7;eip=0x001c65; 	T(TEST(*(raddr(fs,bx+0x3C)), 8));	// 22990 test    byte ptr fs:[bx+3Ch], 8 ;~ 0AA7:1C65
cs=0xaa7;eip=0x001c6a; 	J(JZ(loc_1acd2));	// 22991 jz      short loc_1ACD2 ;~ 0AA7:1C6A
cs=0xaa7;eip=0x001c6c; 	T(MOV(eax, *(dd*)(raddr(fs,bx+0x24))));	// 22992 mov     eax, fs:[bx+24h] ;~ 0AA7:1C6C
cs=0xaa7;eip=0x001c71; 	T(MOV(bp, 7));	// 22993 mov     bp, 7 ;~ 0AA7:1C71
cs=0xaa7;eip=0x001c74; 	J(CALL(_my_pnt_u32toa_fill,0));	// 22994 call    _my_pnt_u32toa_fill ;~ 0AA7:1C74
cs=0xaa7;eip=0x001c77; 	T(MOV(eax, *(dd*)(raddr(fs,bx+0x2C))));	// 22995 mov     eax, fs:[bx+2Ch] ;~ 0AA7:1C77
cs=0xaa7;eip=0x001c7c; 	T(MOV(bp, 7));	// 22996 mov     bp, 7 ;~ 0AA7:1C7C
cs=0xaa7;eip=0x001c7f; 	J(CALL(_my_pnt_u32toa_fill,0));	// 22997 call    _my_pnt_u32toa_fill ;~ 0AA7:1C7F
loc_1acd2:
	// 5800 
cs=0xaa7;eip=0x001c82; 	X(MOV(*(raddr(ds,di)), 0));	// 23001 mov     byte ptr [di], 0 ;~ 0AA7:1C82
cs=0xaa7;eip=0x001c85; 	X(POP(di));	// 23002 pop     di ;~ 0AA7:1C85
cs=0xaa7;eip=0x001c86; 	X(PUSH(di));	// 23003 push    di ;~ 0AA7:1C86
cs=0xaa7;eip=0x001c87; 	T(MOV(es, *(dw*)(((db*)&_videomempointer)+2)));	// 23004 mov     es, word ptr _videomempointer+2 ;~ 0AA7:1C87
cs=0xaa7;eip=0x001c8b; 	T(MOV(si, offset(dseg,_buffer_1)));	// 23006 mov     si, offset _buffer_1 ; 2800h ;~ 0AA7:1C8B
cs=0xaa7;eip=0x001c8e; 	T(MOV(ah, 0x7F));	// 23007 mov     ah, 7Fh ;~ 0AA7:1C8E
cs=0xaa7;eip=0x001c90; 	J(CALL(_text_1bf69,0));	// 23008 call    _text_1BF69 ;~ 0AA7:1C90
cs=0xaa7;eip=0x001c93; 	X(POP(di));	// 23009 pop     di ;~ 0AA7:1C93
cs=0xaa7;eip=0x001c94; 	X(POP(bp));	// 23010 pop     bp ;~ 0AA7:1C94
cs=0xaa7;eip=0x001c95; 	X(POP(dx));	// 23011 pop     dx ;~ 0AA7:1C95
cs=0xaa7;eip=0x001c96; 	X(POP(bx));	// 23012 pop     bx ;~ 0AA7:1C96
cs=0xaa7;eip=0x001c97; 	T(ADD(bx, 0x40));	// 23013 add     bx, 40h ; '@' ;~ 0AA7:1C97
cs=0xaa7;eip=0x001c9a; 	T(INC(bp));	// 23014 inc     bp ;~ 0AA7:1C9A
cs=0xaa7;eip=0x001c9b; 	T(ADD(di, 0x0A0));	// 23015 add     di, 0A0h ; '
cs=0xaa7;eip=0x001c9f; 	T(DEC(dl));	// 23016 dec     dl ;~ 0AA7:1C9F
cs=0xaa7;eip=0x001ca1; 	J(JNZ(loc_1abf0));	// 23017 jnz     loc_1ABF0 ;~ 0AA7:1CA1
locret_1acf5:
	// 5801 
cs=0xaa7;eip=0x001ca5; 	J(RETN(0));	// 23020 retn ;~ 0AA7:1CA5
seg001_1cd1_proc:
	// 23066 
_f1_draw:
	// 5803 
cs=0xaa7;eip=0x001cd1; 	J(CALL(_txt_draw_bottom,0));	// 23067 call    _txt_draw_bottom ;~ 0AA7:1CD1
cs=0xaa7;eip=0x001cd4; 	T(LES(di, _videomempointer));	// 23068 les     di, _videomempointer ;~ 0AA7:1CD4
cs=0xaa7;eip=0x001cd8; 	T(MOV(si, offset(dseg,_f1_help_text)));	// 23070 mov     si, offset _f1_help_text ;~ 0AA7:1CD8
cs=0xaa7;eip=0x001cdb; 	J(CALL(_write_scr,0));	// 23071 call    _write_scr ;~ 0AA7:1CDB
cs=0xaa7;eip=0x001cde; 	J(RETN(0));	// 23072 retn ;~ 0AA7:1CDE
seg001_2d18_proc:
	// 25029 
_f6_draw:
	// 5962 
cs=0xaa7;eip=0x002d18; 	J(CALL(_txt_draw_bottom,0));	// 25030 call    _txt_draw_bottom ;~ 0AA7:2D18
cs=0xaa7;eip=0x002d1b; 	T(LFS(bx, _segfsbx_1de28));	// 25031 lfs     bx, _segfsbx_1DE28 ;~ 0AA7:2D1B
cs=0xaa7;eip=0x002d20; 	T(LES(di, _videomempointer));	// 25032 les     di, _videomempointer ;~ 0AA7:2D20
cs=0xaa7;eip=0x002d24; 	T(ADD(di, 0x3C4));	// 25034 add     di, 3C4h ;~ 0AA7:2D24
cs=0xaa7;eip=0x002d28; 	T(MOV(cx, _amount_of_x));	// 25035 mov     cx, _amount_of_x ;~ 0AA7:2D28
cs=0xaa7;eip=0x002d2c; 	T(CMP(cx, word_1de6e));	// 25036 cmp     cx, word_1DE6E ;~ 0AA7:2D2C
cs=0xaa7;eip=0x002d30; 	J(JBE(loc_1bd86));	// 25037 jbe     short loc_1BD86 ;~ 0AA7:2D30
cs=0xaa7;eip=0x002d32; 	T(MOV(cx, word_1de6e));	// 25038 mov     cx, word_1DE6E ;~ 0AA7:2D32
loc_1bd86:
	// 5963 
cs=0xaa7;eip=0x002d36; 	T(XOR(ax, ax));	// 25041 xor     ax, ax ;~ 0AA7:2D36
loc_1bd88:
	// 5964 
cs=0xaa7;eip=0x002d38; 	X(PUSH(ax));	// 25044 push    ax ;~ 0AA7:2D38
cs=0xaa7;eip=0x002d39; 	X(PUSH(cx));	// 25045 push    cx ;~ 0AA7:2D39
cs=0xaa7;eip=0x002d3a; 	X(PUSH(di));	// 25046 push    di ;~ 0AA7:2D3A
cs=0xaa7;eip=0x002d3b; 	T(MOV(dl, al));	// 25047 mov     dl, al ;~ 0AA7:2D3B
cs=0xaa7;eip=0x002d3d; 	T(ADD(al, 0x31));	// 25048 add     al, 31h ; '1' ;~ 0AA7:2D3D
cs=0xaa7;eip=0x002d3f; 	T(CMP(al, 0x39));	// 25049 cmp     al, 39h ; '9' ;~ 0AA7:2D3F
cs=0xaa7;eip=0x002d41; 	J(JBE(loc_1bd95));	// 25050 jbe     short loc_1BD95 ;~ 0AA7:2D41
cs=0xaa7;eip=0x002d43; 	T(ADD(al, 7));	// 25051 add     al, 7 ;~ 0AA7:2D43
loc_1bd95:
	// 5965 
cs=0xaa7;eip=0x002d45; 	T(MOV(ah, 0x1E));	// 25054 mov     ah, 1Eh ;~ 0AA7:2D45
cs=0xaa7;eip=0x002d47; 	T(CMP(dl, byte_1de84));	// 25055 cmp     dl, byte_1DE84 ;~ 0AA7:2D47
cs=0xaa7;eip=0x002d4b; 	J(JZ(loc_1bd9f));	// 25056 jz      short loc_1BD9F ;~ 0AA7:2D4B
cs=0xaa7;eip=0x002d4d; 	T(MOV(ah, 0x7E));	// 25057 mov     ah, 7Eh ; '~' ;~ 0AA7:2D4D
loc_1bd9f:
	// 5966 
cs=0xaa7;eip=0x002d4f; 	X(MOV(*(dw*)(raddr(es,di+2)), ax));	// 25060 mov     es:[di+2], ax ;~ 0AA7:2D4F
cs=0xaa7;eip=0x002d53; 	T(MOV(al, 0x20));	// 25061 mov     al, 20h ; ' ' ;~ 0AA7:2D53
cs=0xaa7;eip=0x002d55; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 25062 mov     es:[di], ax ;~ 0AA7:2D55
cs=0xaa7;eip=0x002d58; 	X(MOV(*(dw*)(raddr(es,di+4)), ax));	// 25063 mov     es:[di+4], ax ;~ 0AA7:2D58
cs=0xaa7;eip=0x002d5c; 	T(ADD(di, 6));	// 25064 add     di, 6 ;~ 0AA7:2D5C
cs=0xaa7;eip=0x002d5f; 	T(MOV(si, offset(dseg,_buffer_1)));	// 25065 mov     si, offset _buffer_1 ; 2800h ;~ 0AA7:2D5F
cs=0xaa7;eip=0x002d62; 	T(MOV(eax, 0x0C4C4C4C4));	// 25066 mov     eax, 0C4C4C4C4h ;~ 0AA7:2D62
cs=0xaa7;eip=0x002d68; 	X(MOV(*(dw*)(raddr(ds,si)), 0x2020));	// 25067 mov     word ptr [si], 2020h ;~ 0AA7:2D68
cs=0xaa7;eip=0x002d6c; 	X(MOV(*(dd*)(raddr(ds,si+2)), eax));	// 25068 mov     [si+2], eax ;~ 0AA7:2D6C
cs=0xaa7;eip=0x002d70; 	X(MOV(*(dd*)(raddr(ds,si+6)), eax));	// 25069 mov     [si+6], eax ;~ 0AA7:2D70
cs=0xaa7;eip=0x002d74; 	X(MOV(*(dd*)(raddr(ds,si+0x0A)), eax));	// 25070 mov     [si+0Ah], eax ;~ 0AA7:2D74
cs=0xaa7;eip=0x002d78; 	X(MOV(*(dd*)(raddr(ds,si+0x0E)), eax));	// 25071 mov     [si+0Eh], eax ;~ 0AA7:2D78
cs=0xaa7;eip=0x002d7c; 	X(MOV(*(dw*)(raddr(ds,si+0x12)), 0x20C4));	// 25072 mov     word ptr [si+12h], 20C4h ;~ 0AA7:2D7C
cs=0xaa7;eip=0x002d81; 	T(bp = si+0x14);	// 25073 lea     bp, [si+14h] ;~ 0AA7:2D81
cs=0xaa7;eip=0x002d84; 	T(MOV(al, *(raddr(fs,bx+0x3A))));	// 25074 mov     al, fs:[bx+3Ah] ;~ 0AA7:2D84
cs=0xaa7;eip=0x002d88; 	T(MOV(dl, al));	// 25075 mov     dl, al ;~ 0AA7:2D88
cs=0xaa7;eip=0x002d8a; 	T(SHR(al, 3));	// 25076 shr     al, 3 ;~ 0AA7:2D8A
cs=0xaa7;eip=0x002d8d; 	T(AND(ax, 0x1F));	// 25077 and     ax, 1Fh ;~ 0AA7:2D8D
cs=0xaa7;eip=0x002d90; 	T(ADD(si, 2));	// 25078 add     si, 2 ;~ 0AA7:2D90
cs=0xaa7;eip=0x002d93; 	T(ADD(si, ax));	// 25079 add     si, ax ;~ 0AA7:2D93
cs=0xaa7;eip=0x002d95; 	T(MOV(al, 0x4D));	// 25080 mov     al, 4Dh ; 'M' ;~ 0AA7:2D95
cs=0xaa7;eip=0x002d97; 	T(CMP(dl, 0x40));	// 25081 cmp     dl, 40h ; '@' ;~ 0AA7:2D97
cs=0xaa7;eip=0x002d9a; 	J(JZ(loc_1bdf2));	// 25082 jz      short loc_1BDF2 ;~ 0AA7:2D9A
cs=0xaa7;eip=0x002d9c; 	T(MOV(al, 0x4C));	// 25083 mov     al, 4Ch ; 'L' ;~ 0AA7:2D9C
cs=0xaa7;eip=0x002d9e; 	J(JC(loc_1bdf2));	// 25084 jb      short loc_1BDF2 ;~ 0AA7:2D9E
cs=0xaa7;eip=0x002da0; 	T(MOV(al, 0x52));	// 25085 mov     al, 52h ; 'R' ;~ 0AA7:2DA0
loc_1bdf2:
	// 5967 
cs=0xaa7;eip=0x002da2; 	X(MOV(*(raddr(ds,si)), al));	// 25089 mov     [si], al ;~ 0AA7:2DA2
cs=0xaa7;eip=0x002da4; 	T(MOV(si, bp));	// 25090 mov     si, bp ;~ 0AA7:2DA4
cs=0xaa7;eip=0x002da6; 	X(MOV(*(dd*)(raddr(ds,si)), 0x20202020));	// 25091 mov     dword ptr [si], 20202020h ;~ 0AA7:2DA6
cs=0xaa7;eip=0x002dad; 	T(CLD);	// 25092 cld ;~ 0AA7:2DAD
cs=0xaa7;eip=0x002dae; 	T(MOV(al, *(raddr(fs,bx+0x3A))));	// 25093 mov     al, fs:[bx+3Ah] ;~ 0AA7:2DAE
cs=0xaa7;eip=0x002db2; 	T(SUB(al, 0x40));	// 25094 sub     al, 40h ; '@' ;~ 0AA7:2DB2
cs=0xaa7;eip=0x002db4; 	J(JS(loc_1be07));	// 25095 js      short loc_1BE07 ;~ 0AA7:2DB4
cs=0xaa7;eip=0x002db6; 	T(INC(si));	// 25096 inc     si ;~ 0AA7:2DB6
loc_1be07:
	// 5968 
cs=0xaa7;eip=0x002db7; 	T(CMP(al, 0x0F7));	// 25099 cmp     al, 0F7h ; '
cs=0xaa7;eip=0x002db9; 	J(JL(loc_1be10));	// 25100 jl      short loc_1BE10 ;~ 0AA7:2DB9
cs=0xaa7;eip=0x002dbb; 	T(CMP(al, 9));	// 25101 cmp     al, 9 ;~ 0AA7:2DBB
cs=0xaa7;eip=0x002dbd; 	J(JG(loc_1be10));	// 25102 jg      short loc_1BE10 ;~ 0AA7:2DBD
cs=0xaa7;eip=0x002dbf; 	T(INC(si));	// 25103 inc     si ;~ 0AA7:2DBF
loc_1be10:
	// 5969 
cs=0xaa7;eip=0x002dc0; 	X(PUSH(bx));	// 25107 push    bx ;~ 0AA7:2DC0
cs=0xaa7;eip=0x002dc1; 	J(CALL(_my_i8toa10,0));	// 25108 call    _my_i8toa10 ;~ 0AA7:2DC1
cs=0xaa7;eip=0x002dc4; 	X(POP(bx));	// 25109 pop     bx ;~ 0AA7:2DC4
cs=0xaa7;eip=0x002dc5; 	X(MOV(*(raddr(ds,si)), 0));	// 25110 mov     byte ptr [si], 0 ;~ 0AA7:2DC5
cs=0xaa7;eip=0x002dc8; 	T(MOV(si, offset(dseg,_buffer_1)));	// 25111 mov     si, offset _buffer_1 ; 2800h ;~ 0AA7:2DC8
cs=0xaa7;eip=0x002dcb; 	T(MOV(ah, 0x7E));	// 25112 mov     ah, 7Eh ; '~' ;~ 0AA7:2DCB
cs=0xaa7;eip=0x002dcd; 	J(CALL(_put_message,0));	// 25113 call    _put_message ;~ 0AA7:2DCD
cs=0xaa7;eip=0x002dd0; 	X(POP(di));	// 25114 pop     di ;~ 0AA7:2DD0
cs=0xaa7;eip=0x002dd1; 	X(POP(cx));	// 25115 pop     cx ;~ 0AA7:2DD1
cs=0xaa7;eip=0x002dd2; 	X(POP(ax));	// 25116 pop     ax ;~ 0AA7:2DD2
cs=0xaa7;eip=0x002dd3; 	T(ADD(di, 0x0A0));	// 25117 add     di, 0A0h ; '
cs=0xaa7;eip=0x002dd7; 	T(ADD(bx, 0x50));	// 25118 add     bx, 50h ; 'P' ;~ 0AA7:2DD7
cs=0xaa7;eip=0x002dda; 	T(INC(ax));	// 25119 inc     ax ;~ 0AA7:2DDA
cs=0xaa7;eip=0x002ddb; 	T(DEC(cx));	// 25120 dec     cx ;~ 0AA7:2DDB
cs=0xaa7;eip=0x002ddc; 	J(JNZ(loc_1bd88));	// 25121 jnz     loc_1BD88 ;~ 0AA7:2DDC
cs=0xaa7;eip=0x002de0; 	J(RETN(0));	// 25122 retn ;~ 0AA7:2DE0
ret_aa7_2de1:
	// 5970 
cs=0xaa7;eip=0x002de1; 	X(PUSH(ax));	// 25124 push    ax ;~ 0AA7:2DE1
cs=0xaa7;eip=0x002de2; 	T(SHR(al, 4));	// 25125 shr     al, 4 ;~ 0AA7:2DE2
cs=0xaa7;eip=0x002de5; 	J(CALL(_hex_1be39,0));	// 25126 call    _hex_1BE39 ;~ 0AA7:2DE5
cs=0xaa7;eip=0x002de8; 	X(POP(ax));	// 25127 pop     ax ;~ 0AA7:2DE8
	return _hex_1be39(0, _state);
_callsubx:
	// 26201 
cs=0xaa7;eip=0x0033df; 	T(MOV(al, _snd_card_type));	// 26203 mov     al, _snd_card_type ;~ 0AA7:33DF
cs=0xaa7;eip=0x0033e2; 	T(MOV(dx, _snd_base_port_0));	// 26204 mov     dx, _snd_base_port_0 ;~ 0AA7:33E2
cs=0xaa7;eip=0x0033e6; 	T(MOV(cl, _irq_number_1));	// 26205 mov     cl, _irq_number_1 ;~ 0AA7:33E6
cs=0xaa7;eip=0x0033ea; 	T(MOV(ch, _dma_channel_1));	// 26206 mov     ch, _dma_channel_1 ;~ 0AA7:33EA
cs=0xaa7;eip=0x0033ee; 	T(MOV(ah, _freq_1dcf6));	// 26207 mov     ah, _freq_1DCF6 ;~ 0AA7:33EE
cs=0xaa7;eip=0x0033f2; 	T(MOVZX(di, byte_1dcfb));	// 26208 movzx   di, byte_1DCFB ;~ 0AA7:33F2
cs=0xaa7;eip=0x0033f7; 	T(MOV(si, _configword));	// 26209 mov     si, _configword ;~ 0AA7:33F7
cs=0xaa7;eip=0x0033fb; 	T(MOV(bl, byte_1dcf7));	// 26210 mov     bl, byte_1DCF7 ;~ 0AA7:33FB
cs=0xaa7;eip=0x0033ff; 	T(MOV(bh, byte_1dcf8));	// 26211 mov     bh, byte_1DCF8 ;~ 0AA7:33FF
cs=0xaa7;eip=0x003403; 	J(CALLF(sub_12da8,0));	// 26212 call    sub_12DA8 ;~ 0AA7:3403
cs=0xaa7;eip=0x003408; 	X(MOV(byte_1de7e, 1));	// 26213 mov     byte_1DE7E, 1 ;~ 0AA7:3408
cs=0xaa7;eip=0x00340d; 	X(MOV(*(dw*)(((db*)&_messagepointer)), dx));	// 26214 mov     word ptr _messagepointer, dx ;~ 0AA7:340D
cs=0xaa7;eip=0x003411; 	X(MOV(*(dw*)(((db*)&_messagepointer)+2), fs));	// 26215 mov     word ptr _messagepointer+2, fs ;~ 0AA7:3411
cs=0xaa7;eip=0x003415; 	J(JC(locret_1c4a7));	// 26216 jb      short locret_1C4A7 ;~ 0AA7:3415
cs=0xaa7;eip=0x003417; 	X(MOV(byte_1de7e, 0));	// 26217 mov     byte_1DE7E, 0 ;~ 0AA7:3417
cs=0xaa7;eip=0x00341c; 	J(CALLF(_read_sndsettings,0));	// 26218 call    _read_sndsettings ;~ 0AA7:341C
cs=0xaa7;eip=0x003421; 	X(MOV(_snd_card_type, al));	// 26219 mov     _snd_card_type, al ;~ 0AA7:3421
cs=0xaa7;eip=0x003424; 	X(MOV(_snd_base_port_0, dx));	// 26220 mov     _snd_base_port_0, dx ;~ 0AA7:3424
cs=0xaa7;eip=0x003428; 	X(MOV(_irq_number_1, cl));	// 26221 mov     _irq_number_1, cl ;~ 0AA7:3428
cs=0xaa7;eip=0x00342c; 	X(MOV(_dma_channel_1, ch));	// 26222 mov     _dma_channel_1, ch ;~ 0AA7:342C
cs=0xaa7;eip=0x003430; 	X(MOV(_freq_1dcf6, ah));	// 26223 mov     _freq_1DCF6, ah ;~ 0AA7:3430
cs=0xaa7;eip=0x003434; 	X(MOV(byte_1dcf7, bl));	// 26224 mov     byte_1DCF7, bl ;~ 0AA7:3434
cs=0xaa7;eip=0x003438; 	X(MOV(byte_1dcf8, bh));	// 26225 mov     byte_1DCF8, bh ;~ 0AA7:3438
cs=0xaa7;eip=0x00343c; 	X(MOV(_configword, si));	// 26226 mov     _configword, si ;~ 0AA7:343C
cs=0xaa7;eip=0x003440; 	X(MOV(_outp_freq, bp));	// 26227 mov     _outp_freq, bp ;~ 0AA7:3440
cs=0xaa7;eip=0x003444; 	X(MOV(byte_1de7c, 1));	// 26228 mov     byte_1DE7C, 1 ;~ 0AA7:3444
cs=0xaa7;eip=0x003449; 	T(CMP(_snd_card_type, 0));	// 26229 cmp     _snd_card_type, 0 ;~ 0AA7:3449
cs=0xaa7;eip=0x00344e; 	J(JNZ(loc_1c4a6));	// 26230 jnz     short loc_1C4A6 ;~ 0AA7:344E
cs=0xaa7;eip=0x003450; 	X(MOV(*(raddr(cs,m2c::kloc_1aa73+4)), 0x0F));	// 26231 mov     byte ptr cs:loc_1AA73+4, 0Fh ;~ 0AA7:3450
loc_1c4a6:
	// 6032 
cs=0xaa7;eip=0x003456; 	T(CLC);	// 26234 clc ;~ 0AA7:3456
locret_1c4a7:
	// 6033 
cs=0xaa7;eip=0x003457; 	J(RETN(0));	// 26237 retn ;~ 0AA7:3457

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_callsubx: 	goto _callsubx;
        case m2c::k_f1_draw: 	goto _f1_draw;
        case m2c::k_f1_help: 	goto _f1_help;
        case m2c::k_f3_textmetter: 	goto _f3_textmetter;
        case m2c::k_f4_patternnae: 	goto _f4_patternnae;
        case m2c::k_f6_draw: 	goto _f6_draw;
        case m2c::k_f6_undoc: 	goto _f6_undoc;
        case m2c::k_keyb_19efd: 	goto _keyb_19efd;
        case m2c::k_l_enter: 	goto _l_enter;
        case m2c::k_l_esc: 	goto _l_esc;
        case m2c::k_read_module: 	goto _read_module;
        case m2c::k_text_init: 	goto _text_init;
        case m2c::k_text_init2: 	goto _text_init2;
        case m2c::k_volume_endstr: 	goto _volume_endstr;
        case m2c::k_volume_higher: 	goto _volume_higher;
        case m2c::k_volume_medium: 	goto _volume_medium;
        case m2c::kloc_19e22: 	goto loc_19e22;
        case m2c::kloc_19e2c: 	goto loc_19e2c;
        case m2c::kloc_19e41: 	goto loc_19e41;
        case m2c::kloc_19e47: 	goto loc_19e47;
        case m2c::kloc_19e58: 	goto loc_19e58;
        case m2c::kloc_19e5e: 	goto loc_19e5e;
        case m2c::kloc_19eba: 	goto loc_19eba;
        case m2c::kloc_19ec7: 	goto loc_19ec7;
        case m2c::kloc_19ecc: 	goto loc_19ecc;
        case m2c::kloc_1a042: 	goto loc_1a042;
        case m2c::kloc_1a044: 	goto loc_1a044;
        case m2c::kloc_1a070: 	goto loc_1a070;
        case m2c::kloc_1a0a0: 	goto loc_1a0a0;
        case m2c::kloc_1a0a4: 	goto loc_1a0a4;
        case m2c::kloc_1a0b5: 	goto loc_1a0b5;
        case m2c::kloc_1a0cc: 	goto loc_1a0cc;
        case m2c::kloc_1a0e6: 	goto loc_1a0e6;
        case m2c::kloc_1a0f2: 	goto loc_1a0f2;
        case m2c::kloc_1a0fe: 	goto loc_1a0fe;
        case m2c::kloc_1a118: 	goto loc_1a118;
        case m2c::kloc_1a124: 	goto loc_1a124;
        case m2c::kloc_1a128: 	goto loc_1a128;
        case m2c::kloc_1a12c: 	goto loc_1a12c;
        case m2c::kloc_1a130: 	goto loc_1a130;
        case m2c::kloc_1a134: 	goto loc_1a134;
        case m2c::kloc_1a14b: 	goto loc_1a14b;
        case m2c::kloc_1a155: 	goto loc_1a155;
        case m2c::kloc_1a15d: 	goto loc_1a15d;
        case m2c::kloc_1a174: 	goto loc_1a174;
        case m2c::kloc_1a17a: 	goto loc_1a17a;
        case m2c::kloc_1a182: 	goto loc_1a182;
        case m2c::kloc_1a199: 	goto loc_1a199;
        case m2c::kloc_1a1a3: 	goto loc_1a1a3;
        case m2c::kloc_1a1ab: 	goto loc_1a1ab;
        case m2c::kloc_1a1c2: 	goto loc_1a1c2;
        case m2c::kloc_1a1c9: 	goto loc_1a1c9;
        case m2c::kloc_1a1d1: 	goto loc_1a1d1;
        case m2c::kloc_1a1d9: 	goto loc_1a1d9;
        case m2c::kloc_1a1df: 	goto loc_1a1df;
        case m2c::kloc_1a1e5: 	goto loc_1a1e5;
        case m2c::kloc_1a200: 	goto loc_1a200;
        case m2c::kloc_1a219: 	goto loc_1a219;
        case m2c::kloc_1a21f: 	goto loc_1a21f;
        case m2c::kloc_1a225: 	goto loc_1a225;
        case m2c::kloc_1a22b: 	goto loc_1a22b;
        case m2c::kloc_1a231: 	goto loc_1a231;
        case m2c::kloc_1a244: 	goto loc_1a244;
        case m2c::kloc_1a25c: 	goto loc_1a25c;
        case m2c::kloc_1a274: 	goto loc_1a274;
        case m2c::kloc_1a283: 	goto loc_1a283;
        case m2c::kloc_1a297: 	goto loc_1a297;
        case m2c::kloc_1a2c1: 	goto loc_1a2c1;
        case m2c::kloc_1a2d1: 	goto loc_1a2d1;
        case m2c::kloc_1a2e1: 	goto loc_1a2e1;
        case m2c::kloc_1a2f1: 	goto loc_1a2f1;
        case m2c::kloc_1a30d: 	goto loc_1a30d;
        case m2c::kloc_1a315: 	goto loc_1a315;
        case m2c::kloc_1a326: 	goto loc_1a326;
        case m2c::kloc_1a32e: 	goto loc_1a32e;
        case m2c::kloc_1a33e: 	goto loc_1a33e;
        case m2c::kloc_1a34b: 	goto loc_1a34b;
        case m2c::kloc_1a356: 	goto loc_1a356;
        case m2c::kloc_1a393: 	goto loc_1a393;
        case m2c::kloc_1a3a7: 	goto loc_1a3a7;
        case m2c::kloc_1a3c5: 	goto loc_1a3c5;
        case m2c::kloc_1a3f6: 	goto loc_1a3f6;
        case m2c::kloc_1a4f2: 	goto loc_1a4f2;
        case m2c::kloc_1a529: 	goto loc_1a529;
        case m2c::kloc_1a545: 	goto loc_1a545;
        case m2c::kloc_1a55b: 	goto loc_1a55b;
        case m2c::kloc_1a5ab: 	goto loc_1a5ab;
        case m2c::kloc_1a5c3: 	goto loc_1a5c3;
        case m2c::kloc_1a5c5: 	goto loc_1a5c5;
        case m2c::kloc_1a61a: 	goto loc_1a61a;
        case m2c::kloc_1a628: 	goto loc_1a628;
        case m2c::kloc_1a645: 	goto loc_1a645;
        case m2c::kloc_1a687: 	goto loc_1a687;
        case m2c::kloc_1a6b7: 	goto loc_1a6b7;
        case m2c::kloc_1a6c2: 	goto loc_1a6c2;
        case m2c::kloc_1a74d: 	goto loc_1a74d;
        case m2c::kloc_1a913: 	goto loc_1a913;
        case m2c::kloc_1a934: 	goto loc_1a934;
        case m2c::kloc_1a93a: 	goto loc_1a93a;
        case m2c::kloc_1a947: 	goto loc_1a947;
        case m2c::kloc_1a951: 	goto loc_1a951;
        case m2c::kloc_1a975: 	goto loc_1a975;
        case m2c::kloc_1a9a5: 	goto loc_1a9a5;
        case m2c::kloc_1a9a8: 	goto loc_1a9a8;
        case m2c::kloc_1a9ad: 	goto loc_1a9ad;
        case m2c::kloc_1a9c2: 	goto loc_1a9c2;
        case m2c::kloc_1aa1a: 	goto loc_1aa1a;
        case m2c::kloc_1aa2e: 	goto loc_1aa2e;
        case m2c::kloc_1aa36: 	goto loc_1aa36;
        case m2c::kloc_1aa4f: 	goto loc_1aa4f;
        case m2c::kloc_1aa5c: 	goto loc_1aa5c;
        case m2c::kloc_1aa62: 	goto loc_1aa62;
        case m2c::kloc_1aa73: 	goto loc_1aa73;
        case m2c::kloc_1aa88: 	goto loc_1aa88;
        case m2c::kloc_1aacb: 	goto loc_1aacb;
        case m2c::kloc_1aaf0: 	goto loc_1aaf0;
        case m2c::kloc_1aaf7: 	goto loc_1aaf7;
        case m2c::kloc_1ab0d: 	goto loc_1ab0d;
        case m2c::kloc_1ab44: 	goto loc_1ab44;
        case m2c::kloc_1ab53: 	goto loc_1ab53;
        case m2c::kloc_1ab5d: 	goto loc_1ab5d;
        case m2c::kloc_1ab67: 	goto loc_1ab67;
        case m2c::kloc_1ab6f: 	goto loc_1ab6f;
        case m2c::kloc_1abf0: 	goto loc_1abf0;
        case m2c::kloc_1ac35: 	goto loc_1ac35;
        case m2c::kloc_1ac5f: 	goto loc_1ac5f;
        case m2c::kloc_1ac6d: 	goto loc_1ac6d;
        case m2c::kloc_1acac: 	goto loc_1acac;
        case m2c::kloc_1acd2: 	goto loc_1acd2;
        case m2c::kloc_1bd86: 	goto loc_1bd86;
        case m2c::kloc_1bd88: 	goto loc_1bd88;
        case m2c::kloc_1bd95: 	goto loc_1bd95;
        case m2c::kloc_1bd9f: 	goto loc_1bd9f;
        case m2c::kloc_1bdf2: 	goto loc_1bdf2;
        case m2c::kloc_1be07: 	goto loc_1be07;
        case m2c::kloc_1be10: 	goto loc_1be10;
        case m2c::kloc_1c4a6: 	goto loc_1c4a6;
        case m2c::klocret_1acf5: 	goto locret_1acf5;
        case m2c::klocret_1c4a7: 	goto locret_1c4a7;
        case m2c::kret_aa7_2de1: 	goto ret_aa7_2de1;
        case m2c::kseg001_1456_proc: 	goto seg001_1456_proc;
        case m2c::kseg001_18a8_proc: 	goto seg001_18a8_proc;
        case m2c::kseg001_1b71_proc: 	goto seg001_1b71_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group35(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group35:
    _begin:
_f2_waves:
	// 21993 
cs=0xaa7;eip=0x0013c6; 	X(MOV(off_1de3c, m2c::k_init_vga_waves));	// 21995 mov     off_1DE3C, offset _init_vga_waves ;~ 0AA7:13C6
cs=0xaa7;eip=0x0013cc; 	X(MOV(_offs_draw, m2c::k_f2_draw_waves));	// 21996 mov     _offs_draw, offset _f2_draw_waves ;~ 0AA7:13CC
cs=0xaa7;eip=0x0013d2; 	X(MOV(_offs_draw2, m2c::k_f2_draw_waves2));	// 21997 mov     _offs_draw2, offset _f2_draw_waves2 ;~ 0AA7:13D2
cs=0xaa7;eip=0x0013d8; 	X(MOV(off_1de42, m2c::k_init_vga_waves));	// 21998 mov     off_1DE42, offset _init_vga_waves ;~ 0AA7:13D8
cs=0xaa7;eip=0x0013de; 	J(CALL(_init_vga_waves,0));	// 21999 call    _init_vga_waves ;~ 0AA7:13DE
cs=0xaa7;eip=0x0013e1; 	J(RETN(0));	// 22000 retn ;~ 0AA7:13E1
_init_vga_waves:
	// 23077 
cs=0xaa7;eip=0x001cdf; 	T(CMP(byte_1de70, 3));	// 23082 cmp     byte_1DE70, 3 ;~ 0AA7:1CDF
cs=0xaa7;eip=0x001ce4; 	J(JZ(loc_1aeb2));	// 23083 jz      loc_1AEB2 ;~ 0AA7:1CE4
cs=0xaa7;eip=0x001ce8; 	X(MOV(byte_1de70, 3));	// 23084 mov     byte_1DE70, 3 ;~ 0AA7:1CE8
cs=0xaa7;eip=0x001ced; 	T(MOV(ax, 0x12));	// 23085 mov     ax, 12h         ; VGA 640x480, 16-color; 80 bytes per line; 1 byte-8 pixels ;~ 0AA7:1CED
cs=0xaa7;eip=0x001cf0; 	S(_INT(0x10));	// 23086 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 0AA7:1CF0
cs=0xaa7;eip=0x001cf2; 	T(MOV(ax, ds));	// 23088 mov     ax, ds ;~ 0AA7:1CF2
cs=0xaa7;eip=0x001cf4; 	T(MOV(es, ax));	// 23089 mov     es, ax ;~ 0AA7:1CF4
cs=0xaa7;eip=0x001cf6; 	T(MOV(dx, offset(dseg,_palette_24404)));	// 23091 mov     dx, offset _palette_24404 ;~ 0AA7:1CF6
cs=0xaa7;eip=0x001cf9; 	T(MOV(ax, 0x1002));	// 23092 mov     ax, 1002h ;~ 0AA7:1CF9
cs=0xaa7;eip=0x001cfc; 	S(_INT(0x10));	// 23093 int     10h             ; - VIDEO - SET ALL PALETTE REGISTERS (Jr, PS, TANDY 1000, EGA, VGA) ;~ 0AA7:1CFC
cs=0xaa7;eip=0x001cfe; 	T(MOV(dx, offset(dseg,_vga_palette)));	// 23095 mov     dx, offset _vga_palette ;~ 0AA7:1CFE
cs=0xaa7;eip=0x001d01; 	T(MOV(cx, 0x10));	// 23096 mov     cx, 10h ;~ 0AA7:1D01
cs=0xaa7;eip=0x001d04; 	T(XOR(bx, bx));	// 23097 xor     bx, bx ;~ 0AA7:1D04
cs=0xaa7;eip=0x001d06; 	T(MOV(ax, 0x1012));	// 23098 mov     ax, 1012h ;~ 0AA7:1D06
cs=0xaa7;eip=0x001d09; 	S(_INT(0x10));	// 23099 int     10h             ; - VIDEO - SET BLOCK OF DAC REGISTERS (EGA, VGA/MCGA) ;~ 0AA7:1D09
cs=0xaa7;eip=0x001d0b; 	T(MOV(si, offset(dseg,_buffer_1dc6c)));	// 23103 mov     si, offset _buffer_1DC6C ;~ 0AA7:1D0B
cs=0xaa7;eip=0x001d0e; 	J(CALL(_getexename,0));	// 23104 call    _getexename ;~ 0AA7:1D0E
cs=0xaa7;eip=0x001d11; 	J(JC(loc_1ae66));	// 23105 jb      loc_1AE66 ;~ 0AA7:1D11
cs=0xaa7;eip=0x001d15; 	T(MOV(dx, offset(dseg,_buffer_1dc6c)));	// 23106 mov     dx, offset _buffer_1DC6C ;~ 0AA7:1D15
cs=0xaa7;eip=0x001d18; 	T(MOV(ax, 0x3D00));	// 23107 mov     ax, 3D00h ;~ 0AA7:1D18
cs=0xaa7;eip=0x001d1b; 	S(_INT(0x21));	// 23108 int     21h             ; DOS - 2+ - OPEN DISK FILE WITH HANDLE ;~ 0AA7:1D1B
cs=0xaa7;eip=0x001d1d; 	J(JC(loc_1ae66));	// 23112 jb      loc_1AE66 ;~ 0AA7:1D1D
cs=0xaa7;eip=0x001d21; 	X(MOV(_fhandle_1de68, ax));	// 23113 mov     _fhandle_1DE68, ax ;~ 0AA7:1D21
cs=0xaa7;eip=0x001d24; 	T(XOR(dx, dx));	// 23114 xor     dx, dx ;~ 0AA7:1D24
cs=0xaa7;eip=0x001d26; 	T(XOR(cx, cx));	// 23115 xor     cx, cx ;~ 0AA7:1D26
cs=0xaa7;eip=0x001d28; 	T(MOV(bx, _fhandle_1de68));	// 23116 mov     bx, _fhandle_1DE68 ;~ 0AA7:1D28
cs=0xaa7;eip=0x001d2c; 	T(MOV(ax, 0x4202));	// 23117 mov     ax, 4202h       ; get file size ;~ 0AA7:1D2C
cs=0xaa7;eip=0x001d2f; 	S(_INT(0x21));	// 23118 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 0AA7:1D2F
cs=0xaa7;eip=0x001d31; 	J(JC(loc_1ae5e));	// 23120 jb      loc_1AE5E ;~ 0AA7:1D31
cs=0xaa7;eip=0x001d35; 	T(MOV(cx, dx));	// 23121 mov     cx, dx ;~ 0AA7:1D35
cs=0xaa7;eip=0x001d37; 	T(MOV(dx, ax));	// 23122 mov     dx, ax ;~ 0AA7:1D37
cs=0xaa7;eip=0x001d39; 	T(SUB(dx, 0x5AB3));	// 23123 sub     dx, 5AB3h       ; read from the end of file - 15AB3h = the size of picture ;~ 0AA7:1D39
cs=0xaa7;eip=0x001d3d; 	T(SBB(cx, 1));	// 23124 sbb     cx, 1 ;~ 0AA7:1D3D
cs=0xaa7;eip=0x001d40; 	T(MOV(bx, _fhandle_1de68));	// 23125 mov     bx, _fhandle_1DE68 ;~ 0AA7:1D40
cs=0xaa7;eip=0x001d44; 	T(MOV(ax, 0x4200));	// 23126 mov     ax, 4200h ;~ 0AA7:1D44
cs=0xaa7;eip=0x001d47; 	S(_INT(0x21));	// 23127 int     21h             ; DOS - 2+ - MOVE FILE READ/WRITE POINTER (LSEEK) ;~ 0AA7:1D47
cs=0xaa7;eip=0x001d49; 	J(JC(loc_1ae5e));	// 23129 jb      loc_1AE5E ;~ 0AA7:1D49
cs=0xaa7;eip=0x001d4d; 	T(MOV(dx, offset(dseg,_buffer_1dc6c)));	// 23130 mov     dx, offset _buffer_1DC6C ;~ 0AA7:1D4D
cs=0xaa7;eip=0x001d50; 	T(MOV(cx, 2));	// 23131 mov     cx, 2 ;~ 0AA7:1D50
cs=0xaa7;eip=0x001d53; 	T(MOV(bx, _fhandle_1de68));	// 23132 mov     bx, _fhandle_1DE68 ;~ 0AA7:1D53
cs=0xaa7;eip=0x001d57; 	T(MOV(ah, 0x3F));	// 23133 mov     ah, 3Fh ;~ 0AA7:1D57
cs=0xaa7;eip=0x001d59; 	S(_INT(0x21));	// 23134 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 0AA7:1D59
cs=0xaa7;eip=0x001d5b; 	J(JC(loc_1ae5e));	// 23137 jb      loc_1AE5E ;~ 0AA7:1D5B
cs=0xaa7;eip=0x001d5f; 	T(CMP(ax, 2));	// 23138 cmp     ax, 2 ;~ 0AA7:1D5F
cs=0xaa7;eip=0x001d62; 	J(JNZ(loc_1ae5e));	// 23139 jnz     loc_1AE5E ;~ 0AA7:1D62
cs=0xaa7;eip=0x001d66; 	T(CMP(*(dw*)(((db*)&_buffer_1dc6c)), 0x4453));	// 23140 cmp     word ptr _buffer_1DC6C, 4453h ; 'SD' check picture signature ;~ 0AA7:1D66
cs=0xaa7;eip=0x001d6c; 	J(JNZ(loc_1ae5e));	// 23141 jnz     loc_1AE5E ;~ 0AA7:1D6C
cs=0xaa7;eip=0x001d70; 	J(CALL(_set_egasequencer,0));	// 23142 call    _set_egasequencer ;~ 0AA7:1D70
cs=0xaa7;eip=0x001d73; 	J(CALL(_read2buffer,0));	// 23143 call    _read2buffer ;~ 0AA7:1D73
cs=0xaa7;eip=0x001d76; 	T(MOV(dx, 0x3CE));	// 23144 mov     dx, 3CEh ;~ 0AA7:1D76
cs=0xaa7;eip=0x001d79; 	T(MOV(ax, 3));	// 23145 mov     ax, 3 ;~ 0AA7:1D79
cs=0xaa7;eip=0x001d7c; 	S(OUT(dx, ax));	// 23146 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0AA7:1D7C
cs=0xaa7;eip=0x001d7d; 	T(MOV(ax, 0x0FF08));	// 23151 mov     ax, 0FF08h ;~ 0AA7:1D7D
cs=0xaa7;eip=0x001d80; 	S(OUT(dx, ax));	// 23152 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0AA7:1D80
cs=0xaa7;eip=0x001d81; 	T(MOV(ax, 0x0A000));	// 23154 mov     ax, 0A000h ;~ 0AA7:1D81
cs=0xaa7;eip=0x001d84; 	T(MOV(es, ax));	// 23155 mov     es, ax ;~ 0AA7:1D84
cs=0xaa7;eip=0x001d86; 	T(MOV(dx, 0x3C4));	// 23157 mov     dx, 3C4h ;~ 0AA7:1D86
cs=0xaa7;eip=0x001d89; 	T(MOV(al, 2));	// 23158 mov     al, 2 ;~ 0AA7:1D89
cs=0xaa7;eip=0x001d8b; 	S(OUT(dx, al));	// 23159 out     dx, al          ; EGA: sequencer address reg ;~ 0AA7:1D8B
cs=0xaa7;eip=0x001d8c; 	T(INC(dl));	// 23161 inc     dl ;~ 0AA7:1D8C
cs=0xaa7;eip=0x001d8e; 	T(XOR(bx, bx));	// 23162 xor     bx, bx ;~ 0AA7:1D8E
loc_1ade0:
	// 5804 
cs=0xaa7;eip=0x001d90; 	T(MOV(ah, 1));	// 23165 mov     ah, 1 ;~ 0AA7:1D90
loc_1ade2:
	// 5805 
cs=0xaa7;eip=0x001d92; 	T(MOV(al, ah));	// 23168 mov     al, ah ;~ 0AA7:1D92
cs=0xaa7;eip=0x001d94; 	S(OUT(dx, al));	// 23169 out     dx, al          ; EGA port: sequencer data register ;~ 0AA7:1D94
cs=0xaa7;eip=0x001d95; 	T(XOR(di, di));	// 23170 xor     di, di ;~ 0AA7:1D95
loc_1ade7:
	// 5806 
cs=0xaa7;eip=0x001d97; 	T(MOV(cl, *(raddr(ds,si))));	// 23173 mov     cl, [si] ;~ 0AA7:1D97
cs=0xaa7;eip=0x001d99; 	T(INC(si));	// 23174 inc     si ;~ 0AA7:1D99
cs=0xaa7;eip=0x001d9a; 	T(CMP(si, offset(dseg,_buffer_1seg)));	// 23175 cmp     si, offset _buffer_1seg ;~ 0AA7:1D9A
cs=0xaa7;eip=0x001d9e; 	J(JNC(loc_1ae0c));	// 23176 jnb     short loc_1AE0C ; WARNING: push returns address to stack ;~ 0AA7:1D9E
loc_1adf0:
	// 5807 
cs=0xaa7;eip=0x001da0; 	T(OR(cl, cl));	// 23179 or      cl, cl ;~ 0AA7:1DA0
cs=0xaa7;eip=0x001da2; 	J(JS(loc_1ae2d));	// 23180 js      short loc_1AE2D ;~ 0AA7:1DA2
cs=0xaa7;eip=0x001da4; 	T(INC(cl));	// 23181 inc     cl ;~ 0AA7:1DA4
loc_1adf6:
	// 5808 
cs=0xaa7;eip=0x001da6; 	T(MOV(al, *(raddr(es,bx+di))));	// 23184 mov     al, es:[bx+di] ;~ 0AA7:1DA6
cs=0xaa7;eip=0x001da9; 	T(MOV(al, *(raddr(ds,si))));	// 23185 mov     al, [si] ;~ 0AA7:1DA9
cs=0xaa7;eip=0x001dab; 	X(MOV(*(raddr(es,bx+di)), al));	// 23186 mov     es:[bx+di], al ;~ 0AA7:1DAB
cs=0xaa7;eip=0x001dae; 	T(INC(si));	// 23187 inc     si ;~ 0AA7:1DAE
cs=0xaa7;eip=0x001daf; 	T(CMP(si, offset(dseg,_buffer_1seg)));	// 23188 cmp     si, offset _buffer_1seg ;~ 0AA7:1DAF
cs=0xaa7;eip=0x001db3; 	J(JNC(loc_1ae11));	// 23189 jnb     short loc_1AE11 ;~ 0AA7:1DB3
loc_1ae05:
	// 5809 
cs=0xaa7;eip=0x001db5; 	T(INC(di));	// 23192 inc     di ;~ 0AA7:1DB5
cs=0xaa7;eip=0x001db6; 	T(DEC(cl));	// 23193 dec     cl ;~ 0AA7:1DB6
cs=0xaa7;eip=0x001db8; 	J(JNZ(loc_1adf6));	// 23194 jnz     short loc_1ADF6 ;~ 0AA7:1DB8
cs=0xaa7;eip=0x001dba; 	J(JMP(loc_1ae46));	// 23195 jmp     short loc_1AE46 ;~ 0AA7:1DBA
loc_1ae0c:
	// 5810 
cs=0xaa7;eip=0x001dbc; 	X(PUSH(m2c::kloc_1adf0));	// 23199 push    offset loc_1ADF0 ; WARNING: push returns address to stack ;~ 0AA7:1DBC
cs=0xaa7;eip=0x001dbf; 	J(return _read2buffer(0, _state););	// 23200 jmp     short _read2buffer ;~ 0AA7:1DBF
loc_1ae11:
	// 5811 
cs=0xaa7;eip=0x001dc1; 	X(PUSH(m2c::kloc_1ae05));	// 23204 push    offset loc_1AE05 ;~ 0AA7:1DC1
cs=0xaa7;eip=0x001dc4; 	J(return _read2buffer(0, _state););	// 23205 jmp     short _read2buffer ;~ 0AA7:1DC4
loc_1ae16:
	// 5812 
cs=0xaa7;eip=0x001dc6; 	X(PUSH(m2c::kloc_1ae3a));	// 23209 push    offset loc_1AE3A ;~ 0AA7:1DC6
	return _read2buffer(0, _state);
seg001_1ddd_proc:
	// 23234 
loc_1ae2d:
	// 5813 
cs=0xaa7;eip=0x001ddd; 	T(NEG(cl));	// 23235 neg     cl ;~ 0AA7:1DDD
cs=0xaa7;eip=0x001ddf; 	T(INC(cl));	// 23236 inc     cl ;~ 0AA7:1DDF
cs=0xaa7;eip=0x001de1; 	T(MOV(al, *(raddr(ds,si))));	// 23237 mov     al, [si] ;~ 0AA7:1DE1
cs=0xaa7;eip=0x001de3; 	T(INC(si));	// 23238 inc     si ;~ 0AA7:1DE3
cs=0xaa7;eip=0x001de4; 	T(CMP(si, offset(dseg,_buffer_1seg)));	// 23239 cmp     si, offset _buffer_1seg ;~ 0AA7:1DE4
cs=0xaa7;eip=0x001de8; 	J(JNC(loc_1ae16));	// 23240 jnb     short loc_1AE16 ;~ 0AA7:1DE8
loc_1ae3a:
	// 5814 
cs=0xaa7;eip=0x001dea; 	T(TEST(*(raddr(es,bx+di)), 0));	// 23244 test    byte ptr es:[bx+di], 0 ;~ 0AA7:1DEA
cs=0xaa7;eip=0x001dee; 	X(MOV(*(raddr(es,bx+di)), al));	// 23245 mov     es:[bx+di], al ;~ 0AA7:1DEE
cs=0xaa7;eip=0x001df1; 	T(INC(di));	// 23246 inc     di ;~ 0AA7:1DF1
cs=0xaa7;eip=0x001df2; 	T(DEC(cl));	// 23247 dec     cl ;~ 0AA7:1DF2
cs=0xaa7;eip=0x001df4; 	J(JNZ(loc_1ae3a));	// 23248 jnz     short loc_1AE3A ;~ 0AA7:1DF4
loc_1ae46:
	// 5815 
cs=0xaa7;eip=0x001df6; 	T(CMP(di, 0x50));	// 23251 cmp     di, 50h ; 'P' ;~ 0AA7:1DF6
cs=0xaa7;eip=0x001df9; 	J(JC(loc_1ade7));	// 23252 jb      short loc_1ADE7 ;~ 0AA7:1DF9
cs=0xaa7;eip=0x001dfb; 	T(SHL(ah, 1));	// 23253 shl     ah, 1 ;~ 0AA7:1DFB
cs=0xaa7;eip=0x001dfd; 	T(TEST(ah, 0x10));	// 23254 test    ah, 10h ;~ 0AA7:1DFD
cs=0xaa7;eip=0x001e00; 	J(JZ(loc_1ade2));	// 23255 jz      short loc_1ADE2 ;~ 0AA7:1E00
cs=0xaa7;eip=0x001e02; 	T(ADD(bx, 0x50));	// 23256 add     bx, 50h ; 'P' ;~ 0AA7:1E02
cs=0xaa7;eip=0x001e05; 	T(CMP(bx, 0x9600));	// 23257 cmp     bx, 9600h ;~ 0AA7:1E05
cs=0xaa7;eip=0x001e09; 	J(JC(loc_1ade0));	// 23258 jb      short loc_1ADE0 ;~ 0AA7:1E09
cs=0xaa7;eip=0x001e0b; 	J(CALL(_graph_1c070,0));	// 23259 call    _graph_1C070 ;~ 0AA7:1E0B
loc_1ae5e:
	// 5816 
cs=0xaa7;eip=0x001e0e; 	T(MOV(bx, _fhandle_1de68));	// 23263 mov     bx, _fhandle_1DE68 ;~ 0AA7:1E0E
cs=0xaa7;eip=0x001e12; 	T(MOV(ah, 0x3E));	// 23264 mov     ah, 3Eh ;~ 0AA7:1E12
cs=0xaa7;eip=0x001e14; 	S(_INT(0x21));	// 23265 int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 0AA7:1E14
loc_1ae66:
	// 5817 
cs=0xaa7;eip=0x001e16; 	X(PUSHF);	// 23270 pushf ;~ 0AA7:1E16
cs=0xaa7;eip=0x001e17; 	T(CLI);	// 23271 cli ;~ 0AA7:1E17
cs=0xaa7;eip=0x001e18; 	T(MOV(dx, 0x3C4));	// 23272 mov     dx, 3C4h ;~ 0AA7:1E18
cs=0xaa7;eip=0x001e1b; 	T(MOV(ax, 0x802));	// 23273 mov     ax, 802h ;~ 0AA7:1E1B
cs=0xaa7;eip=0x001e1e; 	S(OUT(dx, ax));	// 23274 out     dx, ax          ; EGA: sequencer address reg ;~ 0AA7:1E1E
cs=0xaa7;eip=0x001e1f; 	T(MOV(dx, 0x3CE));	// 23276 mov     dx, 3CEh ;~ 0AA7:1E1F
cs=0xaa7;eip=0x001e22; 	T(MOV(ax, 0x205));	// 23277 mov     ax, 205h ;~ 0AA7:1E22
cs=0xaa7;eip=0x001e25; 	S(OUT(dx, ax));	// 23278 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0AA7:1E25
cs=0xaa7;eip=0x001e26; 	T(MOV(ax, 3));	// 23280 mov     ax, 3 ;~ 0AA7:1E26
cs=0xaa7;eip=0x001e29; 	S(OUT(dx, ax));	// 23281 out     dx, ax          ; EGA: graph 1 and 2 addr reg: ;~ 0AA7:1E29
cs=0xaa7;eip=0x001e2a; 	X(POPF);	// 23286 popf ;~ 0AA7:1E2A
cs=0xaa7;eip=0x001e2b; 	J(CALL(_video_prp_mtr_positn,0));	// 23287 call    _video_prp_mtr_positn ;~ 0AA7:1E2B
loc_1ae7e:
	// 5818 
cs=0xaa7;eip=0x001e2e; 	T(MOV(ax, ds));	// 23291 mov     ax, ds ;~ 0AA7:1E2E
cs=0xaa7;eip=0x001e30; 	T(MOV(bx, offset(dseg,_buffer_1)));	// 23292 mov     bx, offset _buffer_1 ; 2800h ;~ 0AA7:1E30
cs=0xaa7;eip=0x001e33; 	T(SHR(bx, 4));	// 23293 shr     bx, 4 ;~ 0AA7:1E33
cs=0xaa7;eip=0x001e36; 	T(ADD(ax, bx));	// 23294 add     ax, bx ;~ 0AA7:1E36
cs=0xaa7;eip=0x001e38; 	X(MOV(_buffer_1seg, ax));	// 23295 mov     _buffer_1seg, ax ;~ 0AA7:1E38
cs=0xaa7;eip=0x001e3b; 	T(ADD(ax, 0x280));	// 23296 add     ax, 280h        ; (offset buffer_206E0 - offset buffer_1DEE0)/16 ;~ 0AA7:1E3B
cs=0xaa7;eip=0x001e3e; 	X(MOV(_buffer_2seg, ax));	// 23297 mov     _buffer_2seg, ax ;~ 0AA7:1E3E
cs=0xaa7;eip=0x001e41; 	T(MOV(ax, ds));	// 23298 mov     ax, ds ;~ 0AA7:1E41
cs=0xaa7;eip=0x001e43; 	T(MOV(es, ax));	// 23299 mov     es, ax ;~ 0AA7:1E43
cs=0xaa7;eip=0x001e45; 	T(MOV(di, offset(dseg,_buffer_1)));	// 23301 mov     di, offset _buffer_1 ; 2800h ;~ 0AA7:1E45
cs=0xaa7;eip=0x001e48; 	T(MOV(cx, 0x0A00));	// 23302 mov     cx, 0A00h ;~ 0AA7:1E48
cs=0xaa7;eip=0x001e4b; 	T(XOR(eax, eax));	// 23303 xor     eax, eax ;~ 0AA7:1E4B
cs=0xaa7;eip=0x001e4e; 	T(CLD);	// 23304 cld ;~ 0AA7:1E4E
	// 23305 rep stosd ;~ 0AA7:1E4F
cs=0xaa7;eip=0x001e4f; 	X(	REP STOSD);	// 23305 rep stosd ;~ 0AA7:1E4F
cs=0xaa7;eip=0x001e52; 	T(MOV(di, offset(dseg,_buffer_2)));	// 23306 mov     di, offset _buffer_2 ;~ 0AA7:1E52
cs=0xaa7;eip=0x001e55; 	T(MOV(cx, 0x0A00));	// 23307 mov     cx, 0A00h ;~ 0AA7:1E55
cs=0xaa7;eip=0x001e58; 	T(MOV(eax, 0x1010101));	// 23308 mov     eax, 1010101h ;~ 0AA7:1E58
	// 23309 rep stosd ;~ 0AA7:1E5E
cs=0xaa7;eip=0x001e5e; 	X(	REP STOSD);	// 23309 rep stosd ;~ 0AA7:1E5E
cs=0xaa7;eip=0x001e61; 	J(RETN(0));	// 23310 retn ;~ 0AA7:1E61
loc_1aeb2:
	// 5819 
cs=0xaa7;eip=0x001e62; 	J(CALL(_f2_draw_waves2,0));	// 23314 call    _f2_draw_waves2 ;~ 0AA7:1E62
cs=0xaa7;eip=0x001e65; 	J(CALL(_video_prp_mtr_positn,0));	// 23315 call    _video_prp_mtr_positn ;~ 0AA7:1E65
cs=0xaa7;eip=0x001e68; 	J(JMP(loc_1ae7e));	// 23316 jmp     short loc_1AE7E ;~ 0AA7:1E68
_f2_draw_waves:
	// 23322 
cs=0xaa7;eip=0x001e6a; 	T(MOV(es, _buffer_1seg));	// 23323 mov     es, _buffer_1seg ;~ 0AA7:1E6A
cs=0xaa7;eip=0x001e6e; 	T(XOR(di, di));	// 23325 xor     di, di ;~ 0AA7:1E6E
cs=0xaa7;eip=0x001e70; 	T(MOV(cx, 0x128));	// 23326 mov     cx, 128h ;~ 0AA7:1E70
cs=0xaa7;eip=0x001e73; 	T(MOV(ax, 0x0C001));	// 23327 mov     ax, 0C001h ;~ 0AA7:1E73
cs=0xaa7;eip=0x001e76; 	J(CALLF(_volume_prep,0));	// 23328 call    _volume_prep ;~ 0AA7:1E76
cs=0xaa7;eip=0x001e7b; 	T(MOV(ax, 0x0A000));	// 23329 mov     ax, 0A000h ;~ 0AA7:1E7B
cs=0xaa7;eip=0x001e7e; 	T(MOV(es, ax));	// 23330 mov     es, ax ;~ 0AA7:1E7E
cs=0xaa7;eip=0x001e80; 	T(MOV(fs, _buffer_1seg));	// 23332 mov     fs, _buffer_1seg ;~ 0AA7:1E80
cs=0xaa7;eip=0x001e84; 	T(MOV(gs, _buffer_2seg));	// 23333 mov     gs, _buffer_2seg ;~ 0AA7:1E84
cs=0xaa7;eip=0x001e88; 	T(MOV(di, offset(dseg,_x_storage)));	// 23334 mov     di, offset _x_storage ;~ 0AA7:1E88
cs=0xaa7;eip=0x001e8b; 	T(XOR(si, si));	// 23335 xor     si, si ;~ 0AA7:1E8B
cs=0xaa7;eip=0x001e8d; 	T(MOV(cx, _amount_of_x));	// 23336 mov     cx, _amount_of_x ;~ 0AA7:1E8D
_lc_next_meter:
	// 5820 
cs=0xaa7;eip=0x001e91; 	X(PUSH(cx));	// 23339 push    cx ;~ 0AA7:1E91
cs=0xaa7;eip=0x001e92; 	X(PUSH(si));	// 23340 push    si ;~ 0AA7:1E92
cs=0xaa7;eip=0x001e93; 	X(PUSH(di));	// 23341 push    di ;~ 0AA7:1E93
cs=0xaa7;eip=0x001e94; 	T(MOV(bp, *(dw*)(raddr(ds,di))));	// 23342 mov     bp, [di]        ; bp = x * 8 ;~ 0AA7:1E94
cs=0xaa7;eip=0x001e96; 	T(MOV(dx, 0x3CE));	// 23343 mov     dx, 3CEh ;~ 0AA7:1E96
cs=0xaa7;eip=0x001e99; 	T(MOV(al, 8));	// 23344 mov     al, 8 ;~ 0AA7:1E99
cs=0xaa7;eip=0x001e9b; 	S(OUT(dx, al));	// 23345 out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 0AA7:1E9B
cs=0xaa7;eip=0x001e9c; 	T(MOV(al, 0x80));	// 23348 mov     al, 10000000b   ; bits of display memory which can be modified ;~ 0AA7:1E9C
_lc_nextvideobit:
	// 5821 
cs=0xaa7;eip=0x001e9e; 	T(MOV(ah, 37));	// 23351 mov     ah, 37          ; 37 * 8 = 296 by x ;~ 0AA7:1E9E
cs=0xaa7;eip=0x001ea0; 	T(MOV(dx, 0x3CF));	// 23352 mov     dx, 3CFh ;~ 0AA7:1EA0
cs=0xaa7;eip=0x001ea3; 	S(OUT(dx, al));	// 23353 out     dx, al          ; EGA port: graphics controller data register ;~ 0AA7:1EA3
cs=0xaa7;eip=0x001ea4; 	T(MOV(bx, bp));	// 23354 mov     bx, bp          ; reinit (x*8) ;~ 0AA7:1EA4
_lc_next_x8:
	// 5822 
cs=0xaa7;eip=0x001ea6; 	X(MOVSX(di, *(raddr(gs,si))));	// 23357 movsx   di, byte ptr gs:[si] ; y1 ;~ 0AA7:1EA6
cs=0xaa7;eip=0x001eaa; 	X(MOVSX(dx, *(raddr(fs,si))));	// 23358 movsx   dx, byte ptr fs:[si] ; y2 ;~ 0AA7:1EAA
cs=0xaa7;eip=0x001eae; 	T(CMP(di, dx));	// 23359 cmp     di, dx ;~ 0AA7:1EAE
cs=0xaa7;eip=0x001eb0; 	J(JZ(loc_1af3a));	// 23360 jz      short loc_1AF3A ;~ 0AA7:1EB0
cs=0xaa7;eip=0x001eb2; 	T(NEG(di));	// 23361 neg     di ;~ 0AA7:1EB2
cs=0xaa7;eip=0x001eb4; 	T(MOV(cx, di));	// 23362 mov     cx, di ;~ 0AA7:1EB4
cs=0xaa7;eip=0x001eb6; 	T(SHL(di, 6));	// 23363 shl     di, 6 ;~ 0AA7:1EB6
cs=0xaa7;eip=0x001eb9; 	T(SHL(cx, 4));	// 23364 shl     cx, 4           ; multiply by 80 (1 line 80 bytes) ;~ 0AA7:1EB9
cs=0xaa7;eip=0x001ebc; 	T(ADD(di, cx));	// 23365 add     di, cx          ; di = y * 80 ;~ 0AA7:1EBC
cs=0xaa7;eip=0x001ebe; 	T(cx = bx+di);	// 23366 lea     cx, [bx+di] ;~ 0AA7:1EBE
cs=0xaa7;eip=0x001ec0; 	T(OR(cx, cx));	// 23367 or      cx, cx          ; y * 80 + x ;~ 0AA7:1EC0
cs=0xaa7;eip=0x001ec2; 	J(JS(loc_1af1e));	// 23368 js      short loc_1AF1E ;~ 0AA7:1EC2
cs=0xaa7;eip=0x001ec4; 	T(CMP(cx, 0x5780));	// 23369 cmp     cx, 5780h       ; bottom y margin 280 ;~ 0AA7:1EC4
cs=0xaa7;eip=0x001ec8; 	J(JNC(loc_1af1e));	// 23370 jnb     short loc_1AF1E ;~ 0AA7:1EC8
cs=0xaa7;eip=0x001eca; 	X(AND(*(raddr(es,bx+di)), 0x7));	// 23371 and     byte ptr es:[bx+di], 111b ; clean previous dot ;~ 0AA7:1ECA
loc_1af1e:
	// 5823 
cs=0xaa7;eip=0x001ece; 	T(NEG(dx));	// 23375 neg     dx ;~ 0AA7:1ECE
cs=0xaa7;eip=0x001ed0; 	T(MOV(di, dx));	// 23376 mov     di, dx ;~ 0AA7:1ED0
cs=0xaa7;eip=0x001ed2; 	T(SHL(di, 6));	// 23377 shl     di, 6 ;~ 0AA7:1ED2
cs=0xaa7;eip=0x001ed5; 	T(SHL(dx, 4));	// 23378 shl     dx, 4 ;~ 0AA7:1ED5
cs=0xaa7;eip=0x001ed8; 	T(ADD(di, dx));	// 23379 add     di, dx ;~ 0AA7:1ED8
cs=0xaa7;eip=0x001eda; 	T(cx = bx+di);	// 23380 lea     cx, [bx+di] ;~ 0AA7:1EDA
cs=0xaa7;eip=0x001edc; 	T(OR(cx, cx));	// 23381 or      cx, cx ;~ 0AA7:1EDC
cs=0xaa7;eip=0x001ede; 	J(JS(loc_1af3a));	// 23382 js      short loc_1AF3A ;~ 0AA7:1EDE
cs=0xaa7;eip=0x001ee0; 	T(CMP(cx, 0x5780));	// 23383 cmp     cx, 5780h ;~ 0AA7:1EE0
cs=0xaa7;eip=0x001ee4; 	J(JNC(loc_1af3a));	// 23384 jnb     short loc_1AF3A ;~ 0AA7:1EE4
cs=0xaa7;eip=0x001ee6; 	X(OR(*(raddr(es,bx+di)), 0x8));	// 23385 or      byte ptr es:[bx+di], 1000b ; set new dot ;~ 0AA7:1EE6
loc_1af3a:
	// 5824 
cs=0xaa7;eip=0x001eea; 	T(ADD(si, 8));	// 23389 add     si, 8 ;~ 0AA7:1EEA
cs=0xaa7;eip=0x001eed; 	T(INC(bx));	// 23390 inc     bx              ; (x*8)++ ;~ 0AA7:1EED
cs=0xaa7;eip=0x001eee; 	T(DEC(ah));	// 23391 dec     ah ;~ 0AA7:1EEE
cs=0xaa7;eip=0x001ef0; 	J(JNZ(_lc_next_x8));	// 23392 jnz     short _lc_next_x8 ; y1 ;~ 0AA7:1EF0
cs=0xaa7;eip=0x001ef2; 	T(SUB(si, 0x128));	// 23393 sub     si, 128h ;~ 0AA7:1EF2
cs=0xaa7;eip=0x001ef6; 	T(INC(si));	// 23394 inc     si ;~ 0AA7:1EF6
cs=0xaa7;eip=0x001ef7; 	T(SHR(al, 1));	// 23395 shr     al, 1           ; next video bit ;~ 0AA7:1EF7
cs=0xaa7;eip=0x001ef9; 	J(JNC(_lc_nextvideobit));	// 23396 jnb     short _lc_nextvideobit ; 37 * 8 = 296 by x ;~ 0AA7:1EF9
cs=0xaa7;eip=0x001efb; 	X(POP(di));	// 23397 pop     di ;~ 0AA7:1EFB
cs=0xaa7;eip=0x001efc; 	X(POP(si));	// 23398 pop     si ;~ 0AA7:1EFC
cs=0xaa7;eip=0x001efd; 	X(POP(cx));	// 23399 pop     cx ;~ 0AA7:1EFD
cs=0xaa7;eip=0x001efe; 	T(ADD(si, 0x128));	// 23400 add     si, 128h ;~ 0AA7:1EFE
cs=0xaa7;eip=0x001f02; 	T(ADD(di, 2));	// 23401 add     di, 2           ; next x ;~ 0AA7:1F02
cs=0xaa7;eip=0x001f05; 	T(DEC(cx));	// 23402 dec     cx ;~ 0AA7:1F05
cs=0xaa7;eip=0x001f06; 	J(JNZ(_lc_next_meter));	// 23403 jnz     short _lc_next_meter ;~ 0AA7:1F06
cs=0xaa7;eip=0x001f08; 	T(MOV(ax, _buffer_1seg));	// 23404 mov     ax, _buffer_1seg ;~ 0AA7:1F08
cs=0xaa7;eip=0x001f0b; 	X(XCHG(ax, _buffer_2seg));	// 23405 xchg    ax, _buffer_2seg ;~ 0AA7:1F0B
cs=0xaa7;eip=0x001f0f; 	X(MOV(_buffer_1seg, ax));	// 23406 mov     _buffer_1seg, ax ;~ 0AA7:1F0F
cs=0xaa7;eip=0x001f12; 	J(RETN(0));	// 23407 retn ;~ 0AA7:1F12
_f2_draw_waves2:
	// 23414 
cs=0xaa7;eip=0x001f13; 	T(MOV(ax, 0x0A000));	// 23416 mov     ax, 0A000h ;~ 0AA7:1F13
cs=0xaa7;eip=0x001f16; 	T(MOV(es, ax));	// 23417 mov     es, ax ;~ 0AA7:1F16
cs=0xaa7;eip=0x001f18; 	T(MOV(fs, _buffer_1seg));	// 23418 mov     fs, _buffer_1seg ;~ 0AA7:1F18
cs=0xaa7;eip=0x001f1c; 	T(MOV(gs, _buffer_2seg));	// 23419 mov     gs, _buffer_2seg ;~ 0AA7:1F1C
cs=0xaa7;eip=0x001f20; 	T(MOV(di, offset(dseg,_x_storage)));	// 23420 mov     di, offset _x_storage ;~ 0AA7:1F20
cs=0xaa7;eip=0x001f23; 	T(XOR(si, si));	// 23421 xor     si, si ;~ 0AA7:1F23
cs=0xaa7;eip=0x001f25; 	T(MOV(cx, _amount_of_x));	// 23422 mov     cx, _amount_of_x ;~ 0AA7:1F25
loc_1af79:
	// 5825 
cs=0xaa7;eip=0x001f29; 	X(PUSH(cx));	// 23425 push    cx ;~ 0AA7:1F29
cs=0xaa7;eip=0x001f2a; 	X(PUSH(si));	// 23426 push    si ;~ 0AA7:1F2A
cs=0xaa7;eip=0x001f2b; 	X(PUSH(di));	// 23427 push    di ;~ 0AA7:1F2B
cs=0xaa7;eip=0x001f2c; 	T(MOV(bp, *(dw*)(raddr(ds,di))));	// 23428 mov     bp, [di] ;~ 0AA7:1F2C
cs=0xaa7;eip=0x001f2e; 	T(MOV(dx, 0x3CE));	// 23429 mov     dx, 3CEh ;~ 0AA7:1F2E
cs=0xaa7;eip=0x001f31; 	T(MOV(al, 8));	// 23430 mov     al, 8 ;~ 0AA7:1F31
cs=0xaa7;eip=0x001f33; 	S(OUT(dx, al));	// 23431 out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 0AA7:1F33
cs=0xaa7;eip=0x001f34; 	T(MOV(al, 0x80));	// 23434 mov     al, 10000000b ;~ 0AA7:1F34
loc_1af86:
	// 5826 
cs=0xaa7;eip=0x001f36; 	T(MOV(ah, 37));	// 23437 mov     ah, 37 ;~ 0AA7:1F36
cs=0xaa7;eip=0x001f38; 	T(MOV(dx, 0x3CF));	// 23438 mov     dx, 3CFh ;~ 0AA7:1F38
cs=0xaa7;eip=0x001f3b; 	S(OUT(dx, al));	// 23439 out     dx, al          ; EGA port: graphics controller data register ;~ 0AA7:1F3B
cs=0xaa7;eip=0x001f3c; 	T(MOV(bx, bp));	// 23440 mov     bx, bp ;~ 0AA7:1F3C
loc_1af8e:
	// 5827 
cs=0xaa7;eip=0x001f3e; 	X(MOVSX(di, *(raddr(gs,si))));	// 23443 movsx   di, byte ptr gs:[si] ;~ 0AA7:1F3E
cs=0xaa7;eip=0x001f42; 	T(NEG(di));	// 23444 neg     di ;~ 0AA7:1F42
cs=0xaa7;eip=0x001f44; 	T(MOV(cx, di));	// 23445 mov     cx, di ;~ 0AA7:1F44
cs=0xaa7;eip=0x001f46; 	T(SHL(di, 6));	// 23446 shl     di, 6 ;~ 0AA7:1F46
cs=0xaa7;eip=0x001f49; 	T(SHL(cx, 4));	// 23447 shl     cx, 4 ;~ 0AA7:1F49
cs=0xaa7;eip=0x001f4c; 	T(ADD(di, cx));	// 23448 add     di, cx ;~ 0AA7:1F4C
cs=0xaa7;eip=0x001f4e; 	T(cx = bx+di);	// 23449 lea     cx, [bx+di] ;~ 0AA7:1F4E
cs=0xaa7;eip=0x001f50; 	T(OR(cx, cx));	// 23450 or      cx, cx ;~ 0AA7:1F50
cs=0xaa7;eip=0x001f52; 	J(JS(loc_1afae));	// 23451 js      short loc_1AFAE ;~ 0AA7:1F52
cs=0xaa7;eip=0x001f54; 	T(CMP(cx, 22400));	// 23452 cmp     cx, 22400 ;~ 0AA7:1F54
cs=0xaa7;eip=0x001f58; 	J(JNC(loc_1afae));	// 23453 jnb     short loc_1AFAE ;~ 0AA7:1F58
cs=0xaa7;eip=0x001f5a; 	X(AND(*(raddr(es,bx+di)), 0x7));	// 23454 and     byte ptr es:[bx+di], 111b ;~ 0AA7:1F5A
loc_1afae:
	// 5828 
cs=0xaa7;eip=0x001f5e; 	T(ADD(si, 8));	// 23458 add     si, 8 ;~ 0AA7:1F5E
cs=0xaa7;eip=0x001f61; 	T(INC(bx));	// 23459 inc     bx ;~ 0AA7:1F61
cs=0xaa7;eip=0x001f62; 	T(DEC(ah));	// 23460 dec     ah ;~ 0AA7:1F62
cs=0xaa7;eip=0x001f64; 	J(JNZ(loc_1af8e));	// 23461 jnz     short loc_1AF8E ;~ 0AA7:1F64
cs=0xaa7;eip=0x001f66; 	T(SUB(si, 0x128));	// 23462 sub     si, 128h ;~ 0AA7:1F66
cs=0xaa7;eip=0x001f6a; 	T(INC(si));	// 23463 inc     si ;~ 0AA7:1F6A
cs=0xaa7;eip=0x001f6b; 	T(SHR(al, 1));	// 23464 shr     al, 1 ;~ 0AA7:1F6B
cs=0xaa7;eip=0x001f6d; 	J(JNC(loc_1af86));	// 23465 jnb     short loc_1AF86 ;~ 0AA7:1F6D
cs=0xaa7;eip=0x001f6f; 	X(POP(di));	// 23466 pop     di ;~ 0AA7:1F6F
cs=0xaa7;eip=0x001f70; 	X(POP(si));	// 23467 pop     si ;~ 0AA7:1F70
cs=0xaa7;eip=0x001f71; 	X(POP(cx));	// 23468 pop     cx ;~ 0AA7:1F71
cs=0xaa7;eip=0x001f72; 	T(ADD(si, 0x128));	// 23469 add     si, 128h ;~ 0AA7:1F72
cs=0xaa7;eip=0x001f76; 	T(ADD(di, 2));	// 23470 add     di, 2 ;~ 0AA7:1F76
cs=0xaa7;eip=0x001f79; 	T(DEC(cx));	// 23471 dec     cx ;~ 0AA7:1F79
cs=0xaa7;eip=0x001f7a; 	J(JNZ(loc_1af79));	// 23472 jnz     short loc_1AF79 ;~ 0AA7:1F7A
cs=0xaa7;eip=0x001f7c; 	J(JMP(loc_1ae7e));	// 23473 jmp     loc_1AE7E ;~ 0AA7:1F7C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_f2_draw_waves: 	goto _f2_draw_waves;
        case m2c::k_f2_draw_waves2: 	goto _f2_draw_waves2;
        case m2c::k_f2_waves: 	goto _f2_waves;
        case m2c::k_init_vga_waves: 	goto _init_vga_waves;
        case m2c::k_lc_next_meter: 	goto _lc_next_meter;
        case m2c::k_lc_next_x8: 	goto _lc_next_x8;
        case m2c::k_lc_nextvideobit: 	goto _lc_nextvideobit;
        case m2c::kloc_1ade0: 	goto loc_1ade0;
        case m2c::kloc_1ade2: 	goto loc_1ade2;
        case m2c::kloc_1ade7: 	goto loc_1ade7;
        case m2c::kloc_1adf0: 	goto loc_1adf0;
        case m2c::kloc_1adf6: 	goto loc_1adf6;
        case m2c::kloc_1ae05: 	goto loc_1ae05;
        case m2c::kloc_1ae0c: 	goto loc_1ae0c;
        case m2c::kloc_1ae11: 	goto loc_1ae11;
        case m2c::kloc_1ae16: 	goto loc_1ae16;
        case m2c::kloc_1ae3a: 	goto loc_1ae3a;
        case m2c::kloc_1ae46: 	goto loc_1ae46;
        case m2c::kloc_1ae5e: 	goto loc_1ae5e;
        case m2c::kloc_1ae66: 	goto loc_1ae66;
        case m2c::kloc_1ae7e: 	goto loc_1ae7e;
        case m2c::kloc_1aeb2: 	goto loc_1aeb2;
        case m2c::kloc_1af1e: 	goto loc_1af1e;
        case m2c::kloc_1af3a: 	goto loc_1af3a;
        case m2c::kloc_1af79: 	goto loc_1af79;
        case m2c::kloc_1af86: 	goto loc_1af86;
        case m2c::kloc_1af8e: 	goto loc_1af8e;
        case m2c::kloc_1afae: 	goto loc_1afae;
        case m2c::kseg001_1ddd_proc: 	goto seg001_1ddd_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group36(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group36:
    _begin:
_f5_graphspectr:
	// 22035 
cs=0xaa7;eip=0x00141a; 	X(MOV(off_1de3c, m2c::k_init_f5_spectr));	// 22037 mov     off_1DE3C, offset _init_f5_spectr ;~ 0AA7:141A
cs=0xaa7;eip=0x001420; 	X(MOV(_offs_draw, m2c::k_f5_draw_spectr));	// 22038 mov     _offs_draw, offset _f5_draw_spectr ;~ 0AA7:1420
cs=0xaa7;eip=0x001426; 	X(MOV(_offs_draw2, m2c::k_f5_draw_spectr));	// 22039 mov     _offs_draw2, offset _f5_draw_spectr ;~ 0AA7:1426
cs=0xaa7;eip=0x00142c; 	X(MOV(off_1de42, m2c::k_init_f5_spectr));	// 22040 mov     off_1DE42, offset _init_f5_spectr ;~ 0AA7:142C
cs=0xaa7;eip=0x001432; 	J(CALL(_init_f5_spectr,0));	// 22041 call    _init_f5_spectr ;~ 0AA7:1432
cs=0xaa7;eip=0x001435; 	J(RETN(0));	// 22042 retn ;~ 0AA7:1435
_init_f5_spectr:
	// 23480 
cs=0xaa7;eip=0x001f7f; 	T(CMP(byte_1de70, 4));	// 23482 cmp     byte_1DE70, 4 ;~ 0AA7:1F7F
cs=0xaa7;eip=0x001f84; 	J(JZ(locret_1b083));	// 23483 jz      locret_1B083 ;~ 0AA7:1F84
cs=0xaa7;eip=0x001f88; 	X(MOV(byte_1de70, 4));	// 23484 mov     byte_1DE70, 4 ;~ 0AA7:1F88
cs=0xaa7;eip=0x001f8d; 	T(MOV(ax, 0x13));	// 23485 mov     ax, 13h ;~ 0AA7:1F8D
cs=0xaa7;eip=0x001f90; 	S(_INT(0x10));	// 23486 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 0AA7:1F90
cs=0xaa7;eip=0x001f92; 	J(CALL(_set_egasequencer,0));	// 23488 call    _set_egasequencer ;~ 0AA7:1F92
cs=0xaa7;eip=0x001f95; 	T(MOV(dx, 0x3C8));	// 23489 mov     dx, 3C8h ;~ 0AA7:1F95
cs=0xaa7;eip=0x001f98; 	T(XOR(al, al));	// 23490 xor     al, al ;~ 0AA7:1F98
cs=0xaa7;eip=0x001f9a; 	S(OUT(dx, al));	// 23491 out     dx, al ;~ 0AA7:1F9A
cs=0xaa7;eip=0x001f9b; 	J({;});	// 23492 jmp     short $+2 ;~ 0AA7:1F9B
loc_1afed:
	// 5829 
cs=0xaa7;eip=0x001f9d; 	J({;});	// 23496 jmp     short $+2 ;~ 0AA7:1F9D
loc_1afef:
	// 5830 
cs=0xaa7;eip=0x001f9f; 	T(INC(dx));	// 23500 inc     dx ;~ 0AA7:1F9F
cs=0xaa7;eip=0x001fa0; 	S(OUT(dx, al));	// 23501 out     dx, al ;~ 0AA7:1FA0
cs=0xaa7;eip=0x001fa1; 	J({;});	// 23502 jmp     short $+2 ;~ 0AA7:1FA1
loc_1aff3:
	// 5831 
cs=0xaa7;eip=0x001fa3; 	S(OUT(dx, al));	// 23506 out     dx, al ;~ 0AA7:1FA3
cs=0xaa7;eip=0x001fa4; 	J({;});	// 23507 jmp     short $+2 ;~ 0AA7:1FA4
loc_1aff6:
	// 5832 
cs=0xaa7;eip=0x001fa6; 	S(OUT(dx, al));	// 23511 out     dx, al ;~ 0AA7:1FA6
cs=0xaa7;eip=0x001fa7; 	J({;});	// 23512 jmp     short $+2 ;~ 0AA7:1FA7
loc_1aff9:
	// 5833 
cs=0xaa7;eip=0x001fa9; 	T(MOV(bp, 0x16C));	// 23516 mov     bp, 16Ch ;~ 0AA7:1FA9
cs=0xaa7;eip=0x001fac; 	T(XOR(bx, bx));	// 23517 xor     bx, bx ;~ 0AA7:1FAC
loc_1affe:
	// 5834 
cs=0xaa7;eip=0x001fae; 	T(MOV(al, bh));	// 23520 mov     al, bh ;~ 0AA7:1FAE
cs=0xaa7;eip=0x001fb0; 	S(OUT(dx, al));	// 23521 out     dx, al ;~ 0AA7:1FB0
cs=0xaa7;eip=0x001fb1; 	J({;});	// 23522 jmp     short $+2 ;~ 0AA7:1FB1
loc_1b003:
	// 5835 
cs=0xaa7;eip=0x001fb3; 	T(MOV(al, 0x3F));	// 23526 mov     al, 3Fh ; '?' ;~ 0AA7:1FB3
cs=0xaa7;eip=0x001fb5; 	S(OUT(dx, al));	// 23527 out     dx, al ;~ 0AA7:1FB5
cs=0xaa7;eip=0x001fb6; 	J({;});	// 23528 jmp     short $+2 ;~ 0AA7:1FB6
loc_1b008:
	// 5836 
cs=0xaa7;eip=0x001fb8; 	T(XOR(al, al));	// 23532 xor     al, al ;~ 0AA7:1FB8
cs=0xaa7;eip=0x001fba; 	S(OUT(dx, al));	// 23533 out     dx, al ;~ 0AA7:1FBA
cs=0xaa7;eip=0x001fbb; 	J({;});	// 23534 jmp     short $+2 ;~ 0AA7:1FBB
loc_1b00d:
	// 5837 
cs=0xaa7;eip=0x001fbd; 	T(ADD(bx, bp));	// 23538 add     bx, bp ;~ 0AA7:1FBD
cs=0xaa7;eip=0x001fbf; 	T(CMP(bh, 0x40));	// 23539 cmp     bh, 40h ; '@' ;~ 0AA7:1FBF
cs=0xaa7;eip=0x001fc2; 	J(JC(loc_1affe));	// 23540 jb      short loc_1AFFE ;~ 0AA7:1FC2
loc_1b014:
	// 5838 
cs=0xaa7;eip=0x001fc4; 	T(SUB(bx, bp));	// 23543 sub     bx, bp ;~ 0AA7:1FC4
cs=0xaa7;eip=0x001fc6; 	T(MOV(al, 0x3F));	// 23544 mov     al, 3Fh ; '?' ;~ 0AA7:1FC6
cs=0xaa7;eip=0x001fc8; 	S(OUT(dx, al));	// 23545 out     dx, al ;~ 0AA7:1FC8
cs=0xaa7;eip=0x001fc9; 	J({;});	// 23546 jmp     short $+2 ;~ 0AA7:1FC9
loc_1b01b:
	// 5839 
cs=0xaa7;eip=0x001fcb; 	T(MOV(al, bh));	// 23550 mov     al, bh ;~ 0AA7:1FCB
cs=0xaa7;eip=0x001fcd; 	S(OUT(dx, al));	// 23551 out     dx, al ;~ 0AA7:1FCD
cs=0xaa7;eip=0x001fce; 	J({;});	// 23552 jmp     short $+2 ;~ 0AA7:1FCE
loc_1b020:
	// 5840 
cs=0xaa7;eip=0x001fd0; 	T(XOR(al, al));	// 23556 xor     al, al ;~ 0AA7:1FD0
cs=0xaa7;eip=0x001fd2; 	S(OUT(dx, al));	// 23557 out     dx, al ;~ 0AA7:1FD2
cs=0xaa7;eip=0x001fd3; 	J({;});	// 23558 jmp     short $+2 ;~ 0AA7:1FD3
loc_1b025:
	// 5841 
cs=0xaa7;eip=0x001fd5; 	T(OR(bh, bh));	// 23562 or      bh, bh ;~ 0AA7:1FD5
cs=0xaa7;eip=0x001fd7; 	J(JNS(loc_1b014));	// 23563 jns     short loc_1B014 ;~ 0AA7:1FD7
cs=0xaa7;eip=0x001fd9; 	T(MOV(dx, 0x3C8));	// 23564 mov     dx, 3C8h ;~ 0AA7:1FD9
cs=0xaa7;eip=0x001fdc; 	T(MOV(al, 0x0FC));	// 23565 mov     al, 0FCh ; '
cs=0xaa7;eip=0x001fde; 	S(OUT(dx, al));	// 23566 out     dx, al ;~ 0AA7:1FDE
cs=0xaa7;eip=0x001fdf; 	J({;});	// 23567 jmp     short $+2 ;~ 0AA7:1FDF
loc_1b031:
	// 5842 
cs=0xaa7;eip=0x001fe1; 	J({;});	// 23571 jmp     short $+2 ;~ 0AA7:1FE1
loc_1b033:
	// 5843 
cs=0xaa7;eip=0x001fe3; 	T(INC(dx));	// 23575 inc     dx ;~ 0AA7:1FE3
cs=0xaa7;eip=0x001fe4; 	T(XOR(al, al));	// 23576 xor     al, al ;~ 0AA7:1FE4
cs=0xaa7;eip=0x001fe6; 	S(OUT(dx, al));	// 23577 out     dx, al ;~ 0AA7:1FE6
cs=0xaa7;eip=0x001fe7; 	J({;});	// 23578 jmp     short $+2 ;~ 0AA7:1FE7
loc_1b039:
	// 5844 
cs=0xaa7;eip=0x001fe9; 	S(OUT(dx, al));	// 23582 out     dx, al ;~ 0AA7:1FE9
cs=0xaa7;eip=0x001fea; 	J({;});	// 23583 jmp     short $+2 ;~ 0AA7:1FEA
loc_1b03c:
	// 5845 
cs=0xaa7;eip=0x001fec; 	S(OUT(dx, al));	// 23587 out     dx, al ;~ 0AA7:1FEC
cs=0xaa7;eip=0x001fed; 	J({;});	// 23588 jmp     short $+2 ;~ 0AA7:1FED
loc_1b03f:
	// 5846 
cs=0xaa7;eip=0x001fef; 	T(MOV(al, 0x10));	// 23592 mov     al, 10h ;~ 0AA7:1FEF
cs=0xaa7;eip=0x001ff1; 	S(OUT(dx, al));	// 23593 out     dx, al ;~ 0AA7:1FF1
cs=0xaa7;eip=0x001ff2; 	J({;});	// 23594 jmp     short $+2 ;~ 0AA7:1FF2
loc_1b044:
	// 5847 
cs=0xaa7;eip=0x001ff4; 	S(OUT(dx, al));	// 23598 out     dx, al ;~ 0AA7:1FF4
cs=0xaa7;eip=0x001ff5; 	J({;});	// 23599 jmp     short $+2 ;~ 0AA7:1FF5
loc_1b047:
	// 5848 
cs=0xaa7;eip=0x001ff7; 	T(MOV(al, 0x30));	// 23603 mov     al, 30h ; '0' ;~ 0AA7:1FF7
cs=0xaa7;eip=0x001ff9; 	S(OUT(dx, al));	// 23604 out     dx, al ;~ 0AA7:1FF9
cs=0xaa7;eip=0x001ffa; 	J({;});	// 23605 jmp     short $+2 ;~ 0AA7:1FFA
loc_1b04c:
	// 5849 
cs=0xaa7;eip=0x001ffc; 	T(MOV(al, 0x10));	// 23609 mov     al, 10h ;~ 0AA7:1FFC
cs=0xaa7;eip=0x001ffe; 	S(OUT(dx, al));	// 23610 out     dx, al ;~ 0AA7:1FFE
cs=0xaa7;eip=0x001fff; 	J({;});	// 23611 jmp     short $+2 ;~ 0AA7:1FFF
loc_1b051:
	// 5850 
cs=0xaa7;eip=0x002001; 	S(OUT(dx, al));	// 23615 out     dx, al ;~ 0AA7:2001
cs=0xaa7;eip=0x002002; 	J({;});	// 23616 jmp     short $+2 ;~ 0AA7:2002
loc_1b054:
	// 5851 
cs=0xaa7;eip=0x002004; 	S(OUT(dx, al));	// 23620 out     dx, al ;~ 0AA7:2004
cs=0xaa7;eip=0x002005; 	J({;});	// 23621 jmp     short $+2 ;~ 0AA7:2005
loc_1b057:
	// 5852 
cs=0xaa7;eip=0x002007; 	T(MOV(al, 0x3F));	// 23625 mov     al, 3Fh ; '?' ;~ 0AA7:2007
cs=0xaa7;eip=0x002009; 	S(OUT(dx, al));	// 23626 out     dx, al ;~ 0AA7:2009
cs=0xaa7;eip=0x00200a; 	J({;});	// 23627 jmp     short $+2 ;~ 0AA7:200A
loc_1b05c:
	// 5853 
cs=0xaa7;eip=0x00200c; 	S(OUT(dx, al));	// 23631 out     dx, al ;~ 0AA7:200C
cs=0xaa7;eip=0x00200d; 	J({;});	// 23632 jmp     short $+2 ;~ 0AA7:200D
loc_1b05f:
	// 5854 
cs=0xaa7;eip=0x00200f; 	S(OUT(dx, al));	// 23636 out     dx, al ;~ 0AA7:200F
cs=0xaa7;eip=0x002010; 	J(CALL(_graph_1c070,0));	// 23637 call    _graph_1C070 ;~ 0AA7:2010
cs=0xaa7;eip=0x002013; 	T(MOV(ax, ds));	// 23638 mov     ax, ds ;~ 0AA7:2013
cs=0xaa7;eip=0x002015; 	T(MOV(es, ax));	// 23639 mov     es, ax ;~ 0AA7:2015
cs=0xaa7;eip=0x002017; 	T(MOV(di, offset(dseg,unk_23ee4)));	// 23641 mov     di, offset unk_23EE4 ;~ 0AA7:2017
cs=0xaa7;eip=0x00201a; 	T(MOV(cx, 0x0C8));	// 23642 mov     cx, 0C8h ; '
cs=0xaa7;eip=0x00201d; 	T(XOR(eax, eax));	// 23643 xor     eax, eax ;~ 0AA7:201D
cs=0xaa7;eip=0x002020; 	T(CLD);	// 23644 cld ;~ 0AA7:2020
	// 23645 rep stosd ;~ 0AA7:2021
cs=0xaa7;eip=0x002021; 	X(	REP STOSD);	// 23645 rep stosd ;~ 0AA7:2021
cs=0xaa7;eip=0x002024; 	T(MOV(ax, 0x200));	// 23646 mov     ax, 200h ;~ 0AA7:2024
cs=0xaa7;eip=0x002027; 	T(TEST(*(db*)(((db*)&_configword)), 8));	// 23647 test    byte ptr _configword, 8 ;~ 0AA7:2027
cs=0xaa7;eip=0x00202c; 	J(JNZ(loc_1b080));	// 23648 jnz     short loc_1B080 ;~ 0AA7:202C
cs=0xaa7;eip=0x00202e; 	T(SHR(ax, 1));	// 23649 shr     ax, 1 ;~ 0AA7:202E
loc_1b080:
	// 5855 
cs=0xaa7;eip=0x002030; 	X(MOV(word_24524, ax));	// 23652 mov     word_24524, ax ;~ 0AA7:2030
locret_1b083:
	// 5856 
cs=0xaa7;eip=0x002033; 	J(RETN(0));	// 23655 retn ;~ 0AA7:2033
_f5_draw_spectr:
	// 24096 
cs=0xaa7;eip=0x002578; 	T(MOV(ax, ds));	// 24098 mov     ax, ds ;~ 0AA7:2578
cs=0xaa7;eip=0x00257a; 	T(MOV(es, ax));	// 24099 mov     es, ax ;~ 0AA7:257A
cs=0xaa7;eip=0x00257c; 	T(MOV(di, offset(dseg,_buffer_1)));	// 24100 mov     di, offset _buffer_1 ; 2800h ;~ 0AA7:257C
cs=0xaa7;eip=0x00257f; 	T(MOV(cx, 0x200));	// 24101 mov     cx, 200h ;~ 0AA7:257F
cs=0xaa7;eip=0x002582; 	T(MOV(ax, 0x4001));	// 24102 mov     ax, 4001h ;~ 0AA7:2582
cs=0xaa7;eip=0x002585; 	J(CALLF(_volume_prep,0));	// 24103 call    _volume_prep ;~ 0AA7:2585
cs=0xaa7;eip=0x00258a; 	T(LFS(bx, _segfsbx_1de28));	// 24104 lfs     bx, _segfsbx_1DE28 ;~ 0AA7:258A
cs=0xaa7;eip=0x00258f; 	T(MOV(si, offset(dseg,_buffer_1)));	// 24105 mov     si, offset _buffer_1 ; 2800h ;~ 0AA7:258F
cs=0xaa7;eip=0x002592; 	T(MOV(di, offset(dseg,byte_24204)));	// 24106 mov     di, offset byte_24204 ;~ 0AA7:2592
cs=0xaa7;eip=0x002595; 	T(MOV(bp, _amount_of_x));	// 24107 mov     bp, _amount_of_x ;~ 0AA7:2595
cs=0xaa7;eip=0x002599; 	T(XCHG(bx, bx));	// 24108 xchg    bx, bx ;~ 0AA7:2599
cs=0xaa7;eip=0x00259b; 	T(NOP);	// 24109 nop ;~ 0AA7:259B
loc_1b5ec:
	// 5870 
cs=0xaa7;eip=0x00259c; 	T(MOV(cx, bp));	// 24112 mov     cx, bp ;~ 0AA7:259C
cs=0xaa7;eip=0x00259e; 	T(XOR(dx, dx));	// 24113 xor     dx, dx ;~ 0AA7:259E
cs=0xaa7;eip=0x0025a0; 	T(CMP(*(raddr(fs,bx+0x3A)), 64));	// 24114 cmp     byte ptr fs:[bx+3Ah], 64 ;~ 0AA7:25A0
cs=0xaa7;eip=0x0025a5; 	J(JA(loc_1b5fc));	// 24115 ja      short loc_1B5FC ;~ 0AA7:25A5
cs=0xaa7;eip=0x0025a7; 	T(MOV(al, *(raddr(ds,si))));	// 24116 mov     al, [si] ;~ 0AA7:25A7
cs=0xaa7;eip=0x0025a9; 	T(CBW);	// 24117 cbw ;~ 0AA7:25A9
cs=0xaa7;eip=0x0025aa; 	T(ADD(dx, ax));	// 24118 add     dx, ax ;~ 0AA7:25AA
loc_1b5fc:
	// 5871 
cs=0xaa7;eip=0x0025ac; 	T(DEC(cx));	// 24121 dec     cx ;~ 0AA7:25AC
cs=0xaa7;eip=0x0025ad; 	J(JZ(loc_1b85f));	// 24122 jz      loc_1B85F ;~ 0AA7:25AD
cs=0xaa7;eip=0x0025b1; 	T(CMP(*(raddr(fs,bx+0x8A)), 64));	// 24123 cmp     byte ptr fs:[bx+8Ah], 64 ;~ 0AA7:25B1
cs=0xaa7;eip=0x0025b7; 	J(JA(loc_1b610));	// 24124 ja      short loc_1B610 ;~ 0AA7:25B7
cs=0xaa7;eip=0x0025b9; 	T(MOV(al, *(raddr(ds,si+0x200))));	// 24125 mov     al, [si+200h] ;~ 0AA7:25B9
cs=0xaa7;eip=0x0025bd; 	T(CBW);	// 24126 cbw ;~ 0AA7:25BD
cs=0xaa7;eip=0x0025be; 	T(ADD(dx, ax));	// 24127 add     dx, ax ;~ 0AA7:25BE
loc_1b610:
	// 5872 
cs=0xaa7;eip=0x0025c0; 	T(DEC(cx));	// 24130 dec     cx ;~ 0AA7:25C0
cs=0xaa7;eip=0x0025c1; 	J(JZ(loc_1b85f));	// 24131 jz      loc_1B85F ;~ 0AA7:25C1
cs=0xaa7;eip=0x0025c5; 	T(CMP(*(raddr(fs,bx+0x0DA)), 64));	// 24132 cmp     byte ptr fs:[bx+0DAh], 64 ;~ 0AA7:25C5
cs=0xaa7;eip=0x0025cb; 	J(JA(loc_1b624));	// 24133 ja      short loc_1B624 ;~ 0AA7:25CB
cs=0xaa7;eip=0x0025cd; 	T(MOV(al, *(raddr(ds,si+0x400))));	// 24134 mov     al, [si+400h] ;~ 0AA7:25CD
cs=0xaa7;eip=0x0025d1; 	T(CBW);	// 24135 cbw ;~ 0AA7:25D1
cs=0xaa7;eip=0x0025d2; 	T(ADD(dx, ax));	// 24136 add     dx, ax ;~ 0AA7:25D2
loc_1b624:
	// 5873 
cs=0xaa7;eip=0x0025d4; 	T(DEC(cx));	// 24139 dec     cx ;~ 0AA7:25D4
cs=0xaa7;eip=0x0025d5; 	J(JZ(loc_1b85f));	// 24140 jz      loc_1B85F ;~ 0AA7:25D5
cs=0xaa7;eip=0x0025d9; 	T(CMP(*(raddr(fs,bx+0x12A)), 64));	// 24141 cmp     byte ptr fs:[bx+12Ah], 64 ;~ 0AA7:25D9
cs=0xaa7;eip=0x0025df; 	J(JA(loc_1b638));	// 24142 ja      short loc_1B638 ;~ 0AA7:25DF
cs=0xaa7;eip=0x0025e1; 	T(MOV(al, *(raddr(ds,si+0x600))));	// 24143 mov     al, [si+600h] ;~ 0AA7:25E1
cs=0xaa7;eip=0x0025e5; 	T(CBW);	// 24144 cbw ;~ 0AA7:25E5
cs=0xaa7;eip=0x0025e6; 	T(ADD(dx, ax));	// 24145 add     dx, ax ;~ 0AA7:25E6
loc_1b638:
	// 5874 
cs=0xaa7;eip=0x0025e8; 	T(DEC(cx));	// 24148 dec     cx ;~ 0AA7:25E8
cs=0xaa7;eip=0x0025e9; 	J(JZ(loc_1b85f));	// 24149 jz      loc_1B85F ;~ 0AA7:25E9
cs=0xaa7;eip=0x0025ed; 	T(CMP(*(raddr(fs,bx+0x17A)), 64));	// 24150 cmp     byte ptr fs:[bx+17Ah], 64 ;~ 0AA7:25ED
cs=0xaa7;eip=0x0025f3; 	J(JA(loc_1b64c));	// 24151 ja      short loc_1B64C ;~ 0AA7:25F3
cs=0xaa7;eip=0x0025f5; 	T(MOV(al, *(raddr(ds,si+0x800))));	// 24152 mov     al, [si+800h] ;~ 0AA7:25F5
cs=0xaa7;eip=0x0025f9; 	T(CBW);	// 24153 cbw ;~ 0AA7:25F9
cs=0xaa7;eip=0x0025fa; 	T(ADD(dx, ax));	// 24154 add     dx, ax ;~ 0AA7:25FA
loc_1b64c:
	// 5875 
cs=0xaa7;eip=0x0025fc; 	T(DEC(cx));	// 24157 dec     cx ;~ 0AA7:25FC
cs=0xaa7;eip=0x0025fd; 	J(JZ(loc_1b85f));	// 24158 jz      loc_1B85F ;~ 0AA7:25FD
cs=0xaa7;eip=0x002601; 	T(CMP(*(raddr(fs,bx+0x1CA)), 64));	// 24159 cmp     byte ptr fs:[bx+1CAh], 64 ;~ 0AA7:2601
cs=0xaa7;eip=0x002607; 	J(JA(loc_1b660));	// 24160 ja      short loc_1B660 ;~ 0AA7:2607
cs=0xaa7;eip=0x002609; 	T(MOV(al, *(raddr(ds,si+0x0A00))));	// 24161 mov     al, [si+0A00h] ;~ 0AA7:2609
cs=0xaa7;eip=0x00260d; 	T(CBW);	// 24162 cbw ;~ 0AA7:260D
cs=0xaa7;eip=0x00260e; 	T(ADD(dx, ax));	// 24163 add     dx, ax ;~ 0AA7:260E
loc_1b660:
	// 5876 
cs=0xaa7;eip=0x002610; 	T(DEC(cx));	// 24166 dec     cx ;~ 0AA7:2610
cs=0xaa7;eip=0x002611; 	J(JZ(loc_1b85f));	// 24167 jz      loc_1B85F ;~ 0AA7:2611
cs=0xaa7;eip=0x002615; 	T(CMP(*(raddr(fs,bx+0x21A)), 64));	// 24168 cmp     byte ptr fs:[bx+21Ah], 64 ;~ 0AA7:2615
cs=0xaa7;eip=0x00261b; 	J(JA(loc_1b674));	// 24169 ja      short loc_1B674 ;~ 0AA7:261B
cs=0xaa7;eip=0x00261d; 	T(MOV(al, *(raddr(ds,si+0x0C00))));	// 24170 mov     al, [si+0C00h] ;~ 0AA7:261D
cs=0xaa7;eip=0x002621; 	T(CBW);	// 24171 cbw ;~ 0AA7:2621
cs=0xaa7;eip=0x002622; 	T(ADD(dx, ax));	// 24172 add     dx, ax ;~ 0AA7:2622
loc_1b674:
	// 5877 
cs=0xaa7;eip=0x002624; 	T(DEC(cx));	// 24175 dec     cx ;~ 0AA7:2624
cs=0xaa7;eip=0x002625; 	J(JZ(loc_1b85f));	// 24176 jz      loc_1B85F ;~ 0AA7:2625
cs=0xaa7;eip=0x002629; 	T(CMP(*(raddr(fs,bx+0x26A)), 64));	// 24177 cmp     byte ptr fs:[bx+26Ah], 64 ;~ 0AA7:2629
cs=0xaa7;eip=0x00262f; 	J(JA(loc_1b688));	// 24178 ja      short loc_1B688 ;~ 0AA7:262F
cs=0xaa7;eip=0x002631; 	T(MOV(al, *(raddr(ds,si+0x0E00))));	// 24179 mov     al, [si+0E00h] ;~ 0AA7:2631
cs=0xaa7;eip=0x002635; 	T(CBW);	// 24180 cbw ;~ 0AA7:2635
cs=0xaa7;eip=0x002636; 	T(ADD(dx, ax));	// 24181 add     dx, ax ;~ 0AA7:2636
loc_1b688:
	// 5878 
cs=0xaa7;eip=0x002638; 	T(DEC(cx));	// 24184 dec     cx ;~ 0AA7:2638
cs=0xaa7;eip=0x002639; 	J(JZ(loc_1b85f));	// 24185 jz      loc_1B85F ;~ 0AA7:2639
cs=0xaa7;eip=0x00263d; 	T(CMP(*(raddr(fs,bx+0x2BA)), 64));	// 24186 cmp     byte ptr fs:[bx+2BAh], 64 ;~ 0AA7:263D
cs=0xaa7;eip=0x002643; 	J(JA(loc_1b69c));	// 24187 ja      short loc_1B69C ;~ 0AA7:2643
cs=0xaa7;eip=0x002645; 	T(MOV(al, *(raddr(ds,si+0x1000))));	// 24188 mov     al, [si+1000h] ;~ 0AA7:2645
cs=0xaa7;eip=0x002649; 	T(CBW);	// 24189 cbw ;~ 0AA7:2649
cs=0xaa7;eip=0x00264a; 	T(ADD(dx, ax));	// 24190 add     dx, ax ;~ 0AA7:264A
loc_1b69c:
	// 5879 
cs=0xaa7;eip=0x00264c; 	T(DEC(cx));	// 24193 dec     cx ;~ 0AA7:264C
cs=0xaa7;eip=0x00264d; 	J(JZ(loc_1b85f));	// 24194 jz      loc_1B85F ;~ 0AA7:264D
cs=0xaa7;eip=0x002651; 	T(CMP(*(raddr(fs,bx+0x30A)), 64));	// 24195 cmp     byte ptr fs:[bx+30Ah], 64 ;~ 0AA7:2651
cs=0xaa7;eip=0x002657; 	J(JA(loc_1b6b0));	// 24196 ja      short loc_1B6B0 ;~ 0AA7:2657
cs=0xaa7;eip=0x002659; 	T(MOV(al, *(raddr(ds,si+0x1200))));	// 24197 mov     al, [si+1200h] ;~ 0AA7:2659
cs=0xaa7;eip=0x00265d; 	T(CBW);	// 24198 cbw ;~ 0AA7:265D
cs=0xaa7;eip=0x00265e; 	T(ADD(dx, ax));	// 24199 add     dx, ax ;~ 0AA7:265E
loc_1b6b0:
	// 5880 
cs=0xaa7;eip=0x002660; 	T(DEC(cx));	// 24202 dec     cx ;~ 0AA7:2660
cs=0xaa7;eip=0x002661; 	J(JZ(loc_1b85f));	// 24203 jz      loc_1B85F ;~ 0AA7:2661
cs=0xaa7;eip=0x002665; 	T(CMP(*(raddr(fs,bx+0x35A)), 64));	// 24204 cmp     byte ptr fs:[bx+35Ah], 64 ;~ 0AA7:2665
cs=0xaa7;eip=0x00266b; 	J(JA(loc_1b6c4));	// 24205 ja      short loc_1B6C4 ;~ 0AA7:266B
cs=0xaa7;eip=0x00266d; 	T(MOV(al, *(raddr(ds,si+0x1400))));	// 24206 mov     al, [si+1400h] ;~ 0AA7:266D
cs=0xaa7;eip=0x002671; 	T(CBW);	// 24207 cbw ;~ 0AA7:2671
cs=0xaa7;eip=0x002672; 	T(ADD(dx, ax));	// 24208 add     dx, ax ;~ 0AA7:2672
loc_1b6c4:
	// 5881 
cs=0xaa7;eip=0x002674; 	T(DEC(cx));	// 24211 dec     cx ;~ 0AA7:2674
cs=0xaa7;eip=0x002675; 	J(JZ(loc_1b85f));	// 24212 jz      loc_1B85F ;~ 0AA7:2675
cs=0xaa7;eip=0x002679; 	T(CMP(*(raddr(fs,bx+0x3AA)), 64));	// 24213 cmp     byte ptr fs:[bx+3AAh], 64 ;~ 0AA7:2679
cs=0xaa7;eip=0x00267f; 	J(JA(loc_1b6d8));	// 24214 ja      short loc_1B6D8 ;~ 0AA7:267F
cs=0xaa7;eip=0x002681; 	T(MOV(al, *(raddr(ds,si+0x1600))));	// 24215 mov     al, [si+1600h] ;~ 0AA7:2681
cs=0xaa7;eip=0x002685; 	T(CBW);	// 24216 cbw ;~ 0AA7:2685
cs=0xaa7;eip=0x002686; 	T(ADD(dx, ax));	// 24217 add     dx, ax ;~ 0AA7:2686
loc_1b6d8:
	// 5882 
cs=0xaa7;eip=0x002688; 	T(DEC(cx));	// 24220 dec     cx ;~ 0AA7:2688
cs=0xaa7;eip=0x002689; 	J(JZ(loc_1b85f));	// 24221 jz      loc_1B85F ;~ 0AA7:2689
cs=0xaa7;eip=0x00268d; 	T(CMP(*(raddr(fs,bx+0x3FA)), 64));	// 24222 cmp     byte ptr fs:[bx+3FAh], 64 ;~ 0AA7:268D
cs=0xaa7;eip=0x002693; 	J(JA(loc_1b6ec));	// 24223 ja      short loc_1B6EC ;~ 0AA7:2693
cs=0xaa7;eip=0x002695; 	T(MOV(al, *(raddr(ds,si+0x1800))));	// 24224 mov     al, [si+1800h] ;~ 0AA7:2695
cs=0xaa7;eip=0x002699; 	T(CBW);	// 24225 cbw ;~ 0AA7:2699
cs=0xaa7;eip=0x00269a; 	T(ADD(dx, ax));	// 24226 add     dx, ax ;~ 0AA7:269A
loc_1b6ec:
	// 5883 
cs=0xaa7;eip=0x00269c; 	T(DEC(cx));	// 24229 dec     cx ;~ 0AA7:269C
cs=0xaa7;eip=0x00269d; 	J(JZ(loc_1b85f));	// 24230 jz      loc_1B85F ;~ 0AA7:269D
cs=0xaa7;eip=0x0026a1; 	T(CMP(*(raddr(fs,bx+0x44A)), 64));	// 24231 cmp     byte ptr fs:[bx+44Ah], 64 ;~ 0AA7:26A1
cs=0xaa7;eip=0x0026a7; 	J(JA(loc_1b700));	// 24232 ja      short loc_1B700 ;~ 0AA7:26A7
cs=0xaa7;eip=0x0026a9; 	T(MOV(al, *(raddr(ds,si+0x1A00))));	// 24233 mov     al, [si+1A00h] ;~ 0AA7:26A9
cs=0xaa7;eip=0x0026ad; 	T(CBW);	// 24234 cbw ;~ 0AA7:26AD
cs=0xaa7;eip=0x0026ae; 	T(ADD(dx, ax));	// 24235 add     dx, ax ;~ 0AA7:26AE
loc_1b700:
	// 5884 
cs=0xaa7;eip=0x0026b0; 	T(DEC(cx));	// 24238 dec     cx ;~ 0AA7:26B0
cs=0xaa7;eip=0x0026b1; 	J(JZ(loc_1b85f));	// 24239 jz      loc_1B85F ;~ 0AA7:26B1
cs=0xaa7;eip=0x0026b5; 	T(CMP(*(raddr(fs,bx+0x49A)), 64));	// 24240 cmp     byte ptr fs:[bx+49Ah], 64 ;~ 0AA7:26B5
cs=0xaa7;eip=0x0026bb; 	J(JA(loc_1b714));	// 24241 ja      short loc_1B714 ;~ 0AA7:26BB
cs=0xaa7;eip=0x0026bd; 	T(MOV(al, *(raddr(ds,si+0x1C00))));	// 24242 mov     al, [si+1C00h] ;~ 0AA7:26BD
cs=0xaa7;eip=0x0026c1; 	T(CBW);	// 24243 cbw ;~ 0AA7:26C1
cs=0xaa7;eip=0x0026c2; 	T(ADD(dx, ax));	// 24244 add     dx, ax ;~ 0AA7:26C2
loc_1b714:
	// 5885 
cs=0xaa7;eip=0x0026c4; 	T(DEC(cx));	// 24247 dec     cx ;~ 0AA7:26C4
cs=0xaa7;eip=0x0026c5; 	J(JZ(loc_1b85f));	// 24248 jz      loc_1B85F ;~ 0AA7:26C5
cs=0xaa7;eip=0x0026c9; 	T(CMP(*(raddr(fs,bx+0x4EA)), 0x40));	// 24249 cmp     byte ptr fs:[bx+4EAh], 40h ; '@' ;~ 0AA7:26C9
cs=0xaa7;eip=0x0026cf; 	J(JA(loc_1b728));	// 24250 ja      short loc_1B728 ;~ 0AA7:26CF
cs=0xaa7;eip=0x0026d1; 	T(MOV(al, *(raddr(ds,si+0x1E00))));	// 24251 mov     al, [si+1E00h] ;~ 0AA7:26D1
cs=0xaa7;eip=0x0026d5; 	T(CBW);	// 24252 cbw ;~ 0AA7:26D5
cs=0xaa7;eip=0x0026d6; 	T(ADD(dx, ax));	// 24253 add     dx, ax ;~ 0AA7:26D6
loc_1b728:
	// 5886 
cs=0xaa7;eip=0x0026d8; 	T(DEC(cx));	// 24256 dec     cx ;~ 0AA7:26D8
cs=0xaa7;eip=0x0026d9; 	J(JZ(loc_1b85f));	// 24257 jz      loc_1B85F ;~ 0AA7:26D9
cs=0xaa7;eip=0x0026dd; 	T(CMP(*(raddr(fs,bx+0x53A)), 0x40));	// 24258 cmp     byte ptr fs:[bx+53Ah], 40h ; '@' ;~ 0AA7:26DD
cs=0xaa7;eip=0x0026e3; 	J(JA(loc_1b73c));	// 24259 ja      short loc_1B73C ;~ 0AA7:26E3
cs=0xaa7;eip=0x0026e5; 	T(MOV(al, *(raddr(ds,si+0x2000))));	// 24260 mov     al, [si+2000h] ;~ 0AA7:26E5
cs=0xaa7;eip=0x0026e9; 	T(CBW);	// 24261 cbw ;~ 0AA7:26E9
cs=0xaa7;eip=0x0026ea; 	T(ADD(dx, ax));	// 24262 add     dx, ax ;~ 0AA7:26EA
loc_1b73c:
	// 5887 
cs=0xaa7;eip=0x0026ec; 	T(DEC(cx));	// 24265 dec     cx ;~ 0AA7:26EC
cs=0xaa7;eip=0x0026ed; 	J(JZ(loc_1b85f));	// 24266 jz      loc_1B85F ;~ 0AA7:26ED
cs=0xaa7;eip=0x0026f1; 	T(CMP(*(raddr(fs,bx+0x58A)), 0x40));	// 24267 cmp     byte ptr fs:[bx+58Ah], 40h ; '@' ;~ 0AA7:26F1
cs=0xaa7;eip=0x0026f7; 	J(JA(loc_1b750));	// 24268 ja      short loc_1B750 ;~ 0AA7:26F7
cs=0xaa7;eip=0x0026f9; 	T(MOV(al, *(raddr(ds,si+0x2200))));	// 24269 mov     al, [si+2200h] ;~ 0AA7:26F9
cs=0xaa7;eip=0x0026fd; 	T(CBW);	// 24270 cbw ;~ 0AA7:26FD
cs=0xaa7;eip=0x0026fe; 	T(ADD(dx, ax));	// 24271 add     dx, ax ;~ 0AA7:26FE
loc_1b750:
	// 5888 
cs=0xaa7;eip=0x002700; 	T(DEC(cx));	// 24274 dec     cx ;~ 0AA7:2700
cs=0xaa7;eip=0x002701; 	J(JZ(loc_1b85f));	// 24275 jz      loc_1B85F ;~ 0AA7:2701
cs=0xaa7;eip=0x002705; 	T(CMP(*(raddr(fs,bx+0x5DA)), 0x40));	// 24276 cmp     byte ptr fs:[bx+5DAh], 40h ; '@' ;~ 0AA7:2705
cs=0xaa7;eip=0x00270b; 	J(JA(loc_1b764));	// 24277 ja      short loc_1B764 ;~ 0AA7:270B
cs=0xaa7;eip=0x00270d; 	T(MOV(al, *(raddr(ds,si+0x2400))));	// 24278 mov     al, [si+2400h] ;~ 0AA7:270D
cs=0xaa7;eip=0x002711; 	T(CBW);	// 24279 cbw ;~ 0AA7:2711
cs=0xaa7;eip=0x002712; 	T(ADD(dx, ax));	// 24280 add     dx, ax ;~ 0AA7:2712
loc_1b764:
	// 5889 
cs=0xaa7;eip=0x002714; 	T(DEC(cx));	// 24283 dec     cx ;~ 0AA7:2714
cs=0xaa7;eip=0x002715; 	J(JZ(loc_1b85f));	// 24284 jz      loc_1B85F ;~ 0AA7:2715
cs=0xaa7;eip=0x002719; 	T(CMP(*(raddr(fs,bx+0x62A)), 0x40));	// 24285 cmp     byte ptr fs:[bx+62Ah], 40h ; '@' ;~ 0AA7:2719
cs=0xaa7;eip=0x00271f; 	J(JA(loc_1b778));	// 24286 ja      short loc_1B778 ;~ 0AA7:271F
cs=0xaa7;eip=0x002721; 	T(MOV(al, *(raddr(ds,si+0x2600))));	// 24287 mov     al, [si+2600h] ;~ 0AA7:2721
cs=0xaa7;eip=0x002725; 	T(CBW);	// 24288 cbw ;~ 0AA7:2725
cs=0xaa7;eip=0x002726; 	T(ADD(dx, ax));	// 24289 add     dx, ax ;~ 0AA7:2726
loc_1b778:
	// 5890 
cs=0xaa7;eip=0x002728; 	T(DEC(cx));	// 24292 dec     cx ;~ 0AA7:2728
cs=0xaa7;eip=0x002729; 	J(JZ(loc_1b85f));	// 24293 jz      loc_1B85F ;~ 0AA7:2729
cs=0xaa7;eip=0x00272d; 	T(CMP(*(raddr(fs,bx+0x67A)), 0x40));	// 24294 cmp     byte ptr fs:[bx+67Ah], 40h ; '@' ;~ 0AA7:272D
cs=0xaa7;eip=0x002733; 	J(JA(loc_1b78c));	// 24295 ja      short loc_1B78C ;~ 0AA7:2733
cs=0xaa7;eip=0x002735; 	T(MOV(al, *(raddr(ds,si+0x2800))));	// 24296 mov     al, [si+2800h] ;~ 0AA7:2735
cs=0xaa7;eip=0x002739; 	T(CBW);	// 24297 cbw ;~ 0AA7:2739
cs=0xaa7;eip=0x00273a; 	T(ADD(dx, ax));	// 24298 add     dx, ax ;~ 0AA7:273A
loc_1b78c:
	// 5891 
cs=0xaa7;eip=0x00273c; 	T(DEC(cx));	// 24301 dec     cx ;~ 0AA7:273C
cs=0xaa7;eip=0x00273d; 	J(JZ(loc_1b85f));	// 24302 jz      loc_1B85F ;~ 0AA7:273D
cs=0xaa7;eip=0x002741; 	T(CMP(*(raddr(fs,bx+0x6CA)), 0x40));	// 24303 cmp     byte ptr fs:[bx+6CAh], 40h ; '@' ;~ 0AA7:2741
cs=0xaa7;eip=0x002747; 	J(JA(loc_1b7a0));	// 24304 ja      short loc_1B7A0 ;~ 0AA7:2747
cs=0xaa7;eip=0x002749; 	T(MOV(al, *(raddr(ds,si+0x2A00))));	// 24305 mov     al, [si+2A00h] ;~ 0AA7:2749
cs=0xaa7;eip=0x00274d; 	T(CBW);	// 24306 cbw ;~ 0AA7:274D
cs=0xaa7;eip=0x00274e; 	T(ADD(dx, ax));	// 24307 add     dx, ax ;~ 0AA7:274E
loc_1b7a0:
	// 5892 
cs=0xaa7;eip=0x002750; 	T(DEC(cx));	// 24310 dec     cx ;~ 0AA7:2750
cs=0xaa7;eip=0x002751; 	J(JZ(loc_1b85f));	// 24311 jz      loc_1B85F ;~ 0AA7:2751
cs=0xaa7;eip=0x002755; 	T(CMP(*(raddr(fs,bx+0x71A)), 0x40));	// 24312 cmp     byte ptr fs:[bx+71Ah], 40h ; '@' ;~ 0AA7:2755
cs=0xaa7;eip=0x00275b; 	J(JA(loc_1b7b4));	// 24313 ja      short loc_1B7B4 ;~ 0AA7:275B
cs=0xaa7;eip=0x00275d; 	T(MOV(al, *(raddr(ds,si+0x2C00))));	// 24314 mov     al, [si+2C00h] ;~ 0AA7:275D
cs=0xaa7;eip=0x002761; 	T(CBW);	// 24315 cbw ;~ 0AA7:2761
cs=0xaa7;eip=0x002762; 	T(ADD(dx, ax));	// 24316 add     dx, ax ;~ 0AA7:2762
loc_1b7b4:
	// 5893 
cs=0xaa7;eip=0x002764; 	T(DEC(cx));	// 24319 dec     cx ;~ 0AA7:2764
cs=0xaa7;eip=0x002765; 	J(JZ(loc_1b85f));	// 24320 jz      loc_1B85F ;~ 0AA7:2765
cs=0xaa7;eip=0x002769; 	T(CMP(*(raddr(fs,bx+0x76A)), 0x40));	// 24321 cmp     byte ptr fs:[bx+76Ah], 40h ; '@' ;~ 0AA7:2769
cs=0xaa7;eip=0x00276f; 	J(JA(loc_1b7c8));	// 24322 ja      short loc_1B7C8 ;~ 0AA7:276F
cs=0xaa7;eip=0x002771; 	T(MOV(al, *(raddr(ds,si+0x2E00))));	// 24323 mov     al, [si+2E00h] ;~ 0AA7:2771
cs=0xaa7;eip=0x002775; 	T(CBW);	// 24324 cbw ;~ 0AA7:2775
cs=0xaa7;eip=0x002776; 	T(ADD(dx, ax));	// 24325 add     dx, ax ;~ 0AA7:2776
loc_1b7c8:
	// 5894 
cs=0xaa7;eip=0x002778; 	T(DEC(cx));	// 24328 dec     cx ;~ 0AA7:2778
cs=0xaa7;eip=0x002779; 	J(JZ(loc_1b85f));	// 24329 jz      loc_1B85F ;~ 0AA7:2779
cs=0xaa7;eip=0x00277d; 	T(CMP(*(raddr(fs,bx+0x7BA)), 0x40));	// 24330 cmp     byte ptr fs:[bx+7BAh], 40h ; '@' ;~ 0AA7:277D
cs=0xaa7;eip=0x002783; 	J(JA(loc_1b7dc));	// 24331 ja      short loc_1B7DC ;~ 0AA7:2783
cs=0xaa7;eip=0x002785; 	T(MOV(al, *(raddr(ds,si+0x3000))));	// 24332 mov     al, [si+3000h] ;~ 0AA7:2785
cs=0xaa7;eip=0x002789; 	T(CBW);	// 24333 cbw ;~ 0AA7:2789
cs=0xaa7;eip=0x00278a; 	T(ADD(dx, ax));	// 24334 add     dx, ax ;~ 0AA7:278A
loc_1b7dc:
	// 5895 
cs=0xaa7;eip=0x00278c; 	T(DEC(cx));	// 24337 dec     cx ;~ 0AA7:278C
cs=0xaa7;eip=0x00278d; 	J(JZ(loc_1b85f));	// 24338 jz      loc_1B85F ;~ 0AA7:278D
cs=0xaa7;eip=0x002791; 	T(CMP(*(raddr(fs,bx+0x80A)), 0x40));	// 24339 cmp     byte ptr fs:[bx+80Ah], 40h ; '@' ;~ 0AA7:2791
cs=0xaa7;eip=0x002797; 	J(JA(loc_1b7f0));	// 24340 ja      short loc_1B7F0 ;~ 0AA7:2797
cs=0xaa7;eip=0x002799; 	T(MOV(al, *(raddr(ds,si+0x3200))));	// 24341 mov     al, [si+3200h] ;~ 0AA7:2799
cs=0xaa7;eip=0x00279d; 	T(CBW);	// 24342 cbw ;~ 0AA7:279D
cs=0xaa7;eip=0x00279e; 	T(ADD(dx, ax));	// 24343 add     dx, ax ;~ 0AA7:279E
loc_1b7f0:
	// 5896 
cs=0xaa7;eip=0x0027a0; 	T(DEC(cx));	// 24346 dec     cx ;~ 0AA7:27A0
cs=0xaa7;eip=0x0027a1; 	J(JZ(loc_1b85f));	// 24347 jz      short loc_1B85F ;~ 0AA7:27A1
cs=0xaa7;eip=0x0027a3; 	T(CMP(*(raddr(fs,bx+0x85A)), 0x40));	// 24348 cmp     byte ptr fs:[bx+85Ah], 40h ; '@' ;~ 0AA7:27A3
cs=0xaa7;eip=0x0027a9; 	J(JA(loc_1b802));	// 24349 ja      short loc_1B802 ;~ 0AA7:27A9
cs=0xaa7;eip=0x0027ab; 	T(MOV(al, *(raddr(ds,si+0x3400))));	// 24350 mov     al, [si+3400h] ;~ 0AA7:27AB
cs=0xaa7;eip=0x0027af; 	T(CBW);	// 24351 cbw ;~ 0AA7:27AF
cs=0xaa7;eip=0x0027b0; 	T(ADD(dx, ax));	// 24352 add     dx, ax ;~ 0AA7:27B0
loc_1b802:
	// 5897 
cs=0xaa7;eip=0x0027b2; 	T(DEC(cx));	// 24355 dec     cx ;~ 0AA7:27B2
cs=0xaa7;eip=0x0027b3; 	J(JZ(loc_1b85f));	// 24356 jz      short loc_1B85F ;~ 0AA7:27B3
cs=0xaa7;eip=0x0027b5; 	T(CMP(*(raddr(fs,bx+0x8AA)), 0x40));	// 24357 cmp     byte ptr fs:[bx+8AAh], 40h ; '@' ;~ 0AA7:27B5
cs=0xaa7;eip=0x0027bb; 	J(JA(loc_1b814));	// 24358 ja      short loc_1B814 ;~ 0AA7:27BB
cs=0xaa7;eip=0x0027bd; 	T(MOV(al, *(raddr(ds,si+0x3600))));	// 24359 mov     al, [si+3600h] ;~ 0AA7:27BD
cs=0xaa7;eip=0x0027c1; 	T(CBW);	// 24360 cbw ;~ 0AA7:27C1
cs=0xaa7;eip=0x0027c2; 	T(ADD(dx, ax));	// 24361 add     dx, ax ;~ 0AA7:27C2
loc_1b814:
	// 5898 
cs=0xaa7;eip=0x0027c4; 	T(DEC(cx));	// 24364 dec     cx ;~ 0AA7:27C4
cs=0xaa7;eip=0x0027c5; 	J(JZ(loc_1b85f));	// 24365 jz      short loc_1B85F ;~ 0AA7:27C5
cs=0xaa7;eip=0x0027c7; 	T(CMP(*(raddr(fs,bx+0x8FA)), 0x40));	// 24366 cmp     byte ptr fs:[bx+8FAh], 40h ; '@' ;~ 0AA7:27C7
cs=0xaa7;eip=0x0027cd; 	J(JA(loc_1b826));	// 24367 ja      short loc_1B826 ;~ 0AA7:27CD
cs=0xaa7;eip=0x0027cf; 	T(MOV(al, *(raddr(ds,si+0x3800))));	// 24368 mov     al, [si+3800h] ;~ 0AA7:27CF
cs=0xaa7;eip=0x0027d3; 	T(CBW);	// 24369 cbw ;~ 0AA7:27D3
cs=0xaa7;eip=0x0027d4; 	T(ADD(dx, ax));	// 24370 add     dx, ax ;~ 0AA7:27D4
loc_1b826:
	// 5899 
cs=0xaa7;eip=0x0027d6; 	T(DEC(cx));	// 24373 dec     cx ;~ 0AA7:27D6
cs=0xaa7;eip=0x0027d7; 	J(JZ(loc_1b85f));	// 24374 jz      short loc_1B85F ;~ 0AA7:27D7
cs=0xaa7;eip=0x0027d9; 	T(CMP(*(raddr(fs,bx+0x94A)), 0x40));	// 24375 cmp     byte ptr fs:[bx+94Ah], 40h ; '@' ;~ 0AA7:27D9
cs=0xaa7;eip=0x0027df; 	J(JA(loc_1b838));	// 24376 ja      short loc_1B838 ;~ 0AA7:27DF
cs=0xaa7;eip=0x0027e1; 	T(MOV(al, *(raddr(ds,si+0x3A00))));	// 24377 mov     al, [si+3A00h] ;~ 0AA7:27E1
cs=0xaa7;eip=0x0027e5; 	T(CBW);	// 24378 cbw ;~ 0AA7:27E5
cs=0xaa7;eip=0x0027e6; 	T(ADD(dx, ax));	// 24379 add     dx, ax ;~ 0AA7:27E6
loc_1b838:
	// 5900 
cs=0xaa7;eip=0x0027e8; 	T(DEC(cx));	// 24382 dec     cx ;~ 0AA7:27E8
cs=0xaa7;eip=0x0027e9; 	J(JZ(loc_1b85f));	// 24383 jz      short loc_1B85F ;~ 0AA7:27E9
cs=0xaa7;eip=0x0027eb; 	T(CMP(*(raddr(fs,bx+0x99A)), 0x40));	// 24384 cmp     byte ptr fs:[bx+99Ah], 40h ; '@' ;~ 0AA7:27EB
cs=0xaa7;eip=0x0027f1; 	J(JA(loc_1b84a));	// 24385 ja      short loc_1B84A ;~ 0AA7:27F1
cs=0xaa7;eip=0x0027f3; 	T(MOV(al, *(raddr(ds,si+0x3C00))));	// 24386 mov     al, [si+3C00h] ;~ 0AA7:27F3
cs=0xaa7;eip=0x0027f7; 	T(CBW);	// 24387 cbw ;~ 0AA7:27F7
cs=0xaa7;eip=0x0027f8; 	T(ADD(dx, ax));	// 24388 add     dx, ax ;~ 0AA7:27F8
loc_1b84a:
	// 5901 
cs=0xaa7;eip=0x0027fa; 	T(DEC(cx));	// 24391 dec     cx ;~ 0AA7:27FA
cs=0xaa7;eip=0x0027fb; 	J(JZ(loc_1b85f));	// 24392 jz      short loc_1B85F ;~ 0AA7:27FB
cs=0xaa7;eip=0x0027fd; 	T(CMP(*(raddr(fs,bx+0x9EA)), 0x40));	// 24393 cmp     byte ptr fs:[bx+9EAh], 40h ; '@' ;~ 0AA7:27FD
cs=0xaa7;eip=0x002803; 	J(JA(loc_1b85c));	// 24394 ja      short loc_1B85C ;~ 0AA7:2803
cs=0xaa7;eip=0x002805; 	T(MOV(al, *(raddr(ds,si+0x3E00))));	// 24395 mov     al, [si+3E00h] ;~ 0AA7:2805
cs=0xaa7;eip=0x002809; 	T(CBW);	// 24396 cbw ;~ 0AA7:2809
cs=0xaa7;eip=0x00280a; 	T(ADD(dx, ax));	// 24397 add     dx, ax ;~ 0AA7:280A
loc_1b85c:
	// 5902 
cs=0xaa7;eip=0x00280c; 	T(DEC(cx));	// 24400 dec     cx ;~ 0AA7:280C
cs=0xaa7;eip=0x00280d; 	J({;});	// 24401 jz      short $+2 ;~ 0AA7:280D
loc_1b85f:
	// 5903 
cs=0xaa7;eip=0x00280f; 	T(SAR(dx, 1));	// 24405 sar     dx, 1 ;~ 0AA7:280F
cs=0xaa7;eip=0x002811; 	X(MOV(*(raddr(ds,di)), dl));	// 24406 mov     [di], dl ;~ 0AA7:2811
cs=0xaa7;eip=0x002813; 	T(INC(si));	// 24407 inc     si ;~ 0AA7:2813
cs=0xaa7;eip=0x002814; 	T(INC(di));	// 24408 inc     di ;~ 0AA7:2814
cs=0xaa7;eip=0x002815; 	T(CMP(si, offset(dseg,byte_1e0e0)));	// 24409 cmp     si, offset byte_1E0E0 ;~ 0AA7:2815
cs=0xaa7;eip=0x002819; 	J(JC(loc_1b5ec));	// 24410 jb      loc_1B5EC ;~ 0AA7:2819
cs=0xaa7;eip=0x00281d; 	T(MOV(si, offset(dseg,byte_24204)));	// 24411 mov     si, offset byte_24204 ;~ 0AA7:281D
cs=0xaa7;eip=0x002820; 	T(MOV(di, offset(dseg,byte_22ee4)));	// 24412 mov     di, offset byte_22EE4 ;~ 0AA7:2820
cs=0xaa7;eip=0x002823; 	T(MOV(cx, 0x200));	// 24413 mov     cx, 200h ;~ 0AA7:2823
loc_1b876:
	// 5904 
cs=0xaa7;eip=0x002826; 	X(MOVSX(eax, *(raddr(ds,si))));	// 24416 movsx   eax, byte ptr [si] ;~ 0AA7:2826
cs=0xaa7;eip=0x00282a; 	T(SHL(eax, 0x10));	// 24417 shl     eax, 10h ;~ 0AA7:282A
cs=0xaa7;eip=0x00282e; 	X(MOV(*(dd*)(raddr(ds,di)), eax));	// 24418 mov     [di], eax ;~ 0AA7:282E
cs=0xaa7;eip=0x002831; 	X(MOV(*(dd*)(raddr(ds,di+4)), 0));	// 24419 mov     dword ptr [di+4], 0 ;~ 0AA7:2831
cs=0xaa7;eip=0x002839; 	T(INC(si));	// 24420 inc     si ;~ 0AA7:2839
cs=0xaa7;eip=0x00283a; 	T(ADD(di, 8));	// 24421 add     di, 8 ;~ 0AA7:283A
cs=0xaa7;eip=0x00283d; 	J(LOOP(loc_1b876));	// 24422 loop    loc_1B876 ;~ 0AA7:283D
cs=0xaa7;eip=0x00283f; 	T(MOV(ax, word_24524));	// 24423 mov     ax, word_24524 ;~ 0AA7:283F
cs=0xaa7;eip=0x002842; 	X(MOV(word_24520, ax));	// 24424 mov     word_24520, ax ;~ 0AA7:2842
cs=0xaa7;eip=0x002845; 	X(MOV(word_24514, ax));	// 24425 mov     word_24514, ax ;~ 0AA7:2845
cs=0xaa7;eip=0x002848; 	T(MOV(di, offset(dseg,byte_22ee4)));	// 24426 mov     di, offset byte_22EE4 ;~ 0AA7:2848
cs=0xaa7;eip=0x00284b; 	J(CALL(_spectr_1b406,0));	// 24427 call    _spectr_1B406 ;~ 0AA7:284B
cs=0xaa7;eip=0x00284e; 	T(MOV(si, offset(dseg,byte_22ee4)));	// 24428 mov     si, offset byte_22EE4 ;~ 0AA7:284E
cs=0xaa7;eip=0x002851; 	T(MOV(di, offset(dseg,unk_23ee4)));	// 24429 mov     di, offset unk_23EE4 ;~ 0AA7:2851
cs=0xaa7;eip=0x002854; 	T(MOV(cx, 0x64));	// 24430 mov     cx, 64h ; 'd' ;~ 0AA7:2854
cs=0xaa7;eip=0x002857; 	J(CALL(_spectr_1bbc1,0));	// 24431 call    _spectr_1BBC1 ;~ 0AA7:2857
cs=0xaa7;eip=0x00285a; 	T(LFS(bx, _segfsbx_1de28));	// 24432 lfs     bx, _segfsbx_1DE28 ;~ 0AA7:285A
cs=0xaa7;eip=0x00285f; 	T(MOV(si, offset(dseg,_buffer_1)));	// 24433 mov     si, offset _buffer_1 ; 2800h ;~ 0AA7:285F
cs=0xaa7;eip=0x002862; 	T(MOV(di, offset(dseg,byte_24204)));	// 24434 mov     di, offset byte_24204 ;~ 0AA7:2862
cs=0xaa7;eip=0x002865; 	T(MOV(bp, _amount_of_x));	// 24435 mov     bp, _amount_of_x ;~ 0AA7:2865
cs=0xaa7;eip=0x002869; 	T(XCHG(bx, bx));	// 24436 xchg    bx, bx ;~ 0AA7:2869
cs=0xaa7;eip=0x00286b; 	T(NOP);	// 24437 nop ;~ 0AA7:286B
loc_1b8bc:
	// 5905 
cs=0xaa7;eip=0x00286c; 	T(MOV(cx, bp));	// 24440 mov     cx, bp ;~ 0AA7:286C
cs=0xaa7;eip=0x00286e; 	T(XOR(dx, dx));	// 24441 xor     dx, dx ;~ 0AA7:286E
cs=0xaa7;eip=0x002870; 	T(CMP(*(raddr(fs,bx+0x3A)), 0x40));	// 24442 cmp     byte ptr fs:[bx+3Ah], 40h ; '@' ;~ 0AA7:2870
cs=0xaa7;eip=0x002875; 	J(JC(loc_1b8cc));	// 24443 jb      short loc_1B8CC ;~ 0AA7:2875
cs=0xaa7;eip=0x002877; 	T(MOV(al, *(raddr(ds,si))));	// 24444 mov     al, [si] ;~ 0AA7:2877
cs=0xaa7;eip=0x002879; 	T(CBW);	// 24445 cbw ;~ 0AA7:2879
cs=0xaa7;eip=0x00287a; 	T(ADD(dx, ax));	// 24446 add     dx, ax ;~ 0AA7:287A
loc_1b8cc:
	// 5906 
cs=0xaa7;eip=0x00287c; 	T(DEC(cx));	// 24449 dec     cx ;~ 0AA7:287C
cs=0xaa7;eip=0x00287d; 	J(JZ(loc_1bb2f));	// 24450 jz      loc_1BB2F ;~ 0AA7:287D
cs=0xaa7;eip=0x002881; 	T(CMP(*(raddr(fs,bx+0x8A)), 0x40));	// 24451 cmp     byte ptr fs:[bx+8Ah], 40h ; '@' ;~ 0AA7:2881
cs=0xaa7;eip=0x002887; 	J(JC(loc_1b8e0));	// 24452 jb      short loc_1B8E0 ;~ 0AA7:2887
cs=0xaa7;eip=0x002889; 	T(MOV(al, *(raddr(ds,si+0x200))));	// 24453 mov     al, [si+200h] ;~ 0AA7:2889
cs=0xaa7;eip=0x00288d; 	T(CBW);	// 24454 cbw ;~ 0AA7:288D
cs=0xaa7;eip=0x00288e; 	T(ADD(dx, ax));	// 24455 add     dx, ax ;~ 0AA7:288E
loc_1b8e0:
	// 5907 
cs=0xaa7;eip=0x002890; 	T(DEC(cx));	// 24458 dec     cx ;~ 0AA7:2890
cs=0xaa7;eip=0x002891; 	J(JZ(loc_1bb2f));	// 24459 jz      loc_1BB2F ;~ 0AA7:2891
cs=0xaa7;eip=0x002895; 	T(CMP(*(raddr(fs,bx+0x0DA)), 0x40));	// 24460 cmp     byte ptr fs:[bx+0DAh], 40h ; '@' ;~ 0AA7:2895
cs=0xaa7;eip=0x00289b; 	J(JC(loc_1b8f4));	// 24461 jb      short loc_1B8F4 ;~ 0AA7:289B
cs=0xaa7;eip=0x00289d; 	T(MOV(al, *(raddr(ds,si+0x400))));	// 24462 mov     al, [si+400h] ;~ 0AA7:289D
cs=0xaa7;eip=0x0028a1; 	T(CBW);	// 24463 cbw ;~ 0AA7:28A1
cs=0xaa7;eip=0x0028a2; 	T(ADD(dx, ax));	// 24464 add     dx, ax ;~ 0AA7:28A2
loc_1b8f4:
	// 5908 
cs=0xaa7;eip=0x0028a4; 	T(DEC(cx));	// 24467 dec     cx ;~ 0AA7:28A4
cs=0xaa7;eip=0x0028a5; 	J(JZ(loc_1bb2f));	// 24468 jz      loc_1BB2F ;~ 0AA7:28A5
cs=0xaa7;eip=0x0028a9; 	T(CMP(*(raddr(fs,bx+0x12A)), 0x40));	// 24469 cmp     byte ptr fs:[bx+12Ah], 40h ; '@' ;~ 0AA7:28A9
cs=0xaa7;eip=0x0028af; 	J(JC(loc_1b908));	// 24470 jb      short loc_1B908 ;~ 0AA7:28AF
cs=0xaa7;eip=0x0028b1; 	T(MOV(al, *(raddr(ds,si+0x600))));	// 24471 mov     al, [si+600h] ;~ 0AA7:28B1
cs=0xaa7;eip=0x0028b5; 	T(CBW);	// 24472 cbw ;~ 0AA7:28B5
cs=0xaa7;eip=0x0028b6; 	T(ADD(dx, ax));	// 24473 add     dx, ax ;~ 0AA7:28B6
loc_1b908:
	// 5909 
cs=0xaa7;eip=0x0028b8; 	T(DEC(cx));	// 24476 dec     cx ;~ 0AA7:28B8
cs=0xaa7;eip=0x0028b9; 	J(JZ(loc_1bb2f));	// 24477 jz      loc_1BB2F ;~ 0AA7:28B9
cs=0xaa7;eip=0x0028bd; 	T(CMP(*(raddr(fs,bx+0x17A)), 0x40));	// 24478 cmp     byte ptr fs:[bx+17Ah], 40h ; '@' ;~ 0AA7:28BD
cs=0xaa7;eip=0x0028c3; 	J(JC(loc_1b91c));	// 24479 jb      short loc_1B91C ;~ 0AA7:28C3
cs=0xaa7;eip=0x0028c5; 	T(MOV(al, *(raddr(ds,si+0x800))));	// 24480 mov     al, [si+800h] ;~ 0AA7:28C5
cs=0xaa7;eip=0x0028c9; 	T(CBW);	// 24481 cbw ;~ 0AA7:28C9
cs=0xaa7;eip=0x0028ca; 	T(ADD(dx, ax));	// 24482 add     dx, ax ;~ 0AA7:28CA
loc_1b91c:
	// 5910 
cs=0xaa7;eip=0x0028cc; 	T(DEC(cx));	// 24485 dec     cx ;~ 0AA7:28CC
cs=0xaa7;eip=0x0028cd; 	J(JZ(loc_1bb2f));	// 24486 jz      loc_1BB2F ;~ 0AA7:28CD
cs=0xaa7;eip=0x0028d1; 	T(CMP(*(raddr(fs,bx+0x1CA)), 0x40));	// 24487 cmp     byte ptr fs:[bx+1CAh], 40h ; '@' ;~ 0AA7:28D1
cs=0xaa7;eip=0x0028d7; 	J(JC(loc_1b930));	// 24488 jb      short loc_1B930 ;~ 0AA7:28D7
cs=0xaa7;eip=0x0028d9; 	T(MOV(al, *(raddr(ds,si+0x0A00))));	// 24489 mov     al, [si+0A00h] ;~ 0AA7:28D9
cs=0xaa7;eip=0x0028dd; 	T(CBW);	// 24490 cbw ;~ 0AA7:28DD
cs=0xaa7;eip=0x0028de; 	T(ADD(dx, ax));	// 24491 add     dx, ax ;~ 0AA7:28DE
loc_1b930:
	// 5911 
cs=0xaa7;eip=0x0028e0; 	T(DEC(cx));	// 24494 dec     cx ;~ 0AA7:28E0
cs=0xaa7;eip=0x0028e1; 	J(JZ(loc_1bb2f));	// 24495 jz      loc_1BB2F ;~ 0AA7:28E1
cs=0xaa7;eip=0x0028e5; 	T(CMP(*(raddr(fs,bx+0x21A)), 0x40));	// 24496 cmp     byte ptr fs:[bx+21Ah], 40h ; '@' ;~ 0AA7:28E5
cs=0xaa7;eip=0x0028eb; 	J(JC(loc_1b944));	// 24497 jb      short loc_1B944 ;~ 0AA7:28EB
cs=0xaa7;eip=0x0028ed; 	T(MOV(al, *(raddr(ds,si+0x0C00))));	// 24498 mov     al, [si+0C00h] ;~ 0AA7:28ED
cs=0xaa7;eip=0x0028f1; 	T(CBW);	// 24499 cbw ;~ 0AA7:28F1
cs=0xaa7;eip=0x0028f2; 	T(ADD(dx, ax));	// 24500 add     dx, ax ;~ 0AA7:28F2
loc_1b944:
	// 5912 
cs=0xaa7;eip=0x0028f4; 	T(DEC(cx));	// 24503 dec     cx ;~ 0AA7:28F4
cs=0xaa7;eip=0x0028f5; 	J(JZ(loc_1bb2f));	// 24504 jz      loc_1BB2F ;~ 0AA7:28F5
cs=0xaa7;eip=0x0028f9; 	T(CMP(*(raddr(fs,bx+0x26A)), 0x40));	// 24505 cmp     byte ptr fs:[bx+26Ah], 40h ; '@' ;~ 0AA7:28F9
cs=0xaa7;eip=0x0028ff; 	J(JC(loc_1b958));	// 24506 jb      short loc_1B958 ;~ 0AA7:28FF
cs=0xaa7;eip=0x002901; 	T(MOV(al, *(raddr(ds,si+0x0E00))));	// 24507 mov     al, [si+0E00h] ;~ 0AA7:2901
cs=0xaa7;eip=0x002905; 	T(CBW);	// 24508 cbw ;~ 0AA7:2905
cs=0xaa7;eip=0x002906; 	T(ADD(dx, ax));	// 24509 add     dx, ax ;~ 0AA7:2906
loc_1b958:
	// 5913 
cs=0xaa7;eip=0x002908; 	T(DEC(cx));	// 24512 dec     cx ;~ 0AA7:2908
cs=0xaa7;eip=0x002909; 	J(JZ(loc_1bb2f));	// 24513 jz      loc_1BB2F ;~ 0AA7:2909
cs=0xaa7;eip=0x00290d; 	T(CMP(*(raddr(fs,bx+0x2BA)), 0x40));	// 24514 cmp     byte ptr fs:[bx+2BAh], 40h ; '@' ;~ 0AA7:290D
cs=0xaa7;eip=0x002913; 	J(JC(loc_1b96c));	// 24515 jb      short loc_1B96C ;~ 0AA7:2913
cs=0xaa7;eip=0x002915; 	T(MOV(al, *(raddr(ds,si+0x1000))));	// 24516 mov     al, [si+1000h] ;~ 0AA7:2915
cs=0xaa7;eip=0x002919; 	T(CBW);	// 24517 cbw ;~ 0AA7:2919
cs=0xaa7;eip=0x00291a; 	T(ADD(dx, ax));	// 24518 add     dx, ax ;~ 0AA7:291A
loc_1b96c:
	// 5914 
cs=0xaa7;eip=0x00291c; 	T(DEC(cx));	// 24521 dec     cx ;~ 0AA7:291C
cs=0xaa7;eip=0x00291d; 	J(JZ(loc_1bb2f));	// 24522 jz      loc_1BB2F ;~ 0AA7:291D
cs=0xaa7;eip=0x002921; 	T(CMP(*(raddr(fs,bx+0x30A)), 0x40));	// 24523 cmp     byte ptr fs:[bx+30Ah], 40h ; '@' ;~ 0AA7:2921
cs=0xaa7;eip=0x002927; 	J(JC(loc_1b980));	// 24524 jb      short loc_1B980 ;~ 0AA7:2927
cs=0xaa7;eip=0x002929; 	T(MOV(al, *(raddr(ds,si+0x1200))));	// 24525 mov     al, [si+1200h] ;~ 0AA7:2929
cs=0xaa7;eip=0x00292d; 	T(CBW);	// 24526 cbw ;~ 0AA7:292D
cs=0xaa7;eip=0x00292e; 	T(ADD(dx, ax));	// 24527 add     dx, ax ;~ 0AA7:292E
loc_1b980:
	// 5915 
cs=0xaa7;eip=0x002930; 	T(DEC(cx));	// 24530 dec     cx ;~ 0AA7:2930
cs=0xaa7;eip=0x002931; 	J(JZ(loc_1bb2f));	// 24531 jz      loc_1BB2F ;~ 0AA7:2931
cs=0xaa7;eip=0x002935; 	T(CMP(*(raddr(fs,bx+0x35A)), 0x40));	// 24532 cmp     byte ptr fs:[bx+35Ah], 40h ; '@' ;~ 0AA7:2935
cs=0xaa7;eip=0x00293b; 	J(JC(loc_1b994));	// 24533 jb      short loc_1B994 ;~ 0AA7:293B
cs=0xaa7;eip=0x00293d; 	T(MOV(al, *(raddr(ds,si+0x1400))));	// 24534 mov     al, [si+1400h] ;~ 0AA7:293D
cs=0xaa7;eip=0x002941; 	T(CBW);	// 24535 cbw ;~ 0AA7:2941
cs=0xaa7;eip=0x002942; 	T(ADD(dx, ax));	// 24536 add     dx, ax ;~ 0AA7:2942
loc_1b994:
	// 5916 
cs=0xaa7;eip=0x002944; 	T(DEC(cx));	// 24539 dec     cx ;~ 0AA7:2944
cs=0xaa7;eip=0x002945; 	J(JZ(loc_1bb2f));	// 24540 jz      loc_1BB2F ;~ 0AA7:2945
cs=0xaa7;eip=0x002949; 	T(CMP(*(raddr(fs,bx+0x3AA)), 0x40));	// 24541 cmp     byte ptr fs:[bx+3AAh], 40h ; '@' ;~ 0AA7:2949
cs=0xaa7;eip=0x00294f; 	J(JC(loc_1b9a8));	// 24542 jb      short loc_1B9A8 ;~ 0AA7:294F
cs=0xaa7;eip=0x002951; 	T(MOV(al, *(raddr(ds,si+0x1600))));	// 24543 mov     al, [si+1600h] ;~ 0AA7:2951
cs=0xaa7;eip=0x002955; 	T(CBW);	// 24544 cbw ;~ 0AA7:2955
cs=0xaa7;eip=0x002956; 	T(ADD(dx, ax));	// 24545 add     dx, ax ;~ 0AA7:2956
loc_1b9a8:
	// 5917 
cs=0xaa7;eip=0x002958; 	T(DEC(cx));	// 24548 dec     cx ;~ 0AA7:2958
cs=0xaa7;eip=0x002959; 	J(JZ(loc_1bb2f));	// 24549 jz      loc_1BB2F ;~ 0AA7:2959
cs=0xaa7;eip=0x00295d; 	T(CMP(*(raddr(fs,bx+0x3FA)), 0x40));	// 24550 cmp     byte ptr fs:[bx+3FAh], 40h ; '@' ;~ 0AA7:295D
cs=0xaa7;eip=0x002963; 	J(JC(loc_1b9bc));	// 24551 jb      short loc_1B9BC ;~ 0AA7:2963
cs=0xaa7;eip=0x002965; 	T(MOV(al, *(raddr(ds,si+0x1800))));	// 24552 mov     al, [si+1800h] ;~ 0AA7:2965
cs=0xaa7;eip=0x002969; 	T(CBW);	// 24553 cbw ;~ 0AA7:2969
cs=0xaa7;eip=0x00296a; 	T(ADD(dx, ax));	// 24554 add     dx, ax ;~ 0AA7:296A
loc_1b9bc:
	// 5918 
cs=0xaa7;eip=0x00296c; 	T(DEC(cx));	// 24557 dec     cx ;~ 0AA7:296C
cs=0xaa7;eip=0x00296d; 	J(JZ(loc_1bb2f));	// 24558 jz      loc_1BB2F ;~ 0AA7:296D
cs=0xaa7;eip=0x002971; 	T(CMP(*(raddr(fs,bx+0x44A)), 0x40));	// 24559 cmp     byte ptr fs:[bx+44Ah], 40h ; '@' ;~ 0AA7:2971
cs=0xaa7;eip=0x002977; 	J(JC(loc_1b9d0));	// 24560 jb      short loc_1B9D0 ;~ 0AA7:2977
cs=0xaa7;eip=0x002979; 	T(MOV(al, *(raddr(ds,si+0x1A00))));	// 24561 mov     al, [si+1A00h] ;~ 0AA7:2979
cs=0xaa7;eip=0x00297d; 	T(CBW);	// 24562 cbw ;~ 0AA7:297D
cs=0xaa7;eip=0x00297e; 	T(ADD(dx, ax));	// 24563 add     dx, ax ;~ 0AA7:297E
loc_1b9d0:
	// 5919 
cs=0xaa7;eip=0x002980; 	T(DEC(cx));	// 24566 dec     cx ;~ 0AA7:2980
cs=0xaa7;eip=0x002981; 	J(JZ(loc_1bb2f));	// 24567 jz      loc_1BB2F ;~ 0AA7:2981
cs=0xaa7;eip=0x002985; 	T(CMP(*(raddr(fs,bx+0x49A)), 0x40));	// 24568 cmp     byte ptr fs:[bx+49Ah], 40h ; '@' ;~ 0AA7:2985
cs=0xaa7;eip=0x00298b; 	J(JC(loc_1b9e4));	// 24569 jb      short loc_1B9E4 ;~ 0AA7:298B
cs=0xaa7;eip=0x00298d; 	T(MOV(al, *(raddr(ds,si+0x1C00))));	// 24570 mov     al, [si+1C00h] ;~ 0AA7:298D
cs=0xaa7;eip=0x002991; 	T(CBW);	// 24571 cbw ;~ 0AA7:2991
cs=0xaa7;eip=0x002992; 	T(ADD(dx, ax));	// 24572 add     dx, ax ;~ 0AA7:2992
loc_1b9e4:
	// 5920 
cs=0xaa7;eip=0x002994; 	T(DEC(cx));	// 24575 dec     cx ;~ 0AA7:2994
cs=0xaa7;eip=0x002995; 	J(JZ(loc_1bb2f));	// 24576 jz      loc_1BB2F ;~ 0AA7:2995
cs=0xaa7;eip=0x002999; 	T(CMP(*(raddr(fs,bx+0x4EA)), 0x40));	// 24577 cmp     byte ptr fs:[bx+4EAh], 40h ; '@' ;~ 0AA7:2999
cs=0xaa7;eip=0x00299f; 	J(JC(loc_1b9f8));	// 24578 jb      short loc_1B9F8 ;~ 0AA7:299F
cs=0xaa7;eip=0x0029a1; 	T(MOV(al, *(raddr(ds,si+0x1E00))));	// 24579 mov     al, [si+1E00h] ;~ 0AA7:29A1
cs=0xaa7;eip=0x0029a5; 	T(CBW);	// 24580 cbw ;~ 0AA7:29A5
cs=0xaa7;eip=0x0029a6; 	T(ADD(dx, ax));	// 24581 add     dx, ax ;~ 0AA7:29A6
loc_1b9f8:
	// 5921 
cs=0xaa7;eip=0x0029a8; 	T(DEC(cx));	// 24584 dec     cx ;~ 0AA7:29A8
cs=0xaa7;eip=0x0029a9; 	J(JZ(loc_1bb2f));	// 24585 jz      loc_1BB2F ;~ 0AA7:29A9
cs=0xaa7;eip=0x0029ad; 	T(CMP(*(raddr(fs,bx+0x53A)), 0x40));	// 24586 cmp     byte ptr fs:[bx+53Ah], 40h ; '@' ;~ 0AA7:29AD
cs=0xaa7;eip=0x0029b3; 	J(JC(loc_1ba0c));	// 24587 jb      short loc_1BA0C ;~ 0AA7:29B3
cs=0xaa7;eip=0x0029b5; 	T(MOV(al, *(raddr(ds,si+0x2000))));	// 24588 mov     al, [si+2000h] ;~ 0AA7:29B5
cs=0xaa7;eip=0x0029b9; 	T(CBW);	// 24589 cbw ;~ 0AA7:29B9
cs=0xaa7;eip=0x0029ba; 	T(ADD(dx, ax));	// 24590 add     dx, ax ;~ 0AA7:29BA
loc_1ba0c:
	// 5922 
cs=0xaa7;eip=0x0029bc; 	T(DEC(cx));	// 24593 dec     cx ;~ 0AA7:29BC
cs=0xaa7;eip=0x0029bd; 	J(JZ(loc_1bb2f));	// 24594 jz      loc_1BB2F ;~ 0AA7:29BD
cs=0xaa7;eip=0x0029c1; 	T(CMP(*(raddr(fs,bx+0x58A)), 0x40));	// 24595 cmp     byte ptr fs:[bx+58Ah], 40h ; '@' ;~ 0AA7:29C1
cs=0xaa7;eip=0x0029c7; 	J(JC(loc_1ba20));	// 24596 jb      short loc_1BA20 ;~ 0AA7:29C7
cs=0xaa7;eip=0x0029c9; 	T(MOV(al, *(raddr(ds,si+0x2200))));	// 24597 mov     al, [si+2200h] ;~ 0AA7:29C9
cs=0xaa7;eip=0x0029cd; 	T(CBW);	// 24598 cbw ;~ 0AA7:29CD
cs=0xaa7;eip=0x0029ce; 	T(ADD(dx, ax));	// 24599 add     dx, ax ;~ 0AA7:29CE
loc_1ba20:
	// 5923 
cs=0xaa7;eip=0x0029d0; 	T(DEC(cx));	// 24602 dec     cx ;~ 0AA7:29D0
cs=0xaa7;eip=0x0029d1; 	J(JZ(loc_1bb2f));	// 24603 jz      loc_1BB2F ;~ 0AA7:29D1
cs=0xaa7;eip=0x0029d5; 	T(CMP(*(raddr(fs,bx+0x5DA)), 0x40));	// 24604 cmp     byte ptr fs:[bx+5DAh], 40h ; '@' ;~ 0AA7:29D5
cs=0xaa7;eip=0x0029db; 	J(JC(loc_1ba34));	// 24605 jb      short loc_1BA34 ;~ 0AA7:29DB
cs=0xaa7;eip=0x0029dd; 	T(MOV(al, *(raddr(ds,si+0x2400))));	// 24606 mov     al, [si+2400h] ;~ 0AA7:29DD
cs=0xaa7;eip=0x0029e1; 	T(CBW);	// 24607 cbw ;~ 0AA7:29E1
cs=0xaa7;eip=0x0029e2; 	T(ADD(dx, ax));	// 24608 add     dx, ax ;~ 0AA7:29E2
loc_1ba34:
	// 5924 
cs=0xaa7;eip=0x0029e4; 	T(DEC(cx));	// 24611 dec     cx ;~ 0AA7:29E4
cs=0xaa7;eip=0x0029e5; 	J(JZ(loc_1bb2f));	// 24612 jz      loc_1BB2F ;~ 0AA7:29E5
cs=0xaa7;eip=0x0029e9; 	T(CMP(*(raddr(fs,bx+0x62A)), 0x40));	// 24613 cmp     byte ptr fs:[bx+62Ah], 40h ; '@' ;~ 0AA7:29E9
cs=0xaa7;eip=0x0029ef; 	J(JC(loc_1ba48));	// 24614 jb      short loc_1BA48 ;~ 0AA7:29EF
cs=0xaa7;eip=0x0029f1; 	T(MOV(al, *(raddr(ds,si+0x2600))));	// 24615 mov     al, [si+2600h] ;~ 0AA7:29F1
cs=0xaa7;eip=0x0029f5; 	T(CBW);	// 24616 cbw ;~ 0AA7:29F5
cs=0xaa7;eip=0x0029f6; 	T(ADD(dx, ax));	// 24617 add     dx, ax ;~ 0AA7:29F6
loc_1ba48:
	// 5925 
cs=0xaa7;eip=0x0029f8; 	T(DEC(cx));	// 24620 dec     cx ;~ 0AA7:29F8
cs=0xaa7;eip=0x0029f9; 	J(JZ(loc_1bb2f));	// 24621 jz      loc_1BB2F ;~ 0AA7:29F9
cs=0xaa7;eip=0x0029fd; 	T(CMP(*(raddr(fs,bx+0x67A)), 0x40));	// 24622 cmp     byte ptr fs:[bx+67Ah], 40h ; '@' ;~ 0AA7:29FD
cs=0xaa7;eip=0x002a03; 	J(JC(loc_1ba5c));	// 24623 jb      short loc_1BA5C ;~ 0AA7:2A03
cs=0xaa7;eip=0x002a05; 	T(MOV(al, *(raddr(ds,si+0x2800))));	// 24624 mov     al, [si+2800h] ;~ 0AA7:2A05
cs=0xaa7;eip=0x002a09; 	T(CBW);	// 24625 cbw ;~ 0AA7:2A09
cs=0xaa7;eip=0x002a0a; 	T(ADD(dx, ax));	// 24626 add     dx, ax ;~ 0AA7:2A0A
loc_1ba5c:
	// 5926 
cs=0xaa7;eip=0x002a0c; 	T(DEC(cx));	// 24629 dec     cx ;~ 0AA7:2A0C
cs=0xaa7;eip=0x002a0d; 	J(JZ(loc_1bb2f));	// 24630 jz      loc_1BB2F ;~ 0AA7:2A0D
cs=0xaa7;eip=0x002a11; 	T(CMP(*(raddr(fs,bx+0x6CA)), 0x40));	// 24631 cmp     byte ptr fs:[bx+6CAh], 40h ; '@' ;~ 0AA7:2A11
cs=0xaa7;eip=0x002a17; 	J(JC(loc_1ba70));	// 24632 jb      short loc_1BA70 ;~ 0AA7:2A17
cs=0xaa7;eip=0x002a19; 	T(MOV(al, *(raddr(ds,si+0x2A00))));	// 24633 mov     al, [si+2A00h] ;~ 0AA7:2A19
cs=0xaa7;eip=0x002a1d; 	T(CBW);	// 24634 cbw ;~ 0AA7:2A1D
cs=0xaa7;eip=0x002a1e; 	T(ADD(dx, ax));	// 24635 add     dx, ax ;~ 0AA7:2A1E
loc_1ba70:
	// 5927 
cs=0xaa7;eip=0x002a20; 	T(DEC(cx));	// 24638 dec     cx ;~ 0AA7:2A20
cs=0xaa7;eip=0x002a21; 	J(JZ(loc_1bb2f));	// 24639 jz      loc_1BB2F ;~ 0AA7:2A21
cs=0xaa7;eip=0x002a25; 	T(CMP(*(raddr(fs,bx+0x71A)), 0x40));	// 24640 cmp     byte ptr fs:[bx+71Ah], 40h ; '@' ;~ 0AA7:2A25
cs=0xaa7;eip=0x002a2b; 	J(JC(loc_1ba84));	// 24641 jb      short loc_1BA84 ;~ 0AA7:2A2B
cs=0xaa7;eip=0x002a2d; 	T(MOV(al, *(raddr(ds,si+0x2C00))));	// 24642 mov     al, [si+2C00h] ;~ 0AA7:2A2D
cs=0xaa7;eip=0x002a31; 	T(CBW);	// 24643 cbw ;~ 0AA7:2A31
cs=0xaa7;eip=0x002a32; 	T(ADD(dx, ax));	// 24644 add     dx, ax ;~ 0AA7:2A32
loc_1ba84:
	// 5928 
cs=0xaa7;eip=0x002a34; 	T(DEC(cx));	// 24647 dec     cx ;~ 0AA7:2A34
cs=0xaa7;eip=0x002a35; 	J(JZ(loc_1bb2f));	// 24648 jz      loc_1BB2F ;~ 0AA7:2A35
cs=0xaa7;eip=0x002a39; 	T(CMP(*(raddr(fs,bx+0x76A)), 0x40));	// 24649 cmp     byte ptr fs:[bx+76Ah], 40h ; '@' ;~ 0AA7:2A39
cs=0xaa7;eip=0x002a3f; 	J(JC(loc_1ba98));	// 24650 jb      short loc_1BA98 ;~ 0AA7:2A3F
cs=0xaa7;eip=0x002a41; 	T(MOV(al, *(raddr(ds,si+0x2E00))));	// 24651 mov     al, [si+2E00h] ;~ 0AA7:2A41
cs=0xaa7;eip=0x002a45; 	T(CBW);	// 24652 cbw ;~ 0AA7:2A45
cs=0xaa7;eip=0x002a46; 	T(ADD(dx, ax));	// 24653 add     dx, ax ;~ 0AA7:2A46
loc_1ba98:
	// 5929 
cs=0xaa7;eip=0x002a48; 	T(DEC(cx));	// 24656 dec     cx ;~ 0AA7:2A48
cs=0xaa7;eip=0x002a49; 	J(JZ(loc_1bb2f));	// 24657 jz      loc_1BB2F ;~ 0AA7:2A49
cs=0xaa7;eip=0x002a4d; 	T(CMP(*(raddr(fs,bx+0x7BA)), 0x40));	// 24658 cmp     byte ptr fs:[bx+7BAh], 40h ; '@' ;~ 0AA7:2A4D
cs=0xaa7;eip=0x002a53; 	J(JC(loc_1baac));	// 24659 jb      short loc_1BAAC ;~ 0AA7:2A53
cs=0xaa7;eip=0x002a55; 	T(MOV(al, *(raddr(ds,si+0x3000))));	// 24660 mov     al, [si+3000h] ;~ 0AA7:2A55
cs=0xaa7;eip=0x002a59; 	T(CBW);	// 24661 cbw ;~ 0AA7:2A59
cs=0xaa7;eip=0x002a5a; 	T(ADD(dx, ax));	// 24662 add     dx, ax ;~ 0AA7:2A5A
loc_1baac:
	// 5930 
cs=0xaa7;eip=0x002a5c; 	T(DEC(cx));	// 24665 dec     cx ;~ 0AA7:2A5C
cs=0xaa7;eip=0x002a5d; 	J(JZ(loc_1bb2f));	// 24666 jz      loc_1BB2F ;~ 0AA7:2A5D
cs=0xaa7;eip=0x002a61; 	T(CMP(*(raddr(fs,bx+0x80A)), 0x40));	// 24667 cmp     byte ptr fs:[bx+80Ah], 40h ; '@' ;~ 0AA7:2A61
cs=0xaa7;eip=0x002a67; 	J(JC(loc_1bac0));	// 24668 jb      short loc_1BAC0 ;~ 0AA7:2A67
cs=0xaa7;eip=0x002a69; 	T(MOV(al, *(raddr(ds,si+0x3200))));	// 24669 mov     al, [si+3200h] ;~ 0AA7:2A69
cs=0xaa7;eip=0x002a6d; 	T(CBW);	// 24670 cbw ;~ 0AA7:2A6D
cs=0xaa7;eip=0x002a6e; 	T(ADD(dx, ax));	// 24671 add     dx, ax ;~ 0AA7:2A6E
loc_1bac0:
	// 5931 
cs=0xaa7;eip=0x002a70; 	T(DEC(cx));	// 24674 dec     cx ;~ 0AA7:2A70
cs=0xaa7;eip=0x002a71; 	J(JZ(loc_1bb2f));	// 24675 jz      short loc_1BB2F ;~ 0AA7:2A71
cs=0xaa7;eip=0x002a73; 	T(CMP(*(raddr(fs,bx+0x85A)), 0x40));	// 24676 cmp     byte ptr fs:[bx+85Ah], 40h ; '@' ;~ 0AA7:2A73
cs=0xaa7;eip=0x002a79; 	J(JC(loc_1bad2));	// 24677 jb      short loc_1BAD2 ;~ 0AA7:2A79
cs=0xaa7;eip=0x002a7b; 	T(MOV(al, *(raddr(ds,si+0x3400))));	// 24678 mov     al, [si+3400h] ;~ 0AA7:2A7B
cs=0xaa7;eip=0x002a7f; 	T(CBW);	// 24679 cbw ;~ 0AA7:2A7F
cs=0xaa7;eip=0x002a80; 	T(ADD(dx, ax));	// 24680 add     dx, ax ;~ 0AA7:2A80
loc_1bad2:
	// 5932 
cs=0xaa7;eip=0x002a82; 	T(DEC(cx));	// 24683 dec     cx ;~ 0AA7:2A82
cs=0xaa7;eip=0x002a83; 	J(JZ(loc_1bb2f));	// 24684 jz      short loc_1BB2F ;~ 0AA7:2A83
cs=0xaa7;eip=0x002a85; 	T(CMP(*(raddr(fs,bx+0x8AA)), 0x40));	// 24685 cmp     byte ptr fs:[bx+8AAh], 40h ; '@' ;~ 0AA7:2A85
cs=0xaa7;eip=0x002a8b; 	J(JC(loc_1bae4));	// 24686 jb      short loc_1BAE4 ;~ 0AA7:2A8B
cs=0xaa7;eip=0x002a8d; 	T(MOV(al, *(raddr(ds,si+0x3600))));	// 24687 mov     al, [si+3600h] ;~ 0AA7:2A8D
cs=0xaa7;eip=0x002a91; 	T(CBW);	// 24688 cbw ;~ 0AA7:2A91
cs=0xaa7;eip=0x002a92; 	T(ADD(dx, ax));	// 24689 add     dx, ax ;~ 0AA7:2A92
loc_1bae4:
	// 5933 
cs=0xaa7;eip=0x002a94; 	T(DEC(cx));	// 24692 dec     cx ;~ 0AA7:2A94
cs=0xaa7;eip=0x002a95; 	J(JZ(loc_1bb2f));	// 24693 jz      short loc_1BB2F ;~ 0AA7:2A95
cs=0xaa7;eip=0x002a97; 	T(CMP(*(raddr(fs,bx+0x8FA)), 0x40));	// 24694 cmp     byte ptr fs:[bx+8FAh], 40h ; '@' ;~ 0AA7:2A97
cs=0xaa7;eip=0x002a9d; 	J(JC(loc_1baf6));	// 24695 jb      short loc_1BAF6 ;~ 0AA7:2A9D
cs=0xaa7;eip=0x002a9f; 	T(MOV(al, *(raddr(ds,si+0x3800))));	// 24696 mov     al, [si+3800h] ;~ 0AA7:2A9F
cs=0xaa7;eip=0x002aa3; 	T(CBW);	// 24697 cbw ;~ 0AA7:2AA3
cs=0xaa7;eip=0x002aa4; 	T(ADD(dx, ax));	// 24698 add     dx, ax ;~ 0AA7:2AA4
loc_1baf6:
	// 5934 
cs=0xaa7;eip=0x002aa6; 	T(DEC(cx));	// 24701 dec     cx ;~ 0AA7:2AA6
cs=0xaa7;eip=0x002aa7; 	J(JZ(loc_1bb2f));	// 24702 jz      short loc_1BB2F ;~ 0AA7:2AA7
cs=0xaa7;eip=0x002aa9; 	T(CMP(*(raddr(fs,bx+0x94A)), 0x40));	// 24703 cmp     byte ptr fs:[bx+94Ah], 40h ; '@' ;~ 0AA7:2AA9
cs=0xaa7;eip=0x002aaf; 	J(JC(loc_1bb08));	// 24704 jb      short loc_1BB08 ;~ 0AA7:2AAF
cs=0xaa7;eip=0x002ab1; 	T(MOV(al, *(raddr(ds,si+0x3A00))));	// 24705 mov     al, [si+3A00h] ;~ 0AA7:2AB1
cs=0xaa7;eip=0x002ab5; 	T(CBW);	// 24706 cbw ;~ 0AA7:2AB5
cs=0xaa7;eip=0x002ab6; 	T(ADD(dx, ax));	// 24707 add     dx, ax ;~ 0AA7:2AB6
loc_1bb08:
	// 5935 
cs=0xaa7;eip=0x002ab8; 	T(DEC(cx));	// 24710 dec     cx ;~ 0AA7:2AB8
cs=0xaa7;eip=0x002ab9; 	J(JZ(loc_1bb2f));	// 24711 jz      short loc_1BB2F ;~ 0AA7:2AB9
cs=0xaa7;eip=0x002abb; 	T(CMP(*(raddr(fs,bx+0x99A)), 0x40));	// 24712 cmp     byte ptr fs:[bx+99Ah], 40h ; '@' ;~ 0AA7:2ABB
cs=0xaa7;eip=0x002ac1; 	J(JC(loc_1bb1a));	// 24713 jb      short loc_1BB1A ;~ 0AA7:2AC1
cs=0xaa7;eip=0x002ac3; 	T(MOV(al, *(raddr(ds,si+0x3C00))));	// 24714 mov     al, [si+3C00h] ;~ 0AA7:2AC3
cs=0xaa7;eip=0x002ac7; 	T(CBW);	// 24715 cbw ;~ 0AA7:2AC7
cs=0xaa7;eip=0x002ac8; 	T(ADD(dx, ax));	// 24716 add     dx, ax ;~ 0AA7:2AC8
loc_1bb1a:
	// 5936 
cs=0xaa7;eip=0x002aca; 	T(DEC(cx));	// 24719 dec     cx ;~ 0AA7:2ACA
cs=0xaa7;eip=0x002acb; 	J(JZ(loc_1bb2f));	// 24720 jz      short loc_1BB2F ;~ 0AA7:2ACB
cs=0xaa7;eip=0x002acd; 	T(CMP(*(raddr(fs,bx+0x9EA)), 0x40));	// 24721 cmp     byte ptr fs:[bx+9EAh], 40h ; '@' ;~ 0AA7:2ACD
cs=0xaa7;eip=0x002ad3; 	J(JC(loc_1bb2c));	// 24722 jb      short loc_1BB2C ;~ 0AA7:2AD3
cs=0xaa7;eip=0x002ad5; 	T(MOV(al, *(raddr(ds,si+0x3E00))));	// 24723 mov     al, [si+3E00h] ;~ 0AA7:2AD5
cs=0xaa7;eip=0x002ad9; 	T(CBW);	// 24724 cbw ;~ 0AA7:2AD9
cs=0xaa7;eip=0x002ada; 	T(ADD(dx, ax));	// 24725 add     dx, ax ;~ 0AA7:2ADA
loc_1bb2c:
	// 5937 
cs=0xaa7;eip=0x002adc; 	T(DEC(cx));	// 24728 dec     cx ;~ 0AA7:2ADC
cs=0xaa7;eip=0x002add; 	J({;});	// 24729 jz      short $+2 ;~ 0AA7:2ADD
loc_1bb2f:
	// 5938 
cs=0xaa7;eip=0x002adf; 	T(SAR(dx, 1));	// 24733 sar     dx, 1 ;~ 0AA7:2ADF
cs=0xaa7;eip=0x002ae1; 	X(MOV(*(raddr(ds,di)), dl));	// 24734 mov     [di], dl ;~ 0AA7:2AE1
cs=0xaa7;eip=0x002ae3; 	T(INC(si));	// 24735 inc     si ;~ 0AA7:2AE3
cs=0xaa7;eip=0x002ae4; 	T(INC(di));	// 24736 inc     di ;~ 0AA7:2AE4
cs=0xaa7;eip=0x002ae5; 	T(CMP(si, offset(dseg,byte_1e0e0)));	// 24737 cmp     si, offset byte_1E0E0 ;~ 0AA7:2AE5
cs=0xaa7;eip=0x002ae9; 	J(JC(loc_1b8bc));	// 24738 jb      loc_1B8BC ;~ 0AA7:2AE9
cs=0xaa7;eip=0x002aed; 	T(MOV(si, offset(dseg,byte_24204)));	// 24739 mov     si, offset byte_24204 ;~ 0AA7:2AED
cs=0xaa7;eip=0x002af0; 	T(MOV(di, offset(dseg,byte_22ee4)));	// 24740 mov     di, offset byte_22EE4 ;~ 0AA7:2AF0
cs=0xaa7;eip=0x002af3; 	T(MOV(cx, 0x200));	// 24741 mov     cx, 200h ;~ 0AA7:2AF3
loc_1bb46:
	// 5939 
cs=0xaa7;eip=0x002af6; 	X(MOVSX(eax, *(raddr(ds,si))));	// 24744 movsx   eax, byte ptr [si] ;~ 0AA7:2AF6
cs=0xaa7;eip=0x002afa; 	T(SHL(eax, 0x10));	// 24745 shl     eax, 10h ;~ 0AA7:2AFA
cs=0xaa7;eip=0x002afe; 	X(MOV(*(dd*)(raddr(ds,di)), eax));	// 24746 mov     [di], eax ;~ 0AA7:2AFE
cs=0xaa7;eip=0x002b01; 	X(MOV(*(dd*)(raddr(ds,di+4)), 0));	// 24747 mov     dword ptr [di+4], 0 ;~ 0AA7:2B01
cs=0xaa7;eip=0x002b09; 	T(INC(si));	// 24748 inc     si ;~ 0AA7:2B09
cs=0xaa7;eip=0x002b0a; 	T(ADD(di, 8));	// 24749 add     di, 8 ;~ 0AA7:2B0A
cs=0xaa7;eip=0x002b0d; 	J(LOOP(loc_1bb46));	// 24750 loop    loc_1BB46 ;~ 0AA7:2B0D
cs=0xaa7;eip=0x002b0f; 	T(MOV(ax, word_24524));	// 24751 mov     ax, word_24524 ;~ 0AA7:2B0F
cs=0xaa7;eip=0x002b12; 	X(MOV(word_24520, ax));	// 24752 mov     word_24520, ax ;~ 0AA7:2B12
cs=0xaa7;eip=0x002b15; 	X(MOV(word_24514, ax));	// 24753 mov     word_24514, ax ;~ 0AA7:2B15
cs=0xaa7;eip=0x002b18; 	T(MOV(di, offset(dseg,byte_22ee4)));	// 24754 mov     di, offset byte_22EE4 ;~ 0AA7:2B18
cs=0xaa7;eip=0x002b1b; 	J(CALL(_spectr_1b406,0));	// 24755 call    _spectr_1B406 ;~ 0AA7:2B1B
cs=0xaa7;eip=0x002b1e; 	T(MOV(si, offset(dseg,byte_22ee4)));	// 24756 mov     si, offset byte_22EE4 ;~ 0AA7:2B1E
cs=0xaa7;eip=0x002b21; 	T(MOV(di, offset(dseg,unk_24074)));	// 24757 mov     di, offset unk_24074 ;~ 0AA7:2B21
cs=0xaa7;eip=0x002b24; 	T(MOV(cx, 0x64));	// 24758 mov     cx, 64h ; 'd' ;~ 0AA7:2B24
cs=0xaa7;eip=0x002b27; 	J(CALL(_spectr_1bbc1,0));	// 24759 call    _spectr_1BBC1 ;~ 0AA7:2B27
cs=0xaa7;eip=0x002b2a; 	T(MOV(ax, 0x0A000));	// 24760 mov     ax, 0A000h ;~ 0AA7:2B2A
cs=0xaa7;eip=0x002b2d; 	T(MOV(es, ax));	// 24761 mov     es, ax ;~ 0AA7:2B2D
cs=0xaa7;eip=0x002b2f; 	T(MOV(bx, offset(dseg,unk_23ee4)));	// 24763 mov     bx, offset unk_23EE4 ;~ 0AA7:2B2F
cs=0xaa7;eip=0x002b32; 	T(MOV(bp, 0x7BC4));	// 24764 mov     bp, 7BC4h ;~ 0AA7:2B32
cs=0xaa7;eip=0x002b35; 	J(CALL(_spectr_1bce9,0));	// 24765 call    _spectr_1BCE9 ;~ 0AA7:2B35
cs=0xaa7;eip=0x002b38; 	T(MOV(bx, offset(dseg,byte_23ee5)));	// 24766 mov     bx, offset byte_23EE5 ;~ 0AA7:2B38
cs=0xaa7;eip=0x002b3b; 	T(MOV(bp, 0x7BD6));	// 24767 mov     bp, 7BD6h ;~ 0AA7:2B3B
cs=0xaa7;eip=0x002b3e; 	J(CALL(_spectr_1bc2d,0));	// 24768 call    _spectr_1BC2D ;~ 0AA7:2B3E
cs=0xaa7;eip=0x002b41; 	T(MOV(bx, offset(dseg,unk_24074)));	// 24769 mov     bx, offset unk_24074 ;~ 0AA7:2B41
cs=0xaa7;eip=0x002b44; 	T(MOV(bp, 0x0F8C4));	// 24770 mov     bp, 0F8C4h ;~ 0AA7:2B44
cs=0xaa7;eip=0x002b47; 	J(CALL(_spectr_1bce9,0));	// 24771 call    _spectr_1BCE9 ;~ 0AA7:2B47
cs=0xaa7;eip=0x002b4a; 	T(MOV(bx, offset(dseg,byte_24075)));	// 24772 mov     bx, offset byte_24075 ;~ 0AA7:2B4A
cs=0xaa7;eip=0x002b4d; 	T(MOV(bp, 0x0F8D6));	// 24773 mov     bp, 0F8D6h ;~ 0AA7:2B4D
cs=0xaa7;eip=0x002b50; 	J(CALL(_spectr_1bc2d,0));	// 24774 call    _spectr_1BC2D ;~ 0AA7:2B50
cs=0xaa7;eip=0x002b53; 	T(MOV(ax, ds));	// 24775 mov     ax, ds ;~ 0AA7:2B53
cs=0xaa7;eip=0x002b55; 	T(MOV(es, ax));	// 24776 mov     es, ax ;~ 0AA7:2B55
cs=0xaa7;eip=0x002b57; 	T(MOV(si, offset(dseg,unk_23ee4)));	// 24778 mov     si, offset unk_23EE4 ;~ 0AA7:2B57
cs=0xaa7;eip=0x002b5a; 	T(MOV(di, offset(dseg,byte_23f48)));	// 24779 mov     di, offset byte_23F48 ;~ 0AA7:2B5A
cs=0xaa7;eip=0x002b5d; 	T(MOV(cx, 0x19));	// 24780 mov     cx, 19h ;~ 0AA7:2B5D
cs=0xaa7;eip=0x002b60; 	T(CLD);	// 24781 cld ;~ 0AA7:2B60
	// 24782 rep movsd ;~ 0AA7:2B61
cs=0xaa7;eip=0x002b61; 	X(	REP MOVSD);	// 24782 rep movsd ;~ 0AA7:2B61
cs=0xaa7;eip=0x002b64; 	T(MOV(si, offset(dseg,unk_24074)));	// 24783 mov     si, offset unk_24074 ;~ 0AA7:2B64
cs=0xaa7;eip=0x002b67; 	T(MOV(di, offset(dseg,byte_240d8)));	// 24784 mov     di, offset byte_240D8 ;~ 0AA7:2B67
cs=0xaa7;eip=0x002b6a; 	T(MOV(cx, 0x19));	// 24785 mov     cx, 19h ;~ 0AA7:2B6A
	// 24786 rep movsd ;~ 0AA7:2B6D
cs=0xaa7;eip=0x002b6d; 	X(	REP MOVSD);	// 24786 rep movsd ;~ 0AA7:2B6D
cs=0xaa7;eip=0x002b70; 	J(RETN(0));	// 24787 retn ;~ 0AA7:2B70

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_f5_draw_spectr: 	goto _f5_draw_spectr;
        case m2c::k_f5_graphspectr: 	goto _f5_graphspectr;
        case m2c::k_init_f5_spectr: 	goto _init_f5_spectr;
        case m2c::kloc_1afed: 	goto loc_1afed;
        case m2c::kloc_1afef: 	goto loc_1afef;
        case m2c::kloc_1aff3: 	goto loc_1aff3;
        case m2c::kloc_1aff6: 	goto loc_1aff6;
        case m2c::kloc_1aff9: 	goto loc_1aff9;
        case m2c::kloc_1affe: 	goto loc_1affe;
        case m2c::kloc_1b003: 	goto loc_1b003;
        case m2c::kloc_1b008: 	goto loc_1b008;
        case m2c::kloc_1b00d: 	goto loc_1b00d;
        case m2c::kloc_1b014: 	goto loc_1b014;
        case m2c::kloc_1b01b: 	goto loc_1b01b;
        case m2c::kloc_1b020: 	goto loc_1b020;
        case m2c::kloc_1b025: 	goto loc_1b025;
        case m2c::kloc_1b031: 	goto loc_1b031;
        case m2c::kloc_1b033: 	goto loc_1b033;
        case m2c::kloc_1b039: 	goto loc_1b039;
        case m2c::kloc_1b03c: 	goto loc_1b03c;
        case m2c::kloc_1b03f: 	goto loc_1b03f;
        case m2c::kloc_1b044: 	goto loc_1b044;
        case m2c::kloc_1b047: 	goto loc_1b047;
        case m2c::kloc_1b04c: 	goto loc_1b04c;
        case m2c::kloc_1b051: 	goto loc_1b051;
        case m2c::kloc_1b054: 	goto loc_1b054;
        case m2c::kloc_1b057: 	goto loc_1b057;
        case m2c::kloc_1b05c: 	goto loc_1b05c;
        case m2c::kloc_1b05f: 	goto loc_1b05f;
        case m2c::kloc_1b080: 	goto loc_1b080;
        case m2c::kloc_1b5ec: 	goto loc_1b5ec;
        case m2c::kloc_1b5fc: 	goto loc_1b5fc;
        case m2c::kloc_1b610: 	goto loc_1b610;
        case m2c::kloc_1b624: 	goto loc_1b624;
        case m2c::kloc_1b638: 	goto loc_1b638;
        case m2c::kloc_1b64c: 	goto loc_1b64c;
        case m2c::kloc_1b660: 	goto loc_1b660;
        case m2c::kloc_1b674: 	goto loc_1b674;
        case m2c::kloc_1b688: 	goto loc_1b688;
        case m2c::kloc_1b69c: 	goto loc_1b69c;
        case m2c::kloc_1b6b0: 	goto loc_1b6b0;
        case m2c::kloc_1b6c4: 	goto loc_1b6c4;
        case m2c::kloc_1b6d8: 	goto loc_1b6d8;
        case m2c::kloc_1b6ec: 	goto loc_1b6ec;
        case m2c::kloc_1b700: 	goto loc_1b700;
        case m2c::kloc_1b714: 	goto loc_1b714;
        case m2c::kloc_1b728: 	goto loc_1b728;
        case m2c::kloc_1b73c: 	goto loc_1b73c;
        case m2c::kloc_1b750: 	goto loc_1b750;
        case m2c::kloc_1b764: 	goto loc_1b764;
        case m2c::kloc_1b778: 	goto loc_1b778;
        case m2c::kloc_1b78c: 	goto loc_1b78c;
        case m2c::kloc_1b7a0: 	goto loc_1b7a0;
        case m2c::kloc_1b7b4: 	goto loc_1b7b4;
        case m2c::kloc_1b7c8: 	goto loc_1b7c8;
        case m2c::kloc_1b7dc: 	goto loc_1b7dc;
        case m2c::kloc_1b7f0: 	goto loc_1b7f0;
        case m2c::kloc_1b802: 	goto loc_1b802;
        case m2c::kloc_1b814: 	goto loc_1b814;
        case m2c::kloc_1b826: 	goto loc_1b826;
        case m2c::kloc_1b838: 	goto loc_1b838;
        case m2c::kloc_1b84a: 	goto loc_1b84a;
        case m2c::kloc_1b85c: 	goto loc_1b85c;
        case m2c::kloc_1b85f: 	goto loc_1b85f;
        case m2c::kloc_1b876: 	goto loc_1b876;
        case m2c::kloc_1b8bc: 	goto loc_1b8bc;
        case m2c::kloc_1b8cc: 	goto loc_1b8cc;
        case m2c::kloc_1b8e0: 	goto loc_1b8e0;
        case m2c::kloc_1b8f4: 	goto loc_1b8f4;
        case m2c::kloc_1b908: 	goto loc_1b908;
        case m2c::kloc_1b91c: 	goto loc_1b91c;
        case m2c::kloc_1b930: 	goto loc_1b930;
        case m2c::kloc_1b944: 	goto loc_1b944;
        case m2c::kloc_1b958: 	goto loc_1b958;
        case m2c::kloc_1b96c: 	goto loc_1b96c;
        case m2c::kloc_1b980: 	goto loc_1b980;
        case m2c::kloc_1b994: 	goto loc_1b994;
        case m2c::kloc_1b9a8: 	goto loc_1b9a8;
        case m2c::kloc_1b9bc: 	goto loc_1b9bc;
        case m2c::kloc_1b9d0: 	goto loc_1b9d0;
        case m2c::kloc_1b9e4: 	goto loc_1b9e4;
        case m2c::kloc_1b9f8: 	goto loc_1b9f8;
        case m2c::kloc_1ba0c: 	goto loc_1ba0c;
        case m2c::kloc_1ba20: 	goto loc_1ba20;
        case m2c::kloc_1ba34: 	goto loc_1ba34;
        case m2c::kloc_1ba48: 	goto loc_1ba48;
        case m2c::kloc_1ba5c: 	goto loc_1ba5c;
        case m2c::kloc_1ba70: 	goto loc_1ba70;
        case m2c::kloc_1ba84: 	goto loc_1ba84;
        case m2c::kloc_1ba98: 	goto loc_1ba98;
        case m2c::kloc_1baac: 	goto loc_1baac;
        case m2c::kloc_1bac0: 	goto loc_1bac0;
        case m2c::kloc_1bad2: 	goto loc_1bad2;
        case m2c::kloc_1bae4: 	goto loc_1bae4;
        case m2c::kloc_1baf6: 	goto loc_1baf6;
        case m2c::kloc_1bb08: 	goto loc_1bb08;
        case m2c::kloc_1bb1a: 	goto loc_1bb1a;
        case m2c::kloc_1bb2c: 	goto loc_1bb2c;
        case m2c::kloc_1bb2f: 	goto loc_1bb2f;
        case m2c::kloc_1bb46: 	goto loc_1bb46;
        case m2c::klocret_1b083: 	goto locret_1b083;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _setvideomode(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _setvideomode:
    _begin:
cs=0xaa7;eip=0x00146b; 	T(CMP(byte_1de70, 0));	// 22098 cmp     byte_1DE70, 0 ;~ 0AA7:146B
cs=0xaa7;eip=0x001470; 	J(JZ(locret_1a4f1));	// 22099 jz      short locret_1A4F1 ;~ 0AA7:1470
cs=0xaa7;eip=0x001472; 	T(CMP(byte_1de70, 1));	// 22100 cmp     byte_1DE70, 1 ;~ 0AA7:1472
cs=0xaa7;eip=0x001477; 	J(JZ(locret_1a4f1));	// 22101 jz      short locret_1A4F1 ;~ 0AA7:1477
cs=0xaa7;eip=0x001479; 	T(MOV(ax, 3));	// 22102 mov     ax, 3 ;~ 0AA7:1479
cs=0xaa7;eip=0x00147c; 	T(CMP(byte_1de70, 2));	// 22103 cmp     byte_1DE70, 2 ;~ 0AA7:147C
cs=0xaa7;eip=0x001481; 	J(JNZ(loc_1a4d5));	// 22104 jnz     short loc_1A4D5 ;~ 0AA7:1481
cs=0xaa7;eip=0x001483; 	T(OR(al, 0x80));	// 22105 or      al, 80h ;~ 0AA7:1483
loc_1a4d5:
	// 5737 
cs=0xaa7;eip=0x001485; 	S(_INT(0x10));	// 22108 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 0AA7:1485
cs=0xaa7;eip=0x001487; 	J(CALL(_txt_blinkingoff,0));	// 22110 call    _txt_blinkingoff ;~ 0AA7:1487
cs=0xaa7;eip=0x00148a; 	T(CMP(byte_1de86, 1));	// 22111 cmp     byte_1DE86, 1 ;~ 0AA7:148A
cs=0xaa7;eip=0x00148f; 	J(JZ(loc_1a4e8));	// 22112 jz      short loc_1A4E8 ;~ 0AA7:148F
cs=0xaa7;eip=0x001491; 	T(MOV(ax, 0x1111));	// 22113 mov     ax, 1111h ;~ 0AA7:1491
cs=0xaa7;eip=0x001494; 	T(XOR(bl, bl));	// 22114 xor     bl, bl ;~ 0AA7:1494
cs=0xaa7;eip=0x001496; 	S(_INT(0x10));	// 22115 int     10h             ; - VIDEO - TEXT-MODE CHARACTER GENERATOR FUNCTIONS (PS, EGA, VGA) ;~ 0AA7:1496
loc_1a4e8:
	// 5738 
cs=0xaa7;eip=0x001498; 	T(MOV(dx, 0x1D00));	// 22122 mov     dx, 1D00h ;~ 0AA7:1498
cs=0xaa7;eip=0x00149b; 	T(XOR(bh, bh));	// 22123 xor     bh, bh ;~ 0AA7:149B
cs=0xaa7;eip=0x00149d; 	T(MOV(ah, 2));	// 22124 mov     ah, 2 ;~ 0AA7:149D
cs=0xaa7;eip=0x00149f; 	S(_INT(0x10));	// 22125 int     10h             ; - VIDEO - SET CURSOR POSITION ;~ 0AA7:149F
locret_1a4f1:
	// 5739 
cs=0xaa7;eip=0x0014a1; 	J(RETN(0));	// 22131 retn ;~ 0AA7:14A1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_setvideomode: 	goto _setvideomode;
        case m2c::kloc_1a4d5: 	goto loc_1a4d5;
        case m2c::kloc_1a4e8: 	goto loc_1a4e8;
        case m2c::klocret_1a4f1: 	goto locret_1a4f1;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _txt_draw_top_title(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _txt_draw_top_title:
    _begin:
cs=0xaa7;eip=0x00170d; 	T(MOV(cx, 0x102));	// 22386 mov     cx, 102h ;~ 0AA7:170D
cs=0xaa7;eip=0x001710; 	T(MOV(dx, 0x44D));	// 22387 mov     dx, 44Dh ;~ 0AA7:1710
cs=0xaa7;eip=0x001713; 	T(MOV(bl, 0x78));	// 22388 mov     bl, 78h ; 'x' ;~ 0AA7:1713
cs=0xaa7;eip=0x001715; 	T(MOV(ax, 0x7F03));	// 22389 mov     ax, 7F03h ;~ 0AA7:1715
cs=0xaa7;eip=0x001718; 	J(CALL(_draw_frame,0));	// 22390 call    _draw_frame ;~ 0AA7:1718
cs=0xaa7;eip=0x00171b; 	T(LES(di, _videomempointer));	// 22391 les     di, _videomempointer ;~ 0AA7:171B
cs=0xaa7;eip=0x00171f; 	T(MOV(si, offset(dseg,_atop_title)));	// 22392 mov     si, offset _atop_title ; str ;~ 0AA7:171F
cs=0xaa7;eip=0x001722; 	J(CALL(_write_scr,0));	// 22393 call    _write_scr ;~ 0AA7:1722
cs=0xaa7;eip=0x001725; 	J(RETN(0));	// 22394 retn ;~ 0AA7:1725

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_txt_draw_top_title: 	goto _txt_draw_top_title;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _txt_draw_bottom(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _txt_draw_bottom:
    _begin:
cs=0xaa7;eip=0x001726; 	T(MOV(si, offset(dseg,_buffer_1dc6c)));	// 22403 mov     si, offset _buffer_1DC6C ;~ 0AA7:1726
cs=0xaa7;eip=0x001729; 	T(MOV(eax, 0x20202020));	// 22404 mov     eax, '    ' ;~ 0AA7:1729
cs=0xaa7;eip=0x00172f; 	X(MOV(*(dd*)(raddr(ds,si)), eax));	// 22405 mov     [si], eax ;~ 0AA7:172F
cs=0xaa7;eip=0x001732; 	X(MOV(*(dd*)(raddr(ds,si+4)), eax));	// 22406 mov     [si+4], eax ;~ 0AA7:1732
cs=0xaa7;eip=0x001736; 	X(MOV(*(dd*)(raddr(ds,si+8)), eax));	// 22407 mov     [si+8], eax ;~ 0AA7:1736
cs=0xaa7;eip=0x00173a; 	X(MOV(*(raddr(ds,si+0x0C)), al));	// 22408 mov     [si+0Ch], al ;~ 0AA7:173A
cs=0xaa7;eip=0x00173d; 	X(MOV(*(raddr(ds,si+0x0D)), 0));	// 22409 mov     byte ptr [si+0Dh], 0 ;~ 0AA7:173D
cs=0xaa7;eip=0x001741; 	T(MOV(al, byte_1de75));	// 22410 mov     al, byte_1DE75 ;~ 0AA7:1741
cs=0xaa7;eip=0x001744; 	J(CALL(_my_u8toa10,0));	// 22411 call    _my_u8toa10 ;~ 0AA7:1744
cs=0xaa7;eip=0x001747; 	X(MOV(*(dd*)(raddr(ds,si)), 0x20746120));	// 22412 mov     dword ptr [si], 20746120h ; ' at ' ;~ 0AA7:1747
cs=0xaa7;eip=0x00174e; 	T(ADD(si, 4));	// 22413 add     si, 4 ;~ 0AA7:174E
cs=0xaa7;eip=0x001751; 	T(MOV(al, byte_1de76));	// 22414 mov     al, byte_1DE76 ;~ 0AA7:1751
cs=0xaa7;eip=0x001754; 	J(CALL(_my_u8toa10,0));	// 22415 call    _my_u8toa10 ;~ 0AA7:1754
cs=0xaa7;eip=0x001757; 	X(MOV(*(dw*)(raddr(ds,si)), 0x7062));	// 22416 mov     word ptr [si], 7062h ; bp ;~ 0AA7:1757
cs=0xaa7;eip=0x00175b; 	X(MOV(*(raddr(ds,si+2)), 'm'));	// 22417 mov     byte ptr [si+2], 'm' ;~ 0AA7:175B
cs=0xaa7;eip=0x00175f; 	T(MOV(si, offset(dseg,_buffer_1dc6c)));	// 22418 mov     si, offset _buffer_1DC6C ; str ;~ 0AA7:175F
cs=0xaa7;eip=0x001762; 	T(LES(di, _videopoint_shiftd));	// 22419 les     di, _videopoint_shiftd ;~ 0AA7:1762
cs=0xaa7;eip=0x001766; 	T(ADD(di, 0x48A));	// 22420 add     di, 48Ah        ; videoptr ;~ 0AA7:1766
cs=0xaa7;eip=0x00176a; 	T(MOV(ah, 0x7F));	// 22421 mov     ah, 7Fh         ; color ;~ 0AA7:176A
cs=0xaa7;eip=0x00176c; 	J(CALL(_put_message,0));	// 22422 call    _put_message ;~ 0AA7:176C
cs=0xaa7;eip=0x00176f; 	T(MOV(si, offset(dseg,_apal)));	// 22423 mov     si, offset _aPal ; "(PAL) " ;~ 0AA7:176F
cs=0xaa7;eip=0x001772; 	T(TEST(_flg_play_settings, 8));	// 22424 test    _flg_play_settings, 8 ;~ 0AA7:1772
cs=0xaa7;eip=0x001777; 	J(JNZ(loc_1a7cc));	// 22425 jnz     short loc_1A7CC ;~ 0AA7:1777
cs=0xaa7;eip=0x001779; 	T(MOV(si, offset(dseg,_antsc)));	// 22426 mov     si, offset _aNtsc ; str ;~ 0AA7:1779
loc_1a7cc:
	// 5754 
cs=0xaa7;eip=0x00177c; 	T(LES(di, _videopoint_shiftd));	// 22429 les     di, _videopoint_shiftd ;~ 0AA7:177C
cs=0xaa7;eip=0x001780; 	T(ADD(di, 0x476));	// 22430 add     di, 476h        ; videoptr ;~ 0AA7:1780
cs=0xaa7;eip=0x001784; 	T(MOV(ah, 0x7E));	// 22431 mov     ah, 7Eh ; '~'   ; color ;~ 0AA7:1784
cs=0xaa7;eip=0x001786; 	J(CALL(_put_message,0));	// 22432 call    _put_message ;~ 0AA7:1786
cs=0xaa7;eip=0x001789; 	T(MOV(si, offset(dseg,_buffer_1dc6c)));	// 22433 mov     si, offset _buffer_1DC6C ;~ 0AA7:1789
cs=0xaa7;eip=0x00178c; 	T(MOV(al, byte_1de72));	// 22434 mov     al, byte_1DE72 ;~ 0AA7:178C
cs=0xaa7;eip=0x00178f; 	T(INC(al));	// 22435 inc     al ;~ 0AA7:178F
cs=0xaa7;eip=0x001791; 	J(CALL(_my_u8toa10,0));	// 22436 call    _my_u8toa10 ;~ 0AA7:1791
cs=0xaa7;eip=0x001794; 	X(MOV(*(raddr(ds,si)), '/'));	// 22437 mov     byte ptr [si], '/' ;~ 0AA7:1794
cs=0xaa7;eip=0x001797; 	T(INC(si));	// 22438 inc     si ;~ 0AA7:1797
cs=0xaa7;eip=0x001798; 	T(MOV(al, byte_1de73));	// 22439 mov     al, byte_1DE73 ;~ 0AA7:1798
cs=0xaa7;eip=0x00179b; 	J(CALL(_my_u8toa10,0));	// 22440 call    _my_u8toa10 ;~ 0AA7:179B
cs=0xaa7;eip=0x00179e; 	X(MOV(*(dd*)(raddr(ds,si)), '   '));	// 22441 mov     dword ptr [si], '   ' ;~ 0AA7:179E
cs=0xaa7;eip=0x0017a5; 	T(MOV(si, offset(dseg,_buffer_1dc6c)));	// 22442 mov     si, offset _buffer_1DC6C ; str ;~ 0AA7:17A5
cs=0xaa7;eip=0x0017a8; 	T(LES(di, _videopoint_shiftd));	// 22443 les     di, _videopoint_shiftd ;~ 0AA7:17A8
cs=0xaa7;eip=0x0017ac; 	T(ADD(di, 0x34A));	// 22444 add     di, 34Ah        ; videoptr ;~ 0AA7:17AC
cs=0xaa7;eip=0x0017b0; 	T(MOV(ah, 0x7F));	// 22445 mov     ah, 7Fh         ; color ;~ 0AA7:17B0
cs=0xaa7;eip=0x0017b2; 	J(CALL(_put_message,0));	// 22446 call    _put_message ;~ 0AA7:17B2
cs=0xaa7;eip=0x0017b5; 	T(MOV(si, offset(dseg,_buffer_1dc6c)));	// 22447 mov     si, offset _buffer_1DC6C ;~ 0AA7:17B5
cs=0xaa7;eip=0x0017b8; 	T(MOV(al, byte_1de74));	// 22448 mov     al, byte_1DE74 ;~ 0AA7:17B8
cs=0xaa7;eip=0x0017bb; 	T(INC(al));	// 22449 inc     al ;~ 0AA7:17BB
cs=0xaa7;eip=0x0017bd; 	J(CALL(_my_u8toa10,0));	// 22450 call    _my_u8toa10 ;~ 0AA7:17BD
cs=0xaa7;eip=0x0017c0; 	X(MOV(*(dd*)(raddr(ds,si)), 0x2034362F));	// 22451 mov     dword ptr [si], 2034362Fh ; /64 ;~ 0AA7:17C0
cs=0xaa7;eip=0x0017c7; 	X(MOV(*(dw*)(raddr(ds,si+4)), ' '));	// 22452 mov     word ptr [si+4], ' ' ;~ 0AA7:17C7
cs=0xaa7;eip=0x0017cc; 	T(SUB(si, cx));	// 22453 sub     si, cx          ; str ;~ 0AA7:17CC
cs=0xaa7;eip=0x0017ce; 	T(LES(di, _videopoint_shiftd));	// 22454 les     di, _videopoint_shiftd ;~ 0AA7:17CE
cs=0xaa7;eip=0x0017d2; 	T(ADD(di, 0x3EA));	// 22455 add     di, 3EAh        ; videoptr ;~ 0AA7:17D2
cs=0xaa7;eip=0x0017d6; 	T(MOV(ah, 0x7F));	// 22456 mov     ah, 7Fh         ; color ;~ 0AA7:17D6
cs=0xaa7;eip=0x0017d8; 	J(CALL(_put_message,0));	// 22457 call    _put_message ;~ 0AA7:17D8
cs=0xaa7;eip=0x0017db; 	T(LES(di, _videopoint_shiftd));	// 22458 les     di, _videopoint_shiftd ;~ 0AA7:17DB
cs=0xaa7;eip=0x0017df; 	T(ADD(di, 0x198));	// 22459 add     di, 198h ;~ 0AA7:17DF
cs=0xaa7;eip=0x0017e3; 	T(MOV(ah, 0x7C));	// 22460 mov     ah, 7Ch ; '|' ;~ 0AA7:17E3
cs=0xaa7;eip=0x0017e5; 	T(TEST(_flg_play_settings, 1));	// 22461 test    _flg_play_settings, 1 ;~ 0AA7:17E5
cs=0xaa7;eip=0x0017ea; 	J(JNZ(loc_1a83e));	// 22462 jnz     short loc_1A83E ;~ 0AA7:17EA
cs=0xaa7;eip=0x0017ec; 	T(MOV(ah, 0x78));	// 22463 mov     ah, 78h ; 'x' ;~ 0AA7:17EC
loc_1a83e:
	// 5755 
cs=0xaa7;eip=0x0017ee; 	T(MOV(al, 0x0FE));	// 22466 mov     al, 0FEh ; '
cs=0xaa7;eip=0x0017f0; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 22467 mov     es:[di], ax ;~ 0AA7:17F0
cs=0xaa7;eip=0x0017f3; 	T(LES(di, _videopoint_shiftd));	// 22468 les     di, _videopoint_shiftd ;~ 0AA7:17F3
cs=0xaa7;eip=0x0017f7; 	T(ADD(di, 0x238));	// 22469 add     di, 238h ;~ 0AA7:17F7
cs=0xaa7;eip=0x0017fb; 	T(MOV(ah, 0x7C));	// 22470 mov     ah, 7Ch ; '|' ;~ 0AA7:17FB
cs=0xaa7;eip=0x0017fd; 	T(TEST(_flg_play_settings, 2));	// 22471 test    _flg_play_settings, 2 ;~ 0AA7:17FD
cs=0xaa7;eip=0x001802; 	J(JNZ(loc_1a856));	// 22472 jnz     short loc_1A856 ;~ 0AA7:1802
cs=0xaa7;eip=0x001804; 	T(MOV(ah, 0x78));	// 22473 mov     ah, 78h ; 'x' ;~ 0AA7:1804
loc_1a856:
	// 5756 
cs=0xaa7;eip=0x001806; 	T(MOV(al, 0x0FE));	// 22476 mov     al, 0FEh ; '
cs=0xaa7;eip=0x001808; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 22477 mov     es:[di], ax ;~ 0AA7:1808
cs=0xaa7;eip=0x00180b; 	T(LES(di, _videopoint_shiftd));	// 22478 les     di, _videopoint_shiftd ;~ 0AA7:180B
cs=0xaa7;eip=0x00180f; 	T(ADD(di, 0x2D8));	// 22479 add     di, 2D8h ;~ 0AA7:180F
cs=0xaa7;eip=0x001813; 	T(MOV(ah, 0x7C));	// 22480 mov     ah, 7Ch ; '|' ;~ 0AA7:1813
cs=0xaa7;eip=0x001815; 	T(TEST(_flg_play_settings, 4));	// 22481 test    _flg_play_settings, 4 ;~ 0AA7:1815
cs=0xaa7;eip=0x00181a; 	J(JNZ(loc_1a86e));	// 22482 jnz     short loc_1A86E ;~ 0AA7:181A
cs=0xaa7;eip=0x00181c; 	T(MOV(ah, 0x78));	// 22483 mov     ah, 78h ; 'x' ;~ 0AA7:181C
loc_1a86e:
	// 5757 
cs=0xaa7;eip=0x00181e; 	T(MOV(al, 0x0FE));	// 22486 mov     al, 0FEh ; '
cs=0xaa7;eip=0x001820; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 22487 mov     es:[di], ax ;~ 0AA7:1820
cs=0xaa7;eip=0x001823; 	T(LES(di, _videopoint_shiftd));	// 22488 les     di, _videopoint_shiftd ;~ 0AA7:1823
cs=0xaa7;eip=0x001827; 	T(ADD(di, 0x378));	// 22489 add     di, 378h        ; interp text offset ;~ 0AA7:1827
cs=0xaa7;eip=0x00182b; 	T(MOV(ah, 0x7C));	// 22490 mov     ah, 7Ch ; '|' ;~ 0AA7:182B
cs=0xaa7;eip=0x00182d; 	T(TEST(_flg_play_settings, 0x10));	// 22491 test    _flg_play_settings, 10h ;~ 0AA7:182D
cs=0xaa7;eip=0x001832; 	J(JNZ(loc_1a886));	// 22492 jnz     short loc_1A886 ;~ 0AA7:1832
cs=0xaa7;eip=0x001834; 	T(MOV(ah, 0x78));	// 22493 mov     ah, 78h ; 'x' ;~ 0AA7:1834
loc_1a886:
	// 5758 
cs=0xaa7;eip=0x001836; 	T(MOV(al, 0x0FE));	// 22496 mov     al, 0FEh ; '
cs=0xaa7;eip=0x001838; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 22497 mov     es:[di], ax ;~ 0AA7:1838
cs=0xaa7;eip=0x00183b; 	T(MOV(si, offset(dseg,_buffer_1dc6c)));	// 22498 mov     si, offset _buffer_1DC6C ;~ 0AA7:183B
cs=0xaa7;eip=0x00183e; 	T(IMUL3_2(ax,word_1de6a,100));	// 22499 imul    ax, word_1DE6A, 100 ;~ 0AA7:183E
cs=0xaa7;eip=0x001843; 	T(MOV(al, ah));	// 22500 mov     al, ah ;~ 0AA7:1843
cs=0xaa7;eip=0x001845; 	J(CALL(_my_u8toa10,0));	// 22501 call    _my_u8toa10 ;~ 0AA7:1845
cs=0xaa7;eip=0x001848; 	X(MOV(*(dd*)(raddr(ds,si)), 0x202025));	// 22502 mov     dword ptr [si], 202025h ; '%  ' ;~ 0AA7:1848
cs=0xaa7;eip=0x00184f; 	T(SUB(si, cx));	// 22503 sub     si, cx          ; str ;~ 0AA7:184F
cs=0xaa7;eip=0x001851; 	T(LES(di, _videopoint_shiftd));	// 22504 les     di, _videopoint_shiftd ;~ 0AA7:1851
cs=0xaa7;eip=0x001855; 	T(ADD(di, 0x43A));	// 22505 add     di, 43Ah        ; videoptr ;~ 0AA7:1855
cs=0xaa7;eip=0x001859; 	T(MOV(ah, 0x7F));	// 22506 mov     ah, 7Fh         ; color ;~ 0AA7:1859
cs=0xaa7;eip=0x00185b; 	J(CALL(_put_message,0));	// 22507 call    _put_message ;~ 0AA7:185B
cs=0xaa7;eip=0x00185e; 	T(MOV(si, offset(dseg,_buffer_1dc6c)));	// 22508 mov     si, offset _buffer_1DC6C ;~ 0AA7:185E
cs=0xaa7;eip=0x001861; 	T(MOV(ax, word_1de6c));	// 22509 mov     ax, word_1DE6C ;~ 0AA7:1861
cs=0xaa7;eip=0x001864; 	J(CALL(_my_u16toa10,0));	// 22510 call    _my_u16toa10 ;~ 0AA7:1864
cs=0xaa7;eip=0x001867; 	X(MOV(*(dd*)(raddr(ds,si)), 0x202025));	// 22511 mov     dword ptr [si], 202025h ; '%  ' ;~ 0AA7:1867
cs=0xaa7;eip=0x00186e; 	T(SUB(si, cx));	// 22512 sub     si, cx          ; str ;~ 0AA7:186E
cs=0xaa7;eip=0x001870; 	T(LES(di, _videopoint_shiftd));	// 22513 les     di, _videopoint_shiftd ;~ 0AA7:1870
cs=0xaa7;eip=0x001874; 	T(ADD(di, 0x4DA));	// 22514 add     di, 4DAh        ; videoptr ;~ 0AA7:1874
cs=0xaa7;eip=0x001878; 	T(MOV(ah, 0x7F));	// 22515 mov     ah, 7Fh         ; color ;~ 0AA7:1878
cs=0xaa7;eip=0x00187a; 	J(CALL(_put_message,0));	// 22516 call    _put_message ;~ 0AA7:187A
cs=0xaa7;eip=0x00187d; 	T(MOV(al, 0x0FF));	// 22517 mov     al, 0FFh ;~ 0AA7:187D
cs=0xaa7;eip=0x00187f; 	J(CALLF(_getset_playstate,0));	// 22518 call    _getset_playstate ;~ 0AA7:187F
cs=0xaa7;eip=0x001884; 	T(MOVZX(si, al));	// 22519 movzx   si, al ;~ 0AA7:1884
cs=0xaa7;eip=0x001887; 	T(SHL(si, 2));	// 22520 shl     si, 2 ;~ 0AA7:1887
cs=0xaa7;eip=0x00188a; 	T(ADD(si, offset(dseg,_aplaypausloop)));	// 22521 add     si, offset _aPlaypausloop ; "PlayPausLoop" ;~ 0AA7:188A
cs=0xaa7;eip=0x00188e; 	T(LES(di, _videopoint_shiftd));	// 22522 les     di, _videopoint_shiftd ;~ 0AA7:188E
cs=0xaa7;eip=0x001892; 	T(ADD(di, 0x0FC));	// 22523 add     di, 0FCh ; '
cs=0xaa7;eip=0x001896; 	T(MOV(ah, 0x7E));	// 22524 mov     ah, 7Eh ; '~' ;~ 0AA7:1896
cs=0xaa7;eip=0x001898; 	T(MOV(cx, 4));	// 22525 mov     cx, 4 ;~ 0AA7:1898
loc_1a8eb:
	// 5759 
cs=0xaa7;eip=0x00189b; 	T(MOV(al, *(raddr(ds,si))));	// 22528 mov     al, [si] ;~ 0AA7:189B
cs=0xaa7;eip=0x00189d; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 22529 mov     es:[di], ax ;~ 0AA7:189D
cs=0xaa7;eip=0x0018a0; 	T(INC(si));	// 22530 inc     si ;~ 0AA7:18A0
cs=0xaa7;eip=0x0018a1; 	T(ADD(di, 2));	// 22531 add     di, 2 ;~ 0AA7:18A1
cs=0xaa7;eip=0x0018a4; 	T(DEC(cx));	// 22532 dec     cx ;~ 0AA7:18A4
cs=0xaa7;eip=0x0018a5; 	J(JNZ(loc_1a8eb));	// 22533 jnz     short loc_1A8EB ;~ 0AA7:18A5
cs=0xaa7;eip=0x0018a7; 	J(RETN(0));	// 22534 retn ;~ 0AA7:18A7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_txt_draw_bottom: 	goto _txt_draw_bottom;
        case m2c::kloc_1a7cc: 	goto loc_1a7cc;
        case m2c::kloc_1a83e: 	goto loc_1a83e;
        case m2c::kloc_1a856: 	goto loc_1a856;
        case m2c::kloc_1a86e: 	goto loc_1a86e;
        case m2c::kloc_1a886: 	goto loc_1a886;
        case m2c::kloc_1a8eb: 	goto loc_1a8eb;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool sub_1ab8c(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    sub_1ab8c:
    _begin:
cs=0xaa7;eip=0x001b3c; 	T(MOV(al, *(raddr(fs,bx+0x35))));	// 22858 mov     al, fs:[bx+35h] ;~ 0AA7:1B3C
cs=0xaa7;eip=0x001b40; 	T(AND(ax, 0x0F));	// 22859 and     ax, 0Fh ;~ 0AA7:1B40
cs=0xaa7;eip=0x001b43; 	T(ADD(al, cl));	// 22860 add     al, cl ;~ 0AA7:1B43
cs=0xaa7;eip=0x001b45; 	T(CMP(al, 0x0C));	// 22861 cmp     al, 0Ch ;~ 0AA7:1B45
cs=0xaa7;eip=0x001b47; 	J(JBE(loc_1ab9b));	// 22862 jbe     short loc_1AB9B ;~ 0AA7:1B47
cs=0xaa7;eip=0x001b49; 	T(SUB(al, 0x0C));	// 22863 sub     al, 0Ch ;~ 0AA7:1B49
loc_1ab9b:
	// 5791 
cs=0xaa7;eip=0x001b4b; 	T(SHL(ax, 1));	// 22866 shl     ax, 1 ;~ 0AA7:1B4B
cs=0xaa7;eip=0x001b4d; 	X(PUSH(si));	// 22867 push    si ;~ 0AA7:1B4D
cs=0xaa7;eip=0x001b4e; 	T(MOV(si, ax));	// 22868 mov     si, ax ;~ 0AA7:1B4E
cs=0xaa7;eip=0x001b50; 	T(MOV(ax, *(dw*)((_notes)+si)));	// 22869 mov     ax, word ptr _notes[si] ; "  C-C#D-D#E-F-F#G-G#A-A#B-" ;~ 0AA7:1B50
cs=0xaa7;eip=0x001b54; 	X(POP(si));	// 22870 pop     si ;~ 0AA7:1B54
cs=0xaa7;eip=0x001b55; 	T(CMP(ah, 0x2D));	// 22871 cmp     ah, 2Dh ; '-' ;~ 0AA7:1B55
cs=0xaa7;eip=0x001b58; 	J(JZ(loc_1abab));	// 22872 jz      short loc_1ABAB ;~ 0AA7:1B58
cs=0xaa7;eip=0x001b5a; 	J(RETN(0));	// 22873 retn ;~ 0AA7:1B5A
loc_1abab:
	// 5792 
cs=0xaa7;eip=0x001b5b; 	T(MOV(ah, 0x20));	// 22877 mov     ah, 20h ; ' ' ;~ 0AA7:1B5B
cs=0xaa7;eip=0x001b5d; 	J(RETN(0));	// 22878 retn ;~ 0AA7:1B5D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kloc_1ab9b: 	goto loc_1ab9b;
        case m2c::kloc_1abab: 	goto loc_1abab;
        case m2c::ksub_1ab8c: 	goto sub_1ab8c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _txt_1abae(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _txt_1abae:
    _begin:
cs=0xaa7;eip=0x001b5e; 	T(MOV(ah, 0x7B));	// 22886 mov     ah, 7Bh ; '{' ;~ 0AA7:1B5E
cs=0xaa7;eip=0x001b60; 	T(MOV(cx, 0x16));	// 22887 mov     cx, 16h ;~ 0AA7:1B60
loc_1abb3:
	// 5793 
cs=0xaa7;eip=0x001b63; 	T(MOV(al, *(raddr(fs,si))));	// 22890 mov     al, fs:[si] ;~ 0AA7:1B63
cs=0xaa7;eip=0x001b66; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 22891 mov     es:[di], ax ;~ 0AA7:1B66
cs=0xaa7;eip=0x001b69; 	T(INC(si));	// 22892 inc     si ;~ 0AA7:1B69
cs=0xaa7;eip=0x001b6a; 	T(ADD(di, 2));	// 22893 add     di, 2 ;~ 0AA7:1B6A
cs=0xaa7;eip=0x001b6d; 	T(DEC(cx));	// 22894 dec     cx ;~ 0AA7:1B6D
cs=0xaa7;eip=0x001b6e; 	J(JNZ(loc_1abb3));	// 22895 jnz     short loc_1ABB3 ;~ 0AA7:1B6E
cs=0xaa7;eip=0x001b70; 	J(RETN(0));	// 22896 retn ;~ 0AA7:1B70

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_txt_1abae: 	goto _txt_1abae;
        case m2c::kloc_1abb3: 	goto loc_1abb3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _my_pnt_u32toa_fill(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _my_pnt_u32toa_fill:
    _begin:
cs=0xaa7;eip=0x001ca6; 	X(MOV(*(dw*)(raddr(ds,di)), 0x7F02));	// 23028 mov     word ptr [di], 7F02h ;~ 0AA7:1CA6
cs=0xaa7;eip=0x001caa; 	T(ADD(di, 2));	// 23029 add     di, 2 ;~ 0AA7:1CAA
	return _my_u32toa_fill(0, _state);
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_my_pnt_u32toa_fill: 	goto _my_pnt_u32toa_fill;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _my_u32toa_fill(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _my_u32toa_fill:
    _begin:
cs=0xaa7;eip=0x001cad; 	T(MOV(si, offset(dseg,_buffer_1dc6c)));	// 23039 mov     si, offset _buffer_1DC6C ;~ 0AA7:1CAD
cs=0xaa7;eip=0x001cb0; 	X(PUSH(bx));	// 23040 push    bx ;~ 0AA7:1CB0
cs=0xaa7;eip=0x001cb1; 	X(PUSH(di));	// 23041 push    di ;~ 0AA7:1CB1
cs=0xaa7;eip=0x001cb2; 	X(PUSH(bp));	// 23042 push    bp ;~ 0AA7:1CB2
cs=0xaa7;eip=0x001cb3; 	J(CALL(_my_u32toa10,0));	// 23043 call    _my_u32toa10 ;~ 0AA7:1CB3
cs=0xaa7;eip=0x001cb6; 	X(POP(bp));	// 23044 pop     bp ;~ 0AA7:1CB6
cs=0xaa7;eip=0x001cb7; 	X(POP(di));	// 23045 pop     di ;~ 0AA7:1CB7
cs=0xaa7;eip=0x001cb8; 	X(POP(bx));	// 23046 pop     bx ;~ 0AA7:1CB8
cs=0xaa7;eip=0x001cb9; 	T(CMP(cx, bp));	// 23047 cmp     cx, bp ;~ 0AA7:1CB9
cs=0xaa7;eip=0x001cbb; 	J(JC(loc_1ad0f));	// 23048 jb      short loc_1AD0F ;~ 0AA7:1CBB
cs=0xaa7;eip=0x001cbd; 	T(MOV(cx, bp));	// 23049 mov     cx, bp ;~ 0AA7:1CBD
loc_1ad0f:
	// 5802 
cs=0xaa7;eip=0x001cbf; 	T(SUB(si, cx));	// 23052 sub     si, cx ;~ 0AA7:1CBF
cs=0xaa7;eip=0x001cc1; 	T(MOV(dx, cx));	// 23053 mov     dx, cx ;~ 0AA7:1CC1
cs=0xaa7;eip=0x001cc3; 	T(NEG(cx));	// 23054 neg     cx ;~ 0AA7:1CC3
cs=0xaa7;eip=0x001cc5; 	T(ADD(cx, bp));	// 23055 add     cx, bp ;~ 0AA7:1CC5
cs=0xaa7;eip=0x001cc7; 	T(MOV(al, ' '));	// 23056 mov     al, ' ' ;~ 0AA7:1CC7
cs=0xaa7;eip=0x001cc9; 	T(CLD);	// 23057 cld ;~ 0AA7:1CC9
	// 23058 rep stosb ;~ 0AA7:1CCA
cs=0xaa7;eip=0x001cca; 	X(	REP STOSB);	// 23058 rep stosb ;~ 0AA7:1CCA
cs=0xaa7;eip=0x001ccc; 	T(MOV(cx, dx));	// 23059 mov     cx, dx ;~ 0AA7:1CCC
	// 23060 rep movsb ;~ 0AA7:1CCE
cs=0xaa7;eip=0x001cce; 	X(	REP MOVSB);	// 23060 rep movsb ;~ 0AA7:1CCE
cs=0xaa7;eip=0x001cd0; 	J(RETN(0));	// 23061 retn ;~ 0AA7:1CD0

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_my_u32toa_fill: 	goto _my_u32toa_fill;
        case m2c::kloc_1ad0f: 	goto loc_1ad0f;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _read2buffer(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _read2buffer:
    _begin:
cs=0xaa7;eip=0x001dc9; 	X(PUSHA);	// 23218 pusha ;~ 0AA7:1DC9
cs=0xaa7;eip=0x001dca; 	T(MOV(dx, offset(dseg,_buffer_1)));	// 23219 mov     dx, offset _buffer_1 ; 2800h ;~ 0AA7:1DCA
cs=0xaa7;eip=0x001dcd; 	T(MOV(cx, 0x5000));	// 23220 mov     cx, 5000h ;~ 0AA7:1DCD
cs=0xaa7;eip=0x001dd0; 	T(MOV(bx, _fhandle_1de68));	// 23221 mov     bx, _fhandle_1DE68 ;~ 0AA7:1DD0
cs=0xaa7;eip=0x001dd4; 	T(MOV(ah, 0x3F));	// 23222 mov     ah, 3Fh ;~ 0AA7:1DD4
cs=0xaa7;eip=0x001dd6; 	S(_INT(0x21));	// 23223 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 0AA7:1DD6
cs=0xaa7;eip=0x001dd8; 	X(POPA);	// 23226 popa ;~ 0AA7:1DD8
cs=0xaa7;eip=0x001dd9; 	T(MOV(si, offset(dseg,_buffer_1)));	// 23227 mov     si, offset _buffer_1 ; 2800h ;~ 0AA7:1DD9
cs=0xaa7;eip=0x001ddc; 	J(RETN(0));	// 23228 retn ;~ 0AA7:1DDC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_read2buffer: 	goto _read2buffer;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _spectr_1b084(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _spectr_1b084:
    _begin:
cs=0xaa7;eip=0x002034; 	X(MOV(word_2450e, di));	// 23663 mov     word_2450E, di ;~ 0AA7:2034
cs=0xaa7;eip=0x002038; 	T(MOV(al, 1));	// 23664 mov     al, 1 ;~ 0AA7:2038
cs=0xaa7;eip=0x00203a; 	T(CMP(al, 1));	// 23665 cmp     al, 1 ;~ 0AA7:203A
cs=0xaa7;eip=0x00203c; 	J(JNZ(loc_1b240));	// 23666 jnz     loc_1B240 ;~ 0AA7:203C
cs=0xaa7;eip=0x002040; 	J(CALL(_spectr_1b406,0));	// 23667 call    _spectr_1B406 ;~ 0AA7:2040
cs=0xaa7;eip=0x002043; 	T(MOV(ax, word_24514));	// 23668 mov     ax, word_24514 ;~ 0AA7:2043
cs=0xaa7;eip=0x002046; 	T(XOR(si, si));	// 23669 xor     si, si ;~ 0AA7:2046
loc_1b098:
	// 5857 
cs=0xaa7;eip=0x002048; 	T(ADD(si, 4));	// 23672 add     si, 4 ;~ 0AA7:2048
cs=0xaa7;eip=0x00204b; 	T(SHR(ax, 1));	// 23673 shr     ax, 1 ;~ 0AA7:204B
cs=0xaa7;eip=0x00204d; 	T(TEST(ax, ax));	// 23674 test    ax, ax ;~ 0AA7:204D
cs=0xaa7;eip=0x00204f; 	J(JNZ(loc_1b098));	// 23675 jnz     short loc_1B098 ;~ 0AA7:204F
cs=0xaa7;eip=0x002051; 	T(SUB(si, 4));	// 23676 sub     si, 4 ;~ 0AA7:2051
cs=0xaa7;eip=0x002054; 	T(MOV(ebx, *(dd*)(((db*)_tabledword_24526)+si)));	// 23677 mov     ebx, _tabledword_24526[si] ;~ 0AA7:2054
cs=0xaa7;eip=0x002059; 	X(MOV(_multip_244d0, ebx));	// 23678 mov     _multip_244D0, ebx ;~ 0AA7:2059
cs=0xaa7;eip=0x00205e; 	T(MOV(eax, *(dd*)(((db*)_tabledword_24562)+si)));	// 23679 mov     eax, _tabledword_24562[si] ;~ 0AA7:205E
cs=0xaa7;eip=0x002063; 	X(MOV(_multip_244cc, eax));	// 23680 mov     _multip_244CC, eax ;~ 0AA7:2063
cs=0xaa7;eip=0x002067; 	T(ADD(eax, 0x10000));	// 23681 add     eax, 10000h ;~ 0AA7:2067
cs=0xaa7;eip=0x00206d; 	X(MOV(dword_244c8, eax));	// 23682 mov     dword_244C8, eax ;~ 0AA7:206D
cs=0xaa7;eip=0x002071; 	X(MOV(dword_244d4, ebx));	// 23683 mov     dword_244D4, ebx ;~ 0AA7:2071
cs=0xaa7;eip=0x002076; 	T(MOV(cx, word_24514));	// 23684 mov     cx, word_24514 ;~ 0AA7:2076
cs=0xaa7;eip=0x00207a; 	T(SHR(cx, 1));	// 23685 shr     cx, 1 ;~ 0AA7:207A
cs=0xaa7;eip=0x00207c; 	T(MOV(ax, 2));	// 23686 mov     ax, 2 ;~ 0AA7:207C
loc_1b0cf:
	// 5858 
cs=0xaa7;eip=0x00207f; 	X(PUSH(cx));	// 23689 push    cx ;~ 0AA7:207F
cs=0xaa7;eip=0x002080; 	X(PUSH(ax));	// 23690 push    ax ;~ 0AA7:2080
cs=0xaa7;eip=0x002081; 	T(SHL(ax, 1));	// 23691 shl     ax, 1 ;~ 0AA7:2081
cs=0xaa7;eip=0x002083; 	T(DEC(ax));	// 23692 dec     ax ;~ 0AA7:2083
cs=0xaa7;eip=0x002084; 	T(MOV(di, ax));	// 23693 mov     di, ax ;~ 0AA7:2084
cs=0xaa7;eip=0x002086; 	T(INC(ax));	// 23694 inc     ax ;~ 0AA7:2086
cs=0xaa7;eip=0x002087; 	T(NEG(ax));	// 23695 neg     ax ;~ 0AA7:2087
cs=0xaa7;eip=0x002089; 	T(ADD(ax, 3));	// 23696 add     ax, 3 ;~ 0AA7:2089
cs=0xaa7;eip=0x00208c; 	T(ADD(ax, word_24514));	// 23697 add     ax, word_24514 ;~ 0AA7:208C
cs=0xaa7;eip=0x002090; 	T(ADD(ax, word_24514));	// 23698 add     ax, word_24514 ;~ 0AA7:2090
cs=0xaa7;eip=0x002094; 	T(MOV(si, ax));	// 23699 mov     si, ax ;~ 0AA7:2094
cs=0xaa7;eip=0x002096; 	T(MOV(eax, dword_244c8));	// 23700 mov     eax, dword_244C8 ;~ 0AA7:2096
cs=0xaa7;eip=0x00209a; 	X(MOV(dword_244f4, eax));	// 23701 mov     dword_244F4, eax ;~ 0AA7:209A
cs=0xaa7;eip=0x00209e; 	T(MOV(eax, dword_244d4));	// 23702 mov     eax, dword_244D4 ;~ 0AA7:209E
cs=0xaa7;eip=0x0020a2; 	X(MOV(dword_244f8, eax));	// 23703 mov     dword_244F8, eax ;~ 0AA7:20A2
cs=0xaa7;eip=0x0020a6; 	T(DEC(si));	// 23704 dec     si ;~ 0AA7:20A6
cs=0xaa7;eip=0x0020a7; 	T(SHL(si, 2));	// 23705 shl     si, 2 ;~ 0AA7:20A7
cs=0xaa7;eip=0x0020aa; 	T(DEC(di));	// 23706 dec     di ;~ 0AA7:20AA
cs=0xaa7;eip=0x0020ab; 	T(SHL(di, 2));	// 23707 shl     di, 2 ;~ 0AA7:20AB
cs=0xaa7;eip=0x0020ae; 	T(ADD(si, word_2450e));	// 23708 add     si, word_2450E ;~ 0AA7:20AE
cs=0xaa7;eip=0x0020b2; 	T(ADD(di, word_2450e));	// 23709 add     di, word_2450E ;~ 0AA7:20B2
cs=0xaa7;eip=0x0020b6; 	T(MOV(eax, *(dd*)(raddr(ds,di))));	// 23710 mov     eax, [di] ;~ 0AA7:20B6
cs=0xaa7;eip=0x0020b9; 	T(ADD(eax, *(dd*)(raddr(ds,si))));	// 23711 add     eax, [si] ;~ 0AA7:20B9
cs=0xaa7;eip=0x0020bc; 	T(SAR(eax, 1));	// 23712 sar     eax, 1 ;~ 0AA7:20BC
cs=0xaa7;eip=0x0020bf; 	X(MOV(dword_244e4, eax));	// 23713 mov     dword_244E4, eax ;~ 0AA7:20BF
cs=0xaa7;eip=0x0020c3; 	T(MOV(eax, *(dd*)(raddr(ds,di+4))));	// 23714 mov     eax, [di+4] ;~ 0AA7:20C3
cs=0xaa7;eip=0x0020c7; 	T(SUB(eax, *(dd*)(raddr(ds,si+4))));	// 23715 sub     eax, [si+4] ;~ 0AA7:20C7
cs=0xaa7;eip=0x0020cb; 	T(SAR(eax, 1));	// 23716 sar     eax, 1 ;~ 0AA7:20CB
cs=0xaa7;eip=0x0020ce; 	X(MOV(dword_244e8, eax));	// 23717 mov     dword_244E8, eax ;~ 0AA7:20CE
cs=0xaa7;eip=0x0020d2; 	T(MOV(eax, *(dd*)(raddr(ds,di+4))));	// 23718 mov     eax, [di+4] ;~ 0AA7:20D2
cs=0xaa7;eip=0x0020d6; 	T(ADD(eax, *(dd*)(raddr(ds,si+4))));	// 23719 add     eax, [si+4] ;~ 0AA7:20D6
cs=0xaa7;eip=0x0020da; 	T(SAR(eax, 1));	// 23720 sar     eax, 1 ;~ 0AA7:20DA
cs=0xaa7;eip=0x0020dd; 	X(MOV(dword_244ec, eax));	// 23721 mov     dword_244EC, eax ;~ 0AA7:20DD
cs=0xaa7;eip=0x0020e1; 	T(MOV(eax, *(dd*)(raddr(ds,si))));	// 23722 mov     eax, [si] ;~ 0AA7:20E1
cs=0xaa7;eip=0x0020e4; 	T(SUB(eax, *(dd*)(raddr(ds,di))));	// 23723 sub     eax, [di] ;~ 0AA7:20E4
cs=0xaa7;eip=0x0020e7; 	T(SAR(eax, 1));	// 23724 sar     eax, 1 ;~ 0AA7:20E7
cs=0xaa7;eip=0x0020ea; 	X(MOV(dword_244f0, eax));	// 23725 mov     dword_244F0, eax ;~ 0AA7:20EA
cs=0xaa7;eip=0x0020ee; 	T(MOV(ecx, dword_244f4));	// 23726 mov     ecx, dword_244F4 ;~ 0AA7:20EE
cs=0xaa7;eip=0x0020f3; 	T(MOV(eax, dword_244ec));	// 23727 mov     eax, dword_244EC ;~ 0AA7:20F3
cs=0xaa7;eip=0x0020f7; 	T(IMUL1_4(ecx));	// 23728 imul    ecx ;~ 0AA7:20F7
cs=0xaa7;eip=0x0020fa; 	T(SHRD(eax, edx, 16));	// 23729 shrd    eax, edx, 16 ;~ 0AA7:20FA
cs=0xaa7;eip=0x0020ff; 	X(MOV(dword_244fc, eax));	// 23730 mov     dword_244FC, eax ;~ 0AA7:20FF
cs=0xaa7;eip=0x002103; 	T(MOV(eax, dword_244f0));	// 23731 mov     eax, dword_244F0 ;~ 0AA7:2103
cs=0xaa7;eip=0x002107; 	T(IMUL1_4(ecx));	// 23732 imul    ecx ;~ 0AA7:2107
cs=0xaa7;eip=0x00210a; 	T(SHRD(eax, edx, 16));	// 23733 shrd    eax, edx, 16 ;~ 0AA7:210A
cs=0xaa7;eip=0x00210f; 	X(MOV(dword_24500, eax));	// 23734 mov     dword_24500, eax ;~ 0AA7:210F
cs=0xaa7;eip=0x002113; 	T(MOV(ecx, dword_244f8));	// 23735 mov     ecx, dword_244F8 ;~ 0AA7:2113
cs=0xaa7;eip=0x002118; 	T(MOV(eax, dword_244ec));	// 23736 mov     eax, dword_244EC ;~ 0AA7:2118
cs=0xaa7;eip=0x00211c; 	T(IMUL1_4(ecx));	// 23737 imul    ecx ;~ 0AA7:211C
cs=0xaa7;eip=0x00211f; 	T(SHRD(eax, edx, 16));	// 23738 shrd    eax, edx, 16 ;~ 0AA7:211F
cs=0xaa7;eip=0x002124; 	X(MOV(dword_24508, eax));	// 23739 mov     dword_24508, eax ;~ 0AA7:2124
cs=0xaa7;eip=0x002128; 	T(MOV(eax, dword_244f0));	// 23740 mov     eax, dword_244F0 ;~ 0AA7:2128
cs=0xaa7;eip=0x00212c; 	T(IMUL1_4(ecx));	// 23741 imul    ecx ;~ 0AA7:212C
cs=0xaa7;eip=0x00212f; 	T(SHRD(eax, edx, 16));	// 23742 shrd    eax, edx, 16 ;~ 0AA7:212F
cs=0xaa7;eip=0x002134; 	X(MOV(dword_24504, eax));	// 23743 mov     dword_24504, eax ;~ 0AA7:2134
cs=0xaa7;eip=0x002138; 	T(MOV(eax, dword_244e4));	// 23744 mov     eax, dword_244E4 ;~ 0AA7:2138
cs=0xaa7;eip=0x00213c; 	T(ADD(eax, dword_244fc));	// 23745 add     eax, dword_244FC ;~ 0AA7:213C
cs=0xaa7;eip=0x002141; 	T(SUB(eax, dword_24504));	// 23746 sub     eax, dword_24504 ;~ 0AA7:2141
cs=0xaa7;eip=0x002146; 	X(MOV(*(dd*)(raddr(ds,di)), eax));	// 23747 mov     [di], eax ;~ 0AA7:2146
cs=0xaa7;eip=0x002149; 	T(MOV(eax, dword_244e8));	// 23748 mov     eax, dword_244E8 ;~ 0AA7:2149
cs=0xaa7;eip=0x00214d; 	T(ADD(eax, dword_24500));	// 23749 add     eax, dword_24500 ;~ 0AA7:214D
cs=0xaa7;eip=0x002152; 	T(ADD(eax, dword_24508));	// 23750 add     eax, dword_24508 ;~ 0AA7:2152
cs=0xaa7;eip=0x002157; 	X(MOV(*(dd*)(raddr(ds,di+4)), eax));	// 23751 mov     [di+4], eax ;~ 0AA7:2157
cs=0xaa7;eip=0x00215b; 	T(MOV(eax, dword_244e4));	// 23752 mov     eax, dword_244E4 ;~ 0AA7:215B
cs=0xaa7;eip=0x00215f; 	T(SUB(eax, dword_244fc));	// 23753 sub     eax, dword_244FC ;~ 0AA7:215F
cs=0xaa7;eip=0x002164; 	T(ADD(eax, dword_24504));	// 23754 add     eax, dword_24504 ;~ 0AA7:2164
cs=0xaa7;eip=0x002169; 	X(MOV(*(dd*)(raddr(ds,si)), eax));	// 23755 mov     [si], eax ;~ 0AA7:2169
cs=0xaa7;eip=0x00216c; 	T(MOV(eax, dword_24500));	// 23756 mov     eax, dword_24500 ;~ 0AA7:216C
cs=0xaa7;eip=0x002170; 	T(SUB(eax, dword_244e8));	// 23757 sub     eax, dword_244E8 ;~ 0AA7:2170
cs=0xaa7;eip=0x002175; 	T(ADD(eax, dword_24508));	// 23758 add     eax, dword_24508 ;~ 0AA7:2175
cs=0xaa7;eip=0x00217a; 	X(MOV(*(dd*)(raddr(ds,si+4)), eax));	// 23759 mov     [si+4], eax ;~ 0AA7:217A
cs=0xaa7;eip=0x00217e; 	T(MOV(eax, dword_244c8));	// 23760 mov     eax, dword_244C8 ;~ 0AA7:217E
cs=0xaa7;eip=0x002182; 	X(MOV(dword_244c4, eax));	// 23761 mov     dword_244C4, eax ;~ 0AA7:2182
cs=0xaa7;eip=0x002186; 	T(MOV(eax, _multip_244cc));	// 23762 mov     eax, _multip_244CC ;~ 0AA7:2186
cs=0xaa7;eip=0x00218a; 	X(IMUL1_4(dword_244c8));	// 23763 imul    dword_244C8 ;~ 0AA7:218A
cs=0xaa7;eip=0x00218f; 	T(SHRD(eax, edx, 0x10));	// 23764 shrd    eax, edx, 10h ;~ 0AA7:218F
cs=0xaa7;eip=0x002194; 	X(ADD(dword_244c8, eax));	// 23765 add     dword_244C8, eax ;~ 0AA7:2194
cs=0xaa7;eip=0x002199; 	T(MOV(eax, dword_244d4));	// 23766 mov     eax, dword_244D4 ;~ 0AA7:2199
cs=0xaa7;eip=0x00219d; 	X(IMUL1_4(_multip_244d0));	// 23767 imul    _multip_244D0 ;~ 0AA7:219D
cs=0xaa7;eip=0x0021a2; 	T(SHRD(eax, edx, 0x10));	// 23768 shrd    eax, edx, 10h ;~ 0AA7:21A2
cs=0xaa7;eip=0x0021a7; 	X(SUB(dword_244c8, eax));	// 23769 sub     dword_244C8, eax ;~ 0AA7:21A7
cs=0xaa7;eip=0x0021ac; 	T(MOV(eax, dword_244d4));	// 23770 mov     eax, dword_244D4 ;~ 0AA7:21AC
cs=0xaa7;eip=0x0021b0; 	X(IMUL1_4(_multip_244cc));	// 23771 imul    _multip_244CC ;~ 0AA7:21B0
cs=0xaa7;eip=0x0021b5; 	T(SHRD(eax, edx, 0x10));	// 23772 shrd    eax, edx, 10h ;~ 0AA7:21B5
cs=0xaa7;eip=0x0021ba; 	X(ADD(dword_244d4, eax));	// 23773 add     dword_244D4, eax ;~ 0AA7:21BA
cs=0xaa7;eip=0x0021bf; 	T(MOV(eax, dword_244c4));	// 23774 mov     eax, dword_244C4 ;~ 0AA7:21BF
cs=0xaa7;eip=0x0021c3; 	X(IMUL1_4(_multip_244d0));	// 23775 imul    _multip_244D0 ;~ 0AA7:21C3
cs=0xaa7;eip=0x0021c8; 	T(SHRD(eax, edx, 0x10));	// 23776 shrd    eax, edx, 10h ;~ 0AA7:21C8
cs=0xaa7;eip=0x0021cd; 	X(ADD(dword_244d4, eax));	// 23777 add     dword_244D4, eax ;~ 0AA7:21CD
cs=0xaa7;eip=0x0021d2; 	X(POP(ax));	// 23778 pop     ax ;~ 0AA7:21D2
cs=0xaa7;eip=0x0021d3; 	X(POP(cx));	// 23779 pop     cx ;~ 0AA7:21D3
cs=0xaa7;eip=0x0021d4; 	T(INC(ax));	// 23780 inc     ax ;~ 0AA7:21D4
cs=0xaa7;eip=0x0021d5; 	T(DEC(cx));	// 23781 dec     cx ;~ 0AA7:21D5
cs=0xaa7;eip=0x0021d6; 	J(JNZ(loc_1b0cf));	// 23782 jnz     loc_1B0CF ;~ 0AA7:21D6
cs=0xaa7;eip=0x0021da; 	T(MOV(si, word_2450e));	// 23783 mov     si, word_2450E ;~ 0AA7:21DA
cs=0xaa7;eip=0x0021de; 	T(MOV(eax, *(dd*)(raddr(ds,si))));	// 23784 mov     eax, [si] ;~ 0AA7:21DE
cs=0xaa7;eip=0x0021e1; 	T(MOV(ebx, *(dd*)(raddr(ds,si+4))));	// 23785 mov     ebx, [si+4] ;~ 0AA7:21E1
cs=0xaa7;eip=0x0021e5; 	X(ADD(*(dd*)(raddr(ds,si)), ebx));	// 23786 add     [si], ebx ;~ 0AA7:21E5
cs=0xaa7;eip=0x0021e8; 	T(SUB(eax, ebx));	// 23787 sub     eax, ebx ;~ 0AA7:21E8
cs=0xaa7;eip=0x0021eb; 	X(MOV(*(dd*)(raddr(ds,si+4)), eax));	// 23788 mov     [si+4], eax ;~ 0AA7:21EB
cs=0xaa7;eip=0x0021ef; 	J(RETN(0));	// 23789 retn ;~ 0AA7:21EF
loc_1b240:
	// 5859 
cs=0xaa7;eip=0x0021f0; 	T(MOV(ax, word_24514));	// 23793 mov     ax, word_24514 ;~ 0AA7:21F0
cs=0xaa7;eip=0x0021f3; 	T(XOR(si, si));	// 23794 xor     si, si ;~ 0AA7:21F3
loc_1b245:
	// 5860 
cs=0xaa7;eip=0x0021f5; 	T(ADD(si, 4));	// 23797 add     si, 4 ;~ 0AA7:21F5
cs=0xaa7;eip=0x0021f8; 	T(SHR(ax, 1));	// 23798 shr     ax, 1 ;~ 0AA7:21F8
cs=0xaa7;eip=0x0021fa; 	T(TEST(ax, ax));	// 23799 test    ax, ax ;~ 0AA7:21FA
cs=0xaa7;eip=0x0021fc; 	J(JNZ(loc_1b245));	// 23800 jnz     short loc_1B245 ;~ 0AA7:21FC
cs=0xaa7;eip=0x0021fe; 	T(SUB(si, 4));	// 23801 sub     si, 4 ;~ 0AA7:21FE
cs=0xaa7;eip=0x002201; 	T(MOV(ebx, *(dd*)(((db*)_tabledword_24526)+si)));	// 23802 mov     ebx, _tabledword_24526[si] ;~ 0AA7:2201
cs=0xaa7;eip=0x002206; 	T(NEG(ebx));	// 23803 neg     ebx ;~ 0AA7:2206
cs=0xaa7;eip=0x002209; 	X(MOV(_multip_244d0, ebx));	// 23804 mov     _multip_244D0, ebx ;~ 0AA7:2209
cs=0xaa7;eip=0x00220e; 	T(MOV(eax, *(dd*)(((db*)_tabledword_24562)+si)));	// 23805 mov     eax, _tabledword_24562[si] ;~ 0AA7:220E
cs=0xaa7;eip=0x002213; 	T(NEG(eax));	// 23806 neg     eax ;~ 0AA7:2213
cs=0xaa7;eip=0x002216; 	X(MOV(_multip_244cc, eax));	// 23807 mov     _multip_244CC, eax ;~ 0AA7:2216
cs=0xaa7;eip=0x00221a; 	T(ADD(eax, 0x10000));	// 23808 add     eax, 10000h ;~ 0AA7:221A
cs=0xaa7;eip=0x002220; 	X(MOV(dword_244c8, eax));	// 23809 mov     dword_244C8, eax ;~ 0AA7:2220
cs=0xaa7;eip=0x002224; 	X(MOV(dword_244d4, ebx));	// 23810 mov     dword_244D4, ebx ;~ 0AA7:2224
cs=0xaa7;eip=0x002229; 	T(MOV(cx, word_24514));	// 23811 mov     cx, word_24514 ;~ 0AA7:2229
cs=0xaa7;eip=0x00222d; 	T(SHR(cx, 1));	// 23812 shr     cx, 1 ;~ 0AA7:222D
cs=0xaa7;eip=0x00222f; 	T(MOV(ax, 2));	// 23813 mov     ax, 2 ;~ 0AA7:222F
loc_1b282:
	// 5861 
cs=0xaa7;eip=0x002232; 	X(PUSH(cx));	// 23816 push    cx ;~ 0AA7:2232
cs=0xaa7;eip=0x002233; 	X(PUSH(ax));	// 23817 push    ax ;~ 0AA7:2233
cs=0xaa7;eip=0x002234; 	T(SHL(ax, 1));	// 23818 shl     ax, 1 ;~ 0AA7:2234
cs=0xaa7;eip=0x002236; 	T(DEC(ax));	// 23819 dec     ax ;~ 0AA7:2236
cs=0xaa7;eip=0x002237; 	T(MOV(di, ax));	// 23820 mov     di, ax ;~ 0AA7:2237
cs=0xaa7;eip=0x002239; 	T(NEG(ax));	// 23821 neg     ax ;~ 0AA7:2239
cs=0xaa7;eip=0x00223b; 	T(ADD(ax, 3));	// 23822 add     ax, 3 ;~ 0AA7:223B
cs=0xaa7;eip=0x00223e; 	T(ADD(ax, word_24514));	// 23823 add     ax, word_24514 ;~ 0AA7:223E
cs=0xaa7;eip=0x002242; 	T(ADD(ax, word_24514));	// 23824 add     ax, word_24514 ;~ 0AA7:2242
cs=0xaa7;eip=0x002246; 	T(MOV(si, ax));	// 23825 mov     si, ax ;~ 0AA7:2246
cs=0xaa7;eip=0x002248; 	T(MOV(eax, dword_244c8));	// 23826 mov     eax, dword_244C8 ;~ 0AA7:2248
cs=0xaa7;eip=0x00224c; 	X(MOV(dword_244f4, eax));	// 23827 mov     dword_244F4, eax ;~ 0AA7:224C
cs=0xaa7;eip=0x002250; 	T(MOV(eax, dword_244d4));	// 23828 mov     eax, dword_244D4 ;~ 0AA7:2250
cs=0xaa7;eip=0x002254; 	X(MOV(dword_244f8, eax));	// 23829 mov     dword_244F8, eax ;~ 0AA7:2254
cs=0xaa7;eip=0x002258; 	T(DEC(si));	// 23830 dec     si ;~ 0AA7:2258
cs=0xaa7;eip=0x002259; 	T(SHL(si, 2));	// 23831 shl     si, 2 ;~ 0AA7:2259
cs=0xaa7;eip=0x00225c; 	T(DEC(di));	// 23832 dec     di ;~ 0AA7:225C
cs=0xaa7;eip=0x00225d; 	T(SHL(di, 2));	// 23833 shl     di, 2 ;~ 0AA7:225D
cs=0xaa7;eip=0x002260; 	T(MOV(eax, *(dd*)(raddr(ds,di))));	// 23834 mov     eax, [di] ;~ 0AA7:2260
cs=0xaa7;eip=0x002263; 	T(ADD(eax, *(dd*)(raddr(ds,si))));	// 23835 add     eax, [si] ;~ 0AA7:2263
cs=0xaa7;eip=0x002266; 	T(SAR(eax, 1));	// 23836 sar     eax, 1 ;~ 0AA7:2266
cs=0xaa7;eip=0x002269; 	X(MOV(dword_244e4, eax));	// 23837 mov     dword_244E4, eax ;~ 0AA7:2269
cs=0xaa7;eip=0x00226d; 	T(MOV(eax, *(dd*)(raddr(ds,di+4))));	// 23838 mov     eax, [di+4] ;~ 0AA7:226D
cs=0xaa7;eip=0x002271; 	T(SUB(eax, *(dd*)(raddr(ds,si+4))));	// 23839 sub     eax, [si+4] ;~ 0AA7:2271
cs=0xaa7;eip=0x002275; 	T(SAR(eax, 1));	// 23840 sar     eax, 1 ;~ 0AA7:2275
cs=0xaa7;eip=0x002278; 	X(MOV(dword_244e8, eax));	// 23841 mov     dword_244E8, eax ;~ 0AA7:2278
cs=0xaa7;eip=0x00227c; 	T(MOV(eax, *(dd*)(raddr(ds,di+4))));	// 23842 mov     eax, [di+4] ;~ 0AA7:227C
cs=0xaa7;eip=0x002280; 	T(ADD(eax, *(dd*)(raddr(ds,si+4))));	// 23843 add     eax, [si+4] ;~ 0AA7:2280
cs=0xaa7;eip=0x002284; 	T(NEG(eax));	// 23844 neg     eax ;~ 0AA7:2284
cs=0xaa7;eip=0x002287; 	T(SAR(eax, 1));	// 23845 sar     eax, 1 ;~ 0AA7:2287
cs=0xaa7;eip=0x00228a; 	X(MOV(dword_244ec, eax));	// 23846 mov     dword_244EC, eax ;~ 0AA7:228A
cs=0xaa7;eip=0x00228e; 	T(MOV(eax, *(dd*)(raddr(ds,di))));	// 23847 mov     eax, [di] ;~ 0AA7:228E
cs=0xaa7;eip=0x002291; 	T(SUB(eax, *(dd*)(raddr(ds,si))));	// 23848 sub     eax, [si] ;~ 0AA7:2291
cs=0xaa7;eip=0x002294; 	T(SAR(eax, 1));	// 23849 sar     eax, 1 ;~ 0AA7:2294
cs=0xaa7;eip=0x002297; 	X(MOV(dword_244f0, eax));	// 23850 mov     dword_244F0, eax ;~ 0AA7:2297
cs=0xaa7;eip=0x00229b; 	T(MOV(ecx, dword_244f4));	// 23851 mov     ecx, dword_244F4 ;~ 0AA7:229B
cs=0xaa7;eip=0x0022a0; 	T(MOV(eax, dword_244ec));	// 23852 mov     eax, dword_244EC ;~ 0AA7:22A0
cs=0xaa7;eip=0x0022a4; 	T(IMUL1_4(ecx));	// 23853 imul    ecx ;~ 0AA7:22A4
cs=0xaa7;eip=0x0022a7; 	T(SHRD(eax, edx, 0x10));	// 23854 shrd    eax, edx, 10h ;~ 0AA7:22A7
cs=0xaa7;eip=0x0022ac; 	X(MOV(dword_244fc, eax));	// 23855 mov     dword_244FC, eax ;~ 0AA7:22AC
cs=0xaa7;eip=0x0022b0; 	T(MOV(eax, dword_244f0));	// 23856 mov     eax, dword_244F0 ;~ 0AA7:22B0
cs=0xaa7;eip=0x0022b4; 	T(IMUL1_4(ecx));	// 23857 imul    ecx ;~ 0AA7:22B4
cs=0xaa7;eip=0x0022b7; 	T(SHRD(eax, edx, 0x10));	// 23858 shrd    eax, edx, 10h ;~ 0AA7:22B7
cs=0xaa7;eip=0x0022bc; 	X(MOV(dword_24500, eax));	// 23859 mov     dword_24500, eax ;~ 0AA7:22BC
cs=0xaa7;eip=0x0022c0; 	T(MOV(ecx, dword_244f8));	// 23860 mov     ecx, dword_244F8 ;~ 0AA7:22C0
cs=0xaa7;eip=0x0022c5; 	T(MOV(eax, dword_244ec));	// 23861 mov     eax, dword_244EC ;~ 0AA7:22C5
cs=0xaa7;eip=0x0022c9; 	T(IMUL1_4(ecx));	// 23862 imul    ecx ;~ 0AA7:22C9
cs=0xaa7;eip=0x0022cc; 	T(SHRD(eax, edx, 0x10));	// 23863 shrd    eax, edx, 10h ;~ 0AA7:22CC
cs=0xaa7;eip=0x0022d1; 	X(MOV(dword_24508, eax));	// 23864 mov     dword_24508, eax ;~ 0AA7:22D1
cs=0xaa7;eip=0x0022d5; 	T(MOV(eax, dword_244f0));	// 23865 mov     eax, dword_244F0 ;~ 0AA7:22D5
cs=0xaa7;eip=0x0022d9; 	T(IMUL1_4(ecx));	// 23866 imul    ecx ;~ 0AA7:22D9
cs=0xaa7;eip=0x0022dc; 	T(SHRD(eax, edx, 0x10));	// 23867 shrd    eax, edx, 10h ;~ 0AA7:22DC
cs=0xaa7;eip=0x0022e1; 	X(MOV(dword_24504, eax));	// 23868 mov     dword_24504, eax ;~ 0AA7:22E1
cs=0xaa7;eip=0x0022e5; 	T(MOV(eax, dword_244e4));	// 23869 mov     eax, dword_244E4 ;~ 0AA7:22E5
cs=0xaa7;eip=0x0022e9; 	T(ADD(eax, dword_244fc));	// 23870 add     eax, dword_244FC ;~ 0AA7:22E9
cs=0xaa7;eip=0x0022ee; 	T(SUB(eax, dword_24504));	// 23871 sub     eax, dword_24504 ;~ 0AA7:22EE
cs=0xaa7;eip=0x0022f3; 	X(MOV(*(dd*)(raddr(ds,di)), eax));	// 23872 mov     [di], eax ;~ 0AA7:22F3
cs=0xaa7;eip=0x0022f6; 	T(MOV(eax, dword_244e8));	// 23873 mov     eax, dword_244E8 ;~ 0AA7:22F6
cs=0xaa7;eip=0x0022fa; 	T(ADD(eax, dword_24500));	// 23874 add     eax, dword_24500 ;~ 0AA7:22FA
cs=0xaa7;eip=0x0022ff; 	T(ADD(eax, dword_24508));	// 23875 add     eax, dword_24508 ;~ 0AA7:22FF
cs=0xaa7;eip=0x002304; 	X(MOV(*(dd*)(raddr(ds,di+4)), eax));	// 23876 mov     [di+4], eax ;~ 0AA7:2304
cs=0xaa7;eip=0x002308; 	T(MOV(eax, dword_244e4));	// 23877 mov     eax, dword_244E4 ;~ 0AA7:2308
cs=0xaa7;eip=0x00230c; 	T(SUB(eax, dword_244fc));	// 23878 sub     eax, dword_244FC ;~ 0AA7:230C
cs=0xaa7;eip=0x002311; 	T(ADD(eax, dword_24504));	// 23879 add     eax, dword_24504 ;~ 0AA7:2311
cs=0xaa7;eip=0x002316; 	X(MOV(*(dd*)(raddr(ds,si)), eax));	// 23880 mov     [si], eax ;~ 0AA7:2316
cs=0xaa7;eip=0x002319; 	T(MOV(eax, dword_24500));	// 23881 mov     eax, dword_24500 ;~ 0AA7:2319
cs=0xaa7;eip=0x00231d; 	T(SUB(eax, dword_244e8));	// 23882 sub     eax, dword_244E8 ;~ 0AA7:231D
cs=0xaa7;eip=0x002322; 	T(ADD(eax, dword_24508));	// 23883 add     eax, dword_24508 ;~ 0AA7:2322
cs=0xaa7;eip=0x002327; 	X(MOV(*(dd*)(raddr(ds,si+4)), eax));	// 23884 mov     [si+4], eax ;~ 0AA7:2327
cs=0xaa7;eip=0x00232b; 	T(MOV(eax, dword_244c8));	// 23885 mov     eax, dword_244C8 ;~ 0AA7:232B
cs=0xaa7;eip=0x00232f; 	X(MOV(dword_244c4, eax));	// 23886 mov     dword_244C4, eax ;~ 0AA7:232F
cs=0xaa7;eip=0x002333; 	T(MOV(eax, dword_244c8));	// 23887 mov     eax, dword_244C8 ;~ 0AA7:2333
cs=0xaa7;eip=0x002337; 	X(MOV(dword_244c4, eax));	// 23888 mov     dword_244C4, eax ;~ 0AA7:2337
cs=0xaa7;eip=0x00233b; 	T(MOV(eax, _multip_244cc));	// 23889 mov     eax, _multip_244CC ;~ 0AA7:233B
cs=0xaa7;eip=0x00233f; 	X(IMUL1_4(dword_244c8));	// 23890 imul    dword_244C8 ;~ 0AA7:233F
cs=0xaa7;eip=0x002344; 	T(SHRD(eax, edx, 0x10));	// 23891 shrd    eax, edx, 10h ;~ 0AA7:2344
cs=0xaa7;eip=0x002349; 	X(ADD(dword_244c8, eax));	// 23892 add     dword_244C8, eax ;~ 0AA7:2349
cs=0xaa7;eip=0x00234e; 	T(MOV(eax, dword_244d4));	// 23893 mov     eax, dword_244D4 ;~ 0AA7:234E
cs=0xaa7;eip=0x002352; 	X(IMUL1_4(_multip_244d0));	// 23894 imul    _multip_244D0 ;~ 0AA7:2352
cs=0xaa7;eip=0x002357; 	T(SHRD(eax, edx, 0x10));	// 23895 shrd    eax, edx, 10h ;~ 0AA7:2357
cs=0xaa7;eip=0x00235c; 	X(SUB(dword_244c8, eax));	// 23896 sub     dword_244C8, eax ;~ 0AA7:235C
cs=0xaa7;eip=0x002361; 	T(MOV(eax, dword_244d4));	// 23897 mov     eax, dword_244D4 ;~ 0AA7:2361
cs=0xaa7;eip=0x002365; 	X(IMUL1_4(_multip_244cc));	// 23898 imul    _multip_244CC ;~ 0AA7:2365
cs=0xaa7;eip=0x00236a; 	T(SHRD(eax, edx, 0x10));	// 23899 shrd    eax, edx, 10h ;~ 0AA7:236A
cs=0xaa7;eip=0x00236f; 	X(ADD(dword_244d4, eax));	// 23900 add     dword_244D4, eax ;~ 0AA7:236F
cs=0xaa7;eip=0x002374; 	T(MOV(eax, dword_244c4));	// 23901 mov     eax, dword_244C4 ;~ 0AA7:2374
cs=0xaa7;eip=0x002378; 	X(IMUL1_4(_multip_244d0));	// 23902 imul    _multip_244D0 ;~ 0AA7:2378
cs=0xaa7;eip=0x00237d; 	T(SHRD(eax, edx, 0x10));	// 23903 shrd    eax, edx, 10h ;~ 0AA7:237D
cs=0xaa7;eip=0x002382; 	X(ADD(dword_244d4, eax));	// 23904 add     dword_244D4, eax ;~ 0AA7:2382
cs=0xaa7;eip=0x002387; 	X(POP(ax));	// 23905 pop     ax ;~ 0AA7:2387
cs=0xaa7;eip=0x002388; 	X(POP(cx));	// 23906 pop     cx ;~ 0AA7:2388
cs=0xaa7;eip=0x002389; 	T(INC(ax));	// 23907 inc     ax ;~ 0AA7:2389
cs=0xaa7;eip=0x00238a; 	T(DEC(cx));	// 23908 dec     cx ;~ 0AA7:238A
cs=0xaa7;eip=0x00238b; 	J(JNZ(loc_1b282));	// 23909 jnz     loc_1B282 ;~ 0AA7:238B
cs=0xaa7;eip=0x00238f; 	T(MOV(si, word_2450e));	// 23910 mov     si, word_2450E ;~ 0AA7:238F
cs=0xaa7;eip=0x002393; 	T(MOV(eax, *(dd*)(raddr(ds,si))));	// 23911 mov     eax, [si] ;~ 0AA7:2393
cs=0xaa7;eip=0x002396; 	T(MOV(ebx, *(dd*)(raddr(ds,si+4))));	// 23912 mov     ebx, [si+4] ;~ 0AA7:2396
cs=0xaa7;eip=0x00239a; 	T(MOV(ecx, eax));	// 23913 mov     ecx, eax ;~ 0AA7:239A
cs=0xaa7;eip=0x00239d; 	T(ADD(ecx, ebx));	// 23914 add     ecx, ebx ;~ 0AA7:239D
cs=0xaa7;eip=0x0023a0; 	T(SAR(ecx, 1));	// 23915 sar     ecx, 1 ;~ 0AA7:23A0
cs=0xaa7;eip=0x0023a3; 	X(MOV(*(dd*)(raddr(ds,si)), ecx));	// 23916 mov     [si], ecx ;~ 0AA7:23A3
cs=0xaa7;eip=0x0023a6; 	T(MOV(ecx, eax));	// 23917 mov     ecx, eax ;~ 0AA7:23A6
cs=0xaa7;eip=0x0023a9; 	T(SUB(ecx, ebx));	// 23918 sub     ecx, ebx ;~ 0AA7:23A9
cs=0xaa7;eip=0x0023ac; 	T(SAR(ecx, 1));	// 23919 sar     ecx, 1 ;~ 0AA7:23AC
cs=0xaa7;eip=0x0023af; 	X(MOV(*(dd*)(raddr(ds,si)), ecx));	// 23920 mov     [si], ecx ;~ 0AA7:23AF
cs=0xaa7;eip=0x0023b2; 	J(CALL(_spectr_1b406,0));	// 23921 call    _spectr_1B406 ;~ 0AA7:23B2
cs=0xaa7;eip=0x0023b5; 	J(RETN(0));	// 23922 retn ;~ 0AA7:23B5

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_spectr_1b084: 	goto _spectr_1b084;
        case m2c::kloc_1b098: 	goto loc_1b098;
        case m2c::kloc_1b0cf: 	goto loc_1b0cf;
        case m2c::kloc_1b240: 	goto loc_1b240;
        case m2c::kloc_1b245: 	goto loc_1b245;
        case m2c::kloc_1b282: 	goto loc_1b282;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _spectr_1b406(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _spectr_1b406:
    _begin:
cs=0xaa7;eip=0x0023b6; 	X(MOV(word_2450e, di));	// 23931 mov     word_2450E, di ;~ 0AA7:23B6
cs=0xaa7;eip=0x0023ba; 	X(MOV(word_2450c, 0));	// 23932 mov     word_2450C, 0 ;~ 0AA7:23BA
cs=0xaa7;eip=0x0023c0; 	T(MOV(cx, word_24520));	// 23933 mov     cx, word_24520 ;~ 0AA7:23C0
cs=0xaa7;eip=0x0023c4; 	T(SHL(cx, 1));	// 23934 shl     cx, 1 ;~ 0AA7:23C4
cs=0xaa7;eip=0x0023c6; 	X(MOV(word_24522, cx));	// 23935 mov     word_24522, cx ;~ 0AA7:23C6
cs=0xaa7;eip=0x0023ca; 	T(MOV(si, word_2450e));	// 23936 mov     si, word_2450E ;~ 0AA7:23CA
cs=0xaa7;eip=0x0023ce; 	T(SHR(cx, 1));	// 23937 shr     cx, 1 ;~ 0AA7:23CE
cs=0xaa7;eip=0x0023d0; 	T(MOV(di, word_2450e));	// 23938 mov     di, word_2450E ;~ 0AA7:23D0
cs=0xaa7;eip=0x0023d4; 	T(MOV(bp, di));	// 23939 mov     bp, di ;~ 0AA7:23D4
loc_1b426:
	// 5862 
cs=0xaa7;eip=0x0023d6; 	X(PUSH(cx));	// 23942 push    cx ;~ 0AA7:23D6
cs=0xaa7;eip=0x0023d7; 	T(CMP(si, di));	// 23943 cmp     si, di ;~ 0AA7:23D7
cs=0xaa7;eip=0x0023d9; 	J(JLE(loc_1b440));	// 23944 jle     short loc_1B440 ;~ 0AA7:23D9
cs=0xaa7;eip=0x0023db; 	T(MOV(edx, *(dd*)(raddr(ds,si))));	// 23945 mov     edx, [si] ;~ 0AA7:23DB
cs=0xaa7;eip=0x0023de; 	T(MOV(ebx, *(dd*)(raddr(ds,si+4))));	// 23946 mov     ebx, [si+4] ;~ 0AA7:23DE
cs=0xaa7;eip=0x0023e2; 	X(XCHG(edx, *(dd*)(raddr(ds,di))));	// 23947 xchg    edx, [di] ;~ 0AA7:23E2
cs=0xaa7;eip=0x0023e5; 	X(XCHG(ebx, *(dd*)(raddr(ds,di+4))));	// 23948 xchg    ebx, [di+4] ;~ 0AA7:23E5
cs=0xaa7;eip=0x0023e9; 	X(MOV(*(dd*)(raddr(ds,si)), edx));	// 23949 mov     [si], edx ;~ 0AA7:23E9
cs=0xaa7;eip=0x0023ec; 	X(MOV(*(dd*)(raddr(ds,si+4)), ebx));	// 23950 mov     [si+4], ebx ;~ 0AA7:23EC
loc_1b440:
	// 5863 
cs=0xaa7;eip=0x0023f0; 	T(SUB(si, bp));	// 23953 sub     si, bp ;~ 0AA7:23F0
cs=0xaa7;eip=0x0023f2; 	T(SHR(si, 2));	// 23954 shr     si, 2 ;~ 0AA7:23F2
cs=0xaa7;eip=0x0023f5; 	T(MOV(ax, word_24522));	// 23955 mov     ax, word_24522 ;~ 0AA7:23F5
cs=0xaa7;eip=0x0023f8; 	T(SHR(ax, 1));	// 23956 shr     ax, 1 ;~ 0AA7:23F8
loc_1b44a:
	// 5864 
cs=0xaa7;eip=0x0023fa; 	T(CMP(ax, 2));	// 23959 cmp     ax, 2 ;~ 0AA7:23FA
cs=0xaa7;eip=0x0023fd; 	J(JL(loc_1b459));	// 23960 jl      short loc_1B459 ;~ 0AA7:23FD
cs=0xaa7;eip=0x0023ff; 	T(CMP(si, ax));	// 23961 cmp     si, ax ;~ 0AA7:23FF
cs=0xaa7;eip=0x002401; 	J(JL(loc_1b459));	// 23962 jl      short loc_1B459 ;~ 0AA7:2401
cs=0xaa7;eip=0x002403; 	T(SUB(si, ax));	// 23963 sub     si, ax ;~ 0AA7:2403
cs=0xaa7;eip=0x002405; 	T(SHR(ax, 1));	// 23964 shr     ax, 1 ;~ 0AA7:2405
cs=0xaa7;eip=0x002407; 	J(JMP(loc_1b44a));	// 23965 jmp     short loc_1B44A ;~ 0AA7:2407
loc_1b459:
	// 5865 
cs=0xaa7;eip=0x002409; 	T(ADD(si, ax));	// 23970 add     si, ax ;~ 0AA7:2409
cs=0xaa7;eip=0x00240b; 	T(SHL(si, 2));	// 23971 shl     si, 2 ;~ 0AA7:240B
cs=0xaa7;eip=0x00240e; 	T(ADD(si, bp));	// 23972 add     si, bp ;~ 0AA7:240E
cs=0xaa7;eip=0x002410; 	X(POP(cx));	// 23973 pop     cx ;~ 0AA7:2410
cs=0xaa7;eip=0x002411; 	T(ADD(di, 8));	// 23974 add     di, 8 ;~ 0AA7:2411
cs=0xaa7;eip=0x002414; 	T(DEC(cx));	// 23975 dec     cx ;~ 0AA7:2414
cs=0xaa7;eip=0x002415; 	J(JNZ(loc_1b426));	// 23976 jnz     short loc_1B426 ;~ 0AA7:2415
cs=0xaa7;eip=0x002417; 	X(MOV(word_24516, 2));	// 23977 mov     word_24516, 2 ;~ 0AA7:2417
loc_1b46d:
	// 5866 
cs=0xaa7;eip=0x00241d; 	T(MOV(ax, word_24516));	// 23980 mov     ax, word_24516 ;~ 0AA7:241D
cs=0xaa7;eip=0x002420; 	T(CMP(word_24522, ax));	// 23981 cmp     word_24522, ax ;~ 0AA7:2420
cs=0xaa7;eip=0x002424; 	J(JLE(locret_1b5c7));	// 23982 jle     locret_1B5C7 ;~ 0AA7:2424
cs=0xaa7;eip=0x002428; 	T(SHL(ax, 1));	// 23983 shl     ax, 1 ;~ 0AA7:2428
cs=0xaa7;eip=0x00242a; 	X(MOV(word_2451c, ax));	// 23984 mov     word_2451C, ax ;~ 0AA7:242A
cs=0xaa7;eip=0x00242d; 	T(MOV(si, word_2450c));	// 23985 mov     si, word_2450C ;~ 0AA7:242D
cs=0xaa7;eip=0x002431; 	T(MOV(eax, *(dd*)(((db*)_tabledword_24526)+si)));	// 23986 mov     eax, _tabledword_24526[si] ;~ 0AA7:2431
cs=0xaa7;eip=0x002436; 	X(MOV(_multip_244d0, eax));	// 23987 mov     _multip_244D0, eax ;~ 0AA7:2436
cs=0xaa7;eip=0x00243a; 	T(MOV(eax, *(dd*)(((db*)_tabledword_24562)+si)));	// 23988 mov     eax, _tabledword_24562[si] ;~ 0AA7:243A
cs=0xaa7;eip=0x00243f; 	X(MOV(_multip_244cc, eax));	// 23989 mov     _multip_244CC, eax ;~ 0AA7:243F
cs=0xaa7;eip=0x002443; 	X(ADD(word_2450c, 4));	// 23990 add     word_2450C, 4 ;~ 0AA7:2443
cs=0xaa7;eip=0x002448; 	X(MOV(dword_244c8, 0x10000));	// 23991 mov     dword_244C8, 10000h ;~ 0AA7:2448
cs=0xaa7;eip=0x002451; 	X(MOV(dword_244d4, 0));	// 23992 mov     dword_244D4, 0 ;~ 0AA7:2451
cs=0xaa7;eip=0x00245a; 	T(MOV(cx, word_24516));	// 23993 mov     cx, word_24516 ;~ 0AA7:245A
cs=0xaa7;eip=0x00245e; 	T(SHR(cx, 1));	// 23994 shr     cx, 1 ;~ 0AA7:245E
cs=0xaa7;eip=0x002460; 	T(MOV(ax, 1));	// 23995 mov     ax, 1 ;~ 0AA7:2460
loc_1b4b3:
	// 5867 
cs=0xaa7;eip=0x002463; 	X(PUSH(cx));	// 23998 push    cx ;~ 0AA7:2463
cs=0xaa7;eip=0x002464; 	X(PUSH(ax));	// 23999 push    ax ;~ 0AA7:2464
cs=0xaa7;eip=0x002465; 	T(SHL(ax, 1));	// 24000 shl     ax, 1 ;~ 0AA7:2465
cs=0xaa7;eip=0x002467; 	T(DEC(ax));	// 24001 dec     ax ;~ 0AA7:2467
cs=0xaa7;eip=0x002468; 	X(MOV(word_24518, ax));	// 24002 mov     word_24518, ax ;~ 0AA7:2468
cs=0xaa7;eip=0x00246b; 	T(MOV(ax, word_24522));	// 24003 mov     ax, word_24522 ;~ 0AA7:246B
cs=0xaa7;eip=0x00246e; 	T(SUB(ax, word_24518));	// 24004 sub     ax, word_24518 ;~ 0AA7:246E
cs=0xaa7;eip=0x002472; 	T(CWD);	// 24005 cwd ;~ 0AA7:2472
cs=0xaa7;eip=0x002473; 	X(IDIV2(word_2451c));	// 24006 idiv    word_2451C ;~ 0AA7:2473
cs=0xaa7;eip=0x002477; 	T(MOV(cx, ax));	// 24007 mov     cx, ax ;~ 0AA7:2477
cs=0xaa7;eip=0x002479; 	T(INC(cx));	// 24008 inc     cx ;~ 0AA7:2479
cs=0xaa7;eip=0x00247a; 	T(MOV(ax, 0));	// 24009 mov     ax, 0 ;~ 0AA7:247A
loc_1b4cd:
	// 5868 
cs=0xaa7;eip=0x00247d; 	X(PUSH(cx));	// 24012 push    cx ;~ 0AA7:247D
cs=0xaa7;eip=0x00247e; 	X(PUSH(ax));	// 24013 push    ax ;~ 0AA7:247E
cs=0xaa7;eip=0x00247f; 	X(IMUL1_2(word_2451c));	// 24014 imul    word_2451C ;~ 0AA7:247F
cs=0xaa7;eip=0x002483; 	T(ADD(ax, word_24518));	// 24015 add     ax, word_24518 ;~ 0AA7:2483
cs=0xaa7;eip=0x002487; 	X(MOV(word_2451e, ax));	// 24016 mov     word_2451E, ax ;~ 0AA7:2487
cs=0xaa7;eip=0x00248a; 	T(ADD(ax, word_24516));	// 24017 add     ax, word_24516 ;~ 0AA7:248A
cs=0xaa7;eip=0x00248e; 	X(MOV(word_2451a, ax));	// 24018 mov     word_2451A, ax ;~ 0AA7:248E
cs=0xaa7;eip=0x002491; 	T(MOV(si, word_2451a));	// 24019 mov     si, word_2451A ;~ 0AA7:2491
cs=0xaa7;eip=0x002495; 	T(DEC(si));	// 24020 dec     si ;~ 0AA7:2495
cs=0xaa7;eip=0x002496; 	T(SHL(si, 2));	// 24021 shl     si, 2 ;~ 0AA7:2496
cs=0xaa7;eip=0x002499; 	T(ADD(si, word_2450e));	// 24022 add     si, word_2450E ;~ 0AA7:2499
cs=0xaa7;eip=0x00249d; 	T(MOV(di, word_2451e));	// 24023 mov     di, word_2451E ;~ 0AA7:249D
cs=0xaa7;eip=0x0024a1; 	T(DEC(di));	// 24024 dec     di ;~ 0AA7:24A1
cs=0xaa7;eip=0x0024a2; 	T(SHL(di, 2));	// 24025 shl     di, 2 ;~ 0AA7:24A2
cs=0xaa7;eip=0x0024a5; 	T(ADD(di, word_2450e));	// 24026 add     di, word_2450E ;~ 0AA7:24A5
cs=0xaa7;eip=0x0024a9; 	T(MOV(ecx, dword_244c8));	// 24027 mov     ecx, dword_244C8 ;~ 0AA7:24A9
cs=0xaa7;eip=0x0024ae; 	T(MOV(ebp, dword_244d4));	// 24028 mov     ebp, dword_244D4 ;~ 0AA7:24AE
cs=0xaa7;eip=0x0024b3; 	T(MOV(eax, *(dd*)(raddr(ds,si))));	// 24029 mov     eax, [si] ;~ 0AA7:24B3
cs=0xaa7;eip=0x0024b6; 	T(IMUL1_4(ecx));	// 24030 imul    ecx ;~ 0AA7:24B6
cs=0xaa7;eip=0x0024b9; 	T(SHRD(eax, edx, 0x10));	// 24031 shrd    eax, edx, 10h ;~ 0AA7:24B9
cs=0xaa7;eip=0x0024be; 	T(MOV(ebx, eax));	// 24032 mov     ebx, eax ;~ 0AA7:24BE
cs=0xaa7;eip=0x0024c1; 	T(MOV(eax, *(dd*)(raddr(ds,si+4))));	// 24033 mov     eax, [si+4] ;~ 0AA7:24C1
cs=0xaa7;eip=0x0024c5; 	T(IMUL1_4(ebp));	// 24034 imul    ebp ;~ 0AA7:24C5
cs=0xaa7;eip=0x0024c8; 	T(SHRD(eax, edx, 0x10));	// 24035 shrd    eax, edx, 10h ;~ 0AA7:24C8
cs=0xaa7;eip=0x0024cd; 	T(SUB(ebx, eax));	// 24036 sub     ebx, eax ;~ 0AA7:24CD
cs=0xaa7;eip=0x0024d0; 	T(MOV(eax, *(dd*)(raddr(ds,si+4))));	// 24037 mov     eax, [si+4] ;~ 0AA7:24D0
cs=0xaa7;eip=0x0024d4; 	T(IMUL1_4(ecx));	// 24038 imul    ecx ;~ 0AA7:24D4
cs=0xaa7;eip=0x0024d7; 	T(SHRD(eax, edx, 0x10));	// 24039 shrd    eax, edx, 10h ;~ 0AA7:24D7
cs=0xaa7;eip=0x0024dc; 	T(MOV(ecx, eax));	// 24040 mov     ecx, eax ;~ 0AA7:24DC
cs=0xaa7;eip=0x0024df; 	T(MOV(eax, *(dd*)(raddr(ds,si))));	// 24041 mov     eax, [si] ;~ 0AA7:24DF
cs=0xaa7;eip=0x0024e2; 	T(IMUL1_4(ebp));	// 24042 imul    ebp ;~ 0AA7:24E2
cs=0xaa7;eip=0x0024e5; 	T(SHRD(eax, edx, 0x10));	// 24043 shrd    eax, edx, 10h ;~ 0AA7:24E5
cs=0xaa7;eip=0x0024ea; 	T(ADD(ecx, eax));	// 24044 add     ecx, eax ;~ 0AA7:24EA
cs=0xaa7;eip=0x0024ed; 	T(MOV(eax, *(dd*)(raddr(ds,di))));	// 24045 mov     eax, [di] ;~ 0AA7:24ED
cs=0xaa7;eip=0x0024f0; 	T(SUB(eax, ebx));	// 24046 sub     eax, ebx ;~ 0AA7:24F0
cs=0xaa7;eip=0x0024f3; 	X(MOV(*(dd*)(raddr(ds,si)), eax));	// 24047 mov     [si], eax ;~ 0AA7:24F3
cs=0xaa7;eip=0x0024f6; 	T(MOV(eax, *(dd*)(raddr(ds,di+4))));	// 24048 mov     eax, [di+4] ;~ 0AA7:24F6
cs=0xaa7;eip=0x0024fa; 	T(SUB(eax, ecx));	// 24049 sub     eax, ecx ;~ 0AA7:24FA
cs=0xaa7;eip=0x0024fd; 	X(MOV(*(dd*)(raddr(ds,si+4)), eax));	// 24050 mov     [si+4], eax ;~ 0AA7:24FD
cs=0xaa7;eip=0x002501; 	X(ADD(*(dd*)(raddr(ds,di)), ebx));	// 24051 add     [di], ebx ;~ 0AA7:2501
cs=0xaa7;eip=0x002504; 	X(ADD(*(dd*)(raddr(ds,di+4)), ecx));	// 24052 add     [di+4], ecx ;~ 0AA7:2504
cs=0xaa7;eip=0x002508; 	X(POP(ax));	// 24053 pop     ax ;~ 0AA7:2508
cs=0xaa7;eip=0x002509; 	X(POP(cx));	// 24054 pop     cx ;~ 0AA7:2509
cs=0xaa7;eip=0x00250a; 	T(INC(ax));	// 24055 inc     ax ;~ 0AA7:250A
cs=0xaa7;eip=0x00250b; 	T(DEC(cx));	// 24056 dec     cx ;~ 0AA7:250B
cs=0xaa7;eip=0x00250c; 	J(JNZ(loc_1b4cd));	// 24057 jnz     loc_1B4CD ;~ 0AA7:250C
cs=0xaa7;eip=0x002510; 	T(MOV(ecx, _multip_244cc));	// 24058 mov     ecx, _multip_244CC ;~ 0AA7:2510
cs=0xaa7;eip=0x002515; 	T(MOV(ebp, _multip_244d0));	// 24059 mov     ebp, _multip_244D0 ;~ 0AA7:2515
cs=0xaa7;eip=0x00251a; 	T(MOV(eax, dword_244c8));	// 24060 mov     eax, dword_244C8 ;~ 0AA7:251A
cs=0xaa7;eip=0x00251e; 	X(MOV(dword_244c4, eax));	// 24061 mov     dword_244C4, eax ;~ 0AA7:251E
cs=0xaa7;eip=0x002522; 	T(MOV(eax, dword_244c8));	// 24062 mov     eax, dword_244C8 ;~ 0AA7:2522
cs=0xaa7;eip=0x002526; 	T(IMUL1_4(ecx));	// 24063 imul    ecx ;~ 0AA7:2526
cs=0xaa7;eip=0x002529; 	T(SHRD(eax, edx, 0x10));	// 24064 shrd    eax, edx, 10h ;~ 0AA7:2529
cs=0xaa7;eip=0x00252e; 	X(ADD(dword_244c8, eax));	// 24065 add     dword_244C8, eax ;~ 0AA7:252E
cs=0xaa7;eip=0x002533; 	T(MOV(eax, dword_244d4));	// 24066 mov     eax, dword_244D4 ;~ 0AA7:2533
cs=0xaa7;eip=0x002537; 	T(IMUL1_4(ebp));	// 24067 imul    ebp ;~ 0AA7:2537
cs=0xaa7;eip=0x00253a; 	T(SHRD(eax, edx, 0x10));	// 24068 shrd    eax, edx, 10h ;~ 0AA7:253A
cs=0xaa7;eip=0x00253f; 	X(SUB(dword_244c8, eax));	// 24069 sub     dword_244C8, eax ;~ 0AA7:253F
cs=0xaa7;eip=0x002544; 	T(MOV(eax, dword_244d4));	// 24070 mov     eax, dword_244D4 ;~ 0AA7:2544
cs=0xaa7;eip=0x002548; 	T(IMUL1_4(ecx));	// 24071 imul    ecx ;~ 0AA7:2548
cs=0xaa7;eip=0x00254b; 	T(SHRD(eax, edx, 0x10));	// 24072 shrd    eax, edx, 10h ;~ 0AA7:254B
cs=0xaa7;eip=0x002550; 	X(ADD(dword_244d4, eax));	// 24073 add     dword_244D4, eax ;~ 0AA7:2550
cs=0xaa7;eip=0x002555; 	T(MOV(eax, dword_244c4));	// 24074 mov     eax, dword_244C4 ;~ 0AA7:2555
cs=0xaa7;eip=0x002559; 	T(IMUL1_4(ebp));	// 24075 imul    ebp ;~ 0AA7:2559
cs=0xaa7;eip=0x00255c; 	T(SHRD(eax, edx, 0x10));	// 24076 shrd    eax, edx, 10h ;~ 0AA7:255C
cs=0xaa7;eip=0x002561; 	X(ADD(dword_244d4, eax));	// 24077 add     dword_244D4, eax ;~ 0AA7:2561
cs=0xaa7;eip=0x002566; 	X(POP(ax));	// 24078 pop     ax ;~ 0AA7:2566
cs=0xaa7;eip=0x002567; 	X(POP(cx));	// 24079 pop     cx ;~ 0AA7:2567
cs=0xaa7;eip=0x002568; 	T(INC(ax));	// 24080 inc     ax ;~ 0AA7:2568
cs=0xaa7;eip=0x002569; 	T(DEC(cx));	// 24081 dec     cx ;~ 0AA7:2569
cs=0xaa7;eip=0x00256a; 	J(JNZ(loc_1b4b3));	// 24082 jnz     loc_1B4B3 ;~ 0AA7:256A
cs=0xaa7;eip=0x00256e; 	T(MOV(ax, word_2451c));	// 24083 mov     ax, word_2451C ;~ 0AA7:256E
cs=0xaa7;eip=0x002571; 	X(MOV(word_24516, ax));	// 24084 mov     word_24516, ax ;~ 0AA7:2571
cs=0xaa7;eip=0x002574; 	J(JMP(loc_1b46d));	// 24085 jmp     loc_1B46D ;~ 0AA7:2574
locret_1b5c7:
	// 5869 
cs=0xaa7;eip=0x002577; 	J(RETN(0));	// 24089 retn ;~ 0AA7:2577

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_spectr_1b406: 	goto _spectr_1b406;
        case m2c::kloc_1b426: 	goto loc_1b426;
        case m2c::kloc_1b440: 	goto loc_1b440;
        case m2c::kloc_1b44a: 	goto loc_1b44a;
        case m2c::kloc_1b459: 	goto loc_1b459;
        case m2c::kloc_1b46d: 	goto loc_1b46d;
        case m2c::kloc_1b4b3: 	goto loc_1b4b3;
        case m2c::kloc_1b4cd: 	goto loc_1b4cd;
        case m2c::klocret_1b5c7: 	goto locret_1b5c7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _spectr_1bbc1(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _spectr_1bbc1:
    _begin:
cs=0xaa7;eip=0x002b71; 	X(PUSH(cx));	// 24796 push    cx ;~ 0AA7:2B71
cs=0xaa7;eip=0x002b72; 	T(MOV(eax, *(dd*)(raddr(ds,si))));	// 24797 mov     eax, [si] ;~ 0AA7:2B72
cs=0xaa7;eip=0x002b75; 	T(IMUL1_4(eax));	// 24798 imul    eax ;~ 0AA7:2B75
cs=0xaa7;eip=0x002b78; 	T(MOV(ebx, eax));	// 24799 mov     ebx, eax ;~ 0AA7:2B78
cs=0xaa7;eip=0x002b7b; 	T(MOV(ecx, edx));	// 24800 mov     ecx, edx ;~ 0AA7:2B7B
cs=0xaa7;eip=0x002b7e; 	T(MOV(eax, *(dd*)(raddr(ds,si+4))));	// 24801 mov     eax, [si+4] ;~ 0AA7:2B7E
cs=0xaa7;eip=0x002b82; 	T(IMUL1_4(eax));	// 24802 imul    eax ;~ 0AA7:2B82
cs=0xaa7;eip=0x002b85; 	T(MOV(eax, edx));	// 24803 mov     eax, edx ;~ 0AA7:2B85
cs=0xaa7;eip=0x002b88; 	T(ADD(eax, ebx));	// 24804 add     eax, ebx ;~ 0AA7:2B88
cs=0xaa7;eip=0x002b8b; 	T(ADC(edx, ecx));	// 24805 adc     edx, ecx ;~ 0AA7:2B8B
cs=0xaa7;eip=0x002b8e; 	T(MOV(eax, edx));	// 24806 mov     eax, edx ;~ 0AA7:2B8E
cs=0xaa7;eip=0x002b91; 	T(MOV(cl, byte_1de81));	// 24807 mov     cl, byte_1DE81 ;~ 0AA7:2B91
cs=0xaa7;eip=0x002b95; 	T(SAR(eax, cl));	// 24808 sar     eax, cl ;~ 0AA7:2B95
cs=0xaa7;eip=0x002b98; 	T(MOV(ebx, eax));	// 24809 mov     ebx, eax ;~ 0AA7:2B98
cs=0xaa7;eip=0x002b9b; 	J(CALL(_spectr_1c4f8,0));	// 24810 call    _spectr_1C4F8 ;~ 0AA7:2B9B
cs=0xaa7;eip=0x002b9e; 	T(OR(ah, ah));	// 24811 or      ah, ah ;~ 0AA7:2B9E
cs=0xaa7;eip=0x002ba0; 	J(JZ(loc_1bbf4));	// 24812 jz      short loc_1BBF4 ;~ 0AA7:2BA0
cs=0xaa7;eip=0x002ba2; 	T(MOV(al, 0x0FF));	// 24813 mov     al, 0FFh ;~ 0AA7:2BA2
loc_1bbf4:
	// 5940 
cs=0xaa7;eip=0x002ba4; 	T(CMP(byte_1de82, 0));	// 24816 cmp     byte_1DE82, 0 ;~ 0AA7:2BA4
cs=0xaa7;eip=0x002ba9; 	J(JZ(loc_1bc0c));	// 24817 jz      short loc_1BC0C ;~ 0AA7:2BA9
cs=0xaa7;eip=0x002bab; 	T(MOV(ah, *(raddr(ds,di+0x64))));	// 24818 mov     ah, [di+64h] ;~ 0AA7:2BAB
cs=0xaa7;eip=0x002bae; 	T(SUB(ah, byte_1de82));	// 24819 sub     ah, byte_1DE82 ;~ 0AA7:2BAE
cs=0xaa7;eip=0x002bb2; 	J(JNC(loc_1bc06));	// 24820 jnb     short loc_1BC06 ;~ 0AA7:2BB2
cs=0xaa7;eip=0x002bb4; 	T(XOR(ah, ah));	// 24821 xor     ah, ah ;~ 0AA7:2BB4
loc_1bc06:
	// 5941 
cs=0xaa7;eip=0x002bb6; 	T(CMP(ah, al));	// 24824 cmp     ah, al ;~ 0AA7:2BB6
cs=0xaa7;eip=0x002bb8; 	J(JC(loc_1bc0c));	// 24825 jb      short loc_1BC0C ;~ 0AA7:2BB8
cs=0xaa7;eip=0x002bba; 	T(MOV(al, ah));	// 24826 mov     al, ah ;~ 0AA7:2BBA
loc_1bc0c:
	// 5942 
cs=0xaa7;eip=0x002bbc; 	X(MOV(*(raddr(ds,di)), al));	// 24830 mov     [di], al ;~ 0AA7:2BBC
cs=0xaa7;eip=0x002bbe; 	T(CMP(*(raddr(ds,di+0x12C)), 0));	// 24831 cmp     byte ptr [di+12Ch], 0 ;~ 0AA7:2BBE
cs=0xaa7;eip=0x002bc3; 	J(JZ(loc_1bc1b));	// 24832 jz      short loc_1BC1B ;~ 0AA7:2BC3
cs=0xaa7;eip=0x002bc5; 	T(CMP(al, *(raddr(ds,di+0x0C8))));	// 24833 cmp     al, [di+0C8h] ;~ 0AA7:2BC5
cs=0xaa7;eip=0x002bc9; 	J(JC(loc_1bc24));	// 24834 jb      short loc_1BC24 ;~ 0AA7:2BC9
loc_1bc1b:
	// 5943 
cs=0xaa7;eip=0x002bcb; 	X(MOV(*(raddr(ds,di+0x0C8)), al));	// 24837 mov     [di+0C8h], al ;~ 0AA7:2BCB
cs=0xaa7;eip=0x002bcf; 	X(MOV(*(raddr(ds,di+0x12C)), 0x14));	// 24838 mov     byte ptr [di+12Ch], 14h ;~ 0AA7:2BCF
loc_1bc24:
	// 5944 
cs=0xaa7;eip=0x002bd4; 	T(INC(di));	// 24841 inc     di ;~ 0AA7:2BD4
cs=0xaa7;eip=0x002bd5; 	T(ADD(si, 8));	// 24842 add     si, 8 ;~ 0AA7:2BD5
cs=0xaa7;eip=0x002bd8; 	X(POP(cx));	// 24843 pop     cx ;~ 0AA7:2BD8
cs=0xaa7;eip=0x002bd9; 	T(DEC(cx));	// 24844 dec     cx ;~ 0AA7:2BD9
cs=0xaa7;eip=0x002bda; 	J(JNZ(_spectr_1bbc1));	// 24845 jnz     short _spectr_1BBC1 ;~ 0AA7:2BDA
cs=0xaa7;eip=0x002bdc; 	J(RETN(0));	// 24846 retn ;~ 0AA7:2BDC

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_spectr_1bbc1: 	goto _spectr_1bbc1;
        case m2c::kloc_1bbf4: 	goto loc_1bbf4;
        case m2c::kloc_1bc06: 	goto loc_1bc06;
        case m2c::kloc_1bc0c: 	goto loc_1bc0c;
        case m2c::kloc_1bc1b: 	goto loc_1bc1b;
        case m2c::kloc_1bc24: 	goto loc_1bc24;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _spectr_1bc2d(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _spectr_1bc2d:
    _begin:
cs=0xaa7;eip=0x002bdd; 	T(MOV(cx, 99));	// 24855 mov     cx, 99 ;~ 0AA7:2BDD
loc_1bc30:
	// 5945 
cs=0xaa7;eip=0x002be0; 	T(MOV(al, *(raddr(ds,bx))));	// 24858 mov     al, [bx] ;~ 0AA7:2BE0
cs=0xaa7;eip=0x002be2; 	T(CMP(al, 90));	// 24859 cmp     al, 90 ;~ 0AA7:2BE2
cs=0xaa7;eip=0x002be4; 	J(JC(loc_1bc38));	// 24860 jb      short loc_1BC38 ;~ 0AA7:2BE4
cs=0xaa7;eip=0x002be6; 	T(MOV(al, 90));	// 24861 mov     al, 90 ;~ 0AA7:2BE6
loc_1bc38:
	// 5946 
cs=0xaa7;eip=0x002be8; 	T(MOV(ah, *(raddr(ds,bx+0x64))));	// 24864 mov     ah, [bx+64h] ;~ 0AA7:2BE8
cs=0xaa7;eip=0x002beb; 	T(CMP(ah, 90));	// 24865 cmp     ah, 90 ;~ 0AA7:2BEB
cs=0xaa7;eip=0x002bee; 	J(JC(loc_1bc42));	// 24866 jb      short loc_1BC42 ;~ 0AA7:2BEE
cs=0xaa7;eip=0x002bf0; 	T(MOV(ah, 90));	// 24867 mov     ah, 90 ;~ 0AA7:2BF0
loc_1bc42:
	// 5947 
cs=0xaa7;eip=0x002bf2; 	T(CMP(al, ah));	// 24870 cmp     al, ah ;~ 0AA7:2BF2
cs=0xaa7;eip=0x002bf4; 	J(JZ(loc_1bc92));	// 24871 jz      short loc_1BC92 ;~ 0AA7:2BF4
cs=0xaa7;eip=0x002bf6; 	J(JC(loc_1bc70));	// 24872 jb      short loc_1BC70 ;~ 0AA7:2BF6
cs=0xaa7;eip=0x002bf8; 	T(MOVZX(dx, ah));	// 24873 movzx   dx, ah ;~ 0AA7:2BF8
cs=0xaa7;eip=0x002bfb; 	T(SHL(dx, 6));	// 24874 shl     dx, 6 ;~ 0AA7:2BFB
cs=0xaa7;eip=0x002bfe; 	T(MOV(di, dx));	// 24875 mov     di, dx ;~ 0AA7:2BFE
cs=0xaa7;eip=0x002c00; 	T(SHL(dx, 2));	// 24876 shl     dx, 2 ;~ 0AA7:2C00
cs=0xaa7;eip=0x002c03; 	T(ADD(di, dx));	// 24877 add     di, dx ;~ 0AA7:2C03
cs=0xaa7;eip=0x002c05; 	T(NEG(di));	// 24878 neg     di ;~ 0AA7:2C05
cs=0xaa7;eip=0x002c07; 	T(ADD(di, bp));	// 24879 add     di, bp ;~ 0AA7:2C07
cs=0xaa7;eip=0x002c09; 	T(MOV(dl, al));	// 24880 mov     dl, al ;~ 0AA7:2C09
cs=0xaa7;eip=0x002c0b; 	T(SUB(dl, ah));	// 24881 sub     dl, ah ;~ 0AA7:2C0B
cs=0xaa7;eip=0x002c0d; 	T(MOV(al, ah));	// 24882 mov     al, ah ;~ 0AA7:2C0D
loc_1bc5f:
	// 5948 
cs=0xaa7;eip=0x002c0f; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 24885 mov     es:[di], ax ;~ 0AA7:2C0F
cs=0xaa7;eip=0x002c12; 	T(INC(al));	// 24886 inc     al ;~ 0AA7:2C12
cs=0xaa7;eip=0x002c14; 	T(INC(ah));	// 24887 inc     ah ;~ 0AA7:2C14
cs=0xaa7;eip=0x002c16; 	T(SUB(di, 0x140));	// 24888 sub     di, 140h ;~ 0AA7:2C16
cs=0xaa7;eip=0x002c1a; 	T(DEC(dl));	// 24889 dec     dl ;~ 0AA7:2C1A
cs=0xaa7;eip=0x002c1c; 	J(JNZ(loc_1bc5f));	// 24890 jnz     short loc_1BC5F ;~ 0AA7:2C1C
cs=0xaa7;eip=0x002c1e; 	J(JMP(loc_1bc92));	// 24891 jmp     short loc_1BC92 ;~ 0AA7:2C1E
loc_1bc70:
	// 5949 
cs=0xaa7;eip=0x002c20; 	T(MOVZX(dx, al));	// 24895 movzx   dx, al ;~ 0AA7:2C20
cs=0xaa7;eip=0x002c23; 	T(SHL(dx, 6));	// 24896 shl     dx, 6 ;~ 0AA7:2C23
cs=0xaa7;eip=0x002c26; 	T(MOV(di, dx));	// 24897 mov     di, dx ;~ 0AA7:2C26
cs=0xaa7;eip=0x002c28; 	T(SHL(dx, 2));	// 24898 shl     dx, 2 ;~ 0AA7:2C28
cs=0xaa7;eip=0x002c2b; 	T(ADD(di, dx));	// 24899 add     di, dx ;~ 0AA7:2C2B
cs=0xaa7;eip=0x002c2d; 	T(NEG(di));	// 24900 neg     di ;~ 0AA7:2C2D
cs=0xaa7;eip=0x002c2f; 	T(ADD(di, bp));	// 24901 add     di, bp ;~ 0AA7:2C2F
cs=0xaa7;eip=0x002c31; 	T(MOV(dl, ah));	// 24902 mov     dl, ah ;~ 0AA7:2C31
cs=0xaa7;eip=0x002c33; 	T(SUB(dl, al));	// 24903 sub     dl, al ;~ 0AA7:2C33
cs=0xaa7;eip=0x002c35; 	T(XOR(ax, ax));	// 24904 xor     ax, ax ;~ 0AA7:2C35
loc_1bc87:
	// 5950 
cs=0xaa7;eip=0x002c37; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 24907 mov     es:[di], ax ;~ 0AA7:2C37
cs=0xaa7;eip=0x002c3a; 	T(SUB(di, 0x140));	// 24908 sub     di, 140h ;~ 0AA7:2C3A
cs=0xaa7;eip=0x002c3e; 	T(DEC(dl));	// 24909 dec     dl ;~ 0AA7:2C3E
cs=0xaa7;eip=0x002c40; 	J(JNZ(loc_1bc87));	// 24910 jnz     short loc_1BC87 ;~ 0AA7:2C40
loc_1bc92:
	// 5951 
cs=0xaa7;eip=0x002c42; 	T(CMP(*(raddr(ds,bx+0x12C)), 0));	// 24914 cmp     byte ptr [bx+12Ch], 0 ;~ 0AA7:2C42
cs=0xaa7;eip=0x002c47; 	J(JZ(loc_1bcdf));	// 24915 jz      short loc_1BCDF ;~ 0AA7:2C47
cs=0xaa7;eip=0x002c49; 	X(DEC(*(raddr(ds,bx+0x12C))));	// 24916 dec     byte ptr [bx+12Ch] ;~ 0AA7:2C49
cs=0xaa7;eip=0x002c4d; 	J(JNZ(loc_1bcc0));	// 24917 jnz     short loc_1BCC0 ;~ 0AA7:2C4D
cs=0xaa7;eip=0x002c4f; 	T(MOVZX(dx, *(raddr(ds,bx+0x0C8))));	// 24918 movzx   dx, byte ptr [bx+0C8h] ;~ 0AA7:2C4F
cs=0xaa7;eip=0x002c54; 	T(CMP(dl, 0x5A));	// 24919 cmp     dl, 5Ah ; 'Z' ;~ 0AA7:2C54
cs=0xaa7;eip=0x002c57; 	J(JC(loc_1bcab));	// 24920 jb      short loc_1BCAB ;~ 0AA7:2C57
cs=0xaa7;eip=0x002c59; 	T(MOV(dl, 0x5A));	// 24921 mov     dl, 5Ah ; 'Z' ;~ 0AA7:2C59
loc_1bcab:
	// 5952 
cs=0xaa7;eip=0x002c5b; 	T(SHL(dx, 6));	// 24924 shl     dx, 6 ;~ 0AA7:2C5B
cs=0xaa7;eip=0x002c5e; 	T(MOV(di, dx));	// 24925 mov     di, dx ;~ 0AA7:2C5E
cs=0xaa7;eip=0x002c60; 	T(SHL(dx, 2));	// 24926 shl     dx, 2 ;~ 0AA7:2C60
cs=0xaa7;eip=0x002c63; 	T(ADD(di, dx));	// 24927 add     di, dx ;~ 0AA7:2C63
cs=0xaa7;eip=0x002c65; 	T(NEG(di));	// 24928 neg     di ;~ 0AA7:2C65
cs=0xaa7;eip=0x002c67; 	T(ADD(di, bp));	// 24929 add     di, bp ;~ 0AA7:2C67
cs=0xaa7;eip=0x002c69; 	X(MOV(*(dw*)(raddr(es,di)), 0));	// 24930 mov     word ptr es:[di], 0 ;~ 0AA7:2C69
cs=0xaa7;eip=0x002c6e; 	J(JMP(loc_1bcdf));	// 24931 jmp     short loc_1BCDF ;~ 0AA7:2C6E
loc_1bcc0:
	// 5953 
cs=0xaa7;eip=0x002c70; 	T(MOVZX(dx, *(raddr(ds,bx+0x0C8))));	// 24935 movzx   dx, byte ptr [bx+0C8h] ;~ 0AA7:2C70
cs=0xaa7;eip=0x002c75; 	T(CMP(dl, 0x5A));	// 24936 cmp     dl, 5Ah ; 'Z' ;~ 0AA7:2C75
cs=0xaa7;eip=0x002c78; 	J(JC(loc_1bccc));	// 24937 jb      short loc_1BCCC ;~ 0AA7:2C78
cs=0xaa7;eip=0x002c7a; 	T(MOV(dl, 0x5A));	// 24938 mov     dl, 5Ah ; 'Z' ;~ 0AA7:2C7A
loc_1bccc:
	// 5954 
cs=0xaa7;eip=0x002c7c; 	T(SHL(dx, 6));	// 24941 shl     dx, 6 ;~ 0AA7:2C7C
cs=0xaa7;eip=0x002c7f; 	T(MOV(di, dx));	// 24942 mov     di, dx ;~ 0AA7:2C7F
cs=0xaa7;eip=0x002c81; 	T(SHL(dx, 2));	// 24943 shl     dx, 2 ;~ 0AA7:2C81
cs=0xaa7;eip=0x002c84; 	T(ADD(di, dx));	// 24944 add     di, dx ;~ 0AA7:2C84
cs=0xaa7;eip=0x002c86; 	T(NEG(di));	// 24945 neg     di ;~ 0AA7:2C86
cs=0xaa7;eip=0x002c88; 	T(ADD(di, bp));	// 24946 add     di, bp ;~ 0AA7:2C88
cs=0xaa7;eip=0x002c8a; 	X(MOV(*(dw*)(raddr(es,di)), 0x0FEFE));	// 24947 mov     word ptr es:[di], 0FEFEh ;~ 0AA7:2C8A
loc_1bcdf:
	// 5955 
cs=0xaa7;eip=0x002c8f; 	T(INC(bx));	// 24951 inc     bx ;~ 0AA7:2C8F
cs=0xaa7;eip=0x002c90; 	T(ADD(bp, 3));	// 24952 add     bp, 3 ;~ 0AA7:2C90
cs=0xaa7;eip=0x002c93; 	T(DEC(cx));	// 24953 dec     cx ;~ 0AA7:2C93
cs=0xaa7;eip=0x002c94; 	J(JNZ(loc_1bc30));	// 24954 jnz     loc_1BC30 ;~ 0AA7:2C94
cs=0xaa7;eip=0x002c98; 	J(RETN(0));	// 24955 retn ;~ 0AA7:2C98

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_spectr_1bc2d: 	goto _spectr_1bc2d;
        case m2c::kloc_1bc30: 	goto loc_1bc30;
        case m2c::kloc_1bc38: 	goto loc_1bc38;
        case m2c::kloc_1bc42: 	goto loc_1bc42;
        case m2c::kloc_1bc5f: 	goto loc_1bc5f;
        case m2c::kloc_1bc70: 	goto loc_1bc70;
        case m2c::kloc_1bc87: 	goto loc_1bc87;
        case m2c::kloc_1bc92: 	goto loc_1bc92;
        case m2c::kloc_1bcab: 	goto loc_1bcab;
        case m2c::kloc_1bcc0: 	goto loc_1bcc0;
        case m2c::kloc_1bccc: 	goto loc_1bccc;
        case m2c::kloc_1bcdf: 	goto loc_1bcdf;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _spectr_1bce9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _spectr_1bce9:
    _begin:
cs=0xaa7;eip=0x002c99; 	T(MOV(al, *(raddr(ds,bx))));	// 24964 mov     al, [bx] ;~ 0AA7:2C99
cs=0xaa7;eip=0x002c9b; 	T(CMP(al, 90));	// 24965 cmp     al, 90 ;~ 0AA7:2C9B
cs=0xaa7;eip=0x002c9d; 	J(JC(loc_1bcf1));	// 24966 jb      short loc_1BCF1 ;~ 0AA7:2C9D
cs=0xaa7;eip=0x002c9f; 	T(MOV(al, 90));	// 24967 mov     al, 90 ;~ 0AA7:2C9F
loc_1bcf1:
	// 5956 
cs=0xaa7;eip=0x002ca1; 	T(MOV(ah, *(raddr(ds,bx+0x64))));	// 24970 mov     ah, [bx+64h] ;~ 0AA7:2CA1
cs=0xaa7;eip=0x002ca4; 	T(CMP(ah, 90));	// 24971 cmp     ah, 90 ;~ 0AA7:2CA4
cs=0xaa7;eip=0x002ca7; 	J(JC(loc_1bcfb));	// 24972 jb      short loc_1BCFB ;~ 0AA7:2CA7
cs=0xaa7;eip=0x002ca9; 	T(MOV(ah, 90));	// 24973 mov     ah, 90 ;~ 0AA7:2CA9
loc_1bcfb:
	// 5957 
cs=0xaa7;eip=0x002cab; 	T(CMP(al, ah));	// 24976 cmp     al, ah ;~ 0AA7:2CAB
cs=0xaa7;eip=0x002cad; 	J(JZ(locret_1bd67));	// 24977 jz      short locret_1BD67 ;~ 0AA7:2CAD
cs=0xaa7;eip=0x002caf; 	J(JC(loc_1bd3e));	// 24978 jb      short loc_1BD3E ;~ 0AA7:2CAF
cs=0xaa7;eip=0x002cb1; 	T(MOVZX(dx, ah));	// 24979 movzx   dx, ah ;~ 0AA7:2CB1
cs=0xaa7;eip=0x002cb4; 	T(SHL(dx, 6));	// 24980 shl     dx, 6 ;~ 0AA7:2CB4
cs=0xaa7;eip=0x002cb7; 	T(MOV(di, dx));	// 24981 mov     di, dx ;~ 0AA7:2CB7
cs=0xaa7;eip=0x002cb9; 	T(SHL(dx, 2));	// 24982 shl     dx, 2 ;~ 0AA7:2CB9
cs=0xaa7;eip=0x002cbc; 	T(ADD(di, dx));	// 24983 add     di, dx ;~ 0AA7:2CBC
cs=0xaa7;eip=0x002cbe; 	T(NEG(di));	// 24984 neg     di ;~ 0AA7:2CBE
cs=0xaa7;eip=0x002cc0; 	T(ADD(di, bp));	// 24985 add     di, bp ;~ 0AA7:2CC0
cs=0xaa7;eip=0x002cc2; 	T(MOV(dl, al));	// 24986 mov     dl, al ;~ 0AA7:2CC2
cs=0xaa7;eip=0x002cc4; 	T(SUB(dl, ah));	// 24987 sub     dl, ah ;~ 0AA7:2CC4
cs=0xaa7;eip=0x002cc6; 	T(SHR(ah, 1));	// 24988 shr     ah, 1 ;~ 0AA7:2CC6
cs=0xaa7;eip=0x002cc8; 	T(MOV(eax, 0x0FCFCFCFC));	// 24989 mov     eax, 0FCFCFCFCh ;~ 0AA7:2CC8
cs=0xaa7;eip=0x002cce; 	J(JNC(loc_1bd26));	// 24990 jnb     short loc_1BD26 ;~ 0AA7:2CCE
cs=0xaa7;eip=0x002cd0; 	T(OR(eax, 0x1010101));	// 24991 or      eax, 1010101h ;~ 0AA7:2CD0
loc_1bd26:
	// 5958 
cs=0xaa7;eip=0x002cd6; 	X(MOV(*(dd*)(raddr(es,di)), eax));	// 24995 mov     es:[di], eax ;~ 0AA7:2CD6
cs=0xaa7;eip=0x002cda; 	X(MOV(*(dd*)(raddr(es,di+4)), eax));	// 24996 mov     es:[di+4], eax ;~ 0AA7:2CDA
cs=0xaa7;eip=0x002cdf; 	T(SUB(di, 0x140));	// 24997 sub     di, 140h ;~ 0AA7:2CDF
cs=0xaa7;eip=0x002ce3; 	T(XOR(eax, 0x1010101));	// 24998 xor     eax, 1010101h ;~ 0AA7:2CE3
cs=0xaa7;eip=0x002ce9; 	T(DEC(dl));	// 24999 dec     dl ;~ 0AA7:2CE9
cs=0xaa7;eip=0x002ceb; 	J(JNZ(loc_1bd26));	// 25000 jnz     short loc_1BD26 ;~ 0AA7:2CEB
cs=0xaa7;eip=0x002ced; 	J(RETN(0));	// 25001 retn ;~ 0AA7:2CED
loc_1bd3e:
	// 5959 
cs=0xaa7;eip=0x002cee; 	T(MOVZX(dx, al));	// 25005 movzx   dx, al ;~ 0AA7:2CEE
cs=0xaa7;eip=0x002cf1; 	T(SHL(dx, 6));	// 25006 shl     dx, 6 ;~ 0AA7:2CF1
cs=0xaa7;eip=0x002cf4; 	T(MOV(di, dx));	// 25007 mov     di, dx ;~ 0AA7:2CF4
cs=0xaa7;eip=0x002cf6; 	T(SHL(dx, 2));	// 25008 shl     dx, 2 ;~ 0AA7:2CF6
cs=0xaa7;eip=0x002cf9; 	T(ADD(di, dx));	// 25009 add     di, dx ;~ 0AA7:2CF9
cs=0xaa7;eip=0x002cfb; 	T(NEG(di));	// 25010 neg     di ;~ 0AA7:2CFB
cs=0xaa7;eip=0x002cfd; 	T(ADD(di, bp));	// 25011 add     di, bp ;~ 0AA7:2CFD
cs=0xaa7;eip=0x002cff; 	T(MOV(dl, ah));	// 25012 mov     dl, ah ;~ 0AA7:2CFF
cs=0xaa7;eip=0x002d01; 	T(SUB(dl, al));	// 25013 sub     dl, al ;~ 0AA7:2D01
cs=0xaa7;eip=0x002d03; 	T(XOR(eax, eax));	// 25014 xor     eax, eax ;~ 0AA7:2D03
loc_1bd56:
	// 5960 
cs=0xaa7;eip=0x002d06; 	X(MOV(*(dd*)(raddr(es,di)), eax));	// 25017 mov     es:[di], eax ;~ 0AA7:2D06
cs=0xaa7;eip=0x002d0a; 	X(MOV(*(dd*)(raddr(es,di+4)), eax));	// 25018 mov     es:[di+4], eax ;~ 0AA7:2D0A
cs=0xaa7;eip=0x002d0f; 	T(SUB(di, 0x140));	// 25019 sub     di, 140h ;~ 0AA7:2D0F
cs=0xaa7;eip=0x002d13; 	T(DEC(dl));	// 25020 dec     dl ;~ 0AA7:2D13
cs=0xaa7;eip=0x002d15; 	J(JNZ(loc_1bd56));	// 25021 jnz     short loc_1BD56 ;~ 0AA7:2D15
locret_1bd67:
	// 5961 
cs=0xaa7;eip=0x002d17; 	J(RETN(0));	// 25024 retn ;~ 0AA7:2D17

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_spectr_1bce9: 	goto _spectr_1bce9;
        case m2c::kloc_1bcf1: 	goto loc_1bcf1;
        case m2c::kloc_1bcfb: 	goto loc_1bcfb;
        case m2c::kloc_1bd26: 	goto loc_1bd26;
        case m2c::kloc_1bd3e: 	goto loc_1bd3e;
        case m2c::kloc_1bd56: 	goto loc_1bd56;
        case m2c::klocret_1bd67: 	goto locret_1bd67;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _hex_1be39(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _hex_1be39:
    _begin:
cs=0xaa7;eip=0x002de9; 	T(AND(al, 0x0F));	// 25133 and     al, 0Fh ;~ 0AA7:2DE9
cs=0xaa7;eip=0x002deb; 	T(OR(al, 0x30));	// 25134 or      al, 30h ;~ 0AA7:2DEB
cs=0xaa7;eip=0x002ded; 	T(CMP(al, 0x39));	// 25135 cmp     al, 39h ; '9' ;~ 0AA7:2DED
cs=0xaa7;eip=0x002def; 	J(JBE(loc_1be43));	// 25136 jbe     short loc_1BE43 ;~ 0AA7:2DEF
cs=0xaa7;eip=0x002df1; 	T(ADD(al, 7));	// 25137 add     al, 7 ;~ 0AA7:2DF1
loc_1be43:
	// 5971 
cs=0xaa7;eip=0x002df3; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 25140 mov     es:[di], ax ;~ 0AA7:2DF3
cs=0xaa7;eip=0x002df6; 	T(ADD(di, 2));	// 25141 add     di, 2 ;~ 0AA7:2DF6
cs=0xaa7;eip=0x002df9; 	J(RETN(0));	// 25142 retn ;~ 0AA7:2DF9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_hex_1be39: 	goto _hex_1be39;
        case m2c::kloc_1be43: 	goto loc_1be43;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _useless_strange(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _useless_strange:
    _begin:
cs=0xaa7;eip=0x002dfa; 	T(MOV(bp, sp));	// 25151 mov     bp, sp ;~ 0AA7:2DFA
cs=0xaa7;eip=0x002dfc; 	X(XCHG(si, *(dw*)(raddr(ss,bp+0))));	// 25152 xchg    si, [bp+0] ;~ 0AA7:2DFC
cs=0xaa7;eip=0x002dff; 	T(LES(di, _videomempointer));	// 25153 les     di, _videomempointer ;~ 0AA7:2DFF
cs=0xaa7;eip=0x002e03; 	T(ADD(di, *(dw*)(raddr(cs,si))));	// 25154 add     di, cs:[si] ;~ 0AA7:2E03
cs=0xaa7;eip=0x002e06; 	T(MOV(ah, *(raddr(cs,si+2))));	// 25155 mov     ah, cs:[si+2] ;~ 0AA7:2E06
cs=0xaa7;eip=0x002e0a; 	T(ADD(si, 3));	// 25156 add     si, 3 ;~ 0AA7:2E0A
cs=0xaa7;eip=0x002e0d; 	T(MOV(cl, 0x70));	// 25157 mov     cl, 70h ; 'p' ;~ 0AA7:2E0D
cs=0xaa7;eip=0x002e0f; 	T(XOR(al, al));	// 25158 xor     al, al ;~ 0AA7:2E0F
loc_1be61:
	// 5972 
cs=0xaa7;eip=0x002e11; 	T(ADD(cl, al));	// 25161 add     cl, al ;~ 0AA7:2E11
cs=0xaa7;eip=0x002e13; 	T(MOV(al, *(raddr(cs,si))));	// 25162 mov     al, cs:[si] ;~ 0AA7:2E13
cs=0xaa7;eip=0x002e16; 	T(INC(si));	// 25163 inc     si ;~ 0AA7:2E16
cs=0xaa7;eip=0x002e17; 	T(XOR(al, cl));	// 25164 xor     al, cl ;~ 0AA7:2E17
cs=0xaa7;eip=0x002e19; 	J(JZ(loc_1be73));	// 25165 jz      short loc_1BE73 ;~ 0AA7:2E19
cs=0xaa7;eip=0x002e1b; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 25166 mov     es:[di], ax ;~ 0AA7:2E1B
cs=0xaa7;eip=0x002e1e; 	T(ADD(di, 2));	// 25167 add     di, 2 ;~ 0AA7:2E1E
cs=0xaa7;eip=0x002e21; 	J(JMP(loc_1be61));	// 25168 jmp     short loc_1BE61 ;~ 0AA7:2E21
loc_1be73:
	// 5973 
cs=0xaa7;eip=0x002e23; 	X(XCHG(si, *(dw*)(raddr(ss,bp+0))));	// 25172 xchg    si, [bp+0] ;~ 0AA7:2E23
cs=0xaa7;eip=0x002e26; 	J(RETN(0));	// 25173 retn ;~ 0AA7:2E26

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_useless_strange: 	goto _useless_strange;
        case m2c::kloc_1be61: 	goto loc_1be61;
        case m2c::kloc_1be73: 	goto loc_1be73;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _message_1be77(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _message_1be77:
    _begin:
cs=0xaa7;eip=0x002e27; 	X(PUSH(ax));	// 25183 push    ax ;~ 0AA7:2E27
cs=0xaa7;eip=0x002e28; 	X(PUSH(si));	// 25184 push    si ;~ 0AA7:2E28
cs=0xaa7;eip=0x002e29; 	T(MOV(ch, al));	// 25185 mov     ch, al ;~ 0AA7:2E29
cs=0xaa7;eip=0x002e2b; 	T(SUB(ch, 2));	// 25186 sub     ch, 2 ;~ 0AA7:2E2B
cs=0xaa7;eip=0x002e2e; 	T(MOV(dh, al));	// 25187 mov     dh, al ;~ 0AA7:2E2E
cs=0xaa7;eip=0x002e30; 	T(ADD(dh, 2));	// 25188 add     dh, 2 ;~ 0AA7:2E30
cs=0xaa7;eip=0x002e33; 	T(MOV(ah, 0x0FF));	// 25189 mov     ah, 0FFh ;~ 0AA7:2E33
loc_1be85:
	// 5974 
cs=0xaa7;eip=0x002e35; 	T(MOV(al, *(raddr(ds,si))));	// 25192 mov     al, [si] ;~ 0AA7:2E35
cs=0xaa7;eip=0x002e37; 	T(INC(ah));	// 25193 inc     ah ;~ 0AA7:2E37
cs=0xaa7;eip=0x002e39; 	T(INC(si));	// 25194 inc     si ;~ 0AA7:2E39
cs=0xaa7;eip=0x002e3a; 	T(OR(al, al));	// 25195 or      al, al ;~ 0AA7:2E3A
cs=0xaa7;eip=0x002e3c; 	J(JNZ(loc_1be85));	// 25196 jnz     short loc_1BE85 ;~ 0AA7:2E3C
cs=0xaa7;eip=0x002e3e; 	T(MOV(cl, 0x4E));	// 25197 mov     cl, 4Eh ; 'N' ;~ 0AA7:2E3E
cs=0xaa7;eip=0x002e40; 	T(SUB(cl, ah));	// 25198 sub     cl, ah ;~ 0AA7:2E40
cs=0xaa7;eip=0x002e42; 	T(SHR(ah, 1));	// 25199 shr     ah, 1 ;~ 0AA7:2E42
cs=0xaa7;eip=0x002e44; 	T(MOV(dl, 0x2A));	// 25200 mov     dl, 2Ah ; '*' ;~ 0AA7:2E44
cs=0xaa7;eip=0x002e46; 	T(ADD(dl, ah));	// 25201 add     dl, ah ;~ 0AA7:2E46
cs=0xaa7;eip=0x002e48; 	T(MOV(al, ch));	// 25202 mov     al, ch ;~ 0AA7:2E48
cs=0xaa7;eip=0x002e4a; 	T(INC(al));	// 25203 inc     al ;~ 0AA7:2E4A
cs=0xaa7;eip=0x002e4c; 	T(MOV(ah, 0x0A0));	// 25204 mov     ah, 0A0h ; '
cs=0xaa7;eip=0x002e4e; 	T(MUL1_1(ah));	// 25205 mul     ah ;~ 0AA7:2E4E
cs=0xaa7;eip=0x002e50; 	T(MOVZX(di, cl));	// 25206 movzx   di, cl ;~ 0AA7:2E50
cs=0xaa7;eip=0x002e53; 	T(AND(di, 0x0FFFE));	// 25207 and     di, 0FFFEh ;~ 0AA7:2E53
cs=0xaa7;eip=0x002e56; 	T(ADD(ax, di));	// 25208 add     ax, di ;~ 0AA7:2E56
cs=0xaa7;eip=0x002e58; 	T(ADD(ax, 0x0A4));	// 25209 add     ax, 0A4h ; '
cs=0xaa7;eip=0x002e5b; 	X(PUSH(ax));	// 25210 push    ax ;~ 0AA7:2E5B
cs=0xaa7;eip=0x002e5c; 	T(SHR(cl, 1));	// 25211 shr     cl, 1 ;~ 0AA7:2E5C
cs=0xaa7;eip=0x002e5e; 	T(MOV(bl, 0x78));	// 25212 mov     bl, 78h ; 'x' ;~ 0AA7:2E5E
cs=0xaa7;eip=0x002e60; 	T(MOV(ax, 0x7F03));	// 25213 mov     ax, 7F03h ;~ 0AA7:2E60
cs=0xaa7;eip=0x002e63; 	J(CALL(_draw_frame,0));	// 25214 call    _draw_frame ;~ 0AA7:2E63
cs=0xaa7;eip=0x002e66; 	X(POP(ax));	// 25215 pop     ax ;~ 0AA7:2E66
cs=0xaa7;eip=0x002e67; 	X(POP(si));	// 25216 pop     si              ; str ;~ 0AA7:2E67
cs=0xaa7;eip=0x002e68; 	T(LES(di, _videomempointer));	// 25217 les     di, _videomempointer ;~ 0AA7:2E68
cs=0xaa7;eip=0x002e6c; 	T(ADD(di, ax));	// 25218 add     di, ax ;~ 0AA7:2E6C
cs=0xaa7;eip=0x002e6e; 	X(POP(ax));	// 25219 pop     ax ;~ 0AA7:2E6E
cs=0xaa7;eip=0x002e6f; 	J(CALL(_text_1bf69,0));	// 25220 call    _text_1BF69 ;~ 0AA7:2E6F
cs=0xaa7;eip=0x002e72; 	J(RETN(0));	// 25221 retn ;~ 0AA7:2E72

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_message_1be77: 	goto _message_1be77;
        case m2c::kloc_1be85: 	goto loc_1be85;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _draw_frame(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _draw_frame:
    _begin:
cs=0xaa7;eip=0x002e73; 	X(PUSH(es));	// 25230 push    es ;~ 0AA7:2E73
cs=0xaa7;eip=0x002e74; 	T(LES(bp, _videomempointer));	// 25231 les     bp, _videomempointer ;~ 0AA7:2E74
cs=0xaa7;eip=0x002e78; 	T(MOVZX(di, cl));	// 25232 movzx   di, cl ;~ 0AA7:2E78
cs=0xaa7;eip=0x002e7b; 	T(MOVZX(si, ch));	// 25233 movzx   si, ch ;~ 0AA7:2E7B
cs=0xaa7;eip=0x002e7e; 	T(IMUL2_2(si,80));	// 25234 imul    si, 80 ;~ 0AA7:2E7E
cs=0xaa7;eip=0x002e81; 	T(ADD(di, si));	// 25235 add     di, si ;~ 0AA7:2E81
cs=0xaa7;eip=0x002e83; 	T(SHL(di, 1));	// 25236 shl     di, 1 ;~ 0AA7:2E83
cs=0xaa7;eip=0x002e85; 	T(ADD(di, bp));	// 25237 add     di, bp ;~ 0AA7:2E85
cs=0xaa7;eip=0x002e87; 	T(MOVZX(bp, dl));	// 25238 movzx   bp, dl ;~ 0AA7:2E87
cs=0xaa7;eip=0x002e8a; 	T(INC(bp));	// 25239 inc     bp ;~ 0AA7:2E8A
cs=0xaa7;eip=0x002e8b; 	T(MOVZX(si, cl));	// 25240 movzx   si, cl ;~ 0AA7:2E8B
cs=0xaa7;eip=0x002e8e; 	T(SUB(bp, si));	// 25241 sub     bp, si ;~ 0AA7:2E8E
cs=0xaa7;eip=0x002e90; 	J(JBE(loc_1bf57));	// 25242 jbe     short loc_1BF57 ;~ 0AA7:2E90
cs=0xaa7;eip=0x002e92; 	T(SUB(bp, 2));	// 25243 sub     bp, 2 ;~ 0AA7:2E92
cs=0xaa7;eip=0x002e95; 	J(JC(loc_1bf57));	// 25244 jb      short loc_1BF57 ;~ 0AA7:2E95
cs=0xaa7;eip=0x002e97; 	T(MOV(dl, dh));	// 25245 mov     dl, dh ;~ 0AA7:2E97
cs=0xaa7;eip=0x002e99; 	T(INC(dl));	// 25246 inc     dl ;~ 0AA7:2E99
cs=0xaa7;eip=0x002e9b; 	T(SUB(dl, ch));	// 25247 sub     dl, ch ;~ 0AA7:2E9B
cs=0xaa7;eip=0x002e9d; 	J(JBE(loc_1bf57));	// 25248 jbe     short loc_1BF57 ;~ 0AA7:2E9D
cs=0xaa7;eip=0x002e9f; 	T(XOR(dh, dh));	// 25249 xor     dh, dh ;~ 0AA7:2E9F
cs=0xaa7;eip=0x002ea1; 	T(SUB(dx, 2));	// 25250 sub     dx, 2 ;~ 0AA7:2EA1
cs=0xaa7;eip=0x002ea4; 	J(JC(loc_1bf57));	// 25251 jb      short loc_1BF57 ;~ 0AA7:2EA4
cs=0xaa7;eip=0x002ea6; 	T(CMP(al, 6));	// 25252 cmp     al, 6 ;~ 0AA7:2EA6
cs=0xaa7;eip=0x002ea8; 	J(JNC(loc_1bf57));	// 25253 jnb     short loc_1BF57 ;~ 0AA7:2EA8
cs=0xaa7;eip=0x002eaa; 	T(MOVZX(si, al));	// 25254 movzx   si, al ;~ 0AA7:2EAA
cs=0xaa7;eip=0x002ead; 	T(IMUL2_2(si,6));	// 25255 imul    si, 6 ;~ 0AA7:2EAD
cs=0xaa7;eip=0x002eb0; 	T(ADD(si, offset(dseg,_frameborder)));	// 25256 add     si, offset _frameborder ; "      
cs=0xaa7;eip=0x002eb4; 	T(MOV(al, *(raddr(ds,si))));	// 25257 mov     al, [si] ;~ 0AA7:2EB4
cs=0xaa7;eip=0x002eb6; 	T(CLD);	// 25258 cld ;~ 0AA7:2EB6
cs=0xaa7;eip=0x002eb7; 	X(STOSW);	// 25259 stosw ;~ 0AA7:2EB7
cs=0xaa7;eip=0x002eb8; 	T(MOV(cx, bp));	// 25260 mov     cx, bp ;~ 0AA7:2EB8
cs=0xaa7;eip=0x002eba; 	J(JCXZ(loc_1bf11));	// 25261 jcxz    short loc_1BF11 ;~ 0AA7:2EBA
cs=0xaa7;eip=0x002ebc; 	T(MOV(al, *(raddr(ds,si+4))));	// 25262 mov     al, [si+4] ;~ 0AA7:2EBC
	// 25263 rep stosw ;~ 0AA7:2EBF
cs=0xaa7;eip=0x002ebf; 	X(	REP STOSW);	// 25263 rep stosw ;~ 0AA7:2EBF
loc_1bf11:
	// 5975 
cs=0xaa7;eip=0x002ec1; 	T(XCHG(bl, ah));	// 25266 xchg    bl, ah ;~ 0AA7:2EC1
cs=0xaa7;eip=0x002ec3; 	T(MOV(al, *(raddr(ds,si+1))));	// 25267 mov     al, [si+1] ;~ 0AA7:2EC3
cs=0xaa7;eip=0x002ec6; 	X(STOSW);	// 25268 stosw ;~ 0AA7:2EC6
cs=0xaa7;eip=0x002ec7; 	T(OR(dx, dx));	// 25269 or      dx, dx ;~ 0AA7:2EC7
cs=0xaa7;eip=0x002ec9; 	J(JZ(loc_1bf3a));	// 25270 jz      short loc_1BF3A ;~ 0AA7:2EC9
loc_1bf1b:
	// 5976 
cs=0xaa7;eip=0x002ecb; 	T(XCHG(bl, ah));	// 25273 xchg    bl, ah ;~ 0AA7:2ECB
cs=0xaa7;eip=0x002ecd; 	T(ADD(di, 156));	// 25274 add     di, 156 ;~ 0AA7:2ECD
cs=0xaa7;eip=0x002ed1; 	T(SUB(di, bp));	// 25275 sub     di, bp ;~ 0AA7:2ED1
cs=0xaa7;eip=0x002ed3; 	T(SUB(di, bp));	// 25276 sub     di, bp ;~ 0AA7:2ED3
cs=0xaa7;eip=0x002ed5; 	T(MOV(al, *(raddr(ds,si+5))));	// 25277 mov     al, [si+5] ;~ 0AA7:2ED5
cs=0xaa7;eip=0x002ed8; 	X(STOSW);	// 25278 stosw ;~ 0AA7:2ED8
cs=0xaa7;eip=0x002ed9; 	T(MOV(cx, bp));	// 25279 mov     cx, bp ;~ 0AA7:2ED9
cs=0xaa7;eip=0x002edb; 	J(JCXZ(loc_1bf31));	// 25280 jcxz    short loc_1BF31 ;~ 0AA7:2EDB
cs=0xaa7;eip=0x002edd; 	T(MOV(al, ' '));	// 25281 mov     al, ' ' ;~ 0AA7:2EDD
	// 25282 rep stosw ;~ 0AA7:2EDF
cs=0xaa7;eip=0x002edf; 	X(	REP STOSW);	// 25282 rep stosw ;~ 0AA7:2EDF
loc_1bf31:
	// 5977 
cs=0xaa7;eip=0x002ee1; 	T(XCHG(bl, ah));	// 25285 xchg    bl, ah ;~ 0AA7:2EE1
cs=0xaa7;eip=0x002ee3; 	T(MOV(al, *(raddr(ds,si+5))));	// 25286 mov     al, [si+5] ;~ 0AA7:2EE3
cs=0xaa7;eip=0x002ee6; 	X(STOSW);	// 25287 stosw ;~ 0AA7:2EE6
cs=0xaa7;eip=0x002ee7; 	T(DEC(dx));	// 25288 dec     dx ;~ 0AA7:2EE7
cs=0xaa7;eip=0x002ee8; 	J(JNZ(loc_1bf1b));	// 25289 jnz     short loc_1BF1B ;~ 0AA7:2EE8
loc_1bf3a:
	// 5978 
cs=0xaa7;eip=0x002eea; 	T(XCHG(bl, ah));	// 25292 xchg    bl, ah ;~ 0AA7:2EEA
cs=0xaa7;eip=0x002eec; 	T(ADD(di, 156));	// 25293 add     di, 156 ;~ 0AA7:2EEC
cs=0xaa7;eip=0x002ef0; 	T(SUB(di, bp));	// 25294 sub     di, bp ;~ 0AA7:2EF0
cs=0xaa7;eip=0x002ef2; 	T(SUB(di, bp));	// 25295 sub     di, bp ;~ 0AA7:2EF2
cs=0xaa7;eip=0x002ef4; 	T(MOV(al, *(raddr(ds,si+2))));	// 25296 mov     al, [si+2] ;~ 0AA7:2EF4
cs=0xaa7;eip=0x002ef7; 	X(STOSW);	// 25297 stosw ;~ 0AA7:2EF7
cs=0xaa7;eip=0x002ef8; 	T(XCHG(bl, ah));	// 25298 xchg    bl, ah ;~ 0AA7:2EF8
cs=0xaa7;eip=0x002efa; 	T(MOV(cx, bp));	// 25299 mov     cx, bp ;~ 0AA7:2EFA
cs=0xaa7;eip=0x002efc; 	J(JCXZ(loc_1bf53));	// 25300 jcxz    short loc_1BF53 ;~ 0AA7:2EFC
cs=0xaa7;eip=0x002efe; 	T(MOV(al, *(raddr(ds,si+4))));	// 25301 mov     al, [si+4] ;~ 0AA7:2EFE
	// 25302 rep stosw ;~ 0AA7:2F01
cs=0xaa7;eip=0x002f01; 	X(	REP STOSW);	// 25302 rep stosw ;~ 0AA7:2F01
loc_1bf53:
	// 5979 
cs=0xaa7;eip=0x002f03; 	T(MOV(al, *(raddr(ds,si+3))));	// 25305 mov     al, [si+3] ;~ 0AA7:2F03
cs=0xaa7;eip=0x002f06; 	X(STOSW);	// 25306 stosw ;~ 0AA7:2F06
loc_1bf57:
	// 5980 
cs=0xaa7;eip=0x002f07; 	X(POP(es));	// 25310 pop     es ;~ 0AA7:2F07
cs=0xaa7;eip=0x002f08; 	J(RETN(0));	// 25311 retn ;~ 0AA7:2F08

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_draw_frame: 	goto _draw_frame;
        case m2c::kloc_1bf11: 	goto loc_1bf11;
        case m2c::kloc_1bf1b: 	goto loc_1bf1b;
        case m2c::kloc_1bf31: 	goto loc_1bf31;
        case m2c::kloc_1bf3a: 	goto loc_1bf3a;
        case m2c::kloc_1bf53: 	goto loc_1bf53;
        case m2c::kloc_1bf57: 	goto loc_1bf57;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _write_scr(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _write_scr:
    _begin:
cs=0xaa7;eip=0x002f09; 	T(MOV(bp, di));	// 25321 mov     bp, di ;~ 0AA7:2F09
cs=0xaa7;eip=0x002f0b; 	T(ADD(di, *(dw*)(raddr(ds,si))));	// 25322 add     di, [si] ;~ 0AA7:2F0B
cs=0xaa7;eip=0x002f0d; 	T(ADD(si, 2));	// 25323 add     si, 2 ;~ 0AA7:2F0D
cs=0xaa7;eip=0x002f10; 	J(return _group37(m2c::k_n2_setcolor, _state););	// 25324 jmp     short _n2_setcolor ;~ 0AA7:2F10

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_write_scr: 	goto _write_scr;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group37(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group37:
    _begin:
seg001_2f12_proc:
	// 25330 
loc_1bf62:
	// 5981 
cs=0xaa7;eip=0x002f12; 	T(MOV(di, *(dw*)(raddr(ds,si))));	// 25331 mov     di, [si] ;~ 0AA7:2F12
cs=0xaa7;eip=0x002f14; 	T(ADD(di, bp));	// 25332 add     di, bp ;~ 0AA7:2F14
cs=0xaa7;eip=0x002f16; 	T(ADD(si, 2));	// 25333 add     si, 2 ;~ 0AA7:2F16
_text_1bf69:
	// 25340 
cs=0xaa7;eip=0x002f19; 	T(MOV(al, *(raddr(ds,si))));	// 25345 mov     al, [si] ;~ 0AA7:2F19
cs=0xaa7;eip=0x002f1b; 	T(INC(si));	// 25346 inc     si              ; str ;~ 0AA7:2F1B
cs=0xaa7;eip=0x002f1c; 	T(OR(al, al));	// 25347 or      al, al ;~ 0AA7:2F1C
cs=0xaa7;eip=0x002f1e; 	J(JZ(locret_1bf85));	// 25348 jz      short locret_1BF85 ;~ 0AA7:2F1E
cs=0xaa7;eip=0x002f20; 	T(CMP(al, 1));	// 25349 cmp     al, 1 ;~ 0AA7:2F20
cs=0xaa7;eip=0x002f22; 	J(JZ(loc_1bf62));	// 25350 jz      short loc_1BF62 ;~ 0AA7:2F22
cs=0xaa7;eip=0x002f24; 	T(CMP(al, 2));	// 25351 cmp     al, 2 ;~ 0AA7:2F24
cs=0xaa7;eip=0x002f26; 	J(JZ(_n2_setcolor));	// 25352 jz      short _n2_setcolor ;~ 0AA7:2F26
cs=0xaa7;eip=0x002f28; 	X(MOV(*(dw*)(raddr(es,di)), ax));	// 25353 mov     es:[di], ax ;~ 0AA7:2F28
cs=0xaa7;eip=0x002f2b; 	T(ADD(di, 2));	// 25354 add     di, 2 ;~ 0AA7:2F2B
cs=0xaa7;eip=0x002f2e; 	J(JMP(_text_1bf69));	// 25355 jmp     short _text_1BF69 ;~ 0AA7:2F2E
_n2_setcolor:
	// 5982 
cs=0xaa7;eip=0x002f30; 	T(LODSB);	// 25360 lodsb ;~ 0AA7:2F30
cs=0xaa7;eip=0x002f31; 	T(MOV(ah, al));	// 25361 mov     ah, al ;~ 0AA7:2F31
cs=0xaa7;eip=0x002f33; 	J(JMP(_text_1bf69));	// 25362 jmp     short _text_1BF69 ;~ 0AA7:2F33
locret_1bf85:
	// 5983 
cs=0xaa7;eip=0x002f35; 	J(RETN(0));	// 25366 retn ;~ 0AA7:2F35

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_n2_setcolor: 	goto _n2_setcolor;
        case m2c::k_text_1bf69: 	goto _text_1bf69;
        case m2c::klocret_1bf85: 	goto locret_1bf85;
        case m2c::kseg001_2f12_proc: 	goto seg001_2f12_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group38(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group38:
    _begin:
seg001_2f36_proc:
	// 25372 
loc_1bf86:
	// 5984 
cs=0xaa7;eip=0x002f36; 	X(STOSW);	// 25373 stosw ;~ 0AA7:2F36
_put_message:
	// 25380 
cs=0xaa7;eip=0x002f37; 	T(CLD);	// 25385 cld ;~ 0AA7:2F37
cs=0xaa7;eip=0x002f38; 	T(LODSB);	// 25386 lodsb ;~ 0AA7:2F38
cs=0xaa7;eip=0x002f39; 	T(OR(al, al));	// 25387 or      al, al ;~ 0AA7:2F39
cs=0xaa7;eip=0x002f3b; 	J(JNZ(loc_1bf86));	// 25388 jnz     short loc_1BF86 ;~ 0AA7:2F3B
cs=0xaa7;eip=0x002f3d; 	J(RETN(0));	// 25389 retn ;~ 0AA7:2F3D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_put_message: 	goto _put_message;
        case m2c::kseg001_2f36_proc: 	goto seg001_2f36_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _put_message2(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _put_message2:
    _begin:
cs=0xaa7;eip=0x002f3e; 	X(STOSW);	// 25398 stosw ;~ 0AA7:2F3E
cs=0xaa7;eip=0x002f3f; 	T(CLD);	// 25399 cld ;~ 0AA7:2F3F
cs=0xaa7;eip=0x002f40; 	X(LODS(*(raddr(fs,si)),si,1));	// 25400 lods    byte ptr fs:[si] ;~ 0AA7:2F40
cs=0xaa7;eip=0x002f42; 	T(OR(al, al));	// 25401 or      al, al ;~ 0AA7:2F42
cs=0xaa7;eip=0x002f44; 	J(JNZ(_put_message2));	// 25402 jnz     short _put_message2 ;~ 0AA7:2F44
cs=0xaa7;eip=0x002f46; 	J(RETN(0));	// 25403 retn ;~ 0AA7:2F46

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_put_message2: 	goto _put_message2;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _loadcfg(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _loadcfg:
    _begin:
cs=0xaa7;eip=0x002f47; 	T(MOV(dx, offset(dseg,_siplay_cfg)));	// 25411 mov     dx, offset _sIplay_cfg ; "C:\\IPLAY.CFG" ;~ 0AA7:2F47
cs=0xaa7;eip=0x002f4a; 	T(MOV(ax, 0x3D00));	// 25412 mov     ax, 3D00h ;~ 0AA7:2F4A
cs=0xaa7;eip=0x002f4d; 	S(_INT(0x21));	// 25413 int     21h             ; DOS - 2+ - OPEN DISK FILE WITH HANDLE ;~ 0AA7:2F4D
cs=0xaa7;eip=0x002f4f; 	J(JC(loc_1bfe3));	// 25417 jb      short loc_1BFE3 ;~ 0AA7:2F4F
cs=0xaa7;eip=0x002f51; 	T(MOV(bx, ax));	// 25418 mov     bx, ax ;~ 0AA7:2F51
cs=0xaa7;eip=0x002f53; 	T(MOV(dx, offset(dseg,_cfg_buffer)));	// 25419 mov     dx, offset _cfg_buffer ;~ 0AA7:2F53
cs=0xaa7;eip=0x002f56; 	T(MOV(cx, 4));	// 25420 mov     cx, 4 ;~ 0AA7:2F56
cs=0xaa7;eip=0x002f59; 	T(MOV(ah, 0x3F));	// 25421 mov     ah, 3Fh ; '?' ;~ 0AA7:2F59
cs=0xaa7;eip=0x002f5b; 	X(PUSH(bx));	// 25422 push    bx ;~ 0AA7:2F5B
cs=0xaa7;eip=0x002f5c; 	S(_INT(0x21));	// 25423 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 0AA7:2F5C
cs=0xaa7;eip=0x002f5e; 	X(POP(bx));	// 25426 pop     bx ;~ 0AA7:2F5E
cs=0xaa7;eip=0x002f5f; 	J(JC(loc_1bfc9));	// 25427 jb      short loc_1BFC9 ;~ 0AA7:2F5F
cs=0xaa7;eip=0x002f61; 	T(MOV(eax, dword_1dcec));	// 25428 mov     eax, dword_1DCEC ;~ 0AA7:2F61
cs=0xaa7;eip=0x002f65; 	T(CMP(eax, *(dd*)((&_cfg_buffer))));	// 25429 cmp     eax, dword ptr _cfg_buffer ;~ 0AA7:2F65
cs=0xaa7;eip=0x002f6a; 	T(STC);	// 25430 stc ;~ 0AA7:2F6A
cs=0xaa7;eip=0x002f6b; 	J(JNZ(loc_1bfc9));	// 25431 jnz     short loc_1BFC9 ;~ 0AA7:2F6B
cs=0xaa7;eip=0x002f6d; 	T(MOV(dx, offset(dseg,_snd_card_type)));	// 25432 mov     dx, offset _snd_card_type ;~ 0AA7:2F6D
cs=0xaa7;eip=0x002f70; 	T(MOV(cx, 0x0C));	// 25433 mov     cx, 0Ch ;~ 0AA7:2F70
cs=0xaa7;eip=0x002f73; 	T(MOV(ah, 0x3F));	// 25434 mov     ah, 3Fh ; '?' ;~ 0AA7:2F73
cs=0xaa7;eip=0x002f75; 	X(PUSH(bx));	// 25435 push    bx ;~ 0AA7:2F75
cs=0xaa7;eip=0x002f76; 	S(_INT(0x21));	// 25436 int     21h             ; DOS - 2+ - READ FROM FILE WITH HANDLE ;~ 0AA7:2F76
cs=0xaa7;eip=0x002f78; 	X(POP(bx));	// 25439 pop     bx ;~ 0AA7:2F78
loc_1bfc9:
	// 5985 
cs=0xaa7;eip=0x002f79; 	X(PUSHF);	// 25443 pushf ;~ 0AA7:2F79
cs=0xaa7;eip=0x002f7a; 	T(MOV(ah, 0x3E));	// 25444 mov     ah, 3Eh ;~ 0AA7:2F7A
cs=0xaa7;eip=0x002f7c; 	S(_INT(0x21));	// 25445 int     21h             ; DOS - 2+ - CLOSE A FILE WITH HANDLE ;~ 0AA7:2F7C
cs=0xaa7;eip=0x002f7e; 	X(POPF);	// 25447 popf ;~ 0AA7:2F7E
cs=0xaa7;eip=0x002f7f; 	J(JC(loc_1bfe3));	// 25448 jb      short loc_1BFE3 ;~ 0AA7:2F7F
cs=0xaa7;eip=0x002f81; 	T(MOV(si, offset(dseg,_snd_card_type)));	// 25449 mov     si, offset _snd_card_type ;~ 0AA7:2F81
cs=0xaa7;eip=0x002f84; 	T(MOV(cx, 0x0C));	// 25450 mov     cx, 0Ch ;~ 0AA7:2F84
cs=0xaa7;eip=0x002f87; 	T(XOR(al, al));	// 25451 xor     al, al ;~ 0AA7:2F87
loc_1bfd9:
	// 5986 
cs=0xaa7;eip=0x002f89; 	T(ADD(al, *(raddr(ds,si))));	// 25454 add     al, [si] ;~ 0AA7:2F89
cs=0xaa7;eip=0x002f8b; 	T(INC(si));	// 25455 inc     si ;~ 0AA7:2F8B
cs=0xaa7;eip=0x002f8c; 	J(LOOP(loc_1bfd9));	// 25456 loop    loc_1BFD9 ;~ 0AA7:2F8C
cs=0xaa7;eip=0x002f8e; 	T(OR(al, al));	// 25457 or      al, al ;~ 0AA7:2F8E
cs=0xaa7;eip=0x002f90; 	J(JNZ(loc_1bfe3));	// 25458 jnz     short loc_1BFE3 ;~ 0AA7:2F90
cs=0xaa7;eip=0x002f92; 	J(RETN(0));	// 25459 retn ;~ 0AA7:2F92
loc_1bfe3:
	// 5987 
cs=0xaa7;eip=0x002f93; 	T(MOV(ax, cs));	// 25464 mov     ax, cs ;~ 0AA7:2F93
cs=0xaa7;eip=0x002f95; 	T(MOV(ds, ax));	// 25465 mov     ds, ax ;~ 0AA7:2F95
cs=0xaa7;eip=0x002f97; 	T(MOV(dx, offset(seg001,_aconfigfilenotf)));	// 25467 mov     dx, offset _aConfigFileNotF ; "Config file not found. Run ISETUP first"... ;~ 0AA7:2F97
cs=0xaa7;eip=0x002f9a; 	T(MOV(ah, 9));	// 25468 mov     ah, 9 ;~ 0AA7:2F9A
cs=0xaa7;eip=0x002f9c; 	S(_INT(0x21));	// 25469 int     21h             ; DOS - PRINT STRING ;~ 0AA7:2F9C
cs=0xaa7;eip=0x002f9e; 	T(MOV(ax, 0x4C01));	// 25471 mov     ax, 4C01h ;~ 0AA7:2F9E
cs=0xaa7;eip=0x002fa1; 	S(_INT(0x21));	// 25472 int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT) ;~ 0AA7:2FA1
exit(1);
	return _getexename(0, _state);
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_loadcfg: 	goto _loadcfg;
        case m2c::kloc_1bfc9: 	goto loc_1bfc9;
        case m2c::kloc_1bfd9: 	goto loc_1bfd9;
        case m2c::kloc_1bfe3: 	goto loc_1bfe3;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _getexename(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _getexename:
    _begin:
cs=0xaa7;eip=0x002fd0; 	T(MOV(es, _esseg_atstart));	// 25486 mov     es, _esseg_atstart ;~ 0AA7:2FD0
cs=0xaa7;eip=0x002fd4; 	T(MOV(es, *(dw*)(raddr(es,0x2C))));	// 25487 mov     es, word ptr es:2Ch ;~ 0AA7:2FD4
cs=0xaa7;eip=0x002fd9; 	T(XOR(di, di));	// 25488 xor     di, di ;~ 0AA7:2FD9
cs=0xaa7;eip=0x002fdb; 	T(XOR(al, al));	// 25489 xor     al, al ;~ 0AA7:2FDB
cs=0xaa7;eip=0x002fdd; 	T(CLD);	// 25490 cld ;~ 0AA7:2FDD
cs=0xaa7;eip=0x002fde; 	T(MOV(cx, 0x8000));	// 25491 mov     cx, 8000h ;~ 0AA7:2FDE
loc_1c031:
	// 5988 
	// 25494 repne scasb ;~ 0AA7:2FE1
cs=0xaa7;eip=0x002fe1; 	T(	REPNE SCASB);	// 25494 repne scasb ;~ 0AA7:2FE1
cs=0xaa7;eip=0x002fe3; 	J(JNZ(loc_1c050));	// 25495 jnz     short loc_1C050 ;~ 0AA7:2FE3
cs=0xaa7;eip=0x002fe5; 	T(CMP(*(raddr(es,di)), al));	// 25496 cmp     es:[di], al ;~ 0AA7:2FE5
cs=0xaa7;eip=0x002fe8; 	J(JNZ(loc_1c031));	// 25497 jnz     short loc_1C031 ;~ 0AA7:2FE8
cs=0xaa7;eip=0x002fea; 	T(MOV(cx, *(dw*)(raddr(es,di+1))));	// 25498 mov     cx, es:[di+1] ;~ 0AA7:2FEA
cs=0xaa7;eip=0x002fee; 	J(JCXZ(loc_1c050));	// 25499 jcxz    short loc_1C050 ;~ 0AA7:2FEE
cs=0xaa7;eip=0x002ff0; 	T(ADD(di, 3));	// 25500 add     di, 3 ;~ 0AA7:2FF0
loc_1c043:
	// 5989 
cs=0xaa7;eip=0x002ff3; 	T(MOV(al, *(raddr(es,di))));	// 25503 mov     al, es:[di] ;~ 0AA7:2FF3
cs=0xaa7;eip=0x002ff6; 	X(MOV(*(raddr(ds,si)), al));	// 25504 mov     [si], al ;~ 0AA7:2FF6
cs=0xaa7;eip=0x002ff8; 	T(INC(di));	// 25505 inc     di ;~ 0AA7:2FF8
cs=0xaa7;eip=0x002ff9; 	T(INC(si));	// 25506 inc     si ;~ 0AA7:2FF9
cs=0xaa7;eip=0x002ffa; 	T(OR(al, al));	// 25507 or      al, al ;~ 0AA7:2FFA
cs=0xaa7;eip=0x002ffc; 	J(JNZ(loc_1c043));	// 25508 jnz     short loc_1C043 ;~ 0AA7:2FFC
cs=0xaa7;eip=0x002ffe; 	T(CLC);	// 25509 clc ;~ 0AA7:2FFE
cs=0xaa7;eip=0x002fff; 	J(RETN(0));	// 25510 retn ;~ 0AA7:2FFF
loc_1c050:
	// 5990 
cs=0xaa7;eip=0x003000; 	T(STC);	// 25515 stc ;~ 0AA7:3000
cs=0xaa7;eip=0x003001; 	J(RETN(0));	// 25516 retn ;~ 0AA7:3001

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_getexename: 	goto _getexename;
        case m2c::kloc_1c031: 	goto loc_1c031;
        case m2c::kloc_1c043: 	goto loc_1c043;
        case m2c::kloc_1c050: 	goto loc_1c050;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _useless_unset_egaseq(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _useless_unset_egaseq:
    _begin:
cs=0xaa7;eip=0x003002; 	T(MOV(ah, al));	// 25524 mov     ah, al ;~ 0AA7:3002
cs=0xaa7;eip=0x003004; 	T(MOV(dx, 0x3CE));	// 25525 mov     dx, 3CEh ;~ 0AA7:3004
cs=0xaa7;eip=0x003007; 	T(MOV(al, 5));	// 25526 mov     al, 5 ;~ 0AA7:3007
cs=0xaa7;eip=0x003009; 	S(OUT(dx, al));	// 25527 out     dx, al          ; EGA: graph 1 and 2 addr reg: ;~ 0AA7:3009
cs=0xaa7;eip=0x00300a; 	T(INC(dl));	// 25534 inc     dl ;~ 0AA7:300A
cs=0xaa7;eip=0x00300c; 	S(IN(al, dx));	// 25535 in      al, dx          ; EGA port: graphics controller data register ;~ 0AA7:300C
cs=0xaa7;eip=0x00300d; 	T(AND(al, 0x0FC));	// 25536 and     al, 0FCh ;~ 0AA7:300D
cs=0xaa7;eip=0x00300f; 	T(OR(al, ah));	// 25537 or      al, ah ;~ 0AA7:300F
cs=0xaa7;eip=0x003011; 	S(OUT(dx, al));	// 25538 out     dx, al          ; EGA port: graphics controller data register ;~ 0AA7:3011
cs=0xaa7;eip=0x003012; 	J(RETN(0));	// 25539 retn ;~ 0AA7:3012

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_useless_unset_egaseq: 	goto _useless_unset_egaseq;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _set_egasequencer(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _set_egasequencer:
    _begin:
cs=0xaa7;eip=0x003013; 	T(MOV(dx, 0x3C4));	// 25548 mov     dx, 3C4h ;~ 0AA7:3013
cs=0xaa7;eip=0x003016; 	T(MOV(al, 1));	// 25549 mov     al, 1 ;~ 0AA7:3016
cs=0xaa7;eip=0x003018; 	S(OUT(dx, al));	// 25550 out     dx, al          ; EGA: sequencer address reg ;~ 0AA7:3018
cs=0xaa7;eip=0x003019; 	T(INC(dl));	// 25556 inc     dl ;~ 0AA7:3019
cs=0xaa7;eip=0x00301b; 	S(IN(al, dx));	// 25557 in      al, dx          ; EGA port: sequencer data register ;~ 0AA7:301B
cs=0xaa7;eip=0x00301c; 	T(OR(al, 0x20));	// 25558 or      al, 100000b     ; 9 dots/char ;~ 0AA7:301C
cs=0xaa7;eip=0x00301e; 	S(OUT(dx, al));	// 25564 out     dx, al          ; EGA port: sequencer data register ;~ 0AA7:301E
cs=0xaa7;eip=0x00301f; 	J(RETN(0));	// 25565 retn ;~ 0AA7:301F

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_set_egasequencer: 	goto _set_egasequencer;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _graph_1c070(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _graph_1c070:
    _begin:
cs=0xaa7;eip=0x003020; 	T(MOV(dx, 0x3C4));	// 25574 mov     dx, 3C4h ;~ 0AA7:3020
cs=0xaa7;eip=0x003023; 	T(MOV(al, 1));	// 25575 mov     al, 1 ;~ 0AA7:3023
cs=0xaa7;eip=0x003025; 	S(OUT(dx, al));	// 25576 out     dx, al          ; EGA: sequencer address reg ;~ 0AA7:3025
cs=0xaa7;eip=0x003026; 	T(INC(dl));	// 25582 inc     dl ;~ 0AA7:3026
cs=0xaa7;eip=0x003028; 	S(IN(al, dx));	// 25583 in      al, dx          ; EGA port: sequencer data register ;~ 0AA7:3028
cs=0xaa7;eip=0x003029; 	T(AND(al, 0x0DF));	// 25584 and     al, 0DFh ;~ 0AA7:3029
cs=0xaa7;eip=0x00302b; 	S(OUT(dx, al));	// 25585 out     dx, al          ; EGA port: sequencer data register ;~ 0AA7:302B
cs=0xaa7;eip=0x00302c; 	J(RETN(0));	// 25586 retn ;~ 0AA7:302C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_graph_1c070: 	goto _graph_1c070;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _get_keybsw(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _get_keybsw:
    _begin:
cs=0xaa7;eip=0x0030d4; 	X(PUSH(es));	// 25717 push    es ;~ 0AA7:30D4
cs=0xaa7;eip=0x0030d5; 	T(XOR(ax, ax));	// 25718 xor     ax, ax ;~ 0AA7:30D5
cs=0xaa7;eip=0x0030d7; 	T(MOV(es, ax));	// 25719 mov     es, ax ;~ 0AA7:30D7
cs=0xaa7;eip=0x0030d9; 	T(MOV(ax, *(dw*)(raddr(es,0x17))));	// 25721 mov     ax, es:17h ;~ 0AA7:30D9
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0030dd; 	X(MOV(*(dw*)(((db*)&_keyb_switches)), ax));	// 25722 mov     cs:_keyb_switches, ax ;~ 0AA7:30DD
cs=0xaa7;eip=0x0030e1; 	X(POP(es));	// 25723 pop     es ;~ 0AA7:30E1
cs=0xaa7;eip=0x0030e2; 	J(RETN(0));	// 25725 retn ;~ 0AA7:30E2

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_get_keybsw: 	goto _get_keybsw;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _set_keybsw(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _set_keybsw:
    _begin:
cs=0xaa7;eip=0x0030e3; 	X(PUSH(es));	// 25733 push    es ;~ 0AA7:30E3
cs=0xaa7;eip=0x0030e4; 	T(XOR(ax, ax));	// 25734 xor     ax, ax ;~ 0AA7:30E4
cs=0xaa7;eip=0x0030e6; 	T(MOV(es, ax));	// 25735 mov     es, ax ;~ 0AA7:30E6
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0030e8; 	T(MOV(ax, *(dw*)(((db*)&_keyb_switches))));	// 25737 mov     ax, cs:_keyb_switches ;~ 0AA7:30E8
cs=0xaa7;eip=0x0030ec; 	X(MOV(*(dw*)(raddr(es,0x17)), ax));	// 25738 mov     es:17h, ax ;~ 0AA7:30EC
cs=0xaa7;eip=0x0030f0; 	X(POP(es));	// 25739 pop     es ;~ 0AA7:30F0
cs=0xaa7;eip=0x0030f1; 	J(RETN(0));	// 25741 retn ;~ 0AA7:30F1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_set_keybsw: 	goto _set_keybsw;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_30f2_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_30f2_proc:
    _begin:
cs=0xaa7;eip=0x0030f2; 	T(XCHG(bx, bx));	// 25745 xchg    bx, bx ;~ 0AA7:30F2
	return _group32(m2c::k_int24, _state);
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg001_30f2_proc: 	goto seg001_30f2_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group39(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group39:
    _begin:
_int1a_timer:
	// 25813 
cs=0xaa7;eip=0x00313b; 	X(PUSHF);	// 25814 pushf ;~ 0AA7:313B
cs=0xaa7;eip=0x00313c; 	T(OR(ah, ah));	// 25815 or      ah, ah ;~ 0AA7:313C
cs=0xaa7;eip=0x00313e; 	J(JNZ(loc_1c19c));	// 25816 jnz     short loc_1C19C ;~ 0AA7:313E
cs=0xaa7;eip=0x003140; 	X(PUSHAD);	// 25817 pushad ;~ 0AA7:3140
cs=0xaa7;eip=0x003142; 	X(PUSH(ds));	// 25818 push    ds ;~ 0AA7:3142
cs=0xaa7;eip=0x003143; 	X(PUSH(es));	// 25819 push    es ;~ 0AA7:3143
cs=0xaa7;eip=0x003144; 	J(CALL(_rereadrtc_settmr,0));	// 25820 call    _rereadrtc_settmr ;~ 0AA7:3144
cs=0xaa7;eip=0x003147; 	X(POP(es));	// 25821 pop     es ;~ 0AA7:3147
cs=0xaa7;eip=0x003148; 	X(POP(ds));	// 25822 pop     ds ;~ 0AA7:3148
cs=0xaa7;eip=0x003149; 	X(POPAD);	// 25823 popad ;~ 0AA7:3149
cs=0xaa7;eip=0x00314b; 	T(NOP);	// 25824 nop ;~ 0AA7:314B
loc_1c19c:
	// 6007 
cs=0xaa7;eip=0x00314c; 	X(POPF);	// 25827 popf ;~ 0AA7:314C
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x00314d; __disp=*(dd*)(((db*)&_int1avect));
printf("int1a\n");
	J(return __dispatch_call(__disp, _state););	// 25828 jmp     cs:_int1Avect ;~ 0AA7:314D
_dosexec:
	// 25849 
cs=0xaa7;eip=0x003169; 	T(MOV(ax, 3));	// 25851 mov     ax, 3 ;~ 0AA7:3169
cs=0xaa7;eip=0x00316c; 	S(_INT(0x10));	// 25852 int     10h             ; - VIDEO - SET VIDEO MODE ;~ 0AA7:316C
cs=0xaa7;eip=0x00316e; 	J(CALL(_txt_enableblink,0));	// 25854 call    _txt_enableblink ;~ 0AA7:316E
cs=0xaa7;eip=0x003171; 	T(MOV(cx, 0));	// 25855 mov     cx, 0 ;~ 0AA7:3171
cs=0xaa7;eip=0x003174; 	T(MOV(dx, 0x94F));	// 25856 mov     dx, 94Fh ;~ 0AA7:3174
cs=0xaa7;eip=0x003177; 	T(MOV(bl, 0x78));	// 25857 mov     bl, 78h ; 'x' ;~ 0AA7:3177
cs=0xaa7;eip=0x003179; 	T(MOV(ax, 0x7F03));	// 25858 mov     ax, 7F03h ;~ 0AA7:3179
cs=0xaa7;eip=0x00317c; 	J(CALL(_draw_frame,0));	// 25859 call    _draw_frame ;~ 0AA7:317C
cs=0xaa7;eip=0x00317f; 	J(CALL(_txt_draw_top_title,0));	// 25860 call    _txt_draw_top_title ;~ 0AA7:317F
cs=0xaa7;eip=0x003182; 	T(MOV(si, offset(dseg,word_1d26d)));	// 25861 mov     si, offset word_1D26D ; str ;~ 0AA7:3182
cs=0xaa7;eip=0x003185; 	T(LES(di, _videomempointer));	// 25862 les     di, _videomempointer ;~ 0AA7:3185
cs=0xaa7;eip=0x003189; 	J(CALL(_write_scr,0));	// 25863 call    _write_scr ;~ 0AA7:3189
cs=0xaa7;eip=0x00318c; 	T(MOV(dx, 0x0A00));	// 25864 mov     dx, 0A00h ;~ 0AA7:318C
cs=0xaa7;eip=0x00318f; 	T(XOR(bh, bh));	// 25865 xor     bh, bh ;~ 0AA7:318F
cs=0xaa7;eip=0x003191; 	T(MOV(ah, 2));	// 25866 mov     ah, 2 ;~ 0AA7:3191
cs=0xaa7;eip=0x003193; 	S(_INT(0x10));	// 25867 int     10h             ; - VIDEO - SET CURSOR POSITION ;~ 0AA7:3193
cs=0xaa7;eip=0x003195; 	T(TEST(byte_1de78, 2));	// 25870 test    byte_1DE78, 2 ;~ 0AA7:3195
cs=0xaa7;eip=0x00319a; 	J(JZ(loc_1c209));	// 25871 jz      short loc_1C209 ;~ 0AA7:319A
cs=0xaa7;eip=0x00319c; 	T(MOV(ax, 0x351A));	// 25872 mov     ax, 351Ah ;~ 0AA7:319C
cs=0xaa7;eip=0x00319f; 	S(_INT(0x21));	// 25873 int     21h             ; DOS - 2+ - GET INTERRUPT VECTOR ;~ 0AA7:319F
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0031a1; 	X(MOV(*(dw*)(((db*)&_int1avect)), bx));	// 25876 mov     word ptr cs:_int1Avect, bx ;~ 0AA7:31A1
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0031a6; 	X(MOV(*(dw*)(((db*)&_int1avect)+2), es));	// 25877 mov     word ptr cs:_int1Avect+2, es ;~ 0AA7:31A6
cs=0xaa7;eip=0x0031ab; 	X(PUSH(ds));	// 25878 push    ds ;~ 0AA7:31AB
cs=0xaa7;eip=0x0031ac; 	T(MOV(ax, cs));	// 25879 mov     ax, cs ;~ 0AA7:31AC
cs=0xaa7;eip=0x0031ae; 	T(MOV(ds, ax));	// 25880 mov     ds, ax ;~ 0AA7:31AE
cs=0xaa7;eip=0x0031b0; 	T(MOV(dx, m2c::k_int1a_timer));	// 25882 mov     dx, offset _int1a_timer ;~ 0AA7:31B0
cs=0xaa7;eip=0x0031b3; 	T(MOV(ax, 0x251A));	// 25883 mov     ax, 251Ah ;~ 0AA7:31B3
cs=0xaa7;eip=0x0031b6; 	S(_INT(0x21));	// 25884 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 0AA7:31B6
cs=0xaa7;eip=0x0031b8; 	X(POP(ds));	// 25887 pop     ds ;~ 0AA7:31B8
loc_1c209:
	// 6008 
cs=0xaa7;eip=0x0031b9; 	T(MOV(si, offset(dseg,byte_1dd3f)));	// 25891 mov     si, offset byte_1DD3F ; str ;~ 0AA7:31B9
cs=0xaa7;eip=0x0031bc; 	J(CALL(_dosgetcurdir,0));	// 25892 call    _dosgetcurdir ;~ 0AA7:31BC
cs=0xaa7;eip=0x0031bf; 	T(MOV(al, 1));	// 25893 mov     al, 1 ;~ 0AA7:31BF
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0031c1; 	X(MOV(*(&byte_1c1b8), al));	// 25894 mov     cs:byte_1C1B8, al ;~ 0AA7:31C1
cs=0xaa7;eip=0x0031c5; 	J(CALLF(sub_12d35,0));	// 25895 call    sub_12D35 ;~ 0AA7:31C5
cs=0xaa7;eip=0x0031ca; 	T(MOV(es, _esseg_atstart));	// 25896 mov     es, _esseg_atstart ;~ 0AA7:31CA
cs=0xaa7;eip=0x0031ce; 	T(MOV(ax, *(dw*)(raddr(es,0x2C))));	// 25897 mov     ax, es:2Ch ;~ 0AA7:31CE
cs=0xaa7;eip=0x0031d2; 	X(MOV(word_24445, ax));	// 25898 mov     word_24445, ax ;~ 0AA7:31D2
cs=0xaa7;eip=0x0031d5; 	J(CALL(_get_comspec,0));	// 25899 call    _get_comspec ;~ 0AA7:31D5
cs=0xaa7;eip=0x0031d8; 	J(JC(loc_1c23e));	// 25900 jb      short loc_1C23E ;~ 0AA7:31D8
cs=0xaa7;eip=0x0031da; 	T(MOV(dx, di));	// 25901 mov     dx, di ;~ 0AA7:31DA
cs=0xaa7;eip=0x0031dc; 	X(PUSH(ds));	// 25902 push    ds ;~ 0AA7:31DC
cs=0xaa7;eip=0x0031dd; 	T(MOV(ax, ds));	// 25903 mov     ax, ds ;~ 0AA7:31DD
cs=0xaa7;eip=0x0031df; 	T(MOV(es, ax));	// 25904 mov     es, ax ;~ 0AA7:31DF
cs=0xaa7;eip=0x0031e1; 	T(MOV(bx, offset(dseg,word_24445)));	// 25906 mov     bx, offset word_24445 ;~ 0AA7:31E1
cs=0xaa7;eip=0x0031e4; 	T(MOV(ds, word_24445));	// 25907 mov     ds, word_24445 ;~ 0AA7:31E4
cs=0xaa7;eip=0x0031e8; 	T(MOV(ax, 0x4B00));	// 25908 mov     ax, 4B00h ;~ 0AA7:31E8
cs=0xaa7;eip=0x0031eb; 	S(_INT(0x21));	// 25909 int     21h             ; DOS - 2+ - LOAD OR EXECUTE (EXEC) ;~ 0AA7:31EB
cs=0xaa7;eip=0x0031ed; 	X(POP(ds));	// 25913 pop     ds ;~ 0AA7:31ED
loc_1c23e:
	// 6009 
cs=0xaa7;eip=0x0031ee; 	T(MOV(al, 0));	// 25916 mov     al, 0 ;~ 0AA7:31EE
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x0031f0; 	X(MOV(*(&byte_1c1b8), al));	// 25917 mov     cs:byte_1C1B8, al ;~ 0AA7:31F0
cs=0xaa7;eip=0x0031f4; 	J(CALLF(sub_12d35,0));	// 25918 call    sub_12D35 ;~ 0AA7:31F4
cs=0xaa7;eip=0x0031f9; 	T(TEST(byte_1de78, 2));	// 25919 test    byte_1DE78, 2 ;~ 0AA7:31F9
cs=0xaa7;eip=0x0031fe; 	J(JZ(loc_1c25c));	// 25920 jz      short loc_1C25C ;~ 0AA7:31FE
cs=0xaa7;eip=0x003200; 	X(PUSH(ds));	// 25921 push    ds ;~ 0AA7:3200
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x003201; 	T(LDS(dx, *(dd*)(((db*)&_int1avect))));	// 25922 lds     dx, cs:_int1Avect ;~ 0AA7:3201
cs=0xaa7;eip=0x003206; 	T(MOV(ax, 0x251A));	// 25923 mov     ax, 251Ah ;~ 0AA7:3206
cs=0xaa7;eip=0x003209; 	S(_INT(0x21));	// 25924 int     21h             ; DOS - SET INTERRUPT VECTOR ;~ 0AA7:3209
cs=0xaa7;eip=0x00320b; 	X(POP(ds));	// 25927 pop     ds ;~ 0AA7:320B
loc_1c25c:
	// 6010 
cs=0xaa7;eip=0x00320c; 	T(MOV(si, offset(dseg,byte_1dd3f)));	// 25930 mov     si, offset byte_1DD3F ; str ;~ 0AA7:320C
cs=0xaa7;eip=0x00320f; 	J(CALL(_doschdir,0));	// 25931 call    _doschdir ;~ 0AA7:320F
cs=0xaa7;eip=0x003212; 	X(MOV(byte_1de70, 0x0FF));	// 25932 mov     byte_1DE70, 0FFh ;~ 0AA7:3212
cs=0xaa7;eip=0x003217; 	J(RETN(0));	// 25933 retn ;~ 0AA7:3217

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_dosexec: 	goto _dosexec;
        case m2c::k_int1a_timer: 	goto _int1a_timer;
        case m2c::kloc_1c19c: 	goto loc_1c19c;
        case m2c::kloc_1c209: 	goto loc_1c209;
        case m2c::kloc_1c23e: 	goto loc_1c23e;
        case m2c::kloc_1c25c: 	goto loc_1c25c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool seg001_3152_proc(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    seg001_3152_proc:
    _begin:
cs=0xaa7;eip=0x003152; 	T(XCHG(bx, bx));	// 25832 xchg    bx, bx ;~ 0AA7:3152
	return _group39(m2c::k_dosexec, _state);
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::kseg001_3152_proc: 	goto seg001_3152_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _get_comspec(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _get_comspec:
    _begin:
cs=0xaa7;eip=0x003218; 	T(MOV(es, _esseg_atstart));	// 25941 mov     es, _esseg_atstart ;~ 0AA7:3218
cs=0xaa7;eip=0x00321c; 	T(MOV(es, *(dw*)(raddr(es,0x2C))));	// 25943 mov     es, word ptr es:2Ch ;~ 0AA7:321C
cs=0xaa7;eip=0x003221; 	T(XOR(di, di));	// 25944 xor     di, di ;~ 0AA7:3221
loc_1c273:
	// 6011 
cs=0xaa7;eip=0x003223; 	T(CMP(*(raddr(es,di)), 0));	// 25947 cmp     byte ptr es:[di], 0 ;~ 0AA7:3223
cs=0xaa7;eip=0x003227; 	T(STC);	// 25948 stc ;~ 0AA7:3227
cs=0xaa7;eip=0x003228; 	J(JZ(locret_1c29d));	// 25949 jz      short locret_1C29D ;~ 0AA7:3228
cs=0xaa7;eip=0x00322a; 	T(CMP(*(dd*)(raddr(es,di)), 0x534D4F43));	// 25950 cmp     dword ptr es:[di], 534D4F43h ; COMSPEC= ;~ 0AA7:322A
cs=0xaa7;eip=0x003232; 	J(JNZ(loc_1c28f));	// 25951 jnz     short loc_1C28F ;~ 0AA7:3232
cs=0xaa7;eip=0x003234; 	T(CMP(*(dd*)(raddr(es,di+4)), 0x3D434550));	// 25952 cmp     dword ptr es:[di+4], 3D434550h ;~ 0AA7:3234
cs=0xaa7;eip=0x00323d; 	J(JZ(loc_1c299));	// 25953 jz      short loc_1C299 ;~ 0AA7:323D
loc_1c28f:
	// 6012 
cs=0xaa7;eip=0x00323f; 	T(INC(di));	// 25957 inc     di ;~ 0AA7:323F
cs=0xaa7;eip=0x003240; 	T(CMP(*(raddr(es,di)), 0));	// 25958 cmp     byte ptr es:[di], 0 ;~ 0AA7:3240
cs=0xaa7;eip=0x003244; 	J(JNZ(loc_1c28f));	// 25959 jnz     short loc_1C28F ;~ 0AA7:3244
cs=0xaa7;eip=0x003246; 	T(INC(di));	// 25960 inc     di ;~ 0AA7:3246
cs=0xaa7;eip=0x003247; 	J(JMP(loc_1c273));	// 25961 jmp     short loc_1C273 ;~ 0AA7:3247
loc_1c299:
	// 6013 
cs=0xaa7;eip=0x003249; 	T(ADD(di, 8));	// 25965 add     di, 8 ;~ 0AA7:3249
cs=0xaa7;eip=0x00324c; 	T(CLC);	// 25966 clc ;~ 0AA7:324C
locret_1c29d:
	// 6014 
cs=0xaa7;eip=0x00324d; 	J(RETN(0));	// 25969 retn ;~ 0AA7:324D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_get_comspec: 	goto _get_comspec;
        case m2c::kloc_1c273: 	goto loc_1c273;
        case m2c::kloc_1c28f: 	goto loc_1c28f;
        case m2c::kloc_1c299: 	goto loc_1c299;
        case m2c::klocret_1c29d: 	goto locret_1c29d;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group40(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group40:
    _begin:
_find_mods:
	// 25976 
cs=0xaa7;eip=0x00324e; 	T(MOV(ax, ds));	// 25978 mov     ax, ds ;~ 0AA7:324E
cs=0xaa7;eip=0x003250; 	T(MOV(es, ax));	// 25979 mov     es, ax ;~ 0AA7:3250
cs=0xaa7;eip=0x003252; 	T(MOV(di, offset(dseg,_buffer_1db6c)));	// 25981 mov     di, offset _buffer_1DB6C ;~ 0AA7:3252
cs=0xaa7;eip=0x003255; 	T(MOV(si, di));	// 25982 mov     si, di ;~ 0AA7:3255
cs=0xaa7;eip=0x003257; 	T(MOV(cx, 120));	// 25983 mov     cx, 120 ;~ 0AA7:3257
cs=0xaa7;eip=0x00325a; 	T(XOR(al, al));	// 25984 xor     al, al ;~ 0AA7:325A
cs=0xaa7;eip=0x00325c; 	T(CLD);	// 25985 cld ;~ 0AA7:325C
	// 25986 repne scasb ;~ 0AA7:325D
cs=0xaa7;eip=0x00325d; 	T(	REPNE SCASB);	// 25986 repne scasb ;~ 0AA7:325D
cs=0xaa7;eip=0x00325f; 	J(JNZ(loc_1c321));	// 25987 jnz     short loc_1C321 ;~ 0AA7:325F
cs=0xaa7;eip=0x003261; 	T(DEC(di));	// 25988 dec     di ;~ 0AA7:3261
cs=0xaa7;eip=0x003262; 	X(MOV(word_1de4a, di));	// 25989 mov     word_1DE4A, di ;~ 0AA7:3262
loc_1c2b6:
	// 6015 
cs=0xaa7;eip=0x003266; 	T(MOV(al, *(raddr(ds,di-1))));	// 25992 mov     al, [di-1] ;~ 0AA7:3266
cs=0xaa7;eip=0x003269; 	T(OR(al, al));	// 25993 or      al, al ;~ 0AA7:3269
cs=0xaa7;eip=0x00326b; 	J(JZ(loc_1c2ca));	// 25994 jz      short loc_1C2CA ;~ 0AA7:326B
cs=0xaa7;eip=0x00326d; 	T(CMP(al, '\\'));	// 25995 cmp     al, '\' ;~ 0AA7:326D
cs=0xaa7;eip=0x00326f; 	J(JZ(loc_1c2ca));	// 25996 jz      short loc_1C2CA ;~ 0AA7:326F
cs=0xaa7;eip=0x003271; 	T(CMP(al, ':'));	// 25997 cmp     al, ':' ;~ 0AA7:3271
cs=0xaa7;eip=0x003273; 	J(JZ(loc_1c2ca));	// 25998 jz      short loc_1C2CA ;~ 0AA7:3273
cs=0xaa7;eip=0x003275; 	T(DEC(di));	// 25999 dec     di ;~ 0AA7:3275
cs=0xaa7;eip=0x003276; 	T(CMP(si, di));	// 26000 cmp     si, di ;~ 0AA7:3276
cs=0xaa7;eip=0x003278; 	J(JC(loc_1c2b6));	// 26001 jb      short loc_1C2B6 ;~ 0AA7:3278
loc_1c2ca:
	// 6016 
cs=0xaa7;eip=0x00327a; 	T(SUB(di, si));	// 26005 sub     di, si ;~ 0AA7:327A
cs=0xaa7;eip=0x00327c; 	X(MOV(word_1de4c, di));	// 26006 mov     word_1DE4C, di ;~ 0AA7:327C
cs=0xaa7;eip=0x003280; 	T(MOV(dx, offset(dseg,_buffer_1dbec)));	// 26007 mov     dx, offset _buffer_1DBEC ;~ 0AA7:3280
cs=0xaa7;eip=0x003283; 	T(MOV(ah, 0x1A));	// 26008 mov     ah, 1Ah ;~ 0AA7:3283
cs=0xaa7;eip=0x003285; 	S(_INT(0x21));	// 26009 int     21h             ; DOS - SET DISK TRANSFER AREA ADDRESS ;~ 0AA7:3285
cs=0xaa7;eip=0x003287; 	T(MOV(dx, offset(dseg,_buffer_1db6c)));	// 26011 mov     dx, offset _buffer_1DB6C ;~ 0AA7:3287
cs=0xaa7;eip=0x00328a; 	T(MOV(cx, word_1de4e));	// 26012 mov     cx, word_1DE4E ;~ 0AA7:328A
cs=0xaa7;eip=0x00328e; 	T(MOV(ah, 0x4E));	// 26013 mov     ah, 4Eh ;~ 0AA7:328E
cs=0xaa7;eip=0x003290; 	S(_INT(0x21));	// 26014 int     21h             ; DOS - 2+ - FIND FIRST ASCIZ (FINDFIRST) ;~ 0AA7:3290
cs=0xaa7;eip=0x003292; 	J(JNC(loc_1c309));	// 26018 jnb     short loc_1C309 ;~ 0AA7:3292
cs=0xaa7;eip=0x003294; 	T(MOV(si, offset(dseg,_a_mod_nst_669_s)));	// 26019 mov     si, offset _a_mod_nst_669_s ; ".MOD.NST.669.STM.S3M.MTM.PSM.WOW.INR.FA"... ;~ 0AA7:3294
loc_1c2e7:
	// 6017 
cs=0xaa7;eip=0x003297; 	T(CMP(*(raddr(ds,si)), 0));	// 26022 cmp     byte ptr [si], 0 ;~ 0AA7:3297
cs=0xaa7;eip=0x00329a; 	J(JZ(loc_1c321));	// 26023 jz      short loc_1C321 ;~ 0AA7:329A
cs=0xaa7;eip=0x00329c; 	T(MOV(di, word_1de4a));	// 26024 mov     di, word_1DE4A ;~ 0AA7:329C
cs=0xaa7;eip=0x0032a0; 	T(MOV(eax, *(dd*)(raddr(ds,si))));	// 26025 mov     eax, [si] ;~ 0AA7:32A0
cs=0xaa7;eip=0x0032a3; 	X(MOV(*(dd*)(raddr(ds,di)), eax));	// 26026 mov     [di], eax ;~ 0AA7:32A3
cs=0xaa7;eip=0x0032a6; 	X(MOV(*(raddr(ds,di+4)), 0));	// 26027 mov     byte ptr [di+4], 0 ;~ 0AA7:32A6
cs=0xaa7;eip=0x0032aa; 	T(ADD(si, 4));	// 26028 add     si, 4 ;~ 0AA7:32AA
cs=0xaa7;eip=0x0032ad; 	T(MOV(dx, offset(dseg,_buffer_1db6c)));	// 26029 mov     dx, offset _buffer_1DB6C ;~ 0AA7:32AD
cs=0xaa7;eip=0x0032b0; 	T(MOV(cx, 2));	// 26030 mov     cx, 2 ;~ 0AA7:32B0
cs=0xaa7;eip=0x0032b3; 	T(MOV(ah, 0x4E));	// 26031 mov     ah, 4Eh ;~ 0AA7:32B3
cs=0xaa7;eip=0x0032b5; 	S(_INT(0x21));	// 26032 int     21h             ; DOS - 2+ - FIND FIRST ASCIZ (FINDFIRST) ;~ 0AA7:32B5
cs=0xaa7;eip=0x0032b7; 	J(JC(loc_1c2e7));	// 26036 jb      short loc_1C2E7 ;~ 0AA7:32B7
loc_1c309:
	// 6018 
cs=0xaa7;eip=0x0032b9; 	T(MOV(ax, ds));	// 26040 mov     ax, ds ;~ 0AA7:32B9
cs=0xaa7;eip=0x0032bb; 	T(MOV(es, ax));	// 26041 mov     es, ax ;~ 0AA7:32BB
cs=0xaa7;eip=0x0032bd; 	T(MOV(si, offset(dseg,byte_1dc0a)));	// 26042 mov     si, offset byte_1DC0A ;~ 0AA7:32BD
cs=0xaa7;eip=0x0032c0; 	T(MOV(di, offset(dseg,_buffer_1db6c)));	// 26043 mov     di, offset _buffer_1DB6C ;~ 0AA7:32C0
cs=0xaa7;eip=0x0032c3; 	T(ADD(di, word_1de4c));	// 26044 add     di, word_1DE4C ;~ 0AA7:32C3
cs=0xaa7;eip=0x0032c7; 	T(CLD);	// 26045 cld ;~ 0AA7:32C7
cs=0xaa7;eip=0x0032c8; 	T(MOV(cx, 3));	// 26046 mov     cx, 3 ;~ 0AA7:32C8
	// 26047 rep movsd ;~ 0AA7:32CB
cs=0xaa7;eip=0x0032cb; 	X(	REP MOVSD);	// 26047 rep movsd ;~ 0AA7:32CB
cs=0xaa7;eip=0x0032ce; 	X(MOVSB);	// 26048 movsb ;~ 0AA7:32CE
cs=0xaa7;eip=0x0032cf; 	T(CLC);	// 26049 clc ;~ 0AA7:32CF
cs=0xaa7;eip=0x0032d0; 	J(RETN(0));	// 26050 retn ;~ 0AA7:32D0
loc_1c321:
	// 6019 
cs=0xaa7;eip=0x0032d1; 	X(MOV(byte_1de7e, 2));	// 26055 mov     byte_1DE7E, 2 ;~ 0AA7:32D1
cs=0xaa7;eip=0x0032d6; 	X(MOV(*(dw*)(((db*)&_messagepointer)), offset(dseg,_amodulenotfound)));	// 26056 mov     word ptr _messagepointer, offset _aModuleNotFound ; "Module not found.\r\n$" ;~ 0AA7:32D6
cs=0xaa7;eip=0x0032dc; 	X(MOV(*(dw*)(((db*)&_messagepointer)+2), ds));	// 26057 mov     word ptr _messagepointer+2, ds ;~ 0AA7:32DC
cs=0xaa7;eip=0x0032e0; 	T(STC);	// 26058 stc ;~ 0AA7:32E0
cs=0xaa7;eip=0x0032e1; 	J(RETN(0));	// 26059 retn ;~ 0AA7:32E1
_dosfindnext:
	// 26066 
cs=0xaa7;eip=0x0032e2; 	T(MOV(dx, offset(dseg,_buffer_1dbec)));	// 26068 mov     dx, offset _buffer_1DBEC ;~ 0AA7:32E2
cs=0xaa7;eip=0x0032e5; 	T(MOV(ah, 0x1A));	// 26069 mov     ah, 1Ah ;~ 0AA7:32E5
cs=0xaa7;eip=0x0032e7; 	S(_INT(0x21));	// 26070 int     21h             ; DOS - SET DISK TRANSFER AREA ADDRESS ;~ 0AA7:32E7
cs=0xaa7;eip=0x0032e9; 	T(MOV(ah, 0x4F));	// 26072 mov     ah, 4Fh ;~ 0AA7:32E9
cs=0xaa7;eip=0x0032eb; 	S(_INT(0x21));	// 26073 int     21h             ; DOS - 2+ - FIND NEXT ASCIZ (FINDNEXT) ;~ 0AA7:32EB
cs=0xaa7;eip=0x0032ed; 	J(JNC(loc_1c309));	// 26076 jnb     short loc_1C309 ;~ 0AA7:32ED
cs=0xaa7;eip=0x0032ef; 	J(RETN(0));	// 26077 retn ;~ 0AA7:32EF

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_dosfindnext: 	goto _dosfindnext;
        case m2c::k_find_mods: 	goto _find_mods;
        case m2c::kloc_1c2b6: 	goto loc_1c2b6;
        case m2c::kloc_1c2ca: 	goto loc_1c2ca;
        case m2c::kloc_1c2e7: 	goto loc_1c2e7;
        case m2c::kloc_1c309: 	goto loc_1c309;
        case m2c::kloc_1c321: 	goto loc_1c321;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _video_prp_mtr_positn(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _video_prp_mtr_positn:
    _begin:
cs=0xaa7;eip=0x0032f0; 	X(PUSHF);	// 26086 pushf ;~ 0AA7:32F0
cs=0xaa7;eip=0x0032f1; 	T(CLI);	// 26087 cli ;~ 0AA7:32F1
cs=0xaa7;eip=0x0032f2; 	X(MOV(byte_1de79, 0));	// 26088 mov     byte_1DE79, 0 ;~ 0AA7:32F2
cs=0xaa7;eip=0x0032f7; 	X(MOV(byte_1de7a, 0));	// 26089 mov     byte_1DE7A, 0 ;~ 0AA7:32F7
cs=0xaa7;eip=0x0032fc; 	T(LFS(bx, _segfsbx_1de28));	// 26090 lfs     bx, _segfsbx_1DE28 ;~ 0AA7:32FC
cs=0xaa7;eip=0x003301; 	T(MOV(cx, _amount_of_x));	// 26091 mov     cx, _amount_of_x ;~ 0AA7:3301
loc_1c355:
	// 6020 
cs=0xaa7;eip=0x003305; 	T(MOV(al, *(raddr(fs,bx+0x3A))));	// 26094 mov     al, fs:[bx+3Ah] ;~ 0AA7:3305
cs=0xaa7;eip=0x003309; 	T(CMP(al, 0x40));	// 26095 cmp     al, 40h ; '@' ;~ 0AA7:3309
cs=0xaa7;eip=0x00330b; 	J(JC(loc_1c365));	// 26096 jb      short loc_1C365 ;~ 0AA7:330B
cs=0xaa7;eip=0x00330d; 	X(INC(byte_1de7a));	// 26097 inc     byte_1DE7A ;~ 0AA7:330D
cs=0xaa7;eip=0x003311; 	T(CMP(al, 0x40));	// 26098 cmp     al, 40h ; '@' ;~ 0AA7:3311
cs=0xaa7;eip=0x003313; 	J(JA(loc_1c369));	// 26099 ja      short loc_1C369 ;~ 0AA7:3313
loc_1c365:
	// 6021 
cs=0xaa7;eip=0x003315; 	X(INC(byte_1de79));	// 26102 inc     byte_1DE79 ;~ 0AA7:3315
loc_1c369:
	// 6022 
cs=0xaa7;eip=0x003319; 	T(ADD(bx, 0x50));	// 26105 add     bx, 50h ; 'P' ;~ 0AA7:3319
cs=0xaa7;eip=0x00331c; 	T(DEC(cx));	// 26106 dec     cx ;~ 0AA7:331C
cs=0xaa7;eip=0x00331d; 	J(JNZ(loc_1c355));	// 26107 jnz     short loc_1C355 ;~ 0AA7:331D
cs=0xaa7;eip=0x00331f; 	T(MOVZX(ecx, byte_1de79));	// 26108 movzx   ecx, byte_1DE79 ;~ 0AA7:331F
cs=0xaa7;eip=0x003325; 	T(CMP(cl, byte_1de7a));	// 26109 cmp     cl, byte_1DE7A ;~ 0AA7:3325
cs=0xaa7;eip=0x003329; 	J(JA(loc_1c37f));	// 26110 ja      short loc_1C37F ;~ 0AA7:3329
cs=0xaa7;eip=0x00332b; 	T(MOV(cl, byte_1de7a));	// 26111 mov     cl, byte_1DE7A ;~ 0AA7:332B
loc_1c37f:
	// 6023 
cs=0xaa7;eip=0x00332f; 	T(MOV(al, 3));	// 26114 mov     al, 3 ;~ 0AA7:332F
cs=0xaa7;eip=0x003331; 	T(CMP(cl, 2));	// 26115 cmp     cl, 2 ;~ 0AA7:3331
cs=0xaa7;eip=0x003334; 	J(JBE(loc_1c396));	// 26116 jbe     short loc_1C396 ;~ 0AA7:3334
cs=0xaa7;eip=0x003336; 	T(MOV(al, 2));	// 26117 mov     al, 2 ;~ 0AA7:3336
cs=0xaa7;eip=0x003338; 	T(CMP(cl, 4));	// 26118 cmp     cl, 4 ;~ 0AA7:3338
cs=0xaa7;eip=0x00333b; 	J(JBE(loc_1c396));	// 26119 jbe     short loc_1C396 ;~ 0AA7:333B
cs=0xaa7;eip=0x00333d; 	T(MOV(al, 1));	// 26120 mov     al, 1 ;~ 0AA7:333D
cs=0xaa7;eip=0x00333f; 	T(CMP(cl, 8));	// 26121 cmp     cl, 8 ;~ 0AA7:333F
cs=0xaa7;eip=0x003342; 	J(JBE(loc_1c396));	// 26122 jbe     short loc_1C396 ;~ 0AA7:3342
cs=0xaa7;eip=0x003344; 	T(MOV(al, 0));	// 26123 mov     al, 0 ;~ 0AA7:3344
loc_1c396:
	// 6024 
cs=0xaa7;eip=0x003346; 	T(ADD(al, 8));	// 26127 add     al, 8 ;~ 0AA7:3346
cs=0xaa7;eip=0x003348; 	X(MOV(byte_1de81, al));	// 26128 mov     byte_1DE81, al ;~ 0AA7:3348
cs=0xaa7;eip=0x00334b; 	T(XOR(edx, edx));	// 26129 xor     edx, edx ;~ 0AA7:334B
cs=0xaa7;eip=0x00334e; 	T(MOV(eax, 18350080));	// 26130 mov     eax, 18350080 ;~ 0AA7:334E
cs=0xaa7;eip=0x003354; 	J(JCXZ(loc_1c3a9));	// 26131 jcxz    short loc_1C3A9 ;~ 0AA7:3354
cs=0xaa7;eip=0x003356; 	T(DIV4(ecx));	// 26132 div     ecx ;~ 0AA7:3356
loc_1c3a9:
	// 6025 
cs=0xaa7;eip=0x003359; 	T(MOV(ebp, eax));	// 26135 mov     ebp, eax ;~ 0AA7:3359
cs=0xaa7;eip=0x00335c; 	T(MOV(si, offset(dseg,_x_storage)));	// 26136 mov     si, offset _x_storage ;~ 0AA7:335C
cs=0xaa7;eip=0x00335f; 	T(MOV(cx, _amount_of_x));	// 26137 mov     cx, _amount_of_x ;~ 0AA7:335F
cs=0xaa7;eip=0x003363; 	T(LFS(bx, _segfsbx_1de28));	// 26138 lfs     bx, _segfsbx_1DE28 ;~ 0AA7:3363
cs=0xaa7;eip=0x003368; 	T(MOV(edi, ebp));	// 26139 mov     edi, ebp ;~ 0AA7:3368
cs=0xaa7;eip=0x00336b; 	T(SHR(edi, 1));	// 26140 shr     edi, 1 ;~ 0AA7:336B
cs=0xaa7;eip=0x00336e; 	T(MOV(edx, edi));	// 26141 mov     edx, edi ;~ 0AA7:336E
loc_1c3c1:
	// 6026 
cs=0xaa7;eip=0x003371; 	T(CMP(*(raddr(fs,bx+0x3A)), 0x40));	// 26144 cmp     byte ptr fs:[bx+3Ah], 40h ; '@' ;~ 0AA7:3371
cs=0xaa7;eip=0x003376; 	J(JZ(loc_1c3ee));	// 26145 jz      short loc_1C3EE ;~ 0AA7:3376
cs=0xaa7;eip=0x003378; 	J(JA(loc_1c3dc));	// 26146 ja      short loc_1C3DC ;~ 0AA7:3378
cs=0xaa7;eip=0x00337a; 	T(MOV(eax, edi));	// 26147 mov     eax, edi ;~ 0AA7:337A
cs=0xaa7;eip=0x00337d; 	T(SHR(eax, 16));	// 26148 shr     eax, 16 ;~ 0AA7:337D
cs=0xaa7;eip=0x003381; 	T(IMUL2_2(ax,80));	// 26149 imul    ax, 80 ;~ 0AA7:3381
cs=0xaa7;eip=0x003384; 	T(ADD(ax, 1));	// 26150 add     ax, 1 ;~ 0AA7:3384
cs=0xaa7;eip=0x003387; 	T(ADD(edi, ebp));	// 26151 add     edi, ebp ;~ 0AA7:3387
cs=0xaa7;eip=0x00338a; 	J(JMP(loc_1c3ec));	// 26152 jmp     short loc_1C3EC ;~ 0AA7:338A
loc_1c3dc:
	// 6027 
cs=0xaa7;eip=0x00338c; 	T(MOV(eax, edx));	// 26156 mov     eax, edx ;~ 0AA7:338C
cs=0xaa7;eip=0x00338f; 	T(SHR(eax, 16));	// 26157 shr     eax, 16 ;~ 0AA7:338F
cs=0xaa7;eip=0x003393; 	T(IMUL2_2(ax,80));	// 26158 imul    ax, 80 ;~ 0AA7:3393
cs=0xaa7;eip=0x003396; 	T(ADD(ax, 42));	// 26159 add     ax, 42 ;~ 0AA7:3396
cs=0xaa7;eip=0x003399; 	T(ADD(edx, ebp));	// 26160 add     edx, ebp ;~ 0AA7:3399
loc_1c3ec:
	// 6028 
cs=0xaa7;eip=0x00339c; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 26163 mov     [si], ax ;~ 0AA7:339C
loc_1c3ee:
	// 6029 
cs=0xaa7;eip=0x00339e; 	T(ADD(si, 2));	// 26166 add     si, 2 ;~ 0AA7:339E
cs=0xaa7;eip=0x0033a1; 	T(ADD(bx, 0x50));	// 26167 add     bx, 50h ; 'P' ;~ 0AA7:33A1
cs=0xaa7;eip=0x0033a4; 	T(DEC(cx));	// 26168 dec     cx ;~ 0AA7:33A4
cs=0xaa7;eip=0x0033a5; 	J(JNZ(loc_1c3c1));	// 26169 jnz     short loc_1C3C1 ;~ 0AA7:33A5
cs=0xaa7;eip=0x0033a7; 	T(MOV(si, offset(dseg,_x_storage)));	// 26170 mov     si, offset _x_storage ;~ 0AA7:33A7
cs=0xaa7;eip=0x0033aa; 	T(MOV(cx, _amount_of_x));	// 26171 mov     cx, _amount_of_x ;~ 0AA7:33AA
cs=0xaa7;eip=0x0033ae; 	T(LFS(bx, _segfsbx_1de28));	// 26172 lfs     bx, _segfsbx_1DE28 ;~ 0AA7:33AE
cs=0xaa7;eip=0x0033b3; 	T(CMP(edi, edx));	// 26173 cmp     edi, edx ;~ 0AA7:33B3
cs=0xaa7;eip=0x0033b6; 	J(JA(loc_1c40b));	// 26174 ja      short loc_1C40B ;~ 0AA7:33B6
cs=0xaa7;eip=0x0033b8; 	T(MOV(edi, edx));	// 26175 mov     edi, edx ;~ 0AA7:33B8
loc_1c40b:
	// 6030 
cs=0xaa7;eip=0x0033bb; 	T(CMP(*(raddr(fs,bx+0x3A)), 0x40));	// 26179 cmp     byte ptr fs:[bx+3Ah], 40h ; '@' ;~ 0AA7:33BB
cs=0xaa7;eip=0x0033c0; 	J(JNZ(loc_1c424));	// 26180 jnz     short loc_1C424 ;~ 0AA7:33C0
cs=0xaa7;eip=0x0033c2; 	T(MOV(eax, edi));	// 26181 mov     eax, edi ;~ 0AA7:33C2
cs=0xaa7;eip=0x0033c5; 	T(SHR(eax, 16));	// 26182 shr     eax, 16 ;~ 0AA7:33C5
cs=0xaa7;eip=0x0033c9; 	T(IMUL2_2(ax,80));	// 26183 imul    ax, 80 ;~ 0AA7:33C9
cs=0xaa7;eip=0x0033cc; 	T(ADD(ax, 21));	// 26184 add     ax, 21 ;~ 0AA7:33CC
cs=0xaa7;eip=0x0033cf; 	T(ADD(edi, ebp));	// 26185 add     edi, ebp ;~ 0AA7:33CF
cs=0xaa7;eip=0x0033d2; 	X(MOV(*(dw*)(raddr(ds,si)), ax));	// 26186 mov     [si], ax ;~ 0AA7:33D2
loc_1c424:
	// 6031 
cs=0xaa7;eip=0x0033d4; 	T(ADD(si, 2));	// 26189 add     si, 2 ;~ 0AA7:33D4
cs=0xaa7;eip=0x0033d7; 	T(ADD(bx, 0x50));	// 26190 add     bx, 50h ; 'P' ;~ 0AA7:33D7
cs=0xaa7;eip=0x0033da; 	T(DEC(cx));	// 26191 dec     cx ;~ 0AA7:33DA
cs=0xaa7;eip=0x0033db; 	J(JNZ(loc_1c40b));	// 26192 jnz     short loc_1C40B ;~ 0AA7:33DB
cs=0xaa7;eip=0x0033dd; 	X(POPF);	// 26193 popf ;~ 0AA7:33DD
cs=0xaa7;eip=0x0033de; 	J(RETN(0));	// 26194 retn ;~ 0AA7:33DE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_video_prp_mtr_positn: 	goto _video_prp_mtr_positn;
        case m2c::kloc_1c355: 	goto loc_1c355;
        case m2c::kloc_1c365: 	goto loc_1c365;
        case m2c::kloc_1c369: 	goto loc_1c369;
        case m2c::kloc_1c37f: 	goto loc_1c37f;
        case m2c::kloc_1c396: 	goto loc_1c396;
        case m2c::kloc_1c3a9: 	goto loc_1c3a9;
        case m2c::kloc_1c3c1: 	goto loc_1c3c1;
        case m2c::kloc_1c3dc: 	goto loc_1c3dc;
        case m2c::kloc_1c3ec: 	goto loc_1c3ec;
        case m2c::kloc_1c3ee: 	goto loc_1c3ee;
        case m2c::kloc_1c40b: 	goto loc_1c40b;
        case m2c::kloc_1c424: 	goto loc_1c424;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _rereadrtc_settmr(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _rereadrtc_settmr:
    _begin:
cs=0xaa7;eip=0x003458; 	T(MOV(ah, 2));	// 26245 mov     ah, 2 ;~ 0AA7:3458
cs=0xaa7;eip=0x00345a; 	S(_INT(0x1A));	// 26246 int     1Ah             ; CLOCK - READ REAL TIME CLOCK (AT,XT286,CONV,PS) ;~ 0AA7:345A
cs=0xaa7;eip=0x00345c; 	T(XOR(eax, eax));	// 26250 xor     eax, eax ;~ 0AA7:345C
cs=0xaa7;eip=0x00345f; 	T(MOV(al, dh));	// 26251 mov     al, dh ;~ 0AA7:345F
cs=0xaa7;eip=0x003461; 	T(MOV(ah, al));	// 26252 mov     ah, al ;~ 0AA7:3461
cs=0xaa7;eip=0x003463; 	T(SHR(ah, 4));	// 26253 shr     ah, 4 ;~ 0AA7:3463
cs=0xaa7;eip=0x003466; 	T(AND(al, 0x0F));	// 26254 and     al, 0Fh ;~ 0AA7:3466
cs=0xaa7;eip=0x003468; 	T(AAD);	// 26255 aad ;~ 0AA7:3468
cs=0xaa7;eip=0x00346a; 	T(MOV(ebx, eax));	// 26256 mov     ebx, eax ;~ 0AA7:346A
cs=0xaa7;eip=0x00346d; 	T(MOV(al, ch));	// 26257 mov     al, ch ;~ 0AA7:346D
cs=0xaa7;eip=0x00346f; 	T(MOV(ah, al));	// 26258 mov     ah, al ;~ 0AA7:346F
cs=0xaa7;eip=0x003471; 	T(SHR(ah, 4));	// 26259 shr     ah, 4 ;~ 0AA7:3471
cs=0xaa7;eip=0x003474; 	T(AND(al, 0x0F));	// 26260 and     al, 0Fh ;~ 0AA7:3474
cs=0xaa7;eip=0x003476; 	T(AAD);	// 26261 aad ;~ 0AA7:3476
cs=0xaa7;eip=0x003478; 	T(IMUL3_4(edx,eax,60));	// 26262 imul    edx, eax, 60 ;~ 0AA7:3478
cs=0xaa7;eip=0x00347c; 	T(MOV(al, cl));	// 26263 mov     al, cl ;~ 0AA7:347C
cs=0xaa7;eip=0x00347e; 	T(MOV(ah, al));	// 26264 mov     ah, al ;~ 0AA7:347E
cs=0xaa7;eip=0x003480; 	T(SHR(ah, 4));	// 26265 shr     ah, 4 ;~ 0AA7:3480
cs=0xaa7;eip=0x003483; 	T(AND(al, 0x0F));	// 26266 and     al, 0Fh ;~ 0AA7:3483
cs=0xaa7;eip=0x003485; 	T(AAD);	// 26267 aad ;~ 0AA7:3485
cs=0xaa7;eip=0x003487; 	T(ADD(dx, ax));	// 26268 add     dx, ax ;~ 0AA7:3487
cs=0xaa7;eip=0x003489; 	T(IMUL3_4(eax,edx,60));	// 26269 imul    eax, edx, 60 ;~ 0AA7:3489
cs=0xaa7;eip=0x00348d; 	T(ADD(eax, ebx));	// 26270 add     eax, ebx ;~ 0AA7:348D
cs=0xaa7;eip=0x003490; 	T(MOV(edx, 1193180));	// 26271 mov     edx, 1193180 ;~ 0AA7:3490
cs=0xaa7;eip=0x003496; 	T(MUL1_4(edx));	// 26272 mul     edx ;~ 0AA7:3496
cs=0xaa7;eip=0x003499; 	T(SHRD(eax, edx, 0x10));	// 26273 shrd    eax, edx, 10h ;~ 0AA7:3499
cs=0xaa7;eip=0x00349e; 	T(XOR(dx, dx));	// 26274 xor     dx, dx ;~ 0AA7:349E
cs=0xaa7;eip=0x0034a0; 	T(MOV(es, dx));	// 26275 mov     es, dx ;~ 0AA7:34A0
cs=0xaa7;eip=0x0034a2; 	X(MOV(*(dd*)(raddr(es,0x46C)), eax));	// 26277 mov     es:46Ch, eax ;~ 0AA7:34A2
cs=0xaa7;eip=0x0034a7; 	J(RETN(0));	// 26278 retn ;~ 0AA7:34A7

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_rereadrtc_settmr: 	goto _rereadrtc_settmr;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _spectr_1c4f8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _spectr_1c4f8:
    _begin:
cs=0xaa7;eip=0x0034a8; 	T(XOR(eax, eax));	// 26286 xor     eax, eax ;~ 0AA7:34A8
cs=0xaa7;eip=0x0034ab; 	T(MOV(edx, 0x40000000));	// 26287 mov     edx, 40000000h ;~ 0AA7:34AB
loc_1c501:
	// 6034 
cs=0xaa7;eip=0x0034b1; 	T(MOV(ecx, eax));	// 26290 mov     ecx, eax ;~ 0AA7:34B1
cs=0xaa7;eip=0x0034b4; 	T(ADD(ecx, edx));	// 26291 add     ecx, edx ;~ 0AA7:34B4
cs=0xaa7;eip=0x0034b7; 	T(SHR(eax, 1));	// 26292 shr     eax, 1 ;~ 0AA7:34B7
cs=0xaa7;eip=0x0034ba; 	T(CMP(ecx, ebx));	// 26293 cmp     ecx, ebx ;~ 0AA7:34BA
cs=0xaa7;eip=0x0034bd; 	J(JG(loc_1c515));	// 26294 jg      short loc_1C515 ;~ 0AA7:34BD
cs=0xaa7;eip=0x0034bf; 	T(SUB(ebx, ecx));	// 26295 sub     ebx, ecx ;~ 0AA7:34BF
cs=0xaa7;eip=0x0034c2; 	T(ADD(eax, edx));	// 26296 add     eax, edx ;~ 0AA7:34C2
loc_1c515:
	// 6035 
cs=0xaa7;eip=0x0034c5; 	T(SHR(edx, 2));	// 26299 shr     edx, 2 ;~ 0AA7:34C5
cs=0xaa7;eip=0x0034c9; 	J(JNZ(loc_1c501));	// 26300 jnz     short loc_1C501 ;~ 0AA7:34C9
cs=0xaa7;eip=0x0034cb; 	T(CMP(eax, ebx));	// 26301 cmp     eax, ebx ;~ 0AA7:34CB
cs=0xaa7;eip=0x0034ce; 	J(JGE(locret_1c521));	// 26302 jge     short locret_1C521 ;~ 0AA7:34CE
cs=0xaa7;eip=0x0034d0; 	T(INC(ax));	// 26303 inc     ax ;~ 0AA7:34D0
locret_1c521:
	// 6036 
cs=0xaa7;eip=0x0034d1; 	J(RETN(0));	// 26306 retn ;~ 0AA7:34D1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_spectr_1c4f8: 	goto _spectr_1c4f8;
        case m2c::kloc_1c501: 	goto loc_1c501;
        case m2c::kloc_1c515: 	goto loc_1c515;
        case m2c::klocret_1c521: 	goto locret_1c521;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _txt_blinkingoff(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _txt_blinkingoff:
    _begin:
cs=0xaa7;eip=0x0034d2; 	T(XOR(bl, bl));	// 26315 xor     bl, bl ;~ 0AA7:34D2
cs=0xaa7;eip=0x0034d4; 	T(MOV(ax, 0x1003));	// 26316 mov     ax, 1003h ;~ 0AA7:34D4
cs=0xaa7;eip=0x0034d7; 	S(_INT(0x10));	// 26317 int     10h             ; - VIDEO - TOGGLE INTENSITY/BLINKING BIT (Jr, PS, TANDY 1000, EGA, VGA) ;~ 0AA7:34D7
cs=0xaa7;eip=0x0034d9; 	J(RETN(0));	// 26320 retn ;~ 0AA7:34D9

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_txt_blinkingoff: 	goto _txt_blinkingoff;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _txt_enableblink(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _txt_enableblink:
    _begin:
cs=0xaa7;eip=0x0034da; 	T(MOV(bl, 1));	// 26329 mov     bl, 1 ;~ 0AA7:34DA
cs=0xaa7;eip=0x0034dc; 	T(MOV(ax, 0x1003));	// 26330 mov     ax, 1003h ;~ 0AA7:34DC
cs=0xaa7;eip=0x0034df; 	S(_INT(0x10));	// 26331 int     10h             ; - VIDEO - TOGGLE INTENSITY/BLINKING BIT (Jr, PS, TANDY 1000, EGA, VGA) ;~ 0AA7:34DF
cs=0xaa7;eip=0x0034e1; 	J(RETN(0));	// 26334 retn ;~ 0AA7:34E1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_txt_enableblink: 	goto _txt_enableblink;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _my_u32tox(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _my_u32tox:
    _begin:
cs=0xaa7;eip=0x0034e2; 	T(ROR(eax, 0x10));	// 26342 ror     eax, 10h ;~ 0AA7:34E2
cs=0xaa7;eip=0x0034e6; 	J(CALL(_my_u16tox,0));	// 26343 call    _my_u16tox ;~ 0AA7:34E6
cs=0xaa7;eip=0x0034e9; 	T(ROR(eax, 0x10));	// 26344 ror     eax, 10h ;~ 0AA7:34E9
	return _my_u16tox(0, _state);
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_my_u32tox: 	goto _my_u32tox;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _my_u16tox(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _my_u16tox:
    _begin:
cs=0xaa7;eip=0x0034ed; 	T(XCHG(al, ah));	// 26353 xchg    al, ah ;~ 0AA7:34ED
cs=0xaa7;eip=0x0034ef; 	J(CALL(_my_u8tox,0));	// 26354 call    _my_u8tox ;~ 0AA7:34EF
cs=0xaa7;eip=0x0034f2; 	T(MOV(al, ah));	// 26355 mov     al, ah ;~ 0AA7:34F2
	return _my_u8tox(0, _state);
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_my_u16tox: 	goto _my_u16tox;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _my_u8tox(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _my_u8tox:
    _begin:
cs=0xaa7;eip=0x0034f4; 	X(PUSH(ax));	// 26364 push    ax ;~ 0AA7:34F4
cs=0xaa7;eip=0x0034f5; 	T(SHR(al, 4));	// 26365 shr     al, 4 ;~ 0AA7:34F5
cs=0xaa7;eip=0x0034f8; 	J(CALL(_my_u4tox,0));	// 26366 call    _my_u4tox ;~ 0AA7:34F8
cs=0xaa7;eip=0x0034fb; 	X(POP(ax));	// 26367 pop     ax ;~ 0AA7:34FB
	return _my_u4tox(0, _state);
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_my_u8tox: 	goto _my_u8tox;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _my_u4tox(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _my_u4tox:
    _begin:
cs=0xaa7;eip=0x0034fc; 	T(AND(al, 0x0F));	// 26375 and     al, 0Fh ;~ 0AA7:34FC
cs=0xaa7;eip=0x0034fe; 	T(OR(al, '0'));	// 26376 or      al, '0' ;~ 0AA7:34FE
cs=0xaa7;eip=0x003500; 	T(CMP(al, '9'));	// 26377 cmp     al, '9' ;~ 0AA7:3500
cs=0xaa7;eip=0x003502; 	J(JBE(loc_1c556));	// 26378 jbe     short loc_1C556 ;~ 0AA7:3502
cs=0xaa7;eip=0x003504; 	T(ADD(al, 7));	// 26379 add     al, 7 ;~ 0AA7:3504
loc_1c556:
	// 6037 
cs=0xaa7;eip=0x003506; 	X(MOV(*(raddr(ds,si)), al));	// 26382 mov     [si], al ;~ 0AA7:3506
cs=0xaa7;eip=0x003508; 	T(INC(si));	// 26383 inc     si ;~ 0AA7:3508
cs=0xaa7;eip=0x003509; 	J(RETN(0));	// 26384 retn ;~ 0AA7:3509

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_my_u4tox: 	goto _my_u4tox;
        case m2c::kloc_1c556: 	goto loc_1c556;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group41(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group41:
    _begin:
_my_i8toa10:
	// 26391 
cs=0xaa7;eip=0x00350a; 	T(CBW);	// 26393 cbw ;~ 0AA7:350A
_my_i16toa10:
	// 6038 
cs=0xaa7;eip=0x00350b; 	T(CWDE);	// 26396 cwde ;~ 0AA7:350B
_my_i32toa10:
	// 6039 
cs=0xaa7;eip=0x00350d; 	T(XOR(cx, cx));	// 26399 xor     cx, cx ;~ 0AA7:350D
cs=0xaa7;eip=0x00350f; 	T(OR(eax, eax));	// 26400 or      eax, eax ;~ 0AA7:350F
cs=0xaa7;eip=0x003512; 	J(JNS(_my_i32toa10_));	// 26401 jns     short _my_i32toa10_ ;~ 0AA7:3512
cs=0xaa7;eip=0x003514; 	T(MOV(dl, '-'));	// 26402 mov     dl, '-' ;~ 0AA7:3514
cs=0xaa7;eip=0x003516; 	J(CALL(_myputdigit,0));	// 26403 call    _myputdigit ;~ 0AA7:3516
cs=0xaa7;eip=0x003519; 	T(NEG(eax));	// 26404 neg     eax ;~ 0AA7:3519
cs=0xaa7;eip=0x00351c; 	J(JMP(_my_i32toa10_));	// 26405 jmp     short _my_i32toa10_ ;~ 0AA7:351C
_my_u32toa10:
	// 26430 
cs=0xaa7;eip=0x003524; 	T(XOR(cx, cx));	// 26432 xor     cx, cx ;~ 0AA7:3524
_my_i32toa10_:
	// 6040 
cs=0xaa7;eip=0x003526; 	T(MOV(ebx, 10));	// 26436 mov     ebx, 10 ;~ 0AA7:3526
	return _my_u32toa(0, _state);
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_my_i16toa10: 	goto _my_i16toa10;
        case m2c::k_my_i32toa10: 	goto _my_i32toa10;
        case m2c::k_my_i32toa10_: 	goto _my_i32toa10_;
        case m2c::k_my_i8toa10: 	goto _my_i8toa10;
        case m2c::k_my_u32toa10: 	goto _my_u32toa10;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _my_u8toa10(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _my_u8toa10:
    _begin:
cs=0xaa7;eip=0x00351e; 	T(XOR(ah, ah));	// 26414 xor     ah, ah ;~ 0AA7:351E
	return _my_u16toa10(0, _state);
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_my_u8toa10: 	goto _my_u8toa10;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _my_u16toa10(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _my_u16toa10:
    _begin:
cs=0xaa7;eip=0x003520; 	T(MOVZX(eax, ax));	// 26423 movzx   eax, ax ;~ 0AA7:3520
	return _group41(m2c::k_my_u32toa10, _state);
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_my_u16toa10: 	goto _my_u16toa10;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _my_u32toa(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _my_u32toa:
    _begin:
cs=0xaa7;eip=0x00352c; 	T(XOR(edx, edx));	// 26444 xor     edx, edx ;~ 0AA7:352C
cs=0xaa7;eip=0x00352f; 	T(DIV4(ebx));	// 26445 div     ebx ;~ 0AA7:352F
cs=0xaa7;eip=0x003532; 	T(OR(eax, eax));	// 26446 or      eax, eax ;~ 0AA7:3532
cs=0xaa7;eip=0x003535; 	J(JZ(loc_1c58e));	// 26447 jz      short loc_1C58E ;~ 0AA7:3535
cs=0xaa7;eip=0x003537; 	X(PUSH(edx));	// 26448 push    edx ;~ 0AA7:3537
cs=0xaa7;eip=0x003539; 	J(CALL(_my_u32toa,0));	// 26449 call    _my_u32toa ;~ 0AA7:3539
cs=0xaa7;eip=0x00353c; 	X(POP(edx));	// 26450 pop     edx ;~ 0AA7:353C
loc_1c58e:
	// 6041 
cs=0xaa7;eip=0x00353e; 	T(OR(dl, '0'));	// 26453 or      dl, '0' ;~ 0AA7:353E
	return _myputdigit(0, _state);
    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_my_u32toa: 	goto _my_u32toa;
        case m2c::kloc_1c58e: 	goto loc_1c58e;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _myputdigit(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _myputdigit:
    _begin:
cs=0xaa7;eip=0x003541; 	X(MOV(*(raddr(ds,si)), dl));	// 26461 mov     [si], dl ;~ 0AA7:3541
cs=0xaa7;eip=0x003543; 	T(INC(si));	// 26462 inc     si ;~ 0AA7:3543
cs=0xaa7;eip=0x003544; 	T(INC(cx));	// 26463 inc     cx ;~ 0AA7:3544
cs=0xaa7;eip=0x003545; 	J(RETN(0));	// 26464 retn ;~ 0AA7:3545

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_myputdigit: 	goto _myputdigit;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _useless_mysprintf(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _useless_mysprintf:
    _begin:
cs=0xaa7;eip=0x003560; 	X(PUSH(es));	// 26487 push    es ;~ 0AA7:3560
cs=0xaa7;eip=0x003561; 	T(MOV(ax, ds));	// 26488 mov     ax, ds ;~ 0AA7:3561
cs=0xaa7;eip=0x003563; 	T(MOV(es, ax));	// 26489 mov     es, ax ;~ 0AA7:3563
cs=0xaa7;eip=0x003565; 	J(JMP(loc_1c5ba));	// 26491 jmp     short loc_1C5BA ;~ 0AA7:3565
loc_1c5b7:
	// 6042 
cs=0xaa7;eip=0x003567; 	X(MOV(*(raddr(ds,di)), al));	// 26495 mov     [di], al ;~ 0AA7:3567
cs=0xaa7;eip=0x003569; 	T(INC(di));	// 26496 inc     di ;~ 0AA7:3569
loc_1c5ba:
	// 6043 
cs=0xaa7;eip=0x00356a; 	T(MOV(al, *(raddr(ds,si))));	// 26500 mov     al, [si] ;~ 0AA7:356A
cs=0xaa7;eip=0x00356c; 	T(INC(si));	// 26501 inc     si ;~ 0AA7:356C
cs=0xaa7;eip=0x00356d; 	T(CMP(al, 0x20));	// 26502 cmp     al, 20h ; ' ' ;~ 0AA7:356D
cs=0xaa7;eip=0x00356f; 	J(JNC(loc_1c5b7));	// 26503 jnb     short loc_1C5B7 ;~ 0AA7:356F
cs=0xaa7;eip=0x003571; 	T(CMP(al, 0x0C));	// 26504 cmp     al, 0Ch ;~ 0AA7:3571
cs=0xaa7;eip=0x003573; 	J(JA(_useless_sprint_0));	// 26505 ja      short _useless_sprint_0 ;~ 0AA7:3573
cs=0xaa7;eip=0x003575; 	T(INC(si));	// 26506 inc     si ;~ 0AA7:3575
cs=0xaa7;eip=0x003576; 	T(MOV(bl, al));	// 26507 mov     bl, al ;~ 0AA7:3576
cs=0xaa7;eip=0x003578; 	T(XOR(bh, bh));	// 26508 xor     bh, bh ;~ 0AA7:3578
cs=0xaa7;eip=0x00357a; 	T(SHL(bx, 1));	// 26509 shl     bx, 1 ;~ 0AA7:357A
	cs=seg_offset(seg001);
cs=0xaa7;eip=0x00357c; __disp=*(dw*)(((db*)&off_1c596)+bx);
	J(return __dispatch_call(__disp, _state););	// 26510 jmp     cs:off_1C596[bx] ;~ 0AA7:357C
_useless_sprint_0:
	// 6044 
cs=0xaa7;eip=0x003581; 	X(POP(es));	// 26516 pop     es ;~ 0AA7:3581
cs=0xaa7;eip=0x003582; 	J(RETN(0));	// 26518 retn ;~ 0AA7:3582
_useless_sprint_1:
	// 6045 
cs=0xaa7;eip=0x003583; 	X(PUSH(si));	// 26523 push    si ;~ 0AA7:3583
cs=0xaa7;eip=0x003584; 	T(MOV(si, *(dw*)(raddr(ds,si))));	// 26524 mov     si, [si] ;~ 0AA7:3584
cs=0xaa7;eip=0x003586; 	J(CALL(_strcpy_count,0));	// 26525 call    _strcpy_count ;~ 0AA7:3586
cs=0xaa7;eip=0x003589; 	X(POP(si));	// 26526 pop     si ;~ 0AA7:3589
cs=0xaa7;eip=0x00358a; 	T(ADD(si, 2));	// 26527 add     si, 2 ;~ 0AA7:358A
cs=0xaa7;eip=0x00358d; 	J(JMP(loc_1c5ba));	// 26528 jmp     short loc_1C5BA ;~ 0AA7:358D
_useless_sprint_2:
	// 6046 
cs=0xaa7;eip=0x00358f; 	T(MOV(bx, *(dw*)(raddr(ds,si))));	// 26533 mov     bx, [si] ;~ 0AA7:358F
cs=0xaa7;eip=0x003591; 	T(MOV(bl, *(raddr(ds,bx))));	// 26534 mov     bl, [bx] ;~ 0AA7:3591
cs=0xaa7;eip=0x003593; 	T(XOR(bh, bh));	// 26535 xor     bh, bh ;~ 0AA7:3593
cs=0xaa7;eip=0x003595; 	J(JMP(loc_1c5eb));	// 26536 jmp     short loc_1C5EB ;~ 0AA7:3595
_useless_sprint_3:
	// 6047 
cs=0xaa7;eip=0x003597; 	T(MOV(bx, *(dw*)(raddr(ds,si))));	// 26541 mov     bx, [si] ;~ 0AA7:3597
cs=0xaa7;eip=0x003599; 	T(MOV(bx, *(dw*)(raddr(ds,bx))));	// 26542 mov     bx, [bx] ;~ 0AA7:3599
loc_1c5eb:
	// 6048 
cs=0xaa7;eip=0x00359b; 	X(PUSH(si));	// 26545 push    si ;~ 0AA7:359B
cs=0xaa7;eip=0x00359c; 	T(SHL(bx, 1));	// 26546 shl     bx, 1 ;~ 0AA7:359C
cs=0xaa7;eip=0x00359e; 	T(MOV(si, *(dw*)(raddr(ds,si+2))));	// 26547 mov     si, [si+2] ;~ 0AA7:359E
cs=0xaa7;eip=0x0035a1; 	T(MOV(si, *(dw*)(raddr(ds,bx+si))));	// 26548 mov     si, [bx+si] ;~ 0AA7:35A1
cs=0xaa7;eip=0x0035a3; 	J(CALL(_strcpy_count,0));	// 26549 call    _strcpy_count ;~ 0AA7:35A3
cs=0xaa7;eip=0x0035a6; 	X(POP(si));	// 26550 pop     si ;~ 0AA7:35A6
cs=0xaa7;eip=0x0035a7; 	T(ADD(si, 4));	// 26551 add     si, 4 ;~ 0AA7:35A7
cs=0xaa7;eip=0x0035aa; 	J(JMP(loc_1c5ba));	// 26552 jmp     short loc_1C5BA ;~ 0AA7:35AA
_useless_sprint_4:
	// 6049 
cs=0xaa7;eip=0x0035ac; 	X(PUSH(si));	// 26557 push    si ;~ 0AA7:35AC
cs=0xaa7;eip=0x0035ad; 	T(MOV(si, *(dw*)(raddr(ds,si))));	// 26558 mov     si, [si] ;~ 0AA7:35AD
cs=0xaa7;eip=0x0035af; 	T(MOV(al, *(raddr(ds,si))));	// 26559 mov     al, [si] ;~ 0AA7:35AF
cs=0xaa7;eip=0x0035b1; 	T(MOV(si, di));	// 26560 mov     si, di ;~ 0AA7:35B1
cs=0xaa7;eip=0x0035b3; 	J(CALL(_my_u8toa10,0));	// 26561 call    _my_u8toa10 ;~ 0AA7:35B3
cs=0xaa7;eip=0x0035b6; 	T(MOV(di, si));	// 26562 mov     di, si ;~ 0AA7:35B6
cs=0xaa7;eip=0x0035b8; 	X(POP(si));	// 26563 pop     si ;~ 0AA7:35B8
cs=0xaa7;eip=0x0035b9; 	T(ADD(si, 2));	// 26564 add     si, 2 ;~ 0AA7:35B9
cs=0xaa7;eip=0x0035bc; 	J(JMP(loc_1c5ba));	// 26565 jmp     short loc_1C5BA ;~ 0AA7:35BC
_useless_sprint_5:
	// 6050 
cs=0xaa7;eip=0x0035be; 	X(PUSH(si));	// 26570 push    si ;~ 0AA7:35BE
cs=0xaa7;eip=0x0035bf; 	T(MOV(si, *(dw*)(raddr(ds,si))));	// 26571 mov     si, [si] ;~ 0AA7:35BF
cs=0xaa7;eip=0x0035c1; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 26572 mov     ax, [si] ;~ 0AA7:35C1
cs=0xaa7;eip=0x0035c3; 	T(MOV(si, di));	// 26573 mov     si, di ;~ 0AA7:35C3
cs=0xaa7;eip=0x0035c5; 	J(CALL(_my_u16toa10,0));	// 26574 call    _my_u16toa10 ;~ 0AA7:35C5
cs=0xaa7;eip=0x0035c8; 	T(MOV(di, si));	// 26575 mov     di, si ;~ 0AA7:35C8
cs=0xaa7;eip=0x0035ca; 	X(POP(si));	// 26576 pop     si ;~ 0AA7:35CA
cs=0xaa7;eip=0x0035cb; 	T(ADD(si, 2));	// 26577 add     si, 2 ;~ 0AA7:35CB
cs=0xaa7;eip=0x0035ce; 	J(JMP(loc_1c5ba));	// 26578 jmp     short loc_1C5BA ;~ 0AA7:35CE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_useless_mysprintf: 	goto _useless_mysprintf;
        case m2c::k_useless_sprint_0: 	goto _useless_sprint_0;
        case m2c::k_useless_sprint_1: 	goto _useless_sprint_1;
        case m2c::k_useless_sprint_2: 	goto _useless_sprint_2;
        case m2c::k_useless_sprint_3: 	goto _useless_sprint_3;
        case m2c::k_useless_sprint_4: 	goto _useless_sprint_4;
        case m2c::k_useless_sprint_5: 	goto _useless_sprint_5;
        case m2c::kloc_1c5b7: 	goto loc_1c5b7;
        case m2c::kloc_1c5ba: 	goto loc_1c5ba;
        case m2c::kloc_1c5eb: 	goto loc_1c5eb;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _useless_sprint_6(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _useless_sprint_6:
    _begin:
cs=0xaa7;eip=0x0035d0; 	X(PUSH(si));	// 26587 push    si ;~ 0AA7:35D0
cs=0xaa7;eip=0x0035d1; 	T(MOV(si, *(dw*)(raddr(ds,si))));	// 26588 mov     si, [si] ;~ 0AA7:35D1
cs=0xaa7;eip=0x0035d3; 	T(MOV(eax, *(dd*)(raddr(ds,si))));	// 26589 mov     eax, [si] ;~ 0AA7:35D3
cs=0xaa7;eip=0x0035d6; 	T(MOV(si, di));	// 26590 mov     si, di ;~ 0AA7:35D6
cs=0xaa7;eip=0x0035d8; 	J(CALL(_my_u32toa10,0));	// 26591 call    _my_u32toa10 ;~ 0AA7:35D8
cs=0xaa7;eip=0x0035db; 	T(MOV(di, si));	// 26592 mov     di, si ;~ 0AA7:35DB
cs=0xaa7;eip=0x0035dd; 	X(POP(si));	// 26593 pop     si ;~ 0AA7:35DD
cs=0xaa7;eip=0x0035de; 	T(ADD(si, 2));	// 26594 add     si, 2 ;~ 0AA7:35DE
cs=0xaa7;eip=0x0035e1; 	J(return _useless_mysprintf(m2c::kloc_1c5ba, _state););	// 26595 jmp     short loc_1C5BA ;~ 0AA7:35E1

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_useless_sprint_6: 	goto _useless_sprint_6;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _useless_sprint_7(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _useless_sprint_7:
    _begin:
cs=0xaa7;eip=0x0035e3; 	X(PUSH(si));	// 26604 push    si ;~ 0AA7:35E3
cs=0xaa7;eip=0x0035e4; 	T(MOV(si, *(dw*)(raddr(ds,si))));	// 26605 mov     si, [si] ;~ 0AA7:35E4
cs=0xaa7;eip=0x0035e6; 	T(MOV(al, *(raddr(ds,si))));	// 26606 mov     al, [si] ;~ 0AA7:35E6
cs=0xaa7;eip=0x0035e8; 	T(MOV(si, di));	// 26607 mov     si, di ;~ 0AA7:35E8
cs=0xaa7;eip=0x0035ea; 	J(CALL(_my_i8toa10,0));	// 26608 call    _my_i8toa10 ;~ 0AA7:35EA
cs=0xaa7;eip=0x0035ed; 	T(MOV(di, si));	// 26609 mov     di, si ;~ 0AA7:35ED
cs=0xaa7;eip=0x0035ef; 	X(POP(si));	// 26610 pop     si ;~ 0AA7:35EF
cs=0xaa7;eip=0x0035f0; 	T(ADD(si, 2));	// 26611 add     si, 2 ;~ 0AA7:35F0
cs=0xaa7;eip=0x0035f3; 	J(return _useless_mysprintf(m2c::kloc_1c5ba, _state););	// 26612 jmp     loc_1C5BA ;~ 0AA7:35F3

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_useless_sprint_7: 	goto _useless_sprint_7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _useless_sprint_8(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _useless_sprint_8:
    _begin:
cs=0xaa7;eip=0x0035f6; 	X(PUSH(si));	// 26621 push    si ;~ 0AA7:35F6
cs=0xaa7;eip=0x0035f7; 	T(MOV(si, *(dw*)(raddr(ds,si))));	// 26622 mov     si, [si] ;~ 0AA7:35F7
cs=0xaa7;eip=0x0035f9; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 26623 mov     ax, [si] ;~ 0AA7:35F9
cs=0xaa7;eip=0x0035fb; 	T(MOV(si, di));	// 26624 mov     si, di ;~ 0AA7:35FB
cs=0xaa7;eip=0x0035fd; 	J(CALL(_group41,m2c::k_my_i16toa10));	// 26625 call    _my_i16toa10 ;~ 0AA7:35FD
cs=0xaa7;eip=0x003600; 	T(MOV(di, si));	// 26626 mov     di, si ;~ 0AA7:3600
cs=0xaa7;eip=0x003602; 	X(POP(si));	// 26627 pop     si ;~ 0AA7:3602
cs=0xaa7;eip=0x003603; 	T(ADD(si, 2));	// 26628 add     si, 2 ;~ 0AA7:3603
cs=0xaa7;eip=0x003606; 	J(return _useless_mysprintf(m2c::kloc_1c5ba, _state););	// 26629 jmp     loc_1C5BA ;~ 0AA7:3606

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_useless_sprint_8: 	goto _useless_sprint_8;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _useless_sprint_9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _useless_sprint_9:
    _begin:
cs=0xaa7;eip=0x003609; 	X(PUSH(si));	// 26638 push    si ;~ 0AA7:3609
cs=0xaa7;eip=0x00360a; 	T(MOV(si, *(dw*)(raddr(ds,si))));	// 26639 mov     si, [si] ;~ 0AA7:360A
cs=0xaa7;eip=0x00360c; 	T(MOV(eax, *(dd*)(raddr(ds,si))));	// 26640 mov     eax, [si] ;~ 0AA7:360C
cs=0xaa7;eip=0x00360f; 	T(MOV(si, di));	// 26641 mov     si, di ;~ 0AA7:360F
cs=0xaa7;eip=0x003611; 	J(CALL(_group41,m2c::k_my_i32toa10));	// 26642 call    _my_i32toa10 ;~ 0AA7:3611
cs=0xaa7;eip=0x003614; 	T(MOV(di, si));	// 26643 mov     di, si ;~ 0AA7:3614
cs=0xaa7;eip=0x003616; 	X(POP(si));	// 26644 pop     si ;~ 0AA7:3616
cs=0xaa7;eip=0x003617; 	T(ADD(si, 2));	// 26645 add     si, 2 ;~ 0AA7:3617
cs=0xaa7;eip=0x00361a; 	J(return _useless_mysprintf(m2c::kloc_1c5ba, _state););	// 26646 jmp     loc_1C5BA ;~ 0AA7:361A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_useless_sprint_9: 	goto _useless_sprint_9;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _useless_sprint_10(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _useless_sprint_10:
    _begin:
cs=0xaa7;eip=0x00361d; 	X(PUSH(si));	// 26655 push    si ;~ 0AA7:361D
cs=0xaa7;eip=0x00361e; 	T(MOV(si, *(dw*)(raddr(ds,si))));	// 26656 mov     si, [si] ;~ 0AA7:361E
cs=0xaa7;eip=0x003620; 	T(MOV(al, *(raddr(ds,si))));	// 26657 mov     al, [si] ;~ 0AA7:3620
cs=0xaa7;eip=0x003622; 	T(MOV(si, di));	// 26658 mov     si, di ;~ 0AA7:3622
cs=0xaa7;eip=0x003624; 	J(CALL(_my_u8tox,0));	// 26659 call    _my_u8tox ;~ 0AA7:3624
cs=0xaa7;eip=0x003627; 	T(MOV(di, si));	// 26660 mov     di, si ;~ 0AA7:3627
cs=0xaa7;eip=0x003629; 	X(POP(si));	// 26661 pop     si ;~ 0AA7:3629
cs=0xaa7;eip=0x00362a; 	T(ADD(si, 2));	// 26662 add     si, 2 ;~ 0AA7:362A
cs=0xaa7;eip=0x00362d; 	J(return _useless_mysprintf(m2c::kloc_1c5ba, _state););	// 26663 jmp     loc_1C5BA ;~ 0AA7:362D

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_useless_sprint_10: 	goto _useless_sprint_10;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _useless_sprint_11(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _useless_sprint_11:
    _begin:
cs=0xaa7;eip=0x003630; 	X(PUSH(si));	// 26672 push    si ;~ 0AA7:3630
cs=0xaa7;eip=0x003631; 	T(MOV(si, *(dw*)(raddr(ds,si))));	// 26673 mov     si, [si] ;~ 0AA7:3631
cs=0xaa7;eip=0x003633; 	T(MOV(ax, *(dw*)(raddr(ds,si))));	// 26674 mov     ax, [si] ;~ 0AA7:3633
cs=0xaa7;eip=0x003635; 	T(MOV(si, di));	// 26675 mov     si, di ;~ 0AA7:3635
cs=0xaa7;eip=0x003637; 	J(CALL(_my_u16tox,0));	// 26676 call    _my_u16tox ;~ 0AA7:3637
cs=0xaa7;eip=0x00363a; 	T(MOV(di, si));	// 26677 mov     di, si ;~ 0AA7:363A
cs=0xaa7;eip=0x00363c; 	X(POP(si));	// 26678 pop     si ;~ 0AA7:363C
cs=0xaa7;eip=0x00363d; 	T(ADD(si, 2));	// 26679 add     si, 2 ;~ 0AA7:363D
cs=0xaa7;eip=0x003640; 	J(return _useless_mysprintf(m2c::kloc_1c5ba, _state););	// 26680 jmp     loc_1C5BA ;~ 0AA7:3640

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_useless_sprint_11: 	goto _useless_sprint_11;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _useless_sprint_12(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _useless_sprint_12:
    _begin:
cs=0xaa7;eip=0x003643; 	X(PUSH(si));	// 26689 push    si ;~ 0AA7:3643
cs=0xaa7;eip=0x003644; 	T(MOV(si, *(dw*)(raddr(ds,si))));	// 26690 mov     si, [si] ;~ 0AA7:3644
cs=0xaa7;eip=0x003646; 	T(MOV(eax, *(dd*)(raddr(ds,si))));	// 26691 mov     eax, [si] ;~ 0AA7:3646
cs=0xaa7;eip=0x003649; 	T(MOV(si, di));	// 26692 mov     si, di ;~ 0AA7:3649
cs=0xaa7;eip=0x00364b; 	J(CALL(_my_u32tox,0));	// 26693 call    _my_u32tox ;~ 0AA7:364B
cs=0xaa7;eip=0x00364e; 	T(MOV(di, si));	// 26694 mov     di, si ;~ 0AA7:364E
cs=0xaa7;eip=0x003650; 	X(POP(si));	// 26695 pop     si ;~ 0AA7:3650
cs=0xaa7;eip=0x003651; 	T(ADD(si, 2));	// 26696 add     si, 2 ;~ 0AA7:3651
cs=0xaa7;eip=0x003654; 	J(return _useless_mysprintf(m2c::kloc_1c5ba, _state););	// 26697 jmp     loc_1C5BA ;~ 0AA7:3654

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_useless_sprint_12: 	goto _useless_sprint_12;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _mystrlen(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _mystrlen:
    _begin:
cs=0xaa7;eip=0x003657; 	T(MOV(ax, -1));	// 26705 mov     ax, -1 ;~ 0AA7:3657
cs=0xaa7;eip=0x00365a; 	T(DEC(si));	// 26706 dec     si ;~ 0AA7:365A
loc_1c6ab:
	// 6051 
cs=0xaa7;eip=0x00365b; 	T(INC(ax));	// 26709 inc     ax ;~ 0AA7:365B
cs=0xaa7;eip=0x00365c; 	T(INC(si));	// 26710 inc     si ;~ 0AA7:365C
cs=0xaa7;eip=0x00365d; 	T(CMP(*(raddr(ds,si)), 0));	// 26711 cmp     byte ptr [si], 0 ;~ 0AA7:365D
cs=0xaa7;eip=0x003660; 	J(JNZ(loc_1c6ab));	// 26712 jnz     short loc_1C6AB ;~ 0AA7:3660
cs=0xaa7;eip=0x003662; 	T(SUB(si, ax));	// 26713 sub     si, ax ;~ 0AA7:3662
cs=0xaa7;eip=0x003664; 	J(RETN(0));	// 26714 retn ;~ 0AA7:3664

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_mystrlen: 	goto _mystrlen;
        case m2c::kloc_1c6ab: 	goto loc_1c6ab;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _strcpy_count(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _strcpy_count:
    _begin:
cs=0xaa7;eip=0x003665; 	T(XOR(cx, cx));	// 26723 xor     cx, cx ;~ 0AA7:3665
cs=0xaa7;eip=0x003667; 	J(JMP(loc_1c6be));	// 26724 jmp     short loc_1C6BE ;~ 0AA7:3667
loc_1c6b9:
	// 6052 
cs=0xaa7;eip=0x003669; 	X(MOV(*(raddr(es,di)), al));	// 26728 mov     es:[di], al ;~ 0AA7:3669
cs=0xaa7;eip=0x00366c; 	T(INC(si));	// 26729 inc     si ;~ 0AA7:366C
cs=0xaa7;eip=0x00366d; 	T(INC(di));	// 26730 inc     di ;~ 0AA7:366D
loc_1c6be:
	// 6053 
cs=0xaa7;eip=0x00366e; 	T(MOV(al, *(raddr(ds,si))));	// 26733 mov     al, [si] ;~ 0AA7:366E
cs=0xaa7;eip=0x003670; 	T(INC(cx));	// 26734 inc     cx ;~ 0AA7:3670
cs=0xaa7;eip=0x003671; 	T(OR(al, al));	// 26735 or      al, al ;~ 0AA7:3671
cs=0xaa7;eip=0x003673; 	J(JNZ(loc_1c6b9));	// 26736 jnz     short loc_1C6B9 ;~ 0AA7:3673
cs=0xaa7;eip=0x003675; 	J(RETN(0));	// 26737 retn ;~ 0AA7:3675

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_strcpy_count: 	goto _strcpy_count;
        case m2c::kloc_1c6b9: 	goto loc_1c6b9;
        case m2c::kloc_1c6be: 	goto loc_1c6be;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group42(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group42:
    _begin:
_mouse_init:
	// 26744 
cs=0xaa7;eip=0x003676; 	X(MOV(*(_mouse_visible), 0));	// 26746 mov     _mouse_visible, 0 ;~ 0AA7:3676
cs=0xaa7;eip=0x00367b; 	T(XOR(ax, ax));	// 26747 xor     ax, ax ;~ 0AA7:367B
cs=0xaa7;eip=0x00367d; 	T(MOV(es, ax));	// 26748 mov     es, ax ;~ 0AA7:367D
cs=0xaa7;eip=0x00367f; 	T(CMP(*(dd*)(raddr(es,0x0CC)), 0));	// 26750 cmp     dword ptr es:0CCh, 0 ;~ 0AA7:367F
cs=0xaa7;eip=0x003686; 	J(JZ(loc_1c708));	// 26751 jz      short loc_1C708 ;~ 0AA7:3686
cs=0xaa7;eip=0x003688; 	T(MOV(ax, 0x21));	// 26752 mov     ax, 21h ; '!' ;~ 0AA7:3688
cs=0xaa7;eip=0x00368b; 	S(_INT(0x33));	// 26753 int     33h             ; - MS MOUSE - SOFTWARE RESET ;~ 0AA7:368B
cs=0xaa7;eip=0x00368d; 	T(CMP(ax, 0x0FFFF));	// 26757 cmp     ax, 0FFFFh ;~ 0AA7:368D
cs=0xaa7;eip=0x003690; 	J(JZ(loc_1c6ef));	// 26758 jz      short loc_1C6EF ;~ 0AA7:3690
cs=0xaa7;eip=0x003692; 	T(XOR(ax, ax));	// 26759 xor     ax, ax ;~ 0AA7:3692
cs=0xaa7;eip=0x003694; 	S(_INT(0x33));	// 26760 int     33h             ; - MS MOUSE - RESET DRIVER AND READ STATUS ;~ 0AA7:3694
cs=0xaa7;eip=0x003696; 	T(TEST(ax, ax));	// 26763 test    ax, ax ;~ 0AA7:3696
cs=0xaa7;eip=0x003698; 	J(JZ(loc_1c708));	// 26764 jz      short loc_1C708 ;~ 0AA7:3698
cs=0xaa7;eip=0x00369a; 	T(CMP(ax, 0x0FFFF));	// 26765 cmp     ax, 0FFFFh ;~ 0AA7:369A
cs=0xaa7;eip=0x00369d; 	J(JNZ(loc_1c708));	// 26766 jnz     short loc_1C708 ;~ 0AA7:369D
loc_1c6ef:
	// 6054 
cs=0xaa7;eip=0x00369f; 	X(MOV(_mouse_exist_flag, 1));	// 26769 mov     _mouse_exist_flag, 1 ;~ 0AA7:369F
cs=0xaa7;eip=0x0036a4; 	X(PUSH(es));	// 26770 push    es ;~ 0AA7:36A4
cs=0xaa7;eip=0x0036a5; 	T(MOV(ax, seg_offset(seg001)));	// 26771 mov     ax, seg seg001 ;~ 0AA7:36A5
cs=0xaa7;eip=0x0036a8; 	T(MOV(es, ax));	// 26772 mov     es, ax ;~ 0AA7:36A8
cs=0xaa7;eip=0x0036aa; 	T(MOV(dx, m2c::kloc_1c72c));	// 26774 mov     dx, offset loc_1C72C ;~ 0AA7:36AA
cs=0xaa7;eip=0x0036ad; 	T(MOV(cx, 0x1F));	// 26775 mov     cx, 1Fh ;~ 0AA7:36AD
cs=0xaa7;eip=0x0036b0; 	T(MOV(ax, 0x0C));	// 26776 mov     ax, 0Ch ;~ 0AA7:36B0
cs=0xaa7;eip=0x0036b3; 	S(_INT(0x33));	// 26777 int     33h             ; - MS MOUSE - DEFINE INTERRUPT SUBROUTINE PARAMETERS ;~ 0AA7:36B3
cs=0xaa7;eip=0x0036b5; 	X(POP(es));	// 26779 pop     es ;~ 0AA7:36B5
cs=0xaa7;eip=0x0036b6; 	T(CLC);	// 26781 clc ;~ 0AA7:36B6
cs=0xaa7;eip=0x0036b7; 	J(RETN(0));	// 26782 retn ;~ 0AA7:36B7
loc_1c708:
	// 6055 
cs=0xaa7;eip=0x0036b8; 	X(MOV(_mouse_exist_flag, 0));	// 26787 mov     _mouse_exist_flag, 0 ;~ 0AA7:36B8
cs=0xaa7;eip=0x0036bd; 	T(STC);	// 26788 stc ;~ 0AA7:36BD
cs=0xaa7;eip=0x0036be; 	J(RETN(0));	// 26789 retn ;~ 0AA7:36BE
seg001_36dc_proc:
	// 26816 
loc_1c72c:
	// 6057 
cs=0xaa7;eip=0x0036dc; 	X(PUSH(ds));	// 26817 push    ds ;~ 0AA7:36DC
cs=0xaa7;eip=0x0036dd; 	X(PUSH(seg_offset(dseg)));	// 26818 push    seg dseg ;~ 0AA7:36DD
cs=0xaa7;eip=0x0036e0; 	X(POP(ds));	// 26819 pop     ds ;~ 0AA7:36E0
cs=0xaa7;eip=0x0036e1; 	X(MOV(_mousecolumn, cx));	// 26820 mov     _mousecolumn, cx ;~ 0AA7:36E1
cs=0xaa7;eip=0x0036e5; 	X(MOV(_mouserow, dx));	// 26821 mov     _mouserow, dx ;~ 0AA7:36E5
cs=0xaa7;eip=0x0036e9; 	X(MOV(byte_1de90, bl));	// 26822 mov     byte_1DE90, bl ;~ 0AA7:36E9
cs=0xaa7;eip=0x0036ed; 	X(POP(ds));	// 26823 pop     ds ;~ 0AA7:36ED
cs=0xaa7;eip=0x0036ee; 	J(RETF(0));	// 26824 retf ;~ 0AA7:36EE

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_mouse_init: 	goto _mouse_init;
        case m2c::kloc_1c6ef: 	goto loc_1c6ef;
        case m2c::kloc_1c708: 	goto loc_1c708;
        case m2c::kseg001_36dc_proc: 	goto seg001_36dc_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _mouse_deinit(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _mouse_deinit:
    _begin:
cs=0xaa7;eip=0x0036bf; 	T(CMP(_mouse_exist_flag, 1));	// 26798 cmp     _mouse_exist_flag, 1 ;~ 0AA7:36BF
cs=0xaa7;eip=0x0036c4; 	J(JNZ(locret_1c72b));	// 26799 jnz     short locret_1C72B ;~ 0AA7:36C4
cs=0xaa7;eip=0x0036c6; 	X(MOV(_mouse_exist_flag, 0));	// 26800 mov     _mouse_exist_flag, 0 ;~ 0AA7:36C6
cs=0xaa7;eip=0x0036cb; 	X(MOV(*(_mouse_visible), 0));	// 26801 mov     _mouse_visible, 0 ;~ 0AA7:36CB
cs=0xaa7;eip=0x0036d0; 	T(XOR(dx, dx));	// 26802 xor     dx, dx ;~ 0AA7:36D0
cs=0xaa7;eip=0x0036d2; 	T(MOV(es, dx));	// 26803 mov     es, dx ;~ 0AA7:36D2
cs=0xaa7;eip=0x0036d4; 	T(MOV(cx, dx));	// 26805 mov     cx, dx ;~ 0AA7:36D4
cs=0xaa7;eip=0x0036d6; 	T(MOV(ax, 0x0C));	// 26806 mov     ax, 0Ch ;~ 0AA7:36D6
cs=0xaa7;eip=0x0036d9; 	S(_INT(0x33));	// 26807 int     33h             ; - MS MOUSE - DEFINE INTERRUPT SUBROUTINE PARAMETERS ;~ 0AA7:36D9
locret_1c72b:
	// 6056 
cs=0xaa7;eip=0x0036db; 	J(RETN(0));	// 26811 retn ;~ 0AA7:36DB

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_mouse_deinit: 	goto _mouse_deinit;
        case m2c::klocret_1c72b: 	goto locret_1c72b;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _mouse_show(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _mouse_show:
    _begin:
cs=0xaa7;eip=0x0036ef; 	T(CMP(_mouse_exist_flag, 1));	// 26830 cmp     _mouse_exist_flag, 1 ;~ 0AA7:36EF
cs=0xaa7;eip=0x0036f4; 	J(JNZ(locret_1c755));	// 26831 jnz     short locret_1C755 ;~ 0AA7:36F4
cs=0xaa7;eip=0x0036f6; 	T(CMP(*(_mouse_visible), 1));	// 26832 cmp     _mouse_visible, 1 ;~ 0AA7:36F6
cs=0xaa7;eip=0x0036fb; 	J(JZ(locret_1c755));	// 26833 jz      short locret_1C755 ;~ 0AA7:36FB
cs=0xaa7;eip=0x0036fd; 	X(MOV(*(_mouse_visible), 1));	// 26834 mov     _mouse_visible, 1 ;~ 0AA7:36FD
cs=0xaa7;eip=0x003702; 	J(CALL(_mouse_showcur,0));	// 26835 call    _mouse_showcur ;~ 0AA7:3702
locret_1c755:
	// 6058 
cs=0xaa7;eip=0x003705; 	J(RETN(0));	// 26839 retn ;~ 0AA7:3705

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_mouse_show: 	goto _mouse_show;
        case m2c::klocret_1c755: 	goto locret_1c755;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _mouse_hide(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _mouse_hide:
    _begin:
cs=0xaa7;eip=0x003706; 	T(CMP(_mouse_exist_flag, 1));	// 26848 cmp     _mouse_exist_flag, 1 ;~ 0AA7:3706
cs=0xaa7;eip=0x00370b; 	J(JNZ(locret_1c76c));	// 26849 jnz     short locret_1C76C ;~ 0AA7:370B
cs=0xaa7;eip=0x00370d; 	T(CMP(*(_mouse_visible), 0));	// 26850 cmp     _mouse_visible, 0 ;~ 0AA7:370D
cs=0xaa7;eip=0x003712; 	J(JZ(locret_1c76c));	// 26851 jz      short locret_1C76C ;~ 0AA7:3712
cs=0xaa7;eip=0x003714; 	X(MOV(*(_mouse_visible), 0));	// 26852 mov     _mouse_visible, 0 ;~ 0AA7:3714
cs=0xaa7;eip=0x003719; 	J(CALL(_mouse_hide2,0));	// 26853 call    _mouse_hide2 ;~ 0AA7:3719
locret_1c76c:
	// 6059 
cs=0xaa7;eip=0x00371c; 	J(RETN(0));	// 26857 retn ;~ 0AA7:371C

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_mouse_hide: 	goto _mouse_hide;
        case m2c::klocret_1c76c: 	goto locret_1c76c;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _mouse_getpos(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _mouse_getpos:
    _begin:
cs=0xaa7;eip=0x00371d; 	T(CMP(_mouse_exist_flag, 1));	// 26865 cmp     _mouse_exist_flag, 1 ;~ 0AA7:371D
cs=0xaa7;eip=0x003722; 	J(JNZ(loc_1c783));	// 26866 jnz     short loc_1C783 ;~ 0AA7:3722
cs=0xaa7;eip=0x003724; 	T(MOV(ax, 3));	// 26867 mov     ax, 3 ;~ 0AA7:3724
cs=0xaa7;eip=0x003727; 	S(_INT(0x33));	// 26868 int     33h             ; - MS MOUSE - RETURN POSITION AND BUTTON STATUS ;~ 0AA7:3727
cs=0xaa7;eip=0x003729; 	X(MOV(_mousecolumn, cx));	// 26870 mov     _mousecolumn, cx ;~ 0AA7:3729
cs=0xaa7;eip=0x00372d; 	X(MOV(_mouserow, dx));	// 26871 mov     _mouserow, dx ;~ 0AA7:372D
cs=0xaa7;eip=0x003731; 	T(CLC);	// 26872 clc ;~ 0AA7:3731
cs=0xaa7;eip=0x003732; 	J(RETN(0));	// 26873 retn ;~ 0AA7:3732
loc_1c783:
	// 6060 
cs=0xaa7;eip=0x003733; 	T(XOR(bx, bx));	// 26877 xor     bx, bx ;~ 0AA7:3733
cs=0xaa7;eip=0x003735; 	T(XOR(cx, cx));	// 26878 xor     cx, cx ;~ 0AA7:3735
cs=0xaa7;eip=0x003737; 	T(XOR(dx, dx));	// 26879 xor     dx, dx ;~ 0AA7:3737
cs=0xaa7;eip=0x003739; 	T(STC);	// 26880 stc ;~ 0AA7:3739
cs=0xaa7;eip=0x00373a; 	J(RETN(0));	// 26881 retn ;~ 0AA7:373A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_mouse_getpos: 	goto _mouse_getpos;
        case m2c::kloc_1c783: 	goto loc_1c783;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group43(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group43:
    _begin:
_mouse_showcur:
	// 26888 
cs=0xaa7;eip=0x00373b; 	T(CMP(_mouse_exist_flag, 1));	// 26889 cmp     _mouse_exist_flag, 1 ;~ 0AA7:373B
cs=0xaa7;eip=0x003740; 	J(JNZ(loc_1c7a7));	// 26890 jnz     short loc_1C7A7 ;~ 0AA7:3740
cs=0xaa7;eip=0x003742; 	T(MOV(ax, 1));	// 26891 mov     ax, 1 ;~ 0AA7:3742
cs=0xaa7;eip=0x003745; 	S(_INT(0x33));	// 26892 int     33h             ; - MS MOUSE - SHOW MOUSE CURSOR ;~ 0AA7:3745
cs=0xaa7;eip=0x003747; 	T(CLC);	// 26894 clc ;~ 0AA7:3747
cs=0xaa7;eip=0x003748; 	J(RETN(0));	// 26895 retn ;~ 0AA7:3748
_mouse_hide2:
	// 26902 
cs=0xaa7;eip=0x003749; 	T(CMP(_mouse_exist_flag, 1));	// 26903 cmp     _mouse_exist_flag, 1 ;~ 0AA7:3749
cs=0xaa7;eip=0x00374e; 	J(JNZ(loc_1c7a7));	// 26904 jnz     short loc_1C7A7 ;~ 0AA7:374E
cs=0xaa7;eip=0x003750; 	T(MOV(ax, 2));	// 26905 mov     ax, 2 ;~ 0AA7:3750
cs=0xaa7;eip=0x003753; 	S(_INT(0x33));	// 26906 int     33h             ; - MS MOUSE - HIDE MOUSE CURSOR ;~ 0AA7:3753
cs=0xaa7;eip=0x003755; 	T(CLC);	// 26908 clc ;~ 0AA7:3755
cs=0xaa7;eip=0x003756; 	J(RETN(0));	// 26909 retn ;~ 0AA7:3756
loc_1c7a7:
	// 6061 
cs=0xaa7;eip=0x003757; 	T(STC);	// 26914 stc ;~ 0AA7:3757
cs=0xaa7;eip=0x003758; 	J(RETN(0));	// 26915 retn ;~ 0AA7:3758

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_mouse_hide2: 	goto _mouse_hide2;
        case m2c::k_mouse_showcur: 	goto _mouse_showcur;
        case m2c::kloc_1c7a7: 	goto loc_1c7a7;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _mouse_1c7a9(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _mouse_1c7a9:
    _begin:
cs=0xaa7;eip=0x003759; 	T(CMP(cx, si));	// 26923 cmp     cx, si ;~ 0AA7:3759
cs=0xaa7;eip=0x00375b; 	J(JBE(loc_1c7af));	// 26924 jbe     short loc_1C7AF ;~ 0AA7:375B
cs=0xaa7;eip=0x00375d; 	T(XCHG(cx, si));	// 26925 xchg    cx, si ;~ 0AA7:375D
loc_1c7af:
	// 6062 
cs=0xaa7;eip=0x00375f; 	T(CMP(dx, di));	// 26928 cmp     dx, di ;~ 0AA7:375F
cs=0xaa7;eip=0x003761; 	J(JBE(loc_1c7b5));	// 26929 jbe     short loc_1C7B5 ;~ 0AA7:3761
cs=0xaa7;eip=0x003763; 	T(XCHG(dx, di));	// 26930 xchg    dx, di ;~ 0AA7:3763
loc_1c7b5:
	// 6063 
cs=0xaa7;eip=0x003765; 	T(CMP(ax, cx));	// 26933 cmp     ax, cx ;~ 0AA7:3765
cs=0xaa7;eip=0x003767; 	J(JC(loc_1c7ca));	// 26934 jb      short loc_1C7CA ;~ 0AA7:3767
cs=0xaa7;eip=0x003769; 	T(CMP(ax, si));	// 26935 cmp     ax, si ;~ 0AA7:3769
cs=0xaa7;eip=0x00376b; 	J(JA(loc_1c7ca));	// 26936 ja      short loc_1C7CA ;~ 0AA7:376B
cs=0xaa7;eip=0x00376d; 	T(CMP(bp, dx));	// 26937 cmp     bp, dx ;~ 0AA7:376D
cs=0xaa7;eip=0x00376f; 	J(JC(loc_1c7ca));	// 26938 jb      short loc_1C7CA ;~ 0AA7:376F
cs=0xaa7;eip=0x003771; 	T(CMP(bp, di));	// 26939 cmp     bp, di ;~ 0AA7:3771
cs=0xaa7;eip=0x003773; 	J(JA(loc_1c7ca));	// 26940 ja      short loc_1C7CA ;~ 0AA7:3773
cs=0xaa7;eip=0x003775; 	T(SUB(ax, cx));	// 26941 sub     ax, cx ;~ 0AA7:3775
cs=0xaa7;eip=0x003777; 	T(SUB(bp, dx));	// 26942 sub     bp, dx ;~ 0AA7:3777
cs=0xaa7;eip=0x003779; 	J(RETN(0));	// 26943 retn ;~ 0AA7:3779
loc_1c7ca:
	// 6064 
cs=0xaa7;eip=0x00377a; 	T(STC);	// 26948 stc ;~ 0AA7:377A
cs=0xaa7;eip=0x00377b; 	J(RETN(0));	// 26949 retn ;~ 0AA7:377B

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_mouse_1c7a9: 	goto _mouse_1c7a9;
        case m2c::kloc_1c7af: 	goto loc_1c7af;
        case m2c::kloc_1c7b5: 	goto loc_1c7b5;
        case m2c::kloc_1c7ca: 	goto loc_1c7ca;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}



 bool _group44(m2c::_offsets _i, struct m2c::_STATE* _state){
    X86_REGREF
    __disp = _i;

    if (__disp == 0) goto _begin;
    else goto __dispatch_call;
    _group44:
    _begin:
seg001_377c_proc:
	// 26955 
loc_1c7cc:
	// 6065 
cs=0xaa7;eip=0x00377c; 	T(ADD(bx, 0x0A));	// 26956 add     bx, 0Ah ;~ 0AA7:377C
	JMP(_mouse_1c7cf);
_mouse_1c7cf:
	// 26963 
cs=0xaa7;eip=0x00377f; 	T(MOV(cx, *(dw*)(raddr(ds,bx))));	// 26968 mov     cx, [bx] ;~ 0AA7:377F
cs=0xaa7;eip=0x003781; 	T(CMP(cx, -1));	// 26969 cmp     cx, -1 ;~ 0AA7:3781
cs=0xaa7;eip=0x003784; 	J(JZ(loc_1c7e9));	// 26970 jz      short loc_1C7E9 ;~ 0AA7:3784
cs=0xaa7;eip=0x003786; 	T(MOV(dx, *(dw*)(raddr(ds,bx+2))));	// 26971 mov     dx, [bx+2] ;~ 0AA7:3786
cs=0xaa7;eip=0x003789; 	T(MOV(si, *(dw*)(raddr(ds,bx+4))));	// 26972 mov     si, [bx+4] ;~ 0AA7:3789
cs=0xaa7;eip=0x00378c; 	T(MOV(di, *(dw*)(raddr(ds,bx+6))));	// 26973 mov     di, [bx+6] ;~ 0AA7:378C
cs=0xaa7;eip=0x00378f; 	J(CALL(_mouse_1c7a9,0));	// 26974 call    _mouse_1C7A9 ;~ 0AA7:378F
cs=0xaa7;eip=0x003792; 	J(JC(loc_1c7cc));	// 26975 jb      short loc_1C7CC ;~ 0AA7:3792
cs=0xaa7;eip=0x003794; 	T(MOV(bx, *(dw*)(raddr(ds,bx+8))));	// 26976 mov     bx, [bx+8] ;~ 0AA7:3794
cs=0xaa7;eip=0x003797; 	T(CLC);	// 26977 clc ;~ 0AA7:3797
cs=0xaa7;eip=0x003798; 	J(RETN(0));	// 26978 retn ;~ 0AA7:3798
loc_1c7e9:
	// 6066 
cs=0xaa7;eip=0x003799; 	T(STC);	// 26982 stc ;~ 0AA7:3799
cs=0xaa7;eip=0x00379a; 	J(RETN(0));	// 26983 retn ;~ 0AA7:379A

    assert(0);
    __dispatch_call:
#ifdef DOSBOX_CUSTOM
    if ((__disp >> 16) == 0xf000)
	{cs=0xf000;eip=__disp&0xffff;m2c::fix_segs();return false;}  // Jumping to BIOS
#endif
    if ((__disp>>16) == 0) {__disp |= ((dd)cs) << 16;}
    switch (__disp) {
        case m2c::k_mouse_1c7cf: 	goto _mouse_1c7cf;
        case m2c::kloc_1c7e9: 	goto loc_1c7e9;
        case m2c::kseg001_377c_proc: 	goto seg001_377c_proc;
        default: m2c::log_error("Don't know how to jump to 0x%x. See " __FILE__ " line %d\n", __disp, __LINE__);m2c::stackDump(); abort();
    };
}

