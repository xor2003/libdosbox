.386
OPTION NOSCOPED

seg11a3         segment para public 'DATA' use16
                assume cs:seg11a3
aF15IiAdlib3149 db 'F15 II AdLib 3-14-91',0
                align 4
                dw seg seg127c
                dw seg seg11a3
                db  64h ; d
                db    0
                db 0ACh
                db  22h ; "
                db    0
                db    0
                db  0Ah
                db    0
                db  97h
                db    7
                db 0CCh
                db    7
                db 0DAh
                db    7
                db  10h
                db    8
                db  78h ; x
                db    8
                db  85h
                db    8
                db  5Dh ; ]
                db    8
                db  2Ah ; *
                db    8
                db  50h ; P
                db    8
                db 0F3h
                db    7
                db 1B6h dup(53h)
                db  2Ah ; *
                db  2Ah ; *
                db    0
                db    0
                db  2Ah ; *
                db  2Ah ; *
                db 0FBh
                db    9
                db 0B5h
                db    0
                db  0Ah
                db    0
                db  2Ah ; *
                db  2Ah ; *
                db  23h ; #
                db    9
                db  4Dh ; M
                db    0
                db  16h
                db    0
                db  2Ah ; *
                db  2Ah ; *
                db    0
                db    0
                db  2Ah ; *
                db  2Ah ; *
                db  47h ; G
                db  0Dh
                db 0B5h
                db    0
                db  2Ah ; *
                db  2Ah ; *
                db    0
                db    0
                db  2Ah ; *
                db  2Ah ; *
                db  9Ah
                db  0Bh
                db 0B5h
                db    0
                db  0Ah
                db    0
                db  2Eh ; .
                db    2
                db 0B5h
                db    0
                db  0Ah
                db    0
                db  2Eh ; .
                db    2
                db  1Ah
                db  13h
                db    5
                db    0
                db  2Ah ; *
                db  2Ah ; *
                db  27h ; '
                db    7
                db  2Ch ; ,
                db    0
                db  2Ah ; *
                db  2Ah ; *
                db  27h ; '
                db    7
                db    0
                db    0
                db 0E2h
                db  82h
                db  1Ah
                db  15h
                dw offset loc_12A98
                dw seg seg127c
                db    0
                db    0
unk_11C6A       db 0FFh                 ; DATA XREF: sub_12811:loc_12840↓w
                                        ; seg127c:083B↓r
unk_11C6B       db    2                 ; DATA XREF: seg127c:0830↓w
                                        ; seg127c:0836↓w
aNoAdlibBoardPr db 'No Adlib board present in system$'
word_11C8D      dw 0                    ; DATA XREF: sub_12A70+91↓w
                                        ; sub_12B4B+D↓w ...
word_11C8F      dw 0FFFFh               ; DATA XREF: sub_12A70:loc_12AF4↓r
                                        ; sub_12A70+8B↓w ...
                db    0
                db    0
word_11C93      dw 0D60h                ; DATA XREF: sub_12881:loc_1289C↓w
                                        ; sub_12881+27↓w ...
byte_11C95      db 0F8h                 ; DATA XREF: sub_12E41+E↓r
                                        ; sub_12F38+16↓w
byte_11C96      db 20h                  ; DATA XREF: sub_12881+2↓w
                                        ; sub_12881+5E↓r ...
word_11C97      dw 0                    ; DATA XREF: sub_12F09+1↓r
                                        ; seg127c:07A7↓w
word_11C99      dw 0                    ; DATA XREF: sub_128E5+16↓w
                                        ; sub_128E5+1F↓w
                db    0
                db    0
unk_11C9D       db  92h                 ; DATA XREF: sub_12DCE+24↓o
                db  5Ch ; \
                db  97h
                db  47h ; G
                db  1Ah
                db  6Ah ; j
                db  93h
                db  5Ch ; \
                db  9Dh
                db  7Dh ; }
                db  1Bh
                db  6Ah ; j
word_11CA9      dw 0                    ; DATA XREF: sub_12DCE:loc_12DDF↓r
                                        ; sub_12DCE:loc_12DEB↓w
byte_11CAB      db 0                    ; DATA XREF: sub_12DCE+15↓r
                                        ; sub_12F75:loc_12F87↓w
word_11CAC      dw 0                    ; DATA XREF: sub_12A70↓r
                                        ; sub_12A70+7↓w ...
word_11CAE      dw 0                    ; DATA XREF: sub_12DCE↓r
                                        ; seg127c:loc_13032↓w ...
word_11CB0      dw 0                    ; DATA XREF: sub_13B8C:loc_13C39↓r
                                        ; sub_13B8C+F6↓w
                db    0
                db    0
word_11CB4      dw 2BCh                 ; DATA XREF: seg127c:0869↓r
                                        ; seg127c:086F↓r
byte_11CB6      db 0                    ; DATA XREF: seg127c:087E↓w
                                        ; seg127c:088B↓w ...
byte_11CB7      db 0                    ; DATA XREF: sub_13B8C+12↓r
                                        ; sub_13B8C+9B↓w
word_11CB8      dw 4D2h                 ; DATA XREF: sub_12B08+3↓r
                                        ; sub_12B08+D↓w ...
                db  48h ; H
                db  92h
                db  10h
                db    8
                db    4
                db    2
                db    1
                db    0
                db    0
                db    2
                db  1Eh
                db    2
                db  3Fh ; ?
                db    2
                db  61h ; a
                db    2
                db  85h
                db    2
                db 0ABh
                db    2
                db 0D4h
                db    2
                db 0FFh
                db    2
                db  2Dh ; -
                db    3
                db  5Dh ; ]
                db    3
                db  90h
                db    3
                db 0C7h
                db    3
byte_11CDA      db 1                    ; DATA XREF: sub_13544+10↓r
byte_11CDB      db 1                    ; DATA XREF: sub_13544+23↓r
byte_11CDC      db 1                    ; DATA XREF: sub_1358E↓r
                db    0
                db    0
                db    3
                db    1
                db    4
                db    2
                db    5
                db    6
                db    9
                db    7
                db  0Ah
                db    8
                db  0Bh
                db  0Ch
                db  0Fh
                db  10h
                db  63h ; c
                db  0Eh
                db  63h ; c
                db  11h
                db  63h ; c
                db  0Dh
                db  63h ; c
                db    0
                db    1
                db    2
                db    3
                db    4
                db    5
                db    8
                db    9
                db  0Ah
                db  0Bh
                db  0Ch
                db  0Dh
                db  10h
                db  11h
                db  12h
                db  13h
                db  14h
                db  15h
                db  0Ah
                db  0Bh
                db  0Fh
                db  0Fh
                db    1
                db    0
                db  3Bh ; ;
                db    0
                db    0
                db    4
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ah
                db  0Bh
                db    8
                db  0Ah
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    1
                db    1
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Fh
                db    0
                db    0
                db  0Ch
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db  0Eh
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ah
                db    0
                db    0
                db  0Ch
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db  0Fh
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    0
                db    5
                db    0
                db    0
                db    1
                db  50h ; P
                db    0
                db 0FFh
                db    3
                db  80h
                db    2
                db    0
                db    0
                db  0Dh
                db    4
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    6
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    0
                db    5
                db    0
                db    0
                db    1
                db  60h ; `
                db    0
                db 0FFh
                db    3
                db    0
                db    4
                db 0F8h
                db 0FFh
                db  0Dh
                db    3
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    6
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ah
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Ah ; :
                db    0
                db    0
                db    3
                db    7
                db    0
                db    0
                db    1
                db    4
                db    0
                db 0FFh
                db    7
                db    0
                db    0
                db    0
                db    0
                db  0Fh
                db    6
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    2
                db    0
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ch
                db    9
                db    0
                db    0
                db    1
                db    0
                db  3Ch ; <
                db    0
                db    0
                db    0
                db    7
                db    0
                db    0
                db    1
                db  26h ; &
                db    0
                db    0
                db    0
                db  55h ; U
                db  55h ; U
                db  70h ; p
                db 0FFh
                db    5
                db    5
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    0
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    0
                db    0
                db  0Fh
                db    1
                db    0
                db  26h ; &
                db    0
                db    3
                db  0Eh
                db    4
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ch
                db    0
                db    0
                db  0Fh
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    2
                db  0Fh
                db    4
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    5
                db  0Fh
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    1
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    5
                db  0Fh
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    1
                db    1
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Fh
                db    0
                db    0
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    2
                db    0
                db    0
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ah
                db    0
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  2Eh ; .
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    0
                db    0
                db  0Fh
                db    1
                db    0
                db  36h ; 6
                db    0
                db    2
                db  0Eh
                db    6
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    0
                db    0
                db  0Fh
                db    1
                db    0
                db  36h ; 6
                db    0
                db    2
                db  0Eh
                db    6
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    0
                db    5
                db    0
                db    0
                db    1
                db  80h
                db    0
                db  55h ; U
                db    5
                db    0
                db    1
                db 0F0h
                db  3Fh ; ?
                db    5
                db    4
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    5
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  38h ; 8
                db    0
                db    0
                db    0
                db    5
                db    0
                db    0
                db    1
                db  90h
                db    0
                db  34h ; 4
                db  12h
                db  33h ; 3
                db  33h ; 3
                db 0FEh
                db  3Fh ; ?
                db    5
                db    4
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  38h ; 8
                db    0
                db    0
                db    5
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Bh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    0
                db    5
                db    0
                db    0
                db    1
                db  70h ; p
                db    0
                db 0FFh
                db    7
                db    0
                db    1
                db  0Bh
                db  80h
                db    4
                db    4
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    5
                db    0
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    7
                db    5
                db  0Dh
                db    1
                db    1
                db    0
                db  1Fh
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    7
                db    0
                db    6
                db    6
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    2
                db    1
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    7
                db    1
                db    5
                db  0Bh
                db    1
                db    0
                db  2Fh ; /
                db    0
                db    0
                db    1
                db    6
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    9
                db    1
                db    6
                db  0Ah
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    1
                db    1
                db    2
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ch
                db    9
                db    7
                db    6
                db    0
                db    0
                db  3Bh ; ;
                db    0
                db    0
                db    3
                db    6
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ah
                db    3
                db  0Fh
                db  0Ah
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    1
                db    6
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    8
                db    3
                db    4
                db    3
                db    1
                db    0
                db  28h ; (
                db    0
                db    0
                db    2
                db    0
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    5
                db    1
                db    3
                db    5
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    2
                db    1
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    8
                db    3
                db    4
                db    3
                db    1
                db    0
                db  29h ; )
                db    0
                db    0
                db    2
                db    2
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    8
                db    4
                db  0Fh
                db    5
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    3
                db    8
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    8
                db    3
                db    4
                db    3
                db    1
                db    0
                db  21h ; !
                db    0
                db    0
                db    2
                db    2
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    8
                db    1
                db    3
                db    5
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    1
                db    4
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    7
                db    5
                db    0
                db  0Fh
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    1
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Bh
                db    2
                db    0
                db  0Fh
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    2
                db    2
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    0
                db    5
                db    0
                db    0
                db    1
                db  50h ; P
                db    0
                db 0FFh
                db    5
                db  80h
                db    2
                db    0
                db    0
                db  0Dh
                db    4
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    5
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    1
                db    5
                db    0
                db    0
                db    1
                db  60h ; `
                db    0
                db 0FFh
                db    7
                db    0
                db    2
                db    1
                db    0
                db  0Dh
                db    3
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    8
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    2
                db    5
                db    0
                db    0
                db    1
                db  50h ; P
                db    0
                db 0F0h
                db    3
                db    0
                db    3
                db    1
                db    0
                db  0Dh
                db    4
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    5
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    0
                db    5
                db    0
                db    0
                db    1
                db  60h ; `
                db    0
                db 0F6h
                db    7
                db  80h
                db    3
                db    0
                db    0
                db  0Dh
                db    4
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    7
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    1
                db    5
                db    0
                db    0
                db    1
                db  50h ; P
                db    0
                db 0FFh
                db    3
                db  80h
                db    3
                db 0FFh
                db 0FFh
                db  0Dh
                db    4
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    4
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Dh
                db    9
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    0
                db    5
                db    0
                db    0
                db    1
                db  60h ; `
                db    0
                db 0C7h
                db    5
                db  80h
                db    4
                db 0F6h
                db 0FFh
                db  0Dh
                db    3
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  3Fh ; ?
                db    0
                db    0
                db    7
                db    5
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  0Ch
                db    0
                db    0
                db    5
                db    1
                db    0
                db  2Ah ; *
                db    0
                db    3
                db  0Eh
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    8
                db    0
                db    0
                db    7
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    2
                db  0Fh
                db    7
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    9
                db    0
                db  0Fh
                db    7
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    2
                db    0
                db    0
                db    0
                db    1
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    8
                db    0
                db  0Fh
                db  0Ah
                db    1
                db    0
                db  3Fh ; ?
                db    0
                db    1
                db    4
                db    0
                db    0
                db    0
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
unk_121D6       db    0                 ; DATA XREF: seg127c:054C↓o
                db    3
                db 0FCh
                db    2
                db 0F9h
                db  3Eh ; >
                db    9
                db  51h ; Q
                db    0
                db    0
                db 0FCh
                db  14h
                db 0F9h
                db  3Eh ; >
                db    9
                db  51h ; Q
                db    0
                db    0
                db 0FCh
                db  16h
                db 0F9h
                db  3Eh ; >
                db    9
                db  51h ; Q
                db    0
                db    0
                db 0FCh
                db  18h
                db 0F9h
                db  3Eh ; >
                db    9
                db  51h ; Q
                db    0
                db    0
                db 0FCh
                db    3
                db 0F9h
                db  3Fh ; ?
                db    9
                db  78h ; x
                db    0
                db    0
                db 0FCh
                db  15h
                db 0F9h
                db  3Dh ; =
                db    9
                db  78h ; x
                db    0
                db    0
                db 0FCh
                db  17h
                db 0F9h
                db  3Fh ; ?
                db    9
                db  78h ; x
                db    0
                db    0
                db 0FCh
                db  19h
                db 0F9h
                db  3Ch ; <
                db    9
                db  78h ; x
                db    0
                db    0
unk_12218       db 0FCh                 ; DATA XREF: sub_12CB1+7↓o
                db    4
                db 0F9h
                db  39h ; 9
                db 0FEh
                db    9
                db    7
                db 0FFh
                db    5
                db    0
                db    0
                db    0
unk_12224       db 0FCh                 ; DATA XREF: sub_12CBF+7↓o
                db    5
                db 0F9h
                db  34h ; 4
                db  29h ; )
                db  3Ch ; <
                db    0
                db    0
                db    0
                db    0
unk_1222E       db 0FCh                 ; DATA XREF: seg127c:0522↓o
                db    8
                db 0F9h
                db  2Ch ; ,
                db 0FBh
                db    8
                db 0FAh
                db  11h
                db  44h ; D
                db  14h
                db 0FAh
                db    0
                db    0
                db    0
