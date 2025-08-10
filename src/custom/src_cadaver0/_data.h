
#ifndef ___DATA_H__
#define ___DATA_H__
#include "../asm.h"


#pragma pack(push, 1)
namespace m2c{
struct Memory{
db dummyd_0[6688];
db dummyd_1a20[581];
dw seg_10245; // 01a2:0245
db dummyd_1c67[3892];
dw word_1117b; // 01a2:117b
db dummyd_2b9d[273];
db byte_1128e; // 01a2:128e
db dummyd_2caf[32]; // 01a2:128f
db dummyd_2ccf[32]; // 01a2:12af
db dummyd_2cef[32]; // 01a2:12cf
db dummyd_2d0f[32]; // 01a2:12ef
db dummyd_2d2f[32]; // 01a2:130f
db dummyd_2d4f[32]; // 01a2:132f
db dummyd_2d6f[32]; // 01a2:134f
db dummyd_2d8f[32]; // 01a2:136f
db dummyd_2daf[32]; // 01a2:138f
db dummyd_2dcf[32]; // 01a2:13af
db dummyd_2def[32]; // 01a2:13cf
db dummyd_2e0f[32]; // 01a2:13ef
db dummyd_2e2f[32]; // 01a2:140f
db dummyd_2e4f[32]; // 01a2:142f
db dummyd_2e6f[32]; // 01a2:144f
db dummyd_2e8f;
db dummyd_2e90;
db dummyd_2e91;
db dummyd_2e92;
db dummyd_2e93;
db dummyd_2e94;
db dummyd_2e95;
db dummyd_2e96;
db dummyd_2e97;
db dummyd_2e98;
db dummyd_2e99;
db dummyd_2e9a;
db dummyd_2e9b;
db dummyd_2e9c;
db dummyd_2e9d;
db dummyd_2e9e;
db dummyd_2e9f;
db dummyd_2ea0;
db dummyd_2ea1;
db dummyd_2ea2;
db dummyd_2ea3;
db dummyd_2ea4;
db dummyd_2ea5;
db dummyd_2ea6;
db dummyd_2ea7;
db dummyd_2ea8;
db dummyd_2ea9;
db dummyd_2eaa;
db dummyd_2eab;
dd dword_1148c; // 01a2:148c
dd off_11490; // 01a2:1490
dd off_11494; // 01a2:1494
dw seg_11498; // 01a2:1498
dw seg_1149a; // 01a2:149a
db dummyd_2ebc[559];
db dummyd_30eb; // 01a2:16cb
db dummyd_30ec; // 01a2:16cc
db dummyd_30ed; // 01a2:16cd
db dummyd_30ee; // 01a2:16ce
db dummyd_30ef; // 01a2:16cf
db dummyd_30f0; // 01a2:16d0
db dummyd_30f1; // 01a2:16d1
db dummyd_30f2; // 01a2:16d2
db dummyd_30f3[916];
db dummyd_3487; // 01a2:1a67
db dummyd_3488; // 01a2:1a68
db dummyd_3489; // 01a2:1a69
db dummyd_348a; // 01a2:1a6a
db dummyd_348b; // 01a2:1a6b
db dummyd_348c; // 01a2:1a6c
db dummyd_348d; // 01a2:1a6d
db dummyd_348e; // 01a2:1a6e
db dummyd_348f[544];
db byte_11c8f; // 01a2:1c8f
db dummyd_36b0;
db dummyd_36b1; // 01a2:1c91
db dummyd_36b2; // 01a2:1c92
db dummyd_36b3; // 01a2:1c93
db dummyd_36b4;
db dummyd_36b5; // 01a2:1c95
db dummyd_36b6; // 01a2:1c96
db byte_11c97; // 01a2:1c97
db dummyd_36b8[32]; // 01a2:1c98
db dummyd_36d8;
db dummyd_36d9; // 01a2:1cb9
db dummyd_36da; // 01a2:1cba
db dummyd_36db; // 01a2:1cbb
db dummyd_36dc;
db dummyd_36dd; // 01a2:1cbd
db dummyd_36de; // 01a2:1cbe
db dummyd_36df; // 01a2:1cbf
db dummyd_36e0; // 01a2:1cc0
db dummyd_36e1[490];
dw word_11eab; // 01a2:1eab
dw dummyd_38cd; // 01a2:1ead
dw dummyd_38cf; // 01a2:1eaf
dw dummyd_38d1; // 01a2:1eb1
dw dummyd_38d3; // 01a2:1eb3
db dummyd_38d5[3926];
db dummyd_482b[32]; // 01a2:2e0b
db dummyd_484b; // 01a2:2e2b
db dummyd_484c; // 01a2:2e2c
db dummyd_484d[3658];
dw off_13c77; // 01a2:3c77
dw dummyd_5699; // 01a2:3c79
dw dummyd_569b; // 01a2:3c7b
dw dummyd_569d; // 01a2:3c7d
dw dummyd_569f; // 01a2:3c7f
dw dummyd_56a1; // 01a2:3c81
dw dummyd_56a3; // 01a2:3c83
dw dummyd_56a5; // 01a2:3c85
dw dummyd_56a7; // 01a2:3c87
dw dummyd_56a9; // 01a2:3c89
dw dummyd_56ab; // 01a2:3c8b
dw dummyd_56ad; // 01a2:3c8d
dw dummyd_56af; // 01a2:3c8f
db dummyd_56b1[11741];
db dummyd_848e; // 01a2:6a6e
db dummyd_848f[485];
dw off_16c54; // 01a2:6c54
dw dummyd_8676; // 01a2:6c56
dw dummyd_8678; // 01a2:6c58
dw dummyd_867a; // 01a2:6c5a
dw dummyd_867c; // 01a2:6c5c
dw dummyd_867e; // 01a2:6c5e
dw dummyd_8680; // 01a2:6c60
dw dummyd_8682; // 01a2:6c62
dw dummyd_8684; // 01a2:6c64
dw dummyd_8686; // 01a2:6c66
dw dummyd_8688; // 01a2:6c68
dw dummyd_868a; // 01a2:6c6a
dw dummyd_868c; // 01a2:6c6c
dw dummyd_868e; // 01a2:6c6e
dw dummyd_8690; // 01a2:6c70
db dummyd_8692[742];
db byte_16f58; // 01a2:6f58
db dummyd_8979; // 01a2:6f59
db dummyd_897a; // 01a2:6f5a
db dummyd_897b; // 01a2:6f5b
db dummyd_897c; // 01a2:6f5c
db dummyd_897d; // 01a2:6f5d
db dummyd_897e; // 01a2:6f5e
db dummyd_897f; // 01a2:6f5f
db dummyd_8980; // 01a2:6f60
db dummyd_8981; // 01a2:6f61
db dummyd_8982[1184];
db dummyd_8e22; // 01a2:7402
db dummyd_8e23[263];
db dummyd_8f2a;
db dummyd_8f2b; // 01a2:750b
db dummyd_8f2c;
db dummyd_8f2d; // 01a2:750d
db dummyd_8f2e; // 01a2:750e
db dummyd_8f2f;
db dummyd_8f30; // 01a2:7510
db dummyd_8f31; // 01a2:7511
db dummyd_8f32;
db dummyd_8f33; // 01a2:7513
db dummyd_8f34;
db dummyd_8f35; // 01a2:7515
db dummyd_8f36; // 01a2:7516
db dummyd_8f37;
db dummyd_8f38; // 01a2:7518
db dummyd_8f39; // 01a2:7519
db dummyd_8f3a;
db dummyd_8f3b; // 01a2:751b
db dummyd_8f3c; // 01a2:751c
db dummyd_8f3d;
db dummyd_8f3e; // 01a2:751e
db dummyd_8f3f; // 01a2:751f
db dummyd_8f40;
db dummyd_8f41; // 01a2:7521
db dummyd_8f42; // 01a2:7522
db dummyd_8f43[473];
dw off_176fc; // 01a2:76fc
dw dummyd_911e; // 01a2:76fe
dw dummyd_9120; // 01a2:7700
dw dummyd_9122; // 01a2:7702
dw dummyd_9124; // 01a2:7704
dw dummyd_9126; // 01a2:7706
dw dummyd_9128; // 01a2:7708
dw dummyd_912a; // 01a2:770a
dw dummyd_912c; // 01a2:770c
dw dummyd_912e; // 01a2:770e
dw dummyd_9130; // 01a2:7710
dw dummyd_9132; // 01a2:7712
dw dummyd_9134; // 01a2:7714
dw dummyd_9136; // 01a2:7716
dw dummyd_9138; // 01a2:7718
dw dummyd_913a; // 01a2:771a
dw dummyd_913c; // 01a2:771c
dw dummyd_913e; // 01a2:771e
dw dummyd_9140; // 01a2:7720
dw dummyd_9142; // 01a2:7722
dw dummyd_9144; // 01a2:7724
dw dummyd_9146; // 01a2:7726
dw dummyd_9148; // 01a2:7728
dw dummyd_914a; // 01a2:772a
dw dummyd_914c; // 01a2:772c
dw dummyd_914e; // 01a2:772e
dw dummyd_9150; // 01a2:7730
dw dummyd_9152; // 01a2:7732
dw dummyd_9154; // 01a2:7734
db dummyd_9156[102];
db dummyd_91bc; // 01a2:779c
db dummyd_91bd[124];
dw off_17819; // 01a2:7819
dw dummyd_923b; // 01a2:781b
dw dummyd_923d; // 01a2:781d
dw dummyd_923f; // 01a2:781f
dw dummyd_9241; // 01a2:7821
dw dummyd_9243; // 01a2:7823
dw dummyd_9245; // 01a2:7825
dw dummyd_9247; // 01a2:7827
dw dummyd_9249; // 01a2:7829
dw dummyd_924b; // 01a2:782b
dw dummyd_924d; // 01a2:782d
dw dummyd_924f; // 01a2:782f
dw dummyd_9251; // 01a2:7831
dw dummyd_9253; // 01a2:7833
dw dummyd_9255; // 01a2:7835
dw dummyd_9257; // 01a2:7837
dw dummyd_9259; // 01a2:7839
dw dummyd_925b; // 01a2:783b
dw dummyd_925d; // 01a2:783d
dw dummyd_925f; // 01a2:783f
dw dummyd_9261; // 01a2:7841
dw dummyd_9263; // 01a2:7843
dw dummyd_9265; // 01a2:7845
dw dummyd_9267; // 01a2:7847
dw dummyd_9269; // 01a2:7849
dw dummyd_926b; // 01a2:784b
dw dummyd_926d; // 01a2:784d
dw dummyd_926f; // 01a2:784f
dw dummyd_9271; // 01a2:7851
dw dummyd_9273; // 01a2:7853
dw dummyd_9275; // 01a2:7855
dw dummyd_9277; // 01a2:7857
dw dummyd_9279; // 01a2:7859
dw dummyd_927b; // 01a2:785b
dw dummyd_927d; // 01a2:785d
dw dummyd_927f; // 01a2:785f
dw dummyd_9281; // 01a2:7861
dw dummyd_9283; // 01a2:7863
dw dummyd_9285; // 01a2:7865
dw dummyd_9287; // 01a2:7867
dw dummyd_9289; // 01a2:7869
dw dummyd_928b; // 01a2:786b
dw dummyd_928d; // 01a2:786d
dw dummyd_928f; // 01a2:786f
dw dummyd_9291; // 01a2:7871
dw dummyd_9293; // 01a2:7873
dw dummyd_9295; // 01a2:7875
dw dummyd_9297; // 01a2:7877
dw dummyd_9299; // 01a2:7879
dw dummyd_929b; // 01a2:787b
dw dummyd_929d; // 01a2:787d
dw dummyd_929f; // 01a2:787f
dw dummyd_92a1; // 01a2:7881
dw dummyd_92a3; // 01a2:7883
dw dummyd_92a5; // 01a2:7885
dw dummyd_92a7; // 01a2:7887
dw dummyd_92a9; // 01a2:7889
dw dummyd_92ab; // 01a2:788b
dw dummyd_92ad; // 01a2:788d
dw dummyd_92af; // 01a2:788f
dw dummyd_92b1; // 01a2:7891
dw dummyd_92b3; // 01a2:7893
dw dummyd_92b5; // 01a2:7895
dw dummyd_92b7; // 01a2:7897
dw dummyd_92b9; // 01a2:7899
dw dummyd_92bb; // 01a2:789b
dw dummyd_92bd; // 01a2:789d
dw dummyd_92bf; // 01a2:789f
dw dummyd_92c1; // 01a2:78a1
dw dummyd_92c3; // 01a2:78a3
dw dummyd_92c5; // 01a2:78a5
dw dummyd_92c7; // 01a2:78a7
dw dummyd_92c9; // 01a2:78a9
dw dummyd_92cb; // 01a2:78ab
dw dummyd_92cd; // 01a2:78ad
dw dummyd_92cf; // 01a2:78af
dw dummyd_92d1; // 01a2:78b1
dw dummyd_92d3; // 01a2:78b3
dw dummyd_92d5; // 01a2:78b5
dw dummyd_92d7; // 01a2:78b7
dw dummyd_92d9; // 01a2:78b9
dw dummyd_92db; // 01a2:78bb
dw dummyd_92dd; // 01a2:78bd
dw dummyd_92df; // 01a2:78bf
dw dummyd_92e1; // 01a2:78c1
dw dummyd_92e3; // 01a2:78c3
dw dummyd_92e5; // 01a2:78c5
dw dummyd_92e7; // 01a2:78c7
dw dummyd_92e9; // 01a2:78c9
dw dummyd_92eb; // 01a2:78cb
dw dummyd_92ed; // 01a2:78cd
dw dummyd_92ef; // 01a2:78cf
dw dummyd_92f1; // 01a2:78d1
dw dummyd_92f3; // 01a2:78d3
db dummyd_92f5[3451];
db dummyd_a070; // 01a2:8650
db dummyd_a071[2060];
db dummyd_a87d[12]; // 01a2:8e5d
db dummyd_a889[8]; // 01a2:8e69
db dummyd_a891[3923];
dw dummyd_b7e4; // 01a2:9dc4
dw dummyd_b7e6; // 01a2:9dc6
dw dummyd_b7e8; // 01a2:9dc8
dw dummyd_b7ea; // 01a2:9dca
dw dummyd_b7ec; // 01a2:9dcc
dw dummyd_b7ee; // 01a2:9dce
dw dummyd_b7f0; // 01a2:9dd0
dw dummyd_b7f2; // 01a2:9dd2
dw dummyd_b7f4; // 01a2:9dd4
dw dummyd_b7f6; // 01a2:9dd6
dw dummyd_b7f8; // 01a2:9dd8
dw dummyd_b7fa; // 01a2:9dda
db dummyd_b7fc[262];
dw dummyd_b902; // 01a2:9ee2
dw dummyd_b904; // 01a2:9ee4
dw dummyd_b906; // 01a2:9ee6
dw dummyd_b908; // 01a2:9ee8
dw dummyd_b90a; // 01a2:9eea
dw dummyd_b90c; // 01a2:9eec
dw dummyd_b90e; // 01a2:9eee
dw dummyd_b910; // 01a2:9ef0
dw dummyd_b912; // 01a2:9ef2
dw dummyd_b914; // 01a2:9ef4
dw dummyd_b916; // 01a2:9ef6
dw dummyd_b918; // 01a2:9ef8
db dummyd_b91a[1809];
dw dummyd_c02b; // 01a2:a60b
dw dummyd_c02d; // 01a2:a60d
dw dummyd_c02f; // 01a2:a60f
dw dummyd_c031; // 01a2:a611
dw dummyd_c033; // 01a2:a613
dw dummyd_c035; // 01a2:a615
dw dummyd_c037; // 01a2:a617
dw dummyd_c039; // 01a2:a619
dw dummyd_c03b; // 01a2:a61b
dw dummyd_c03d; // 01a2:a61d
dw dummyd_c03f; // 01a2:a61f
db dummyd_c041[739];
dw dummyd_c324; // 01a2:a904
dw dummyd_c326; // 01a2:a906
dw dummyd_c328; // 01a2:a908
dw dummyd_c32a; // 01a2:a90a
dw dummyd_c32c; // 01a2:a90c
dw dummyd_c32e; // 01a2:a90e
dw dummyd_c330; // 01a2:a910
dw dummyd_c332; // 01a2:a912
dw dummyd_c334; // 01a2:a914
dw dummyd_c336; // 01a2:a916
dw dummyd_c338; // 01a2:a918
dw dummyd_c33a; // 01a2:a91a
db dummyd_c33c[1152];
dw dummyd_c7bc; // 01a2:ad9c
dw dummyd_c7be; // 01a2:ad9e
dw dummyd_c7c0; // 01a2:ada0
dw dummyd_c7c2; // 01a2:ada2
dw dummyd_c7c4; // 01a2:ada4
dw dummyd_c7c6; // 01a2:ada6
dw dummyd_c7c8; // 01a2:ada8
dw dummyd_c7ca; // 01a2:adaa
dw dummyd_c7cc; // 01a2:adac
dw dummyd_c7ce; // 01a2:adae
dw dummyd_c7d0; // 01a2:adb0
dw dummyd_c7d2; // 01a2:adb2
db dummyd_c7d4[584];
dw dummyd_ca1c; // 01a2:affc
dw dummyd_ca1e; // 01a2:affe
dw dummyd_ca20; // 01a2:b000
dw dummyd_ca22; // 01a2:b002
dw dummyd_ca24; // 01a2:b004
dw dummyd_ca26; // 01a2:b006
dw dummyd_ca28; // 01a2:b008
dw dummyd_ca2a; // 01a2:b00a
dw dummyd_ca2c; // 01a2:b00c
dw dummyd_ca2e; // 01a2:b00e
dw dummyd_ca30; // 01a2:b010
db dummyd_ca32[6353];
dw word_1c8e3; // 01a2:c8e3
dw word_1c8e5; // 01a2:c8e5
dw word_1c8e7; // 01a2:c8e7
dw word_1c8e9; // 01a2:c8e9
dw seg_1c8eb; // 01a2:c8eb
dw word_1c8ed; // 01a2:c8ed
dw word_1c8ef; // 01a2:c8ef
db dummyd_e311; // 01a2:c8f1
db dummyd_e312; // 01a2:c8f2
dw word_1c8f3; // 01a2:c8f3
dw word_1c8f5; // 01a2:c8f5
dw seg_1c8f7; // 01a2:c8f7
dw word_1c8f9; // 01a2:c8f9
db dummyd_e31b[184];
db dummyd_e3d3[32]; // 01a2:c9b3
db dummyd_e3f3[32]; // 01a2:c9d3
db dummyd_e413[32]; // 01a2:c9f3
db dummyd_e433[32]; // 01a2:ca13
db dummyd_e453[32]; // 01a2:ca33
db dummyd_e473[32]; // 01a2:ca53
db dummyd_e493[32]; // 01a2:ca73
db dummyd_e4b3[32]; // 01a2:ca93
db dummyd_e4d3[32]; // 01a2:cab3
db dummyd_e4f3[32]; // 01a2:cad3
db dummyd_e513[32]; // 01a2:caf3
db dummyd_e533[32]; // 01a2:cb13
db dummyd_e553[32]; // 01a2:cb33
db dummyd_e573[32]; // 01a2:cb53
db dummyd_e593[32]; // 01a2:cb73
db dummyd_e5b3[32]; // 01a2:cb93
db dummyd_e5d3[32]; // 01a2:cbb3
db dummyd_e5f3[32]; // 01a2:cbd3
db dummyd_e613[32]; // 01a2:cbf3
db dummyd_e633[32]; // 01a2:cc13
db dummyd_e653[32]; // 01a2:cc33
db dummyd_e673[32]; // 01a2:cc53
db dummyd_e693[32]; // 01a2:cc73
db dummyd_e6b3[32]; // 01a2:cc93
db dummyd_e6d3[32]; // 01a2:ccb3
db dummyd_e6f3[32]; // 01a2:ccd3
db dummyd_e713[32]; // 01a2:ccf3
db dummyd_e733[32]; // 01a2:cd13
db dummyd_e753[32]; // 01a2:cd33
db dummyd_e773[32]; // 01a2:cd53
db dummyd_e793[32]; // 01a2:cd73
db dummyd_e7b3[32]; // 01a2:cd93
db dummyd_e7d3[32]; // 01a2:cdb3
db dummyd_e7f3[32]; // 01a2:cdd3
db dummyd_e813[32]; // 01a2:cdf3
db dummyd_e833[32]; // 01a2:ce13
db dummyd_e853[32]; // 01a2:ce33
db dummyd_e873[32]; // 01a2:ce53
db dummyd_e893[32]; // 01a2:ce73
db dummyd_e8b3[32]; // 01a2:ce93
db dummyd_e8d3[32]; // 01a2:ceb3
db dummyd_e8f3[32]; // 01a2:ced3
db dummyd_e913[32]; // 01a2:cef3
db dummyd_e933[32]; // 01a2:cf13
db dummyd_e953[32]; // 01a2:cf33
db dummyd_e973[32]; // 01a2:cf53
db dummyd_e993[32]; // 01a2:cf73
db dummyd_e9b3[32]; // 01a2:cf93
db dummyd_e9d3[32]; // 01a2:cfb3
db dummyd_e9f3[32]; // 01a2:cfd3
db dummyd_ea13[32]; // 01a2:cff3
db dummyd_ea33[32]; // 01a2:d013
db dummyd_ea53[32]; // 01a2:d033
db dummyd_ea73[32]; // 01a2:d053
db dummyd_ea93[32]; // 01a2:d073
db dummyd_eab3[32]; // 01a2:d093
db dummyd_ead3[32]; // 01a2:d0b3
db dummyd_eaf3[32]; // 01a2:d0d3
db dummyd_eb13[32]; // 01a2:d0f3
db dummyd_eb33[32]; // 01a2:d113
db dummyd_eb53[32]; // 01a2:d133
db dummyd_eb73[32]; // 01a2:d153
db dummyd_eb93; // 01a2:d173
db dummyd_eb94; // 01a2:d174
db dummyd_eb95; // 01a2:d175
db dummyd_eb96; // 01a2:d176
db dummyd_eb97; // 01a2:d177
db dummyd_eb98; // 01a2:d178
db dummyd_eb99; // 01a2:d179
db dummyd_eb9a; // 01a2:d17a
db dummyd_eb9b; // 01a2:d17b
db dummyd_eb9c; // 01a2:d17c
db dummyd_eb9d; // 01a2:d17d
db dummyd_eb9e; // 01a2:d17e
db dummyd_eb9f; // 01a2:d17f
db dummyd_eba0; // 01a2:d180
db dummyd_eba1; // 01a2:d181
db dummyd_eba2[3662];
db dummyd_f9f0[3];
dw seg_1dfd3; // 0f9f:0003
db dummyd_f9f5[32]; // 0f9f:0005
db dummyd_fa15[32]; // 0f9f:0025
db dummyd_fa35[32]; // 0f9f:0045
db dummyd_fa55; // 0f9f:0065
db dummyd_fa56; // 0f9f:0066
db dummyd_fa57; // 0f9f:0067
db dummyd_fa58; // 0f9f:0068
db dummyd_fa59; // 0f9f:0069
db dummyd_fa5a; // 0f9f:006a
db dummyd_fa5b; // 0f9f:006b
db dummyd_fa5c; // 0f9f:006c
db dummyd_fa5d; // 0f9f:006d
db dummyd_fa5e; // 0f9f:006e
db dummyd_fa5f; // 0f9f:006f
db dummyd_fa60; // 0f9f:0070
db dummyd_fa61; // 0f9f:0071
db dummyd_fa62; // 0f9f:0072
db dummyd_fa63; // 0f9f:0073
db dummyd_fa64; // 0f9f:0074
db dummyd_fa65; // 0f9f:0075
db dummyd_fa66; // 0f9f:0076
db dummyd_fa67; // 0f9f:0077
db dummyd_fa68; // 0f9f:0078
db dummyd_fa69; // 0f9f:0079
db dummyd_fa6a; // 0f9f:007a
db dummyd_fa6b; // 0f9f:007b
db dummyd_fa6c; // 0f9f:007c
db dummyd_fa6d; // 0f9f:007d
db dummyd_fa6e; // 0f9f:007e
db dummyd_fa6f; // 0f9f:007f
db dummyd_fa70; // 0f9f:0080
db dummyd_fa71; // 0f9f:0081
db dummyd_fa72[8];
db dummyd_fa7a[64]; // 0f9f:008a
db dummyd_faba[12]; // 0f9f:00ca
db dummyd_fac6[11]; // 0f9f:00d6
db dummyd_fad1[11]; // 0f9f:00e1
db dummyd_fadc[11]; // 0f9f:00ec
db dummyd_fae7[11]; // 0f9f:00f7
db dummyd_faf2[18]; // 0f9f:0102
db dummyd_fb04[16]; // 0f9f:0114
db dummyd_fb14[15]; // 0f9f:0124
db dummyd_fb23[18]; // 0f9f:0133
db dummyd_fb35[14]; // 0f9f:0145
db dummyd_fb43[18]; // 0f9f:0153
db dummyd_fb55[23]; // 0f9f:0165
db dummyd_fb6c[14]; // 0f9f:017c
db dummyd_fb7a[14]; // 0f9f:018a
db dummyd_fb88[13]; // 0f9f:0198
db dummyd_fb95[15]; // 0f9f:01a5
db dummyd_fba4[15]; // 0f9f:01b4
db dummyd_fbb3[17]; // 0f9f:01c3
db dummyd_fbc4[102]; // 0f9f:01d4
db dummyd_fc2a[14]; // 0f9f:023a
db dummyd_fc38[21]; // 0f9f:0248
db dummyd_fc4d[11]; // 0f9f:025d
db dummyd_fc58[11]; // 0f9f:0268
db dummyd_fc63[12]; // 0f9f:0273
db dummyd_fc6f[12]; // 0f9f:027f
db dummyd_fc7b[12]; // 0f9f:028b
db dummyd_fc87[13]; // 0f9f:0297
db dummyd_fc94[13]; // 0f9f:02a4
db dummyd_fca1[14]; // 0f9f:02b1
db dummyd_fcaf[14]; // 0f9f:02bf
db dummyd_fcbd[13]; // 0f9f:02cd
db dummyd_fcca[13]; // 0f9f:02da
db dummyd_fcd7[14]; // 0f9f:02e7
db dummyd_fce5[14]; // 0f9f:02f5
db dummyd_fcf3[13]; // 0f9f:0303
db dummyd_fd00[13]; // 0f9f:0310
db dummyd_fd0d[14]; // 0f9f:031d
db dummyd_fd1b[14]; // 0f9f:032b
db dummyd_fd29[14]; // 0f9f:0339
db dummyd_fd37[13]; // 0f9f:0347
db dummyd_fd44[11]; // 0f9f:0354
db dummyd_fd4f[12]; // 0f9f:035f
db dummyd_fd5b[12]; // 0f9f:036b
db dummyd_fd67[32]; // 0f9f:0377
db dummyd_fd87[32]; // 0f9f:0397
db dummyd_fda7[32]; // 0f9f:03b7
db dummyd_fdc7[32]; // 0f9f:03d7
db dummyd_fde7[32]; // 0f9f:03f7
db dummyd_fe07[32]; // 0f9f:0417
db dummyd_fe27[32]; // 0f9f:0437
db dummyd_fe47; // 0f9f:0457
db dummyd_fe48;
db dummyd_fe49;
db dummyd_fe4a[103];
db dummyd_feb1; // 0f9f:04c1
db dummyd_feb2; // 0f9f:04c2
dw dummyd_feb3; // 0f9f:04c3
db dummyd_feb5[9];
db dummyd_febe; // 0f9f:04ce
db dummyd_febf[53];
db dummyd_fef4; // 0f9f:0504
db dummyd_fef5[156];
db dummyd_ff91; // 0f9f:05a1
db dummyd_ff92[145];
db dummyd_10023; // 0f9f:0633
db dummyd_10024[168];
db dummyd_100cc; // 0f9f:06dc
db dummyd_100cd[158];
db dummyd_1016b; // 0f9f:077b
db dummyd_1016c[54];
db dummyd_101a2; // 0f9f:07b2
db dummyd_101a3[87];
db dummyd_101fa; // 0f9f:080a
db dummyd_101fb[84];
db dummyd_1024f; // 0f9f:085f
db dummyd_10250[26];
db dummyd_1026a; // 0f9f:087a
db dummyd_1026b[106];
db dummyd_102d5; // 0f9f:08e5
db dummyd_102d6[118];
db dummyd_1034c; // 0f9f:095c
db dummyd_1034d[6];
db dummyd_10353; // 0f9f:0963
db dummyd_10354[165];
db dummyd_103f9; // 0f9f:0a09
db dummyd_103fa[75];
db dummyd_10445; // 0f9f:0a55
db dummyd_10446[118];
db dummyd_104bc; // 0f9f:0acc
db dummyd_104bd; // 0f9f:0acd
db dummyd_104be[90];
db dummyd_10518; // 0f9f:0b28
db dummyd_10519[27];
db dummyd_10534; // 0f9f:0b44
db dummyd_10535[140];
db dummyd_105c1; // 0f9f:0bd1
db dummyd_105c2[39];
db dummyd_105e9; // 0f9f:0bf9
db dummyd_105ea[34];
db dummyd_1060c; // 0f9f:0c1c
db dummyd_1060d[104];
db dummyd_10675; // 0f9f:0c85
db dummyd_10676[124];
db dummyd_106f2; // 0f9f:0d02
db dummyd_106f3[12];
db dummyd_106ff; // 0f9f:0d0f
db dummyd_10700[222];
db dummyd_107de; // 0f9f:0dee
db dummyd_107df[13];
db dummyd_107ec; // 0f9f:0dfc
db dummyd_107ed[162];
db dummyd_1088f; // 0f9f:0e9f
db dummyd_10890[158];
db dummyd_1092e; // 0f9f:0f3e
db dummyd_1092f[126];
db dummyd_109ad; // 0f9f:0fbd
db dummyd_109ae[71];
db dummyd_109f5; // 0f9f:1005
db dummyd_109f6[96];
db dummyd_10a56; // 0f9f:1066
db dummyd_10a57[5];
db dummyd_10a5c; // 0f9f:106c
db dummyd_10a5d; // 0f9f:106d
db dummyd_10a5e[130];
db dummyd_10ae0; // 0f9f:10f0
db dummyd_10ae1[53];
db dummyd_10b16; // 0f9f:1126
db dummyd_10b17[69];
db dummyd_10b5c; // 0f9f:116c
db dummyd_10b5d[41];
db dummyd_10b86;
db dummyd_10b87;
db dummyd_10b88;
db dummyd_10b89;
db dummyd_10b8a;
db dummyd_10b8b;
db dummyd_10b8c;
db dummyd_10b8d;
db dummyd_10b8e;
db dummyd_10b8f;
db unk_1f170; // 10b9:0000
dw seg_1f171; // 10b9:0001
dw dummyd_10b93; // 10b9:0003
db dummyd_10b95;
dw seg_1f176; // 10b9:0006
dw word_1f178; // 10b9:0008
dw seg_1f17a; // 10b9:000a
dw word_1f17c; // 10b9:000c
dw seg_1f17e; // 10b9:000e
dw word_1f180; // 10b9:0010
dw seg_1f182; // 10b9:0012
dw word_1f184; // 10b9:0014
dw word_1f186; // 10b9:0016
dw word_1f188; // 10b9:0018
dw word_1f18a; // 10b9:001a
dw word_1f18c; // 10b9:001c
dw word_1f18e; // 10b9:001e
dw word_1f190; // 10b9:0020
db dummyd_10bb2[2];
dd off_1f194; // 10b9:0024
dw word_1f198; // 10b9:0028
dw word_1f19a; // 10b9:002a
dw word_1f19c; // 10b9:002c
dw word_1f19e; // 10b9:002e
dw word_1f1a0; // 10b9:0030
dw word_1f1a2; // 10b9:0032
dw word_1f1a4; // 10b9:0034
db dummyd_10bc6[2];
dw word_1f1a8; // 10b9:0038
dw word_1f1aa; // 10b9:003a
dw word_1f1ac; // 10b9:003c
dw word_1f1ae; // 10b9:003e
dw word_1f1b0; // 10b9:0040
dw word_1f1b2; // 10b9:0042
dw word_1f1b4; // 10b9:0044
dw word_1f1b6; // 10b9:0046
dw word_1f1b8; // 10b9:0048
db dummyd_10bda[2];
dw word_1f1bc; // 10b9:004c
dw word_1f1be; // 10b9:004e
db dummyd_10be0;
db dummyd_10be1;
dw word_1f1c2; // 10b9:0052
dw word_1f1c4; // 10b9:0054
dw word_1f1c6; // 10b9:0056
dw word_1f1c8; // 10b9:0058
dw word_1f1ca; // 10b9:005a
dw word_1f1cc; // 10b9:005c
dw word_1f1ce; // 10b9:005e
dw word_1f1d0; // 10b9:0060
dw word_1f1d2; // 10b9:0062
dw word_1f1d4; // 10b9:0064
dw word_1f1d6; // 10b9:0066
db dummyd_10bf8;
db dummyd_10bf9;
db dummyd_10bfa;
db dummyd_10bfb;
db dummyd_10bfc;
db dummyd_10bfd;
dw word_1f1de; // 10b9:006e
dw word_1f1e0; // 10b9:0070
dw word_1f1e2; // 10b9:0072
dw word_1f1e4; // 10b9:0074
db dummyd_10c06;
db dummyd_10c07;
db dummyd_10c08;
db dummyd_10c09;
db dummyd_10c0a;
db dummyd_10c0b;
db dummyd_10c0c;
db dummyd_10c0d;
dw word_1f1ee; // 10b9:007e
dw word_1f1f0; // 10b9:0080
dw word_1f1f2; // 10b9:0082
dw word_1f1f4; // 10b9:0084
dw word_1f1f6; // 10b9:0086
dw word_1f1f8; // 10b9:0088
dw word_1f1fa; // 10b9:008a
dw word_1f1fc; // 10b9:008c
dw word_1f1fe; // 10b9:008e
dw word_1f200; // 10b9:0090
db dummyd_10c22;
db dummyd_10c23;
dw word_1f204; // 10b9:0094
dw word_1f206; // 10b9:0096
dw word_1f208; // 10b9:0098
dw word_1f20a; // 10b9:009a
dw word_1f20c; // 10b9:009c
dw word_1f20e; // 10b9:009e
dw word_1f210; // 10b9:00a0
db dummyd_10c32[2];
dw word_1f214; // 10b9:00a4
dw word_1f216; // 10b9:00a6
dw word_1f218; // 10b9:00a8
db dummyd_10c3a;
db dummyd_10c3b;
db dummyd_10c3c;
db dummyd_10c3d;
dw word_1f21e; // 10b9:00ae
dw word_1f220; // 10b9:00b0
dw word_1f222; // 10b9:00b2
dw word_1f224; // 10b9:00b4
dw word_1f226; // 10b9:00b6
db dummyd_10c48;
db dummyd_10c49;
db dummyd_10c4a;
db dummyd_10c4b;
db dummyd_10c4c;
db dummyd_10c4d;
db dummyd_10c4e;
db dummyd_10c4f;
db dummyd_10c50;
db dummyd_10c51;
db dummyd_10c52;
db dummyd_10c53;
db dummyd_10c54;
db dummyd_10c55;
db dummyd_10c56;
db dummyd_10c57;
db dummyd_10c58;
db dummyd_10c59;
db dummyd_10c5a;
db dummyd_10c5b;
db dummyd_10c5c;
db dummyd_10c5d;
db dummyd_10c5e;
db dummyd_10c5f;
db dummyd_10c60;
db dummyd_10c61;
db dummyd_10c62;
db dummyd_10c63;
dw word_1f244; // 10b9:00d4
dw word_1f246; // 10b9:00d6
dw word_1f248; // 10b9:00d8
db unk_1f24a; // 10b9:00da
db dummyd_10c6b;
db unk_1f24c; // 10b9:00dc
db dummyd_10c6d;
db unk_1f24e; // 10b9:00de
db dummyd_10c6f;
db unk_1f250; // 10b9:00e0
db dummyd_10c71;
db dummyd_10c72;
db dummyd_10c73;
db dummyd_10c74;
db dummyd_10c75;
db dummyd_10c76;
db dummyd_10c77;
db dummyd_10c78;
db dummyd_10c79;
dw word_1f25a; // 10b9:00ea
db dummyd_10c7c; // 10b9:00ec
db dummyd_10c7d; // 10b9:00ed
dw word_1f25e; // 10b9:00ee
db dummyd_10c80;
db dummyd_10c81;
db unk_1f262; // 10b9:00f2
db dummyd_10c83;
db unk_1f264; // 10b9:00f4
db dummyd_10c85;
db dummyd_10c86;
db dummyd_10c87;
db dummyd_10c88;
db dummyd_10c89;
db dummyd_10c8a;
db dummyd_10c8b;
db dummyd_10c8c;
db dummyd_10c8d;
db dummyd_10c8e;
db byte_1f26f; // 10b9:00ff
db dummyd_10c90[32]; // 10b9:0100
db dummyd_10cb0[32]; // 10b9:0120
db dummyd_10cd0[32]; // 10b9:0140
db dummyd_10cf0[32]; // 10b9:0160
db dummyd_10d10;
db dummyd_10d11;
db dummyd_10d12;
db dummyd_10d13;
db dummyd_10d14;
db dummyd_10d15;
db dummyd_10d16;
db dummyd_10d17;
db dummyd_10d18;
db dummyd_10d19;
db dummyd_10d1a;
db dummyd_10d1b;
db dummyd_10d1c;
db dummyd_10d1d;
db dummyd_10d1e;
db dummyd_10d1f;
db unk_1f300; // 10b9:0190
db dummyd_10d21[32]; // 10b9:0191
db dummyd_10d41;
db dummyd_10d42;
db dummyd_10d43;
db dummyd_10d44;
db dummyd_10d45;
db dummyd_10d46;
db dummyd_10d47;
db dummyd_10d48;
db dummyd_10d49;
db dummyd_10d4a;
db dummyd_10d4b;
db dummyd_10d4c;
db dummyd_10d4d;
db dummyd_10d4e;
db dummyd_10d4f;
db dummyd_10d50;
db dummyd_10d51;
db dummyd_10d52;
db dummyd_10d53;
db dummyd_10d54;
db dummyd_10d55;
db dummyd_10d56;
db dummyd_10d57;
db dummyd_10d58;
db dummyd_10d59;
db dummyd_10d5a;
db dummyd_10d5b;
db dummyd_10d5c;
db dummyd_10d5d;
db dummyd_10d5e;
db dummyd_10d5f;
db dummyd_10d60[32]; // 10d6:0000
db dummyd_10d80;
db dummyd_10d81;
db dummyd_10d82;
db dummyd_10d83;
db dummyd_10d84;
db dummyd_10d85;
db dummyd_10d86;
db dummyd_10d87;
dw seg_1f368; // 10d6:0028
dw word_1f36a; // 10d6:002a
dw word_1f36c; // 10d6:002c
db dummyd_10d8e;
db dummyd_10d8f;
db dummyd_10d90;
db dummyd_10d91;
dw word_1f372; // 10d6:0032
db dummyd_10d94[4];
dw word_1f378; // 10d6:0038
dw word_1f37a; // 10d6:003a
dw word_1f37c; // 10d6:003c
dw word_1f37e; // 10d6:003e
dw word_1f380; // 10d6:0040
dw word_1f382; // 10d6:0042
db dummyd_10da4;
db dummyd_10da5;
dw word_1f386; // 10d6:0046
dw word_1f388; // 10d6:0048
dw word_1f38a; // 10d6:004a
dw word_1f38c; // 10d6:004c
db byte_1f38e; // 10d6:004e
db byte_1f38f; // 10d6:004f
dw word_1f390; // 10d6:0050
dw word_1f392; // 10d6:0052
dw word_1f394; // 10d6:0054
dw word_1f396; // 10d6:0056
dw word_1f398; // 10d6:0058
db dummyd_10dba;
db dummyd_10dbb;
db dummyd_10dbc;
db dummyd_10dbd;
dw word_1f39e; // 10d6:005e
dw word_1f3a0; // 10d6:0060
dw word_1f3a2; // 10d6:0062
db byte_1f3a4; // 10d6:0064
db dummyd_10dc5; // 10d6:0065
db dummyd_10dc6;
db dummyd_10dc7;
db dummyd_10dc8;
db dummyd_10dc9;
dw word_1f3aa; // 10d6:006a
dw word_1f3ac; // 10d6:006c
db dummyd_10dce;
db dummyd_10dcf;
db dummyd_10dd0;
db dummyd_10dd1;
db dummyd_10dd2; // 10d6:0072
db dummyd_10dd3;
dw word_1f3b4; // 10d6:0074
dw word_1f3b6; // 10d6:0076
dw word_1f3b8; // 10d6:0078
dw word_1f3ba; // 10d6:007a
dw word_1f3bc; // 10d6:007c
dw word_1f3be; // 10d6:007e
dw word_1f3c0; // 10d6:0080
dw word_1f3c2; // 10d6:0082
dw word_1f3c4; // 10d6:0084
dw word_1f3c6; // 10d6:0086
dw word_1f3c8; // 10d6:0088
db dummyd_10dea;
db dummyd_10deb;
db dummyd_10dec;
db dummyd_10ded;
dw word_1f3ce; // 10d6:008e
dw word_1f3d0; // 10d6:0090
dw word_1f3d2; // 10d6:0092
db dummyd_10df4;
db dummyd_10df5;
dw word_1f3d6; // 10d6:0096
db dummyd_10df8;
db dummyd_10df9;
db dummyd_10dfa;
db dummyd_10dfb;
db dummyd_10dfc;
db dummyd_10dfd;
dw word_1f3de; // 10d6:009e
dw word_1f3e0; // 10d6:00a0
dw word_1f3e2; // 10d6:00a2
dw word_1f3e4; // 10d6:00a4
db byte_1f3e6; // 10d6:00a6
db dummyd_10e07[1];
dw word_1f3e8; // 10d6:00a8
dw word_1f3ea; // 10d6:00aa
dw word_1f3ec; // 10d6:00ac
db dummyd_10e0e[32]; // 10d6:00ae
db dummyd_10e2e[32]; // 10d6:00ce
db dummyd_10e4e[32]; // 10d6:00ee
db dummyd_10e6e;
db dummyd_10e6f;
db dummyd_10e70;
db dummyd_10e71;
db dummyd_10e72;
db dummyd_10e73;
db dummyd_10e74;
db dummyd_10e75;
db dummyd_10e76;
db dummyd_10e77;
db dummyd_10e78;
db dummyd_10e79;
db dummyd_10e7a;
db dummyd_10e7b;
db dummyd_10e7c;
db dummyd_10e7d;
db dummyd_10e7e;
db dummyd_10e7f;
db dummyd_10e80;
db dummyd_10e81;
db dummyd_10e82;
db dummyd_10e83;
db dummyd_10e84;
db dummyd_10e85;
dw word_1f466; // 10d6:0126
db dummyd_10e88[32]; // 10d6:0128
db dummyd_10ea8[32]; // 10d6:0148
db dummyd_10ec8;
db dummyd_10ec9;
db dummyd_10eca;
db dummyd_10ecb;
db dummyd_10ecc;
db dummyd_10ecd;
db dummyd_10ece;
db dummyd_10ecf;
db dummyd_10ed0;
db dummyd_10ed1;
db dummyd_10ed2;
db dummyd_10ed3;
db dummyd_10ed4;
db dummyd_10ed5;
dw word_1f4b6; // 10d6:0176
db dummyd_10ed8[32]; // 10d6:0178
db dummyd_10ef8[32]; // 10d6:0198
db dummyd_10f18[32]; // 10d6:01b8
db dummyd_10f38[32]; // 10d6:01d8
db dummyd_10f58[32]; // 10d6:01f8
db unk_1f558; // 10d6:0218
db dummyd_10f79[32]; // 10d6:0219
db dummyd_10f99[32]; // 10d6:0239
db dummyd_10fb9[32]; // 10d6:0259
db dummyd_10fd9[32]; // 10d6:0279
db dummyd_10ff9[32]; // 10d6:0299
db dummyd_11019[32]; // 10d6:02b9
db dummyd_11039[32]; // 10d6:02d9
db dummyd_11059[32]; // 10d6:02f9
db dummyd_11079[32]; // 10d6:0319
db dummyd_11099[32]; // 10d6:0339
db dummyd_110b9[32]; // 10d6:0359
db dummyd_110d9[32]; // 10d6:0379
db dummyd_110f9;
db dummyd_110fa;
db dummyd_110fb;
db dummyd_110fc;
db dummyd_110fd;
db dummyd_110fe;
db dummyd_110ff;
db dummyd_11100;
db dummyd_11101;
db dummyd_11102;
db dummyd_11103;
db dummyd_11104;
db dummyd_11105;
dw word_1f6e6; // 10d6:03a6
dw word_1f6e8; // 10d6:03a8
dw word_1f6ea; // 10d6:03aa
dw word_1f6ec; // 10d6:03ac
dw word_1f6ee; // 10d6:03ae
dw word_1f6f0; // 10d6:03b0
dw word_1f6f2; // 10d6:03b2
dw word_1f6f4; // 10d6:03b4
dw word_1f6f6; // 10d6:03b6
db dummyd_11118;
db dummyd_11119;
dw word_1f6fa; // 10d6:03ba
dw word_1f6fc; // 10d6:03bc
db dummyd_1111e[2];
dw word_1f700; // 10d6:03c0
dw word_1f702; // 10d6:03c2
dw word_1f704; // 10d6:03c4
dw word_1f706; // 10d6:03c6
dw word_1f708; // 10d6:03c8
dw word_1f70a; // 10d6:03ca
dw word_1f70c; // 10d6:03cc
dw word_1f70e; // 10d6:03ce
dw word_1f710; // 10d6:03d0
db dummyd_11132[2];
dw word_1f714; // 10d6:03d4
db dummyd_11136;
db dummyd_11137;
db dummyd_11138;
db dummyd_11139;
dw word_1f71a; // 10d6:03da
dw word_1f71c; // 10d6:03dc
db dummyd_1113e;
db dummyd_1113f;
db dummyd_11140;
db dummyd_11141;
db byte_1f722; // 10d6:03e2
db byte_1f723; // 10d6:03e3
db byte_1f724; // 10d6:03e4
db byte_1f725; // 10d6:03e5
db byte_1f726; // 10d6:03e6
dw seg_1f727; // 10d6:03e7
db dummyd_11149[1];
dw word_1f72a; // 10d6:03ea
dw word_1f72c; // 10d6:03ec
dw word_1f72e; // 10d6:03ee
dw word_1f730; // 10d6:03f0
dw word_1f732; // 10d6:03f2
dw word_1f734; // 10d6:03f4
dd off_1f736; // 10d6:03f6
db dummyd_1115a;
db dummyd_1115b;
db dummyd_1115c;
db dummyd_1115d;
db dummyd_1115e;
db byte_1f73f; // 10d6:03ff
db byte_1f740; // 10d6:0400
db byte_1f741; // 10d6:0401
db byte_1f742; // 10d6:0402
db dummyd_11163;
db dummyd_11164;
db byte_1f745; // 10d6:0405
db byte_1f746; // 10d6:0406
db byte_1f747; // 10d6:0407
db dummyd_11168;
db byte_1f749; // 10d6:0409
db dummyd_1116a[2];
db byte_1f74c; // 10d6:040c
db dummyd_1116d[1];
db byte_1f74e; // 10d6:040e
db byte_1f74f; // 10d6:040f
db byte_1f750; // 10d6:0410
db dummyd_11171[3];
db byte_1f754; // 10d6:0414
db byte_1f755; // 10d6:0415
db byte_1f756; // 10d6:0416
db byte_1f757; // 10d6:0417
db byte_1f758; // 10d6:0418
db byte_1f759; // 10d6:0419
db byte_1f75a; // 10d6:041a
db byte_1f75b; // 10d6:041b
db byte_1f75c; // 10d6:041c
db byte_1f75d; // 10d6:041d
db byte_1f75e; // 10d6:041e
db byte_1f75f; // 10d6:041f
db byte_1f760; // 10d6:0420
db byte_1f761; // 10d6:0421
db byte_1f762; // 10d6:0422
db byte_1f763; // 10d6:0423
db byte_1f764; // 10d6:0424
db byte_1f765; // 10d6:0425
db byte_1f766; // 10d6:0426
db dummyd_11187[1];
db byte_1f768; // 10d6:0428
db byte_1f769; // 10d6:0429
db byte_1f76a; // 10d6:042a
db byte_1f76b; // 10d6:042b
db byte_1f76c; // 10d6:042c
db byte_1f76d; // 10d6:042d
db byte_1f76e; // 10d6:042e
db byte_1f76f; // 10d6:042f
db byte_1f770; // 10d6:0430
db byte_1f771; // 10d6:0431
db byte_1f772; // 10d6:0432
db byte_1f773; // 10d6:0433
db byte_1f774; // 10d6:0434
db byte_1f775; // 10d6:0435
db byte_1f776; // 10d6:0436
db byte_1f777; // 10d6:0437
db byte_1f778; // 10d6:0438
db byte_1f779; // 10d6:0439
db byte_1f77a; // 10d6:043a
db byte_1f77b; // 10d6:043b
db byte_1f77c; // 10d6:043c
db byte_1f77d; // 10d6:043d
db byte_1f77e; // 10d6:043e
db byte_1f77f; // 10d6:043f
db byte_1f780; // 10d6:0440
db dummyd_111a1;
db dummyd_111a2;
db dummyd_111a3;
db dummyd_111a4;
db dummyd_111a5;
db dummyd_111a6;
db dummyd_111a7;
db dummyd_111a8;
db dummyd_111a9;
db dummyd_111aa;
db dummyd_111ab;
db dummyd_111ac;
db dummyd_111ad;
db dummyd_111ae;
db dummyd_111af;
db dummyd_111b0;
db dummyd_111b1;
db dummyd_111b2;
db dummyd_111b3;
db dummyd_111b4;
db byte_1f795; // 10d6:0455
db byte_1f796; // 10d6:0456
db byte_1f797; // 10d6:0457
db byte_1f798; // 10d6:0458
db byte_1f799; // 10d6:0459
db byte_1f79a; // 10d6:045a
db dummyd_111bb[32]; // 10d6:045b
db byte_1f7bb; // 10d6:047b
db dummyd_111dc;
db byte_1f7bd; // 10d6:047d
db dummyd_111de[2];
db byte_1f7c0; // 10d6:0480
db byte_1f7c1; // 10d6:0481
db byte_1f7c2; // 10d6:0482
db dummyd_111e3[32]; // 10d6:0483
db dummyd_11203[32]; // 10d6:04a3
db dummyd_11223; // 10d6:04c3
db dummyd_11224; // 10d6:04c4
db dummyd_11225; // 10d6:04c5
db dummyd_11226; // 10d6:04c6
db dummyd_11227; // 10d6:04c7
db dummyd_11228; // 10d6:04c8
db dummyd_11229; // 10d6:04c9
db dummyd_1122a; // 10d6:04ca
db dummyd_1122b; // 10d6:04cb
db dummyd_1122c; // 10d6:04cc
db dummyd_1122d; // 10d6:04cd
db dummyd_1122e; // 10d6:04ce
db dummyd_1122f; // 10d6:04cf
db dummyd_11230; // 10d6:04d0
db dummyd_11231; // 10d6:04d1
db dummyd_11232; // 10d6:04d2
db dummyd_11233; // 10d6:04d3
db dummyd_11234; // 10d6:04d4
db dummyd_11235; // 10d6:04d5
db dummyd_11236; // 10d6:04d6
db byte_1f817; // 10d6:04d7
db byte_1f818; // 10d6:04d8
db byte_1f819; // 10d6:04d9
db dummyd_1123a;
db byte_1f81b; // 10d6:04db
db dummyd_1123c;
db byte_1f81d; // 10d6:04dd
db byte_1f81e; // 10d6:04de
db byte_1f81f; // 10d6:04df
db byte_1f820; // 10d6:04e0
db byte_1f821; // 10d6:04e1
db byte_1f822; // 10d6:04e2
db dummyd_11243[1];
db byte_1f824; // 10d6:04e4
db byte_1f825; // 10d6:04e5
db byte_1f826; // 10d6:04e6
db byte_1f827; // 10d6:04e7
db dummyd_11248;
db byte_1f829; // 10d6:04e9
db byte_1f82a; // 10d6:04ea
db byte_1f82b; // 10d6:04eb
db byte_1f82c; // 10d6:04ec
db byte_1f82d; // 10d6:04ed
db byte_1f82e; // 10d6:04ee
db byte_1f82f; // 10d6:04ef
db byte_1f830; // 10d6:04f0
dd off_1f831; // 10d6:04f1
db byte_1f835; // 10d6:04f5
db byte_1f836; // 10d6:04f6
db byte_1f837; // 10d6:04f7
db dummyd_11258;
db byte_1f839; // 10d6:04f9
db byte_1f83a; // 10d6:04fa
db byte_1f83b; // 10d6:04fb
dd off_1f83c; // 10d6:04fc
db byte_1f840; // 10d6:0500
db byte_1f841; // 10d6:0501
db byte_1f842; // 10d6:0502
db byte_1f843; // 10d6:0503
db byte_1f844; // 10d6:0504
db byte_1f845; // 10d6:0505
db byte_1f846; // 10d6:0506
db byte_1f847; // 10d6:0507
db byte_1f848; // 10d6:0508
db byte_1f849; // 10d6:0509
db byte_1f84a; // 10d6:050a
db byte_1f84b; // 10d6:050b
db byte_1f84c; // 10d6:050c
db dummyd_1126d[3];
db byte_1f850; // 10d6:0510
db byte_1f851; // 10d6:0511
db byte_1f852; // 10d6:0512
db byte_1f853; // 10d6:0513
db byte_1f854; // 10d6:0514
db byte_1f855; // 10d6:0515
db byte_1f856; // 10d6:0516
db byte_1f857; // 10d6:0517
db dummyd_11278;
db dummyd_11279;
db byte_1f85a; // 10d6:051a
db byte_1f85b; // 10d6:051b
db byte_1f85c; // 10d6:051c
db byte_1f85d; // 10d6:051d
db byte_1f85e; // 10d6:051e
db byte_1f85f; // 10d6:051f
db byte_1f860; // 10d6:0520
db byte_1f861; // 10d6:0521
db byte_1f862; // 10d6:0522
db byte_1f863; // 10d6:0523
db byte_1f864; // 10d6:0524
db byte_1f865; // 10d6:0525
db byte_1f866; // 10d6:0526
db byte_1f867; // 10d6:0527
dw word_1f868; // 10d6:0528
dw word_1f86a; // 10d6:052a
db dummyd_1128c; // 10d6:052c
db dummyd_1128d;
db dummyd_1128e; // 10d6:052e
db dummyd_1128f; // 10d6:052f
dw word_1f870; // 10d6:0530
db byte_1f872; // 10d6:0532
db byte_1f873; // 10d6:0533
db byte_1f874; // 10d6:0534
db dummyd_11295;
db dummyd_11296;
db dummyd_11297;
db byte_1f878; // 10d6:0538
db byte_1f879; // 10d6:0539
db byte_1f87a; // 10d6:053a
db byte_1f87b; // 10d6:053b
db byte_1f87c; // 10d6:053c
db byte_1f87d; // 10d6:053d
db byte_1f87e; // 10d6:053e
db byte_1f87f; // 10d6:053f
db byte_1f880; // 10d6:0540
db dummyd_112a1;
dw seg_1f882; // 10d6:0542
db byte_1f884; // 10d6:0544
db byte_1f885; // 10d6:0545
db byte_1f886; // 10d6:0546
db byte_1f887; // 10d6:0547
db dummyd_112a8;
db dummyd_112a9;
dd off_1f88a; // 10d6:054a
dw word_1f88e; // 10d6:054e
dw word_1f890; // 10d6:0550
dw word_1f892; // 10d6:0552
dw word_1f894; // 10d6:0554
dw word_1f896; // 10d6:0556
dw word_1f898; // 10d6:0558
dw word_1f89a; // 10d6:055a
dw word_1f89c; // 10d6:055c
dw word_1f89e; // 10d6:055e
dw word_1f8a0; // 10d6:0560
dw seg_1f8a2; // 10d6:0562
dw seg_1f8a4; // 10d6:0564
dw seg_1f8a6; // 10d6:0566
dw seg_1f8a8; // 10d6:0568
dw seg_1f8aa; // 10d6:056a
dw seg_1f8ac; // 10d6:056c
dw seg_1f8ae; // 10d6:056e
dw seg_1f8b0; // 10d6:0570
dw seg_1f8b2; // 10d6:0572
dw seg_1f8b4; // 10d6:0574
dw seg_1f8b6; // 10d6:0576
db unk_1f8b8; // 10d6:0578
db dummyd_112d9;
db dummyd_112da;
db dummyd_112db;
dw word_1f8bc; // 10d6:057c
dw word_1f8be; // 10d6:057e
dw word_1f8c0; // 10d6:0580
dw word_1f8c2; // 10d6:0582
db dummyd_112e4;
db byte_1f8c5; // 10d6:0585
db byte_1f8c6; // 10d6:0586
db byte_1f8c7; // 10d6:0587
dd off_1f8c8; // 10d6:0588
db dummyd_112ec[4];
dw word_1f8d0; // 10d6:0590
db unk_1f8d2; // 10d6:0592
db dummyd_112f3; // 10d6:0593
dw word_1f8d4; // 10d6:0594
dw word_1f8d6; // 10d6:0596
dw word_1f8d8; // 10d6:0598
dw word_1f8da; // 10d6:059a
dw word_1f8dc; // 10d6:059c
db byte_1f8de; // 10d6:059e
db byte_1f8df; // 10d6:059f
db byte_1f8e0; // 10d6:05a0
db byte_1f8e1; // 10d6:05a1
db byte_1f8e2; // 10d6:05a2
db byte_1f8e3; // 10d6:05a3
db byte_1f8e4; // 10d6:05a4
db byte_1f8e5; // 10d6:05a5
dw word_1f8e6; // 10d6:05a6
dw word_1f8e8; // 10d6:05a8
dw word_1f8ea; // 10d6:05aa
dw word_1f8ec; // 10d6:05ac
dw word_1f8ee; // 10d6:05ae
dw word_1f8f0; // 10d6:05b0
dw word_1f8f2; // 10d6:05b2
dw seg_1f8f4; // 10d6:05b4
dw seg_1f8f6; // 10d6:05b6
dd off_1f8f8; // 10d6:05b8
dw word_1f8fc; // 10d6:05bc
dd off_1f8fe; // 10d6:05be
dw word_1f902; // 10d6:05c2
db dummyd_11324;
db dummyd_11325;
db dummyd_11326;
db dummyd_11327;
db dummyd_11328;
db dummyd_11329;
db dummyd_1132a;
db dummyd_1132b;
dw word_1f90c; // 10d6:05cc
dw word_1f90e; // 10d6:05ce
dw word_1f910; // 10d6:05d0
dw word_1f912; // 10d6:05d2
dw word_1f914; // 10d6:05d4
dw word_1f916; // 10d6:05d6
db dummyd_11338;
db byte_1f919; // 10d6:05d9
db byte_1f91a; // 10d6:05da
db byte_1f91b; // 10d6:05db
db dummyd_1133c;
db dummyd_1133d;
dw word_1f91e; // 10d6:05de
char aloadingdataple[26]; // 10d6:05e0
char aeplaceadiskind[40]; // 10d6:05fa
char an[2]; // 10d6:0622
char ao9or[8]; // 10d6:0624
char asctostartatthe[41]; // 10d6:062c
char ainsert18688pag[9]; // 10d6:0655
char dummyd_113be[16]; // 10d6:065e
char dummyd_113ce[15]; // 10d6:066e
char dummyd_113dd[18]; // 10d6:067d
char dummyd_113ef[12]; // 10d6:068f
char dummyd_113fb[11]; // 10d6:069b
char dummyd_11406[3]; // 10d6:06a6
db dummyd_11409[32]; // 10d6:06a9
db dummyd_11429[32]; // 10d6:06c9
db dummyd_11449[32]; // 10d6:06e9
db dummyd_11469[32]; // 10d6:0709
db dummyd_11489[32]; // 10d6:0729
db dummyd_114a9[32]; // 10d6:0749
db dummyd_114c9[32]; // 10d6:0769
db dummyd_114e9[32]; // 10d6:0789
db dummyd_11509[32]; // 10d6:07a9
db dummyd_11529[32]; // 10d6:07c9
db dummyd_11549[32]; // 10d6:07e9
db dummyd_11569[32]; // 10d6:0809
db dummyd_11589[32]; // 10d6:0829
db dummyd_115a9[32]; // 10d6:0849
db dummyd_115c9[32]; // 10d6:0869
db dummyd_115e9;
db dummyd_115ea;
db dummyd_115eb; // 10d6:088b
db dummyd_115ec;
db dummyd_115ed; // 10d6:088d
db dummyd_115ee;
db dummyd_115ef;
db dummyd_115f0;
db dummyd_115f1;
dw word_1fbd2; // 10d6:0892
db dummyd_115f4; // 10d6:0894
db dummyd_115f5;
db dummyd_115f6; // 10d6:0896
dd dummyd_115f7; // 10d6:0897
db dummyd_115fb;
db dummyd_115fc;
db dummyd_115fd;
db dummyd_115fe;
db dummyd_115ff;
db dummyd_11600;
dd dummyd_11601; // 10d6:08a1
dw dummyd_11605; // 10d6:08a5
dw dummyd_11607; // 10d6:08a7
dw dummyd_11609; // 10d6:08a9
db dummyd_1160b;
db dummyd_1160c;
db dummyd_1160d;
db dummyd_1160e;
db dummyd_1160f;
db dummyd_11610;
dd dummyd_11611; // 10d6:08b1
dw dummyd_11615; // 10d6:08b5
dw dummyd_11617; // 10d6:08b7
dw dummyd_11619; // 10d6:08b9
dw dummyd_1161b; // 10d6:08bb
db dummyd_1161d;
db dummyd_1161e;
db dummyd_1161f;
db dummyd_11620;
dd dummyd_11621; // 10d6:08c1
dw dummyd_11625; // 10d6:08c5
dw dummyd_11627; // 10d6:08c7
dw dummyd_11629; // 10d6:08c9
dw dummyd_1162b; // 10d6:08cb
db dummyd_1162d;
db dummyd_1162e;
db dummyd_1162f;
db dummyd_11630;
dd dummyd_11631; // 10d6:08d1
dw dummyd_11635; // 10d6:08d5
dw dummyd_11637; // 10d6:08d7
dw dummyd_11639; // 10d6:08d9
dw dummyd_1163b; // 10d6:08db
db dummyd_1163d;
db dummyd_1163e;
db dummyd_1163f;
db dummyd_11640;
dd dummyd_11641; // 10d6:08e1
dw dummyd_11645; // 10d6:08e5
dw dummyd_11647; // 10d6:08e7
dw dummyd_11649; // 10d6:08e9
dw dummyd_1164b; // 10d6:08eb
db dummyd_1164d;
db dummyd_1164e;
db dummyd_1164f;
db dummyd_11650;
dd dummyd_11651; // 10d6:08f1
dw dummyd_11655; // 10d6:08f5
dw dummyd_11657; // 10d6:08f7
dw dummyd_11659; // 10d6:08f9
dw dummyd_1165b; // 10d6:08fb
db dummyd_1165d;
db dummyd_1165e;
db dummyd_1165f;
db dummyd_11660;
dd dummyd_11661; // 10d6:0901
db dummyd_11665;
db dummyd_11666;
db dummyd_11667;
db dummyd_11668;
db dummyd_11669;
db dummyd_1166a;
db dummyd_1166b;
db dummyd_1166c;
db dummyd_1166d;
db dummyd_1166e;
db dummyd_1166f;
db dummyd_11670;
dd dummyd_11671; // 10d6:0911
db dummyd_11675;
db dummyd_11676;
db dummyd_11677;
db dummyd_11678;
db dummyd_11679;
db dummyd_1167a;
db dummyd_1167b;
db dummyd_1167c;
db dummyd_1167d;
db dummyd_1167e;
db dummyd_1167f;
db dummyd_11680;
dd dummyd_11681; // 10d6:0921
db dummyd_11685[32]; // 10d6:0925
db dummyd_116a5[32]; // 10d6:0945
db dummyd_116c5[32]; // 10d6:0965
db dummyd_116e5[32]; // 10d6:0985
db dummyd_11705;
db dummyd_11706;
db dummyd_11707;
db dummyd_11708;
db dummyd_11709;
db dummyd_1170a;
db dummyd_1170b;
db dummyd_1170c;
db dummyd_1170d;
db dummyd_1170e;
db dummyd_1170f;
db dummyd_11710;
db dummyd_11711;
db dummyd_11712;
db dummyd_11713;
db dummyd_11714;
db dummyd_11715;
db dummyd_11716;
db dummyd_11717;
db dummyd_11718;
db dummyd_11719;
db dummyd_1171a;
db dummyd_1171b;
dd off_1fcfc; // 10d6:09bc
dw word_1fd00; // 10d6:09c0
db dummyd_11722[32]; // 10d6:09c2
db dummyd_11742[32]; // 10d6:09e2
db dummyd_11762[32]; // 10d6:0a02
db dummyd_11782[32]; // 10d6:0a22
db dummyd_117a2[32]; // 10d6:0a42
db dummyd_117c2[32]; // 10d6:0a62
db dummyd_117e2[32]; // 10d6:0a82
db dummyd_11802[32]; // 10d6:0aa2
db dummyd_11822[32]; // 10d6:0ac2
db dummyd_11842[32]; // 10d6:0ae2
db dummyd_11862[32]; // 10d6:0b02
db dummyd_11882[32]; // 10d6:0b22
db dummyd_118a2[32]; // 10d6:0b42
db dummyd_118c2[32]; // 10d6:0b62
db dummyd_118e2[32]; // 10d6:0b82
db dummyd_11902[32]; // 10d6:0ba2
db dummyd_11922[32]; // 10d6:0bc2
db dummyd_11942[32]; // 10d6:0be2
db dummyd_11962[32]; // 10d6:0c02
db dummyd_11982[32]; // 10d6:0c22
db dummyd_119a2[32]; // 10d6:0c42
db dummyd_119c2[32]; // 10d6:0c62
db dummyd_119e2[32]; // 10d6:0c82
db dummyd_11a02[32]; // 10d6:0ca2
db dummyd_11a22[32]; // 10d6:0cc2
db dummyd_11a42[32]; // 10d6:0ce2
db dummyd_11a62[32]; // 10d6:0d02
db dummyd_11a82;
db dummyd_11a83;
db dummyd_11a84;
db dummyd_11a85;
db dummyd_11a86;
db dummyd_11a87;
db dummyd_11a88;
db dummyd_11a89;
db dummyd_11a8a;
db dummyd_11a8b;
db byte_2006c; // 10d6:0d2c
db dummyd_11a8d;
db dummyd_11a8e;
db dummyd_11a8f;
db dummyd_11a90;
db byte_20071; // 10d6:0d31
db dummyd_11a92[32]; // 10d6:0d32
db dummyd_11ab2;
db dummyd_11ab3;
db dummyd_11ab4;
db dummyd_11ab5;
db dummyd_11ab6;
db byte_20097; // 10d6:0d57
db dummyd_11ab8[32]; // 10d6:0d58
db dummyd_11ad8[32]; // 10d6:0d78
db dummyd_11af8[32]; // 10d6:0d98
db dummyd_11b18[32]; // 10d6:0db8
db dummyd_11b38[32]; // 10d6:0dd8
db dummyd_11b58[32]; // 10d6:0df8
db dummyd_11b78[32]; // 10d6:0e18
db dummyd_11b98[32]; // 10d6:0e38
db dummyd_11bb8[32]; // 10d6:0e58
db dummyd_11bd8[32]; // 10d6:0e78
db dummyd_11bf8[32]; // 10d6:0e98
db dummyd_11c18[32]; // 10d6:0eb8
db dummyd_11c38;
db dummyd_11c39;
db dummyd_11c3a;
db dummyd_11c3b;
db dummyd_11c3c;
db dummyd_11c3d;
db dummyd_11c3e;
db dummyd_11c3f;
db dummyd_11c40;
db dummyd_11c41;
db dummyd_11c42;
db dummyd_11c43;
db dummyd_11c44;
db dummyd_11c45;
dw word_20226; // 10d6:0ee6
dw word_20228; // 10d6:0ee8
db dummyd_11c4a[32]; // 10d6:0eea
db dummyd_11c6a[32]; // 10d6:0f0a
db dummyd_11c8a[32]; // 10d6:0f2a
db dummyd_11caa[32]; // 10d6:0f4a
db dummyd_11cca[32]; // 10d6:0f6a
db dummyd_11cea[32]; // 10d6:0f8a
db dummyd_11d0a[32]; // 10d6:0faa
db dummyd_11d2a[32]; // 10d6:0fca
db dummyd_11d4a[32]; // 10d6:0fea
db dummyd_11d6a[32]; // 10d6:100a
db dummyd_11d8a[32]; // 10d6:102a
db dummyd_11daa[32]; // 10d6:104a
db dummyd_11dca[32]; // 10d6:106a
db dummyd_11dea[32]; // 10d6:108a
db dummyd_11e0a[32]; // 10d6:10aa
db dummyd_11e2a[32]; // 10d6:10ca
db dummyd_11e4a[32]; // 10d6:10ea
db dummyd_11e6a[32]; // 10d6:110a
db dummyd_11e8a[32]; // 10d6:112a
db dummyd_11eaa[32]; // 10d6:114a
db dummyd_11eca[32]; // 10d6:116a
db dummyd_11eea[32]; // 10d6:118a
db dummyd_11f0a[32]; // 10d6:11aa
db dummyd_11f2a[32]; // 10d6:11ca
db dummyd_11f4a[32]; // 10d6:11ea
db dummyd_11f6a[32]; // 10d6:120a
db dummyd_11f8a[32]; // 10d6:122a
db dummyd_11faa[32]; // 10d6:124a
db dummyd_11fca[32]; // 10d6:126a
db dummyd_11fea[32]; // 10d6:128a
db dummyd_1200a[32]; // 10d6:12aa
db dummyd_1202a[32]; // 10d6:12ca
db dummyd_1204a[32]; // 10d6:12ea
db dummyd_1206a[32]; // 10d6:130a
db dummyd_1208a[32]; // 10d6:132a
db dummyd_120aa[32]; // 10d6:134a
db dummyd_120ca[32]; // 10d6:136a
db dummyd_120ea[32]; // 10d6:138a
db dummyd_1210a[32]; // 10d6:13aa
db dummyd_1212a[32]; // 10d6:13ca
db dummyd_1214a[32]; // 10d6:13ea
db dummyd_1216a[32]; // 10d6:140a
db dummyd_1218a[32]; // 10d6:142a
db dummyd_121aa[32]; // 10d6:144a
db dummyd_121ca[32]; // 10d6:146a
db dummyd_121ea[32]; // 10d6:148a
db dummyd_1220a[32]; // 10d6:14aa
db dummyd_1222a[32]; // 10d6:14ca
db dummyd_1224a[32]; // 10d6:14ea
db dummyd_1226a[32]; // 10d6:150a
db dummyd_1228a[32]; // 10d6:152a
db dummyd_122aa[32]; // 10d6:154a
db dummyd_122ca[32]; // 10d6:156a
db dummyd_122ea[32]; // 10d6:158a
db dummyd_1230a[32]; // 10d6:15aa
db dummyd_1232a[32]; // 10d6:15ca
db dummyd_1234a[32]; // 10d6:15ea
db dummyd_1236a[32]; // 10d6:160a
db dummyd_1238a[32]; // 10d6:162a
db dummyd_123aa[32]; // 10d6:164a
db dummyd_123ca[32]; // 10d6:166a
db dummyd_123ea[32]; // 10d6:168a
db dummyd_1240a[32]; // 10d6:16aa
db dummyd_1242a[32]; // 10d6:16ca
db dummyd_1244a[32]; // 10d6:16ea
db dummyd_1246a[32]; // 10d6:170a
db dummyd_1248a[32]; // 10d6:172a
db dummyd_124aa;
db dummyd_124ab;
db dummyd_124ac;
db dummyd_124ad;
db dummyd_124ae; // 10d6:174e
db dummyd_124af; // 10d6:174f
db dummyd_124b0; // 10d6:1750
db dummyd_124b1; // 10d6:1751
db dummyd_124b2;
db dummyd_124b3;
db dummyd_124b4;
db dummyd_124b5;
db dummyd_124b6;
db dummyd_124b7;
db dummyd_124b8;
db dummyd_124b9;
db dummyd_124ba;
db dummyd_124bb;
db dummyd_124bc;
db dummyd_124bd;
db dummyd_124be; // 10d6:175e
db dummyd_124bf; // 10d6:175f
db dummyd_124c0[32]; // 124c:0000
db dummyd_124e0[32]; // 124c:0020
db dummyd_12500[32]; // 124c:0040
db dummyd_12520[32]; // 124c:0060
db dummyd_12540[32]; // 124c:0080
db dummyd_12560[32]; // 124c:00a0
db dummyd_12580[32]; // 124c:00c0
db dummyd_125a0[32]; // 124c:00e0
db dummyd_125c0[32]; // 124c:0100
db dummyd_125e0[32]; // 124c:0120
db dummyd_12600[32]; // 124c:0140
db dummyd_12620[32]; // 124c:0160
db dummyd_12640[32]; // 124c:0180
db dummyd_12660[32]; // 124c:01a0
db dummyd_12680[32]; // 124c:01c0
db dummyd_126a0[32]; // 124c:01e0
db dummyd_126c0[32]; // 124c:0200
db dummyd_126e0[32]; // 124c:0220
db dummyd_12700[32]; // 124c:0240
db dummyd_12720[32]; // 124c:0260
db dummyd_12740[32]; // 124c:0280
db dummyd_12760[32]; // 124c:02a0
db dummyd_12780[32]; // 124c:02c0
db dummyd_127a0[32]; // 124c:02e0
db dummyd_127c0[32]; // 124c:0300
db dummyd_127e0[32]; // 124c:0320
db dummyd_12800[32]; // 124c:0340
db dummyd_12820[32]; // 124c:0360
db dummyd_12840[32]; // 124c:0380
db dummyd_12860[32]; // 124c:03a0
db dummyd_12880[32]; // 124c:03c0
db dummyd_128a0[32]; // 124c:03e0
db dummyd_128c0[32]; // 124c:0400
db dummyd_128e0[32]; // 124c:0420
db dummyd_12900[32]; // 124c:0440
db dummyd_12920[32]; // 124c:0460
db dummyd_12940[32]; // 124c:0480
db dummyd_12960[32]; // 124c:04a0
db dummyd_12980[32]; // 124c:04c0
db dummyd_129a0[32]; // 124c:04e0
db dummyd_129c0;
db dummyd_129c1;
db dummyd_129c2;
db dummyd_129c3;
db dummyd_129c4;
db dummyd_129c5;
db dummyd_129c6;
db dummyd_129c7;
db dummyd_129c8;
db dummyd_129c9;
db dummyd_129ca;
db dummyd_129cb;
db dummyd_129cc;
db dummyd_129cd;
db dummyd_129ce;
db dummyd_129cf;
db dummyd_129d0; // 124c:0510
db dummyd_129d1; // 124c:0511
db dummyd_129d2; // 124c:0512
db dummyd_129d3; // 124c:0513
dd dummyd_129d4; // 124c:0514
db dummyd_129d8[32]; // 124c:0518
dd dummyd_129f8; // 124c:0538
db dummyd_129fc; // 124c:053c
db dummyd_129fd;
db dummyd_129fe;
db dummyd_129ff;
db dummyd_12a00;
db dummyd_12a01;
db dummyd_12a02; // 124c:0542
db dummyd_12a03; // 124c:0543
db dummyd_12a04; // 124c:0544
db dummyd_12a05; // 124c:0545
dd dummyd_12a06; // 124c:0546
db dummyd_12a0a[32]; // 124c:054a
dd dummyd_12a2a; // 124c:056a
db dummyd_12a2e; // 124c:056e
db dummyd_12a2f;
db dummyd_12a30; // 124c:0570
db dummyd_12a31;
db dummyd_12a32;
db dummyd_12a33;
db dummyd_12a34; // 124c:0574
db dummyd_12a35; // 124c:0575
db dummyd_12a36; // 124c:0576
db dummyd_12a37; // 124c:0577
dd dummyd_12a38; // 124c:0578
db dummyd_12a3c[32]; // 124c:057c
dd dummyd_12a5c; // 124c:059c
db dummyd_12a60; // 124c:05a0
db dummyd_12a61;
db dummyd_12a62; // 124c:05a2
db byte_21043; // 124c:05a3
db dummyd_12a64;
db dummyd_12a65;
db dummyd_12a66; // 124c:05a6
db dummyd_12a67; // 124c:05a7
db dummyd_12a68; // 124c:05a8
db dummyd_12a69; // 124c:05a9
dd dummyd_12a6a; // 124c:05aa
db dummyd_12a6e[32]; // 124c:05ae
dd dummyd_12a8e; // 124c:05ce
db dummyd_12a92; // 124c:05d2
db dummyd_12a93;
db dummyd_12a94; // 124c:05d4
db dummyd_12a95;
db dummyd_12a96;
db dummyd_12a97;
db dummyd_12a98; // 124c:05d8
db dummyd_12a99; // 124c:05d9
db dummyd_12a9a; // 124c:05da
db dummyd_12a9b; // 124c:05db
dd dummyd_12a9c; // 124c:05dc
db dummyd_12aa0[32]; // 124c:05e0
dd dummyd_12ac0; // 124c:0600
db dummyd_12ac4; // 124c:0604
db dummyd_12ac5;
db dummyd_12ac6; // 124c:0606
db dummyd_12ac7;
db dummyd_12ac8;
db dummyd_12ac9;
db dummyd_12aca; // 124c:060a
db dummyd_12acb; // 124c:060b
db dummyd_12acc; // 124c:060c
db dummyd_12acd; // 124c:060d
dd dummyd_12ace; // 124c:060e
db dummyd_12ad2[32]; // 124c:0612
dd dummyd_12af2; // 124c:0632
db dummyd_12af6; // 124c:0636
db dummyd_12af7;
db dummyd_12af8; // 124c:0638
db dummyd_12af9; // 124c:0639
db dummyd_12afa;
db dummyd_12afb;
db dummyd_12afc; // 124c:063c
db dummyd_12afd; // 124c:063d
db dummyd_12afe; // 124c:063e
db dummyd_12aff; // 124c:063f
dd dummyd_12b00; // 124c:0640
db dummyd_12b04; // 124c:0644
db dummyd_12b05;
db dummyd_12b06; // 124c:0646
db dummyd_12b07; // 124c:0647
db dummyd_12b08;
db dummyd_12b09; // 124c:0649
db dummyd_12b0a; // 124c:064a
db dummyd_12b0b;
db dummyd_12b0c; // 124c:064c
db dummyd_12b0d;
db dummyd_12b0e;
db dummyd_12b0f; // 124c:064f
db dummyd_12b10; // 124c:0650
db dummyd_12b11; // 124c:0651
db dummyd_12b12; // 124c:0652
db dummyd_12b13;
db dummyd_12b14;
db dummyd_12b15;
db dummyd_12b16;
db dummyd_12b17;
db dummyd_12b18;
db dummyd_12b19;
db dummyd_12b1a; // 124c:065a
db dummyd_12b1b;
db dummyd_12b1c; // 124c:065c
db dummyd_12b1d;
db dummyd_12b1e; // 124c:065e
db dummyd_12b1f;
db dummyd_12b20; // 124c:0660
db dummyd_12b21;
db dummyd_12b22[2];
dd dummyd_12b24; // 124c:0664
db dummyd_12b28; // 124c:0668
db dummyd_12b29;
db dummyd_12b2a; // 124c:066a
db dummyd_12b2b; // 124c:066b
db dummyd_12b2c;
db dummyd_12b2d;
db dummyd_12b2e; // 124c:066e
db dummyd_12b2f; // 124c:066f
db dummyd_12b30; // 124c:0670
db dummyd_12b31; // 124c:0671
dd dummyd_12b32; // 124c:0672
db dummyd_12b36[32]; // 124c:0676
dd dummyd_12b56; // 124c:0696
db dummyd_12b5a; // 124c:069a
db dummyd_12b5b;
db dummyd_12b5c; // 124c:069c
db dummyd_12b5d; // 124c:069d
db dummyd_12b5e;
db dummyd_12b5f;
db dummyd_12b60; // 124c:06a0
db dummyd_12b61; // 124c:06a1
db dummyd_12b62; // 124c:06a2
db dummyd_12b63; // 124c:06a3
dd dummyd_12b64; // 124c:06a4
db dummyd_12b68; // 124c:06a8
db dummyd_12b69;
db dummyd_12b6a; // 124c:06aa
db dummyd_12b6b; // 124c:06ab
db dummyd_12b6c; // 124c:06ac
db dummyd_12b6d; // 124c:06ad
db dummyd_12b6e; // 124c:06ae
db dummyd_12b6f;
db dummyd_12b70; // 124c:06b0
db dummyd_12b71; // 124c:06b1
db dummyd_12b72;
db dummyd_12b73; // 124c:06b3
db dummyd_12b74; // 124c:06b4
db dummyd_12b75; // 124c:06b5
db dummyd_12b76; // 124c:06b6
db dummyd_12b77;
db dummyd_12b78;
db dummyd_12b79;
db dummyd_12b7a;
db dummyd_12b7b;
db dummyd_12b7c;
db dummyd_12b7d;
db dummyd_12b7e; // 124c:06be
db dummyd_12b7f;
db dummyd_12b80; // 124c:06c0
db dummyd_12b81;
db dummyd_12b82; // 124c:06c2
db dummyd_12b83;
db dummyd_12b84; // 124c:06c4
db dummyd_12b85;
db dummyd_12b86[2];
dd dummyd_12b88; // 124c:06c8
db dummyd_12b8c; // 124c:06cc
db dummyd_12b8d;
db dummyd_12b8e; // 124c:06ce
db dummyd_12b8f; // 124c:06cf
db dummyd_12b90;
db dummyd_12b91;
db dummyd_12b92; // 124c:06d2
db dummyd_12b93; // 124c:06d3
db dummyd_12b94; // 124c:06d4
db dummyd_12b95; // 124c:06d5
dd dummyd_12b96; // 124c:06d6
db dummyd_12b9a; // 124c:06da
db dummyd_12b9b;
db dummyd_12b9c; // 124c:06dc
db dummyd_12b9d; // 124c:06dd
db dummyd_12b9e; // 124c:06de
db dummyd_12b9f; // 124c:06df
db dummyd_12ba0; // 124c:06e0
db dummyd_12ba1;
db dummyd_12ba2; // 124c:06e2
db dummyd_12ba3; // 124c:06e3
db dummyd_12ba4;
db dummyd_12ba5; // 124c:06e5
db dummyd_12ba6; // 124c:06e6
db unk_21187; // 124c:06e7
db dummyd_12ba8; // 124c:06e8
db dummyd_12ba9;
db dummyd_12baa;
db dummyd_12bab;
db dummyd_12bac;
db dummyd_12bad;
db dummyd_12bae;
db dummyd_12baf;
db dummyd_12bb0; // 124c:06f0
db dummyd_12bb1;
db dummyd_12bb2; // 124c:06f2
db dummyd_12bb3;
db dummyd_12bb4; // 124c:06f4
db dummyd_12bb5;
db dummyd_12bb6; // 124c:06f6
db dummyd_12bb7;
db dummyd_12bb8;
db dummyd_12bb9;
dd dummyd_12bba; // 124c:06fa
db dummyd_12bbe; // 124c:06fe
db dummyd_12bbf;
db dummyd_12bc0; // 124c:0700
db dummyd_12bc1; // 124c:0701
db dummyd_12bc2;
db dummyd_12bc3;
db dummyd_12bc4; // 124c:0704
db dummyd_12bc5; // 124c:0705
db dummyd_12bc6; // 124c:0706
db dummyd_12bc7; // 124c:0707
dd dummyd_12bc8; // 124c:0708
db dummyd_12bcc; // 124c:070c
db dummyd_12bcd;
db dummyd_12bce; // 124c:070e
db dummyd_12bcf; // 124c:070f
db dummyd_12bd0; // 124c:0710
db dummyd_12bd1; // 124c:0711
db dummyd_12bd2; // 124c:0712
db dummyd_12bd3;
db dummyd_12bd4; // 124c:0714
db dummyd_12bd5; // 124c:0715
db dummyd_12bd6;
db dummyd_12bd7; // 124c:0717
db dummyd_12bd8; // 124c:0718
db dummyd_12bd9; // 124c:0719
db dummyd_12bda; // 124c:071a
db dummyd_12bdb;
db dummyd_12bdc;
db dummyd_12bdd;
db dummyd_12bde;
db dummyd_12bdf;
db dummyd_12be0;
db dummyd_12be1;
db dummyd_12be2; // 124c:0722
db dummyd_12be3;
db dummyd_12be4; // 124c:0724
db dummyd_12be5;
db dummyd_12be6; // 124c:0726
db dummyd_12be7;
db dummyd_12be8; // 124c:0728
db dummyd_12be9;
db dummyd_12bea[2];
dd dummyd_12bec; // 124c:072c
db dummyd_12bf0; // 124c:0730
db dummyd_12bf1;
db dummyd_12bf2; // 124c:0732
db dummyd_12bf3; // 124c:0733
db dummyd_12bf4;
db dummyd_12bf5;
db dummyd_12bf6; // 124c:0736
db dummyd_12bf7; // 124c:0737
db dummyd_12bf8; // 124c:0738
db dummyd_12bf9; // 124c:0739
dd dummyd_12bfa; // 124c:073a
db dummyd_12bfe[32]; // 124c:073e
dd dummyd_12c1e; // 124c:075e
db dummyd_12c22; // 124c:0762
db dummyd_12c23;
db dummyd_12c24; // 124c:0764
db dummyd_12c25; // 124c:0765
db dummyd_12c26;
db dummyd_12c27;
db dummyd_12c28; // 124c:0768
db dummyd_12c29; // 124c:0769
db dummyd_12c2a; // 124c:076a
db dummyd_12c2b; // 124c:076b
dd dummyd_12c2c; // 124c:076c
db dummyd_12c30; // 124c:0770
db dummyd_12c31;
db dummyd_12c32; // 124c:0772
db dummyd_12c33; // 124c:0773
db dummyd_12c34; // 124c:0774
db dummyd_12c35; // 124c:0775
db dummyd_12c36; // 124c:0776
db dummyd_12c37;
db dummyd_12c38; // 124c:0778
db dummyd_12c39; // 124c:0779
db dummyd_12c3a;
db dummyd_12c3b; // 124c:077b
db dummyd_12c3c; // 124c:077c
db dummyd_12c3d; // 124c:077d
db dummyd_12c3e; // 124c:077e
db dummyd_12c3f;
db dummyd_12c40;
db dummyd_12c41;
db dummyd_12c42;
db dummyd_12c43;
db dummyd_12c44;
db dummyd_12c45;
db dummyd_12c46; // 124c:0786
db dummyd_12c47;
db dummyd_12c48; // 124c:0788
db dummyd_12c49;
db dummyd_12c4a; // 124c:078a
db dummyd_12c4b;
db dummyd_12c4c; // 124c:078c
db dummyd_12c4d;
db dummyd_12c4e[2];
dd dummyd_12c50; // 124c:0790
db dummyd_12c54; // 124c:0794
db dummyd_12c55;
db dummyd_12c56; // 124c:0796
db dummyd_12c57; // 124c:0797
db dummyd_12c58;
db dummyd_12c59;
db dummyd_12c5a; // 124c:079a
db dummyd_12c5b; // 124c:079b
db dummyd_12c5c; // 124c:079c
db dummyd_12c5d; // 124c:079d
dd dummyd_12c5e; // 124c:079e
db dummyd_12c62[2];
db dummyd_12c64; // 124c:07a4
db dummyd_12c65; // 124c:07a5
db dummyd_12c66; // 124c:07a6
db dummyd_12c67; // 124c:07a7
db dummyd_12c68; // 124c:07a8
db dummyd_12c69;
db dummyd_12c6a; // 124c:07aa
db dummyd_12c6b; // 124c:07ab
db dummyd_12c6c;
db dummyd_12c6d; // 124c:07ad
db dummyd_12c6e; // 124c:07ae
db dummyd_12c6f; // 124c:07af
db dummyd_12c70; // 124c:07b0
db dummyd_12c71;
db dummyd_12c72;
db dummyd_12c73;
db dummyd_12c74;
db dummyd_12c75;
db dummyd_12c76;
db dummyd_12c77;
db dummyd_12c78; // 124c:07b8
db dummyd_12c79;
db dummyd_12c7a; // 124c:07ba
db dummyd_12c7b;
db dummyd_12c7c; // 124c:07bc
db dummyd_12c7d;
db dummyd_12c7e; // 124c:07be
db dummyd_12c7f;
db dummyd_12c80;
db dummyd_12c81; // 124c:07c1
dd dummyd_12c82; // 124c:07c2
db dummyd_12c86; // 124c:07c6
db dummyd_12c87;
db dummyd_12c88; // 124c:07c8
db dummyd_12c89; // 124c:07c9
db dummyd_12c8a;
db dummyd_12c8b;
db dummyd_12c8c; // 124c:07cc
db dummyd_12c8d; // 124c:07cd
db dummyd_12c8e; // 124c:07ce
db dummyd_12c8f; // 124c:07cf
dd dummyd_12c90; // 124c:07d0
db dummyd_12c94[32]; // 124c:07d4
dd dummyd_12cb4; // 124c:07f4
db dummyd_12cb8; // 124c:07f8
db dummyd_12cb9;
db dummyd_12cba; // 124c:07fa
db dummyd_12cbb; // 124c:07fb
db dummyd_12cbc;
db dummyd_12cbd;
db dummyd_12cbe; // 124c:07fe
db dummyd_12cbf; // 124c:07ff
db dummyd_12cc0; // 124c:0800
db dummyd_12cc1; // 124c:0801
dd dummyd_12cc2; // 124c:0802
db dummyd_12cc6[2];
db dummyd_12cc8; // 124c:0808
db dummyd_12cc9; // 124c:0809
db dummyd_12cca; // 124c:080a
db dummyd_12ccb; // 124c:080b
db dummyd_12ccc; // 124c:080c
db dummyd_12ccd;
db dummyd_12cce; // 124c:080e
db dummyd_12ccf;
db dummyd_12cd0;
db dummyd_12cd1; // 124c:0811
db dummyd_12cd2; // 124c:0812
db dummyd_12cd3; // 124c:0813
db dummyd_12cd4; // 124c:0814
db dummyd_12cd5;
db dummyd_12cd6;
db dummyd_12cd7;
db dummyd_12cd8;
db dummyd_12cd9;
db dummyd_12cda;
db dummyd_12cdb;
db dummyd_12cdc; // 124c:081c
db dummyd_12cdd;
db dummyd_12cde; // 124c:081e
db dummyd_12cdf;
db dummyd_12ce0; // 124c:0820
db dummyd_12ce1;
db dummyd_12ce2; // 124c:0822
db dummyd_12ce3;
db dummyd_12ce4;
db dummyd_12ce5; // 124c:0825
dd dummyd_12ce6; // 124c:0826
db dummyd_12cea; // 124c:082a
db dummyd_12ceb;
db dummyd_12cec; // 124c:082c
db dummyd_12ced; // 124c:082d
db dummyd_12cee;
db dummyd_12cef;
db dummyd_12cf0; // 124c:0830
db dummyd_12cf1; // 124c:0831
db dummyd_12cf2; // 124c:0832
db dummyd_12cf3; // 124c:0833
dd dummyd_12cf4; // 124c:0834
db dummyd_12cf8[32]; // 124c:0838
dd dummyd_12d18; // 124c:0858
db dummyd_12d1c; // 124c:085c
db dummyd_12d1d; // 124c:085d
db dummyd_12d1e; // 124c:085e
db dummyd_12d1f; // 124c:085f
db dummyd_12d20;
db dummyd_12d21;
db dummyd_12d22; // 124c:0862
db dummyd_12d23; // 124c:0863
db dummyd_12d24; // 124c:0864
db dummyd_12d25; // 124c:0865
dd dummyd_12d26; // 124c:0866
db dummyd_12d2a[32]; // 124c:086a
dd dummyd_12d4a; // 124c:088a
db dummyd_12d4e; // 124c:088e
db dummyd_12d4f;
db dummyd_12d50; // 124c:0890
db dummyd_12d51; // 124c:0891
db dummyd_12d52;
db dummyd_12d53;
db dummyd_12d54; // 124c:0894
db dummyd_12d55; // 124c:0895
db dummyd_12d56; // 124c:0896
db dummyd_12d57; // 124c:0897
dd dummyd_12d58; // 124c:0898
db dummyd_12d5c[32]; // 124c:089c
dd dummyd_12d7c; // 124c:08bc
db dummyd_12d80[32]; // 124c:08c0
db dummyd_12da0;
db dummyd_12da1;
db dummyd_12da2;
db dummyd_12da3;
db dummyd_12da4;
db dummyd_12da5;
db dummyd_12da6; // 124c:08e6
db dummyd_12da7;
db dummyd_12da8;
db dummyd_12da9[1];
db dummyd_12daa[32]; // 124c:08ea
db dummyd_12dca;
db dummyd_12dcb;
db dummyd_12dcc;
db dummyd_12dcd;
db dummyd_12dce;
db dummyd_12dcf;
db dummyd_12dd0;
db dummyd_12dd1;
db dummyd_12dd2;
db dummyd_12dd3;
db dummyd_12dd4;
db dummyd_12dd5;
db dummyd_12dd6;
db dummyd_12dd7;
db dummyd_12dd8; // 124c:0918
db dummyd_12dd9;
db dummyd_12dda;
db dummyd_12ddb[1];
db dummyd_12ddc[32]; // 124c:091c
db dummyd_12dfc;
db dummyd_12dfd;
db dummyd_12dfe;
db dummyd_12dff;
db dummyd_12e00;
db dummyd_12e01;
db dummyd_12e02;
db dummyd_12e03;
db dummyd_12e04;
db dummyd_12e05;
db dummyd_12e06;
db dummyd_12e07;
db dummyd_12e08;
db dummyd_12e09;
db dummyd_12e0a; // 124c:094a
db dummyd_12e0b;
db dummyd_12e0c;
db dummyd_12e0d[1];
db dummyd_12e0e[32]; // 124c:094e
db dummyd_12e2e;
db dummyd_12e2f;
db dummyd_12e30;
db dummyd_12e31;
db dummyd_12e32;
db dummyd_12e33;
db dummyd_12e34;
db dummyd_12e35;
db dummyd_12e36;
db dummyd_12e37;
db dummyd_12e38;
db dummyd_12e39;
db dummyd_12e3a;
db dummyd_12e3b;
db dummyd_12e3c; // 124c:097c
db dummyd_12e3d;
db dummyd_12e3e;
db dummyd_12e3f[1];
db dummyd_12e40[32]; // 124c:0980
db dummyd_12e60;
db dummyd_12e61;
db dummyd_12e62;
db dummyd_12e63;
db dummyd_12e64;
db dummyd_12e65;
db dummyd_12e66;
db dummyd_12e67;
db dummyd_12e68;
db dummyd_12e69;
db dummyd_12e6a;
db dummyd_12e6b;
db dummyd_12e6c;
db dummyd_12e6d;
db dummyd_12e6e; // 124c:09ae
db dummyd_12e6f;
db dummyd_12e70;
db dummyd_12e71[1];
db dummyd_12e72[32]; // 124c:09b2
db dummyd_12e92;
db dummyd_12e93;
db dummyd_12e94;
db dummyd_12e95;
db dummyd_12e96;
db dummyd_12e97;
db dummyd_12e98;
db dummyd_12e99;
db dummyd_12e9a;
db dummyd_12e9b;
db dummyd_12e9c;
db dummyd_12e9d;
db dummyd_12e9e;
db dummyd_12e9f;
db dummyd_12ea0; // 124c:09e0
db dummyd_12ea1;
db dummyd_12ea2;
db dummyd_12ea3[1];
db dummyd_12ea4[32]; // 124c:09e4
db dummyd_12ec4;
db dummyd_12ec5;
db dummyd_12ec6;
db dummyd_12ec7;
db dummyd_12ec8;
db dummyd_12ec9;
db dummyd_12eca;
db dummyd_12ecb;
db dummyd_12ecc;
db dummyd_12ecd;
db dummyd_12ece;
db dummyd_12ecf;
db dummyd_12ed0;
db dummyd_12ed1;
db dummyd_12ed2; // 124c:0a12
db dummyd_12ed3;
db dummyd_12ed4;
db dummyd_12ed5[1];
db dummyd_12ed6[32]; // 124c:0a16
db dummyd_12ef6;
db dummyd_12ef7;
db dummyd_12ef8;
db dummyd_12ef9;
db dummyd_12efa;
db dummyd_12efb;
db dummyd_12efc;
db dummyd_12efd;
db dummyd_12efe;
db dummyd_12eff;
db dummyd_12f00;
db dummyd_12f01;
db dummyd_12f02;
db dummyd_12f03;
db dummyd_12f04; // 124c:0a44
db dummyd_12f05;
db dummyd_12f06;
db dummyd_12f07[1];
db dummyd_12f08[32]; // 124c:0a48
db dummyd_12f28;
db dummyd_12f29;
db dummyd_12f2a;
db dummyd_12f2b;
db dummyd_12f2c;
db dummyd_12f2d;
db dummyd_12f2e;
db dummyd_12f2f;
db dummyd_12f30;
db dummyd_12f31;
db dummyd_12f32;
db dummyd_12f33;
db dummyd_12f34;
db dummyd_12f35;
db dummyd_12f36; // 124c:0a76
db dummyd_12f37;
db dummyd_12f38;
db dummyd_12f39[1];
db dummyd_12f3a[32]; // 124c:0a7a
db dummyd_12f5a;
db dummyd_12f5b;
db dummyd_12f5c;
db dummyd_12f5d;
db dummyd_12f5e;
db dummyd_12f5f;
db dummyd_12f60;
db dummyd_12f61;
db dummyd_12f62;
db dummyd_12f63;
db dummyd_12f64;
db dummyd_12f65;
db dummyd_12f66;
db dummyd_12f67;
db dummyd_12f68; // 124c:0aa8
db dummyd_12f69;
db dummyd_12f6a;
db dummyd_12f6b[1];
db dummyd_12f6c[32]; // 124c:0aac
db unk_2156c; // 124c:0acc
db dummyd_12f8d;
db dummyd_12f8e;
db dummyd_12f8f;
db dummyd_12f90;
db dummyd_12f91;
db dummyd_12f92;
db dummyd_12f93;
db dummyd_12f94;
db dummyd_12f95;
db dummyd_12f96;
db dummyd_12f97;
db dummyd_12f98;
db dummyd_12f99;
db dummyd_12f9a; // 124c:0ada
db dummyd_12f9b;
db dummyd_12f9c;
db dummyd_12f9d[1];
db dummyd_12f9e[32]; // 124c:0ade
db dummyd_12fbe;
db dummyd_12fbf;
db dummyd_12fc0;
db dummyd_12fc1;
db dummyd_12fc2;
db dummyd_12fc3;
db dummyd_12fc4;
db dummyd_12fc5;
db dummyd_12fc6;
db dummyd_12fc7;
db dummyd_12fc8;
db dummyd_12fc9;
db dummyd_12fca;
db dummyd_12fcb;
db dummyd_12fcc; // 124c:0b0c
db dummyd_12fcd;
db dummyd_12fce;
db dummyd_12fcf[1];
db dummyd_12fd0[32]; // 124c:0b10
db dummyd_12ff0;
db dummyd_12ff1;
db dummyd_12ff2;
db dummyd_12ff3;
db dummyd_12ff4;
db dummyd_12ff5;
db dummyd_12ff6;
db dummyd_12ff7;
db dummyd_12ff8;
db dummyd_12ff9;
db dummyd_12ffa;
db dummyd_12ffb;
db dummyd_12ffc;
db dummyd_12ffd;
db dummyd_12ffe; // 124c:0b3e
db dummyd_12fff;
db dummyd_13000;
db dummyd_13001[1];
db dummyd_13002;
db dummyd_13003;
db dummyd_13004;
db dummyd_13005;
db dummyd_13006;
db dummyd_13007;
db dummyd_13008;
db dummyd_13009;
db dummyd_1300a;
db byte_215eb; // 124c:0b4b
db dummyd_1300c[32]; // 124c:0b4c
db dummyd_1302c;
db dummyd_1302d;
db dummyd_1302e;
db dummyd_1302f;
db dummyd_13030; // 124c:0b70
db dummyd_13031;
db dummyd_13032;
db unk_21613; // 124c:0b73
db dummyd_13034[32]; // 124c:0b74
db dummyd_13054;
db dummyd_13055;
db dummyd_13056;
db dummyd_13057;
db dummyd_13058;
db dummyd_13059;
db dummyd_1305a;
db dummyd_1305b;
db dummyd_1305c;
db dummyd_1305d;
db dummyd_1305e;
db dummyd_1305f;
db dummyd_13060;
db dummyd_13061;
db dummyd_13062; // 124c:0ba2
db dummyd_13063;
db dummyd_13064;
db dummyd_13065[1];
db dummyd_13066;
db dummyd_13067;
db dummyd_13068;
db dummyd_13069;
db dummyd_1306a;
db dummyd_1306b;
db dummyd_1306c;
db dummyd_1306d;
db unk_2164e; // 124c:0bae
db dummyd_1306f;
db dummyd_13070;
db dummyd_13071;
db dummyd_13072;
db dummyd_13073;
db dummyd_13074; // 124c:0bb4
db dummyd_13075; // 124c:0bb5
db dummyd_13076; // 124c:0bb6
db dummyd_13077; // 124c:0bb7
db dummyd_13078;
db dummyd_13079;
db dummyd_1307a;
db dummyd_1307b;
db dummyd_1307c;
db dummyd_1307d;
db dummyd_1307e;
db dummyd_1307f;
db dummyd_13080;
db dummyd_13081;
db dummyd_13082;
db dummyd_13083;
db byte_21664; // 124c:0bc4
db dummyd_13085;
db dummyd_13086;
db dummyd_13087;
db dummyd_13088;
db dummyd_13089;
db dummyd_1308a;
db dummyd_1308b;
db dummyd_1308c;
db dummyd_1308d;
db dummyd_1308e;
db dummyd_1308f;
db dummyd_13090;
db dummyd_13091;
db dummyd_13092;
db dummyd_13093;
db dummyd_13094; // 124c:0bd4
db dummyd_13095;
db dummyd_13096;
db dummyd_13097[1];
db dummyd_13098;
db dummyd_13099;
db dummyd_1309a;
db dummyd_1309b;
db dummyd_1309c;
db dummyd_1309d;
db dummyd_1309e;
db dummyd_1309f;
db dummyd_130a0;
db dummyd_130a1;
db dummyd_130a2;
db dummyd_130a3;
db dummyd_130a4;
db byte_21685; // 124c:0be5
db dummyd_130a6[32]; // 124c:0be6
db dummyd_130c6; // 124c:0c06
db dummyd_130c7;
db dummyd_130c8;
db dummyd_130c9[1];
db dummyd_130ca[32]; // 124c:0c0a
db dummyd_130ea;
db dummyd_130eb;
db dummyd_130ec;
db dummyd_130ed;
db dummyd_130ee;
db dummyd_130ef;
db dummyd_130f0;
db dummyd_130f1;
db dummyd_130f2;
db byte_216d3; // 124c:0c33
db dummyd_130f4;
db dummyd_130f5;
db dummyd_130f6;
db dummyd_130f7;
db dummyd_130f8; // 124c:0c38
db dummyd_130f9;
db dummyd_130fa;
db dummyd_130fb[1];
db dummyd_130fc;
db dummyd_130fd;
db dummyd_130fe;
db dummyd_130ff;
db byte_216e0; // 124c:0c40
db dummyd_13101[32]; // 124c:0c41
db dummyd_13121;
db dummyd_13122;
db dummyd_13123;
db dummyd_13124;
db dummyd_13125;
db dummyd_13126;
db dummyd_13127;
db dummyd_13128;
db dummyd_13129;
db dummyd_1312a; // 124c:0c6a
db dummyd_1312b;
db dummyd_1312c;
db dummyd_1312d[1];
db dummyd_1312e[32]; // 124c:0c6e
db dummyd_1314e;
db dummyd_1314f;
db dummyd_13150;
db dummyd_13151;
db dummyd_13152;
db dummyd_13153;
db dummyd_13154;
db dummyd_13155;
db dummyd_13156;
db dummyd_13157;
db dummyd_13158;
db dummyd_13159;
db dummyd_1315a;
db dummyd_1315b;
db dummyd_1315c; // 124c:0c9c
db dummyd_1315d;
db dummyd_1315e;
db dummyd_1315f[1];
db dummyd_13160[32]; // 124c:0ca0
db dummyd_13180;
db dummyd_13181;
db dummyd_13182;
db dummyd_13183;
db dummyd_13184;
db dummyd_13185;
db dummyd_13186;
db dummyd_13187;
db dummyd_13188;
db dummyd_13189;
db dummyd_1318a;
db dummyd_1318b;
db dummyd_1318c;
db dummyd_1318d;
db dummyd_1318e; // 124c:0cce
db dummyd_1318f;
db dummyd_13190;
db dummyd_13191[1];
db dummyd_13192[32]; // 124c:0cd2
db dummyd_131b2;
db dummyd_131b3;
db dummyd_131b4;
db dummyd_131b5;
db dummyd_131b6;
db dummyd_131b7;
db dummyd_131b8;
db dummyd_131b9;
db dummyd_131ba;
db dummyd_131bb;
db dummyd_131bc;
db dummyd_131bd;
db dummyd_131be;
db dummyd_131bf;
db dummyd_131c0; // 124c:0d00
db dummyd_131c1;
db dummyd_131c2;
db dummyd_131c3[1];
db dummyd_131c4[32]; // 124c:0d04
db dummyd_131e4;
db dummyd_131e5;
db dummyd_131e6;
db dummyd_131e7;
db dummyd_131e8;
db dummyd_131e9;
db dummyd_131ea;
db dummyd_131eb;
db dummyd_131ec;
db dummyd_131ed;
db dummyd_131ee;
db dummyd_131ef;
db dummyd_131f0;
db dummyd_131f1;
db dummyd_131f2; // 124c:0d32
db dummyd_131f3;
db dummyd_131f4;
db dummyd_131f5[1];
db dummyd_131f6[32]; // 124c:0d36
db dummyd_13216;
db dummyd_13217;
db dummyd_13218;
db dummyd_13219;
db dummyd_1321a;
db dummyd_1321b;
db dummyd_1321c;
db dummyd_1321d;
db dummyd_1321e;
db dummyd_1321f;
db dummyd_13220;
db dummyd_13221;
db dummyd_13222;
db dummyd_13223;
db dummyd_13224; // 124c:0d64
db dummyd_13225;
db dummyd_13226;
db dummyd_13227[1];
db dummyd_13228[32]; // 124c:0d68
db dummyd_13248;
db dummyd_13249;
db dummyd_1324a;
db dummyd_1324b;
db dummyd_1324c;
db dummyd_1324d;
db dummyd_1324e;
db dummyd_1324f;
db dummyd_13250;
db dummyd_13251;
db dummyd_13252;
db dummyd_13253;
db dummyd_13254;
db dummyd_13255;
db dummyd_13256; // 124c:0d96
db dummyd_13257;
db dummyd_13258;
db dummyd_13259[1];
db dummyd_1325a[32]; // 124c:0d9a
db dummyd_1327a;
db dummyd_1327b;
db dummyd_1327c;
db dummyd_1327d;
db dummyd_1327e;
db dummyd_1327f;
db dummyd_13280;
db dummyd_13281;
db dummyd_13282;
db dummyd_13283;
db dummyd_13284;
db dummyd_13285;
db dummyd_13286;
db dummyd_13287;
db dummyd_13288; // 124c:0dc8
db dummyd_13289;
db dummyd_1328a;
db dummyd_1328b[1];
db dummyd_1328c[32]; // 124c:0dcc
db dummyd_132ac;
db dummyd_132ad;
db dummyd_132ae;
db dummyd_132af;
db dummyd_132b0;
db dummyd_132b1;
db dummyd_132b2;
db dummyd_132b3;
db dummyd_132b4;
db dummyd_132b5;
db dummyd_132b6;
db dummyd_132b7;
db dummyd_132b8;
db dummyd_132b9;
db dummyd_132ba; // 124c:0dfa
db dummyd_132bb;
db dummyd_132bc;
db dummyd_132bd[1];
db dummyd_132be[32]; // 124c:0dfe
db dummyd_132de;
db dummyd_132df;
db dummyd_132e0;
db dummyd_132e1;
db dummyd_132e2;
db dummyd_132e3;
db dummyd_132e4;
db dummyd_132e5;
db dummyd_132e6;
db dummyd_132e7;
db dummyd_132e8;
db dummyd_132e9;
db dummyd_132ea;
db dummyd_132eb;
db dummyd_132ec; // 124c:0e2c
db dummyd_132ed;
db dummyd_132ee;
db dummyd_132ef[1];
db dummyd_132f0[32]; // 124c:0e30
db dummyd_13310;
db dummyd_13311;
db dummyd_13312;
db dummyd_13313;
db dummyd_13314;
db dummyd_13315;
db dummyd_13316;
db dummyd_13317;
db dummyd_13318;
db dummyd_13319;
db dummyd_1331a;
db dummyd_1331b;
db dummyd_1331c;
db dummyd_1331d;
db dummyd_1331e; // 124c:0e5e
db dummyd_1331f;
db dummyd_13320;
db dummyd_13321[1];
db dummyd_13322[32]; // 124c:0e62
db dummyd_13342;
db dummyd_13343;
db dummyd_13344;
db dummyd_13345;
db dummyd_13346;
db dummyd_13347;
db dummyd_13348;
db dummyd_13349;
db dummyd_1334a;
db dummyd_1334b;
db dummyd_1334c;
db dummyd_1334d;
db dummyd_1334e;
db dummyd_1334f;
db dummyd_13350; // 124c:0e90
db dummyd_13351;
db dummyd_13352;
db dummyd_13353[1];
db dummyd_13354[32]; // 124c:0e94
db dummyd_13374;
db dummyd_13375;
db dummyd_13376;
db dummyd_13377;
db dummyd_13378;
db dummyd_13379;
db dummyd_1337a;
db dummyd_1337b;
db dummyd_1337c;
db dummyd_1337d;
db dummyd_1337e;
db dummyd_1337f;
db dummyd_13380;
db dummyd_13381;
db dummyd_13382; // 124c:0ec2
db dummyd_13383;
db dummyd_13384;
db dummyd_13385[1];
db dummyd_13386[32]; // 124c:0ec6
db dummyd_133a6;
db dummyd_133a7;
db dummyd_133a8;
db dummyd_133a9;
db dummyd_133aa;
db dummyd_133ab;
db dummyd_133ac;
db dummyd_133ad;
db dummyd_133ae;
db dummyd_133af;
db dummyd_133b0;
db dummyd_133b1;
db dummyd_133b2;
db dummyd_133b3;
db dummyd_133b4; // 124c:0ef4
db dummyd_133b5;
db dummyd_133b6;
db dummyd_133b7[1];
db dummyd_133b8[32]; // 124c:0ef8
db dummyd_133d8;
db dummyd_133d9;
db dummyd_133da;
db dummyd_133db;
db dummyd_133dc;
db dummyd_133dd;
db dummyd_133de;
db dummyd_133df;
db dummyd_133e0;
db dummyd_133e1;
db dummyd_133e2;
db dummyd_133e3;
db dummyd_133e4;
db dummyd_133e5;
db dummyd_133e6; // 124c:0f26
db dummyd_133e7;
db dummyd_133e8;
db dummyd_133e9[1];
db dummyd_133ea[32]; // 124c:0f2a
db dummyd_1340a;
db dummyd_1340b;
db dummyd_1340c;
db dummyd_1340d;
db dummyd_1340e;
db dummyd_1340f;
db dummyd_13410;
db dummyd_13411;
db dummyd_13412;
db dummyd_13413;
db dummyd_13414;
db dummyd_13415;
db dummyd_13416;
db dummyd_13417;
db dummyd_13418; // 124c:0f58
db dummyd_13419;
db dummyd_1341a;
db dummyd_1341b[1];
db dummyd_1341c[32]; // 124c:0f5c
db dummyd_1343c;
db dummyd_1343d;
db dummyd_1343e;
db dummyd_1343f;
db dummyd_13440;
db dummyd_13441;
db dummyd_13442;
db dummyd_13443;
db dummyd_13444;
db dummyd_13445;
db dummyd_13446;
db dummyd_13447;
db dummyd_13448;
db byte_21a29; // 124c:0f89
db dummyd_1344a; // 124c:0f8a
db dummyd_1344b;
db dummyd_1344c;
db dummyd_1344d[1];
db dummyd_1344e;
db dummyd_1344f;
db dummyd_13450;
db dummyd_13451;
db dummyd_13452;
db dummyd_13453;
db dummyd_13454;
db dummyd_13455;
db dummyd_13456;
db dummyd_13457;
db dummyd_13458;
db dummyd_13459;
db dummyd_1345a;
db dummyd_1345b;
db dummyd_1345c; // 124c:0f9c
db dummyd_1345d; // 124c:0f9d
db dummyd_1345e; // 124c:0f9e
db dummyd_1345f; // 124c:0f9f
db dummyd_13460;
db dummyd_13461;
db dummyd_13462;
db dummyd_13463;
db dummyd_13464;
db dummyd_13465;
db dummyd_13466;
db dummyd_13467;
db dummyd_13468;
db byte_21a49; // 124c:0fa9
db dummyd_1346a;
db dummyd_1346b;
db dummyd_1346c;
db dummyd_1346d;
db dummyd_1346e;
db dummyd_1346f;
db dummyd_13470;
db dummyd_13471;
db dummyd_13472;
db dummyd_13473;
db dummyd_13474;
db dummyd_13475;
db dummyd_13476;
db dummyd_13477;
db dummyd_13478;
db dummyd_13479;
db dummyd_1347a;
db dummyd_1347b;
db dummyd_1347c; // 124c:0fbc
db dummyd_1347d;
db dummyd_1347e;
db dummyd_1347f[1];
db dummyd_13480[32]; // 124c:0fc0
db dummyd_134a0;
db dummyd_134a1;
db dummyd_134a2;
db dummyd_134a3;
db dummyd_134a4;
db dummyd_134a5;
db dummyd_134a6;
db dummyd_134a7;
db dummyd_134a8;
db dummyd_134a9;
db dummyd_134aa;
db dummyd_134ab;
db dummyd_134ac;
db dummyd_134ad;
db dummyd_134ae; // 124c:0fee
db dummyd_134af;
db dummyd_134b0;
db dummyd_134b1[1];
db dummyd_134b2[32]; // 124c:0ff2
db dummyd_134d2;
db dummyd_134d3;
db dummyd_134d4;
db dummyd_134d5;
db dummyd_134d6;
db dummyd_134d7;
db dummyd_134d8;
db dummyd_134d9;
db dummyd_134da;
db dummyd_134db;
db dummyd_134dc;
db dummyd_134dd;
db dummyd_134de;
db dummyd_134df;
db dummyd_134e0; // 124c:1020
db dummyd_134e1;
db dummyd_134e2;
db dummyd_134e3[1];
db dummyd_134e4[32]; // 124c:1024
db dummyd_13504;
db dummyd_13505;
db dummyd_13506;
db dummyd_13507;
db dummyd_13508;
db dummyd_13509;
db dummyd_1350a;
db dummyd_1350b;
db dummyd_1350c;
db dummyd_1350d;
db dummyd_1350e;
db dummyd_1350f;
db dummyd_13510;
db dummyd_13511;
db dummyd_13512; // 124c:1052
db dummyd_13513;
db dummyd_13514;
db dummyd_13515[1];
db dummyd_13516[32]; // 124c:1056
db dummyd_13536;
db dummyd_13537;
db dummyd_13538;
db dummyd_13539;
db dummyd_1353a;
db dummyd_1353b;
db dummyd_1353c;
db dummyd_1353d;
db dummyd_1353e;
db dummyd_1353f;
db dummyd_13540;
db dummyd_13541;
db dummyd_13542;
db dummyd_13543;
db dummyd_13544; // 124c:1084
db dummyd_13545;
db dummyd_13546;
db dummyd_13547[1];
db dummyd_13548[32]; // 124c:1088
db dummyd_13568;
db dummyd_13569;
db dummyd_1356a;
db dummyd_1356b;
db dummyd_1356c;
db dummyd_1356d;
db dummyd_1356e;
db dummyd_1356f;
db dummyd_13570;
db dummyd_13571;
db dummyd_13572;
db dummyd_13573;
db dummyd_13574;
db dummyd_13575;
db dummyd_13576; // 124c:10b6
db dummyd_13577;
db dummyd_13578;
db dummyd_13579[1];
db dummyd_1357a[32]; // 124c:10ba
db dummyd_1359a;
db dummyd_1359b;
db dummyd_1359c;
db dummyd_1359d;
db dummyd_1359e;
db dummyd_1359f;
db dummyd_135a0;
db dummyd_135a1;
db dummyd_135a2;
db dummyd_135a3;
db dummyd_135a4;
db dummyd_135a5;
db dummyd_135a6;
db dummyd_135a7;
db dummyd_135a8; // 124c:10e8
db dummyd_135a9;
db dummyd_135aa;
db dummyd_135ab[1];
db dummyd_135ac[32]; // 124c:10ec
db dummyd_135cc;
db dummyd_135cd;
db dummyd_135ce;
db dummyd_135cf;
db dummyd_135d0;
db dummyd_135d1;
db dummyd_135d2;
db dummyd_135d3;
db dummyd_135d4;
db dummyd_135d5;
db dummyd_135d6;
db dummyd_135d7;
db dummyd_135d8;
db dummyd_135d9;
db dummyd_135da; // 124c:111a
db dummyd_135db;
db dummyd_135dc;
db dummyd_135dd[1];
db dummyd_135de[32]; // 124c:111e
db dummyd_135fe;
db dummyd_135ff;
db dummyd_13600;
db dummyd_13601;
db dummyd_13602;
db dummyd_13603;
db dummyd_13604;
db dummyd_13605;
db dummyd_13606;
db dummyd_13607;
db dummyd_13608;
db dummyd_13609;
db dummyd_1360a;
db dummyd_1360b;
db dummyd_1360c; // 124c:114c
db dummyd_1360d;
db dummyd_1360e;
db dummyd_1360f[1];
db dummyd_13610[32]; // 124c:1150
db dummyd_13630;
db dummyd_13631;
db dummyd_13632;
db dummyd_13633;
db dummyd_13634;
db dummyd_13635;
db dummyd_13636;
db dummyd_13637;
db dummyd_13638;
db dummyd_13639;
db dummyd_1363a;
db dummyd_1363b;
db dummyd_1363c;
db dummyd_1363d;
db dummyd_1363e; // 124c:117e
db dummyd_1363f;
db dummyd_13640;
db dummyd_13641[1];
db dummyd_13642[32]; // 124c:1182
db dummyd_13662;
db dummyd_13663;
db dummyd_13664;
db dummyd_13665;
db dummyd_13666;
db dummyd_13667;
db dummyd_13668;
db dummyd_13669;
db dummyd_1366a;
db dummyd_1366b;
db dummyd_1366c;
db dummyd_1366d;
db dummyd_1366e;
db dummyd_1366f;
db dummyd_13670; // 124c:11b0
db dummyd_13671;
db dummyd_13672;
db dummyd_13673[1];
db dummyd_13674[32]; // 124c:11b4
db dummyd_13694;
db dummyd_13695;
db byte_21c76; // 124c:11d6
db dummyd_13697;
db dummyd_13698;
db dummyd_13699;
db dummyd_1369a;
db dummyd_1369b;
db dummyd_1369c;
db dummyd_1369d;
db dummyd_1369e;
db dummyd_1369f;
db dummyd_136a0;
db dummyd_136a1;
db dummyd_136a2; // 124c:11e2
db dummyd_136a3;
db dummyd_136a4;
db dummyd_136a5[1];
db dummyd_136a6[32]; // 124c:11e6
db dummyd_136c6;
db dummyd_136c7;
db dummyd_136c8;
db dummyd_136c9;
db dummyd_136ca;
db dummyd_136cb;
db dummyd_136cc;
db dummyd_136cd;
db dummyd_136ce;
db dummyd_136cf;
db dummyd_136d0;
db dummyd_136d1;
db dummyd_136d2;
db dummyd_136d3;
db dummyd_136d4; // 124c:1214
db dummyd_136d5;
db dummyd_136d6;
db dummyd_136d7[1];
db dummyd_136d8;
db dummyd_136d9;
db dummyd_136da;
db dummyd_136db;
db dummyd_136dc;
db dummyd_136dd;
db dummyd_136de;
db dummyd_136df;
db dummyd_136e0;
db byte_21cc1; // 124c:1221
db dummyd_136e2[32]; // 124c:1222
db dummyd_13702;
db dummyd_13703;
db dummyd_13704;
db dummyd_13705;
db dummyd_13706; // 124c:1246
db dummyd_13707;
db dummyd_13708;
db dummyd_13709[1];
db dummyd_1370a[32]; // 124c:124a
db dummyd_1372a;
db dummyd_1372b;
db dummyd_1372c;
db dummyd_1372d;
db dummyd_1372e;
db dummyd_1372f;
db dummyd_13730;
db dummyd_13731;
db dummyd_13732;
db dummyd_13733;
db dummyd_13734;
db dummyd_13735;
db dummyd_13736;
db dummyd_13737;
db dummyd_13738; // 124c:1278
db dummyd_13739;
db dummyd_1373a;
db dummyd_1373b[1];
db dummyd_1373c[32]; // 124c:127c
db dummyd_1375c;
db dummyd_1375d;
db dummyd_1375e;
db dummyd_1375f;
db dummyd_13760;
db dummyd_13761;
db dummyd_13762;
db dummyd_13763;
db dummyd_13764;
db dummyd_13765;
db dummyd_13766;
db dummyd_13767;
db dummyd_13768;
db dummyd_13769;
db dummyd_1376a; // 124c:12aa
db dummyd_1376b;
db dummyd_1376c;
db dummyd_1376d[1];
db dummyd_1376e[32]; // 124c:12ae
db dummyd_1378e;
db dummyd_1378f;
db dummyd_13790;
db dummyd_13791;
db dummyd_13792;
db dummyd_13793;
db dummyd_13794;
db dummyd_13795;
db dummyd_13796;
db dummyd_13797;
db dummyd_13798;
db dummyd_13799;
db dummyd_1379a;
db dummyd_1379b;
db dummyd_1379c; // 124c:12dc
db dummyd_1379d;
db dummyd_1379e;
db dummyd_1379f[1];
db dummyd_137a0[32]; // 124c:12e0
db dummyd_137c0;
db dummyd_137c1;
db dummyd_137c2;
db dummyd_137c3;
db dummyd_137c4;
db dummyd_137c5;
db dummyd_137c6;
db dummyd_137c7;
db dummyd_137c8;
db dummyd_137c9;
db dummyd_137ca;
db dummyd_137cb;
db dummyd_137cc;
db dummyd_137cd;
db dummyd_137ce; // 124c:130e
db dummyd_137cf;
db dummyd_137d0;
db dummyd_137d1[1];
db dummyd_137d2[32]; // 124c:1312
db dummyd_137f2;
db dummyd_137f3;
db dummyd_137f4;
db dummyd_137f5;
db dummyd_137f6;
db dummyd_137f7;
db dummyd_137f8;
db dummyd_137f9;
db dummyd_137fa;
db dummyd_137fb;
db dummyd_137fc;
db dummyd_137fd;
db dummyd_137fe;
db dummyd_137ff;
db dummyd_13800; // 124c:1340
db dummyd_13801;
db dummyd_13802;
db dummyd_13803[1];
db dummyd_13804[32]; // 124c:1344
db dummyd_13824;
db dummyd_13825;
db dummyd_13826;
db dummyd_13827;
db dummyd_13828;
db dummyd_13829;
db dummyd_1382a;
db dummyd_1382b;
db dummyd_1382c;
db dummyd_1382d;
db dummyd_1382e;
db dummyd_1382f;
db dummyd_13830;
db dummyd_13831;
db dummyd_13832; // 124c:1372
db dummyd_13833;
db dummyd_13834;
db dummyd_13835[1];
db dummyd_13836[32]; // 124c:1376
db dummyd_13856;
db dummyd_13857;
db dummyd_13858;
db dummyd_13859;
db dummyd_1385a;
db dummyd_1385b;
db dummyd_1385c;
db dummyd_1385d;
db dummyd_1385e;
db dummyd_1385f;
db dummyd_13860;
db dummyd_13861;
db dummyd_13862;
db dummyd_13863;
db dummyd_13864; // 124c:13a4
db dummyd_13865;
db dummyd_13866;
db dummyd_13867[1];
db dummyd_13868[32]; // 124c:13a8
db dummyd_13888;
db dummyd_13889;
db dummyd_1388a;
db dummyd_1388b;
db dummyd_1388c;
db dummyd_1388d;
db dummyd_1388e;
db dummyd_1388f;
db dummyd_13890;
db dummyd_13891;
db dummyd_13892;
db dummyd_13893;
db dummyd_13894;
db dummyd_13895;
db dummyd_13896; // 124c:13d6
db dummyd_13897;
db dummyd_13898;
db dummyd_13899[1];
db dummyd_1389a[32]; // 124c:13da
db dummyd_138ba;
db dummyd_138bb;
db dummyd_138bc;
db dummyd_138bd;
db dummyd_138be;
db dummyd_138bf;
db dummyd_138c0;
db dummyd_138c1;
db dummyd_138c2;
db dummyd_138c3;
db dummyd_138c4;
db dummyd_138c5;
db dummyd_138c6;
db dummyd_138c7;
db dummyd_138c8; // 124c:1408
db dummyd_138c9;
db dummyd_138ca;
db dummyd_138cb[1];
db dummyd_138cc[32]; // 124c:140c
db dummyd_138ec;
db dummyd_138ed;
db dummyd_138ee;
db dummyd_138ef;
db dummyd_138f0;
db dummyd_138f1;
db dummyd_138f2;
db dummyd_138f3;
db dummyd_138f4;
db dummyd_138f5;
db dummyd_138f6;
db dummyd_138f7;
db dummyd_138f8;
db dummyd_138f9;
db dummyd_138fa; // 124c:143a
db dummyd_138fb;
db dummyd_138fc;
db dummyd_138fd[1];
db dummyd_138fe[32]; // 124c:143e
db dummyd_1391e;
db dummyd_1391f;
db dummyd_13920;
db dummyd_13921;
db dummyd_13922;
db dummyd_13923;
db dummyd_13924;
db dummyd_13925;
db dummyd_13926;
db dummyd_13927;
db dummyd_13928;
db dummyd_13929;
db dummyd_1392a;
db dummyd_1392b;
db dummyd_1392c; // 124c:146c
db dummyd_1392d;
db dummyd_1392e;
db dummyd_1392f[1];
db dummyd_13930[32]; // 124c:1470
db dummyd_13950;
db dummyd_13951;
db dummyd_13952;
db dummyd_13953;
db dummyd_13954;
db dummyd_13955;
db dummyd_13956;
db dummyd_13957;
db dummyd_13958;
db dummyd_13959;
db dummyd_1395a;
db dummyd_1395b;
db dummyd_1395c;
db dummyd_1395d;
db dummyd_1395e; // 124c:149e
db dummyd_1395f;
db dummyd_13960;
db dummyd_13961[1];
db dummyd_13962[32]; // 124c:14a2
db dummyd_13982;
db dummyd_13983;
db dummyd_13984;
db dummyd_13985;
db dummyd_13986;
db dummyd_13987;
db dummyd_13988;
db dummyd_13989;
db dummyd_1398a;
db dummyd_1398b;
db dummyd_1398c;
db dummyd_1398d;
db dummyd_1398e;
db dummyd_1398f;
db dummyd_13990; // 124c:14d0
db dummyd_13991;
db dummyd_13992;
db dummyd_13993[1];
db dummyd_13994[32]; // 124c:14d4
db dummyd_139b4;
db dummyd_139b5;
db dummyd_139b6;
db dummyd_139b7;
db dummyd_139b8;
db dummyd_139b9;
db dummyd_139ba;
db dummyd_139bb;
db dummyd_139bc;
db dummyd_139bd;
db dummyd_139be;
db dummyd_139bf;
db dummyd_139c0;
db dummyd_139c1;
db dummyd_139c2; // 124c:1502
db dummyd_139c3;
db dummyd_139c4;
db dummyd_139c5[1];
db dummyd_139c6[32]; // 124c:1506
db dummyd_139e6;
db dummyd_139e7;
db dummyd_139e8;
db dummyd_139e9;
db dummyd_139ea;
db dummyd_139eb;
db dummyd_139ec;
db dummyd_139ed;
db dummyd_139ee;
db dummyd_139ef;
db dummyd_139f0;
db dummyd_139f1;
db dummyd_139f2;
db dummyd_139f3;
db dummyd_139f4; // 124c:1534
db dummyd_139f5;
db dummyd_139f6;
db dummyd_139f7[1];
db dummyd_139f8[32]; // 124c:1538
db dummyd_13a18;
db dummyd_13a19;
db dummyd_13a1a;
db dummyd_13a1b;
db dummyd_13a1c;
db dummyd_13a1d;
db dummyd_13a1e;
db dummyd_13a1f;
db dummyd_13a20;
db dummyd_13a21;
db dummyd_13a22;
db dummyd_13a23;
db dummyd_13a24;
db dummyd_13a25;
db dummyd_13a26; // 124c:1566
db dummyd_13a27;
db dummyd_13a28;
db dummyd_13a29[1];
db dummyd_13a2a[32]; // 124c:156a
db dummyd_13a4a;
db dummyd_13a4b;
db dummyd_13a4c;
db dummyd_13a4d;
db dummyd_13a4e;
db dummyd_13a4f;
db dummyd_13a50;
db dummyd_13a51;
db dummyd_13a52;
db dummyd_13a53;
db dummyd_13a54;
db dummyd_13a55;
db dummyd_13a56;
db dummyd_13a57;
db dummyd_13a58; // 124c:1598
db dummyd_13a59;
db dummyd_13a5a;
db dummyd_13a5b[1];
db dummyd_13a5c[32]; // 124c:159c
db dummyd_13a7c;
db dummyd_13a7d;
db dummyd_13a7e;
db dummyd_13a7f;
db dummyd_13a80;
db dummyd_13a81;
db dummyd_13a82;
db dummyd_13a83;
db dummyd_13a84;
db dummyd_13a85;
db dummyd_13a86;
db dummyd_13a87;
db dummyd_13a88;
db dummyd_13a89;
db dummyd_13a8a; // 124c:15ca
db dummyd_13a8b;
db dummyd_13a8c;
db dummyd_13a8d[1];
db dummyd_13a8e[32]; // 124c:15ce
db dummyd_13aae;
db dummyd_13aaf;
db dummyd_13ab0;
db dummyd_13ab1;
db dummyd_13ab2;
db dummyd_13ab3;
db dummyd_13ab4;
db dummyd_13ab5;
db dummyd_13ab6;
db dummyd_13ab7;
db dummyd_13ab8;
db dummyd_13ab9;
db dummyd_13aba;
db dummyd_13abb;
db dummyd_13abc; // 124c:15fc
db dummyd_13abd;
db dummyd_13abe;
db dummyd_13abf[1];
db dummyd_13ac0[32]; // 124c:1600
db dummyd_13ae0;
db dummyd_13ae1;
db dummyd_13ae2;
db dummyd_13ae3;
db dummyd_13ae4;
db dummyd_13ae5;
db dummyd_13ae6;
db dummyd_13ae7;
db dummyd_13ae8;
db dummyd_13ae9;
db dummyd_13aea;
db dummyd_13aeb;
db dummyd_13aec;
db dummyd_13aed;
db dummyd_13aee; // 124c:162e
db dummyd_13aef;
db dummyd_13af0;
db dummyd_13af1[1];
db dummyd_13af2[32]; // 124c:1632
db dummyd_13b12;
db dummyd_13b13;
db dummyd_13b14;
db dummyd_13b15;
db dummyd_13b16;
db dummyd_13b17;
db dummyd_13b18;
db dummyd_13b19;
db dummyd_13b1a;
db dummyd_13b1b;
db dummyd_13b1c;
db dummyd_13b1d;
db dummyd_13b1e;
db dummyd_13b1f;
db dummyd_13b20; // 124c:1660
db dummyd_13b21;
db dummyd_13b22;
db dummyd_13b23[1];
db dummyd_13b24[32]; // 124c:1664
db dummyd_13b44;
db dummyd_13b45;
db dummyd_13b46;
db dummyd_13b47;
db dummyd_13b48;
db dummyd_13b49;
db dummyd_13b4a;
db dummyd_13b4b;
db dummyd_13b4c;
db dummyd_13b4d;
db dummyd_13b4e;
db dummyd_13b4f;
db dummyd_13b50;
db dummyd_13b51;
db dummyd_13b52; // 124c:1692
db dummyd_13b53;
db dummyd_13b54;
db dummyd_13b55[1];
db dummyd_13b56[32]; // 124c:1696
db dummyd_13b76;
db dummyd_13b77;
db dummyd_13b78;
db dummyd_13b79;
db dummyd_13b7a;
db dummyd_13b7b;
db dummyd_13b7c;
db dummyd_13b7d;
db dummyd_13b7e;
db dummyd_13b7f;
db dummyd_13b80;
db dummyd_13b81;
db dummyd_13b82;
db dummyd_13b83;
db dummyd_13b84; // 124c:16c4
db dummyd_13b85;
db dummyd_13b86;
db dummyd_13b87[1];
db dummyd_13b88[32]; // 124c:16c8
db unk_22188; // 124c:16e8
db dummyd_13ba9;
db dummyd_13baa;
db dummyd_13bab;
db dummyd_13bac;
db dummyd_13bad;
db dummyd_13bae;
db dummyd_13baf;
db dummyd_13bb0;
db dummyd_13bb1;
db dummyd_13bb2;
db dummyd_13bb3;
db dummyd_13bb4;
db dummyd_13bb5;
db dummyd_13bb6; // 124c:16f6
db dummyd_13bb7;
db dummyd_13bb8;
db dummyd_13bb9[1];
db dummyd_13bba[32]; // 124c:16fa
db dummyd_13bda;
db dummyd_13bdb;
db dummyd_13bdc;
db dummyd_13bdd;
db dummyd_13bde;
db dummyd_13bdf;
db dummyd_13be0;
db dummyd_13be1;
db dummyd_13be2;
db dummyd_13be3;
db dummyd_13be4;
db dummyd_13be5;
db dummyd_13be6;
db dummyd_13be7;
db dummyd_13be8; // 124c:1728
db dummyd_13be9;
db dummyd_13bea;
db dummyd_13beb[1];
db dummyd_13bec[32]; // 124c:172c
db dummyd_13c0c;
db dummyd_13c0d;
db dummyd_13c0e;
db dummyd_13c0f;
db dummyd_13c10;
db dummyd_13c11;
db dummyd_13c12;
db dummyd_13c13;
db dummyd_13c14;
db dummyd_13c15;
db dummyd_13c16;
db dummyd_13c17;
db dummyd_13c18;
db dummyd_13c19;
db dummyd_13c1a; // 124c:175a
db dummyd_13c1b;
db dummyd_13c1c;
db dummyd_13c1d[1];
db dummyd_13c1e[32]; // 124c:175e
db dummyd_13c3e;
db dummyd_13c3f;
db dummyd_13c40;
db dummyd_13c41;
db dummyd_13c42;
db dummyd_13c43;
db dummyd_13c44;
db dummyd_13c45;
db dummyd_13c46;
db dummyd_13c47;
db dummyd_13c48;
db dummyd_13c49;
db dummyd_13c4a;
db dummyd_13c4b;
db dummyd_13c4c; // 124c:178c
db dummyd_13c4d;
db dummyd_13c4e;
db dummyd_13c4f[1];
db dummyd_13c50[32]; // 124c:1790
db dummyd_13c70;
db dummyd_13c71;
db dummyd_13c72;
db dummyd_13c73;
db dummyd_13c74;
db dummyd_13c75;
db dummyd_13c76;
db dummyd_13c77;
db dummyd_13c78;
db dummyd_13c79;
db dummyd_13c7a;
db dummyd_13c7b;
db dummyd_13c7c;
db dummyd_13c7d;
db dummyd_13c7e; // 124c:17be
db dummyd_13c7f;
db dummyd_13c80;
db dummyd_13c81[1];
db dummyd_13c82[32]; // 124c:17c2
db dummyd_13ca2[32]; // 124c:17e2
db dummyd_13cc2[32]; // 124c:1802
db dummyd_13ce2[32]; // 124c:1822
db dummyd_13d02[32]; // 124c:1842
db dummyd_13d22[32]; // 124c:1862
db dummyd_13d42[32]; // 124c:1882
db dummyd_13d62[32]; // 124c:18a2
db dummyd_13d82[32]; // 124c:18c2
db dummyd_13da2[32]; // 124c:18e2
db dummyd_13dc2[32]; // 124c:1902
db dummyd_13de2[32]; // 124c:1922
db dummyd_13e02[32]; // 124c:1942
db dummyd_13e22[32]; // 124c:1962
db dummyd_13e42[32]; // 124c:1982
db dummyd_13e62[32]; // 124c:19a2
db dummyd_13e82[32]; // 124c:19c2
db dummyd_13ea2[32]; // 124c:19e2
db dummyd_13ec2;
db dummyd_13ec3;
db dummyd_13ec4;
db dummyd_13ec5;
db dummyd_13ec6;
db dummyd_13ec7;
db dummyd_13ec8;
db dummyd_13ec9;
db byte_224aa; // 124c:1a0a
db dummyd_13ecb[32]; // 124c:1a0b
db dummyd_13eeb[32]; // 124c:1a2b
db dummyd_13f0b[32]; // 124c:1a4b
db dummyd_13f2b[32]; // 124c:1a6b
db dummyd_13f4b[32]; // 124c:1a8b
db dummyd_13f6b[32]; // 124c:1aab
db dummyd_13f8b[32]; // 124c:1acb
db dummyd_13fab[32]; // 124c:1aeb
db dummyd_13fcb[32]; // 124c:1b0b
db dummyd_13feb[32]; // 124c:1b2b
db dummyd_1400b[32]; // 124c:1b4b
db dummyd_1402b[32]; // 124c:1b6b
db dummyd_1404b[32]; // 124c:1b8b
db dummyd_1406b[32]; // 124c:1bab
db dummyd_1408b[32]; // 124c:1bcb
db dummyd_140ab[32]; // 124c:1beb
db dummyd_140cb[32]; // 124c:1c0b
db dummyd_140eb[32]; // 124c:1c2b
db dummyd_1410b[32]; // 124c:1c4b
db dummyd_1412b[32]; // 124c:1c6b
db dummyd_1414b[32]; // 124c:1c8b
db dummyd_1416b[32]; // 124c:1cab
db dummyd_1418b[32]; // 124c:1ccb
db dummyd_141ab[32]; // 124c:1ceb
db dummyd_141cb[32]; // 124c:1d0b
db dummyd_141eb[32]; // 124c:1d2b
db dummyd_1420b[32]; // 124c:1d4b
db dummyd_1422b[32]; // 124c:1d6b
db dummyd_1424b[32]; // 124c:1d8b
db dummyd_1426b[32]; // 124c:1dab
db dummyd_1428b[32]; // 124c:1dcb
db dummyd_142ab[32]; // 124c:1deb
db dummyd_142cb[32]; // 124c:1e0b
db dummyd_142eb[32]; // 124c:1e2b
db dummyd_1430b[32]; // 124c:1e4b
db dummyd_1432b[32]; // 124c:1e6b
db dummyd_1434b[32]; // 124c:1e8b
db dummyd_1436b[32]; // 124c:1eab
db dummyd_1438b[32]; // 124c:1ecb
db dummyd_143ab; // 124c:1eeb
db dummyd_143ac;
db dummyd_143ad;
db dummyd_143ae;
db dummyd_143af;
db dummyd_143b0;
db dummyd_143b1;
db dummyd_143b2;
db dummyd_143b3; // 124c:1ef3
db dummyd_143b4;
db dummyd_143b5;
db dummyd_143b6;
db unk_22997; // 124c:1ef7
db dummyd_143b8[32]; // 124c:1ef8
db dummyd_143d8[32]; // 124c:1f18
db dummyd_143f8[32]; // 124c:1f38
db dummyd_14418[32]; // 124c:1f58
db dummyd_14438[32]; // 124c:1f78
db dummyd_14458[32]; // 124c:1f98
db dummyd_14478[32]; // 124c:1fb8
db dummyd_14498[32]; // 124c:1fd8
db dummyd_144b8[32]; // 124c:1ff8
db dummyd_144d8[32]; // 124c:2018
db dummyd_144f8[32]; // 124c:2038
db dummyd_14518[32]; // 124c:2058
db dummyd_14538[32]; // 124c:2078
db dummyd_14558[32]; // 124c:2098
db dummyd_14578[32]; // 124c:20b8
db dummyd_14598[32]; // 124c:20d8
db dummyd_145b8[32]; // 124c:20f8
db dummyd_145d8[32]; // 124c:2118
db dummyd_145f8[32]; // 124c:2138
db dummyd_14618[32]; // 124c:2158
db dummyd_14638[32]; // 124c:2178
db dummyd_14658[32]; // 124c:2198
db dummyd_14678[32]; // 124c:21b8
db dummyd_14698[32]; // 124c:21d8
db dummyd_146b8[32]; // 124c:21f8
db dummyd_146d8[32]; // 124c:2218
db dummyd_146f8[32]; // 124c:2238
db dummyd_14718[32]; // 124c:2258
db dummyd_14738[32]; // 124c:2278
db dummyd_14758[32]; // 124c:2298
db dummyd_14778[32]; // 124c:22b8
db dummyd_14798[32]; // 124c:22d8
db dummyd_147b8[32]; // 124c:22f8
db dummyd_147d8[32]; // 124c:2318
db dummyd_147f8[32]; // 124c:2338
db dummyd_14818[32]; // 124c:2358
db dummyd_14838[32]; // 124c:2378
db dummyd_14858[32]; // 124c:2398
db dummyd_14878[32]; // 124c:23b8
db dummyd_14898[32]; // 124c:23d8
db dummyd_148b8[32]; // 124c:23f8
db dummyd_148d8[32]; // 124c:2418
db dummyd_148f8[32]; // 124c:2438
db dummyd_14918[32]; // 124c:2458
db dummyd_14938[32]; // 124c:2478
db dummyd_14958[32]; // 124c:2498
db dummyd_14978[32]; // 124c:24b8
db dummyd_14998[32]; // 124c:24d8
db dummyd_149b8[32]; // 124c:24f8
db dummyd_149d8[32]; // 124c:2518
db dummyd_149f8[32]; // 124c:2538
db dummyd_14a18[32]; // 124c:2558
db dummyd_14a38[32]; // 124c:2578
db dummyd_14a58[32]; // 124c:2598
db dummyd_14a78[32]; // 124c:25b8
db dummyd_14a98[32]; // 124c:25d8
db dummyd_14ab8[32]; // 124c:25f8
db dummyd_14ad8[32]; // 124c:2618
db dummyd_14af8[32]; // 124c:2638
db dummyd_14b18[32]; // 124c:2658
db dummyd_14b38[32]; // 124c:2678
db dummyd_14b58[32]; // 124c:2698
db dummyd_14b78[32]; // 124c:26b8
db dummyd_14b98[32]; // 124c:26d8
db dummyd_14bb8[32]; // 124c:26f8
db dummyd_14bd8[32]; // 124c:2718
db dummyd_14bf8[32]; // 124c:2738
db dummyd_14c18[32]; // 124c:2758
db dummyd_14c38[32]; // 124c:2778
db dummyd_14c58[32]; // 124c:2798
db dummyd_14c78[32]; // 124c:27b8
db dummyd_14c98[32]; // 124c:27d8
db dummyd_14cb8[32]; // 124c:27f8
db dummyd_14cd8[32]; // 124c:2818
db dummyd_14cf8[32]; // 124c:2838
db dummyd_14d18[32]; // 124c:2858
db dummyd_14d38[32]; // 124c:2878
db dummyd_14d58[32]; // 124c:2898
db dummyd_14d78[32]; // 124c:28b8
db dummyd_14d98[32]; // 124c:28d8
db dummyd_14db8[32]; // 124c:28f8
db dummyd_14dd8[32]; // 124c:2918
db dummyd_14df8[32]; // 124c:2938
db dummyd_14e18[32]; // 124c:2958
db dummyd_14e38[32]; // 124c:2978
db dummyd_14e58[32]; // 124c:2998
db dummyd_14e78[32]; // 124c:29b8
db dummyd_14e98[32]; // 124c:29d8
db dummyd_14eb8[32]; // 124c:29f8
db dummyd_14ed8; // 124c:2a18
db dummyd_14ed9; // 124c:2a19
db dummyd_14eda; // 124c:2a1a
db dummyd_14edb; // 124c:2a1b
db dummyd_14edc; // 124c:2a1c
db dummyd_14edd; // 124c:2a1d
db dummyd_14ede;
db unk_234bf; // 124c:2a1f
db dummyd_14ee0[32]; // 124c:2a20
db dummyd_14f00[32]; // 124c:2a40
db dummyd_14f20; // 124c:2a60
db dummyd_14f21; // 124c:2a61
db dummyd_14f22; // 124c:2a62
db dummyd_14f23; // 124c:2a63
db dummyd_14f24; // 124c:2a64
db dummyd_14f25; // 124c:2a65
db dummyd_14f26; // 124c:2a66
db dummyd_14f27; // 124c:2a67
db dummyd_14f28; // 124c:2a68
db dummyd_14f29; // 124c:2a69
db dummyd_14f2a; // 124c:2a6a
db dummyd_14f2b; // 124c:2a6b
db dummyd_14f2c; // 124c:2a6c
db dummyd_14f2d; // 124c:2a6d
db dummyd_14f2e; // 124c:2a6e
db dummyd_14f2f; // 124c:2a6f
db dummyd_14f30; // 124c:2a70
db dummyd_14f31; // 124c:2a71
db dummyd_14f32; // 124c:2a72
db dummyd_14f33;
db unk_23514; // 124c:2a74
db dummyd_14f35;
db dummyd_14f36; // 124c:2a76
db dummyd_14f37; // 124c:2a77
db dummyd_14f38; // 124c:2a78
db dummyd_14f39; // 124c:2a79
db dummyd_14f3a; // 124c:2a7a
db dummyd_14f3b; // 124c:2a7b
db dummyd_14f3c; // 124c:2a7c
db dummyd_14f3d; // 124c:2a7d
db dummyd_14f3e;
db dummyd_14f3f; // 124c:2a7f
db dummyd_14f40; // 124c:2a80
db dummyd_14f41; // 124c:2a81
db dummyd_14f42;
db dummyd_14f43; // 124c:2a83
db dummyd_14f44; // 124c:2a84
db dummyd_14f45; // 124c:2a85
db dummyd_14f46; // 124c:2a86
db dummyd_14f47;
db dummyd_14f48; // 124c:2a88
db dummyd_14f49;
db dummyd_14f4a; // 124c:2a8a
db dummyd_14f4b; // 124c:2a8b
db dummyd_14f4c; // 124c:2a8c
db dummyd_14f4d; // 124c:2a8d
db dummyd_14f4e; // 124c:2a8e
db dummyd_14f4f; // 124c:2a8f
db dummyd_14f50; // 124c:2a90
db dummyd_14f51; // 124c:2a91
db dummyd_14f52; // 124c:2a92
db unk_23533; // 124c:2a93
db dummyd_14f54; // 124c:2a94
db dummyd_14f55; // 124c:2a95
db dummyd_14f56; // 124c:2a96
db dummyd_14f57; // 124c:2a97
db dummyd_14f58; // 124c:2a98
db dummyd_14f59; // 124c:2a99
db dummyd_14f5a; // 124c:2a9a
db dummyd_14f5b; // 124c:2a9b
db dummyd_14f5c; // 124c:2a9c
db dummyd_14f5d; // 124c:2a9d
db dummyd_14f5e;
db dummyd_14f5f; // 124c:2a9f
db dummyd_14f60; // 124c:2aa0
db dummyd_14f61; // 124c:2aa1
db dummyd_14f62; // 124c:2aa2
db unk_23543; // 124c:2aa3
db dummyd_14f64; // 124c:2aa4
db dummyd_14f65; // 124c:2aa5
db dummyd_14f66; // 124c:2aa6
db dummyd_14f67; // 124c:2aa7
db dummyd_14f68; // 124c:2aa8
db dummyd_14f69; // 124c:2aa9
db dummyd_14f6a; // 124c:2aaa
db dummyd_14f6b; // 124c:2aab
db dummyd_14f6c; // 124c:2aac
db dummyd_14f6d; // 124c:2aad
db dummyd_14f6e; // 124c:2aae
db dummyd_14f6f; // 124c:2aaf
db dummyd_14f70; // 124c:2ab0
db dummyd_14f71; // 124c:2ab1
db dummyd_14f72; // 124c:2ab2
db dummyd_14f73; // 124c:2ab3
db dummyd_14f74; // 124c:2ab4
db unk_23555; // 124c:2ab5
db dummyd_14f76[32]; // 124c:2ab6
db dummyd_14f96[32]; // 124c:2ad6
db dummyd_14fb6[32]; // 124c:2af6
db dummyd_14fd6[32]; // 124c:2b16
db dummyd_14ff6[32]; // 124c:2b36
db dummyd_15016[32]; // 124c:2b56
db dummyd_15036; // 124c:2b76
db dummyd_15037; // 124c:2b77
db unk_23618; // 124c:2b78
db dummyd_15039; // 124c:2b79
db dummyd_1503a; // 124c:2b7a
db dummyd_1503b; // 124c:2b7b
db dummyd_1503c; // 124c:2b7c
db dummyd_1503d; // 124c:2b7d
db dummyd_1503e; // 124c:2b7e
db dummyd_1503f; // 124c:2b7f
db dummyd_15040; // 124c:2b80
db dummyd_15041; // 124c:2b81
db dummyd_15042; // 124c:2b82
dw dummyd_15043; // 124c:2b83
db dummyd_15045[32]; // 124c:2b85
db dummyd_15065[32]; // 124c:2ba5
db dummyd_15085[32]; // 124c:2bc5
db dummyd_150a5[32]; // 124c:2be5
db dummyd_150c5[32]; // 124c:2c05
db dummyd_150e5[32]; // 124c:2c25
db dummyd_15105[32]; // 124c:2c45
db dummyd_15125[32]; // 124c:2c65
db dummyd_15145[32]; // 124c:2c85
db dummyd_15165[32]; // 124c:2ca5
db dummyd_15185[32]; // 124c:2cc5
db dummyd_151a5[32]; // 124c:2ce5
db dummyd_151c5[32]; // 124c:2d05
db dummyd_151e5[32]; // 124c:2d25
db dummyd_15205[32]; // 124c:2d45
db dummyd_15225[32]; // 124c:2d65
db dummyd_15245[32]; // 124c:2d85
db dummyd_15265[32]; // 124c:2da5
db dummyd_15285[32]; // 124c:2dc5
db dummyd_152a5[32]; // 124c:2de5
db dummyd_152c5[32]; // 124c:2e05
db dummyd_152e5[32]; // 124c:2e25
db dummyd_15305[32]; // 124c:2e45
db dummyd_15325[32]; // 124c:2e65
db dummyd_15345[32]; // 124c:2e85
db dummyd_15365[32]; // 124c:2ea5
db dummyd_15385[32]; // 124c:2ec5
db dummyd_153a5[32]; // 124c:2ee5
db dummyd_153c5[32]; // 124c:2f05
db dummyd_153e5[32]; // 124c:2f25
db dummyd_15405[32]; // 124c:2f45
db dummyd_15425[32]; // 124c:2f65
db dummyd_15445[32]; // 124c:2f85
db dummyd_15465[32]; // 124c:2fa5
db dummyd_15485[32]; // 124c:2fc5
db dummyd_154a5[32]; // 124c:2fe5
db dummyd_154c5[32]; // 124c:3005
db dummyd_154e5[32]; // 124c:3025
db dummyd_15505[32]; // 124c:3045
db dummyd_15525; // 124c:3065
db dummyd_15526; // 124c:3066
db dummyd_15527; // 124c:3067
db dummyd_15528; // 124c:3068
db dummyd_15529; // 124c:3069
db dummyd_1552a; // 124c:306a
db dummyd_1552b; // 124c:306b
db dummyd_1552c; // 124c:306c
db dummyd_1552d;
db dummyd_1552e; // 124c:306e
db dummyd_1552f; // 124c:306f
db unk_23b10; // 124c:3070
db dummyd_15531[32]; // 124c:3071
db dummyd_15551[32]; // 124c:3091
db dummyd_15571[32]; // 124c:30b1
db dummyd_15591[32]; // 124c:30d1
db dummyd_155b1[32]; // 124c:30f1
db dummyd_155d1[32]; // 124c:3111
db dummyd_155f1[32]; // 124c:3131
db dummyd_15611[32]; // 124c:3151
db dummyd_15631[32]; // 124c:3171
db dummyd_15651[32]; // 124c:3191
db dummyd_15671[32]; // 124c:31b1
db dummyd_15691[32]; // 124c:31d1
db dummyd_156b1[32]; // 124c:31f1
db dummyd_156d1[32]; // 124c:3211
db dummyd_156f1[32]; // 124c:3231
db dummyd_15711[32]; // 124c:3251
db dummyd_15731[32]; // 124c:3271
db dummyd_15751[32]; // 124c:3291
db dummyd_15771;
db dummyd_15772;
db dummyd_15773;
db dummyd_15774;
db dummyd_15775;
db dummyd_15776;
db dummyd_15777;
db dummyd_15778;
db dummyd_15779;
db dummyd_1577a;
db dummyd_1577b;
db dummyd_1577c;
db dummyd_1577d;
db dummyd_1577e;
db dummyd_1577f;
db dummyd_15780;
db dummyd_15781;
db dummyd_15782;
db dummyd_15783;
db dummyd_15784;
db dummyd_15785;
db dummyd_15786;
db dummyd_15787;
db dummyd_15788;
db dummyd_15789;
db dummyd_1578a;
db dummyd_1578b;
db dummyd_1578c;
db dummyd_1578d;
db dummyd_1578e;
db dummyd_1578f;
db byte_23d70; // 124c:32d0
db dummyd_15791[32]; // 124c:32d1
db dummyd_157b1[32]; // 124c:32f1
db dummyd_157d1;
db dummyd_157d2;
db dummyd_157d3;
db dummyd_157d4;
db dummyd_157d5;
db dummyd_157d6;
db dummyd_157d7;
db byte_23db8; // 124c:3318
db dummyd_157d9[32]; // 124c:3319
db dummyd_157f9;
db dummyd_157fa;
db dummyd_157fb;
db dummyd_157fc;
db dummyd_157fd;
db dummyd_157fe;
db dummyd_157ff;
db dummyd_15800;
db dummyd_15801;
db byte_23de2; // 124c:3342
db dummyd_15803[32]; // 124c:3343
db dummyd_15823[32]; // 124c:3363
db dummyd_15843[32]; // 124c:3383
db dummyd_15863[32]; // 124c:33a3
db dummyd_15883;
db dummyd_15884;
db dummyd_15885;
db dummyd_15886;
db dummyd_15887;
db dummyd_15888;
db dummyd_15889;
db dummyd_1588a;
db dummyd_1588b;
db dummyd_1588c;
db byte_23e6d; // 124c:33cd
db dummyd_1588e[32]; // 124c:33ce
db dummyd_158ae[32]; // 124c:33ee
db dummyd_158ce[32]; // 124c:340e
db dummyd_158ee[32]; // 124c:342e
db dummyd_1590e[32]; // 124c:344e
db dummyd_1592e;
db dummyd_1592f;
db dummyd_15930;
db dummyd_15931;
db dummyd_15932;
db dummyd_15933;
db dummyd_15934;
db dummyd_15935;
db dummyd_15936;
db dummyd_15937;
db dummyd_15938;
db dummyd_15939;
db dummyd_1593a;
db dummyd_1593b;
db dummyd_1593c;
db dummyd_1593d;
db dummyd_1593e;
db dummyd_1593f;
db dummyd_15940;
db dummyd_15941;
db dummyd_15942;
db dummyd_15943;
db dummyd_15944;
db byte_23f25; // 124c:3485
db dummyd_15946;
db dummyd_15947;
db dummyd_15948;
db dummyd_15949;
db dummyd_1594a;
db dummyd_1594b;
db dummyd_1594c;
db dummyd_1594d;
db dummyd_1594e;
db dummyd_1594f;
db dummyd_15950;
db dummyd_15951;
db dummyd_15952;
db dummyd_15953;
db dummyd_15954;
db byte_23f35; // 124c:3495
db dummyd_15956[32]; // 124c:3496
db dummyd_15976[32]; // 124c:34b6
db dummyd_15996[32]; // 124c:34d6
db dummyd_159b6[32]; // 124c:34f6
db dummyd_159d6[32]; // 124c:3516
db dummyd_159f6[32]; // 124c:3536
db dummyd_15a16[32]; // 124c:3556
db dummyd_15a36[32]; // 124c:3576
db dummyd_15a56[32]; // 124c:3596
db dummyd_15a76;
db dummyd_15a77;
db dummyd_15a78;
db dummyd_15a79;
db dummyd_15a7a;
db dummyd_15a7b;
db dummyd_15a7c;
db dummyd_15a7d;
db dummyd_15a7e;
db dummyd_15a7f;
db byte_24060; // 124c:35c0
db dummyd_15a81;
db dummyd_15a82;
db dummyd_15a83;
db dummyd_15a84;
db dummyd_15a85;
db dummyd_15a86;
db dummyd_15a87;
db dummyd_15a88;
db dummyd_15a89;
db dummyd_15a8a;
db dummyd_15a8b;
db dummyd_15a8c;
db dummyd_15a8d;
db dummyd_15a8e;
db dummyd_15a8f;
db dummyd_15a90;
db dummyd_15a91;
db dummyd_15a92;
db dummyd_15a93;
db dummyd_15a94;
db dummyd_15a95;
db dummyd_15a96;
db dummyd_15a97;
db dummyd_15a98;
db dummyd_15a99;
db dummyd_15a9a;
db dummyd_15a9b;
db dummyd_15a9c;
db dummyd_15a9d;
db dummyd_15a9e;
db byte_2407f; // 124c:35df
db dummyd_15aa0[32]; // 124c:35e0
db dummyd_15ac0;
db dummyd_15ac1;
db dummyd_15ac2;
db dummyd_15ac3;
db dummyd_15ac4;
db dummyd_15ac5;
db dummyd_15ac6;
db dummyd_15ac7;
db dummyd_15ac8;
db byte_240a9; // 124c:3609
db dummyd_15aca[32]; // 124c:360a
db dummyd_15aea[32]; // 124c:362a
db dummyd_15b0a[32]; // 124c:364a
db dummyd_15b2a;
db dummyd_15b2b;
db dummyd_15b2c;
db dummyd_15b2d;
db byte_2410e; // 124c:366e
db dummyd_15b2f[32]; // 124c:366f
db dummyd_15b4f;
db dummyd_15b50;
db dummyd_15b51;
db dummyd_15b52;
db dummyd_15b53;
db dummyd_15b54;
db dummyd_15b55;
db dummyd_15b56;
db dummyd_15b57;
db dummyd_15b58;
db dummyd_15b59;
db dummyd_15b5a;
db dummyd_15b5b;
db dummyd_15b5c;
db byte_2413d; // 124c:369d
db dummyd_15b5e;
db dummyd_15b5f;
db dummyd_15b60;
db dummyd_15b61;
db dummyd_15b62;
db dummyd_15b63;
db dummyd_15b64;
db dummyd_15b65;
db dummyd_15b66;
db dummyd_15b67;
db dummyd_15b68;
db dummyd_15b69;
db dummyd_15b6a;
db dummyd_15b6b;
db dummyd_15b6c;
db dummyd_15b6d;
db dummyd_15b6e;
db dummyd_15b6f;
db dummyd_15b70;
db dummyd_15b71;
db dummyd_15b72;
db dummyd_15b73;
db dummyd_15b74;
db dummyd_15b75;
db dummyd_15b76;
db dummyd_15b77;
db dummyd_15b78;
db dummyd_15b79;
db dummyd_15b7a;
db dummyd_15b7b;
db byte_2415c; // 124c:36bc
db dummyd_15b7d[32]; // 124c:36bd
db dummyd_15b9d[32]; // 124c:36dd
db dummyd_15bbd[32]; // 124c:36fd
db dummyd_15bdd[32]; // 124c:371d
db dummyd_15bfd[32]; // 124c:373d
db dummyd_15c1d[32]; // 124c:375d
db dummyd_15c3d;
db dummyd_15c3e;
db dummyd_15c3f;
db dummyd_15c40;
db dummyd_15c41;
db dummyd_15c42;
db dummyd_15c43;
db byte_24224; // 124c:3784
db dummyd_15c45[32]; // 124c:3785
db dummyd_15c65[32]; // 124c:37a5
db dummyd_15c85;
db dummyd_15c86;
db dummyd_15c87;
db dummyd_15c88;
db dummyd_15c89;
db dummyd_15c8a;
db dummyd_15c8b;
db dummyd_15c8c;
db dummyd_15c8d;
db dummyd_15c8e;
db dummyd_15c8f;
db dummyd_15c90;
db dummyd_15c91;
db dummyd_15c92;
db dummyd_15c93;
db dummyd_15c94;
db byte_24275; // 124c:37d5
db dummyd_15c96[32]; // 124c:37d6
db dummyd_15cb6;
db dummyd_15cb7;
db dummyd_15cb8;
db dummyd_15cb9;
db dummyd_15cba;
db dummyd_15cbb;
db dummyd_15cbc;
db dummyd_15cbd;
db dummyd_15cbe;
db dummyd_15cbf;
db dummyd_15cc0;
db dummyd_15cc1;
db dummyd_15cc2;
db dummyd_15cc3;
db dummyd_15cc4;
db byte_242a5; // 124c:3805
db dummyd_15cc6[32]; // 124c:3806
db dummyd_15ce6[32]; // 124c:3826
db dummyd_15d06[32]; // 124c:3846
db dummyd_15d26[32]; // 124c:3866
db dummyd_15d46[32]; // 124c:3886
db dummyd_15d66[32]; // 124c:38a6
db dummyd_15d86[32]; // 124c:38c6
db dummyd_15da6;
db dummyd_15da7;
db dummyd_15da8; // 124c:38e8
db dummyd_15da9; // 124c:38e9
db unk_2438a; // 124c:38ea
db dummyd_15dab[32]; // 124c:38eb
db dummyd_15dcb[32]; // 124c:390b
db dummyd_15deb[32]; // 124c:392b
db dummyd_15e0b;
db dummyd_15e0c; // 124c:394c
db dummyd_15e0d; // 124c:394d
db dummyd_15e0e;
db dummyd_15e0f;
db dummyd_15e10; // 124c:3950
db dummyd_15e11;
db dummyd_15e12;
db dummyd_15e13;
db dummyd_15e14; // 124c:3954
db dummyd_15e15; // 124c:3955
db dummyd_15e16;
db dummyd_15e17;
db dummyd_15e18; // 124c:3958
db dummyd_15e19; // 124c:3959
db dummyd_15e1a;
db dummyd_15e1b;
db dummyd_15e1c; // 124c:395c
db dummyd_15e1d; // 124c:395d
db dummyd_15e1e;
db dummyd_15e1f;
db dummyd_15e20; // 124c:3960
db dummyd_15e21;
db dummyd_15e22;
db dummyd_15e23;
db dummyd_15e24; // 124c:3964
db dummyd_15e25; // 124c:3965
db dummyd_15e26;
db dummyd_15e27; // 124c:3967
db dummyd_15e28; // 124c:3968
db dummyd_15e29;
db unk_2440a; // 124c:396a
db dummyd_15e2b[32]; // 124c:396b
db dummyd_15e4b[32]; // 124c:398b
db dummyd_15e6b[32]; // 124c:39ab
db dummyd_15e8b[32]; // 124c:39cb
db dummyd_15eab[32]; // 124c:39eb
db dummyd_15ecb[32]; // 124c:3a0b
db dummyd_15eeb[32]; // 124c:3a2b
db dummyd_15f0b[32]; // 124c:3a4b
db dummyd_15f2b[32]; // 124c:3a6b
db dummyd_15f4b[32]; // 124c:3a8b
db dummyd_15f6b[32]; // 124c:3aab
db dummyd_15f8b;
db dummyd_15f8c;
db dummyd_15f8d;
db dummyd_15f8e;
db dummyd_15f8f;
db dummyd_15f90;
db dummyd_15f91;
db dummyd_15f92;
db dummyd_15f93;
db dummyd_15f94;
db dummyd_15f95;
db dummyd_15f96;
db dummyd_15f97;
db dummyd_15f98;
db dummyd_15f99;
db dummyd_15f9a;
db dummyd_15f9b;
db dummyd_15f9c;
db byte_2457d; // 124c:3add
db dummyd_15f9e[32]; // 124c:3ade
db dummyd_15fbe[32]; // 124c:3afe
db dummyd_15fde[32]; // 124c:3b1e
db dummyd_15ffe[32]; // 124c:3b3e
db dummyd_1601e[32]; // 124c:3b5e
db dummyd_1603e;
db dummyd_1603f;
db dummyd_16040;
db dummyd_16041;
db dummyd_16042;
db dummyd_16043;
db dummyd_16044;
db dummyd_16045;
db dummyd_16046;
db dummyd_16047;
db byte_24628; // 124c:3b88
db dummyd_16049[32]; // 124c:3b89
db dummyd_16069[32]; // 124c:3ba9
db dummyd_16089[32]; // 124c:3bc9
db dummyd_160a9[32]; // 124c:3be9
db dummyd_160c9[32]; // 124c:3c09
db dummyd_160e9[32]; // 124c:3c29
db dummyd_16109[32]; // 124c:3c49
db dummyd_16129[32]; // 124c:3c69
db dummyd_16149[32]; // 124c:3c89
db dummyd_16169[32]; // 124c:3ca9
db dummyd_16189[32]; // 124c:3cc9
db dummyd_161a9[32]; // 124c:3ce9
db dummyd_161c9[32]; // 124c:3d09
db dummyd_161e9[32]; // 124c:3d29
db dummyd_16209[32]; // 124c:3d49
db dummyd_16229[32]; // 124c:3d69
db dummyd_16249[32]; // 124c:3d89
db dummyd_16269[32]; // 124c:3da9
db dummyd_16289[32]; // 124c:3dc9
db dummyd_162a9[32]; // 124c:3de9
db dummyd_162c9[32]; // 124c:3e09
db dummyd_162e9[32]; // 124c:3e29
db dummyd_16309[32]; // 124c:3e49
db dummyd_16329[32]; // 124c:3e69
db dummyd_16349[32]; // 124c:3e89
db dummyd_16369[32]; // 124c:3ea9
db dummyd_16389[32]; // 124c:3ec9
db dummyd_163a9[32]; // 124c:3ee9
db dummyd_163c9[32]; // 124c:3f09
db dummyd_163e9[32]; // 124c:3f29
db dummyd_16409;
db dummyd_1640a;
db dummyd_1640b;
db dummyd_1640c;
db dummyd_1640d;
db dummyd_1640e;
db dummyd_1640f;
db dummyd_16410;
db dummyd_16411;
db dummyd_16412;
db dummyd_16413;
db dummyd_16414;
db dummyd_16415;
db dummyd_16416;
db dummyd_16417;
db dummyd_16418;
db dummyd_16419;
db dummyd_1641a;
db dummyd_1641b;
db dummyd_1641c;
db dummyd_1641d;
db dummyd_1641e;
db dummyd_1641f;
db byte_24a00; // 124c:3f60
db dummyd_16421[32]; // 124c:3f61
db dummyd_16441[32]; // 124c:3f81
db dummyd_16461[32]; // 124c:3fa1
db dummyd_16481[32]; // 124c:3fc1
db dummyd_164a1[32]; // 124c:3fe1
db dummyd_164c1[32]; // 124c:4001
db dummyd_164e1[32]; // 124c:4021
db dummyd_16501[32]; // 124c:4041
db dummyd_16521[32]; // 124c:4061
db dummyd_16541[32]; // 124c:4081
db dummyd_16561[32]; // 124c:40a1
db dummyd_16581[32]; // 124c:40c1
db dummyd_165a1[32]; // 124c:40e1
db dummyd_165c1[32]; // 124c:4101
db dummyd_165e1[32]; // 124c:4121
db dummyd_16601[32]; // 124c:4141
db dummyd_16621[32]; // 124c:4161
db dummyd_16641[32]; // 124c:4181
db dummyd_16661[32]; // 124c:41a1
db dummyd_16681[32]; // 124c:41c1
db dummyd_166a1[32]; // 124c:41e1
db dummyd_166c1[32]; // 124c:4201
db dummyd_166e1[32]; // 124c:4221
db dummyd_16701[32]; // 124c:4241
db dummyd_16721[32]; // 124c:4261
db dummyd_16741[32]; // 124c:4281
db dummyd_16761[32]; // 124c:42a1
db dummyd_16781[32]; // 124c:42c1
db dummyd_167a1[32]; // 124c:42e1
db dummyd_167c1[32]; // 124c:4301
db dummyd_167e1[32]; // 124c:4321
db dummyd_16801[32]; // 124c:4341
db dummyd_16821[32]; // 124c:4361
db dummyd_16841[32]; // 124c:4381
db dummyd_16861[32]; // 124c:43a1
db dummyd_16881[32]; // 124c:43c1
db dummyd_168a1[32]; // 124c:43e1
db dummyd_168c1[32]; // 124c:4401
db dummyd_168e1[32]; // 124c:4421
db dummyd_16901[32]; // 124c:4441
db dummyd_16921[32]; // 124c:4461
db dummyd_16941[32]; // 124c:4481
db dummyd_16961[32]; // 124c:44a1
db dummyd_16981[32]; // 124c:44c1
db dummyd_169a1[32]; // 124c:44e1
db dummyd_169c1[32]; // 124c:4501
db dummyd_169e1[32]; // 124c:4521
db dummyd_16a01[32]; // 124c:4541
db dummyd_16a21[32]; // 124c:4561
db dummyd_16a41[32]; // 124c:4581
db dummyd_16a61[32]; // 124c:45a1
db dummyd_16a81[32]; // 124c:45c1
db dummyd_16aa1[32]; // 124c:45e1
db dummyd_16ac1[32]; // 124c:4601
db dummyd_16ae1; // 124c:4621
db dummyd_16ae2; // 124c:4622
db dummyd_16ae3; // 124c:4623
db dummyd_16ae4;
db dummyd_16ae5;
db dummyd_16ae6; // 124c:4626
db dummyd_16ae7;
db dummyd_16ae8; // 124c:4628
db dummyd_16ae9;
db dummyd_16aea; // 124c:462a
db dummyd_16aeb;
db dummyd_16aec; // 124c:462c
db dummyd_16aed;
db dummyd_16aee; // 124c:462e
db dummyd_16aef;
db dummyd_16af0; // 124c:4630
db dummyd_16af1;
db dummyd_16af2; // 124c:4632
db dummyd_16af3;
db dummyd_16af4; // 124c:4634
db dummyd_16af5; // 124c:4635
db dummyd_16af6; // 124c:4636
db unk_250d7; // 124c:4637
db dummyd_16af8[32]; // 124c:4638
db dummyd_16b18; // 124c:4658
db dummyd_16b19; // 124c:4659
db dummyd_16b1a; // 124c:465a
db dummyd_16b1b; // 124c:465b
db dummyd_16b1c; // 124c:465c
db dummyd_16b1d; // 124c:465d
db dummyd_16b1e; // 124c:465e
db dummyd_16b1f; // 124c:465f
db dummyd_16b20; // 124c:4660
db dummyd_16b21; // 124c:4661
db dummyd_16b22; // 124c:4662
db dummyd_16b23; // 124c:4663
db dummyd_16b24; // 124c:4664
db dummyd_16b25; // 124c:4665
db dummyd_16b26; // 124c:4666
db dummyd_16b27; // 124c:4667
db unk_25108; // 124c:4668
db dummyd_16b29; // 124c:4669
db dummyd_16b2a; // 124c:466a
db dummyd_16b2b; // 124c:466b
db dummyd_16b2c; // 124c:466c
db dummyd_16b2d; // 124c:466d
db dummyd_16b2e; // 124c:466e
db dummyd_16b2f; // 124c:466f
db dummyd_16b30; // 124c:4670
db dummyd_16b31; // 124c:4671
db dummyd_16b32; // 124c:4672
db dummyd_16b33; // 124c:4673
db unk_25114; // 124c:4674
db dummyd_16b35[32]; // 124c:4675
db dummyd_16b55[32]; // 124c:4695
db dummyd_16b75[32]; // 124c:46b5
db dummyd_16b95[32]; // 124c:46d5
db dummyd_16bb5[32]; // 124c:46f5
db dummyd_16bd5[32]; // 124c:4715
db dummyd_16bf5;
db dummyd_16bf6; // 124c:4736
db dummyd_16bf7; // 124c:4737
db unk_251d8; // 124c:4738
db dummyd_16bf9; // 124c:4739
db dummyd_16bfa; // 124c:473a
db dummyd_16bfb; // 124c:473b
db dummyd_16bfc; // 124c:473c
db dummyd_16bfd; // 124c:473d
db dummyd_16bfe; // 124c:473e
db dummyd_16bff; // 124c:473f
db dummyd_16c00; // 124c:4740
db dummyd_16c01; // 124c:4741
db unk_251e2; // 124c:4742
db dummyd_16c03[32]; // 124c:4743
db dummyd_16c23[32]; // 124c:4763
db dummyd_16c43[32]; // 124c:4783
db dummyd_16c63[32]; // 124c:47a3
db dummyd_16c83[32]; // 124c:47c3
db dummyd_16ca3[32]; // 124c:47e3
db dummyd_16cc3[32]; // 124c:4803
db dummyd_16ce3[32]; // 124c:4823
db dummyd_16d03[32]; // 124c:4843
db dummyd_16d23;
db dummyd_16d24; // 124c:4864
db dummyd_16d25;
db dummyd_16d26; // 124c:4866
db dummyd_16d27; // 124c:4867
db dummyd_16d28; // 124c:4868
db dummyd_16d29; // 124c:4869
db dummyd_16d2a; // 124c:486a
db dummyd_16d2b; // 124c:486b
db dummyd_16d2c; // 124c:486c
db dummyd_16d2d; // 124c:486d
db unk_2530e; // 124c:486e
db dummyd_16d2f[32]; // 124c:486f
db dummyd_16d4f[32]; // 124c:488f
db dummyd_16d6f[32]; // 124c:48af
db dummyd_16d8f[32]; // 124c:48cf
db dummyd_16daf[32]; // 124c:48ef
db dummyd_16dcf[32]; // 124c:490f
db dummyd_16def[32]; // 124c:492f
db dummyd_16e0f[32]; // 124c:494f
db dummyd_16e2f[32]; // 124c:496f
db dummyd_16e4f[32]; // 124c:498f
db dummyd_16e6f[32]; // 124c:49af
db dummyd_16e8f[32]; // 124c:49cf
db dummyd_16eaf[32]; // 124c:49ef
db dummyd_16ecf[32]; // 124c:4a0f
db dummyd_16eef[32]; // 124c:4a2f
db dummyd_16f0f[32]; // 124c:4a4f
db dummyd_16f2f[32]; // 124c:4a6f
db dummyd_16f4f[32]; // 124c:4a8f
db dummyd_16f6f[32]; // 124c:4aaf
db dummyd_16f8f[32]; // 124c:4acf
db dummyd_16faf[32]; // 124c:4aef
db dummyd_16fcf[32]; // 124c:4b0f
db dummyd_16fef[32]; // 124c:4b2f
db dummyd_1700f[32]; // 124c:4b4f
db dummyd_1702f[32]; // 124c:4b6f
db dummyd_1704f[32]; // 124c:4b8f
db dummyd_1706f[32]; // 124c:4baf
db dummyd_1708f[32]; // 124c:4bcf
db dummyd_170af[32]; // 124c:4bef
db dummyd_170cf[32]; // 124c:4c0f
db dummyd_170ef[32]; // 124c:4c2f
db dummyd_1710f;
db dummyd_17110;
db dummyd_17111;
db dummyd_17112;
db dummyd_17113;
db dummyd_17114;
db dummyd_17115;
db dummyd_17116;
db dummyd_17117;
db dummyd_17118;
db dummyd_17119;
db dummyd_1711a;
db dummyd_1711b;
db dummyd_1711c;
db dummyd_1711d;
db dummyd_1711e;
db dummyd_1711f;
db dummyd_17120;
db dummyd_17121;
db dummyd_17122;
db dummyd_17123;
db dummyd_17124;
db dummyd_17125;
db dummyd_17126;
db dummyd_17127;
db dummyd_17128;
db dummyd_17129;
db dummyd_1712a;
db byte_2570b; // 124c:4c6b
db dummyd_1712c[32]; // 124c:4c6c
db dummyd_1714c[32]; // 124c:4c8c
db dummyd_1716c[32]; // 124c:4cac
db dummyd_1718c[32]; // 124c:4ccc
db dummyd_171ac[32]; // 124c:4cec
db dummyd_171cc[32]; // 124c:4d0c
db dummyd_171ec[32]; // 124c:4d2c
db dummyd_1720c[32]; // 124c:4d4c
db dummyd_1722c[32]; // 124c:4d6c
db dummyd_1724c[32]; // 124c:4d8c
db dummyd_1726c[32]; // 124c:4dac
db dummyd_1728c[32]; // 124c:4dcc
db dummyd_172ac[32]; // 124c:4dec
db dummyd_172cc[32]; // 124c:4e0c
db dummyd_172ec[32]; // 124c:4e2c
db dummyd_1730c[32]; // 124c:4e4c
db dummyd_1732c[32]; // 124c:4e6c
db dummyd_1734c[32]; // 124c:4e8c
db dummyd_1736c[32]; // 124c:4eac
db dummyd_1738c[32]; // 124c:4ecc
db dummyd_173ac[32]; // 124c:4eec
db dummyd_173cc[32]; // 124c:4f0c
db dummyd_173ec[32]; // 124c:4f2c
db dummyd_1740c[32]; // 124c:4f4c
db dummyd_1742c[32]; // 124c:4f6c
db dummyd_1744c[32]; // 124c:4f8c
db dummyd_1746c[32]; // 124c:4fac
db dummyd_1748c[32]; // 124c:4fcc
db dummyd_174ac[32]; // 124c:4fec
db dummyd_174cc[32]; // 124c:500c
db dummyd_174ec[32]; // 124c:502c
db dummyd_1750c[32]; // 124c:504c
db dummyd_1752c[32]; // 124c:506c
db dummyd_1754c[32]; // 124c:508c
db dummyd_1756c[32]; // 124c:50ac
db dummyd_1758c[32]; // 124c:50cc
db dummyd_175ac[32]; // 124c:50ec
db dummyd_175cc[32]; // 124c:510c
db dummyd_175ec[32]; // 124c:512c
db dummyd_1760c[32]; // 124c:514c
db dummyd_1762c[32]; // 124c:516c
db dummyd_1764c[32]; // 124c:518c
db dummyd_1766c[32]; // 124c:51ac
db dummyd_1768c;
db dummyd_1768d;
db dummyd_1768e; // 124c:51ce
db dummyd_1768f;
db dummyd_17690; // 124c:51d0
db dummyd_17691;
db dummyd_17692;
db dummyd_17693; // 124c:51d3
db dummyd_17694; // 124c:51d4
db dummyd_17695;
db dummyd_17696;
db dummyd_17697;
db dummyd_17698;
db dummyd_17699; // 124c:51d9
db dummyd_1769a; // 124c:51da
db dummyd_1769b; // 124c:51db
db dummyd_1769c;
db dummyd_1769d;
db dummyd_1769e; // 124c:51de
db dummyd_1769f;
db dummyd_176a0; // 176a:0000
db dummyd_176a1;
db dummyd_176a2; // 176a:0002
db dummyd_176a3; // 176a:0003
db dummyd_176a4;
db dummyd_176a5;
db dummyd_176a6; // 176a:0006
db dummyd_176a7; // 176a:0007
db dummyd_176a8; // 176a:0008
db dummyd_176a9;
db dummyd_176aa; // 176a:000a
db dummyd_176ab; // 176a:000b
db dummyd_176ac; // 176a:000c
db dummyd_176ad;
db dummyd_176ae; // 176a:000e
db dummyd_176af; // 176a:000f
db dummyd_176b0;
db dummyd_176b1;
db dummyd_176b2; // 176a:0012
db dummyd_176b3;
db dummyd_176b4; // 176a:0014
db dummyd_176b5;
db dummyd_176b6;
db dummyd_176b7;
db dummyd_176b8; // 176a:0018
db dummyd_176b9;
db dummyd_176ba;
db dummyd_176bb;
db unk_25c9c; // 176a:001c
db dummyd_176bd[32]; // 176a:001d
db dummyd_176dd;
db dummyd_176de;
db dummyd_176df;
db dummyd_176e0;
db dummyd_176e1; // 176a:0041
db dummyd_176e2; // 176a:0042
db dummyd_176e3; // 176a:0043
db dummyd_176e4;
db dummyd_176e5;
db dummyd_176e6; // 176a:0046
db dummyd_176e7;
db dummyd_176e8; // 176a:0048
db dummyd_176e9;
db dummyd_176ea;
db dummyd_176eb; // 176a:004b
db dummyd_176ec; // 176a:004c
db dummyd_176ed;
db dummyd_176ee;
db dummyd_176ef;
db dummyd_176f0;
db dummyd_176f1; // 176a:0051
db dummyd_176f2; // 176a:0052
db dummyd_176f3; // 176a:0053
db dummyd_176f4;
db dummyd_176f5;
db dummyd_176f6; // 176a:0056
db dummyd_176f7;
db dummyd_176f8; // 176a:0058
db dummyd_176f9;
db dummyd_176fa;
db dummyd_176fb; // 176a:005b
db unk_25cdc; // 176a:005c
db dummyd_176fd[32]; // 176a:005d
db dummyd_1771d[32]; // 176a:007d
db dummyd_1773d[32]; // 176a:009d
db dummyd_1775d[32]; // 176a:00bd
db dummyd_1777d[32]; // 176a:00dd
db dummyd_1779d; // 176a:00fd
db dummyd_1779e; // 176a:00fe
db dummyd_1779f; // 176a:00ff
db unk_25d80; // 176a:0100
db dummyd_177a1[32]; // 176a:0101
db dummyd_177c1[32]; // 176a:0121
db dummyd_177e1; // 176a:0141
db dummyd_177e2; // 176a:0142
db dummyd_177e3; // 176a:0143
db dummyd_177e4; // 176a:0144
db dummyd_177e5;
db dummyd_177e6; // 176a:0146
db dummyd_177e7; // 176a:0147
db dummyd_177e8; // 176a:0148
db dummyd_177e9; // 176a:0149
db dummyd_177ea; // 176a:014a
db unk_25dcb; // 176a:014b
db dummyd_177ec[32]; // 176a:014c
db dummyd_1780c[32]; // 176a:016c
db dummyd_1782c[32]; // 176a:018c
db dummyd_1784c[32]; // 176a:01ac
db dummyd_1786c[32]; // 176a:01cc
db dummyd_1788c[32]; // 176a:01ec
db dummyd_178ac[32]; // 176a:020c
db dummyd_178cc[32]; // 176a:022c
db dummyd_178ec[32]; // 176a:024c
db dummyd_1790c[32]; // 176a:026c
db dummyd_1792c[32]; // 176a:028c
db dummyd_1794c;
db dummyd_1794d;
db dummyd_1794e;
db unk_25f2f; // 176a:02af
db dummyd_17950[32]; // 176a:02b0
db dummyd_17970[32]; // 176a:02d0
db dummyd_17990[32]; // 176a:02f0
db dummyd_179b0[32]; // 176a:0310
db dummyd_179d0[32]; // 176a:0330
db dummyd_179f0[32]; // 176a:0350
db dummyd_17a10[32]; // 176a:0370
db dummyd_17a30[32]; // 176a:0390
db dummyd_17a50[32]; // 176a:03b0
db dummyd_17a70[32]; // 176a:03d0
db dummyd_17a90[32]; // 176a:03f0
db dummyd_17ab0[32]; // 176a:0410
db dummyd_17ad0[32]; // 176a:0430
db dummyd_17af0[32]; // 176a:0450
db dummyd_17b10[32]; // 176a:0470
db dummyd_17b30[32]; // 176a:0490
db dummyd_17b50[32]; // 176a:04b0
db dummyd_17b70; // 176a:04d0
db dummyd_17b71;
db dummyd_17b72;
db dummyd_17b73; // 176a:04d3
db unk_26154; // 176a:04d4
db dummyd_17b75[32]; // 176a:04d5
db dummyd_17b95[32]; // 176a:04f5
db dummyd_17bb5[32]; // 176a:0515
db dummyd_17bd5[32]; // 176a:0535
db dummyd_17bf5[32]; // 176a:0555
db dummyd_17c15[32]; // 176a:0575
db dummyd_17c35[32]; // 176a:0595
db dummyd_17c55[32]; // 176a:05b5
db dummyd_17c75[32]; // 176a:05d5
db dummyd_17c95[32]; // 176a:05f5
db dummyd_17cb5; // 176a:0615
db dummyd_17cb6; // 176a:0616
db dummyd_17cb7; // 176a:0617
db dummyd_17cb8; // 176a:0618
db dummyd_17cb9;
db dummyd_17cba; // 176a:061a
db dummyd_17cbb; // 176a:061b
db dummyd_17cbc; // 176a:061c
db dummyd_17cbd; // 176a:061d
db dummyd_17cbe; // 176a:061e
db dummyd_17cbf; // 176a:061f
db dummyd_17cc0; // 176a:0620
db dummyd_17cc1; // 176a:0621
db dummyd_17cc2;
db dummyd_17cc3; // 176a:0623
db dummyd_17cc4; // 176a:0624
db dummyd_17cc5;
db dummyd_17cc6; // 176a:0626
db dummyd_17cc7;
db dummyd_17cc8;
db unk_262a9; // 176a:0629
db dummyd_17cca[32]; // 176a:062a
db dummyd_17cea[32]; // 176a:064a
db dummyd_17d0a[32]; // 176a:066a
db dummyd_17d2a[32]; // 176a:068a
db dummyd_17d4a[32]; // 176a:06aa
db dummyd_17d6a[32]; // 176a:06ca
db dummyd_17d8a[32]; // 176a:06ea
db dummyd_17daa[32]; // 176a:070a
db dummyd_17dca[32]; // 176a:072a
db dummyd_17dea[32]; // 176a:074a
db dummyd_17e0a[32]; // 176a:076a
db dummyd_17e2a[32]; // 176a:078a
db dummyd_17e4a; // 176a:07aa
db dummyd_17e4b; // 176a:07ab
db dummyd_17e4c; // 176a:07ac
db dummyd_17e4d; // 176a:07ad
db dummyd_17e4e; // 176a:07ae
db dummyd_17e4f; // 176a:07af
db dummyd_17e50; // 176a:07b0
db dummyd_17e51;
db dummyd_17e52; // 176a:07b2
db dummyd_17e53; // 176a:07b3
db dummyd_17e54; // 176a:07b4
db dummyd_17e55; // 176a:07b5
db dummyd_17e56;
db dummyd_17e57; // 176a:07b7
db dummyd_17e58; // 176a:07b8
db dummyd_17e59; // 176a:07b9
db dummyd_17e5a; // 176a:07ba
db dummyd_17e5b; // 176a:07bb
db dummyd_17e5c; // 176a:07bc
db dummyd_17e5d; // 176a:07bd
db dummyd_17e5e; // 176a:07be
db dummyd_17e5f; // 176a:07bf
db dummyd_17e60;
db unk_26441; // 176a:07c1
db dummyd_17e62[32]; // 176a:07c2
db dummyd_17e82[32]; // 176a:07e2
db dummyd_17ea2[32]; // 176a:0802
db dummyd_17ec2[32]; // 176a:0822
db dummyd_17ee2[32]; // 176a:0842
db dummyd_17f02[32]; // 176a:0862
db dummyd_17f22[32]; // 176a:0882
db dummyd_17f42[32]; // 176a:08a2
db dummyd_17f62[32]; // 176a:08c2
db dummyd_17f82[32]; // 176a:08e2
db dummyd_17fa2; // 176a:0902
db dummyd_17fa3; // 176a:0903
db dummyd_17fa4; // 176a:0904
db dummyd_17fa5; // 176a:0905
db dummyd_17fa6; // 176a:0906
db dummyd_17fa7;
db dummyd_17fa8; // 176a:0908
db dummyd_17fa9; // 176a:0909
db dummyd_17faa;
db dummyd_17fab; // 176a:090b
db dummyd_17fac; // 176a:090c
db dummyd_17fad;
db dummyd_17fae; // 176a:090e
db dummyd_17faf;
db dummyd_17fb0; // 176a:0910
db dummyd_17fb1; // 176a:0911
db dummyd_17fb2; // 176a:0912
db dummyd_17fb3; // 176a:0913
db dummyd_17fb4; // 176a:0914
db dummyd_17fb5; // 176a:0915
db dummyd_17fb6; // 176a:0916
db dummyd_17fb7;
db dummyd_17fb8; // 176a:0918
db dummyd_17fb9; // 176a:0919
db dummyd_17fba; // 176a:091a
db dummyd_17fbb;
db dummyd_17fbc; // 176a:091c
db dummyd_17fbd; // 176a:091d
db dummyd_17fbe; // 176a:091e
db dummyd_17fbf; // 176a:091f
db dummyd_17fc0; // 176a:0920
db unk_265a1; // 176a:0921
db dummyd_17fc2[32]; // 176a:0922
db dummyd_17fe2[32]; // 176a:0942
db dummyd_18002[32]; // 176a:0962
db dummyd_18022[32]; // 176a:0982
db dummyd_18042[32]; // 176a:09a2
db dummyd_18062[32]; // 176a:09c2
db dummyd_18082[32]; // 176a:09e2
db dummyd_180a2[32]; // 176a:0a02
db dummyd_180c2[32]; // 176a:0a22
db dummyd_180e2[32]; // 176a:0a42
db dummyd_18102[32]; // 176a:0a62
db dummyd_18122[32]; // 176a:0a82
db dummyd_18142[32]; // 176a:0aa2
db dummyd_18162[32]; // 176a:0ac2
db dummyd_18182[32]; // 176a:0ae2
db dummyd_181a2[32]; // 176a:0b02
db dummyd_181c2[32]; // 176a:0b22
db dummyd_181e2; // 176a:0b42
db dummyd_181e3;
db dummyd_181e4; // 176a:0b44
db dummyd_181e5;
db dummyd_181e6;
db dummyd_181e7; // 176a:0b47
db dummyd_181e8; // 176a:0b48
db dummyd_181e9; // 176a:0b49
db dummyd_181ea; // 176a:0b4a
db dummyd_181eb; // 176a:0b4b
db dummyd_181ec; // 176a:0b4c
db dummyd_181ed;
db dummyd_181ee; // 176a:0b4e
db dummyd_181ef; // 176a:0b4f
db dummyd_181f0;
db dummyd_181f1; // 176a:0b51
db dummyd_181f2; // 176a:0b52
db dummyd_181f3; // 176a:0b53
db dummyd_181f4; // 176a:0b54
db dummyd_181f5; // 176a:0b55
db dummyd_181f6; // 176a:0b56
db dummyd_181f7; // 176a:0b57
db dummyd_181f8; // 176a:0b58
db dummyd_181f9; // 176a:0b59
db dummyd_181fa; // 176a:0b5a
db dummyd_181fb; // 176a:0b5b
db dummyd_181fc; // 176a:0b5c
db dummyd_181fd; // 176a:0b5d
db dummyd_181fe; // 176a:0b5e
db unk_267df; // 176a:0b5f
db dummyd_18200[32]; // 176a:0b60
db dummyd_18220[32]; // 176a:0b80
db dummyd_18240[32]; // 176a:0ba0
db dummyd_18260[32]; // 176a:0bc0
db dummyd_18280[32]; // 176a:0be0
db dummyd_182a0[32]; // 176a:0c00
db dummyd_182c0[32]; // 176a:0c20
db dummyd_182e0[32]; // 176a:0c40
db dummyd_18300[32]; // 176a:0c60
db dummyd_18320[32]; // 176a:0c80
db dummyd_18340[32]; // 176a:0ca0
db dummyd_18360[32]; // 176a:0cc0
db dummyd_18380[32]; // 176a:0ce0
db dummyd_183a0[32]; // 176a:0d00
db dummyd_183c0[32]; // 176a:0d20
db dummyd_183e0[32]; // 176a:0d40
db dummyd_18400[32]; // 176a:0d60
db dummyd_18420[32]; // 176a:0d80
db dummyd_18440[32]; // 176a:0da0
db dummyd_18460[32]; // 176a:0dc0
db dummyd_18480[32]; // 176a:0de0
db dummyd_184a0[32]; // 176a:0e00
db dummyd_184c0[32]; // 176a:0e20
db dummyd_184e0[32]; // 176a:0e40
db dummyd_18500[32]; // 176a:0e60
db dummyd_18520; // 176a:0e80
db dummyd_18521; // 176a:0e81
db unk_26b02; // 176a:0e82
db dummyd_18523[32]; // 176a:0e83
db dummyd_18543;
db dummyd_18544;
db dummyd_18545; // 176a:0ea5
db dummyd_18546; // 176a:0ea6
db dummyd_18547; // 176a:0ea7
db dummyd_18548; // 176a:0ea8
db dummyd_18549; // 176a:0ea9
db dummyd_1854a; // 176a:0eaa
db dummyd_1854b;
db dummyd_1854c; // 176a:0eac
db dummyd_1854d; // 176a:0ead
db dummyd_1854e; // 176a:0eae
db dummyd_1854f; // 176a:0eaf
db dummyd_18550; // 176a:0eb0
db dummyd_18551; // 176a:0eb1
db dummyd_18552; // 176a:0eb2
db dummyd_18553; // 176a:0eb3
db dummyd_18554;
db dummyd_18555; // 176a:0eb5
db dummyd_18556; // 176a:0eb6
db dummyd_18557;
db dummyd_18558; // 176a:0eb8
db dummyd_18559;
db dummyd_1855a;
db dummyd_1855b; // 176a:0ebb
db dummyd_1855c; // 176a:0ebc
db dummyd_1855d; // 176a:0ebd
db dummyd_1855e; // 176a:0ebe
db dummyd_1855f; // 176a:0ebf
db dummyd_18560[32]; // 1856:0000
db dummyd_18580[32]; // 1856:0020
db dummyd_185a0[32]; // 1856:0040
db dummyd_185c0[32]; // 1856:0060
db dummyd_185e0[32]; // 1856:0080
db dummyd_18600;
db dummyd_18601;
db dummyd_18602;
db dummyd_18603; // 1856:00a3
db dummyd_18604;
db dummyd_18605;
db dummyd_18606;
db dummyd_18607;
db dummyd_18608; // 1856:00a8
db dummyd_18609;
db dummyd_1860a;
db dummyd_1860b;
db dummyd_1860c; // 1856:00ac
db dummyd_1860d;
db dummyd_1860e;
db dummyd_1860f; // 1856:00af
db dummyd_18610;
db dummyd_18611;
db dummyd_18612; // 1856:00b2
db dummyd_18613; // 1856:00b3
db dummyd_18614; // 1856:00b4
db dummyd_18615; // 1856:00b5
db dummyd_18616; // 1856:00b6
db dummyd_18617; // 1856:00b7
db dummyd_18618;
db dummyd_18619; // 1856:00b9
db dummyd_1861a; // 1856:00ba
db dummyd_1861b;
db unk_26bfc; // 1856:00bc
db dummyd_1861d[32]; // 1856:00bd
db dummyd_1863d[32]; // 1856:00dd
db dummyd_1865d[32]; // 1856:00fd
db dummyd_1867d; // 1856:011d
db dummyd_1867e; // 1856:011e
db dummyd_1867f; // 1856:011f
db dummyd_18680; // 1856:0120
db dummyd_18681; // 1856:0121
db dummyd_18682; // 1856:0122
db dummyd_18683; // 1856:0123
db dummyd_18684; // 1856:0124
db dummyd_18685; // 1856:0125
db dummyd_18686; // 1856:0126
db dummyd_18687; // 1856:0127
db dummyd_18688; // 1856:0128
db dummyd_18689;
db dummyd_1868a; // 1856:012a
db dummyd_1868b; // 1856:012b
db dummyd_1868c; // 1856:012c
db dummyd_1868d; // 1856:012d
db dummyd_1868e; // 1856:012e
db dummyd_1868f; // 1856:012f
db dummyd_18690;
db dummyd_18691;
db unk_26c72; // 1856:0132
db dummyd_18693[32]; // 1856:0133
db dummyd_186b3[32]; // 1856:0153
db dummyd_186d3[32]; // 1856:0173
db dummyd_186f3[32]; // 1856:0193
db dummyd_18713[32]; // 1856:01b3
db dummyd_18733[32]; // 1856:01d3
db dummyd_18753;
db dummyd_18754; // 1856:01f4
db dummyd_18755; // 1856:01f5
db dummyd_18756; // 1856:01f6
db dummyd_18757; // 1856:01f7
db dummyd_18758; // 1856:01f8
db dummyd_18759;
db unk_26d3a; // 1856:01fa
db dummyd_1875b[32]; // 1856:01fb
db dummyd_1877b[32]; // 1856:021b
db dummyd_1879b[32]; // 1856:023b
db dummyd_187bb[32]; // 1856:025b
db dummyd_187db[32]; // 1856:027b
db dummyd_187fb[32]; // 1856:029b
db dummyd_1881b[32]; // 1856:02bb
db dummyd_1883b[32]; // 1856:02db
db dummyd_1885b[32]; // 1856:02fb
db dummyd_1887b[32]; // 1856:031b
db dummyd_1889b[32]; // 1856:033b
db dummyd_188bb[32]; // 1856:035b
db dummyd_188db[32]; // 1856:037b
db dummyd_188fb[32]; // 1856:039b
db dummyd_1891b[32]; // 1856:03bb
db dummyd_1893b[32]; // 1856:03db
db dummyd_1895b[32]; // 1856:03fb
db dummyd_1897b[32]; // 1856:041b
db dummyd_1899b[32]; // 1856:043b
db dummyd_189bb[32]; // 1856:045b
db dummyd_189db[32]; // 1856:047b
db dummyd_189fb[32]; // 1856:049b
db dummyd_18a1b[32]; // 1856:04bb
db dummyd_18a3b[32]; // 1856:04db
db dummyd_18a5b[32]; // 1856:04fb
db dummyd_18a7b[32]; // 1856:051b
db dummyd_18a9b[32]; // 1856:053b
db dummyd_18abb[32]; // 1856:055b
db dummyd_18adb[32]; // 1856:057b
db dummyd_18afb[32]; // 1856:059b
db dummyd_18b1b[32]; // 1856:05bb
db dummyd_18b3b[32]; // 1856:05db
db dummyd_18b5b[32]; // 1856:05fb
db dummyd_18b7b[32]; // 1856:061b
db dummyd_18b9b[32]; // 1856:063b
db dummyd_18bbb[32]; // 1856:065b
db dummyd_18bdb[32]; // 1856:067b
db dummyd_18bfb[32]; // 1856:069b
db dummyd_18c1b[32]; // 1856:06bb
db dummyd_18c3b[32]; // 1856:06db
db dummyd_18c5b[32]; // 1856:06fb
db dummyd_18c7b[32]; // 1856:071b
db dummyd_18c9b[32]; // 1856:073b
db dummyd_18cbb[32]; // 1856:075b
db dummyd_18cdb[32]; // 1856:077b
db dummyd_18cfb[32]; // 1856:079b
db dummyd_18d1b[32]; // 1856:07bb
db dummyd_18d3b[32]; // 1856:07db
db dummyd_18d5b[32]; // 1856:07fb
db dummyd_18d7b[32]; // 1856:081b
db dummyd_18d9b[32]; // 1856:083b
db dummyd_18dbb[32]; // 1856:085b
db dummyd_18ddb[32]; // 1856:087b
db dummyd_18dfb[32]; // 1856:089b
db dummyd_18e1b[32]; // 1856:08bb
db dummyd_18e3b[32]; // 1856:08db
db dummyd_18e5b[32]; // 1856:08fb
db dummyd_18e7b[32]; // 1856:091b
db dummyd_18e9b[32]; // 1856:093b
db dummyd_18ebb[32]; // 1856:095b
db dummyd_18edb[32]; // 1856:097b
db dummyd_18efb[32]; // 1856:099b
db dummyd_18f1b[32]; // 1856:09bb
db dummyd_18f3b[32]; // 1856:09db
db dummyd_18f5b[32]; // 1856:09fb
db dummyd_18f7b[32]; // 1856:0a1b
db dummyd_18f9b[32]; // 1856:0a3b
db dummyd_18fbb; // 1856:0a5b
db dummyd_18fbc; // 1856:0a5c
db dummyd_18fbd;
db dummyd_18fbe; // 1856:0a5e
db dummyd_18fbf; // 1856:0a5f
db dummyd_18fc0; // 1856:0a60
db dummyd_18fc1;
db dummyd_18fc2;
db dummyd_18fc3;
db dummyd_18fc4;
db dummyd_18fc5; // 1856:0a65
db dummyd_18fc6; // 1856:0a66
db dummyd_18fc7; // 1856:0a67
db dummyd_18fc8;
db dummyd_18fc9;
db dummyd_18fca; // 1856:0a6a
db dummyd_18fcb; // 1856:0a6b
db dummyd_18fcc; // 1856:0a6c
db dummyd_18fcd;
db dummyd_18fce; // 1856:0a6e
db unk_275af; // 1856:0a6f
db dummyd_18fd0[32]; // 1856:0a70
db dummyd_18ff0[32]; // 1856:0a90
db dummyd_19010[32]; // 1856:0ab0
db dummyd_19030[32]; // 1856:0ad0
db dummyd_19050[32]; // 1856:0af0
db dummyd_19070[32]; // 1856:0b10
db dummyd_19090[32]; // 1856:0b30
db dummyd_190b0[32]; // 1856:0b50
db dummyd_190d0[32]; // 1856:0b70
db dummyd_190f0[32]; // 1856:0b90
db dummyd_19110[32]; // 1856:0bb0
db dummyd_19130[32]; // 1856:0bd0
db dummyd_19150[32]; // 1856:0bf0
db dummyd_19170[32]; // 1856:0c10
db dummyd_19190[32]; // 1856:0c30
db dummyd_191b0[32]; // 1856:0c50
db dummyd_191d0[32]; // 1856:0c70
db dummyd_191f0[32]; // 1856:0c90
db dummyd_19210[32]; // 1856:0cb0
db dummyd_19230[32]; // 1856:0cd0
db dummyd_19250[32]; // 1856:0cf0
db dummyd_19270[32]; // 1856:0d10
db dummyd_19290[32]; // 1856:0d30
db dummyd_192b0[32]; // 1856:0d50
db dummyd_192d0[32]; // 1856:0d70
db dummyd_192f0[32]; // 1856:0d90
db dummyd_19310[32]; // 1856:0db0
db dummyd_19330[32]; // 1856:0dd0
db dummyd_19350[32]; // 1856:0df0
db dummyd_19370[32]; // 1856:0e10
db dummyd_19390[32]; // 1856:0e30
db dummyd_193b0[32]; // 1856:0e50
db dummyd_193d0[32]; // 1856:0e70
db dummyd_193f0[32]; // 1856:0e90
db dummyd_19410[32]; // 1856:0eb0
db dummyd_19430[32]; // 1856:0ed0
db dummyd_19450[32]; // 1856:0ef0
db dummyd_19470[32]; // 1856:0f10
db dummyd_19490[32]; // 1856:0f30
db dummyd_194b0[32]; // 1856:0f50
db dummyd_194d0[32]; // 1856:0f70
db dummyd_194f0[32]; // 1856:0f90
db dummyd_19510[32]; // 1856:0fb0
db dummyd_19530[32]; // 1856:0fd0
db dummyd_19550[32]; // 1856:0ff0
db dummyd_19570[32]; // 1856:1010
db dummyd_19590[32]; // 1856:1030
db dummyd_195b0[32]; // 1856:1050
db dummyd_195d0[32]; // 1856:1070
db dummyd_195f0[32]; // 1856:1090
db dummyd_19610[32]; // 1856:10b0
db dummyd_19630[32]; // 1856:10d0
db dummyd_19650[32]; // 1856:10f0
db dummyd_19670[32]; // 1856:1110
db dummyd_19690[32]; // 1856:1130
db dummyd_196b0[32]; // 1856:1150
db dummyd_196d0[32]; // 1856:1170
db dummyd_196f0[32]; // 1856:1190
db dummyd_19710[32]; // 1856:11b0
db dummyd_19730[32]; // 1856:11d0
db dummyd_19750[32]; // 1856:11f0
db dummyd_19770[32]; // 1856:1210
db dummyd_19790[32]; // 1856:1230
db dummyd_197b0[32]; // 1856:1250
db dummyd_197d0[32]; // 1856:1270
db dummyd_197f0; // 1856:1290
db dummyd_197f1;
db dummyd_197f2; // 1856:1292
db dummyd_197f3; // 1856:1293
db dummyd_197f4; // 1856:1294
db dummyd_197f5;
db dummyd_197f6; // 1856:1296
db dummyd_197f7; // 1856:1297
db dummyd_197f8;
db dummyd_197f9;
db dummyd_197fa; // 1856:129a
db dummyd_197fb; // 1856:129b
db dummyd_197fc; // 1856:129c
dd dummyd_197fd; // 1856:129d
dw dummyd_19801; // 1856:12a1
db dummyd_19803[1];
dd dummyd_19804; // 1856:12a4
db dummyd_19808[32]; // 1856:12a8
db dummyd_19828[32]; // 1856:12c8
db dummyd_19848[32]; // 1856:12e8
db dummyd_19868[32]; // 1856:1308
db dummyd_19888[32]; // 1856:1328
db dummyd_198a8[32]; // 1856:1348
db dummyd_198c8[32]; // 1856:1368
db dummyd_198e8[32]; // 1856:1388
db dummyd_19908[32]; // 1856:13a8
db dummyd_19928[32]; // 1856:13c8
db dummyd_19948[32]; // 1856:13e8
db dummyd_19968[32]; // 1856:1408
db dummyd_19988[32]; // 1856:1428
db dummyd_199a8[32]; // 1856:1448
db dummyd_199c8[32]; // 1856:1468
db dummyd_199e8[32]; // 1856:1488
db dummyd_19a08[32]; // 1856:14a8
db dummyd_19a28[32]; // 1856:14c8
db dummyd_19a48[32]; // 1856:14e8
db dummyd_19a68[32]; // 1856:1508
db dummyd_19a88[32]; // 1856:1528
db dummyd_19aa8[32]; // 1856:1548
db dummyd_19ac8[32]; // 1856:1568
db dummyd_19ae8[32]; // 1856:1588
db dummyd_19b08[32]; // 1856:15a8
db dummyd_19b28[32]; // 1856:15c8
db dummyd_19b48[32]; // 1856:15e8
db dummyd_19b68[32]; // 1856:1608
db dummyd_19b88[32]; // 1856:1628
db dummyd_19ba8[32]; // 1856:1648
db dummyd_19bc8[32]; // 1856:1668
db dummyd_19be8[32]; // 1856:1688
db dummyd_19c08; // 1856:16a8
db dummyd_19c09; // 1856:16a9
db dummyd_19c0a; // 1856:16aa
db dummyd_19c0b; // 1856:16ab
db dummyd_19c0c; // 1856:16ac
db dummyd_19c0d; // 1856:16ad
db dummyd_19c0e;
db dummyd_19c0f;
db dummyd_19c10; // 1856:16b0
db dummyd_19c11; // 1856:16b1
db dummyd_19c12; // 1856:16b2
db dummyd_19c13; // 1856:16b3
db dummyd_19c14; // 1856:16b4
db dummyd_19c15; // 1856:16b5
db dummyd_19c16; // 1856:16b6
db dummyd_19c17;
db dummyd_19c18; // 1856:16b8
db dummyd_19c19; // 1856:16b9
db dummyd_19c1a;
db dummyd_19c1b;
db dummyd_19c1c; // 1856:16bc
db dummyd_19c1d;
db dummyd_19c1e;
db dummyd_19c1f;
db dummyd_19c20;
db dummyd_19c21;
db dummyd_19c22;
db dummyd_19c23;
db dummyd_19c24;
db dummyd_19c25;
db unk_28206; // 1856:16c6
db dummyd_19c27[32]; // 1856:16c7
db dummyd_19c47[32]; // 1856:16e7
db dummyd_19c67[32]; // 1856:1707
db dummyd_19c87[32]; // 1856:1727
db dummyd_19ca7[32]; // 1856:1747
db dummyd_19cc7[32]; // 1856:1767
db dummyd_19ce7[32]; // 1856:1787
db dummyd_19d07[32]; // 1856:17a7
db dummyd_19d27[32]; // 1856:17c7
db dummyd_19d47[32]; // 1856:17e7
db dummyd_19d67[32]; // 1856:1807
db dummyd_19d87[32]; // 1856:1827
db dummyd_19da7[32]; // 1856:1847
db dummyd_19dc7[32]; // 1856:1867
db dummyd_19de7[32]; // 1856:1887
db dummyd_19e07[32]; // 1856:18a7
db dummyd_19e27[32]; // 1856:18c7
db dummyd_19e47[32]; // 1856:18e7
db dummyd_19e67[32]; // 1856:1907
db dummyd_19e87[32]; // 1856:1927
db dummyd_19ea7[32]; // 1856:1947
db dummyd_19ec7[32]; // 1856:1967
db dummyd_19ee7[32]; // 1856:1987
db dummyd_19f07[32]; // 1856:19a7
db dummyd_19f27[32]; // 1856:19c7
db dummyd_19f47[32]; // 1856:19e7
db dummyd_19f67[32]; // 1856:1a07
db dummyd_19f87[32]; // 1856:1a27
db dummyd_19fa7[32]; // 1856:1a47
db dummyd_19fc7[32]; // 1856:1a67
db dummyd_19fe7[32]; // 1856:1a87
db dummyd_1a007[32]; // 1856:1aa7
db dummyd_1a027[32]; // 1856:1ac7
db dummyd_1a047[32]; // 1856:1ae7
db dummyd_1a067[32]; // 1856:1b07
db dummyd_1a087[32]; // 1856:1b27
db dummyd_1a0a7[32]; // 1856:1b47
db dummyd_1a0c7[32]; // 1856:1b67
db dummyd_1a0e7[32]; // 1856:1b87
db dummyd_1a107; // 1856:1ba7
db dummyd_1a108; // 1856:1ba8
db dummyd_1a109; // 1856:1ba9
db dummyd_1a10a; // 1856:1baa
db dummyd_1a10b; // 1856:1bab
db dummyd_1a10c; // 1856:1bac
db dummyd_1a10d; // 1856:1bad
db dummyd_1a10e; // 1856:1bae
db dummyd_1a10f; // 1856:1baf
db dummyd_1a110; // 1856:1bb0
db dummyd_1a111;
db unk_286f2; // 1856:1bb2
db dummyd_1a113[32]; // 1856:1bb3
db dummyd_1a133[32]; // 1856:1bd3
db dummyd_1a153;
db dummyd_1a154;
db dummyd_1a155; // 1856:1bf5
db dummyd_1a156; // 1856:1bf6
db dummyd_1a157;
db unk_28738; // 1856:1bf8
db dummyd_1a159[32]; // 1856:1bf9
db dummyd_1a179[32]; // 1856:1c19
db dummyd_1a199[32]; // 1856:1c39
db dummyd_1a1b9[32]; // 1856:1c59
db dummyd_1a1d9[32]; // 1856:1c79
db dummyd_1a1f9[32]; // 1856:1c99
db dummyd_1a219[32]; // 1856:1cb9
db dummyd_1a239[32]; // 1856:1cd9
db dummyd_1a259[32]; // 1856:1cf9
db dummyd_1a279; // 1856:1d19
db dummyd_1a27a; // 1856:1d1a
db dummyd_1a27b; // 1856:1d1b
db dummyd_1a27c; // 1856:1d1c
db dummyd_1a27d; // 1856:1d1d
db dummyd_1a27e; // 1856:1d1e
db dummyd_1a27f;
db dummyd_1a280; // 1856:1d20
db dummyd_1a281; // 1856:1d21
db dummyd_1a282; // 1856:1d22
db dummyd_1a283; // 1856:1d23
db dummyd_1a284; // 1856:1d24
db dummyd_1a285; // 1856:1d25
db dummyd_1a286; // 1856:1d26
db dummyd_1a287; // 1856:1d27
db unk_28868; // 1856:1d28
db dummyd_1a289; // 1856:1d29
db dummyd_1a28a; // 1856:1d2a
db dummyd_1a28b; // 1856:1d2b
db dummyd_1a28c; // 1856:1d2c
db dummyd_1a28d;
db dummyd_1a28e; // 1856:1d2e
db dummyd_1a28f; // 1856:1d2f
db dummyd_1a290; // 1856:1d30
db dummyd_1a291; // 1856:1d31
db dummyd_1a292; // 1856:1d32
db dummyd_1a293; // 1856:1d33
db dummyd_1a294; // 1856:1d34
db dummyd_1a295;
db dummyd_1a296; // 1856:1d36
db dummyd_1a297; // 1856:1d37
db dummyd_1a298; // 1856:1d38
db dummyd_1a299; // 1856:1d39
db dummyd_1a29a; // 1856:1d3a
db unk_2887b; // 1856:1d3b
db dummyd_1a29c[32]; // 1856:1d3c
db dummyd_1a2bc; // 1856:1d5c
db dummyd_1a2bd; // 1856:1d5d
db dummyd_1a2be; // 1856:1d5e
db dummyd_1a2bf; // 1856:1d5f
db dummyd_1a2c0; // 1856:1d60
db dummyd_1a2c1;
db dummyd_1a2c2; // 1856:1d62
db dummyd_1a2c3; // 1856:1d63
db dummyd_1a2c4; // 1856:1d64
db dummyd_1a2c5; // 1856:1d65
db dummyd_1a2c6; // 1856:1d66
db dummyd_1a2c7; // 1856:1d67
db dummyd_1a2c8; // 1856:1d68
db dummyd_1a2c9; // 1856:1d69
db dummyd_1a2ca;
db dummyd_1a2cb; // 1856:1d6b
db unk_288ac; // 1856:1d6c
db dummyd_1a2cd[32]; // 1856:1d6d
db dummyd_1a2ed[32]; // 1856:1d8d
db dummyd_1a30d[32]; // 1856:1dad
db dummyd_1a32d[32]; // 1856:1dcd
db dummyd_1a34d[32]; // 1856:1ded
db dummyd_1a36d[32]; // 1856:1e0d
db dummyd_1a38d[32]; // 1856:1e2d
db dummyd_1a3ad[32]; // 1856:1e4d
db dummyd_1a3cd[32]; // 1856:1e6d
db dummyd_1a3ed[32]; // 1856:1e8d
db dummyd_1a40d[32]; // 1856:1ead
db dummyd_1a42d[32]; // 1856:1ecd
db dummyd_1a44d[32]; // 1856:1eed
db dummyd_1a46d[32]; // 1856:1f0d
db dummyd_1a48d[32]; // 1856:1f2d
db dummyd_1a4ad[32]; // 1856:1f4d
db dummyd_1a4cd[32]; // 1856:1f6d
db dummyd_1a4ed[32]; // 1856:1f8d
db dummyd_1a50d[32]; // 1856:1fad
db dummyd_1a52d[32]; // 1856:1fcd
db dummyd_1a54d[32]; // 1856:1fed
db dummyd_1a56d[32]; // 1856:200d
db dummyd_1a58d[32]; // 1856:202d
db dummyd_1a5ad[32]; // 1856:204d
db dummyd_1a5cd[32]; // 1856:206d
db dummyd_1a5ed[32]; // 1856:208d
db dummyd_1a60d[32]; // 1856:20ad
db dummyd_1a62d[32]; // 1856:20cd
db dummyd_1a64d[32]; // 1856:20ed
db dummyd_1a66d[32]; // 1856:210d
db dummyd_1a68d[32]; // 1856:212d
db dummyd_1a6ad[32]; // 1856:214d
db dummyd_1a6cd[32]; // 1856:216d
db dummyd_1a6ed[32]; // 1856:218d
db dummyd_1a70d[32]; // 1856:21ad
db dummyd_1a72d[32]; // 1856:21cd
db dummyd_1a74d[32]; // 1856:21ed
db dummyd_1a76d[32]; // 1856:220d
db dummyd_1a78d[32]; // 1856:222d
db dummyd_1a7ad[32]; // 1856:224d
db dummyd_1a7cd[32]; // 1856:226d
db dummyd_1a7ed[32]; // 1856:228d
db dummyd_1a80d[32]; // 1856:22ad
db dummyd_1a82d;
db dummyd_1a82e;
db dummyd_1a82f;
db dummyd_1a830;
db dummyd_1a831;
db dummyd_1a832;
db dummyd_1a833;
db dummyd_1a834;
db dummyd_1a835;
db dummyd_1a836;
db dummyd_1a837;
db dummyd_1a838;
db dummyd_1a839;
db dummyd_1a83a;
db dummyd_1a83b;
db dummyd_1a83c;
db dummyd_1a83d;
db dummyd_1a83e;
db dummyd_1a83f;
db dummyd_1a840;
db dummyd_1a841;
db dummyd_1a842;
db dummyd_1a843;
db dummyd_1a844;
db dummyd_1a845;
db byte_28e26; // 1856:22e6
db dummyd_1a847[32]; // 1856:22e7
db dummyd_1a867[32]; // 1856:2307
db dummyd_1a887[32]; // 1856:2327
db dummyd_1a8a7[32]; // 1856:2347
db dummyd_1a8c7[32]; // 1856:2367
db dummyd_1a8e7;
db dummyd_1a8e8;
db dummyd_1a8e9;
db dummyd_1a8ea;
db dummyd_1a8eb;
db byte_28ecc; // 1856:238c
db dummyd_1a8ed[32]; // 1856:238d
db dummyd_1a90d[32]; // 1856:23ad
db dummyd_1a92d[32]; // 1856:23cd
db dummyd_1a94d[32]; // 1856:23ed
db dummyd_1a96d[32]; // 1856:240d
db dummyd_1a98d[32]; // 1856:242d
db dummyd_1a9ad[32]; // 1856:244d
db dummyd_1a9cd[32]; // 1856:246d
db dummyd_1a9ed[32]; // 1856:248d
db dummyd_1aa0d[32]; // 1856:24ad
db dummyd_1aa2d[32]; // 1856:24cd
db dummyd_1aa4d[32]; // 1856:24ed
db dummyd_1aa6d[32]; // 1856:250d
db dummyd_1aa8d;
db dummyd_1aa8e;
db dummyd_1aa8f;
db dummyd_1aa90;
db dummyd_1aa91;
db dummyd_1aa92;
db dummyd_1aa93;
db dummyd_1aa94;
db dummyd_1aa95;
db dummyd_1aa96;
db dummyd_1aa97;
db dummyd_1aa98;
db dummyd_1aa99;
db dummyd_1aa9a;
db dummyd_1aa9b;
db dummyd_1aa9c;
db dummyd_1aa9d;
db dummyd_1aa9e;
db dummyd_1aa9f;
db byte_29080; // 1856:2540
db dummyd_1aaa1[32]; // 1856:2541
db dummyd_1aac1[32]; // 1856:2561
db dummyd_1aae1[32]; // 1856:2581
db dummyd_1ab01[32]; // 1856:25a1
db dummyd_1ab21[32]; // 1856:25c1
db dummyd_1ab41[32]; // 1856:25e1
db dummyd_1ab61[32]; // 1856:2601
db dummyd_1ab81[32]; // 1856:2621
db dummyd_1aba1[32]; // 1856:2641
db dummyd_1abc1[32]; // 1856:2661
db dummyd_1abe1[32]; // 1856:2681
db dummyd_1ac01[32]; // 1856:26a1
db dummyd_1ac21[32]; // 1856:26c1
db dummyd_1ac41[32]; // 1856:26e1
db dummyd_1ac61[32]; // 1856:2701
db dummyd_1ac81[32]; // 1856:2721
db dummyd_1aca1[32]; // 1856:2741
db dummyd_1acc1[32]; // 1856:2761
db dummyd_1ace1[32]; // 1856:2781
db dummyd_1ad01;
db dummyd_1ad02;
db dummyd_1ad03;
db dummyd_1ad04;
db dummyd_1ad05;
db dummyd_1ad06;
db dummyd_1ad07;
db dummyd_1ad08;
db dummyd_1ad09;
db dummyd_1ad0a;
db dummyd_1ad0b;
db dummyd_1ad0c;
db dummyd_1ad0d;
db dummyd_1ad0e;
db dummyd_1ad0f;
db dummyd_1ad10;
db dummyd_1ad11;
db dummyd_1ad12;
db dummyd_1ad13;
db dummyd_1ad14;
db dummyd_1ad15;
db dummyd_1ad16;
db dummyd_1ad17;
db dummyd_1ad18;
db dummyd_1ad19;
db dummyd_1ad1a;
db dummyd_1ad1b;
db dummyd_1ad1c;
db dummyd_1ad1d;
db dummyd_1ad1e;
db byte_292ff; // 1856:27bf
db dummyd_1ad20[32]; // 1856:27c0
db dummyd_1ad40[32]; // 1856:27e0
db dummyd_1ad60[32]; // 1856:2800
db dummyd_1ad80[32]; // 1856:2820
db dummyd_1ada0[32]; // 1856:2840
db dummyd_1adc0[32]; // 1856:2860
db dummyd_1ade0[32]; // 1856:2880
db dummyd_1ae00[32]; // 1856:28a0
db dummyd_1ae20[32]; // 1856:28c0
db dummyd_1ae40[32]; // 1856:28e0
db dummyd_1ae60[32]; // 1856:2900
db dummyd_1ae80[32]; // 1856:2920
db dummyd_1aea0[32]; // 1856:2940
db dummyd_1aec0[32]; // 1856:2960
db dummyd_1aee0[32]; // 1856:2980
db dummyd_1af00[32]; // 1856:29a0
db dummyd_1af20[32]; // 1856:29c0
db dummyd_1af40[32]; // 1856:29e0
db dummyd_1af60[32]; // 1856:2a00
db dummyd_1af80[32]; // 1856:2a20
db dummyd_1afa0[32]; // 1856:2a40
db dummyd_1afc0[32]; // 1856:2a60
db dummyd_1afe0[32]; // 1856:2a80
db dummyd_1b000[32]; // 1856:2aa0
db dummyd_1b020[32]; // 1856:2ac0
db dummyd_1b040[32]; // 1856:2ae0
db dummyd_1b060[32]; // 1856:2b00
db dummyd_1b080[32]; // 1856:2b20
db dummyd_1b0a0[32]; // 1856:2b40
db dummyd_1b0c0[32]; // 1856:2b60
db dummyd_1b0e0[32]; // 1856:2b80
db dummyd_1b100[32]; // 1856:2ba0
db dummyd_1b120[32]; // 1856:2bc0
db dummyd_1b140[32]; // 1856:2be0
db dummyd_1b160[32]; // 1856:2c00
db dummyd_1b180[32]; // 1856:2c20
db dummyd_1b1a0[32]; // 1856:2c40
db dummyd_1b1c0[32]; // 1856:2c60
db dummyd_1b1e0[32]; // 1856:2c80
db dummyd_1b200[32]; // 1856:2ca0
db dummyd_1b220[32]; // 1856:2cc0
db dummyd_1b240[32]; // 1856:2ce0
db dummyd_1b260[32]; // 1856:2d00
db dummyd_1b280[32]; // 1856:2d20
db dummyd_1b2a0[32]; // 1856:2d40
db dummyd_1b2c0[32]; // 1856:2d60
db dummyd_1b2e0[32]; // 1856:2d80
db dummyd_1b300[32]; // 1856:2da0
db dummyd_1b320[32]; // 1856:2dc0
db dummyd_1b340[32]; // 1856:2de0
db dummyd_1b360[32]; // 1856:2e00
db dummyd_1b380[32]; // 1856:2e20
db dummyd_1b3a0[32]; // 1856:2e40
db dummyd_1b3c0[32]; // 1856:2e60
db dummyd_1b3e0[32]; // 1856:2e80
db dummyd_1b400[32]; // 1856:2ea0
db dummyd_1b420[32]; // 1856:2ec0
db dummyd_1b440[32]; // 1856:2ee0
db dummyd_1b460[32]; // 1856:2f00
db dummyd_1b480[32]; // 1856:2f20
db dummyd_1b4a0[32]; // 1856:2f40
db dummyd_1b4c0[32]; // 1856:2f60
db dummyd_1b4e0[32]; // 1856:2f80
db dummyd_1b500[32]; // 1856:2fa0
db dummyd_1b520[32]; // 1856:2fc0
db dummyd_1b540[32]; // 1856:2fe0
db dummyd_1b560[32]; // 1856:3000
db dummyd_1b580[32]; // 1856:3020
db dummyd_1b5a0[32]; // 1856:3040
db dummyd_1b5c0;
db dummyd_1b5c1;
db dummyd_1b5c2;
db dummyd_1b5c3;
db dummyd_1b5c4;
db dummyd_1b5c5;
db dummyd_1b5c6;
db dummyd_1b5c7;
db dummyd_1b5c8;
db dummyd_1b5c9;
db dummyd_1b5ca;
db dummyd_1b5cb;
db dummyd_1b5cc;
db dummyd_1b5cd;
db dummyd_1b5ce;
db dummyd_1b5cf;
db dummyd_1b5d0;
db dummyd_1b5d1;
db dummyd_1b5d2;
db dummyd_1b5d3;
db dummyd_1b5d4;
db dummyd_1b5d5;
db dummyd_1b5d6;
db byte_29bb7; // 1856:3077
db dummyd_1b5d8[32]; // 1856:3078
db dummyd_1b5f8[32]; // 1856:3098
db dummyd_1b618[32]; // 1856:30b8
db dummyd_1b638[32]; // 1856:30d8
db dummyd_1b658[32]; // 1856:30f8
db dummyd_1b678[32]; // 1856:3118
db dummyd_1b698;
db dummyd_1b699;
db dummyd_1b69a;
db dummyd_1b69b;
db dummyd_1b69c;
db dummyd_1b69d;
db dummyd_1b69e;
db dummyd_1b69f;
db dummyd_1b6a0;
db dummyd_1b6a1;
db dummyd_1b6a2;
db dummyd_1b6a3;
db dummyd_1b6a4;
db dummyd_1b6a5;
db dummyd_1b6a6;
db dummyd_1b6a7;
db dummyd_1b6a8;
db dummyd_1b6a9;
db dummyd_1b6aa;
db dummyd_1b6ab;
db dummyd_1b6ac;
db dummyd_1b6ad;
db dummyd_1b6ae;
db dummyd_1b6af;
db dummyd_1b6b0;
db dummyd_1b6b1;
db dummyd_1b6b2;
db dummyd_1b6b3;
db dummyd_1b6b4;
db dummyd_1b6b5;
db dummyd_1b6b6;
db byte_29c97; // 1856:3157
db dummyd_1b6b8[32]; // 1856:3158
db dummyd_1b6d8[32]; // 1856:3178
db dummyd_1b6f8[32]; // 1856:3198
db dummyd_1b718[32]; // 1856:31b8
db dummyd_1b738[32]; // 1856:31d8
db dummyd_1b758[32]; // 1856:31f8
db dummyd_1b778[32]; // 1856:3218
db dummyd_1b798[32]; // 1856:3238
db dummyd_1b7b8[32]; // 1856:3258
db dummyd_1b7d8[32]; // 1856:3278
db dummyd_1b7f8[32]; // 1856:3298
db dummyd_1b818[32]; // 1856:32b8
db dummyd_1b838[32]; // 1856:32d8
db dummyd_1b858[32]; // 1856:32f8
db dummyd_1b878[32]; // 1856:3318
db dummyd_1b898[32]; // 1856:3338
db dummyd_1b8b8[32]; // 1856:3358
db dummyd_1b8d8[32]; // 1856:3378
db dummyd_1b8f8[32]; // 1856:3398
db dummyd_1b918[32]; // 1856:33b8
db dummyd_1b938[32]; // 1856:33d8
db dummyd_1b958[32]; // 1856:33f8
db dummyd_1b978[32]; // 1856:3418
db dummyd_1b998[32]; // 1856:3438
db dummyd_1b9b8[32]; // 1856:3458
db dummyd_1b9d8[32]; // 1856:3478
db dummyd_1b9f8[32]; // 1856:3498
db dummyd_1ba18[32]; // 1856:34b8
db dummyd_1ba38[32]; // 1856:34d8
db dummyd_1ba58[32]; // 1856:34f8
db dummyd_1ba78[32]; // 1856:3518
db dummyd_1ba98[32]; // 1856:3538
db dummyd_1bab8[32]; // 1856:3558
db dummyd_1bad8[32]; // 1856:3578
db dummyd_1baf8[32]; // 1856:3598
db dummyd_1bb18[32]; // 1856:35b8
db dummyd_1bb38[32]; // 1856:35d8
db dummyd_1bb58[32]; // 1856:35f8
db dummyd_1bb78[32]; // 1856:3618
db dummyd_1bb98[32]; // 1856:3638
db dummyd_1bbb8[32]; // 1856:3658
db dummyd_1bbd8[32]; // 1856:3678
db dummyd_1bbf8[32]; // 1856:3698
db dummyd_1bc18[32]; // 1856:36b8
db dummyd_1bc38[32]; // 1856:36d8
db dummyd_1bc58[32]; // 1856:36f8
db dummyd_1bc78[32]; // 1856:3718
db dummyd_1bc98[32]; // 1856:3738
db dummyd_1bcb8[32]; // 1856:3758
db dummyd_1bcd8[32]; // 1856:3778
db dummyd_1bcf8[32]; // 1856:3798
db dummyd_1bd18[32]; // 1856:37b8
db dummyd_1bd38[32]; // 1856:37d8
db dummyd_1bd58[32]; // 1856:37f8
db dummyd_1bd78[32]; // 1856:3818
db dummyd_1bd98[32]; // 1856:3838
db dummyd_1bdb8[32]; // 1856:3858
db dummyd_1bdd8[32]; // 1856:3878
db dummyd_1bdf8[32]; // 1856:3898
db dummyd_1be18[32]; // 1856:38b8
db dummyd_1be38[32]; // 1856:38d8
db dummyd_1be58[32]; // 1856:38f8
db dummyd_1be78[32]; // 1856:3918
db dummyd_1be98[32]; // 1856:3938
db dummyd_1beb8[32]; // 1856:3958
db dummyd_1bed8[32]; // 1856:3978
db dummyd_1bef8[32]; // 1856:3998
db dummyd_1bf18[32]; // 1856:39b8
db dummyd_1bf38[32]; // 1856:39d8
db dummyd_1bf58[32]; // 1856:39f8
db dummyd_1bf78[32]; // 1856:3a18
db dummyd_1bf98[32]; // 1856:3a38
db dummyd_1bfb8[32]; // 1856:3a58
db dummyd_1bfd8[32]; // 1856:3a78
db dummyd_1bff8[32]; // 1856:3a98
db dummyd_1c018[32]; // 1856:3ab8
db dummyd_1c038[32]; // 1856:3ad8
db dummyd_1c058[32]; // 1856:3af8
db dummyd_1c078[32]; // 1856:3b18
db dummyd_1c098[32]; // 1856:3b38
db dummyd_1c0b8[32]; // 1856:3b58
db dummyd_1c0d8[32]; // 1856:3b78
db dummyd_1c0f8[32]; // 1856:3b98
db dummyd_1c118[32]; // 1856:3bb8
db dummyd_1c138[32]; // 1856:3bd8
db dummyd_1c158[32]; // 1856:3bf8
db dummyd_1c178[32]; // 1856:3c18
db dummyd_1c198[32]; // 1856:3c38
db dummyd_1c1b8[32]; // 1856:3c58
db dummyd_1c1d8[32]; // 1856:3c78
db dummyd_1c1f8[32]; // 1856:3c98
db dummyd_1c218[32]; // 1856:3cb8
db dummyd_1c238[32]; // 1856:3cd8
db dummyd_1c258[32]; // 1856:3cf8
db dummyd_1c278[32]; // 1856:3d18
db dummyd_1c298[32]; // 1856:3d38
db dummyd_1c2b8[32]; // 1856:3d58
db dummyd_1c2d8[32]; // 1856:3d78
db dummyd_1c2f8[32]; // 1856:3d98
db dummyd_1c318[32]; // 1856:3db8
db dummyd_1c338[32]; // 1856:3dd8
db dummyd_1c358[32]; // 1856:3df8
db dummyd_1c378[32]; // 1856:3e18
db dummyd_1c398[32]; // 1856:3e38
db dummyd_1c3b8[32]; // 1856:3e58
db dummyd_1c3d8[32]; // 1856:3e78
db dummyd_1c3f8[32]; // 1856:3e98
db dummyd_1c418[32]; // 1856:3eb8
db dummyd_1c438[32]; // 1856:3ed8
db dummyd_1c458[32]; // 1856:3ef8
db dummyd_1c478[32]; // 1856:3f18
db dummyd_1c498[32]; // 1856:3f38
db dummyd_1c4b8[32]; // 1856:3f58
db dummyd_1c4d8[32]; // 1856:3f78
db dummyd_1c4f8[32]; // 1856:3f98
db dummyd_1c518[32]; // 1856:3fb8
db dummyd_1c538[32]; // 1856:3fd8
db dummyd_1c558[32]; // 1856:3ff8
db dummyd_1c578[32]; // 1856:4018
db dummyd_1c598[32]; // 1856:4038
db dummyd_1c5b8[32]; // 1856:4058
db dummyd_1c5d8[32]; // 1856:4078
db dummyd_1c5f8[32]; // 1856:4098
db dummyd_1c618[32]; // 1856:40b8
db dummyd_1c638[32]; // 1856:40d8
db dummyd_1c658[32]; // 1856:40f8
db dummyd_1c678[32]; // 1856:4118
db dummyd_1c698[32]; // 1856:4138
db dummyd_1c6b8[32]; // 1856:4158
db dummyd_1c6d8[32]; // 1856:4178
db dummyd_1c6f8[32]; // 1856:4198
db dummyd_1c718[32]; // 1856:41b8
db dummyd_1c738[32]; // 1856:41d8
db dummyd_1c758[32]; // 1856:41f8
db dummyd_1c778[32]; // 1856:4218
db dummyd_1c798[32]; // 1856:4238
db dummyd_1c7b8[32]; // 1856:4258
db dummyd_1c7d8[32]; // 1856:4278
db dummyd_1c7f8[32]; // 1856:4298
db dummyd_1c818[32]; // 1856:42b8
db dummyd_1c838[32]; // 1856:42d8
db dummyd_1c858[32]; // 1856:42f8
db dummyd_1c878[32]; // 1856:4318
db dummyd_1c898[32]; // 1856:4338
db dummyd_1c8b8[32]; // 1856:4358
db dummyd_1c8d8[32]; // 1856:4378
db dummyd_1c8f8[32]; // 1856:4398
db dummyd_1c918[32]; // 1856:43b8
db dummyd_1c938[32]; // 1856:43d8
db dummyd_1c958[32]; // 1856:43f8
db dummyd_1c978[32]; // 1856:4418
db dummyd_1c998[32]; // 1856:4438
db dummyd_1c9b8[32]; // 1856:4458
db dummyd_1c9d8[32]; // 1856:4478
db dummyd_1c9f8[32]; // 1856:4498
db dummyd_1ca18[32]; // 1856:44b8
db dummyd_1ca38[32]; // 1856:44d8
db dummyd_1ca58[32]; // 1856:44f8
db dummyd_1ca78[32]; // 1856:4518
db dummyd_1ca98[32]; // 1856:4538
db dummyd_1cab8[32]; // 1856:4558
db dummyd_1cad8[32]; // 1856:4578
db dummyd_1caf8[32]; // 1856:4598
db dummyd_1cb18[32]; // 1856:45b8
db dummyd_1cb38[32]; // 1856:45d8
db dummyd_1cb58[32]; // 1856:45f8
db dummyd_1cb78[32]; // 1856:4618
db dummyd_1cb98[32]; // 1856:4638
db dummyd_1cbb8[32]; // 1856:4658
db dummyd_1cbd8[32]; // 1856:4678
db dummyd_1cbf8[32]; // 1856:4698
db dummyd_1cc18[32]; // 1856:46b8
db dummyd_1cc38[32]; // 1856:46d8
db dummyd_1cc58[32]; // 1856:46f8
db dummyd_1cc78[32]; // 1856:4718
db dummyd_1cc98[32]; // 1856:4738
db dummyd_1ccb8[32]; // 1856:4758
db dummyd_1ccd8[32]; // 1856:4778
db dummyd_1ccf8[32]; // 1856:4798
db dummyd_1cd18[32]; // 1856:47b8
db dummyd_1cd38[32]; // 1856:47d8
db dummyd_1cd58[32]; // 1856:47f8
db dummyd_1cd78[32]; // 1856:4818
db dummyd_1cd98[32]; // 1856:4838
db dummyd_1cdb8[32]; // 1856:4858
db dummyd_1cdd8[32]; // 1856:4878
db dummyd_1cdf8[32]; // 1856:4898
db dummyd_1ce18[32]; // 1856:48b8
db dummyd_1ce38[32]; // 1856:48d8
db dummyd_1ce58[32]; // 1856:48f8
db dummyd_1ce78[32]; // 1856:4918
db dummyd_1ce98[32]; // 1856:4938
db dummyd_1ceb8[32]; // 1856:4958
db dummyd_1ced8[32]; // 1856:4978
db dummyd_1cef8[32]; // 1856:4998
db dummyd_1cf18[32]; // 1856:49b8
db dummyd_1cf38[32]; // 1856:49d8
db dummyd_1cf58[32]; // 1856:49f8
db dummyd_1cf78[32]; // 1856:4a18
db dummyd_1cf98[32]; // 1856:4a38
db dummyd_1cfb8[32]; // 1856:4a58
db dummyd_1cfd8[32]; // 1856:4a78
db dummyd_1cff8[32]; // 1856:4a98
db dummyd_1d018[32]; // 1856:4ab8
db dummyd_1d038[32]; // 1856:4ad8
db dummyd_1d058[32]; // 1856:4af8
db dummyd_1d078[32]; // 1856:4b18
db dummyd_1d098[32]; // 1856:4b38
db dummyd_1d0b8[32]; // 1856:4b58
db dummyd_1d0d8[32]; // 1856:4b78
db dummyd_1d0f8[32]; // 1856:4b98
db dummyd_1d118[32]; // 1856:4bb8
db dummyd_1d138[32]; // 1856:4bd8
db dummyd_1d158[32]; // 1856:4bf8
db dummyd_1d178[32]; // 1856:4c18
db dummyd_1d198[32]; // 1856:4c38
db dummyd_1d1b8[32]; // 1856:4c58
db dummyd_1d1d8[32]; // 1856:4c78
db dummyd_1d1f8[32]; // 1856:4c98
db dummyd_1d218[32]; // 1856:4cb8
db dummyd_1d238[32]; // 1856:4cd8
db dummyd_1d258[32]; // 1856:4cf8
db dummyd_1d278[32]; // 1856:4d18
db dummyd_1d298[32]; // 1856:4d38
db dummyd_1d2b8[32]; // 1856:4d58
db dummyd_1d2d8[32]; // 1856:4d78
db dummyd_1d2f8[32]; // 1856:4d98
db dummyd_1d318[32]; // 1856:4db8
db dummyd_1d338[32]; // 1856:4dd8
db dummyd_1d358[32]; // 1856:4df8
db dummyd_1d378[32]; // 1856:4e18
db dummyd_1d398[32]; // 1856:4e38
db dummyd_1d3b8[32]; // 1856:4e58
db dummyd_1d3d8[32]; // 1856:4e78
db dummyd_1d3f8[32]; // 1856:4e98
db dummyd_1d418[32]; // 1856:4eb8
db dummyd_1d438[32]; // 1856:4ed8
db dummyd_1d458[32]; // 1856:4ef8
db dummyd_1d478[32]; // 1856:4f18
db dummyd_1d498[32]; // 1856:4f38
db dummyd_1d4b8[32]; // 1856:4f58
db dummyd_1d4d8[32]; // 1856:4f78
db dummyd_1d4f8[32]; // 1856:4f98
db dummyd_1d518[32]; // 1856:4fb8
db dummyd_1d538[32]; // 1856:4fd8
db dummyd_1d558[32]; // 1856:4ff8
db dummyd_1d578[32]; // 1856:5018
db dummyd_1d598[32]; // 1856:5038
db dummyd_1d5b8[32]; // 1856:5058
db dummyd_1d5d8[32]; // 1856:5078
db dummyd_1d5f8[32]; // 1856:5098
db dummyd_1d618[32]; // 1856:50b8
db dummyd_1d638[32]; // 1856:50d8
db dummyd_1d658[32]; // 1856:50f8
db dummyd_1d678[32]; // 1856:5118
db dummyd_1d698;
db dummyd_1d699;
db dummyd_1d69a;
db dummyd_1d69b;
db dummyd_1d69c;
db dummyd_1d69d;
db dummyd_1d69e;
db dummyd_1d69f;
db dummyd_1d6a0[32]; // 1d6a:0000
db dummyd_1d6c0[32]; // 1d6a:0020
db dummyd_1d6e0[32]; // 1d6a:0040
db dummyd_1d700[32]; // 1d6a:0060
db dummyd_1d720[32]; // 1d6a:0080
db dummyd_1d740[32]; // 1d6a:00a0
db dummyd_1d760[32]; // 1d6a:00c0
db dummyd_1d780[32]; // 1d6a:00e0
db dummyd_1d7a0[32]; // 1d6a:0100
db dummyd_1d7c0[32]; // 1d6a:0120
db dummyd_1d7e0[32]; // 1d6a:0140
db dummyd_1d800[32]; // 1d6a:0160
db dummyd_1d820[32]; // 1d6a:0180
db dummyd_1d840[32]; // 1d6a:01a0
db dummyd_1d860[32]; // 1d6a:01c0
db dummyd_1d880[32]; // 1d6a:01e0
db dummyd_1d8a0[32]; // 1d6a:0200
db dummyd_1d8c0[32]; // 1d6a:0220
db dummyd_1d8e0[32]; // 1d6a:0240
db dummyd_1d900[32]; // 1d6a:0260
db dummyd_1d920[32]; // 1d6a:0280
db dummyd_1d940[32]; // 1d6a:02a0
db dummyd_1d960[32]; // 1d6a:02c0
db dummyd_1d980[32]; // 1d6a:02e0
db dummyd_1d9a0[32]; // 1d6a:0300
db dummyd_1d9c0[32]; // 1d6a:0320
db dummyd_1d9e0[32]; // 1d6a:0340
db dummyd_1da00[32]; // 1d6a:0360
db dummyd_1da20[32]; // 1d6a:0380
db dummyd_1da40[32]; // 1d6a:03a0
db dummyd_1da60[32]; // 1d6a:03c0
db dummyd_1da80[32]; // 1d6a:03e0
db dummyd_1daa0[32]; // 1d6a:0400
db dummyd_1dac0[32]; // 1d6a:0420
db dummyd_1dae0[32]; // 1d6a:0440
db dummyd_1db00[32]; // 1d6a:0460
db dummyd_1db20[32]; // 1d6a:0480
db dummyd_1db40[32]; // 1d6a:04a0
db dummyd_1db60[32]; // 1d6a:04c0
db dummyd_1db80[32]; // 1d6a:04e0
db dummyd_1dba0[32]; // 1d6a:0500
db dummyd_1dbc0[32]; // 1d6a:0520
db dummyd_1dbe0[32]; // 1d6a:0540
db dummyd_1dc00[32]; // 1d6a:0560
db dummyd_1dc20[32]; // 1d6a:0580
db dummyd_1dc40[32]; // 1d6a:05a0
db dummyd_1dc60[32]; // 1d6a:05c0
db dummyd_1dc80[32]; // 1d6a:05e0
db dummyd_1dca0[32]; // 1d6a:0600
db dummyd_1dcc0[32]; // 1d6a:0620
db dummyd_1dce0[32]; // 1d6a:0640
db dummyd_1dd00[32]; // 1d6a:0660
db dummyd_1dd20[32]; // 1d6a:0680
db dummyd_1dd40[32]; // 1d6a:06a0
db dummyd_1dd60[32]; // 1d6a:06c0
db dummyd_1dd80[32]; // 1d6a:06e0
db dummyd_1dda0[32]; // 1d6a:0700
db dummyd_1ddc0[32]; // 1d6a:0720
db dummyd_1dde0[32]; // 1d6a:0740
db dummyd_1de00[32]; // 1d6a:0760
db dummyd_1de20[32]; // 1d6a:0780
db dummyd_1de40;
db dummyd_1de41;
db dummyd_1de42;
db dummyd_1de43;
dw dummyd_1de44;
dw dummyd_1de46; // 1d6a:07a6
dw dummyd_1de48; // 1d6a:07a8
dw dummyd_1de4a; // 1d6a:07aa
dw dummyd_1de4c; // 1d6a:07ac
db dummyd_1de4e;
db dummyd_1de4f;
db dummyd_1de50; // 1d6a:07b0
db dummyd_1de51; // 1d6a:07b1
db dummyd_1de52; // 1d6a:07b2
db dummyd_1de53; // 1d6a:07b3
dd dummyd_1de54; // 1d6a:07b4
dw dummyd_1de58; // 1d6a:07b8
dw dummyd_1de5a; // 1d6a:07ba
dw dummyd_1de5c; // 1d6a:07bc
db dummyd_1de5e;
db dummyd_1de5f;
db dummyd_1de60; // 1d6a:07c0
db dummyd_1de61; // 1d6a:07c1
db dummyd_1de62; // 1d6a:07c2
db dummyd_1de63; // 1d6a:07c3
dd dummyd_1de64; // 1d6a:07c4
dd dummyd_1de68; // 1d6a:07c8
db dummyd_1de6c;
db dummyd_1de6d;
db dummyd_1de6e; // 1d6a:07ce
db dummyd_1de6f;
db dummyd_1de70; // 1d6a:07d0
db dummyd_1de71; // 1d6a:07d1
db dummyd_1de72; // 1d6a:07d2
db dummyd_1de73; // 1d6a:07d3
dd dummyd_1de74; // 1d6a:07d4
dd dummyd_1de78; // 1d6a:07d8
db dummyd_1de7c; // 1d6a:07dc
db dummyd_1de7d; // 1d6a:07dd
db dummyd_1de7e[2];
db dummyd_1de80; // 1d6a:07e0
db dummyd_1de81; // 1d6a:07e1
db dummyd_1de82; // 1d6a:07e2
db dummyd_1de83; // 1d6a:07e3
dd dummyd_1de84; // 1d6a:07e4
dd dummyd_1de88; // 1d6a:07e8
db dummyd_1de8c; // 1d6a:07ec
db dummyd_1de8d; // 1d6a:07ed
db dummyd_1de8e[2];
db dummyd_1de90; // 1d6a:07f0
db dummyd_1de91; // 1d6a:07f1
db dummyd_1de92; // 1d6a:07f2
db dummyd_1de93; // 1d6a:07f3
dd dummyd_1de94; // 1d6a:07f4
dd dummyd_1de98; // 1d6a:07f8
db dummyd_1de9c; // 1d6a:07fc
db dummyd_1de9d; // 1d6a:07fd
db dummyd_1de9e[2];
db dummyd_1dea0; // 1d6a:0800
db dummyd_1dea1; // 1d6a:0801
db dummyd_1dea2; // 1d6a:0802
db dummyd_1dea3; // 1d6a:0803
dd dummyd_1dea4; // 1d6a:0804
dd dummyd_1dea8; // 1d6a:0808
db dummyd_1deac; // 1d6a:080c
db dummyd_1dead; // 1d6a:080d
db dummyd_1deae[2];
db dummyd_1deb0; // 1d6a:0810
db dummyd_1deb1; // 1d6a:0811
db dummyd_1deb2; // 1d6a:0812
db dummyd_1deb3; // 1d6a:0813
dd dummyd_1deb4; // 1d6a:0814
dd dummyd_1deb8; // 1d6a:0818
db dummyd_1debc; // 1d6a:081c
db dummyd_1debd; // 1d6a:081d
db dummyd_1debe;
db dummyd_1debf;
db dummyd_1dec0;
db dummyd_1dec1;
db dummyd_1dec2;
db dummyd_1dec3;
dd dummyd_1dec4; // 1d6a:0824
dd dummyd_1dec8; // 1d6a:0828
db dummyd_1decc; // 1d6a:082c
db dummyd_1decd; // 1d6a:082d
db dummyd_1dece;
db dummyd_1decf;
db dummyd_1ded0;
db dummyd_1ded1;
db dummyd_1ded2;
db dummyd_1ded3; // 1d6a:0833
dd dummyd_1ded4; // 1d6a:0834
dd dummyd_1ded8; // 1d6a:0838
db dummyd_1dedc[32]; // 1d6a:083c
db dummyd_1defc[32]; // 1d6a:085c
db dummyd_1df1c[32]; // 1d6a:087c
db dummyd_1df3c[32]; // 1d6a:089c
db dummyd_1df5c[32]; // 1d6a:08bc
db dummyd_1df7c[32]; // 1d6a:08dc
db dummyd_1df9c[32]; // 1d6a:08fc
db dummyd_1dfbc[32]; // 1d6a:091c
db dummyd_1dfdc[32]; // 1d6a:093c
db dummyd_1dffc[32]; // 1d6a:095c
db dummyd_1e01c[32]; // 1d6a:097c
db dummyd_1e03c[32]; // 1d6a:099c
db dummyd_1e05c[32]; // 1d6a:09bc
db dummyd_1e07c[32]; // 1d6a:09dc
db dummyd_1e09c[32]; // 1d6a:09fc
db dummyd_1e0bc[32]; // 1d6a:0a1c
db dummyd_1e0dc[32]; // 1d6a:0a3c
db dummyd_1e0fc[32]; // 1d6a:0a5c
db dummyd_1e11c[32]; // 1d6a:0a7c
db dummyd_1e13c[32]; // 1d6a:0a9c
db dummyd_1e15c[32]; // 1d6a:0abc
db dummyd_1e17c[32]; // 1d6a:0adc
db dummyd_1e19c[32]; // 1d6a:0afc
db dummyd_1e1bc[32]; // 1d6a:0b1c
db dummyd_1e1dc[32]; // 1d6a:0b3c
db dummyd_1e1fc[32]; // 1d6a:0b5c
db dummyd_1e21c[32]; // 1d6a:0b7c
db dummyd_1e23c[32]; // 1d6a:0b9c
db dummyd_1e25c[32]; // 1d6a:0bbc
db dummyd_1e27c[32]; // 1d6a:0bdc
db dummyd_1e29c[32]; // 1d6a:0bfc
db dummyd_1e2bc[32]; // 1d6a:0c1c
db dummyd_1e2dc[32]; // 1d6a:0c3c
db dummyd_1e2fc[32]; // 1d6a:0c5c
db dummyd_1e31c[32]; // 1d6a:0c7c
db dummyd_1e33c[32]; // 1d6a:0c9c
db dummyd_1e35c[32]; // 1d6a:0cbc
db dummyd_1e37c[32]; // 1d6a:0cdc
db dummyd_1e39c[32]; // 1d6a:0cfc
db dummyd_1e3bc[32]; // 1d6a:0d1c
db dummyd_1e3dc[32]; // 1d6a:0d3c
db dummyd_1e3fc[32]; // 1d6a:0d5c
db dummyd_1e41c[32]; // 1d6a:0d7c
db dummyd_1e43c[32]; // 1d6a:0d9c
db dummyd_1e45c[32]; // 1d6a:0dbc
db dummyd_1e47c[32]; // 1d6a:0ddc
db dummyd_1e49c[32]; // 1d6a:0dfc
db dummyd_1e4bc[32]; // 1d6a:0e1c
db dummyd_1e4dc[32]; // 1d6a:0e3c
db dummyd_1e4fc[32]; // 1d6a:0e5c
db dummyd_1e51c[32]; // 1d6a:0e7c
db dummyd_1e53c[32]; // 1d6a:0e9c
db dummyd_1e55c[32]; // 1d6a:0ebc
db dummyd_1e57c[32]; // 1d6a:0edc
db dummyd_1e59c[32]; // 1d6a:0efc
db dummyd_1e5bc[32]; // 1d6a:0f1c
db dummyd_1e5dc[32]; // 1d6a:0f3c
db dummyd_1e5fc; // 1d6a:0f5c
db dummyd_1e5fd; // 1d6a:0f5d
db dummyd_1e5fe; // 1d6a:0f5e
db dummyd_1e5ff;
db dummyd_1e600; // 1d6a:0f60
db dummyd_1e601; // 1d6a:0f61
db unk_2cbe2; // 1d6a:0f62
db dummyd_1e603[32]; // 1d6a:0f63
db dummyd_1e623[32]; // 1d6a:0f83
db dummyd_1e643[32]; // 1d6a:0fa3
db dummyd_1e663[32]; // 1d6a:0fc3
db dummyd_1e683[32]; // 1d6a:0fe3
db dummyd_1e6a3[32]; // 1d6a:1003
db dummyd_1e6c3[32]; // 1d6a:1023
db dummyd_1e6e3[32]; // 1d6a:1043
db dummyd_1e703[32]; // 1d6a:1063
db dummyd_1e723[32]; // 1d6a:1083
db dummyd_1e743[32]; // 1d6a:10a3
db dummyd_1e763[32]; // 1d6a:10c3
db dummyd_1e783;
db dummyd_1e784; // 1d6a:10e4
db dummyd_1e785; // 1d6a:10e5
db dummyd_1e786;
db dummyd_1e787;
db dummyd_1e788; // 1d6a:10e8
db dummyd_1e789; // 1d6a:10e9
db dummyd_1e78a;
db dummyd_1e78b;
db dummyd_1e78c; // 1d6a:10ec
db dummyd_1e78d; // 1d6a:10ed
db dummyd_1e78e;
db dummyd_1e78f;
db dummyd_1e790; // 1d6a:10f0
db dummyd_1e791; // 1d6a:10f1
db unk_2cd72; // 1d6a:10f2
db dummyd_1e793[32]; // 1d6a:10f3
db dummyd_1e7b3[32]; // 1d6a:1113
db dummyd_1e7d3[32]; // 1d6a:1133
db dummyd_1e7f3[32]; // 1d6a:1153
db dummyd_1e813[32]; // 1d6a:1173
db dummyd_1e833[32]; // 1d6a:1193
db dummyd_1e853[32]; // 1d6a:11b3
db dummyd_1e873[32]; // 1d6a:11d3
db dummyd_1e893[32]; // 1d6a:11f3
db dummyd_1e8b3[32]; // 1d6a:1213
db dummyd_1e8d3[32]; // 1d6a:1233
db dummyd_1e8f3[32]; // 1d6a:1253
db dummyd_1e913[32]; // 1d6a:1273
db dummyd_1e933[32]; // 1d6a:1293
db dummyd_1e953[32]; // 1d6a:12b3
db dummyd_1e973[32]; // 1d6a:12d3
db dummyd_1e993[32]; // 1d6a:12f3
db dummyd_1e9b3[32]; // 1d6a:1313
db dummyd_1e9d3[32]; // 1d6a:1333
db dummyd_1e9f3[32]; // 1d6a:1353
db dummyd_1ea13[32]; // 1d6a:1373
db dummyd_1ea33[32]; // 1d6a:1393
db dummyd_1ea53[32]; // 1d6a:13b3
db dummyd_1ea73[32]; // 1d6a:13d3
db dummyd_1ea93[32]; // 1d6a:13f3
db dummyd_1eab3[32]; // 1d6a:1413
db dummyd_1ead3[32]; // 1d6a:1433
db dummyd_1eaf3[32]; // 1d6a:1453
db dummyd_1eb13[32]; // 1d6a:1473
db dummyd_1eb33[32]; // 1d6a:1493
db dummyd_1eb53[32]; // 1d6a:14b3
db dummyd_1eb73[32]; // 1d6a:14d3
db dummyd_1eb93[32]; // 1d6a:14f3
db dummyd_1ebb3[32]; // 1d6a:1513
db dummyd_1ebd3[32]; // 1d6a:1533
db dummyd_1ebf3[32]; // 1d6a:1553
db dummyd_1ec13[32]; // 1d6a:1573
db dummyd_1ec33[32]; // 1d6a:1593
db dummyd_1ec53[32]; // 1d6a:15b3
db dummyd_1ec73[32]; // 1d6a:15d3
db dummyd_1ec93[32]; // 1d6a:15f3
db dummyd_1ecb3[32]; // 1d6a:1613
db dummyd_1ecd3[32]; // 1d6a:1633
db dummyd_1ecf3[32]; // 1d6a:1653
db dummyd_1ed13[32]; // 1d6a:1673
db dummyd_1ed33[32]; // 1d6a:1693
db dummyd_1ed53[32]; // 1d6a:16b3
db dummyd_1ed73[32]; // 1d6a:16d3
db dummyd_1ed93[32]; // 1d6a:16f3
db dummyd_1edb3;
db dummyd_1edb4; // 1d6a:1714
db dummyd_1edb5; // 1d6a:1715
db dummyd_1edb6;
db dummyd_1edb7;
db dummyd_1edb8; // 1d6a:1718
db dummyd_1edb9; // 1d6a:1719
db dummyd_1edba;
db dummyd_1edbb;
db dummyd_1edbc; // 1d6a:171c
db dummyd_1edbd; // 1d6a:171d
db dummyd_1edbe;
db dummyd_1edbf;
db dummyd_1edc0; // 1d6a:1720
db dummyd_1edc1; // 1d6a:1721
db dummyd_1edc2;
db dummyd_1edc3;
db dummyd_1edc4; // 1d6a:1724
db dummyd_1edc5; // 1d6a:1725
db dummyd_1edc6;
db dummyd_1edc7;
db dummyd_1edc8; // 1d6a:1728
db dummyd_1edc9; // 1d6a:1729
db dummyd_1edca;
db dummyd_1edcb;
db dummyd_1edcc; // 1d6a:172c
db dummyd_1edcd; // 1d6a:172d
db dummyd_1edce;
db dummyd_1edcf;
db dummyd_1edd0; // 1d6a:1730
db dummyd_1edd1; // 1d6a:1731
db unk_2d3b2; // 1d6a:1732
db dummyd_1edd3[32]; // 1d6a:1733
db dummyd_1edf3[32]; // 1d6a:1753
db dummyd_1ee13[32]; // 1d6a:1773
db dummyd_1ee33[32]; // 1d6a:1793
db dummyd_1ee53[32]; // 1d6a:17b3
db dummyd_1ee73[32]; // 1d6a:17d3
db dummyd_1ee93[32]; // 1d6a:17f3
db dummyd_1eeb3[32]; // 1d6a:1813
db dummyd_1eed3[32]; // 1d6a:1833
db dummyd_1eef3[32]; // 1d6a:1853
db dummyd_1ef13[32]; // 1d6a:1873
db dummyd_1ef33[32]; // 1d6a:1893
db dummyd_1ef53;
db dummyd_1ef54; // 1d6a:18b4
db dummyd_1ef55; // 1d6a:18b5
db dummyd_1ef56;
db dummyd_1ef57;
db dummyd_1ef58; // 1d6a:18b8
db dummyd_1ef59; // 1d6a:18b9
db dummyd_1ef5a;
db dummyd_1ef5b;
db dummyd_1ef5c; // 1d6a:18bc
db dummyd_1ef5d; // 1d6a:18bd
db dummyd_1ef5e;
db dummyd_1ef5f;
db dummyd_1ef60; // 1d6a:18c0
db dummyd_1ef61; // 1d6a:18c1
db unk_2d542; // 1d6a:18c2
db dummyd_1ef63[32]; // 1d6a:18c3
db dummyd_1ef83[32]; // 1d6a:18e3
db dummyd_1efa3[32]; // 1d6a:1903
db dummyd_1efc3[32]; // 1d6a:1923
db dummyd_1efe3[32]; // 1d6a:1943
db dummyd_1f003[32]; // 1d6a:1963
db dummyd_1f023[32]; // 1d6a:1983
db dummyd_1f043[32]; // 1d6a:19a3
db dummyd_1f063[32]; // 1d6a:19c3
db dummyd_1f083[32]; // 1d6a:19e3
db dummyd_1f0a3[32]; // 1d6a:1a03
db dummyd_1f0c3[32]; // 1d6a:1a23
db dummyd_1f0e3[32]; // 1d6a:1a43
db dummyd_1f103[32]; // 1d6a:1a63
db dummyd_1f123[32]; // 1d6a:1a83
db dummyd_1f143[32]; // 1d6a:1aa3
db dummyd_1f163[32]; // 1d6a:1ac3
db dummyd_1f183[32]; // 1d6a:1ae3
db dummyd_1f1a3[32]; // 1d6a:1b03
db dummyd_1f1c3[32]; // 1d6a:1b23
db dummyd_1f1e3[32]; // 1d6a:1b43
db dummyd_1f203[32]; // 1d6a:1b63
db dummyd_1f223[32]; // 1d6a:1b83
db dummyd_1f243[32]; // 1d6a:1ba3
db dummyd_1f263[32]; // 1d6a:1bc3
db dummyd_1f283[32]; // 1d6a:1be3
db dummyd_1f2a3[32]; // 1d6a:1c03
db dummyd_1f2c3[32]; // 1d6a:1c23
db dummyd_1f2e3[32]; // 1d6a:1c43
db dummyd_1f303[32]; // 1d6a:1c63
db dummyd_1f323[32]; // 1d6a:1c83
db dummyd_1f343[32]; // 1d6a:1ca3
db dummyd_1f363[32]; // 1d6a:1cc3
db dummyd_1f383[32]; // 1d6a:1ce3
db dummyd_1f3a3[32]; // 1d6a:1d03
db dummyd_1f3c3[32]; // 1d6a:1d23
db dummyd_1f3e3[32]; // 1d6a:1d43
db dummyd_1f403[32]; // 1d6a:1d63
db dummyd_1f423[32]; // 1d6a:1d83
db dummyd_1f443[32]; // 1d6a:1da3
db dummyd_1f463[32]; // 1d6a:1dc3
db dummyd_1f483[32]; // 1d6a:1de3
db dummyd_1f4a3[32]; // 1d6a:1e03
db dummyd_1f4c3[32]; // 1d6a:1e23
db dummyd_1f4e3[32]; // 1d6a:1e43
db dummyd_1f503[32]; // 1d6a:1e63
db dummyd_1f523[32]; // 1d6a:1e83
db dummyd_1f543[32]; // 1d6a:1ea3
db dummyd_1f563[32]; // 1d6a:1ec3
db dummyd_1f583[32]; // 1d6a:1ee3
db dummyd_1f5a3[32]; // 1d6a:1f03
db dummyd_1f5c3[32]; // 1d6a:1f23
db dummyd_1f5e3[32]; // 1d6a:1f43
db dummyd_1f603[32]; // 1d6a:1f63
db dummyd_1f623[32]; // 1d6a:1f83
db dummyd_1f643[32]; // 1d6a:1fa3
db dummyd_1f663[32]; // 1d6a:1fc3
db dummyd_1f683[32]; // 1d6a:1fe3
db dummyd_1f6a3[32]; // 1d6a:2003
db dummyd_1f6c3[32]; // 1d6a:2023
db dummyd_1f6e3[32]; // 1d6a:2043
db dummyd_1f703[32]; // 1d6a:2063
db dummyd_1f723[32]; // 1d6a:2083
db dummyd_1f743[32]; // 1d6a:20a3
db dummyd_1f763[32]; // 1d6a:20c3
db dummyd_1f783[32]; // 1d6a:20e3
db dummyd_1f7a3[32]; // 1d6a:2103
db dummyd_1f7c3[32]; // 1d6a:2123
db dummyd_1f7e3[32]; // 1d6a:2143
db dummyd_1f803[32]; // 1d6a:2163
db dummyd_1f823[32]; // 1d6a:2183
db dummyd_1f843[32]; // 1d6a:21a3
db dummyd_1f863[32]; // 1d6a:21c3
db dummyd_1f883[32]; // 1d6a:21e3
db dummyd_1f8a3[32]; // 1d6a:2203
db dummyd_1f8c3[32]; // 1d6a:2223
db dummyd_1f8e3[32]; // 1d6a:2243
db dummyd_1f903[32]; // 1d6a:2263
db dummyd_1f923[32]; // 1d6a:2283
db dummyd_1f943[32]; // 1d6a:22a3
db dummyd_1f963[32]; // 1d6a:22c3
db dummyd_1f983[32]; // 1d6a:22e3
db dummyd_1f9a3[32]; // 1d6a:2303
db dummyd_1f9c3[32]; // 1d6a:2323
db dummyd_1f9e3[32]; // 1d6a:2343
db dummyd_1fa03[32]; // 1d6a:2363
db dummyd_1fa23[32]; // 1d6a:2383
db dummyd_1fa43[32]; // 1d6a:23a3
db dummyd_1fa63[32]; // 1d6a:23c3
db dummyd_1fa83[32]; // 1d6a:23e3
db dummyd_1faa3[32]; // 1d6a:2403
db dummyd_1fac3[32]; // 1d6a:2423
db dummyd_1fae3[32]; // 1d6a:2443
db dummyd_1fb03[32]; // 1d6a:2463
db dummyd_1fb23[32]; // 1d6a:2483
db dummyd_1fb43[32]; // 1d6a:24a3
db dummyd_1fb63[32]; // 1d6a:24c3
db dummyd_1fb83[32]; // 1d6a:24e3
db dummyd_1fba3[32]; // 1d6a:2503
db dummyd_1fbc3[32]; // 1d6a:2523
db dummyd_1fbe3[32]; // 1d6a:2543
db dummyd_1fc03[32]; // 1d6a:2563
db dummyd_1fc23[32]; // 1d6a:2583
db dummyd_1fc43[32]; // 1d6a:25a3
db dummyd_1fc63[32]; // 1d6a:25c3
db dummyd_1fc83[32]; // 1d6a:25e3
db dummyd_1fca3[32]; // 1d6a:2603
db dummyd_1fcc3[32]; // 1d6a:2623
db dummyd_1fce3[32]; // 1d6a:2643
db dummyd_1fd03[32]; // 1d6a:2663
db dummyd_1fd23[32]; // 1d6a:2683
db dummyd_1fd43[32]; // 1d6a:26a3
db dummyd_1fd63[32]; // 1d6a:26c3
db dummyd_1fd83[32]; // 1d6a:26e3
db dummyd_1fda3[32]; // 1d6a:2703
db dummyd_1fdc3[32]; // 1d6a:2723
db dummyd_1fde3[32]; // 1d6a:2743
db dummyd_1fe03[32]; // 1d6a:2763
db dummyd_1fe23[32]; // 1d6a:2783
db dummyd_1fe43[32]; // 1d6a:27a3
db dummyd_1fe63[32]; // 1d6a:27c3
db dummyd_1fe83[32]; // 1d6a:27e3
db dummyd_1fea3[32]; // 1d6a:2803
db dummyd_1fec3[32]; // 1d6a:2823
db dummyd_1fee3;
db dummyd_1fee4; // 1d6a:2844
db dummyd_1fee5; // 1d6a:2845
db dummyd_1fee6;
db dummyd_1fee7;
db dummyd_1fee8; // 1d6a:2848
db dummyd_1fee9; // 1d6a:2849
db dummyd_1feea;
db dummyd_1feeb;
db dummyd_1feec; // 1d6a:284c
db dummyd_1feed; // 1d6a:284d
db dummyd_1feee;
db dummyd_1feef;
db dummyd_1fef0; // 1d6a:2850
db dummyd_1fef1; // 1d6a:2851
db dummyd_1fef2;
db dummyd_1fef3;
db dummyd_1fef4; // 1d6a:2854
db dummyd_1fef5; // 1d6a:2855
db dummyd_1fef6;
db dummyd_1fef7;
db dummyd_1fef8; // 1d6a:2858
db dummyd_1fef9; // 1d6a:2859
db dummyd_1fefa;
db dummyd_1fefb;
db dummyd_1fefc; // 1d6a:285c
db dummyd_1fefd; // 1d6a:285d
db dummyd_1fefe;
db dummyd_1feff;
db dummyd_1ff00; // 1d6a:2860
db dummyd_1ff01; // 1d6a:2861
db unk_2e4e2; // 1d6a:2862
db dummyd_1ff03[32]; // 1d6a:2863
db dummyd_1ff23[32]; // 1d6a:2883
db dummyd_1ff43[32]; // 1d6a:28a3
db dummyd_1ff63[32]; // 1d6a:28c3
db dummyd_1ff83[32]; // 1d6a:28e3
db dummyd_1ffa3[32]; // 1d6a:2903
db dummyd_1ffc3[32]; // 1d6a:2923
db dummyd_1ffe3;
db dummyd_1ffe4;
db dummyd_1ffe5;
db dummyd_1ffe6;
db dummyd_1ffe7;
db dummyd_1ffe8;
db dummyd_1ffe9;
db dummyd_1ffea;
db dummyd_1ffeb;
db dummyd_1ffec;
db dummyd_1ffed;
db dummyd_1ffee;
db dummyd_1ffef;
db dummyd_1fff0;
db dummyd_1fff1;
db dummyd_1fff2;
db dummyd_1fff3;
db dummyd_1fff4;
db dummyd_1fff5;
db dummyd_1fff6;
db dummyd_1fff7;
db dummyd_1fff8;
db dummyd_1fff9;
db dummyd_1fffa;
db dummyd_1fffb;
db dummyd_1fffc;
db dummyd_1fffd;
db dummyd_1fffe;
db dummyd_1ffff;
db dummyd_20000;
db dummyd_20001;
db unk_2e5e2; // 1d6a:2962
db dummyd_20003[32]; // 1d6a:2963
db dummyd_20023[32]; // 1d6a:2983
db dummyd_20043[32]; // 1d6a:29a3
db dummyd_20063[32]; // 1d6a:29c3
db dummyd_20083[32]; // 1d6a:29e3
db dummyd_200a3[32]; // 1d6a:2a03
db dummyd_200c3[32]; // 1d6a:2a23
db dummyd_200e3[32]; // 1d6a:2a43
db dummyd_20103[32]; // 1d6a:2a63
db dummyd_20123[32]; // 1d6a:2a83
db dummyd_20143[32]; // 1d6a:2aa3
db dummyd_20163[32]; // 1d6a:2ac3
db dummyd_20183[32]; // 1d6a:2ae3
db dummyd_201a3[32]; // 1d6a:2b03
db dummyd_201c3[32]; // 1d6a:2b23
db dummyd_201e3[32]; // 1d6a:2b43
db dummyd_20203[32]; // 1d6a:2b63
db dummyd_20223[32]; // 1d6a:2b83
db dummyd_20243[32]; // 1d6a:2ba3
db dummyd_20263[32]; // 1d6a:2bc3
db dummyd_20283[32]; // 1d6a:2be3
db dummyd_202a3[32]; // 1d6a:2c03
db dummyd_202c3[32]; // 1d6a:2c23
db dummyd_202e3[32]; // 1d6a:2c43
db dummyd_20303[32]; // 1d6a:2c63
db dummyd_20323[32]; // 1d6a:2c83
db dummyd_20343[32]; // 1d6a:2ca3
db dummyd_20363;
db dummyd_20364;
db dummyd_20365;
db dummyd_20366;
db dummyd_20367;
db dummyd_20368;
db dummyd_20369;
db dummyd_2036a;
db dummyd_2036b;
db dummyd_2036c;
db dummyd_2036d;
db dummyd_2036e;
db dummyd_2036f;
db dummyd_20370;
db dummyd_20371;
db dummyd_20372;
db dummyd_20373;
db dummyd_20374;
db dummyd_20375;
char apresskey1engli[44]; // 1d6a:2cd6
db dummyd_203a2[2];
db dummyd_203a4[32]; // 1d6a:2d04
db dummyd_203c4[32]; // 1d6a:2d24
db dummyd_203e4[32]; // 1d6a:2d44
db dummyd_20404[32]; // 1d6a:2d64
db dummyd_20424[32]; // 1d6a:2d84
db dummyd_20444;
db byte_2ea25; // 1d6a:2da5
db byte_2ea26; // 1d6a:2da6
db dummyd_20447; // 1d6a:2da7
db byte_2ea28; // 1d6a:2da8
db dummyd_20449[32]; // 1d6a:2da9
db dummyd_20469[32]; // 1d6a:2dc9
db dummyd_20489[32]; // 1d6a:2de9
db dummyd_204a9[32]; // 1d6a:2e09
db dummyd_204c9[32]; // 1d6a:2e29
db dummyd_204e9[32]; // 1d6a:2e49
db dummyd_20509[32]; // 1d6a:2e69
db dummyd_20529[32]; // 1d6a:2e89
db dummyd_20549[32]; // 1d6a:2ea9
db dummyd_20569[32]; // 1d6a:2ec9
db dummyd_20589[32]; // 1d6a:2ee9
db dummyd_205a9[32]; // 1d6a:2f09
db dummyd_205c9[32]; // 1d6a:2f29
db dummyd_205e9[32]; // 1d6a:2f49
db dummyd_20609[32]; // 1d6a:2f69
db dummyd_20629[32]; // 1d6a:2f89
db dummyd_20649[32]; // 1d6a:2fa9
db dummyd_20669[32]; // 1d6a:2fc9
db dummyd_20689[32]; // 1d6a:2fe9
db dummyd_206a9[32]; // 1d6a:3009
db dummyd_206c9[32]; // 1d6a:3029
db dummyd_206e9[32]; // 1d6a:3049
db dummyd_20709[32]; // 1d6a:3069
db dummyd_20729[32]; // 1d6a:3089
db dummyd_20749[32]; // 1d6a:30a9
db dummyd_20769[32]; // 1d6a:30c9
db dummyd_20789[32]; // 1d6a:30e9
db dummyd_207a9[32]; // 1d6a:3109
db dummyd_207c9[32]; // 1d6a:3129
db dummyd_207e9[32]; // 1d6a:3149
db dummyd_20809[32]; // 1d6a:3169
db dummyd_20829[32]; // 1d6a:3189
db dummyd_20849[32]; // 1d6a:31a9
db dummyd_20869[32]; // 1d6a:31c9
db dummyd_20889[32]; // 1d6a:31e9
db dummyd_208a9[32]; // 1d6a:3209
db dummyd_208c9[32]; // 1d6a:3229
db dummyd_208e9[32]; // 1d6a:3249
db dummyd_20909[32]; // 1d6a:3269
db dummyd_20929[32]; // 1d6a:3289
db dummyd_20949[32]; // 1d6a:32a9
db dummyd_20969[32]; // 1d6a:32c9
db dummyd_20989[32]; // 1d6a:32e9
db dummyd_209a9[32]; // 1d6a:3309
db dummyd_209c9[32]; // 1d6a:3329
db dummyd_209e9[32]; // 1d6a:3349
db dummyd_20a09[32]; // 1d6a:3369
db dummyd_20a29[32]; // 1d6a:3389
db dummyd_20a49[32]; // 1d6a:33a9
db dummyd_20a69; // 1d6a:33c9
db dummyd_20a6a; // 1d6a:33ca
db dummyd_20a6b; // 1d6a:33cb
db dummyd_20a6c; // 1d6a:33cc
db dummyd_20a6d; // 1d6a:33cd
db dummyd_20a6e; // 1d6a:33ce
db dummyd_20a6f; // 1d6a:33cf
db dummyd_20a70; // 1d6a:33d0
db dummyd_20a71; // 1d6a:33d1
db dummyd_20a72; // 1d6a:33d2
db dummyd_20a73; // 1d6a:33d3
db dummyd_20a74; // 1d6a:33d4
db dummyd_20a75; // 1d6a:33d5
db dummyd_20a76; // 1d6a:33d6
db dummyd_20a77; // 1d6a:33d7
db dummyd_20a78; // 1d6a:33d8
db dummyd_20a79; // 1d6a:33d9
db dummyd_20a7a; // 1d6a:33da
db dummyd_20a7b; // 1d6a:33db
dw word_2f05c; // 1d6a:33dc
db dummyd_20a7e[32]; // 1d6a:33de
db dummyd_20a9e[32]; // 1d6a:33fe
db dummyd_20abe[32]; // 1d6a:341e
db dummyd_20ade;
db dummyd_20adf;
db dummyd_20ae0;
db dummyd_20ae1;
db dummyd_20ae2;
db dummyd_20ae3;
db dummyd_20ae4;
db dummyd_20ae5;
db dummyd_20ae6; // 1d6a:3446
db dummyd_20ae7; // 1d6a:3447
db dummyd_20ae8; // 1d6a:3448
db dummyd_20ae9; // 1d6a:3449
db dummyd_20aea;
db dummyd_20aeb; // 1d6a:344b
db dummyd_20aec; // 1d6a:344c
db dummyd_20aed; // 1d6a:344d
db dummyd_20aee; // 1d6a:344e
db byte_2f0cf; // 1d6a:344f
db byte_2f0d0; // 1d6a:3450
db dummyd_20af1; // 1d6a:3451
db dummyd_20af2; // 1d6a:3452
db dummyd_20af3; // 1d6a:3453
db dummyd_20af4; // 1d6a:3454
db dummyd_20af5; // 1d6a:3455
db dummyd_20af6; // 1d6a:3456
db dummyd_20af7; // 1d6a:3457
db dummyd_20af8; // 1d6a:3458
db dummyd_20af9;
db dummyd_20afa; // 1d6a:345a
db dummyd_20afb;
db dummyd_20afc;
db dummyd_20afd;
db dummyd_20afe;
db dummyd_20aff;
db dummyd_20b00;
db dummyd_20b01; // 1d6a:3461
db dummyd_20b02; // 1d6a:3462
db dummyd_20b03; // 1d6a:3463
db dummyd_20b04; // 1d6a:3464
db dummyd_20b05;
db dummyd_20b06; // 1d6a:3466
db dummyd_20b07; // 1d6a:3467
db dummyd_20b08; // 1d6a:3468
db dummyd_20b09; // 1d6a:3469
db byte_2f0ea; // 1d6a:346a
db byte_2f0eb; // 1d6a:346b
db dummyd_20b0c[32]; // 1d6a:346c
db dummyd_20b2c[32]; // 1d6a:348c
db dummyd_20b4c[32]; // 1d6a:34ac
db dummyd_20b6c; // 1d6a:34cc
db dummyd_20b6d; // 1d6a:34cd
db dummyd_20b6e; // 1d6a:34ce
db dummyd_20b6f; // 1d6a:34cf
db dummyd_20b70; // 1d6a:34d0
db dummyd_20b71;
db dummyd_20b72;
db dummyd_20b73;
db dummyd_20b74;
db dummyd_20b75;
db dummyd_20b76;
db dummyd_20b77;
db dummyd_20b78;
db dummyd_20b79;
db dummyd_20b7a;
db dummyd_20b7b;
db dummyd_20b7c;
db dummyd_20b7d;
db dummyd_20b7e;
db dummyd_20b7f;
db dummyd_20b80[8];
dw word_2f168; // 20b8:0008
dw word_2f16a; // 20b8:000a
db byte_2f16c; // 20b8:000c
dw word_2f16d; // 20b8:000d
dw seg_2f16f; // 20b8:000f
db dummyd_20b91; // 20b8:0011
db dummyd_20b92;
db dummyd_20b93;
db byte_2f174; // 20b8:0014
db dummyd_20b95[32]; // 20b8:0015
db dummyd_20bb5; // 20b8:0035
db dummyd_20bb6; // 20b8:0036
db dummyd_20bb7; // 20b8:0037
db dummyd_20bb8; // 20b8:0038
db dummyd_20bb9[627];
dw dummyd_20e2c; // 20b8:02ac
dw dummyd_20e2e; // 20b8:02ae
dw dummyd_20e30; // 20b8:02b0
dw dummyd_20e32; // 20b8:02b2
dw dummyd_20e34; // 20b8:02b4
dw dummyd_20e36; // 20b8:02b6
dw dummyd_20e38; // 20b8:02b8
dw dummyd_20e3a; // 20b8:02ba
dw dummyd_20e3c; // 20b8:02bc
dw dummyd_20e3e; // 20b8:02be
dw dummyd_20e40; // 20b8:02c0
db dummyd_20e42[474];
db dummyd_2101c;
db dummyd_2101d;
db dummyd_2101e;
db dummyd_2101f;
db dummyd_21020;
db dummyd_21021;
db dummyd_21022; // 20b8:04a2
db dummyd_21023;
db dummyd_21024; // 20b8:04a4
db dummyd_21025;
db dummyd_21026;
db dummyd_21027;
db dummyd_21028;
db dummyd_21029;
db dummyd_2102a;
db dummyd_2102b;
db dummyd_2102c;
db dummyd_2102d;
db dummyd_2102e;
db dummyd_2102f;
db dummyd_21030[4]; // 20b8:04b0
db dummyd_21034[32]; // 20b8:04b4
db dummyd_21054[32]; // 20b8:04d4
db dummyd_21074[32]; // 20b8:04f4
db dummyd_21094;
db dummyd_21095;
db dummyd_21096;
db dummyd_21097;
db dummyd_21098;
db dummyd_21099;
db dummyd_2109a;
db dummyd_2109b;
db dummyd_2109c;
db dummyd_2109d;
db dummyd_2109e;
db dummyd_2109f; // 20b8:051f
db dummyd_210a0; // 20b8:0520
db dummyd_210a1; // 20b8:0521
db dummyd_210a2; // 20b8:0522
db dummyd_210a3;
db dummyd_210a4;
db dummyd_210a5;
db dummyd_210a6;
db dummyd_210a7;
db dummyd_210a8;
db dummyd_210a9;
db dummyd_210aa;
db dummyd_210ab;
db dummyd_210ac;
db dummyd_210ad;
db dummyd_210ae;
db dummyd_210af;
db dummyd_210b0;
db dummyd_210b1;
db dummyd_210b2;
db dummyd_210b3[1];
db dummyd_210b4[5]; // 20b8:0534
db dummyd_210b9;
db dummyd_210ba;
db dummyd_210bb[1];
db dummyd_210bc;
db dummyd_210bd[10]; // 20b8:053d
db dummyd_210c7;
db dummyd_210c8[5]; // 20b8:0548
db dummyd_210cd;
db dummyd_210ce;
db dummyd_210cf;
db dummyd_210d0;
db dummyd_210d1;
db dummyd_210d2[7]; // 20b8:0552
db dummyd_210d9[32]; // 20b8:0559
db dummyd_210f9[32]; // 20b8:0579
db dummyd_21119[32]; // 20b8:0599
db dummyd_21139[32]; // 20b8:05b9
db dummyd_21159;
db dummyd_2115a[2]; // 20b8:05da
db dummyd_2115c[32]; // 20b8:05dc
db dummyd_2117c[32]; // 20b8:05fc
db dummyd_2119c[32]; // 20b8:061c
db dummyd_211bc[32]; // 20b8:063c
db dummyd_211dc[32]; // 20b8:065c
db dummyd_211fc; // 20b8:067c
db dummyd_211fd; // 20b8:067d
db dummyd_211fe; // 20b8:067e
db dummyd_211ff; // 20b8:067f
db dummyd_21200; // 20b8:0680
db dummyd_21201; // 20b8:0681
db dummyd_21202; // 20b8:0682
db dummyd_21203; // 20b8:0683
db dummyd_21204; // 20b8:0684
db dummyd_21205; // 20b8:0685
db dummyd_21206; // 20b8:0686
db dummyd_21207; // 20b8:0687
db dummyd_21208; // 20b8:0688
db dummyd_21209; // 20b8:0689
db dummyd_2120a; // 20b8:068a
db dummyd_2120b; // 20b8:068b
db dummyd_2120c; // 20b8:068c
db dummyd_2120d; // 20b8:068d
db dummyd_2120e; // 20b8:068e
db dummyd_2120f; // 20b8:068f
db dummyd_21210; // 20b8:0690
db dummyd_21211; // 20b8:0691
db dummyd_21212; // 20b8:0692
db dummyd_21213; // 20b8:0693
db dummyd_21214; // 20b8:0694
db dummyd_21215; // 20b8:0695
db dummyd_21216; // 20b8:0696
db dummyd_21217; // 20b8:0697
db dummyd_21218; // 20b8:0698
db dummyd_21219; // 20b8:0699
db dummyd_2121a; // 20b8:069a
db dummyd_2121b[1];
db dummyd_2121c[32]; // 20b8:069c
db dummyd_2123c[32]; // 20b8:06bc
db dummyd_2125c[32]; // 20b8:06dc
db dummyd_2127c[32]; // 20b8:06fc
db dummyd_2129c[32]; // 20b8:071c
db dummyd_212bc; // 20b8:073c
db dummyd_212bd; // 20b8:073d
db dummyd_212be; // 20b8:073e
db dummyd_212bf; // 20b8:073f
db dummyd_212c0; // 20b8:0740
db dummyd_212c1; // 20b8:0741
db dummyd_212c2; // 20b8:0742
db dummyd_212c3; // 20b8:0743
db dummyd_212c4; // 20b8:0744
db dummyd_212c5; // 20b8:0745
db dummyd_212c6; // 20b8:0746
db dummyd_212c7; // 20b8:0747
db dummyd_212c8; // 20b8:0748
db dummyd_212c9; // 20b8:0749
db dummyd_212ca; // 20b8:074a
db dummyd_212cb; // 20b8:074b
db dummyd_212cc; // 20b8:074c
db dummyd_212cd; // 20b8:074d
db dummyd_212ce; // 20b8:074e
db dummyd_212cf; // 20b8:074f
db dummyd_212d0; // 20b8:0750
db dummyd_212d1; // 20b8:0751
db dummyd_212d2; // 20b8:0752
db dummyd_212d3; // 20b8:0753
db dummyd_212d4; // 20b8:0754
db dummyd_212d5; // 20b8:0755
db dummyd_212d6; // 20b8:0756
db dummyd_212d7; // 20b8:0757
db dummyd_212d8; // 20b8:0758
db dummyd_212d9; // 20b8:0759
db dummyd_212da; // 20b8:075a
db dummyd_212db[2]; // 20b8:075b
db dummyd_212dd[32]; // 20b8:075d
db dummyd_212fd[32]; // 20b8:077d
db dummyd_2131d[32]; // 20b8:079d
db dummyd_2133d[32]; // 20b8:07bd
db dummyd_2135d[32]; // 20b8:07dd
db dummyd_2137d[32]; // 20b8:07fd
db dummyd_2139d[32]; // 20b8:081d
db dummyd_213bd[32]; // 20b8:083d
db dummyd_213dd[32]; // 20b8:085d
db dummyd_213fd[32]; // 20b8:087d
db dummyd_2141d; // 20b8:089d
db dummyd_2141e; // 20b8:089e
db dummyd_2141f; // 20b8:089f
db dummyd_21420; // 20b8:08a0
db dummyd_21421; // 20b8:08a1
db dummyd_21422; // 20b8:08a2
db dummyd_21423; // 20b8:08a3
db dummyd_21424; // 20b8:08a4
db dummyd_21425; // 20b8:08a5
db dummyd_21426; // 20b8:08a6
db dummyd_21427; // 20b8:08a7
db dummyd_21428;
db dummyd_21429;
db dummyd_2142a;
db dummyd_2142b;
db dummyd_2142c; // 20b8:08ac
db dummyd_2142d; // 20b8:08ad
db dummyd_2142e; // 20b8:08ae
db dummyd_2142f; // 20b8:08af
db dummyd_21430; // 20b8:08b0
db dummyd_21431; // 20b8:08b1
db dummyd_21432; // 20b8:08b2
db dummyd_21433; // 20b8:08b3
db dummyd_21434; // 20b8:08b4
db dummyd_21435; // 20b8:08b5
db dummyd_21436; // 20b8:08b6
db dummyd_21437; // 20b8:08b7
db dummyd_21438;
db dummyd_21439;
db dummyd_2143a;
db dummyd_2143b;
db dummyd_2143c[3];
db dummyd_2143f[10]; // 20b8:08bf
db dummyd_21449[32]; // 20b8:08c9
db dummyd_21469[32]; // 20b8:08e9
db dummyd_21489[32]; // 20b8:0909
db dummyd_214a9[32]; // 20b8:0929
db dummyd_214c9[32]; // 20b8:0949
db dummyd_214e9;
db dummyd_214ea;
db dummyd_214eb;
db dummyd_214ec; // 20b8:096c
db dummyd_214ed; // 20b8:096d
db dummyd_214ee; // 20b8:096e
db dummyd_214ef; // 20b8:096f
db dummyd_214f0; // 20b8:0970
db dummyd_214f1; // 20b8:0971
db dummyd_214f2;
db dummyd_214f3;
db dummyd_214f4;
db dummyd_214f5; // 20b8:0975
db dummyd_214f6; // 20b8:0976
db dummyd_214f7; // 20b8:0977
db dummyd_214f8;
db dummyd_214f9;
db dummyd_214fa;
db dummyd_214fb;
db dummyd_214fc[11]; // 20b8:097c
db dummyd_21507[2]; // 20b8:0987
db dummyd_21509;
db dummyd_2150a;
db dummyd_2150b;
db dummyd_2150c[12]; // 20b8:098c
db dummyd_21518[32]; // 20b8:0998
db dummyd_21538[32]; // 20b8:09b8
db dummyd_21558[32]; // 20b8:09d8
db dummyd_21578;
db dummyd_21579;
db dummyd_2157a;
db dummyd_2157b;
db dummyd_2157c; // 20b8:09fc
db dummyd_2157d; // 20b8:09fd
db dummyd_2157e; // 20b8:09fe
db dummyd_2157f; // 20b8:09ff
db dummyd_21580; // 20b8:0a00
db dummyd_21581; // 20b8:0a01
db dummyd_21582;
db dummyd_21583; // 20b8:0a03
db dummyd_21584;
db dummyd_21585; // 20b8:0a05
db dummyd_21586; // 20b8:0a06
db dummyd_21587; // 20b8:0a07
db dummyd_21588;
db dummyd_21589;
db dummyd_2158a;
db dummyd_2158b;
db dummyd_2158c[1];
db dummyd_2158d[32]; // 20b8:0a0d
db dummyd_215ad[32]; // 20b8:0a2d
db dummyd_215cd[32]; // 20b8:0a4d
db dummyd_215ed[32]; // 20b8:0a6d
db dummyd_2160d[32]; // 20b8:0a8d
db dummyd_2162d[32]; // 20b8:0aad
db dummyd_2164d; // 20b8:0acd
db dummyd_2164e; // 20b8:0ace
db dummyd_2164f; // 20b8:0acf
db dummyd_21650; // 20b8:0ad0
db dummyd_21651; // 20b8:0ad1
db dummyd_21652;
db dummyd_21653;
db dummyd_21654;
db dummyd_21655;
db dummyd_21656; // 20b8:0ad6
db dummyd_21657; // 20b8:0ad7
db dummyd_21658;
db dummyd_21659;
db dummyd_2165a;
db dummyd_2165b;
db dummyd_2165c[1];
db dummyd_2165d[32]; // 20b8:0add
db dummyd_2167d[32]; // 20b8:0afd
db dummyd_2169d; // 20b8:0b1d
db dummyd_2169e; // 20b8:0b1e
db dummyd_2169f; // 20b8:0b1f
db dummyd_216a0; // 20b8:0b20
db dummyd_216a1; // 20b8:0b21
db dummyd_216a2; // 20b8:0b22
db dummyd_216a3; // 20b8:0b23
db dummyd_216a4;
db dummyd_216a5; // 20b8:0b25
db dummyd_216a6; // 20b8:0b26
db dummyd_216a7; // 20b8:0b27
db dummyd_216a8;
db dummyd_216a9;
db dummyd_216aa;
db dummyd_216ab;
db dummyd_216ac[11]; // 20b8:0b2c
db dummyd_216b7[2]; // 20b8:0b37
db dummyd_216b9[32]; // 20b8:0b39
db dummyd_216d9[32]; // 20b8:0b59
db dummyd_216f9[32]; // 20b8:0b79
db dummyd_21719;
db dummyd_2171a;
db dummyd_2171b;
db byte_2fcfc; // 20b8:0b9c
db dummyd_2171d[32]; // 20b8:0b9d
db dummyd_2173d[32]; // 20b8:0bbd
db dummyd_2175d[32]; // 20b8:0bdd
db dummyd_2177d[32]; // 20b8:0bfd
db dummyd_2179d[32]; // 20b8:0c1d
db dummyd_217bd[32]; // 20b8:0c3d
db dummyd_217dd[32]; // 20b8:0c5d
db dummyd_217fd[32]; // 20b8:0c7d
db dummyd_2181d[32]; // 20b8:0c9d
db dummyd_2183d[32]; // 20b8:0cbd
db dummyd_2185d[32]; // 20b8:0cdd
db dummyd_2187d[32]; // 20b8:0cfd
db dummyd_2189d[32]; // 20b8:0d1d
db dummyd_218bd[32]; // 20b8:0d3d
db dummyd_218dd[32]; // 20b8:0d5d
db dummyd_218fd[32]; // 20b8:0d7d
db dummyd_2191d[32]; // 20b8:0d9d
db dummyd_2193d[32]; // 20b8:0dbd
db dummyd_2195d[32]; // 20b8:0ddd
db dummyd_2197d[32]; // 20b8:0dfd
db dummyd_2199d[32]; // 20b8:0e1d
db dummyd_219bd[32]; // 20b8:0e3d
db dummyd_219dd[32]; // 20b8:0e5d
db dummyd_219fd[32]; // 20b8:0e7d
db dummyd_21a1d[32]; // 20b8:0e9d
db dummyd_21a3d[32]; // 20b8:0ebd
db dummyd_21a5d[32]; // 20b8:0edd
db dummyd_21a7d[32]; // 20b8:0efd
db dummyd_21a9d[32]; // 20b8:0f1d
db dummyd_21abd[32]; // 20b8:0f3d
db dummyd_21add[32]; // 20b8:0f5d
db dummyd_21afd[32]; // 20b8:0f7d
db dummyd_21b1d[32]; // 20b8:0f9d
db dummyd_21b3d[32]; // 20b8:0fbd
db dummyd_21b5d[32]; // 20b8:0fdd
db dummyd_21b7d[32]; // 20b8:0ffd
db dummyd_21b9d[32]; // 20b8:101d
db dummyd_21bbd[32]; // 20b8:103d
db dummyd_21bdd[32]; // 20b8:105d
db dummyd_21bfd[32]; // 20b8:107d
db dummyd_21c1d[32]; // 20b8:109d
db dummyd_21c3d[32]; // 20b8:10bd
db dummyd_21c5d[32]; // 20b8:10dd
db dummyd_21c7d[32]; // 20b8:10fd
db dummyd_21c9d[32]; // 20b8:111d
db dummyd_21cbd[32]; // 20b8:113d
db dummyd_21cdd[32]; // 20b8:115d
db dummyd_21cfd[32]; // 20b8:117d
db dummyd_21d1d[32]; // 20b8:119d
db dummyd_21d3d[4]; // 20b8:11bd
db dummyd_21d41[32]; // 20b8:11c1
db dummyd_21d61[32]; // 20b8:11e1
db dummyd_21d81[32]; // 20b8:1201
db dummyd_21da1[32]; // 20b8:1221
db dummyd_21dc1[32]; // 20b8:1241
db dummyd_21de1[32]; // 20b8:1261
db dummyd_21e01; // 20b8:1281
db dummyd_21e02;
db dummyd_21e03;
db dummyd_21e04; // 20b8:1284
db dummyd_21e05;
db dummyd_21e06; // 20b8:1286
db dummyd_21e07;
db dummyd_21e08; // 20b8:1288
db dummyd_21e09; // 20b8:1289
db dummyd_21e0a;
db dummyd_21e0b; // 20b8:128b
db dummyd_21e0c; // 20b8:128c
db dummyd_21e0d; // 20b8:128d
db dummyd_21e0e[8]; // 20b8:128e
db dummyd_21e16[32]; // 20b8:1296
db dummyd_21e36; // 20b8:12b6
db dummyd_21e37; // 20b8:12b7
db dummyd_21e38; // 20b8:12b8
db dummyd_21e39; // 20b8:12b9
db dummyd_21e3a; // 20b8:12ba
db dummyd_21e3b; // 20b8:12bb
db dummyd_21e3c; // 20b8:12bc
db dummyd_21e3d[6];
db dummyd_21e43[32]; // 20b8:12c3
db dummyd_21e63[32]; // 20b8:12e3
db dummyd_21e83[32]; // 20b8:1303
db dummyd_21ea3[32]; // 20b8:1323
db dummyd_21ec3[32]; // 20b8:1343
db dummyd_21ee3[32]; // 20b8:1363
db dummyd_21f03[32]; // 20b8:1383
db dummyd_21f23[32]; // 20b8:13a3
db dummyd_21f43[32]; // 20b8:13c3
db dummyd_21f63[32]; // 20b8:13e3
db dummyd_21f83; // 20b8:1403
db dummyd_21f84; // 20b8:1404
db dummyd_21f85; // 20b8:1405
db dummyd_21f86; // 20b8:1406
db dummyd_21f87; // 20b8:1407
db dummyd_21f88; // 20b8:1408
db dummyd_21f89; // 20b8:1409
db dummyd_21f8a; // 20b8:140a
db dummyd_21f8b; // 20b8:140b
db dummyd_21f8c; // 20b8:140c
db dummyd_21f8d; // 20b8:140d
db dummyd_21f8e; // 20b8:140e
db dummyd_21f8f;
db dummyd_21f90; // 20b8:1410
db dummyd_21f91; // 20b8:1411
db dummyd_21f92; // 20b8:1412
db dummyd_21f93;
db dummyd_21f94; // 20b8:1414
db dummyd_21f95; // 20b8:1415
db dummyd_21f96; // 20b8:1416
db dummyd_21f97; // 20b8:1417
db dummyd_21f98; // 20b8:1418
db dummyd_21f99; // 20b8:1419
db dummyd_21f9a; // 20b8:141a
db dummyd_21f9b[6]; // 20b8:141b
db dummyd_21fa1[32]; // 20b8:1421
db dummyd_21fc1; // 20b8:1441
db dummyd_21fc2[4];
db dummyd_21fc6[32]; // 20b8:1446
db dummyd_21fe6[32]; // 20b8:1466
db dummyd_22006[32]; // 20b8:1486
db dummyd_22026[32]; // 20b8:14a6
db dummyd_22046[32]; // 20b8:14c6
db dummyd_22066[32]; // 20b8:14e6
db dummyd_22086[32]; // 20b8:1506
db dummyd_220a6[32]; // 20b8:1526
db dummyd_220c6[32]; // 20b8:1546
db dummyd_220e6[32]; // 20b8:1566
db dummyd_22106[32]; // 20b8:1586
db dummyd_22126[32]; // 20b8:15a6
db dummyd_22146[32]; // 20b8:15c6
db dummyd_22166[32]; // 20b8:15e6
db dummyd_22186[32]; // 20b8:1606
db dummyd_221a6[32]; // 20b8:1626
db dummyd_221c6[32]; // 20b8:1646
db dummyd_221e6[32]; // 20b8:1666
db dummyd_22206[32]; // 20b8:1686
db dummyd_22226[32]; // 20b8:16a6
db dummyd_22246[32]; // 20b8:16c6
db dummyd_22266[32]; // 20b8:16e6
db dummyd_22286[32]; // 20b8:1706
db dummyd_222a6[32]; // 20b8:1726
db dummyd_222c6[32]; // 20b8:1746
db dummyd_222e6[32]; // 20b8:1766
db dummyd_22306[32]; // 20b8:1786
db dummyd_22326[32]; // 20b8:17a6
db dummyd_22346[32]; // 20b8:17c6
db dummyd_22366[32]; // 20b8:17e6
db dummyd_22386[32]; // 20b8:1806
db dummyd_223a6[32]; // 20b8:1826
db dummyd_223c6[32]; // 20b8:1846
db dummyd_223e6[32]; // 20b8:1866
db dummyd_22406[32]; // 20b8:1886
db dummyd_22426[32]; // 20b8:18a6
db dummyd_22446[32]; // 20b8:18c6
db dummyd_22466[32]; // 20b8:18e6
db dummyd_22486[32]; // 20b8:1906
db dummyd_224a6[32]; // 20b8:1926
db dummyd_224c6[32]; // 20b8:1946
db dummyd_224e6[32]; // 20b8:1966
db dummyd_22506[32]; // 20b8:1986
db dummyd_22526[32]; // 20b8:19a6
db dummyd_22546[32]; // 20b8:19c6
db dummyd_22566[32]; // 20b8:19e6
db dummyd_22586[32]; // 20b8:1a06
db dummyd_225a6[32]; // 20b8:1a26
db dummyd_225c6[32]; // 20b8:1a46
db dummyd_225e6[32]; // 20b8:1a66
db dummyd_22606[32]; // 20b8:1a86
db dummyd_22626[32]; // 20b8:1aa6
db dummyd_22646[32]; // 20b8:1ac6
db dummyd_22666[32]; // 20b8:1ae6
db dummyd_22686[32]; // 20b8:1b06
db dummyd_226a6[32]; // 20b8:1b26
db dummyd_226c6[32]; // 20b8:1b46
db dummyd_226e6[32]; // 20b8:1b66
db dummyd_22706[32]; // 20b8:1b86
db dummyd_22726[32]; // 20b8:1ba6
db dummyd_22746[32]; // 20b8:1bc6
db dummyd_22766[32]; // 20b8:1be6
db dummyd_22786[32]; // 20b8:1c06
db dummyd_227a6[32]; // 20b8:1c26
db dummyd_227c6[32]; // 20b8:1c46
db dummyd_227e6[32]; // 20b8:1c66
db dummyd_22806[32]; // 20b8:1c86
db dummyd_22826[32]; // 20b8:1ca6
db dummyd_22846[32]; // 20b8:1cc6
db dummyd_22866[32]; // 20b8:1ce6
db dummyd_22886[32]; // 20b8:1d06
db dummyd_228a6[32]; // 20b8:1d26
db dummyd_228c6[32]; // 20b8:1d46
db dummyd_228e6[32]; // 20b8:1d66
db dummyd_22906[32]; // 20b8:1d86
db dummyd_22926[32]; // 20b8:1da6
db dummyd_22946[32]; // 20b8:1dc6
db dummyd_22966[32]; // 20b8:1de6
db dummyd_22986[32]; // 20b8:1e06
db dummyd_229a6[32]; // 20b8:1e26
db dummyd_229c6[32]; // 20b8:1e46
db dummyd_229e6[32]; // 20b8:1e66
db dummyd_22a06[32]; // 20b8:1e86
db dummyd_22a26[32]; // 20b8:1ea6
db dummyd_22a46[32]; // 20b8:1ec6
db dummyd_22a66[32]; // 20b8:1ee6
db dummyd_22a86[32]; // 20b8:1f06
db dummyd_22aa6[32]; // 20b8:1f26
db dummyd_22ac6[32]; // 20b8:1f46
db dummyd_22ae6[32]; // 20b8:1f66
db dummyd_22b06[32]; // 20b8:1f86
db dummyd_22b26[32]; // 20b8:1fa6
db dummyd_22b46;
db dummyd_22b47;
db dummyd_22b48;
db dummyd_22b49;
db dummyd_22b4a;
db dummyd_22b4b;
db dummyd_22b4c;
db dummyd_22b4d;
db dummyd_22b4e;
db dummyd_22b4f;
db dummyd_22b50[32]; // 22b5:0000
db dummyd_22b70[32]; // 22b5:0020
db dummyd_22b90[32]; // 22b5:0040
db dummyd_22bb0[32]; // 22b5:0060
db dummyd_22bd0[32]; // 22b5:0080
db dummyd_22bf0[32]; // 22b5:00a0
db dummyd_22c10[32]; // 22b5:00c0
db dummyd_22c30[32]; // 22b5:00e0
db dummyd_22c50[32]; // 22b5:0100
db dummyd_22c70[32]; // 22b5:0120
db dummyd_22c90[32]; // 22b5:0140
db dummyd_22cb0[32]; // 22b5:0160
db dummyd_22cd0[32]; // 22b5:0180
db dummyd_22cf0[32]; // 22b5:01a0
db dummyd_22d10[32]; // 22b5:01c0
db dummyd_22d30[32]; // 22b5:01e0
db dummyd_22d50[32]; // 22b5:0200
db dummyd_22d70[32]; // 22b5:0220
db dummyd_22d90[32]; // 22b5:0240
db dummyd_22db0[32]; // 22b5:0260
db dummyd_22dd0[32]; // 22b5:0280
db dummyd_22df0[32]; // 22b5:02a0
db dummyd_22e10[32]; // 22b5:02c0
db dummyd_22e30[32]; // 22b5:02e0
db dummyd_22e50[32]; // 22b5:0300
db dummyd_22e70[32]; // 22b5:0320
db dummyd_22e90[32]; // 22b5:0340
db dummyd_22eb0[32]; // 22b5:0360
db dummyd_22ed0[32]; // 22b5:0380
db dummyd_22ef0[32]; // 22b5:03a0
db dummyd_22f10[32]; // 22b5:03c0
db dummyd_22f30[32]; // 22b5:03e0
db dummyd_22f50[32]; // 22b5:0400
db dummyd_22f70[32]; // 22b5:0420
db dummyd_22f90[32]; // 22b5:0440
db dummyd_22fb0[32]; // 22b5:0460
db dummyd_22fd0[32]; // 22b5:0480
db dummyd_22ff0[32]; // 22b5:04a0
db dummyd_23010[32]; // 22b5:04c0
db dummyd_23030[32]; // 22b5:04e0
db dummyd_23050[32]; // 22b5:0500
db dummyd_23070[32]; // 22b5:0520
db dummyd_23090[32]; // 22b5:0540
db dummyd_230b0[32]; // 22b5:0560
db dummyd_230d0[32]; // 22b5:0580
db dummyd_230f0[32]; // 22b5:05a0
db dummyd_23110[32]; // 22b5:05c0
db dummyd_23130[32]; // 22b5:05e0
db dummyd_23150[32]; // 22b5:0600
db dummyd_23170[32]; // 22b5:0620
db dummyd_23190[32]; // 22b5:0640
db dummyd_231b0[32]; // 22b5:0660
db dummyd_231d0[32]; // 22b5:0680
db dummyd_231f0[32]; // 22b5:06a0
db dummyd_23210[32]; // 22b5:06c0
db dummyd_23230[32]; // 22b5:06e0
db dummyd_23250[32]; // 22b5:0700
db dummyd_23270[32]; // 22b5:0720
db dummyd_23290[32]; // 22b5:0740
db dummyd_232b0[32]; // 22b5:0760
db dummyd_232d0[32]; // 22b5:0780
db dummyd_232f0[32]; // 22b5:07a0
db dummyd_23310[32]; // 22b5:07c0
db dummyd_23330[32]; // 22b5:07e0
db dummyd_23350[32]; // 22b5:0800
db dummyd_23370[32]; // 22b5:0820
db dummyd_23390[32]; // 22b5:0840
db dummyd_233b0[32]; // 22b5:0860
db dummyd_233d0[32]; // 22b5:0880
db dummyd_233f0[32]; // 22b5:08a0
db dummyd_23410[32]; // 22b5:08c0
db dummyd_23430[32]; // 22b5:08e0
db dummyd_23450[32]; // 22b5:0900
db dummyd_23470[32]; // 22b5:0920
db dummyd_23490[32]; // 22b5:0940
db dummyd_234b0[32]; // 22b5:0960
db dummyd_234d0[32]; // 22b5:0980
db dummyd_234f0[32]; // 22b5:09a0
db dummyd_23510[32]; // 22b5:09c0
db dummyd_23530[32]; // 22b5:09e0
db dummyd_23550[32]; // 22b5:0a00
db dummyd_23570[32]; // 22b5:0a20
db dummyd_23590[32]; // 22b5:0a40
db dummyd_235b0[32]; // 22b5:0a60
db dummyd_235d0[32]; // 22b5:0a80
db dummyd_235f0[32]; // 22b5:0aa0
db dummyd_23610[32]; // 22b5:0ac0
db dummyd_23630[32]; // 22b5:0ae0
db dummyd_23650[32]; // 22b5:0b00
db dummyd_23670;
db dummyd_23671;
db dummyd_23672;
db dummyd_23673;
db dummyd_23674;
db dummyd_23675;
db dummyd_23676;
db dummyd_23677;
db dummyd_23678;
db dummyd_23679;
db dummyd_2367a;
db dummyd_2367b;
db dummyd_2367c;
db dummyd_2367d;
db dummyd_2367e;
db dummyd_2367f;
db dummyd_23680[32]; // 2368:0000
db dummyd_236a0[32]; // 2368:0020
db dummyd_236c0[32]; // 2368:0040
db dummyd_236e0[32]; // 2368:0060
db dummyd_23700[32]; // 2368:0080
db dummyd_23720[32]; // 2368:00a0
db dummyd_23740[32]; // 2368:00c0
db dummyd_23760[32]; // 2368:00e0
db dummyd_23780[32]; // 2368:0100
db dummyd_237a0[32]; // 2368:0120
db dummyd_237c0[32]; // 2368:0140
db dummyd_237e0[32]; // 2368:0160
db dummyd_23800[32]; // 2368:0180
db dummyd_23820[32]; // 2368:01a0
db dummyd_23840; // 2368:01c0
db dummyd_23841; // 2368:01c1
db dummyd_23842; // 2368:01c2
db dummyd_23843; // 2368:01c3
db dummyd_23844; // 2368:01c4
db dummyd_23845; // 2368:01c5
db dummyd_23846; // 2368:01c6
db dummyd_23847; // 2368:01c7
db dummyd_23848; // 2368:01c8
db dummyd_23849; // 2368:01c9
db dummyd_2384a; // 2368:01ca
db dummyd_2384b; // 2368:01cb
db dummyd_2384c; // 2368:01cc
db dummyd_2384d; // 2368:01cd
db dummyd_2384e; // 2368:01ce
db dummyd_2384f; // 2368:01cf
db dummyd_23850; // 2368:01d0
db dummyd_23851; // 2368:01d1
db dummyd_23852; // 2368:01d2
db dummyd_23853; // 2368:01d3
db dummyd_23854; // 2368:01d4
db dummyd_23855; // 2368:01d5
db dummyd_23856; // 2368:01d6
db dummyd_23857; // 2368:01d7
db dummyd_23858; // 2368:01d8
db dummyd_23859; // 2368:01d9
db dummyd_2385a; // 2368:01da
db dummyd_2385b; // 2368:01db
db dummyd_2385c[4];
db dummyd_23860[32]; // 2368:01e0
db dummyd_23880[32]; // 2368:0200
db dummyd_238a0; // 2368:0220
db dummyd_238a1; // 2368:0221
db dummyd_238a2; // 2368:0222
db dummyd_238a3; // 2368:0223
db dummyd_238a4; // 2368:0224
db dummyd_238a5; // 2368:0225
db dummyd_238a6; // 2368:0226
db dummyd_238a7; // 2368:0227
db dummyd_238a8; // 2368:0228
db dummyd_238a9; // 2368:0229
db dummyd_238aa; // 2368:022a
db dummyd_238ab; // 2368:022b
db dummyd_238ac; // 2368:022c
db dummyd_238ad; // 2368:022d
db dummyd_238ae; // 2368:022e
db dummyd_238af; // 2368:022f
db dummyd_238b0; // 2368:0230
db dummyd_238b1; // 2368:0231
db dummyd_238b2; // 2368:0232
db dummyd_238b3; // 2368:0233
db dummyd_238b4; // 2368:0234
db dummyd_238b5; // 2368:0235
db dummyd_238b6; // 2368:0236
db dummyd_238b7; // 2368:0237
db dummyd_238b8; // 2368:0238
db dummyd_238b9; // 2368:0239
dw dummyd_238ba; // 2368:023a
db dummyd_238bc[32]; // 2368:023c
db dummyd_238dc; // 2368:025c
db dummyd_238dd; // 2368:025d
db dummyd_238de; // 2368:025e
db dummyd_238df; // 2368:025f
db dummyd_238e0; // 2368:0260
db dummyd_238e1; // 2368:0261
db dummyd_238e2; // 2368:0262
db dummyd_238e3; // 2368:0263
db dummyd_238e4; // 2368:0264
db dummyd_238e5; // 2368:0265
dw dummyd_238e6; // 2368:0266
db dummyd_238e8[32]; // 2368:0268
db dummyd_23908[32]; // 2368:0288
db dummyd_23928[32]; // 2368:02a8
db dummyd_23948[32]; // 2368:02c8
db dummyd_23968[32]; // 2368:02e8
db dummyd_23988[32]; // 2368:0308
db dummyd_239a8[32]; // 2368:0328
db dummyd_239c8[32]; // 2368:0348
db dummyd_239e8[32]; // 2368:0368
db dummyd_23a08[32]; // 2368:0388
db dummyd_23a28; // 2368:03a8
db dummyd_23a29; // 2368:03a9
db dummyd_23a2a; // 2368:03aa
db dummyd_23a2b; // 2368:03ab
db dummyd_23a2c; // 2368:03ac
db dummyd_23a2d; // 2368:03ad
db dummyd_23a2e;
db dummyd_23a2f; // 2368:03af
db dummyd_23a30; // 2368:03b0
db dummyd_23a31; // 2368:03b1
db dummyd_23a32; // 2368:03b2
db dummyd_23a33; // 2368:03b3
db dummyd_23a34;
db dummyd_23a35; // 2368:03b5
db dummyd_23a36;
db dummyd_23a37;
db unk_32018; // 2368:03b8
db dummyd_23a39[32]; // 2368:03b9
db dummyd_23a59[32]; // 2368:03d9
db dummyd_23a79[32]; // 2368:03f9
db dummyd_23a99[32]; // 2368:0419
db dummyd_23ab9[32]; // 2368:0439
db dummyd_23ad9[32]; // 2368:0459
db dummyd_23af9[32]; // 2368:0479
db dummyd_23b19[32]; // 2368:0499
db dummyd_23b39[32]; // 2368:04b9
db dummyd_23b59[32]; // 2368:04d9
db dummyd_23b79[32]; // 2368:04f9
db dummyd_23b99[32]; // 2368:0519
db dummyd_23bb9[32]; // 2368:0539
db dummyd_23bd9[32]; // 2368:0559
db dummyd_23bf9[32]; // 2368:0579
db dummyd_23c19[32]; // 2368:0599
db dummyd_23c39[32]; // 2368:05b9
db dummyd_23c59[32]; // 2368:05d9
db dummyd_23c79[32]; // 2368:05f9
db dummyd_23c99[32]; // 2368:0619
db dummyd_23cb9[32]; // 2368:0639
db dummyd_23cd9[32]; // 2368:0659
db dummyd_23cf9[32]; // 2368:0679
db dummyd_23d19[32]; // 2368:0699
db dummyd_23d39[32]; // 2368:06b9
db dummyd_23d59[32]; // 2368:06d9
db dummyd_23d79; // 2368:06f9
db dummyd_23d7a; // 2368:06fa
db dummyd_23d7b; // 2368:06fb
db dummyd_23d7c; // 2368:06fc
db dummyd_23d7d; // 2368:06fd
db dummyd_23d7e;
db dummyd_23d7f;
dw dummyd_23d80; // 2368:0700
db dummyd_23d82[32]; // 2368:0702
db dummyd_23da2[32]; // 2368:0722
db dummyd_23dc2[32]; // 2368:0742
db dummyd_23de2[32]; // 2368:0762
db dummyd_23e02[32]; // 2368:0782
db dummyd_23e22[32]; // 2368:07a2
db dummyd_23e42[32]; // 2368:07c2
db dummyd_23e62[32]; // 2368:07e2
db dummyd_23e82[32]; // 2368:0802
db dummyd_23ea2[32]; // 2368:0822
db dummyd_23ec2[32]; // 2368:0842
db dummyd_23ee2[32]; // 2368:0862
db dummyd_23f02[32]; // 2368:0882
db dummyd_23f22[32]; // 2368:08a2
db dummyd_23f42[32]; // 2368:08c2
db dummyd_23f62[32]; // 2368:08e2
db dummyd_23f82[32]; // 2368:0902
db dummyd_23fa2[32]; // 2368:0922
db dummyd_23fc2[32]; // 2368:0942
db dummyd_23fe2[32]; // 2368:0962
db dummyd_24002[32]; // 2368:0982
db dummyd_24022[32]; // 2368:09a2
db dummyd_24042[32]; // 2368:09c2
db dummyd_24062[32]; // 2368:09e2
db dummyd_24082[32]; // 2368:0a02
db dummyd_240a2[32]; // 2368:0a22
db dummyd_240c2[32]; // 2368:0a42
db dummyd_240e2[32]; // 2368:0a62
db dummyd_24102[32]; // 2368:0a82
db dummyd_24122[32]; // 2368:0aa2
db dummyd_24142[32]; // 2368:0ac2
db dummyd_24162[32]; // 2368:0ae2
db dummyd_24182[32]; // 2368:0b02
db dummyd_241a2[32]; // 2368:0b22
db dummyd_241c2[32]; // 2368:0b42
db dummyd_241e2[32]; // 2368:0b62
db dummyd_24202[32]; // 2368:0b82
db dummyd_24222[32]; // 2368:0ba2
db dummyd_24242[32]; // 2368:0bc2
db dummyd_24262[32]; // 2368:0be2
db dummyd_24282[32]; // 2368:0c02
db dummyd_242a2[32]; // 2368:0c22
db dummyd_242c2[32]; // 2368:0c42
db dummyd_242e2[32]; // 2368:0c62
db dummyd_24302[32]; // 2368:0c82
db dummyd_24322[32]; // 2368:0ca2
db dummyd_24342[32]; // 2368:0cc2
db dummyd_24362[32]; // 2368:0ce2
db dummyd_24382[32]; // 2368:0d02
db dummyd_243a2[32]; // 2368:0d22
db dummyd_243c2[32]; // 2368:0d42
db dummyd_243e2[32]; // 2368:0d62
db dummyd_24402[32]; // 2368:0d82
db dummyd_24422[32]; // 2368:0da2
db dummyd_24442[32]; // 2368:0dc2
db dummyd_24462[32]; // 2368:0de2
db dummyd_24482[32]; // 2368:0e02
db dummyd_244a2[32]; // 2368:0e22
db dummyd_244c2[32]; // 2368:0e42
db dummyd_244e2[32]; // 2368:0e62
db dummyd_24502[32]; // 2368:0e82
db dummyd_24522[32]; // 2368:0ea2
db dummyd_24542[32]; // 2368:0ec2
db dummyd_24562[32]; // 2368:0ee2
db dummyd_24582[32]; // 2368:0f02
db dummyd_245a2[32]; // 2368:0f22
db dummyd_245c2[32]; // 2368:0f42
db dummyd_245e2[32]; // 2368:0f62
db dummyd_24602[32]; // 2368:0f82
db dummyd_24622[32]; // 2368:0fa2
db dummyd_24642[32]; // 2368:0fc2
db dummyd_24662[32]; // 2368:0fe2
db dummyd_24682[32]; // 2368:1002
db dummyd_246a2[32]; // 2368:1022
db dummyd_246c2[32]; // 2368:1042
db dummyd_246e2[32]; // 2368:1062
db dummyd_24702[32]; // 2368:1082
db dummyd_24722[32]; // 2368:10a2
db dummyd_24742[32]; // 2368:10c2
db dummyd_24762[32]; // 2368:10e2
db dummyd_24782[32]; // 2368:1102
db dummyd_247a2[32]; // 2368:1122
db dummyd_247c2[32]; // 2368:1142
db dummyd_247e2[32]; // 2368:1162
db dummyd_24802[32]; // 2368:1182
db dummyd_24822[32]; // 2368:11a2
db dummyd_24842[32]; // 2368:11c2
db dummyd_24862[32]; // 2368:11e2
db dummyd_24882[32]; // 2368:1202
db dummyd_248a2[32]; // 2368:1222
db dummyd_248c2[32]; // 2368:1242
db dummyd_248e2[32]; // 2368:1262
db dummyd_24902[32]; // 2368:1282
db dummyd_24922[32]; // 2368:12a2
db dummyd_24942[32]; // 2368:12c2
db dummyd_24962[32]; // 2368:12e2
db dummyd_24982[32]; // 2368:1302
db dummyd_249a2[32]; // 2368:1322
db dummyd_249c2[32]; // 2368:1342
db dummyd_249e2[32]; // 2368:1362
db dummyd_24a02[32]; // 2368:1382
db dummyd_24a22[32]; // 2368:13a2
db dummyd_24a42[32]; // 2368:13c2
db dummyd_24a62[32]; // 2368:13e2
db dummyd_24a82[32]; // 2368:1402
db dummyd_24aa2[32]; // 2368:1422
db dummyd_24ac2[32]; // 2368:1442
db dummyd_24ae2[32]; // 2368:1462
db dummyd_24b02[32]; // 2368:1482
db dummyd_24b22[32]; // 2368:14a2
db dummyd_24b42[32]; // 2368:14c2
db dummyd_24b62[32]; // 2368:14e2
db dummyd_24b82[32]; // 2368:1502
db dummyd_24ba2[32]; // 2368:1522
db dummyd_24bc2[32]; // 2368:1542
db dummyd_24be2[32]; // 2368:1562
db dummyd_24c02[32]; // 2368:1582
db dummyd_24c22[32]; // 2368:15a2
db dummyd_24c42[32]; // 2368:15c2
db dummyd_24c62[32]; // 2368:15e2
db dummyd_24c82[32]; // 2368:1602
db dummyd_24ca2[32]; // 2368:1622
db dummyd_24cc2[32]; // 2368:1642
db dummyd_24ce2[32]; // 2368:1662
db dummyd_24d02[32]; // 2368:1682
db dummyd_24d22[32]; // 2368:16a2
db dummyd_24d42[32]; // 2368:16c2
db dummyd_24d62[32]; // 2368:16e2
db dummyd_24d82[32]; // 2368:1702
db dummyd_24da2[32]; // 2368:1722
db dummyd_24dc2[32]; // 2368:1742
db dummyd_24de2[32]; // 2368:1762
db dummyd_24e02[32]; // 2368:1782
db dummyd_24e22[32]; // 2368:17a2
db dummyd_24e42[32]; // 2368:17c2
db dummyd_24e62[32]; // 2368:17e2
db dummyd_24e82[32]; // 2368:1802
db dummyd_24ea2[32]; // 2368:1822
db dummyd_24ec2[32]; // 2368:1842
db dummyd_24ee2[32]; // 2368:1862
db dummyd_24f02[32]; // 2368:1882
db dummyd_24f22[32]; // 2368:18a2
db dummyd_24f42[32]; // 2368:18c2
db dummyd_24f62[32]; // 2368:18e2
db dummyd_24f82[32]; // 2368:1902
db dummyd_24fa2[32]; // 2368:1922
db dummyd_24fc2[32]; // 2368:1942
db dummyd_24fe2[32]; // 2368:1962
db dummyd_25002[32]; // 2368:1982
db dummyd_25022[32]; // 2368:19a2
db dummyd_25042[32]; // 2368:19c2
db dummyd_25062[32]; // 2368:19e2
db dummyd_25082[32]; // 2368:1a02
db dummyd_250a2[32]; // 2368:1a22
db dummyd_250c2[32]; // 2368:1a42
db dummyd_250e2[32]; // 2368:1a62
db dummyd_25102[32]; // 2368:1a82
db dummyd_25122[32]; // 2368:1aa2
db dummyd_25142[32]; // 2368:1ac2
db dummyd_25162[32]; // 2368:1ae2
db dummyd_25182[32]; // 2368:1b02
db dummyd_251a2[32]; // 2368:1b22
db dummyd_251c2[32]; // 2368:1b42
db dummyd_251e2[32]; // 2368:1b62
db dummyd_25202[32]; // 2368:1b82
db dummyd_25222[32]; // 2368:1ba2
db dummyd_25242[32]; // 2368:1bc2
db dummyd_25262[32]; // 2368:1be2
db dummyd_25282[32]; // 2368:1c02
db dummyd_252a2[32]; // 2368:1c22
db dummyd_252c2[32]; // 2368:1c42
db dummyd_252e2[32]; // 2368:1c62
db dummyd_25302[32]; // 2368:1c82
db dummyd_25322[32]; // 2368:1ca2
db dummyd_25342[32]; // 2368:1cc2
db dummyd_25362[32]; // 2368:1ce2
db dummyd_25382[32]; // 2368:1d02
db dummyd_253a2[32]; // 2368:1d22
db dummyd_253c2[32]; // 2368:1d42
db dummyd_253e2[32]; // 2368:1d62
db dummyd_25402[32]; // 2368:1d82
db dummyd_25422[32]; // 2368:1da2
db dummyd_25442[32]; // 2368:1dc2
db dummyd_25462[32]; // 2368:1de2
db dummyd_25482[32]; // 2368:1e02
db dummyd_254a2[32]; // 2368:1e22
db dummyd_254c2[32]; // 2368:1e42
db dummyd_254e2[32]; // 2368:1e62
db dummyd_25502[32]; // 2368:1e82
db dummyd_25522[32]; // 2368:1ea2
db dummyd_25542[32]; // 2368:1ec2
db dummyd_25562[32]; // 2368:1ee2
db dummyd_25582[32]; // 2368:1f02
db dummyd_255a2[32]; // 2368:1f22
db dummyd_255c2[32]; // 2368:1f42
db dummyd_255e2[32]; // 2368:1f62
db dummyd_25602[32]; // 2368:1f82
db dummyd_25622[32]; // 2368:1fa2
db dummyd_25642[32]; // 2368:1fc2
db dummyd_25662[32]; // 2368:1fe2
db dummyd_25682[32]; // 2368:2002
db dummyd_256a2[32]; // 2368:2022
db dummyd_256c2[32]; // 2368:2042
db dummyd_256e2[32]; // 2368:2062
db dummyd_25702[32]; // 2368:2082
db dummyd_25722[32]; // 2368:20a2
db dummyd_25742[32]; // 2368:20c2
db dummyd_25762[32]; // 2368:20e2
db dummyd_25782[32]; // 2368:2102
db dummyd_257a2[32]; // 2368:2122
db dummyd_257c2[32]; // 2368:2142
db dummyd_257e2[32]; // 2368:2162
db dummyd_25802[32]; // 2368:2182
db dummyd_25822[32]; // 2368:21a2
db dummyd_25842[32]; // 2368:21c2
db dummyd_25862[32]; // 2368:21e2
db dummyd_25882[32]; // 2368:2202
db dummyd_258a2[32]; // 2368:2222
db dummyd_258c2[32]; // 2368:2242
db dummyd_258e2[32]; // 2368:2262
db dummyd_25902[32]; // 2368:2282
db dummyd_25922[32]; // 2368:22a2
db dummyd_25942[32]; // 2368:22c2
db dummyd_25962[32]; // 2368:22e2
db dummyd_25982[32]; // 2368:2302
db dummyd_259a2[32]; // 2368:2322
db dummyd_259c2[32]; // 2368:2342
db dummyd_259e2[32]; // 2368:2362
db dummyd_25a02[32]; // 2368:2382
db dummyd_25a22[32]; // 2368:23a2
db dummyd_25a42[32]; // 2368:23c2
db dummyd_25a62[32]; // 2368:23e2
db dummyd_25a82[32]; // 2368:2402
db dummyd_25aa2[32]; // 2368:2422
db dummyd_25ac2[32]; // 2368:2442
db dummyd_25ae2[32]; // 2368:2462
db dummyd_25b02[32]; // 2368:2482
db dummyd_25b22[32]; // 2368:24a2
db dummyd_25b42[32]; // 2368:24c2
db dummyd_25b62[32]; // 2368:24e2
db dummyd_25b82[32]; // 2368:2502
db dummyd_25ba2[32]; // 2368:2522
db dummyd_25bc2[32]; // 2368:2542
db dummyd_25be2[32]; // 2368:2562
db dummyd_25c02[32]; // 2368:2582
db dummyd_25c22[32]; // 2368:25a2
db dummyd_25c42[32]; // 2368:25c2
db dummyd_25c62[32]; // 2368:25e2
db dummyd_25c82[32]; // 2368:2602
db dummyd_25ca2[32]; // 2368:2622
db dummyd_25cc2[32]; // 2368:2642
db dummyd_25ce2[32]; // 2368:2662
db dummyd_25d02[32]; // 2368:2682
db dummyd_25d22[32]; // 2368:26a2
db dummyd_25d42[32]; // 2368:26c2
db dummyd_25d62[32]; // 2368:26e2
db dummyd_25d82[32]; // 2368:2702
db dummyd_25da2[32]; // 2368:2722
db dummyd_25dc2[32]; // 2368:2742
db dummyd_25de2[32]; // 2368:2762
db dummyd_25e02[32]; // 2368:2782
db dummyd_25e22[32]; // 2368:27a2
db dummyd_25e42[32]; // 2368:27c2
db dummyd_25e62[32]; // 2368:27e2
db dummyd_25e82[32]; // 2368:2802
db dummyd_25ea2[32]; // 2368:2822
db dummyd_25ec2[32]; // 2368:2842
db dummyd_25ee2[32]; // 2368:2862
db dummyd_25f02[32]; // 2368:2882
db dummyd_25f22[32]; // 2368:28a2
db dummyd_25f42[32]; // 2368:28c2
db dummyd_25f62[32]; // 2368:28e2
db dummyd_25f82[32]; // 2368:2902
db dummyd_25fa2[32]; // 2368:2922
db dummyd_25fc2[32]; // 2368:2942
db dummyd_25fe2[32]; // 2368:2962
db dummyd_26002[32]; // 2368:2982
db dummyd_26022[32]; // 2368:29a2
db dummyd_26042[32]; // 2368:29c2
db dummyd_26062[32]; // 2368:29e2
db dummyd_26082[32]; // 2368:2a02
db dummyd_260a2[32]; // 2368:2a22
db dummyd_260c2[32]; // 2368:2a42
db dummyd_260e2[32]; // 2368:2a62
db dummyd_26102[32]; // 2368:2a82
db dummyd_26122[32]; // 2368:2aa2
db dummyd_26142[32]; // 2368:2ac2
db dummyd_26162[32]; // 2368:2ae2
db dummyd_26182[32]; // 2368:2b02
db dummyd_261a2[32]; // 2368:2b22
db dummyd_261c2[32]; // 2368:2b42
db dummyd_261e2[32]; // 2368:2b62
db dummyd_26202[32]; // 2368:2b82
db dummyd_26222[32]; // 2368:2ba2
db dummyd_26242[32]; // 2368:2bc2
db dummyd_26262[32]; // 2368:2be2
db dummyd_26282[32]; // 2368:2c02
db dummyd_262a2[32]; // 2368:2c22
db dummyd_262c2[32]; // 2368:2c42
db dummyd_262e2[32]; // 2368:2c62
db dummyd_26302[32]; // 2368:2c82
db dummyd_26322[32]; // 2368:2ca2
db dummyd_26342[32]; // 2368:2cc2
db dummyd_26362[32]; // 2368:2ce2
db dummyd_26382[32]; // 2368:2d02
db dummyd_263a2[32]; // 2368:2d22
db dummyd_263c2[32]; // 2368:2d42
db dummyd_263e2[32]; // 2368:2d62
db dummyd_26402[32]; // 2368:2d82
db dummyd_26422[32]; // 2368:2da2
db dummyd_26442[32]; // 2368:2dc2
db dummyd_26462[32]; // 2368:2de2
db dummyd_26482[32]; // 2368:2e02
db dummyd_264a2[32]; // 2368:2e22
db dummyd_264c2[32]; // 2368:2e42
db dummyd_264e2[32]; // 2368:2e62
db dummyd_26502[32]; // 2368:2e82
db dummyd_26522[32]; // 2368:2ea2
db dummyd_26542[32]; // 2368:2ec2
db dummyd_26562[32]; // 2368:2ee2
db dummyd_26582[32]; // 2368:2f02
db dummyd_265a2[32]; // 2368:2f22
db dummyd_265c2[32]; // 2368:2f42
db dummyd_265e2[32]; // 2368:2f62
db dummyd_26602[32]; // 2368:2f82
db dummyd_26622[32]; // 2368:2fa2
db dummyd_26642[32]; // 2368:2fc2
db dummyd_26662[32]; // 2368:2fe2
db dummyd_26682[32]; // 2368:3002
db dummyd_266a2[32]; // 2368:3022
db dummyd_266c2[32]; // 2368:3042
db dummyd_266e2[32]; // 2368:3062
db dummyd_26702[32]; // 2368:3082
db dummyd_26722[32]; // 2368:30a2
db dummyd_26742[32]; // 2368:30c2
db dummyd_26762[32]; // 2368:30e2
db dummyd_26782[32]; // 2368:3102
db dummyd_267a2[32]; // 2368:3122
db dummyd_267c2[32]; // 2368:3142
db dummyd_267e2[32]; // 2368:3162
db dummyd_26802[32]; // 2368:3182
db dummyd_26822[32]; // 2368:31a2
db dummyd_26842[32]; // 2368:31c2
db dummyd_26862[32]; // 2368:31e2
db dummyd_26882[32]; // 2368:3202
db dummyd_268a2[32]; // 2368:3222
db dummyd_268c2[32]; // 2368:3242
db dummyd_268e2[32]; // 2368:3262
db dummyd_26902[32]; // 2368:3282
db dummyd_26922[32]; // 2368:32a2
db dummyd_26942[32]; // 2368:32c2
db dummyd_26962[32]; // 2368:32e2
db dummyd_26982[32]; // 2368:3302
db dummyd_269a2[32]; // 2368:3322
db dummyd_269c2[32]; // 2368:3342
db dummyd_269e2[32]; // 2368:3362
db dummyd_26a02[32]; // 2368:3382
db dummyd_26a22[32]; // 2368:33a2
db dummyd_26a42[32]; // 2368:33c2
db dummyd_26a62[32]; // 2368:33e2
db dummyd_26a82[32]; // 2368:3402
db dummyd_26aa2[32]; // 2368:3422
db dummyd_26ac2[32]; // 2368:3442
db dummyd_26ae2[32]; // 2368:3462
db dummyd_26b02[32]; // 2368:3482
db dummyd_26b22[32]; // 2368:34a2
db dummyd_26b42[32]; // 2368:34c2
db dummyd_26b62[32]; // 2368:34e2
db dummyd_26b82[32]; // 2368:3502
db dummyd_26ba2[32]; // 2368:3522
db dummyd_26bc2[32]; // 2368:3542
db dummyd_26be2[32]; // 2368:3562
db dummyd_26c02[32]; // 2368:3582
db dummyd_26c22[32]; // 2368:35a2
db dummyd_26c42[32]; // 2368:35c2
db dummyd_26c62[32]; // 2368:35e2
db dummyd_26c82[32]; // 2368:3602
db dummyd_26ca2[32]; // 2368:3622
db dummyd_26cc2[32]; // 2368:3642
db dummyd_26ce2[32]; // 2368:3662
db dummyd_26d02[32]; // 2368:3682
db dummyd_26d22[32]; // 2368:36a2
db dummyd_26d42[32]; // 2368:36c2
db dummyd_26d62[32]; // 2368:36e2
db dummyd_26d82[32]; // 2368:3702
db dummyd_26da2[32]; // 2368:3722
db dummyd_26dc2[32]; // 2368:3742
db dummyd_26de2[32]; // 2368:3762
db dummyd_26e02[32]; // 2368:3782
db dummyd_26e22[32]; // 2368:37a2
db dummyd_26e42[32]; // 2368:37c2
db dummyd_26e62[32]; // 2368:37e2
db dummyd_26e82[32]; // 2368:3802
db dummyd_26ea2[32]; // 2368:3822
db dummyd_26ec2[32]; // 2368:3842
db dummyd_26ee2[32]; // 2368:3862
db dummyd_26f02[32]; // 2368:3882
db dummyd_26f22[32]; // 2368:38a2
db dummyd_26f42[32]; // 2368:38c2
db dummyd_26f62[32]; // 2368:38e2
db dummyd_26f82[32]; // 2368:3902
db dummyd_26fa2[32]; // 2368:3922
db dummyd_26fc2[32]; // 2368:3942
db dummyd_26fe2[32]; // 2368:3962
db dummyd_27002[32]; // 2368:3982
db dummyd_27022[32]; // 2368:39a2
db dummyd_27042[32]; // 2368:39c2
db dummyd_27062[32]; // 2368:39e2
db dummyd_27082[32]; // 2368:3a02
db dummyd_270a2[32]; // 2368:3a22
db dummyd_270c2[32]; // 2368:3a42
db dummyd_270e2[32]; // 2368:3a62
db dummyd_27102[32]; // 2368:3a82
db dummyd_27122[32]; // 2368:3aa2
db dummyd_27142[32]; // 2368:3ac2
db dummyd_27162[32]; // 2368:3ae2
db dummyd_27182[32]; // 2368:3b02
db dummyd_271a2[32]; // 2368:3b22
db dummyd_271c2[32]; // 2368:3b42
db dummyd_271e2[32]; // 2368:3b62
db dummyd_27202[32]; // 2368:3b82
db dummyd_27222[32]; // 2368:3ba2
db dummyd_27242[32]; // 2368:3bc2
db dummyd_27262[32]; // 2368:3be2
db dummyd_27282[32]; // 2368:3c02
db dummyd_272a2[32]; // 2368:3c22
db dummyd_272c2[32]; // 2368:3c42
db dummyd_272e2[32]; // 2368:3c62
db dummyd_27302[32]; // 2368:3c82
db dummyd_27322[32]; // 2368:3ca2
db dummyd_27342[32]; // 2368:3cc2
db dummyd_27362[32]; // 2368:3ce2
db dummyd_27382[32]; // 2368:3d02
db dummyd_273a2[32]; // 2368:3d22
db dummyd_273c2[32]; // 2368:3d42
db dummyd_273e2[32]; // 2368:3d62
db dummyd_27402[32]; // 2368:3d82
db dummyd_27422[32]; // 2368:3da2
db dummyd_27442[32]; // 2368:3dc2
db dummyd_27462[32]; // 2368:3de2
db dummyd_27482[32]; // 2368:3e02
db dummyd_274a2[32]; // 2368:3e22
db dummyd_274c2[32]; // 2368:3e42
db dummyd_274e2[32]; // 2368:3e62
db dummyd_27502[32]; // 2368:3e82
db dummyd_27522[32]; // 2368:3ea2
db dummyd_27542[32]; // 2368:3ec2
db dummyd_27562[32]; // 2368:3ee2
db dummyd_27582[32]; // 2368:3f02
db dummyd_275a2[32]; // 2368:3f22
db dummyd_275c2[32]; // 2368:3f42
db dummyd_275e2[32]; // 2368:3f62
db dummyd_27602[32]; // 2368:3f82
db dummyd_27622[32]; // 2368:3fa2
db dummyd_27642[32]; // 2368:3fc2
db dummyd_27662[32]; // 2368:3fe2
db dummyd_27682[32]; // 2368:4002
db dummyd_276a2[32]; // 2368:4022
db dummyd_276c2[32]; // 2368:4042
db dummyd_276e2[32]; // 2368:4062
db dummyd_27702[32]; // 2368:4082
db dummyd_27722[32]; // 2368:40a2
db dummyd_27742[32]; // 2368:40c2
db dummyd_27762[32]; // 2368:40e2
db dummyd_27782[32]; // 2368:4102
db dummyd_277a2[32]; // 2368:4122
db dummyd_277c2[32]; // 2368:4142
db dummyd_277e2[32]; // 2368:4162
db dummyd_27802[32]; // 2368:4182
db dummyd_27822[32]; // 2368:41a2
db dummyd_27842[32]; // 2368:41c2
db dummyd_27862[32]; // 2368:41e2
db dummyd_27882[32]; // 2368:4202
db dummyd_278a2[32]; // 2368:4222
db dummyd_278c2[32]; // 2368:4242
db dummyd_278e2[32]; // 2368:4262
db dummyd_27902[32]; // 2368:4282
db dummyd_27922[32]; // 2368:42a2
db dummyd_27942[32]; // 2368:42c2
db dummyd_27962[32]; // 2368:42e2
db dummyd_27982[32]; // 2368:4302
db dummyd_279a2[32]; // 2368:4322
db dummyd_279c2[32]; // 2368:4342
db dummyd_279e2[32]; // 2368:4362
db dummyd_27a02[32]; // 2368:4382
db dummyd_27a22[32]; // 2368:43a2
db dummyd_27a42[32]; // 2368:43c2
db dummyd_27a62[32]; // 2368:43e2
db dummyd_27a82[32]; // 2368:4402
db dummyd_27aa2[32]; // 2368:4422
db dummyd_27ac2[32]; // 2368:4442
db dummyd_27ae2[32]; // 2368:4462
db dummyd_27b02[32]; // 2368:4482
db dummyd_27b22[32]; // 2368:44a2
db dummyd_27b42[32]; // 2368:44c2
db dummyd_27b62[32]; // 2368:44e2
db dummyd_27b82[32]; // 2368:4502
db dummyd_27ba2[32]; // 2368:4522
db dummyd_27bc2[32]; // 2368:4542
db dummyd_27be2[32]; // 2368:4562
db dummyd_27c02[32]; // 2368:4582
db dummyd_27c22[32]; // 2368:45a2
db dummyd_27c42[32]; // 2368:45c2
db dummyd_27c62[32]; // 2368:45e2
db dummyd_27c82[32]; // 2368:4602
db dummyd_27ca2[32]; // 2368:4622
db dummyd_27cc2[32]; // 2368:4642
db dummyd_27ce2[32]; // 2368:4662
db dummyd_27d02[32]; // 2368:4682
db dummyd_27d22[32]; // 2368:46a2
db dummyd_27d42[32]; // 2368:46c2
db dummyd_27d62[32]; // 2368:46e2
db dummyd_27d82[32]; // 2368:4702
db dummyd_27da2[32]; // 2368:4722
db dummyd_27dc2[32]; // 2368:4742
db dummyd_27de2[32]; // 2368:4762
db dummyd_27e02[32]; // 2368:4782
db dummyd_27e22[32]; // 2368:47a2
db dummyd_27e42[32]; // 2368:47c2
db dummyd_27e62[32]; // 2368:47e2
db dummyd_27e82[32]; // 2368:4802
db dummyd_27ea2[32]; // 2368:4822
db dummyd_27ec2[32]; // 2368:4842
db dummyd_27ee2[32]; // 2368:4862
db dummyd_27f02[32]; // 2368:4882
db dummyd_27f22[32]; // 2368:48a2
db dummyd_27f42[32]; // 2368:48c2
db dummyd_27f62[32]; // 2368:48e2
db dummyd_27f82[32]; // 2368:4902
db dummyd_27fa2[32]; // 2368:4922
db dummyd_27fc2[32]; // 2368:4942
db dummyd_27fe2[32]; // 2368:4962
db dummyd_28002[32]; // 2368:4982
db dummyd_28022[32]; // 2368:49a2
db dummyd_28042[32]; // 2368:49c2
db dummyd_28062[32]; // 2368:49e2
db dummyd_28082[32]; // 2368:4a02
db dummyd_280a2[32]; // 2368:4a22
db dummyd_280c2[32]; // 2368:4a42
db dummyd_280e2[32]; // 2368:4a62
db dummyd_28102[32]; // 2368:4a82
db dummyd_28122[32]; // 2368:4aa2
db dummyd_28142[32]; // 2368:4ac2
db dummyd_28162[32]; // 2368:4ae2
db dummyd_28182[32]; // 2368:4b02
db dummyd_281a2[32]; // 2368:4b22
db dummyd_281c2[32]; // 2368:4b42
db dummyd_281e2[32]; // 2368:4b62
db dummyd_28202[32]; // 2368:4b82
db dummyd_28222[32]; // 2368:4ba2
db dummyd_28242[32]; // 2368:4bc2
db dummyd_28262[32]; // 2368:4be2
db dummyd_28282[32]; // 2368:4c02
db dummyd_282a2[32]; // 2368:4c22
db dummyd_282c2[32]; // 2368:4c42
db dummyd_282e2[32]; // 2368:4c62
db dummyd_28302[32]; // 2368:4c82
db dummyd_28322[32]; // 2368:4ca2
db dummyd_28342[32]; // 2368:4cc2
db dummyd_28362[32]; // 2368:4ce2
db dummyd_28382[32]; // 2368:4d02
db dummyd_283a2[32]; // 2368:4d22
db dummyd_283c2[32]; // 2368:4d42
db dummyd_283e2[32]; // 2368:4d62
db dummyd_28402[32]; // 2368:4d82
db dummyd_28422[32]; // 2368:4da2
db dummyd_28442[32]; // 2368:4dc2
db dummyd_28462[32]; // 2368:4de2
db dummyd_28482[32]; // 2368:4e02
db dummyd_284a2[32]; // 2368:4e22
db dummyd_284c2[32]; // 2368:4e42
db dummyd_284e2[32]; // 2368:4e62
db dummyd_28502[32]; // 2368:4e82
db dummyd_28522[32]; // 2368:4ea2
db dummyd_28542[32]; // 2368:4ec2
db dummyd_28562[32]; // 2368:4ee2
db dummyd_28582[32]; // 2368:4f02
db dummyd_285a2[32]; // 2368:4f22
db dummyd_285c2[32]; // 2368:4f42
db dummyd_285e2[32]; // 2368:4f62
db dummyd_28602[32]; // 2368:4f82
db dummyd_28622[32]; // 2368:4fa2
db dummyd_28642[32]; // 2368:4fc2
db dummyd_28662[32]; // 2368:4fe2
db dummyd_28682[32]; // 2368:5002
db dummyd_286a2[32]; // 2368:5022
db dummyd_286c2[32]; // 2368:5042
db dummyd_286e2[32]; // 2368:5062
db dummyd_28702[32]; // 2368:5082
db dummyd_28722[32]; // 2368:50a2
db dummyd_28742[32]; // 2368:50c2
db dummyd_28762[32]; // 2368:50e2
db dummyd_28782[32]; // 2368:5102
db dummyd_287a2[32]; // 2368:5122
db dummyd_287c2[32]; // 2368:5142
db dummyd_287e2[32]; // 2368:5162
db dummyd_28802[32]; // 2368:5182
db dummyd_28822[32]; // 2368:51a2
db dummyd_28842[32]; // 2368:51c2
db dummyd_28862[32]; // 2368:51e2
db dummyd_28882[32]; // 2368:5202
db dummyd_288a2[32]; // 2368:5222
db dummyd_288c2[32]; // 2368:5242
db dummyd_288e2[32]; // 2368:5262
db dummyd_28902;
db dummyd_28903;
db dummyd_28904;
db dummyd_28905;
db dummyd_28906;
db dummyd_28907;
db dummyd_28908;
db dummyd_28909;
db dummyd_2890a;
db dummyd_2890b;
db dummyd_2890c;
db dummyd_2890d;
db dummyd_2890e;
db dummyd_2890f;
db dummyd_28910[32]; // 2891:0000
db dummyd_28930[32]; // 2891:0020
db dummyd_28950[32]; // 2891:0040
db dummyd_28970[32]; // 2891:0060
db dummyd_28990[32]; // 2891:0080
db dummyd_289b0[32]; // 2891:00a0
db dummyd_289d0[32]; // 2891:00c0
db dummyd_289f0[32]; // 2891:00e0
db dummyd_28a10[32]; // 2891:0100
db dummyd_28a30[32]; // 2891:0120
db dummyd_28a50[32]; // 2891:0140
db dummyd_28a70[32]; // 2891:0160
db dummyd_28a90[32]; // 2891:0180
db dummyd_28ab0[32]; // 2891:01a0
db dummyd_28ad0[32]; // 2891:01c0
db dummyd_28af0[32]; // 2891:01e0
db dummyd_28b10[32]; // 2891:0200
db dummyd_28b30[32]; // 2891:0220
db dummyd_28b50[32]; // 2891:0240
db dummyd_28b70[32]; // 2891:0260
db dummyd_28b90[32]; // 2891:0280
db dummyd_28bb0[32]; // 2891:02a0
db dummyd_28bd0[32]; // 2891:02c0
db dummyd_28bf0[32]; // 2891:02e0
db dummyd_28c10[32]; // 2891:0300
db dummyd_28c30[32]; // 2891:0320
db dummyd_28c50[32]; // 2891:0340
db dummyd_28c70[32]; // 2891:0360
db dummyd_28c90[32]; // 2891:0380
db dummyd_28cb0[32]; // 2891:03a0
db dummyd_28cd0[32]; // 2891:03c0
db dummyd_28cf0[32]; // 2891:03e0
db dummyd_28d10[32]; // 2891:0400
db dummyd_28d30[32]; // 2891:0420
db dummyd_28d50[32]; // 2891:0440
db dummyd_28d70[32]; // 2891:0460
db dummyd_28d90[32]; // 2891:0480
db dummyd_28db0[32]; // 2891:04a0
db dummyd_28dd0[32]; // 2891:04c0
db dummyd_28df0[32]; // 2891:04e0
db dummyd_28e10[32]; // 2891:0500
db dummyd_28e30[32]; // 2891:0520
db dummyd_28e50[32]; // 2891:0540
db dummyd_28e70[32]; // 2891:0560
db dummyd_28e90[32]; // 2891:0580
db dummyd_28eb0[32]; // 2891:05a0
db dummyd_28ed0[32]; // 2891:05c0
db dummyd_28ef0[32]; // 2891:05e0
db dummyd_28f10[32]; // 2891:0600
db dummyd_28f30[32]; // 2891:0620
db dummyd_28f50[32]; // 2891:0640
db dummyd_28f70[32]; // 2891:0660
db dummyd_28f90[32]; // 2891:0680
db dummyd_28fb0[32]; // 2891:06a0
db dummyd_28fd0[32]; // 2891:06c0
db dummyd_28ff0[32]; // 2891:06e0
db dummyd_29010[32]; // 2891:0700
db dummyd_29030[32]; // 2891:0720
db dummyd_29050[32]; // 2891:0740
db dummyd_29070[32]; // 2891:0760
db dummyd_29090[32]; // 2891:0780
db dummyd_290b0[32]; // 2891:07a0
db dummyd_290d0[32]; // 2891:07c0
db dummyd_290f0[32]; // 2891:07e0
db dummyd_29110[32]; // 2891:0800
db dummyd_29130[32]; // 2891:0820
db dummyd_29150[32]; // 2891:0840
db dummyd_29170[32]; // 2891:0860
db dummyd_29190[32]; // 2891:0880
db dummyd_291b0[32]; // 2891:08a0
db dummyd_291d0[32]; // 2891:08c0
db dummyd_291f0[32]; // 2891:08e0
db dummyd_29210[32]; // 2891:0900
db dummyd_29230[32]; // 2891:0920
db dummyd_29250[32]; // 2891:0940
db dummyd_29270[32]; // 2891:0960
db dummyd_29290[32]; // 2891:0980
db dummyd_292b0[32]; // 2891:09a0
db dummyd_292d0[32]; // 2891:09c0
db dummyd_292f0[32]; // 2891:09e0
db dummyd_29310[32]; // 2891:0a00
db dummyd_29330[32]; // 2891:0a20
db dummyd_29350[32]; // 2891:0a40
db dummyd_29370[32]; // 2891:0a60
db dummyd_29390[32]; // 2891:0a80
db dummyd_293b0[32]; // 2891:0aa0
db dummyd_293d0[32]; // 2891:0ac0
db dummyd_293f0[32]; // 2891:0ae0
db dummyd_29410[32]; // 2891:0b00
db dummyd_29430[32]; // 2891:0b20
db dummyd_29450[32]; // 2891:0b40
db dummyd_29470[32]; // 2891:0b60
db dummyd_29490[32]; // 2891:0b80
db dummyd_294b0[32]; // 2891:0ba0
db dummyd_294d0[32]; // 2891:0bc0
db dummyd_294f0[32]; // 2891:0be0
db dummyd_29510[32]; // 2891:0c00
db dummyd_29530[32]; // 2891:0c20
db dummyd_29550[32]; // 2891:0c40
db dummyd_29570[32]; // 2891:0c60
db dummyd_29590[32]; // 2891:0c80
db dummyd_295b0[32]; // 2891:0ca0
db dummyd_295d0[32]; // 2891:0cc0
db dummyd_295f0[32]; // 2891:0ce0
db dummyd_29610[32]; // 2891:0d00
db dummyd_29630[32]; // 2891:0d20
db dummyd_29650[32]; // 2891:0d40
db dummyd_29670[32]; // 2891:0d60
db dummyd_29690[32]; // 2891:0d80
db dummyd_296b0[32]; // 2891:0da0
db dummyd_296d0[32]; // 2891:0dc0
db dummyd_296f0[32]; // 2891:0de0
db dummyd_29710[32]; // 2891:0e00
db dummyd_29730[32]; // 2891:0e20
db dummyd_29750[32]; // 2891:0e40
db dummyd_29770[32]; // 2891:0e60
db dummyd_29790[32]; // 2891:0e80
db dummyd_297b0[32]; // 2891:0ea0
db dummyd_297d0[32]; // 2891:0ec0
db dummyd_297f0[32]; // 2891:0ee0
db dummyd_29810[32]; // 2891:0f00
db dummyd_29830[32]; // 2891:0f20
db dummyd_29850[32]; // 2891:0f40
db dummyd_29870[32]; // 2891:0f60
db dummyd_29890[32]; // 2891:0f80
db dummyd_298b0[32]; // 2891:0fa0
db dummyd_298d0[32]; // 2891:0fc0
db dummyd_298f0[32]; // 2891:0fe0
db dummyd_29910[32]; // 2891:1000
db dummyd_29930[32]; // 2891:1020
db dummyd_29950[32]; // 2891:1040
db dummyd_29970[32]; // 2891:1060
db dummyd_29990[32]; // 2891:1080
db dummyd_299b0[32]; // 2891:10a0
db dummyd_299d0[32]; // 2891:10c0
db dummyd_299f0[32]; // 2891:10e0
db dummyd_29a10[32]; // 2891:1100
db dummyd_29a30[32]; // 2891:1120
db dummyd_29a50[32]; // 2891:1140
db dummyd_29a70[32]; // 2891:1160
db dummyd_29a90[32]; // 2891:1180
db dummyd_29ab0[32]; // 2891:11a0
db dummyd_29ad0[32]; // 2891:11c0
db dummyd_29af0[32]; // 2891:11e0
db dummyd_29b10[32]; // 2891:1200
db dummyd_29b30[32]; // 2891:1220
db dummyd_29b50[32]; // 2891:1240
db dummyd_29b70[32]; // 2891:1260
db dummyd_29b90[32]; // 2891:1280
db dummyd_29bb0[32]; // 2891:12a0
db dummyd_29bd0[32]; // 2891:12c0
db dummyd_29bf0[32]; // 2891:12e0
db dummyd_29c10[32]; // 2891:1300
db dummyd_29c30[32]; // 2891:1320
db dummyd_29c50[32]; // 2891:1340
db dummyd_29c70[32]; // 2891:1360
db dummyd_29c90[32]; // 2891:1380
db dummyd_29cb0[32]; // 2891:13a0
db dummyd_29cd0[32]; // 2891:13c0
db dummyd_29cf0[32]; // 2891:13e0
db dummyd_29d10; // 2891:1400
db dummyd_29d11;
db dummyd_29d12;
db dummyd_29d13; // 2891:1403
db dummyd_29d14; // 2891:1404
db dummyd_29d15;
db dummyd_29d16;
db dummyd_29d17; // 2891:1407
db dummyd_29d18; // 2891:1408
db dummyd_29d19;
db dummyd_29d1a;
db dummyd_29d1b; // 2891:140b
db dummyd_29d1c; // 2891:140c
db dummyd_29d1d;
db dummyd_29d1e;
db dummyd_29d1f; // 2891:140f
db dummyd_29d20;
db dummyd_29d21;
db dummyd_29d22;
db dummyd_29d23;
db dummyd_29d24; // 2891:1414
db dummyd_29d25; // 2891:1415
db dummyd_29d26; // 2891:1416
db dummyd_29d27; // 2891:1417
db unk_38308; // 2891:1418
db dummyd_29d29[32]; // 2891:1419
db dummyd_29d49[32]; // 2891:1439
db dummyd_29d69[32]; // 2891:1459
db dummyd_29d89[32]; // 2891:1479
db dummyd_29da9[32]; // 2891:1499
db dummyd_29dc9[32]; // 2891:14b9
db dummyd_29de9[32]; // 2891:14d9
db dummyd_29e09[32]; // 2891:14f9
db dummyd_29e29[32]; // 2891:1519
db dummyd_29e49[32]; // 2891:1539
db dummyd_29e69[32]; // 2891:1559
db dummyd_29e89[32]; // 2891:1579
db dummyd_29ea9[32]; // 2891:1599
db dummyd_29ec9[32]; // 2891:15b9
db dummyd_29ee9[32]; // 2891:15d9
db dummyd_29f09[32]; // 2891:15f9
db dummyd_29f29[32]; // 2891:1619
db dummyd_29f49[32]; // 2891:1639
db dummyd_29f69[32]; // 2891:1659
db dummyd_29f89[32]; // 2891:1679
db dummyd_29fa9[32]; // 2891:1699
db dummyd_29fc9[32]; // 2891:16b9
db dummyd_29fe9[32]; // 2891:16d9
db dummyd_2a009[32]; // 2891:16f9
db dummyd_2a029[32]; // 2891:1719
db dummyd_2a049[32]; // 2891:1739
db dummyd_2a069[32]; // 2891:1759
db dummyd_2a089[32]; // 2891:1779
db dummyd_2a0a9[32]; // 2891:1799
db dummyd_2a0c9[32]; // 2891:17b9
db dummyd_2a0e9[32]; // 2891:17d9
db dummyd_2a109[32]; // 2891:17f9
db dummyd_2a129[32]; // 2891:1819
db dummyd_2a149[32]; // 2891:1839
db dummyd_2a169[32]; // 2891:1859
db dummyd_2a189[32]; // 2891:1879
db dummyd_2a1a9[32]; // 2891:1899
db dummyd_2a1c9[32]; // 2891:18b9
db dummyd_2a1e9[32]; // 2891:18d9
db dummyd_2a209[32]; // 2891:18f9
db dummyd_2a229[32]; // 2891:1919
db dummyd_2a249[32]; // 2891:1939
db dummyd_2a269[32]; // 2891:1959
db dummyd_2a289[32]; // 2891:1979
db dummyd_2a2a9[32]; // 2891:1999
db dummyd_2a2c9[32]; // 2891:19b9
db dummyd_2a2e9[32]; // 2891:19d9
db dummyd_2a309[32]; // 2891:19f9
db dummyd_2a329[32]; // 2891:1a19
db dummyd_2a349[32]; // 2891:1a39
db dummyd_2a369[32]; // 2891:1a59
db dummyd_2a389[32]; // 2891:1a79
db dummyd_2a3a9[32]; // 2891:1a99
db dummyd_2a3c9[32]; // 2891:1ab9
db dummyd_2a3e9[32]; // 2891:1ad9
db dummyd_2a409[32]; // 2891:1af9
db dummyd_2a429[32]; // 2891:1b19
db dummyd_2a449[32]; // 2891:1b39
db dummyd_2a469[32]; // 2891:1b59
db dummyd_2a489[32]; // 2891:1b79
db dummyd_2a4a9;
db dummyd_2a4aa;
db dummyd_2a4ab; // 2891:1b9b
db dummyd_2a4ac; // 2891:1b9c
db dummyd_2a4ad;
db dummyd_2a4ae;
db dummyd_2a4af; // 2891:1b9f
db dummyd_2a4b0; // 2891:1ba0
db dummyd_2a4b1;
db dummyd_2a4b2;
db dummyd_2a4b3; // 2891:1ba3
db dummyd_2a4b4; // 2891:1ba4
db dummyd_2a4b5;
db dummyd_2a4b6;
db dummyd_2a4b7; // 2891:1ba7
db dummyd_2a4b8; // 2891:1ba8
db dummyd_2a4b9;
db dummyd_2a4ba; // 2891:1baa
db dummyd_2a4bb; // 2891:1bab
db dummyd_2a4bc; // 2891:1bac
db dummyd_2a4bd; // 2891:1bad
db dummyd_2a4be; // 2891:1bae
db dummyd_2a4bf; // 2891:1baf
db dummyd_2a4c0; // 2891:1bb0
db dummyd_2a4c1; // 2891:1bb1
db dummyd_2a4c2; // 2891:1bb2
db dummyd_2a4c3; // 2891:1bb3
db dummyd_2a4c4; // 2891:1bb4
db dummyd_2a4c5; // 2891:1bb5
db unk_38aa6; // 2891:1bb6
db dummyd_2a4c7[32]; // 2891:1bb7
db dummyd_2a4e7[32]; // 2891:1bd7
db dummyd_2a507[32]; // 2891:1bf7
db dummyd_2a527[32]; // 2891:1c17
db dummyd_2a547[32]; // 2891:1c37
db dummyd_2a567[32]; // 2891:1c57
db dummyd_2a587[32]; // 2891:1c77
db dummyd_2a5a7[32]; // 2891:1c97
db dummyd_2a5c7[32]; // 2891:1cb7
db dummyd_2a5e7[32]; // 2891:1cd7
db dummyd_2a607[32]; // 2891:1cf7
db dummyd_2a627[32]; // 2891:1d17
db dummyd_2a647; // 2891:1d37
db dummyd_2a648; // 2891:1d38
db dummyd_2a649; // 2891:1d39
db dummyd_2a64a;
db dummyd_2a64b; // 2891:1d3b
db dummyd_2a64c; // 2891:1d3c
db dummyd_2a64d;
db dummyd_2a64e;
db dummyd_2a64f; // 2891:1d3f
db dummyd_2a650;
db dummyd_2a651;
db dummyd_2a652;
db dummyd_2a653; // 2891:1d43
db dummyd_2a654;
db dummyd_2a655;
db dummyd_2a656;
db dummyd_2a657; // 2891:1d47
db dummyd_2a658;
db dummyd_2a659;
db dummyd_2a65a;
db dummyd_2a65b; // 2891:1d4b
db dummyd_2a65c; // 2891:1d4c
db dummyd_2a65d;
db unk_38c3e; // 2891:1d4e
db dummyd_2a65f[32]; // 2891:1d4f
db dummyd_2a67f[32]; // 2891:1d6f
db dummyd_2a69f[32]; // 2891:1d8f
db dummyd_2a6bf[32]; // 2891:1daf
db dummyd_2a6df[32]; // 2891:1dcf
db dummyd_2a6ff[32]; // 2891:1def
db dummyd_2a71f[32]; // 2891:1e0f
db dummyd_2a73f[32]; // 2891:1e2f
db dummyd_2a75f[32]; // 2891:1e4f
db dummyd_2a77f[32]; // 2891:1e6f
db dummyd_2a79f[32]; // 2891:1e8f
db dummyd_2a7bf[32]; // 2891:1eaf
db dummyd_2a7df[32]; // 2891:1ecf
db dummyd_2a7ff[32]; // 2891:1eef
db dummyd_2a81f[32]; // 2891:1f0f
db dummyd_2a83f[32]; // 2891:1f2f
db dummyd_2a85f[32]; // 2891:1f4f
db dummyd_2a87f[32]; // 2891:1f6f
db dummyd_2a89f[32]; // 2891:1f8f
db dummyd_2a8bf[32]; // 2891:1faf
db dummyd_2a8df[32]; // 2891:1fcf
db dummyd_2a8ff[32]; // 2891:1fef
db dummyd_2a91f[32]; // 2891:200f
db dummyd_2a93f[32]; // 2891:202f
db dummyd_2a95f[32]; // 2891:204f
db dummyd_2a97f[32]; // 2891:206f
db dummyd_2a99f[32]; // 2891:208f
db dummyd_2a9bf[32]; // 2891:20af
db dummyd_2a9df[32]; // 2891:20cf
db dummyd_2a9ff[32]; // 2891:20ef
db dummyd_2aa1f[32]; // 2891:210f
db dummyd_2aa3f[32]; // 2891:212f
db dummyd_2aa5f[32]; // 2891:214f
db dummyd_2aa7f[32]; // 2891:216f
db dummyd_2aa9f[32]; // 2891:218f
db dummyd_2aabf[32]; // 2891:21af
db dummyd_2aadf[32]; // 2891:21cf
db dummyd_2aaff[32]; // 2891:21ef
db dummyd_2ab1f[32]; // 2891:220f
db dummyd_2ab3f[32]; // 2891:222f
db dummyd_2ab5f[32]; // 2891:224f
db dummyd_2ab7f[32]; // 2891:226f
db dummyd_2ab9f[32]; // 2891:228f
db dummyd_2abbf[32]; // 2891:22af
db dummyd_2abdf[32]; // 2891:22cf
db dummyd_2abff[32]; // 2891:22ef
db dummyd_2ac1f[32]; // 2891:230f
db dummyd_2ac3f[32]; // 2891:232f
db dummyd_2ac5f[32]; // 2891:234f
db dummyd_2ac7f[32]; // 2891:236f
db dummyd_2ac9f[32]; // 2891:238f
db dummyd_2acbf[32]; // 2891:23af
db dummyd_2acdf[32]; // 2891:23cf
db dummyd_2acff[32]; // 2891:23ef
db dummyd_2ad1f[32]; // 2891:240f
db dummyd_2ad3f[32]; // 2891:242f
db dummyd_2ad5f[32]; // 2891:244f
db dummyd_2ad7f[32]; // 2891:246f
db dummyd_2ad9f[32]; // 2891:248f
db dummyd_2adbf[32]; // 2891:24af
db dummyd_2addf[32]; // 2891:24cf
db dummyd_2adff[32]; // 2891:24ef
db dummyd_2ae1f[32]; // 2891:250f
db dummyd_2ae3f[32]; // 2891:252f
db dummyd_2ae5f[32]; // 2891:254f
db dummyd_2ae7f[32]; // 2891:256f
db dummyd_2ae9f[32]; // 2891:258f
db dummyd_2aebf[32]; // 2891:25af
db dummyd_2aedf[32]; // 2891:25cf
db dummyd_2aeff[32]; // 2891:25ef
db dummyd_2af1f[32]; // 2891:260f
db dummyd_2af3f[32]; // 2891:262f
db dummyd_2af5f[32]; // 2891:264f
db dummyd_2af7f[32]; // 2891:266f
db dummyd_2af9f[32]; // 2891:268f
db dummyd_2afbf[32]; // 2891:26af
db dummyd_2afdf[32]; // 2891:26cf
db dummyd_2afff[32]; // 2891:26ef
db dummyd_2b01f[32]; // 2891:270f
db dummyd_2b03f[32]; // 2891:272f
db dummyd_2b05f[32]; // 2891:274f
db dummyd_2b07f[32]; // 2891:276f
db dummyd_2b09f[32]; // 2891:278f
db dummyd_2b0bf[32]; // 2891:27af
db dummyd_2b0df[32]; // 2891:27cf
db dummyd_2b0ff[32]; // 2891:27ef
db dummyd_2b11f[32]; // 2891:280f
db dummyd_2b13f[32]; // 2891:282f
db dummyd_2b15f[32]; // 2891:284f
db dummyd_2b17f[32]; // 2891:286f
db dummyd_2b19f[32]; // 2891:288f
db dummyd_2b1bf[32]; // 2891:28af
db dummyd_2b1df[32]; // 2891:28cf
db dummyd_2b1ff[32]; // 2891:28ef
db dummyd_2b21f[32]; // 2891:290f
db dummyd_2b23f[32]; // 2891:292f
db dummyd_2b25f[32]; // 2891:294f
db dummyd_2b27f[32]; // 2891:296f
db dummyd_2b29f[32]; // 2891:298f
db dummyd_2b2bf[32]; // 2891:29af
db dummyd_2b2df[32]; // 2891:29cf
db dummyd_2b2ff[32]; // 2891:29ef
db dummyd_2b31f[32]; // 2891:2a0f
db dummyd_2b33f[32]; // 2891:2a2f
db dummyd_2b35f[32]; // 2891:2a4f
db dummyd_2b37f[32]; // 2891:2a6f
db dummyd_2b39f[32]; // 2891:2a8f
db dummyd_2b3bf[32]; // 2891:2aaf
db dummyd_2b3df[32]; // 2891:2acf
db dummyd_2b3ff[32]; // 2891:2aef
db dummyd_2b41f[32]; // 2891:2b0f
db dummyd_2b43f[32]; // 2891:2b2f
db dummyd_2b45f[32]; // 2891:2b4f
db dummyd_2b47f[32]; // 2891:2b6f
db dummyd_2b49f[32]; // 2891:2b8f
db dummyd_2b4bf[32]; // 2891:2baf
db dummyd_2b4df[32]; // 2891:2bcf
db dummyd_2b4ff[32]; // 2891:2bef
db dummyd_2b51f[32]; // 2891:2c0f
db dummyd_2b53f[32]; // 2891:2c2f
db dummyd_2b55f[32]; // 2891:2c4f
db dummyd_2b57f[32]; // 2891:2c6f
db dummyd_2b59f[32]; // 2891:2c8f
db dummyd_2b5bf[32]; // 2891:2caf
db dummyd_2b5df[32]; // 2891:2ccf
db dummyd_2b5ff[32]; // 2891:2cef
db dummyd_2b61f[32]; // 2891:2d0f
db dummyd_2b63f[32]; // 2891:2d2f
db dummyd_2b65f[32]; // 2891:2d4f
db dummyd_2b67f[32]; // 2891:2d6f
db dummyd_2b69f[32]; // 2891:2d8f
db dummyd_2b6bf[32]; // 2891:2daf
db dummyd_2b6df[32]; // 2891:2dcf
db dummyd_2b6ff[32]; // 2891:2def
db dummyd_2b71f[32]; // 2891:2e0f
db dummyd_2b73f[32]; // 2891:2e2f
db dummyd_2b75f;
db dummyd_2b760[32]; // 2b76:0000
db dummyd_2b780[32]; // 2b76:0020
db dummyd_2b7a0[32]; // 2b76:0040
db dummyd_2b7c0[32]; // 2b76:0060
db dummyd_2b7e0[32]; // 2b76:0080
db dummyd_2b800[32]; // 2b76:00a0
db dummyd_2b820[32]; // 2b76:00c0
db dummyd_2b840[32]; // 2b76:00e0
db dummyd_2b860[32]; // 2b76:0100
db dummyd_2b880[32]; // 2b76:0120
db dummyd_2b8a0[32]; // 2b76:0140
db dummyd_2b8c0[32]; // 2b76:0160
db dummyd_2b8e0[32]; // 2b76:0180
db dummyd_2b900[32]; // 2b76:01a0
db dummyd_2b920[32]; // 2b76:01c0
db dummyd_2b940[32]; // 2b76:01e0
db dummyd_2b960[32]; // 2b76:0200
db dummyd_2b980[32]; // 2b76:0220
db dummyd_2b9a0[32]; // 2b76:0240
db dummyd_2b9c0[32]; // 2b76:0260
db dummyd_2b9e0[32]; // 2b76:0280
db dummyd_2ba00[32]; // 2b76:02a0
db dummyd_2ba20[32]; // 2b76:02c0
db dummyd_2ba40[32]; // 2b76:02e0
db dummyd_2ba60[32]; // 2b76:0300
db dummyd_2ba80[32]; // 2b76:0320
db dummyd_2baa0[32]; // 2b76:0340
db dummyd_2bac0[32]; // 2b76:0360
db dummyd_2bae0[32]; // 2b76:0380
db dummyd_2bb00[32]; // 2b76:03a0
db dummyd_2bb20[32]; // 2b76:03c0
db dummyd_2bb40[32]; // 2b76:03e0
db dummyd_2bb60[32]; // 2b76:0400
db dummyd_2bb80[32]; // 2b76:0420
db dummyd_2bba0[32]; // 2b76:0440
db dummyd_2bbc0[32]; // 2b76:0460
db dummyd_2bbe0[32]; // 2b76:0480
db dummyd_2bc00[32]; // 2b76:04a0
db dummyd_2bc20[32]; // 2b76:04c0
db dummyd_2bc40[32]; // 2b76:04e0
db dummyd_2bc60[32]; // 2b76:0500
db dummyd_2bc80[32]; // 2b76:0520
db dummyd_2bca0[32]; // 2b76:0540
db dummyd_2bcc0[32]; // 2b76:0560
db dummyd_2bce0[32]; // 2b76:0580
db dummyd_2bd00[32]; // 2b76:05a0
db dummyd_2bd20[32]; // 2b76:05c0
db dummyd_2bd40[32]; // 2b76:05e0
db dummyd_2bd60[32]; // 2b76:0600
db dummyd_2bd80[32]; // 2b76:0620
db dummyd_2bda0[32]; // 2b76:0640
db dummyd_2bdc0[32]; // 2b76:0660
db dummyd_2bde0[32]; // 2b76:0680
db dummyd_2be00[32]; // 2b76:06a0
db dummyd_2be20[32]; // 2b76:06c0
db dummyd_2be40[32]; // 2b76:06e0
db dummyd_2be60[32]; // 2b76:0700
db dummyd_2be80[32]; // 2b76:0720
db dummyd_2bea0[32]; // 2b76:0740
db dummyd_2bec0[32]; // 2b76:0760
db dummyd_2bee0[32]; // 2b76:0780
db dummyd_2bf00[32]; // 2b76:07a0
db dummyd_2bf20[32]; // 2b76:07c0
db dummyd_2bf40[32]; // 2b76:07e0
db dummyd_2bf60[32]; // 2b76:0800
db dummyd_2bf80[32]; // 2b76:0820
db dummyd_2bfa0[32]; // 2b76:0840
db dummyd_2bfc0[32]; // 2b76:0860
db dummyd_2bfe0[32]; // 2b76:0880
db dummyd_2c000[32]; // 2b76:08a0
db dummyd_2c020[32]; // 2b76:08c0
db dummyd_2c040[32]; // 2b76:08e0
db dummyd_2c060[32]; // 2b76:0900
db dummyd_2c080[32]; // 2b76:0920
db dummyd_2c0a0[32]; // 2b76:0940
db dummyd_2c0c0[32]; // 2b76:0960
db dummyd_2c0e0[32]; // 2b76:0980
db dummyd_2c100[32]; // 2b76:09a0
db dummyd_2c120[32]; // 2b76:09c0
db dummyd_2c140[32]; // 2b76:09e0
db dummyd_2c160[32]; // 2b76:0a00
db dummyd_2c180[32]; // 2b76:0a20
db dummyd_2c1a0[32]; // 2b76:0a40
db dummyd_2c1c0[32]; // 2b76:0a60
db dummyd_2c1e0[32]; // 2b76:0a80
db dummyd_2c200[32]; // 2b76:0aa0
db dummyd_2c220[32]; // 2b76:0ac0
db dummyd_2c240[32]; // 2b76:0ae0
db dummyd_2c260[32]; // 2b76:0b00
db dummyd_2c280[32]; // 2b76:0b20
db dummyd_2c2a0[32]; // 2b76:0b40
db dummyd_2c2c0[32]; // 2b76:0b60
db dummyd_2c2e0[32]; // 2b76:0b80
db dummyd_2c300[32]; // 2b76:0ba0
db dummyd_2c320[32]; // 2b76:0bc0
db dummyd_2c340[32]; // 2b76:0be0
db dummyd_2c360[32]; // 2b76:0c00
db dummyd_2c380[32]; // 2b76:0c20
db dummyd_2c3a0[32]; // 2b76:0c40
db dummyd_2c3c0[32]; // 2b76:0c60
db dummyd_2c3e0[32]; // 2b76:0c80
db dummyd_2c400[32]; // 2b76:0ca0
db dummyd_2c420[32]; // 2b76:0cc0
db dummyd_2c440[32]; // 2b76:0ce0
db dummyd_2c460[32]; // 2b76:0d00
db dummyd_2c480[32]; // 2b76:0d20
db dummyd_2c4a0[32]; // 2b76:0d40
db dummyd_2c4c0[32]; // 2b76:0d60
db dummyd_2c4e0[32]; // 2b76:0d80
db dummyd_2c500[32]; // 2b76:0da0
db dummyd_2c520[32]; // 2b76:0dc0
db dummyd_2c540[32]; // 2b76:0de0
db dummyd_2c560[32]; // 2b76:0e00
db dummyd_2c580[32]; // 2b76:0e20
db dummyd_2c5a0[32]; // 2b76:0e40
db dummyd_2c5c0[32]; // 2b76:0e60
db dummyd_2c5e0[32]; // 2b76:0e80
db dummyd_2c600[32]; // 2b76:0ea0
db dummyd_2c620[32]; // 2b76:0ec0
db dummyd_2c640[32]; // 2b76:0ee0
db dummyd_2c660[32]; // 2b76:0f00
db dummyd_2c680[32]; // 2b76:0f20
db dummyd_2c6a0[32]; // 2b76:0f40
db dummyd_2c6c0[32]; // 2b76:0f60
db dummyd_2c6e0[32]; // 2b76:0f80
db dummyd_2c700[32]; // 2b76:0fa0
db dummyd_2c720[32]; // 2b76:0fc0
db dummyd_2c740[32]; // 2b76:0fe0
db dummyd_2c760[32]; // 2b76:1000
db dummyd_2c780[32]; // 2b76:1020
db dummyd_2c7a0[32]; // 2b76:1040
db dummyd_2c7c0[32]; // 2b76:1060
db dummyd_2c7e0[32]; // 2b76:1080
db dummyd_2c800[32]; // 2b76:10a0
db dummyd_2c820[32]; // 2b76:10c0
db dummyd_2c840[32]; // 2b76:10e0
db dummyd_2c860[32]; // 2b76:1100
db dummyd_2c880[32]; // 2b76:1120
db dummyd_2c8a0[32]; // 2b76:1140
db dummyd_2c8c0[32]; // 2b76:1160
db dummyd_2c8e0[32]; // 2b76:1180
db dummyd_2c900[32]; // 2b76:11a0
db dummyd_2c920[32]; // 2b76:11c0
db dummyd_2c940[32]; // 2b76:11e0
db dummyd_2c960[32]; // 2b76:1200
db dummyd_2c980[32]; // 2b76:1220
db dummyd_2c9a0[32]; // 2b76:1240
db dummyd_2c9c0[32]; // 2b76:1260
db dummyd_2c9e0[32]; // 2b76:1280
db dummyd_2ca00[32]; // 2b76:12a0
db dummyd_2ca20[32]; // 2b76:12c0
db dummyd_2ca40[32]; // 2b76:12e0
db dummyd_2ca60[32]; // 2b76:1300
db dummyd_2ca80[32]; // 2b76:1320
db dummyd_2caa0[32]; // 2b76:1340
db dummyd_2cac0[32]; // 2b76:1360
db dummyd_2cae0[32]; // 2b76:1380
db dummyd_2cb00[32]; // 2b76:13a0
db dummyd_2cb20[32]; // 2b76:13c0
db dummyd_2cb40[32]; // 2b76:13e0
db dummyd_2cb60[32]; // 2b76:1400
db dummyd_2cb80[32]; // 2b76:1420
db dummyd_2cba0[32]; // 2b76:1440
db dummyd_2cbc0[32]; // 2b76:1460
db dummyd_2cbe0[32]; // 2b76:1480
db dummyd_2cc00[32]; // 2b76:14a0
db dummyd_2cc20[32]; // 2b76:14c0
db dummyd_2cc40[32]; // 2b76:14e0
db dummyd_2cc60[32]; // 2b76:1500
db dummyd_2cc80[32]; // 2b76:1520
db dummyd_2cca0[32]; // 2b76:1540
db dummyd_2ccc0[32]; // 2b76:1560
db dummyd_2cce0[32]; // 2b76:1580
db dummyd_2cd00[32]; // 2b76:15a0
db dummyd_2cd20[32]; // 2b76:15c0
db dummyd_2cd40[32]; // 2b76:15e0
db dummyd_2cd60[32]; // 2b76:1600
db dummyd_2cd80[32]; // 2b76:1620
db dummyd_2cda0[32]; // 2b76:1640
db dummyd_2cdc0[32]; // 2b76:1660
db dummyd_2cde0[32]; // 2b76:1680
db dummyd_2ce00[32]; // 2b76:16a0
db dummyd_2ce20[32]; // 2b76:16c0
db dummyd_2ce40[32]; // 2b76:16e0
db dummyd_2ce60[32]; // 2b76:1700
db dummyd_2ce80[32]; // 2b76:1720
db dummyd_2cea0[32]; // 2b76:1740
db dummyd_2cec0[32]; // 2b76:1760
db dummyd_2cee0[32]; // 2b76:1780
db dummyd_2cf00[32]; // 2b76:17a0
db dummyd_2cf20[32]; // 2b76:17c0
db dummyd_2cf40[32]; // 2b76:17e0
db dummyd_2cf60[32]; // 2b76:1800
db dummyd_2cf80[32]; // 2b76:1820
db dummyd_2cfa0[32]; // 2b76:1840
db dummyd_2cfc0[32]; // 2b76:1860
db dummyd_2cfe0[32]; // 2b76:1880
db dummyd_2d000[32]; // 2b76:18a0
db dummyd_2d020[32]; // 2b76:18c0
db dummyd_2d040[32]; // 2b76:18e0
db dummyd_2d060[32]; // 2b76:1900
db dummyd_2d080[32]; // 2b76:1920
db dummyd_2d0a0[32]; // 2b76:1940
db dummyd_2d0c0[32]; // 2b76:1960
db dummyd_2d0e0[32]; // 2b76:1980
db dummyd_2d100[32]; // 2b76:19a0
db dummyd_2d120[32]; // 2b76:19c0
db dummyd_2d140[32]; // 2b76:19e0
db dummyd_2d160[32]; // 2b76:1a00
db dummyd_2d180[32]; // 2b76:1a20
db dummyd_2d1a0[32]; // 2b76:1a40
db dummyd_2d1c0[32]; // 2b76:1a60
db dummyd_2d1e0[32]; // 2b76:1a80
db dummyd_2d200[32]; // 2b76:1aa0
db dummyd_2d220[32]; // 2b76:1ac0
db dummyd_2d240[32]; // 2b76:1ae0
db dummyd_2d260[32]; // 2b76:1b00
db dummyd_2d280[32]; // 2b76:1b20
db dummyd_2d2a0[32]; // 2b76:1b40
db dummyd_2d2c0[32]; // 2b76:1b60
db dummyd_2d2e0[32]; // 2b76:1b80
db dummyd_2d300[32]; // 2b76:1ba0
db dummyd_2d320[32]; // 2b76:1bc0
db dummyd_2d340[32]; // 2b76:1be0
db dummyd_2d360[32]; // 2b76:1c00
db dummyd_2d380[32]; // 2b76:1c20
db dummyd_2d3a0[32]; // 2b76:1c40
db dummyd_2d3c0[32]; // 2b76:1c60
db dummyd_2d3e0[32]; // 2b76:1c80
db dummyd_2d400[32]; // 2b76:1ca0
db dummyd_2d420[32]; // 2b76:1cc0
db dummyd_2d440[32]; // 2b76:1ce0
db dummyd_2d460[32]; // 2b76:1d00
db dummyd_2d480[32]; // 2b76:1d20
db dummyd_2d4a0[32]; // 2b76:1d40
db dummyd_2d4c0[32]; // 2b76:1d60
db dummyd_2d4e0[32]; // 2b76:1d80
db dummyd_2d500[32]; // 2b76:1da0
db dummyd_2d520[32]; // 2b76:1dc0
db dummyd_2d540[32]; // 2b76:1de0
db dummyd_2d560[32]; // 2b76:1e00
db dummyd_2d580[32]; // 2b76:1e20
db dummyd_2d5a0[32]; // 2b76:1e40
db dummyd_2d5c0[32]; // 2b76:1e60
db dummyd_2d5e0[32]; // 2b76:1e80
db dummyd_2d600[32]; // 2b76:1ea0
db dummyd_2d620[32]; // 2b76:1ec0
db dummyd_2d640[32]; // 2b76:1ee0
db dummyd_2d660[32]; // 2b76:1f00
db dummyd_2d680[32]; // 2b76:1f20
db dummyd_2d6a0[32]; // 2b76:1f40
db dummyd_2d6c0[32]; // 2b76:1f60
db dummyd_2d6e0[32]; // 2b76:1f80
db dummyd_2d700[32]; // 2b76:1fa0
db dummyd_2d720[32]; // 2b76:1fc0
db dummyd_2d740[32]; // 2b76:1fe0
db dummyd_2d760[32]; // 2b76:2000
db dummyd_2d780[32]; // 2b76:2020
db dummyd_2d7a0[32]; // 2b76:2040
db dummyd_2d7c0[32]; // 2b76:2060
db dummyd_2d7e0[32]; // 2b76:2080
db dummyd_2d800[32]; // 2b76:20a0
db dummyd_2d820[32]; // 2b76:20c0
db dummyd_2d840[32]; // 2b76:20e0
db dummyd_2d860[32]; // 2b76:2100
db dummyd_2d880[32]; // 2b76:2120
db dummyd_2d8a0[32]; // 2b76:2140
db dummyd_2d8c0[32]; // 2b76:2160
db dummyd_2d8e0[32]; // 2b76:2180
db dummyd_2d900[32]; // 2b76:21a0
db dummyd_2d920[32]; // 2b76:21c0
db dummyd_2d940[32]; // 2b76:21e0
db dummyd_2d960[32]; // 2b76:2200
db dummyd_2d980[32]; // 2b76:2220
db dummyd_2d9a0[32]; // 2b76:2240
db dummyd_2d9c0[32]; // 2b76:2260
db dummyd_2d9e0[32]; // 2b76:2280
db dummyd_2da00[32]; // 2b76:22a0
db dummyd_2da20[32]; // 2b76:22c0
db dummyd_2da40[32]; // 2b76:22e0
db dummyd_2da60[32]; // 2b76:2300
db dummyd_2da80[32]; // 2b76:2320
db dummyd_2daa0[32]; // 2b76:2340
db dummyd_2dac0[32]; // 2b76:2360
db dummyd_2dae0[32]; // 2b76:2380
db dummyd_2db00[32]; // 2b76:23a0
db dummyd_2db20[32]; // 2b76:23c0
db dummyd_2db40[32]; // 2b76:23e0
db dummyd_2db60[32]; // 2b76:2400
db dummyd_2db80[32]; // 2b76:2420
db dummyd_2dba0[32]; // 2b76:2440
db dummyd_2dbc0[32]; // 2b76:2460
db dummyd_2dbe0[32]; // 2b76:2480
db dummyd_2dc00[32]; // 2b76:24a0
db dummyd_2dc20[32]; // 2b76:24c0
db dummyd_2dc40[32]; // 2b76:24e0
db dummyd_2dc60[32]; // 2b76:2500
db dummyd_2dc80[32]; // 2b76:2520
db dummyd_2dca0[32]; // 2b76:2540
db dummyd_2dcc0[32]; // 2b76:2560
db dummyd_2dce0[32]; // 2b76:2580
db dummyd_2dd00[32]; // 2b76:25a0
db dummyd_2dd20[32]; // 2b76:25c0
db dummyd_2dd40[32]; // 2b76:25e0
db dummyd_2dd60; // 2b76:2600
db dummyd_2dd61; // 2b76:2601
db dummyd_2dd62; // 2b76:2602
db dummyd_2dd63; // 2b76:2603
db dummyd_2dd64; // 2b76:2604
db dummyd_2dd65;
db dummyd_2dd66; // 2b76:2606
db dummyd_2dd67; // 2b76:2607
db dummyd_2dd68; // 2b76:2608
db dummyd_2dd69;
db dummyd_2dd6a;
db dummyd_2dd6b; // 2b76:260b
db dummyd_2dd6c; // 2b76:260c
db dummyd_2dd6d;
db dummyd_2dd6e;
db dummyd_2dd6f; // 2b76:260f
db dummyd_2dd70[32]; // 2dd7:0000
db dummyd_2dd90[32]; // 2dd7:0020
db dummyd_2ddb0[32]; // 2dd7:0040
db dummyd_2ddd0[32]; // 2dd7:0060
db dummyd_2ddf0[32]; // 2dd7:0080
db dummyd_2de10[32]; // 2dd7:00a0
db dummyd_2de30[32]; // 2dd7:00c0
db dummyd_2de50[32]; // 2dd7:00e0
db dummyd_2de70[32]; // 2dd7:0100
db dummyd_2de90[32]; // 2dd7:0120
db dummyd_2deb0[32]; // 2dd7:0140
db dummyd_2ded0[32]; // 2dd7:0160
db dummyd_2def0[32]; // 2dd7:0180
db dummyd_2df10[32]; // 2dd7:01a0
db dummyd_2df30[32]; // 2dd7:01c0
db dummyd_2df50[32]; // 2dd7:01e0
db dummyd_2df70[32]; // 2dd7:0200
db dummyd_2df90[32]; // 2dd7:0220
db dummyd_2dfb0[32]; // 2dd7:0240
db dummyd_2dfd0[32]; // 2dd7:0260
db dummyd_2dff0[32]; // 2dd7:0280
db dummyd_2e010[32]; // 2dd7:02a0
db dummyd_2e030[32]; // 2dd7:02c0
db dummyd_2e050[32]; // 2dd7:02e0
db dummyd_2e070[32]; // 2dd7:0300
db dummyd_2e090[32]; // 2dd7:0320
db dummyd_2e0b0[32]; // 2dd7:0340
db dummyd_2e0d0[32]; // 2dd7:0360
db dummyd_2e0f0[32]; // 2dd7:0380
db dummyd_2e110[32]; // 2dd7:03a0
db dummyd_2e130[32]; // 2dd7:03c0
db dummyd_2e150[32]; // 2dd7:03e0
db dummyd_2e170[32]; // 2dd7:0400
db dummyd_2e190[32]; // 2dd7:0420
db dummyd_2e1b0[32]; // 2dd7:0440
db dummyd_2e1d0[32]; // 2dd7:0460
db dummyd_2e1f0[32]; // 2dd7:0480
db dummyd_2e210[32]; // 2dd7:04a0
db dummyd_2e230[32]; // 2dd7:04c0
db dummyd_2e250[32]; // 2dd7:04e0
db dummyd_2e270[32]; // 2dd7:0500
db dummyd_2e290[32]; // 2dd7:0520
db dummyd_2e2b0[32]; // 2dd7:0540
db dummyd_2e2d0[32]; // 2dd7:0560
db dummyd_2e2f0[32]; // 2dd7:0580
db dummyd_2e310[32]; // 2dd7:05a0
db dummyd_2e330[32]; // 2dd7:05c0
db dummyd_2e350[32]; // 2dd7:05e0
db dummyd_2e370[32]; // 2dd7:0600
db dummyd_2e390[32]; // 2dd7:0620
db dummyd_2e3b0[32]; // 2dd7:0640
db dummyd_2e3d0[32]; // 2dd7:0660
db dummyd_2e3f0[32]; // 2dd7:0680
db dummyd_2e410[32]; // 2dd7:06a0
db dummyd_2e430[32]; // 2dd7:06c0
db dummyd_2e450[32]; // 2dd7:06e0
db dummyd_2e470[32]; // 2dd7:0700
db dummyd_2e490[32]; // 2dd7:0720
db dummyd_2e4b0[32]; // 2dd7:0740
db dummyd_2e4d0[32]; // 2dd7:0760
db dummyd_2e4f0[32]; // 2dd7:0780
db dummyd_2e510[32]; // 2dd7:07a0
db dummyd_2e530[32]; // 2dd7:07c0
db dummyd_2e550[32]; // 2dd7:07e0
db dummyd_2e570[32]; // 2dd7:0800
db dummyd_2e590[32]; // 2dd7:0820
db dummyd_2e5b0[32]; // 2dd7:0840
db dummyd_2e5d0[32]; // 2dd7:0860
db dummyd_2e5f0[32]; // 2dd7:0880
db dummyd_2e610[32]; // 2dd7:08a0
db dummyd_2e630[32]; // 2dd7:08c0
db dummyd_2e650[32]; // 2dd7:08e0
db dummyd_2e670[32]; // 2dd7:0900
db dummyd_2e690[32]; // 2dd7:0920
db dummyd_2e6b0[32]; // 2dd7:0940
db dummyd_2e6d0[32]; // 2dd7:0960
db dummyd_2e6f0[32]; // 2dd7:0980
db dummyd_2e710[32]; // 2dd7:09a0
db dummyd_2e730[32]; // 2dd7:09c0
db dummyd_2e750[32]; // 2dd7:09e0
db dummyd_2e770[32]; // 2dd7:0a00
db dummyd_2e790[32]; // 2dd7:0a20
db dummyd_2e7b0[32]; // 2dd7:0a40
db dummyd_2e7d0[32]; // 2dd7:0a60
db dummyd_2e7f0[32]; // 2dd7:0a80
db dummyd_2e810[32]; // 2dd7:0aa0
db dummyd_2e830[32]; // 2dd7:0ac0
db dummyd_2e850[32]; // 2dd7:0ae0
db dummyd_2e870[32]; // 2dd7:0b00
db dummyd_2e890[32]; // 2dd7:0b20
db dummyd_2e8b0[32]; // 2dd7:0b40
db dummyd_2e8d0[32]; // 2dd7:0b60
db dummyd_2e8f0[32]; // 2dd7:0b80
db dummyd_2e910[32]; // 2dd7:0ba0
db dummyd_2e930[32]; // 2dd7:0bc0
db dummyd_2e950[32]; // 2dd7:0be0
db dummyd_2e970[32]; // 2dd7:0c00
db dummyd_2e990[32]; // 2dd7:0c20
db dummyd_2e9b0[32]; // 2dd7:0c40
db dummyd_2e9d0[32]; // 2dd7:0c60
db dummyd_2e9f0[32]; // 2dd7:0c80
db dummyd_2ea10[32]; // 2dd7:0ca0
db dummyd_2ea30[32]; // 2dd7:0cc0
db dummyd_2ea50[32]; // 2dd7:0ce0
db dummyd_2ea70[32]; // 2dd7:0d00
db dummyd_2ea90[32]; // 2dd7:0d20
db dummyd_2eab0[32]; // 2dd7:0d40
db dummyd_2ead0[32]; // 2dd7:0d60
db dummyd_2eaf0[32]; // 2dd7:0d80
db dummyd_2eb10[32]; // 2dd7:0da0
db dummyd_2eb30[32]; // 2dd7:0dc0
db dummyd_2eb50[32]; // 2dd7:0de0
db dummyd_2eb70[32]; // 2dd7:0e00
db dummyd_2eb90[32]; // 2dd7:0e20
db dummyd_2ebb0[32]; // 2dd7:0e40
db dummyd_2ebd0[32]; // 2dd7:0e60
db dummyd_2ebf0[32]; // 2dd7:0e80
db dummyd_2ec10[32]; // 2dd7:0ea0
db dummyd_2ec30[32]; // 2dd7:0ec0
db dummyd_2ec50[32]; // 2dd7:0ee0
db dummyd_2ec70[32]; // 2dd7:0f00
db dummyd_2ec90[32]; // 2dd7:0f20
db dummyd_2ecb0[32]; // 2dd7:0f40
db dummyd_2ecd0[32]; // 2dd7:0f60
db dummyd_2ecf0[32]; // 2dd7:0f80
db dummyd_2ed10[32]; // 2dd7:0fa0
db dummyd_2ed30[32]; // 2dd7:0fc0
db dummyd_2ed50[32]; // 2dd7:0fe0
db dummyd_2ed70[32]; // 2dd7:1000
db dummyd_2ed90[32]; // 2dd7:1020
db dummyd_2edb0[32]; // 2dd7:1040
db dummyd_2edd0[32]; // 2dd7:1060
db dummyd_2edf0[32]; // 2dd7:1080
db dummyd_2ee10[32]; // 2dd7:10a0
db dummyd_2ee30[32]; // 2dd7:10c0
db dummyd_2ee50[32]; // 2dd7:10e0
db dummyd_2ee70[32]; // 2dd7:1100
db dummyd_2ee90[32]; // 2dd7:1120
db dummyd_2eeb0[32]; // 2dd7:1140
db dummyd_2eed0[32]; // 2dd7:1160
db dummyd_2eef0[32]; // 2dd7:1180
db dummyd_2ef10[32]; // 2dd7:11a0
db dummyd_2ef30[32]; // 2dd7:11c0
db dummyd_2ef50[32]; // 2dd7:11e0
db dummyd_2ef70[32]; // 2dd7:1200
db dummyd_2ef90[32]; // 2dd7:1220
db dummyd_2efb0[32]; // 2dd7:1240
db dummyd_2efd0[32]; // 2dd7:1260
db dummyd_2eff0[32]; // 2dd7:1280
db dummyd_2f010[32]; // 2dd7:12a0
db dummyd_2f030[32]; // 2dd7:12c0
db dummyd_2f050[32]; // 2dd7:12e0
db dummyd_2f070[32]; // 2dd7:1300
db dummyd_2f090[32]; // 2dd7:1320
db dummyd_2f0b0[32]; // 2dd7:1340
db dummyd_2f0d0[32]; // 2dd7:1360
db dummyd_2f0f0[32]; // 2dd7:1380
db dummyd_2f110[32]; // 2dd7:13a0
db dummyd_2f130[32]; // 2dd7:13c0
db dummyd_2f150[32]; // 2dd7:13e0
db dummyd_2f170[32]; // 2dd7:1400
db dummyd_2f190[32]; // 2dd7:1420
db dummyd_2f1b0[32]; // 2dd7:1440
db dummyd_2f1d0[32]; // 2dd7:1460
db dummyd_2f1f0[32]; // 2dd7:1480
db dummyd_2f210[32]; // 2dd7:14a0
db dummyd_2f230[32]; // 2dd7:14c0
db dummyd_2f250[32]; // 2dd7:14e0
db dummyd_2f270[32]; // 2dd7:1500
db dummyd_2f290[32]; // 2dd7:1520
db dummyd_2f2b0[32]; // 2dd7:1540
db dummyd_2f2d0[32]; // 2dd7:1560
db dummyd_2f2f0[32]; // 2dd7:1580
db dummyd_2f310[32]; // 2dd7:15a0
db dummyd_2f330[32]; // 2dd7:15c0
db dummyd_2f350[32]; // 2dd7:15e0
db dummyd_2f370[32]; // 2dd7:1600
db dummyd_2f390[32]; // 2dd7:1620
db dummyd_2f3b0[32]; // 2dd7:1640
db dummyd_2f3d0[32]; // 2dd7:1660
db dummyd_2f3f0[32]; // 2dd7:1680
db dummyd_2f410[32]; // 2dd7:16a0
db dummyd_2f430[32]; // 2dd7:16c0
db dummyd_2f450[32]; // 2dd7:16e0
db dummyd_2f470[32]; // 2dd7:1700
db dummyd_2f490[32]; // 2dd7:1720
db dummyd_2f4b0[32]; // 2dd7:1740
db dummyd_2f4d0[32]; // 2dd7:1760
db dummyd_2f4f0[32]; // 2dd7:1780
db dummyd_2f510[32]; // 2dd7:17a0
db dummyd_2f530[32]; // 2dd7:17c0
db dummyd_2f550[32]; // 2dd7:17e0
db dummyd_2f570[32]; // 2dd7:1800
db dummyd_2f590[32]; // 2dd7:1820
db dummyd_2f5b0[32]; // 2dd7:1840
db dummyd_2f5d0[32]; // 2dd7:1860
db dummyd_2f5f0[32]; // 2dd7:1880
db dummyd_2f610[32]; // 2dd7:18a0
db dummyd_2f630[32]; // 2dd7:18c0
db dummyd_2f650[32]; // 2dd7:18e0
db dummyd_2f670[32]; // 2dd7:1900
db dummyd_2f690[32]; // 2dd7:1920
db dummyd_2f6b0[32]; // 2dd7:1940
db dummyd_2f6d0[32]; // 2dd7:1960
db dummyd_2f6f0[32]; // 2dd7:1980
db dummyd_2f710[32]; // 2dd7:19a0
db dummyd_2f730[32]; // 2dd7:19c0
db dummyd_2f750[32]; // 2dd7:19e0
db dummyd_2f770[32]; // 2dd7:1a00
db dummyd_2f790[32]; // 2dd7:1a20
db dummyd_2f7b0[32]; // 2dd7:1a40
db dummyd_2f7d0[32]; // 2dd7:1a60
db dummyd_2f7f0[32]; // 2dd7:1a80
db dummyd_2f810[32]; // 2dd7:1aa0
db dummyd_2f830[32]; // 2dd7:1ac0
db dummyd_2f850[32]; // 2dd7:1ae0
db dummyd_2f870[32]; // 2dd7:1b00
db dummyd_2f890[32]; // 2dd7:1b20
db dummyd_2f8b0[32]; // 2dd7:1b40
db dummyd_2f8d0[32]; // 2dd7:1b60
db dummyd_2f8f0[32]; // 2dd7:1b80
db dummyd_2f910[32]; // 2dd7:1ba0
db dummyd_2f930[32]; // 2dd7:1bc0
db dummyd_2f950[32]; // 2dd7:1be0
db dummyd_2f970[32]; // 2dd7:1c00
db dummyd_2f990[32]; // 2dd7:1c20
db dummyd_2f9b0[32]; // 2dd7:1c40
db dummyd_2f9d0[32]; // 2dd7:1c60
db dummyd_2f9f0[32]; // 2dd7:1c80
db dummyd_2fa10[32]; // 2dd7:1ca0
db dummyd_2fa30[32]; // 2dd7:1cc0
db dummyd_2fa50[32]; // 2dd7:1ce0
db dummyd_2fa70[32]; // 2dd7:1d00
db dummyd_2fa90[32]; // 2dd7:1d20
db dummyd_2fab0[32]; // 2dd7:1d40
db dummyd_2fad0[32]; // 2dd7:1d60
db dummyd_2faf0[32]; // 2dd7:1d80
db dummyd_2fb10[32]; // 2dd7:1da0
db dummyd_2fb30[32]; // 2dd7:1dc0
db dummyd_2fb50[32]; // 2dd7:1de0
db dummyd_2fb70[32]; // 2dd7:1e00
db dummyd_2fb90[32]; // 2dd7:1e20
db dummyd_2fbb0[32]; // 2dd7:1e40
db dummyd_2fbd0[32]; // 2dd7:1e60
db dummyd_2fbf0[32]; // 2dd7:1e80
db dummyd_2fc10[32]; // 2dd7:1ea0
db dummyd_2fc30[32]; // 2dd7:1ec0
db dummyd_2fc50[32]; // 2dd7:1ee0
db dummyd_2fc70[32]; // 2dd7:1f00
db dummyd_2fc90[32]; // 2dd7:1f20
db dummyd_2fcb0[32]; // 2dd7:1f40
db dummyd_2fcd0[32]; // 2dd7:1f60
db dummyd_2fcf0[32]; // 2dd7:1f80
db dummyd_2fd10[32]; // 2dd7:1fa0
db dummyd_2fd30[32]; // 2dd7:1fc0
db dummyd_2fd50[32]; // 2dd7:1fe0
db dummyd_2fd70[32]; // 2dd7:2000
db dummyd_2fd90[32]; // 2dd7:2020
db dummyd_2fdb0[32]; // 2dd7:2040
db dummyd_2fdd0[32]; // 2dd7:2060
db dummyd_2fdf0[32]; // 2dd7:2080
db dummyd_2fe10[32]; // 2dd7:20a0
db dummyd_2fe30[32]; // 2dd7:20c0
db dummyd_2fe50[32]; // 2dd7:20e0
db dummyd_2fe70[32]; // 2dd7:2100
db dummyd_2fe90[32]; // 2dd7:2120
db dummyd_2feb0[32]; // 2dd7:2140
db dummyd_2fed0[32]; // 2dd7:2160
db dummyd_2fef0[32]; // 2dd7:2180
db dummyd_2ff10[32]; // 2dd7:21a0
db dummyd_2ff30[32]; // 2dd7:21c0
db dummyd_2ff50[32]; // 2dd7:21e0
db dummyd_2ff70[32]; // 2dd7:2200
db dummyd_2ff90[32]; // 2dd7:2220
db dummyd_2ffb0[32]; // 2dd7:2240
db dummyd_2ffd0[32]; // 2dd7:2260
db dummyd_2fff0[32]; // 2dd7:2280
db dummyd_30010[32]; // 2dd7:22a0
db dummyd_30030[32]; // 2dd7:22c0
db dummyd_30050[32]; // 2dd7:22e0
db dummyd_30070[32]; // 2dd7:2300
db dummyd_30090[32]; // 2dd7:2320
db dummyd_300b0[32]; // 2dd7:2340
db dummyd_300d0[32]; // 2dd7:2360
db dummyd_300f0[32]; // 2dd7:2380
db dummyd_30110[32]; // 2dd7:23a0
db dummyd_30130[32]; // 2dd7:23c0
db dummyd_30150[32]; // 2dd7:23e0
db dummyd_30170[32]; // 2dd7:2400
db dummyd_30190[32]; // 2dd7:2420
db dummyd_301b0[32]; // 2dd7:2440
db dummyd_301d0[32]; // 2dd7:2460
db dummyd_301f0[32]; // 2dd7:2480
db dummyd_30210[32]; // 2dd7:24a0
db dummyd_30230[32]; // 2dd7:24c0
db dummyd_30250[32]; // 2dd7:24e0
db dummyd_30270[32]; // 2dd7:2500
db dummyd_30290[32]; // 2dd7:2520
db dummyd_302b0[32]; // 2dd7:2540
db dummyd_302d0[32]; // 2dd7:2560
db dummyd_302f0[32]; // 2dd7:2580
db dummyd_30310[32]; // 2dd7:25a0
db dummyd_30330[32]; // 2dd7:25c0
db dummyd_30350[32]; // 2dd7:25e0
db dummyd_30370[32]; // 2dd7:2600
db dummyd_30390[32]; // 2dd7:2620
db dummyd_303b0[32]; // 2dd7:2640
db dummyd_303d0[32]; // 2dd7:2660
db dummyd_303f0[32]; // 2dd7:2680
db dummyd_30410[32]; // 2dd7:26a0
db dummyd_30430[32]; // 2dd7:26c0
db dummyd_30450[32]; // 2dd7:26e0
db dummyd_30470[32]; // 2dd7:2700
db dummyd_30490[32]; // 2dd7:2720
db dummyd_304b0[32]; // 2dd7:2740
db dummyd_304d0[32]; // 2dd7:2760
db dummyd_304f0[32]; // 2dd7:2780
db dummyd_30510[32]; // 2dd7:27a0
db dummyd_30530[32]; // 2dd7:27c0
db dummyd_30550[32]; // 2dd7:27e0
db dummyd_30570[32]; // 2dd7:2800
db dummyd_30590[32]; // 2dd7:2820
db dummyd_305b0[32]; // 2dd7:2840
db dummyd_305d0[32]; // 2dd7:2860
db dummyd_305f0[32]; // 2dd7:2880
db dummyd_30610[32]; // 2dd7:28a0
db dummyd_30630[32]; // 2dd7:28c0
db dummyd_30650[32]; // 2dd7:28e0
db dummyd_30670[32]; // 2dd7:2900
db dummyd_30690[32]; // 2dd7:2920
db dummyd_306b0[32]; // 2dd7:2940
db dummyd_306d0[32]; // 2dd7:2960
db dummyd_306f0[32]; // 2dd7:2980
db dummyd_30710[32]; // 2dd7:29a0
db dummyd_30730[32]; // 2dd7:29c0
db dummyd_30750[32]; // 2dd7:29e0
db dummyd_30770[32]; // 2dd7:2a00
db dummyd_30790[32]; // 2dd7:2a20
db dummyd_307b0[32]; // 2dd7:2a40
db dummyd_307d0[32]; // 2dd7:2a60
db dummyd_307f0[32]; // 2dd7:2a80
db dummyd_30810[32]; // 2dd7:2aa0
db dummyd_30830[32]; // 2dd7:2ac0
db dummyd_30850[32]; // 2dd7:2ae0
db dummyd_30870[32]; // 2dd7:2b00
db dummyd_30890[32]; // 2dd7:2b20
db dummyd_308b0[32]; // 2dd7:2b40
db dummyd_308d0[32]; // 2dd7:2b60
db dummyd_308f0[32]; // 2dd7:2b80
db dummyd_30910[32]; // 2dd7:2ba0
db dummyd_30930[32]; // 2dd7:2bc0
db dummyd_30950[32]; // 2dd7:2be0
db dummyd_30970[32]; // 2dd7:2c00
db dummyd_30990[32]; // 2dd7:2c20
db dummyd_309b0[32]; // 2dd7:2c40
db dummyd_309d0[32]; // 2dd7:2c60
db dummyd_309f0[32]; // 2dd7:2c80
db dummyd_30a10[32]; // 2dd7:2ca0
db dummyd_30a30[32]; // 2dd7:2cc0
db dummyd_30a50[32]; // 2dd7:2ce0
db dummyd_30a70[32]; // 2dd7:2d00
db dummyd_30a90[32]; // 2dd7:2d20
db dummyd_30ab0[32]; // 2dd7:2d40
db dummyd_30ad0[32]; // 2dd7:2d60
db dummyd_30af0[32]; // 2dd7:2d80
db dummyd_30b10[32]; // 2dd7:2da0
db dummyd_30b30[32]; // 2dd7:2dc0
db dummyd_30b50[32]; // 2dd7:2de0
db dummyd_30b70[32]; // 2dd7:2e00
db dummyd_30b90[32]; // 2dd7:2e20
db dummyd_30bb0[32]; // 2dd7:2e40
db dummyd_30bd0[32]; // 2dd7:2e60
db dummyd_30bf0[32]; // 2dd7:2e80
db dummyd_30c10[32]; // 2dd7:2ea0
db dummyd_30c30[32]; // 2dd7:2ec0
db dummyd_30c50[32]; // 2dd7:2ee0
db dummyd_30c70[32]; // 2dd7:2f00
db dummyd_30c90[32]; // 2dd7:2f20
db dummyd_30cb0[32]; // 2dd7:2f40
db dummyd_30cd0[32]; // 2dd7:2f60
db dummyd_30cf0[32]; // 2dd7:2f80
db dummyd_30d10[32]; // 2dd7:2fa0
db dummyd_30d30[32]; // 2dd7:2fc0
db dummyd_30d50[32]; // 2dd7:2fe0
db dummyd_30d70[32]; // 2dd7:3000
db dummyd_30d90[32]; // 2dd7:3020
db dummyd_30db0[32]; // 2dd7:3040
db dummyd_30dd0[32]; // 2dd7:3060
db dummyd_30df0[32]; // 2dd7:3080
db dummyd_30e10[32]; // 2dd7:30a0
db dummyd_30e30[32]; // 2dd7:30c0
db dummyd_30e50[32]; // 2dd7:30e0
db dummyd_30e70[32]; // 2dd7:3100
db dummyd_30e90[32]; // 2dd7:3120
db dummyd_30eb0[32]; // 2dd7:3140
db dummyd_30ed0[32]; // 2dd7:3160
db dummyd_30ef0[32]; // 2dd7:3180
db dummyd_30f10[32]; // 2dd7:31a0
db dummyd_30f30[32]; // 2dd7:31c0
db dummyd_30f50[32]; // 2dd7:31e0
db dummyd_30f70[32]; // 2dd7:3200
db dummyd_30f90[32]; // 2dd7:3220
db dummyd_30fb0[32]; // 2dd7:3240
db dummyd_30fd0[32]; // 2dd7:3260
db dummyd_30ff0[32]; // 2dd7:3280
db dummyd_31010[32]; // 2dd7:32a0
db dummyd_31030[32]; // 2dd7:32c0
db dummyd_31050[32]; // 2dd7:32e0
db dummyd_31070[32]; // 2dd7:3300
db dummyd_31090[32]; // 2dd7:3320
db dummyd_310b0[32]; // 2dd7:3340
db dummyd_310d0[32]; // 2dd7:3360
db dummyd_310f0[32]; // 2dd7:3380
db dummyd_31110[32]; // 2dd7:33a0
db dummyd_31130[32]; // 2dd7:33c0
db dummyd_31150[32]; // 2dd7:33e0
db dummyd_31170[32]; // 2dd7:3400
db dummyd_31190[32]; // 2dd7:3420
db dummyd_311b0[32]; // 2dd7:3440
db dummyd_311d0[32]; // 2dd7:3460
db dummyd_311f0[32]; // 2dd7:3480
db dummyd_31210[32]; // 2dd7:34a0
db dummyd_31230[32]; // 2dd7:34c0
db dummyd_31250[32]; // 2dd7:34e0
db dummyd_31270[32]; // 2dd7:3500
db dummyd_31290[32]; // 2dd7:3520
db dummyd_312b0[32]; // 2dd7:3540
db dummyd_312d0[32]; // 2dd7:3560
db dummyd_312f0[32]; // 2dd7:3580
db dummyd_31310[32]; // 2dd7:35a0
db dummyd_31330[32]; // 2dd7:35c0
db dummyd_31350[32]; // 2dd7:35e0
db dummyd_31370[32]; // 2dd7:3600
db dummyd_31390[32]; // 2dd7:3620
db dummyd_313b0[32]; // 2dd7:3640
db dummyd_313d0[32]; // 2dd7:3660
db dummyd_313f0[32]; // 2dd7:3680
db dummyd_31410[32]; // 2dd7:36a0
db dummyd_31430[32]; // 2dd7:36c0
db dummyd_31450[32]; // 2dd7:36e0
db dummyd_31470[32]; // 2dd7:3700
db dummyd_31490[32]; // 2dd7:3720
db dummyd_314b0[32]; // 2dd7:3740
db dummyd_314d0[32]; // 2dd7:3760
db dummyd_314f0[32]; // 2dd7:3780
db dummyd_31510[32]; // 2dd7:37a0
db dummyd_31530[32]; // 2dd7:37c0
db dummyd_31550[32]; // 2dd7:37e0
db dummyd_31570[32]; // 2dd7:3800
db dummyd_31590[32]; // 2dd7:3820
db dummyd_315b0[32]; // 2dd7:3840
db dummyd_315d0[32]; // 2dd7:3860
db dummyd_315f0[32]; // 2dd7:3880
db dummyd_31610[32]; // 2dd7:38a0
db dummyd_31630[32]; // 2dd7:38c0
db dummyd_31650[32]; // 2dd7:38e0
db dummyd_31670[32]; // 2dd7:3900
db dummyd_31690[32]; // 2dd7:3920
db dummyd_316b0[32]; // 2dd7:3940
db dummyd_316d0[32]; // 2dd7:3960
db dummyd_316f0[32]; // 2dd7:3980
db dummyd_31710[32]; // 2dd7:39a0
db dummyd_31730[32]; // 2dd7:39c0
db dummyd_31750[32]; // 2dd7:39e0
db dummyd_31770[32]; // 2dd7:3a00
db dummyd_31790[32]; // 2dd7:3a20
db dummyd_317b0[32]; // 2dd7:3a40
db dummyd_317d0[32]; // 2dd7:3a60
db dummyd_317f0[32]; // 2dd7:3a80
db dummyd_31810[32]; // 2dd7:3aa0
db dummyd_31830[32]; // 2dd7:3ac0
db dummyd_31850[32]; // 2dd7:3ae0
db dummyd_31870[32]; // 2dd7:3b00
db dummyd_31890[32]; // 2dd7:3b20
db dummyd_318b0[32]; // 2dd7:3b40
db dummyd_318d0[32]; // 2dd7:3b60
db dummyd_318f0[32]; // 2dd7:3b80
db dummyd_31910[32]; // 2dd7:3ba0
db dummyd_31930[32]; // 2dd7:3bc0
db dummyd_31950[32]; // 2dd7:3be0
db dummyd_31970[32]; // 2dd7:3c00
db dummyd_31990[32]; // 2dd7:3c20
db dummyd_319b0[32]; // 2dd7:3c40
db dummyd_319d0[32]; // 2dd7:3c60
db dummyd_319f0[32]; // 2dd7:3c80
db dummyd_31a10[32]; // 2dd7:3ca0
db dummyd_31a30[32]; // 2dd7:3cc0
db dummyd_31a50[32]; // 2dd7:3ce0
db dummyd_31a70[32]; // 2dd7:3d00
db dummyd_31a90[32]; // 2dd7:3d20
db dummyd_31ab0[32]; // 2dd7:3d40
db dummyd_31ad0[32]; // 2dd7:3d60
db dummyd_31af0[32]; // 2dd7:3d80
db dummyd_31b10[32]; // 2dd7:3da0
db dummyd_31b30[32]; // 2dd7:3dc0
db dummyd_31b50[32]; // 2dd7:3de0
db dummyd_31b70[32]; // 2dd7:3e00
db dummyd_31b90[32]; // 2dd7:3e20
db dummyd_31bb0[32]; // 2dd7:3e40
db dummyd_31bd0[32]; // 2dd7:3e60
db dummyd_31bf0[32]; // 2dd7:3e80
db dummyd_31c10[32]; // 2dd7:3ea0
db dummyd_31c30[32]; // 2dd7:3ec0
db dummyd_31c50[32]; // 2dd7:3ee0
db dummyd_31c70[32]; // 2dd7:3f00
db dummyd_31c90[32]; // 2dd7:3f20
db dummyd_31cb0[32]; // 2dd7:3f40
db dummyd_31cd0[32]; // 2dd7:3f60
db dummyd_31cf0[32]; // 2dd7:3f80
db dummyd_31d10[32]; // 2dd7:3fa0
db dummyd_31d30[32]; // 2dd7:3fc0
db dummyd_31d50[32]; // 2dd7:3fe0
db dummyd_31d70[32]; // 2dd7:4000
db dummyd_31d90[32]; // 2dd7:4020
db dummyd_31db0[32]; // 2dd7:4040
db dummyd_31dd0[32]; // 2dd7:4060
db dummyd_31df0[32]; // 2dd7:4080
db dummyd_31e10[32]; // 2dd7:40a0
db dummyd_31e30[32]; // 2dd7:40c0
db dummyd_31e50[32]; // 2dd7:40e0
db dummyd_31e70[32]; // 2dd7:4100
db dummyd_31e90[32]; // 2dd7:4120
db dummyd_31eb0[32]; // 2dd7:4140
db dummyd_31ed0[32]; // 2dd7:4160
db dummyd_31ef0[32]; // 2dd7:4180
db dummyd_31f10[32]; // 2dd7:41a0
db dummyd_31f30[32]; // 2dd7:41c0
db dummyd_31f50[32]; // 2dd7:41e0
db dummyd_31f70[32]; // 2dd7:4200
db dummyd_31f90[32]; // 2dd7:4220
db dummyd_31fb0[32]; // 2dd7:4240
db dummyd_31fd0[32]; // 2dd7:4260
db dummyd_31ff0[32]; // 2dd7:4280
db dummyd_32010[32]; // 2dd7:42a0
db dummyd_32030[32]; // 2dd7:42c0
db dummyd_32050[32]; // 2dd7:42e0
db dummyd_32070[32]; // 2dd7:4300
db dummyd_32090[32]; // 2dd7:4320
db dummyd_320b0[32]; // 2dd7:4340
db dummyd_320d0[32]; // 2dd7:4360
db dummyd_320f0[32]; // 2dd7:4380
db dummyd_32110[32]; // 2dd7:43a0
db dummyd_32130[32]; // 2dd7:43c0
db dummyd_32150[32]; // 2dd7:43e0
db dummyd_32170[32]; // 2dd7:4400
db dummyd_32190[32]; // 2dd7:4420
db dummyd_321b0[32]; // 2dd7:4440
db dummyd_321d0[32]; // 2dd7:4460
db dummyd_321f0[32]; // 2dd7:4480
db dummyd_32210[32]; // 2dd7:44a0
db dummyd_32230[32]; // 3223:0000
db dummyd_32250[32]; // 3223:0020
db dummyd_32270[32]; // 3223:0040
db dummyd_32290[32]; // 3223:0060
db dummyd_322b0[32]; // 3223:0080
db dummyd_322d0[32]; // 3223:00a0
db dummyd_322f0[32]; // 3223:00c0
db dummyd_32310[32]; // 3223:00e0
db dummyd_32330[32]; // 3223:0100
db dummyd_32350[32]; // 3223:0120
db dummyd_32370[32]; // 3223:0140
db dummyd_32390[32]; // 3223:0160
db dummyd_323b0[32]; // 3223:0180
db dummyd_323d0[32]; // 3223:01a0
db dummyd_323f0[32]; // 3223:01c0
db dummyd_32410[32]; // 3223:01e0
db dummyd_32430[32]; // 3223:0200
db dummyd_32450[32]; // 3223:0220
db dummyd_32470[32]; // 3223:0240
db dummyd_32490[32]; // 3223:0260
db dummyd_324b0[32]; // 3223:0280
db dummyd_324d0[32]; // 3223:02a0
db dummyd_324f0[32]; // 3223:02c0
db dummyd_32510[32]; // 3223:02e0
db dummyd_32530[32]; // 3223:0300
db dummyd_32550[32]; // 3223:0320
db dummyd_32570[32]; // 3223:0340
db dummyd_32590[32]; // 3223:0360
db dummyd_325b0[32]; // 3223:0380
db dummyd_325d0[32]; // 3223:03a0
db dummyd_325f0[32]; // 3223:03c0
db dummyd_32610[32]; // 3223:03e0
db dummyd_32630[32]; // 3223:0400
db dummyd_32650[32]; // 3223:0420
db dummyd_32670[32]; // 3223:0440
db dummyd_32690[32]; // 3223:0460
db dummyd_326b0[32]; // 3223:0480
db dummyd_326d0[32]; // 3223:04a0
db dummyd_326f0[32]; // 3223:04c0
db dummyd_32710[32]; // 3223:04e0
db dummyd_32730[32]; // 3223:0500
db dummyd_32750[32]; // 3223:0520
db dummyd_32770[32]; // 3223:0540
db dummyd_32790[32]; // 3223:0560
db dummyd_327b0[32]; // 3223:0580
db dummyd_327d0[32]; // 3223:05a0
db dummyd_327f0[32]; // 3223:05c0
db dummyd_32810[32]; // 3223:05e0
db dummyd_32830[32]; // 3223:0600
db dummyd_32850[32]; // 3223:0620
db dummyd_32870[32]; // 3223:0640
db dummyd_32890[32]; // 3223:0660
db dummyd_328b0[32]; // 3223:0680
db dummyd_328d0[32]; // 3223:06a0
db dummyd_328f0[32]; // 3223:06c0
db dummyd_32910[32]; // 3223:06e0
db dummyd_32930[32]; // 3223:0700
db dummyd_32950[32]; // 3223:0720
db dummyd_32970[32]; // 3223:0740
db dummyd_32990[32]; // 3223:0760
db dummyd_329b0[32]; // 3223:0780
db dummyd_329d0[32]; // 3223:07a0
db dummyd_329f0[32]; // 3223:07c0
db dummyd_32a10[32]; // 3223:07e0
db dummyd_32a30[32]; // 3223:0800
db dummyd_32a50[32]; // 3223:0820
db dummyd_32a70[32]; // 3223:0840
db dummyd_32a90[32]; // 3223:0860
db dummyd_32ab0[32]; // 3223:0880
db dummyd_32ad0[32]; // 3223:08a0
db dummyd_32af0[32]; // 3223:08c0
db dummyd_32b10[32]; // 3223:08e0
db dummyd_32b30[32]; // 3223:0900
db dummyd_32b50[32]; // 3223:0920
db dummyd_32b70[32]; // 3223:0940
db dummyd_32b90[32]; // 3223:0960
db dummyd_32bb0[32]; // 3223:0980
db dummyd_32bd0[32]; // 3223:09a0
db dummyd_32bf0[32]; // 3223:09c0
db dummyd_32c10[32]; // 3223:09e0
db dummyd_32c30[32]; // 3223:0a00
db dummyd_32c50[32]; // 3223:0a20
db dummyd_32c70[32]; // 3223:0a40
db dummyd_32c90[32]; // 3223:0a60
db dummyd_32cb0[32]; // 3223:0a80
db dummyd_32cd0[32]; // 3223:0aa0
db dummyd_32cf0[32]; // 3223:0ac0
db dummyd_32d10[32]; // 3223:0ae0
db dummyd_32d30[32]; // 3223:0b00
db dummyd_32d50[32]; // 3223:0b20
db dummyd_32d70[32]; // 3223:0b40
db dummyd_32d90[32]; // 3223:0b60
db dummyd_32db0[32]; // 3223:0b80
db dummyd_32dd0[32]; // 3223:0ba0
db dummyd_32df0[32]; // 3223:0bc0
db dummyd_32e10[32]; // 3223:0be0
db dummyd_32e30[32]; // 3223:0c00
db dummyd_32e50[32]; // 3223:0c20
db dummyd_32e70[32]; // 3223:0c40
db dummyd_32e90[32]; // 3223:0c60
db dummyd_32eb0[32]; // 3223:0c80
db dummyd_32ed0[32]; // 3223:0ca0
db dummyd_32ef0[32]; // 3223:0cc0
db dummyd_32f10[32]; // 3223:0ce0
db dummyd_32f30[32]; // 3223:0d00
db dummyd_32f50[32]; // 3223:0d20
db dummyd_32f70[32]; // 3223:0d40
db dummyd_32f90[32]; // 3223:0d60
db dummyd_32fb0[32]; // 3223:0d80
db dummyd_32fd0[32]; // 3223:0da0
db dummyd_32ff0[32]; // 3223:0dc0
db dummyd_33010[32]; // 3223:0de0
db dummyd_33030[32]; // 3223:0e00
db dummyd_33050[32]; // 3223:0e20
db dummyd_33070[32]; // 3223:0e40
db dummyd_33090[32]; // 3223:0e60
db dummyd_330b0[32]; // 3223:0e80
db dummyd_330d0[32]; // 3223:0ea0
db dummyd_330f0[32]; // 3223:0ec0
db dummyd_33110[32]; // 3223:0ee0
db dummyd_33130[32]; // 3223:0f00
db dummyd_33150[32]; // 3223:0f20
db dummyd_33170[32]; // 3223:0f40
db dummyd_33190[32]; // 3223:0f60
db dummyd_331b0[32]; // 3223:0f80
db dummyd_331d0[32]; // 3223:0fa0
db dummyd_331f0[32]; // 3223:0fc0
db dummyd_33210[32]; // 3223:0fe0
db dummyd_33230[32]; // 3223:1000
db dummyd_33250[32]; // 3223:1020
db dummyd_33270[32]; // 3223:1040
db dummyd_33290[32]; // 3223:1060
db dummyd_332b0[32]; // 3223:1080
db dummyd_332d0[32]; // 3223:10a0
db dummyd_332f0[32]; // 3223:10c0
db dummyd_33310[32]; // 3223:10e0
db dummyd_33330[32]; // 3223:1100
db dummyd_33350[32]; // 3223:1120
db dummyd_33370[32]; // 3223:1140
db dummyd_33390[32]; // 3223:1160
db dummyd_333b0[32]; // 3223:1180
db dummyd_333d0[32]; // 3223:11a0
db dummyd_333f0[32]; // 3223:11c0
db dummyd_33410[32]; // 3223:11e0
db dummyd_33430[32]; // 3223:1200
db dummyd_33450[32]; // 3223:1220
db dummyd_33470[32]; // 3223:1240
db dummyd_33490[32]; // 3223:1260
db dummyd_334b0[32]; // 3223:1280
db dummyd_334d0[32]; // 3223:12a0
db dummyd_334f0[32]; // 3223:12c0
db dummyd_33510[32]; // 3223:12e0
db dummyd_33530[32]; // 3223:1300
db dummyd_33550[32]; // 3223:1320
db dummyd_33570[32]; // 3223:1340
db dummyd_33590[32]; // 3223:1360
db dummyd_335b0[32]; // 3223:1380
db dummyd_335d0[32]; // 3223:13a0
db dummyd_335f0[32]; // 3223:13c0
db dummyd_33610[32]; // 3223:13e0
db dummyd_33630[32]; // 3223:1400
db dummyd_33650[32]; // 3223:1420
db dummyd_33670[32]; // 3223:1440
db dummyd_33690[32]; // 3223:1460
db dummyd_336b0[32]; // 3223:1480
db dummyd_336d0[32]; // 3223:14a0
db dummyd_336f0[32]; // 3223:14c0
db dummyd_33710[32]; // 3223:14e0
db dummyd_33730[32]; // 3223:1500
db dummyd_33750[32]; // 3223:1520
db dummyd_33770[32]; // 3223:1540
db dummyd_33790[32]; // 3223:1560
db dummyd_337b0[32]; // 3223:1580
db dummyd_337d0[32]; // 3223:15a0
db dummyd_337f0[32]; // 3223:15c0
db dummyd_33810[32]; // 3223:15e0
db dummyd_33830[32]; // 3223:1600
db dummyd_33850[32]; // 3223:1620
db dummyd_33870[32]; // 3223:1640
db dummyd_33890[32]; // 3223:1660
db dummyd_338b0[32]; // 3223:1680
db dummyd_338d0[32]; // 3223:16a0
db dummyd_338f0[32]; // 3223:16c0
db dummyd_33910[32]; // 3223:16e0
db dummyd_33930[32]; // 3223:1700
db dummyd_33950[32]; // 3223:1720
db dummyd_33970[32]; // 3223:1740
db dummyd_33990[32]; // 3223:1760
db dummyd_339b0[32]; // 3223:1780
db dummyd_339d0[32]; // 3223:17a0
db dummyd_339f0[32]; // 3223:17c0
db dummyd_33a10[32]; // 3223:17e0
db dummyd_33a30[32]; // 3223:1800
db dummyd_33a50[32]; // 3223:1820
db dummyd_33a70[32]; // 3223:1840
db dummyd_33a90[32]; // 3223:1860
db dummyd_33ab0[32]; // 3223:1880
db dummyd_33ad0[32]; // 3223:18a0
db dummyd_33af0[32]; // 3223:18c0
db dummyd_33b10[32]; // 3223:18e0
db dummyd_33b30[32]; // 3223:1900
db dummyd_33b50[32]; // 3223:1920
db dummyd_33b70[32]; // 3223:1940
db dummyd_33b90[32]; // 3223:1960
db dummyd_33bb0[32]; // 3223:1980
db dummyd_33bd0[32]; // 3223:19a0
db dummyd_33bf0[32]; // 3223:19c0
db dummyd_33c10[32]; // 3223:19e0
db dummyd_33c30[32]; // 3223:1a00
db dummyd_33c50[32]; // 3223:1a20
db dummyd_33c70[32]; // 3223:1a40
db dummyd_33c90[32]; // 3223:1a60
db dummyd_33cb0[32]; // 3223:1a80
db dummyd_33cd0[32]; // 3223:1aa0
db dummyd_33cf0[32]; // 3223:1ac0
db dummyd_33d10[32]; // 3223:1ae0
db dummyd_33d30[32]; // 3223:1b00
db dummyd_33d50[32]; // 3223:1b20
db dummyd_33d70[32]; // 3223:1b40
db dummyd_33d90[32]; // 3223:1b60
db dummyd_33db0[32]; // 3223:1b80
db dummyd_33dd0[32]; // 3223:1ba0
db dummyd_33df0[32]; // 3223:1bc0
db dummyd_33e10[32]; // 3223:1be0
db dummyd_33e30[32]; // 3223:1c00
db dummyd_33e50[32]; // 3223:1c20
db dummyd_33e70[32]; // 3223:1c40
db dummyd_33e90[32]; // 3223:1c60
db dummyd_33eb0[32]; // 3223:1c80
db dummyd_33ed0[32]; // 3223:1ca0
db dummyd_33ef0[32]; // 3223:1cc0
db dummyd_33f10[32]; // 3223:1ce0
db dummyd_33f30[32]; // 3223:1d00
db dummyd_33f50[32]; // 3223:1d20
db dummyd_33f70[32]; // 3223:1d40
db dummyd_33f90[32]; // 3223:1d60
db dummyd_33fb0[32]; // 3223:1d80
db dummyd_33fd0[32]; // 3223:1da0
db dummyd_33ff0[32]; // 3223:1dc0
db dummyd_34010[32]; // 3223:1de0
db dummyd_34030[32]; // 3223:1e00
db dummyd_34050[32]; // 3223:1e20
db dummyd_34070[32]; // 3223:1e40
db dummyd_34090[32]; // 3223:1e60
db dummyd_340b0[32]; // 3223:1e80
db dummyd_340d0[32]; // 3223:1ea0
db dummyd_340f0[32]; // 3223:1ec0
db dummyd_34110[32]; // 3223:1ee0
db dummyd_34130[32]; // 3223:1f00
db dummyd_34150[32]; // 3223:1f20
db dummyd_34170[32]; // 3223:1f40
db dummyd_34190[32]; // 3223:1f60
db dummyd_341b0[32]; // 3223:1f80
db dummyd_341d0[32]; // 3223:1fa0
db dummyd_341f0[32]; // 3223:1fc0
db dummyd_34210[32]; // 3223:1fe0
db dummyd_34230[32]; // 3223:2000
db dummyd_34250[32]; // 3223:2020
db dummyd_34270[32]; // 3223:2040
db dummyd_34290[32]; // 3223:2060
db dummyd_342b0[32]; // 3223:2080
db dummyd_342d0[32]; // 3223:20a0
db dummyd_342f0[32]; // 3223:20c0
db dummyd_34310[32]; // 3223:20e0
db dummyd_34330[32]; // 3223:2100
db dummyd_34350[32]; // 3223:2120
db dummyd_34370[32]; // 3223:2140
db dummyd_34390[32]; // 3223:2160
db dummyd_343b0[32]; // 3223:2180
db dummyd_343d0[32]; // 3223:21a0
db dummyd_343f0[32]; // 3223:21c0
db dummyd_34410[32]; // 3223:21e0
db dummyd_34430[32]; // 3223:2200
db dummyd_34450[32]; // 3223:2220
db dummyd_34470[32]; // 3223:2240
db dummyd_34490[32]; // 3223:2260
db dummyd_344b0[32]; // 3223:2280
db dummyd_344d0[32]; // 3223:22a0
db dummyd_344f0[32]; // 3223:22c0
db dummyd_34510[32]; // 3223:22e0
db dummyd_34530[32]; // 3223:2300
db dummyd_34550[32]; // 3223:2320
db dummyd_34570[32]; // 3223:2340
db dummyd_34590[32]; // 3223:2360
db dummyd_345b0[32]; // 3223:2380
db dummyd_345d0[32]; // 3223:23a0
db dummyd_345f0[32]; // 3223:23c0
db dummyd_34610[32]; // 3223:23e0
db dummyd_34630[32]; // 3223:2400
db dummyd_34650[32]; // 3223:2420
db dummyd_34670[32]; // 3223:2440
db dummyd_34690[32]; // 3223:2460
db dummyd_346b0[32]; // 3223:2480
db dummyd_346d0[32]; // 3223:24a0
db dummyd_346f0[32]; // 3223:24c0
db dummyd_34710[32]; // 3223:24e0
db dummyd_34730[32]; // 3223:2500
db dummyd_34750[32]; // 3223:2520
db dummyd_34770[32]; // 3223:2540
db dummyd_34790[32]; // 3223:2560
db dummyd_347b0[32]; // 3223:2580
db dummyd_347d0[32]; // 3223:25a0
db dummyd_347f0[32]; // 3223:25c0
db dummyd_34810[32]; // 3223:25e0
db dummyd_34830[32]; // 3223:2600
db dummyd_34850[32]; // 3223:2620
db dummyd_34870[32]; // 3223:2640
db dummyd_34890[32]; // 3223:2660
db dummyd_348b0[32]; // 3223:2680
db dummyd_348d0[32]; // 3223:26a0
db dummyd_348f0[32]; // 3223:26c0
db dummyd_34910[32]; // 3223:26e0
db dummyd_34930[32]; // 3223:2700
db dummyd_34950[32]; // 3223:2720
db dummyd_34970[32]; // 3223:2740
db dummyd_34990[32]; // 3223:2760
db dummyd_349b0[32]; // 3223:2780
db dummyd_349d0[32]; // 3223:27a0
db dummyd_349f0[32]; // 3223:27c0
db dummyd_34a10[32]; // 3223:27e0
db dummyd_34a30[32]; // 3223:2800
db dummyd_34a50[32]; // 3223:2820
db dummyd_34a70[32]; // 3223:2840
db dummyd_34a90[32]; // 3223:2860
db dummyd_34ab0[32]; // 3223:2880
db dummyd_34ad0[32]; // 3223:28a0
db dummyd_34af0[32]; // 3223:28c0
db dummyd_34b10[32]; // 3223:28e0
db dummyd_34b30[32]; // 3223:2900
db dummyd_34b50[32]; // 3223:2920
db dummyd_34b70[32]; // 3223:2940
db dummyd_34b90[32]; // 3223:2960
db dummyd_34bb0[32]; // 3223:2980
db dummyd_34bd0[32]; // 3223:29a0
db dummyd_34bf0[32]; // 3223:29c0
db dummyd_34c10[32]; // 3223:29e0
db dummyd_34c30[32]; // 3223:2a00
db dummyd_34c50[32]; // 3223:2a20
db dummyd_34c70[32]; // 3223:2a40
db dummyd_34c90[32]; // 3223:2a60
db dummyd_34cb0[32]; // 3223:2a80
db dummyd_34cd0[32]; // 3223:2aa0
db dummyd_34cf0[32]; // 3223:2ac0
db dummyd_34d10[32]; // 3223:2ae0
db dummyd_34d30[32]; // 3223:2b00
db dummyd_34d50[32]; // 3223:2b20
db dummyd_34d70[32]; // 3223:2b40
db dummyd_34d90[32]; // 3223:2b60
db dummyd_34db0[32]; // 3223:2b80
db dummyd_34dd0[32]; // 3223:2ba0
db dummyd_34df0[32]; // 3223:2bc0
db dummyd_34e10[32]; // 3223:2be0
db dummyd_34e30[32]; // 3223:2c00
db dummyd_34e50[32]; // 3223:2c20
db dummyd_34e70[32]; // 3223:2c40
db dummyd_34e90[32]; // 3223:2c60
db dummyd_34eb0[32]; // 3223:2c80
db dummyd_34ed0[32]; // 3223:2ca0
db dummyd_34ef0[32]; // 3223:2cc0
db dummyd_34f10[32]; // 3223:2ce0
db dummyd_34f30[32]; // 3223:2d00
db dummyd_34f50[32]; // 3223:2d20
db dummyd_34f70[32]; // 3223:2d40
db dummyd_34f90[32]; // 3223:2d60
db dummyd_34fb0[32]; // 3223:2d80
db dummyd_34fd0[32]; // 3223:2da0
db dummyd_34ff0[32]; // 3223:2dc0
db dummyd_35010[32]; // 3223:2de0
db dummyd_35030[32]; // 3223:2e00
db dummyd_35050[32]; // 3223:2e20
db dummyd_35070[32]; // 3223:2e40
db dummyd_35090[32]; // 3223:2e60
db dummyd_350b0[32]; // 3223:2e80
db dummyd_350d0[32]; // 3223:2ea0
db dummyd_350f0[32]; // 3223:2ec0
db dummyd_35110[32]; // 3223:2ee0
db dummyd_35130[32]; // 3223:2f00
db dummyd_35150[32]; // 3223:2f20
db dummyd_35170[32]; // 3223:2f40
db dummyd_35190[32]; // 3223:2f60
db dummyd_351b0[32]; // 3223:2f80
db dummyd_351d0[32]; // 3223:2fa0
db dummyd_351f0[32]; // 3223:2fc0
db dummyd_35210[32]; // 3223:2fe0
db dummyd_35230[32]; // 3223:3000
db dummyd_35250[32]; // 3223:3020
db dummyd_35270[32]; // 3223:3040
db dummyd_35290[32]; // 3223:3060
db dummyd_352b0[32]; // 3223:3080
db dummyd_352d0[32]; // 3223:30a0
db dummyd_352f0[32]; // 3223:30c0
db dummyd_35310[32]; // 3223:30e0
db dummyd_35330[32]; // 3223:3100
db dummyd_35350[32]; // 3223:3120
db dummyd_35370[32]; // 3223:3140
db dummyd_35390[32]; // 3223:3160
db dummyd_353b0[32]; // 3223:3180
db dummyd_353d0[32]; // 3223:31a0
db dummyd_353f0[32]; // 3223:31c0
db dummyd_35410[32]; // 3223:31e0
db dummyd_35430[32]; // 3223:3200
db dummyd_35450[32]; // 3223:3220
db dummyd_35470[32]; // 3223:3240
db dummyd_35490[32]; // 3223:3260
db dummyd_354b0[32]; // 3223:3280
db dummyd_354d0[32]; // 3223:32a0
db dummyd_354f0[32]; // 3223:32c0
db dummyd_35510[32]; // 3223:32e0
db dummyd_35530[32]; // 3223:3300
db dummyd_35550[32]; // 3223:3320
db dummyd_35570[32]; // 3223:3340
db dummyd_35590[32]; // 3223:3360
db dummyd_355b0[32]; // 3223:3380
db dummyd_355d0[32]; // 3223:33a0
db dummyd_355f0[32]; // 3223:33c0
db dummyd_35610[32]; // 3223:33e0
db dummyd_35630[32]; // 3223:3400
db dummyd_35650[32]; // 3223:3420
db dummyd_35670[32]; // 3223:3440
db dummyd_35690[32]; // 3223:3460
db dummyd_356b0[32]; // 3223:3480
db dummyd_356d0[32]; // 3223:34a0
db dummyd_356f0[32]; // 3223:34c0
db dummyd_35710[32]; // 3223:34e0
db dummyd_35730[32]; // 3223:3500
db dummyd_35750[32]; // 3223:3520
db dummyd_35770[32]; // 3223:3540
db dummyd_35790[32]; // 3223:3560
db dummyd_357b0[32]; // 3223:3580
db dummyd_357d0[32]; // 3223:35a0
db dummyd_357f0[32]; // 3223:35c0
db dummyd_35810[32]; // 3223:35e0
db dummyd_35830[32]; // 3223:3600
db dummyd_35850[32]; // 3223:3620
db dummyd_35870[32]; // 3223:3640
db dummyd_35890[32]; // 3223:3660
db dummyd_358b0[32]; // 3223:3680
db dummyd_358d0[32]; // 3223:36a0
db dummyd_358f0[32]; // 3223:36c0
db dummyd_35910[32]; // 3223:36e0
db dummyd_35930[32]; // 3223:3700
db dummyd_35950[32]; // 3223:3720
db dummyd_35970[32]; // 3223:3740
db dummyd_35990[32]; // 3223:3760
db dummyd_359b0[32]; // 3223:3780
db dummyd_359d0[32]; // 3223:37a0
db dummyd_359f0[32]; // 3223:37c0
db dummyd_35a10[32]; // 3223:37e0
db dummyd_35a30[32]; // 3223:3800
db dummyd_35a50[32]; // 3223:3820
db dummyd_35a70[32]; // 3223:3840
db dummyd_35a90[32]; // 3223:3860
db dummyd_35ab0[32]; // 3223:3880
db dummyd_35ad0[32]; // 3223:38a0
db dummyd_35af0[32]; // 3223:38c0
db dummyd_35b10[32]; // 3223:38e0
db dummyd_35b30[32]; // 3223:3900
db dummyd_35b50[32]; // 3223:3920
db dummyd_35b70[32]; // 3223:3940
db dummyd_35b90[32]; // 3223:3960
db dummyd_35bb0[32]; // 3223:3980
db dummyd_35bd0[32]; // 3223:39a0
db dummyd_35bf0[32]; // 3223:39c0
db dummyd_35c10[32]; // 3223:39e0
db dummyd_35c30[32]; // 3223:3a00
db dummyd_35c50[32]; // 3223:3a20
db dummyd_35c70[32]; // 3223:3a40
db dummyd_35c90[32]; // 3223:3a60
db dummyd_35cb0[32]; // 3223:3a80
db dummyd_35cd0[32]; // 3223:3aa0
db dummyd_35cf0[32]; // 3223:3ac0
db dummyd_35d10[32]; // 3223:3ae0
db dummyd_35d30[32]; // 3223:3b00
db dummyd_35d50[32]; // 3223:3b20
db dummyd_35d70[32]; // 3223:3b40
db dummyd_35d90[32]; // 3223:3b60
db dummyd_35db0[32]; // 3223:3b80
db dummyd_35dd0[32]; // 3223:3ba0
db dummyd_35df0[32]; // 3223:3bc0
db dummyd_35e10[32]; // 3223:3be0
db dummyd_35e30[32]; // 3223:3c00
db dummyd_35e50[32]; // 3223:3c20
db dummyd_35e70[32]; // 3223:3c40
db dummyd_35e90[32]; // 3223:3c60
db dummyd_35eb0[32]; // 3223:3c80
db dummyd_35ed0[32]; // 3223:3ca0
db dummyd_35ef0[32]; // 3223:3cc0
db dummyd_35f10[32]; // 3223:3ce0
db dummyd_35f30[32]; // 3223:3d00
db dummyd_35f50[32]; // 3223:3d20
db dummyd_35f70[32]; // 3223:3d40
db dummyd_35f90[32]; // 3223:3d60
db dummyd_35fb0[32]; // 3223:3d80
db dummyd_35fd0[32]; // 3223:3da0
db dummyd_35ff0[32]; // 3223:3dc0
db dummyd_36010[32]; // 3223:3de0
db dummyd_36030[32]; // 3223:3e00
db dummyd_36050[32]; // 3223:3e20
db dummyd_36070[32]; // 3223:3e40
db dummyd_36090[32]; // 3223:3e60
db dummyd_360b0[32]; // 3223:3e80
db dummyd_360d0[32]; // 3223:3ea0
db dummyd_360f0[32]; // 3223:3ec0
db dummyd_36110[32]; // 3223:3ee0
db dummyd_36130[32]; // 3223:3f00
db dummyd_36150[32]; // 3223:3f20
db dummyd_36170[32]; // 3223:3f40
db dummyd_36190[32]; // 3223:3f60
db dummyd_361b0[32]; // 3223:3f80
db dummyd_361d0[32]; // 3223:3fa0
db dummyd_361f0[32]; // 3223:3fc0
db dummyd_36210[32]; // 3223:3fe0
db dummyd_36230[32]; // 3223:4000
db dummyd_36250[32]; // 3223:4020
db dummyd_36270[32]; // 3223:4040
db dummyd_36290[32]; // 3223:4060
db dummyd_362b0[32]; // 3223:4080
db dummyd_362d0[32]; // 3223:40a0
db dummyd_362f0[32]; // 3223:40c0
db dummyd_36310[32]; // 3223:40e0
db dummyd_36330[32]; // 3223:4100
db dummyd_36350[32]; // 3223:4120
db dummyd_36370[32]; // 3223:4140
db dummyd_36390[32]; // 3223:4160
db dummyd_363b0[32]; // 3223:4180
db dummyd_363d0[32]; // 3223:41a0
db dummyd_363f0[32]; // 3223:41c0
db dummyd_36410[32]; // 3223:41e0
db dummyd_36430[32]; // 3223:4200
db dummyd_36450[32]; // 3223:4220
db dummyd_36470[32]; // 3223:4240
db dummyd_36490[32]; // 3223:4260
db dummyd_364b0[32]; // 3223:4280
db dummyd_364d0[32]; // 3223:42a0
db dummyd_364f0[32]; // 3223:42c0
db dummyd_36510[32]; // 3223:42e0
db dummyd_36530[32]; // 3223:4300
db dummyd_36550[32]; // 3223:4320
db dummyd_36570[32]; // 3223:4340
db dummyd_36590[32]; // 3223:4360
db dummyd_365b0[32]; // 3223:4380
db dummyd_365d0[32]; // 3223:43a0
db dummyd_365f0[32]; // 3223:43c0
db dummyd_36610[32]; // 3223:43e0
db dummyd_36630[32]; // 3223:4400
db dummyd_36650[32]; // 3223:4420
db dummyd_36670[32]; // 3223:4440
db dummyd_36690[32]; // 3223:4460
db dummyd_366b0[32]; // 3223:4480
db dummyd_366d0[32]; // 3223:44a0
db dummyd_366f0[32]; // 3223:44c0
db dummyd_36710[32]; // 3223:44e0
db dummyd_36730[32]; // 3223:4500
db dummyd_36750[32]; // 3223:4520
db dummyd_36770[32]; // 3223:4540
db dummyd_36790[32]; // 3223:4560
db dummyd_367b0[32]; // 3223:4580
db dummyd_367d0[32]; // 3223:45a0
db dummyd_367f0[32]; // 3223:45c0
db dummyd_36810[32]; // 3223:45e0
db dummyd_36830[32]; // 3223:4600
db dummyd_36850[32]; // 3223:4620
db dummyd_36870[32]; // 3223:4640
db dummyd_36890[32]; // 3223:4660
db dummyd_368b0[32]; // 3223:4680
db dummyd_368d0[32]; // 3223:46a0
db dummyd_368f0[32]; // 3223:46c0
db dummyd_36910[32]; // 3223:46e0
db dummyd_36930[32]; // 3223:4700
db dummyd_36950[32]; // 3223:4720
db dummyd_36970[32]; // 3223:4740
db dummyd_36990[32]; // 3223:4760
db dummyd_369b0[32]; // 3223:4780
db dummyd_369d0[32]; // 3223:47a0
db dummyd_369f0[32]; // 3223:47c0
db dummyd_36a10[32]; // 3223:47e0
db dummyd_36a30[32]; // 3223:4800
db dummyd_36a50[32]; // 3223:4820
db dummyd_36a70[32]; // 3223:4840
db dummyd_36a90[32]; // 3223:4860
db dummyd_36ab0[32]; // 3223:4880
db dummyd_36ad0[32]; // 3223:48a0
db dummyd_36af0[32]; // 3223:48c0
db dummyd_36b10[32]; // 3223:48e0
db dummyd_36b30[32]; // 3223:4900
db dummyd_36b50[32]; // 3223:4920
db dummyd_36b70[32]; // 3223:4940
db dummyd_36b90[32]; // 3223:4960
db dummyd_36bb0[32]; // 3223:4980
db dummyd_36bd0[32]; // 3223:49a0
db dummyd_36bf0[32]; // 3223:49c0
db dummyd_36c10[32]; // 3223:49e0
db dummyd_36c30[32]; // 3223:4a00
db dummyd_36c50[32]; // 3223:4a20
db dummyd_36c70[32]; // 3223:4a40
db dummyd_36c90[32]; // 3223:4a60
db dummyd_36cb0[32]; // 3223:4a80
db dummyd_36cd0[32]; // 3223:4aa0
db dummyd_36cf0[32]; // 3223:4ac0
db dummyd_36d10[32]; // 3223:4ae0
db dummyd_36d30[32]; // 3223:4b00
db dummyd_36d50[32]; // 3223:4b20
db dummyd_36d70[32]; // 3223:4b40
db dummyd_36d90[32]; // 3223:4b60
db dummyd_36db0[32]; // 3223:4b80
db dummyd_36dd0[32]; // 3223:4ba0
db dummyd_36df0[32]; // 3223:4bc0
db dummyd_36e10[32]; // 3223:4be0
db dummyd_36e30[32]; // 3223:4c00
db dummyd_36e50[32]; // 3223:4c20
db dummyd_36e70[32]; // 3223:4c40
db dummyd_36e90[32]; // 3223:4c60
db dummyd_36eb0[32]; // 3223:4c80
db dummyd_36ed0[32]; // 3223:4ca0
db dummyd_36ef0[32]; // 3223:4cc0
db dummyd_36f10[32]; // 3223:4ce0
db dummyd_36f30[32]; // 3223:4d00
db dummyd_36f50[32]; // 3223:4d20
db dummyd_36f70[32]; // 3223:4d40
db dummyd_36f90[32]; // 3223:4d60
db dummyd_36fb0[32]; // 3223:4d80
db dummyd_36fd0[32]; // 3223:4da0
db dummyd_36ff0[32]; // 3223:4dc0
db dummyd_37010[32]; // 3223:4de0
db dummyd_37030[32]; // 3223:4e00
db dummyd_37050[32]; // 3223:4e20
db dummyd_37070[32]; // 3223:4e40
db dummyd_37090[32]; // 3223:4e60
db dummyd_370b0[32]; // 3223:4e80
db dummyd_370d0[32]; // 3223:4ea0
db dummyd_370f0[32]; // 3223:4ec0
db dummyd_37110[32]; // 3223:4ee0
db dummyd_37130[32]; // 3223:4f00
db dummyd_37150[32]; // 3223:4f20
db dummyd_37170[32]; // 3223:4f40
db dummyd_37190[32]; // 3223:4f60
db dummyd_371b0[32]; // 3223:4f80
db dummyd_371d0[32]; // 3223:4fa0
db dummyd_371f0[32]; // 3223:4fc0
db dummyd_37210[32]; // 3223:4fe0
db dummyd_37230[32]; // 3223:5000
db dummyd_37250[32]; // 3223:5020
db dummyd_37270[32]; // 3223:5040
db dummyd_37290[32]; // 3223:5060
db dummyd_372b0[32]; // 3223:5080
db dummyd_372d0[32]; // 3223:50a0
db dummyd_372f0[32]; // 3223:50c0
db dummyd_37310[32]; // 3223:50e0
db dummyd_37330[32]; // 3223:5100
db dummyd_37350[32]; // 3223:5120
db dummyd_37370[32]; // 3223:5140
db dummyd_37390[32]; // 3223:5160
db dummyd_373b0[32]; // 3223:5180
db dummyd_373d0[32]; // 3223:51a0
db dummyd_373f0[32]; // 3223:51c0
db dummyd_37410[32]; // 3223:51e0
db dummyd_37430[32]; // 3223:5200
db dummyd_37450[32]; // 3223:5220
db dummyd_37470[32]; // 3223:5240
db dummyd_37490[32]; // 3223:5260
db dummyd_374b0[32]; // 3223:5280
db dummyd_374d0[32]; // 3223:52a0
db dummyd_374f0[32]; // 3223:52c0
db dummyd_37510[32]; // 3223:52e0
db dummyd_37530[32]; // 3223:5300
db dummyd_37550[32]; // 3223:5320
db dummyd_37570[32]; // 3223:5340
db dummyd_37590[32]; // 3223:5360
db dummyd_375b0[32]; // 3223:5380
db dummyd_375d0[32]; // 3223:53a0
db dummyd_375f0[32]; // 3223:53c0
db dummyd_37610[32]; // 3223:53e0
db dummyd_37630[32]; // 3223:5400
db dummyd_37650[32]; // 3223:5420
db dummyd_37670[32]; // 3223:5440
db dummyd_37690[32]; // 3223:5460
db dummyd_376b0[32]; // 3223:5480
db dummyd_376d0[32]; // 3223:54a0
db dummyd_376f0[32]; // 3223:54c0
db dummyd_37710[32]; // 3223:54e0
db dummyd_37730[32]; // 3223:5500
db dummyd_37750[32]; // 3223:5520
db dummyd_37770[32]; // 3223:5540
db dummyd_37790[32]; // 3223:5560
db dummyd_377b0[32]; // 3223:5580
db dummyd_377d0[32]; // 3223:55a0
db dummyd_377f0[32]; // 3223:55c0
db dummyd_37810[32]; // 3223:55e0
db dummyd_37830[32]; // 3223:5600
db dummyd_37850[32]; // 3223:5620
db dummyd_37870[32]; // 3223:5640
db dummyd_37890[32]; // 3223:5660
db dummyd_378b0[32]; // 3223:5680
db dummyd_378d0[32]; // 3223:56a0
db dummyd_378f0[32]; // 3223:56c0
db dummyd_37910[32]; // 3223:56e0
db dummyd_37930[32]; // 3223:5700
db dummyd_37950[32]; // 3223:5720
db dummyd_37970[32]; // 3223:5740
db dummyd_37990[32]; // 3223:5760
db dummyd_379b0[32]; // 3223:5780
db dummyd_379d0[32]; // 3223:57a0
db dummyd_379f0[32]; // 3223:57c0
db dummyd_37a10[32]; // 3223:57e0
db dummyd_37a30[32]; // 3223:5800
db dummyd_37a50[32]; // 3223:5820
db dummyd_37a70[32]; // 3223:5840
db dummyd_37a90[32]; // 3223:5860
db dummyd_37ab0[32]; // 3223:5880
db dummyd_37ad0[32]; // 3223:58a0
db dummyd_37af0[32]; // 3223:58c0
db dummyd_37b10[32]; // 3223:58e0
db dummyd_37b30[32]; // 3223:5900
db dummyd_37b50[32]; // 3223:5920
db dummyd_37b70[32]; // 3223:5940
db dummyd_37b90[32]; // 3223:5960
db dummyd_37bb0[32]; // 3223:5980
db dummyd_37bd0[32]; // 3223:59a0
db dummyd_37bf0[32]; // 3223:59c0
db dummyd_37c10[32]; // 3223:59e0
db dummyd_37c30[32]; // 3223:5a00
db dummyd_37c50[32]; // 3223:5a20
db dummyd_37c70[32]; // 3223:5a40
db dummyd_37c90[32]; // 3223:5a60
db dummyd_37cb0[32]; // 3223:5a80
db dummyd_37cd0[32]; // 3223:5aa0
db dummyd_37cf0[32]; // 3223:5ac0
db dummyd_37d10[32]; // 3223:5ae0
db dummyd_37d30[32]; // 3223:5b00
db dummyd_37d50[32]; // 3223:5b20
db dummyd_37d70[32]; // 3223:5b40
db dummyd_37d90[32]; // 3223:5b60
db dummyd_37db0[32]; // 3223:5b80
db dummyd_37dd0[32]; // 3223:5ba0
db dummyd_37df0[32]; // 3223:5bc0
db dummyd_37e10[32]; // 3223:5be0
db dummyd_37e30[32]; // 3223:5c00
db dummyd_37e50[32]; // 3223:5c20
db dummyd_37e70[32]; // 3223:5c40
db dummyd_37e90[32]; // 3223:5c60
db dummyd_37eb0[32]; // 3223:5c80
db dummyd_37ed0[32]; // 3223:5ca0
db dummyd_37ef0[32]; // 3223:5cc0
db dummyd_37f10[32]; // 3223:5ce0
db dummyd_37f30[32]; // 3223:5d00
db dummyd_37f50[32]; // 3223:5d20
db dummyd_37f70[32]; // 3223:5d40
db dummyd_37f90[32]; // 3223:5d60
db dummyd_37fb0[32]; // 3223:5d80
db dummyd_37fd0[32]; // 3223:5da0
db dummyd_37ff0[32]; // 3223:5dc0
db dummyd_38010[32]; // 3223:5de0
db dummyd_38030[32]; // 3223:5e00
db dummyd_38050[32]; // 3223:5e20
db dummyd_38070[32]; // 3223:5e40
db dummyd_38090[32]; // 3223:5e60
db dummyd_380b0[32]; // 3223:5e80
db dummyd_380d0[32]; // 3223:5ea0
db dummyd_380f0[32]; // 3223:5ec0
db dummyd_38110[32]; // 3223:5ee0
db dummyd_38130[32]; // 3223:5f00
db dummyd_38150[32]; // 3223:5f20
db dummyd_38170[32]; // 3223:5f40
db dummyd_38190[32]; // 3223:5f60
db dummyd_381b0[32]; // 3223:5f80
db dummyd_381d0[32]; // 3223:5fa0
db dummyd_381f0[32]; // 3223:5fc0
db dummyd_38210[32]; // 3223:5fe0
db dummyd_38230[32]; // 3223:6000
db dummyd_38250[32]; // 3223:6020
db dummyd_38270[32]; // 3223:6040
db dummyd_38290[32]; // 3223:6060
db dummyd_382b0[32]; // 3223:6080
db dummyd_382d0[32]; // 3223:60a0
db dummyd_382f0[32]; // 3223:60c0
db dummyd_38310[32]; // 3223:60e0
db dummyd_38330[32]; // 3223:6100
db dummyd_38350[32]; // 3223:6120
db dummyd_38370[32]; // 3223:6140
db dummyd_38390[32]; // 3223:6160
db dummyd_383b0[32]; // 3223:6180
db dummyd_383d0[32]; // 3223:61a0
db dummyd_383f0[32]; // 3223:61c0
db dummyd_38410[32]; // 3223:61e0
db dummyd_38430[32]; // 3223:6200
db dummyd_38450[32]; // 3223:6220
db dummyd_38470[32]; // 3223:6240
db dummyd_38490[32]; // 3223:6260
db dummyd_384b0[32]; // 3223:6280
db dummyd_384d0[32]; // 3223:62a0
db dummyd_384f0[32]; // 3223:62c0
db dummyd_38510[32]; // 3223:62e0
db dummyd_38530[32]; // 3223:6300
db dummyd_38550[32]; // 3223:6320
db dummyd_38570[32]; // 3223:6340
db dummyd_38590[32]; // 3223:6360
db dummyd_385b0[32]; // 3223:6380
db dummyd_385d0[32]; // 3223:63a0
db dummyd_385f0[32]; // 3223:63c0
db dummyd_38610[32]; // 3223:63e0
db dummyd_38630[32]; // 3223:6400
db dummyd_38650[32]; // 3223:6420
db dummyd_38670[32]; // 3223:6440
db dummyd_38690[32]; // 3223:6460
db dummyd_386b0[32]; // 3223:6480
db dummyd_386d0[32]; // 3223:64a0
db dummyd_386f0[32]; // 3223:64c0
db dummyd_38710[32]; // 3223:64e0
db dummyd_38730[32]; // 3223:6500
db dummyd_38750[32]; // 3223:6520
db dummyd_38770[32]; // 3223:6540
db dummyd_38790[32]; // 3223:6560
db dummyd_387b0[32]; // 3223:6580
db dummyd_387d0[32]; // 3223:65a0
db dummyd_387f0[32]; // 3223:65c0
db dummyd_38810[32]; // 3223:65e0
db dummyd_38830[32]; // 3223:6600
db dummyd_38850[32]; // 3223:6620
db dummyd_38870[32]; // 3223:6640
db dummyd_38890[32]; // 3223:6660
db dummyd_388b0[32]; // 3223:6680
db dummyd_388d0[32]; // 3223:66a0
db dummyd_388f0[32]; // 3223:66c0
db dummyd_38910[32]; // 3223:66e0
db dummyd_38930[32]; // 3223:6700
db dummyd_38950[32]; // 3223:6720
db dummyd_38970[32]; // 3223:6740
db dummyd_38990[32]; // 3223:6760
db dummyd_389b0[32]; // 3223:6780
db dummyd_389d0[32]; // 3223:67a0
db dummyd_389f0[32]; // 3223:67c0
db dummyd_38a10[32]; // 3223:67e0
db dummyd_38a30[32]; // 3223:6800
db dummyd_38a50[32]; // 3223:6820
db dummyd_38a70[32]; // 3223:6840
db dummyd_38a90[32]; // 3223:6860
db dummyd_38ab0[32]; // 3223:6880
db dummyd_38ad0[32]; // 3223:68a0
db dummyd_38af0[32]; // 3223:68c0
db dummyd_38b10[32]; // 3223:68e0
db dummyd_38b30[32]; // 3223:6900
db dummyd_38b50[32]; // 3223:6920
db dummyd_38b70[32]; // 3223:6940
db dummyd_38b90[32]; // 3223:6960
db dummyd_38bb0[32]; // 3223:6980
db dummyd_38bd0[32]; // 3223:69a0
db dummyd_38bf0[32]; // 3223:69c0
db dummyd_38c10[32]; // 3223:69e0
db dummyd_38c30[32]; // 3223:6a00
db dummyd_38c50[32]; // 3223:6a20
db dummyd_38c70[32]; // 3223:6a40
db dummyd_38c90[32]; // 3223:6a60
db dummyd_38cb0[32]; // 3223:6a80
db dummyd_38cd0[32]; // 3223:6aa0
db dummyd_38cf0[32]; // 3223:6ac0
db dummyd_38d10[32]; // 3223:6ae0
db dummyd_38d30[32]; // 3223:6b00
db dummyd_38d50[32]; // 3223:6b20
db dummyd_38d70[32]; // 3223:6b40
db dummyd_38d90[32]; // 3223:6b60
db dummyd_38db0[32]; // 3223:6b80
db dummyd_38dd0[32]; // 3223:6ba0
db dummyd_38df0[32]; // 3223:6bc0
db dummyd_38e10[32]; // 3223:6be0
db dummyd_38e30[32]; // 3223:6c00
db dummyd_38e50[32]; // 3223:6c20
db dummyd_38e70[32]; // 3223:6c40
db dummyd_38e90[32]; // 3223:6c60
db dummyd_38eb0[32]; // 3223:6c80
db dummyd_38ed0[32]; // 3223:6ca0
db dummyd_38ef0[32]; // 3223:6cc0
db dummyd_38f10[32]; // 3223:6ce0
db dummyd_38f30[32]; // 3223:6d00
db dummyd_38f50[32]; // 3223:6d20
db dummyd_38f70[32]; // 3223:6d40
db dummyd_38f90[32]; // 3223:6d60
db dummyd_38fb0[32]; // 3223:6d80
db dummyd_38fd0[32]; // 3223:6da0
db dummyd_38ff0[32]; // 3223:6dc0
db dummyd_39010[32]; // 3223:6de0
db dummyd_39030[32]; // 3223:6e00
db dummyd_39050[32]; // 3223:6e20
db dummyd_39070[32]; // 3223:6e40
db dummyd_39090[32]; // 3223:6e60
db dummyd_390b0[32]; // 3223:6e80
db dummyd_390d0[32]; // 3223:6ea0
db dummyd_390f0[32]; // 3223:6ec0
db dummyd_39110[32]; // 3223:6ee0
db dummyd_39130[32]; // 3223:6f00
db dummyd_39150[32]; // 3223:6f20
db dummyd_39170[32]; // 3223:6f40
db dummyd_39190[32]; // 3223:6f60
db dummyd_391b0[32]; // 3223:6f80
db dummyd_391d0[32]; // 3223:6fa0
db dummyd_391f0[32]; // 3223:6fc0
db dummyd_39210[32]; // 3223:6fe0
db dummyd_39230[32]; // 3223:7000
db dummyd_39250[32]; // 3223:7020
db dummyd_39270[32]; // 3223:7040
db dummyd_39290[32]; // 3223:7060
db dummyd_392b0[32]; // 3223:7080
db dummyd_392d0[32]; // 3223:70a0
db dummyd_392f0[32]; // 3223:70c0
db dummyd_39310[32]; // 3223:70e0
db dummyd_39330[32]; // 3223:7100
db dummyd_39350[32]; // 3223:7120
db dummyd_39370[32]; // 3223:7140
db dummyd_39390[32]; // 3223:7160
db dummyd_393b0[32]; // 3223:7180
db dummyd_393d0[32]; // 3223:71a0
db dummyd_393f0[32]; // 3223:71c0
db dummyd_39410[32]; // 3223:71e0
db dummyd_39430[32]; // 3223:7200
db dummyd_39450[32]; // 3223:7220
db dummyd_39470[32]; // 3223:7240
db dummyd_39490[32]; // 3223:7260
db dummyd_394b0[32]; // 3223:7280
db dummyd_394d0[32]; // 3223:72a0
db dummyd_394f0[32]; // 3223:72c0
db dummyd_39510[32]; // 3223:72e0
db dummyd_39530[32]; // 3223:7300
db dummyd_39550[32]; // 3223:7320
db dummyd_39570[32]; // 3223:7340
db dummyd_39590[32]; // 3223:7360
db dummyd_395b0[32]; // 3223:7380
db dummyd_395d0[32]; // 3223:73a0
db dummyd_395f0[32]; // 3223:73c0
db dummyd_39610[32]; // 3223:73e0
db dummyd_39630[32]; // 3223:7400
db dummyd_39650[32]; // 3223:7420
db dummyd_39670[32]; // 3223:7440
db dummyd_39690[32]; // 3223:7460
db dummyd_396b0[32]; // 3223:7480
db dummyd_396d0[32]; // 3223:74a0
db dummyd_396f0[32]; // 3223:74c0
db dummyd_39710[32]; // 3223:74e0
db dummyd_39730[32]; // 3223:7500
db dummyd_39750[32]; // 3223:7520
db dummyd_39770[32]; // 3223:7540
db dummyd_39790[32]; // 3223:7560
db dummyd_397b0[32]; // 3223:7580
db dummyd_397d0[32]; // 3223:75a0
db dummyd_397f0[32]; // 3223:75c0
db dummyd_39810[32]; // 3223:75e0
db dummyd_39830[32]; // 3223:7600
db dummyd_39850[32]; // 3223:7620
db dummyd_39870[32]; // 3223:7640
db dummyd_39890[32]; // 3223:7660
db dummyd_398b0[32]; // 3223:7680
db dummyd_398d0[32]; // 3223:76a0
db dummyd_398f0[32]; // 3223:76c0
db dummyd_39910[32]; // 3223:76e0
db dummyd_39930[32]; // 3223:7700
db dummyd_39950[32]; // 3223:7720
db dummyd_39970[32]; // 3223:7740
db dummyd_39990[32]; // 3223:7760
db dummyd_399b0[32]; // 3223:7780
db dummyd_399d0[32]; // 3223:77a0
db dummyd_399f0[32]; // 3223:77c0
db dummyd_39a10[32]; // 3223:77e0
db dummyd_39a30[32]; // 3223:7800
db dummyd_39a50[32]; // 3223:7820
db dummyd_39a70[32]; // 3223:7840
db dummyd_39a90[32]; // 3223:7860
db dummyd_39ab0[32]; // 3223:7880
db dummyd_39ad0[32]; // 3223:78a0
db dummyd_39af0[32]; // 3223:78c0
db dummyd_39b10[32]; // 3223:78e0
db dummyd_39b30[32]; // 3223:7900
db dummyd_39b50[32]; // 3223:7920
db dummyd_39b70[32]; // 3223:7940
db dummyd_39b90[32]; // 3223:7960
db dummyd_39bb0[32]; // 3223:7980
db dummyd_39bd0[32]; // 3223:79a0
db dummyd_39bf0[32]; // 3223:79c0
db dummyd_39c10[32]; // 3223:79e0
db dummyd_39c30[32]; // 3223:7a00
db dummyd_39c50[32]; // 3223:7a20
db dummyd_39c70[32]; // 3223:7a40
db dummyd_39c90[32]; // 3223:7a60
db dummyd_39cb0[32]; // 3223:7a80
db dummyd_39cd0[32]; // 3223:7aa0
db dummyd_39cf0[32]; // 3223:7ac0
db dummyd_39d10[32]; // 3223:7ae0
db dummyd_39d30[32]; // 3223:7b00
db dummyd_39d50[32]; // 3223:7b20
db dummyd_39d70[32]; // 3223:7b40
db dummyd_39d90[32]; // 3223:7b60
db dummyd_39db0[32]; // 3223:7b80
db dummyd_39dd0[32]; // 3223:7ba0
db dummyd_39df0[32]; // 3223:7bc0
db dummyd_39e10[32]; // 3223:7be0
db dummyd_39e30[32]; // 3223:7c00
db dummyd_39e50[32]; // 3223:7c20
db dummyd_39e70[32]; // 3223:7c40
db dummyd_39e90[32]; // 3223:7c60
db dummyd_39eb0[32]; // 3223:7c80
db dummyd_39ed0[32]; // 3223:7ca0
db dummyd_39ef0[32]; // 3223:7cc0
db dummyd_39f10[32]; // 3223:7ce0
db dummyd_39f30[32]; // 3223:7d00
db dummyd_39f50[32]; // 3223:7d20
db dummyd_39f70[32]; // 3223:7d40
db dummyd_39f90[32]; // 3223:7d60
db dummyd_39fb0[32]; // 3223:7d80
db dummyd_39fd0[32]; // 3223:7da0
db dummyd_39ff0[32]; // 3223:7dc0
db dummyd_3a010[32]; // 3223:7de0
db dummyd_3a030[32]; // 3223:7e00
db dummyd_3a050[32]; // 3223:7e20
db dummyd_3a070[32]; // 3223:7e40
db dummyd_3a090[32]; // 3223:7e60
db dummyd_3a0b0[32]; // 3223:7e80
db dummyd_3a0d0[32]; // 3223:7ea0
db dummyd_3a0f0[32]; // 3223:7ec0
db dummyd_3a110[32]; // 3223:7ee0
db dummyd_3a130[32]; // 3223:7f00
db dummyd_3a150[32]; // 3223:7f20
db dummyd_3a170[32]; // 3223:7f40
db dummyd_3a190[32]; // 3223:7f60
db dummyd_3a1b0[32]; // 3223:7f80
db dummyd_3a1d0[32]; // 3223:7fa0
db dummyd_3a1f0[32]; // 3223:7fc0
db dummyd_3a210[32]; // 3223:7fe0
db dummyd_3a230[32]; // 3223:8000
db dummyd_3a250[32]; // 3223:8020
db dummyd_3a270[32]; // 3223:8040
db dummyd_3a290[32]; // 3223:8060
db dummyd_3a2b0[32]; // 3223:8080
db dummyd_3a2d0[32]; // 3223:80a0
db dummyd_3a2f0[32]; // 3223:80c0
db dummyd_3a310[32]; // 3223:80e0
db dummyd_3a330[32]; // 3223:8100
db dummyd_3a350[32]; // 3223:8120
db dummyd_3a370[32]; // 3223:8140
db dummyd_3a390[32]; // 3223:8160
db dummyd_3a3b0[32]; // 3223:8180
db dummyd_3a3d0[32]; // 3223:81a0
db dummyd_3a3f0[32]; // 3223:81c0
db dummyd_3a410[32]; // 3223:81e0
db dummyd_3a430[32]; // 3223:8200
db dummyd_3a450[32]; // 3223:8220
db dummyd_3a470[32]; // 3223:8240
db dummyd_3a490[32]; // 3223:8260
db dummyd_3a4b0[32]; // 3223:8280
db dummyd_3a4d0[32]; // 3223:82a0
db dummyd_3a4f0[32]; // 3223:82c0
db dummyd_3a510[32]; // 3223:82e0
db dummyd_3a530[32]; // 3223:8300
db dummyd_3a550[32]; // 3223:8320
db dummyd_3a570[32]; // 3223:8340
db dummyd_3a590[32]; // 3223:8360
db dummyd_3a5b0[32]; // 3223:8380
db dummyd_3a5d0[32]; // 3223:83a0
db dummyd_3a5f0[32]; // 3223:83c0
db dummyd_3a610[32]; // 3223:83e0
db dummyd_3a630[32]; // 3223:8400
db dummyd_3a650[32]; // 3223:8420
db dummyd_3a670[32]; // 3223:8440
db dummyd_3a690[32]; // 3223:8460
db dummyd_3a6b0[32]; // 3223:8480
db dummyd_3a6d0[32]; // 3223:84a0
db dummyd_3a6f0[32]; // 3223:84c0
db dummyd_3a710[32]; // 3223:84e0
db dummyd_3a730[32]; // 3223:8500
db dummyd_3a750[32]; // 3223:8520
db dummyd_3a770[32]; // 3223:8540
db dummyd_3a790[32]; // 3223:8560
db dummyd_3a7b0[32]; // 3223:8580
db dummyd_3a7d0[32]; // 3223:85a0
db dummyd_3a7f0[32]; // 3223:85c0
db dummyd_3a810[32]; // 3223:85e0
db dummyd_3a830[32]; // 3223:8600
db dummyd_3a850[32]; // 3223:8620
db dummyd_3a870[32]; // 3223:8640
db dummyd_3a890[32]; // 3223:8660
db dummyd_3a8b0[32]; // 3223:8680
db dummyd_3a8d0[32]; // 3223:86a0
db dummyd_3a8f0[32]; // 3223:86c0
db dummyd_3a910[32]; // 3223:86e0
db dummyd_3a930[32]; // 3223:8700
db dummyd_3a950[32]; // 3223:8720
db dummyd_3a970[32]; // 3223:8740
db dummyd_3a990[32]; // 3223:8760
db dummyd_3a9b0[32]; // 3223:8780
db dummyd_3a9d0[32]; // 3223:87a0
db dummyd_3a9f0[32]; // 3223:87c0
db dummyd_3aa10[32]; // 3223:87e0
db dummyd_3aa30[32]; // 3223:8800
db dummyd_3aa50[32]; // 3223:8820
db dummyd_3aa70[32]; // 3223:8840
db dummyd_3aa90[32]; // 3223:8860
db dummyd_3aab0[32]; // 3223:8880
db dummyd_3aad0[32]; // 3223:88a0
db dummyd_3aaf0[32]; // 3223:88c0
db dummyd_3ab10[32]; // 3223:88e0
db dummyd_3ab30[32]; // 3223:8900
db dummyd_3ab50[32]; // 3223:8920
db dummyd_3ab70[32]; // 3223:8940
db dummyd_3ab90[32]; // 3223:8960
db dummyd_3abb0[32]; // 3223:8980
db dummyd_3abd0[32]; // 3223:89a0
db dummyd_3abf0[32]; // 3223:89c0
db dummyd_3ac10[32]; // 3223:89e0
db dummyd_3ac30[32]; // 3223:8a00
db dummyd_3ac50[32]; // 3223:8a20
db dummyd_3ac70[32]; // 3223:8a40
db dummyd_3ac90[32]; // 3223:8a60
db dummyd_3acb0[32]; // 3223:8a80
db dummyd_3acd0[32]; // 3223:8aa0
db dummyd_3acf0[32]; // 3223:8ac0
db dummyd_3ad10[32]; // 3223:8ae0
db dummyd_3ad30[32]; // 3223:8b00
db dummyd_3ad50[32]; // 3223:8b20
db dummyd_3ad70[32]; // 3223:8b40
db dummyd_3ad90[32]; // 3223:8b60
db dummyd_3adb0[32]; // 3223:8b80
db dummyd_3add0[32]; // 3223:8ba0
db dummyd_3adf0[32]; // 3223:8bc0
db dummyd_3ae10[32]; // 3223:8be0
db dummyd_3ae30[32]; // 3223:8c00
db dummyd_3ae50[32]; // 3223:8c20
db dummyd_3ae70[32]; // 3223:8c40
db dummyd_3ae90[32]; // 3223:8c60
db dummyd_3aeb0[32]; // 3223:8c80
db dummyd_3aed0[32]; // 3223:8ca0
db dummyd_3aef0[32]; // 3223:8cc0
db dummyd_3af10[32]; // 3223:8ce0
db dummyd_3af30[32]; // 3223:8d00
db dummyd_3af50[32]; // 3223:8d20
db dummyd_3af70[32]; // 3223:8d40
db dummyd_3af90[32]; // 3223:8d60
db dummyd_3afb0[32]; // 3223:8d80
db dummyd_3afd0[32]; // 3223:8da0
db dummyd_3aff0[32]; // 3223:8dc0
db dummyd_3b010[32]; // 3223:8de0
db dummyd_3b030[32]; // 3223:8e00
db dummyd_3b050[32]; // 3223:8e20
db dummyd_3b070[32]; // 3223:8e40
db dummyd_3b090[32]; // 3223:8e60
db dummyd_3b0b0[32]; // 3223:8e80
db dummyd_3b0d0[32]; // 3223:8ea0
db dummyd_3b0f0[32]; // 3223:8ec0
db dummyd_3b110[32]; // 3223:8ee0
db dummyd_3b130[32]; // 3223:8f00
db dummyd_3b150[32]; // 3223:8f20
db dummyd_3b170[32]; // 3223:8f40
db dummyd_3b190[32]; // 3223:8f60
db dummyd_3b1b0[32]; // 3223:8f80
db dummyd_3b1d0[32]; // 3223:8fa0
db dummyd_3b1f0[32]; // 3223:8fc0
db dummyd_3b210[32]; // 3223:8fe0
db dummyd_3b230[32]; // 3223:9000
db dummyd_3b250[32]; // 3223:9020
db dummyd_3b270[32]; // 3223:9040
db dummyd_3b290[32]; // 3223:9060
db dummyd_3b2b0[32]; // 3223:9080
db dummyd_3b2d0[32]; // 3223:90a0
db dummyd_3b2f0[32]; // 3223:90c0
db dummyd_3b310[32]; // 3223:90e0
db dummyd_3b330[32]; // 3223:9100
db dummyd_3b350[32]; // 3223:9120
db dummyd_3b370[32]; // 3223:9140
db dummyd_3b390[32]; // 3223:9160
db dummyd_3b3b0[32]; // 3223:9180
db dummyd_3b3d0[32]; // 3223:91a0
db dummyd_3b3f0[32]; // 3223:91c0
db dummyd_3b410[32]; // 3223:91e0
db dummyd_3b430[32]; // 3223:9200
db dummyd_3b450[32]; // 3223:9220
db dummyd_3b470[32]; // 3223:9240
db dummyd_3b490[32]; // 3223:9260
db dummyd_3b4b0[32]; // 3223:9280
db dummyd_3b4d0[32]; // 3223:92a0
db dummyd_3b4f0[32]; // 3223:92c0
db dummyd_3b510[32]; // 3223:92e0
db dummyd_3b530[32]; // 3223:9300
db dummyd_3b550[32]; // 3223:9320
db dummyd_3b570[32]; // 3223:9340
db dummyd_3b590[32]; // 3223:9360
db dummyd_3b5b0[32]; // 3223:9380
db dummyd_3b5d0[32]; // 3223:93a0
db dummyd_3b5f0[32]; // 3223:93c0
db dummyd_3b610[32]; // 3223:93e0
db dummyd_3b630[32]; // 3223:9400
db dummyd_3b650[32]; // 3223:9420
db dummyd_3b670[32]; // 3223:9440
db dummyd_3b690[32]; // 3223:9460
db dummyd_3b6b0[32]; // 3223:9480
db dummyd_3b6d0[32]; // 3223:94a0
db dummyd_3b6f0[32]; // 3223:94c0
db dummyd_3b710[32]; // 3223:94e0
db dummyd_3b730[32]; // 3223:9500
db dummyd_3b750[32]; // 3223:9520
db dummyd_3b770[32]; // 3223:9540
db dummyd_3b790[32]; // 3223:9560
db dummyd_3b7b0[32]; // 3223:9580
db dummyd_3b7d0[32]; // 3223:95a0
db dummyd_3b7f0[32]; // 3223:95c0
db dummyd_3b810[32]; // 3223:95e0
db dummyd_3b830[32]; // 3223:9600
db dummyd_3b850[32]; // 3223:9620
db dummyd_3b870[32]; // 3223:9640
db dummyd_3b890[32]; // 3223:9660
db dummyd_3b8b0[32]; // 3223:9680
db dummyd_3b8d0[32]; // 3223:96a0
db dummyd_3b8f0[32]; // 3223:96c0
db dummyd_3b910[32]; // 3223:96e0
db dummyd_3b930[32]; // 3223:9700
db dummyd_3b950[32]; // 3223:9720
db dummyd_3b970[32]; // 3223:9740
db dummyd_3b990[32]; // 3223:9760
db dummyd_3b9b0[32]; // 3223:9780
db dummyd_3b9d0[32]; // 3223:97a0
db dummyd_3b9f0[32]; // 3223:97c0
db dummyd_3ba10[32]; // 3223:97e0
db dummyd_3ba30[32]; // 3223:9800
db dummyd_3ba50[32]; // 3223:9820
db dummyd_3ba70[32]; // 3223:9840
db dummyd_3ba90[32]; // 3223:9860
db dummyd_3bab0[32]; // 3223:9880
db dummyd_3bad0[32]; // 3223:98a0
db dummyd_3baf0[32]; // 3223:98c0
db dummyd_3bb10[32]; // 3223:98e0
db dummyd_3bb30[32]; // 3223:9900
db dummyd_3bb50[32]; // 3223:9920
db dummyd_3bb70[32]; // 3223:9940
db dummyd_3bb90[32]; // 3223:9960
db dummyd_3bbb0[32]; // 3223:9980
db dummyd_3bbd0[32]; // 3223:99a0
db dummyd_3bbf0[32]; // 3223:99c0
db dummyd_3bc10[32]; // 3223:99e0
db dummyd_3bc30[32]; // 3223:9a00
db dummyd_3bc50[32]; // 3223:9a20
db dummyd_3bc70[32]; // 3223:9a40
db dummyd_3bc90[32]; // 3223:9a60
db dummyd_3bcb0[32]; // 3223:9a80
db dummyd_3bcd0[32]; // 3223:9aa0
db dummyd_3bcf0[32]; // 3223:9ac0
db dummyd_3bd10[32]; // 3223:9ae0
db dummyd_3bd30[32]; // 3223:9b00
db dummyd_3bd50[32]; // 3223:9b20
db dummyd_3bd70[32]; // 3223:9b40
db dummyd_3bd90[32]; // 3223:9b60
db dummyd_3bdb0[32]; // 3223:9b80
db dummyd_3bdd0[32]; // 3223:9ba0
db dummyd_3bdf0[32]; // 3223:9bc0
db dummyd_3be10[32]; // 3223:9be0
db dummyd_3be30[32]; // 3223:9c00
db dummyd_3be50[32]; // 3223:9c20
db dummyd_3be70;
db dummyd_3be71;
db dummyd_3be72;
db dummyd_3be73;
db dummyd_3be74;
db dummyd_3be75;
db dummyd_3be76;
db dummyd_3be77;
db dummyd_3be78;
db dummyd_3be79;
db dummyd_3be7a;
db dummyd_3be7b;
db dummyd_3be7c;
db dummyd_3be7d;
db dummyd_3be7e;
db dummyd_3be7f;
db byte_4a460; // 3be8:0000
db dummyd_3be81;
db dummyd_3be82;
db dummyd_3be83;
db dummyd_3be84;
db dummyd_3be85;
db dummyd_3be86;
db dummyd_3be87;
db dummyd_3be88;
db dummyd_3be89;
db dummyd_3be8a;
db dummyd_3be8b;
db dummyd_3be8c;
db dummyd_3be8d;
db dummyd_3be8e;
db dummyd_3be8f;
db dummyd_3be90[28];
db byte_4a48c; // 3be8:002c
db dummyd_3bead[32]; // 3be8:002d
db dummyd_3becd; // 3be8:004d
db dummyd_3bece;
db dummyd_3becf;
db dummyd_3bed0; // 3be8:0050
db dummyd_3bed1; // 3be8:0051
db dummyd_3bed2;
db dummyd_3bed3;
db dummyd_3bed4; // 3be8:0054
db dummyd_3bed5;
db dummyd_3bed6;
db dummyd_3bed7;
db dummyd_3bed8; // 3be8:0058
db dummyd_3bed9; // 3be8:0059
db dummyd_3beda;
db dummyd_3bedb;
dw dummyd_3bedc; // 3be8:005c
db dummyd_3bede[32]; // 3be8:005e
db dummyd_3befe; // 3be8:007e
db dummyd_3beff; // 3be8:007f
db dummyd_3bf00;
db dummyd_3bf01[25];
db dummyd_3bf1a; // 3be8:009a
db dummyd_3bf1b; // 3be8:009b
db dummyd_3bf1c; // 3be8:009c
db dummyd_3bf1d[245];
db byte_4a5f2; // 3be8:0192
db dummyd_3c013;
db dummyd_3c014; // 3be8:0194
db dummyd_3c015; // 3be8:0195
db dummyd_3c016; // 3be8:0196
db dummyd_3c017; // 3be8:0197
db dummyd_3c018; // 3be8:0198
db dummyd_3c019; // 3be8:0199
db dummyd_3c01a; // 3be8:019a
db dummyd_3c01b; // 3be8:019b
db dummyd_3c01c; // 3be8:019c
db dummyd_3c01d; // 3be8:019d
db dummyd_3c01e; // 3be8:019e
db dummyd_3c01f; // 3be8:019f
db dummyd_3c020;
db dummyd_3c021[1];
db dummyd_3c022; // 3be8:01a2
db dummyd_3c023; // 3be8:01a3
db dummyd_3c024; // 3be8:01a4
db dummyd_3c025; // 3be8:01a5
db dummyd_3c026[58];
db dummyd_3c060[32]; // 3be8:01e0
db dummyd_3c080; // 3be8:0200
db dummyd_3c081; // 3be8:0201
db dummyd_3c082; // 3be8:0202
db dummyd_3c083; // 3be8:0203
db dummyd_3c084; // 3be8:0204
db dummyd_3c085; // 3be8:0205
db dummyd_3c086; // 3be8:0206
db dummyd_3c087;
db dummyd_3c088[10];
db dummyd_3c092; // 3be8:0212
db dummyd_3c093; // 3be8:0213
db dummyd_3c094; // 3be8:0214
db dummyd_3c095; // 3be8:0215
db dummyd_3c096;
db dummyd_3c097[95];
db dummyd_3c0f6; // 3be8:0276
db dummyd_3c0f7;
db dummyd_3c0f8[7];
db dummyd_3c0ff; // 3be8:027f
db dummyd_3c100;
db dummyd_3c101[1];
db dummyd_3c102[32]; // 3be8:0282
db dummyd_3c122[32]; // 3be8:02a2
db dummyd_3c142[32]; // 3be8:02c2
db dummyd_3c162[32]; // 3be8:02e2
db dummyd_3c182; // 3be8:0302
db dummyd_3c183; // 3be8:0303
db dummyd_3c184; // 3be8:0304
db dummyd_3c185; // 3be8:0305
db dummyd_3c186; // 3be8:0306
db dummyd_3c187; // 3be8:0307
db dummyd_3c188;
db dummyd_3c189; // 3be8:0309
db dummyd_3c18a; // 3be8:030a
db dummyd_3c18b[309];
db dummyd_3c2c0[32]; // 3be8:0440
db dummyd_3c2e0[32]; // 3be8:0460
db dummyd_3c300; // 3be8:0480
db dummyd_3c301;
db dummyd_3c302; // 3be8:0482
db dummyd_3c303; // 3be8:0483
db dummyd_3c304; // 3be8:0484
db dummyd_3c305; // 3be8:0485
db dummyd_3c306; // 3be8:0486
db dummyd_3c307; // 3be8:0487
db dummyd_3c308; // 3be8:0488
db dummyd_3c309; // 3be8:0489
db dummyd_3c30a; // 3be8:048a
db dummyd_3c30b; // 3be8:048b
db dummyd_3c30c; // 3be8:048c
db dummyd_3c30d; // 3be8:048d
db dummyd_3c30e; // 3be8:048e
db dummyd_3c30f; // 3be8:048f
db dummyd_3c310[84];
db dummyd_3c364[32]; // 3be8:04e4
db dummyd_3c384[32]; // 3be8:0504
db dummyd_3c3a4; // 3be8:0524
db dummyd_3c3a5; // 3be8:0525
db dummyd_3c3a6; // 3be8:0526
db dummyd_3c3a7; // 3be8:0527
db dummyd_3c3a8; // 3be8:0528
db dummyd_3c3a9; // 3be8:0529
db dummyd_3c3aa; // 3be8:052a
db dummyd_3c3ab; // 3be8:052b
db dummyd_3c3ac; // 3be8:052c
db dummyd_3c3ad; // 3be8:052d
db dummyd_3c3ae; // 3be8:052e
db dummyd_3c3af; // 3be8:052f
db dummyd_3c3b0; // 3be8:0530
db dummyd_3c3b1; // 3be8:0531
db dummyd_3c3b2; // 3be8:0532
db dummyd_3c3b3[152];
db dummyd_3c44b; // 3be8:05cb
db dummyd_3c44c[4];
db dummyd_3c450; // 3be8:05d0
db dummyd_3c451[25];
db dummyd_3c46a; // 3be8:05ea
db dummyd_3c46b[151];
db dummyd_3c502[32]; // 3be8:0682
db dummyd_3c522[32]; // 3be8:06a2
db dummyd_3c542; // 3be8:06c2
db dummyd_3c543; // 3be8:06c3
db dummyd_3c544; // 3be8:06c4
db dummyd_3c545;
db dummyd_3c546; // 3be8:06c6
db dummyd_3c547; // 3be8:06c7
db dummyd_3c548; // 3be8:06c8
db dummyd_3c549; // 3be8:06c9
db dummyd_3c54a; // 3be8:06ca
db dummyd_3c54b; // 3be8:06cb
db dummyd_3c54c; // 3be8:06cc
db dummyd_3c54d; // 3be8:06cd
db dummyd_3c54e; // 3be8:06ce
db dummyd_3c54f; // 3be8:06cf
db dummyd_3c550; // 3be8:06d0
db dummyd_3c551; // 3be8:06d1
db dummyd_3c552;
db dummyd_3c553; // 3be8:06d3
db dummyd_3c554; // 3be8:06d4
db dummyd_3c555; // 3be8:06d5
db dummyd_3c556; // 3be8:06d6
db dummyd_3c557; // 3be8:06d7
db dummyd_3c558; // 3be8:06d8
db dummyd_3c559; // 3be8:06d9
dw word_4ab3a; // 3be8:06da
db dummyd_3c55c[32]; // 3be8:06dc
db dummyd_3c57c; // 3be8:06fc
db dummyd_3c57d; // 3be8:06fd
db dummyd_3c57e; // 3be8:06fe
db dummyd_3c57f; // 3be8:06ff
db dummyd_3c580; // 3be8:0700
db dummyd_3c581;
db dummyd_3c582; // 3be8:0702
db dummyd_3c583; // 3be8:0703
db dummyd_3c584; // 3be8:0704
db dummyd_3c585; // 3be8:0705
db dummyd_3c586; // 3be8:0706
db dummyd_3c587; // 3be8:0707
db dummyd_3c588; // 3be8:0708
db dummyd_3c589; // 3be8:0709
db dummyd_3c58a; // 3be8:070a
db dummyd_3c58b; // 3be8:070b
db dummyd_3c58c; // 3be8:070c
db dummyd_3c58d; // 3be8:070d
db dummyd_3c58e; // 3be8:070e
db dummyd_3c58f; // 3be8:070f
db dummyd_3c590[28];
db dummyd_3c5ac[32]; // 3be8:072c
db dummyd_3c5cc[32]; // 3be8:074c
db dummyd_3c5ec[32]; // 3be8:076c
db dummyd_3c60c[32]; // 3be8:078c
db dummyd_3c62c[32]; // 3be8:07ac
db dummyd_3c64c[32]; // 3be8:07cc
db dummyd_3c66c[32]; // 3be8:07ec
db dummyd_3c68c[32]; // 3be8:080c
db dummyd_3c6ac[32]; // 3be8:082c
db dummyd_3c6cc[32]; // 3be8:084c
db dummyd_3c6ec[32]; // 3be8:086c
db dummyd_3c70c[32]; // 3be8:088c
db dummyd_3c72c[32]; // 3be8:08ac
db dummyd_3c74c[32]; // 3be8:08cc
db dummyd_3c76c[32]; // 3be8:08ec
db dummyd_3c78c[32]; // 3be8:090c
db dummyd_3c7ac[32]; // 3be8:092c
db dummyd_3c7cc[32]; // 3be8:094c
db dummyd_3c7ec[32]; // 3be8:096c
db dummyd_3c80c[32]; // 3be8:098c
db dummyd_3c82c[32]; // 3be8:09ac
db dummyd_3c84c[32]; // 3be8:09cc
db dummyd_3c86c[32]; // 3be8:09ec
db dummyd_3c88c[32]; // 3be8:0a0c
db dummyd_3c8ac[32]; // 3be8:0a2c
db dummyd_3c8cc[32]; // 3be8:0a4c
db dummyd_3c8ec[32]; // 3be8:0a6c
db dummyd_3c90c[32]; // 3be8:0a8c
db dummyd_3c92c[32]; // 3be8:0aac
db dummyd_3c94c[32]; // 3be8:0acc
db dummyd_3c96c[32]; // 3be8:0aec
db dummyd_3c98c[32]; // 3be8:0b0c
db dummyd_3c9ac[32]; // 3be8:0b2c
db dummyd_3c9cc[32]; // 3be8:0b4c
db dummyd_3c9ec[32]; // 3be8:0b6c
db dummyd_3ca0c[32]; // 3be8:0b8c
db dummyd_3ca2c[32]; // 3be8:0bac
db dummyd_3ca4c[32]; // 3be8:0bcc
db dummyd_3ca6c[32]; // 3be8:0bec
db dummyd_3ca8c[32]; // 3be8:0c0c
db dummyd_3caac[32]; // 3be8:0c2c
db dummyd_3cacc[32]; // 3be8:0c4c
db dummyd_3caec[32]; // 3be8:0c6c
db dummyd_3cb0c[32]; // 3be8:0c8c
db dummyd_3cb2c[32]; // 3be8:0cac
db dummyd_3cb4c[32]; // 3be8:0ccc
db dummyd_3cb6c[32]; // 3be8:0cec
db dummyd_3cb8c[32]; // 3be8:0d0c
db dummyd_3cbac[32]; // 3be8:0d2c
db dummyd_3cbcc[32]; // 3be8:0d4c
db dummyd_3cbec[32]; // 3be8:0d6c
db dummyd_3cc0c[32]; // 3be8:0d8c
db dummyd_3cc2c[32]; // 3be8:0dac
db dummyd_3cc4c[32]; // 3be8:0dcc
db dummyd_3cc6c[32]; // 3be8:0dec
db dummyd_3cc8c[32]; // 3be8:0e0c
db dummyd_3ccac[32]; // 3be8:0e2c
db dummyd_3cccc; // 3be8:0e4c
db dummyd_3cccd; // 3be8:0e4d
db dummyd_3ccce; // 3be8:0e4e
db dummyd_3cccf; // 3be8:0e4f
db dummyd_3ccd0; // 3be8:0e50
db dummyd_3ccd1;
db dummyd_3ccd2;
db dummyd_3ccd3; // 3be8:0e53
db dummyd_3ccd4; // 3be8:0e54
db dummyd_3ccd5; // 3be8:0e55
db dummyd_3ccd6; // 3be8:0e56
db dummyd_3ccd7; // 3be8:0e57
db dummyd_3ccd8;
db dummyd_3ccd9;
db dummyd_3ccda; // 3be8:0e5a
db dummyd_3ccdb; // 3be8:0e5b
db dummyd_3ccdc; // 3be8:0e5c
db dummyd_3ccdd[1];
db dummyd_3ccde;
db dummyd_3ccdf; // 3be8:0e5f
db dummyd_3cce0; // 3be8:0e60
db dummyd_3cce1[1];
db dummyd_3cce2; // 3be8:0e62
db dummyd_3cce3; // 3be8:0e63
db dummyd_3cce4;
db dummyd_3cce5[1];
db dummyd_3cce6; // 3be8:0e66
db dummyd_3cce7; // 3be8:0e67
db dummyd_3cce8; // 3be8:0e68
db dummyd_3cce9; // 3be8:0e69
db dummyd_3ccea;
db dummyd_3cceb; // 3be8:0e6b
db dummyd_3ccec; // 3be8:0e6c
db dummyd_3cced; // 3be8:0e6d
db dummyd_3ccee; // 3be8:0e6e
db dummyd_3ccef[1];
db dummyd_3ccf0[32]; // 3be8:0e70
db dummyd_3cd10[32]; // 3be8:0e90
db dummyd_3cd30[32]; // 3be8:0eb0
db dummyd_3cd50[32]; // 3be8:0ed0
db dummyd_3cd70[32]; // 3be8:0ef0
db dummyd_3cd90[32]; // 3be8:0f10
db dummyd_3cdb0[32]; // 3be8:0f30
db dummyd_3cdd0[32]; // 3be8:0f50
db dummyd_3cdf0[32]; // 3be8:0f70
db dummyd_3ce10[32]; // 3be8:0f90
db dummyd_3ce30[32]; // 3be8:0fb0
db dummyd_3ce50[32]; // 3be8:0fd0
db dummyd_3ce70[32]; // 3be8:0ff0
db dummyd_3ce90[32]; // 3be8:1010
db dummyd_3ceb0[32]; // 3be8:1030
db dummyd_3ced0[32]; // 3be8:1050
db dummyd_3cef0[32]; // 3be8:1070
db dummyd_3cf10[32]; // 3be8:1090
db dummyd_3cf30[32]; // 3be8:10b0
db dummyd_3cf50[32]; // 3be8:10d0
db dummyd_3cf70[32]; // 3be8:10f0
db dummyd_3cf90[32]; // 3be8:1110
db dummyd_3cfb0[32]; // 3be8:1130
db dummyd_3cfd0[32]; // 3be8:1150
db dummyd_3cff0[32]; // 3be8:1170
db dummyd_3d010[32]; // 3be8:1190
db dummyd_3d030[32]; // 3be8:11b0
db dummyd_3d050[32]; // 3be8:11d0
db dummyd_3d070[32]; // 3be8:11f0
db dummyd_3d090[32]; // 3be8:1210
db dummyd_3d0b0[32]; // 3be8:1230
db dummyd_3d0d0[32]; // 3be8:1250
db dummyd_3d0f0[32]; // 3be8:1270
db dummyd_3d110[32]; // 3be8:1290
db dummyd_3d130[32]; // 3be8:12b0
db dummyd_3d150[32]; // 3be8:12d0
db dummyd_3d170[32]; // 3be8:12f0
db dummyd_3d190[32]; // 3be8:1310
db dummyd_3d1b0[32]; // 3be8:1330
db dummyd_3d1d0[32]; // 3be8:1350
db dummyd_3d1f0[32]; // 3be8:1370
db dummyd_3d210[32]; // 3be8:1390
db dummyd_3d230[32]; // 3be8:13b0
db dummyd_3d250[32]; // 3be8:13d0
db dummyd_3d270;
db dummyd_3d271;
db dummyd_3d272;
db dummyd_3d273;
db dummyd_3d274;
db dummyd_3d275;
db dummyd_3d276;
db dummyd_3d277;
db dummyd_3d278;
db dummyd_3d279;
db dummyd_3d27a;
db dummyd_3d27b;
db dummyd_3d27c;
db dummyd_3d27d;
db dummyd_3d27e;
db dummyd_3d27f;
db dummyd_3d280[32]; // 3d28:0000
db dummyd_3d2a0[32]; // 3d28:0020
db dummyd_3d2c0[32]; // 3d28:0040
db dummyd_3d2e0[32]; // 3d28:0060
db dummyd_3d300[32]; // 3d28:0080
db dummyd_3d320[32]; // 3d28:00a0
db dummyd_3d340[32]; // 3d28:00c0
db dummyd_3d360[32]; // 3d28:00e0
db dummyd_3d380[32]; // 3d28:0100
db dummyd_3d3a0[32]; // 3d28:0120
db dummyd_3d3c0[32]; // 3d28:0140
db dummyd_3d3e0[32]; // 3d28:0160
db dummyd_3d400[32]; // 3d28:0180
db dummyd_3d420[32]; // 3d28:01a0
db dummyd_3d440[32]; // 3d28:01c0
db dummyd_3d460[32]; // 3d28:01e0
db dummyd_3d480[32]; // 3d28:0200
db dummyd_3d4a0[32]; // 3d28:0220
db dummyd_3d4c0[32]; // 3d28:0240
db dummyd_3d4e0[32]; // 3d28:0260
db dummyd_3d500[32]; // 3d28:0280
db dummyd_3d520[32]; // 3d28:02a0
db dummyd_3d540[32]; // 3d28:02c0
db dummyd_3d560[32]; // 3d28:02e0
db dummyd_3d580[32]; // 3d28:0300
db dummyd_3d5a0[32]; // 3d28:0320
db dummyd_3d5c0[32]; // 3d28:0340
db dummyd_3d5e0[32]; // 3d28:0360
db dummyd_3d600[32]; // 3d28:0380
db dummyd_3d620[32]; // 3d28:03a0
db dummyd_3d640[32]; // 3d28:03c0
db dummyd_3d660[32]; // 3d28:03e0
db dummyd_3d680[32]; // 3d28:0400
db dummyd_3d6a0[32]; // 3d28:0420
db dummyd_3d6c0[32]; // 3d28:0440
db dummyd_3d6e0[32]; // 3d28:0460
db dummyd_3d700[32]; // 3d28:0480
db dummyd_3d720[32]; // 3d28:04a0
db dummyd_3d740[32]; // 3d28:04c0
db dummyd_3d760[32]; // 3d28:04e0
db dummyd_3d780[32]; // 3d28:0500
db dummyd_3d7a0[32]; // 3d28:0520
db dummyd_3d7c0[32]; // 3d28:0540
db dummyd_3d7e0[32]; // 3d28:0560
db dummyd_3d800[32]; // 3d28:0580
db dummyd_3d820[32]; // 3d28:05a0
db dummyd_3d840[32]; // 3d28:05c0
db dummyd_3d860[32]; // 3d28:05e0
db dummyd_3d880[32]; // 3d28:0600
db dummyd_3d8a0[32]; // 3d28:0620
db dummyd_3d8c0[32]; // 3d28:0640
db dummyd_3d8e0[32]; // 3d28:0660
db dummyd_3d900[32]; // 3d28:0680
db dummyd_3d920[32]; // 3d28:06a0
db dummyd_3d940[32]; // 3d28:06c0
db dummyd_3d960[32]; // 3d28:06e0
db dummyd_3d980[32]; // 3d28:0700
db dummyd_3d9a0[32]; // 3d28:0720
db dummyd_3d9c0[32]; // 3d28:0740
db dummyd_3d9e0[32]; // 3d28:0760
db dummyd_3da00[32]; // 3d28:0780
db dummyd_3da20[32]; // 3d28:07a0
db dummyd_3da40[32]; // 3d28:07c0
db dummyd_3da60[32]; // 3d28:07e0
db dummyd_3da80[32]; // 3d28:0800
db dummyd_3daa0[32]; // 3d28:0820
db dummyd_3dac0[32]; // 3d28:0840
db dummyd_3dae0[32]; // 3d28:0860
db dummyd_3db00[32]; // 3d28:0880
db dummyd_3db20[32]; // 3d28:08a0
db dummyd_3db40[32]; // 3d28:08c0
db dummyd_3db60[32]; // 3d28:08e0
db dummyd_3db80[32]; // 3d28:0900
db dummyd_3dba0[32]; // 3d28:0920
db dummyd_3dbc0[32]; // 3d28:0940
db dummyd_3dbe0[32]; // 3d28:0960
db dummyd_3dc00[32]; // 3d28:0980
db dummyd_3dc20[32]; // 3d28:09a0
db dummyd_3dc40[32]; // 3d28:09c0
db dummyd_3dc60[32]; // 3d28:09e0
db dummyd_3dc80[32]; // 3d28:0a00
db dummyd_3dca0[32]; // 3d28:0a20
db dummyd_3dcc0[32]; // 3d28:0a40
db dummyd_3dce0[32]; // 3d28:0a60
db dummyd_3dd00[32]; // 3d28:0a80
db dummyd_3dd20[32]; // 3d28:0aa0
db dummyd_3dd40[32]; // 3d28:0ac0
db dummyd_3dd60[32]; // 3d28:0ae0
db dummyd_3dd80[32]; // 3d28:0b00
db dummyd_3dda0[32]; // 3d28:0b20
db dummyd_3ddc0[32]; // 3d28:0b40
db dummyd_3dde0[32]; // 3d28:0b60
db dummyd_3de00[32]; // 3d28:0b80
db dummyd_3de20[32]; // 3d28:0ba0
db dummyd_3de40[32]; // 3d28:0bc0
db dummyd_3de60[32]; // 3d28:0be0
db dummyd_3de80[32]; // 3d28:0c00
db dummyd_3dea0[32]; // 3d28:0c20
db dummyd_3dec0[32]; // 3d28:0c40
db dummyd_3dee0[32]; // 3d28:0c60
db dummyd_3df00[32]; // 3d28:0c80
db dummyd_3df20[32]; // 3d28:0ca0
db dummyd_3df40[32]; // 3d28:0cc0
db dummyd_3df60[32]; // 3d28:0ce0
db dummyd_3df80[32]; // 3d28:0d00
db dummyd_3dfa0[32]; // 3d28:0d20
db dummyd_3dfc0[32]; // 3d28:0d40
db dummyd_3dfe0[32]; // 3d28:0d60
db dummyd_3e000[32]; // 3d28:0d80
db dummyd_3e020[32]; // 3e02:0000
db dummyd_3e040;
db dummyd_3e041;
db dummyd_3e042;
db dummyd_3e043;
db dummyd_3e044; // 3e02:0024
db dummyd_3e045;
db dummyd_3e046; // 3e02:0026
db dummyd_3e047;
db dummyd_3e048;
db dummyd_3e049;
db dummyd_3e04a;
db dummyd_3e04b; // 3e02:002b
db dummyd_3e04c;
db dummyd_3e04d;
db dummyd_3e04e;
db unk_4c62f; // 3e02:002f
db dummyd_3e050[32]; // 3e02:0030
db dummyd_3e070[32]; // 3e02:0050
db dummyd_3e090[32]; // 3e02:0070
db dummyd_3e0b0[32]; // 3e02:0090
db dummyd_3e0d0;
db dummyd_3e0d1;
db dummyd_3e0d2;
db dummyd_3e0d3;
db dummyd_3e0d4;
db dummyd_3e0d5;
db dummyd_3e0d6;
db dummyd_3e0d7;
db dummyd_3e0d8;
db dummyd_3e0d9; // 3e02:00b9
db dummyd_3e0da;
db dummyd_3e0db;
db dummyd_3e0dc;
db dummyd_3e0dd;
db dummyd_3e0de;
db dummyd_3e0df; // 3e02:00bf
db dummyd_3e0e0[32]; // 3e0e:0000
db dummyd_3e100;
db dummyd_3e101;
db dummyd_3e102; // 3e0e:0022
db dummyd_3e103; // 3e0e:0023
db dummyd_3e104;
db dummyd_3e105;
db dummyd_3e106;
db dummyd_3e107;
db dummyd_3e108;
db dummyd_3e109;
db dummyd_3e10a; // 3e0e:002a
db dummyd_3e10b;
db dummyd_3e10c; // 3e0e:002c
db dummyd_3e10d;
db dummyd_3e10e;
db unk_4c6ef; // 3e0e:002f
db dummyd_3e110[32]; // 3e0e:0030
db dummyd_3e130[32]; // 3e0e:0050
db dummyd_3e150[32]; // 3e0e:0070
db dummyd_3e170[32]; // 3e0e:0090
db dummyd_3e190[32]; // 3e0e:00b0
db dummyd_3e1b0;
db dummyd_3e1b1;
db dummyd_3e1b2;
db dummyd_3e1b3;
db dummyd_3e1b4; // 3e1b:0004
db dummyd_3e1b5;
db dummyd_3e1b6; // 3e1b:0006
db dummyd_3e1b7;
db dummyd_3e1b8; // 3e1b:0008
db dummyd_3e1b9;
db dummyd_3e1ba; // 3e1b:000a
db dummyd_3e1bb; // 3e1b:000b
db dummyd_3e1bc; // 3e1b:000c
db dummyd_3e1bd; // 3e1b:000d
db dummyd_3e1be;
db dummyd_3e1bf;
db dummyd_3e1c0; // 3e1b:0010
db dummyd_3e1c1;
db dummyd_3e1c2; // 3e1b:0012
db dummyd_3e1c3;
db dummyd_3e1c4; // 3e1b:0014
db dummyd_3e1c5;
db dummyd_3e1c6; // 3e1b:0016
db dummyd_3e1c7;
db dummyd_3e1c8; // 3e1b:0018
db dummyd_3e1c9; // 3e1b:0019
db dummyd_3e1ca;
db dummyd_3e1cb;
db dummyd_3e1cc;
db unk_4c7ad; // 3e1b:001d
db dummyd_3e1ce[32]; // 3e1b:001e
db dummyd_3e1ee[32]; // 3e1b:003e
db dummyd_3e20e[32]; // 3e1b:005e
db dummyd_3e22e[32]; // 3e1b:007e
db dummyd_3e24e[32]; // 3e1b:009e
db dummyd_3e26e[32]; // 3e1b:00be
db dummyd_3e28e[32]; // 3e1b:00de
db dummyd_3e2ae[32]; // 3e1b:00fe
db dummyd_3e2ce[32]; // 3e1b:011e
db dummyd_3e2ee[32]; // 3e1b:013e
db dummyd_3e30e[32]; // 3e1b:015e
db dummyd_3e32e[32]; // 3e1b:017e
db dummyd_3e34e[32]; // 3e1b:019e
db dummyd_3e36e[32]; // 3e1b:01be
db dummyd_3e38e[32]; // 3e1b:01de
db dummyd_3e3ae[32]; // 3e1b:01fe
db dummyd_3e3ce[32]; // 3e1b:021e
db dummyd_3e3ee[32]; // 3e1b:023e
db dummyd_3e40e[32]; // 3e1b:025e
db dummyd_3e42e[32]; // 3e1b:027e
db dummyd_3e44e[32]; // 3e1b:029e
db dummyd_3e46e[32]; // 3e1b:02be
db dummyd_3e48e[32]; // 3e1b:02de
db dummyd_3e4ae[32]; // 3e1b:02fe
db dummyd_3e4ce[32]; // 3e1b:031e
db dummyd_3e4ee[32]; // 3e1b:033e
db dummyd_3e50e[32]; // 3e1b:035e
db dummyd_3e52e[32]; // 3e1b:037e
db dummyd_3e54e[32]; // 3e1b:039e
db dummyd_3e56e[32]; // 3e1b:03be
db dummyd_3e58e[32]; // 3e1b:03de
db dummyd_3e5ae[32]; // 3e1b:03fe
db dummyd_3e5ce[32]; // 3e1b:041e
db dummyd_3e5ee[32]; // 3e1b:043e
db dummyd_3e60e[32]; // 3e1b:045e
db dummyd_3e62e[32]; // 3e1b:047e
db dummyd_3e64e[32]; // 3e1b:049e
db dummyd_3e66e[32]; // 3e1b:04be
db dummyd_3e68e[32]; // 3e1b:04de
db dummyd_3e6ae[32]; // 3e1b:04fe
db dummyd_3e6ce[32]; // 3e1b:051e
db dummyd_3e6ee[32]; // 3e1b:053e
db dummyd_3e70e[32]; // 3e1b:055e
db dummyd_3e72e[32]; // 3e1b:057e
db dummyd_3e74e[32]; // 3e1b:059e
db dummyd_3e76e[32]; // 3e1b:05be
db dummyd_3e78e[32]; // 3e1b:05de
db dummyd_3e7ae[32]; // 3e1b:05fe
db dummyd_3e7ce[32]; // 3e1b:061e
db dummyd_3e7ee[32]; // 3e1b:063e
db dummyd_3e80e[32]; // 3e1b:065e
db dummyd_3e82e[32]; // 3e1b:067e
db dummyd_3e84e[32]; // 3e1b:069e
db dummyd_3e86e[32]; // 3e1b:06be
db dummyd_3e88e[32]; // 3e1b:06de
db dummyd_3e8ae[32]; // 3e1b:06fe
db dummyd_3e8ce[32]; // 3e1b:071e
db dummyd_3e8ee[32]; // 3e1b:073e
db dummyd_3e90e[32]; // 3e1b:075e
db dummyd_3e92e[32]; // 3e1b:077e
db dummyd_3e94e[32]; // 3e1b:079e
db dummyd_3e96e[32]; // 3e1b:07be
db dummyd_3e98e[32]; // 3e1b:07de
db dummyd_3e9ae[32]; // 3e1b:07fe
db dummyd_3e9ce[32]; // 3e1b:081e
db dummyd_3e9ee[32]; // 3e1b:083e
db dummyd_3ea0e[32]; // 3e1b:085e
db dummyd_3ea2e[32]; // 3e1b:087e
db dummyd_3ea4e[32]; // 3e1b:089e
db dummyd_3ea6e[32]; // 3e1b:08be
db dummyd_3ea8e[32]; // 3e1b:08de
db dummyd_3eaae[32]; // 3e1b:08fe
db dummyd_3eace[32]; // 3e1b:091e
db dummyd_3eaee[32]; // 3e1b:093e
db dummyd_3eb0e[32]; // 3e1b:095e
db dummyd_3eb2e[32]; // 3e1b:097e
db dummyd_3eb4e[32]; // 3e1b:099e
db dummyd_3eb6e[32]; // 3e1b:09be
db dummyd_3eb8e[32]; // 3e1b:09de
db dummyd_3ebae[32]; // 3e1b:09fe
db dummyd_3ebce[32]; // 3e1b:0a1e
db dummyd_3ebee[32]; // 3e1b:0a3e
db dummyd_3ec0e[32]; // 3e1b:0a5e
db dummyd_3ec2e[32]; // 3e1b:0a7e
db dummyd_3ec4e[32]; // 3e1b:0a9e
db dummyd_3ec6e[32]; // 3e1b:0abe
db dummyd_3ec8e[32]; // 3e1b:0ade
db dummyd_3ecae[32]; // 3e1b:0afe
db dummyd_3ecce[32]; // 3e1b:0b1e
db dummyd_3ecee[32]; // 3e1b:0b3e
db dummyd_3ed0e[32]; // 3e1b:0b5e
db dummyd_3ed2e[32]; // 3e1b:0b7e
db dummyd_3ed4e[32]; // 3e1b:0b9e
db dummyd_3ed6e[32]; // 3e1b:0bbe
db dummyd_3ed8e[32]; // 3e1b:0bde
db dummyd_3edae[32]; // 3e1b:0bfe
db dummyd_3edce[32]; // 3e1b:0c1e
db dummyd_3edee[32]; // 3e1b:0c3e
db dummyd_3ee0e[32]; // 3e1b:0c5e
db dummyd_3ee2e[32]; // 3e1b:0c7e
db dummyd_3ee4e[32]; // 3e1b:0c9e
db dummyd_3ee6e[32]; // 3e1b:0cbe
db dummyd_3ee8e[32]; // 3e1b:0cde
db dummyd_3eeae[32]; // 3e1b:0cfe
db dummyd_3eece[32]; // 3e1b:0d1e
db dummyd_3eeee[32]; // 3e1b:0d3e
db dummyd_3ef0e[32]; // 3e1b:0d5e
db dummyd_3ef2e[32]; // 3e1b:0d7e
db dummyd_3ef4e[32]; // 3e1b:0d9e
db dummyd_3ef6e[32]; // 3e1b:0dbe
db dummyd_3ef8e[32]; // 3e1b:0dde
db dummyd_3efae[32]; // 3e1b:0dfe
db dummyd_3efce[32]; // 3e1b:0e1e
db dummyd_3efee[32]; // 3e1b:0e3e
db dummyd_3f00e[32]; // 3e1b:0e5e
db dummyd_3f02e[32]; // 3e1b:0e7e
db dummyd_3f04e[32]; // 3e1b:0e9e
db dummyd_3f06e[32]; // 3e1b:0ebe
db dummyd_3f08e[32]; // 3e1b:0ede
db dummyd_3f0ae[32]; // 3e1b:0efe
db dummyd_3f0ce[32]; // 3e1b:0f1e
db dummyd_3f0ee[32]; // 3e1b:0f3e
db dummyd_3f10e[32]; // 3e1b:0f5e
db dummyd_3f12e[32]; // 3e1b:0f7e
db dummyd_3f14e[32]; // 3e1b:0f9e
db dummyd_3f16e[32]; // 3e1b:0fbe
db dummyd_3f18e[32]; // 3e1b:0fde
db dummyd_3f1ae[32]; // 3e1b:0ffe
db dummyd_3f1ce[32]; // 3e1b:101e
db dummyd_3f1ee[32]; // 3e1b:103e
db dummyd_3f20e[32]; // 3e1b:105e
db dummyd_3f22e[32]; // 3e1b:107e
db dummyd_3f24e[32]; // 3e1b:109e
db dummyd_3f26e[32]; // 3e1b:10be
db dummyd_3f28e[32]; // 3e1b:10de
db dummyd_3f2ae[32]; // 3e1b:10fe
db dummyd_3f2ce[32]; // 3e1b:111e
db dummyd_3f2ee[32]; // 3e1b:113e
db dummyd_3f30e[32]; // 3e1b:115e
db dummyd_3f32e[32]; // 3e1b:117e
db dummyd_3f34e[32]; // 3e1b:119e
db dummyd_3f36e[32]; // 3e1b:11be
db dummyd_3f38e[32]; // 3e1b:11de
db dummyd_3f3ae[32]; // 3e1b:11fe
db dummyd_3f3ce[32]; // 3e1b:121e
db dummyd_3f3ee[32]; // 3e1b:123e
db dummyd_3f40e[32]; // 3e1b:125e
db dummyd_3f42e[32]; // 3e1b:127e
db dummyd_3f44e[32]; // 3e1b:129e
db dummyd_3f46e[32]; // 3e1b:12be
db dummyd_3f48e[32]; // 3e1b:12de
db dummyd_3f4ae[32]; // 3e1b:12fe
db dummyd_3f4ce[32]; // 3e1b:131e
db dummyd_3f4ee[32]; // 3e1b:133e
db dummyd_3f50e[32]; // 3e1b:135e
db dummyd_3f52e[32]; // 3e1b:137e
db dummyd_3f54e[32]; // 3e1b:139e
db dummyd_3f56e[32]; // 3e1b:13be
db dummyd_3f58e[32]; // 3e1b:13de
db dummyd_3f5ae[32]; // 3e1b:13fe
db dummyd_3f5ce[32]; // 3e1b:141e
db dummyd_3f5ee[32]; // 3e1b:143e
db dummyd_3f60e[32]; // 3e1b:145e
db dummyd_3f62e[32]; // 3e1b:147e
db dummyd_3f64e[32]; // 3e1b:149e
db dummyd_3f66e[32]; // 3e1b:14be
db dummyd_3f68e[32]; // 3e1b:14de
db dummyd_3f6ae[32]; // 3e1b:14fe
db dummyd_3f6ce[32]; // 3e1b:151e
db dummyd_3f6ee[32]; // 3e1b:153e
db dummyd_3f70e[32]; // 3e1b:155e
db dummyd_3f72e[32]; // 3e1b:157e
db dummyd_3f74e[32]; // 3e1b:159e
db dummyd_3f76e[32]; // 3e1b:15be
db dummyd_3f78e[32]; // 3e1b:15de
db dummyd_3f7ae[32]; // 3e1b:15fe
db dummyd_3f7ce[32]; // 3e1b:161e
db dummyd_3f7ee[32]; // 3e1b:163e
db dummyd_3f80e[32]; // 3e1b:165e
db dummyd_3f82e[32]; // 3e1b:167e
db dummyd_3f84e[32]; // 3e1b:169e
db dummyd_3f86e[32]; // 3e1b:16be
db dummyd_3f88e[32]; // 3e1b:16de
db dummyd_3f8ae[32]; // 3e1b:16fe
db dummyd_3f8ce[32]; // 3e1b:171e
db dummyd_3f8ee[32]; // 3e1b:173e
db dummyd_3f90e[32]; // 3e1b:175e
db dummyd_3f92e[32]; // 3e1b:177e
db dummyd_3f94e[32]; // 3e1b:179e
db dummyd_3f96e[32]; // 3e1b:17be
db dummyd_3f98e[32]; // 3e1b:17de
db dummyd_3f9ae[32]; // 3e1b:17fe
db dummyd_3f9ce[32]; // 3e1b:181e
db dummyd_3f9ee[32]; // 3e1b:183e
db dummyd_3fa0e[32]; // 3e1b:185e
db dummyd_3fa2e[32]; // 3e1b:187e
db dummyd_3fa4e[32]; // 3e1b:189e
db dummyd_3fa6e[32]; // 3e1b:18be
db dummyd_3fa8e[32]; // 3e1b:18de
db dummyd_3faae[32]; // 3e1b:18fe
db dummyd_3face[32]; // 3e1b:191e
db dummyd_3faee[32]; // 3e1b:193e
db dummyd_3fb0e[32]; // 3e1b:195e
db dummyd_3fb2e[32]; // 3e1b:197e
db dummyd_3fb4e[32]; // 3e1b:199e
db dummyd_3fb6e[32]; // 3e1b:19be
db dummyd_3fb8e[32]; // 3e1b:19de
db dummyd_3fbae[32]; // 3e1b:19fe
db dummyd_3fbce[32]; // 3e1b:1a1e
db dummyd_3fbee[32]; // 3e1b:1a3e
db dummyd_3fc0e[32]; // 3e1b:1a5e
db dummyd_3fc2e[32]; // 3e1b:1a7e
db dummyd_3fc4e[32]; // 3e1b:1a9e
db dummyd_3fc6e[32]; // 3e1b:1abe
db dummyd_3fc8e[32]; // 3e1b:1ade
db dummyd_3fcae[32]; // 3e1b:1afe
db dummyd_3fcce[32]; // 3e1b:1b1e
db dummyd_3fcee[32]; // 3e1b:1b3e
db dummyd_3fd0e[32]; // 3e1b:1b5e
db dummyd_3fd2e[32]; // 3e1b:1b7e
db dummyd_3fd4e[32]; // 3e1b:1b9e
db dummyd_3fd6e[32]; // 3e1b:1bbe
db dummyd_3fd8e[32]; // 3e1b:1bde
db dummyd_3fdae[32]; // 3e1b:1bfe
db dummyd_3fdce[32]; // 3e1b:1c1e
db dummyd_3fdee[32]; // 3e1b:1c3e
db dummyd_3fe0e[32]; // 3e1b:1c5e
db dummyd_3fe2e[32]; // 3e1b:1c7e
db dummyd_3fe4e[32]; // 3e1b:1c9e
db dummyd_3fe6e[32]; // 3e1b:1cbe
db dummyd_3fe8e[32]; // 3e1b:1cde
db dummyd_3feae[32]; // 3e1b:1cfe
db dummyd_3fece[32]; // 3e1b:1d1e
db dummyd_3feee[32]; // 3e1b:1d3e
db dummyd_3ff0e[32]; // 3e1b:1d5e
db dummyd_3ff2e[32]; // 3e1b:1d7e
db dummyd_3ff4e[32]; // 3e1b:1d9e
db dummyd_3ff6e[32]; // 3e1b:1dbe
db dummyd_3ff8e[32]; // 3e1b:1dde
db dummyd_3ffae[32]; // 3e1b:1dfe
db dummyd_3ffce[32]; // 3e1b:1e1e
db dummyd_3ffee[32]; // 3e1b:1e3e
db dummyd_4000e[32]; // 3e1b:1e5e
db dummyd_4002e[32]; // 3e1b:1e7e
db dummyd_4004e[32]; // 3e1b:1e9e
db dummyd_4006e[32]; // 3e1b:1ebe
db dummyd_4008e[32]; // 3e1b:1ede
db dummyd_400ae[32]; // 3e1b:1efe
db dummyd_400ce[32]; // 3e1b:1f1e
db dummyd_400ee[32]; // 3e1b:1f3e
db dummyd_4010e[32]; // 3e1b:1f5e
db dummyd_4012e[32]; // 3e1b:1f7e
db dummyd_4014e[32]; // 3e1b:1f9e
db dummyd_4016e[32]; // 3e1b:1fbe
db dummyd_4018e[32]; // 3e1b:1fde
db dummyd_401ae[32]; // 3e1b:1ffe
db dummyd_401ce[32]; // 3e1b:201e
db dummyd_401ee[32]; // 3e1b:203e
db dummyd_4020e[32]; // 3e1b:205e
db dummyd_4022e[32]; // 3e1b:207e
db dummyd_4024e[32]; // 3e1b:209e
db dummyd_4026e[32]; // 3e1b:20be
db dummyd_4028e[32]; // 3e1b:20de
db dummyd_402ae[32]; // 3e1b:20fe
db dummyd_402ce[32]; // 3e1b:211e
db dummyd_402ee[32]; // 3e1b:213e
db dummyd_4030e[32]; // 3e1b:215e
db dummyd_4032e[32]; // 3e1b:217e
db dummyd_4034e[32]; // 3e1b:219e
db dummyd_4036e[32]; // 3e1b:21be
db dummyd_4038e[32]; // 3e1b:21de
db dummyd_403ae[32]; // 3e1b:21fe
db dummyd_403ce[32]; // 3e1b:221e
db dummyd_403ee[32]; // 3e1b:223e
db dummyd_4040e[32]; // 3e1b:225e
db dummyd_4042e[32]; // 3e1b:227e
db dummyd_4044e[32]; // 3e1b:229e
db dummyd_4046e[32]; // 3e1b:22be
db dummyd_4048e[32]; // 3e1b:22de
db dummyd_404ae[32]; // 3e1b:22fe
db dummyd_404ce[32]; // 3e1b:231e
db dummyd_404ee[32]; // 3e1b:233e
db dummyd_4050e[32]; // 3e1b:235e
db dummyd_4052e[32]; // 3e1b:237e
db dummyd_4054e[32]; // 3e1b:239e
db dummyd_4056e[32]; // 3e1b:23be
db dummyd_4058e[32]; // 3e1b:23de
db dummyd_405ae[32]; // 3e1b:23fe
db dummyd_405ce[32]; // 3e1b:241e
db dummyd_405ee[32]; // 3e1b:243e
db dummyd_4060e[32]; // 3e1b:245e
db dummyd_4062e[32]; // 3e1b:247e
db dummyd_4064e[32]; // 3e1b:249e
db dummyd_4066e[32]; // 3e1b:24be
db dummyd_4068e[32]; // 3e1b:24de
db dummyd_406ae[32]; // 3e1b:24fe
db dummyd_406ce[32]; // 3e1b:251e
db dummyd_406ee[32]; // 3e1b:253e
db dummyd_4070e[32]; // 3e1b:255e
db dummyd_4072e[32]; // 3e1b:257e
db dummyd_4074e[32]; // 3e1b:259e
db dummyd_4076e[32]; // 3e1b:25be
db dummyd_4078e[32]; // 3e1b:25de
db dummyd_407ae[32]; // 3e1b:25fe
db dummyd_407ce[32]; // 3e1b:261e
db dummyd_407ee[32]; // 3e1b:263e
db dummyd_4080e[32]; // 3e1b:265e
db dummyd_4082e[32]; // 3e1b:267e
db dummyd_4084e[32]; // 3e1b:269e
db dummyd_4086e[32]; // 3e1b:26be
db dummyd_4088e[32]; // 3e1b:26de
db dummyd_408ae[32]; // 3e1b:26fe
db dummyd_408ce[32]; // 3e1b:271e
db dummyd_408ee[32]; // 3e1b:273e
db dummyd_4090e[32]; // 3e1b:275e
db dummyd_4092e[32]; // 3e1b:277e
db dummyd_4094e[32]; // 3e1b:279e
db dummyd_4096e[32]; // 3e1b:27be
db dummyd_4098e[32]; // 3e1b:27de
db dummyd_409ae[32]; // 3e1b:27fe
db dummyd_409ce[32]; // 3e1b:281e
db dummyd_409ee[32]; // 3e1b:283e
db dummyd_40a0e[32]; // 3e1b:285e
db dummyd_40a2e[32]; // 3e1b:287e
db dummyd_40a4e[32]; // 3e1b:289e
db dummyd_40a6e[32]; // 3e1b:28be
db dummyd_40a8e[32]; // 3e1b:28de
db dummyd_40aae[32]; // 3e1b:28fe
db dummyd_40ace[32]; // 3e1b:291e
db dummyd_40aee[32]; // 3e1b:293e
db dummyd_40b0e[32]; // 3e1b:295e
db dummyd_40b2e[32]; // 3e1b:297e
db dummyd_40b4e[32]; // 3e1b:299e
db dummyd_40b6e[32]; // 3e1b:29be
db dummyd_40b8e[32]; // 3e1b:29de
db dummyd_40bae; // 3e1b:29fe
db dummyd_40baf;
db dummyd_40bb0; // 3e1b:2a00
db dummyd_40bb1;
db unk_4f192; // 3e1b:2a02
db dummyd_40bb3[32]; // 3e1b:2a03
db dummyd_40bd3[32]; // 3e1b:2a23
db dummyd_40bf3[32]; // 3e1b:2a43
db dummyd_40c13[32]; // 3e1b:2a63
db dummyd_40c33[32]; // 3e1b:2a83
db dummyd_40c53[32]; // 3e1b:2aa3
db dummyd_40c73[32]; // 3e1b:2ac3
db dummyd_40c93[32]; // 3e1b:2ae3
db dummyd_40cb3[32]; // 3e1b:2b03
db dummyd_40cd3[32]; // 3e1b:2b23
db dummyd_40cf3[32]; // 3e1b:2b43
db dummyd_40d13[32]; // 3e1b:2b63
db dummyd_40d33[32]; // 3e1b:2b83
db dummyd_40d53[32]; // 3e1b:2ba3
db dummyd_40d73[32]; // 3e1b:2bc3
db dummyd_40d93[32]; // 3e1b:2be3
db dummyd_40db3[32]; // 3e1b:2c03
db dummyd_40dd3[32]; // 3e1b:2c23
db dummyd_40df3[32]; // 3e1b:2c43
db dummyd_40e13[32]; // 3e1b:2c63
db dummyd_40e33[32]; // 3e1b:2c83
db dummyd_40e53[32]; // 3e1b:2ca3
db dummyd_40e73[32]; // 3e1b:2cc3
db dummyd_40e93[32]; // 3e1b:2ce3
db dummyd_40eb3[32]; // 3e1b:2d03
db dummyd_40ed3[32]; // 3e1b:2d23
db dummyd_40ef3[32]; // 3e1b:2d43
db dummyd_40f13[32]; // 3e1b:2d63
db dummyd_40f33[32]; // 3e1b:2d83
db dummyd_40f53[32]; // 3e1b:2da3
db dummyd_40f73[32]; // 3e1b:2dc3
db dummyd_40f93[32]; // 3e1b:2de3
db dummyd_40fb3[32]; // 3e1b:2e03
db dummyd_40fd3[32]; // 3e1b:2e23
db dummyd_40ff3[32]; // 3e1b:2e43
db dummyd_41013[32]; // 3e1b:2e63
db dummyd_41033[32]; // 3e1b:2e83
db dummyd_41053[32]; // 3e1b:2ea3
db dummyd_41073[32]; // 3e1b:2ec3
db dummyd_41093[32]; // 3e1b:2ee3
db dummyd_410b3[32]; // 3e1b:2f03
db dummyd_410d3[32]; // 3e1b:2f23
db dummyd_410f3[32]; // 3e1b:2f43
db dummyd_41113[32]; // 3e1b:2f63
db dummyd_41133[32]; // 3e1b:2f83
db dummyd_41153[32]; // 3e1b:2fa3
db dummyd_41173[32]; // 3e1b:2fc3
db dummyd_41193[32]; // 3e1b:2fe3
db dummyd_411b3[32]; // 3e1b:3003
db dummyd_411d3[32]; // 3e1b:3023
db dummyd_411f3[32]; // 3e1b:3043
db dummyd_41213[32]; // 3e1b:3063
db dummyd_41233[32]; // 3e1b:3083
db dummyd_41253[32]; // 3e1b:30a3
db dummyd_41273[32]; // 3e1b:30c3
db dummyd_41293[32]; // 3e1b:30e3
db dummyd_412b3[32]; // 3e1b:3103
db dummyd_412d3[32]; // 3e1b:3123
db dummyd_412f3[32]; // 3e1b:3143
db dummyd_41313[32]; // 3e1b:3163
db dummyd_41333[32]; // 3e1b:3183
db dummyd_41353[32]; // 3e1b:31a3
db dummyd_41373[32]; // 3e1b:31c3
db dummyd_41393[32]; // 3e1b:31e3
db dummyd_413b3[32]; // 3e1b:3203
db dummyd_413d3[32]; // 3e1b:3223
db dummyd_413f3[32]; // 3e1b:3243
db dummyd_41413[32]; // 3e1b:3263
db dummyd_41433[32]; // 3e1b:3283
db dummyd_41453[32]; // 3e1b:32a3
db dummyd_41473[32]; // 3e1b:32c3
db dummyd_41493[32]; // 3e1b:32e3
db dummyd_414b3[32]; // 3e1b:3303
db dummyd_414d3[32]; // 3e1b:3323
db dummyd_414f3[32]; // 3e1b:3343
db dummyd_41513[32]; // 3e1b:3363
db dummyd_41533[32]; // 3e1b:3383
db dummyd_41553[32]; // 3e1b:33a3
db dummyd_41573[32]; // 3e1b:33c3
db dummyd_41593[32]; // 3e1b:33e3
db dummyd_415b3[32]; // 3e1b:3403
db dummyd_415d3[32]; // 3e1b:3423
db dummyd_415f3[32]; // 3e1b:3443
db dummyd_41613[32]; // 3e1b:3463
db dummyd_41633[32]; // 3e1b:3483
db dummyd_41653[32]; // 3e1b:34a3
db dummyd_41673[32]; // 3e1b:34c3
db dummyd_41693[32]; // 3e1b:34e3
db dummyd_416b3[32]; // 3e1b:3503
db dummyd_416d3[32]; // 3e1b:3523
db dummyd_416f3[32]; // 3e1b:3543
db dummyd_41713[32]; // 3e1b:3563
db dummyd_41733[32]; // 3e1b:3583
db dummyd_41753[32]; // 3e1b:35a3
db dummyd_41773[32]; // 3e1b:35c3
db dummyd_41793[32]; // 3e1b:35e3
db dummyd_417b3[32]; // 3e1b:3603
db dummyd_417d3[32]; // 3e1b:3623
db dummyd_417f3[32]; // 3e1b:3643
db dummyd_41813[32]; // 3e1b:3663
db dummyd_41833[32]; // 3e1b:3683
db dummyd_41853[32]; // 3e1b:36a3
db dummyd_41873[32]; // 3e1b:36c3
db dummyd_41893[32]; // 3e1b:36e3
db dummyd_418b3[32]; // 3e1b:3703
db dummyd_418d3[32]; // 3e1b:3723
db dummyd_418f3[32]; // 3e1b:3743
db dummyd_41913[32]; // 3e1b:3763
db dummyd_41933[32]; // 3e1b:3783
db dummyd_41953[32]; // 3e1b:37a3
db dummyd_41973[32]; // 3e1b:37c3
db dummyd_41993[32]; // 3e1b:37e3
db dummyd_419b3[32]; // 3e1b:3803
db dummyd_419d3[32]; // 3e1b:3823
db dummyd_419f3[32]; // 3e1b:3843
db dummyd_41a13[32]; // 3e1b:3863
db dummyd_41a33[32]; // 3e1b:3883
db dummyd_41a53[32]; // 3e1b:38a3
db dummyd_41a73[32]; // 3e1b:38c3
db dummyd_41a93[32]; // 3e1b:38e3
db dummyd_41ab3[32]; // 3e1b:3903
db dummyd_41ad3[32]; // 3e1b:3923
db dummyd_41af3[32]; // 3e1b:3943
db dummyd_41b13[32]; // 3e1b:3963
db dummyd_41b33[32]; // 3e1b:3983
db dummyd_41b53[32]; // 3e1b:39a3
db dummyd_41b73[32]; // 3e1b:39c3
db dummyd_41b93[32]; // 3e1b:39e3
db dummyd_41bb3[32]; // 3e1b:3a03
db dummyd_41bd3[32]; // 3e1b:3a23
db dummyd_41bf3[32]; // 3e1b:3a43
db dummyd_41c13[32]; // 3e1b:3a63
db dummyd_41c33[32]; // 3e1b:3a83
db dummyd_41c53[32]; // 3e1b:3aa3
db dummyd_41c73[32]; // 3e1b:3ac3
db dummyd_41c93[32]; // 3e1b:3ae3
db dummyd_41cb3[32]; // 3e1b:3b03
db dummyd_41cd3[32]; // 3e1b:3b23
db dummyd_41cf3[32]; // 3e1b:3b43
db dummyd_41d13[32]; // 3e1b:3b63
db dummyd_41d33[32]; // 3e1b:3b83
db dummyd_41d53[32]; // 3e1b:3ba3
db dummyd_41d73[32]; // 3e1b:3bc3
db dummyd_41d93[32]; // 3e1b:3be3
db dummyd_41db3[32]; // 3e1b:3c03
db dummyd_41dd3[32]; // 3e1b:3c23
db dummyd_41df3[32]; // 3e1b:3c43
db dummyd_41e13[32]; // 3e1b:3c63
db dummyd_41e33[32]; // 3e1b:3c83
db dummyd_41e53[32]; // 3e1b:3ca3
db dummyd_41e73[32]; // 3e1b:3cc3
db dummyd_41e93[32]; // 3e1b:3ce3
db dummyd_41eb3[32]; // 3e1b:3d03
db dummyd_41ed3[32]; // 3e1b:3d23
db dummyd_41ef3[32]; // 3e1b:3d43
db dummyd_41f13[32]; // 3e1b:3d63
db dummyd_41f33[32]; // 3e1b:3d83
db dummyd_41f53[32]; // 3e1b:3da3
db dummyd_41f73[32]; // 3e1b:3dc3
db dummyd_41f93[32]; // 3e1b:3de3
db dummyd_41fb3[32]; // 3e1b:3e03
db dummyd_41fd3[32]; // 3e1b:3e23
db dummyd_41ff3[32]; // 3e1b:3e43
db dummyd_42013[32]; // 3e1b:3e63
db dummyd_42033[32]; // 3e1b:3e83
db dummyd_42053[32]; // 3e1b:3ea3
db dummyd_42073[32]; // 3e1b:3ec3
db dummyd_42093[32]; // 3e1b:3ee3
db dummyd_420b3[32]; // 3e1b:3f03
db dummyd_420d3[32]; // 3e1b:3f23
db dummyd_420f3[32]; // 3e1b:3f43
db dummyd_42113[32]; // 3e1b:3f63
db dummyd_42133[32]; // 3e1b:3f83
db dummyd_42153[32]; // 3e1b:3fa3
db dummyd_42173[32]; // 3e1b:3fc3
db dummyd_42193[32]; // 3e1b:3fe3
db dummyd_421b3[32]; // 3e1b:4003
db dummyd_421d3[32]; // 3e1b:4023
db dummyd_421f3[32]; // 3e1b:4043
db dummyd_42213[32]; // 3e1b:4063
db dummyd_42233[32]; // 3e1b:4083
db dummyd_42253[32]; // 3e1b:40a3
db dummyd_42273[32]; // 3e1b:40c3
db dummyd_42293[32]; // 3e1b:40e3
db dummyd_422b3[32]; // 3e1b:4103
db dummyd_422d3[32]; // 3e1b:4123
db dummyd_422f3[32]; // 3e1b:4143
db dummyd_42313[32]; // 3e1b:4163
db dummyd_42333[32]; // 3e1b:4183
db dummyd_42353[32]; // 3e1b:41a3
db dummyd_42373[32]; // 3e1b:41c3
db dummyd_42393[32]; // 3e1b:41e3
db dummyd_423b3[32]; // 3e1b:4203
db dummyd_423d3[32]; // 3e1b:4223
db dummyd_423f3[32]; // 3e1b:4243
db dummyd_42413[32]; // 3e1b:4263
db dummyd_42433[32]; // 3e1b:4283
db dummyd_42453[32]; // 3e1b:42a3
db dummyd_42473[32]; // 3e1b:42c3
db dummyd_42493[32]; // 3e1b:42e3
db dummyd_424b3[32]; // 3e1b:4303
db dummyd_424d3[32]; // 3e1b:4323
db dummyd_424f3[32]; // 3e1b:4343
db dummyd_42513[32]; // 3e1b:4363
db dummyd_42533[32]; // 3e1b:4383
db dummyd_42553[32]; // 3e1b:43a3
db dummyd_42573[32]; // 3e1b:43c3
db dummyd_42593[32]; // 3e1b:43e3
db dummyd_425b3[32]; // 3e1b:4403
db dummyd_425d3[32]; // 3e1b:4423
db dummyd_425f3[32]; // 3e1b:4443
db dummyd_42613[32]; // 3e1b:4463
db dummyd_42633[32]; // 3e1b:4483
db dummyd_42653[32]; // 3e1b:44a3
db dummyd_42673[32]; // 3e1b:44c3
db dummyd_42693[32]; // 3e1b:44e3
db dummyd_426b3[32]; // 3e1b:4503
db dummyd_426d3[32]; // 3e1b:4523
db dummyd_426f3[32]; // 3e1b:4543
db dummyd_42713[32]; // 3e1b:4563
db dummyd_42733[32]; // 3e1b:4583
db dummyd_42753[32]; // 3e1b:45a3
db dummyd_42773[32]; // 3e1b:45c3
db dummyd_42793[32]; // 3e1b:45e3
db dummyd_427b3[32]; // 3e1b:4603
db dummyd_427d3[32]; // 3e1b:4623
db dummyd_427f3[32]; // 3e1b:4643
db dummyd_42813[32]; // 3e1b:4663
db dummyd_42833[32]; // 3e1b:4683
db dummyd_42853[32]; // 3e1b:46a3
db dummyd_42873[32]; // 3e1b:46c3
db dummyd_42893[32]; // 3e1b:46e3
db dummyd_428b3[32]; // 3e1b:4703
db dummyd_428d3[32]; // 3e1b:4723
db dummyd_428f3[32]; // 3e1b:4743
db dummyd_42913[32]; // 3e1b:4763
db dummyd_42933[32]; // 3e1b:4783
db dummyd_42953[32]; // 3e1b:47a3
db dummyd_42973[32]; // 3e1b:47c3
db dummyd_42993[32]; // 3e1b:47e3
db dummyd_429b3[32]; // 3e1b:4803
db dummyd_429d3[32]; // 3e1b:4823
db dummyd_429f3[32]; // 3e1b:4843
db dummyd_42a13[32]; // 3e1b:4863
db dummyd_42a33[32]; // 3e1b:4883
db dummyd_42a53[32]; // 3e1b:48a3
db dummyd_42a73[32]; // 3e1b:48c3
db dummyd_42a93[32]; // 3e1b:48e3
db dummyd_42ab3[32]; // 3e1b:4903
db dummyd_42ad3[32]; // 3e1b:4923
db dummyd_42af3[32]; // 3e1b:4943
db dummyd_42b13[32]; // 3e1b:4963
db dummyd_42b33[32]; // 3e1b:4983
db dummyd_42b53[32]; // 3e1b:49a3
db dummyd_42b73[32]; // 3e1b:49c3
db dummyd_42b93[32]; // 3e1b:49e3
db dummyd_42bb3[32]; // 3e1b:4a03
db dummyd_42bd3[32]; // 3e1b:4a23
db dummyd_42bf3[32]; // 3e1b:4a43
db dummyd_42c13[32]; // 3e1b:4a63
db dummyd_42c33[32]; // 3e1b:4a83
db dummyd_42c53[32]; // 3e1b:4aa3
db dummyd_42c73[32]; // 3e1b:4ac3
db dummyd_42c93[32]; // 3e1b:4ae3
db dummyd_42cb3[32]; // 3e1b:4b03
db dummyd_42cd3[32]; // 3e1b:4b23
db dummyd_42cf3[32]; // 3e1b:4b43
db dummyd_42d13[32]; // 3e1b:4b63
db dummyd_42d33[32]; // 3e1b:4b83
db dummyd_42d53[32]; // 3e1b:4ba3
db dummyd_42d73[32]; // 3e1b:4bc3
db dummyd_42d93[32]; // 3e1b:4be3
db dummyd_42db3[32]; // 3e1b:4c03
db dummyd_42dd3[32]; // 3e1b:4c23
db dummyd_42df3[32]; // 3e1b:4c43
db dummyd_42e13[32]; // 3e1b:4c63
db dummyd_42e33[32]; // 3e1b:4c83
db dummyd_42e53[32]; // 3e1b:4ca3
db dummyd_42e73[32]; // 3e1b:4cc3
db dummyd_42e93[32]; // 3e1b:4ce3
db dummyd_42eb3[32]; // 3e1b:4d03
db dummyd_42ed3[32]; // 3e1b:4d23
db dummyd_42ef3[32]; // 3e1b:4d43
db dummyd_42f13[32]; // 3e1b:4d63
db dummyd_42f33[32]; // 3e1b:4d83
db dummyd_42f53[32]; // 3e1b:4da3
db dummyd_42f73[32]; // 3e1b:4dc3
db dummyd_42f93[32]; // 3e1b:4de3
db dummyd_42fb3[32]; // 3e1b:4e03
db dummyd_42fd3[32]; // 3e1b:4e23
db dummyd_42ff3[32]; // 3e1b:4e43
db dummyd_43013[32]; // 3e1b:4e63
db dummyd_43033[32]; // 3e1b:4e83
db dummyd_43053[32]; // 3e1b:4ea3
db dummyd_43073[32]; // 3e1b:4ec3
db dummyd_43093[32]; // 3e1b:4ee3
db dummyd_430b3[32]; // 3e1b:4f03
db dummyd_430d3[32]; // 3e1b:4f23
db dummyd_430f3[32]; // 3e1b:4f43
db dummyd_43113[32]; // 3e1b:4f63
db dummyd_43133[32]; // 3e1b:4f83
db dummyd_43153[32]; // 3e1b:4fa3
db dummyd_43173[32]; // 3e1b:4fc3
db dummyd_43193[32]; // 3e1b:4fe3
db dummyd_431b3[32]; // 3e1b:5003
db dummyd_431d3[32]; // 3e1b:5023
db dummyd_431f3[32]; // 3e1b:5043
db dummyd_43213[32]; // 3e1b:5063
db dummyd_43233[32]; // 3e1b:5083
db dummyd_43253[32]; // 3e1b:50a3
db dummyd_43273[32]; // 3e1b:50c3
db dummyd_43293[32]; // 3e1b:50e3
db dummyd_432b3[32]; // 3e1b:5103
db dummyd_432d3[32]; // 3e1b:5123
db dummyd_432f3[32]; // 3e1b:5143
db dummyd_43313[32]; // 3e1b:5163
db dummyd_43333[32]; // 3e1b:5183
db dummyd_43353[32]; // 3e1b:51a3
db dummyd_43373[32]; // 3e1b:51c3
db dummyd_43393[32]; // 3e1b:51e3
db dummyd_433b3[32]; // 3e1b:5203
db dummyd_433d3[32]; // 3e1b:5223
db dummyd_433f3[32]; // 3e1b:5243
db dummyd_43413[32]; // 3e1b:5263
db dummyd_43433[32]; // 3e1b:5283
db dummyd_43453[32]; // 3e1b:52a3
db dummyd_43473[32]; // 3e1b:52c3
db dummyd_43493[32]; // 3e1b:52e3
db dummyd_434b3[32]; // 3e1b:5303
db dummyd_434d3[32]; // 3e1b:5323
db dummyd_434f3[32]; // 3e1b:5343
db dummyd_43513[32]; // 3e1b:5363
db dummyd_43533[32]; // 3e1b:5383
db dummyd_43553[32]; // 3e1b:53a3
db dummyd_43573[32]; // 3e1b:53c3
db dummyd_43593[32]; // 3e1b:53e3
db dummyd_435b3[32]; // 3e1b:5403
db dummyd_435d3[32]; // 3e1b:5423
db dummyd_435f3[32]; // 3e1b:5443
db dummyd_43613[32]; // 3e1b:5463
db dummyd_43633[32]; // 3e1b:5483
db dummyd_43653[32]; // 3e1b:54a3
db dummyd_43673[32]; // 3e1b:54c3
db dummyd_43693[32]; // 3e1b:54e3
db dummyd_436b3[32]; // 3e1b:5503
db dummyd_436d3[32]; // 3e1b:5523
db dummyd_436f3[32]; // 3e1b:5543
db dummyd_43713[32]; // 3e1b:5563
db dummyd_43733[32]; // 3e1b:5583
db dummyd_43753[32]; // 3e1b:55a3
db dummyd_43773[32]; // 3e1b:55c3
db dummyd_43793[32]; // 3e1b:55e3
db dummyd_437b3[32]; // 3e1b:5603
db dummyd_437d3[32]; // 3e1b:5623
db dummyd_437f3[32]; // 3e1b:5643
db dummyd_43813[32]; // 3e1b:5663
db dummyd_43833[32]; // 3e1b:5683
db dummyd_43853[32]; // 3e1b:56a3
db dummyd_43873[32]; // 3e1b:56c3
db dummyd_43893[32]; // 3e1b:56e3
db dummyd_438b3[32]; // 3e1b:5703
db dummyd_438d3[32]; // 3e1b:5723
db dummyd_438f3[32]; // 3e1b:5743
db dummyd_43913[32]; // 3e1b:5763
db dummyd_43933[32]; // 3e1b:5783
db dummyd_43953[32]; // 3e1b:57a3
db dummyd_43973; // 3e1b:57c3
db dummyd_43974;
db dummyd_43975;
db dummyd_43976;
db dummyd_43977; // 3e1b:57c7
db dummyd_43978; // 3e1b:57c8
db dummyd_43979; // 3e1b:57c9
db dummyd_4397a;
db dummyd_4397b;
db dummyd_4397c;
db dummyd_4397d;
db dummyd_4397e; // 3e1b:57ce
db dummyd_4397f; // 3e1b:57cf
db dummyd_43980;
db dummyd_43981;
db dummyd_43982;
db dummyd_43983;
db dummyd_43984; // 4398:0004
db dummyd_43985;
db dummyd_43986; // 4398:0006
db dummyd_43987;
db dummyd_43988; // 4398:0008
db dummyd_43989;
db dummyd_4398a; // 4398:000a
db dummyd_4398b;
db dummyd_4398c; // 4398:000c
db dummyd_4398d; // 4398:000d
db dummyd_4398e; // 4398:000e
db dummyd_4398f; // 4398:000f
db dummyd_43990;
db dummyd_43991;
db dummyd_43992; // 4398:0012
db dummyd_43993;
db dummyd_43994; // 4398:0014
db unk_51f75; // 4398:0015
db dummyd_43996[32]; // 4398:0016
db dummyd_439b6[32]; // 4398:0036
db dummyd_439d6[32]; // 4398:0056
db dummyd_439f6[32]; // 4398:0076
db dummyd_43a16[32]; // 4398:0096
db dummyd_43a36[32]; // 4398:00b6
db dummyd_43a56[32]; // 4398:00d6
db dummyd_43a76[32]; // 4398:00f6
db dummyd_43a96[32]; // 4398:0116
db dummyd_43ab6[32]; // 4398:0136
db dummyd_43ad6[32]; // 4398:0156
db dummyd_43af6[32]; // 4398:0176
db dummyd_43b16[32]; // 4398:0196
db dummyd_43b36[32]; // 4398:01b6
db dummyd_43b56[32]; // 4398:01d6
db dummyd_43b76[32]; // 4398:01f6
db dummyd_43b96[32]; // 4398:0216
db dummyd_43bb6[32]; // 4398:0236
db dummyd_43bd6[32]; // 4398:0256
db dummyd_43bf6[32]; // 4398:0276
db dummyd_43c16[32]; // 4398:0296
db dummyd_43c36[32]; // 4398:02b6
db dummyd_43c56[32]; // 4398:02d6
db dummyd_43c76[32]; // 4398:02f6
db dummyd_43c96[32]; // 4398:0316
db dummyd_43cb6[32]; // 4398:0336
db dummyd_43cd6[32]; // 4398:0356
db dummyd_43cf6[32]; // 4398:0376
db dummyd_43d16[32]; // 4398:0396
db dummyd_43d36[32]; // 4398:03b6
db dummyd_43d56[32]; // 4398:03d6
db dummyd_43d76[32]; // 4398:03f6
db dummyd_43d96[32]; // 4398:0416
db dummyd_43db6[32]; // 4398:0436
db dummyd_43dd6[32]; // 4398:0456
db dummyd_43df6[32]; // 4398:0476
db dummyd_43e16[32]; // 4398:0496
db dummyd_43e36[32]; // 4398:04b6
db dummyd_43e56[32]; // 4398:04d6
db dummyd_43e76[32]; // 4398:04f6
db dummyd_43e96[32]; // 4398:0516
db dummyd_43eb6[32]; // 4398:0536
db dummyd_43ed6[32]; // 4398:0556
db dummyd_43ef6[32]; // 4398:0576
db dummyd_43f16[32]; // 4398:0596
db dummyd_43f36[32]; // 4398:05b6
db dummyd_43f56[32]; // 4398:05d6
db dummyd_43f76[32]; // 4398:05f6
db dummyd_43f96[32]; // 4398:0616
db dummyd_43fb6[32]; // 4398:0636
db dummyd_43fd6[32]; // 4398:0656
db dummyd_43ff6[32]; // 4398:0676
db dummyd_44016[32]; // 4398:0696
db dummyd_44036[32]; // 4398:06b6
db dummyd_44056[32]; // 4398:06d6
db dummyd_44076[32]; // 4398:06f6
db dummyd_44096[32]; // 4398:0716
db dummyd_440b6[32]; // 4398:0736
db dummyd_440d6; // 4398:0756
db dummyd_440d7; // 4398:0757
db dummyd_440d8; // 4398:0758
db dummyd_440d9; // 4398:0759
db dummyd_440da; // 4398:075a
db dummyd_440db; // 4398:075b
db dummyd_440dc; // 4398:075c
db dummyd_440dd;
db dummyd_440de; // 4398:075e
db dummyd_440df; // 4398:075f
db dummyd_440e0[32]; // 440e:0000
db dummyd_44100[32]; // 440e:0020
db dummyd_44120[32]; // 440e:0040
db dummyd_44140[32]; // 440e:0060
db dummyd_44160[32]; // 440e:0080
db dummyd_44180[32]; // 440e:00a0
db dummyd_441a0[32]; // 440e:00c0
db dummyd_441c0[32]; // 440e:00e0
db dummyd_441e0[32]; // 440e:0100
db dummyd_44200[32]; // 440e:0120
db dummyd_44220[32]; // 440e:0140
db dummyd_44240[32]; // 440e:0160
db dummyd_44260[32]; // 440e:0180
db dummyd_44280[32]; // 440e:01a0
db dummyd_442a0[32]; // 440e:01c0
db dummyd_442c0[32]; // 440e:01e0
db dummyd_442e0; // 440e:0200
db dummyd_442e1; // 440e:0201
db dummyd_442e2; // 440e:0202
db dummyd_442e3; // 440e:0203
db dummyd_442e4; // 440e:0204
db dummyd_442e5;
db dummyd_442e6;
db dummyd_442e7;
db dummyd_442e8; // 440e:0208
db dummyd_442e9; // 440e:0209
db dummyd_442ea; // 440e:020a
db dummyd_442eb;
db unk_528cc; // 440e:020c
db dummyd_442ed[32]; // 440e:020d
db dummyd_4430d[32]; // 440e:022d
db dummyd_4432d[32]; // 440e:024d
db dummyd_4434d[32]; // 440e:026d
db dummyd_4436d[32]; // 440e:028d
db dummyd_4438d[32]; // 440e:02ad
db dummyd_443ad[32]; // 440e:02cd
db dummyd_443cd[32]; // 440e:02ed
db dummyd_443ed[32]; // 440e:030d
db dummyd_4440d[32]; // 440e:032d
db dummyd_4442d; // 440e:034d
db dummyd_4442e;
db dummyd_4442f;
db dummyd_44430;
db dummyd_44431;
db dummyd_44432;
db dummyd_44433;
db dummyd_44434; // 440e:0354
db dummyd_44435; // 440e:0355
db dummyd_44436; // 440e:0356
db dummyd_44437;
db dummyd_44438;
db dummyd_44439;
db dummyd_4443a;
db dummyd_4443b;
db dummyd_4443c; // 440e:035c
db dummyd_4443d; // 440e:035d
db dummyd_4443e; // 440e:035e
db dummyd_4443f;
db dummyd_44440;
db dummyd_44441;
db dummyd_44442;
db dummyd_44443; // 440e:0363
db dummyd_44444; // 440e:0364
db dummyd_44445; // 440e:0365
db unk_52a26; // 440e:0366
db dummyd_44447[32]; // 440e:0367
db dummyd_44467[32]; // 440e:0387
db dummyd_44487[32]; // 440e:03a7
db dummyd_444a7[32]; // 440e:03c7
db dummyd_444c7[32]; // 440e:03e7
db dummyd_444e7[32]; // 440e:0407
db dummyd_44507[32]; // 440e:0427
db dummyd_44527[32]; // 440e:0447
db dummyd_44547[32]; // 440e:0467
db dummyd_44567[32]; // 440e:0487
db dummyd_44587[32]; // 440e:04a7
db dummyd_445a7[32]; // 440e:04c7
db dummyd_445c7[32]; // 440e:04e7
db dummyd_445e7[32]; // 440e:0507
db dummyd_44607[32]; // 440e:0527
db dummyd_44627[32]; // 440e:0547
db dummyd_44647[32]; // 440e:0567
db dummyd_44667[32]; // 440e:0587
db dummyd_44687[32]; // 440e:05a7
db dummyd_446a7[32]; // 440e:05c7
db dummyd_446c7[32]; // 440e:05e7
db dummyd_446e7[32]; // 440e:0607
db dummyd_44707[32]; // 440e:0627
db dummyd_44727[32]; // 440e:0647
db dummyd_44747[32]; // 440e:0667
db dummyd_44767[32]; // 440e:0687
db dummyd_44787[32]; // 440e:06a7
db dummyd_447a7[32]; // 440e:06c7
db dummyd_447c7[32]; // 440e:06e7
db dummyd_447e7[32]; // 440e:0707
db dummyd_44807[32]; // 440e:0727
db dummyd_44827[32]; // 440e:0747
db dummyd_44847[32]; // 440e:0767
db dummyd_44867[32]; // 440e:0787
db dummyd_44887;
db dummyd_44888;
db dummyd_44889; // 440e:07a9
db dummyd_4488a;
db dummyd_4488b;
db dummyd_4488c; // 440e:07ac
db dummyd_4488d; // 440e:07ad
db dummyd_4488e;
db dummyd_4488f;
db dummyd_44890; // 440e:07b0
db dummyd_44891; // 440e:07b1
db dummyd_44892;
db dummyd_44893;
db dummyd_44894; // 440e:07b4
db dummyd_44895; // 440e:07b5
db dummyd_44896;
db dummyd_44897;
db dummyd_44898; // 440e:07b8
db dummyd_44899; // 440e:07b9
db dummyd_4489a; // 440e:07ba
db dummyd_4489b;
db dummyd_4489c; // 440e:07bc
db dummyd_4489d; // 440e:07bd
db dummyd_4489e; // 440e:07be
db dummyd_4489f;
db dummyd_448a0[32]; // 448a:0000
db dummyd_448c0[32]; // 448a:0020
db dummyd_448e0[32]; // 448a:0040
db dummyd_44900[32]; // 448a:0060
db dummyd_44920[32]; // 448a:0080
db dummyd_44940[32]; // 448a:00a0
db dummyd_44960[32]; // 448a:00c0
db dummyd_44980[32]; // 448a:00e0
db dummyd_449a0[32]; // 448a:0100
db dummyd_449c0[32]; // 448a:0120
db dummyd_449e0[32]; // 448a:0140
db dummyd_44a00[32]; // 448a:0160
db dummyd_44a20[32]; // 448a:0180
db dummyd_44a40[32]; // 448a:01a0
db dummyd_44a60[32]; // 448a:01c0
db dummyd_44a80[32]; // 448a:01e0
db dummyd_44aa0[32]; // 448a:0200
db dummyd_44ac0[32]; // 448a:0220
db dummyd_44ae0[32]; // 448a:0240
db dummyd_44b00[32]; // 448a:0260
db dummyd_44b20[32]; // 448a:0280
db dummyd_44b40[32]; // 448a:02a0
db dummyd_44b60[32]; // 448a:02c0
db dummyd_44b80[32]; // 448a:02e0
db dummyd_44ba0[32]; // 448a:0300
db dummyd_44bc0[32]; // 448a:0320
db dummyd_44be0[32]; // 448a:0340
db dummyd_44c00[32]; // 448a:0360
db dummyd_44c20[32]; // 448a:0380
db dummyd_44c40[32]; // 448a:03a0
db dummyd_44c60[32]; // 448a:03c0
db dummyd_44c80[32]; // 448a:03e0
db dummyd_44ca0[32]; // 448a:0400
db dummyd_44cc0[32]; // 448a:0420
db dummyd_44ce0[32]; // 448a:0440
db dummyd_44d00[32]; // 448a:0460
db dummyd_44d20[32]; // 448a:0480
db dummyd_44d40[32]; // 448a:04a0
db dummyd_44d60[32]; // 448a:04c0
db dummyd_44d80[32]; // 448a:04e0
db dummyd_44da0[32]; // 448a:0500
db dummyd_44dc0[32]; // 448a:0520
db dummyd_44de0[32]; // 448a:0540
db dummyd_44e00[32]; // 448a:0560
db dummyd_44e20[32]; // 448a:0580
db dummyd_44e40[32]; // 448a:05a0
db dummyd_44e60[32]; // 448a:05c0
db dummyd_44e80[32]; // 448a:05e0
db dummyd_44ea0[32]; // 448a:0600
db dummyd_44ec0[32]; // 448a:0620
db dummyd_44ee0[32]; // 448a:0640
db dummyd_44f00[32]; // 448a:0660
db dummyd_44f20[32]; // 448a:0680
db dummyd_44f40[32]; // 448a:06a0
db dummyd_44f60[32]; // 448a:06c0
db dummyd_44f80[32]; // 448a:06e0
db dummyd_44fa0[32]; // 448a:0700
db dummyd_44fc0[32]; // 448a:0720
db dummyd_44fe0[32]; // 448a:0740
db dummyd_45000[32]; // 448a:0760
db dummyd_45020[32]; // 448a:0780
db dummyd_45040[32]; // 448a:07a0
db dummyd_45060[32]; // 448a:07c0
db dummyd_45080[32]; // 448a:07e0
db dummyd_450a0[32]; // 448a:0800
db dummyd_450c0[32]; // 448a:0820
db dummyd_450e0[32]; // 448a:0840
db dummyd_45100[32]; // 448a:0860
db dummyd_45120[32]; // 448a:0880
db dummyd_45140[32]; // 448a:08a0
db dummyd_45160[32]; // 448a:08c0
db dummyd_45180[32]; // 448a:08e0
db dummyd_451a0[32]; // 448a:0900
db dummyd_451c0[32]; // 448a:0920
db dummyd_451e0[32]; // 448a:0940
db dummyd_45200[32]; // 448a:0960
db dummyd_45220[32]; // 448a:0980
db dummyd_45240[32]; // 448a:09a0
db dummyd_45260[32]; // 448a:09c0
db dummyd_45280[32]; // 448a:09e0
db dummyd_452a0[32]; // 448a:0a00
db dummyd_452c0[32]; // 448a:0a20
db dummyd_452e0[32]; // 448a:0a40
db dummyd_45300[32]; // 448a:0a60
db dummyd_45320[32]; // 448a:0a80
db dummyd_45340[32]; // 448a:0aa0
db dummyd_45360[32]; // 448a:0ac0
db dummyd_45380[32]; // 448a:0ae0
db dummyd_453a0[32]; // 448a:0b00
db dummyd_453c0[32]; // 448a:0b20
db dummyd_453e0[32]; // 448a:0b40
db dummyd_45400[32]; // 448a:0b60
db dummyd_45420[32]; // 448a:0b80
db dummyd_45440[32]; // 448a:0ba0
db dummyd_45460[32]; // 448a:0bc0
db dummyd_45480[32]; // 448a:0be0
db dummyd_454a0[32]; // 448a:0c00
db dummyd_454c0[32]; // 448a:0c20
db dummyd_454e0[32]; // 448a:0c40
db dummyd_45500[32]; // 448a:0c60
db dummyd_45520[32]; // 448a:0c80
db dummyd_45540[32]; // 448a:0ca0
db dummyd_45560[32]; // 448a:0cc0
db dummyd_45580; // 448a:0ce0
db dummyd_45581; // 448a:0ce1
db unk_53b62; // 448a:0ce2
db dummyd_45583[32]; // 448a:0ce3
db dummyd_455a3[32]; // 448a:0d03
db dummyd_455c3[32]; // 448a:0d23
db dummyd_455e3[32]; // 448a:0d43
db dummyd_45603[32]; // 448a:0d63
db dummyd_45623[32]; // 448a:0d83
db dummyd_45643[32]; // 448a:0da3
db dummyd_45663[32]; // 448a:0dc3
db dummyd_45683[32]; // 448a:0de3
db dummyd_456a3[32]; // 448a:0e03
db dummyd_456c3[32]; // 448a:0e23
db dummyd_456e3[32]; // 448a:0e43
db dummyd_45703[32]; // 448a:0e63
db dummyd_45723[32]; // 448a:0e83
db dummyd_45743[32]; // 448a:0ea3
db dummyd_45763[32]; // 448a:0ec3
db dummyd_45783[32]; // 448a:0ee3
db dummyd_457a3[32]; // 448a:0f03
db dummyd_457c3[32]; // 448a:0f23
db dummyd_457e3[32]; // 448a:0f43
db dummyd_45803[32]; // 448a:0f63
db dummyd_45823[32]; // 448a:0f83
db dummyd_45843[32]; // 448a:0fa3
db dummyd_45863[32]; // 448a:0fc3
db dummyd_45883[32]; // 448a:0fe3
db dummyd_458a3[32]; // 448a:1003
db dummyd_458c3[32]; // 448a:1023
db dummyd_458e3[32]; // 448a:1043
db dummyd_45903[32]; // 448a:1063
db dummyd_45923[32]; // 448a:1083
db dummyd_45943[32]; // 448a:10a3
db dummyd_45963[32]; // 448a:10c3
db dummyd_45983[32]; // 448a:10e3
db dummyd_459a3[32]; // 448a:1103
db dummyd_459c3[32]; // 448a:1123
db dummyd_459e3[32]; // 448a:1143
db dummyd_45a03;
db dummyd_45a04; // 448a:1164
db dummyd_45a05; // 448a:1165
db dummyd_45a06; // 448a:1166
db dummyd_45a07;
db dummyd_45a08; // 448a:1168
db dummyd_45a09; // 448a:1169
db dummyd_45a0a;
db dummyd_45a0b;
db dummyd_45a0c; // 448a:116c
db dummyd_45a0d; // 448a:116d
db dummyd_45a0e;
db dummyd_45a0f;
db dummyd_45a10; // 448a:1170
db dummyd_45a11; // 448a:1171
db dummyd_45a12; // 448a:1172
db dummyd_45a13;
db dummyd_45a14; // 448a:1174
db dummyd_45a15; // 448a:1175
db dummyd_45a16; // 448a:1176
db dummyd_45a17;
db dummyd_45a18; // 448a:1178
db dummyd_45a19; // 448a:1179
db dummyd_45a1a; // 448a:117a
db dummyd_45a1b;
db dummyd_45a1c; // 448a:117c
db dummyd_45a1d; // 448a:117d
db dummyd_45a1e; // 448a:117e
db dummyd_45a1f;
db dummyd_45a20; // 45a2:0000
db dummyd_45a21; // 45a2:0001
db dummyd_45a22; // 45a2:0002
db dummyd_45a23;
db dummyd_45a24; // 45a2:0004
db dummyd_45a25; // 45a2:0005
db dummyd_45a26;
db dummyd_45a27;
db dummyd_45a28;
db dummyd_45a29;
db dummyd_45a2a; // 45a2:000a
db dummyd_45a2b;
db dummyd_45a2c; // 45a2:000c
db dummyd_45a2d;
db dummyd_45a2e; // 45a2:000e
db dummyd_45a2f;
db dummyd_45a30; // 45a2:0010
db dummyd_45a31;
db dummyd_45a32; // 45a2:0012
db dummyd_45a33;
db dummyd_45a34; // 45a2:0014
db unk_54015; // 45a2:0015
db dummyd_45a36[32]; // 45a2:0016
db dummyd_45a56[32]; // 45a2:0036
db dummyd_45a76[32]; // 45a2:0056
db dummyd_45a96[32]; // 45a2:0076
db dummyd_45ab6[32]; // 45a2:0096
db dummyd_45ad6[32]; // 45a2:00b6
db dummyd_45af6[32]; // 45a2:00d6
db dummyd_45b16[32]; // 45a2:00f6
db dummyd_45b36[32]; // 45a2:0116
db dummyd_45b56[32]; // 45a2:0136
db dummyd_45b76[32]; // 45a2:0156
db dummyd_45b96[32]; // 45a2:0176
db dummyd_45bb6[32]; // 45a2:0196
db dummyd_45bd6[32]; // 45a2:01b6
db dummyd_45bf6[32]; // 45a2:01d6
db dummyd_45c16[32]; // 45a2:01f6
db dummyd_45c36[32]; // 45a2:0216
db dummyd_45c56[32]; // 45a2:0236
db dummyd_45c76[32]; // 45a2:0256
db dummyd_45c96[32]; // 45a2:0276
db dummyd_45cb6[32]; // 45a2:0296
db dummyd_45cd6[32]; // 45a2:02b6
db dummyd_45cf6[32]; // 45a2:02d6
db dummyd_45d16[32]; // 45a2:02f6
db dummyd_45d36[32]; // 45a2:0316
db dummyd_45d56[32]; // 45a2:0336
db dummyd_45d76[32]; // 45a2:0356
db dummyd_45d96[32]; // 45a2:0376
db dummyd_45db6[32]; // 45a2:0396
db dummyd_45dd6[32]; // 45a2:03b6
db dummyd_45df6[32]; // 45a2:03d6
db dummyd_45e16[32]; // 45a2:03f6
db dummyd_45e36[32]; // 45a2:0416
db dummyd_45e56[32]; // 45a2:0436
db dummyd_45e76[32]; // 45a2:0456
db dummyd_45e96[32]; // 45a2:0476
db dummyd_45eb6[32]; // 45a2:0496
db dummyd_45ed6[32]; // 45a2:04b6
db dummyd_45ef6[32]; // 45a2:04d6
db dummyd_45f16[32]; // 45a2:04f6
db dummyd_45f36[32]; // 45a2:0516
db dummyd_45f56[32]; // 45a2:0536
db dummyd_45f76[32]; // 45a2:0556
db dummyd_45f96[32]; // 45a2:0576
db dummyd_45fb6[32]; // 45a2:0596
db dummyd_45fd6[32]; // 45a2:05b6
db dummyd_45ff6[32]; // 45a2:05d6
db dummyd_46016[32]; // 45a2:05f6
db dummyd_46036[32]; // 45a2:0616
db dummyd_46056[32]; // 45a2:0636
db dummyd_46076[32]; // 45a2:0656
db dummyd_46096[32]; // 45a2:0676
db dummyd_460b6[32]; // 45a2:0696
db dummyd_460d6[32]; // 45a2:06b6
db dummyd_460f6[32]; // 45a2:06d6
db dummyd_46116[32]; // 45a2:06f6
db dummyd_46136[32]; // 45a2:0716
db dummyd_46156[32]; // 45a2:0736
db dummyd_46176[32]; // 45a2:0756
db dummyd_46196[32]; // 45a2:0776
db dummyd_461b6[32]; // 45a2:0796
db dummyd_461d6; // 45a2:07b6
db dummyd_461d7;
db dummyd_461d8; // 45a2:07b8
db dummyd_461d9; // 45a2:07b9
db dummyd_461da; // 45a2:07ba
db dummyd_461db;
db dummyd_461dc; // 45a2:07bc
db dummyd_461dd; // 45a2:07bd
db dummyd_461de; // 45a2:07be
db dummyd_461df;
db dummyd_461e0; // 45a2:07c0
db dummyd_461e1; // 45a2:07c1
db dummyd_461e2; // 45a2:07c2
db dummyd_461e3;
db unk_547c4; // 45a2:07c4
db dummyd_461e5[32]; // 45a2:07c5
db dummyd_46205[32]; // 45a2:07e5
db dummyd_46225[32]; // 45a2:0805
db dummyd_46245[32]; // 45a2:0825
db dummyd_46265[32]; // 45a2:0845
db dummyd_46285[32]; // 45a2:0865
db dummyd_462a5[32]; // 45a2:0885
db dummyd_462c5[32]; // 45a2:08a5
db dummyd_462e5[32]; // 45a2:08c5
db dummyd_46305[32]; // 45a2:08e5
db dummyd_46325[32]; // 45a2:0905
db dummyd_46345[32]; // 45a2:0925
db dummyd_46365[32]; // 45a2:0945
db dummyd_46385;
db dummyd_46386; // 45a2:0966
db dummyd_46387;
db dummyd_46388; // 45a2:0968
db dummyd_46389;
db dummyd_4638a;
db dummyd_4638b;
db dummyd_4638c; // 45a2:096c
db dummyd_4638d;
db dummyd_4638e; // 45a2:096e
db dummyd_4638f;
db dummyd_46390; // 45a2:0970
db dummyd_46391;
db dummyd_46392; // 45a2:0972
db dummyd_46393;
db dummyd_46394; // 45a2:0974
db dummyd_46395;
db dummyd_46396; // 45a2:0976
db dummyd_46397;
db dummyd_46398;
db dummyd_46399;
db dummyd_4639a; // 45a2:097a
db dummyd_4639b;
db dummyd_4639c; // 45a2:097c
db dummyd_4639d;
db dummyd_4639e; // 45a2:097e
db dummyd_4639f;
db dummyd_463a0; // 463a:0000
db dummyd_463a1;
db dummyd_463a2; // 463a:0002
db unk_54983; // 463a:0003
db dummyd_463a4[32]; // 463a:0004
db dummyd_463c4[32]; // 463a:0024
db dummyd_463e4[32]; // 463a:0044
db dummyd_46404[32]; // 463a:0064
db dummyd_46424[32]; // 463a:0084
db dummyd_46444[32]; // 463a:00a4
db dummyd_46464[32]; // 463a:00c4
db dummyd_46484[32]; // 463a:00e4
db dummyd_464a4[32]; // 463a:0104
db dummyd_464c4[32]; // 463a:0124
db dummyd_464e4[32]; // 463a:0144
db dummyd_46504[32]; // 463a:0164
db dummyd_46524[32]; // 463a:0184
db dummyd_46544[32]; // 463a:01a4
db dummyd_46564[32]; // 463a:01c4
db dummyd_46584[32]; // 463a:01e4
db dummyd_465a4[32]; // 463a:0204
db dummyd_465c4[32]; // 463a:0224
db dummyd_465e4[32]; // 463a:0244
db dummyd_46604[32]; // 463a:0264
db dummyd_46624[32]; // 463a:0284
db dummyd_46644[32]; // 463a:02a4
db dummyd_46664[32]; // 463a:02c4
db dummyd_46684[32]; // 463a:02e4
db dummyd_466a4[32]; // 463a:0304
db dummyd_466c4[32]; // 463a:0324
db dummyd_466e4[32]; // 463a:0344
db dummyd_46704[32]; // 463a:0364
db dummyd_46724[32]; // 463a:0384
db dummyd_46744[32]; // 463a:03a4
db dummyd_46764[32]; // 463a:03c4
db dummyd_46784[32]; // 463a:03e4
db dummyd_467a4[32]; // 463a:0404
db dummyd_467c4[32]; // 463a:0424
db dummyd_467e4[32]; // 463a:0444
db dummyd_46804[32]; // 463a:0464
db dummyd_46824[32]; // 463a:0484
db dummyd_46844[32]; // 463a:04a4
db dummyd_46864[32]; // 463a:04c4
db dummyd_46884[32]; // 463a:04e4
db dummyd_468a4[32]; // 463a:0504
db dummyd_468c4[32]; // 463a:0524
db dummyd_468e4[32]; // 463a:0544
db dummyd_46904[32]; // 463a:0564
db dummyd_46924[32]; // 463a:0584
db dummyd_46944[32]; // 463a:05a4
db dummyd_46964[32]; // 463a:05c4
db dummyd_46984[32]; // 463a:05e4
db dummyd_469a4[32]; // 463a:0604
db dummyd_469c4[32]; // 463a:0624
db dummyd_469e4[32]; // 463a:0644
db dummyd_46a04[32]; // 463a:0664
db dummyd_46a24[32]; // 463a:0684
db dummyd_46a44[32]; // 463a:06a4
db dummyd_46a64[32]; // 463a:06c4
db dummyd_46a84[32]; // 463a:06e4
db dummyd_46aa4[32]; // 463a:0704
db dummyd_46ac4[32]; // 463a:0724
db dummyd_46ae4[32]; // 463a:0744
db dummyd_46b04[32]; // 463a:0764
db dummyd_46b24[32]; // 463a:0784
db dummyd_46b44[32]; // 463a:07a4
db dummyd_46b64[32]; // 463a:07c4
db dummyd_46b84[32]; // 463a:07e4
db dummyd_46ba4[32]; // 463a:0804
db dummyd_46bc4[32]; // 463a:0824
db dummyd_46be4[32]; // 463a:0844
db dummyd_46c04[32]; // 463a:0864
db dummyd_46c24[32]; // 463a:0884
db dummyd_46c44[32]; // 463a:08a4
db dummyd_46c64[32]; // 463a:08c4
db dummyd_46c84[32]; // 463a:08e4
db dummyd_46ca4[32]; // 463a:0904
db dummyd_46cc4[32]; // 463a:0924
db dummyd_46ce4[32]; // 463a:0944
db dummyd_46d04[32]; // 463a:0964
db dummyd_46d24[32]; // 463a:0984
db dummyd_46d44[32]; // 463a:09a4
db dummyd_46d64[32]; // 463a:09c4
db dummyd_46d84[32]; // 463a:09e4
db dummyd_46da4[32]; // 463a:0a04
db dummyd_46dc4[32]; // 463a:0a24
db dummyd_46de4[32]; // 463a:0a44
db dummyd_46e04[32]; // 463a:0a64
db dummyd_46e24[32]; // 463a:0a84
db dummyd_46e44[32]; // 463a:0aa4
db dummyd_46e64[32]; // 463a:0ac4
db dummyd_46e84; // 463a:0ae4
db dummyd_46e85; // 463a:0ae5
db dummyd_46e86; // 463a:0ae6
db dummyd_46e87; // 463a:0ae7
db dummyd_46e88; // 463a:0ae8
db dummyd_46e89; // 463a:0ae9
db dummyd_46e8a; // 463a:0aea
db dummyd_46e8b; // 463a:0aeb
db dummyd_46e8c; // 463a:0aec
db dummyd_46e8d; // 463a:0aed
db dummyd_46e8e; // 463a:0aee
db dummyd_46e8f; // 463a:0aef
db dummyd_46e90; // 463a:0af0
db dummyd_46e91; // 463a:0af1
db dummyd_46e92; // 463a:0af2
db dummyd_46e93; // 463a:0af3
db dummyd_46e94; // 463a:0af4
db dummyd_46e95; // 463a:0af5
db dummyd_46e96; // 463a:0af6
db dummyd_46e97; // 463a:0af7
db dummyd_46e98; // 463a:0af8
db dummyd_46e99; // 463a:0af9
db dummyd_46e9a; // 463a:0afa
db dummyd_46e9b; // 463a:0afb
db dummyd_46e9c; // 463a:0afc
db dummyd_46e9d;
db dummyd_46e9e; // 463a:0afe
db dummyd_46e9f; // 463a:0aff
db dummyd_46ea0; // 463a:0b00
db dummyd_46ea1; // 463a:0b01
db unk_55482; // 463a:0b02
db dummyd_46ea3[32]; // 463a:0b03
db dummyd_46ec3[32]; // 463a:0b23
db dummyd_46ee3; // 463a:0b43
db dummyd_46ee4; // 463a:0b44
db dummyd_46ee5; // 463a:0b45
db dummyd_46ee6; // 463a:0b46
db dummyd_46ee7; // 463a:0b47
db dummyd_46ee8; // 463a:0b48
db dummyd_46ee9; // 463a:0b49
db dummyd_46eea; // 463a:0b4a
db dummyd_46eeb; // 463a:0b4b
db dummyd_46eec;
db dummyd_46eed;
db dummyd_46eee; // 463a:0b4e
db dummyd_46eef; // 463a:0b4f
db dummyd_46ef0; // 463a:0b50
db dummyd_46ef1; // 463a:0b51
db dummyd_46ef2; // 463a:0b52
db dummyd_46ef3; // 463a:0b53
db dummyd_46ef4;
db dummyd_46ef5;
db dummyd_46ef6; // 463a:0b56
db dummyd_46ef7; // 463a:0b57
db dummyd_46ef8; // 463a:0b58
db dummyd_46ef9; // 463a:0b59
db dummyd_46efa; // 463a:0b5a
db dummyd_46efb; // 463a:0b5b
db dummyd_46efc; // 463a:0b5c
db dummyd_46efd; // 463a:0b5d
db dummyd_46efe; // 463a:0b5e
db dummyd_46eff; // 463a:0b5f
db dummyd_46f00;
db dummyd_46f01;
db dummyd_46f02; // 46f0:0002
db dummyd_46f03;
db dummyd_46f04; // 46f0:0004
db unk_554e5; // 46f0:0005
db dummyd_46f06[32]; // 46f0:0006
db dummyd_46f26[32]; // 46f0:0026
db dummyd_46f46[32]; // 46f0:0046
db dummyd_46f66[32]; // 46f0:0066
db dummyd_46f86[32]; // 46f0:0086
db dummyd_46fa6[32]; // 46f0:00a6
db dummyd_46fc6[32]; // 46f0:00c6
db dummyd_46fe6[32]; // 46f0:00e6
db dummyd_47006[32]; // 46f0:0106
db dummyd_47026[32]; // 46f0:0126
db dummyd_47046[32]; // 46f0:0146
db dummyd_47066[32]; // 46f0:0166
db dummyd_47086[32]; // 46f0:0186
db dummyd_470a6[32]; // 46f0:01a6
db dummyd_470c6[32]; // 46f0:01c6
db dummyd_470e6[32]; // 46f0:01e6
db dummyd_47106[32]; // 46f0:0206
db dummyd_47126[32]; // 46f0:0226
db dummyd_47146[32]; // 46f0:0246
db dummyd_47166[32]; // 46f0:0266
db dummyd_47186[32]; // 46f0:0286
db dummyd_471a6[32]; // 46f0:02a6
db dummyd_471c6[32]; // 46f0:02c6
db dummyd_471e6[32]; // 46f0:02e6
db dummyd_47206[32]; // 46f0:0306
db dummyd_47226[32]; // 46f0:0326
db dummyd_47246[32]; // 46f0:0346
db dummyd_47266[32]; // 46f0:0366
db dummyd_47286[32]; // 46f0:0386
db dummyd_472a6[32]; // 46f0:03a6
db dummyd_472c6[32]; // 46f0:03c6
db dummyd_472e6[32]; // 46f0:03e6
db dummyd_47306[32]; // 46f0:0406
db dummyd_47326[32]; // 46f0:0426
db dummyd_47346[32]; // 46f0:0446
db dummyd_47366[32]; // 46f0:0466
db dummyd_47386[32]; // 46f0:0486
db dummyd_473a6[32]; // 46f0:04a6
db dummyd_473c6[32]; // 46f0:04c6
db dummyd_473e6[32]; // 46f0:04e6
db dummyd_47406[32]; // 46f0:0506
db dummyd_47426[32]; // 46f0:0526
db dummyd_47446[32]; // 46f0:0546
db dummyd_47466[32]; // 46f0:0566
db dummyd_47486[32]; // 46f0:0586
db dummyd_474a6[32]; // 46f0:05a6
db dummyd_474c6[32]; // 46f0:05c6
db dummyd_474e6[32]; // 46f0:05e6
db dummyd_47506[32]; // 46f0:0606
db dummyd_47526[32]; // 46f0:0626
db dummyd_47546[32]; // 46f0:0646
db dummyd_47566[32]; // 46f0:0666
db dummyd_47586[32]; // 46f0:0686
db dummyd_475a6[32]; // 46f0:06a6
db dummyd_475c6[32]; // 46f0:06c6
db dummyd_475e6[32]; // 46f0:06e6
db dummyd_47606[32]; // 46f0:0706
db dummyd_47626[32]; // 46f0:0726
db dummyd_47646[32]; // 46f0:0746
db dummyd_47666[32]; // 46f0:0766
db dummyd_47686[32]; // 46f0:0786
db dummyd_476a6[32]; // 46f0:07a6
db dummyd_476c6[32]; // 46f0:07c6
db dummyd_476e6; // 46f0:07e6
db dummyd_476e7; // 46f0:07e7
db dummyd_476e8; // 46f0:07e8
db dummyd_476e9; // 46f0:07e9
db dummyd_476ea; // 46f0:07ea
db dummyd_476eb;
db dummyd_476ec; // 46f0:07ec
db dummyd_476ed;
db dummyd_476ee; // 46f0:07ee
db dummyd_476ef; // 46f0:07ef
db dummyd_476f0; // 46f0:07f0
db dummyd_476f1; // 46f0:07f1
db dummyd_476f2; // 46f0:07f2
db dummyd_476f3; // 46f0:07f3
db dummyd_476f4; // 46f0:07f4
db dummyd_476f5; // 46f0:07f5
db dummyd_476f6; // 46f0:07f6
db dummyd_476f7; // 46f0:07f7
db dummyd_476f8; // 46f0:07f8
db dummyd_476f9; // 46f0:07f9
db dummyd_476fa; // 46f0:07fa
db dummyd_476fb; // 46f0:07fb
db dummyd_476fc; // 46f0:07fc
db dummyd_476fd;
db dummyd_476fe[2];
db dummyd_47700; // 46f0:0800
db unk_55ce1; // 46f0:0801
db dummyd_47702[32]; // 46f0:0802
db dummyd_47722[32]; // 46f0:0822
db dummyd_47742[32]; // 46f0:0842
db dummyd_47762[32]; // 46f0:0862
db dummyd_47782[32]; // 46f0:0882
db dummyd_477a2[32]; // 46f0:08a2
db dummyd_477c2[32]; // 46f0:08c2
db dummyd_477e2[32]; // 46f0:08e2
db dummyd_47802[32]; // 46f0:0902
db unk_55e02; // 46f0:0922
db dummyd_47823[32]; // 46f0:0923
db dummyd_47843[32]; // 46f0:0943
db dummyd_47863[32]; // 46f0:0963
db dummyd_47883[32]; // 46f0:0983
db dummyd_478a3[32]; // 46f0:09a3
db dummyd_478c3[32]; // 46f0:09c3
db dummyd_478e3[32]; // 46f0:09e3
db dummyd_47903[32]; // 46f0:0a03
db dummyd_47923[32]; // 46f0:0a23
db dummyd_47943; // 46f0:0a43
db dummyd_47944; // 46f0:0a44
db dummyd_47945; // 46f0:0a45
db dummyd_47946; // 46f0:0a46
db dummyd_47947; // 46f0:0a47
db dummyd_47948; // 46f0:0a48
db dummyd_47949; // 46f0:0a49
db dummyd_4794a[2];
db dummyd_4794c[32]; // 46f0:0a4c
db dummyd_4796c[32]; // 46f0:0a6c
db dummyd_4798c[32]; // 46f0:0a8c
db dummyd_479ac[32]; // 46f0:0aac
db dummyd_479cc[32]; // 46f0:0acc
db dummyd_479ec[32]; // 46f0:0aec
db dummyd_47a0c[32]; // 46f0:0b0c
db dummyd_47a2c[32]; // 46f0:0b2c
db dummyd_47a4c[32]; // 46f0:0b4c
db dummyd_47a6c[32]; // 46f0:0b6c
db dummyd_47a8c[32]; // 46f0:0b8c
db dummyd_47aac[32]; // 46f0:0bac
db dummyd_47acc[32]; // 46f0:0bcc
db dummyd_47aec[32]; // 46f0:0bec
db dummyd_47b0c[32]; // 46f0:0c0c
db dummyd_47b2c[32]; // 46f0:0c2c
db dummyd_47b4c[32]; // 46f0:0c4c
db dummyd_47b6c[32]; // 46f0:0c6c
db dummyd_47b8c[32]; // 46f0:0c8c
db dummyd_47bac[32]; // 46f0:0cac
db dummyd_47bcc[32]; // 46f0:0ccc
db dummyd_47bec[32]; // 46f0:0cec
db dummyd_47c0c[32]; // 46f0:0d0c
db dummyd_47c2c[32]; // 46f0:0d2c
db dummyd_47c4c; // 46f0:0d4c
db dummyd_47c4d; // 46f0:0d4d
db dummyd_47c4e; // 46f0:0d4e
db dummyd_47c4f; // 46f0:0d4f
db dummyd_47c50; // 46f0:0d50
db dummyd_47c51; // 46f0:0d51
db dummyd_47c52; // 46f0:0d52
db dummyd_47c53; // 46f0:0d53
db dummyd_47c54; // 46f0:0d54
db dummyd_47c55; // 46f0:0d55
db dummyd_47c56; // 46f0:0d56
db dummyd_47c57; // 46f0:0d57
db dummyd_47c58; // 46f0:0d58
db dummyd_47c59; // 46f0:0d59
db dummyd_47c5a; // 46f0:0d5a
db dummyd_47c5b; // 46f0:0d5b
db dummyd_47c5c; // 46f0:0d5c
db dummyd_47c5d; // 46f0:0d5d
db dummyd_47c5e; // 46f0:0d5e
db dummyd_47c5f; // 46f0:0d5f
db dummyd_47c60; // 46f0:0d60
db dummyd_47c61; // 46f0:0d61
db dummyd_47c62; // 46f0:0d62
db dummyd_47c63; // 46f0:0d63
db dummyd_47c64; // 46f0:0d64
db dummyd_47c65; // 46f0:0d65
db dummyd_47c66[2];
db dummyd_47c68[32]; // 46f0:0d68
db dummyd_47c88[32]; // 46f0:0d88
db dummyd_47ca8[32]; // 46f0:0da8
db dummyd_47cc8[32]; // 46f0:0dc8
db dummyd_47ce8[32]; // 46f0:0de8
db dummyd_47d08[32]; // 46f0:0e08
db dummyd_47d28[32]; // 46f0:0e28
db dummyd_47d48; // 46f0:0e48
db dummyd_47d49;
db dummyd_47d4a;
db dummyd_47d4b; // 46f0:0e4b
db dummyd_47d4c; // 46f0:0e4c
db dummyd_47d4d;
db dummyd_47d4e;
db dummyd_47d4f; // 46f0:0e4f
db dummyd_47d50;
db dummyd_47d51;
db dummyd_47d52[2];
db dummyd_47d54; // 46f0:0e54
db dummyd_47d55;
db dummyd_47d56; // 46f0:0e56
db dummyd_47d57;
db dummyd_47d58; // 46f0:0e58
db dummyd_47d59;
db dummyd_47d5a;
db dummyd_47d5b;
db dummyd_47d5c; // 46f0:0e5c
db dummyd_47d5d;
db dummyd_47d5e; // 46f0:0e5e
db dummyd_47d5f; // 46f0:0e5f
db dummyd_47d60[32]; // 47d6:0000
db dummyd_47d80[32]; // 47d6:0020
db dummyd_47da0[32]; // 47d6:0040
db dummyd_47dc0;
db dummyd_47dc1; // 47d6:0061
db dummyd_47dc2;
db dummyd_47dc3; // 47d6:0063
db dummyd_47dc4;
db dummyd_47dc5;
db dummyd_47dc6; // 47d6:0066
db dummyd_47dc7;
db dummyd_47dc8; // 47d6:0068
db dummyd_47dc9;
db dummyd_47dca; // 47d6:006a
db dummyd_47dcb;
db dummyd_47dcc; // 47d6:006c
db dummyd_47dcd;
db dummyd_47dce; // 47d6:006e
db dummyd_47dcf; // 47d6:006f
db dummyd_47dd0; // 47d6:0070
db dummyd_47dd1; // 47d6:0071
db dummyd_47dd2; // 47d6:0072
db dummyd_47dd3; // 47d6:0073
db dummyd_47dd4; // 47d6:0074
db dummyd_47dd5; // 47d6:0075
db dummyd_47dd6; // 47d6:0076
db dummyd_47dd7; // 47d6:0077
db dummyd_47dd8; // 47d6:0078
db dummyd_47dd9; // 47d6:0079
db dummyd_47dda[2];
db dummyd_47ddc[32]; // 47d6:007c
db dummyd_47dfc[32]; // 47d6:009c
db dummyd_47e1c[32]; // 47d6:00bc
db dummyd_47e3c[32]; // 47d6:00dc
db dummyd_47e5c[32]; // 47d6:00fc
db dummyd_47e7c[32]; // 47d6:011c
db dummyd_47e9c[32]; // 47d6:013c
db dummyd_47ebc[32]; // 47d6:015c
db dummyd_47edc[32]; // 47d6:017c
db dummyd_47efc[32]; // 47d6:019c
db dummyd_47f1c[32]; // 47d6:01bc
db dummyd_47f3c[32]; // 47d6:01dc
db dummyd_47f5c[32]; // 47d6:01fc
db dummyd_47f7c[32]; // 47d6:021c
db dummyd_47f9c[32]; // 47d6:023c
db dummyd_47fbc[32]; // 47d6:025c
db dummyd_47fdc[32]; // 47d6:027c
db dummyd_47ffc[32]; // 47d6:029c
db dummyd_4801c[32]; // 47d6:02bc
db dummyd_4803c[32]; // 47d6:02dc
db dummyd_4805c[32]; // 47d6:02fc
db dummyd_4807c[32]; // 47d6:031c
db dummyd_4809c[32]; // 47d6:033c
db dummyd_480bc[32]; // 47d6:035c
db dummyd_480dc[32]; // 47d6:037c
db dummyd_480fc[32]; // 47d6:039c
db dummyd_4811c[32]; // 47d6:03bc
db dummyd_4813c[32]; // 47d6:03dc
db dummyd_4815c[32]; // 47d6:03fc
db dummyd_4817c[32]; // 47d6:041c
db dummyd_4819c[32]; // 47d6:043c
db dummyd_481bc[32]; // 47d6:045c
db dummyd_481dc[32]; // 47d6:047c
db dummyd_481fc[32]; // 47d6:049c
db dummyd_4821c[32]; // 47d6:04bc
db dummyd_4823c[32]; // 47d6:04dc
db dummyd_4825c[32]; // 47d6:04fc
db dummyd_4827c[32]; // 47d6:051c
db dummyd_4829c[32]; // 47d6:053c
db dummyd_482bc[32]; // 47d6:055c
db dummyd_482dc[32]; // 47d6:057c
db dummyd_482fc[32]; // 47d6:059c
db dummyd_4831c[32]; // 47d6:05bc
db dummyd_4833c[32]; // 47d6:05dc
db dummyd_4835c[32]; // 47d6:05fc
db dummyd_4837c[32]; // 47d6:061c
db dummyd_4839c[32]; // 47d6:063c
db dummyd_483bc[32]; // 47d6:065c
db dummyd_483dc[32]; // 47d6:067c
db dummyd_483fc[32]; // 47d6:069c
db dummyd_4841c[32]; // 47d6:06bc
db dummyd_4843c[32]; // 47d6:06dc
db dummyd_4845c[32]; // 47d6:06fc
db dummyd_4847c[32]; // 47d6:071c
db dummyd_4849c[32]; // 47d6:073c
db dummyd_484bc[32]; // 47d6:075c
db dummyd_484dc[32]; // 47d6:077c
db dummyd_484fc[32]; // 47d6:079c
db dummyd_4851c[32]; // 47d6:07bc
db dummyd_4853c[32]; // 47d6:07dc
db dummyd_4855c[32]; // 47d6:07fc
db dummyd_4857c[32]; // 47d6:081c
db dummyd_4859c[32]; // 47d6:083c
db dummyd_485bc[32]; // 47d6:085c
db dummyd_485dc[32]; // 47d6:087c
db dummyd_485fc[32]; // 47d6:089c
db dummyd_4861c[32]; // 47d6:08bc
db dummyd_4863c[32]; // 47d6:08dc
db dummyd_4865c[32]; // 47d6:08fc
db dummyd_4867c[32]; // 47d6:091c
db dummyd_4869c[32]; // 47d6:093c
db dummyd_486bc[32]; // 47d6:095c
db dummyd_486dc[32]; // 47d6:097c
db dummyd_486fc[32]; // 47d6:099c
db dummyd_4871c[32]; // 47d6:09bc
db dummyd_4873c[32]; // 47d6:09dc
db dummyd_4875c[32]; // 47d6:09fc
db dummyd_4877c[32]; // 47d6:0a1c
db dummyd_4879c[32]; // 47d6:0a3c
db dummyd_487bc[32]; // 47d6:0a5c
db dummyd_487dc[32]; // 47d6:0a7c
db dummyd_487fc[32]; // 47d6:0a9c
db dummyd_4881c[32]; // 47d6:0abc
db dummyd_4883c[32]; // 47d6:0adc
db dummyd_4885c[32]; // 47d6:0afc
db dummyd_4887c[32]; // 47d6:0b1c
db dummyd_4889c[32]; // 47d6:0b3c
db dummyd_488bc[32]; // 47d6:0b5c
db dummyd_488dc[32]; // 47d6:0b7c
db dummyd_488fc[32]; // 47d6:0b9c
db dummyd_4891c[32]; // 47d6:0bbc
db dummyd_4893c[32]; // 47d6:0bdc
db dummyd_4895c[32]; // 47d6:0bfc
db dummyd_4897c[32]; // 47d6:0c1c
db dummyd_4899c[32]; // 47d6:0c3c
db dummyd_489bc[32]; // 47d6:0c5c
db dummyd_489dc[32]; // 47d6:0c7c
db dummyd_489fc[32]; // 47d6:0c9c
db dummyd_48a1c[32]; // 47d6:0cbc
db dummyd_48a3c[32]; // 47d6:0cdc
db dummyd_48a5c[32]; // 47d6:0cfc
db dummyd_48a7c[32]; // 47d6:0d1c
db dummyd_48a9c[32]; // 47d6:0d3c
db dummyd_48abc[32]; // 47d6:0d5c
db dummyd_48adc[32]; // 47d6:0d7c
db dummyd_48afc[32]; // 47d6:0d9c
db dummyd_48b1c[32]; // 47d6:0dbc
db dummyd_48b3c[32]; // 47d6:0ddc
db dummyd_48b5c[32]; // 47d6:0dfc
db dummyd_48b7c[32]; // 47d6:0e1c
db dummyd_48b9c[32]; // 47d6:0e3c
db dummyd_48bbc[32]; // 47d6:0e5c
db dummyd_48bdc[32]; // 47d6:0e7c
db dummyd_48bfc[32]; // 47d6:0e9c
db dummyd_48c1c[32]; // 47d6:0ebc
db dummyd_48c3c;
db dummyd_48c3d;
db dummyd_48c3e;
db dummyd_48c3f;
db dummyd_48c40;
db dummyd_48c41; // 47d6:0ee1
db dummyd_48c42;
db dummyd_48c43;
db dummyd_48c44; // 47d6:0ee4
db dummyd_48c45;
db dummyd_48c46;
db dummyd_48c47;
db dummyd_48c48;
db dummyd_48c49;
db dummyd_48c4a[2];
db dummyd_48c4c[32]; // 47d6:0eec
db dummyd_48c6c[32]; // 47d6:0f0c
db dummyd_48c8c[32]; // 47d6:0f2c
db dummyd_48cac[32]; // 47d6:0f4c
db dummyd_48ccc; // 47d6:0f6c
db dummyd_48ccd; // 47d6:0f6d
db dummyd_48cce; // 47d6:0f6e
db dummyd_48ccf; // 47d6:0f6f
db dummyd_48cd0; // 47d6:0f70
db dummyd_48cd1; // 47d6:0f71
db dummyd_48cd2[2];
db dummyd_48cd4[32]; // 47d6:0f74
db dummyd_48cf4[32]; // 47d6:0f94
db dummyd_48d14[32]; // 47d6:0fb4
db dummyd_48d34[32]; // 47d6:0fd4
db dummyd_48d54; // 47d6:0ff4
db dummyd_48d55;
db dummyd_48d56; // 47d6:0ff6
db dummyd_48d57;
db dummyd_48d58; // 47d6:0ff8
db dummyd_48d59;
db dummyd_48d5a[2];
db dummyd_48d5c[32]; // 47d6:0ffc
db dummyd_48d7c[32]; // 47d6:101c
db dummyd_48d9c[32]; // 47d6:103c
db dummyd_48dbc[32]; // 47d6:105c
db dummyd_48ddc[32]; // 47d6:107c
db dummyd_48dfc[32]; // 47d6:109c
db dummyd_48e1c[32]; // 47d6:10bc
db dummyd_48e3c; // 47d6:10dc
db dummyd_48e3d;
db dummyd_48e3e;
db dummyd_48e3f; // 47d6:10df
db dummyd_48e40; // 47d6:10e0
db dummyd_48e41;
db dummyd_48e42;
db dummyd_48e43; // 47d6:10e3
db dummyd_48e44; // 47d6:10e4
db dummyd_48e45;
db dummyd_48e46;
db dummyd_48e47; // 47d6:10e7
db dummyd_48e48; // 47d6:10e8
db dummyd_48e49;
db dummyd_48e4a;
db dummyd_48e4b; // 47d6:10eb
db dummyd_48e4c; // 47d6:10ec
db dummyd_48e4d;
db dummyd_48e4e;
db dummyd_48e4f; // 47d6:10ef
db dummyd_48e50; // 47d6:10f0
db dummyd_48e51;
db dummyd_48e52;
db dummyd_48e53; // 47d6:10f3
db dummyd_48e54; // 47d6:10f4
db dummyd_48e55;
db dummyd_48e56; // 47d6:10f6
db dummyd_48e57; // 47d6:10f7
db dummyd_48e58; // 47d6:10f8
db dummyd_48e59;
db dummyd_48e5a[2];
db dummyd_48e5c[32]; // 47d6:10fc
db dummyd_48e7c[32]; // 47d6:111c
db dummyd_48e9c[32]; // 47d6:113c
db dummyd_48ebc[32]; // 47d6:115c
db dummyd_48edc[32]; // 47d6:117c
db dummyd_48efc[32]; // 47d6:119c
db dummyd_48f1c; // 47d6:11bc
db dummyd_48f1d;
db dummyd_48f1e; // 47d6:11be
db dummyd_48f1f;
db dummyd_48f20; // 47d6:11c0
db dummyd_48f21;
db dummyd_48f22; // 47d6:11c2
db dummyd_48f23; // 47d6:11c3
db dummyd_48f24; // 47d6:11c4
db dummyd_48f25;
db dummyd_48f26; // 47d6:11c6
db dummyd_48f27; // 47d6:11c7
db dummyd_48f28; // 47d6:11c8
db dummyd_48f29;
db dummyd_48f2a; // 47d6:11ca
db dummyd_48f2b;
db dummyd_48f2c; // 47d6:11cc
db dummyd_48f2d;
db dummyd_48f2e; // 47d6:11ce
db dummyd_48f2f; // 47d6:11cf
db dummyd_48f30; // 48f3:0000
db dummyd_48f31;
db unk_57512; // 48f3:0002
db dummyd_48f33[32]; // 48f3:0003
db dummyd_48f53[32]; // 48f3:0023
db dummyd_48f73[32]; // 48f3:0043
db dummyd_48f93[32]; // 48f3:0063
db dummyd_48fb3[32]; // 48f3:0083
db dummyd_48fd3[32]; // 48f3:00a3
db dummyd_48ff3;
db dummyd_48ff4; // 48f3:00c4
db dummyd_48ff5; // 48f3:00c5
db dummyd_48ff6; // 48f3:00c6
db dummyd_48ff7; // 48f3:00c7
db dummyd_48ff8; // 48f3:00c8
db dummyd_48ff9; // 48f3:00c9
db dummyd_48ffa; // 48f3:00ca
db dummyd_48ffb; // 48f3:00cb
db dummyd_48ffc; // 48f3:00cc
db dummyd_48ffd; // 48f3:00cd
db dummyd_48ffe; // 48f3:00ce
db dummyd_48fff; // 48f3:00cf
db dummyd_49000; // 48f3:00d0
db dummyd_49001; // 48f3:00d1
db dummyd_49002; // 48f3:00d2
db dummyd_49003; // 48f3:00d3
db dummyd_49004; // 48f3:00d4
db dummyd_49005; // 48f3:00d5
db dummyd_49006[2];
db dummyd_49008[32]; // 48f3:00d8
db dummyd_49028[32]; // 48f3:00f8
db dummyd_49048[32]; // 48f3:0118
db dummyd_49068[32]; // 48f3:0138
db dummyd_49088[32]; // 48f3:0158
db dummyd_490a8[32]; // 48f3:0178
db dummyd_490c8[32]; // 48f3:0198
db dummyd_490e8[32]; // 48f3:01b8
db dummyd_49108;
db dummyd_49109;
db dummyd_4910a; // 48f3:01da
db dummyd_4910b; // 48f3:01db
db dummyd_4910c;
db dummyd_4910d;
db dummyd_4910e; // 48f3:01de
db dummyd_4910f; // 48f3:01df
db dummyd_49110;
db dummyd_49111;
db dummyd_49112; // 48f3:01e2
db dummyd_49113; // 48f3:01e3
db dummyd_49114;
db dummyd_49115;
db dummyd_49116; // 48f3:01e6
db dummyd_49117; // 48f3:01e7
db dummyd_49118;
db dummyd_49119;
db dummyd_4911a[2];
db dummyd_4911c[32]; // 48f3:01ec
db dummyd_4913c[32]; // 48f3:020c
db dummyd_4915c[32]; // 48f3:022c
db dummyd_4917c[32]; // 48f3:024c
db dummyd_4919c[32]; // 48f3:026c
db dummyd_491bc[32]; // 48f3:028c
db dummyd_491dc[32]; // 48f3:02ac
db dummyd_491fc[32]; // 48f3:02cc
db dummyd_4921c[32]; // 48f3:02ec
db dummyd_4923c[32]; // 48f3:030c
db dummyd_4925c[32]; // 48f3:032c
db dummyd_4927c[32]; // 48f3:034c
db dummyd_4929c[32]; // 48f3:036c
db dummyd_492bc[32]; // 48f3:038c
db dummyd_492dc[32]; // 48f3:03ac
db dummyd_492fc[32]; // 48f3:03cc
db dummyd_4931c[32]; // 48f3:03ec
db dummyd_4933c[32]; // 48f3:040c
db dummyd_4935c[32]; // 48f3:042c
db dummyd_4937c;
db dummyd_4937d; // 48f3:044d
db dummyd_4937e;
db dummyd_4937f;
db dummyd_49380;
db dummyd_49381; // 48f3:0451
db dummyd_49382;
db dummyd_49383;
db dummyd_49384[4];
db dummyd_49388[32]; // 48f3:0458
db dummyd_493a8[32]; // 48f3:0478
db dummyd_493c8[32]; // 48f3:0498
db dummyd_493e8[32]; // 48f3:04b8
db dummyd_49408[32]; // 48f3:04d8
db dummyd_49428; // 48f3:04f8
db dummyd_49429;
db dummyd_4942a; // 48f3:04fa
db dummyd_4942b; // 48f3:04fb
db dummyd_4942c; // 48f3:04fc
db dummyd_4942d; // 48f3:04fd
db dummyd_4942e; // 48f3:04fe
db dummyd_4942f;
db dummyd_49430; // 48f3:0500
db byte_57a11; // 48f3:0501
db dummyd_49432[32]; // 48f3:0502
db dummyd_49452[32]; // 48f3:0522
db dummyd_49472[32]; // 48f3:0542
db dummyd_49492[32]; // 48f3:0562
db dummyd_494b2[32]; // 48f3:0582
db dummyd_494d2[32]; // 48f3:05a2
db dummyd_494f2[32]; // 48f3:05c2
db dummyd_49512[32]; // 48f3:05e2
db dummyd_49532[32]; // 48f3:0602
db dummyd_49552[32]; // 48f3:0622
db dummyd_49572[32]; // 48f3:0642
db dummyd_49592[32]; // 48f3:0662
db dummyd_495b2[32]; // 48f3:0682
db dummyd_495d2[32]; // 48f3:06a2
db dummyd_495f2[32]; // 48f3:06c2
db dummyd_49612[32]; // 48f3:06e2
db dummyd_49632[32]; // 48f3:0702
db dummyd_49652[32]; // 48f3:0722
db dummyd_49672[32]; // 48f3:0742
db dummyd_49692[32]; // 48f3:0762
db dummyd_496b2[32]; // 48f3:0782
db dummyd_496d2[32]; // 48f3:07a2
db dummyd_496f2[32]; // 48f3:07c2
db dummyd_49712[32]; // 48f3:07e2
db dummyd_49732[32]; // 48f3:0802
db dummyd_49752[32]; // 48f3:0822
db dummyd_49772[32]; // 48f3:0842
db dummyd_49792[32]; // 48f3:0862
db dummyd_497b2[32]; // 48f3:0882
db dummyd_497d2[32]; // 48f3:08a2
db dummyd_497f2[32]; // 48f3:08c2
db dummyd_49812[32]; // 48f3:08e2
db dummyd_49832[32]; // 48f3:0902
db dummyd_49852[32]; // 48f3:0922
db dummyd_49872[32]; // 48f3:0942
db dummyd_49892[32]; // 48f3:0962
db dummyd_498b2[32]; // 48f3:0982
db dummyd_498d2[32]; // 48f3:09a2
db dummyd_498f2[32]; // 48f3:09c2
db dummyd_49912[32]; // 48f3:09e2
db dummyd_49932[32]; // 48f3:0a02
db dummyd_49952[32]; // 48f3:0a22
db dummyd_49972[32]; // 48f3:0a42
db dummyd_49992[32]; // 48f3:0a62
db dummyd_499b2[32]; // 48f3:0a82
db dummyd_499d2[32]; // 48f3:0aa2
db dummyd_499f2[32]; // 48f3:0ac2
db dummyd_49a12[32]; // 48f3:0ae2
db dummyd_49a32[32]; // 48f3:0b02
db dummyd_49a52[32]; // 48f3:0b22
db dummyd_49a72[32]; // 48f3:0b42
db dummyd_49a92[32]; // 48f3:0b62
db dummyd_49ab2[32]; // 48f3:0b82
db dummyd_49ad2[32]; // 48f3:0ba2
db dummyd_49af2[32]; // 48f3:0bc2
db dummyd_49b12[32]; // 48f3:0be2
db dummyd_49b32[32]; // 48f3:0c02
db dummyd_49b52[32]; // 48f3:0c22
db dummyd_49b72[32]; // 48f3:0c42
db dummyd_49b92[32]; // 48f3:0c62
db dummyd_49bb2[32]; // 48f3:0c82
db dummyd_49bd2[32]; // 48f3:0ca2
db dummyd_49bf2[32]; // 48f3:0cc2
db dummyd_49c12[32]; // 48f3:0ce2
db dummyd_49c32[32]; // 48f3:0d02
db dummyd_49c52[32]; // 48f3:0d22
db dummyd_49c72;
db dummyd_49c73;
db dummyd_49c74;
db dummyd_49c75;
db dummyd_49c76; // 48f3:0d46
db dummyd_49c77;
db dummyd_49c78;
db dummyd_49c79;
db dummyd_49c7a[2];
db dummyd_49c7c[32]; // 48f3:0d4c
db dummyd_49c9c[32]; // 48f3:0d6c
db dummyd_49cbc[32]; // 48f3:0d8c
db dummyd_49cdc[32]; // 48f3:0dac
db dummyd_49cfc[32]; // 48f3:0dcc
db dummyd_49d1c[32]; // 48f3:0dec
db dummyd_49d3c[32]; // 48f3:0e0c
db dummyd_49d5c;
db dummyd_49d5d;
db dummyd_49d5e; // 48f3:0e2e
db dummyd_49d5f; // 48f3:0e2f
db dummyd_49d60;
db dummyd_49d61;
db dummyd_49d62;
db dummyd_49d63;
db dummyd_49d64;
db dummyd_49d65;
db dummyd_49d66[2];
db dummyd_49d68[32]; // 48f3:0e38
db dummyd_49d88[32]; // 48f3:0e58
db dummyd_49da8[32]; // 48f3:0e78
db dummyd_49dc8[32]; // 48f3:0e98
db dummyd_49de8[32]; // 48f3:0eb8
db dummyd_49e08[32]; // 48f3:0ed8
db dummyd_49e28[32]; // 48f3:0ef8
db dummyd_49e48[32]; // 48f3:0f18
db dummyd_49e68[32]; // 48f3:0f38
db dummyd_49e88[32]; // 48f3:0f58
db dummyd_49ea8[32]; // 48f3:0f78
db dummyd_49ec8[32]; // 48f3:0f98
db dummyd_49ee8[32]; // 48f3:0fb8
db dummyd_49f08[32]; // 48f3:0fd8
db dummyd_49f28[32]; // 48f3:0ff8
db dummyd_49f48[32]; // 48f3:1018
db dummyd_49f68[32]; // 48f3:1038
db dummyd_49f88[32]; // 48f3:1058
db dummyd_49fa8[32]; // 48f3:1078
db dummyd_49fc8[32]; // 48f3:1098
db dummyd_49fe8[32]; // 48f3:10b8
db dummyd_4a008[32]; // 48f3:10d8
db dummyd_4a028[32]; // 48f3:10f8
db dummyd_4a048[32]; // 48f3:1118
db dummyd_4a068[32]; // 48f3:1138
db dummyd_4a088[32]; // 48f3:1158
db dummyd_4a0a8[32]; // 48f3:1178
db dummyd_4a0c8[32]; // 48f3:1198
db dummyd_4a0e8[32]; // 48f3:11b8
db dummyd_4a108[32]; // 48f3:11d8
db dummyd_4a128[32]; // 48f3:11f8
db dummyd_4a148[32]; // 48f3:1218
db dummyd_4a168[32]; // 48f3:1238
db dummyd_4a188[32]; // 48f3:1258
db dummyd_4a1a8[32]; // 48f3:1278
db dummyd_4a1c8[32]; // 48f3:1298
db dummyd_4a1e8[32]; // 48f3:12b8
db dummyd_4a208[32]; // 48f3:12d8
db dummyd_4a228[32]; // 48f3:12f8
db dummyd_4a248[32]; // 48f3:1318
db dummyd_4a268[32]; // 48f3:1338
db dummyd_4a288[32]; // 48f3:1358
db dummyd_4a2a8[32]; // 48f3:1378
db dummyd_4a2c8[32]; // 48f3:1398
db dummyd_4a2e8[32]; // 48f3:13b8
db dummyd_4a308[32]; // 48f3:13d8
db dummyd_4a328[32]; // 48f3:13f8
db dummyd_4a348[32]; // 48f3:1418
db dummyd_4a368[32]; // 48f3:1438
db dummyd_4a388[32]; // 48f3:1458
db dummyd_4a3a8[32]; // 48f3:1478
db dummyd_4a3c8[32]; // 48f3:1498
db dummyd_4a3e8[32]; // 48f3:14b8
db dummyd_4a408[32]; // 48f3:14d8
db dummyd_4a428[32]; // 48f3:14f8
db dummyd_4a448[32]; // 48f3:1518
db dummyd_4a468[32]; // 48f3:1538
db dummyd_4a488[32]; // 48f3:1558
db dummyd_4a4a8[32]; // 48f3:1578
db dummyd_4a4c8[32]; // 48f3:1598
db dummyd_4a4e8[32]; // 48f3:15b8
db dummyd_4a508[32]; // 48f3:15d8
db dummyd_4a528[32]; // 48f3:15f8
db dummyd_4a548[32]; // 48f3:1618
db dummyd_4a568[32]; // 48f3:1638
db dummyd_4a588[32]; // 48f3:1658
db dummyd_4a5a8[32]; // 48f3:1678
db dummyd_4a5c8[32]; // 48f3:1698
db dummyd_4a5e8[32]; // 48f3:16b8
db dummyd_4a608[32]; // 48f3:16d8
db dummyd_4a628[32]; // 48f3:16f8
db dummyd_4a648[32]; // 48f3:1718
db dummyd_4a668[32]; // 48f3:1738
db dummyd_4a688[32]; // 48f3:1758
db dummyd_4a6a8[32]; // 48f3:1778
db dummyd_4a6c8[32]; // 48f3:1798
db dummyd_4a6e8[32]; // 48f3:17b8
db dummyd_4a708[32]; // 48f3:17d8
db dummyd_4a728[32]; // 48f3:17f8
db dummyd_4a748[32]; // 48f3:1818
db dummyd_4a768[32]; // 48f3:1838
db dummyd_4a788[32]; // 48f3:1858
db dummyd_4a7a8[32]; // 48f3:1878
db dummyd_4a7c8[32]; // 48f3:1898
db dummyd_4a7e8[32]; // 48f3:18b8
db dummyd_4a808;
db dummyd_4a809;
db dummyd_4a80a;
db dummyd_4a80b;
db dummyd_4a80c;
db dummyd_4a80d;
db dummyd_4a80e;
db dummyd_4a80f;
db dummyd_4a810; // 48f3:18e0
db dummyd_4a811; // 48f3:18e1
db dummyd_4a812;
db dummyd_4a813;
db dummyd_4a814;
db dummyd_4a815;
db dummyd_4a816[2];
db dummyd_4a818[32]; // 48f3:18e8
db dummyd_4a838[32]; // 48f3:1908
db dummyd_4a858[32]; // 48f3:1928
db dummyd_4a878[32]; // 48f3:1948
db dummyd_4a898[32]; // 48f3:1968
db dummyd_4a8b8[32]; // 48f3:1988
db dummyd_4a8d8;
db dummyd_4a8d9;
db dummyd_4a8da;
db dummyd_4a8db; // 48f3:19ab
db dummyd_4a8dc;
db dummyd_4a8dd;
db dummyd_4a8de; // 48f3:19ae
db dummyd_4a8df; // 48f3:19af
db dummyd_4a8e0;
db dummyd_4a8e1;
db dummyd_4a8e2; // 48f3:19b2
db dummyd_4a8e3; // 48f3:19b3
db dummyd_4a8e4;
db dummyd_4a8e5;
db dummyd_4a8e6; // 48f3:19b6
db dummyd_4a8e7; // 48f3:19b7
db dummyd_4a8e8; // 48f3:19b8
db dummyd_4a8e9;
db dummyd_4a8ea; // 48f3:19ba
db dummyd_4a8eb; // 48f3:19bb
db dummyd_4a8ec; // 48f3:19bc
db dummyd_4a8ed;
db dummyd_4a8ee; // 48f3:19be
db dummyd_4a8ef; // 48f3:19bf
db dummyd_4a8f0; // 48f3:19c0
db dummyd_4a8f1;
db dummyd_4a8f2; // 48f3:19c2
db dummyd_4a8f3; // 48f3:19c3
db dummyd_4a8f4; // 48f3:19c4
db dummyd_4a8f5;
db unk_58ed6; // 48f3:19c6
db dummyd_4a8f7[32]; // 48f3:19c7
db dummyd_4a917[32]; // 48f3:19e7
db dummyd_4a937; // 48f3:1a07
db dummyd_4a938;
db dummyd_4a939;
db dummyd_4a93a;
db dummyd_4a93b; // 48f3:1a0b
db dummyd_4a93c;
db dummyd_4a93d;
db dummyd_4a93e[2];
db dummyd_4a940[32]; // 48f3:1a10
db dummyd_4a960[32]; // 48f3:1a30
db dummyd_4a980[32]; // 48f3:1a50
db dummyd_4a9a0[32]; // 48f3:1a70
db dummyd_4a9c0[32]; // 48f3:1a90
db dummyd_4a9e0[32]; // 48f3:1ab0
db dummyd_4aa00[32]; // 48f3:1ad0
db dummyd_4aa20[32]; // 48f3:1af0
db dummyd_4aa40[32]; // 48f3:1b10
db dummyd_4aa60[32]; // 48f3:1b30
db dummyd_4aa80[32]; // 48f3:1b50
db dummyd_4aaa0[32]; // 48f3:1b70
db dummyd_4aac0[32]; // 48f3:1b90
db dummyd_4aae0[32]; // 48f3:1bb0
db dummyd_4ab00[32]; // 48f3:1bd0
db dummyd_4ab20[32]; // 48f3:1bf0
db dummyd_4ab40[32]; // 48f3:1c10
db dummyd_4ab60; // 48f3:1c30
db dummyd_4ab61;
db dummyd_4ab62[2];
db dummyd_4ab64[32]; // 48f3:1c34
db dummyd_4ab84[32]; // 48f3:1c54
db dummyd_4aba4[32]; // 48f3:1c74
db dummyd_4abc4[32]; // 48f3:1c94
db dummyd_4abe4[32]; // 48f3:1cb4
db dummyd_4ac04[32]; // 48f3:1cd4
db dummyd_4ac24[32]; // 48f3:1cf4
db dummyd_4ac44[32]; // 48f3:1d14
db dummyd_4ac64[32]; // 48f3:1d34
db dummyd_4ac84[32]; // 48f3:1d54
db dummyd_4aca4[32]; // 48f3:1d74
db dummyd_4acc4[32]; // 48f3:1d94
db dummyd_4ace4[32]; // 48f3:1db4
db dummyd_4ad04[32]; // 48f3:1dd4
db dummyd_4ad24[32]; // 48f3:1df4
db dummyd_4ad44[32]; // 48f3:1e14
db dummyd_4ad64[32]; // 48f3:1e34
db dummyd_4ad84[32]; // 48f3:1e54
db dummyd_4ada4[32]; // 48f3:1e74
db dummyd_4adc4[32]; // 48f3:1e94
db dummyd_4ade4[32]; // 48f3:1eb4
db dummyd_4ae04[32]; // 48f3:1ed4
db dummyd_4ae24[32]; // 48f3:1ef4
db dummyd_4ae44[32]; // 48f3:1f14
db dummyd_4ae64[32]; // 48f3:1f34
db dummyd_4ae84[32]; // 48f3:1f54
db dummyd_4aea4[32]; // 48f3:1f74
db dummyd_4aec4[32]; // 48f3:1f94
db dummyd_4aee4[32]; // 48f3:1fb4
db dummyd_4af04[32]; // 48f3:1fd4
db dummyd_4af24[32]; // 48f3:1ff4
db dummyd_4af44[32]; // 48f3:2014
db dummyd_4af64[32]; // 48f3:2034
db dummyd_4af84[32]; // 48f3:2054
db dummyd_4afa4[32]; // 48f3:2074
db dummyd_4afc4[32]; // 48f3:2094
db dummyd_4afe4[32]; // 48f3:20b4
db dummyd_4b004[32]; // 48f3:20d4
db dummyd_4b024[32]; // 48f3:20f4
db dummyd_4b044[32]; // 48f3:2114
db dummyd_4b064[32]; // 48f3:2134
db dummyd_4b084[32]; // 48f3:2154
db dummyd_4b0a4[32]; // 48f3:2174
db dummyd_4b0c4[32]; // 48f3:2194
db dummyd_4b0e4[32]; // 48f3:21b4
db dummyd_4b104[32]; // 48f3:21d4
db dummyd_4b124[32]; // 48f3:21f4
db dummyd_4b144[32]; // 48f3:2214
db dummyd_4b164[32]; // 48f3:2234
db dummyd_4b184[32]; // 48f3:2254
db dummyd_4b1a4[32]; // 48f3:2274
db dummyd_4b1c4[32]; // 48f3:2294
db dummyd_4b1e4[32]; // 48f3:22b4
db dummyd_4b204[32]; // 48f3:22d4
db dummyd_4b224[32]; // 48f3:22f4
db dummyd_4b244[32]; // 48f3:2314
db dummyd_4b264[32]; // 48f3:2334
db dummyd_4b284[32]; // 48f3:2354
db dummyd_4b2a4[32]; // 48f3:2374
db dummyd_4b2c4[32]; // 48f3:2394
db dummyd_4b2e4[32]; // 48f3:23b4
db dummyd_4b304[32]; // 48f3:23d4
db dummyd_4b324[32]; // 48f3:23f4
db dummyd_4b344[32]; // 48f3:2414
db dummyd_4b364[32]; // 48f3:2434
db dummyd_4b384[32]; // 48f3:2454
db dummyd_4b3a4[32]; // 48f3:2474
db dummyd_4b3c4[32]; // 48f3:2494
db dummyd_4b3e4[32]; // 48f3:24b4
db dummyd_4b404[32]; // 48f3:24d4
db dummyd_4b424[32]; // 48f3:24f4
db dummyd_4b444;
db dummyd_4b445;
db dummyd_4b446; // 48f3:2516
db dummyd_4b447; // 48f3:2517
db dummyd_4b448;
db dummyd_4b449;
db dummyd_4b44a; // 48f3:251a
db dummyd_4b44b; // 48f3:251b
db dummyd_4b44c;
db dummyd_4b44d;
db dummyd_4b44e; // 48f3:251e
db dummyd_4b44f; // 48f3:251f
db dummyd_4b450;
db dummyd_4b451;
db dummyd_4b452; // 48f3:2522
db dummyd_4b453; // 48f3:2523
db dummyd_4b454;
db dummyd_4b455;
db dummyd_4b456; // 48f3:2526
db dummyd_4b457; // 48f3:2527
db dummyd_4b458;
db dummyd_4b459;
db dummyd_4b45a;
db dummyd_4b45b;
db dummyd_4b45c;
db dummyd_4b45d;
db dummyd_4b45e[2];
db dummyd_4b460[32]; // 48f3:2530
db dummyd_4b480[32]; // 48f3:2550
db dummyd_4b4a0[32]; // 48f3:2570
db dummyd_4b4c0[32]; // 48f3:2590
db dummyd_4b4e0[32]; // 48f3:25b0
db dummyd_4b500[32]; // 48f3:25d0
db dummyd_4b520[32]; // 48f3:25f0
db dummyd_4b540[32]; // 48f3:2610
db dummyd_4b560[32]; // 48f3:2630
db dummyd_4b580[32]; // 48f3:2650
db dummyd_4b5a0[32]; // 48f3:2670
db dummyd_4b5c0[32]; // 48f3:2690
db dummyd_4b5e0[32]; // 48f3:26b0
db dummyd_4b600[32]; // 48f3:26d0
db dummyd_4b620[32]; // 48f3:26f0
db dummyd_4b640[32]; // 48f3:2710
db dummyd_4b660[32]; // 48f3:2730
db dummyd_4b680[32]; // 48f3:2750
db dummyd_4b6a0[32]; // 48f3:2770
db dummyd_4b6c0[32]; // 48f3:2790
db dummyd_4b6e0[32]; // 48f3:27b0
db dummyd_4b700[32]; // 48f3:27d0
db dummyd_4b720[32]; // 48f3:27f0
db dummyd_4b740[32]; // 48f3:2810
db dummyd_4b760[32]; // 48f3:2830
db dummyd_4b780[32]; // 48f3:2850
db dummyd_4b7a0[32]; // 48f3:2870
db dummyd_4b7c0[32]; // 48f3:2890
db dummyd_4b7e0[32]; // 48f3:28b0
db dummyd_4b800[32]; // 48f3:28d0
db dummyd_4b820[32]; // 48f3:28f0
db dummyd_4b840[32]; // 48f3:2910
db dummyd_4b860[32]; // 48f3:2930
db dummyd_4b880[32]; // 48f3:2950
db dummyd_4b8a0[32]; // 48f3:2970
db dummyd_4b8c0[32]; // 48f3:2990
db dummyd_4b8e0[32]; // 48f3:29b0
db dummyd_4b900[32]; // 48f3:29d0
db dummyd_4b920[32]; // 48f3:29f0
db dummyd_4b940[32]; // 48f3:2a10
db dummyd_4b960[32]; // 48f3:2a30
db dummyd_4b980[32]; // 48f3:2a50
db dummyd_4b9a0[32]; // 48f3:2a70
db dummyd_4b9c0[32]; // 48f3:2a90
db dummyd_4b9e0[32]; // 48f3:2ab0
db dummyd_4ba00[32]; // 48f3:2ad0
db dummyd_4ba20[32]; // 48f3:2af0
db dummyd_4ba40[32]; // 48f3:2b10
db dummyd_4ba60[32]; // 48f3:2b30
db dummyd_4ba80[32]; // 48f3:2b50
db dummyd_4baa0[32]; // 48f3:2b70
db dummyd_4bac0[32]; // 48f3:2b90
db dummyd_4bae0[32]; // 48f3:2bb0
db dummyd_4bb00[32]; // 48f3:2bd0
db dummyd_4bb20[32]; // 48f3:2bf0
db dummyd_4bb40[32]; // 48f3:2c10
db dummyd_4bb60[32]; // 48f3:2c30
db dummyd_4bb80[32]; // 48f3:2c50
db dummyd_4bba0[32]; // 48f3:2c70
db dummyd_4bbc0[32]; // 48f3:2c90
db dummyd_4bbe0[32]; // 48f3:2cb0
db dummyd_4bc00[32]; // 48f3:2cd0
db dummyd_4bc20[32]; // 48f3:2cf0
db dummyd_4bc40[32]; // 48f3:2d10
db dummyd_4bc60[32]; // 48f3:2d30
db dummyd_4bc80[32]; // 48f3:2d50
db dummyd_4bca0[32]; // 48f3:2d70
db dummyd_4bcc0[32]; // 48f3:2d90
db dummyd_4bce0[32]; // 48f3:2db0
db dummyd_4bd00[32]; // 48f3:2dd0
db dummyd_4bd20[32]; // 48f3:2df0
db dummyd_4bd40[32]; // 48f3:2e10
db dummyd_4bd60[32]; // 48f3:2e30
db dummyd_4bd80[32]; // 48f3:2e50
db dummyd_4bda0[32]; // 48f3:2e70
db dummyd_4bdc0[32]; // 48f3:2e90
db dummyd_4bde0[32]; // 48f3:2eb0
db dummyd_4be00[32]; // 48f3:2ed0
db dummyd_4be20[32]; // 48f3:2ef0
db dummyd_4be40[32]; // 48f3:2f10
db dummyd_4be60[32]; // 48f3:2f30
db dummyd_4be80[32]; // 48f3:2f50
db dummyd_4bea0[32]; // 48f3:2f70
db dummyd_4bec0[32]; // 48f3:2f90
db dummyd_4bee0[32]; // 48f3:2fb0
db dummyd_4bf00[32]; // 48f3:2fd0
db dummyd_4bf20[32]; // 48f3:2ff0
db dummyd_4bf40[32]; // 48f3:3010
db dummyd_4bf60[32]; // 48f3:3030
db dummyd_4bf80[32]; // 48f3:3050
db dummyd_4bfa0[32]; // 48f3:3070
db dummyd_4bfc0[32]; // 48f3:3090
db dummyd_4bfe0[32]; // 48f3:30b0
db dummyd_4c000[32]; // 48f3:30d0
db dummyd_4c020[32]; // 48f3:30f0
db dummyd_4c040[32]; // 48f3:3110
db dummyd_4c060[32]; // 48f3:3130
db dummyd_4c080[32]; // 48f3:3150
db dummyd_4c0a0[32]; // 48f3:3170
db dummyd_4c0c0[32]; // 48f3:3190
db dummyd_4c0e0[32]; // 48f3:31b0
db dummyd_4c100[32]; // 48f3:31d0
db dummyd_4c120[32]; // 48f3:31f0
db dummyd_4c140[32]; // 48f3:3210
db dummyd_4c160[32]; // 48f3:3230
db dummyd_4c180[32]; // 48f3:3250
db dummyd_4c1a0[32]; // 48f3:3270
db dummyd_4c1c0[32]; // 48f3:3290
db dummyd_4c1e0[32]; // 48f3:32b0
db dummyd_4c200[32]; // 48f3:32d0
db dummyd_4c220[32]; // 48f3:32f0
db dummyd_4c240[32]; // 48f3:3310
db dummyd_4c260[32]; // 48f3:3330
db dummyd_4c280[32]; // 48f3:3350
db dummyd_4c2a0[32]; // 48f3:3370
db dummyd_4c2c0[32]; // 48f3:3390
db dummyd_4c2e0[32]; // 48f3:33b0
db dummyd_4c300[32]; // 48f3:33d0
db dummyd_4c320[32]; // 48f3:33f0
db dummyd_4c340[32]; // 48f3:3410
db dummyd_4c360[32]; // 48f3:3430
db dummyd_4c380[32]; // 48f3:3450
db dummyd_4c3a0[32]; // 48f3:3470
db dummyd_4c3c0[32]; // 48f3:3490
db dummyd_4c3e0[32]; // 48f3:34b0
db dummyd_4c400[32]; // 48f3:34d0
db dummyd_4c420[32]; // 48f3:34f0
db dummyd_4c440[32]; // 48f3:3510
db dummyd_4c460[32]; // 48f3:3530
db dummyd_4c480[32]; // 48f3:3550
db dummyd_4c4a0[32]; // 48f3:3570
db dummyd_4c4c0[32]; // 48f3:3590
db dummyd_4c4e0[32]; // 48f3:35b0
db dummyd_4c500[32]; // 48f3:35d0
db dummyd_4c520[32]; // 48f3:35f0
db dummyd_4c540[32]; // 48f3:3610
db dummyd_4c560[32]; // 48f3:3630
db dummyd_4c580[32]; // 48f3:3650
db dummyd_4c5a0[32]; // 48f3:3670
db dummyd_4c5c0[32]; // 48f3:3690
db dummyd_4c5e0[32]; // 48f3:36b0
db dummyd_4c600[32]; // 48f3:36d0
db dummyd_4c620[32]; // 48f3:36f0
db dummyd_4c640[32]; // 48f3:3710
db dummyd_4c660[32]; // 48f3:3730
db dummyd_4c680[32]; // 48f3:3750
db dummyd_4c6a0[32]; // 48f3:3770
db dummyd_4c6c0[32]; // 48f3:3790
db dummyd_4c6e0[32]; // 48f3:37b0
db dummyd_4c700[32]; // 48f3:37d0
db dummyd_4c720[32]; // 48f3:37f0
db dummyd_4c740[32]; // 48f3:3810
db dummyd_4c760[32]; // 48f3:3830
db dummyd_4c780[32]; // 48f3:3850
db dummyd_4c7a0[32]; // 48f3:3870
db dummyd_4c7c0[32]; // 48f3:3890
db dummyd_4c7e0[32]; // 48f3:38b0
db dummyd_4c800[32]; // 48f3:38d0
db dummyd_4c820[32]; // 48f3:38f0
db dummyd_4c840[32]; // 48f3:3910
db dummyd_4c860[32]; // 48f3:3930
db dummyd_4c880[32]; // 48f3:3950
db dummyd_4c8a0[32]; // 48f3:3970
db dummyd_4c8c0[32]; // 48f3:3990
db dummyd_4c8e0[32]; // 48f3:39b0
db dummyd_4c900[32]; // 48f3:39d0
db dummyd_4c920[32]; // 4c92:0000
db dummyd_4c940[32]; // 4c92:0020
db dummyd_4c960[32]; // 4c92:0040
db dummyd_4c980[32]; // 4c92:0060
db dummyd_4c9a0[32]; // 4c92:0080
db dummyd_4c9c0[32]; // 4c92:00a0
db dummyd_4c9e0[32]; // 4c92:00c0
db dummyd_4ca00; // 4c92:00e0
db dummyd_4ca01;
db dummyd_4ca02; // 4c92:00e2
db dummyd_4ca03;
db dummyd_4ca04; // 4c92:00e4
db dummyd_4ca05;
db dummyd_4ca06; // 4c92:00e6
db dummyd_4ca07;
db dummyd_4ca08; // 4c92:00e8
db dummyd_4ca09;
db dummyd_4ca0a; // 4c92:00ea
db dummyd_4ca0b;
db dummyd_4ca0c; // 4c92:00ec
db dummyd_4ca0d;
db dummyd_4ca0e; // 4c92:00ee
db dummyd_4ca0f;
db dummyd_4ca10; // 4c92:00f0
db dummyd_4ca11;
db dummyd_4ca12[2];
db dummyd_4ca14[32]; // 4c92:00f4
db dummyd_4ca34[32]; // 4c92:0114
db dummyd_4ca54[32]; // 4c92:0134
db dummyd_4ca74[32]; // 4c92:0154
db dummyd_4ca94[32]; // 4c92:0174
db dummyd_4cab4[32]; // 4c92:0194
db dummyd_4cad4[32]; // 4c92:01b4
db dummyd_4caf4[32]; // 4c92:01d4
db dummyd_4cb14[32]; // 4c92:01f4
db dummyd_4cb34[32]; // 4c92:0214
db dummyd_4cb54[32]; // 4c92:0234
db dummyd_4cb74[32]; // 4c92:0254
db dummyd_4cb94[32]; // 4c92:0274
db dummyd_4cbb4[32]; // 4c92:0294
db dummyd_4cbd4[32]; // 4c92:02b4
db dummyd_4cbf4[32]; // 4c92:02d4
db dummyd_4cc14[32]; // 4c92:02f4
db dummyd_4cc34[32]; // 4c92:0314
db dummyd_4cc54[32]; // 4c92:0334
db dummyd_4cc74[32]; // 4c92:0354
db dummyd_4cc94[32]; // 4c92:0374
db dummyd_4ccb4[32]; // 4c92:0394
db dummyd_4ccd4[32]; // 4c92:03b4
db dummyd_4ccf4[32]; // 4c92:03d4
db dummyd_4cd14[32]; // 4c92:03f4
db dummyd_4cd34[32]; // 4c92:0414
db dummyd_4cd54[32]; // 4c92:0434
db dummyd_4cd74[32]; // 4c92:0454
db dummyd_4cd94[32]; // 4c92:0474
db dummyd_4cdb4[32]; // 4c92:0494
db dummyd_4cdd4[32]; // 4c92:04b4
db dummyd_4cdf4[32]; // 4c92:04d4
db dummyd_4ce14[32]; // 4c92:04f4
db dummyd_4ce34[32]; // 4c92:0514
db dummyd_4ce54[32]; // 4c92:0534
db dummyd_4ce74[32]; // 4c92:0554
db dummyd_4ce94[32]; // 4c92:0574
db dummyd_4ceb4[32]; // 4c92:0594
db dummyd_4ced4[32]; // 4c92:05b4
db dummyd_4cef4[32]; // 4c92:05d4
db dummyd_4cf14[32]; // 4c92:05f4
db dummyd_4cf34[32]; // 4c92:0614
db dummyd_4cf54[32]; // 4c92:0634
db dummyd_4cf74[32]; // 4c92:0654
db dummyd_4cf94[32]; // 4c92:0674
db dummyd_4cfb4[32]; // 4c92:0694
db dummyd_4cfd4[32]; // 4c92:06b4
db dummyd_4cff4[32]; // 4c92:06d4
db dummyd_4d014[32]; // 4c92:06f4
db dummyd_4d034[32]; // 4c92:0714
db dummyd_4d054[32]; // 4c92:0734
db dummyd_4d074[32]; // 4c92:0754
db dummyd_4d094[32]; // 4c92:0774
db dummyd_4d0b4[32]; // 4c92:0794
db dummyd_4d0d4[32]; // 4c92:07b4
db dummyd_4d0f4[32]; // 4c92:07d4
db dummyd_4d114[32]; // 4c92:07f4
db dummyd_4d134[32]; // 4c92:0814
db dummyd_4d154[32]; // 4c92:0834
db dummyd_4d174[32]; // 4c92:0854
db dummyd_4d194[32]; // 4c92:0874
db dummyd_4d1b4[32]; // 4c92:0894
db dummyd_4d1d4[32]; // 4c92:08b4
db dummyd_4d1f4[32]; // 4c92:08d4
db dummyd_4d214[32]; // 4c92:08f4
db dummyd_4d234[32]; // 4c92:0914
db dummyd_4d254[32]; // 4c92:0934
db dummyd_4d274[32]; // 4c92:0954
db dummyd_4d294[32]; // 4c92:0974
db dummyd_4d2b4[32]; // 4c92:0994
db dummyd_4d2d4[32]; // 4c92:09b4
db dummyd_4d2f4[32]; // 4c92:09d4
db dummyd_4d314[32]; // 4c92:09f4
db dummyd_4d334[32]; // 4c92:0a14
db dummyd_4d354[32]; // 4c92:0a34
db dummyd_4d374[32]; // 4c92:0a54
db dummyd_4d394[32]; // 4c92:0a74
db dummyd_4d3b4[32]; // 4c92:0a94
db dummyd_4d3d4[32]; // 4c92:0ab4
db dummyd_4d3f4[32]; // 4c92:0ad4
db dummyd_4d414[32]; // 4c92:0af4
db dummyd_4d434[32]; // 4c92:0b14
db dummyd_4d454[32]; // 4c92:0b34
db dummyd_4d474[32]; // 4c92:0b54
db dummyd_4d494[32]; // 4c92:0b74
db dummyd_4d4b4[32]; // 4c92:0b94
db dummyd_4d4d4[32]; // 4c92:0bb4
db dummyd_4d4f4[32]; // 4c92:0bd4
db dummyd_4d514[32]; // 4c92:0bf4
db dummyd_4d534[32]; // 4c92:0c14
db dummyd_4d554[32]; // 4c92:0c34
db dummyd_4d574[32]; // 4c92:0c54
db dummyd_4d594[32]; // 4c92:0c74
db dummyd_4d5b4[32]; // 4c92:0c94
db dummyd_4d5d4[32]; // 4c92:0cb4
db dummyd_4d5f4[32]; // 4c92:0cd4
db dummyd_4d614[32]; // 4c92:0cf4
db dummyd_4d634[32]; // 4c92:0d14
db dummyd_4d654[32]; // 4c92:0d34
db dummyd_4d674[32]; // 4c92:0d54
db dummyd_4d694[32]; // 4c92:0d74
db dummyd_4d6b4[32]; // 4c92:0d94
db dummyd_4d6d4[32]; // 4c92:0db4
db dummyd_4d6f4[32]; // 4c92:0dd4
db dummyd_4d714[32]; // 4c92:0df4
db dummyd_4d734[32]; // 4c92:0e14
db dummyd_4d754[32]; // 4c92:0e34
db dummyd_4d774[32]; // 4c92:0e54
db dummyd_4d794[32]; // 4c92:0e74
db dummyd_4d7b4[32]; // 4c92:0e94
db dummyd_4d7d4[32]; // 4c92:0eb4
db dummyd_4d7f4[32]; // 4c92:0ed4
db dummyd_4d814[32]; // 4c92:0ef4
db dummyd_4d834[32]; // 4c92:0f14
db dummyd_4d854[32]; // 4c92:0f34
db dummyd_4d874[32]; // 4c92:0f54
db dummyd_4d894[32]; // 4c92:0f74
db dummyd_4d8b4[32]; // 4c92:0f94
db dummyd_4d8d4[32]; // 4c92:0fb4
db dummyd_4d8f4[32]; // 4c92:0fd4
db dummyd_4d914[32]; // 4c92:0ff4
db dummyd_4d934[32]; // 4c92:1014
db dummyd_4d954[32]; // 4c92:1034
db dummyd_4d974[32]; // 4c92:1054
db dummyd_4d994[32]; // 4c92:1074
db dummyd_4d9b4[32]; // 4c92:1094
db dummyd_4d9d4[32]; // 4c92:10b4
db dummyd_4d9f4[32]; // 4c92:10d4
db dummyd_4da14[32]; // 4c92:10f4
db dummyd_4da34[32]; // 4c92:1114
db dummyd_4da54[32]; // 4c92:1134
db dummyd_4da74[32]; // 4c92:1154
db dummyd_4da94[32]; // 4c92:1174
db dummyd_4dab4[32]; // 4c92:1194
db dummyd_4dad4[32]; // 4c92:11b4
db dummyd_4daf4[32]; // 4c92:11d4
db dummyd_4db14[32]; // 4c92:11f4
db dummyd_4db34[32]; // 4c92:1214
db dummyd_4db54[32]; // 4c92:1234
db dummyd_4db74[32]; // 4c92:1254
db dummyd_4db94[32]; // 4c92:1274
db dummyd_4dbb4[32]; // 4c92:1294
db dummyd_4dbd4[32]; // 4c92:12b4
db dummyd_4dbf4[32]; // 4c92:12d4
db dummyd_4dc14[32]; // 4c92:12f4
db dummyd_4dc34[32]; // 4c92:1314
db dummyd_4dc54[32]; // 4c92:1334
db dummyd_4dc74[32]; // 4c92:1354
db dummyd_4dc94[32]; // 4c92:1374
db dummyd_4dcb4[32]; // 4c92:1394
db dummyd_4dcd4[32]; // 4c92:13b4
db dummyd_4dcf4[32]; // 4c92:13d4
db dummyd_4dd14[32]; // 4c92:13f4
db dummyd_4dd34[32]; // 4c92:1414
db dummyd_4dd54;
db dummyd_4dd55;
db dummyd_4dd56; // 4c92:1436
db dummyd_4dd57; // 4c92:1437
db dummyd_4dd58; // 4c92:1438
db dummyd_4dd59; // 4c92:1439
db dummyd_4dd5a;
db dummyd_4dd5b;
db dummyd_4dd5c; // 4c92:143c
db dummyd_4dd5d; // 4c92:143d
db dummyd_4dd5e; // 4c92:143e
db dummyd_4dd5f; // 4c92:143f
db dummyd_4dd60;
db dummyd_4dd61;
db dummyd_4dd62; // 4c92:1442
db dummyd_4dd63; // 4c92:1443
db dummyd_4dd64; // 4c92:1444
db dummyd_4dd65; // 4c92:1445
db dummyd_4dd66;
db dummyd_4dd67;
db dummyd_4dd68; // 4c92:1448
db dummyd_4dd69; // 4c92:1449
db dummyd_4dd6a; // 4c92:144a
db dummyd_4dd6b; // 4c92:144b
db dummyd_4dd6c;
db dummyd_4dd6d;
db dummyd_4dd6e;
db dummyd_4dd6f;
db dummyd_4dd70; // 4c92:1450
db dummyd_4dd71;
db dummyd_4dd72[2];
db dummyd_4dd74[32]; // 4c92:1454
db dummyd_4dd94[32]; // 4c92:1474
db dummyd_4ddb4[32]; // 4c92:1494
db dummyd_4ddd4[32]; // 4c92:14b4
db dummyd_4ddf4; // 4c92:14d4
db dummyd_4ddf5; // 4c92:14d5
db dummyd_4ddf6; // 4c92:14d6
db dummyd_4ddf7;
db dummyd_4ddf8; // 4c92:14d8
db dummyd_4ddf9; // 4c92:14d9
db dummyd_4ddfa; // 4c92:14da
db dummyd_4ddfb;
db dummyd_4ddfc; // 4c92:14dc
db dummyd_4ddfd; // 4c92:14dd
db dummyd_4ddfe; // 4c92:14de
db dummyd_4ddff; // 4c92:14df
db dummyd_4de00; // 4c92:14e0
db dummyd_4de01; // 4c92:14e1
db dummyd_4de02; // 4c92:14e2
db dummyd_4de03; // 4c92:14e3
db dummyd_4de04; // 4c92:14e4
db dummyd_4de05; // 4c92:14e5
db dummyd_4de06; // 4c92:14e6
db dummyd_4de07; // 4c92:14e7
db dummyd_4de08; // 4c92:14e8
db dummyd_4de09; // 4c92:14e9
db dummyd_4de0a; // 4c92:14ea
db dummyd_4de0b; // 4c92:14eb
db dummyd_4de0c; // 4c92:14ec
db dummyd_4de0d; // 4c92:14ed
db dummyd_4de0e[2];
db dummyd_4de10[32]; // 4c92:14f0
db dummyd_4de30[32]; // 4c92:1510
db dummyd_4de50[32]; // 4c92:1530
db dummyd_4de70[32]; // 4c92:1550
db dummyd_4de90[32]; // 4c92:1570
db dummyd_4deb0[32]; // 4c92:1590
db dummyd_4ded0[32]; // 4c92:15b0
db dummyd_4def0[32]; // 4c92:15d0
db dummyd_4df10[32]; // 4c92:15f0
db dummyd_4df30[32]; // 4c92:1610
db dummyd_4df50[32]; // 4c92:1630
db dummyd_4df70[32]; // 4c92:1650
db dummyd_4df90[32]; // 4c92:1670
db dummyd_4dfb0[32]; // 4c92:1690
db dummyd_4dfd0[32]; // 4c92:16b0
db dummyd_4dff0[32]; // 4c92:16d0
db dummyd_4e010[32]; // 4c92:16f0
db dummyd_4e030[32]; // 4c92:1710
db dummyd_4e050[32]; // 4c92:1730
db dummyd_4e070[32]; // 4c92:1750
db dummyd_4e090[32]; // 4c92:1770
db dummyd_4e0b0[32]; // 4c92:1790
db dummyd_4e0d0[32]; // 4c92:17b0
db dummyd_4e0f0[32]; // 4c92:17d0
db dummyd_4e110[32]; // 4c92:17f0
db dummyd_4e130[32]; // 4c92:1810
db dummyd_4e150[32]; // 4c92:1830
db dummyd_4e170[32]; // 4c92:1850
db dummyd_4e190;
db dummyd_4e191;
db dummyd_4e192;
db dummyd_4e193;
db dummyd_4e194;
db dummyd_4e195; // 4c92:1875
db dummyd_4e196; // 4c92:1876
db dummyd_4e197;
db dummyd_4e198;
db dummyd_4e199;
db dummyd_4e19a;
db dummyd_4e19b;
db dummyd_4e19c;
db dummyd_4e19d;
db dummyd_4e19e;
db dummyd_4e19f; // 4c92:187f
db unk_5c780; // 4e1a:0000
db dummyd_4e1a1[32]; // 4e1a:0001
db dummyd_4e1c1[32]; // 4e1a:0021
db dummyd_4e1e1[32]; // 4e1a:0041
db dummyd_4e201[32]; // 4e1a:0061
db dummyd_4e221[32]; // 4e1a:0081
db dummyd_4e241[32]; // 4e1a:00a1
db dummyd_4e261[32]; // 4e1a:00c1
db dummyd_4e281[32]; // 4e1a:00e1
db dummyd_4e2a1[32]; // 4e1a:0101
db dummyd_4e2c1[32]; // 4e1a:0121
db dummyd_4e2e1[32]; // 4e1a:0141
db dummyd_4e301[32]; // 4e1a:0161
db dummyd_4e321[32]; // 4e1a:0181
db dummyd_4e341[32]; // 4e1a:01a1
db dummyd_4e361[32]; // 4e1a:01c1
db dummyd_4e381[32]; // 4e1a:01e1
db dummyd_4e3a1[32]; // 4e1a:0201
db dummyd_4e3c1[32]; // 4e1a:0221
db dummyd_4e3e1[32]; // 4e1a:0241
db dummyd_4e401[32]; // 4e1a:0261
db dummyd_4e421[32]; // 4e1a:0281
db dummyd_4e441[32]; // 4e1a:02a1
db dummyd_4e461[32]; // 4e1a:02c1
db dummyd_4e481[32]; // 4e1a:02e1
db dummyd_4e4a1[32]; // 4e1a:0301
db dummyd_4e4c1[32]; // 4e1a:0321
db dummyd_4e4e1[32]; // 4e1a:0341
db dummyd_4e501[32]; // 4e1a:0361
db dummyd_4e521[32]; // 4e1a:0381
db dummyd_4e541[32]; // 4e1a:03a1
db dummyd_4e561[32]; // 4e1a:03c1
db dummyd_4e581[32]; // 4e1a:03e1
db dummyd_4e5a1[32]; // 4e1a:0401
db dummyd_4e5c1[32]; // 4e1a:0421
db dummyd_4e5e1[32]; // 4e1a:0441
db dummyd_4e601[32]; // 4e1a:0461
db dummyd_4e621[32]; // 4e1a:0481
db dummyd_4e641[32]; // 4e1a:04a1
db dummyd_4e661[32]; // 4e1a:04c1
db dummyd_4e681[32]; // 4e1a:04e1
db dummyd_4e6a1[32]; // 4e1a:0501
db dummyd_4e6c1[32]; // 4e1a:0521
db dummyd_4e6e1[32]; // 4e1a:0541
db dummyd_4e701[32]; // 4e1a:0561
db dummyd_4e721[32]; // 4e1a:0581
db dummyd_4e741[32]; // 4e1a:05a1
db dummyd_4e761[32]; // 4e1a:05c1
db dummyd_4e781[32]; // 4e1a:05e1
db dummyd_4e7a1[32]; // 4e1a:0601
db dummyd_4e7c1[32]; // 4e1a:0621
db dummyd_4e7e1[32]; // 4e1a:0641
db dummyd_4e801[32]; // 4e1a:0661
db dummyd_4e821[32]; // 4e1a:0681
db dummyd_4e841[32]; // 4e1a:06a1
db dummyd_4e861[32]; // 4e1a:06c1
db dummyd_4e881[32]; // 4e1a:06e1
db dummyd_4e8a1[32]; // 4e1a:0701
db dummyd_4e8c1[32]; // 4e1a:0721
db dummyd_4e8e1[32]; // 4e1a:0741
db dummyd_4e901[32]; // 4e1a:0761
db dummyd_4e921[32]; // 4e1a:0781
db dummyd_4e941[32]; // 4e1a:07a1
db dummyd_4e961[32]; // 4e1a:07c1
db dummyd_4e981[32]; // 4e1a:07e1
db dummyd_4e9a1[32]; // 4e1a:0801
db dummyd_4e9c1[32]; // 4e1a:0821
db dummyd_4e9e1[32]; // 4e1a:0841
db dummyd_4ea01[32]; // 4e1a:0861
db dummyd_4ea21[32]; // 4e1a:0881
db dummyd_4ea41[32]; // 4e1a:08a1
db dummyd_4ea61[32]; // 4e1a:08c1
db dummyd_4ea81[32]; // 4e1a:08e1
db dummyd_4eaa1[32]; // 4e1a:0901
db dummyd_4eac1[32]; // 4e1a:0921
db dummyd_4eae1[32]; // 4e1a:0941
db dummyd_4eb01[32]; // 4e1a:0961
db dummyd_4eb21[32]; // 4e1a:0981
db dummyd_4eb41[32]; // 4e1a:09a1
db dummyd_4eb61[32]; // 4e1a:09c1
db dummyd_4eb81[32]; // 4e1a:09e1
db dummyd_4eba1[32]; // 4e1a:0a01
db dummyd_4ebc1[32]; // 4e1a:0a21
db dummyd_4ebe1[32]; // 4e1a:0a41
db dummyd_4ec01[32]; // 4e1a:0a61
db dummyd_4ec21;
db dummyd_4ec22; // 4e1a:0a82
db dummyd_4ec23;
db dummyd_4ec24;
db dummyd_4ec25;
db dummyd_4ec26;
db dummyd_4ec27;
db dummyd_4ec28;
db dummyd_4ec29; // 4e1a:0a89
db dummyd_4ec2a; // 4e1a:0a8a
db dummyd_4ec2b;
db dummyd_4ec2c;
db dummyd_4ec2d;
db dummyd_4ec2e; // 4e1a:0a8e
db dummyd_4ec2f;
db dummyd_4ec30;
db dummyd_4ec31; // 4e1a:0a91
db dummyd_4ec32; // 4e1a:0a92
db dummyd_4ec33;
db dummyd_4ec34;
db dummyd_4ec35;
db dummyd_4ec36; // 4e1a:0a96
db dummyd_4ec37;
db dummyd_4ec38;
db dummyd_4ec39;
db dummyd_4ec3a;
db dummyd_4ec3b;
db dummyd_4ec3c;
db dummyd_4ec3d;
db dummyd_4ec3e;
db dummyd_4ec3f;
db dummyd_4ec40;
db dummyd_4ec41;
db dummyd_4ec42; // 4ec4:0002
db unk_5d223; // 4ec4:0003
db dummyd_4ec44[32]; // 4ec4:0004
db dummyd_4ec64[32]; // 4ec4:0024
db dummyd_4ec84[32]; // 4ec4:0044
db dummyd_4eca4[32]; // 4ec4:0064
db dummyd_4ecc4[32]; // 4ec4:0084
db dummyd_4ece4[32]; // 4ec4:00a4
db dummyd_4ed04[32]; // 4ec4:00c4
db dummyd_4ed24;
db dummyd_4ed25; // 4ec4:00e5
db dummyd_4ed26; // 4ec4:00e6
db dummyd_4ed27;
db dummyd_4ed28; // 4ec4:00e8
db dummyd_4ed29; // 4ec4:00e9
db dummyd_4ed2a;
db dummyd_4ed2b;
db dummyd_4ed2c; // 4ec4:00ec
db dummyd_4ed2d; // 4ec4:00ed
db dummyd_4ed2e;
db dummyd_4ed2f;
db dummyd_4ed30; // 4ec4:00f0
db dummyd_4ed31; // 4ec4:00f1
db dummyd_4ed32;
db dummyd_4ed33;
db dummyd_4ed34; // 4ec4:00f4
db dummyd_4ed35;
db dummyd_4ed36;
db dummyd_4ed37;
db dummyd_4ed38; // 4ec4:00f8
db dummyd_4ed39;
db dummyd_4ed3a;
db dummyd_4ed3b;
db dummyd_4ed3c; // 4ec4:00fc
db dummyd_4ed3d;
db dummyd_4ed3e;
db dummyd_4ed3f;
db dummyd_4ed40;
db dummyd_4ed41;
db dummyd_4ed42; // 4ed4:0002
db unk_5d323; // 4ed4:0003
db dummyd_4ed44[32]; // 4ed4:0004
db dummyd_4ed64[32]; // 4ed4:0024
db dummyd_4ed84[32]; // 4ed4:0044
db dummyd_4eda4[32]; // 4ed4:0064
db dummyd_4edc4[32]; // 4ed4:0084
db dummyd_4ede4[32]; // 4ed4:00a4
db dummyd_4ee04[32]; // 4ed4:00c4
db dummyd_4ee24[32]; // 4ed4:00e4
db dummyd_4ee44[32]; // 4ed4:0104
db dummyd_4ee64[32]; // 4ed4:0124
db dummyd_4ee84; // 4ed4:0144
db dummyd_4ee85; // 4ed4:0145
db dummyd_4ee86; // 4ed4:0146
db dummyd_4ee87; // 4ed4:0147
db dummyd_4ee88; // 4ed4:0148
db dummyd_4ee89; // 4ed4:0149
db dummyd_4ee8a; // 4ed4:014a
db dummyd_4ee8b; // 4ed4:014b
db dummyd_4ee8c; // 4ed4:014c
db dummyd_4ee8d; // 4ed4:014d
db dummyd_4ee8e; // 4ed4:014e
db dummyd_4ee8f; // 4ed4:014f
db dummyd_4ee90; // 4ed4:0150
db dummyd_4ee91; // 4ed4:0151
db dummyd_4ee92; // 4ed4:0152
db dummyd_4ee93;
db dummyd_4ee94; // 4ed4:0154
db dummyd_4ee95;
db dummyd_4ee96[2];
db dummyd_4ee98[32]; // 4ed4:0158
db dummyd_4eeb8[32]; // 4ed4:0178
db dummyd_4eed8[32]; // 4ed4:0198
db dummyd_4eef8[32]; // 4ed4:01b8
db dummyd_4ef18[32]; // 4ed4:01d8
db dummyd_4ef38[32]; // 4ed4:01f8
db dummyd_4ef58[32]; // 4ed4:0218
db dummyd_4ef78;
db dummyd_4ef79;
db dummyd_4ef7a; // 4ed4:023a
db dummyd_4ef7b; // 4ed4:023b
db dummyd_4ef7c;
db dummyd_4ef7d;
db dummyd_4ef7e; // 4ed4:023e
db dummyd_4ef7f; // 4ed4:023f
db dummyd_4ef80;
db dummyd_4ef81;
db dummyd_4ef82;
db dummyd_4ef83; // 4ed4:0243
db dummyd_4ef84; // 4ed4:0244
db dummyd_4ef85;
db dummyd_4ef86;
db dummyd_4ef87; // 4ed4:0247
db dummyd_4ef88; // 4ed4:0248
db dummyd_4ef89;
db dummyd_4ef8a;
db dummyd_4ef8b; // 4ed4:024b
db dummyd_4ef8c; // 4ed4:024c
db dummyd_4ef8d;
db dummyd_4ef8e;
db dummyd_4ef8f; // 4ed4:024f
db dummyd_4ef90;
db dummyd_4ef91;
db dummyd_4ef92;
db dummyd_4ef93; // 4ed4:0253
db dummyd_4ef94;
db dummyd_4ef95;
db dummyd_4ef96[2];
db dummyd_4ef98[32]; // 4ed4:0258
db dummyd_4efb8[32]; // 4ed4:0278
db dummyd_4efd8[32]; // 4ed4:0298
db dummyd_4eff8[32]; // 4ed4:02b8
db dummyd_4f018[32]; // 4ed4:02d8
db dummyd_4f038[32]; // 4ed4:02f8
db dummyd_4f058[32]; // 4ed4:0318
db dummyd_4f078[32]; // 4ed4:0338
db dummyd_4f098[32]; // 4ed4:0358
db dummyd_4f0b8[32]; // 4ed4:0378
db dummyd_4f0d8[32]; // 4ed4:0398
db dummyd_4f0f8[32]; // 4ed4:03b8
db dummyd_4f118[32]; // 4ed4:03d8
db dummyd_4f138[32]; // 4ed4:03f8
db dummyd_4f158[32]; // 4ed4:0418
db dummyd_4f178[32]; // 4ed4:0438
db dummyd_4f198[32]; // 4ed4:0458
db dummyd_4f1b8[32]; // 4ed4:0478
db dummyd_4f1d8[32]; // 4ed4:0498
db dummyd_4f1f8[32]; // 4ed4:04b8
db dummyd_4f218[32]; // 4ed4:04d8
db dummyd_4f238[32]; // 4ed4:04f8
db dummyd_4f258;
db dummyd_4f259;
db dummyd_4f25a;
db dummyd_4f25b;
db dummyd_4f25c;
db dummyd_4f25d; // 4ed4:051d
db dummyd_4f25e;
db dummyd_4f25f;
db dummyd_4f260[32]; // 4f26:0000
db dummyd_4f280[32]; // 4f26:0020
db dummyd_4f2a0[32]; // 4f26:0040
db dummyd_4f2c0[32]; // 4f26:0060
db dummyd_4f2e0[32]; // 4f26:0080
db dummyd_4f300[32]; // 4f26:00a0
db dummyd_4f320[32]; // 4f26:00c0
db dummyd_4f340[32]; // 4f26:00e0
db dummyd_4f360[32]; // 4f26:0100
db dummyd_4f380[32]; // 4f26:0120
db dummyd_4f3a0[32]; // 4f26:0140
db dummyd_4f3c0[32]; // 4f26:0160
db dummyd_4f3e0[32]; // 4f26:0180
db dummyd_4f400[32]; // 4f26:01a0
db dummyd_4f420[32]; // 4f26:01c0
db dummyd_4f440[32]; // 4f26:01e0
db dummyd_4f460[32]; // 4f26:0200
db dummyd_4f480[32]; // 4f26:0220
db dummyd_4f4a0[32]; // 4f26:0240
db dummyd_4f4c0[32]; // 4f26:0260
db dummyd_4f4e0[32]; // 4f26:0280
db dummyd_4f500[32]; // 4f26:02a0
db dummyd_4f520[32]; // 4f26:02c0
db dummyd_4f540[32]; // 4f26:02e0
db dummyd_4f560[32]; // 4f26:0300
db dummyd_4f580[32]; // 4f26:0320
db dummyd_4f5a0[32]; // 4f26:0340
db dummyd_4f5c0[32]; // 4f26:0360
db dummyd_4f5e0[32]; // 4f26:0380
db dummyd_4f600[32]; // 4f26:03a0
db dummyd_4f620[32]; // 4f26:03c0
db dummyd_4f640;
db dummyd_4f641; // 4f26:03e1
db unk_5dc22; // 4f26:03e2
db dummyd_4f643[32]; // 4f26:03e3
db dummyd_4f663[32]; // 4f26:0403
db dummyd_4f683[32]; // 4f26:0423
db dummyd_4f6a3[32]; // 4f26:0443
db dummyd_4f6c3[32]; // 4f26:0463
db dummyd_4f6e3[32]; // 4f26:0483
db dummyd_4f703[32]; // 4f26:04a3
db dummyd_4f723;
db dummyd_4f724;
db dummyd_4f725;
db dummyd_4f726;
db dummyd_4f727;
db dummyd_4f728;
db dummyd_4f729;
db dummyd_4f72a;
db dummyd_4f72b;
db dummyd_4f72c;
db dummyd_4f72d;
db dummyd_4f72e; // 4f26:04ce
db dummyd_4f72f;
db dummyd_4f730;
db dummyd_4f731;
db dummyd_4f732; // 4f26:04d2
db dummyd_4f733; // 4f26:04d3
db dummyd_4f734;
db dummyd_4f735;
db dummyd_4f736; // 4f26:04d6
db dummyd_4f737; // 4f26:04d7
db dummyd_4f738;
db dummyd_4f739;
db dummyd_4f73a; // 4f26:04da
db dummyd_4f73b; // 4f26:04db
db dummyd_4f73c;
db dummyd_4f73d;
db dummyd_4f73e; // 4f26:04de
db dummyd_4f73f; // 4f26:04df
db dummyd_4f740;
db dummyd_4f741; // 4f26:04e1
db unk_5dd22; // 4f26:04e2
db dummyd_4f743[32]; // 4f26:04e3
db dummyd_4f763[32]; // 4f26:0503
db dummyd_4f783[32]; // 4f26:0523
db dummyd_4f7a3[32]; // 4f26:0543
db dummyd_4f7c3[32]; // 4f26:0563
db dummyd_4f7e3[32]; // 4f26:0583
db dummyd_4f803[32]; // 4f26:05a3
db dummyd_4f823[32]; // 4f26:05c3
db dummyd_4f843[32]; // 4f26:05e3
db dummyd_4f863[32]; // 4f26:0603
db dummyd_4f883;
db dummyd_4f884;
db dummyd_4f885; // 4f26:0625
db dummyd_4f886; // 4f26:0626
db dummyd_4f887;
db dummyd_4f888; // 4f26:0628
db dummyd_4f889; // 4f26:0629
db dummyd_4f88a;
db dummyd_4f88b;
db dummyd_4f88c; // 4f26:062c
db dummyd_4f88d; // 4f26:062d
db dummyd_4f88e;
db dummyd_4f88f;
db dummyd_4f890; // 4f26:0630
db dummyd_4f891; // 4f26:0631
db dummyd_4f892;
db dummyd_4f893;
db dummyd_4f894; // 4f26:0634
db dummyd_4f895; // 4f26:0635
db dummyd_4f896;
db dummyd_4f897;
db dummyd_4f898; // 4f26:0638
db dummyd_4f899;
db dummyd_4f89a;
db dummyd_4f89b;
db dummyd_4f89c; // 4f26:063c
db dummyd_4f89d;
db dummyd_4f89e;
db dummyd_4f89f;
db dummyd_4f8a0;
db dummyd_4f8a1; // 4f26:0641
db unk_5de82; // 4f26:0642
db dummyd_4f8a3[32]; // 4f26:0643
db dummyd_4f8c3[32]; // 4f26:0663
db dummyd_4f8e3;
db dummyd_4f8e4; // 4f26:0684
db dummyd_4f8e5;
db dummyd_4f8e6;
db dummyd_4f8e7;
db dummyd_4f8e8;
db dummyd_4f8e9; // 4f26:0689
db dummyd_4f8ea;
db dummyd_4f8eb;
db dummyd_4f8ec;
db dummyd_4f8ed; // 4f26:068d
db dummyd_4f8ee; // 4f26:068e
db dummyd_4f8ef;
db dummyd_4f8f0;
db dummyd_4f8f1; // 4f26:0691
db dummyd_4f8f2; // 4f26:0692
db dummyd_4f8f3;
db dummyd_4f8f4; // 4f26:0694
db dummyd_4f8f5; // 4f26:0695
db dummyd_4f8f6; // 4f26:0696
db dummyd_4f8f7;
db dummyd_4f8f8; // 4f26:0698
db dummyd_4f8f9; // 4f26:0699
db dummyd_4f8fa;
db dummyd_4f8fb;
db dummyd_4f8fc; // 4f26:069c
db dummyd_4f8fd; // 4f26:069d
db dummyd_4f8fe;
db dummyd_4f8ff;
db dummyd_4f900; // 4f90:0000
db dummyd_4f901; // 4f90:0001
db dummyd_4f902;
db dummyd_4f903;
db dummyd_4f904; // 4f90:0004
db dummyd_4f905; // 4f90:0005
db dummyd_4f906;
db dummyd_4f907;
db dummyd_4f908; // 4f90:0008
db dummyd_4f909;
db dummyd_4f90a;
db dummyd_4f90b;
db dummyd_4f90c[4];
db dummyd_4f910[32]; // 4f90:0010
db dummyd_4f930[32]; // 4f90:0030
db dummyd_4f950[32]; // 4f90:0050
db dummyd_4f970[32]; // 4f90:0070
db dummyd_4f990[32]; // 4f90:0090
db dummyd_4f9b0[32]; // 4f90:00b0
db dummyd_4f9d0[32]; // 4f90:00d0
db dummyd_4f9f0[32]; // 4f90:00f0
db dummyd_4fa10[32]; // 4f90:0110
db dummyd_4fa30[32]; // 4f90:0130
db dummyd_4fa50[32]; // 4f90:0150
db dummyd_4fa70[32]; // 4f90:0170
db dummyd_4fa90[32]; // 4f90:0190
db dummyd_4fab0[32]; // 4f90:01b0
db dummyd_4fad0[32]; // 4f90:01d0
db dummyd_4faf0[32]; // 4f90:01f0
db dummyd_4fb10[32]; // 4f90:0210
db dummyd_4fb30[32]; // 4f90:0230
db dummyd_4fb50[32]; // 4f90:0250
db dummyd_4fb70[32]; // 4f90:0270
db dummyd_4fb90[32]; // 4f90:0290
db dummyd_4fbb0[32]; // 4f90:02b0
db dummyd_4fbd0[32]; // 4f90:02d0
db dummyd_4fbf0[32]; // 4f90:02f0
db dummyd_4fc10[32]; // 4f90:0310
db dummyd_4fc30[32]; // 4f90:0330
db dummyd_4fc50[32]; // 4f90:0350
db dummyd_4fc70[32]; // 4f90:0370
db dummyd_4fc90[32]; // 4f90:0390
db dummyd_4fcb0[32]; // 4f90:03b0
db dummyd_4fcd0[32]; // 4f90:03d0
db dummyd_4fcf0[32]; // 4f90:03f0
db dummyd_4fd10[32]; // 4f90:0410
db dummyd_4fd30[32]; // 4f90:0430
db dummyd_4fd50[32]; // 4f90:0450
db dummyd_4fd70[32]; // 4f90:0470
db dummyd_4fd90[32]; // 4f90:0490
db dummyd_4fdb0[32]; // 4f90:04b0
db dummyd_4fdd0[32]; // 4f90:04d0
db dummyd_4fdf0[32]; // 4f90:04f0
db dummyd_4fe10[32]; // 4f90:0510
db dummyd_4fe30[32]; // 4f90:0530
db dummyd_4fe50[32]; // 4f90:0550
db dummyd_4fe70[32]; // 4f90:0570
db dummyd_4fe90[32]; // 4f90:0590
db dummyd_4feb0[32]; // 4f90:05b0
db dummyd_4fed0[32]; // 4f90:05d0
db dummyd_4fef0[32]; // 4f90:05f0
db dummyd_4ff10[32]; // 4f90:0610
db dummyd_4ff30[32]; // 4f90:0630
db dummyd_4ff50[32]; // 4f90:0650
db dummyd_4ff70[32]; // 4f90:0670
db dummyd_4ff90[32]; // 4f90:0690
db dummyd_4ffb0[32]; // 4f90:06b0
db dummyd_4ffd0[32]; // 4f90:06d0
db dummyd_4fff0[32]; // 4f90:06f0
db dummyd_50010[32]; // 4f90:0710
db dummyd_50030[32]; // 4f90:0730
db dummyd_50050[32]; // 4f90:0750
db dummyd_50070[32]; // 4f90:0770
db dummyd_50090[32]; // 4f90:0790
db dummyd_500b0[32]; // 4f90:07b0
db dummyd_500d0[32]; // 4f90:07d0
db dummyd_500f0[32]; // 4f90:07f0
db dummyd_50110[32]; // 4f90:0810
db dummyd_50130[32]; // 4f90:0830
db dummyd_50150[32]; // 4f90:0850
db dummyd_50170[32]; // 4f90:0870
db dummyd_50190[32]; // 4f90:0890
db dummyd_501b0[32]; // 4f90:08b0
db dummyd_501d0[32]; // 4f90:08d0
db dummyd_501f0[32]; // 4f90:08f0
db dummyd_50210[32]; // 4f90:0910
db dummyd_50230[32]; // 4f90:0930
db dummyd_50250[32]; // 4f90:0950
db dummyd_50270[32]; // 4f90:0970
db dummyd_50290[32]; // 4f90:0990
db dummyd_502b0[32]; // 4f90:09b0
db dummyd_502d0[32]; // 4f90:09d0
db dummyd_502f0[32]; // 4f90:09f0
db dummyd_50310[32]; // 4f90:0a10
db dummyd_50330[32]; // 4f90:0a30
db dummyd_50350[32]; // 4f90:0a50
db dummyd_50370[32]; // 4f90:0a70
db dummyd_50390[32]; // 4f90:0a90
db dummyd_503b0[32]; // 4f90:0ab0
db dummyd_503d0[32]; // 4f90:0ad0
db dummyd_503f0[32]; // 4f90:0af0
db dummyd_50410[32]; // 4f90:0b10
db dummyd_50430[32]; // 4f90:0b30
db dummyd_50450[32]; // 4f90:0b50
db dummyd_50470[32]; // 4f90:0b70
db dummyd_50490[32]; // 4f90:0b90
db dummyd_504b0[32]; // 4f90:0bb0
db dummyd_504d0[32]; // 4f90:0bd0
db dummyd_504f0[32]; // 4f90:0bf0
db dummyd_50510[32]; // 4f90:0c10
db dummyd_50530[32]; // 4f90:0c30
db dummyd_50550[32]; // 4f90:0c50
db dummyd_50570[32]; // 4f90:0c70
db dummyd_50590[32]; // 4f90:0c90
db dummyd_505b0[32]; // 4f90:0cb0
db dummyd_505d0[32]; // 4f90:0cd0
db dummyd_505f0[32]; // 4f90:0cf0
db dummyd_50610[32]; // 4f90:0d10
db dummyd_50630[32]; // 4f90:0d30
db dummyd_50650[32]; // 4f90:0d50
db dummyd_50670[32]; // 4f90:0d70
db dummyd_50690[32]; // 4f90:0d90
db dummyd_506b0[32]; // 4f90:0db0
db dummyd_506d0[32]; // 4f90:0dd0
db dummyd_506f0[32]; // 4f90:0df0
db dummyd_50710[32]; // 4f90:0e10
db dummyd_50730[32]; // 4f90:0e30
db dummyd_50750[32]; // 4f90:0e50
db dummyd_50770[32]; // 4f90:0e70
db dummyd_50790[32]; // 4f90:0e90
db dummyd_507b0[32]; // 4f90:0eb0
db dummyd_507d0[32]; // 4f90:0ed0
db dummyd_507f0[32]; // 4f90:0ef0
db dummyd_50810[32]; // 4f90:0f10
db dummyd_50830[32]; // 4f90:0f30
db dummyd_50850[32]; // 4f90:0f50
db dummyd_50870[32]; // 4f90:0f70
db dummyd_50890[32]; // 4f90:0f90
db dummyd_508b0[32]; // 4f90:0fb0
db dummyd_508d0[32]; // 4f90:0fd0
db dummyd_508f0[32]; // 4f90:0ff0
db dummyd_50910[32]; // 4f90:1010
db dummyd_50930[32]; // 4f90:1030
db dummyd_50950[32]; // 4f90:1050
db dummyd_50970[32]; // 4f90:1070
db dummyd_50990[32]; // 4f90:1090
db dummyd_509b0[32]; // 4f90:10b0
db dummyd_509d0[32]; // 4f90:10d0
db dummyd_509f0[32]; // 4f90:10f0
db dummyd_50a10[32]; // 4f90:1110
db dummyd_50a30[32]; // 4f90:1130
db dummyd_50a50[32]; // 4f90:1150
db dummyd_50a70[32]; // 4f90:1170
db dummyd_50a90[32]; // 4f90:1190
db dummyd_50ab0[32]; // 4f90:11b0
db dummyd_50ad0[32]; // 4f90:11d0
db dummyd_50af0[32]; // 4f90:11f0
db dummyd_50b10[32]; // 4f90:1210
db dummyd_50b30[32]; // 4f90:1230
db dummyd_50b50[32]; // 4f90:1250
db dummyd_50b70[32]; // 4f90:1270
db dummyd_50b90[32]; // 4f90:1290
db dummyd_50bb0[32]; // 4f90:12b0
db dummyd_50bd0[32]; // 4f90:12d0
db dummyd_50bf0[32]; // 4f90:12f0
db dummyd_50c10[32]; // 4f90:1310
db dummyd_50c30[32]; // 4f90:1330
db dummyd_50c50[32]; // 4f90:1350
db dummyd_50c70[32]; // 4f90:1370
db dummyd_50c90[32]; // 4f90:1390
db dummyd_50cb0[32]; // 4f90:13b0
db dummyd_50cd0[32]; // 4f90:13d0
db dummyd_50cf0[32]; // 4f90:13f0
db dummyd_50d10[32]; // 4f90:1410
db dummyd_50d30[32]; // 4f90:1430
db dummyd_50d50[32]; // 4f90:1450
db dummyd_50d70[32]; // 4f90:1470
db dummyd_50d90[32]; // 4f90:1490
db dummyd_50db0[32]; // 4f90:14b0
db dummyd_50dd0[32]; // 4f90:14d0
db dummyd_50df0[32]; // 4f90:14f0
db dummyd_50e10[32]; // 4f90:1510
db dummyd_50e30[32]; // 4f90:1530
db dummyd_50e50; // 50e5:0000
db dummyd_50e51;
db dummyd_50e52; // 50e5:0002
db dummyd_50e53;
db dummyd_50e54;
db dummyd_50e55;
db dummyd_50e56; // 50e5:0006
db dummyd_50e57;
db dummyd_50e58; // 50e5:0008
db dummyd_50e59;
db dummyd_50e5a; // 50e5:000a
db unk_5f43b; // 50e5:000b
db dummyd_50e5c[32]; // 50e5:000c
db dummyd_50e7c[32]; // 50e5:002c
db dummyd_50e9c[32]; // 50e5:004c
db dummyd_50ebc[32]; // 50e5:006c
db dummyd_50edc[32]; // 50e5:008c
db dummyd_50efc[32]; // 50e5:00ac
db dummyd_50f1c[32]; // 50e5:00cc
db dummyd_50f3c[32]; // 50e5:00ec
db dummyd_50f5c[32]; // 50e5:010c
db dummyd_50f7c[32]; // 50e5:012c
db dummyd_50f9c; // 50e5:014c
db dummyd_50f9d; // 50e5:014d
db dummyd_50f9e;
db dummyd_50f9f;
db dummyd_50fa0;
db dummyd_50fa1; // 50e5:0151
db dummyd_50fa2;
db dummyd_50fa3;
db dummyd_50fa4; // 50e5:0154
db dummyd_50fa5; // 50e5:0155
db dummyd_50fa6;
db dummyd_50fa7;
db dummyd_50fa8; // 50e5:0158
db dummyd_50fa9; // 50e5:0159
db dummyd_50faa;
db dummyd_50fab;
db dummyd_50fac; // 50e5:015c
db dummyd_50fad; // 50e5:015d
db dummyd_50fae;
db dummyd_50faf;
db dummyd_50fb0; // 50fb:0000
db dummyd_50fb1; // 50fb:0001
db dummyd_50fb2;
db dummyd_50fb3;
db dummyd_50fb4; // 50fb:0004
db dummyd_50fb5;
db dummyd_50fb6;
db byte_5f597; // 50fb:0007
db dummyd_50fb8[32]; // 50fb:0008
db dummyd_50fd8[32]; // 50fb:0028
db dummyd_50ff8[32]; // 50fb:0048
db dummyd_51018[32]; // 50fb:0068
db dummyd_51038;
db dummyd_51039; // 50fb:0089
db dummyd_5103a;
db dummyd_5103b; // 50fb:008b
db dummyd_5103c; // 50fb:008c
db dummyd_5103d; // 50fb:008d
db dummyd_5103e; // 50fb:008e
db dummyd_5103f; // 50fb:008f
db dummyd_51040; // 50fb:0090
db dummyd_51041; // 50fb:0091
db dummyd_51042; // 50fb:0092
db dummyd_51043; // 50fb:0093
db dummyd_51044; // 50fb:0094
db dummyd_51045; // 50fb:0095
db dummyd_51046; // 50fb:0096
db dummyd_51047; // 50fb:0097
db dummyd_51048; // 50fb:0098
db dummyd_51049; // 50fb:0099
db dummyd_5104a; // 50fb:009a
db dummyd_5104b; // 50fb:009b
db dummyd_5104c; // 50fb:009c
db dummyd_5104d; // 50fb:009d
db dummyd_5104e; // 50fb:009e
db dummyd_5104f; // 50fb:009f
db dummyd_51050; // 5105:0000
db dummyd_51051; // 5105:0001
db dummyd_51052;
db dummyd_51053; // 5105:0003
db dummyd_51054;
db dummyd_51055;
db dummyd_51056; // 5105:0006
db unk_5f637; // 5105:0007
db dummyd_51058[32]; // 5105:0008
db dummyd_51078[32]; // 5105:0028
db dummyd_51098[32]; // 5105:0048
db dummyd_510b8[32]; // 5105:0068
db dummyd_510d8[32]; // 5105:0088
db dummyd_510f8[32]; // 5105:00a8
db dummyd_51118[32]; // 5105:00c8
db dummyd_51138[32]; // 5105:00e8
db dummyd_51158[32]; // 5105:0108
db dummyd_51178[32]; // 5105:0128
db dummyd_51198[32]; // 5105:0148
db dummyd_511b8[32]; // 5105:0168
db dummyd_511d8;
db dummyd_511d9;
db dummyd_511da;
db dummyd_511db; // 5105:018b
db dummyd_511dc; // 5105:018c
db dummyd_511dd;
db dummyd_511de;
db byte_5f7bf; // 5105:018f
db dummyd_511e0[32]; // 5105:0190
db dummyd_51200[32]; // 5105:01b0
db dummyd_51220[32]; // 5105:01d0
db dummyd_51240[32]; // 5105:01f0
db dummyd_51260[32]; // 5105:0210
db dummyd_51280[32]; // 5105:0230
db dummyd_512a0[32]; // 5105:0250
db dummyd_512c0[32]; // 5105:0270
db dummyd_512e0[32]; // 5105:0290
db dummyd_51300;
db dummyd_51301; // 5105:02b1
db dummyd_51302; // 5105:02b2
db dummyd_51303;
db dummyd_51304;
db dummyd_51305;
db dummyd_51306;
db dummyd_51307; // 5105:02b7
db dummyd_51308; // 5105:02b8
db dummyd_51309; // 5105:02b9
db dummyd_5130a;
db dummyd_5130b;
db dummyd_5130c;
db dummyd_5130d; // 5105:02bd
db dummyd_5130e; // 5105:02be
db dummyd_5130f;
db dummyd_51310;
db dummyd_51311;
db dummyd_51312[2];
db dummyd_51314[32]; // 5105:02c4
db dummyd_51334[32]; // 5105:02e4
db dummyd_51354[32]; // 5105:0304
db dummyd_51374[32]; // 5105:0324
db dummyd_51394[32]; // 5105:0344
db dummyd_513b4[32]; // 5105:0364
db dummyd_513d4; // 5105:0384
db dummyd_513d5; // 5105:0385
db dummyd_513d6; // 5105:0386
db dummyd_513d7; // 5105:0387
db dummyd_513d8; // 5105:0388
db dummyd_513d9; // 5105:0389
db dummyd_513da; // 5105:038a
db dummyd_513db; // 5105:038b
db dummyd_513dc; // 5105:038c
db dummyd_513dd; // 5105:038d
db dummyd_513de; // 5105:038e
db dummyd_513df; // 5105:038f
db dummyd_513e0; // 5105:0390
db dummyd_513e1; // 5105:0391
db dummyd_513e2; // 5105:0392
db dummyd_513e3; // 5105:0393
db dummyd_513e4; // 5105:0394
db dummyd_513e5; // 5105:0395
db dummyd_513e6; // 5105:0396
db dummyd_513e7; // 5105:0397
db dummyd_513e8; // 5105:0398
db dummyd_513e9; // 5105:0399
db dummyd_513ea[2];
db dummyd_513ec[32]; // 5105:039c
db dummyd_5140c[32]; // 5105:03bc
db dummyd_5142c[32]; // 5105:03dc
db dummyd_5144c[32]; // 5105:03fc
db dummyd_5146c[32]; // 5105:041c
db dummyd_5148c[32]; // 5105:043c
db dummyd_514ac;
db dummyd_514ad; // 5105:045d
db dummyd_514ae[2];
db dummyd_514b0[32]; // 5105:0460
db dummyd_514d0[32]; // 5105:0480
db dummyd_514f0[32]; // 5105:04a0
db dummyd_51510[32]; // 5105:04c0
db dummyd_51530[32]; // 5105:04e0
db dummyd_51550[32]; // 5105:0500
db dummyd_51570; // 5105:0520
db dummyd_51571;
db dummyd_51572[2];
db dummyd_51574[32]; // 5105:0524
db dummyd_51594[32]; // 5105:0544
db dummyd_515b4[32]; // 5105:0564
db dummyd_515d4[32]; // 5105:0584
db dummyd_515f4[32]; // 5105:05a4
db dummyd_51614[32]; // 5105:05c4
db dummyd_51634[32]; // 5105:05e4
db dummyd_51654[32]; // 5105:0604
db dummyd_51674[32]; // 5105:0624
db dummyd_51694[32]; // 5105:0644
db dummyd_516b4; // 5105:0664
db dummyd_516b5; // 5105:0665
db dummyd_516b6; // 5105:0666
db dummyd_516b7; // 5105:0667
db dummyd_516b8; // 5105:0668
db dummyd_516b9; // 5105:0669
db dummyd_516ba; // 5105:066a
db dummyd_516bb; // 5105:066b
db dummyd_516bc; // 5105:066c
db dummyd_516bd; // 5105:066d
db dummyd_516be; // 5105:066e
db dummyd_516bf; // 5105:066f
db dummyd_516c0; // 5105:0670
db dummyd_516c1; // 5105:0671
db dummyd_516c2; // 5105:0672
db dummyd_516c3; // 5105:0673
db dummyd_516c4; // 5105:0674
db dummyd_516c5;
db dummyd_516c6; // 5105:0676
db dummyd_516c7; // 5105:0677
db dummyd_516c8; // 5105:0678
db dummyd_516c9;
db dummyd_516ca; // 5105:067a
db dummyd_516cb; // 5105:067b
db dummyd_516cc; // 5105:067c
db dummyd_516cd;
db dummyd_516ce; // 5105:067e
db dummyd_516cf; // 5105:067f
db dummyd_516d0; // 516d:0000
db dummyd_516d1;
db dummyd_516d2;
db dummyd_516d3; // 516d:0003
db dummyd_516d4; // 516d:0004
db dummyd_516d5;
db dummyd_516d6[2];
db dummyd_516d8; // 516d:0008
db dummyd_516d9;
db unk_5fcba; // 516d:000a
db dummyd_516db[32]; // 516d:000b
db dummyd_516fb[32]; // 516d:002b
db dummyd_5171b[32]; // 516d:004b
db dummyd_5173b[32]; // 516d:006b
db dummyd_5175b[32]; // 516d:008b
db dummyd_5177b[32]; // 516d:00ab
db dummyd_5179b[32]; // 516d:00cb
db dummyd_517bb[32]; // 516d:00eb
db dummyd_517db[32]; // 516d:010b
db dummyd_517fb[32]; // 516d:012b
db dummyd_5181b; // 516d:014b
db dummyd_5181c;
db dummyd_5181d;
db dummyd_5181e; // 516d:014e
db dummyd_5181f; // 516d:014f
db dummyd_51820;
db dummyd_51821;
db dummyd_51822;
db dummyd_51823; // 516d:0153
db dummyd_51824;
db dummyd_51825;
db dummyd_51826;
db dummyd_51827; // 516d:0157
db dummyd_51828;
db dummyd_51829;
db dummyd_5182a;
db dummyd_5182b; // 516d:015b
db dummyd_5182c;
db dummyd_5182d;
db dummyd_5182e; // 516d:015e
db dummyd_5182f; // 516d:015f
db dummyd_51830;
db dummyd_51831;
db dummyd_51832;
db dummyd_51833; // 5183:0003
db dummyd_51834;
db byte_5fe15; // 5183:0005
db dummyd_51836;
db dummyd_51837; // 5183:0007
db dummyd_51838;
db dummyd_51839;
db dummyd_5183a[2];
db dummyd_5183c[32]; // 5183:000c
db dummyd_5185c[32]; // 5183:002c
db dummyd_5187c[32]; // 5183:004c
db dummyd_5189c; // 5183:006c
db dummyd_5189d; // 5183:006d
db dummyd_5189e; // 5183:006e
db dummyd_5189f; // 5183:006f
db dummyd_518a0; // 5183:0070
db dummyd_518a1;
db dummyd_518a2; // 5183:0072
db dummyd_518a3;
db dummyd_518a4; // 5183:0074
db dummyd_518a5;
db dummyd_518a6; // 5183:0076
db dummyd_518a7;
db dummyd_518a8;
db dummyd_518a9;
db dummyd_518aa; // 5183:007a
db dummyd_518ab;
db dummyd_518ac; // 5183:007c
db dummyd_518ad;
db dummyd_518ae; // 5183:007e
db dummyd_518af; // 5183:007f
db dummyd_518b0; // 518b:0000
db dummyd_518b1; // 518b:0001
db dummyd_518b2; // 518b:0002
db dummyd_518b3; // 518b:0003
db dummyd_518b4; // 518b:0004
db byte_5fe95; // 518b:0005
db dummyd_518b6[32]; // 518b:0006
db dummyd_518d6[32]; // 518b:0026
db dummyd_518f6[32]; // 518b:0046
db dummyd_51916[32]; // 518b:0066
db dummyd_51936[2];
db dummyd_51938[32]; // 518b:0088
db dummyd_51958[32]; // 518b:00a8
db dummyd_51978[32]; // 518b:00c8
db dummyd_51998[32]; // 518b:00e8
db dummyd_519b8[32]; // 518b:0108
db dummyd_519d8[32]; // 518b:0128
db dummyd_519f8[32]; // 518b:0148
db dummyd_51a18[32]; // 518b:0168
db dummyd_51a38[32]; // 518b:0188
db dummyd_51a58[32]; // 518b:01a8
db dummyd_51a78[32]; // 518b:01c8
db dummyd_51a98[32]; // 518b:01e8
db dummyd_51ab8[32]; // 518b:0208
db dummyd_51ad8[32]; // 518b:0228
db dummyd_51af8[32]; // 518b:0248
db dummyd_51b18[32]; // 518b:0268
db dummyd_51b38[32]; // 518b:0288
db dummyd_51b58[32]; // 518b:02a8
db dummyd_51b78[32]; // 518b:02c8
db dummyd_51b98; // 518b:02e8
db dummyd_51b99; // 518b:02e9
db dummyd_51b9a;
db dummyd_51b9b;
db dummyd_51b9c;
db dummyd_51b9d; // 518b:02ed
db dummyd_51b9e; // 518b:02ee
db dummyd_51b9f; // 518b:02ef
db dummyd_51ba0;
db dummyd_51ba1;
db dummyd_51ba2; // 518b:02f2
db dummyd_51ba3; // 518b:02f3
db dummyd_51ba4; // 518b:02f4
db dummyd_51ba5; // 518b:02f5
db dummyd_51ba6;
db dummyd_51ba7;
db dummyd_51ba8; // 518b:02f8
db dummyd_51ba9; // 518b:02f9
db dummyd_51baa; // 518b:02fa
db dummyd_51bab; // 518b:02fb
db dummyd_51bac; // 518b:02fc
db dummyd_51bad;
db dummyd_51bae; // 518b:02fe
db dummyd_51baf; // 518b:02ff
db dummyd_51bb0; // 518b:0300
db byte_60191; // 518b:0301
db dummyd_51bb2[32]; // 518b:0302
db dummyd_51bd2[32]; // 518b:0322
db dummyd_51bf2[32]; // 518b:0342
db dummyd_51c12[32]; // 518b:0362
db dummyd_51c32;
db dummyd_51c33; // 518b:0383
db dummyd_51c34; // 518b:0384
db dummyd_51c35; // 518b:0385
db dummyd_51c36;
db dummyd_51c37;
db dummyd_51c38;
db dummyd_51c39; // 518b:0389
db dummyd_51c3a; // 518b:038a
db dummyd_51c3b; // 518b:038b
db dummyd_51c3c;
db dummyd_51c3d;
db dummyd_51c3e;
db dummyd_51c3f; // 518b:038f
db dummyd_51c40; // 518b:0390
db dummyd_51c41; // 518b:0391
db dummyd_51c42;
db dummyd_51c43;
db dummyd_51c44; // 518b:0394
db dummyd_51c45; // 518b:0395
db dummyd_51c46; // 518b:0396
db dummyd_51c47; // 518b:0397
db dummyd_51c48;
db dummyd_51c49;
db dummyd_51c4a; // 518b:039a
db dummyd_51c4b; // 518b:039b
db dummyd_51c4c; // 518b:039c
db dummyd_51c4d; // 518b:039d
db dummyd_51c4e; // 518b:039e
db dummyd_51c4f;
db dummyd_51c50; // 518b:03a0
db byte_60231; // 518b:03a1
db dummyd_51c52[32]; // 518b:03a2
db dummyd_51c72[32]; // 518b:03c2
db dummyd_51c92[32]; // 518b:03e2
db dummyd_51cb2[32]; // 518b:0402
db dummyd_51cd2[32]; // 518b:0422
db dummyd_51cf2[32]; // 518b:0442
db dummyd_51d12[32]; // 518b:0462
db dummyd_51d32[32]; // 518b:0482
db dummyd_51d52[32]; // 518b:04a2
db dummyd_51d72[32]; // 518b:04c2
db dummyd_51d92[32]; // 518b:04e2
db dummyd_51db2[32]; // 518b:0502
db dummyd_51dd2[32]; // 518b:0522
db dummyd_51df2[32]; // 518b:0542
db dummyd_51e12[32]; // 518b:0562
db dummyd_51e32[32]; // 518b:0582
db unk_60432; // 518b:05a2
db dummyd_51e53[32]; // 518b:05a3
db dummyd_51e73[32]; // 518b:05c3
db dummyd_51e93[32]; // 518b:05e3
db dummyd_51eb3[32]; // 518b:0603
db dummyd_51ed3[32]; // 518b:0623
db dummyd_51ef3[32]; // 518b:0643
db dummyd_51f13[32]; // 518b:0663
db dummyd_51f33[32]; // 518b:0683
db dummyd_51f53[32]; // 518b:06a3
db dummyd_51f73[32]; // 518b:06c3
db dummyd_51f93[32]; // 518b:06e3
db dummyd_51fb3[32]; // 518b:0703
db dummyd_51fd3[32]; // 518b:0723
db dummyd_51ff3[32]; // 518b:0743
db dummyd_52013[32]; // 518b:0763
db dummyd_52033[32]; // 518b:0783
db dummyd_52053[32]; // 518b:07a3
db dummyd_52073[32]; // 518b:07c3
db dummyd_52093[32]; // 518b:07e3
db dummyd_520b3[32]; // 518b:0803
db dummyd_520d3[32]; // 518b:0823
db dummyd_520f3[32]; // 518b:0843
db dummyd_52113; // 518b:0863
db dummyd_52114;
db dummyd_52115;
db dummyd_52116;
db dummyd_52117; // 518b:0867
db dummyd_52118; // 518b:0868
db dummyd_52119;
db dummyd_5211a;
db dummyd_5211b;
db dummyd_5211c;
db dummyd_5211d; // 518b:086d
db dummyd_5211e; // 518b:086e
db dummyd_5211f;
db dummyd_52120;
db dummyd_52121;
db dummyd_52122;
db dummyd_52123; // 518b:0873
db dummyd_52124;
db dummyd_52125;
db dummyd_52126;
db dummyd_52127;
db dummyd_52128; // 518b:0878
db dummyd_52129; // 518b:0879
db dummyd_5212a;
db dummyd_5212b;
db dummyd_5212c;
db dummyd_5212d;
db dummyd_5212e;
db dummyd_5212f;
db dummyd_52130;
db byte_60711; // 518b:0881
db dummyd_52132[32]; // 518b:0882
db dummyd_52152[32]; // 518b:08a2
db dummyd_52172[32]; // 518b:08c2
db dummyd_52192;
db dummyd_52193;
db dummyd_52194; // 518b:08e4
db dummyd_52195; // 518b:08e5
db dummyd_52196; // 518b:08e6
db dummyd_52197; // 518b:08e7
db dummyd_52198;
db dummyd_52199;
db dummyd_5219a; // 518b:08ea
db dummyd_5219b; // 518b:08eb
db dummyd_5219c; // 518b:08ec
db dummyd_5219d; // 518b:08ed
db dummyd_5219e;
db dummyd_5219f;
db dummyd_521a0; // 518b:08f0
db dummyd_521a1; // 518b:08f1
db dummyd_521a2; // 518b:08f2
db dummyd_521a3; // 518b:08f3
db dummyd_521a4;
db dummyd_521a5;
db dummyd_521a6; // 518b:08f6
db dummyd_521a7; // 518b:08f7
db dummyd_521a8; // 518b:08f8
db dummyd_521a9; // 518b:08f9
db dummyd_521aa;
db dummyd_521ab;
db dummyd_521ac; // 518b:08fc
db dummyd_521ad; // 518b:08fd
db dummyd_521ae; // 518b:08fe
db dummyd_521af;
db dummyd_521b0; // 518b:0900
db byte_60791; // 518b:0901
db dummyd_521b2[32]; // 518b:0902
db dummyd_521d2[32]; // 518b:0922
db dummyd_521f2[32]; // 518b:0942
db dummyd_52212[32]; // 518b:0962
db dummyd_52232[32]; // 518b:0982
db dummyd_52252[32]; // 518b:09a2
db dummyd_52272[32]; // 518b:09c2
db dummyd_52292[32]; // 518b:09e2
db dummyd_522b2[32]; // 518b:0a02
db dummyd_522d2[32]; // 518b:0a22
db dummyd_522f2[32]; // 518b:0a42
db dummyd_52312[32]; // 518b:0a62
db dummyd_52332[32]; // 518b:0a82
db dummyd_52352[32]; // 518b:0aa2
db dummyd_52372[32]; // 518b:0ac2
db dummyd_52392[32]; // 518b:0ae2
db dummyd_523b2[32]; // 518b:0b02
db dummyd_523d2[32]; // 518b:0b22
db dummyd_523f2[32]; // 518b:0b42
db dummyd_52412[32]; // 518b:0b62
db dummyd_52432[32]; // 518b:0b82
db dummyd_52452[32]; // 518b:0ba2
db dummyd_52472[32]; // 518b:0bc2
db dummyd_52492[32]; // 518b:0be2
db dummyd_524b2[32]; // 518b:0c02
db dummyd_524d2[32]; // 518b:0c22
db dummyd_524f2[32]; // 518b:0c42
db dummyd_52512[32]; // 518b:0c62
db dummyd_52532[32]; // 518b:0c82
db dummyd_52552[32]; // 518b:0ca2
db dummyd_52572[32]; // 518b:0cc2
db dummyd_52592[32]; // 518b:0ce2
db dummyd_525b2[32]; // 518b:0d02
db dummyd_525d2[32]; // 518b:0d22
db dummyd_525f2[32]; // 518b:0d42
db dummyd_52612[32]; // 518b:0d62
db dummyd_52632[32]; // 518b:0d82
db dummyd_52652[32]; // 518b:0da2
db dummyd_52672[32]; // 518b:0dc2
db dummyd_52692[32]; // 518b:0de2
db dummyd_526b2[32]; // 518b:0e02
db unk_60cb2; // 518b:0e22
db dummyd_526d3[32]; // 518b:0e23
db dummyd_526f3[32]; // 518b:0e43
db dummyd_52713[32]; // 518b:0e63
db dummyd_52733[32]; // 518b:0e83
db dummyd_52753[32]; // 518b:0ea3
db dummyd_52773[32]; // 518b:0ec3
db dummyd_52793[32]; // 518b:0ee3
db dummyd_527b3[32]; // 518b:0f03
db dummyd_527d3[32]; // 518b:0f23
db dummyd_527f3[32]; // 518b:0f43
db dummyd_52813[32]; // 518b:0f63
db dummyd_52833[32]; // 518b:0f83
db dummyd_52853[32]; // 518b:0fa3
db dummyd_52873[32]; // 518b:0fc3
db dummyd_52893[32]; // 518b:0fe3
db dummyd_528b3[32]; // 518b:1003
db dummyd_528d3[32]; // 518b:1023
db dummyd_528f3[32]; // 518b:1043
db dummyd_52913[32]; // 518b:1063
db dummyd_52933[32]; // 518b:1083
db dummyd_52953[32]; // 518b:10a3
db dummyd_52973[32]; // 518b:10c3
db dummyd_52993[32]; // 518b:10e3
db dummyd_529b3[32]; // 518b:1103
db dummyd_529d3[32]; // 518b:1123
db dummyd_529f3[32]; // 518b:1143
db dummyd_52a13[32]; // 518b:1163
db dummyd_52a33[32]; // 518b:1183
db dummyd_52a53[32]; // 518b:11a3
db dummyd_52a73[32]; // 518b:11c3
db dummyd_52a93[32]; // 518b:11e3
db dummyd_52ab3[32]; // 518b:1203
db dummyd_52ad3[32]; // 518b:1223
db dummyd_52af3[32]; // 518b:1243
db dummyd_52b13[32]; // 518b:1263
db dummyd_52b33[32]; // 518b:1283
db dummyd_52b53[32]; // 518b:12a3
db dummyd_52b73[32]; // 518b:12c3
db dummyd_52b93[32]; // 518b:12e3
db dummyd_52bb3[32]; // 518b:1303
db dummyd_52bd3[32]; // 518b:1323
db dummyd_52bf3[32]; // 518b:1343
db dummyd_52c13[32]; // 518b:1363
db dummyd_52c33[32]; // 518b:1383
db dummyd_52c53[32]; // 518b:13a3
db dummyd_52c73[32]; // 518b:13c3
db dummyd_52c93[32]; // 518b:13e3
db dummyd_52cb3[32]; // 518b:1403
db dummyd_52cd3[32]; // 518b:1423
db dummyd_52cf3[32]; // 518b:1443
db dummyd_52d13[32]; // 518b:1463
db dummyd_52d33[32]; // 518b:1483
db dummyd_52d53[32]; // 518b:14a3
db dummyd_52d73[32]; // 518b:14c3
db dummyd_52d93[32]; // 518b:14e3
db dummyd_52db3[32]; // 518b:1503
db dummyd_52dd3[32]; // 518b:1523
db dummyd_52df3[32]; // 518b:1543
db dummyd_52e13[32]; // 518b:1563
db dummyd_52e33[32]; // 518b:1583
db dummyd_52e53[32]; // 518b:15a3
db dummyd_52e73[32]; // 518b:15c3
db dummyd_52e93[32]; // 518b:15e3
db dummyd_52eb3[32]; // 518b:1603
db dummyd_52ed3[32]; // 518b:1623
db dummyd_52ef3[32]; // 518b:1643
db dummyd_52f13[32]; // 518b:1663
db dummyd_52f33[32]; // 518b:1683
db dummyd_52f53[32]; // 518b:16a3
db dummyd_52f73[32]; // 518b:16c3
db dummyd_52f93[32]; // 518b:16e3
db dummyd_52fb3[32]; // 518b:1703
db dummyd_52fd3[32]; // 518b:1723
db dummyd_52ff3[32]; // 518b:1743
db dummyd_53013[32]; // 518b:1763
db dummyd_53033[32]; // 518b:1783
db dummyd_53053[32]; // 518b:17a3
db dummyd_53073[32]; // 518b:17c3
db dummyd_53093[32]; // 518b:17e3
db dummyd_530b3[32]; // 518b:1803
db dummyd_530d3[32]; // 518b:1823
db dummyd_530f3[32]; // 518b:1843
db dummyd_53113[32]; // 518b:1863
db dummyd_53133[32]; // 518b:1883
db dummyd_53153[32]; // 518b:18a3
db dummyd_53173[32]; // 518b:18c3
db dummyd_53193[32]; // 518b:18e3
db dummyd_531b3[32]; // 518b:1903
db dummyd_531d3[32]; // 518b:1923
db dummyd_531f3[32]; // 518b:1943
db dummyd_53213[32]; // 518b:1963
db dummyd_53233[32]; // 518b:1983
db dummyd_53253[32]; // 518b:19a3
db dummyd_53273[32]; // 518b:19c3
db dummyd_53293[32]; // 518b:19e3
db dummyd_532b3[32]; // 518b:1a03
db dummyd_532d3[32]; // 518b:1a23
db dummyd_532f3[32]; // 518b:1a43
db dummyd_53313[32]; // 518b:1a63
db dummyd_53333[32]; // 518b:1a83
db dummyd_53353[32]; // 518b:1aa3
db dummyd_53373[32]; // 518b:1ac3
db dummyd_53393[32]; // 518b:1ae3
db dummyd_533b3[32]; // 518b:1b03
db dummyd_533d3[32]; // 518b:1b23
db dummyd_533f3[32]; // 518b:1b43
db dummyd_53413[32]; // 518b:1b63
db dummyd_53433[32]; // 518b:1b83
db dummyd_53453[32]; // 518b:1ba3
db dummyd_53473[32]; // 518b:1bc3
db dummyd_53493[32]; // 518b:1be3
db dummyd_534b3[32]; // 518b:1c03
db dummyd_534d3[32]; // 518b:1c23
db dummyd_534f3[32]; // 518b:1c43
db dummyd_53513[32]; // 518b:1c63
db dummyd_53533[32]; // 518b:1c83
db dummyd_53553; // 518b:1ca3
db dummyd_53554; // 518b:1ca4
db dummyd_53555; // 518b:1ca5
db dummyd_53556;
db dummyd_53557; // 518b:1ca7
db dummyd_53558; // 518b:1ca8
db dummyd_53559; // 518b:1ca9
db dummyd_5355a;
db dummyd_5355b;
db dummyd_5355c; // 518b:1cac
db dummyd_5355d; // 518b:1cad
db dummyd_5355e;
db dummyd_5355f;
db dummyd_53560[32]; // 5356:0000
db dummyd_53580[32]; // 5356:0020
db dummyd_535a0[32]; // 5356:0040
db dummyd_535c0[32]; // 5356:0060
db dummyd_535e0[32]; // 5356:0080
db dummyd_53600[32]; // 5356:00a0
db dummyd_53620[32]; // 5356:00c0
db dummyd_53640[32]; // 5356:00e0
db dummyd_53660[32]; // 5356:0100
db dummyd_53680[32]; // 5356:0120
db dummyd_536a0[32]; // 5356:0140
db dummyd_536c0[32]; // 5356:0160
db dummyd_536e0[32]; // 5356:0180
db dummyd_53700[32]; // 5356:01a0
db dummyd_53720[32]; // 5356:01c0
db dummyd_53740[32]; // 5356:01e0
db dummyd_53760[32]; // 5376:0000
db dummyd_53780[32]; // 5376:0020
db dummyd_537a0[32]; // 5376:0040
db dummyd_537c0[32]; // 5376:0060
db dummyd_537e0[32]; // 5376:0080
db dummyd_53800[32]; // 5376:00a0
db dummyd_53820[32]; // 5376:00c0
db dummyd_53840[32]; // 5376:00e0
db dummyd_53860[32]; // 5376:0100
db dummyd_53880[32]; // 5376:0120
db dummyd_538a0[32]; // 5376:0140
db dummyd_538c0[32]; // 5376:0160
db dummyd_538e0[32]; // 5376:0180
db dummyd_53900[32]; // 5376:01a0
db dummyd_53920[32]; // 5376:01c0
db dummyd_53940[32]; // 5376:01e0
db dummyd_53960[32]; // 5376:0200
db dummyd_53980[32]; // 5376:0220
db dummyd_539a0[32]; // 5376:0240
db dummyd_539c0[32]; // 5376:0260
db dummyd_539e0[32]; // 5376:0280
db dummyd_53a00[32]; // 5376:02a0
db dummyd_53a20[32]; // 5376:02c0
db dummyd_53a40[32]; // 5376:02e0
db dummyd_53a60[32]; // 5376:0300
db dummyd_53a80[32]; // 5376:0320
db dummyd_53aa0[32]; // 5376:0340
db dummyd_53ac0[32]; // 5376:0360
db dummyd_53ae0[32]; // 5376:0380
db dummyd_53b00[32]; // 5376:03a0
db dummyd_53b20[32]; // 5376:03c0
db dummyd_53b40[32]; // 5376:03e0
db dummyd_53b60[32]; // 5376:0400
db dummyd_53b80[32]; // 5376:0420
db dummyd_53ba0[32]; // 5376:0440
db dummyd_53bc0[32]; // 5376:0460
db dummyd_53be0[32]; // 5376:0480
db dummyd_53c00[32]; // 5376:04a0
db dummyd_53c20[32]; // 5376:04c0
db dummyd_53c40[32]; // 5376:04e0
db dummyd_53c60[32]; // 5376:0500
db dummyd_53c80[32]; // 5376:0520
db dummyd_53ca0[32]; // 5376:0540
db dummyd_53cc0[32]; // 5376:0560
db dummyd_53ce0[32]; // 5376:0580
db dummyd_53d00[32]; // 5376:05a0
db dummyd_53d20[32]; // 5376:05c0
db dummyd_53d40[32]; // 5376:05e0
db dummyd_53d60[32]; // 5376:0600
db dummyd_53d80[32]; // 5376:0620
db dummyd_53da0[32]; // 5376:0640
db dummyd_53dc0[32]; // 5376:0660
db dummyd_53de0[32]; // 5376:0680
db dummyd_53e00[32]; // 5376:06a0
db dummyd_53e20[32]; // 5376:06c0
db dummyd_53e40[32]; // 5376:06e0
db dummyd_53e60[32]; // 5376:0700
db dummyd_53e80[32]; // 5376:0720
db dummyd_53ea0[32]; // 5376:0740
db dummyd_53ec0[32]; // 5376:0760
db dummyd_53ee0[32]; // 5376:0780
db dummyd_53f00[32]; // 5376:07a0
db dummyd_53f20[32]; // 5376:07c0
db dummyd_53f40[32]; // 5376:07e0
db dummyd_53f60[32]; // 5376:0800
db dummyd_53f80[32]; // 5376:0820
db dummyd_53fa0[32]; // 5376:0840
db dummyd_53fc0[32]; // 5376:0860
db dummyd_53fe0[32]; // 5376:0880
db dummyd_54000[32]; // 5376:08a0
db dummyd_54020[32]; // 5376:08c0
db dummyd_54040[32]; // 5376:08e0
db dummyd_54060[32]; // 5376:0900
db dummyd_54080[32]; // 5376:0920
db dummyd_540a0[32]; // 5376:0940
db dummyd_540c0[32]; // 5376:0960
db dummyd_540e0[32]; // 5376:0980
db dummyd_54100[32]; // 5376:09a0
db dummyd_54120[32]; // 5376:09c0
db dummyd_54140[32]; // 5376:09e0
db dummyd_54160[32]; // 5376:0a00
db dummyd_54180[32]; // 5376:0a20
db dummyd_541a0[32]; // 5376:0a40
db dummyd_541c0[32]; // 5376:0a60
db dummyd_541e0[32]; // 5376:0a80
db dummyd_54200[32]; // 5376:0aa0
db dummyd_54220[32]; // 5376:0ac0
db dummyd_54240[32]; // 5376:0ae0
db dummyd_54260[32]; // 5376:0b00
db dummyd_54280[32]; // 5376:0b20
db dummyd_542a0[32]; // 5376:0b40
db dummyd_542c0[32]; // 5376:0b60
db dummyd_542e0[32]; // 5376:0b80
db dummyd_54300[32]; // 5376:0ba0
db dummyd_54320[32]; // 5376:0bc0
db dummyd_54340[32]; // 5376:0be0
db dummyd_54360[32]; // 5376:0c00
db dummyd_54380[32]; // 5376:0c20
db dummyd_543a0[32]; // 5376:0c40
db dummyd_543c0[32]; // 5376:0c60
db dummyd_543e0[32]; // 5376:0c80
db dummyd_54400[32]; // 5376:0ca0
db dummyd_54420[32]; // 5376:0cc0
db dummyd_54440[32]; // 5376:0ce0
db dummyd_54460[32]; // 5376:0d00
db dummyd_54480[32]; // 5376:0d20
db dummyd_544a0[32]; // 5376:0d40
db dummyd_544c0[32]; // 5376:0d60
db dummyd_544e0[32]; // 5376:0d80
db dummyd_54500[32]; // 5376:0da0
db dummyd_54520[32]; // 5376:0dc0
db dummyd_54540[32]; // 5376:0de0
db dummyd_54560[32]; // 5376:0e00
db dummyd_54580[32]; // 5376:0e20
db dummyd_545a0[32]; // 5376:0e40
db dummyd_545c0[32]; // 5376:0e60
db dummyd_545e0[32]; // 5376:0e80
db dummyd_54600[32]; // 5376:0ea0
db dummyd_54620[32]; // 5376:0ec0
db dummyd_54640[32]; // 5376:0ee0
db dummyd_54660[32]; // 5376:0f00
db dummyd_54680[32]; // 5376:0f20
db dummyd_546a0[32]; // 5376:0f40
db dummyd_546c0[32]; // 5376:0f60
db dummyd_546e0[32]; // 5376:0f80
db dummyd_54700[32]; // 5376:0fa0
db dummyd_54720[32]; // 5376:0fc0
db dummyd_54740[32]; // 5376:0fe0
db dummyd_54760[32]; // 5376:1000
db dummyd_54780[32]; // 5376:1020
db dummyd_547a0[32]; // 5376:1040
db dummyd_547c0[32]; // 5376:1060
db dummyd_547e0[32]; // 5376:1080
db dummyd_54800[32]; // 5376:10a0
db dummyd_54820[32]; // 5376:10c0
db dummyd_54840[32]; // 5376:10e0
db dummyd_54860[32]; // 5376:1100
db dummyd_54880[32]; // 5376:1120
db dummyd_548a0[32]; // 5376:1140
db dummyd_548c0[32]; // 5376:1160
db dummyd_548e0[32]; // 5376:1180
db dummyd_54900[32]; // 5376:11a0
db dummyd_54920[32]; // 5376:11c0
db dummyd_54940[32]; // 5376:11e0
db dummyd_54960[32]; // 5376:1200
db dummyd_54980[32]; // 5376:1220
db dummyd_549a0[32]; // 549a:0000
db dummyd_549c0[32]; // 549a:0020
db dummyd_549e0[32]; // 549a:0040
db dummyd_54a00[32]; // 549a:0060
db dummyd_54a20[32]; // 549a:0080
db dummyd_54a40[32]; // 549a:00a0
db dummyd_54a60[32]; // 549a:00c0
db dummyd_54a80[32]; // 549a:00e0
db dummyd_54aa0[32]; // 549a:0100
db dummyd_54ac0[32]; // 549a:0120
db dummyd_54ae0[32]; // 549a:0140
db dummyd_54b00[32]; // 549a:0160
db dummyd_54b20[32]; // 549a:0180
db dummyd_54b40[32]; // 549a:01a0
db dummyd_54b60[32]; // 549a:01c0
db dummyd_54b80[32]; // 549a:01e0
db dummyd_54ba0[32]; // 549a:0200
db dummyd_54bc0[32]; // 549a:0220
db dummyd_54be0[32]; // 549a:0240
db dummyd_54c00[32]; // 549a:0260
db dummyd_54c20[32]; // 549a:0280
db dummyd_54c40[32]; // 549a:02a0
db dummyd_54c60[32]; // 549a:02c0
db dummyd_54c80[32]; // 549a:02e0
db dummyd_54ca0[32]; // 549a:0300
db dummyd_54cc0[32]; // 549a:0320
db dummyd_54ce0[32]; // 549a:0340
db dummyd_54d00[32]; // 549a:0360
db dummyd_54d20[32]; // 549a:0380
db dummyd_54d40[32]; // 549a:03a0
db dummyd_54d60[32]; // 549a:03c0
db dummyd_54d80[32]; // 549a:03e0
db dummyd_54da0[32]; // 549a:0400
db dummyd_54dc0[32]; // 549a:0420
db dummyd_54de0[32]; // 549a:0440
db dummyd_54e00[32]; // 549a:0460
db dummyd_54e20[32]; // 549a:0480
db dummyd_54e40[32]; // 549a:04a0
db dummyd_54e60[32]; // 549a:04c0
db dummyd_54e80[32]; // 549a:04e0
db dummyd_54ea0[32]; // 549a:0500
db dummyd_54ec0[32]; // 549a:0520
db dummyd_54ee0[32]; // 549a:0540
db dummyd_54f00[32]; // 549a:0560
db dummyd_54f20[32]; // 549a:0580
db dummyd_54f40[32]; // 549a:05a0
db dummyd_54f60[32]; // 549a:05c0
db dummyd_54f80[32]; // 549a:05e0
db dummyd_54fa0[32]; // 549a:0600
db dummyd_54fc0[32]; // 549a:0620
db dummyd_54fe0[32]; // 549a:0640
db dummyd_55000[32]; // 549a:0660
db dummyd_55020[32]; // 549a:0680
db dummyd_55040[32]; // 549a:06a0
db dummyd_55060[32]; // 549a:06c0
db dummyd_55080[32]; // 549a:06e0
db dummyd_550a0[32]; // 549a:0700
db dummyd_550c0[32]; // 549a:0720
db dummyd_550e0[32]; // 549a:0740
db dummyd_55100[32]; // 549a:0760
db dummyd_55120[32]; // 549a:0780
db dummyd_55140[32]; // 549a:07a0
db dummyd_55160[32]; // 549a:07c0
db dummyd_55180[32]; // 549a:07e0
db dummyd_551a0[32]; // 549a:0800
db dummyd_551c0[32]; // 549a:0820
db dummyd_551e0[32]; // 549a:0840
db dummyd_55200[32]; // 549a:0860
db dummyd_55220[32]; // 549a:0880
db dummyd_55240[32]; // 549a:08a0
db dummyd_55260[32]; // 549a:08c0
db dummyd_55280[32]; // 549a:08e0
db dummyd_552a0[32]; // 549a:0900
db dummyd_552c0[32]; // 549a:0920
db dummyd_552e0[32]; // 549a:0940
db dummyd_55300[32]; // 549a:0960
db dummyd_55320[32]; // 549a:0980
db dummyd_55340[32]; // 549a:09a0
db dummyd_55360[32]; // 549a:09c0
db dummyd_55380[32]; // 549a:09e0
db dummyd_553a0[32]; // 549a:0a00
db dummyd_553c0[32]; // 549a:0a20
db dummyd_553e0[32]; // 549a:0a40
db dummyd_55400[32]; // 549a:0a60
db dummyd_55420[32]; // 549a:0a80
db dummyd_55440[32]; // 549a:0aa0
db dummyd_55460[32]; // 549a:0ac0
db dummyd_55480[32]; // 549a:0ae0
db dummyd_554a0[32]; // 549a:0b00
db dummyd_554c0[32]; // 549a:0b20
db dummyd_554e0[32]; // 549a:0b40
db dummyd_55500[32]; // 549a:0b60
db dummyd_55520[32]; // 549a:0b80
db dummyd_55540[32]; // 549a:0ba0
db dummyd_55560[32]; // 549a:0bc0
db dummyd_55580[32]; // 549a:0be0
db dummyd_555a0[32]; // 549a:0c00
db dummyd_555c0[32]; // 549a:0c20
db dummyd_555e0[32]; // 549a:0c40
db dummyd_55600[32]; // 549a:0c60
db dummyd_55620[32]; // 549a:0c80
db dummyd_55640[32]; // 549a:0ca0
db dummyd_55660[32]; // 549a:0cc0
db dummyd_55680[32]; // 549a:0ce0
db dummyd_556a0[32]; // 549a:0d00
db dummyd_556c0[32]; // 549a:0d20
db dummyd_556e0[32]; // 549a:0d40
db dummyd_55700[32]; // 549a:0d60
db dummyd_55720[32]; // 549a:0d80
db dummyd_55740[32]; // 549a:0da0
db dummyd_55760[32]; // 549a:0dc0
db dummyd_55780[32]; // 549a:0de0
db dummyd_557a0[32]; // 549a:0e00
db dummyd_557c0[32]; // 549a:0e20
db dummyd_557e0[32]; // 549a:0e40
db dummyd_55800[32]; // 549a:0e60
db dummyd_55820[32]; // 549a:0e80
db dummyd_55840[32]; // 549a:0ea0
db dummyd_55860[32]; // 549a:0ec0
db dummyd_55880[32]; // 549a:0ee0
db dummyd_558a0[32]; // 549a:0f00
db dummyd_558c0[32]; // 549a:0f20
db dummyd_558e0[32]; // 549a:0f40
db dummyd_55900[32]; // 549a:0f60
db dummyd_55920[32]; // 549a:0f80
db dummyd_55940[32]; // 549a:0fa0
db dummyd_55960[32]; // 549a:0fc0
db dummyd_55980[32]; // 549a:0fe0
db dummyd_559a0[32]; // 549a:1000
db dummyd_559c0[32]; // 549a:1020
db dummyd_559e0[32]; // 549a:1040
db dummyd_55a00[32]; // 549a:1060
db dummyd_55a20[32]; // 549a:1080
db dummyd_55a40[32]; // 549a:10a0
db dummyd_55a60[32]; // 549a:10c0
db dummyd_55a80[32]; // 549a:10e0
db dummyd_55aa0[32]; // 549a:1100
db dummyd_55ac0[32]; // 549a:1120
db dummyd_55ae0[32]; // 549a:1140
db dummyd_55b00[32]; // 549a:1160
db dummyd_55b20[32]; // 549a:1180
db dummyd_55b40[32]; // 549a:11a0
db dummyd_55b60[32]; // 549a:11c0
db dummyd_55b80[32]; // 549a:11e0
db dummyd_55ba0[32]; // 549a:1200
db dummyd_55bc0[32]; // 549a:1220
db dummyd_55be0[32]; // 549a:1240
db dummyd_55c00[32]; // 549a:1260
db dummyd_55c20[32]; // 549a:1280
db dummyd_55c40[32]; // 549a:12a0
db dummyd_55c60[32]; // 549a:12c0
db dummyd_55c80[32]; // 549a:12e0
db dummyd_55ca0[32]; // 549a:1300
db dummyd_55cc0[32]; // 549a:1320
db dummyd_55ce0[32]; // 549a:1340
db dummyd_55d00[32]; // 549a:1360
db dummyd_55d20[32]; // 549a:1380
db dummyd_55d40[32]; // 549a:13a0
db dummyd_55d60[32]; // 549a:13c0
db dummyd_55d80[32]; // 549a:13e0
db dummyd_55da0[32]; // 549a:1400
db dummyd_55dc0[32]; // 549a:1420
db dummyd_55de0[32]; // 549a:1440
db dummyd_55e00[32]; // 549a:1460
db dummyd_55e20[32]; // 549a:1480
db dummyd_55e40[32]; // 549a:14a0
db dummyd_55e60[32]; // 549a:14c0
db dummyd_55e80[32]; // 549a:14e0
db dummyd_55ea0[32]; // 549a:1500
db dummyd_55ec0[32]; // 549a:1520
db dummyd_55ee0[32]; // 549a:1540
db dummyd_55f00[32]; // 549a:1560
db dummyd_55f20[32]; // 549a:1580
db dummyd_55f40[32]; // 549a:15a0
db dummyd_55f60[32]; // 549a:15c0
db dummyd_55f80[32]; // 549a:15e0
db dummyd_55fa0[32]; // 549a:1600
db dummyd_55fc0[32]; // 549a:1620
db dummyd_55fe0[32]; // 549a:1640
db dummyd_56000[32]; // 549a:1660
db dummyd_56020[32]; // 549a:1680
db dummyd_56040[32]; // 549a:16a0
db dummyd_56060[32]; // 549a:16c0
db dummyd_56080[32]; // 549a:16e0
db dummyd_560a0[32]; // 549a:1700
db dummyd_560c0[32]; // 549a:1720
db dummyd_560e0[32]; // 549a:1740
db dummyd_56100[32]; // 549a:1760
db dummyd_56120[32]; // 549a:1780
db dummyd_56140[32]; // 549a:17a0
db dummyd_56160[32]; // 549a:17c0
db dummyd_56180[32]; // 549a:17e0
db dummyd_561a0[32]; // 549a:1800
db dummyd_561c0[32]; // 549a:1820
db dummyd_561e0[32]; // 549a:1840
db dummyd_56200[32]; // 549a:1860
db dummyd_56220[32]; // 549a:1880
db dummyd_56240[32]; // 549a:18a0
db dummyd_56260[32]; // 549a:18c0
db dummyd_56280[32]; // 549a:18e0
db dummyd_562a0[32]; // 549a:1900
db dummyd_562c0[32]; // 549a:1920
db dummyd_562e0[32]; // 549a:1940
db dummyd_56300[32]; // 549a:1960
db dummyd_56320[32]; // 549a:1980
db dummyd_56340[32]; // 549a:19a0
db dummyd_56360[32]; // 549a:19c0
db dummyd_56380[32]; // 549a:19e0
db dummyd_563a0[32]; // 549a:1a00
db dummyd_563c0[32]; // 549a:1a20
db dummyd_563e0[32]; // 549a:1a40
db dummyd_56400[32]; // 549a:1a60
db dummyd_56420[32]; // 549a:1a80
db dummyd_56440[32]; // 549a:1aa0
db dummyd_56460[32]; // 549a:1ac0
db dummyd_56480[32]; // 549a:1ae0
db dummyd_564a0[32]; // 549a:1b00
db dummyd_564c0[32]; // 549a:1b20
db dummyd_564e0[32]; // 549a:1b40
db dummyd_56500[32]; // 549a:1b60
db dummyd_56520[32]; // 549a:1b80
db dummyd_56540; // 549a:1ba0
db dummyd_56541; // 549a:1ba1
db dummyd_56542;
db dummyd_56543; // 549a:1ba3
db dummyd_56544; // 549a:1ba4
db dummyd_56545;
db dummyd_56546;
db dummyd_56547;
db dummyd_56548; // 549a:1ba8
db dummyd_56549;
db dummyd_5654a;
db dummyd_5654b;
db dummyd_5654c; // 549a:1bac
db dummyd_5654d;
db dummyd_5654e;
db dummyd_5654f;
db dummyd_56550;
db dummyd_56551;
db dummyd_56552;
db dummyd_56553;
db dummyd_56554;
db dummyd_56555;
db dummyd_56556[2];
db dummyd_56558[32]; // 549a:1bb8
db dummyd_56578[32]; // 549a:1bd8
db dummyd_56598[32]; // 549a:1bf8
db dummyd_565b8[32]; // 549a:1c18
db dummyd_565d8[32]; // 549a:1c38
db dummyd_565f8[32]; // 549a:1c58
db dummyd_56618[32]; // 549a:1c78
db dummyd_56638[32]; // 549a:1c98
db dummyd_56658[32]; // 549a:1cb8
db dummyd_56678[32]; // 549a:1cd8
db dummyd_56698[32]; // 549a:1cf8
db dummyd_566b8[32]; // 549a:1d18
db dummyd_566d8[32]; // 549a:1d38
db dummyd_566f8[32]; // 549a:1d58
db dummyd_56718[32]; // 549a:1d78
db dummyd_56738[32]; // 549a:1d98
db dummyd_56758[32]; // 549a:1db8
db dummyd_56778[32]; // 549a:1dd8
db dummyd_56798[32]; // 549a:1df8
db dummyd_567b8[32]; // 549a:1e18
db dummyd_567d8[32]; // 549a:1e38
db dummyd_567f8[32]; // 549a:1e58
db dummyd_56818[32]; // 549a:1e78
db dummyd_56838[32]; // 549a:1e98
db dummyd_56858[32]; // 549a:1eb8
db dummyd_56878[32]; // 549a:1ed8
db dummyd_56898[32]; // 549a:1ef8
db dummyd_568b8[32]; // 549a:1f18
db dummyd_568d8[32]; // 549a:1f38
db dummyd_568f8[32]; // 549a:1f58
db dummyd_56918[32]; // 549a:1f78
db dummyd_56938[32]; // 549a:1f98
db dummyd_56958[32]; // 549a:1fb8
db dummyd_56978[32]; // 549a:1fd8
db dummyd_56998[32]; // 549a:1ff8
db dummyd_569b8[32]; // 549a:2018
db dummyd_569d8[32]; // 549a:2038
db dummyd_569f8[32]; // 549a:2058
db dummyd_56a18[32]; // 549a:2078
db dummyd_56a38[32]; // 549a:2098
db dummyd_56a58[32]; // 549a:20b8
db dummyd_56a78[32]; // 549a:20d8
db dummyd_56a98[32]; // 549a:20f8
db dummyd_56ab8[32]; // 549a:2118
db dummyd_56ad8[32]; // 549a:2138
db dummyd_56af8[32]; // 549a:2158
db dummyd_56b18[32]; // 549a:2178
db dummyd_56b38[32]; // 549a:2198
db dummyd_56b58[32]; // 549a:21b8
db dummyd_56b78[32]; // 549a:21d8
db dummyd_56b98[32]; // 549a:21f8
db dummyd_56bb8[32]; // 549a:2218
db dummyd_56bd8[32]; // 549a:2238
db dummyd_56bf8[32]; // 549a:2258
db dummyd_56c18[32]; // 549a:2278
db dummyd_56c38[32]; // 549a:2298
db dummyd_56c58[32]; // 549a:22b8
db dummyd_56c78[32]; // 549a:22d8
db dummyd_56c98[32]; // 549a:22f8
db dummyd_56cb8[32]; // 549a:2318
db dummyd_56cd8[32]; // 549a:2338
db dummyd_56cf8[32]; // 549a:2358
db dummyd_56d18[32]; // 549a:2378
db dummyd_56d38[32]; // 549a:2398
db dummyd_56d58[32]; // 549a:23b8
db dummyd_56d78[32]; // 549a:23d8
db dummyd_56d98[32]; // 549a:23f8
db dummyd_56db8[32]; // 549a:2418
db dummyd_56dd8[32]; // 549a:2438
db dummyd_56df8[32]; // 549a:2458
db dummyd_56e18[32]; // 549a:2478
db dummyd_56e38[32]; // 549a:2498
db dummyd_56e58[32]; // 549a:24b8
db dummyd_56e78[32]; // 549a:24d8
db dummyd_56e98[32]; // 549a:24f8
db dummyd_56eb8[32]; // 549a:2518
db dummyd_56ed8[32]; // 549a:2538
db dummyd_56ef8[32]; // 549a:2558
db dummyd_56f18[32]; // 549a:2578
db dummyd_56f38[32]; // 549a:2598
db dummyd_56f58[32]; // 549a:25b8
db dummyd_56f78[32]; // 549a:25d8
db dummyd_56f98[32]; // 549a:25f8
db dummyd_56fb8[32]; // 549a:2618
db dummyd_56fd8[32]; // 549a:2638
db dummyd_56ff8[32]; // 549a:2658
db dummyd_57018[32]; // 549a:2678
db dummyd_57038[32]; // 549a:2698
db dummyd_57058[32]; // 549a:26b8
db dummyd_57078[32]; // 549a:26d8
db dummyd_57098[32]; // 549a:26f8
db dummyd_570b8[32]; // 549a:2718
db dummyd_570d8[32]; // 549a:2738
db dummyd_570f8[32]; // 549a:2758
db dummyd_57118[32]; // 549a:2778
db dummyd_57138[32]; // 549a:2798
db dummyd_57158[32]; // 549a:27b8
db dummyd_57178[32]; // 549a:27d8
db dummyd_57198[32]; // 549a:27f8
db dummyd_571b8[32]; // 549a:2818
db dummyd_571d8[32]; // 549a:2838
db dummyd_571f8[32]; // 549a:2858
db dummyd_57218[32]; // 549a:2878
db dummyd_57238[32]; // 549a:2898
db dummyd_57258[32]; // 549a:28b8
db dummyd_57278[32]; // 549a:28d8
db dummyd_57298[32]; // 549a:28f8
db dummyd_572b8[32]; // 549a:2918
db dummyd_572d8[32]; // 549a:2938
db dummyd_572f8[32]; // 549a:2958
db dummyd_57318[32]; // 549a:2978
db dummyd_57338[32]; // 549a:2998
db dummyd_57358[32]; // 549a:29b8
db dummyd_57378[32]; // 549a:29d8
db dummyd_57398[32]; // 549a:29f8
db dummyd_573b8[32]; // 549a:2a18
db dummyd_573d8[32]; // 549a:2a38
db dummyd_573f8[32]; // 549a:2a58
db dummyd_57418[32]; // 549a:2a78
db dummyd_57438[32]; // 549a:2a98
db dummyd_57458[32]; // 549a:2ab8
db dummyd_57478[32]; // 549a:2ad8
db dummyd_57498[32]; // 549a:2af8
db dummyd_574b8[32]; // 549a:2b18
db dummyd_574d8[32]; // 549a:2b38
db dummyd_574f8[32]; // 549a:2b58
db dummyd_57518[32]; // 549a:2b78
db dummyd_57538[32]; // 549a:2b98
db dummyd_57558[32]; // 549a:2bb8
db dummyd_57578[32]; // 549a:2bd8
db dummyd_57598[32]; // 549a:2bf8
db dummyd_575b8[32]; // 549a:2c18
db dummyd_575d8[32]; // 549a:2c38
db dummyd_575f8[32]; // 549a:2c58
db dummyd_57618[32]; // 549a:2c78
db dummyd_57638[32]; // 549a:2c98
db dummyd_57658[32]; // 549a:2cb8
db dummyd_57678[32]; // 549a:2cd8
db dummyd_57698[32]; // 549a:2cf8
db dummyd_576b8[32]; // 549a:2d18
db dummyd_576d8[32]; // 549a:2d38
db dummyd_576f8[32]; // 549a:2d58
db dummyd_57718[32]; // 549a:2d78
db dummyd_57738[32]; // 549a:2d98
db dummyd_57758[32]; // 549a:2db8
db dummyd_57778[32]; // 549a:2dd8
db dummyd_57798[32]; // 549a:2df8
db dummyd_577b8[32]; // 549a:2e18
db dummyd_577d8[32]; // 549a:2e38
db dummyd_577f8[32]; // 549a:2e58
db dummyd_57818[32]; // 549a:2e78
db dummyd_57838[32]; // 549a:2e98
db dummyd_57858[32]; // 549a:2eb8
db dummyd_57878[32]; // 549a:2ed8
db dummyd_57898[32]; // 549a:2ef8
db dummyd_578b8[32]; // 549a:2f18
db dummyd_578d8[32]; // 549a:2f38
db dummyd_578f8[32]; // 549a:2f58
db dummyd_57918[32]; // 549a:2f78
db dummyd_57938[32]; // 549a:2f98
db dummyd_57958[32]; // 549a:2fb8
db dummyd_57978[32]; // 549a:2fd8
db dummyd_57998[32]; // 549a:2ff8
db dummyd_579b8[32]; // 549a:3018
db dummyd_579d8[32]; // 549a:3038
db dummyd_579f8[32]; // 549a:3058
db dummyd_57a18[32]; // 549a:3078
db dummyd_57a38[32]; // 549a:3098
db dummyd_57a58[32]; // 549a:30b8
db dummyd_57a78[32]; // 549a:30d8
db dummyd_57a98[32]; // 549a:30f8
db dummyd_57ab8[32]; // 549a:3118
db dummyd_57ad8[32]; // 549a:3138
db dummyd_57af8[32]; // 549a:3158
db dummyd_57b18[32]; // 549a:3178
db dummyd_57b38[32]; // 549a:3198
db dummyd_57b58[32]; // 549a:31b8
db dummyd_57b78[32]; // 549a:31d8
db dummyd_57b98[32]; // 549a:31f8
db dummyd_57bb8[32]; // 549a:3218
db dummyd_57bd8[32]; // 549a:3238
db dummyd_57bf8[32]; // 549a:3258
db dummyd_57c18[32]; // 549a:3278
db dummyd_57c38[32]; // 549a:3298
db dummyd_57c58[32]; // 549a:32b8
db dummyd_57c78[32]; // 549a:32d8
db dummyd_57c98[32]; // 549a:32f8
db dummyd_57cb8[32]; // 549a:3318
db dummyd_57cd8[32]; // 549a:3338
db dummyd_57cf8[32]; // 549a:3358
db dummyd_57d18[32]; // 549a:3378
db dummyd_57d38[32]; // 549a:3398
db dummyd_57d58[32]; // 549a:33b8
db dummyd_57d78[32]; // 549a:33d8
db dummyd_57d98[32]; // 549a:33f8
db dummyd_57db8[32]; // 549a:3418
db dummyd_57dd8[32]; // 549a:3438
db dummyd_57df8[32]; // 549a:3458
db dummyd_57e18[32]; // 549a:3478
db dummyd_57e38[32]; // 549a:3498
db dummyd_57e58[32]; // 549a:34b8
db dummyd_57e78[32]; // 549a:34d8
db dummyd_57e98[32]; // 549a:34f8
db dummyd_57eb8[32]; // 549a:3518
db dummyd_57ed8[32]; // 549a:3538
db dummyd_57ef8[32]; // 549a:3558
db dummyd_57f18[32]; // 549a:3578
db dummyd_57f38[32]; // 549a:3598
db dummyd_57f58[32]; // 549a:35b8
db dummyd_57f78[32]; // 549a:35d8
db dummyd_57f98[32]; // 549a:35f8
db dummyd_57fb8[32]; // 549a:3618
db dummyd_57fd8[32]; // 549a:3638
db dummyd_57ff8[32]; // 549a:3658
db dummyd_58018[32]; // 549a:3678
db dummyd_58038[32]; // 549a:3698
db dummyd_58058[32]; // 549a:36b8
db dummyd_58078[32]; // 549a:36d8
db dummyd_58098[32]; // 549a:36f8
db dummyd_580b8[32]; // 549a:3718
db dummyd_580d8[32]; // 549a:3738
db dummyd_580f8[32]; // 549a:3758
db dummyd_58118[32]; // 549a:3778
db dummyd_58138[32]; // 549a:3798
db dummyd_58158[32]; // 549a:37b8
db dummyd_58178[32]; // 549a:37d8
db dummyd_58198;
db dummyd_58199;
db dummyd_5819a[2];
db dummyd_5819c[32]; // 549a:37fc
db dummyd_581bc[32]; // 549a:381c
db dummyd_581dc[32]; // 549a:383c
db dummyd_581fc[32]; // 549a:385c
db dummyd_5821c[32]; // 549a:387c
db dummyd_5823c[32]; // 549a:389c
db dummyd_5825c[32]; // 549a:38bc
db dummyd_5827c[32]; // 549a:38dc
db dummyd_5829c[32]; // 549a:38fc
db dummyd_582bc[32]; // 549a:391c
db dummyd_582dc[32]; // 549a:393c
db dummyd_582fc[32]; // 549a:395c
db dummyd_5831c[32]; // 549a:397c
db dummyd_5833c[32]; // 549a:399c
db dummyd_5835c[32]; // 549a:39bc
db dummyd_5837c[32]; // 549a:39dc
db dummyd_5839c[32]; // 549a:39fc
db dummyd_583bc[32]; // 549a:3a1c
db dummyd_583dc[32]; // 549a:3a3c
db dummyd_583fc[32]; // 549a:3a5c
db dummyd_5841c[32]; // 549a:3a7c
db dummyd_5843c[32]; // 549a:3a9c
db dummyd_5845c[32]; // 549a:3abc
db dummyd_5847c[32]; // 549a:3adc
db dummyd_5849c[32]; // 549a:3afc
db dummyd_584bc[32]; // 549a:3b1c
db dummyd_584dc[32]; // 549a:3b3c
db dummyd_584fc[32]; // 549a:3b5c
db dummyd_5851c[32]; // 549a:3b7c
db dummyd_5853c[32]; // 549a:3b9c
db dummyd_5855c[32]; // 549a:3bbc
db dummyd_5857c[32]; // 549a:3bdc
db dummyd_5859c[32]; // 549a:3bfc
db dummyd_585bc[32]; // 549a:3c1c
db dummyd_585dc[32]; // 549a:3c3c
db dummyd_585fc[32]; // 549a:3c5c
db dummyd_5861c[32]; // 549a:3c7c
db dummyd_5863c[32]; // 549a:3c9c
db dummyd_5865c[32]; // 549a:3cbc
db dummyd_5867c[32]; // 549a:3cdc
db dummyd_5869c[32]; // 549a:3cfc
db dummyd_586bc[32]; // 549a:3d1c
db dummyd_586dc[32]; // 549a:3d3c
db dummyd_586fc[32]; // 549a:3d5c
db dummyd_5871c[32]; // 549a:3d7c
db dummyd_5873c[32]; // 549a:3d9c
db dummyd_5875c[32]; // 549a:3dbc
db dummyd_5877c[32]; // 549a:3ddc
db dummyd_5879c[32]; // 549a:3dfc
db dummyd_587bc[32]; // 549a:3e1c
db dummyd_587dc[32]; // 549a:3e3c
db dummyd_587fc[32]; // 549a:3e5c
db dummyd_5881c[32]; // 549a:3e7c
db dummyd_5883c[32]; // 549a:3e9c
db dummyd_5885c[32]; // 549a:3ebc
db dummyd_5887c[32]; // 549a:3edc
db dummyd_5889c[32]; // 549a:3efc
db dummyd_588bc[32]; // 549a:3f1c
db dummyd_588dc[32]; // 549a:3f3c
db dummyd_588fc[32]; // 549a:3f5c
db dummyd_5891c[32]; // 549a:3f7c
db dummyd_5893c[32]; // 549a:3f9c
db dummyd_5895c[32]; // 549a:3fbc
db dummyd_5897c[32]; // 549a:3fdc
db dummyd_5899c[32]; // 549a:3ffc
db dummyd_589bc[32]; // 549a:401c
db dummyd_589dc[32]; // 549a:403c
db dummyd_589fc[32]; // 549a:405c
db dummyd_58a1c[32]; // 549a:407c
db dummyd_58a3c[32]; // 549a:409c
db dummyd_58a5c[32]; // 549a:40bc
db dummyd_58a7c[32]; // 549a:40dc
db dummyd_58a9c[32]; // 549a:40fc
db dummyd_58abc[32]; // 549a:411c
db dummyd_58adc[32]; // 549a:413c
db dummyd_58afc[32]; // 549a:415c
db dummyd_58b1c[32]; // 549a:417c
db dummyd_58b3c[32]; // 549a:419c
db dummyd_58b5c[32]; // 549a:41bc
db dummyd_58b7c[32]; // 549a:41dc
db dummyd_58b9c[32]; // 549a:41fc
db dummyd_58bbc[32]; // 549a:421c
db dummyd_58bdc[32]; // 549a:423c
db dummyd_58bfc[32]; // 549a:425c
db dummyd_58c1c[32]; // 549a:427c
db dummyd_58c3c[32]; // 549a:429c
db dummyd_58c5c[32]; // 549a:42bc
db dummyd_58c7c[32]; // 549a:42dc
db dummyd_58c9c[32]; // 549a:42fc
db dummyd_58cbc[32]; // 549a:431c
db dummyd_58cdc[32]; // 549a:433c
db dummyd_58cfc[32]; // 549a:435c
db dummyd_58d1c[32]; // 549a:437c
db dummyd_58d3c[32]; // 549a:439c
db dummyd_58d5c[32]; // 549a:43bc
db dummyd_58d7c[32]; // 549a:43dc
db dummyd_58d9c[32]; // 549a:43fc
db dummyd_58dbc[32]; // 549a:441c
db dummyd_58ddc[32]; // 549a:443c
db dummyd_58dfc[32]; // 549a:445c
db dummyd_58e1c[32]; // 549a:447c
db dummyd_58e3c[32]; // 549a:449c
db dummyd_58e5c[32]; // 549a:44bc
db dummyd_58e7c[32]; // 549a:44dc
db dummyd_58e9c[32]; // 549a:44fc
db dummyd_58ebc[32]; // 549a:451c
db dummyd_58edc[32]; // 549a:453c
db dummyd_58efc[32]; // 549a:455c
db dummyd_58f1c[32]; // 549a:457c
db dummyd_58f3c[32]; // 549a:459c
db dummyd_58f5c[32]; // 549a:45bc
db dummyd_58f7c[32]; // 549a:45dc
db dummyd_58f9c[32]; // 549a:45fc
db dummyd_58fbc[32]; // 549a:461c
db dummyd_58fdc[32]; // 549a:463c
db dummyd_58ffc[32]; // 549a:465c
db dummyd_5901c[32]; // 549a:467c
db dummyd_5903c[32]; // 549a:469c
db dummyd_5905c[32]; // 549a:46bc
db dummyd_5907c[32]; // 549a:46dc
db dummyd_5909c[32]; // 549a:46fc
db dummyd_590bc[32]; // 549a:471c
db dummyd_590dc[32]; // 549a:473c
db dummyd_590fc[32]; // 549a:475c
db dummyd_5911c[32]; // 549a:477c
db dummyd_5913c[32]; // 549a:479c
db dummyd_5915c[32]; // 549a:47bc
db dummyd_5917c[32]; // 549a:47dc
db dummyd_5919c[32]; // 549a:47fc
db dummyd_591bc[32]; // 549a:481c
db dummyd_591dc[32]; // 549a:483c
db dummyd_591fc[32]; // 549a:485c
db dummyd_5921c[32]; // 549a:487c
db dummyd_5923c[32]; // 549a:489c
db dummyd_5925c[32]; // 549a:48bc
db dummyd_5927c[32]; // 549a:48dc
db dummyd_5929c[32]; // 549a:48fc
db dummyd_592bc[32]; // 549a:491c
db dummyd_592dc[32]; // 549a:493c
db dummyd_592fc[32]; // 549a:495c
db dummyd_5931c[32]; // 549a:497c
db dummyd_5933c[32]; // 549a:499c
db dummyd_5935c[32]; // 549a:49bc
db dummyd_5937c[32]; // 549a:49dc
db dummyd_5939c[32]; // 549a:49fc
db dummyd_593bc[32]; // 549a:4a1c
db dummyd_593dc[32]; // 549a:4a3c
db dummyd_593fc[32]; // 549a:4a5c
db dummyd_5941c[32]; // 549a:4a7c
db dummyd_5943c[32]; // 549a:4a9c
db dummyd_5945c[32]; // 549a:4abc
db dummyd_5947c[32]; // 549a:4adc
db dummyd_5949c[32]; // 549a:4afc
db dummyd_594bc[32]; // 549a:4b1c
db dummyd_594dc[32]; // 549a:4b3c
db dummyd_594fc[32]; // 549a:4b5c
db dummyd_5951c[32]; // 549a:4b7c
db dummyd_5953c[32]; // 549a:4b9c
db dummyd_5955c[32]; // 549a:4bbc
db dummyd_5957c[32]; // 549a:4bdc
db dummyd_5959c[32]; // 549a:4bfc
db dummyd_595bc[32]; // 549a:4c1c
db dummyd_595dc[32]; // 549a:4c3c
db dummyd_595fc[32]; // 549a:4c5c
db dummyd_5961c[32]; // 549a:4c7c
db dummyd_5963c[32]; // 549a:4c9c
db dummyd_5965c[32]; // 549a:4cbc
db dummyd_5967c[32]; // 549a:4cdc
db dummyd_5969c[32]; // 549a:4cfc
db dummyd_596bc[32]; // 549a:4d1c
db dummyd_596dc[32]; // 549a:4d3c
db dummyd_596fc[32]; // 549a:4d5c
db dummyd_5971c[32]; // 549a:4d7c
db dummyd_5973c[32]; // 549a:4d9c
db dummyd_5975c[32]; // 549a:4dbc
db dummyd_5977c[32]; // 549a:4ddc
db dummyd_5979c[32]; // 549a:4dfc
db dummyd_597bc[32]; // 549a:4e1c
db dummyd_597dc[32]; // 549a:4e3c
db dummyd_597fc[32]; // 549a:4e5c
db dummyd_5981c[32]; // 549a:4e7c
db dummyd_5983c[32]; // 549a:4e9c
db dummyd_5985c[32]; // 549a:4ebc
db dummyd_5987c[32]; // 549a:4edc
db dummyd_5989c[32]; // 549a:4efc
db dummyd_598bc[32]; // 549a:4f1c
db dummyd_598dc[32]; // 549a:4f3c
db dummyd_598fc[32]; // 549a:4f5c
db dummyd_5991c[32]; // 549a:4f7c
db dummyd_5993c[32]; // 549a:4f9c
db dummyd_5995c[32]; // 549a:4fbc
db dummyd_5997c[32]; // 549a:4fdc
db dummyd_5999c[32]; // 549a:4ffc
db dummyd_599bc[32]; // 549a:501c
db dummyd_599dc[32]; // 549a:503c
db dummyd_599fc[32]; // 549a:505c
db dummyd_59a1c[32]; // 549a:507c
db dummyd_59a3c[32]; // 549a:509c
db dummyd_59a5c[32]; // 549a:50bc
db dummyd_59a7c[32]; // 549a:50dc
db dummyd_59a9c[32]; // 549a:50fc
db dummyd_59abc[32]; // 549a:511c
db dummyd_59adc[32]; // 549a:513c
db dummyd_59afc[32]; // 549a:515c
db dummyd_59b1c[32]; // 549a:517c
db dummyd_59b3c[32]; // 549a:519c
db dummyd_59b5c[32]; // 549a:51bc
db dummyd_59b7c[32]; // 549a:51dc
db dummyd_59b9c[32]; // 549a:51fc
db dummyd_59bbc[32]; // 549a:521c
db dummyd_59bdc[32]; // 549a:523c
db dummyd_59bfc[32]; // 549a:525c
db dummyd_59c1c[32]; // 549a:527c
db dummyd_59c3c[32]; // 549a:529c
db dummyd_59c5c[32]; // 549a:52bc
db dummyd_59c7c[32]; // 549a:52dc
db dummyd_59c9c[32]; // 549a:52fc
db dummyd_59cbc[32]; // 549a:531c
db dummyd_59cdc[32]; // 549a:533c
db dummyd_59cfc[32]; // 549a:535c
db dummyd_59d1c[32]; // 549a:537c
db dummyd_59d3c[32]; // 549a:539c
db dummyd_59d5c[32]; // 549a:53bc
db dummyd_59d7c[32]; // 549a:53dc
db dummyd_59d9c[32]; // 549a:53fc
db dummyd_59dbc[32]; // 549a:541c
db dummyd_59ddc[32]; // 549a:543c
db dummyd_59dfc[32]; // 549a:545c
db dummyd_59e1c[32]; // 549a:547c
db dummyd_59e3c[32]; // 549a:549c
db dummyd_59e5c; // 549a:54bc
db dummyd_59e5d; // 549a:54bd
db dummyd_59e5e; // 549a:54be
db dummyd_59e5f; // 549a:54bf
db dummyd_59e60;
db dummyd_59e61;
db dummyd_59e62;
db dummyd_59e63;
db dummyd_59e64;
db dummyd_59e65;
db dummyd_59e66[2];
db dummyd_59e68[32]; // 549a:54c8
db dummyd_59e88[32]; // 549a:54e8
db dummyd_59ea8[32]; // 549a:5508
db dummyd_59ec8[32]; // 549a:5528
db dummyd_59ee8[32]; // 549a:5548
db dummyd_59f08[32]; // 549a:5568
db dummyd_59f28[32]; // 549a:5588
db dummyd_59f48[32]; // 549a:55a8
db dummyd_59f68[32]; // 549a:55c8
db dummyd_59f88[32]; // 549a:55e8
db dummyd_59fa8[32]; // 549a:5608
db dummyd_59fc8[32]; // 549a:5628
db dummyd_59fe8[32]; // 549a:5648
db dummyd_5a008[32]; // 549a:5668
db dummyd_5a028[32]; // 549a:5688
db dummyd_5a048[32]; // 549a:56a8
db dummyd_5a068[32]; // 549a:56c8
db dummyd_5a088[32]; // 549a:56e8
db dummyd_5a0a8[32]; // 549a:5708
db dummyd_5a0c8[32]; // 549a:5728
db dummyd_5a0e8[32]; // 549a:5748
db dummyd_5a108[32]; // 549a:5768
db dummyd_5a128[32]; // 549a:5788
db dummyd_5a148[32]; // 549a:57a8
db dummyd_5a168[32]; // 549a:57c8
db dummyd_5a188[32]; // 549a:57e8
db dummyd_5a1a8[32]; // 549a:5808
db dummyd_5a1c8[32]; // 549a:5828
db dummyd_5a1e8[32]; // 549a:5848
db dummyd_5a208[32]; // 549a:5868
db dummyd_5a228[32]; // 549a:5888
db dummyd_5a248[32]; // 549a:58a8
db dummyd_5a268[32]; // 549a:58c8
db dummyd_5a288[32]; // 549a:58e8
db dummyd_5a2a8[32]; // 549a:5908
db dummyd_5a2c8[32]; // 549a:5928
db dummyd_5a2e8[32]; // 549a:5948
db dummyd_5a308[32]; // 549a:5968
db dummyd_5a328[32]; // 549a:5988
db dummyd_5a348[32]; // 549a:59a8
db dummyd_5a368[32]; // 549a:59c8
db dummyd_5a388[32]; // 549a:59e8
db dummyd_5a3a8[32]; // 549a:5a08
db dummyd_5a3c8[32]; // 549a:5a28
db dummyd_5a3e8[32]; // 549a:5a48
db dummyd_5a408[32]; // 549a:5a68
db dummyd_5a428[32]; // 549a:5a88
db dummyd_5a448[32]; // 549a:5aa8
db dummyd_5a468[32]; // 549a:5ac8
db dummyd_5a488[32]; // 549a:5ae8
db dummyd_5a4a8[32]; // 549a:5b08
db dummyd_5a4c8[32]; // 549a:5b28
db dummyd_5a4e8[32]; // 549a:5b48
db dummyd_5a508[32]; // 549a:5b68
db dummyd_5a528[32]; // 549a:5b88
db dummyd_5a548[32]; // 549a:5ba8
db dummyd_5a568[32]; // 549a:5bc8
db dummyd_5a588[32]; // 549a:5be8
db dummyd_5a5a8[32]; // 549a:5c08
db dummyd_5a5c8[32]; // 549a:5c28
db dummyd_5a5e8; // 549a:5c48
db dummyd_5a5e9; // 549a:5c49
db dummyd_5a5ea; // 549a:5c4a
db dummyd_5a5eb; // 549a:5c4b
db dummyd_5a5ec; // 549a:5c4c
db dummyd_5a5ed; // 549a:5c4d
db dummyd_5a5ee; // 549a:5c4e
db dummyd_5a5ef; // 549a:5c4f
db dummyd_5a5f0; // 549a:5c50
db dummyd_5a5f1; // 549a:5c51
db dummyd_5a5f2;
db dummyd_5a5f3;
db dummyd_5a5f4;
db dummyd_5a5f5;
db dummyd_5a5f6;
db dummyd_5a5f7; // 549a:5c57
db dummyd_5a5f8;
db dummyd_5a5f9; // 549a:5c59
db dummyd_5a5fa; // 549a:5c5a
db dummyd_5a5fb; // 549a:5c5b
db dummyd_5a5fc; // 549a:5c5c
db dummyd_5a5fd; // 549a:5c5d
db dummyd_5a5fe; // 549a:5c5e
db dummyd_5a5ff; // 549a:5c5f
db dummyd_5a600; // 5a60:0000
db dummyd_5a601; // 5a60:0001
db dummyd_5a602; // 5a60:0002
db byte_68be3; // 5a60:0003
db dummyd_5a604; // 5a60:0004
db dummyd_5a605; // 5a60:0005
db dummyd_5a606;
db dummyd_5a607; // 5a60:0007
db dummyd_5a608;
db dummyd_5a609;
db dummyd_5a60a;
db dummyd_5a60b;
db dummyd_5a60c;
db dummyd_5a60d;
db dummyd_5a60e[2];
db dummyd_5a610[32]; // 5a60:0010
db dummyd_5a630[32]; // 5a60:0030
db dummyd_5a650[32]; // 5a60:0050
db dummyd_5a670[32]; // 5a60:0070
db dummyd_5a690[32]; // 5a60:0090
db dummyd_5a6b0[32]; // 5a60:00b0
db dummyd_5a6d0[32]; // 5a60:00d0
db dummyd_5a6f0[32]; // 5a60:00f0
db dummyd_5a710[32]; // 5a60:0110
db dummyd_5a730[32]; // 5a60:0130
db dummyd_5a750[32]; // 5a60:0150
db dummyd_5a770[32]; // 5a60:0170
db dummyd_5a790[32]; // 5a60:0190
db dummyd_5a7b0[32]; // 5a60:01b0
db dummyd_5a7d0[32]; // 5a60:01d0
db dummyd_5a7f0[32]; // 5a60:01f0
db dummyd_5a810[32]; // 5a60:0210
db dummyd_5a830[32]; // 5a60:0230
db dummyd_5a850[32]; // 5a60:0250
db dummyd_5a870[32]; // 5a60:0270
db dummyd_5a890[32]; // 5a60:0290
db dummyd_5a8b0[32]; // 5a60:02b0
db dummyd_5a8d0[32]; // 5a60:02d0
db dummyd_5a8f0[32]; // 5a60:02f0
db dummyd_5a910[32]; // 5a60:0310
db dummyd_5a930[32]; // 5a60:0330
db dummyd_5a950[32]; // 5a60:0350
db dummyd_5a970[32]; // 5a60:0370
db dummyd_5a990[32]; // 5a60:0390
db dummyd_5a9b0[32]; // 5a60:03b0
db dummyd_5a9d0[32]; // 5a60:03d0
db dummyd_5a9f0[32]; // 5a60:03f0
db dummyd_5aa10[32]; // 5a60:0410
db dummyd_5aa30[32]; // 5a60:0430
db dummyd_5aa50[32]; // 5a60:0450
db dummyd_5aa70; // 5a60:0470
db dummyd_5aa71; // 5a60:0471
db dummyd_5aa72; // 5a60:0472
db dummyd_5aa73; // 5a60:0473
db dummyd_5aa74; // 5a60:0474
db dummyd_5aa75; // 5a60:0475
db dummyd_5aa76; // 5a60:0476
db dummyd_5aa77; // 5a60:0477
db dummyd_5aa78; // 5a60:0478
db dummyd_5aa79; // 5a60:0479
db dummyd_5aa7a; // 5a60:047a
db dummyd_5aa7b;
db dummyd_5aa7c;
db dummyd_5aa7d;
db dummyd_5aa7e[2];
db dummyd_5aa80[32]; // 5a60:0480
db dummyd_5aaa0[32]; // 5a60:04a0
db dummyd_5aac0[32]; // 5a60:04c0
db dummyd_5aae0[32]; // 5a60:04e0
db dummyd_5ab00[32]; // 5a60:0500
db dummyd_5ab20[32]; // 5a60:0520
db dummyd_5ab40[32]; // 5a60:0540
db dummyd_5ab60[32]; // 5a60:0560
db dummyd_5ab80[32]; // 5a60:0580
db dummyd_5aba0[32]; // 5a60:05a0
db dummyd_5abc0[32]; // 5a60:05c0
db dummyd_5abe0[32]; // 5a60:05e0
db dummyd_5ac00; // 5a60:0600
db dummyd_5ac01;
db dummyd_5ac02;
db dummyd_5ac03; // 5a60:0603
db dummyd_5ac04; // 5a60:0604
db dummyd_5ac05;
db dummyd_5ac06;
db dummyd_5ac07; // 5a60:0607
db dummyd_5ac08; // 5a60:0608
db dummyd_5ac09;
db dummyd_5ac0a[2];
db dummyd_5ac0c[32]; // 5a60:060c
db dummyd_5ac2c[32]; // 5a60:062c
db dummyd_5ac4c[32]; // 5a60:064c
db dummyd_5ac6c[32]; // 5a60:066c
db dummyd_5ac8c[32]; // 5a60:068c
db dummyd_5acac[32]; // 5a60:06ac
db dummyd_5accc[32]; // 5a60:06cc
db dummyd_5acec[32]; // 5a60:06ec
db dummyd_5ad0c[32]; // 5a60:070c
db dummyd_5ad2c[32]; // 5a60:072c
db dummyd_5ad4c[32]; // 5a60:074c
db dummyd_5ad6c[32]; // 5a60:076c
db dummyd_5ad8c[32]; // 5a60:078c
db dummyd_5adac[32]; // 5a60:07ac
db dummyd_5adcc[32]; // 5a60:07cc
db dummyd_5adec[32]; // 5a60:07ec
db dummyd_5ae0c[32]; // 5a60:080c
db dummyd_5ae2c[32]; // 5a60:082c
db dummyd_5ae4c[32]; // 5a60:084c
db dummyd_5ae6c[32]; // 5a60:086c
db dummyd_5ae8c[32]; // 5a60:088c
db dummyd_5aeac[32]; // 5a60:08ac
db dummyd_5aecc[32]; // 5a60:08cc
db dummyd_5aeec[32]; // 5a60:08ec
db dummyd_5af0c[32]; // 5a60:090c
db dummyd_5af2c[32]; // 5a60:092c
db dummyd_5af4c[32]; // 5a60:094c
db dummyd_5af6c[32]; // 5a60:096c
db dummyd_5af8c[32]; // 5a60:098c
db dummyd_5afac[32]; // 5a60:09ac
db dummyd_5afcc[32]; // 5a60:09cc
db dummyd_5afec[32]; // 5a60:09ec
db dummyd_5b00c[32]; // 5a60:0a0c
db dummyd_5b02c[32]; // 5a60:0a2c
db dummyd_5b04c[32]; // 5a60:0a4c
db dummyd_5b06c[32]; // 5a60:0a6c
db dummyd_5b08c[32]; // 5a60:0a8c
db dummyd_5b0ac[32]; // 5a60:0aac
db dummyd_5b0cc[32]; // 5a60:0acc
db dummyd_5b0ec[32]; // 5a60:0aec
db dummyd_5b10c[32]; // 5a60:0b0c
db dummyd_5b12c[32]; // 5a60:0b2c
db dummyd_5b14c[32]; // 5a60:0b4c
db dummyd_5b16c[32]; // 5a60:0b6c
db dummyd_5b18c[32]; // 5a60:0b8c
db dummyd_5b1ac[32]; // 5a60:0bac
db dummyd_5b1cc[32]; // 5a60:0bcc
db dummyd_5b1ec[32]; // 5a60:0bec
db dummyd_5b20c[32]; // 5a60:0c0c
db dummyd_5b22c[32]; // 5a60:0c2c
db dummyd_5b24c[32]; // 5a60:0c4c
db dummyd_5b26c[32]; // 5a60:0c6c
db dummyd_5b28c[32]; // 5a60:0c8c
db dummyd_5b2ac[32]; // 5a60:0cac
db dummyd_5b2cc[32]; // 5a60:0ccc
db dummyd_5b2ec;
db dummyd_5b2ed;
db dummyd_5b2ee;
db dummyd_5b2ef;
db dummyd_5b2f0; // 5a60:0cf0
db dummyd_5b2f1; // 5a60:0cf1
db dummyd_5b2f2; // 5a60:0cf2
db dummyd_5b2f3;
db dummyd_5b2f4;
db dummyd_5b2f5;
db dummyd_5b2f6;
db dummyd_5b2f7;
db dummyd_5b2f8;
db dummyd_5b2f9;
db dummyd_5b2fa; // 5a60:0cfa
db dummyd_5b2fb;
db dummyd_5b2fc;
db dummyd_5b2fd;
db dummyd_5b2fe;
db dummyd_5b2ff;
db dummyd_5b300; // 5a60:0d00
db dummyd_5b301; // 5a60:0d01
db unk_698e2; // 5a60:0d02
db dummyd_5b303[32]; // 5a60:0d03
db dummyd_5b323[32]; // 5a60:0d23
db dummyd_5b343[32]; // 5a60:0d43
db dummyd_5b363[32]; // 5a60:0d63
db dummyd_5b383[32]; // 5a60:0d83
db dummyd_5b3a3[32]; // 5a60:0da3
db dummyd_5b3c3[32]; // 5a60:0dc3
db dummyd_5b3e3[32]; // 5a60:0de3
db dummyd_5b403[32]; // 5a60:0e03
db dummyd_5b423[32]; // 5a60:0e23
db dummyd_5b443[32]; // 5a60:0e43
db dummyd_5b463[32]; // 5a60:0e63
db dummyd_5b483[32]; // 5a60:0e83
db dummyd_5b4a3[32]; // 5a60:0ea3
db dummyd_5b4c3[32]; // 5a60:0ec3
db dummyd_5b4e3[32]; // 5a60:0ee3
db dummyd_5b503[32]; // 5a60:0f03
db dummyd_5b523[32]; // 5a60:0f23
db dummyd_5b543[32]; // 5a60:0f43
db dummyd_5b563[32]; // 5a60:0f63
db dummyd_5b583[32]; // 5a60:0f83
db dummyd_5b5a3[32]; // 5a60:0fa3
db dummyd_5b5c3[32]; // 5a60:0fc3
db dummyd_5b5e3[32]; // 5a60:0fe3
db dummyd_5b603[32]; // 5a60:1003
db dummyd_5b623[32]; // 5a60:1023
db dummyd_5b643[32]; // 5a60:1043
db dummyd_5b663[32]; // 5a60:1063
db dummyd_5b683[32]; // 5a60:1083
db dummyd_5b6a3[32]; // 5a60:10a3
db dummyd_5b6c3[32]; // 5a60:10c3
db dummyd_5b6e3[32]; // 5a60:10e3
db dummyd_5b703[32]; // 5a60:1103
db dummyd_5b723[32]; // 5a60:1123
db dummyd_5b743[32]; // 5a60:1143
db dummyd_5b763[32]; // 5a60:1163
db dummyd_5b783[32]; // 5a60:1183
db dummyd_5b7a3[32]; // 5a60:11a3
db dummyd_5b7c3[32]; // 5a60:11c3
db dummyd_5b7e3[32]; // 5a60:11e3
db dummyd_5b803[32]; // 5a60:1203
db dummyd_5b823[32]; // 5a60:1223
db dummyd_5b843[32]; // 5a60:1243
db dummyd_5b863[32]; // 5a60:1263
db dummyd_5b883[32]; // 5a60:1283
db dummyd_5b8a3[32]; // 5a60:12a3
db dummyd_5b8c3[32]; // 5a60:12c3
db dummyd_5b8e3[32]; // 5a60:12e3
db dummyd_5b903[32]; // 5a60:1303
db dummyd_5b923[32]; // 5a60:1323
db dummyd_5b943[32]; // 5a60:1343
db dummyd_5b963[32]; // 5a60:1363
db dummyd_5b983[32]; // 5a60:1383
db dummyd_5b9a3[32]; // 5a60:13a3
db dummyd_5b9c3[32]; // 5a60:13c3
db dummyd_5b9e3[32]; // 5a60:13e3
db dummyd_5ba03[32]; // 5a60:1403
db dummyd_5ba23[32]; // 5a60:1423
db dummyd_5ba43[32]; // 5a60:1443
db dummyd_5ba63[32]; // 5a60:1463
db dummyd_5ba83[32]; // 5a60:1483
db dummyd_5baa3[32]; // 5a60:14a3
db dummyd_5bac3[32]; // 5a60:14c3
db dummyd_5bae3[32]; // 5a60:14e3
db dummyd_5bb03[32]; // 5a60:1503
db dummyd_5bb23[32]; // 5a60:1523
db dummyd_5bb43[32]; // 5a60:1543
db dummyd_5bb63[32]; // 5a60:1563
db dummyd_5bb83[32]; // 5a60:1583
db dummyd_5bba3[32]; // 5a60:15a3
db dummyd_5bbc3[32]; // 5a60:15c3
db dummyd_5bbe3[32]; // 5a60:15e3
db dummyd_5bc03[32]; // 5a60:1603
db dummyd_5bc23[32]; // 5a60:1623
db dummyd_5bc43[32]; // 5a60:1643
db dummyd_5bc63[32]; // 5a60:1663
db dummyd_5bc83[32]; // 5a60:1683
db dummyd_5bca3[32]; // 5a60:16a3
db dummyd_5bcc3[32]; // 5a60:16c3
db dummyd_5bce3[32]; // 5a60:16e3
db dummyd_5bd03[32]; // 5a60:1703
db dummyd_5bd23[32]; // 5a60:1723
db dummyd_5bd43[32]; // 5a60:1743
db dummyd_5bd63[32]; // 5a60:1763
db dummyd_5bd83[32]; // 5a60:1783
db dummyd_5bda3[32]; // 5a60:17a3
db dummyd_5bdc3[32]; // 5a60:17c3
db dummyd_5bde3[32]; // 5a60:17e3
db dummyd_5be03[32]; // 5a60:1803
db dummyd_5be23[32]; // 5a60:1823
db dummyd_5be43[32]; // 5a60:1843
db dummyd_5be63[32]; // 5a60:1863
db dummyd_5be83[32]; // 5a60:1883
db dummyd_5bea3[32]; // 5a60:18a3
db dummyd_5bec3[32]; // 5a60:18c3
db dummyd_5bee3[32]; // 5a60:18e3
db dummyd_5bf03[32]; // 5a60:1903
db dummyd_5bf23[32]; // 5a60:1923
db dummyd_5bf43[32]; // 5a60:1943
db dummyd_5bf63[32]; // 5a60:1963
db dummyd_5bf83[32]; // 5a60:1983
db dummyd_5bfa3[32]; // 5a60:19a3
db dummyd_5bfc3[32]; // 5a60:19c3
db dummyd_5bfe3[32]; // 5a60:19e3
db dummyd_5c003[32]; // 5a60:1a03
db dummyd_5c023[32]; // 5a60:1a23
db dummyd_5c043[32]; // 5a60:1a43
db dummyd_5c063[32]; // 5a60:1a63
db dummyd_5c083[32]; // 5a60:1a83
db dummyd_5c0a3[32]; // 5a60:1aa3
db dummyd_5c0c3[32]; // 5a60:1ac3
db dummyd_5c0e3[32]; // 5a60:1ae3
db dummyd_5c103[32]; // 5a60:1b03
db dummyd_5c123[32]; // 5a60:1b23
db dummyd_5c143[32]; // 5a60:1b43
db dummyd_5c163[32]; // 5a60:1b63
db dummyd_5c183[32]; // 5a60:1b83
db dummyd_5c1a3[32]; // 5a60:1ba3
db dummyd_5c1c3[32]; // 5a60:1bc3
db dummyd_5c1e3[32]; // 5a60:1be3
db dummyd_5c203[32]; // 5a60:1c03
db dummyd_5c223[32]; // 5a60:1c23
db dummyd_5c243[32]; // 5a60:1c43
db dummyd_5c263[32]; // 5a60:1c63
db dummyd_5c283[32]; // 5a60:1c83
db dummyd_5c2a3[32]; // 5a60:1ca3
db dummyd_5c2c3[32]; // 5a60:1cc3
db dummyd_5c2e3[32]; // 5a60:1ce3
db dummyd_5c303[32]; // 5a60:1d03
db dummyd_5c323[32]; // 5a60:1d23
db dummyd_5c343[32]; // 5a60:1d43
db dummyd_5c363[32]; // 5a60:1d63
db dummyd_5c383[32]; // 5a60:1d83
db dummyd_5c3a3[32]; // 5a60:1da3
db dummyd_5c3c3[32]; // 5a60:1dc3
db dummyd_5c3e3[32]; // 5a60:1de3
db dummyd_5c403[32]; // 5a60:1e03
db dummyd_5c423[32]; // 5a60:1e23
db dummyd_5c443[32]; // 5a60:1e43
db dummyd_5c463[32]; // 5a60:1e63
db dummyd_5c483[32]; // 5a60:1e83
db dummyd_5c4a3[32]; // 5a60:1ea3
db dummyd_5c4c3[32]; // 5a60:1ec3
db dummyd_5c4e3[32]; // 5a60:1ee3
db dummyd_5c503[32]; // 5a60:1f03
db dummyd_5c523[32]; // 5a60:1f23
db dummyd_5c543[32]; // 5a60:1f43
db dummyd_5c563[32]; // 5a60:1f63
db dummyd_5c583[32]; // 5a60:1f83
db dummyd_5c5a3[32]; // 5a60:1fa3
db dummyd_5c5c3[32]; // 5a60:1fc3
db dummyd_5c5e3[32]; // 5a60:1fe3
db dummyd_5c603[32]; // 5a60:2003
db dummyd_5c623[32]; // 5a60:2023
db dummyd_5c643[32]; // 5a60:2043
db dummyd_5c663[32]; // 5a60:2063
db dummyd_5c683[32]; // 5a60:2083
db dummyd_5c6a3[32]; // 5a60:20a3
db dummyd_5c6c3[32]; // 5a60:20c3
db dummyd_5c6e3[32]; // 5a60:20e3
db dummyd_5c703[32]; // 5a60:2103
db dummyd_5c723[32]; // 5a60:2123
db dummyd_5c743[32]; // 5a60:2143
db dummyd_5c763[32]; // 5a60:2163
db dummyd_5c783[32]; // 5a60:2183
db dummyd_5c7a3[32]; // 5a60:21a3
db dummyd_5c7c3[32]; // 5a60:21c3
db dummyd_5c7e3[32]; // 5a60:21e3
db dummyd_5c803[32]; // 5a60:2203
db dummyd_5c823[32]; // 5a60:2223
db dummyd_5c843[32]; // 5a60:2243
db dummyd_5c863[32]; // 5a60:2263
db dummyd_5c883[32]; // 5a60:2283
db dummyd_5c8a3[32]; // 5a60:22a3
db dummyd_5c8c3[32]; // 5a60:22c3
db dummyd_5c8e3[32]; // 5a60:22e3
db dummyd_5c903[32]; // 5a60:2303
db dummyd_5c923[32]; // 5a60:2323
db dummyd_5c943[32]; // 5a60:2343
db dummyd_5c963[32]; // 5a60:2363
db dummyd_5c983[32]; // 5a60:2383
db dummyd_5c9a3[32]; // 5a60:23a3
db dummyd_5c9c3[32]; // 5a60:23c3
db dummyd_5c9e3[32]; // 5a60:23e3
db dummyd_5ca03;
db dummyd_5ca04;
db dummyd_5ca05;
db dummyd_5ca06;
db dummyd_5ca07;
db dummyd_5ca08;
db dummyd_5ca09;
db dummyd_5ca0a;
db dummyd_5ca0b;
db dummyd_5ca0c;
db dummyd_5ca0d;
db dummyd_5ca0e;
db dummyd_5ca0f;
db dummyd_5ca10;
db dummyd_5ca11;
db dummyd_5ca12;
db dummyd_5ca13;
db dummyd_5ca14;
db dummyd_5ca15;
db dummyd_5ca16;
db dummyd_5ca17;
db dummyd_5ca18;
db dummyd_5ca19;
db dummyd_5ca1a;
db dummyd_5ca1b;
db dummyd_5ca1c;
db dummyd_5ca1d;
db dummyd_5ca1e;
db dummyd_5ca1f;
db dummyd_5ca20[32]; // 5ca2:0000
db dummyd_5ca40[32]; // 5ca2:0020
db dummyd_5ca60[32]; // 5ca2:0040
db dummyd_5ca80[32]; // 5ca2:0060
db dummyd_5caa0[32]; // 5ca2:0080
db dummyd_5cac0[32]; // 5ca2:00a0
db dummyd_5cae0[32]; // 5ca2:00c0
db dummyd_5cb00[32]; // 5ca2:00e0
db dummyd_5cb20[32]; // 5ca2:0100
db dummyd_5cb40[32]; // 5ca2:0120
db dummyd_5cb60[32]; // 5ca2:0140
db dummyd_5cb80[32]; // 5ca2:0160
db dummyd_5cba0[32]; // 5ca2:0180
db dummyd_5cbc0[32]; // 5ca2:01a0
db dummyd_5cbe0[32]; // 5ca2:01c0
db dummyd_5cc00[32]; // 5ca2:01e0
db dummyd_5cc20[32]; // 5ca2:0200
db dummyd_5cc40[32]; // 5ca2:0220
db dummyd_5cc60[32]; // 5ca2:0240
db dummyd_5cc80[32]; // 5ca2:0260
db dummyd_5cca0[32]; // 5ca2:0280
db dummyd_5ccc0[32]; // 5ca2:02a0
db dummyd_5cce0[32]; // 5ca2:02c0
db dummyd_5cd00[32]; // 5ca2:02e0
db dummyd_5cd20[32]; // 5ca2:0300
db dummyd_5cd40[32]; // 5ca2:0320
db dummyd_5cd60[32]; // 5ca2:0340
db dummyd_5cd80[32]; // 5ca2:0360
db dummyd_5cda0[32]; // 5ca2:0380
db dummyd_5cdc0[32]; // 5ca2:03a0
db dummyd_5cde0[32]; // 5ca2:03c0
db dummyd_5ce00[32]; // 5ca2:03e0
db dummyd_5ce20[32]; // 5ca2:0400
db dummyd_5ce40[32]; // 5ca2:0420
db dummyd_5ce60[32]; // 5ca2:0440
db dummyd_5ce80[32]; // 5ca2:0460
db dummyd_5cea0[32]; // 5ca2:0480
db dummyd_5cec0[32]; // 5ca2:04a0
db dummyd_5cee0[32]; // 5ca2:04c0
db dummyd_5cf00[32]; // 5ca2:04e0
db dummyd_5cf20[32]; // 5ca2:0500
db dummyd_5cf40[32]; // 5ca2:0520
db dummyd_5cf60[32]; // 5ca2:0540
db dummyd_5cf80[32]; // 5ca2:0560
db dummyd_5cfa0[32]; // 5ca2:0580
db dummyd_5cfc0[32]; // 5ca2:05a0
db dummyd_5cfe0[32]; // 5ca2:05c0
db dummyd_5d000[32]; // 5ca2:05e0
db dummyd_5d020[32]; // 5ca2:0600
db dummyd_5d040[32]; // 5ca2:0620
db dummyd_5d060[32]; // 5ca2:0640
db dummyd_5d080[32]; // 5ca2:0660
db dummyd_5d0a0[32]; // 5ca2:0680
db dummyd_5d0c0[32]; // 5ca2:06a0
db dummyd_5d0e0[32]; // 5ca2:06c0
db dummyd_5d100[32]; // 5ca2:06e0
db dummyd_5d120[32]; // 5ca2:0700
db dummyd_5d140[32]; // 5ca2:0720
db dummyd_5d160[32]; // 5ca2:0740
db dummyd_5d180[32]; // 5ca2:0760
db dummyd_5d1a0[32]; // 5ca2:0780
db dummyd_5d1c0[32]; // 5ca2:07a0
db dummyd_5d1e0[32]; // 5ca2:07c0
db dummyd_5d200[32]; // 5ca2:07e0
db dummyd_5d220[32]; // 5ca2:0800
db dummyd_5d240[32]; // 5ca2:0820
db dummyd_5d260;
db dummyd_5d261;
db dummyd_5d262;
db dummyd_5d263;
db dummyd_5d264;
db dummyd_5d265;
db dummyd_5d266;
db dummyd_5d267;
db dummyd_5d268;
db dummyd_5d269;
db dummyd_5d26a;
db dummyd_5d26b;
db dummyd_5d26c;
db dummyd_5d26d;
db dummyd_5d26e;
db dummyd_5d26f;
dd off_6b850; // 5d27:0000
dw word_6b854; // 5d27:0004
db unk_6b856; // 5d27:0006
db dummyd_5d277; // 5d27:0007
dw word_6b858; // 5d27:0008
dw word_6b85a; // 5d27:000a
db byte_6b85c; // 5d27:000c
db dummyd_5d27d;
db byte_6b85e; // 5d27:000e
db dummyd_5d27f;
dd off_6b860; // 5d27:0010
db byte_6b864; // 5d27:0014
db dummyd_5d285;
db byte_6b866; // 5d27:0016
db dummyd_5d287[32]; // 5d27:0017
db dummyd_5d2a7[32]; // 5d27:0037
db dummyd_5d2c7[32]; // 5d27:0057
db dummyd_5d2e7[32]; // 5d27:0077
db dummyd_5d307[32]; // 5d27:0097
db dummyd_5d327[32]; // 5d27:00b7
db dummyd_5d347[32]; // 5d27:00d7
db dummyd_5d367[32]; // 5d27:00f7
db dummyd_5d387[32]; // 5d27:0117
db dummyd_5d3a7[32]; // 5d27:0137
db dummyd_5d3c7[32]; // 5d27:0157
db dummyd_5d3e7[32]; // 5d27:0177
db dummyd_5d407[32]; // 5d27:0197
db dummyd_5d427[32]; // 5d27:01b7
db dummyd_5d447[32]; // 5d27:01d7
db dummyd_5d467[32]; // 5d27:01f7
db dummyd_5d487[32]; // 5d27:0217
db dummyd_5d4a7[32]; // 5d27:0237
db dummyd_5d4c7[32]; // 5d27:0257
db dummyd_5d4e7[32]; // 5d27:0277
db dummyd_5d507[32]; // 5d27:0297
db dummyd_5d527[32]; // 5d27:02b7
db dummyd_5d547[32]; // 5d27:02d7
db dummyd_5d567[32]; // 5d27:02f7
db dummyd_5d587[32]; // 5d27:0317
db dummyd_5d5a7[32]; // 5d27:0337
db dummyd_5d5c7[32]; // 5d27:0357
db dummyd_5d5e7[32]; // 5d27:0377
db dummyd_5d607[32]; // 5d27:0397
db dummyd_5d627[32]; // 5d27:03b7
db dummyd_5d647[32]; // 5d27:03d7
db dummyd_5d667[32]; // 5d27:03f7
db dummyd_5d687[32]; // 5d27:0417
db dummyd_5d6a7[32]; // 5d27:0437
db dummyd_5d6c7[32]; // 5d27:0457
db dummyd_5d6e7[32]; // 5d27:0477
db dummyd_5d707[32]; // 5d27:0497
db dummyd_5d727[32]; // 5d27:04b7
db dummyd_5d747[32]; // 5d27:04d7
db dummyd_5d767[32]; // 5d27:04f7
db dummyd_5d787[32]; // 5d27:0517
db dummyd_5d7a7[32]; // 5d27:0537
db dummyd_5d7c7[32]; // 5d27:0557
db dummyd_5d7e7[32]; // 5d27:0577
db dummyd_5d807[32]; // 5d27:0597
db dummyd_5d827[32]; // 5d27:05b7
db dummyd_5d847[32]; // 5d27:05d7
db dummyd_5d867[32]; // 5d27:05f7
db dummyd_5d887[32]; // 5d27:0617
db dummyd_5d8a7[32]; // 5d27:0637
db dummyd_5d8c7[32]; // 5d27:0657
db dummyd_5d8e7[32]; // 5d27:0677
db dummyd_5d907[32]; // 5d27:0697
db dummyd_5d927[32]; // 5d27:06b7
db dummyd_5d947[32]; // 5d27:06d7
db dummyd_5d967[32]; // 5d27:06f7
db dummyd_5d987[32]; // 5d27:0717
db dummyd_5d9a7[32]; // 5d27:0737
db dummyd_5d9c7[32]; // 5d27:0757
db dummyd_5d9e7[32]; // 5d27:0777
db dummyd_5da07[32]; // 5d27:0797
db dummyd_5da27[32]; // 5d27:07b7
db dummyd_5da47[32]; // 5d27:07d7
db dummyd_5da67[32]; // 5d27:07f7
db dummyd_5da87;
db dummyd_5da88;
db dummyd_5da89;
db dummyd_5da8a;
db dummyd_5da8b;
db dummyd_5da8c;
db dummyd_5da8d;
db byte_6c06e; // 5d27:081e
db dummyd_5da8f;
db byte_6c070; // 5d27:0820
db dummyd_5da91;
db dummyd_5da92;
db dummyd_5da93;
db dummyd_5da94;
db dummyd_5da95;
db dummyd_5da96;
db dummyd_5da97;
db dummyd_5da98;
db dummyd_5da99;
db dummyd_5da9a;
db dummyd_5da9b;
db dummyd_5da9c;
db dummyd_5da9d;
db dummyd_5da9e;
db dummyd_5da9f;
db byte_6c080; // 5daa:0000
db dummyd_5daa1[32]; // 5daa:0001
db dummyd_5dac1[32]; // 5daa:0021
db dummyd_5dae1[32]; // 5daa:0041
db dummyd_5db01[32]; // 5daa:0061
db dummyd_5db21[32]; // 5daa:0081
db dummyd_5db41[32]; // 5daa:00a1
db dummyd_5db61[32]; // 5daa:00c1
db dummyd_5db81[32]; // 5daa:00e1
db dummyd_5dba1[32]; // 5daa:0101
db dummyd_5dbc1[32]; // 5daa:0121
db dummyd_5dbe1[32]; // 5daa:0141
db dummyd_5dc01[32]; // 5daa:0161
db dummyd_5dc21[32]; // 5daa:0181
db dummyd_5dc41[32]; // 5daa:01a1
db dummyd_5dc61[32]; // 5daa:01c1
db dummyd_5dc81; // 5daa:01e1
db dummyd_5dc82; // 5daa:01e2
db dummyd_5dc83; // 5daa:01e3
db dummyd_5dc84; // 5daa:01e4
db dummyd_5dc85; // 5daa:01e5
db dummyd_5dc86; // 5daa:01e6
db dummyd_5dc87; // 5daa:01e7
db dummyd_5dc88; // 5daa:01e8
db dummyd_5dc89; // 5daa:01e9
db dummyd_5dc8a; // 5daa:01ea
db dummyd_5dc8b; // 5daa:01eb
db dummyd_5dc8c; // 5daa:01ec
db dummyd_5dc8d; // 5daa:01ed
db dummyd_5dc8e; // 5daa:01ee
db dummyd_5dc8f; // 5daa:01ef
db byte_6c270; // 5daa:01f0
db dummyd_5dc91[32]; // 5daa:01f1
db dummyd_5dcb1[32]; // 5daa:0211
db dummyd_5dcd1[32]; // 5daa:0231
db dummyd_5dcf1[32]; // 5daa:0251
db dummyd_5dd11[32]; // 5daa:0271
db dummyd_5dd31[32]; // 5daa:0291
db dummyd_5dd51[32]; // 5daa:02b1
db dummyd_5dd71[32]; // 5daa:02d1
db dummyd_5dd91[32]; // 5daa:02f1
db dummyd_5ddb1[32]; // 5daa:0311
db dummyd_5ddd1[32]; // 5daa:0331
db dummyd_5ddf1[32]; // 5daa:0351
db dummyd_5de11[32]; // 5daa:0371
db dummyd_5de31[32]; // 5daa:0391
db dummyd_5de51[32]; // 5daa:03b1
db dummyd_5de71[32]; // 5daa:03d1
db dummyd_5de91[32]; // 5daa:03f1
db dummyd_5deb1[32]; // 5daa:0411
db dummyd_5ded1[32]; // 5daa:0431
db dummyd_5def1[32]; // 5daa:0451
db dummyd_5df11[32]; // 5daa:0471
db dummyd_5df31[32]; // 5daa:0491
db dummyd_5df51[32]; // 5daa:04b1
db dummyd_5df71[32]; // 5daa:04d1
db dummyd_5df91[32]; // 5daa:04f1
db dummyd_5dfb1[32]; // 5daa:0511
db dummyd_5dfd1[32]; // 5daa:0531
db dummyd_5dff1[32]; // 5daa:0551
db dummyd_5e011[32]; // 5daa:0571
db dummyd_5e031[32]; // 5daa:0591
db dummyd_5e051[32]; // 5daa:05b1
db dummyd_5e071[32]; // 5daa:05d1
db dummyd_5e091[32]; // 5daa:05f1
db dummyd_5e0b1[32]; // 5daa:0611
db dummyd_5e0d1[32]; // 5daa:0631
db dummyd_5e0f1[32]; // 5daa:0651
db dummyd_5e111[32]; // 5daa:0671
db dummyd_5e131[32]; // 5daa:0691
db dummyd_5e151[32]; // 5daa:06b1
db dummyd_5e171[32]; // 5daa:06d1
db dummyd_5e191[32]; // 5daa:06f1
db dummyd_5e1b1[32]; // 5daa:0711
db dummyd_5e1d1[32]; // 5daa:0731
db dummyd_5e1f1[32]; // 5daa:0751
db dummyd_5e211[32]; // 5daa:0771
db dummyd_5e231; // 5daa:0791
db dummyd_5e232; // 5daa:0792
db dummyd_5e233; // 5daa:0793
db dummyd_5e234;
db dummyd_5e235; // 5daa:0795
db dummyd_5e236; // 5daa:0796
db dummyd_5e237; // 5daa:0797
db dummyd_5e238; // 5daa:0798
db dummyd_5e239; // 5daa:0799
db dummyd_5e23a; // 5daa:079a
db dummyd_5e23b; // 5daa:079b
dw dummyd_5e23c; // 5daa:079c
dw dummyd_5e23e; // 5daa:079e
db dummyd_5e240[32]; // 5daa:07a0
db dummyd_5e260[32]; // 5daa:07c0
db dummyd_5e280[32]; // 5daa:07e0
db dummyd_5e2a0[32]; // 5daa:0800
db dummyd_5e2c0[32]; // 5daa:0820
db dummyd_5e2e0[32]; // 5daa:0840
db dummyd_5e300[32]; // 5daa:0860
db dummyd_5e320[32]; // 5daa:0880
db dummyd_5e340[32]; // 5daa:08a0
db dummyd_5e360[32]; // 5daa:08c0
db dummyd_5e380[32]; // 5daa:08e0
db dummyd_5e3a0[32]; // 5daa:0900
db dummyd_5e3c0[32]; // 5daa:0920
db dummyd_5e3e0[32]; // 5daa:0940
db dummyd_5e400[32]; // 5daa:0960
db dummyd_5e420[32]; // 5daa:0980
db dummyd_5e440[32]; // 5daa:09a0
db dummyd_5e460[32]; // 5daa:09c0
db dummyd_5e480[32]; // 5daa:09e0
db dummyd_5e4a0[32]; // 5daa:0a00
db dummyd_5e4c0[32]; // 5daa:0a20
db dummyd_5e4e0[32]; // 5daa:0a40
db dummyd_5e500[32]; // 5daa:0a60
db dummyd_5e520[32]; // 5daa:0a80
db dummyd_5e540[32]; // 5daa:0aa0
db dummyd_5e560[32]; // 5daa:0ac0
db dummyd_5e580[32]; // 5daa:0ae0
db dummyd_5e5a0[32]; // 5daa:0b00
db dummyd_5e5c0[32]; // 5daa:0b20
db dummyd_5e5e0[32]; // 5daa:0b40
db dummyd_5e600[32]; // 5daa:0b60
db dummyd_5e620[32]; // 5daa:0b80
db dummyd_5e640[32]; // 5daa:0ba0
db dummyd_5e660[32]; // 5daa:0bc0
db dummyd_5e680[32]; // 5daa:0be0
db dummyd_5e6a0[32]; // 5daa:0c00
db dummyd_5e6c0[32]; // 5daa:0c20
db dummyd_5e6e0[32]; // 5daa:0c40
db dummyd_5e700[32]; // 5daa:0c60
db dummyd_5e720[32]; // 5daa:0c80
db dummyd_5e740[32]; // 5daa:0ca0
db dummyd_5e760[32]; // 5daa:0cc0
db dummyd_5e780[32]; // 5daa:0ce0
db dummyd_5e7a0[32]; // 5daa:0d00
db dummyd_5e7c0[32]; // 5daa:0d20
db dummyd_5e7e0[32]; // 5daa:0d40
db dummyd_5e800[32]; // 5daa:0d60
db dummyd_5e820[32]; // 5daa:0d80
db dummyd_5e840[32]; // 5daa:0da0
db dummyd_5e860[32]; // 5daa:0dc0
db dummyd_5e880[32]; // 5daa:0de0
db dummyd_5e8a0[32]; // 5daa:0e00
db dummyd_5e8c0[32]; // 5daa:0e20
db dummyd_5e8e0[32]; // 5daa:0e40
db dummyd_5e900[32]; // 5daa:0e60
db dummyd_5e920[32]; // 5daa:0e80
db dummyd_5e940[32]; // 5daa:0ea0
db dummyd_5e960[32]; // 5daa:0ec0
db dummyd_5e980[32]; // 5daa:0ee0
db dummyd_5e9a0[32]; // 5daa:0f00
db dummyd_5e9c0[32]; // 5daa:0f20
db dummyd_5e9e0[32]; // 5daa:0f40
db dummyd_5ea00[32]; // 5daa:0f60
db dummyd_5ea20[32]; // 5daa:0f80
db dummyd_5ea40[32]; // 5daa:0fa0
db dummyd_5ea60[32]; // 5daa:0fc0
db dummyd_5ea80[32]; // 5daa:0fe0
db dummyd_5eaa0[32]; // 5daa:1000
db dummyd_5eac0[32]; // 5daa:1020
db dummyd_5eae0[32]; // 5daa:1040
db dummyd_5eb00[32]; // 5daa:1060
db dummyd_5eb20[32]; // 5daa:1080
db dummyd_5eb40[32]; // 5daa:10a0
db dummyd_5eb60[32]; // 5daa:10c0
db dummyd_5eb80[32]; // 5daa:10e0
db dummyd_5eba0[32]; // 5daa:1100
db dummyd_5ebc0[32]; // 5daa:1120
db dummyd_5ebe0[32]; // 5daa:1140
db dummyd_5ec00[32]; // 5daa:1160
db dummyd_5ec20[32]; // 5daa:1180
db dummyd_5ec40[32]; // 5daa:11a0
db dummyd_5ec60[32]; // 5daa:11c0
db dummyd_5ec80[32]; // 5daa:11e0
db dummyd_5eca0[32]; // 5daa:1200
db dummyd_5ecc0[32]; // 5daa:1220
db dummyd_5ece0[32]; // 5daa:1240
db dummyd_5ed00[32]; // 5daa:1260
db dummyd_5ed20[32]; // 5daa:1280
db dummyd_5ed40[32]; // 5daa:12a0
db dummyd_5ed60[32]; // 5daa:12c0
db dummyd_5ed80[32]; // 5daa:12e0
db dummyd_5eda0[32]; // 5daa:1300
db dummyd_5edc0[32]; // 5daa:1320
db dummyd_5ede0[32]; // 5daa:1340
db dummyd_5ee00[32]; // 5daa:1360
db dummyd_5ee20[32]; // 5daa:1380
db dummyd_5ee40[32]; // 5daa:13a0
db dummyd_5ee60[32]; // 5daa:13c0
db dummyd_5ee80[32]; // 5daa:13e0
db dummyd_5eea0[32]; // 5daa:1400
db dummyd_5eec0[32]; // 5daa:1420
db dummyd_5eee0[32]; // 5daa:1440
db dummyd_5ef00[32]; // 5daa:1460
db dummyd_5ef20[32]; // 5daa:1480
db dummyd_5ef40[32]; // 5daa:14a0
db dummyd_5ef60[32]; // 5daa:14c0
db dummyd_5ef80[32]; // 5daa:14e0
db dummyd_5efa0[32]; // 5daa:1500
db dummyd_5efc0[32]; // 5daa:1520
db dummyd_5efe0[32]; // 5daa:1540
db dummyd_5f000[32]; // 5daa:1560
db dummyd_5f020[32]; // 5daa:1580
db dummyd_5f040[32]; // 5daa:15a0
db dummyd_5f060[32]; // 5daa:15c0
db dummyd_5f080[32]; // 5daa:15e0
db dummyd_5f0a0[32]; // 5daa:1600
db dummyd_5f0c0[32]; // 5daa:1620
db dummyd_5f0e0[32]; // 5daa:1640
db dummyd_5f100[32]; // 5daa:1660
db dummyd_5f120[32]; // 5daa:1680
db dummyd_5f140[32]; // 5daa:16a0
db dummyd_5f160[32]; // 5daa:16c0
db dummyd_5f180[32]; // 5daa:16e0
db dummyd_5f1a0[32]; // 5daa:1700
db dummyd_5f1c0[32]; // 5daa:1720
db dummyd_5f1e0[32]; // 5daa:1740
db dummyd_5f200[32]; // 5daa:1760
db dummyd_5f220[32]; // 5daa:1780
db dummyd_5f240[32]; // 5daa:17a0
db dummyd_5f260[32]; // 5daa:17c0
db dummyd_5f280[32]; // 5daa:17e0
db dummyd_5f2a0[32]; // 5daa:1800
db dummyd_5f2c0[32]; // 5daa:1820
db dummyd_5f2e0[32]; // 5daa:1840
db dummyd_5f300[32]; // 5daa:1860
db dummyd_5f320[32]; // 5daa:1880
db dummyd_5f340[32]; // 5daa:18a0
db dummyd_5f360[32]; // 5daa:18c0
db dummyd_5f380[32]; // 5daa:18e0
db dummyd_5f3a0[32]; // 5daa:1900
db dummyd_5f3c0[32]; // 5daa:1920
db dummyd_5f3e0[32]; // 5daa:1940
db dummyd_5f400[32]; // 5daa:1960
db dummyd_5f420[32]; // 5daa:1980
db dummyd_5f440[32]; // 5daa:19a0
db dummyd_5f460[32]; // 5daa:19c0
db dummyd_5f480[32]; // 5daa:19e0
db dummyd_5f4a0[32]; // 5daa:1a00
db dummyd_5f4c0[32]; // 5daa:1a20
db dummyd_5f4e0[32]; // 5daa:1a40
db dummyd_5f500[32]; // 5daa:1a60
db dummyd_5f520[32]; // 5daa:1a80
db dummyd_5f540[32]; // 5daa:1aa0
db dummyd_5f560[32]; // 5daa:1ac0
db dummyd_5f580[32]; // 5daa:1ae0
db dummyd_5f5a0[32]; // 5daa:1b00
db dummyd_5f5c0[32]; // 5daa:1b20
db dummyd_5f5e0[32]; // 5daa:1b40
db dummyd_5f600[32]; // 5daa:1b60
db dummyd_5f620[32]; // 5daa:1b80
db dummyd_5f640[32]; // 5daa:1ba0
db dummyd_5f660[32]; // 5daa:1bc0
db dummyd_5f680[32]; // 5daa:1be0
db dummyd_5f6a0[32]; // 5daa:1c00
db dummyd_5f6c0[32]; // 5daa:1c20
db dummyd_5f6e0[32]; // 5daa:1c40
db dummyd_5f700[32]; // 5daa:1c60
db dummyd_5f720[32]; // 5daa:1c80
db dummyd_5f740[32]; // 5daa:1ca0
db dummyd_5f760[32]; // 5daa:1cc0
db dummyd_5f780[32]; // 5daa:1ce0
db dummyd_5f7a0[32]; // 5daa:1d00
db dummyd_5f7c0[32]; // 5daa:1d20
db dummyd_5f7e0[32]; // 5daa:1d40
db dummyd_5f800[32]; // 5daa:1d60
db dummyd_5f820[32]; // 5daa:1d80
db dummyd_5f840[32]; // 5daa:1da0
db dummyd_5f860[32]; // 5daa:1dc0
db dummyd_5f880[32]; // 5daa:1de0
db dummyd_5f8a0[32]; // 5daa:1e00
db dummyd_5f8c0[32]; // 5daa:1e20
db dummyd_5f8e0[32]; // 5daa:1e40
db dummyd_5f900[32]; // 5daa:1e60
db dummyd_5f920[32]; // 5daa:1e80
db dummyd_5f940[32]; // 5daa:1ea0
db dummyd_5f960[32]; // 5daa:1ec0
db dummyd_5f980[32]; // 5daa:1ee0
db dummyd_5f9a0[32]; // 5daa:1f00
db dummyd_5f9c0[32]; // 5daa:1f20
db dummyd_5f9e0[32]; // 5daa:1f40
db dummyd_5fa00[32]; // 5daa:1f60
db dummyd_5fa20[32]; // 5daa:1f80
db dummyd_5fa40[32]; // 5daa:1fa0
db dummyd_5fa60[32]; // 5daa:1fc0
db dummyd_5fa80[32]; // 5daa:1fe0
db dummyd_5faa0[32]; // 5daa:2000
db dummyd_5fac0[32]; // 5daa:2020
db dummyd_5fae0[32]; // 5daa:2040
db dummyd_5fb00[32]; // 5daa:2060
db dummyd_5fb20[32]; // 5daa:2080
db dummyd_5fb40[32]; // 5daa:20a0
db dummyd_5fb60[32]; // 5daa:20c0
db dummyd_5fb80[32]; // 5daa:20e0
db dummyd_5fba0[32]; // 5daa:2100
db dummyd_5fbc0[32]; // 5daa:2120
db dummyd_5fbe0[32]; // 5daa:2140
db dummyd_5fc00[32]; // 5daa:2160
db dummyd_5fc20[32]; // 5daa:2180
db dummyd_5fc40[32]; // 5daa:21a0
db dummyd_5fc60[32]; // 5daa:21c0
db dummyd_5fc80[32]; // 5daa:21e0
db dummyd_5fca0[32]; // 5daa:2200
db dummyd_5fcc0[32]; // 5daa:2220
db dummyd_5fce0[32]; // 5daa:2240
db dummyd_5fd00[32]; // 5daa:2260
db dummyd_5fd20[32]; // 5daa:2280
db dummyd_5fd40[32]; // 5daa:22a0
db dummyd_5fd60[32]; // 5daa:22c0
db dummyd_5fd80[32]; // 5daa:22e0
db dummyd_5fda0[32]; // 5daa:2300
db dummyd_5fdc0[32]; // 5daa:2320
db dummyd_5fde0[32]; // 5daa:2340
db dummyd_5fe00[32]; // 5daa:2360
db dummyd_5fe20[32]; // 5daa:2380
db dummyd_5fe40[32]; // 5daa:23a0
db dummyd_5fe60[32]; // 5daa:23c0
db dummyd_5fe80[32]; // 5daa:23e0
db dummyd_5fea0[32]; // 5daa:2400
db dummyd_5fec0[32]; // 5daa:2420
db dummyd_5fee0[32]; // 5daa:2440
db dummyd_5ff00[32]; // 5daa:2460
db dummyd_5ff20[32]; // 5daa:2480
db dummyd_5ff40[32]; // 5daa:24a0
db dummyd_5ff60[32]; // 5daa:24c0
db dummyd_5ff80[32]; // 5daa:24e0
db dummyd_5ffa0[32]; // 5daa:2500
db dummyd_5ffc0[32]; // 5daa:2520
db dummyd_5ffe0[32]; // 5daa:2540
db dummyd_60000[32]; // 5daa:2560
db dummyd_60020[32]; // 5daa:2580
db dummyd_60040[32]; // 5daa:25a0
db dummyd_60060[32]; // 5daa:25c0
db dummyd_60080[32]; // 5daa:25e0
db dummyd_600a0[32]; // 5daa:2600
db dummyd_600c0[32]; // 5daa:2620
db dummyd_600e0[32]; // 5daa:2640
db dummyd_60100[32]; // 5daa:2660
db dummyd_60120[32]; // 5daa:2680
db dummyd_60140[32]; // 5daa:26a0
db dummyd_60160[32]; // 5daa:26c0
db dummyd_60180[32]; // 5daa:26e0
db dummyd_601a0[32]; // 5daa:2700
db dummyd_601c0[32]; // 5daa:2720
db dummyd_601e0[32]; // 5daa:2740
db dummyd_60200[32]; // 5daa:2760
db dummyd_60220[32]; // 5daa:2780
db dummyd_60240[32]; // 5daa:27a0
db dummyd_60260[32]; // 5daa:27c0
db dummyd_60280[32]; // 5daa:27e0
db dummyd_602a0[32]; // 5daa:2800
db dummyd_602c0[32]; // 5daa:2820
db dummyd_602e0[32]; // 5daa:2840
db dummyd_60300[32]; // 5daa:2860
db dummyd_60320[32]; // 5daa:2880
db dummyd_60340[32]; // 5daa:28a0
db dummyd_60360[32]; // 5daa:28c0
db dummyd_60380[32]; // 5daa:28e0
db dummyd_603a0[32]; // 5daa:2900
db dummyd_603c0[32]; // 5daa:2920
db dummyd_603e0[32]; // 5daa:2940
db dummyd_60400[32]; // 5daa:2960
db dummyd_60420[32]; // 5daa:2980
db dummyd_60440[32]; // 5daa:29a0
db dummyd_60460[32]; // 5daa:29c0
db dummyd_60480[32]; // 5daa:29e0
db dummyd_604a0[32]; // 5daa:2a00
db dummyd_604c0[32]; // 5daa:2a20
db dummyd_604e0[32]; // 5daa:2a40
db dummyd_60500[32]; // 5daa:2a60
db dummyd_60520[32]; // 5daa:2a80
db dummyd_60540[32]; // 5daa:2aa0
db dummyd_60560[32]; // 5daa:2ac0
db dummyd_60580[32]; // 5daa:2ae0
db dummyd_605a0[32]; // 5daa:2b00
db dummyd_605c0[32]; // 5daa:2b20
db dummyd_605e0[32]; // 5daa:2b40
db dummyd_60600[32]; // 5daa:2b60
db dummyd_60620[32]; // 5daa:2b80
db dummyd_60640[32]; // 5daa:2ba0
db dummyd_60660[32]; // 5daa:2bc0
db dummyd_60680[32]; // 5daa:2be0
db dummyd_606a0[32]; // 5daa:2c00
db dummyd_606c0[32]; // 5daa:2c20
db dummyd_606e0[32]; // 5daa:2c40
db dummyd_60700[32]; // 5daa:2c60
db dummyd_60720[32]; // 5daa:2c80
db dummyd_60740[32]; // 5daa:2ca0
db dummyd_60760[32]; // 5daa:2cc0
db dummyd_60780[32]; // 5daa:2ce0
db dummyd_607a0[32]; // 5daa:2d00
db dummyd_607c0[32]; // 5daa:2d20
db dummyd_607e0[32]; // 5daa:2d40
db dummyd_60800[32]; // 5daa:2d60
db dummyd_60820[32]; // 5daa:2d80
db dummyd_60840[32]; // 5daa:2da0
db dummyd_60860[32]; // 5daa:2dc0
db dummyd_60880[32]; // 5daa:2de0
db dummyd_608a0[32]; // 5daa:2e00
db dummyd_608c0[32]; // 5daa:2e20
db dummyd_608e0[32]; // 5daa:2e40
db dummyd_60900[32]; // 5daa:2e60
db dummyd_60920[32]; // 5daa:2e80
db dummyd_60940[32]; // 5daa:2ea0
db dummyd_60960[32]; // 5daa:2ec0
db dummyd_60980[32]; // 5daa:2ee0
db dummyd_609a0[32]; // 5daa:2f00
db dummyd_609c0[32]; // 5daa:2f20
db dummyd_609e0[32]; // 5daa:2f40
db dummyd_60a00[32]; // 5daa:2f60
db dummyd_60a20[32]; // 5daa:2f80
db dummyd_60a40[32]; // 5daa:2fa0
db dummyd_60a60[32]; // 5daa:2fc0
db dummyd_60a80[32]; // 5daa:2fe0
db dummyd_60aa0[32]; // 5daa:3000
db dummyd_60ac0[32]; // 5daa:3020
db dummyd_60ae0[32]; // 5daa:3040
db dummyd_60b00[32]; // 5daa:3060
db dummyd_60b20[32]; // 5daa:3080
db dummyd_60b40[32]; // 5daa:30a0
db dummyd_60b60[32]; // 5daa:30c0
db dummyd_60b80[32]; // 5daa:30e0
db dummyd_60ba0[32]; // 5daa:3100
db dummyd_60bc0[32]; // 5daa:3120
db dummyd_60be0[32]; // 5daa:3140
db dummyd_60c00[32]; // 5daa:3160
db dummyd_60c20[32]; // 5daa:3180
db dummyd_60c40[32]; // 5daa:31a0
db dummyd_60c60[32]; // 5daa:31c0
db dummyd_60c80[32]; // 5daa:31e0
db dummyd_60ca0[32]; // 5daa:3200
db dummyd_60cc0[32]; // 5daa:3220
db dummyd_60ce0[32]; // 5daa:3240
db dummyd_60d00[32]; // 5daa:3260
db dummyd_60d20[32]; // 5daa:3280
db dummyd_60d40[32]; // 5daa:32a0
db dummyd_60d60[32]; // 5daa:32c0
db dummyd_60d80[32]; // 5daa:32e0
db dummyd_60da0[32]; // 5daa:3300
db dummyd_60dc0[32]; // 5daa:3320
db dummyd_60de0[32]; // 5daa:3340
db dummyd_60e00[32]; // 5daa:3360
db dummyd_60e20[32]; // 5daa:3380
db dummyd_60e40[32]; // 5daa:33a0
db dummyd_60e60[32]; // 5daa:33c0
db dummyd_60e80[32]; // 5daa:33e0
db dummyd_60ea0[32]; // 5daa:3400
db dummyd_60ec0[32]; // 5daa:3420
db dummyd_60ee0[32]; // 5daa:3440
db dummyd_60f00[32]; // 5daa:3460
db dummyd_60f20[32]; // 5daa:3480
db dummyd_60f40[32]; // 5daa:34a0
db dummyd_60f60[32]; // 5daa:34c0
db dummyd_60f80[32]; // 5daa:34e0
db dummyd_60fa0[32]; // 5daa:3500
db dummyd_60fc0[32]; // 5daa:3520
db dummyd_60fe0[32]; // 5daa:3540
db dummyd_61000[32]; // 5daa:3560
db dummyd_61020[32]; // 5daa:3580
db dummyd_61040[32]; // 5daa:35a0
db dummyd_61060[32]; // 5daa:35c0
db dummyd_61080[32]; // 5daa:35e0
db dummyd_610a0[32]; // 5daa:3600
db dummyd_610c0[32]; // 5daa:3620
db dummyd_610e0[32]; // 5daa:3640
db dummyd_61100[32]; // 5daa:3660
db dummyd_61120[32]; // 5daa:3680
db dummyd_61140[32]; // 5daa:36a0
db dummyd_61160[32]; // 5daa:36c0
db dummyd_61180[32]; // 5daa:36e0
db dummyd_611a0[32]; // 5daa:3700
db dummyd_611c0[32]; // 5daa:3720
db dummyd_611e0[32]; // 5daa:3740
db dummyd_61200[32]; // 5daa:3760
db dummyd_61220[32]; // 5daa:3780
db dummyd_61240[32]; // 5daa:37a0
db dummyd_61260[32]; // 5daa:37c0
db dummyd_61280[32]; // 5daa:37e0
db dummyd_612a0[32]; // 5daa:3800
db dummyd_612c0[32]; // 5daa:3820
db dummyd_612e0[32]; // 5daa:3840
db dummyd_61300[32]; // 5daa:3860
db dummyd_61320[32]; // 5daa:3880
db dummyd_61340[32]; // 5daa:38a0
db dummyd_61360[32]; // 5daa:38c0
db dummyd_61380[32]; // 5daa:38e0
db dummyd_613a0[32]; // 5daa:3900
db dummyd_613c0[32]; // 5daa:3920
db dummyd_613e0[32]; // 5daa:3940
db dummyd_61400[32]; // 5daa:3960
db dummyd_61420[32]; // 5daa:3980
db dummyd_61440[32]; // 5daa:39a0
db dummyd_61460[32]; // 5daa:39c0
db dummyd_61480[32]; // 5daa:39e0
db dummyd_614a0[32]; // 5daa:3a00
db dummyd_614c0[32]; // 5daa:3a20
db dummyd_614e0[32]; // 5daa:3a40
db dummyd_61500[32]; // 5daa:3a60
db dummyd_61520[32]; // 5daa:3a80
db dummyd_61540[32]; // 5daa:3aa0
db dummyd_61560[32]; // 5daa:3ac0
db dummyd_61580[32]; // 5daa:3ae0
db dummyd_615a0;
db dummyd_615a1; // 5daa:3b01
db dummyd_615a2; // 5daa:3b02
db dummyd_615a3; // 5daa:3b03
db dummyd_615a4; // 5daa:3b04
db dummyd_615a5; // 5daa:3b05
db dummyd_615a6; // 5daa:3b06
db dummyd_615a7; // 5daa:3b07
db dummyd_615a8;
db dummyd_615a9; // 5daa:3b09
db dummyd_615aa; // 5daa:3b0a
db dummyd_615ab; // 5daa:3b0b
db dummyd_615ac;
db dummyd_615ad; // 5daa:3b0d
db dummyd_615ae;
db dummyd_615af;
db unk_6fb90; // 5daa:3b10
db dummyd_615b1; // 5daa:3b11
db byte_6fb92; // 5daa:3b12
db byte_6fb93; // 5daa:3b13
db unk_6fb94; // 5daa:3b14
db dummyd_615b5;
db unk_6fb96; // 5daa:3b16
db dummyd_615b7[32]; // 5daa:3b17
db dummyd_615d7[32]; // 5daa:3b37
db dummyd_615f7[32]; // 5daa:3b57
db dummyd_61617[32]; // 5daa:3b77
db dummyd_61637[32]; // 5daa:3b97
db dummyd_61657[32]; // 5daa:3bb7
db dummyd_61677[32]; // 5daa:3bd7
db dummyd_61697[32]; // 5daa:3bf7
db dummyd_616b7[32]; // 5daa:3c17
db dummyd_616d7[32]; // 5daa:3c37
db dummyd_616f7[32]; // 5daa:3c57
db dummyd_61717[32]; // 5daa:3c77
db dummyd_61737[32]; // 5daa:3c97
db dummyd_61757[32]; // 5daa:3cb7
db dummyd_61777[32]; // 5daa:3cd7
db dummyd_61797[32]; // 5daa:3cf7
db dummyd_617b7[32]; // 5daa:3d17
db dummyd_617d7[32]; // 5daa:3d37
db dummyd_617f7[32]; // 5daa:3d57
db dummyd_61817[32]; // 5daa:3d77
db dummyd_61837[32]; // 5daa:3d97
db dummyd_61857[32]; // 5daa:3db7
db dummyd_61877[32]; // 5daa:3dd7
db dummyd_61897[32]; // 5daa:3df7
db dummyd_618b7[32]; // 5daa:3e17
db dummyd_618d7[32]; // 5daa:3e37
db dummyd_618f7[32]; // 5daa:3e57
db dummyd_61917[32]; // 5daa:3e77
db dummyd_61937[32]; // 5daa:3e97
db dummyd_61957[32]; // 5daa:3eb7
db dummyd_61977[32]; // 5daa:3ed7
db dummyd_61997[32]; // 5daa:3ef7
db dummyd_619b7[32]; // 5daa:3f17
db dummyd_619d7[32]; // 5daa:3f37
db dummyd_619f7[32]; // 5daa:3f57
db dummyd_61a17[32]; // 5daa:3f77
db dummyd_61a37[32]; // 5daa:3f97
db dummyd_61a57[32]; // 5daa:3fb7
db dummyd_61a77[32]; // 5daa:3fd7
db dummyd_61a97[32]; // 5daa:3ff7
db dummyd_61ab7; // 5daa:4017
db byte_70098; // 5daa:4018
db byte_70099; // 5daa:4019
db unk_7009a; // 5daa:401a
db dummyd_61abb;
db unk_7009c; // 5daa:401c
db dummyd_61abd;
db unk_7009e; // 5daa:401e
db dummyd_61abf[32]; // 5daa:401f
db dummyd_61adf[32]; // 5daa:403f
db dummyd_61aff[32]; // 5daa:405f
db dummyd_61b1f[32]; // 5daa:407f
db dummyd_61b3f[32]; // 5daa:409f
db dummyd_61b5f[32]; // 5daa:40bf
db dummyd_61b7f[32]; // 5daa:40df
db dummyd_61b9f[32]; // 5daa:40ff
db dummyd_61bbf[32]; // 5daa:411f
db dummyd_61bdf[32]; // 5daa:413f
db dummyd_61bff[32]; // 5daa:415f
db dummyd_61c1f[32]; // 5daa:417f
db dummyd_61c3f[32]; // 5daa:419f
db dummyd_61c5f[32]; // 5daa:41bf
db dummyd_61c7f[32]; // 5daa:41df
db dummyd_61c9f[32]; // 5daa:41ff
db dummyd_61cbf[32]; // 5daa:421f
db dummyd_61cdf[32]; // 5daa:423f
db dummyd_61cff; // 5daa:425f
db dummyd_61d00; // 5daa:4260
db dummyd_61d01; // 5daa:4261
db dummyd_61d02; // 5daa:4262
db dummyd_61d03; // 5daa:4263
db dummyd_61d04; // 5daa:4264
db dummyd_61d05; // 5daa:4265
db dummyd_61d06; // 5daa:4266
db dummyd_61d07; // 5daa:4267
db dummyd_61d08; // 5daa:4268
db dummyd_61d09; // 5daa:4269
db dummyd_61d0a;
db areadingdisk; // 5daa:426b
db dummyd_61d0c[32]; // 5daa:426c
db dummyd_61d2c; // 5daa:428c
db dummyd_61d2d; // 5daa:428d
db dummyd_61d2e; // 5daa:428e
db dummyd_61d2f; // 5daa:428f
db dummyd_61d30; // 5daa:4290
db dummyd_61d31; // 5daa:4291
db dummyd_61d32; // 5daa:4292
db dummyd_61d33; // 5daa:4293
db dummyd_61d34; // 5daa:4294
db dummyd_61d35; // 5daa:4295
db dummyd_61d36; // 5daa:4296
db dummyd_61d37; // 5daa:4297
db dummyd_61d38; // 5daa:4298
db dummyd_61d39; // 5daa:4299
db dummyd_61d3a; // 5daa:429a
db dummyd_61d3b; // 5daa:429b
db dummyd_61d3c; // 5daa:429c
db dummyd_61d3d; // 5daa:429d
db dummyd_61d3e; // 5daa:429e
db dummyd_61d3f;
db asavegameplacea; // 5daa:42a0
db dummyd_61d41[32]; // 5daa:42a1
db dummyd_61d61[32]; // 5daa:42c1
db dummyd_61d81[32]; // 5daa:42e1
db dummyd_61da1[32]; // 5daa:4301
db dummyd_61dc1[32]; // 5daa:4321
db dummyd_61de1[32]; // 5daa:4341
db dummyd_61e01[32]; // 5daa:4361
db dummyd_61e21[32]; // 5daa:4381
db dummyd_61e41[32]; // 5daa:43a1
db dummyd_61e61[32]; // 5daa:43c1
db dummyd_61e81[32]; // 5daa:43e1
db dummyd_61ea1; // 5daa:4401
db dummyd_61ea2; // 5daa:4402
db dummyd_61ea3; // 5daa:4403
db dummyd_61ea4; // 5daa:4404
db dummyd_61ea5; // 5daa:4405
db dummyd_61ea6; // 5daa:4406
db dummyd_61ea7; // 5daa:4407
db dummyd_61ea8; // 5daa:4408
db dummyd_61ea9; // 5daa:4409
db dummyd_61eaa; // 5daa:440a
db dummyd_61eab; // 5daa:440b
db dummyd_61eac; // 5daa:440c
db dummyd_61ead; // 5daa:440d
db dummyd_61eae; // 5daa:440e
db dummyd_61eaf; // 5daa:440f
db dummyd_61eb0; // 5daa:4410
db dummyd_61eb1; // 5daa:4411
db dummyd_61eb2; // 5daa:4412
db dummyd_61eb3; // 5daa:4413
db dummyd_61eb4; // 5daa:4414
db dummyd_61eb5; // 5daa:4415
db dummyd_61eb6; // 5daa:4416
db dummyd_61eb7; // 5daa:4417
db dummyd_61eb8; // 5daa:4418
db dummyd_61eb9; // 5daa:4419
db dummyd_61eba; // 5daa:441a
db dummyd_61ebb; // 5daa:441b
db dummyd_61ebc; // 5daa:441c
db dummyd_61ebd;
db acreatingfile; // 5daa:441e
db dummyd_61ebf[32]; // 5daa:441f
db dummyd_61edf; // 5daa:443f
db dummyd_61ee0; // 5daa:4440
db dummyd_61ee1; // 5daa:4441
db dummyd_61ee2; // 5daa:4442
db dummyd_61ee3; // 5daa:4443
db dummyd_61ee4; // 5daa:4444
db dummyd_61ee5; // 5daa:4445
db dummyd_61ee6; // 5daa:4446
db dummyd_61ee7;
db awritinggametod; // 5daa:4448
db dummyd_61ee9[32]; // 5daa:4449
db dummyd_61f09[32]; // 5daa:4469
db dummyd_61f29[32]; // 5daa:4489
db dummyd_61f49[32]; // 5daa:44a9
db dummyd_61f69[32]; // 5daa:44c9
db dummyd_61f89[32]; // 5daa:44e9
db dummyd_61fa9[32]; // 5daa:4509
db dummyd_61fc9[32]; // 5daa:4529
db dummyd_61fe9[32]; // 5daa:4549
db dummyd_62009[32]; // 5daa:4569
db dummyd_62029[32]; // 5daa:4589
db dummyd_62049[32]; // 5daa:45a9
db dummyd_62069[32]; // 5daa:45c9
db dummyd_62089[32]; // 5daa:45e9
db dummyd_620a9[32]; // 5daa:4609
db dummyd_620c9[32]; // 5daa:4629
db dummyd_620e9[32]; // 5daa:4649
db dummyd_62109[32]; // 5daa:4669
db dummyd_62129[32]; // 5daa:4689
db dummyd_62149[32]; // 5daa:46a9
db dummyd_62169[32]; // 5daa:46c9
db dummyd_62189[32]; // 5daa:46e9
db dummyd_621a9[32]; // 5daa:4709
db dummyd_621c9[32]; // 5daa:4729
db dummyd_621e9[32]; // 5daa:4749
db dummyd_62209[32]; // 5daa:4769
db dummyd_62229[32]; // 5daa:4789
db dummyd_62249[32]; // 5daa:47a9
db dummyd_62269[32]; // 5daa:47c9
db dummyd_62289[32]; // 5daa:47e9
db dummyd_622a9; // 5daa:4809
db dummyd_622aa; // 5daa:480a
db dummyd_622ab; // 5daa:480b
db dummyd_622ac; // 5daa:480c
db dummyd_622ad;
char aloadingdataple_0[26]; // 5daa:480e
db dummyd_622c8[32]; // 5daa:4828
db dummyd_622e8[32]; // 5daa:4848
db dummyd_62308; // 5daa:4868
db dummyd_62309; // 5daa:4869
db dummyd_6230a; // 5daa:486a
db dummyd_6230b; // 5daa:486b
db dummyd_6230c; // 5daa:486c
db dummyd_6230d; // 5daa:486d
db dummyd_6230e; // 5daa:486e
db dummyd_6230f; // 5daa:486f
db dummyd_62310; // 5daa:4870
db dummyd_62311; // 5daa:4871
db dummyd_62312; // 5daa:4872
db dummyd_62313;
char adoyouwanttores[65]; // 5daa:4874
char dummyd_62355[52]; // 5daa:48b5
db dummyd_62389[32]; // 5daa:48e9
db dummyd_623a9[32]; // 5daa:4909
db dummyd_623c9[32]; // 5daa:4929
db dummyd_623e9[32]; // 5daa:4949
db dummyd_62409[32]; // 5daa:4969
db dummyd_62429[32]; // 5daa:4989
db dummyd_62449[32]; // 5daa:49a9
db dummyd_62469[32]; // 5daa:49c9
db dummyd_62489[32]; // 5daa:49e9
db dummyd_624a9[32]; // 5daa:4a09
db dummyd_624c9[32]; // 5daa:4a29
db dummyd_624e9[32]; // 5daa:4a49
db dummyd_62509[32]; // 5daa:4a69
db dummyd_62529[32]; // 5daa:4a89
db dummyd_62549[32]; // 5daa:4aa9
db dummyd_62569[32]; // 5daa:4ac9
db dummyd_62589[32]; // 5daa:4ae9
db dummyd_625a9[32]; // 5daa:4b09
db dummyd_625c9[32]; // 5daa:4b29
db dummyd_625e9[32]; // 5daa:4b49
db dummyd_62609[32]; // 5daa:4b69
db dummyd_62629[32]; // 5daa:4b89
db dummyd_62649[32]; // 5daa:4ba9
db dummyd_62669[32]; // 5daa:4bc9
db dummyd_62689[32]; // 5daa:4be9
db dummyd_626a9[32]; // 5daa:4c09
db dummyd_626c9; // 5daa:4c29
db dummyd_626ca; // 5daa:4c2a
db dummyd_626cb; // 5daa:4c2b
db dummyd_626cc; // 5daa:4c2c
db dummyd_626cd; // 5daa:4c2d
db dummyd_626ce; // 5daa:4c2e
db dummyd_626cf; // 5daa:4c2f
db byte_70cb0; // 5daa:4c30
db dummyd_626d1[32]; // 5daa:4c31
db dummyd_626f1[32]; // 5daa:4c51
db dummyd_62711; // 5daa:4c71
db dummyd_62712;
db dummyd_62713; // 5daa:4c73
db dummyd_62714; // 5daa:4c74
db dummyd_62715; // 5daa:4c75
db dummyd_62716; // 5daa:4c76
db dummyd_62717; // 5daa:4c77
db dummyd_62718; // 5daa:4c78
db dummyd_62719; // 5daa:4c79
db dummyd_6271a; // 5daa:4c7a
db dummyd_6271b; // 5daa:4c7b
db dummyd_6271c; // 5daa:4c7c
db dummyd_6271d; // 5daa:4c7d
db dummyd_6271e;
char adataandatadat[16]; // 5daa:4c7f
db byte_70d0f; // 5daa:4c8f
char aatalevmp1[15]; // 5daa:4c90
db byte_70d1f; // 5daa:4c9f
char aatalevmp2[15]; // 5daa:4ca0
db byte_70d2f; // 5daa:4caf
char aatalevmp3[15]; // 5daa:4cb0
db byte_70d3f; // 5daa:4cbf
char aataroutinetad[19]; // 5daa:4cc0
db dummyd_62773; // 5daa:4cd3
db dummyd_62774; // 5daa:4cd4
db dummyd_62775; // 5daa:4cd5
db dummyd_62776; // 5daa:4cd6
db dummyd_62777; // 5daa:4cd7
db dummyd_62778; // 5daa:4cd8
db byte_70d59; // 5daa:4cd9
char aataenglng[15]; // 5daa:4cda
db byte_70d69; // 5daa:4ce9
db dummyd_6278a; // 5daa:4cea
db dummyd_6278b; // 5daa:4ceb
db dummyd_6278c; // 5daa:4cec
db dummyd_6278d; // 5daa:4ced
db dummyd_6278e; // 5daa:4cee
db dummyd_6278f; // 5daa:4cef
db dummyd_62790; // 5daa:4cf0
db dummyd_62791; // 5daa:4cf1
db dummyd_62792; // 5daa:4cf2
db dummyd_62793; // 5daa:4cf3
db dummyd_62794; // 5daa:4cf4
db dummyd_62795; // 5daa:4cf5
db dummyd_62796; // 5daa:4cf6
db dummyd_62797; // 5daa:4cf7
db dummyd_62798;
db byte_70d79; // 5daa:4cf9
db dummyd_6279a; // 5daa:4cfa
db dummyd_6279b; // 5daa:4cfb
db dummyd_6279c; // 5daa:4cfc
db dummyd_6279d; // 5daa:4cfd
db dummyd_6279e; // 5daa:4cfe
db dummyd_6279f; // 5daa:4cff
db dummyd_627a0; // 5daa:4d00
db dummyd_627a1; // 5daa:4d01
db dummyd_627a2; // 5daa:4d02
db dummyd_627a3; // 5daa:4d03
db dummyd_627a4; // 5daa:4d04
db dummyd_627a5; // 5daa:4d05
db dummyd_627a6; // 5daa:4d06
db dummyd_627a7; // 5daa:4d07
db dummyd_627a8;
db dummyd_627a9; // 5daa:4d09
db dummyd_627aa; // 5daa:4d0a
db dummyd_627ab; // 5daa:4d0b
db dummyd_627ac; // 5daa:4d0c
db dummyd_627ad; // 5daa:4d0d
db dummyd_627ae; // 5daa:4d0e
db dummyd_627af; // 5daa:4d0f
db dummyd_627b0; // 5daa:4d10
db dummyd_627b1; // 5daa:4d11
db byte_70d92; // 5daa:4d12
db dummyd_627b3;
char adatapcmandat[15]; // 5daa:4d14
db dummyd_627c3[32]; // 5daa:4d23
db dummyd_627e3[32]; // 5daa:4d43
db dummyd_62803[32]; // 5daa:4d63
db dummyd_62823[32]; // 5daa:4d83
db dummyd_62843[32]; // 5daa:4da3
db dummyd_62863[32]; // 5daa:4dc3
db dummyd_62883[32]; // 5daa:4de3
db dummyd_628a3[32]; // 5daa:4e03
db dummyd_628c3[32]; // 5daa:4e23
db dummyd_628e3[32]; // 5daa:4e43
db dummyd_62903[32]; // 5daa:4e63
db dummyd_62923[32]; // 5daa:4e83
db dummyd_62943[32]; // 5daa:4ea3
db dummyd_62963[32]; // 5daa:4ec3
db dummyd_62983[32]; // 5daa:4ee3
db dummyd_629a3[32]; // 5daa:4f03
db dummyd_629c3[32]; // 5daa:4f23
db dummyd_629e3[32]; // 5daa:4f43
db dummyd_62a03[32]; // 5daa:4f63
db dummyd_62a23[32]; // 5daa:4f83
db dummyd_62a43[32]; // 5daa:4fa3
db dummyd_62a63[32]; // 5daa:4fc3
db dummyd_62a83[32]; // 5daa:4fe3
db dummyd_62aa3[32]; // 5daa:5003
db dummyd_62ac3[32]; // 5daa:5023
db dummyd_62ae3[32]; // 5daa:5043
db dummyd_62b03; // 5daa:5063
db dummyd_62b04; // 5daa:5064
db dummyd_62b05;
db dummyd_62b06; // 5daa:5066
db dummyd_62b07;
db dummyd_62b08; // 5daa:5068
db dummyd_62b09;
db dummyd_62b0a; // 5daa:506a
db dummyd_62b0b; // 5daa:506b
db dummyd_62b0c; // 5daa:506c
db dummyd_62b0d; // 5daa:506d
db dummyd_62b0e;
db dummyd_62b0f;
db dummyd_62b10; // 5daa:5070
db dummyd_62b11; // 5daa:5071
db dummyd_62b12; // 5daa:5072
db dummyd_62b13; // 5daa:5073
db dummyd_62b14; // 5daa:5074
db dummyd_62b15;
db dummyd_62b16; // 5daa:5076
db dummyd_62b17;
db dummyd_62b18; // 5daa:5078
db dummyd_62b19; // 5daa:5079
db dummyd_62b1a; // 5daa:507a
db dummyd_62b1b; // 5daa:507b
db dummyd_62b1c;
dw dummyd_62b1d; // 5daa:507d
db dummyd_62b1f;
dw dummyd_62b20; // 5daa:5080
dw dummyd_62b22; // 5daa:5082
db dummyd_62b24; // 5daa:5084
db dummyd_62b25; // 5daa:5085
db dummyd_62b26; // 5daa:5086
db dummyd_62b27; // 5daa:5087
db dummyd_62b28; // 5daa:5088
db dummyd_62b29; // 5daa:5089
db dummyd_62b2a; // 5daa:508a
db dummyd_62b2b; // 5daa:508b
db dummyd_62b2c; // 5daa:508c
db dummyd_62b2d; // 5daa:508d
db dummyd_62b2e;
db dummyd_62b2f;
db dummyd_62b30; // 5daa:5090
dd dummyd_62b31; // 5daa:5091
db dummyd_62b35;
db dummyd_62b36; // 5daa:5096
db dummyd_62b37; // 5daa:5097
db dummyd_62b38; // 5daa:5098
db dummyd_62b39; // 5daa:5099
db dummyd_62b3a; // 5daa:509a
db dummyd_62b3b; // 5daa:509b
db dummyd_62b3c; // 5daa:509c
db dummyd_62b3d; // 5daa:509d
db dummyd_62b3e; // 5daa:509e
db dummyd_62b3f; // 5daa:509f
db dummyd_62b40; // 5daa:50a0
db dummyd_62b41; // 5daa:50a1
db dummyd_62b42; // 5daa:50a2
db dummyd_62b43; // 5daa:50a3
db dummyd_62b44; // 5daa:50a4
db dummyd_62b45;
db dummyd_62b46; // 5daa:50a6
db dummyd_62b47; // 5daa:50a7
db dummyd_62b48; // 5daa:50a8
db dummyd_62b49; // 5daa:50a9
db dummyd_62b4a; // 5daa:50aa
db dummyd_62b4b; // 5daa:50ab
db dummyd_62b4c; // 5daa:50ac
db dummyd_62b4d; // 5daa:50ad
db dummyd_62b4e; // 5daa:50ae
db dummyd_62b4f; // 5daa:50af
db dummyd_62b50;
db dummyd_62b51; // 5daa:50b1
dw dummyd_62b52; // 5daa:50b2
db dummyd_62b54; // 5daa:50b4
db dummyd_62b55; // 5daa:50b5
db dummyd_62b56; // 5daa:50b6
db dummyd_62b57; // 5daa:50b7
db dummyd_62b58; // 5daa:50b8
db dummyd_62b59; // 5daa:50b9
db dummyd_62b5a; // 5daa:50ba
db dummyd_62b5b; // 5daa:50bb
db dummyd_62b5c; // 5daa:50bc
db dummyd_62b5d; // 5daa:50bd
db dummyd_62b5e;
db dummyd_62b5f;
db dummyd_62b60; // 5daa:50c0
db dummyd_62b61; // 5daa:50c1
dw dummyd_62b62; // 5daa:50c2
db dummyd_62b64; // 5daa:50c4
db dummyd_62b65; // 5daa:50c5
db dummyd_62b66; // 5daa:50c6
db dummyd_62b67; // 5daa:50c7
db dummyd_62b68; // 5daa:50c8
db dummyd_62b69; // 5daa:50c9
db dummyd_62b6a; // 5daa:50ca
db dummyd_62b6b; // 5daa:50cb
db dummyd_62b6c; // 5daa:50cc
db dummyd_62b6d; // 5daa:50cd
db dummyd_62b6e;
db dummyd_62b6f;
db dummyd_62b70;
dw dummyd_62b71; // 5daa:50d1
dw dummyd_62b73; // 5daa:50d3
db dummyd_62b75;
db dummyd_62b76; // 5daa:50d6
db dummyd_62b77; // 5daa:50d7
db dummyd_62b78; // 5daa:50d8
db dummyd_62b79; // 5daa:50d9
db dummyd_62b7a; // 5daa:50da
db dummyd_62b7b; // 5daa:50db
db dummyd_62b7c; // 5daa:50dc
db dummyd_62b7d; // 5daa:50dd
db dummyd_62b7e; // 5daa:50de
db dummyd_62b7f; // 5daa:50df
db dummyd_62b80;
dw dummyd_62b81; // 5daa:50e1
dw dummyd_62b83; // 5daa:50e3
db dummyd_62b85;
db dummyd_62b86; // 5daa:50e6
db dummyd_62b87; // 5daa:50e7
db dummyd_62b88; // 5daa:50e8
db dummyd_62b89; // 5daa:50e9
db dummyd_62b8a; // 5daa:50ea
db dummyd_62b8b; // 5daa:50eb
db dummyd_62b8c; // 5daa:50ec
db dummyd_62b8d; // 5daa:50ed
db dummyd_62b8e; // 5daa:50ee
db dummyd_62b8f; // 5daa:50ef
dd dummyd_62b90; // 5daa:50f0
db dummyd_62b94; // 5daa:50f4
db dummyd_62b95; // 5daa:50f5
db dummyd_62b96; // 5daa:50f6
db dummyd_62b97; // 5daa:50f7
db dummyd_62b98; // 5daa:50f8
db dummyd_62b99; // 5daa:50f9
db dummyd_62b9a; // 5daa:50fa
db dummyd_62b9b; // 5daa:50fb
db dummyd_62b9c; // 5daa:50fc
db dummyd_62b9d; // 5daa:50fd
db dummyd_62b9e;
db dummyd_62b9f;
dd dummyd_62ba0; // 5daa:5100
db dummyd_62ba4; // 5daa:5104
db dummyd_62ba5; // 5daa:5105
db dummyd_62ba6; // 5daa:5106
db dummyd_62ba7; // 5daa:5107
db dummyd_62ba8; // 5daa:5108
db dummyd_62ba9; // 5daa:5109
db dummyd_62baa; // 5daa:510a
db dummyd_62bab; // 5daa:510b
db dummyd_62bac;
dw dummyd_62bad; // 5daa:510d
db dummyd_62baf;
dw dummyd_62bb0; // 5daa:5110
dw dummyd_62bb2; // 5daa:5112
db dummyd_62bb4; // 5daa:5114
db dummyd_62bb5; // 5daa:5115
db dummyd_62bb6; // 5daa:5116
db dummyd_62bb7; // 5daa:5117
db dummyd_62bb8; // 5daa:5118
db dummyd_62bb9; // 5daa:5119
db dummyd_62bba; // 5daa:511a
db dummyd_62bbb; // 5daa:511b
db dummyd_62bbc; // 5daa:511c
db dummyd_62bbd; // 5daa:511d
db dummyd_62bbe;
db dummyd_62bbf;
db dummyd_62bc0;
dw dummyd_62bc1; // 5daa:5121
dw dummyd_62bc3; // 5daa:5123
db dummyd_62bc5;
db dummyd_62bc6; // 5daa:5126
db dummyd_62bc7; // 5daa:5127
db dummyd_62bc8; // 5daa:5128
db dummyd_62bc9; // 5daa:5129
db dummyd_62bca; // 5daa:512a
db dummyd_62bcb; // 5daa:512b
db dummyd_62bcc; // 5daa:512c
db dummyd_62bcd; // 5daa:512d
db dummyd_62bce; // 5daa:512e
db dummyd_62bcf; // 5daa:512f
db dummyd_62bd0;
dw dummyd_62bd1; // 5daa:5131
dw dummyd_62bd3; // 5daa:5133
db dummyd_62bd5;
db dummyd_62bd6; // 5daa:5136
db dummyd_62bd7; // 5daa:5137
db dummyd_62bd8; // 5daa:5138
db dummyd_62bd9; // 5daa:5139
db dummyd_62bda; // 5daa:513a
db dummyd_62bdb; // 5daa:513b
db dummyd_62bdc; // 5daa:513c
db dummyd_62bdd; // 5daa:513d
db dummyd_62bde; // 5daa:513e
db dummyd_62bdf; // 5daa:513f
dd dummyd_62be0; // 5daa:5140
db dummyd_62be4; // 5daa:5144
db dummyd_62be5; // 5daa:5145
db dummyd_62be6; // 5daa:5146
db dummyd_62be7; // 5daa:5147
db dummyd_62be8; // 5daa:5148
db dummyd_62be9; // 5daa:5149
db dummyd_62bea; // 5daa:514a
db dummyd_62beb; // 5daa:514b
db dummyd_62bec;
dw dummyd_62bed; // 5daa:514d
db dummyd_62bef;
dw dummyd_62bf0; // 5daa:5150
dw dummyd_62bf2; // 5daa:5152
db dummyd_62bf4; // 5daa:5154
db dummyd_62bf5; // 5daa:5155
db dummyd_62bf6; // 5daa:5156
db dummyd_62bf7; // 5daa:5157
db dummyd_62bf8; // 5daa:5158
db dummyd_62bf9; // 5daa:5159
db dummyd_62bfa; // 5daa:515a
db dummyd_62bfb; // 5daa:515b
db dummyd_62bfc; // 5daa:515c
db dummyd_62bfd; // 5daa:515d
db dummyd_62bfe;
db dummyd_62bff;
dd dummyd_62c00; // 5daa:5160
db dummyd_62c04; // 5daa:5164
db dummyd_62c05; // 5daa:5165
db dummyd_62c06; // 5daa:5166
db dummyd_62c07; // 5daa:5167
db dummyd_62c08; // 5daa:5168
db dummyd_62c09; // 5daa:5169
db dummyd_62c0a; // 5daa:516a
db dummyd_62c0b; // 5daa:516b
db dummyd_62c0c;
dw dummyd_62c0d; // 5daa:516d
db dummyd_62c0f;
db dummyd_62c10;
dw dummyd_62c11; // 5daa:5171
dw dummyd_62c13; // 5daa:5173
db dummyd_62c15;
db dummyd_62c16; // 5daa:5176
db dummyd_62c17; // 5daa:5177
db dummyd_62c18; // 5daa:5178
db dummyd_62c19; // 5daa:5179
db dummyd_62c1a; // 5daa:517a
db dummyd_62c1b; // 5daa:517b
db dummyd_62c1c; // 5daa:517c
db dummyd_62c1d; // 5daa:517d
db dummyd_62c1e; // 5daa:517e
db dummyd_62c1f; // 5daa:517f
db dummyd_62c20;
dw dummyd_62c21; // 5daa:5181
dw dummyd_62c23; // 5daa:5183
db dummyd_62c25;
db dummyd_62c26; // 5daa:5186
db dummyd_62c27; // 5daa:5187
db dummyd_62c28; // 5daa:5188
db dummyd_62c29; // 5daa:5189
db dummyd_62c2a; // 5daa:518a
db dummyd_62c2b; // 5daa:518b
db dummyd_62c2c; // 5daa:518c
db dummyd_62c2d; // 5daa:518d
db dummyd_62c2e; // 5daa:518e
db dummyd_62c2f; // 5daa:518f
dd dummyd_62c30; // 5daa:5190
db dummyd_62c34; // 5daa:5194
db dummyd_62c35; // 5daa:5195
db dummyd_62c36; // 5daa:5196
db dummyd_62c37; // 5daa:5197
db dummyd_62c38; // 5daa:5198
db dummyd_62c39; // 5daa:5199
db dummyd_62c3a; // 5daa:519a
db dummyd_62c3b; // 5daa:519b
db dummyd_62c3c;
dw dummyd_62c3d; // 5daa:519d
db dummyd_62c3f;
dw dummyd_62c40; // 5daa:51a0
dw dummyd_62c42; // 5daa:51a2
db dummyd_62c44; // 5daa:51a4
db dummyd_62c45; // 5daa:51a5
db dummyd_62c46; // 5daa:51a6
db dummyd_62c47; // 5daa:51a7
db dummyd_62c48; // 5daa:51a8
db dummyd_62c49; // 5daa:51a9
db dummyd_62c4a; // 5daa:51aa
db dummyd_62c4b; // 5daa:51ab
db dummyd_62c4c; // 5daa:51ac
db dummyd_62c4d; // 5daa:51ad
db dummyd_62c4e;
db dummyd_62c4f;
dd dummyd_62c50; // 5daa:51b0
db dummyd_62c54; // 5daa:51b4
db dummyd_62c55; // 5daa:51b5
db dummyd_62c56; // 5daa:51b6
db dummyd_62c57; // 5daa:51b7
db dummyd_62c58; // 5daa:51b8
db dummyd_62c59; // 5daa:51b9
db dummyd_62c5a; // 5daa:51ba
db dummyd_62c5b; // 5daa:51bb
db dummyd_62c5c; // 5daa:51bc
db dummyd_62c5d; // 5daa:51bd
db dummyd_62c5e;
db dummyd_62c5f;
dd dummyd_62c60; // 5daa:51c0
db dummyd_62c64; // 5daa:51c4
db dummyd_62c65; // 5daa:51c5
db dummyd_62c66; // 5daa:51c6
db dummyd_62c67; // 5daa:51c7
db dummyd_62c68; // 5daa:51c8
db dummyd_62c69; // 5daa:51c9
db dummyd_62c6a; // 5daa:51ca
db dummyd_62c6b; // 5daa:51cb
db dummyd_62c6c;
dw dummyd_62c6d; // 5daa:51cd
db dummyd_62c6f;
db dummyd_62c70;
dw dummyd_62c71; // 5daa:51d1
dw dummyd_62c73; // 5daa:51d3
db dummyd_62c75;
db dummyd_62c76; // 5daa:51d6
db dummyd_62c77; // 5daa:51d7
db dummyd_62c78; // 5daa:51d8
db dummyd_62c79; // 5daa:51d9
db dummyd_62c7a; // 5daa:51da
db dummyd_62c7b; // 5daa:51db
db dummyd_62c7c; // 5daa:51dc
db dummyd_62c7d; // 5daa:51dd
db dummyd_62c7e; // 5daa:51de
db dummyd_62c7f; // 5daa:51df
dd dummyd_62c80; // 5daa:51e0
db dummyd_62c84; // 5daa:51e4
db dummyd_62c85; // 5daa:51e5
db dummyd_62c86; // 5daa:51e6
db dummyd_62c87; // 5daa:51e7
db dummyd_62c88; // 5daa:51e8
db dummyd_62c89; // 5daa:51e9
db dummyd_62c8a; // 5daa:51ea
db dummyd_62c8b; // 5daa:51eb
db dummyd_62c8c;
dw dummyd_62c8d; // 5daa:51ed
db dummyd_62c8f;
dw dummyd_62c90; // 5daa:51f0
dw dummyd_62c92; // 5daa:51f2
db dummyd_62c94; // 5daa:51f4
db dummyd_62c95; // 5daa:51f5
db dummyd_62c96; // 5daa:51f6
db dummyd_62c97; // 5daa:51f7
db dummyd_62c98; // 5daa:51f8
db dummyd_62c99; // 5daa:51f9
db dummyd_62c9a; // 5daa:51fa
db dummyd_62c9b; // 5daa:51fb
db dummyd_62c9c; // 5daa:51fc
db dummyd_62c9d; // 5daa:51fd
db dummyd_62c9e;
db dummyd_62c9f;
dd dummyd_62ca0; // 5daa:5200
db dummyd_62ca4; // 5daa:5204
db dummyd_62ca5; // 5daa:5205
db dummyd_62ca6; // 5daa:5206
db dummyd_62ca7; // 5daa:5207
db dummyd_62ca8; // 5daa:5208
db dummyd_62ca9; // 5daa:5209
db dummyd_62caa; // 5daa:520a
db dummyd_62cab; // 5daa:520b
db dummyd_62cac;
dw dummyd_62cad; // 5daa:520d
db dummyd_62caf;
dw dummyd_62cb0; // 5daa:5210
dw dummyd_62cb2; // 5daa:5212
db dummyd_62cb4; // 5daa:5214
db dummyd_62cb5; // 5daa:5215
db dummyd_62cb6; // 5daa:5216
db dummyd_62cb7; // 5daa:5217
db dummyd_62cb8; // 5daa:5218
db dummyd_62cb9; // 5daa:5219
db dummyd_62cba; // 5daa:521a
db dummyd_62cbb; // 5daa:521b
db dummyd_62cbc;
dw dummyd_62cbd; // 5daa:521d
db dummyd_62cbf;
db dummyd_62cc0;
dw dummyd_62cc1; // 5daa:5221
dw dummyd_62cc3; // 5daa:5223
db dummyd_62cc5;
db dummyd_62cc6; // 5daa:5226
db dummyd_62cc7; // 5daa:5227
db dummyd_62cc8; // 5daa:5228
db dummyd_62cc9; // 5daa:5229
db dummyd_62cca; // 5daa:522a
db dummyd_62ccb; // 5daa:522b
db dummyd_62ccc; // 5daa:522c
db dummyd_62ccd; // 5daa:522d
db dummyd_62cce; // 5daa:522e
db dummyd_62ccf; // 5daa:522f
dd dummyd_62cd0; // 5daa:5230
db dummyd_62cd4; // 5daa:5234
db dummyd_62cd5; // 5daa:5235
db dummyd_62cd6; // 5daa:5236
db dummyd_62cd7; // 5daa:5237
db dummyd_62cd8; // 5daa:5238
db dummyd_62cd9; // 5daa:5239
db dummyd_62cda; // 5daa:523a
db dummyd_62cdb; // 5daa:523b
db dummyd_62cdc; // 5daa:523c
db dummyd_62cdd; // 5daa:523d
db dummyd_62cde;
db dummyd_62cdf;
dd dummyd_62ce0; // 5daa:5240
db dummyd_62ce4; // 5daa:5244
db dummyd_62ce5; // 5daa:5245
db dummyd_62ce6; // 5daa:5246
db dummyd_62ce7; // 5daa:5247
db dummyd_62ce8; // 5daa:5248
db dummyd_62ce9; // 5daa:5249
db dummyd_62cea; // 5daa:524a
db dummyd_62ceb; // 5daa:524b
db dummyd_62cec;
dw dummyd_62ced; // 5daa:524d
db dummyd_62cef;
dw dummyd_62cf0; // 5daa:5250
dw dummyd_62cf2; // 5daa:5252
db dummyd_62cf4; // 5daa:5254
db dummyd_62cf5; // 5daa:5255
db dummyd_62cf6; // 5daa:5256
db dummyd_62cf7; // 5daa:5257
db dummyd_62cf8; // 5daa:5258
db dummyd_62cf9; // 5daa:5259
db dummyd_62cfa; // 5daa:525a
db dummyd_62cfb; // 5daa:525b
db dummyd_62cfc; // 5daa:525c
db dummyd_62cfd; // 5daa:525d
db dummyd_62cfe;
db dummyd_62cff;
dd dummyd_62d00; // 5daa:5260
db dummyd_62d04; // 5daa:5264
db dummyd_62d05; // 5daa:5265
db dummyd_62d06; // 5daa:5266
db dummyd_62d07; // 5daa:5267
db dummyd_62d08; // 5daa:5268
db dummyd_62d09; // 5daa:5269
db dummyd_62d0a; // 5daa:526a
db dummyd_62d0b; // 5daa:526b
db dummyd_62d0c;
dw dummyd_62d0d; // 5daa:526d
db dummyd_62d0f;
dw dummyd_62d10; // 5daa:5270
dw dummyd_62d12; // 5daa:5272
db dummyd_62d14[32]; // 5daa:5274
db dummyd_62d34[32]; // 5daa:5294
db dummyd_62d54[32]; // 5daa:52b4
db dummyd_62d74[32]; // 5daa:52d4
db dummyd_62d94[32]; // 5daa:52f4
db dummyd_62db4[32]; // 5daa:5314
db dummyd_62dd4[32]; // 5daa:5334
db dummyd_62df4[32]; // 5daa:5354
db dummyd_62e14[32]; // 5daa:5374
db dummyd_62e34[32]; // 5daa:5394
db dummyd_62e54[32]; // 5daa:53b4
db dummyd_62e74[32]; // 5daa:53d4
db dummyd_62e94[32]; // 5daa:53f4
db dummyd_62eb4[32]; // 5daa:5414
db dummyd_62ed4[32]; // 5daa:5434
db dummyd_62ef4[32]; // 5daa:5454
db dummyd_62f14[32]; // 5daa:5474
db dummyd_62f34[32]; // 5daa:5494
db dummyd_62f54[32]; // 5daa:54b4
db dummyd_62f74[32]; // 5daa:54d4
db dummyd_62f94[32]; // 5daa:54f4
db dummyd_62fb4[32]; // 5daa:5514
db dummyd_62fd4[32]; // 5daa:5534
db dummyd_62ff4[32]; // 5daa:5554
db dummyd_63014[32]; // 5daa:5574
db dummyd_63034[32]; // 5daa:5594
db dummyd_63054[32]; // 5daa:55b4
db dummyd_63074[32]; // 5daa:55d4
db dummyd_63094[32]; // 5daa:55f4
db dummyd_630b4[32]; // 5daa:5614
db dummyd_630d4[32]; // 5daa:5634
db dummyd_630f4[32]; // 5daa:5654
db dummyd_63114[32]; // 5daa:5674
db dummyd_63134[32]; // 5daa:5694
db dummyd_63154[32]; // 5daa:56b4
db dummyd_63174[32]; // 5daa:56d4
db dummyd_63194[32]; // 5daa:56f4
db dummyd_631b4[32]; // 5daa:5714
db dummyd_631d4[32]; // 5daa:5734
db dummyd_631f4[32]; // 5daa:5754
db dummyd_63214[32]; // 5daa:5774
db dummyd_63234[32]; // 5daa:5794
db dummyd_63254[32]; // 5daa:57b4
db dummyd_63274[32]; // 5daa:57d4
db dummyd_63294[32]; // 5daa:57f4
db dummyd_632b4[32]; // 5daa:5814
db dummyd_632d4[32]; // 5daa:5834
db dummyd_632f4[32]; // 5daa:5854
db dummyd_63314[32]; // 5daa:5874
db dummyd_63334[32]; // 5daa:5894
db dummyd_63354[32]; // 5daa:58b4
db dummyd_63374[32]; // 5daa:58d4
db dummyd_63394[32]; // 5daa:58f4
db dummyd_633b4[32]; // 5daa:5914
db dummyd_633d4[32]; // 5daa:5934
db dummyd_633f4[32]; // 5daa:5954
db dummyd_63414[32]; // 5daa:5974
db dummyd_63434[32]; // 5daa:5994
db dummyd_63454[32]; // 5daa:59b4
db dummyd_63474[32]; // 5daa:59d4
db dummyd_63494[32]; // 5daa:59f4
db dummyd_634b4[32]; // 5daa:5a14
db dummyd_634d4[32]; // 5daa:5a34
db dummyd_634f4[32]; // 5daa:5a54
db dummyd_63514[32]; // 5daa:5a74
db dummyd_63534[32]; // 5daa:5a94
db dummyd_63554[32]; // 5daa:5ab4
db dummyd_63574[32]; // 5daa:5ad4
db dummyd_63594[32]; // 5daa:5af4
db dummyd_635b4[32]; // 5daa:5b14
db dummyd_635d4[32]; // 5daa:5b34
db dummyd_635f4[32]; // 5daa:5b54
db dummyd_63614[32]; // 5daa:5b74
db dummyd_63634[32]; // 5daa:5b94
db dummyd_63654[32]; // 5daa:5bb4
db dummyd_63674[32]; // 5daa:5bd4
db dummyd_63694[32]; // 5daa:5bf4
db dummyd_636b4[32]; // 5daa:5c14
db dummyd_636d4[32]; // 5daa:5c34
db dummyd_636f4[32]; // 5daa:5c54
db dummyd_63714[32]; // 5daa:5c74
db dummyd_63734[32]; // 5daa:5c94
db dummyd_63754[32]; // 5daa:5cb4
db dummyd_63774[32]; // 5daa:5cd4
db dummyd_63794[32]; // 5daa:5cf4
db dummyd_637b4[32]; // 5daa:5d14
db dummyd_637d4[32]; // 5daa:5d34
db dummyd_637f4[32]; // 5daa:5d54
db dummyd_63814[32]; // 5daa:5d74
db dummyd_63834[32]; // 5daa:5d94
db dummyd_63854[32]; // 5daa:5db4
db dummyd_63874[32]; // 5daa:5dd4
db dummyd_63894[32]; // 5daa:5df4
db dummyd_638b4[32]; // 5daa:5e14
db dummyd_638d4[32]; // 5daa:5e34
db dummyd_638f4[32]; // 5daa:5e54
db dummyd_63914[32]; // 5daa:5e74
db dummyd_63934[32]; // 5daa:5e94
db dummyd_63954[32]; // 5daa:5eb4
db dummyd_63974;
db dummyd_63975;
db dummyd_63976;
db dummyd_63977;
db dummyd_63978;
db dummyd_63979;
db dummyd_6397a;
db dummyd_6397b;
db dummyd_6397c;
db dummyd_6397d;
db dummyd_6397e;
db dummyd_6397f;
db dummyd_63980; // 5daa:5ee0
db dummyd_63981; // 5daa:5ee1
db dummyd_63982; // 5daa:5ee2
db dummyd_63983;
dw dummyd_63984; // 5daa:5ee4
db dummyd_63986[32]; // 5daa:5ee6
db dummyd_639a6;
db dummyd_639a7;
db dummyd_639a8;
db dummyd_639a9;
db dummyd_639aa;
db dummyd_639ab;
db dummyd_639ac;
db dummyd_639ad;
db dummyd_639ae;
db dummyd_639af;
db dummyd_639b0;
db dummyd_639b1;
db dummyd_639b2; // 5daa:5f12
db dummyd_639b3; // 5daa:5f13
db dummyd_639b4; // 5daa:5f14
db dummyd_639b5; // 5daa:5f15
dw dummyd_639b6; // 5daa:5f16
db dummyd_639b8[32]; // 5daa:5f18
db dummyd_639d8[32]; // 5daa:5f38
db dummyd_639f8[32]; // 5daa:5f58
db dummyd_63a18[32]; // 5daa:5f78
db dummyd_63a38[32]; // 5daa:5f98
db dummyd_63a58[32]; // 5daa:5fb8
db dummyd_63a78[32]; // 5daa:5fd8
db dummyd_63a98[32]; // 5daa:5ff8
db dummyd_63ab8[32]; // 5daa:6018
db dummyd_63ad8[32]; // 5daa:6038
db dummyd_63af8[32]; // 5daa:6058
db dummyd_63b18[32]; // 5daa:6078
db dummyd_63b38[32]; // 5daa:6098
db dummyd_63b58[32]; // 5daa:60b8
db dummyd_63b78[32]; // 5daa:60d8
db dummyd_63b98[32]; // 5daa:60f8
db dummyd_63bb8[32]; // 5daa:6118
db dummyd_63bd8[32]; // 5daa:6138
db dummyd_63bf8[32]; // 5daa:6158
db dummyd_63c18[32]; // 5daa:6178
db dummyd_63c38[32]; // 5daa:6198
db dummyd_63c58[32]; // 5daa:61b8
db dummyd_63c78[32]; // 5daa:61d8
db dummyd_63c98[32]; // 5daa:61f8
db dummyd_63cb8[32]; // 5daa:6218
db dummyd_63cd8[32]; // 5daa:6238
db dummyd_63cf8[32]; // 5daa:6258
db dummyd_63d18[32]; // 5daa:6278
db dummyd_63d38[32]; // 5daa:6298
db dummyd_63d58[32]; // 5daa:62b8
db dummyd_63d78[32]; // 5daa:62d8
db dummyd_63d98[32]; // 5daa:62f8
db dummyd_63db8[32]; // 5daa:6318
db dummyd_63dd8[32]; // 5daa:6338
db dummyd_63df8[32]; // 5daa:6358
db dummyd_63e18[32]; // 5daa:6378
db dummyd_63e38[32]; // 5daa:6398
db dummyd_63e58[32]; // 5daa:63b8
db dummyd_63e78[32]; // 5daa:63d8
db dummyd_63e98[32]; // 5daa:63f8
db dummyd_63eb8[32]; // 5daa:6418
db dummyd_63ed8[32]; // 5daa:6438
db dummyd_63ef8[32]; // 5daa:6458
db dummyd_63f18[32]; // 5daa:6478
db dummyd_63f38[32]; // 5daa:6498
db dummyd_63f58[32]; // 5daa:64b8
db dummyd_63f78[32]; // 5daa:64d8
db dummyd_63f98[32]; // 5daa:64f8
db dummyd_63fb8[32]; // 5daa:6518
db dummyd_63fd8[32]; // 5daa:6538
db dummyd_63ff8[32]; // 5daa:6558
db dummyd_64018[32]; // 5daa:6578
db dummyd_64038[32]; // 5daa:6598
db dummyd_64058[32]; // 5daa:65b8
db dummyd_64078[32]; // 5daa:65d8
db dummyd_64098[32]; // 5daa:65f8
db dummyd_640b8[32]; // 5daa:6618
db dummyd_640d8[32]; // 5daa:6638
db dummyd_640f8[32]; // 5daa:6658
db dummyd_64118[32]; // 5daa:6678
db dummyd_64138[32]; // 5daa:6698
db dummyd_64158[32]; // 5daa:66b8
db dummyd_64178[32]; // 5daa:66d8
db dummyd_64198[32]; // 5daa:66f8
db dummyd_641b8[32]; // 5daa:6718
db dummyd_641d8[32]; // 5daa:6738
db dummyd_641f8[32]; // 5daa:6758
db dummyd_64218[32]; // 5daa:6778
db dummyd_64238[32]; // 5daa:6798
db dummyd_64258[32]; // 5daa:67b8
db dummyd_64278[32]; // 5daa:67d8
db dummyd_64298[32]; // 5daa:67f8
db dummyd_642b8[32]; // 5daa:6818
db dummyd_642d8[32]; // 5daa:6838
db dummyd_642f8[32]; // 5daa:6858
db dummyd_64318[32]; // 5daa:6878
db dummyd_64338[32]; // 5daa:6898
db dummyd_64358[32]; // 5daa:68b8
db dummyd_64378[32]; // 5daa:68d8
db dummyd_64398[32]; // 5daa:68f8
db dummyd_643b8[32]; // 5daa:6918
db dummyd_643d8[32]; // 5daa:6938
db dummyd_643f8[32]; // 5daa:6958
db dummyd_64418[32]; // 5daa:6978
db dummyd_64438[32]; // 5daa:6998
db dummyd_64458[32]; // 5daa:69b8
db dummyd_64478[32]; // 5daa:69d8
db dummyd_64498[32]; // 5daa:69f8
db dummyd_644b8[32]; // 5daa:6a18
db dummyd_644d8[32]; // 5daa:6a38
db dummyd_644f8[32]; // 5daa:6a58
db dummyd_64518[32]; // 5daa:6a78
db dummyd_64538[32]; // 5daa:6a98
db dummyd_64558[32]; // 5daa:6ab8
db dummyd_64578[32]; // 5daa:6ad8
db dummyd_64598[32]; // 5daa:6af8
db dummyd_645b8[32]; // 5daa:6b18
db dummyd_645d8[32]; // 5daa:6b38
db dummyd_645f8[32]; // 5daa:6b58
db dummyd_64618[32]; // 5daa:6b78
db dummyd_64638[32]; // 5daa:6b98
db dummyd_64658[32]; // 5daa:6bb8
db dummyd_64678[32]; // 5daa:6bd8
db dummyd_64698[32]; // 5daa:6bf8
db dummyd_646b8[32]; // 5daa:6c18
db dummyd_646d8[32]; // 5daa:6c38
db dummyd_646f8[32]; // 5daa:6c58
db dummyd_64718[32]; // 5daa:6c78
db dummyd_64738[32]; // 5daa:6c98
db dummyd_64758[32]; // 5daa:6cb8
db dummyd_64778[32]; // 5daa:6cd8
db dummyd_64798[32]; // 5daa:6cf8
db dummyd_647b8[32]; // 5daa:6d18
db dummyd_647d8[32]; // 5daa:6d38
db dummyd_647f8[32]; // 5daa:6d58
db dummyd_64818[32]; // 5daa:6d78
db dummyd_64838[32]; // 5daa:6d98
db dummyd_64858[32]; // 5daa:6db8
db dummyd_64878[32]; // 5daa:6dd8
db dummyd_64898[32]; // 5daa:6df8
db dummyd_648b8[32]; // 5daa:6e18
db dummyd_648d8[32]; // 5daa:6e38
db dummyd_648f8[32]; // 5daa:6e58
db dummyd_64918[32]; // 5daa:6e78
db dummyd_64938[32]; // 5daa:6e98
db dummyd_64958[32]; // 5daa:6eb8
db dummyd_64978[32]; // 5daa:6ed8
db dummyd_64998[32]; // 5daa:6ef8
db dummyd_649b8[32]; // 5daa:6f18
db dummyd_649d8[32]; // 5daa:6f38
db dummyd_649f8[32]; // 5daa:6f58
db dummyd_64a18[32]; // 5daa:6f78
db dummyd_64a38[32]; // 5daa:6f98
db dummyd_64a58[32]; // 5daa:6fb8
db dummyd_64a78[32]; // 5daa:6fd8
db dummyd_64a98;
db dummyd_64a99;
db dummyd_64a9a;
db dummyd_64a9b;
db dummyd_64a9c;
db dummyd_64a9d;
db dummyd_64a9e;
db dummyd_64a9f;
db dummyd_64aa0[32]; // 64aa:0000
db dummyd_64ac0[32]; // 64aa:0020
db dummyd_64ae0[32]; // 64aa:0040
db dummyd_64b00[32]; // 64aa:0060
db dummyd_64b20[32]; // 64aa:0080
db dummyd_64b40[32]; // 64aa:00a0
db dummyd_64b60[32]; // 64aa:00c0
db dummyd_64b80[32]; // 64aa:00e0
db dummyd_64ba0[32]; // 64aa:0100
db dummyd_64bc0[32]; // 64aa:0120
db dummyd_64be0[32]; // 64aa:0140
db dummyd_64c00[32]; // 64aa:0160
db dummyd_64c20[32]; // 64aa:0180
db dummyd_64c40[32]; // 64aa:01a0
db dummyd_64c60[32]; // 64aa:01c0
db dummyd_64c80[32]; // 64aa:01e0
db dummyd_64ca0[32]; // 64aa:0200
db dummyd_64cc0[32]; // 64aa:0220
db dummyd_64ce0[32]; // 64aa:0240
db dummyd_64d00[32]; // 64aa:0260
db dummyd_64d20[32]; // 64aa:0280
db dummyd_64d40[32]; // 64aa:02a0
db dummyd_64d60[32]; // 64aa:02c0
db dummyd_64d80[32]; // 64aa:02e0
db dummyd_64da0[32]; // 64aa:0300
db dummyd_64dc0[32]; // 64aa:0320
db dummyd_64de0[32]; // 64aa:0340
db dummyd_64e00[32]; // 64aa:0360
db dummyd_64e20[32]; // 64aa:0380
db dummyd_64e40[32]; // 64aa:03a0
db dummyd_64e60[32]; // 64aa:03c0
db dummyd_64e80[32]; // 64aa:03e0
db dummyd_64ea0[32]; // 64aa:0400
db dummyd_64ec0[32]; // 64aa:0420
db dummyd_64ee0[32]; // 64aa:0440
db dummyd_64f00[32]; // 64aa:0460
db dummyd_64f20[32]; // 64aa:0480
db dummyd_64f40[32]; // 64aa:04a0
db dummyd_64f60[32]; // 64aa:04c0
db dummyd_64f80[32]; // 64aa:04e0
db dummyd_64fa0[32]; // 64aa:0500
db dummyd_64fc0[32]; // 64aa:0520
db dummyd_64fe0[32]; // 64aa:0540
db dummyd_65000[32]; // 64aa:0560
db dummyd_65020[32]; // 64aa:0580
db dummyd_65040[32]; // 64aa:05a0
db dummyd_65060[32]; // 64aa:05c0
db dummyd_65080[32]; // 64aa:05e0
db dummyd_650a0[32]; // 64aa:0600
db dummyd_650c0[32]; // 64aa:0620
db dummyd_650e0[32]; // 64aa:0640
db dummyd_65100[32]; // 64aa:0660
db dummyd_65120[32]; // 64aa:0680
db dummyd_65140[32]; // 64aa:06a0
db dummyd_65160[32]; // 64aa:06c0
db dummyd_65180[32]; // 64aa:06e0
db dummyd_651a0[32]; // 64aa:0700
db dummyd_651c0[32]; // 64aa:0720
db dummyd_651e0[32]; // 64aa:0740
db dummyd_65200[32]; // 64aa:0760
db dummyd_65220[32]; // 64aa:0780
db dummyd_65240[32]; // 64aa:07a0
db dummyd_65260[32]; // 64aa:07c0
db dummyd_65280[32]; // 64aa:07e0
db dummyd_652a0[32]; // 64aa:0800
db dummyd_652c0[32]; // 64aa:0820
db dummyd_652e0[32]; // 64aa:0840
db dummyd_65300[32]; // 64aa:0860
db dummyd_65320[32]; // 64aa:0880
db dummyd_65340[32]; // 64aa:08a0
db dummyd_65360[32]; // 64aa:08c0
db dummyd_65380[32]; // 64aa:08e0
db dummyd_653a0[32]; // 64aa:0900
db dummyd_653c0[32]; // 64aa:0920
db dummyd_653e0[32]; // 64aa:0940
db dummyd_65400[32]; // 64aa:0960
db dummyd_65420[32]; // 64aa:0980
db dummyd_65440[32]; // 64aa:09a0
db dummyd_65460[32]; // 64aa:09c0
db dummyd_65480[32]; // 64aa:09e0
db dummyd_654a0[32]; // 64aa:0a00
db dummyd_654c0[32]; // 64aa:0a20
db dummyd_654e0[32]; // 64aa:0a40
db dummyd_65500[32]; // 64aa:0a60
db dummyd_65520[32]; // 64aa:0a80
db dummyd_65540[32]; // 64aa:0aa0
db dummyd_65560[32]; // 64aa:0ac0
db dummyd_65580[32]; // 64aa:0ae0
db dummyd_655a0[32]; // 64aa:0b00
db dummyd_655c0[32]; // 64aa:0b20
db dummyd_655e0[32]; // 64aa:0b40
db dummyd_65600[32]; // 64aa:0b60
db dummyd_65620[32]; // 64aa:0b80
db dummyd_65640[32]; // 64aa:0ba0
db dummyd_65660[32]; // 64aa:0bc0
db dummyd_65680[32]; // 64aa:0be0
db dummyd_656a0[32]; // 64aa:0c00
db dummyd_656c0[32]; // 64aa:0c20
db dummyd_656e0[32]; // 64aa:0c40
db dummyd_65700[32]; // 64aa:0c60
db dummyd_65720[32]; // 64aa:0c80
db dummyd_65740[32]; // 64aa:0ca0
db dummyd_65760[32]; // 64aa:0cc0
db dummyd_65780[32]; // 64aa:0ce0
db dummyd_657a0[32]; // 64aa:0d00
db dummyd_657c0[32]; // 64aa:0d20
db dummyd_657e0[32]; // 64aa:0d40
db dummyd_65800[32]; // 64aa:0d60
db dummyd_65820[32]; // 64aa:0d80
db dummyd_65840[32]; // 64aa:0da0
db dummyd_65860[32]; // 64aa:0dc0
db dummyd_65880[32]; // 64aa:0de0
db dummyd_658a0[32]; // 64aa:0e00
db dummyd_658c0[32]; // 64aa:0e20
db dummyd_658e0[32]; // 64aa:0e40
db dummyd_65900[32]; // 64aa:0e60
db dummyd_65920[32]; // 64aa:0e80
db dummyd_65940[32]; // 64aa:0ea0
db dummyd_65960[32]; // 64aa:0ec0
db dummyd_65980[32]; // 64aa:0ee0
db dummyd_659a0[32]; // 64aa:0f00
db dummyd_659c0[32]; // 64aa:0f20
db dummyd_659e0[32]; // 64aa:0f40
db dummyd_65a00[32]; // 64aa:0f60
db dummyd_65a20[32]; // 64aa:0f80
db dummyd_65a40[32]; // 64aa:0fa0
db dummyd_65a60[32]; // 64aa:0fc0
db dummyd_65a80[32]; // 64aa:0fe0
db dummyd_65aa0[32]; // 64aa:1000
db dummyd_65ac0[32]; // 64aa:1020
db dummyd_65ae0[32]; // 64aa:1040
db dummyd_65b00[32]; // 64aa:1060
db dummyd_65b20[32]; // 64aa:1080
db dummyd_65b40[32]; // 64aa:10a0
db dummyd_65b60[32]; // 64aa:10c0
db dummyd_65b80[32]; // 64aa:10e0
db dummyd_65ba0[32]; // 64aa:1100
db dummyd_65bc0[32]; // 64aa:1120
db dummyd_65be0[32]; // 64aa:1140
db dummyd_65c00[32]; // 64aa:1160
db dummyd_65c20[32]; // 64aa:1180
db dummyd_65c40[32]; // 64aa:11a0
db dummyd_65c60[32]; // 64aa:11c0
db dummyd_65c80[32]; // 64aa:11e0
db dummyd_65ca0[32]; // 64aa:1200
db dummyd_65cc0[32]; // 64aa:1220
db dummyd_65ce0[32]; // 64aa:1240
db dummyd_65d00[32]; // 64aa:1260
db dummyd_65d20[32]; // 64aa:1280
db dummyd_65d40[32]; // 64aa:12a0
db dummyd_65d60[32]; // 64aa:12c0
db dummyd_65d80[32]; // 64aa:12e0
db dummyd_65da0[32]; // 64aa:1300
db dummyd_65dc0[32]; // 64aa:1320
db dummyd_65de0[32]; // 64aa:1340
db dummyd_65e00[32]; // 64aa:1360
db dummyd_65e20[32]; // 64aa:1380
db dummyd_65e40[32]; // 64aa:13a0
db dummyd_65e60[32]; // 64aa:13c0
db dummyd_65e80[32]; // 64aa:13e0
db dummyd_65ea0[32]; // 64aa:1400
db dummyd_65ec0[32]; // 64aa:1420
db dummyd_65ee0[32]; // 64aa:1440
db dummyd_65f00[32]; // 64aa:1460
db dummyd_65f20[32]; // 64aa:1480
db dummyd_65f40[32]; // 64aa:14a0
db dummyd_65f60[32]; // 64aa:14c0
db dummyd_65f80[32]; // 64aa:14e0
db dummyd_65fa0[32]; // 64aa:1500
db dummyd_65fc0[32]; // 64aa:1520
db dummyd_65fe0[32]; // 64aa:1540
db dummyd_66000[32]; // 64aa:1560
db dummyd_66020[32]; // 64aa:1580
db dummyd_66040[32]; // 64aa:15a0
db dummyd_66060[32]; // 64aa:15c0
db dummyd_66080[32]; // 64aa:15e0
db dummyd_660a0[32]; // 64aa:1600
db dummyd_660c0[32]; // 64aa:1620
db dummyd_660e0[32]; // 64aa:1640
db dummyd_66100[32]; // 64aa:1660
db dummyd_66120[32]; // 64aa:1680
db dummyd_66140[32]; // 64aa:16a0
db dummyd_66160[32]; // 64aa:16c0
db dummyd_66180[32]; // 64aa:16e0
db dummyd_661a0[32]; // 64aa:1700
db dummyd_661c0[32]; // 64aa:1720
db dummyd_661e0[32]; // 64aa:1740
db dummyd_66200[32]; // 64aa:1760
db dummyd_66220[32]; // 64aa:1780
db dummyd_66240[32]; // 64aa:17a0
db dummyd_66260[32]; // 64aa:17c0
db dummyd_66280[32]; // 64aa:17e0
db dummyd_662a0[32]; // 64aa:1800
db dummyd_662c0[32]; // 64aa:1820
db dummyd_662e0[32]; // 64aa:1840
db dummyd_66300[32]; // 64aa:1860
db dummyd_66320[32]; // 64aa:1880
db dummyd_66340[32]; // 64aa:18a0
db dummyd_66360[32]; // 64aa:18c0
db dummyd_66380[32]; // 64aa:18e0
db dummyd_663a0[32]; // 64aa:1900
db dummyd_663c0[32]; // 64aa:1920
db dummyd_663e0[32]; // 64aa:1940
db dummyd_66400[32]; // 64aa:1960
db dummyd_66420[32]; // 64aa:1980
db dummyd_66440[32]; // 64aa:19a0
db dummyd_66460[32]; // 64aa:19c0
db dummyd_66480[32]; // 64aa:19e0
db dummyd_664a0[32]; // 64aa:1a00
db dummyd_664c0[32]; // 64aa:1a20
db dummyd_664e0[32]; // 64aa:1a40
db dummyd_66500[32]; // 64aa:1a60
db dummyd_66520[32]; // 64aa:1a80
db dummyd_66540[32]; // 64aa:1aa0
db dummyd_66560[32]; // 64aa:1ac0
db dummyd_66580[32]; // 64aa:1ae0
db dummyd_665a0[32]; // 64aa:1b00
db dummyd_665c0[32]; // 64aa:1b20
db dummyd_665e0[32]; // 64aa:1b40
db dummyd_66600[32]; // 64aa:1b60
db dummyd_66620[32]; // 64aa:1b80
db dummyd_66640[32]; // 64aa:1ba0
db dummyd_66660[32]; // 64aa:1bc0
db dummyd_66680[32]; // 64aa:1be0
db dummyd_666a0[32]; // 64aa:1c00
db dummyd_666c0[32]; // 64aa:1c20
db dummyd_666e0[32]; // 64aa:1c40
db dummyd_66700[32]; // 64aa:1c60
db dummyd_66720[32]; // 64aa:1c80
db dummyd_66740[32]; // 64aa:1ca0
db dummyd_66760[32]; // 64aa:1cc0
db dummyd_66780[32]; // 64aa:1ce0
db dummyd_667a0[32]; // 64aa:1d00
db dummyd_667c0[32]; // 64aa:1d20
db dummyd_667e0[32]; // 64aa:1d40
db dummyd_66800[32]; // 64aa:1d60
db dummyd_66820[32]; // 64aa:1d80
db dummyd_66840[32]; // 64aa:1da0
db dummyd_66860[32]; // 64aa:1dc0
db dummyd_66880[32]; // 64aa:1de0
db dummyd_668a0[32]; // 64aa:1e00
db dummyd_668c0[32]; // 64aa:1e20
db dummyd_668e0[32]; // 64aa:1e40
db dummyd_66900[32]; // 64aa:1e60
db dummyd_66920[32]; // 64aa:1e80
db dummyd_66940[32]; // 64aa:1ea0
db dummyd_66960[32]; // 64aa:1ec0
db dummyd_66980[32]; // 64aa:1ee0
db dummyd_669a0[32]; // 64aa:1f00
db dummyd_669c0[32]; // 64aa:1f20
db dummyd_669e0[32]; // 64aa:1f40
db dummyd_66a00[32]; // 64aa:1f60
db dummyd_66a20[32]; // 64aa:1f80
db dummyd_66a40[32]; // 64aa:1fa0
db dummyd_66a60[32]; // 64aa:1fc0
db dummyd_66a80[32]; // 64aa:1fe0
db dummyd_66aa0[32]; // 64aa:2000
db dummyd_66ac0[32]; // 64aa:2020
db dummyd_66ae0[32]; // 64aa:2040
db dummyd_66b00[32]; // 64aa:2060
db dummyd_66b20[32]; // 64aa:2080
db dummyd_66b40[32]; // 64aa:20a0
db dummyd_66b60[32]; // 64aa:20c0
db dummyd_66b80[32]; // 64aa:20e0
db dummyd_66ba0[32]; // 64aa:2100
db dummyd_66bc0[32]; // 64aa:2120
db dummyd_66be0[32]; // 64aa:2140
db dummyd_66c00[32]; // 64aa:2160
db dummyd_66c20[32]; // 64aa:2180
db dummyd_66c40[32]; // 64aa:21a0
db dummyd_66c60[32]; // 64aa:21c0
db dummyd_66c80[32]; // 64aa:21e0
db dummyd_66ca0[32]; // 64aa:2200
db dummyd_66cc0[32]; // 64aa:2220
db dummyd_66ce0[32]; // 64aa:2240
db dummyd_66d00[32]; // 64aa:2260
db dummyd_66d20[32]; // 64aa:2280
db dummyd_66d40[32]; // 64aa:22a0
db dummyd_66d60[32]; // 64aa:22c0
db dummyd_66d80[32]; // 64aa:22e0
db dummyd_66da0[32]; // 64aa:2300
db dummyd_66dc0[32]; // 64aa:2320
db dummyd_66de0[32]; // 64aa:2340
db dummyd_66e00[32]; // 64aa:2360
db dummyd_66e20[32]; // 64aa:2380
db dummyd_66e40[32]; // 64aa:23a0
db dummyd_66e60[32]; // 64aa:23c0
db dummyd_66e80[32]; // 64aa:23e0
db dummyd_66ea0[32]; // 64aa:2400
db dummyd_66ec0[32]; // 64aa:2420
db dummyd_66ee0[32]; // 64aa:2440
db dummyd_66f00[32]; // 64aa:2460
db dummyd_66f20[32]; // 64aa:2480
db dummyd_66f40[32]; // 64aa:24a0
db dummyd_66f60[32]; // 64aa:24c0
db dummyd_66f80[32]; // 64aa:24e0
db dummyd_66fa0[32]; // 64aa:2500
db dummyd_66fc0[32]; // 64aa:2520
db dummyd_66fe0[32]; // 64aa:2540
db dummyd_67000[32]; // 64aa:2560
db dummyd_67020[32]; // 64aa:2580
db dummyd_67040[32]; // 64aa:25a0
db dummyd_67060[32]; // 64aa:25c0
db dummyd_67080[32]; // 64aa:25e0
db dummyd_670a0[32]; // 64aa:2600
db dummyd_670c0[32]; // 64aa:2620
db dummyd_670e0[32]; // 64aa:2640
db dummyd_67100[32]; // 64aa:2660
db dummyd_67120[32]; // 64aa:2680
db dummyd_67140[32]; // 64aa:26a0
db dummyd_67160[32]; // 64aa:26c0
db dummyd_67180[32]; // 64aa:26e0
db dummyd_671a0[32]; // 64aa:2700
db dummyd_671c0[32]; // 64aa:2720
db dummyd_671e0[32]; // 64aa:2740
db dummyd_67200[32]; // 64aa:2760
db dummyd_67220[32]; // 64aa:2780
db dummyd_67240[32]; // 64aa:27a0
db dummyd_67260[32]; // 64aa:27c0
db dummyd_67280[32]; // 64aa:27e0
db dummyd_672a0[32]; // 64aa:2800
db dummyd_672c0[32]; // 64aa:2820
db dummyd_672e0[32]; // 64aa:2840
db dummyd_67300[32]; // 64aa:2860
db dummyd_67320[32]; // 64aa:2880
db dummyd_67340[32]; // 64aa:28a0
db dummyd_67360[32]; // 64aa:28c0
db dummyd_67380[32]; // 64aa:28e0
db dummyd_673a0[32]; // 64aa:2900
db dummyd_673c0[32]; // 64aa:2920
db dummyd_673e0[32]; // 64aa:2940
db dummyd_67400[32]; // 64aa:2960
db dummyd_67420[32]; // 64aa:2980
db dummyd_67440[32]; // 64aa:29a0
db dummyd_67460[32]; // 64aa:29c0
db dummyd_67480[32]; // 64aa:29e0
db dummyd_674a0[32]; // 64aa:2a00
db dummyd_674c0[32]; // 64aa:2a20
db dummyd_674e0[32]; // 64aa:2a40
db dummyd_67500[32]; // 64aa:2a60
db dummyd_67520[32]; // 64aa:2a80
db dummyd_67540[32]; // 64aa:2aa0
db dummyd_67560[32]; // 64aa:2ac0
db dummyd_67580[32]; // 64aa:2ae0
db dummyd_675a0[32]; // 64aa:2b00
db dummyd_675c0[32]; // 64aa:2b20
db dummyd_675e0[32]; // 64aa:2b40
db dummyd_67600[32]; // 64aa:2b60
db dummyd_67620[32]; // 64aa:2b80
db dummyd_67640[32]; // 64aa:2ba0
db dummyd_67660[32]; // 64aa:2bc0
db dummyd_67680[32]; // 64aa:2be0
db dummyd_676a0[32]; // 64aa:2c00
db dummyd_676c0[32]; // 64aa:2c20
db dummyd_676e0[32]; // 64aa:2c40
db dummyd_67700[32]; // 64aa:2c60
db dummyd_67720[32]; // 64aa:2c80
db dummyd_67740[32]; // 64aa:2ca0
db dummyd_67760[32]; // 64aa:2cc0
db dummyd_67780[32]; // 64aa:2ce0
db dummyd_677a0[32]; // 64aa:2d00
db dummyd_677c0[32]; // 64aa:2d20
db dummyd_677e0[32]; // 64aa:2d40
db dummyd_67800[32]; // 64aa:2d60
db dummyd_67820[32]; // 64aa:2d80
db dummyd_67840[32]; // 64aa:2da0
db dummyd_67860[32]; // 64aa:2dc0
db dummyd_67880[32]; // 64aa:2de0
db dummyd_678a0[32]; // 64aa:2e00
db dummyd_678c0[32]; // 64aa:2e20
db dummyd_678e0[32]; // 64aa:2e40
db dummyd_67900[32]; // 64aa:2e60
db dummyd_67920[32]; // 64aa:2e80
db dummyd_67940[32]; // 64aa:2ea0
db dummyd_67960[32]; // 64aa:2ec0
db dummyd_67980[32]; // 64aa:2ee0
db dummyd_679a0[32]; // 64aa:2f00
db dummyd_679c0[32]; // 64aa:2f20
db dummyd_679e0[32]; // 64aa:2f40
db dummyd_67a00[32]; // 64aa:2f60
db dummyd_67a20[32]; // 64aa:2f80
db dummyd_67a40[32]; // 64aa:2fa0
db dummyd_67a60[32]; // 64aa:2fc0
db dummyd_67a80[32]; // 64aa:2fe0
db dummyd_67aa0[32]; // 64aa:3000
db dummyd_67ac0[32]; // 64aa:3020
db dummyd_67ae0[32]; // 64aa:3040
db dummyd_67b00[32]; // 64aa:3060
db dummyd_67b20[32]; // 64aa:3080
db dummyd_67b40[32]; // 64aa:30a0
db dummyd_67b60[32]; // 64aa:30c0
db dummyd_67b80[32]; // 64aa:30e0
db dummyd_67ba0[32]; // 64aa:3100
db dummyd_67bc0[32]; // 64aa:3120
db dummyd_67be0[32]; // 64aa:3140
db dummyd_67c00[32]; // 64aa:3160
db dummyd_67c20[32]; // 64aa:3180
db dummyd_67c40[32]; // 64aa:31a0
db dummyd_67c60[32]; // 64aa:31c0
db dummyd_67c80[32]; // 64aa:31e0
db dummyd_67ca0[32]; // 64aa:3200
db dummyd_67cc0[32]; // 64aa:3220
db dummyd_67ce0[32]; // 64aa:3240
db dummyd_67d00[32]; // 64aa:3260
db dummyd_67d20[32]; // 64aa:3280
db dummyd_67d40[32]; // 64aa:32a0
db dummyd_67d60[32]; // 64aa:32c0
db dummyd_67d80[32]; // 64aa:32e0
db dummyd_67da0[32]; // 64aa:3300
db dummyd_67dc0[32]; // 64aa:3320
db dummyd_67de0[32]; // 64aa:3340
db dummyd_67e00[32]; // 64aa:3360
db dummyd_67e20[32]; // 64aa:3380
db dummyd_67e40[32]; // 64aa:33a0
db dummyd_67e60[32]; // 64aa:33c0
db dummyd_67e80[32]; // 64aa:33e0
db dummyd_67ea0[32]; // 64aa:3400
db dummyd_67ec0[32]; // 64aa:3420
db dummyd_67ee0[32]; // 64aa:3440
db dummyd_67f00[32]; // 64aa:3460
db dummyd_67f20[32]; // 64aa:3480
db dummyd_67f40[32]; // 64aa:34a0
db dummyd_67f60[32]; // 64aa:34c0
db dummyd_67f80[32]; // 64aa:34e0
db dummyd_67fa0[32]; // 64aa:3500
db dummyd_67fc0[32]; // 64aa:3520
db dummyd_67fe0[32]; // 64aa:3540
db dummyd_68000[32]; // 64aa:3560
db dummyd_68020[32]; // 64aa:3580
db dummyd_68040[32]; // 64aa:35a0
db dummyd_68060[32]; // 64aa:35c0
db dummyd_68080[32]; // 64aa:35e0
db dummyd_680a0[32]; // 64aa:3600
db dummyd_680c0[32]; // 64aa:3620
db dummyd_680e0[32]; // 64aa:3640
db dummyd_68100[32]; // 64aa:3660
db dummyd_68120[32]; // 64aa:3680
db dummyd_68140[32]; // 64aa:36a0
db dummyd_68160[32]; // 64aa:36c0
db dummyd_68180[32]; // 64aa:36e0
db dummyd_681a0[32]; // 64aa:3700
db dummyd_681c0[32]; // 64aa:3720
db dummyd_681e0[32]; // 64aa:3740
db dummyd_68200[32]; // 64aa:3760
db dummyd_68220[32]; // 64aa:3780
db dummyd_68240[32]; // 64aa:37a0
db dummyd_68260[32]; // 64aa:37c0
db dummyd_68280[32]; // 64aa:37e0
db dummyd_682a0[32]; // 64aa:3800
db dummyd_682c0[32]; // 64aa:3820
db dummyd_682e0[32]; // 64aa:3840
db dummyd_68300[32]; // 64aa:3860
db dummyd_68320[32]; // 64aa:3880
db dummyd_68340[32]; // 64aa:38a0
db dummyd_68360[32]; // 64aa:38c0
db dummyd_68380[32]; // 64aa:38e0
db dummyd_683a0[32]; // 64aa:3900
db dummyd_683c0[32]; // 64aa:3920
db dummyd_683e0[32]; // 64aa:3940
db dummyd_68400[32]; // 64aa:3960
db dummyd_68420[32]; // 64aa:3980
db dummyd_68440[32]; // 64aa:39a0
db dummyd_68460[32]; // 64aa:39c0
db dummyd_68480[32]; // 64aa:39e0
db dummyd_684a0[32]; // 64aa:3a00
db dummyd_684c0[32]; // 64aa:3a20
db dummyd_684e0[32]; // 64aa:3a40
db dummyd_68500[32]; // 64aa:3a60
db dummyd_68520[32]; // 64aa:3a80
db dummyd_68540[32]; // 64aa:3aa0
db dummyd_68560[32]; // 64aa:3ac0
db dummyd_68580[32]; // 64aa:3ae0
db dummyd_685a0[32]; // 64aa:3b00
db dummyd_685c0[32]; // 64aa:3b20
db dummyd_685e0[32]; // 64aa:3b40
db dummyd_68600[32]; // 64aa:3b60
db dummyd_68620[32]; // 64aa:3b80
db dummyd_68640[32]; // 64aa:3ba0
db dummyd_68660[32]; // 64aa:3bc0
db dummyd_68680[32]; // 64aa:3be0
db dummyd_686a0[32]; // 64aa:3c00
db dummyd_686c0[32]; // 64aa:3c20
db dummyd_686e0[32]; // 64aa:3c40
db dummyd_68700[32]; // 64aa:3c60
db dummyd_68720[32]; // 64aa:3c80
db dummyd_68740[32]; // 64aa:3ca0
db dummyd_68760[32]; // 64aa:3cc0
db dummyd_68780[32]; // 64aa:3ce0
db dummyd_687a0[32]; // 64aa:3d00
db dummyd_687c0[32]; // 64aa:3d20
db dummyd_687e0[32]; // 64aa:3d40
db dummyd_68800[32]; // 64aa:3d60
db dummyd_68820[32]; // 64aa:3d80
db dummyd_68840[32]; // 64aa:3da0
db dummyd_68860[32]; // 64aa:3dc0
db dummyd_68880[32]; // 64aa:3de0
db dummyd_688a0[32]; // 64aa:3e00
db dummyd_688c0[32]; // 64aa:3e20
db dummyd_688e0[32]; // 64aa:3e40
db dummyd_68900[32]; // 64aa:3e60
db dummyd_68920[32]; // 64aa:3e80
db dummyd_68940[32]; // 64aa:3ea0
db dummyd_68960[32]; // 64aa:3ec0
db dummyd_68980[32]; // 64aa:3ee0
db dummyd_689a0[32]; // 64aa:3f00
db dummyd_689c0[32]; // 64aa:3f20
db dummyd_689e0[32]; // 64aa:3f40
db dummyd_68a00[32]; // 64aa:3f60
db dummyd_68a20[32]; // 64aa:3f80
db dummyd_68a40[32]; // 64aa:3fa0
db dummyd_68a60[32]; // 64aa:3fc0
db dummyd_68a80[32]; // 64aa:3fe0
db dummyd_68aa0[32]; // 64aa:4000
db dummyd_68ac0[32]; // 64aa:4020
db dummyd_68ae0[32]; // 64aa:4040
db dummyd_68b00[32]; // 64aa:4060
db dummyd_68b20[32]; // 64aa:4080
db dummyd_68b40[32]; // 64aa:40a0
db dummyd_68b60[32]; // 64aa:40c0
db dummyd_68b80[32]; // 64aa:40e0
db dummyd_68ba0[32]; // 64aa:4100
db dummyd_68bc0[32]; // 64aa:4120
db dummyd_68be0[32]; // 64aa:4140
db dummyd_68c00[32]; // 64aa:4160
db dummyd_68c20[32]; // 64aa:4180
db dummyd_68c40[32]; // 64aa:41a0
db dummyd_68c60[32]; // 64aa:41c0
db dummyd_68c80[32]; // 64aa:41e0
db dummyd_68ca0[32]; // 64aa:4200
db dummyd_68cc0[32]; // 64aa:4220
db dummyd_68ce0[32]; // 64aa:4240
db dummyd_68d00[32]; // 64aa:4260
db dummyd_68d20[32]; // 64aa:4280
db dummyd_68d40[32]; // 64aa:42a0
db dummyd_68d60[32]; // 64aa:42c0
db dummyd_68d80[32]; // 64aa:42e0
db dummyd_68da0[32]; // 64aa:4300
db dummyd_68dc0[32]; // 64aa:4320
db dummyd_68de0[32]; // 64aa:4340
db dummyd_68e00[32]; // 64aa:4360
db dummyd_68e20[32]; // 64aa:4380
db dummyd_68e40[32]; // 64aa:43a0
db dummyd_68e60[32]; // 64aa:43c0
db dummyd_68e80[32]; // 64aa:43e0
db dummyd_68ea0[32]; // 64aa:4400
db dummyd_68ec0[32]; // 64aa:4420
db dummyd_68ee0[32]; // 64aa:4440
db dummyd_68f00[32]; // 64aa:4460
db dummyd_68f20[32]; // 64aa:4480
db dummyd_68f40[32]; // 64aa:44a0
db dummyd_68f60[32]; // 64aa:44c0
db dummyd_68f80[32]; // 64aa:44e0
db dummyd_68fa0[32]; // 64aa:4500
db dummyd_68fc0[32]; // 64aa:4520
db dummyd_68fe0[32]; // 64aa:4540
db dummyd_69000[32]; // 64aa:4560
db dummyd_69020[32]; // 64aa:4580
db dummyd_69040[32]; // 64aa:45a0
db dummyd_69060[32]; // 64aa:45c0
db dummyd_69080[32]; // 64aa:45e0
db dummyd_690a0[32]; // 64aa:4600
db dummyd_690c0[32]; // 64aa:4620
db dummyd_690e0[32]; // 64aa:4640
db dummyd_69100[32]; // 64aa:4660
db byte_77700; // 64aa:4680
db dummyd_69121[4850]; // 64aa:4681
db dummyd_6a413[12]; // 64aa:5973
db dummyd_6a41f[16]; // 64aa:597f
db dummyd_6a42f[2909]; // 64aa:598f
dd dummyd_6af8c; // 64aa:64ec
dw dummyd_6af90; // 64aa:64f0
dw dummyd_6af92; // 64aa:64f2
dw dummyd_6af94; // 64aa:64f4
dw dummyd_6af96; // 64aa:64f6
dw dummyd_6af98; // 64aa:64f8
dw dummyd_6af9a; // 64aa:64fa
dw dummyd_6af9c; // 64aa:64fc
dw dummyd_6af9e; // 64aa:64fe
dw dummyd_6afa0; // 64aa:6500
dw dummyd_6afa2; // 64aa:6502
dw dummyd_6afa4; // 64aa:6504
dw dummyd_6afa6; // 64aa:6506
db dummyd_6afa8;
db dummyd_6afa9;
db dummyd_6afaa;
dw dummyd_6afab; // 64aa:650b
dw dummyd_6afad; // 64aa:650d
dw dummyd_6afaf; // 64aa:650f
dw dummyd_6afb1; // 64aa:6511
dw dummyd_6afb3; // 64aa:6513
dw dummyd_6afb5; // 64aa:6515
dw dummyd_6afb7; // 64aa:6517
db dummyd_6afb9; // 64aa:6519
db dummyd_6afba; // 64aa:651a
db dummyd_6afbb; // 64aa:651b
db dummyd_6afbc; // 64aa:651c
db dummyd_6afbd;
db dummyd_6afbe; // 64aa:651e
db dummyd_6afbf;
db dummyd_6afc0; // 64aa:6520
db dummyd_6afc1;
db dummyd_6afc2; // 64aa:6522
db dummyd_6afc3;
db dummyd_6afc4; // 64aa:6524
db dummyd_6afc5;
db dummyd_6afc6; // 64aa:6526
db dummyd_6afc7; // 64aa:6527
db dummyd_6afc8; // 64aa:6528
db dummyd_6afc9; // 64aa:6529
db dummyd_6afca; // 64aa:652a
db dummyd_6afcb;
dd dummyd_6afcc; // 64aa:652c
dw dummyd_6afd0; // 64aa:6530
dw dummyd_6afd2; // 64aa:6532
dw dummyd_6afd4; // 64aa:6534
dw dummyd_6afd6; // 64aa:6536
dw dummyd_6afd8; // 64aa:6538
dw dummyd_6afda; // 64aa:653a
dw dummyd_6afdc; // 64aa:653c
dw dummyd_6afde; // 64aa:653e
dw dummyd_6afe0; // 64aa:6540
dw dummyd_6afe2; // 64aa:6542
db dummyd_6afe4; // 64aa:6544
db dummyd_6afe5; // 64aa:6545
dd dummyd_6afe6; // 64aa:6546
dw dummyd_6afea; // 64aa:654a
dw dummyd_6afec; // 64aa:654c
dw dummyd_6afee; // 64aa:654e
dw dummyd_6aff0; // 64aa:6550
db dummyd_6aff2; // 64aa:6552
db dummyd_6aff3; // 64aa:6553
dd dummyd_6aff4; // 64aa:6554
db dummyd_6aff8; // 64aa:6558
db dummyd_6aff9; // 64aa:6559
dd dummyd_6affa; // 64aa:655a
db dummyd_6affe;
db dummyd_6afff; // 64aa:655f
db dummyd_6b000; // 64aa:6560
db dummyd_6b001; // 64aa:6561
db dummyd_6b002; // 64aa:6562
db dummyd_6b003; // 64aa:6563
db dummyd_6b004; // 64aa:6564
db dummyd_6b005; // 64aa:6565
db dummyd_6b006; // 64aa:6566
db dummyd_6b007; // 64aa:6567
dd dummyd_6b008; // 64aa:6568
db dummyd_6b00c; // 64aa:656c
db dummyd_6b00d; // 64aa:656d
db dummyd_6b00e; // 64aa:656e
db dummyd_6b00f; // 64aa:656f
db dummyd_6b010; // 64aa:6570
db dummyd_6b011; // 64aa:6571
db dummyd_6b012; // 64aa:6572
db dummyd_6b013; // 64aa:6573
dd dummyd_6b014; // 64aa:6574
db dummyd_6b018; // 64aa:6578
db dummyd_6b019; // 64aa:6579
db dummyd_6b01a; // 64aa:657a
db dummyd_6b01b; // 64aa:657b
dd dummyd_6b01c; // 64aa:657c
dw dummyd_6b020; // 64aa:6580
db dummyd_6b022; // 64aa:6582
db dummyd_6b023; // 64aa:6583
dd dummyd_6b024; // 64aa:6584
db dummyd_6b028; // 64aa:6588
db dummyd_6b029; // 64aa:6589
db dummyd_6b02a; // 64aa:658a
db dummyd_6b02b; // 64aa:658b
db dummyd_6b02c; // 64aa:658c
db dummyd_6b02d; // 64aa:658d
db dummyd_6b02e; // 64aa:658e
dw dummyd_6b02f; // 64aa:658f
dw dummyd_6b031; // 64aa:6591
db dummyd_6b033; // 64aa:6593
db dummyd_6b034; // 64aa:6594
db dummyd_6b035; // 64aa:6595
db dummyd_6b036; // 64aa:6596
db dummyd_6b037; // 64aa:6597
db dummyd_6b038;
db dummyd_6b039;
db dummyd_6b03a; // 64aa:659a
db dummyd_6b03b;
db dummyd_6b03c;
db dummyd_6b03d; // 64aa:659d
db dummyd_6b03e; // 64aa:659e
db dummyd_6b03f; // 64aa:659f
db dummyd_6b040[47587]; // 64aa:65a0
db dummyd_76a23[7037];
db dummyd_785a0[208]; // 785a:0000
db dummyd_78670[24289]; // 7867:0000
db dummyd_7e551[532]; // 7867:5ee1
db dummyd_7e765[35435]; // 7867:60f5

#ifdef DOSBOX_CUSTOM
    db filll[1024*1024*16];
#endif
                        db stack[STACK_SIZE];
                        db heap[HEAP_SIZE];
                };
}
#pragma pack(pop)

#endif