unk_1223C       db 0FCh                 ; DATA XREF: seg127c:0530↓o
                db    8
                db 0F9h
                db  28h ; (
                db 0FBh
                db  16h
                db  3Ah ; :
                db  1Eh
                db    0
                db    0
unk_12246       db 0FCh                 ; DATA XREF: seg127c:053E↓o
                db    8
                db 0F9h
                db  23h ; #
                db 0FBh
                db  12h
                db  27h ; '
                db  1Eh
                db    0
                db    0
unk_12250       db 0FCh                 ; DATA XREF: seg127c:055A↓o
                db  0Ch
                db 0F9h
                db  35h ; 5
                db    9
                db  7Fh ; 
                db    0
                db    0
unk_12258       db 0FCh                 ; DATA XREF: seg127c:0568↓o
                db  0Ah
                db 0F9h
                db  3Dh ; =
                db    9
                db  7Fh ; 
                db    0
                db    0
unk_12260       db 0FCh                 ; DATA XREF: seg127c:05A8↓o
                db  0Bh
                db 0F9h
                db  2Bh ; +
                db    9
                db  91h
                db    0
                db    0
unk_12268       db 0FCh                 ; DATA XREF: seg127c:0576↓o
                db    0
                db 0F9h
                db  36h ; 6
                db  4Fh ; O
                db    8
                db  4Ah ; J
                db    8
                db    0
                db    0
unk_12272       db    0                 ; DATA XREF: seg127c:0584↓o
                db    0
unk_12274       db 0FCh                 ; DATA XREF: seg127c:0599↓o
                db  13h
                db 0F9h
                db  35h ; 5
                db 0FBh
                db    7
                db  30h ; 0
                db  0Eh
                db    0
                db    0
unk_1227E       db 0FCh                 ; DATA XREF: seg127c:0514↓o
                db    7
                db 0F9h
                db  34h ; 4
                db  48h ; H
                db    8
                db  48h ; H
                db  0Fh
                db    0
                db    0
unk_12288       db 0FCh                 ; DATA XREF: sub_12D6F+7↓o
                db    6
                db 0F9h
                db    0
                db 0F8h
                db  14h
                db    1
                db 0FAh
                db    3
                db    1
                db  96h
                db 0FAh
                db    0
                db 0F8h
                db    0
                db    0
                db    0
                db    0
unk_1229A       db 0FCh                 ; DATA XREF: seg127c:05C4↓o
                db    6
                db 0F9h
                db  12h
                db 0F8h
                db  14h
                db 0FFh
                db 0FAh
                db 0FDh
                db  0Bh
                db 0C8h
                db 0FAh
                db    0
                db 0F8h
                db    0
                db    0
                db    0
                db    0
byte_122AC      db 0FCh                 ; DATA XREF: seg127c:05D2↓o
                db 1Bh
                db 0F9h
                db 2Dh
                db    4
                db  3Ch ; <
                db    0
                db    0
byte_122B4      db 0FCh                 ; DATA XREF: seg127c:05DD↓o
                db 1Ah
                db 0F9h
                db 1Eh
                db 21h
                db  3Ch ; <
                db    0
                db    0
unk_122BC       db 0FCh                 ; DATA XREF: sub_12BA8+7↓o
                db  0Eh
                db 0F9h
                db  26h ; &
                db 0FBh
                db    5
                db  45h ; E
                db  0Bh
                db  48h ; H
                db  0Bh
                db  4Ah ; J
                db 0A5h
                db  39h ; 9
                db  0Bh
                db  3Ch ; <
                db  0Bh
                db 0FCh
                db  0Dh
                db 0F9h
                db  34h ; 4
                db 0FEh
                db  21h ; !
                db  16h
                db  24h ; $
                db  0Bh
                db  26h ; &
                db  63h ; c
                db  29h ; )
                db  0Bh
                db  28h ; (
                db  0Bh
                db  24h ; $
                db  0Bh
                db  23h ; #
                db  37h ; 7
                db  23h ; #
                db  0Bh
                db  25h ; %
                db  0Bh
                db  26h ; &
                db  0Bh
                db  24h ; $
                db  2Ch ; ,
                db  24h ; $
                db  0Bh
                db  29h ; )
                db  0Bh
                db  28h ; (
                db  0Bh
                db  24h ; $
                db  0Bh
                db  26h ; &
                db  42h ; B
                db  1Dh
                db  0Bh
                db  1Fh
                db  0Bh
                db  21h ; !
                db  37h ; 7
                db  29h ; )
                db    6
                db  28h ; (
                db    5
                db  24h ; $
                db  16h
                db  26h ; &
                db  37h ; 7
                db  26h ; &
                db  0Bh
                db  28h ; (
                db  0Bh
                db  29h ; )
                db  0Bh
                db  28h ; (
                db  2Ch ; ,
                db  28h ; (
                db  0Bh
                db  28h ; (
                db  0Bh
                db  29h ; )
                db  0Bh
                db  2Bh ; +
                db  0Bh
                db  2Dh ; -
                db  0Bh
                db 0FCh
                db  12h
                db 0F9h
                db  2Ch ; ,
                db 0FFh
                db    1
                db    0
                db  0Bh
                db 0FCh
                db  0Eh
                db  29h ; )
                db  0Bh
                db  2Bh ; +
                db  0Bh
                db  32h ; 2
                db  42h ; B
                db  29h ; )
                db  0Bh
                db  2Bh ; +
                db  0Bh
                db  30h ; 0
                db  42h ; B
                db  29h ; )
                db  0Bh
                db  2Bh ; +
                db  0Bh
                db  32h ; 2
                db  42h ; B
                db  29h ; )
                db  0Bh
                db  2Bh ; +
                db  0Bh
                db  30h ; 0
                db  16h
                db    0
                db    0
                db    0
unk_12336       db 0FCh                 ; DATA XREF: sub_12BA8+12↓o
                db  0Eh
                db 0F9h
                db  26h ; &
                db 0FBh
                db    5
                db  2Dh ; -
                db  0Bh
                db  30h ; 0
                db  0Bh
                db  32h ; 2
                db 0A5h
                db  2Dh ; -
                db  0Bh
                db  30h ; 0
                db  0Bh
                db 0F9h
                db  1Dh
                db 0FEh
                db    0
                db  16h
                db  36h ; 6
                db  0Bh
                db    0
                db  16h
                db  36h ; 6
                db  0Bh
                db    0
                db  16h
                db  34h ; 4
                db  0Bh
                db    0
                db  16h
                db  37h ; 7
                db  37h ; 7
                db    0
                db  16h
                db  3Bh ; ;
                db  0Bh
                db    0
                db  16h
                db  3Bh ; ;
                db  0Bh
                db    0
                db  16h
                db  3Ch ; <
                db  0Bh
                db    0
                db  16h
                db  3Ch ; <
                db  37h ; 7
                db 0FCh
                db  0Dh
                db 0F9h
                db  33h ; 3
                db  2Dh ; -
                db  16h
                db  30h ; 0
                db  0Bh
                db  32h ; 2
                db  63h ; c
                db  26h ; &
                db    6
                db  24h ; $
                db    5
                db  24h ; $
                db  0Bh
                db  23h ; #
                db  42h ; B
                db  23h ; #
                db  0Bh
                db  25h ; %
                db  0Bh
                db  26h ; &
                db  0Bh
                db  24h ; $
                db  2Ch ; ,
                db  24h ; $
                db  0Bh
                db  24h ; $
                db  0Bh
                db  26h ; &
                db  0Bh
                db  28h ; (
                db  0Bh
                db  28h ; (
                db  0Bh
                db 0FCh
                db  0Eh
                db 0F9h
                db  24h ; $
                db 0FFh
                db    1
                db  2Bh ; +
                db  37h ; 7
                db  2Eh ; .
                db  0Bh
                db  2Dh ; -
                db  0Bh
                db  29h ; )
                db  0Bh
                db  28h ; (
                db  58h ; X
                db  2Bh ; +
                db  37h ; 7
                db  2Eh ; .
                db  0Bh
                db  2Dh ; -
                db  0Bh
                db  29h ; )
                db  0Bh
                db  28h ; (
                db  0Bh
                db  29h ; )
                db  0Bh
                db  2Bh ; +
                db  0Bh
                db  24h ; $
                db  16h
                db    0
                db    0
                db    0
unk_123B0       db 0FCh                 ; DATA XREF: sub_12BA8+1D↓o
                db  0Eh
                db 0F9h
                db  27h ; '
                db 0FBh
                db    6
                db  39h ; 9
                db  0Bh
                db  3Ch ; <
                db  0Bh
                db  3Eh ; >
                db  0Bh
                db 0F9h
                db  2Dh ; -
                db  1Ah
                db  0Bh
                db    0
                db  0Bh
                db 0F9h
                db  2Bh ; +
                db 0FBh
                db 0FFh
                db  32h ; 2
                db  2Ch ; ,
                db  2Bh ; +
                db  2Ch ; ,
                db  2Dh ; -
                db  2Ch ; ,
                db 0FBh
                db    6
                db  2Dh ; -
                db  0Bh
                db  24h ; $
                db  0Bh
                db 0F9h
                db  1Ch
                db 0FEh
                db    0
                db  16h
                db  3Eh ; >
                db  0Bh
                db    0
                db  16h
                db  3Eh ; >
                db  0Bh
                db    0
                db  16h
                db  3Ch ; <
                db  0Bh
                db    0
                db  16h
                db  40h ; @
                db  37h ; 7
                db    0
                db  16h
                db  40h ; @
                db  0Bh
                db    0
                db  16h
                db  40h ; @
                db  0Bh
                db    0
                db  16h
                db  41h ; A
                db  0Bh
                db    0
                db  16h
                db  3Eh ; >
                db  37h ; 7
                db 0FFh
                db    3
                db  24h ; $
                db  58h ; X
                db 0FFh
                db    2
                db  24h ; $
                db  37h ; 7
                db    0
                db    0
                db    0
unk_12400       db 0FCh                 ; DATA XREF: sub_12BA8+28↓o
                db  10h
                db 0F9h
                db  27h ; '
                db 0FBh
                db    6
                db  21h ; !
                db  0Bh
                db  24h ; $
                db  0Bh
                db  26h ; &
                db  0Bh
                db 0F9h
                db  2Dh ; -
                db  0Eh
                db  0Bh
                db    0
                db  0Bh
                db 0F9h
                db  2Bh ; +
                db  2Bh ; +
                db  2Ch ; ,
                db  29h ; )
                db  2Ch ; ,
                db  28h ; (
                db  2Ch ; ,
                db  21h ; !
                db  0Bh
                db  24h ; $
                db  0Bh
                db 0F9h
                db  1Ch
                db 0FBh
                db  10h
                db 0FEh
                db  21h ; !
                db  4Dh ; M
                db  1Fh
                db  63h ; c
                db  21h ; !
                db  4Dh ; M
                db  22h ; "
                db  63h ; c
                db 0FFh
                db    3
                db  1Dh
                db  21h ; !
                db  1Dh
                db  37h ; 7
                db  1Fh
                db  21h ; !
                db  1Fh
                db  37h ; 7
                db  1Dh
                db  21h ; !
                db  1Dh
                db  37h ; 7
                db  1Fh
                db  21h ; !
                db  1Fh
                db  16h
                db    0
                db    0
                db    0
unk_12440       db 0FCh                 ; DATA XREF: sub_12BA8+33↓o
                db  10h
                db 0F9h
                db  26h ; &
                db 0FBh
                db    5
                db  21h ; !
                db  0Bh
                db  24h ; $
                db  0Bh
                db  26h ; &
                db  0Bh
                db 0F9h
                db  2Dh ; -
                db  26h ; &
                db  0Bh
                db    0
                db  0Bh
                db 0F9h
                db  2Bh ; +
                db  24h ; $
                db  2Ch ; ,
                db  26h ; &
                db  2Ch ; ,
                db  26h ; &
                db  2Ch ; ,
                db  21h ; !
                db  0Bh
                db  24h ; $
                db  0Bh
                db 0FCh
                db  11h
                db 0FEh
                db 0F9h
                db  28h ; (
                db  0Eh
                db  16h
                db    7
                db  0Bh
                db    9
                db  0Bh
                db  0Ch
                db  16h
                db  0Eh
                db  0Bh
                db    7
                db  16h
                db 0F9h
                db  2Ah ; *
                db    9
                db  0Bh
                db  0Ch
                db  0Bh
                db  0Eh
                db  0Bh
                db  11h
                db  0Bh
                db  10h
                db  0Bh
                db  0Ch
                db  0Bh
                db    9
                db  0Bh
                db 0FFh
                db    7
                db  0Eh
                db  21h ; !
                db  0Eh
                db  37h ; 7
                db  10h
                db  21h ; !
                db  10h
                db  37h ; 7
                db  0Eh
                db  21h ; !
                db  0Eh
                db  37h ; 7
                db  10h
                db  21h ; !
                db  10h
                db  16h
                db    0
                db    0
                db    0
unk_12494       db 0FCh                 ; DATA XREF: sub_12BA8+3E↓o
                db  10h
                db 0F9h
                db  29h ; )
                db 0FBh
                db    6
                db  15h
                db  0Bh
                db  18h
                db  0Bh
                db  1Ah
                db  0Bh
                db 0F9h
                db  2Dh ; -
                db  0Eh
                db  0Bh
                db    0
                db  0Bh
                db 0F9h
                db  2Bh ; +
                db  22h ; "
                db  2Ch ; ,
                db  24h ; $
                db  2Ch ; ,
                db  1Fh
                db  2Ch ; ,
                db  21h ; !
                db  0Bh
                db  18h
                db  0Bh
                db 0F9h
                db  22h ; "
                db 0FCh
                db  0Fh
                db 0FBh
                db    3
                db 0FEh
                db  0Eh
                db  0Bh
                db 0FFh
                db    6
                db  0Ch
                db  0Bh
                db 0FFh
                db    8
                db  15h
                db  0Bh
                db 0FFh
                db    6
                db  16h
                db  0Bh
                db 0FFh
                db    8
                db  0Eh
                db  0Bh
                db 0FFh
                db    6
                db  0Ch
                db  0Bh
                db 0FFh
                db    8
                db  15h
                db  0Bh
                db 0FFh
                db    6
                db  16h
                db  0Bh
                db 0FFh
                db    8
                db  0Eh
                db  0Bh
                db 0FFh
                db    3
                db 0F9h
                db  26h ; &
                db  15h
                db  0Bh
                db  18h
                db  0Bh
                db  1Ah
                db  0Bh
                db 0F9h
                db  23h ; #
                db 0FEh
                db  0Ch
                db  0Bh
                db 0FFh
                db    8
                db  15h
                db  0Bh
                db 0FFh
                db    6
                db  16h
                db  0Bh
                db 0FFh
                db    8
                db  0Eh
                db  0Bh
                db 0FFh
                db    6
                db  0Ch
                db  0Bh
                db 0FFh
                db    8
                db  15h
                db  0Bh
                db 0FFh
                db    6
                db  16h
                db  0Bh
                db 0FFh
                db    8
                db  16h
                db  0Bh
                db 0FFh
                db    7
                db  18h
                db  0Bh
                db 0FFh
                db    3
                db 0F9h
                db  28h ; (
                db    0
                db  0Bh
                db  15h
                db  0Bh
                db  18h
                db  0Bh
                db  1Ah
                db  0Bh
                db 0F9h
                db  25h ; %
                db 0FEh
                db  16h
                db  0Bh
                db 0FFh
                db    7
                db  18h
                db  0Bh
                db 0FFh
                db    3
                db    0
                db  0Bh
                db    0
                db    0
                db    0
unk_12526       db 0FCh                 ; DATA XREF: sub_12BEC+7↓o
                db  0Eh
                db 0F9h
                db  26h ; &
                db 0FBh
                db    5
                db  45h ; E
                db  0Bh
                db  48h ; H
                db  0Bh
                db  4Ah ; J
                db  2Ch ; ,
                db    0
                db    0
unk_12534       db 0FCh                 ; DATA XREF: sub_12BEC+12↓o
                db  0Eh
                db 0F9h
                db  26h ; &
                db 0FBh
                db    5
                db  2Dh ; -
                db  0Bh
                db  30h ; 0
                db  0Bh
                db  32h ; 2
                db  2Ch ; ,
                db    0
                db    0
unk_12542       db 0FCh                 ; DATA XREF: sub_12BEC+1D↓o
                db  0Eh
                db 0F9h
                db  27h ; '
                db 0FBh
                db    6
                db  39h ; 9
                db  0Bh
                db  3Ch ; <
                db  0Bh
                db  3Eh ; >
                db  2Ch ; ,
                db    0
                db    0
unk_12550       db 0FCh                 ; DATA XREF: sub_12BEC+28↓o
                db  10h
                db 0F9h
                db  27h ; '
                db 0FBh
                db    6
                db  21h ; !
                db  0Bh
                db  24h ; $
                db  0Bh
                db  26h ; &
                db  2Ch ; ,
                db    0
                db    0
unk_1255E       db 0FCh                 ; DATA XREF: sub_12BEC+33↓o
                db  10h
                db 0F9h
                db  26h ; &
                db 0FBh
                db    5
                db  21h ; !
                db  0Bh
                db  24h ; $
                db  0Bh
                db  26h ; &
                db  2Ch ; ,
                db    0
                db    0
unk_1256C       db 0FCh                 ; DATA XREF: sub_12BEC+3E↓o
                db  10h
                db 0F9h
                db  29h ; )
                db 0FBh
                db    6
                db  15h
                db  0Bh
                db  18h
                db  0Bh
                db  1Ah
                db  2Ch ; ,
                db    0
                db    0
                db  43h ; C
                db  6Fh ; o
                db  70h ; p
                db  79h ; y
                db  72h ; r
                db  69h ; i
                db  67h ; g
                db  68h ; h
                db  74h ; t
                db  20h
                db  28h ; (
                db  43h ; C
                db  29h ; )
                db  20h
                db  31h ; 1
                db  39h ; 9
                db  38h ; 8
                db  39h ; 9
                db  20h
                db  62h ; b
                db  79h ; y
                db  20h
                db  4Dh ; M
                db  69h ; i
                db  63h ; c
                db  72h ; r
                db  6Fh ; o
                db  50h ; P
                db  72h ; r
                db  6Fh ; o
                db  73h ; s
                db  65h ; e
                db  20h
                db  53h ; S
                db  6Fh ; o
                db  66h ; f
                db  74h ; t
                db  77h ; w
                db  61h ; a
                db  72h ; r
                db  65h ; e
                db  2Ch ; ,
                db  20h
                db  41h ; A
                db  6Ch ; l
                db  6Ch ; l
                db  20h
                db  52h ; R
                db  69h ; i
                db  67h ; g
                db  68h ; h
                db  74h ; t
                db  73h ; s
                db  20h
                db  52h ; R
                db  65h ; e
                db  73h ; s
                db  65h ; e
                db  72h ; r
                db  76h ; v
                db  65h ; e
                db  64h ; d
                db  2Eh ; .
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
word_125C2      dw 0                    ; DATA XREF: sub_12A70+48↓r
                                        ; sub_12A70+4F↓w ...
word_125C4      dw 0                    ; DATA XREF: sub_12A70+69↓r
                                        ; sub_12A70+70↓w ...
word_125C6      dw 0                    ; DATA XREF: sub_12A70+4B↓r
                                        ; sub_13398+8B↓w
word_125C8      dw 0                    ; DATA XREF: sub_12A70+6C↓r
                                        ; sub_13398+F1↓w
byte_125CA      db 0FFh                 ; DATA XREF: sub_12B70↓r
                                        ; sub_12B70+5↓w ...
                db    0
byte_125CC      db 0                    ; DATA XREF: sub_12BA8+3↓o
                                        ; sub_12BEC+3↓o ...
                db    0
                db    0
                db    0
                db  0Eh
                db  26h ; &
                db    5
                db    0
                db    3
                db 0FFh
                db 0F6h
                db  0Ah
                db  0Eh
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
byte_125E0      db 0                    ; DATA XREF: sub_12BA8+E↓o
                                        ; sub_12BEC+E↓o ...
                db    0
                db    0
                db    0
                db  0Eh
                db  26h ; &
                db    5
                db    0
                db    3
                db 0FFh
                db    4
                db  0Bh
                db  0Eh
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
byte_125F4      db 0                    ; DATA XREF: sub_12BA8+19↓o
                                        ; sub_12BEC+19↓o ...
                db    0
                db    0
                db    0
                db  0Eh
                db  27h ; '
                db    6
                db    0
                db    3
                db 0FFh
                db  12h
                db  0Bh
                db  0Eh
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
unk_12608       db    0                 ; DATA XREF: sub_12BA8+24↓o
                                        ; sub_12BEC+24↓o ...
                db    0
                db    0
                db    0
                db  10h
                db  27h ; '
                db    6
                db    0
                db    3
                db 0FFh
                db  20h
                db  0Bh
                db  0Eh
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
byte_1261C      db 0                    ; DATA XREF: sub_12BA8+2F↓o
                                        ; sub_12BEC+2F↓o ...
                db    0
                db    0
                db    0
                db  10h
                db  26h ; &
                db    5
                db    0
                db    3
                db 0FFh
                db  2Eh ; .
                db  0Bh
                db  0Eh
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
unk_12630       db    0                 ; DATA XREF: sub_12BA8+3A↓o
                                        ; sub_12BEC+3A↓o
                db    0
                db    0
                db    0
                db  10h
                db  29h ; )
                db    6
                db    0
                db    3
                db 0FFh
                db  3Ch ; <
                db  0Bh
                db  0Eh
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
byte_12658      db 0                    ; DATA XREF: sub_12A70+3B↓r
                                        ; sub_12A70+41↓r ...
byte_12659      db 0                    ; DATA XREF: sub_12A70+38↓r
                                        ; sub_12A70:loc_12AD2↓r ...
word_1265A      dw 0                    ; DATA XREF: sub_12B08+1B↓r
                                        ; sub_13398+5D↓w
word_1265C      dw 0                    ; DATA XREF: sub_12B08+34↓r
                                        ; sub_13398+C3↓w
byte_1265E      db 6                    ; DATA XREF: sub_1389E+33↓r
                                        ; sub_1389E+11F↓r ...
byte_1265F      db 0                    ; DATA XREF: sub_12A70+58↓r
                                        ; sub_12B08+23↓r ...
byte_12660      db 0                    ; DATA XREF: sub_12A70+79↓r
                                        ; sub_12B08+3C↓r ...
                db    0
                db    0
                db  20h
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  40h ; @
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  21h ; !
                db  21h ; !
                db  21h ; !
                db  21h ; !
                db  21h ; !
                db  21h ; !
                db    0
                db    0
                db  22h ; "
                db  22h ; "
                db  22h ; "
                db  22h ; "
                db  22h ; "
                db  22h ; "
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  10h
                db  10h
                db  10h
                db  19h
                db  19h
                db  18h
                db    0
                db    0
                db  17h
                db  17h
                db  17h
                db  18h
                db  19h
                db  16h
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  71h ; q
                db  71h ; q
                db  71h ; q
                db  91h
                db  91h
                db  91h
                db    0
                db    0
                db  83h
                db  83h
                db  83h
                db  51h ; Q
                db  51h ; Q
                db  51h ; Q
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  5Bh ; [
                db  5Bh ; [
                db  5Bh ; [
                db  6Ah ; j
                db  0Fh
                db  0Fh
                db    0
                db    0
                db  43h ; C
                db  43h ; C
                db  43h ; C
                db  35h ; 5
                db  35h ; 5
                db  35h ; 5
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  3Fh ; ?
                db  3Fh ; ?
                db  3Fh ; ?
                db  3Fh ; ?
                db  3Fh ; ?
                db  3Fh ; ?
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db  1Ah
                db    0
                db    0
                db  0Eh
                db  0Eh
                db  0Ah
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
byte_1271F      db 0E0h                 ; DATA XREF: sub_1331C:loc_13360↓r
                                        ; sub_13398:loc_1350C↓r ...
                db    0
                db    0
                db    4
                db    4
                db    4
                db    2
                db    2
                db    2
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    1
                db    1
                db    1
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
word_127BA      dw 5                    ; DATA XREF: sub_135F0+7↓r
                                        ; sub_13788+16↓w
word_127BC      dw 0Dh                  ; DATA XREF: sub_135AA+7↓r
                                        ; sub_13638+7↓r ...
word_127BE      dw 5ACh                 ; DATA XREF: sub_135AA+10↓r
                                        ; sub_135AA+22↓r ...
seg11a3         ends

; ===========================================================================

; Segment type: Pure code
seg127c         segment para public 'CODE' use16
                assume cs:seg127c
                assume cs:seg127c, ds:seg11a3, ss:seg11a3
; Missing labels from IDA listing, expressed as offsets in seg127c
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db    0
                db 0
seg_127C9       dw 2CD8h                ; DATA XREF: sub_12A70+F↓w
                                        ; sub_12A70:loc_12A98↓r
word_127CB      dw 82B4h                ; DATA XREF: sub_12A70+14↓w
                                        ; sub_12A70+2F↓r
                db 3Fh
                db 2Dh
                db  26h ; &
                db  23h ; #
                db 20h
                db  1Dh
                db 1Bh
                db  19h
                db 18h
                db  16h
                db  15h
                db  14h
                db 13h
                db  12h
                db 11h
                db  10h
                db 10h
                db  0Fh
                db 0Eh
                db 0Eh
                db 0Dh
                db  0Dh
                db  0Ch
                db 0Ch
                db  0Bh
                db 0Bh
                db  0Ah
                db 0Ah
                db    9
                db 9
                db    9
                db 8
                db    8
                db 7
                db 7
                db 7
                db 6
                db 6
                db 6
                db 6
                db 5
                db    5
                db    5
                db 4
                db    4
                db 4
                db    4
                db 3
                db    3
                db 3
                db    3
                db 2
                db    2
                db 2
                db    2
                db 2
                db    1
                db 1
                db    1
                db 1
                db    0
                db 3 dup(0)
word_1280D      dw 62h                  ; DATA XREF: sub_12881+4D↓w
                                        ; sub_12A45+3↓r
word_1280F      dw 0Dh                  ; DATA XREF: sub_12881+5A↓w
                                        ; sub_12A45+10↓r

; =============== S U B R O U T I N E =======================================


sub_12811       proc near               ; CODE XREF: sub_12C31↓p
                cli
                mov     dx, 3DAh

loc_12815:                              ; CODE XREF: sub_12811+7↓j
                in      al, dx          ; Video status bits:
                                        ; 0: retrace.  1=display is in vert or horiz retrace.
                                        ; 1: 1=light pen is triggered; 0=armed
                                        ; 2: 1=light pen switch is open; 0=closed
                                        ; 3: 1=vertical sync pulse is occurring.
                test    al, 8
                jz      short loc_12815

loc_1281A:                              ; CODE XREF: sub_12811+C↓j
                in      al, dx          ; Video status bits:
                                        ; 0: retrace.  1=display is in vert or horiz retrace.
                                        ; 1: 1=light pen is triggered; 0=armed
                                        ; 2: 1=light pen switch is open; 0=closed
                                        ; 3: 1=vertical sync pulse is occurring.
                test    al, 8
                jnz     short loc_1281A
                mov     bl, 1
                xor     cx, cx

loc_12823:                              ; CODE XREF: sub_12811+1B↓j
                                        ; sub_12811+20↓j
                in      al, dx          ; Video status bits:
                                        ; 0: retrace.  1=display is in vert or horiz retrace.
                                        ; 1: 1=light pen is triggered; 0=armed
                                        ; 2: 1=light pen switch is open; 0=closed
                                        ; 3: 1=vertical sync pulse is occurring.
                test    al, 8
                jnz     short loc_12833
                and     al, 1
                cmp     al, bl
                jz      short loc_12823
                xor     bl, 1
                loop    loc_12823

loc_12833:                              ; CODE XREF: sub_12811+15↑j
                sti
                neg     cx
                xor     al, al
                cmp     cx, 258h
                jb      short loc_12840
                mov     al, 0FFh

loc_12840:                              ; CODE XREF: sub_12811+2B↑j
                mov     byte ptr unk_11C6A, al
                retn
sub_12811       endp


; =============== S U B R O U T I N E =======================================


sub_12844       proc near               ; CODE XREF: sub_128E5+C↓p
                push    es
                push    di
                mov     ax, 0
                mov     es, ax
                mov     di, 440h
                mov     byte ptr es:[di], 1
                dec     di

loc_12853:                              ; CODE XREF: sub_12844+14↓j
                mov     al, es:[di]
                and     al, 0Fh
                jnz     short loc_12853
                pop     di
                pop     es
                retn
sub_12844       endp


; =============== S U B R O U T I N E =======================================


sub_1285D       proc near               ; CODE XREF: sub_12881:loc_128A5↓p
                push    cx
                cli
                mov     al, 80h
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                in      al, 42h         ; Timer 8253-5 (AT: 8254.2).
                mov     bl, al
                in      al, 42h         ; Timer 8253-5 (AT: 8254.2).
                mov     bh, al
                mov     cx, 100h

loc_1286E:                              ; CODE XREF: sub_1285D:loc_1286E↓j
                loop    loc_1286E
                mov     al, 80h
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                in      al, 42h         ; Timer 8253-5 (AT: 8254.2).
                mov     dl, al
                in      al, 42h         ; Timer 8253-5 (AT: 8254.2).
                mov     dh, al
                sti
                sub     bx, dx
                pop     cx
                retn
sub_1285D       endp


; =============== S U B R O U T I N E =======================================


sub_12881       proc near               ; CODE XREF: sub_128E5+F↓p
                in      al, 61h         ; PC/XT PPI port B bits:
                                        ; 0: Tmr 2 gate ═╦═► OR 03H=spkr ON
                                        ; 1: Tmr 2 data ═╝  AND 0fcH=spkr OFF
                                        ; 3: 1=read high switches
                                        ; 4: 0=enable RAM parity checking
                                        ; 5: 0=enable I/O channel check
                                        ; 6: 0=hold keyboard clock low
                                        ; 7: 0=enable kbrd
                mov     byte_11C96, al
                or      al, 1
                and     al, 0FDh
                out     61h, al         ; PC/XT PPI port B bits:
                                        ; 0: Tmr 2 gate ═╦═► OR 03H=spkr ON
                                        ; 1: Tmr 2 data ═╝  AND 0fcH=spkr OFF
                                        ; 3: 1=read high switches
                                        ; 4: 0=enable RAM parity checking
                                        ; 5: 0=enable I/O channel check
                                        ; 6: 0=hold keyboard clock low
                                        ; 7: 0=enable kbrd
                mov     al, 0B6h
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                jmp     short $+2
; ---------------------------------------------------------------------------

loc_12892:                              ; CODE XREF: sub_12881+F↑j
                xor     al, al
                out     42h, al         ; Timer 8253-5 (AT: 8254.2).
                jmp     short $+2
; ---------------------------------------------------------------------------

loc_12898:                              ; CODE XREF: sub_12881+15↑j
                out     42h, al         ; Timer 8253-5 (AT: 8254.2).
                jmp     short $+2
; ---------------------------------------------------------------------------

loc_1289C:                              ; CODE XREF: sub_12881+19↑j
                mov     word_11C93, 0
                mov     cx, 10h

loc_128A5:                              ; CODE XREF: sub_12881+2B↓j
                call    sub_1285D
                add     word_11C93, bx
                loop    loc_128A5
                mov     bx, word_11C93
                shr     bx, 1
                shr     bx, 1
                shr     bx, 1
                shr     bx, 1
                cmp     bx, 0A28h
                jle     short loc_128C3
                mov     bx, 0A28h

loc_128C3:                              ; CODE XREF: sub_12881+3D↑j
                mov     dx, 0
                mov     ax, 5140h
                div     bx
                inc     ax
                mov     ah, 0
                mov     cs:word_1280D, ax
                shr     ax, 1
                shr     ax, 1
                shr     ax, 1
                inc     ax
                mov     ah, 0
                mov     cs:word_1280F, ax
                mov     al, byte_11C96
                out     61h, al         ; PC/XT PPI port B bits:
                                        ; 0: Tmr 2 gate ═╦═► OR 03H=spkr ON
                                        ; 1: Tmr 2 data ═╝  AND 0fcH=spkr OFF
                                        ; 3: 1=read high switches
                                        ; 4: 0=enable RAM parity checking
                                        ; 5: 0=enable I/O channel check
                                        ; 6: 0=hold keyboard clock low
                                        ; 7: 0=enable kbrd
                retn
sub_12881       endp


; =============== S U B R O U T I N E =======================================


sub_128E5       proc near               ; CODE XREF: seg127c:07AE↓p
                mov     al, 0B6h
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                xor     ax, ax
                out     42h, al         ; Timer 8253-5 (AT: 8254.2).
                mov     al, ah
                out     42h, al         ; Timer 8253-5 (AT: 8254.2).
                call    sub_12844
                call    sub_12881
                mov     bl, 94h
                mov     al, 0A5h
                mov     word_11C99, 0
                call    sub_12F38
                mov     word_11C99, 0
                mov     dx, 43h ; 'C'
                mov     al, 80h
                out     dx, al          ; Timer 8253-5 (AT: 8254.2).
                jmp     short $+2
; ---------------------------------------------------------------------------

loc_12912:                              ; CODE XREF: sub_128E5+2B↑j
                in      al, 42h         ; Timer 8253-5 (AT: 8254.2).
                mov     ah, al
                jmp     short $+2
; ---------------------------------------------------------------------------

loc_12918:                              ; CODE XREF: sub_128E5+31↑j
                mov     al, 80h
                out     dx, al          ; Timer 8253-5 (AT: 8254.2).
                jmp     short $+2
; ---------------------------------------------------------------------------

loc_1291D:                              ; CODE XREF: sub_128E5+36↑j
                in      al, 42h         ; Timer 8253-5 (AT: 8254.2).
                cmp     ah, al
                jnz     short loc_1292E
                mov     ax, 9090h
                mov     word ptr cs:loc_12E33, ax
                mov     word ptr cs:loc_12F13, ax

loc_1292E:                              ; CODE XREF: sub_128E5+3C↑j
                call    sub_12E41
                mov     al, 4
                mov     bl, 60h ; '`'
                call    sub_12A3B
                mov     bl, 80h
                call    sub_12A3B
                mov     dx, 388h
                in      al, dx
                push    ax
                mov     al, 2
                mov     bl, 0FFh
                call    sub_12A3B
                mov     al, 4
                mov     bl, 21h ; '!'
                call    sub_12A3B
                mov     cx, 0C8h
                mov     dx, 388h

loc_12956:                              ; CODE XREF: sub_128E5+72↓j
                in      al, dx
                loop    loc_12956
                push    ax
                mov     al, 4
                mov     bl, 60h ; '`'
                call    sub_12A3B
                mov     bl, 80h
                call    sub_12A3B
                pop     ax
                pop     bx
                mov     dx, 0
                and     al, 0E0h
                cmp     al, 0C0h
                jnz     short loc_1297D
                and     bl, 0E0h
                cmp     bl, 0
                jnz     short loc_1297D
                call    sub_1298E
                retn
; ---------------------------------------------------------------------------

loc_1297D:                              ; CODE XREF: sub_128E5+8A↑j
                                        ; sub_128E5+92↑j
                mov     ax, 3
                int     10h             ; - VIDEO - SET VIDEO MODE
                                        ; AL = mode
                mov     dx, 23Ch
                mov     ah, 9
                int     21h             ; DOS - PRINT STRING
                                        ; DS:DX -> string terminated by "$"
                mov     ax, 4C00h
                int     21h             ; DOS - 2+ - QUIT WITH EXIT CODE (EXIT)
sub_128E5       endp                    ; AL = exit code


; =============== S U B R O U T I N E =======================================


sub_1298E       proc near               ; CODE XREF: sub_128E5+94↑p
                                        ; sub_12C31+35↓p ...
                mov     ax, 0
                mov     ds:0B9Ah, al
                mov     ds:0C28h, al
                mov     ds:0C29h, al
                mov     ds:0B96h, ax
                mov     ds:0B98h, ax
                lea     bx, ds:0B9Ch
                mov     [bx], al
                mov     [bx+1], al
                mov     [bx+2], al
                lea     bx, ds:0BB0h
                mov     [bx], al
                mov     [bx+1], al
                mov     [bx+2], al
                lea     bx, ds:0BC4h
                mov     [bx], al
                mov     [bx+1], al
                mov     [bx+2], al
                lea     bx, ds:0BD8h
                mov     [bx], al
                mov     [bx+1], al
                mov     [bx+2], al
                lea     bx, ds:0BECh
                mov     [bx], al
                mov     [bx+1], al
                mov     [bx+2], al
                lea     bx, ds:0C00h
                mov     [bx], al
                mov     [bx+1], al
                mov     [bx+2], al
                mov     ds:27Eh, ax
                mov     ds:280h, ax
                mov     ds:286h, al
                mov     ds:287h, al
                mov     byte ptr ds:0B9Ah, 0FFh
                mov     al, 0B1h
                mov     bl, 0
                call    sub_12A3B
                mov     al, 0B2h
                mov     bl, 0
                call    sub_12A3B
                mov     al, 84h
                mov     bl, 0Fh
                call    sub_12A3B
                mov     al, 85h
                mov     bl, 0Fh
                call    sub_12A3B
                retn
sub_1298E       endp


; =============== S U B R O U T I N E =======================================


sub_12A16       proc near               ; CODE XREF: sub_12C31+3↓p
                                        ; seg127c:07D5↓p
                mov     bx, 0
                mov     ax, 0FFh

loc_12A1C:                              ; CODE XREF: sub_12A16+C↓j
                push    ax
                call    sub_12A3B
                pop     ax
                dec     ax
                jnz     short loc_12A1C
                mov     al, 1
                mov     bl, 20h ; ' '
                call    sub_12A3B
                mov     al, 0BDh
                call    sub_12A3B
                retn
sub_12A16       endp

                assume es:seg11a3, ss:seg11a3

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_12A31       proc near               ; CODE XREF: sub_1307E+62↓p
                                        ; sub_130EA+3E↓p ...

arg_0           = word ptr  4
arg_2           = byte ptr  6

                push    bp
                mov     bp, sp
                mov     ax, [bp+arg_0]
                mov     bl, [bp+arg_2]
                pop     bp
sub_12A31       endp


; =============== S U B R O U T I N E =======================================


sub_12A3B       proc near               ; CODE XREF: sub_128E5+50↑p
                                        ; sub_128E5+55↑p ...
                push    di
                mov     ah, 0
                mov     di, ax
                mov     [di+0C32h], bl
                pop     di
sub_12A3B       endp


; =============== S U B R O U T I N E =======================================


sub_12A45       proc near               ; CODE XREF: sub_12F09+25↓p
                mov     dx, 388h
                mov     cx, cs:word_1280D

loc_12A4D:                              ; CODE XREF: sub_12A45:loc_12A4D↓j
                loop    loc_12A4D
                out     dx, al
                mov     al, bl
                mov     dx, 389h
                mov     cx, cs:word_1280F

loc_12A5A:                              ; CODE XREF: sub_12A45:loc_12A5A↓j
                loop    loc_12A5A
                out     dx, al
                retn
sub_12A45       endp


; =============== S U B R O U T I N E =======================================


sub_12A5E       proc near               ; CODE XREF: sub_12B08+26↓p
                                        ; sub_12B08+3F↓p
                push    ax
                add     al, 0A0h
                call    sub_12A3B
                pop     ax
                add     al, 0B0h
                mov     bl, bh
                or      bl, 20h
                call    sub_12A3B
                retn
sub_12A5E       endp


; =============== S U B R O U T I N E =======================================


sub_12A70       proc near               ; CODE XREF: seg127c:loc_13002↓p
                cmp     word_11CAC, 0
                jz      short loc_12A7B
                dec     word_11CAC

loc_12A7B:                              ; CODE XREF: sub_12A70+5↑j
                push    es
                push    si
                push    di
                push    bp
                mov     cs:seg_127C9, ss
                mov     cs:word_127CB, sp
                mov     ax, seg seg11a3
                mov     es, ax
                mov     ss, ax
                assume ss:seg11a3
                mov     sp, 238h
                call    far ptr sub_13C8C

loc_12A98:                              ; DATA XREF: seg11a3:0234↑o
                mov     bx, cs:seg_127C9
                mov     ss, bx
                mov     sp, cs:word_127CB
                pop     bp
                pop     di
                pop     si
                pop     es
                assume es:nothing
                mov     al, byte_12659
                or      al, byte_12658
                jz      short loc_12AF4
                cmp     byte_12658, 0
                jz      short loc_12AD2
                mov     ax, word_125C2
                add     ax, word_125C6
                mov     word_125C2, ax
                dec     byte_12658
                jnz     short loc_12AD2
                mov     al, byte_1265F
                add     al, 0B0h
                mov     bl, 0
                call    sub_12A3B

loc_12AD2:                              ; CODE XREF: sub_12A70+46↑j
                                        ; sub_12A70+56↑j
                cmp     byte_12659, 0
                jz      short locret_12AF3
                mov     ax, word_125C4
                add     ax, word_125C8
                mov     word_125C4, ax
                dec     byte_12659
                jnz     short locret_12AF3
                assume es:nothing
                mov     al, byte_12660
                add     al, 0B0h
                mov     bl, 0
                call    sub_12A3B

locret_12AF3:                           ; CODE XREF: sub_12A70+67↑j
                                        ; sub_12A70+77↑j
                retn
; ---------------------------------------------------------------------------

loc_12AF4:                              ; CODE XREF: sub_12A70+3F↑j
                cmp     word_11C8F, 0FFFFh
                jz      short locret_12B07
                mov     word_11C8F, 0FFFFh
                mov     word_11C8D, 0FFFFh

locret_12B07:                           ; CODE XREF: sub_12A70+89↑j
                retn
sub_12A70       endp


; =============== S U B R O U T I N E =======================================


sub_12B08       proc near               ; CODE XREF: seg127c:0856↓p
                mov     bx, 9248h
                add     bx, word_11CB8
                ror     bx, 1
                ror     bx, 1
                ror     bx, 1
                mov     word_11CB8, bx
                cmp     byte_12658, 0
                jz      short loc_12B31
                xor     bx, 0FFFFh
                and     bx, word_1265A
                add     bx, word_125C2
                mov     al, byte_1265F
                call    sub_12A5E

loc_12B31:                              ; CODE XREF: sub_12B08+16↑j
                cmp     byte_12659, 0
                jz      short locret_12B4A
                mov     bx, word_11CB8
                and     bx, word_1265C
                add     bx, word_125C4
                mov     al, byte_12660
                call    sub_12A5E

locret_12B4A:                           ; CODE XREF: sub_12B08+2E↑j
                retn
sub_12B08       endp

                assume es:seg11a3, ss:seg11a3

; =============== S U B R O U T I N E =======================================


sub_12B4B       proc near               ; CODE XREF: sub_13398+8E↓p
                                        ; sub_13398+F4↓p
                cmp     word_11C8F, 1
                jz      short locret_12B5E
                mov     word_11C8F, 1
                mov     word_11C8D, 1

locret_12B5E:                           ; CODE XREF: sub_12B4B+5↑j
                retn
sub_12B4B       endp

; ---------------------------------------------------------------------------
                push    bp
                mov     bp, sp
                mov     ax, [bp+8]
                mov     bx, [bp+6]
                mov     cx, [bp+4]
                pop     bp
                call    sub_12B70
                retn

; =============== S U B R O U T I N E =======================================


sub_12B70       proc near               ; CODE XREF: seg127c:03AC↑p
                                        ; sub_12BA8+B↓p ...
                mov     dl, byte_125CA
                push    dx
                mov     byte_125CA, 0
                mov     byte ptr [bx+1], 0
                mov     byte ptr [bx+9], 0FFh
                mov     byte ptr [bx+2], 0
                mov     [bx+0Ah], cx
                mov     word ptr [bx+0Ch], 0
                mov     word ptr [bx+0Eh], 0
                mov     word ptr [bx+10h], 0
                mov     byte ptr [bx+6], 0
                mov     [bx+12h], ax
                mov     byte ptr [bx], 1
                pop     dx
                mov     byte_125CA, dl
                retn
sub_12B70       endp


; =============== S U B R O U T I N E =======================================


sub_12BA8       proc near               ; CODE XREF: sub_12C31+6↓p
                mov     ax, 0
                lea     bx, byte_125CC
                lea     cx, unk_122BC
                call    sub_12B70
                lea     bx, byte_125E0
                lea     cx, unk_12336
                call    sub_12B70
                lea     bx, byte_125F4
                lea     cx, unk_123B0
                call    sub_12B70
                lea     bx, unk_12608
                lea     cx, unk_12400
                call    sub_12B70
                lea     bx, byte_1261C
                lea     cx, unk_12440
                call    sub_12B70
                lea     bx, unk_12630
                lea     cx, unk_12494
                jmp     short sub_12B70
sub_12BA8       endp


; =============== S U B R O U T I N E =======================================


sub_12BEC       proc near               ; CODE XREF: sub_12C31+23↓p
                mov     ax, 0
                lea     bx, byte_125CC
                lea     cx, unk_12526
                call    sub_12B70
                lea     bx, byte_125E0
                lea     cx, unk_12534
                call    sub_12B70
                lea     bx, byte_125F4
                lea     cx, unk_12542
                call    sub_12B70
                lea     bx, unk_12608
                lea     cx, unk_12550
                call    sub_12B70
                lea     bx, byte_1261C
                lea     cx, unk_1255E
                call    sub_12B70
                lea     bx, unk_12630
                lea     cx, unk_1256C
                jmp     sub_12B70
sub_12BEC       endp


; =============== S U B R O U T I N E =======================================


sub_12C31       proc near               ; CODE XREF: seg127c:0821↓p
                call    sub_12811
                call    sub_12A16
                call    sub_12BA8

loc_12C3A:                              ; CODE XREF: sub_12C31+1C↓j
                mov     al, byte_125CC
                or      al, byte_125E0
                or      al, byte_125F4
                cmp     al, 0
                jz      short loc_12C51
                mov     ah, 1
                int     16h             ; KEYBOARD - CHECK BUFFER, DO NOT CLEAR
                                        ; Return: ZF clear if character in buffer
                                        ; AH = scan code, AL = character
                                        ; ZF set if no character in buffer
                jz      short loc_12C3A
                mov     al, 0FFh

loc_12C51:                              ; CODE XREF: sub_12C31+16↑j
                mov     ah, 0
                push    ax
                call    sub_12BEC

loc_12C57:                              ; CODE XREF: sub_12C31+33↓j
                mov     al, byte_125CC
                or      al, byte_125E0
                or      al, byte_125F4
                cmp     al, 0
                jnz     short loc_12C57
                call    sub_1298E
                pop     ax
                retn
sub_12C31       endp

; ---------------------------------------------------------------------------
                dw 1960
                dw 1968
                dw 1976
                dw 1984

; =============== S U B R O U T I N E =======================================


sub_12C73       proc near               ; DATA XREF: seg127c:05E6↓o
                mov     bx, word_11CB8
                shr     bx, 1
                shr     bx, 1
                and     bx, 6
                mov     cx, cs:[bx+4ABh]
                mov     ax, 0
                lea     bx, byte_125F4
                jmp     sub_12B70
sub_12C73       endp

; ---------------------------------------------------------------------------
                dw 7C8h
                dw 7D0h
                dw 7D8h
                dw 7E0h
word_12C95      dw 1E8Bh                ; DATA XREF: seg127c:05E4↓o
                dw 288h
                db 0D1h
                db 0EBh
                db 0D1h
                db 0EBh
                db 0D1h
                db 0EBh
                db 83h
                db 0E3h
                db 6
                db 2Eh
                db 8Bh
                db 8Fh
                db 0CDh
                db 4
                db 0B8h
                db 0
                db 0
                db 8Dh
                db 1Eh
                db 0B0h
                db 0Bh
                db 0E9h
                db 0BFh
                db 0FEh

; =============== S U B R O U T I N E =======================================


sub_12CB1       proc near               ; DATA XREF: seg127c:05E8↓o
                mov     ax, 0
                lea     bx, byte_125CC
                lea     cx, unk_12218
                jmp     sub_12B70
sub_12CB1       endp


; =============== S U B R O U T I N E =======================================


sub_12CBF       proc near               ; DATA XREF: seg127c:05F6↓o
                mov     ax, 0
                lea     bx, byte_125CC
                lea     cx, unk_12224
                jmp     sub_12B70
sub_12CBF       endp

; ---------------------------------------------------------------------------

loc_12CCD:                              ; DATA XREF: seg127c:05F0↓o
                mov     ax, 0
                lea     bx, byte_125F4
                lea     cx, unk_1227E
                jmp     sub_12B70
; ---------------------------------------------------------------------------

loc_12CDB:                              ; DATA XREF: seg127c:05EE↓o
                mov     ax, 0
                lea     bx, unk_12608
                lea     cx, unk_1222E
                jmp     sub_12B70
; ---------------------------------------------------------------------------

loc_12CE9:                              ; DATA XREF: seg127c:05EC↓o
                mov     ax, 0
                lea     bx, unk_12608
                lea     cx, unk_1223C
                jmp     sub_12B70
; ---------------------------------------------------------------------------

loc_12CF7:                              ; DATA XREF: seg127c:05EA↓o
                mov     ax, 0
                lea     bx, unk_12608
                lea     cx, unk_12246
                jmp     sub_12B70
; ---------------------------------------------------------------------------

loc_12D05:                              ; DATA XREF: seg127c:0606↓o
                mov     ax, 0
                lea     bx, byte_125CC
                lea     cx, unk_121D6
                jmp     sub_12B70
; ---------------------------------------------------------------------------

loc_12D13:                              ; DATA XREF: seg127c:0600↓o
                mov     ax, 0
                lea     bx, unk_12608
                lea     cx, unk_12250
                jmp     sub_12B70
; ---------------------------------------------------------------------------

loc_12D21:                              ; DATA XREF: seg127c:05FC↓o
                mov     ax, 0
                lea     bx, byte_125CC
                lea     cx, unk_12258
                jmp     sub_12B70
; ---------------------------------------------------------------------------

loc_12D2F:                              ; DATA XREF: seg127c:0602↓o
                mov     ax, 0
                lea     bx, byte_125CC
                lea     cx, unk_12268
                jmp     sub_12B70
; ---------------------------------------------------------------------------

loc_12D3D:                              ; DATA XREF: seg127c:05FE↓o
                mov     ax, 0
                lea     bx, byte_125CC
                lea     cx, unk_12272
                jmp     sub_12B70
; ---------------------------------------------------------------------------

loc_12D4B:                              ; DATA XREF: seg127c:05F8↓o
                cmp     byte_1261C, 0
                jnz     short locret_12D60
                mov     ax, 0
                lea     bx, byte_1261C
                lea     cx, unk_12274
                call    sub_12B70

locret_12D60:                           ; CODE XREF: seg127c:0590↑j
                retn
; ---------------------------------------------------------------------------

loc_12D61:                              ; DATA XREF: seg127c:05FA↓o
                mov     ax, 0
                lea     bx, byte_125CC
                lea     cx, unk_12260
                jmp     sub_12B70

; =============== S U B R O U T I N E =======================================


sub_12D6F       proc near               ; DATA XREF: seg127c:05F2↓o
                mov     ax, 0
                lea     bx, byte_125E0
                lea     cx, unk_12288
                jmp     sub_12B70
sub_12D6F       endp

; ---------------------------------------------------------------------------

loc_12D7D:                              ; DATA XREF: seg127c:05F4↓o
                mov     ax, 0
                lea     bx, byte_125F4
                lea     cx, unk_1229A
                jmp     sub_12B70
; ---------------------------------------------------------------------------

loc_12D8B:                              ; DATA XREF: seg127c:0604↓o
                mov     ax, 0
                lea     bx, byte_125E0
                lea     cx, byte_122AC
                call    sub_12B70
                lea     bx, unk_12608
                lea     cx, byte_122B4
                jmp     sub_12B70
; ---------------------------------------------------------------------------
                dw offset word_12C95
                dw offset sub_12C73
                dw offset sub_12CB1
                dw offset loc_12CF7
                dw offset loc_12CE9
                dw offset loc_12CDB
                dw offset loc_12CCD
                dw offset sub_12D6F
                dw offset loc_12D7D
                dw offset sub_12CBF
                dw offset loc_12D4B
                dw offset loc_12D61
                dw offset loc_12D21
                dw offset loc_12D3D
                dw offset loc_12D13
                dw offset loc_12D2F
                dw offset loc_12D8B
                dw offset loc_12D05
off_12DC8       dw offset sub_12DCE     ; DATA XREF: seg127c:0806↓r
                dw offset loc_12DDF
                dw offset loc_12E05

; =============== S U B R O U T I N E =======================================


sub_12DCE       proc near               ; CODE XREF: seg127c:0806↓p
                                        ; DATA XREF: seg127c:off_12DC8↑o
                cmp     word_11CAE, 0
                jnz     short locret_12DDE
                mov     bx, 0
                mov     cx, 31F3h
                jmp     short loc_12E0B
; ---------------------------------------------------------------------------
                db 90h
; ---------------------------------------------------------------------------

locret_12DDE:                           ; CODE XREF: sub_12DCE+5↑j
                retn
; ---------------------------------------------------------------------------

loc_12DDF:                              ; CODE XREF: seg127c:0806↓p
                                        ; DATA XREF: seg127c:060A↑o
                mov     ax, word_11CA9
                inc     ax
                cmp     al, byte_11CAB
                jbe     short loc_12DEB
                xor     ax, ax

loc_12DEB:                              ; CODE XREF: sub_12DCE+19↑j
                mov     word_11CA9, ax
                shl     ax, 1
                shl     ax, 1
                lea     bx, unk_11C9D
                add     bx, ax
                mov     cx, [bx]
                add     bx, 2
                mov     bx, [bx]
                mov     ax, 2Dh ; '-'
                jmp     short loc_12E0E
; ---------------------------------------------------------------------------
                db 90h
; ---------------------------------------------------------------------------

loc_12E05:                              ; CODE XREF: seg127c:0806↓p
                                        ; DATA XREF: seg127c:060C↑o
                mov     bx, 31F4h
                mov     cx, 4796h

loc_12E0B:                              ; CODE XREF: sub_12DCE+D↑j
                mov     ax, 1

loc_12E0E:                              ; CODE XREF: sub_12DCE+34↑j
                mov     word_11CAC, ax

loc_12E11:                              ; CODE XREF: sub_12DCE+48↓j
                cmp     word_11CAC, 0
                jnz     short loc_12E11
                push    bx
                push    cx
                call    sub_12E25
                pop     di
                pop     si
                call    sub_12F09
                jmp     short sub_12E41
sub_12DCE       endp

; ---------------------------------------------------------------------------
                db 90h

; =============== S U B R O U T I N E =======================================


sub_12E25       proc near               ; CODE XREF: sub_12DCE+4C↑p
                call    sub_12E67
                mov     bl, 94h
                mov     al, 0A5h
                call    sub_12F38
                mov     ah, 0FFh

loc_12E31:                              ; CODE XREF: sub_12E25+18↓j
                mov     al, 80h

loc_12E33:                              ; DATA XREF: sub_128E5+41↑w
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                jmp     short $+2
; ---------------------------------------------------------------------------

loc_12E37:                              ; CODE XREF: sub_12E25+10↑j
                in      al, 42h         ; Timer 8253-5 (AT: 8254.2).
                cmp     ah, al
                mov     ah, al
                jnb     short loc_12E31
                cli
                retn
sub_12E25       endp

                assume es:nothing

; =============== S U B R O U T I N E =======================================


sub_12E41       proc near               ; CODE XREF: sub_128E5:loc_1292E↑p
                                        ; sub_12DCE+54↑j
                mov     al, 0B0h
                mov     bl, 0
                call    sub_12A3B
                mov     al, 0B1h
                mov     bl, 0
                call    sub_12A3B
                mov     al, byte_11C95
                out     21h, al         ; Interrupt controller, 8259A.
                mov     al, byte_11C96
                out     61h, al         ; PC/XT PPI port B bits:
                                        ; 0: Tmr 2 gate ═╦═► OR 03H=spkr ON
                                        ; 1: Tmr 2 data ═╝  AND 0fcH=spkr OFF
                                        ; 3: 1=read high switches
                                        ; 4: 0=enable RAM parity checking
                                        ; 5: 0=enable I/O channel check
                                        ; 6: 0=hold keyboard clock low
                                        ; 7: 0=enable kbrd
                mov     al, 0B6h
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                xor     ax, ax
                out     42h, al         ; Timer 8253-5 (AT: 8254.2).
                mov     al, ah
                out     42h, al         ; Timer 8253-5 (AT: 8254.2).
                sti
                retn
sub_12E41       endp


; =============== S U B R O U T I N E =======================================


sub_12E67       proc near               ; CODE XREF: sub_12E25↑p
                mov     al, 20h ; ' '
                mov     bl, 23h ; '#'
                call    sub_12A3B
                mov     al, 23h ; '#'
                mov     bl, 28h ; '('
                call    sub_12A3B
                mov     al, 40h ; '@'
                mov     bl, 3Fh ; '?'
                call    sub_12A3B
                mov     al, 43h ; 'C'
                mov     bl, 3Fh ; '?'
                call    sub_12A3B
                mov     al, 60h ; '`'
                mov     bl, 0AFh
                call    sub_12A3B
                mov     al, 63h ; 'c'
                mov     bl, 0AFh
                call    sub_12A3B
                mov     al, 80h
                mov     bl, 0Dh
                call    sub_12A3B
                mov     al, 83h
                mov     bl, 0Fh
                call    sub_12A3B
                mov     al, 0C0h
                mov     bl, 5
                call    sub_12A3B
                mov     al, 0E0h
                mov     bl, 0
                call    sub_12A3B
                mov     al, 0E3h
                mov     bl, 2
                call    sub_12A3B
                mov     al, 0B0h
                mov     bl, 1
                call    sub_12A3B
                mov     al, 0A0h
                mov     bl, 8Fh
                call    sub_12A3B
                mov     al, 0B0h
                mov     bl, 2Eh ; '.'
                call    sub_12A3B
                cli
                mov     al, 36h ; '6'
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                mov     ax, 4C90h
                out     40h, al         ; Timer 8253-5 (AT: 8254.2).
                mov     al, ah
                out     40h, al         ; Timer 8253-5 (AT: 8254.2).
                mov     al, 0
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                in      al, 40h         ; Timer 8253-5 (AT: 8254.2).
                mov     bl, al
                in      al, 40h         ; Timer 8253-5 (AT: 8254.2).
                mov     bh, al

loc_12EE3:                              ; CODE XREF: sub_12E67+90↓j
                mov     al, 0
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                in      al, 40h         ; Timer 8253-5 (AT: 8254.2).
                mov     cl, al
                in      al, 40h         ; Timer 8253-5 (AT: 8254.2).
                mov     ch, al
                neg     cx
                add     cx, bx
                cmp     cx, 952h
                jb      short loc_12EE3
                mov     al, 0B0h
                mov     bl, 20h ; ' '
                call    sub_12A3B
                mov     al, 0A0h
                mov     bl, 0
                call    sub_12A3B
                sti
                retn
sub_12E67       endp


; =============== S U B R O U T I N E =======================================


sub_12F09       proc near               ; CODE XREF: sub_12DCE+51↑p
                push    ds
                mov     ax, word_11C97
                mov     ds, ax

loc_12F0F:                              ; CODE XREF: sub_12F09+2B↓j
                mov     ah, 0FFh

loc_12F11:                              ; CODE XREF: sub_12F09+14↓j
                mov     al, 80h

loc_12F13:                              ; DATA XREF: sub_128E5+45↑w
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                jmp     short $+2
; ---------------------------------------------------------------------------

loc_12F17:                              ; CODE XREF: sub_12F09+C↑j
                in      al, 42h         ; Timer 8253-5 (AT: 8254.2).
                cmp     ah, al
                mov     ah, al
                jnb     short loc_12F11
                xor     bh, bh
                mov     bl, [si]
                shr     bx, 1
                shr     bx, 1
                mov     bl, cs:[bx+0Dh]
                mov     al, 43h ; 'C'
                call    sub_12A45
                inc     si
                cmp     si, di
                jnz     short loc_12F0F
                pop     ds
                retn
sub_12F09       endp

                assume ds:seg11a3

; =============== S U B R O U T I N E =======================================


sub_12F38       proc near               ; CODE XREF: sub_128E5+1C↑p
                                        ; sub_12E25+7↑p
                push    ax
                mov     al, bl
                out     43h, al         ; Timer 8253-5 (AT: 8254.2).
                pop     ax
                out     42h, al         ; Timer 8253-5 (AT: 8254.2).
                in      al, 61h         ; PC/XT PPI port B bits:
                                        ; 0: Tmr 2 gate ═╦═► OR 03H=spkr ON
                                        ; 1: Tmr 2 data ═╝  AND 0fcH=spkr OFF
                                        ; 3: 1=read high switches
                                        ; 4: 0=enable RAM parity checking
                                        ; 5: 0=enable I/O channel check
                                        ; 6: 0=hold keyboard clock low
                                        ; 7: 0=enable kbrd
                mov     byte_11C96, al
                or      al, 1
                and     al, 0FDh
                out     61h, al         ; PC/XT PPI port B bits:
                                        ; 0: Tmr 2 gate ═╦═► OR 03H=spkr ON
                                        ; 1: Tmr 2 data ═╝  AND 0fcH=spkr OFF
                                        ; 3: 1=read high switches
                                        ; 4: 0=enable RAM parity checking
                                        ; 5: 0=enable I/O channel check
                                        ; 6: 0=hold keyboard clock low
                                        ; 7: 0=enable kbrd
                cli
                in      al, 21h         ; Interrupt controller, 8259A.
                mov     byte_11C95, al
                or      al, 1
                out     21h, al         ; Interrupt controller, 8259A.
                sti
                retn
sub_12F38       endp

; ---------------------------------------------------------------------------
                push    bp
                mov     bp, sp
                mov     bx, [bp+6]
                mov     cx, [bp+8]
                push    di
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                mov     word_11C97, bx
                call    sub_12F75
                call    sub_128E5
                pop     ds
                pop     di
                pop     bp
                retf
                assume ds:seg11a3

; =============== S U B R O U T I N E =======================================


sub_12F75       proc near               ; CODE XREF: seg127c:07AB↑p
                mov     bl, 2
                cmp     cx, 7D9Dh
                jnb     short loc_12F87
                dec     bl
                cmp     cx, 6A1Ah
                jnb     short loc_12F87
                dec     bl

loc_12F87:                              ; CODE XREF: sub_12F75+6↑j
                                        ; sub_12F75+E↑j
                mov     byte_11CAB, bl
                retn
sub_12F75       endp

; ---------------------------------------------------------------------------
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                call    sub_1298E
                call    sub_12A16
                pop     ds
                retf
; ---------------------------------------------------------------------------
                push    bp
                mov     bp, sp
                mov     bx, [bp+6]
                cmp     bx, 22h ; '"'
                ja      short loc_12FB1
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                call    word ptr cs:[bx+5E4h]
                pop     ds

loc_12FB1:                              ; CODE XREF: seg127c:07E3↑j
                                        ; seg127c:07FC↓j
                pop     bp
                retf
; ---------------------------------------------------------------------------
                push    bp
                mov     bp, sp
                mov     bx, [bp+6]
                cmp     bx, 4
                ja      short loc_12FB1
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                push    di
                push    si
                call    cs:off_12DC8[bx]
                pop     si
                pop     di
                pop     ds
                pop     bp
                retf
; ---------------------------------------------------------------------------
                push    bp
                push    es
                push    si
                push    di
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                cmp     byte_125CA, 0
                jz      short loc_12FE4
                call    sub_12C31

loc_12FE4:                              ; CODE XREF: seg127c:081F↑j
                pop     ds
                pop     di
                pop     si
                pop     es
                assume es:nothing
                pop     bp
                retf
; ---------------------------------------------------------------------------
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                dec     byte ptr unk_11C6B
                jnz     short loc_13002
                mov     byte ptr unk_11C6B, 7
                cmp     byte ptr unk_11C6A, 0
                jnz     short loc_13005

loc_13002:                              ; CODE XREF: seg127c:0834↑j
                call    sub_12A70

loc_13005:                              ; CODE XREF: seg127c:0840↑j
                mov     ax, word_11C8D
                mov     word_11C8D, 0
                pop     ds
                retf
; ---------------------------------------------------------------------------
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                call    sub_12B08
                pop     ds
                xor     ax, ax
                retf
; ---------------------------------------------------------------------------
                push    bp
                mov     bp, sp
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                mov     ax, [bp+6]
                cmp     ax, word_11CB4
                jl      short loc_13032
                mov     ax, word_11CB4

loc_13032:                              ; CODE XREF: seg127c:086D↑j
                mov     word_11CAE, ax
                pop     ds
                pop     bp
                retf
; ---------------------------------------------------------------------------
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                mov     byte_11CB6, 1
                pop     ds
                retf
; ---------------------------------------------------------------------------
                push    ds
                mov     ax, seg seg11a3
                mov     ds, ax
                assume ds:seg11a3
                mov     byte_11CB6, 0
                pop     ds
                retf
                assume es:seg11a3, ss:seg11a3, ds:seg11a3

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_13052       proc near               ; CODE XREF: sub_13132+A↓p
                                        ; sub_131C2+E↓p ...

var_2           = word ptr -2
arg_0           = word ptr  4

                push    bp
                mov     bp, sp
                sub     sp, 2
                push    si
                push    di
                mov     ax, [bp+arg_0]
                mov     bl, al
                cmp     al, 6
                jle     short loc_13070
                mov     bl, 7
                cmp     al, 7
                jz      short loc_13070
                cmp     al, 0Ah
                jz      short loc_13070
                mov     bl, 8

loc_13070:                              ; CODE XREF: sub_13052+10↑j
                                        ; sub_13052+16↑j ...
                mov     bh, 0
                mov     [bp+var_2], bx
                mov     ax, [bp+var_2]
                pop     di
                pop     si
                mov     sp, bp
                pop     bp
                retn
sub_13052       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_1307E       proc near               ; CODE XREF: sub_13398+12F↓p
                                        ; sub_1389E+186↓p ...

var_4           = word ptr -4
var_2           = word ptr -2
arg_0           = word ptr  4
arg_2           = word ptr  6

                push    bp
                mov     bp, sp
                sub     sp, 4
                cmp     [bp+arg_0], 6
                ja      short loc_130A8
                mov     ax, [bp+arg_0]
                shl     ax, 1
                mov     bx, 2AEh
                add     bx, ax
                mov     al, [bx+1]
                cbw
                mov     bx, ax
                mov     al, [bx+2C4h]
                cbw
                add     ax, 40h ; '@'
                mov     [bp+var_2], ax
                jmp     short loc_130BF
; ---------------------------------------------------------------------------

loc_130A8:                              ; CODE XREF: sub_1307E+B↑j
                mov     bx, [bp+arg_0]
                shl     bx, 1
                mov     al, [bx+2AEh]
                cbw
                mov     bx, ax
                mov     al, [bx+2C4h]
                cbw
                add     ax, 40h ; '@'
                mov     [bp+var_2], ax

loc_130BF:                              ; CODE XREF: sub_1307E+28↑j
                mov     bx, [bp+var_2]
                mov     al, [bx+0C32h]
                and     ax, 0C0h
                mov     [bp+var_4], ax
                mov     ax, [bp+arg_2]
                and     ax, 3Fh
                mov     cx, 3Fh ; '?'
                sub     cx, ax
                or      [bp+var_4], cx
                push    [bp+var_4]
                push    [bp+var_2]
                call    sub_12A31
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
sub_1307E       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_130EA       proc near               ; CODE XREF: sub_13B8C+51↓p

var_4           = word ptr -4
var_2           = word ptr -2
arg_0           = word ptr  4
arg_2           = word ptr  6

                push    bp
                mov     bp, sp
                sub     sp, 4
                mov     bx, [bp+arg_0]
                shl     bx, 1
                mov     al, [bx+2AEh]
                cbw
                mov     bx, ax
                mov     al, [bx+2C4h]
                cbw
                add     ax, 40h ; '@'
                mov     [bp+var_2], ax
                mov     bx, ax
                mov     al, [bx+0C32h]
                and     ax, 0C0h
                mov     [bp+var_4], ax
                mov     ax, [bp+arg_2]
                and     ax, 3Fh
                mov     cx, 3Fh ; '?'
                sub     cx, ax
                or      [bp+var_4], cx
                push    [bp+var_4]
                push    [bp+var_2]
                call    sub_12A31
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
sub_130EA       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_13132       proc near               ; CODE XREF: sub_13398+11B↓p

var_C           = word ptr -0Ch
var_A           = byte ptr -0Ah
var_8           = byte ptr -8
var_6           = byte ptr -6
var_4           = word ptr -4
var_2           = word ptr -2
arg_0           = word ptr  4
arg_2           = word ptr  6

                push    bp
                mov     bp, sp
                sub     sp, 0Ch
                push    [bp+arg_0]
                call    sub_13052
                add     sp, 2
                add     ax, 0A0h
                mov     [bp+var_2], ax
                mov     cx, 0Ch
                mov     ax, [bp+arg_2]
                sub     dx, dx
                div     cx
                mov     [bp+var_8], dl
                mov     cx, 0Ch
                mov     ax, [bp+arg_2]
                sub     dx, dx
                div     cx
                mov     [bp+var_A], al
                mov     al, [bp+var_8]
                and     ax, 0FFh
                mov     bx, ax
                shl     bx, 1
                mov     ax, [bx+292h]
                mov     [bp+var_4], ax
                and     ax, 0FFh
                push    ax
                push    [bp+var_2]
                call    sub_12A31
                add     sp, 4
                add     [bp+var_2], 10h
                mov     bx, [bp+var_2]
                mov     al, [bx+0C32h]
                and     ax, 20h
                mov     [bp+var_6], al
                mov     cx, 8
                mov     ax, [bp+var_4]
                shr     ax, cl
                mov     [bp+var_C], ax
                mov     al, [bp+var_A]
                and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                mov     cx, [bp+var_C]
                or      cx, ax
                or      [bp+var_6], cl
                mov     al, [bp+var_6]
                and     ax, 0FFh
                push    ax
                push    [bp+var_2]
                call    sub_12A31
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
sub_13132       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_131C2       proc near               ; CODE XREF: sub_13B8C+C1↓p

var_4           = byte ptr -4
var_2           = word ptr -2
arg_0           = byte ptr  4
arg_2           = word ptr  6

                push    bp
                mov     bp, sp
                sub     sp, 4
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                push    ax
                call    sub_13052
                add     sp, 2
                add     ax, 0A0h
                mov     [bp+var_2], ax
                mov     ax, [bp+arg_2]
                and     ax, 0FFh
                push    ax
                push    [bp+var_2]
                call    sub_12A31
                add     sp, 4
                add     [bp+var_2], 10h
                mov     bx, [bp+var_2]
                mov     al, [bx+0C32h]
                and     ax, 20h
                mov     [bp+var_4], al
                mov     cx, 8
                mov     ax, [bp+arg_2]
                shr     ax, cl
                or      [bp+var_4], al
                mov     al, [bp+var_4]
                and     ax, 0FFh
                push    ax
                push    [bp+var_2]
                call    sub_12A31
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
sub_131C2       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_1321C       proc near               ; CODE XREF: sub_1389E+2A6↓p

var_A           = word ptr -0Ah
var_8           = byte ptr -8
var_6           = word ptr -6
var_4           = word ptr -4
var_2           = word ptr -2
arg_0           = byte ptr  4
arg_2           = byte ptr  6

                push    bp
                mov     bp, sp
                sub     sp, 0Ah
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                push    ax
                call    sub_13052
                add     sp, 2
                add     ax, 0A0h
                mov     [bp+var_2], ax
                add     ax, 10h
                mov     [bp+var_4], ax
                mov     bx, ax
                mov     al, [bx+0C32h]
                and     ax, 1Fh
                mov     cx, 8
                shl     ax, cl
                mov     [bp+var_6], ax
                mov     bx, [bp+var_2]
                mov     al, [bx+0C32h]
                and     ax, 0FFh
                mov     [bp+var_A], ax
                mov     al, [bp+arg_2]
                cbw
                mov     cx, [bp+var_A]
                add     cx, ax
                add     [bp+var_6], cx
                mov     ax, [bp+var_6]
                and     ax, 0FFh
                push    ax
                push    [bp+var_2]
                call    sub_12A31
                add     sp, 4
                mov     bx, [bp+var_4]
                mov     al, [bx+0C32h]
                and     ax, 20h
                mov     [bp+var_8], al
                mov     cx, 8
                mov     ax, [bp+var_6]
                shr     ax, cl
                or      [bp+var_8], al
                mov     al, [bp+var_8]
                and     ax, 0FFh
                push    ax
                push    [bp+var_4]
                call    sub_12A31
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
sub_1321C       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_132A2       proc near               ; CODE XREF: sub_1389E+2DE↓p

var_8           = word ptr -8
var_6           = word ptr -6
var_4           = word ptr -4
var_2           = word ptr -2
arg_0           = word ptr  4
arg_2           = byte ptr  6

                push    bp
                mov     bp, sp
                sub     sp, 8
                cmp     [bp+arg_0], 6
                ja      short loc_132CC
                mov     ax, [bp+arg_0]
                shl     ax, 1
                mov     bx, 2AEh
                add     bx, ax
                mov     al, [bx+1]
                cbw
                mov     bx, ax
                mov     al, [bx+2C4h]
                cbw
                add     ax, 40h ; '@'
                mov     [bp+var_2], ax
                jmp     short loc_132E3
; ---------------------------------------------------------------------------

loc_132CC:                              ; CODE XREF: sub_132A2+B↑j
                mov     bx, [bp+arg_0]
                shl     bx, 1
                mov     al, [bx+2AEh]
                cbw
                mov     bx, ax
                mov     al, [bx+2C4h]
                cbw
                add     ax, 40h ; '@'
                mov     [bp+var_2], ax

loc_132E3:                              ; CODE XREF: sub_132A2+28↑j
                mov     bx, [bp+var_2]
                mov     al, [bx+0C32h]
                and     ax, 0FFh
                mov     [bp+var_6], ax
                and     ax, 3Fh
                mov     [bp+var_8], ax
                mov     al, [bp+arg_2]
                cbw
                mov     cx, [bp+var_8]
                sub     cx, ax
                mov     [bp+var_4], cx
                mov     ax, [bp+var_6]
                and     ax, 0FFC0h
                or      [bp+var_4], ax
                push    [bp+var_4]
                push    [bp+var_2]
                call    sub_12A31
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
sub_132A2       endp

; ---------------------------------------------------------------------------
                even

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_1331C       proc near               ; CODE XREF: sub_13398+107↓p
                                        ; sub_1389E+3A↓p ...

var_6           = word ptr -6
var_4           = word ptr -4
var_2           = byte ptr -2
arg_0           = byte ptr  4

                push    bp
                mov     bp, sp
                sub     sp, 6
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                cmp     ax, 6
                jge     short loc_13360
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                push    ax
                call    sub_13052
                add     sp, 2
                add     ax, 0B0h
                mov     [bp+var_4], ax
                mov     bx, ax
                mov     al, [bx+0C32h]
                and     ax, 0DFh
                mov     [bp+var_2], al
                mov     al, [bp+var_2]
                and     ax, 0FFh
                push    ax
                push    [bp+var_4]
                call    sub_12A31
                add     sp, 4
                jmp     short loc_13394
; ---------------------------------------------------------------------------
                even

loc_13360:                              ; CODE XREF: sub_1331C+10↑j
                mov     al, byte_1271F
                and     ax, 0FFh
                mov     [bp+var_6], ax
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                mov     bx, ax
                add     bx, 0FFFAh
                mov     al, [bx+28Ch]
                cbw
                not     ax
                mov     cx, [bp+var_6]
                and     cx, ax
                mov     [bp+var_2], cl
                mov     al, [bp+var_2]
                and     ax, 0FFh
                push    ax
                mov     ax, 0BDh
                push    ax
                call    sub_12A31
                add     sp, 4

loc_13394:                              ; CODE XREF: sub_1331C+41↑j
                mov     sp, bp
                pop     bp
                retn
sub_1331C       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_13398       proc near               ; CODE XREF: sub_1389E+267↓p
                                        ; sub_13B8C+66↓p ...

var_6           = word ptr -6
var_4           = word ptr -4
var_2           = byte ptr -2
arg_0           = byte ptr  4
arg_2           = byte ptr  6
arg_4           = byte ptr  8
arg_6           = byte ptr  0Ah

                push    bp
                mov     bp, sp
                sub     sp, 6
                push    si
                push    di
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                mov     bx, ax
                shl     bx, 1
                shl     bx, 1
                shl     bx, 1
                mov     al, [bx+0D32h]
                and     ax, 0FFh
                jnz     short loc_133BB
                jmp     loc_13492
; ---------------------------------------------------------------------------

loc_133BB:                              ; CODE XREF: sub_13398+1E↑j
                mov     al, byte_12658
                and     ax, 0FFh
                jz      short loc_133C6
                jmp     loc_1342C
; ---------------------------------------------------------------------------

loc_133C6:                              ; CODE XREF: sub_13398+29↑j
                mov     al, [bp+arg_0]
                mov     byte_1265F, al
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                mov     bx, ax
                shl     bx, 1
                shl     bx, 1
                shl     bx, 1
                mov     al, [bx+0D32h]
                mov     byte_12658, al
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bx+2]
                mov     word_1265A, ax
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bx+4]
                mov     word_125C2, ax
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bx+6]
                mov     word_125C6, ax
                call    sub_12B4B
                jmp     loc_1348F
; ---------------------------------------------------------------------------

loc_1342C:                              ; CODE XREF: sub_13398+2B↑j
                mov     al, [bp+arg_0]
                mov     byte_12660, al
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                mov     bx, ax
                shl     bx, 1
                shl     bx, 1
                shl     bx, 1
                mov     al, [bx+0D32h]
                mov     byte_12659, al
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bx+2]
                mov     word_1265C, ax
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bx+4]
                mov     word_125C4, ax
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bx+6]
                mov     word_125C8, ax
                call    sub_12B4B

loc_1348F:                              ; CODE XREF: sub_13398+91↑j
                jmp     loc_1353E
; ---------------------------------------------------------------------------

loc_13492:                              ; CODE XREF: sub_13398+20↑j
                cmp     [bp+arg_6], 0
                jnz     short loc_134A5
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                push    ax
                call    sub_1331C
                add     sp, 2

loc_134A5:                              ; CODE XREF: sub_13398+FE↑j
                mov     al, [bp+arg_2]
                and     ax, 0FFh
                push    ax
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                push    ax
                call    sub_13132
                add     sp, 4
                mov     al, [bp+arg_4]
                and     ax, 0FFh
                push    ax
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                push    ax
                call    sub_1307E
                add     sp, 4
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                cmp     ax, 6
                jge     short loc_1350C
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                push    ax
                call    sub_13052
                add     sp, 2
                add     ax, 0B0h
                mov     [bp+var_4], ax
                mov     bx, ax
                mov     al, [bx+0C32h]
                and     ax, 0FFh
                or      ax, 20h
                mov     [bp+var_2], al
                mov     al, [bp+var_2]
                and     ax, 0FFh
                push    ax
                push    [bp+var_4]
                call    sub_12A31
                add     sp, 4
                jmp     short loc_1353E
; ---------------------------------------------------------------------------

loc_1350C:                              ; CODE XREF: sub_13398+13E↑j
                mov     al, byte_1271F
                and     ax, 0FFh
                mov     [bp+var_6], ax
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                mov     bx, ax
                add     bx, 0FFFAh
                mov     al, [bx+28Ch]
                cbw
                mov     cx, [bp+var_6]
                or      cx, ax
                mov     [bp+var_2], cl
                mov     al, [bp+var_2]
                and     ax, 0FFh
                push    ax
                mov     ax, 0BDh
                push    ax
                call    sub_12A31
                add     sp, 4

loc_1353E:                              ; CODE XREF: sub_13398:loc_1348F↑j
                                        ; sub_13398+172↑j
                pop     di
                pop     si
                mov     sp, bp
                pop     bp
                retn
sub_13398       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_13544       proc near               ; CODE XREF: sub_1376E↓p

var_2           = byte ptr -2

                push    bp
                mov     bp, sp
                sub     sp, 2
                mov     al, byte_1271F
                and     ax, 3Fh
                mov     [bp+var_2], al
                mov     al, byte_11CDA
                and     ax, 0FFh
                jz      short loc_13562
                mov     ax, 80h
                jmp     short loc_13564
; ---------------------------------------------------------------------------
                even

loc_13562:                              ; CODE XREF: sub_13544+16↑j
                xor     ax, ax

loc_13564:                              ; CODE XREF: sub_13544+1B↑j
                or      [bp+var_2], al
                mov     al, byte_11CDB
                and     ax, 0FFh
                jz      short loc_13574
                mov     ax, 40h ; '@'
                jmp     short loc_13576
; ---------------------------------------------------------------------------

loc_13574:                              ; CODE XREF: sub_13544+29↑j
                xor     ax, ax

loc_13576:                              ; CODE XREF: sub_13544+2E↑j
                or      [bp+var_2], al
                mov     al, [bp+var_2]
                and     ax, 0FFh
                push    ax
                mov     ax, 0BDh
                push    ax
                call    sub_12A31
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
sub_13544       endp


; =============== S U B R O U T I N E =======================================


sub_1358E       proc near               ; CODE XREF: sub_1376E+3↓p
                mov     al, byte_11CDC
                and     ax, 0FFh
                jz      short loc_1359C
                mov     ax, 40h ; '@'
                jmp     short loc_1359E
; ---------------------------------------------------------------------------
                even

loc_1359C:                              ; CODE XREF: sub_1358E+6↑j
                xor     ax, ax

loc_1359E:                              ; CODE XREF: sub_1358E+B↑j
                push    ax
                mov     ax, 8
                push    ax
                call    sub_12A31
                add     sp, 4
                retn
sub_1358E       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_135AA       proc near               ; CODE XREF: sub_1376E+6↓p

var_4           = word ptr -4
var_2           = word ptr -2

                push    bp
                mov     bp, sp
                sub     sp, 4
                mov     ax, word_127BC
                add     ax, 40h ; '@'
                mov     [bp+var_4], ax
                mov     bx, word_127BE
                mov     al, [bx+6]
                and     ax, 3Fh
                mov     cx, 3Fh ; '?'
                sub     cx, ax
                mov     [bp+var_2], cx
                mov     bx, word_127BE
                mov     al, [bx+7]
                and     ax, 0FFh
                mov     cx, 6
                shl     ax, cl
                or      [bp+var_2], ax
                push    [bp+var_2]
                mov     ax, [bp+var_4]
                push    ax
                call    sub_12A31
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
sub_135AA       endp

; ---------------------------------------------------------------------------
                even

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_135F0       proc near               ; CODE XREF: sub_1376E+9↓p

var_4           = word ptr -4
var_2           = word ptr -2

                push    bp
                mov     bp, sp
                sub     sp, 4
                mov     ax, word_127BA
                add     ax, 0C0h
                mov     [bp+var_4], ax
                mov     bx, word_127BE
                mov     al, [bx+0Ah]
                and     ax, 0FFh
                shl     ax, 1
                mov     [bp+var_2], ax
                mov     bx, word_127BE
                mov     al, [bx+0Dh]
                and     ax, 0FFh
                jz      short loc_13620
                xor     ax, ax
                jmp     short loc_13623
; ---------------------------------------------------------------------------
                even

loc_13620:                              ; CODE XREF: sub_135F0+29↑j
                mov     ax, 1

loc_13623:                              ; CODE XREF: sub_135F0+2D↑j
                or      [bp+var_2], ax
                push    [bp+var_2]
                mov     ax, [bp+var_4]
                push    ax
                call    sub_12A31
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
sub_135F0       endp

; ---------------------------------------------------------------------------
                even

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_13638       proc near               ; CODE XREF: sub_1376E+C↓p

var_4           = word ptr -4
var_2           = word ptr -2

                push    bp
                mov     bp, sp
                sub     sp, 4
                mov     ax, word_127BC
                add     ax, 60h ; '`'
                mov     [bp+var_4], ax
                mov     bx, word_127BE
                mov     al, [bx]
                and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     [bp+var_2], ax
                mov     bx, word_127BE
                mov     al, [bx+1]
                and     ax, 0Fh
                or      [bp+var_2], ax
                push    [bp+var_2]
                mov     ax, [bp+var_4]
                push    ax
                call    sub_12A31
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
sub_13638       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_1367A       proc near               ; CODE XREF: sub_1376E+F↓p

var_4           = word ptr -4
var_2           = word ptr -2

                push    bp
                mov     bp, sp
                sub     sp, 4
                mov     ax, word_127BC
                add     ax, 80h
                mov     [bp+var_4], ax
                mov     bx, word_127BE
                mov     al, [bx+2]
                and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     [bp+var_2], ax
                mov     bx, word_127BE
                mov     al, [bx+3]
                and     ax, 0Fh
                or      [bp+var_2], ax
                push    [bp+var_2]
                mov     ax, [bp+var_4]
                push    ax
                call    sub_12A31
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
sub_1367A       endp

; ---------------------------------------------------------------------------
                even

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_136BE       proc near               ; CODE XREF: sub_1376E+12↓p

var_4           = word ptr -4
var_2           = word ptr -2

                push    bp
                mov     bp, sp
                sub     sp, 4
                mov     ax, word_127BC
                add     ax, 20h ; ' '
                mov     [bp+var_4], ax
                mov     bx, word_127BE
                mov     al, [bx+0Bh]
                and     ax, 0FFh
                jz      short loc_136E0
                mov     ax, 80h
                jmp     short loc_136E2
; ---------------------------------------------------------------------------
                even

loc_136E0:                              ; CODE XREF: sub_136BE+1A↑j
                xor     ax, ax

loc_136E2:                              ; CODE XREF: sub_136BE+1F↑j
                mov     [bp+var_2], ax
                mov     bx, word_127BE
                mov     al, [bx+0Ch]
                and     ax, 0FFh
                jz      short loc_136F6
                mov     ax, 40h ; '@'
                jmp     short loc_136F8
; ---------------------------------------------------------------------------

loc_136F6:                              ; CODE XREF: sub_136BE+31↑j
                xor     ax, ax

loc_136F8:                              ; CODE XREF: sub_136BE+36↑j
                add     [bp+var_2], ax
                mov     bx, word_127BE
                mov     al, [bx+4]
                and     ax, 0FFh
                jz      short loc_1370C
                mov     ax, 20h ; ' '
                jmp     short loc_1370E
; ---------------------------------------------------------------------------

loc_1370C:                              ; CODE XREF: sub_136BE+47↑j
                xor     ax, ax

loc_1370E:                              ; CODE XREF: sub_136BE+4C↑j
                add     [bp+var_2], ax
                mov     bx, word_127BE
                mov     al, [bx+5]
                and     ax, 0FFh
                jz      short loc_13722
                mov     ax, 10h
                jmp     short loc_13724
; ---------------------------------------------------------------------------

loc_13722:                              ; CODE XREF: sub_136BE+5D↑j
                xor     ax, ax

loc_13724:                              ; CODE XREF: sub_136BE+62↑j
                add     [bp+var_2], ax
                mov     bx, word_127BE
                mov     al, [bx+9]
                and     ax, 0Fh
                add     [bp+var_2], ax
                push    [bp+var_2]
                mov     ax, [bp+var_4]
                push    ax
                call    sub_12A31
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
sub_136BE       endp

; ---------------------------------------------------------------------------
                even

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_13746       proc near               ; CODE XREF: sub_1376E+15↓p

var_2           = word ptr -2

                push    bp
                mov     bp, sp
                sub     sp, 2
                mov     ax, word_127BC
                add     ax, 0E0h
                mov     [bp+var_2], ax
                mov     bx, word_127BE
                mov     al, [bx+8]
                and     ax, 3
                push    ax
                push    [bp+var_2]
                call    sub_12A31
                add     sp, 4
                mov     sp, bp
                pop     bp
                retn
sub_13746       endp


; =============== S U B R O U T I N E =======================================


sub_1376E       proc near               ; CODE XREF: sub_13788:loc_137D6↓p
                                        ; sub_13788+10C↓p
                call    sub_13544
                call    sub_1358E
                call    sub_135AA
                call    sub_135F0
                call    sub_13638
                call    sub_1367A
                call    sub_136BE
                call    sub_13746
                retn
sub_1376E       endp

; ---------------------------------------------------------------------------
                even

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_13788       proc near               ; CODE XREF: sub_1389E+126↓p
                                        ; sub_13B8C+35↓p ...

var_2           = word ptr -2
arg_0           = byte ptr  4
arg_2           = byte ptr  6

                push    bp
                mov     bp, sp
                sub     sp, 2
                push    si
                push    di
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                push    ax
                call    sub_13052
                add     sp, 2
                mov     word_127BA, ax
                mov     al, [bp+arg_2]
                and     ax, 0FFh
                mov     cx, 2Ch ; ','
                imul    cx
                mov     cx, 2D6h
                add     cx, ax
                mov     word_127BE, cx
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                mov     bx, ax
                shl     bx, 1
                mov     al, [bx+2AEh]
                cbw
                mov     bx, ax
                mov     al, [bx+2C4h]
                cbw
                mov     word_127BC, ax
                cmp     ax, 14h
                jb      short loc_137D6
                jmp     loc_1385B
; ---------------------------------------------------------------------------

loc_137D6:                              ; CODE XREF: sub_13788+49↑j
                call    sub_1376E
                mov     bx, word_127BE
                mov     al, [bx+0Eh]
                mov     [bp+var_2], ax
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                mov     bx, ax
                shl     bx, 1
                shl     bx, 1
                shl     bx, 1
                mov     ax, [bp+var_2]
                mov     [bx+0D32h], al
                mov     bx, word_127BE
                mov     ax, [bx+10h]
                mov     [bp+var_2], ax
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bp+var_2]
                mov     [bx+2], ax
                mov     bx, word_127BE
                mov     ax, [bx+12h]
                mov     [bp+var_2], ax
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bp+var_2]
                mov     [bx+4], ax
                mov     bx, word_127BE
                mov     ax, [bx+14h]
                mov     [bp+var_2], ax
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                shl     ax, 1
                shl     ax, 1
                shl     ax, 1
                mov     bx, 0D32h
                add     bx, ax
                mov     ax, [bp+var_2]
                mov     [bx+6], ax

loc_1385B:                              ; CODE XREF: sub_13788+4B↑j
                mov     al, [bp+arg_2]
                and     ax, 0FFh
                mov     cx, 2Ch ; ','
                imul    cx
                mov     cx, 2D6h
                add     cx, ax
                mov     ax, 16h
                add     cx, ax
                mov     word_127BE, cx
                mov     al, [bp+arg_0]
                and     ax, 0FFh
                shl     ax, 1
                mov     bx, 2AEh
                add     bx, ax
                mov     al, [bx+1]
                cbw
                mov     bx, ax
                mov     al, [bx+2C4h]
                cbw
                mov     word_127BC, ax
                cmp     ax, 14h
                jnb     short loc_13897
                call    sub_1376E

loc_13897:                              ; CODE XREF: sub_13788+10A↑j
                pop     di
                pop     si
                mov     sp, bp
                pop     bp
                retn
sub_13788       endp

; ---------------------------------------------------------------------------
                even

; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_1389E       proc near               ; CODE XREF: sub_13C8C+13↓p
                                        ; sub_13C8C+1D↓p ...

var_6           = word ptr -6
var_4           = byte ptr -4
var_2           = word ptr -2
arg_0           = word ptr  4

                push    bp
                mov     bp, sp
                sub     sp, 6
                push    si
                push    di
                mov     [bp+var_4], 0
                mov     bx, [bp+arg_0]
                mov     al, [bx]
                and     ax, 0FFh
                jnz     short loc_138B8
                jmp     loc_13B2C
; ---------------------------------------------------------------------------

loc_138B8:                              ; CODE XREF: sub_1389E+15↑j
                mov     bx, [bp+arg_0]
                mov     al, [bx+7]
                and     ax, 0FFh
                jz      short loc_138DE
                mov     bx, [bp+arg_0]
                dec     byte ptr [bx+7]
                mov     al, [bx+7]
                and     ax, 0FFh
                jnz     short loc_138DE
                mov     al, byte_1265E
                and     ax, 0FFh
                push    ax
                call    sub_1331C
                add     sp, 2

loc_138DE:                              ; CODE XREF: sub_1389E+23↑j
                                        ; sub_1389E+31↑j
                mov     bx, [bp+arg_0]
                dec     byte ptr [bx]
                mov     al, [bx]
                and     ax, 0FFh
                jle     short loc_138ED
                jmp     loc_13B2C
; ---------------------------------------------------------------------------

loc_138ED:                              ; CODE XREF: sub_1389E+4A↑j
                                        ; sub_1389E:def_13A6F↓j
                mov     bx, [bp+arg_0]
                mov     ax, [bx+0Ch]
                mov     bx, [bp+arg_0]
                mov     cx, [bx+0Ah]
                add     cx, ax
                mov     [bp+var_2], cx
                mov     bx, cx
                mov     al, [bx]
                cbw
                and     ax, 80h
                jnz     short loc_1390B
                jmp     loc_13A88
; ---------------------------------------------------------------------------

loc_1390B:                              ; CODE XREF: sub_1389E+68↑j
                mov     bx, [bp+var_2]
                mov     al, [bx]
                cbw
                jmp     loc_13A60
; ---------------------------------------------------------------------------
                mov     bx, [bp+arg_0]
                cmp     word ptr [bx+10h], 0
                jnz     short loc_1393A
                inc     [bp+var_2]
                mov     bx, [bp+var_2]
                mov     al, [bx]
                cbw
                mov     bx, [bp+arg_0]
                mov     [bx+10h], ax
                mov     bx, [bp+arg_0]
                mov     ax, [bx+0Eh]
                mov     bx, [bp+arg_0]
                mov     [bx+0Ch], ax
                jmp     short loc_1396A
; ---------------------------------------------------------------------------

loc_1393A:                              ; CODE XREF: sub_1389E+7D↑j
                mov     bx, [bp+arg_0]
                dec     word ptr [bx+10h]
                mov     bx, [bp+arg_0]
                cmp     word ptr [bx+10h], 0
                jnz     short loc_1395E
                mov     bx, [bp+arg_0]
                add     word ptr [bx+0Ch], 2
                mov     bx, [bp+arg_0]
                mov     ax, [bx+0Ch]
                mov     bx, [bp+arg_0]
                mov     [bx+0Eh], ax
                jmp     short loc_1396A
; ---------------------------------------------------------------------------

loc_1395E:                              ; CODE XREF: sub_1389E+A9↑j
                mov     bx, [bp+arg_0]
                mov     ax, [bx+0Eh]
                mov     bx, [bp+arg_0]
                mov     [bx+0Ch], ax

loc_1396A:                              ; CODE XREF: sub_1389E+9A↑j
                                        ; sub_1389E+BE↑j
                jmp     def_13A6F       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------
                even

loc_1396E:                              ; CODE XREF: sub_1389E+1D1↓j
                                        ; DATA XREF: sub_1389E:jpt_13A6F↓o
                mov     bx, [bp+arg_0]  ; jumptable 00013A6F case -2
                inc     word ptr [bx+0Ch]
                mov     ax, [bx+0Ch]
                mov     bx, [bp+arg_0]
                mov     [bx+0Eh], ax
                jmp     def_13A6F       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------

loc_13980:                              ; CODE XREF: sub_1389E+1D1↓j
                                        ; DATA XREF: sub_1389E:jpt_13A6F↓o
                mov     bx, [bp+arg_0]  ; jumptable 00013A6F case -3
                cmp     word ptr [bx+12h], 0
                jnz     short loc_13994
                mov     bx, [bp+arg_0]
                mov     word ptr [bx+0Ch], 0
                jmp     short loc_1399A
; ---------------------------------------------------------------------------
                even

loc_13994:                              ; CODE XREF: sub_1389E+E9↑j
                mov     bx, [bp+arg_0]
                call    word ptr [bx+12h]

loc_1399A:                              ; CODE XREF: sub_1389E+F3↑j
                jmp     def_13A6F       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------
                even

loc_1399E:                              ; CODE XREF: sub_1389E+1D1↓j
                                        ; DATA XREF: sub_1389E:jpt_13A6F↓o
                inc     [bp+var_2]      ; jumptable 00013A6F case -4
                mov     bx, [bp+var_2]
                mov     al, [bx]
                mov     bx, [bp+arg_0]
                mov     [bx+4], al
                mov     bx, [bp+arg_0]
                add     word ptr [bx+0Ch], 2
                mov     bx, [bp+arg_0]
                mov     al, [bx+4]
                and     ax, 0FFh
                push    ax
                mov     al, byte_1265E
                and     ax, 0FFh
                push    ax
                call    sub_13788
                add     sp, 4
                jmp     def_13A6F       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------
                even

loc_139CE:                              ; CODE XREF: sub_1389E+1D1↓j
                                        ; DATA XREF: sub_1389E:jpt_13A6F↓o
                inc     [bp+var_2]      ; jumptable 00013A6F case -5
                mov     bx, [bp+var_2]
                mov     al, [bx]
                mov     bx, [bp+arg_0]
                mov     [bx+6], al
                mov     bx, [bp+arg_0]
                add     word ptr [bx+0Ch], 2
                jmp     def_13A6F       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------

loc_139E6:                              ; CODE XREF: sub_1389E+1D1↓j
                                        ; DATA XREF: sub_1389E:jpt_13A6F↓o
                inc     [bp+var_2]      ; jumptable 00013A6F case -6
                mov     bx, [bp+var_2]
                mov     al, [bx]
                mov     bx, [bp+arg_0]
                mov     [bx+1], al
                mov     bx, [bp+arg_0]
                add     word ptr [bx+0Ch], 2
                jmp     def_13A6F       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------

loc_139FE:                              ; CODE XREF: sub_1389E+1D1↓j
                                        ; DATA XREF: sub_1389E:jpt_13A6F↓o
                inc     [bp+var_2]      ; jumptable 00013A6F case -7
                mov     bx, [bp+var_2]
                mov     al, [bx]
                mov     bx, [bp+arg_0]
                mov     [bx+5], al
                mov     bx, [bp+arg_0]
                add     word ptr [bx+0Ch], 2
                mov     bx, [bp+arg_0]
                mov     al, [bx+5]
                and     ax, 0FFh
                push    ax
                mov     al, byte_1265E
                and     ax, 0FFh
                push    ax
                call    sub_1307E
                add     sp, 4
                jmp     def_13A6F       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------
                even

loc_13A2E:                              ; CODE XREF: sub_1389E+1D1↓j
                                        ; DATA XREF: sub_1389E:jpt_13A6F↓o
                inc     [bp+var_2]      ; jumptable 00013A6F case -8
                mov     bx, [bp+var_2]
                mov     al, [bx]
                mov     bx, [bp+arg_0]
                mov     [bx+9], al
                inc     [bp+var_2]
                mov     bx, [bp+var_2]
                mov     al, [bx]
                mov     bx, [bp+arg_0]
                mov     [bx+2], al
                mov     bx, [bp+arg_0]
                mov     byte ptr [bx+8], 1
                mov     bx, [bp+arg_0]
                add     word ptr [bx+0Ch], 3
                jmp     def_13A6F       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------
                even
                jmp     def_13A6F       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------
                even

loc_13A60:                              ; CODE XREF: sub_1389E+73↑j
                sub     ax, 0FFF8h      ; switch 7 cases
                cmp     ax, 7
                jbe     short loc_13A6B
                jmp     def_13A6F       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------

loc_13A6B:                              ; CODE XREF: sub_1389E+1C8↑j
                shl     ax, 1
                mov     bx, ax
                jmp     cs:jpt_13A6F[bx] ; switch jump
; ---------------------------------------------------------------------------
jpt_13A6F       dw offset loc_13A2E     ; DATA XREF: sub_1389E+1D1↑r
                dw offset loc_139FE     ; jump table for switch statement
                dw offset loc_139E6
                dw offset loc_139CE
                dw offset loc_1399E
                dw offset loc_13980
                dw offset loc_1396E
                align 4

def_13A6F:                              ; CODE XREF: sub_1389E:loc_1396A↑j
                                        ; sub_1389E+DF↑j ...
                jmp     loc_138ED       ; jumptable 00013A6F default case
; ---------------------------------------------------------------------------
                even

loc_13A88:                              ; CODE XREF: sub_1389E+6A↑j
                mov     bx, [bp+arg_0]
                mov     ax, [bx+0Ch]
                mov     bx, [bp+arg_0]
                mov     cx, [bx+0Ah]
                add     cx, ax
                mov     [bp+var_2], cx
                mov     bx, [bp+var_2]
                inc     [bp+var_2]
                mov     al, [bx]
                mov     bx, [bp+arg_0]
                mov     [bx+3], al
                mov     bx, [bp+var_2]
                inc     [bp+var_2]
                mov     al, [bx]
                mov     bx, [bp+arg_0]
                mov     [bx], al
                mov     bx, [bp+arg_0]
                add     word ptr [bx+0Ch], 2
                mov     bx, [bp+arg_0]
                mov     al, [bx+3]
                and     ax, 0FFh
                jz      short loc_13AD0
                mov     bx, [bp+arg_0]
                mov     al, [bx]
                and     ax, 0FFh
                jnz     short loc_13AE0

loc_13AD0:                              ; CODE XREF: sub_1389E+226↑j
                mov     al, byte_1265E
                and     ax, 0FFh
                push    ax
                call    sub_1331C
                add     sp, 2
                jmp     loc_13B2C
; ---------------------------------------------------------------------------

loc_13AE0:                              ; CODE XREF: sub_1389E+230↑j
                mov     bx, [bp+arg_0]
                mov     al, [bx+7]
                and     ax, 0FFh
                push    ax
                mov     bx, [bp+arg_0]
                mov     al, [bx+5]
                and     ax, 0FFh
                push    ax
                mov     bx, [bp+arg_0]
                mov     al, [bx+3]
                and     ax, 0FFh
                push    ax
                mov     al, byte_1265E
                and     ax, 0FFh
                push    ax
                call    sub_13398
                add     sp, 8
                mov     bx, [bp+arg_0]
                mov     al, [bx]
                and     ax, 0FFh
                mov     bx, [bp+arg_0]
                mov     cl, [bx+6]
                mov     [bp+var_6], ax
                mov     ax, cx
                and     ax, 0FFh
                mov     cx, [bp+var_6]
                sub     cx, ax
                mov     bx, [bp+arg_0]
                mov     [bx+7], cl

loc_13B2C:                              ; CODE XREF: sub_1389E+17↑j
                                        ; sub_1389E+4C↑j ...
                mov     bx, [bp+arg_0]
                cmp     byte ptr [bx+1], 0
                jz      short loc_13B4A
                mov     bx, [bp+arg_0]
                mov     al, [bx+1]
                cbw
                push    ax
                mov     al, byte_1265E
                and     ax, 0FFh
                push    ax
                call    sub_1321C
                add     sp, 4

loc_13B4A:                              ; CODE XREF: sub_1389E+295↑j
                mov     bx, [bp+arg_0]
                dec     byte ptr [bx+8]
                mov     al, [bx+8]
                and     ax, 0FFh
                jnz     short loc_13B82
                mov     bx, [bp+arg_0]
                mov     al, [bx+9]
                mov     bx, [bp+arg_0]
                mov     [bx+8], al
                mov     bx, [bp+arg_0]
                cmp     byte ptr [bx+2], 0
                jz      short loc_13B82
                mov     bx, [bp+arg_0]
                mov     al, [bx+2]
                cbw
                push    ax
                mov     al, byte_1265E
                and     ax, 0FFh
                push    ax
                call    sub_132A2
                add     sp, 4

loc_13B82:                              ; CODE XREF: sub_1389E+2B8↑j
                                        ; sub_1389E+2CD↑j
                inc     byte_1265E
                pop     di
                pop     si
                mov     sp, bp
                pop     bp
                retn
sub_1389E       endp


; =============== S U B R O U T I N E =======================================

; Attributes: bp-based frame

sub_13B8C       proc near               ; CODE XREF: sub_13C8C+4B↓p

var_2           = word ptr -2

                push    bp
                mov     bp, sp
                sub     sp, 2
                push    si
                push    di
                mov     al, byte_11CB6
                and     ax, 0FFh
                mov     [bp+var_2], ax
                mov     al, byte_11CB7
                and     ax, 0FFh
                mov     cx, [bp+var_2]
                cmp     cx, ax
                jnz     short loc_13BAE
                jmp     loc_13C2E
; ---------------------------------------------------------------------------

loc_13BAE:                              ; CODE XREF: sub_13B8C+1D↑j
                mov     al, byte_11CB6
                and     ax, 0FFh
                jnz     short loc_13BB9
                jmp     loc_13C10
; ---------------------------------------------------------------------------

loc_13BB9:                              ; CODE XREF: sub_13B8C+28↑j
                mov     ax, 6
                push    ax
                mov     ax, 5
                push    ax
                call    sub_13788
                add     sp, 4
                mov     ax, 1
                push    ax
                mov     ax, 6
                push    ax
                call    sub_13788
                add     sp, 4
                mov     ax, 0Fh
                push    ax
                mov     ax, 5
                push    ax
                call    sub_130EA
                add     sp, 4
                xor     ax, ax
                push    ax
                mov     ax, 0Fh
                push    ax
                mov     ax, 0Bh
                push    ax
                mov     ax, 5
                push    ax
                call    sub_13398
                add     sp, 8
                xor     ax, ax
                push    ax
                mov     ax, 0Fh
                push    ax
                mov     ax, 37h ; '7'
                push    ax
                mov     ax, 6
                push    ax
                call    sub_13398
                add     sp, 8
                jmp     short loc_13C24
; ---------------------------------------------------------------------------
                even

loc_13C10:                              ; CODE XREF: sub_13B8C+2A↑j
                mov     ax, 5
                push    ax
                call    sub_1331C
                add     sp, 2
                mov     ax, 6
                push    ax
                call    sub_1331C
                add     sp, 2

loc_13C24:                              ; CODE XREF: sub_13B8C+81↑j
                mov     al, byte_11CB6
                mov     byte_11CB7, al
                jmp     loc_13C85
; ---------------------------------------------------------------------------
                even

loc_13C2E:                              ; CODE XREF: sub_13B8C+1F↑j
                mov     al, byte_11CB6
                and     ax, 0FFh
                jnz     short loc_13C39
                jmp     loc_13C85
; ---------------------------------------------------------------------------

loc_13C39:                              ; CODE XREF: sub_13B8C+A8↑j
                mov     ax, word_11CB0
                cmp     word_11CAE, ax
                jz      short loc_13C85
                mov     ax, word_11CAE
                add     ax, 8FCh
                push    ax
                mov     ax, 5
                push    ax
                call    sub_131C2
                add     sp, 4
                mov     cx, 6
                mov     ax, word_11CAE
                shr     ax, cl
                add     ax, 0Fh
                push    ax
                mov     ax, 6
                push    ax
                call    sub_1307E
                add     sp, 4
                mov     cx, 7
                mov     ax, word_11CAE
                shr     ax, cl
                add     ax, 0Fh
                push    ax
                mov     ax, 5
                push    ax
                call    sub_1307E
                add     sp, 4
                mov     ax, word_11CAE
                mov     word_11CB0, ax

loc_13C85:                              ; CODE XREF: sub_13B8C+9E↑j
                                        ; sub_13B8C+AA↑j ...
                pop     di
                pop     si
                mov     sp, bp
                pop     bp
                retn
sub_13B8C       endp

; ---------------------------------------------------------------------------
                even

; =============== S U B R O U T I N E =======================================


sub_13C8C       proc near               ; CODE XREF: sub_12A70+23↑P
                cmp     byte_125CA, 0
                jnz     short loc_13C96
                jmp     locret_13CDA
; ---------------------------------------------------------------------------

loc_13C96:                              ; CODE XREF: sub_13C8C+5↑j
                mov     byte_1265E, 0
                mov     ax, 0B9Ch
                push    ax
                call    sub_1389E
                add     sp, 2
                mov     ax, 0BB0h
                push    ax
                call    sub_1389E
                add     sp, 2
                mov     ax, 0BC4h
                push    ax
                call    sub_1389E
                add     sp, 2
                mov     ax, 0BD8h
                push    ax
                call    sub_1389E
                add     sp, 2
                mov     ax, 0BECh
                push    ax
                call    sub_1389E
                add     sp, 2
                mov     ax, 0C00h
                push    ax
                call    sub_1389E
                add     sp, 2
                call    sub_13B8C

locret_13CDA:                           ; CODE XREF: sub_13C8C+7↑j
                retn
sub_13C8C       endp

; ---------------------------------------------------------------------------
                db 0
; ---------------------------------------------------------------------------
                rcl     word ptr [bx+di], cl
                jmp     short loc_13CE3
; ---------------------------------------------------------------------------

loc_13CE0:                              ; CODE XREF: seg127c:1543↓j
                                        ; seg127c:1547↓j
                xor     ax, ax
                stosb

loc_13CE3:                              ; CODE XREF: seg127c:151E↑j
                                        ; seg127c:1526↓j ...
                lodsb
                cmp     al, 20h ; ' '
                jz      short loc_13CE3
                cmp     al, 9
                jz      short loc_13CE3
                cmp     al, 0Dh
                jnz     short loc_13CF3
                db 0E9h, 00h, 00h
; ---------------------------------------------------------------------------

loc_13CF3:                              ; CODE XREF: seg127c:152E↑j
                or      al, al
                jnz     short loc_13CFA
; ---------------------------------------------------------------------------
                db 0EBh
                db  79h ; y
                db  90h
; ---------------------------------------------------------------------------

loc_13CFA:                              ; CODE XREF: seg127c:1535↑j
                mov     ss:[bx], di
                inc     bx
                inc     bx

loc_13CFF:                              ; CODE XREF: seg127c:156C↓j
                dec     si

loc_13D00:                              ; CODE XREF: seg127c:155A↓j
                                        ; seg127c:1579↓j ...
                lodsb
                cmp     al, 20h ; ' '
                jz      short loc_13CE0
                cmp     al, 9
                jz      short loc_13CE0
                cmp     al, 0Dh
; ---------------------------------------------------------------------------
                db 74h
                db  62h ; b
; ---------------------------------------------------------------------------
                or      al, al
; ---------------------------------------------------------------------------
                db 74h
                db  5Eh ; ^
; ---------------------------------------------------------------------------
                cmp     al, 22h ; '"'
                jz      short loc_13D3C
                cmp     al, 5Ch ; '\'
                jz      short loc_13D1C
                stosb
                jmp     short loc_13D00
; ---------------------------------------------------------------------------

loc_13D1C:                              ; CODE XREF: seg127c:1557↑j
                xor     cx, cx

loc_13D1E:                              ; CODE XREF: seg127c:1562↓j
                inc     cx
                lodsb
                cmp     al, 5Ch ; '\'
                jz      short loc_13D1E
                cmp     al, 22h ; '"'
                jz      short loc_13D2E
                mov     al, 5Ch ; '\'
                rep stosb
                jmp     short loc_13CFF
; ---------------------------------------------------------------------------

loc_13D2E:                              ; CODE XREF: seg127c:1566↑j
                mov     al, 5Ch ; '\'
                shr     cx, 1
                rep stosb
                jnb     short loc_13D3C
                mov     al, 22h ; '"'
                stosb
                jmp     short loc_13D00
; ---------------------------------------------------------------------------
                db  4Eh ; N
; ---------------------------------------------------------------------------

loc_13D3C:                              ; CODE XREF: seg127c:1553↑j
                                        ; seg127c:1574↑j ...
                lodsb
                cmp     al, 0Dh
; ---------------------------------------------------------------------------
                db 74h
                db  2Eh ; .
; ---------------------------------------------------------------------------
                or      al, al
; ---------------------------------------------------------------------------
                db 74h
                db  2Ah ; *
; ---------------------------------------------------------------------------
                cmp     al, 22h ; '"'
                jz      short loc_13D00
                cmp     al, 5Ch ; '\'
                jz      short loc_13D50
                stosb
                jmp     short loc_13D3C
; ---------------------------------------------------------------------------

loc_13D50:                              ; CODE XREF: seg127c:158B↑j
                dec     bp
; ---------------------------------------------------------------------------
                db 0F0h
                db 0FFh
                db  12h
; ---------------------------------------------------------------------------
                add     [si+74h], bl
                cli
                inc     si
                xor     [di], si
; ---------------------------------------------------------------------------
                db    0
                db    0
                db    0
                db    0
                db    0
seg127c         ends

; ===========================================================================

; Segment type: Pure data

end
