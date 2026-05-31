
#ifndef ___DATA_H__
#define ___DATA_H__
#include "../asm.h"


#pragma pack(push, 1)
namespace m2c{
struct Memory{
db dummyf_0[6688];
db dummyf_1a20[26];
db byte_1001a; // 01a2:001a
db dummyf_1a3b[820];
db byte_1034f; // 01a2:034f
char accloakend[9]; // 01a2:0350
dw dummyf_1d79; // 01a2:0359
db dummyf_1d7b; // 01a2:035b
db dummyf_1d7c; // 01a2:035c
dw dummyf_1d7d; // 01a2:035d
dw dummyf_1d7f; // 01a2:035f
char aalloc1mb[11]; // 01a2:0361
char adosliedaboutme[25]; // 01a2:036c
char afilenamenotfou[19]; // 01a2:0385
char anotenoughmemto[28]; // 01a2:0398
char aoverlayloadfai[20]; // 01a2:03b4
char aoverrunallocme[18]; // 01a2:03c8
char acantshrinkallo[19]; // 01a2:03da
char aerrorreleasing_0[28]; // 01a2:03ed
db dummyf_1e29;
db dummyf_1e2a;
db dummyf_1e2b; // 01a2:040b
db dummyf_1e2c; // 01a2:040c
db dummyf_1e2d; // 01a2:040d
db dummyf_1e2e; // 01a2:040e
db dummyf_1e2f; // 01a2:040f
db dummyf_1e30; // 01a2:0410
char af15a[5]; // 01a2:0411
char accbincvexe[16]; // 01a2:0416
char amcvexe[8]; // 01a2:0426
char asuexe[7]; // 01a2:042e
char astartexe[10]; // 01a2:0435
char amissionsexe[13]; // 01a2:043f
char aegameexe[10]; // 01a2:044c
char aendexe[8]; // 01a2:0456
char adsexe[7]; // 01a2:045e
char amiscexe[9]; // 01a2:0465
char amgraphicexe_0[13]; // 01a2:046e
db dummyf_1e9b; // 01a2:047b
db dummyf_1e9c; // 01a2:047c
db dummyf_1e9d; // 01a2:047d
dw dummyf_1e9e; // 01a2:047e
dw dummyf_1ea0; // 01a2:0480
db dummyf_1ea2; // 01a2:0482
db dummyf_1ea3; // 01a2:0483
db dummyf_1ea4;
db dummyf_1ea5;
db dummyf_1ea6; // 01a2:0486
db dummyf_1ea7; // 01a2:0487
db dummyf_1ea8; // 01a2:0488
db dummyf_1ea9; // 01a2:0489
db dummyf_1eaa; // 01a2:048a
db dummyf_1eab;
db dummyf_1eac; // 01a2:048c
db dummyf_1ead; // 01a2:048d
db dummyf_1eae; // 01a2:048e
db dummyf_1eaf;
db dummyf_1eb0; // 01a2:0490
db dummyf_1eb1; // 01a2:0491
db dummyf_1eb2;
db dummyf_1eb3; // 01a2:0493
char a2su[5]; // 01a2:0494
db dummyf_1eb9[32]; // 01a2:0499
db dummyf_1ed9[32]; // 01a2:04b9
db dummyf_1ef9[32]; // 01a2:04d9
db dummyf_1f19;
db dummyf_1f1a;
db dummyf_1f1b;
db dummyf_1f1c;
db dummyf_1f1d;
db dummyf_1f1e;
db dummyf_1f1f;
db dummyf_1f20;
db dummyf_1f21;
db dummyf_1f22;
db dummyf_1f23;
db dummyf_1f24;
db dummyf_1f25;
db dummyf_1f26;
db dummyf_1f27;
db dummyf_1f28;
db dummyf_1f29;
db dummyf_1f2a;
db dummyf_1f2b;
db dummyf_1f2c;
db dummyf_1f2d;
db dummyf_1f2e;
db dummyf_1f2f;
db dummyf_1f30; // 01a2:0510
char a2endexe[13]; // 01a2:0511
char a2egameexe[16]; // 01a2:051e
char a2startexe[16]; // 01a2:052e
db dummyf_1f5e; // 01a2:053e
char a0_0[4]; // 01a2:053f
db dummyf_1f63[32]; // 01a2:0543
db dummyf_1f83; // 01a2:0563
db dummyf_1f84; // 01a2:0564
db dummyf_1f85; // 01a2:0565
db dummyf_1f86; // 01a2:0566
db dummyf_1f87; // 01a2:0567
db dummyf_1f88; // 01a2:0568
db dummyf_1f89; // 01a2:0569
db dummyf_1f8a; // 01a2:056a
db dummyf_1f8b; // 01a2:056b
db dummyf_1f8c; // 01a2:056c
db dummyf_1f8d; // 01a2:056d
db dummyf_1f8e; // 01a2:056e
db dummyf_1f8f; // 01a2:056f
db dummyf_1f90; // 01a2:0570
db dummyf_1f91; // 01a2:0571
db dummyf_1f92; // 01a2:0572
db dummyf_1f93; // 01a2:0573
db dummyf_1f94; // 01a2:0574
db dummyf_1f95; // 01a2:0575
db dummyf_1f96; // 01a2:0576
db dummyf_1f97; // 01a2:0577
db dummyf_1f98; // 01a2:0578
db dummyf_1f99; // 01a2:0579
db dummyf_1f9a; // 01a2:057a
db dummyf_1f9b; // 01a2:057b
dd dword_1057c; // 01a2:057c
dw word_10580; // 01a2:0580
dw word_10582; // 01a2:0582
db dummyf_1fa4; // 01a2:0584
db dummyf_1fa5; // 01a2:0585
dw word_10586; // 01a2:0586
db dummyf_1fa8[32]; // 01a2:0588
db dummyf_1fc8[32]; // 01a2:05a8
db dummyf_1fe8[32]; // 01a2:05c8
db dummyf_2008; // 01a2:05e8
db dummyf_2009; // 01a2:05e9
db dummyf_200a; // 01a2:05ea
db dummyf_200b; // 01a2:05eb
dw dummyf_200c; // 01a2:05ec
db dummyf_200e[32]; // 01a2:05ee
db dummyf_202e; // 01a2:060e
db dummyf_202f; // 01a2:060f
db dummyf_2030; // 01a2:0610
db dummyf_2031; // 01a2:0611
db dummyf_2032; // 01a2:0612
db dummyf_2033; // 01a2:0613
db dummyf_2034; // 01a2:0614
db dummyf_2035; // 01a2:0615
db dummyf_2036; // 01a2:0616
db dummyf_2037; // 01a2:0617
db dummyf_2038; // 01a2:0618
db dummyf_2039; // 01a2:0619
db dummyf_203a; // 01a2:061a
db dummyf_203b;
db dummyf_203c; // 01a2:061c
db dummyf_203d; // 01a2:061d
db dummyf_203e; // 01a2:061e
db dummyf_203f; // 01a2:061f
char amgraphicexe[13]; // 0204:0000
char __aasoundexe[11]; // 0204:000d
db dummyf_2058;
db dummyf_2059; // 0204:0019
dw dummyf_205a; // 0204:001a
dw dummyf_205c; // 0204:001c
dw dummyf_205e; // 0204:001e
dw dummyf_2060; // 0204:0020
db dummyf_2062[32]; // 0204:0022
db dummyf_2082[32]; // 0204:0042
db dummyf_20a2; // 0204:0062
db dummyf_20a3; // 0204:0063
db dummyf_20a4; // 0204:0064
db dummyf_20a5; // 0204:0065
db dummyf_20a6;
db dummyf_20a7;
db dummyf_20a8; // 0204:0068
db dummyf_20a9; // 0204:0069
db dummyf_20aa; // 0204:006a
db dummyf_20ab; // 0204:006b
db dummyf_20ac; // 0204:006c
db dummyf_20ad; // 0204:006d
db dummyf_20ae; // 0204:006e
db dummyf_20af; // 0204:006f
db dummyf_20b0;
db dummyf_20b1;
db dummyf_20b2;
db dummyf_20b3;
db dummyf_20b4; // 0204:0074
db dummyf_20b5; // 0204:0075
db dummyf_20b6; // 0204:0076
db dummyf_20b7; // 0204:0077
db dummyf_20b8; // 0204:0078
db dummyf_20b9;
db dummyf_20ba[27]; // 0204:007a
db dummyf_20d5[32]; // 0204:007a
db dummyf_20f5[17]; // 0204:007a
db dummyf_2106[17]; // 0204:007a
db dummyf_2117[17]; // 0204:007a
db dummyf_2128[24]; // 0204:007a
db dummyf_2140[17]; // 0204:007a
db dummyf_2151[17]; // 0204:007a
db dummyf_2162[17]; // 0204:007a
db dummyf_2173[17]; // 0204:007a
db dummyf_2184[14]; // 0204:007a
db dummyf_2192[14]; // 0204:007a
db dummyf_21a0[11]; // 0204:007a
db dummyf_21ab[15]; // 0204:007a
db dummyf_21ba[14]; // 0204:007a
db dummyf_21c8[14]; // 0204:007a
db dummyf_21d6[15]; // 0204:007a
db dummyf_21e5[15]; // 0204:007a
db dummyf_21f4[13]; // 0204:007a
db dummyf_2201[13]; // 0204:007a
db dummyf_220e[13]; // 0204:007a
db dummyf_221b[15]; // 0204:007a
db dummyf_222a[14]; // 0204:007a
db dummyf_2238[14]; // 0204:007a
db dummyf_2246[13]; // 0204:007a
db dummyf_2253[14]; // 0204:007a
db dummyf_2261[15]; // 0204:007a
db dummyf_2270[17]; // 0204:007a
db dummyf_2281[18]; // 0204:007a
db dummyf_2293[18]; // 0204:007a
db dummyf_22a5[17]; // 0204:007a
db dummyf_22b6[17]; // 0204:007a
db dummyf_22c7[19]; // 0204:007a
db dummyf_22da[14]; // 0204:007a
db dummyf_22e8[14]; // 0204:007a
db dummyf_22f6[15]; // 0204:007a
db dummyf_2305[37]; // 0204:007a
db dummyf_232a[21]; // 0204:007a
db dummyf_233f[11]; // 0204:007a
db dummyf_234a[42]; // 0204:007a
db dummyf_2374[16]; // 0204:007a
db dummyf_2384[13]; // 0204:007a
db dummyf_2391[14]; // 0204:007a
db dummyf_239f[15]; // 0204:007a
db dummyf_23ae[13]; // 0204:007a
db dummyf_23bb[9]; // 0204:007a
dw dummyf_23c4;
db dummyf_23c6[26];
db dummyf_23e0[42]; // 0204:03a0
db dummyf_240a[100]; // 0204:03a0
db dummyf_246e[80]; // 0204:03a0
db dummyf_24be[14]; // 0204:03a0
db dummyf_24cc[14]; // 0204:03a0
db dummyf_24da[20]; // 0204:03a0
db dummyf_24ee[11]; // 0204:03a0
db dummyf_24f9[112]; // 0204:03a0
char atripoli[8]; // 0204:0529
char aportbrega[11]; // 0204:0531
char amisratah[9]; // 0204:053c
char asirt[5]; // 0204:0545
char araslanuf[10]; // 0204:054a
char abenghazi[9]; // 0204:0554
char asabha[6]; // 0204:055d
char acrete[6]; // 0204:0563
char asicily[7]; // 0204:0569
char amalta[6]; // 0204:0570
char asigonella[10]; // 0204:0576
char asudabay[9]; // 0204:0580
char ahalfar[7]; // 0204:0589
char aidris[6]; // 0204:0590
char aalbayda[9]; // 0204:0596
char ayafran[7]; // 0204:059f
char aalmukhayli[12]; // 0204:05a6
char abeda[5]; // 0204:05b2
char asarir[6]; // 0204:05b7
char agialo[6]; // 0204:05bd
char araguba[7]; // 0204:05c3
char aamal[5]; // 0204:05ca
char aoiltanker[11]; // 0204:05cf
char ajalooasis[11]; // 0204:05da
char amaradah[8]; // 0204:05e5
char abenina[7]; // 0204:05ed
db dummyf_2634[3]; // 0204:05f4
char aairbase[8]; // 0204:05f7
db dummyf_263f[4]; // 0204:05ff
char aoilrig[8]; // 0204:0603
db dummyf_264b[3]; // 0204:060b
char avillage[8]; // 0204:060e
char aheadquarters[13]; // 0204:0616
char atankfarm[10]; // 0204:0623
db dummyf_266d[2]; // 0204:062d
char asamissile[11]; // 0204:062f
db dummyf_267a[4]; // 0204:063a
char asamradar[10]; // 0204:063e
char atower[6]; // 0204:0648
char ahangar[7]; // 0204:064e
db dummyf_2695[1];
char arefinery[9]; // 0204:0656
char amissileboat[13]; // 0204:065f
db dummyf_26ac[2]; // 0204:066c
char apumpstation[13]; // 0204:066e
db dummyf_26bb[5]; // 0204:067b
char __aussamerica[12]; // 0204:0680
dw dummyf_26cc;
db dummyf_26ce[3]; // 0204:068e
char adestroyer[10]; // 0204:0691
db dummyf_26db[4]; // 0204:069b
char afire[5]; // 0204:069f
char amissile[8]; // 0204:06a4
char amobilesam[11]; // 0204:06ac
char atank[5]; // 0204:06b7
db dummyf_26fc[2]; // 0204:06bc
char aairplane[9]; // 0204:06be
char anuclearplant[14]; // 0204:06c7
char acamp[5]; // 0204:06d5
char amissileboat_0[13]; // 0204:06da
char aairstrip[9]; // 0204:06e7
db dummyf_2730;
char arefinery_0[9]; // 0204:06f1
char aussamerica[12]; // 0204:06fa
char awreck[6]; // 0204:0706
char aspecialobject1[17]; // 0204:070c
char aspecialobject2[17]; // 0204:071d
db dummyf_276e[37]; // 0204:072e
dw dummyf_2793;
db dummyf_2795[209]; // 0204:0755
db dummyf_2866[84]; // 0204:0755
db dummyf_28ba[34]; // 0204:0755
db dummyf_28dc[56]; // 0204:0755
db byte_10ef4; // 0204:08d4
db dummyf_2915[32]; // 0204:08d5
db dummyf_2935[32]; // 0204:08f5
db dummyf_2955; // 0204:0915
db dummyf_2956; // 0204:0916
db dummyf_2957[11]; // 0204:0917
db dummyf_2962[13]; // 0204:0917
db dummyf_296f[14]; // 0204:0917
db dummyf_297d[13]; // 0204:0917
db dummyf_298a[12]; // 0204:0917
db dummyf_2996[4]; // 0204:0917
db dummyf_299a[1445];
db dummyf_2f3f;
db dummyf_2f40[783];
db dummyf_324f[32]; // 0204:120f
db dummyf_326f[32]; // 0204:122f
db dummyf_328f[32]; // 0204:124f
db dummyf_32af[32]; // 0204:126f
db dummyf_32cf; // 0204:128f
db dummyf_32d0; // 0204:1290
db dummyf_32d1; // 0204:1291
db dummyf_32d2; // 0204:1292
db dummyf_32d3[5];
db dummyf_32d8; // 0204:1298
db dummyf_32d9;
db dummyf_32da; // 0204:129a
db dummyf_32db; // 0204:129b
db dummyf_32dc; // 0204:129c
db dummyf_32dd; // 0204:129d
db dummyf_32de; // 0204:129e
db dummyf_32df; // 0204:129f
db dummyf_32e0; // 0204:12a0
db dummyf_32e1; // 0204:12a1
db dummyf_32e2; // 0204:12a2
db dummyf_32e3; // 0204:12a3
db dummyf_32e4; // 0204:12a4
db dummyf_32e5; // 0204:12a5
db dummyf_32e6; // 0204:12a6
db dummyf_32e7; // 0204:12a7
db dummyf_32e8; // 0204:12a8
db dummyf_32e9; // 0204:12a9
db dummyf_32ea; // 0204:12aa
db dummyf_32eb; // 0204:12ab
db dummyf_32ec; // 0204:12ac
db dummyf_32ed; // 0204:12ad
db dummyf_32ee; // 0204:12ae
db dummyf_32ef; // 0204:12af
db dummyf_32f0; // 0204:12b0
db dummyf_32f1; // 0204:12b1
db dummyf_32f2; // 0204:12b2
db dummyf_32f3; // 0204:12b3
db __jpt_13a6f; // 0204:12b4
db dummyf_32f5;
db dummyf_32f6; // 0204:12b6
db dummyf_32f7; // 0204:12b7
db dummyf_32f8[300];
db dummyf_3424[32]; // 0204:13e4
db dummyf_3444; // 0204:1404
db dummyf_3445;
db dummyf_3446; // 0204:1406
db dummyf_3447; // 0204:1407
db dummyf_3448; // 0204:1408
db dummyf_3449; // 0204:1409
db dummyf_344a; // 0204:140a
db dummyf_344b;
db dummyf_344c;
db dummyf_344d;
db dummyf_344e;
db dummyf_344f;
char af15iiadlib3149[21]; // 0345:0000
db dummyf_3465[3];
dw dummyf_3468; // 0345:0018
dw dummyf_346a; // 0345:001a
db dummyf_346c; // 0345:001c
db dummyf_346d;
db dummyf_346e; // 0345:001e
db dummyf_346f; // 0345:001f
db dummyf_3470;
db dummyf_3471;
db dummyf_3472; // 0345:0022
db dummyf_3473;
db dummyf_3474; // 0345:0024
db dummyf_3475; // 0345:0025
db dummyf_3476; // 0345:0026
db dummyf_3477; // 0345:0027
db dummyf_3478; // 0345:0028
db dummyf_3479; // 0345:0029
db dummyf_347a; // 0345:002a
db dummyf_347b; // 0345:002b
db dummyf_347c; // 0345:002c
db dummyf_347d; // 0345:002d
db dummyf_347e; // 0345:002e
db dummyf_347f; // 0345:002f
db dummyf_3480; // 0345:0030
db dummyf_3481; // 0345:0031
db dummyf_3482; // 0345:0032
db dummyf_3483; // 0345:0033
db dummyf_3484; // 0345:0034
db dummyf_3485; // 0345:0035
db dummyf_3486; // 0345:0036
db dummyf_3487; // 0345:0037
db dummyf_3488[438]; // 0345:0038
db dummyf_363e[32]; // 0345:01ee
db dummyf_365e[32]; // 0345:020e
db dummyf_367e;
db dummyf_367f;
db dummyf_3680; // 0345:0230
db dummyf_3681; // 0345:0231
db dummyf_3682; // 0345:0232
db dummyf_3683; // 0345:0233
dw dummyf_3684; // 0345:0234
dw dummyf_3686; // 0345:0236
db dummyf_3688;
db dummyf_3689;
db unk_11c6a; // 0345:023a
db unk_11c6b; // 0345:023b
char anoadlibboardpr[33]; // 0345:023c
dw word_11c8d; // 0345:025d
dw word_11c8f; // 0345:025f
db dummyf_36b1;
db dummyf_36b2;
dw word_11c93; // 0345:0263
db byte_11c95; // 0345:0265
db byte_11c96; // 0345:0266
dw word_11c97; // 0345:0267
dw word_11c99; // 0345:0269
db dummyf_36bb;
db dummyf_36bc;
db unk_11c9d; // 0345:026d
db dummyf_36be; // 0345:026e
db dummyf_36bf; // 0345:026f
db dummyf_36c0; // 0345:0270
db dummyf_36c1; // 0345:0271
db dummyf_36c2; // 0345:0272
db dummyf_36c3; // 0345:0273
db dummyf_36c4; // 0345:0274
db dummyf_36c5; // 0345:0275
db dummyf_36c6; // 0345:0276
db dummyf_36c7; // 0345:0277
db dummyf_36c8; // 0345:0278
dw word_11ca9; // 0345:0279
db byte_11cab; // 0345:027b
dw word_11cac; // 0345:027c
dw word_11cae; // 0345:027e
dw word_11cb0; // 0345:0280
db dummyf_36d2;
db dummyf_36d3;
dw word_11cb4; // 0345:0284
db byte_11cb6; // 0345:0286
db byte_11cb7; // 0345:0287
dw word_11cb8; // 0345:0288
db dummyf_36da[32]; // 0345:028a
db byte_11cda; // 0345:02aa
db byte_11cdb; // 0345:02ab
db byte_11cdc; // 0345:02ac
db dummyf_36fd[32]; // 0345:02ad
db dummyf_371d[32]; // 0345:02cd
db dummyf_373d[32]; // 0345:02ed
db dummyf_375d[32]; // 0345:030d
db dummyf_377d[32]; // 0345:032d
db dummyf_379d[32]; // 0345:034d
db dummyf_37bd[32]; // 0345:036d
db dummyf_37dd[32]; // 0345:038d
db dummyf_37fd[32]; // 0345:03ad
db dummyf_381d[32]; // 0345:03cd
db dummyf_383d[32]; // 0345:03ed
db dummyf_385d[32]; // 0345:040d
db dummyf_387d[32]; // 0345:042d
db dummyf_389d[32]; // 0345:044d
db dummyf_38bd[32]; // 0345:046d
db dummyf_38dd[32]; // 0345:048d
db dummyf_38fd[32]; // 0345:04ad
db dummyf_391d[32]; // 0345:04cd
db dummyf_393d[32]; // 0345:04ed
db dummyf_395d[32]; // 0345:050d
db dummyf_397d[32]; // 0345:052d
db dummyf_399d[32]; // 0345:054d
db dummyf_39bd[32]; // 0345:056d
db dummyf_39dd[32]; // 0345:058d
db dummyf_39fd[32]; // 0345:05ad
db dummyf_3a1d[32]; // 0345:05cd
db dummyf_3a3d[32]; // 0345:05ed
db dummyf_3a5d[32]; // 0345:060d
db dummyf_3a7d[32]; // 0345:062d
db dummyf_3a9d[32]; // 0345:064d
db dummyf_3abd[32]; // 0345:066d
db dummyf_3add[32]; // 0345:068d
db dummyf_3afd[32]; // 0345:06ad
db dummyf_3b1d[32]; // 0345:06cd
db dummyf_3b3d[32]; // 0345:06ed
db dummyf_3b5d[32]; // 0345:070d
db dummyf_3b7d[32]; // 0345:072d
db dummyf_3b9d[32]; // 0345:074d
db dummyf_3bbd[32]; // 0345:076d
db dummyf_3bdd;
db dummyf_3bde;
db dummyf_3bdf;
db dummyf_3be0; // 0345:0790
db dummyf_3be1;
db dummyf_3be2; // 0345:0792
db dummyf_3be3; // 0345:0793
db dummyf_3be4; // 0345:0794
db dummyf_3be5;
db dummyf_3be6; // 0345:0796
db dummyf_3be7;
db dummyf_3be8; // 0345:0798
db dummyf_3be9; // 0345:0799
db dummyf_3bea;
db dummyf_3beb;
db dummyf_3bec;
db dummyf_3bed; // 0345:079d
db dummyf_3bee;
db dummyf_3bef;
db dummyf_3bf0;
db dummyf_3bf1;
db dummyf_3bf2;
db dummyf_3bf3;
db dummyf_3bf4;
db dummyf_3bf5;
db unk_121d6; // 0345:07a6
db dummyf_3bf7[32]; // 0345:07a7
db dummyf_3c17[32]; // 0345:07c7
db dummyf_3c37;
db unk_12218; // 0345:07e8
db dummyf_3c39; // 0345:07e9
db dummyf_3c3a; // 0345:07ea
db dummyf_3c3b; // 0345:07eb
db dummyf_3c3c; // 0345:07ec
db dummyf_3c3d; // 0345:07ed
db dummyf_3c3e; // 0345:07ee
db dummyf_3c3f; // 0345:07ef
db dummyf_3c40; // 0345:07f0
db dummyf_3c41;
db dummyf_3c42;
db dummyf_3c43;
db unk_12224; // 0345:07f4
db dummyf_3c45; // 0345:07f5
db dummyf_3c46; // 0345:07f6
db dummyf_3c47; // 0345:07f7
db dummyf_3c48; // 0345:07f8
db dummyf_3c49; // 0345:07f9
db dummyf_3c4a;
db dummyf_3c4b;
db dummyf_3c4c;
db dummyf_3c4d;
db unk_1222e; // 0345:07fe
db dummyf_3c4f; // 0345:07ff
db dummyf_3c50; // 0345:0800
db dummyf_3c51; // 0345:0801
db dummyf_3c52; // 0345:0802
db dummyf_3c53; // 0345:0803
db dummyf_3c54; // 0345:0804
db dummyf_3c55; // 0345:0805
db dummyf_3c56; // 0345:0806
db dummyf_3c57; // 0345:0807
db dummyf_3c58; // 0345:0808
db dummyf_3c59;
db dummyf_3c5a;
db dummyf_3c5b;
db unk_1223c; // 0345:080c
db dummyf_3c5d; // 0345:080d
db dummyf_3c5e; // 0345:080e
db dummyf_3c5f; // 0345:080f
db dummyf_3c60; // 0345:0810
db dummyf_3c61; // 0345:0811
db dummyf_3c62; // 0345:0812
db dummyf_3c63; // 0345:0813
db dummyf_3c64;
db dummyf_3c65;
db unk_12246; // 0345:0816
db dummyf_3c67; // 0345:0817
db dummyf_3c68; // 0345:0818
db dummyf_3c69; // 0345:0819
db dummyf_3c6a; // 0345:081a
db dummyf_3c6b; // 0345:081b
db dummyf_3c6c; // 0345:081c
db dummyf_3c6d; // 0345:081d
db dummyf_3c6e;
db dummyf_3c6f;
db unk_12250; // 0345:0820
db dummyf_3c71; // 0345:0821
db dummyf_3c72; // 0345:0822
db dummyf_3c73; // 0345:0823
db dummyf_3c74; // 0345:0824
db dummyf_3c75; // 0345:0825
db dummyf_3c76;
db dummyf_3c77;
db unk_12258; // 0345:0828
db dummyf_3c79; // 0345:0829
db dummyf_3c7a; // 0345:082a
db dummyf_3c7b; // 0345:082b
db dummyf_3c7c; // 0345:082c
db dummyf_3c7d; // 0345:082d
db dummyf_3c7e;
db dummyf_3c7f;
db unk_12260; // 0345:0830
db dummyf_3c81; // 0345:0831
db dummyf_3c82; // 0345:0832
db dummyf_3c83; // 0345:0833
db dummyf_3c84; // 0345:0834
db dummyf_3c85; // 0345:0835
db dummyf_3c86;
db dummyf_3c87;
db unk_12268; // 0345:0838
db dummyf_3c89;
db dummyf_3c8a; // 0345:083a
db dummyf_3c8b; // 0345:083b
db dummyf_3c8c; // 0345:083c
db dummyf_3c8d; // 0345:083d
db dummyf_3c8e; // 0345:083e
db dummyf_3c8f; // 0345:083f
db dummyf_3c90;
db dummyf_3c91;
db unk_12272; // 0345:0842
db dummyf_3c93;
db unk_12274; // 0345:0844
db dummyf_3c95; // 0345:0845
db dummyf_3c96; // 0345:0846
db dummyf_3c97; // 0345:0847
db dummyf_3c98; // 0345:0848
db dummyf_3c99; // 0345:0849
db dummyf_3c9a; // 0345:084a
db dummyf_3c9b; // 0345:084b
db dummyf_3c9c;
db dummyf_3c9d;
db unk_1227e; // 0345:084e
db dummyf_3c9f; // 0345:084f
db dummyf_3ca0; // 0345:0850
db dummyf_3ca1; // 0345:0851
db dummyf_3ca2; // 0345:0852
db dummyf_3ca3; // 0345:0853
db dummyf_3ca4; // 0345:0854
db dummyf_3ca5; // 0345:0855
db dummyf_3ca6;
db dummyf_3ca7;
db unk_12288; // 0345:0858
db dummyf_3ca9; // 0345:0859
db dummyf_3caa; // 0345:085a
db dummyf_3cab;
db dummyf_3cac; // 0345:085c
db dummyf_3cad; // 0345:085d
db dummyf_3cae; // 0345:085e
db dummyf_3caf; // 0345:085f
db dummyf_3cb0; // 0345:0860
db dummyf_3cb1; // 0345:0861
db dummyf_3cb2; // 0345:0862
db dummyf_3cb3; // 0345:0863
db dummyf_3cb4;
db dummyf_3cb5; // 0345:0865
db dummyf_3cb6;
db dummyf_3cb7;
db dummyf_3cb8;
db dummyf_3cb9;
db unk_1229a; // 0345:086a
db dummyf_3cbb; // 0345:086b
db dummyf_3cbc; // 0345:086c
db dummyf_3cbd; // 0345:086d
db dummyf_3cbe; // 0345:086e
db dummyf_3cbf; // 0345:086f
db dummyf_3cc0; // 0345:0870
db dummyf_3cc1; // 0345:0871
db dummyf_3cc2; // 0345:0872
db dummyf_3cc3; // 0345:0873
db dummyf_3cc4; // 0345:0874
db dummyf_3cc5; // 0345:0875
db dummyf_3cc6;
db dummyf_3cc7; // 0345:0877
db dummyf_3cc8;
db dummyf_3cc9;
db dummyf_3cca;
db dummyf_3ccb;
db byte_122ac; // 0345:087c
db dummyf_3ccd; // 0345:087d
db dummyf_3cce; // 0345:087e
db dummyf_3ccf; // 0345:087f
db dummyf_3cd0; // 0345:0880
db dummyf_3cd1; // 0345:0881
db dummyf_3cd2;
db dummyf_3cd3;
db byte_122b4; // 0345:0884
db dummyf_3cd5; // 0345:0885
db dummyf_3cd6; // 0345:0886
db dummyf_3cd7; // 0345:0887
db dummyf_3cd8; // 0345:0888
db dummyf_3cd9; // 0345:0889
db dummyf_3cda;
db dummyf_3cdb;
db unk_122bc; // 0345:088c
db dummyf_3cdd[32]; // 0345:088d
db dummyf_3cfd[32]; // 0345:08ad
db dummyf_3d1d[32]; // 0345:08cd
db dummyf_3d3d; // 0345:08ed
db dummyf_3d3e; // 0345:08ee
db dummyf_3d3f; // 0345:08ef
db dummyf_3d40; // 0345:08f0
db dummyf_3d41; // 0345:08f1
db dummyf_3d42; // 0345:08f2
db dummyf_3d43; // 0345:08f3
db dummyf_3d44; // 0345:08f4
db dummyf_3d45; // 0345:08f5
db dummyf_3d46; // 0345:08f6
db dummyf_3d47; // 0345:08f7
db dummyf_3d48; // 0345:08f8
db dummyf_3d49; // 0345:08f9
db dummyf_3d4a; // 0345:08fa
db dummyf_3d4b; // 0345:08fb
db dummyf_3d4c; // 0345:08fc
db dummyf_3d4d; // 0345:08fd
db dummyf_3d4e; // 0345:08fe
db dummyf_3d4f; // 0345:08ff
db dummyf_3d50; // 0345:0900
db dummyf_3d51; // 0345:0901
db dummyf_3d52; // 0345:0902
db dummyf_3d53;
db dummyf_3d54;
db dummyf_3d55;
db unk_12336; // 0345:0906
db dummyf_3d57[32]; // 0345:0907
db dummyf_3d77[32]; // 0345:0927
db dummyf_3d97[32]; // 0345:0947
db dummyf_3db7; // 0345:0967
db dummyf_3db8; // 0345:0968
db dummyf_3db9; // 0345:0969
db dummyf_3dba; // 0345:096a
db dummyf_3dbb; // 0345:096b
db dummyf_3dbc; // 0345:096c
db dummyf_3dbd; // 0345:096d
db dummyf_3dbe; // 0345:096e
db dummyf_3dbf; // 0345:096f
db dummyf_3dc0; // 0345:0970
db dummyf_3dc1; // 0345:0971
db dummyf_3dc2; // 0345:0972
db dummyf_3dc3; // 0345:0973
db dummyf_3dc4; // 0345:0974
db dummyf_3dc5; // 0345:0975
db dummyf_3dc6; // 0345:0976
db dummyf_3dc7; // 0345:0977
db dummyf_3dc8; // 0345:0978
db dummyf_3dc9; // 0345:0979
db dummyf_3dca; // 0345:097a
db dummyf_3dcb; // 0345:097b
db dummyf_3dcc; // 0345:097c
db dummyf_3dcd;
db dummyf_3dce;
db dummyf_3dcf;
db unk_123b0; // 0345:0980
db dummyf_3dd1[32]; // 0345:0981
db dummyf_3df1[32]; // 0345:09a1
db dummyf_3e11;
db dummyf_3e12; // 0345:09c2
db dummyf_3e13; // 0345:09c3
db dummyf_3e14; // 0345:09c4
db dummyf_3e15; // 0345:09c5
db dummyf_3e16; // 0345:09c6
db dummyf_3e17; // 0345:09c7
db dummyf_3e18; // 0345:09c8
db dummyf_3e19; // 0345:09c9
db dummyf_3e1a; // 0345:09ca
db dummyf_3e1b; // 0345:09cb
db dummyf_3e1c; // 0345:09cc
db dummyf_3e1d;
db dummyf_3e1e;
db dummyf_3e1f;
db unk_12400; // 0345:09d0
db dummyf_3e21[32]; // 0345:09d1
db dummyf_3e41; // 0345:09f1
db dummyf_3e42; // 0345:09f2
db dummyf_3e43; // 0345:09f3
db dummyf_3e44; // 0345:09f4
db dummyf_3e45; // 0345:09f5
db dummyf_3e46; // 0345:09f6
db dummyf_3e47; // 0345:09f7
db dummyf_3e48; // 0345:09f8
db dummyf_3e49; // 0345:09f9
db dummyf_3e4a; // 0345:09fa
db dummyf_3e4b; // 0345:09fb
db dummyf_3e4c; // 0345:09fc
db dummyf_3e4d; // 0345:09fd
db dummyf_3e4e; // 0345:09fe
db dummyf_3e4f; // 0345:09ff
db dummyf_3e50; // 0345:0a00
db dummyf_3e51; // 0345:0a01
db dummyf_3e52; // 0345:0a02
db dummyf_3e53; // 0345:0a03
db dummyf_3e54; // 0345:0a04
db dummyf_3e55; // 0345:0a05
db dummyf_3e56; // 0345:0a06
db dummyf_3e57; // 0345:0a07
db dummyf_3e58; // 0345:0a08
db dummyf_3e59; // 0345:0a09
db dummyf_3e5a; // 0345:0a0a
db dummyf_3e5b; // 0345:0a0b
db dummyf_3e5c; // 0345:0a0c
db dummyf_3e5d;
db dummyf_3e5e;
db dummyf_3e5f;
db unk_12440; // 0345:0a10
db dummyf_3e61[32]; // 0345:0a11
db dummyf_3e81[32]; // 0345:0a31
db dummyf_3ea1; // 0345:0a51
db dummyf_3ea2; // 0345:0a52
db dummyf_3ea3; // 0345:0a53
db dummyf_3ea4; // 0345:0a54
db dummyf_3ea5; // 0345:0a55
db dummyf_3ea6; // 0345:0a56
db dummyf_3ea7; // 0345:0a57
db dummyf_3ea8; // 0345:0a58
db dummyf_3ea9; // 0345:0a59
db dummyf_3eaa; // 0345:0a5a
db dummyf_3eab; // 0345:0a5b
db dummyf_3eac; // 0345:0a5c
db dummyf_3ead; // 0345:0a5d
db dummyf_3eae; // 0345:0a5e
db dummyf_3eaf; // 0345:0a5f
db dummyf_3eb0; // 0345:0a60
db dummyf_3eb1;
db dummyf_3eb2;
db dummyf_3eb3;
db unk_12494; // 0345:0a64
db dummyf_3eb5[32]; // 0345:0a65
db dummyf_3ed5[32]; // 0345:0a85
db dummyf_3ef5[32]; // 0345:0aa5
db dummyf_3f15[32]; // 0345:0ac5
db dummyf_3f35; // 0345:0ae5
db dummyf_3f36; // 0345:0ae6
db dummyf_3f37; // 0345:0ae7
db dummyf_3f38; // 0345:0ae8
db dummyf_3f39; // 0345:0ae9
db dummyf_3f3a; // 0345:0aea
db dummyf_3f3b; // 0345:0aeb
db dummyf_3f3c; // 0345:0aec
db dummyf_3f3d; // 0345:0aed
db dummyf_3f3e; // 0345:0aee
db dummyf_3f3f; // 0345:0aef
db dummyf_3f40; // 0345:0af0
db dummyf_3f41;
db dummyf_3f42; // 0345:0af2
db dummyf_3f43;
db dummyf_3f44;
db dummyf_3f45;
db unk_12526; // 0345:0af6
db dummyf_3f47; // 0345:0af7
db dummyf_3f48; // 0345:0af8
db dummyf_3f49; // 0345:0af9
db dummyf_3f4a; // 0345:0afa
db dummyf_3f4b; // 0345:0afb
db dummyf_3f4c; // 0345:0afc
db dummyf_3f4d; // 0345:0afd
db dummyf_3f4e; // 0345:0afe
db dummyf_3f4f; // 0345:0aff
db dummyf_3f50; // 0345:0b00
db dummyf_3f51; // 0345:0b01
db dummyf_3f52;
db dummyf_3f53;
db unk_12534; // 0345:0b04
db dummyf_3f55; // 0345:0b05
db dummyf_3f56; // 0345:0b06
db dummyf_3f57; // 0345:0b07
db dummyf_3f58; // 0345:0b08
db dummyf_3f59; // 0345:0b09
db dummyf_3f5a; // 0345:0b0a
db dummyf_3f5b; // 0345:0b0b
db dummyf_3f5c; // 0345:0b0c
db dummyf_3f5d; // 0345:0b0d
db dummyf_3f5e; // 0345:0b0e
db dummyf_3f5f; // 0345:0b0f
db dummyf_3f60;
db dummyf_3f61;
db unk_12542; // 0345:0b12
db dummyf_3f63; // 0345:0b13
db dummyf_3f64; // 0345:0b14
db dummyf_3f65; // 0345:0b15
db dummyf_3f66; // 0345:0b16
db dummyf_3f67; // 0345:0b17
db dummyf_3f68; // 0345:0b18
db dummyf_3f69; // 0345:0b19
db dummyf_3f6a; // 0345:0b1a
db dummyf_3f6b; // 0345:0b1b
db dummyf_3f6c; // 0345:0b1c
db dummyf_3f6d; // 0345:0b1d
db dummyf_3f6e;
db dummyf_3f6f;
db unk_12550; // 0345:0b20
db dummyf_3f71; // 0345:0b21
db dummyf_3f72; // 0345:0b22
db dummyf_3f73; // 0345:0b23
db dummyf_3f74; // 0345:0b24
db dummyf_3f75; // 0345:0b25
db dummyf_3f76; // 0345:0b26
db dummyf_3f77; // 0345:0b27
db dummyf_3f78; // 0345:0b28
db dummyf_3f79; // 0345:0b29
db dummyf_3f7a; // 0345:0b2a
db dummyf_3f7b; // 0345:0b2b
db dummyf_3f7c;
db dummyf_3f7d;
db unk_1255e; // 0345:0b2e
db dummyf_3f7f; // 0345:0b2f
db dummyf_3f80; // 0345:0b30
db dummyf_3f81; // 0345:0b31
db dummyf_3f82; // 0345:0b32
db dummyf_3f83; // 0345:0b33
db dummyf_3f84; // 0345:0b34
db dummyf_3f85; // 0345:0b35
db dummyf_3f86; // 0345:0b36
db dummyf_3f87; // 0345:0b37
db dummyf_3f88; // 0345:0b38
db dummyf_3f89; // 0345:0b39
db dummyf_3f8a;
db dummyf_3f8b;
db unk_1256c; // 0345:0b3c
db dummyf_3f8d[32]; // 0345:0b3d
db dummyf_3fad[32]; // 0345:0b5d
db dummyf_3fcd; // 0345:0b7d
db dummyf_3fce; // 0345:0b7e
db dummyf_3fcf; // 0345:0b7f
db dummyf_3fd0; // 0345:0b80
db dummyf_3fd1; // 0345:0b81
db dummyf_3fd2; // 0345:0b82
db dummyf_3fd3; // 0345:0b83
db dummyf_3fd4; // 0345:0b84
db dummyf_3fd5; // 0345:0b85
db dummyf_3fd6; // 0345:0b86
db dummyf_3fd7; // 0345:0b87
db dummyf_3fd8; // 0345:0b88
db dummyf_3fd9;
db dummyf_3fda;
db dummyf_3fdb;
db dummyf_3fdc;
db dummyf_3fdd;
db dummyf_3fde;
db dummyf_3fdf;
db dummyf_3fe0;
db dummyf_3fe1;
dw word_125c2; // 0345:0b92
dw word_125c4; // 0345:0b94
dw word_125c6; // 0345:0b96
dw word_125c8; // 0345:0b98
db byte_125ca; // 0345:0b9a
db dummyf_3feb;
db byte_125cc; // 0345:0b9c
db dummyf_3fed;
db dummyf_3fee;
db dummyf_3fef;
db dummyf_3ff0; // 0345:0ba0
db dummyf_3ff1; // 0345:0ba1
db dummyf_3ff2; // 0345:0ba2
db dummyf_3ff3;
db dummyf_3ff4; // 0345:0ba4
db dummyf_3ff5; // 0345:0ba5
db dummyf_3ff6; // 0345:0ba6
db dummyf_3ff7; // 0345:0ba7
db dummyf_3ff8; // 0345:0ba8
db dummyf_3ff9;
db dummyf_3ffa;
db dummyf_3ffb;
db dummyf_3ffc;
db dummyf_3ffd;
db dummyf_3ffe;
db dummyf_3fff;
db byte_125e0; // 0345:0bb0
db dummyf_4001;
db dummyf_4002;
db dummyf_4003;
db dummyf_4004; // 0345:0bb4
db dummyf_4005; // 0345:0bb5
db dummyf_4006; // 0345:0bb6
db dummyf_4007;
db dummyf_4008; // 0345:0bb8
db dummyf_4009; // 0345:0bb9
db dummyf_400a; // 0345:0bba
db dummyf_400b; // 0345:0bbb
db dummyf_400c; // 0345:0bbc
db dummyf_400d;
db dummyf_400e;
db dummyf_400f;
db dummyf_4010;
db dummyf_4011;
db dummyf_4012;
db dummyf_4013;
db byte_125f4; // 0345:0bc4
db dummyf_4015;
db dummyf_4016;
db dummyf_4017;
db dummyf_4018; // 0345:0bc8
db dummyf_4019; // 0345:0bc9
db dummyf_401a; // 0345:0bca
db dummyf_401b;
db dummyf_401c; // 0345:0bcc
db dummyf_401d; // 0345:0bcd
db dummyf_401e; // 0345:0bce
db dummyf_401f; // 0345:0bcf
db dummyf_4020; // 0345:0bd0
db dummyf_4021;
db dummyf_4022;
db dummyf_4023;
db dummyf_4024;
db dummyf_4025;
db dummyf_4026;
db dummyf_4027;
db unk_12608; // 0345:0bd8
db dummyf_4029;
db dummyf_402a;
db dummyf_402b;
db dummyf_402c; // 0345:0bdc
db dummyf_402d; // 0345:0bdd
db dummyf_402e; // 0345:0bde
db dummyf_402f;
db dummyf_4030; // 0345:0be0
db dummyf_4031; // 0345:0be1
db dummyf_4032; // 0345:0be2
db dummyf_4033; // 0345:0be3
db dummyf_4034; // 0345:0be4
db dummyf_4035;
db dummyf_4036;
db dummyf_4037;
db dummyf_4038;
db dummyf_4039;
db dummyf_403a;
db dummyf_403b;
db byte_1261c; // 0345:0bec
db dummyf_403d;
db dummyf_403e;
db dummyf_403f;
db dummyf_4040; // 0345:0bf0
db dummyf_4041; // 0345:0bf1
db dummyf_4042; // 0345:0bf2
db dummyf_4043;
db dummyf_4044; // 0345:0bf4
db dummyf_4045; // 0345:0bf5
db dummyf_4046; // 0345:0bf6
db dummyf_4047; // 0345:0bf7
db dummyf_4048; // 0345:0bf8
db dummyf_4049;
db dummyf_404a;
db dummyf_404b;
db dummyf_404c;
db dummyf_404d;
db dummyf_404e;
db dummyf_404f;
db unk_12630; // 0345:0c00
db dummyf_4051[32]; // 0345:0c01
db dummyf_4071;
db dummyf_4072;
db dummyf_4073;
db dummyf_4074;
db dummyf_4075;
db dummyf_4076;
db dummyf_4077;
db byte_12658; // 0345:0c28
db byte_12659; // 0345:0c29
dw word_1265a; // 0345:0c2a
dw word_1265c; // 0345:0c2c
db byte_1265e; // 0345:0c2e
db byte_1265f; // 0345:0c2f
db byte_12660; // 0345:0c30
db dummyf_4081[32]; // 0345:0c31
db dummyf_40a1[32]; // 0345:0c51
db dummyf_40c1[32]; // 0345:0c71
db dummyf_40e1[32]; // 0345:0c91
db dummyf_4101[32]; // 0345:0cb1
db dummyf_4121;
db dummyf_4122; // 0345:0cd2
db dummyf_4123; // 0345:0cd3
db dummyf_4124; // 0345:0cd4
db dummyf_4125; // 0345:0cd5
db dummyf_4126; // 0345:0cd6
db dummyf_4127; // 0345:0cd7
db dummyf_4128;
db dummyf_4129;
db dummyf_412a;
db dummyf_412b;
db dummyf_412c;
db dummyf_412d;
db dummyf_412e;
db dummyf_412f;
db dummyf_4130;
db dummyf_4131;
db dummyf_4132; // 0345:0ce2
db dummyf_4133;
db dummyf_4134;
db dummyf_4135; // 0345:0ce5
db dummyf_4136; // 0345:0ce6
db dummyf_4137; // 0345:0ce7
db dummyf_4138;
db dummyf_4139;
db dummyf_413a;
db dummyf_413b;
db dummyf_413c;
db dummyf_413d;
db dummyf_413e;
db byte_1271f; // 0345:0cef
db dummyf_4140[32]; // 0345:0cf0
db dummyf_4160[32]; // 0345:0d10
db dummyf_4180[32]; // 0345:0d30
db dummyf_41a0[32]; // 0345:0d50
db dummyf_41c0;
db dummyf_41c1;
db dummyf_41c2;
db dummyf_41c3;
db dummyf_41c4;
db dummyf_41c5;
db dummyf_41c6;
db dummyf_41c7;
db dummyf_41c8;
db dummyf_41c9;
db dummyf_41ca;
db dummyf_41cb;
db dummyf_41cc;
db dummyf_41cd;
db dummyf_41ce;
db dummyf_41cf;
db dummyf_41d0;
db dummyf_41d1;
db dummyf_41d2;
db dummyf_41d3;
db dummyf_41d4;
db dummyf_41d5;
db dummyf_41d6;
db dummyf_41d7;
db dummyf_41d8;
db dummyf_41d9;
dw word_127ba; // 0345:0d8a
dw word_127bc; // 0345:0d8c
dw word_127be; // 0345:0d8e
db dummyf_41e0;
db dummyf_41e1;
db dummyf_41e2;
db dummyf_41e3;
db dummyf_41e4;
db dummyf_41e5;
db dummyf_41e6;
db dummyf_41e7;
db dummyf_41e8;
dw seg_127c9; // 041e:0009
dw word_127cb; // 041e:000b
db dummyf_41ed[32]; // 041e:000d
db dummyf_420d; // 041e:002d
db dummyf_420e; // 041e:002e
db dummyf_420f; // 041e:002f
db dummyf_4210; // 041e:0030
db dummyf_4211; // 041e:0031
db dummyf_4212; // 041e:0032
db dummyf_4213; // 041e:0033
db dummyf_4214; // 041e:0034
db dummyf_4215; // 041e:0035
db dummyf_4216; // 041e:0036
db dummyf_4217; // 041e:0037
db dummyf_4218; // 041e:0038
db dummyf_4219; // 041e:0039
db dummyf_421a; // 041e:003a
db dummyf_421b; // 041e:003b
db dummyf_421c; // 041e:003c
db dummyf_421d; // 041e:003d
db dummyf_421e; // 041e:003e
db dummyf_421f; // 041e:003f
db dummyf_4220; // 041e:0040
db dummyf_4221; // 041e:0041
db dummyf_4222; // 041e:0042
db dummyf_4223; // 041e:0043
db dummyf_4224; // 041e:0044
db dummyf_4225; // 041e:0045
db dummyf_4226; // 041e:0046
db dummyf_4227; // 041e:0047
db dummyf_4228; // 041e:0048
db dummyf_4229;
db dummyf_422a[3]; // 041e:004a
dw word_1280d; // 041e:004d
dw word_1280f; // 041e:004f
db dummyf_4231[1114];
dw dummyf_468b; // 041e:04ab
dw dummyf_468d; // 041e:04ad
dw dummyf_468f; // 041e:04af
dw dummyf_4691; // 041e:04b1
db dummyf_4693[26];
dw dummyf_46ad; // 041e:04cd
dw dummyf_46af; // 041e:04cf
dw dummyf_46b1; // 041e:04d1
dw dummyf_46b3; // 041e:04d3
dw word_12c95; // 041e:04d5
dw dummyf_46b7; // 041e:04d7
db dummyf_46b9; // 041e:04d9
db dummyf_46ba; // 041e:04da
db dummyf_46bb; // 041e:04db
db dummyf_46bc; // 041e:04dc
db dummyf_46bd; // 041e:04dd
db dummyf_46be; // 041e:04de
db dummyf_46bf; // 041e:04df
db dummyf_46c0; // 041e:04e0
db dummyf_46c1; // 041e:04e1
db dummyf_46c2; // 041e:04e2
db dummyf_46c3; // 041e:04e3
db dummyf_46c4; // 041e:04e4
db dummyf_46c5; // 041e:04e5
db dummyf_46c6; // 041e:04e6
db dummyf_46c7; // 041e:04e7
db dummyf_46c8;
db dummyf_46c9;
db dummyf_46ca; // 041e:04ea
db dummyf_46cb; // 041e:04eb
db dummyf_46cc; // 041e:04ec
db dummyf_46cd; // 041e:04ed
db dummyf_46ce; // 041e:04ee
db dummyf_46cf; // 041e:04ef
db dummyf_46d0; // 041e:04f0
db dummyf_46d1[243];
dw dummyf_47c4; // 041e:05e4
dw dummyf_47c6; // 041e:05e6
dw dummyf_47c8; // 041e:05e8
dw dummyf_47ca; // 041e:05ea
dw dummyf_47cc; // 041e:05ec
dw dummyf_47ce; // 041e:05ee
dw dummyf_47d0; // 041e:05f0
dw dummyf_47d2; // 041e:05f2
dw dummyf_47d4; // 041e:05f4
dw dummyf_47d6; // 041e:05f6
dw dummyf_47d8; // 041e:05f8
dw dummyf_47da; // 041e:05fa
dw dummyf_47dc; // 041e:05fc
dw dummyf_47de; // 041e:05fe
dw dummyf_47e0; // 041e:0600
dw dummyf_47e2; // 041e:0602
dw dummyf_47e4; // 041e:0604
dw dummyf_47e6; // 041e:0606
dw off_12dc8; // 041e:0608
dw dummyf_47ea; // 041e:060a
dw dummyf_47ec; // 041e:060c
db dummyf_47ee[15];
db dummyf_47fd; // 041e:061d
db dummyf_47fe[38];
db dummyf_4824; // 041e:0644
db dummyf_4825[31];
db dummyf_4844; // 041e:0664
db dummyf_4845[3151];
dw jpt_13a6f; // 041e:12b4
dw dummyf_5496; // 041e:12b4
dw dummyf_5498; // 041e:12b4
dw dummyf_549a; // 041e:12b4
dw dummyf_549c; // 041e:12b4
dw dummyf_549e; // 041e:12b4
dw dummyf_54a0; // 041e:12b4
db dummyf_54a2[601];
db dummyf_56fb;
db dummyf_56fc[27];
db dummyf_5717; // 041e:1537
db dummyf_5718; // 041e:1538
db dummyf_5719; // 041e:1539
db dummyf_571a[17];
db dummyf_572b; // 041e:154b
db dummyf_572c; // 041e:154c
db dummyf_572d[2];
db dummyf_572f; // 041e:154f
db dummyf_5730; // 041e:1550
db dummyf_5731[42];
db dummyf_575b; // 041e:157b
db dummyf_575c[3];
db dummyf_575f; // 041e:157f
db dummyf_5760; // 041e:1580
db dummyf_5761[2];
db dummyf_5763; // 041e:1583
db dummyf_5764; // 041e:1584
db dummyf_5765[12];
db dummyf_5771; // 041e:1591
db dummyf_5772; // 041e:1592
db dummyf_5773; // 041e:1593
db dummyf_5774[7];
db dummyf_577b;
db dummyf_577c;
db dummyf_577d;
db dummyf_577e;
db dummyf_577f;
db dummyf_5780; // 0578:0000
db dummyf_5781; // 0578:0001
db dummyf_5782; // 0578:0002
db dummyf_5783; // 0578:0003
db dummyf_5784; // 0578:0004
db dummyf_5785; // 0578:0005
db dummyf_5786; // 0578:0006
db dummyf_5787; // 0578:0007
db dummyf_5788; // 0578:0008
db dummyf_5789; // 0578:0009
db dummyf_578a; // 0578:000a
db dummyf_578b; // 0578:000b
db dummyf_578c; // 0578:000c
db dummyf_578d; // 0578:000d
db dummyf_578e; // 0578:000e
db unk_13d6f; // 0578:000f
db dummyf_5790; // 0578:0010
db dummyf_5791; // 0578:0011
db unk_13d72; // 0578:0012
db dummyf_5793; // 0578:0013
db dummyf_5794;
db dummyf_5795[3];
dw dummyf_5798; // 0578:0018
dw dummyf_579a; // 0578:001a
db dummyf_579c; // 0578:001c
db dummyf_579d;
db dummyf_579e; // 0578:001e
db dummyf_579f;
db dummyf_57a0; // 0578:0020
db dummyf_57a1;
db dummyf_57a2; // 0578:0022
db dummyf_57a3;
db dummyf_57a4; // 0578:0024
db dummyf_57a5;
db dummyf_57a6; // 0578:0026
db dummyf_57a7;
db dummyf_57a8;
db dummyf_57a9;
db dummyf_57aa; // 0578:002a
db dummyf_57ab;
db dummyf_57ac; // 0578:002c
db dummyf_57ad;
db dummyf_57ae; // 0578:002e
db dummyf_57af;
char acopyrightc1988_0[64]; // 0578:0030
db dummyf_57f0[177];
db dummyf_58a1; // 057f:00b1
db dummyf_58a2; // 057f:00b2
db dummyf_58a3; // 057f:00b3
db dummyf_58a4; // 057f:00b4
db dummyf_58a5; // 057f:00b5
db dummyf_58a6; // 057f:00b6
db dummyf_58a7; // 057f:00b7
db dummyf_58a8; // 057f:00b8
db dummyf_58a9; // 057f:00b9
db dummyf_58aa; // 057f:00ba
db dummyf_58ab;
db dummyf_58ac;
db dummyf_58ad;
db dummyf_58ae;
db dummyf_58af;
char __amgraphicexe091[21]; // 058b:0000
db dummyf_58c5;
db dummyf_58c6;
db dummyf_58c7;
dw dummyf_58c8; // 058b:0018
dw dummyf_58ca; // 058b:001a
db dummyf_58cc;
db dummyf_58cd;
dw dummyf_58ce; // 058b:001e
dw dummyf_58d0; // 058b:0020
dw dummyf_58d2; // 058b:0022
dw dummyf_58d4; // 058b:0024
dw dummyf_58d6; // 058b:0026
dw dummyf_58d8; // 058b:0028
dw dummyf_58da; // 058b:002a
dw dummyf_58dc; // 058b:002c
dw dummyf_58de; // 058b:002e
dw dummyf_58e0; // 058b:0030
dw dummyf_58e2; // 058b:0032
dw dummyf_58e4; // 058b:0034
dw dummyf_58e6; // 058b:0036
dw dummyf_58e8; // 058b:0038
dw dummyf_58ea; // 058b:003a
dw dummyf_58ec; // 058b:003c
dw dummyf_58ee; // 058b:003e
dw dummyf_58f0; // 058b:0040
dw dummyf_58f2; // 058b:0042
dw dummyf_58f4; // 058b:0044
dw dummyf_58f6; // 058b:0046
dw dummyf_58f8; // 058b:0048
dw dummyf_58fa; // 058b:004a
dw dummyf_58fc; // 058b:004c
dw dummyf_58fe; // 058b:004e
dw dummyf_5900; // 058b:0050
db dummyf_5902; // 058b:0052
db dummyf_5903; // 058b:0053
dw word_13ee4; // 058b:0054
dw dummyf_5906; // 058b:0056
dw dummyf_5908; // 058b:0058
dw dummyf_590a; // 058b:005a
dw dummyf_590c; // 058b:005c
dw dummyf_590e; // 058b:005e
dw dummyf_5910; // 058b:0060
dw dummyf_5912; // 058b:0062
dw dummyf_5914; // 058b:0064
dw dummyf_5916; // 058b:0066
dw dummyf_5918; // 058b:0068
dw dummyf_591a; // 058b:006a
dw dummyf_591c; // 058b:006c
dw dummyf_591e; // 058b:006e
dw dummyf_5920; // 058b:0070
dw dummyf_5922; // 058b:0072
dw dummyf_5924; // 058b:0074
dw dummyf_5926; // 058b:0076
dw dummyf_5928; // 058b:0078
db dummyf_592a[32]; // 058b:007a
db dummyf_594a[32]; // 058b:009a
db dummyf_596a; // 058b:00ba
db dummyf_596b; // 058b:00bb
db dummyf_596c; // 058b:00bc
db dummyf_596d; // 058b:00bd
db dummyf_596e; // 058b:00be
db dummyf_596f; // 058b:00bf
db dummyf_5970; // 058b:00c0
db dummyf_5971; // 058b:00c1
db dummyf_5972; // 058b:00c2
db dummyf_5973; // 058b:00c3
db dummyf_5974; // 058b:00c4
db dummyf_5975; // 058b:00c5
db dummyf_5976; // 058b:00c6
db dummyf_5977; // 058b:00c7
db dummyf_5978; // 058b:00c8
db dummyf_5979; // 058b:00c9
db dummyf_597a; // 058b:00ca
db dummyf_597b; // 058b:00cb
dw word_13f5c; // 058b:00cc
dw word_13f5e; // 058b:00ce
db dummyf_5980[32]; // 058b:00d0
db dummyf_59a0[32]; // 058b:00f0
db dummyf_59c0[32]; // 058b:0110
db dummyf_59e0[32]; // 058b:0130
db dummyf_5a00[32]; // 058b:0150
db dummyf_5a20[32]; // 058b:0170
db dummyf_5a40[32]; // 058b:0190
db dummyf_5a60[32]; // 058b:01b0
db dummyf_5a80[32]; // 058b:01d0
db dummyf_5aa0[32]; // 058b:01f0
db dummyf_5ac0[32]; // 058b:0210
db dummyf_5ae0[32]; // 058b:0230
db dummyf_5b00; // 058b:0250
db dummyf_5b01; // 058b:0251
db dummyf_5b02; // 058b:0252
db dummyf_5b03; // 058b:0253
db dummyf_5b04; // 058b:0254
db dummyf_5b05; // 058b:0255
db dummyf_5b06; // 058b:0256
db dummyf_5b07; // 058b:0257
db dummyf_5b08; // 058b:0258
db dummyf_5b09; // 058b:0259
db dummyf_5b0a; // 058b:025a
db dummyf_5b0b; // 058b:025b
db dummyf_5b0c; // 058b:025c
db dummyf_5b0d; // 058b:025d
db byte_140ee; // 058b:025e
db dummyf_5b0f[32]; // 058b:025f
db dummyf_5b2f[32]; // 058b:027f
db dummyf_5b4f[32]; // 058b:029f
db dummyf_5b6f[32]; // 058b:02bf
db dummyf_5b8f[32]; // 058b:02df
db dummyf_5baf[32]; // 058b:02ff
db dummyf_5bcf[32]; // 058b:031f
db dummyf_5bef; // 058b:033f
db dummyf_5bf0; // 058b:0340
db dummyf_5bf1; // 058b:0341
db dummyf_5bf2;
db dummyf_5bf3;
db dummyf_5bf4; // 058b:0344
db dummyf_5bf5;
db dummyf_5bf6; // 058b:0346
db dummyf_5bf7;
db dummyf_5bf8; // 058b:0348
db dummyf_5bf9; // 058b:0349
db dummyf_5bfa;
db dummyf_5bfb;
db dummyf_5bfc;
db dummyf_5bfd;
db dummyf_5bfe;
db dummyf_5bff[2]; // 058b:034f
db dummyf_5c01; // 058b:0351
db dummyf_5c02[10]; // 058b:0352
db dummyf_5c0c;
db dummyf_5c0d;
db dummyf_5c0e; // 058b:035e
db dummyf_5c0f;
db dummyf_5c10; // 058b:0360
db dummyf_5c11;
db dummyf_5c12;
db dummyf_5c13[6]; // 058b:0363
db byte_141f9[3]; // 058b:0369
db dummyf_5c1c; // 058b:036c
db dummyf_5c1d[6]; // 058b:036d
db dummyf_5c23; // 058b:0373
db dummyf_5c24[3]; // 058b:0374
db dummyf_5c27; // 058b:0377
db dummyf_5c28; // 058b:0378
db dummyf_5c29; // 058b:0379
db dummyf_5c2a; // 058b:037a
db dummyf_5c2b; // 058b:037b
db dummyf_5c2c; // 058b:037c
db byte_1420d; // 058b:037d
db dummyf_5c2e;
db dummyf_5c2f;
db dummyf_5c30;
db dummyf_5c31;
db dummyf_5c32; // 058b:0382
db dummyf_5c33;
db dummyf_5c34; // 058b:0384
db dummyf_5c35;
db dummyf_5c36; // 058b:0386
db dummyf_5c37;
db dummyf_5c38; // 058b:0388
db dummyf_5c39;
db dummyf_5c3a; // 058b:038a
db dummyf_5c3b; // 058b:038b
db dummyf_5c3c; // 058b:038c
db dummyf_5c3d; // 058b:038d
db dummyf_5c3e; // 058b:038e
db dummyf_5c3f;
db dummyf_5c40;
db byte_14221; // 058b:0391
db dummyf_5c42;
db dummyf_5c43;
db dummyf_5c44;
db dummyf_5c45;
db dummyf_5c46; // 058b:0396
db dummyf_5c47;
db dummyf_5c48;
db dummyf_5c49;
db dummyf_5c4a;
db dummyf_5c4b;
db dummyf_5c4c;
db dummyf_5c4d;
db dummyf_5c4e; // 058b:039e
db dummyf_5c4f;
db dummyf_5c50; // 058b:03a0
db dummyf_5c51; // 058b:03a1
db dummyf_5c52;
db dummyf_5c53; // 058b:03a3
db dummyf_5c54;
db byte_14235; // 058b:03a5
db dummyf_5c56;
db dummyf_5c57;
db dummyf_5c58;
db dummyf_5c59;
db dummyf_5c5a;
db dummyf_5c5b;
db dummyf_5c5c;
db dummyf_5c5d;
db dummyf_5c5e;
db dummyf_5c5f;
db dummyf_5c60;
db dummyf_5c61;
db dummyf_5c62;
db dummyf_5c63;
db dummyf_5c64;
db dummyf_5c65;
db dummyf_5c66;
db dummyf_5c67;
db dummyf_5c68;
db byte_14249; // 058b:03b9
db dummyf_5c6a;
db dummyf_5c6b;
db dummyf_5c6c;
db dummyf_5c6d;
db dummyf_5c6e;
db dummyf_5c6f;
db dummyf_5c70;
db dummyf_5c71;
db dummyf_5c72;
db dummyf_5c73; // 058b:03c3
db dummyf_5c74; // 058b:03c4
db dummyf_5c75;
db dummyf_5c76; // 058b:03c6
db dummyf_5c77; // 058b:03c7
db dummyf_5c78; // 058b:03c8
db dummyf_5c79; // 058b:03c9
db dummyf_5c7a; // 058b:03ca
db dummyf_5c7b; // 058b:03cb
db dummyf_5c7c;
db byte_1425d; // 058b:03cd
db dummyf_5c7e;
db dummyf_5c7f;
db dummyf_5c80;
db dummyf_5c81; // 058b:03d1
db dummyf_5c82; // 058b:03d2
db dummyf_5c83; // 058b:03d3
db dummyf_5c84; // 058b:03d4
db dummyf_5c85; // 058b:03d5
db dummyf_5c86; // 058b:03d6
db dummyf_5c87; // 058b:03d7
db dummyf_5c88; // 058b:03d8
db dummyf_5c89; // 058b:03d9
db dummyf_5c8a; // 058b:03da
db dummyf_5c8b; // 058b:03db
db byte_1426c; // 058b:03dc
db dummyf_5c8d[32]; // 058b:03dd
db dummyf_5cad; // 058b:03fd
db dummyf_5cae; // 058b:03fe
db dummyf_5caf; // 058b:03ff
db dummyf_5cb0; // 058b:0400
db dummyf_5cb1;
db dummyf_5cb2; // 058b:0402
db dummyf_5cb3;
db dummyf_5cb4; // 058b:0404
db dummyf_5cb5;
db dummyf_5cb6; // 058b:0406
db dummyf_5cb7;
db dummyf_5cb8; // 058b:0408
db dummyf_5cb9;
db dummyf_5cba; // 058b:040a
db dummyf_5cbb; // 058b:040b
db dummyf_5cbc; // 058b:040c
db dummyf_5cbd; // 058b:040d
db dummyf_5cbe; // 058b:040e
db dummyf_5cbf;
db dummyf_5cc0;
db dummyf_5cc1;
db dummyf_5cc2;
db dummyf_5cc3;
db dummyf_5cc4;
db dummyf_5cc5;
db dummyf_5cc6;
db dummyf_5cc7;
db byte_142a8; // 058b:0418
db dummyf_5cc9[32]; // 058b:0419
db dummyf_5ce9; // 058b:0439
db dummyf_5cea; // 058b:043a
db dummyf_5ceb;
db dummyf_5cec; // 058b:043c
db dummyf_5ced;
db dummyf_5cee; // 058b:043e
db dummyf_5cef; // 058b:043f
db dummyf_5cf0; // 058b:0440
db dummyf_5cf1;
db dummyf_5cf2;
db dummyf_5cf3; // 058b:0443
db dummyf_5cf4; // 058b:0444
db dummyf_5cf5; // 058b:0445
db dummyf_5cf6; // 058b:0446
db dummyf_5cf7; // 058b:0447
db dummyf_5cf8; // 058b:0448
db dummyf_5cf9; // 058b:0449
db dummyf_5cfa; // 058b:044a
db dummyf_5cfb; // 058b:044b
db dummyf_5cfc; // 058b:044c
db dummyf_5cfd; // 058b:044d
db dummyf_5cfe;
db dummyf_5cff[2]; // 058b:044f
db dummyf_5d01; // 058b:0451
db dummyf_5d02[10]; // 058b:0452
db dummyf_5d0c; // 058b:0452
db dummyf_5d0d; // 058b:045d
db dummyf_5d0e; // 058b:045e
db dummyf_5d0f;
db dummyf_5d10; // 058b:0460
db byte_142f1; // 058b:0461
db dummyf_5d12; // 058b:0462
db dummyf_5d13[10]; // 058b:0463
db dummyf_5d1d[10]; // 058b:0463
db dummyf_5d27[32]; // 058b:0477
db dummyf_5d47;
db dummyf_5d48;
db dummyf_5d49;
db dummyf_5d4a;
db dummyf_5d4b;
db dummyf_5d4c;
db dummyf_5d4d; // 058b:049d
db dummyf_5d4e; // 058b:049e
db dummyf_5d4f;
db dummyf_5d50; // 058b:04a0
db dummyf_5d51;
db dummyf_5d52;
db dummyf_5d53; // 058b:04a3
db dummyf_5d54;
db dummyf_5d55;
db dummyf_5d56;
db dummyf_5d57;
db dummyf_5d58;
db dummyf_5d59;
db dummyf_5d5a;
db byte_1433b; // 058b:04ab
db dummyf_5d5c[32]; // 058b:04ac
db dummyf_5d7c[32]; // 058b:04cc
db dummyf_5d9c[32]; // 058b:04ec
db dummyf_5dbc[32]; // 058b:050c
db dummyf_5ddc[32]; // 058b:052c
db dummyf_5dfc; // 058b:054c
db dummyf_5dfd; // 058b:054d
db dummyf_5dfe;
db dummyf_5dff[2]; // 058b:054f
db dummyf_5e01; // 058b:0551
db dummyf_5e02[10]; // 058b:0552
db dummyf_5e0c;
db dummyf_5e0d;
db dummyf_5e0e; // 058b:055e
db dummyf_5e0f; // 058b:055f
db dummyf_5e10; // 058b:0560
db dummyf_5e11; // 058b:0561
db dummyf_5e12; // 058b:0562
db dummyf_5e13[9]; // 058b:0563
db dummyf_5e1c; // 058b:056c
db dummyf_5e1d[5]; // 058b:056d
db dummyf_5e22; // 058b:0572
db dummyf_5e23; // 058b:0573
db dummyf_5e24[3]; // 058b:0574
db dummyf_5e27[32]; // 058b:0577
db dummyf_5e47[32]; // 058b:0597
db dummyf_5e67[32]; // 058b:05b7
db dummyf_5e87[32]; // 058b:05d7
db dummyf_5ea7; // 058b:05f7
db dummyf_5ea8; // 058b:05f8
db dummyf_5ea9; // 058b:05f9
db dummyf_5eaa; // 058b:05fa
db dummyf_5eab; // 058b:05fb
db byte_1448c; // 058b:05fc
db dummyf_5ead; // 058b:05fd
db dummyf_5eae; // 058b:05fe
db dummyf_5eaf; // 058b:05ff
db dummyf_5eb0; // 058b:0600
db dummyf_5eb1;
db dummyf_5eb2;
db dummyf_5eb3; // 058b:0603
db dummyf_5eb4; // 058b:0604
db dummyf_5eb5; // 058b:0605
db dummyf_5eb6; // 058b:0606
db dummyf_5eb7; // 058b:0607
db dummyf_5eb8; // 058b:0608
db dummyf_5eb9; // 058b:0609
db dummyf_5eba; // 058b:060a
db dummyf_5ebb; // 058b:060b
db dummyf_5ebc; // 058b:060c
db dummyf_5ebd; // 058b:060d
db dummyf_5ebe; // 058b:060e
db dummyf_5ebf; // 058b:060f
db dummyf_5ec0; // 058b:0610
db dummyf_5ec1; // 058b:0611
db dummyf_5ec2; // 058b:0612
db dummyf_5ec3; // 058b:0613
db dummyf_5ec4; // 058b:0614
db byte_144a5; // 058b:0615
db dummyf_5ec6[32]; // 058b:0616
db dummyf_5ee6; // 058b:0636
db dummyf_5ee7; // 058b:0637
db dummyf_5ee8; // 058b:0638
db dummyf_5ee9;
db dummyf_5eea;
db dummyf_5eeb;
db dummyf_5eec; // 058b:063c
db dummyf_5eed;
db dummyf_5eee; // 058b:063e
db dummyf_5eef; // 058b:063f
db dummyf_5ef0; // 058b:0640
db dummyf_5ef1;
db dummyf_5ef2;
db dummyf_5ef3; // 058b:0643
db dummyf_5ef4; // 058b:0644
db dummyf_5ef5; // 058b:0645
db dummyf_5ef6; // 058b:0646
db dummyf_5ef7; // 058b:0647
db dummyf_5ef8; // 058b:0648
db dummyf_5ef9; // 058b:0649
db dummyf_5efa; // 058b:064a
db dummyf_5efb; // 058b:064b
db dummyf_5efc; // 058b:064c
db dummyf_5efd; // 058b:064d
db dummyf_5efe;
db dummyf_5eff[2]; // 058b:064f
db dummyf_5f01; // 058b:0651
db dummyf_5f02[12]; // 058b:0652
db dummyf_5f0e; // 058b:065e
db dummyf_5f0f;
db dummyf_5f10; // 058b:0660
db dummyf_5f11; // 058b:0661
db dummyf_5f12; // 058b:0662
db dummyf_5f13[9]; // 058b:0663
db dummyf_5f1c; // 058b:066c
db dummyf_5f1d[6]; // 058b:066d
db dummyf_5f23; // 058b:0673
db dummyf_5f24[3]; // 058b:0674
db dummyf_5f27[32]; // 058b:0677
db dummyf_5f47; // 058b:0697
db dummyf_5f48; // 058b:0698
db dummyf_5f49; // 058b:0699
db dummyf_5f4a; // 058b:069a
db dummyf_5f4b; // 058b:069b
db dummyf_5f4c; // 058b:069c
db byte_1452d; // 058b:069d
db dummyf_5f4e; // 058b:069e
db dummyf_5f4f; // 058b:069f
db dummyf_5f50; // 058b:06a0
db dummyf_5f51;
db dummyf_5f52;
db dummyf_5f53; // 058b:06a3
db dummyf_5f54;
db dummyf_5f55;
db byte_14536; // 058b:06a6
db dummyf_5f57;
db dummyf_5f58;
db dummyf_5f59;
db dummyf_5f5a;
db dummyf_5f5b;
db byte_1453c; // 058b:06ac
db dummyf_5f5d;
db dummyf_5f5e;
db dummyf_5f5f;
db dummyf_5f60;
db dummyf_5f61;
db dummyf_5f62;
db dummyf_5f63;
db dummyf_5f64;
db dummyf_5f65;
db dummyf_5f66;
db dummyf_5f67;
db dummyf_5f68;
db dummyf_5f69;
db dummyf_5f6a;
db dummyf_5f6b;
db dummyf_5f6c;
db byte_1454d; // 058b:06bd
db dummyf_5f6e;
db dummyf_5f6f;
db dummyf_5f70;
db dummyf_5f71;
db byte_14552; // 058b:06c2
db dummyf_5f73[32]; // 058b:06c3
db dummyf_5f93[32]; // 058b:06e3
db dummyf_5fb3[32]; // 058b:0703
db dummyf_5fd3; // 058b:0723
db byte_145b4; // 058b:0724
db byte_145b5; // 058b:0725
db dummyf_5fd6; // 058b:0726
db dummyf_5fd7; // 058b:0727
db dummyf_5fd8; // 058b:0728
db dummyf_5fd9; // 058b:0729
db dummyf_5fda;
db dummyf_5fdb; // 058b:072b
db dummyf_5fdc; // 058b:072c
db dummyf_5fdd; // 058b:072d
db dummyf_5fde; // 058b:072e
db dummyf_5fdf; // 058b:072f
db dummyf_5fe0;
db dummyf_5fe1; // 058b:0731
db dummyf_5fe2; // 058b:0732
db dummyf_5fe3; // 058b:0733
db dummyf_5fe4; // 058b:0734
db dummyf_5fe5; // 058b:0735
db byte_145c6; // 058b:0736
db dummyf_5fe7; // 058b:0737
db dummyf_5fe8; // 058b:0738
db dummyf_5fe9;
db dummyf_5fea;
db dummyf_5feb;
db dummyf_5fec; // 058b:073c
db dummyf_5fed; // 058b:073d
db dummyf_5fee;
db dummyf_5fef; // 058b:073f
db dummyf_5ff0;
db dummyf_5ff1;
db dummyf_5ff2;
db dummyf_5ff3; // 058b:0743
db dummyf_5ff4;
db dummyf_5ff5; // 058b:0745
db dummyf_5ff6;
db dummyf_5ff7; // 058b:0747
db dummyf_5ff8; // 058b:0748
db dummyf_5ff9;
db dummyf_5ffa; // 058b:074a
db dummyf_5ffb; // 058b:074b
db dummyf_5ffc; // 058b:074c
db dummyf_5ffd; // 058b:074d
db dummyf_5ffe;
db dummyf_5fff[1];
db dummyf_6000; // 058b:0750
db dummyf_6001;
db dummyf_6002[9]; // 058b:0752
db dummyf_600b[2]; // 058b:0752
db dummyf_600d; // 058b:075d
db dummyf_600e; // 058b:075e
db dummyf_600f;
db dummyf_6010; // 058b:0760
db dummyf_6011; // 058b:0761
db dummyf_6012; // 058b:0762
db dummyf_6013[9]; // 058b:0763
db dummyf_601c; // 058b:076c
db dummyf_601d[6]; // 058b:076d
db dummyf_6023; // 058b:0773
db dummyf_6024[3]; // 058b:0774
db dummyf_6027[32]; // 058b:0777
db dummyf_6047[32]; // 058b:0797
db dummyf_6067;
db dummyf_6068;
db dummyf_6069;
db dummyf_606a;
db dummyf_606b;
db dummyf_606c;
db dummyf_606d;
db dummyf_606e;
db dummyf_606f;
db dummyf_6070;
db dummyf_6071;
db dummyf_6072;
db dummyf_6073; // 058b:07c3
db dummyf_6074;
db dummyf_6075; // 058b:07c5
db dummyf_6076; // 058b:07c6
db dummyf_6077; // 058b:07c7
db dummyf_6078; // 058b:07c8
db dummyf_6079;
db byte_1465a; // 058b:07ca
db dummyf_607b; // 058b:07cb
db dummyf_607c; // 058b:07cc
db dummyf_607d; // 058b:07cd
db dummyf_607e;
db dummyf_607f;
db dummyf_6080;
db dummyf_6081; // 058b:07d1
db dummyf_6082; // 058b:07d2
db dummyf_6083; // 058b:07d3
db dummyf_6084; // 058b:07d4
db dummyf_6085; // 058b:07d5
db dummyf_6086; // 058b:07d6
db dummyf_6087; // 058b:07d7
db dummyf_6088; // 058b:07d8
db dummyf_6089; // 058b:07d9
db dummyf_608a; // 058b:07da
db byte_1466b; // 058b:07db
db dummyf_608c[32]; // 058b:07dc
db dummyf_60ac[32]; // 058b:07fc
db dummyf_60cc[32]; // 058b:081c
db dummyf_60ec[32]; // 058b:083c
db dummyf_610c[32]; // 058b:085c
db dummyf_612c[32]; // 058b:087c
db dummyf_614c[32]; // 058b:089c
db dummyf_616c[32]; // 058b:08bc
db dummyf_618c; // 058b:08dc
db dummyf_618d; // 058b:08dd
db dummyf_618e; // 058b:08de
db dummyf_618f;
db dummyf_6190; // 058b:08e0
db dummyf_6191;
db dummyf_6192; // 058b:08e2
db dummyf_6193; // 058b:08e3
db dummyf_6194; // 058b:08e4
db dummyf_6195; // 058b:08e5
db dummyf_6196; // 058b:08e6
db dummyf_6197; // 058b:08e7
db dummyf_6198; // 058b:08e8
db dummyf_6199; // 058b:08e9
db dummyf_619a; // 058b:08ea
db dummyf_619b; // 058b:08eb
db dummyf_619c; // 058b:08ec
db dummyf_619d[1];
db dummyf_619e[32]; // 058b:08ee
db dummyf_61be[32]; // 058b:090e
db dummyf_61de[32]; // 058b:092e
db dummyf_61fe[32]; // 058b:094e
db dummyf_621e[32]; // 058b:096e
db dummyf_623e[32]; // 058b:098e
db dummyf_625e[32]; // 058b:09ae
db dummyf_627e[32]; // 058b:09ce
db dummyf_629e[32]; // 058b:09ee
db dummyf_62be[32]; // 058b:0a0e
db dummyf_62de[32]; // 058b:0a2e
db dummyf_62fe; // 058b:0a4e
db dummyf_62ff;
db dummyf_6300;
db dummyf_6301;
db dummyf_6302;
db dummyf_6303;
db dummyf_6304;
db dummyf_6305;
db dummyf_6306;
db dummyf_6307;
db dummyf_6308;
db dummyf_6309;
db byte_148ea; // 058b:0a5a
db dummyf_630b[32]; // 058b:0a5b
db dummyf_632b[32]; // 058b:0a7b
db dummyf_634b[32]; // 058b:0a9b
db dummyf_636b[32]; // 058b:0abb
db dummyf_638b[32]; // 058b:0adb
db dummyf_63ab[32]; // 058b:0afb
db dummyf_63cb[32]; // 058b:0b1b
db dummyf_63eb[32]; // 058b:0b3b
db dummyf_640b[32]; // 058b:0b5b
db dummyf_642b[32]; // 058b:0b7b
db dummyf_644b[32]; // 058b:0b9b
db dummyf_646b;
db dummyf_646c;
db dummyf_646d;
db dummyf_646e;
db dummyf_646f;
db dummyf_6470;
db dummyf_6471;
db dummyf_6472;
db dummyf_6473; // 058b:0bc3
dw dummyf_6474; // 058b:0bc4
db dummyf_6476[32]; // 058b:0bc6
db dummyf_6496[32]; // 058b:0be6
db dummyf_64b6[32]; // 058b:0c06
db dummyf_64d6[32]; // 058b:0c26
db dummyf_64f6[32]; // 058b:0c46
db dummyf_6516[32]; // 058b:0c66
db dummyf_6536[32]; // 058b:0c86
db dummyf_6556[32]; // 058b:0ca6
db dummyf_6576[32]; // 058b:0cc6
db dummyf_6596[32]; // 058b:0ce6
db dummyf_65b6[32]; // 058b:0d06
db dummyf_65d6[32]; // 058b:0d26
db dummyf_65f6[32]; // 058b:0d46
db dummyf_6616[32]; // 058b:0d66
db dummyf_6636[32]; // 058b:0d86
db dummyf_6656[32]; // 058b:0da6
db dummyf_6676; // 058b:0dc6
db dummyf_6677; // 058b:0dc7
db dummyf_6678; // 058b:0dc8
db dummyf_6679;
db dummyf_667a; // 058b:0dca
db dummyf_667b; // 058b:0dcb
db dummyf_667c; // 058b:0dcc
db dummyf_667d; // 058b:0dcd
db dummyf_667e;
db dummyf_667f; // 058b:0dcf
db dummyf_6680;
db dummyf_6681; // 058b:0dd1
db dummyf_6682; // 058b:0dd2
db dummyf_6683; // 058b:0dd3
db dummyf_6684; // 058b:0dd4
db dummyf_6685; // 058b:0dd5
db dummyf_6686; // 058b:0dd6
db dummyf_6687; // 058b:0dd7
db dummyf_6688; // 058b:0dd8
db dummyf_6689; // 058b:0dd9
db dummyf_668a; // 058b:0dda
db dummyf_668b; // 058b:0ddb
db dummyf_668c;
db dummyf_668d;
db dummyf_668e; // 058b:0dde
db byte_14c6f; // 058b:0ddf
db dummyf_6690[32]; // 058b:0de0
db dummyf_66b0[32]; // 058b:0e00
db dummyf_66d0[32]; // 058b:0e20
db dummyf_66f0[32]; // 058b:0e40
db dummyf_6710[32]; // 058b:0e60
db dummyf_6730[32]; // 058b:0e80
db dummyf_6750[32]; // 058b:0ea0
db dummyf_6770[32]; // 058b:0ec0
db dummyf_6790[32]; // 058b:0ee0
db dummyf_67b0[32]; // 058b:0f00
db dummyf_67d0[32]; // 058b:0f20
db dummyf_67f0[32]; // 058b:0f40
db dummyf_6810[32]; // 058b:0f60
db dummyf_6830[32]; // 058b:0f80
db dummyf_6850[32]; // 058b:0fa0
db dummyf_6870[32]; // 058b:0fc0
db dummyf_6890[32]; // 058b:0fe0
db dummyf_68b0[32]; // 058b:1000
db dummyf_68d0[32]; // 058b:1020
db dummyf_68f0[32]; // 058b:1040
db dummyf_6910[32]; // 058b:1060
db dummyf_6930[32]; // 058b:1080
db dummyf_6950[32]; // 058b:10a0
db dummyf_6970[32]; // 058b:10c0
db dummyf_6990[32]; // 058b:10e0
db dummyf_69b0[32]; // 058b:1100
db dummyf_69d0[32]; // 058b:1120
db dummyf_69f0[32]; // 058b:1140
db dummyf_6a10[32]; // 058b:1160
db dummyf_6a30[32]; // 058b:1180
db dummyf_6a50[32]; // 058b:11a0
db dummyf_6a70[32]; // 058b:11c0
db dummyf_6a90[32]; // 058b:11e0
db dummyf_6ab0[32]; // 058b:1200
db dummyf_6ad0[32]; // 058b:1220
db dummyf_6af0[32]; // 058b:1240
db dummyf_6b10[32]; // 058b:1260
db dummyf_6b30[32]; // 058b:1280
db dummyf_6b50[32]; // 058b:12a0
db dummyf_6b70[32]; // 058b:12c0
db dummyf_6b90[32]; // 058b:12e0
db dummyf_6bb0[32]; // 058b:1300
db dummyf_6bd0[32]; // 058b:1320
db dummyf_6bf0[32]; // 058b:1340
db dummyf_6c10[32]; // 058b:1360
db dummyf_6c30[32]; // 058b:1380
db dummyf_6c50[32]; // 058b:13a0
db dummyf_6c70[32]; // 058b:13c0
db dummyf_6c90[32]; // 058b:13e0
db dummyf_6cb0[32]; // 058b:1400
db dummyf_6cd0[32]; // 058b:1420
db dummyf_6cf0[32]; // 058b:1440
db dummyf_6d10[32]; // 058b:1460
db dummyf_6d30[32]; // 058b:1480
db dummyf_6d50[32]; // 058b:14a0
db dummyf_6d70[32]; // 058b:14c0
db dummyf_6d90[32]; // 058b:14e0
db dummyf_6db0[32]; // 058b:1500
db dummyf_6dd0[32]; // 058b:1520
db dummyf_6df0[32]; // 058b:1540
db dummyf_6e10[32]; // 058b:1560
db dummyf_6e30[32]; // 058b:1580
db dummyf_6e50[32]; // 058b:15a0
db dummyf_6e70[32]; // 058b:15c0
db dummyf_6e90[32]; // 058b:15e0
db dummyf_6eb0[32]; // 058b:1600
db dummyf_6ed0[32]; // 058b:1620
db dummyf_6ef0[32]; // 058b:1640
db dummyf_6f10[32]; // 058b:1660
db dummyf_6f30[32]; // 058b:1680
db dummyf_6f50[32]; // 058b:16a0
db dummyf_6f70[32]; // 058b:16c0
db dummyf_6f90[32]; // 058b:16e0
db dummyf_6fb0[32]; // 058b:1700
db dummyf_6fd0[32]; // 058b:1720
db dummyf_6ff0[32]; // 058b:1740
db dummyf_7010[32]; // 058b:1760
db dummyf_7030[32]; // 058b:1780
db dummyf_7050[32]; // 058b:17a0
db dummyf_7070[32]; // 058b:17c0
db dummyf_7090[32]; // 058b:17e0
db dummyf_70b0[32]; // 058b:1800
db dummyf_70d0[32]; // 058b:1820
db dummyf_70f0[32]; // 058b:1840
db dummyf_7110[32]; // 058b:1860
db dummyf_7130[32]; // 058b:1880
db dummyf_7150[32]; // 058b:18a0
db dummyf_7170[32]; // 058b:18c0
db dummyf_7190[32]; // 058b:18e0
db dummyf_71b0[32]; // 058b:1900
db dummyf_71d0[32]; // 058b:1920
db dummyf_71f0[32]; // 058b:1940
db dummyf_7210[32]; // 058b:1960
db dummyf_7230[32]; // 058b:1980
db dummyf_7250[32]; // 058b:19a0
db dummyf_7270[32]; // 058b:19c0
db dummyf_7290[32]; // 058b:19e0
db dummyf_72b0[32]; // 058b:1a00
db dummyf_72d0[32]; // 058b:1a20
db dummyf_72f0[32]; // 058b:1a40
db dummyf_7310[32]; // 058b:1a60
db dummyf_7330[32]; // 058b:1a80
db dummyf_7350[32]; // 058b:1aa0
db dummyf_7370[32]; // 058b:1ac0
db dummyf_7390[32]; // 058b:1ae0
db dummyf_73b0[32]; // 058b:1b00
db dummyf_73d0;
db dummyf_73d1;
char ainsufficientme[65]; // 058b:1b22
char dummyf_7413[11]; // 058b:1b22
dw word_159fe; // 058b:1b6e
dw word_15a00; // 058b:1b70
dw word_15a02; // 058b:1b72
dw word_15a04; // 058b:1b74
dw word_15a06; // 058b:1b76
dw word_15a08; // 058b:1b78
db byte_15a0a; // 058b:1b7a
db dummyf_742b; // 058b:1b7b
db dummyf_742c; // 058b:1b7c
db dummyf_742d; // 058b:1b7d
db dummyf_742e; // 058b:1b7e
db dummyf_742f; // 058b:1b7f
db dummyf_7430; // 058b:1b80
db dummyf_7431; // 058b:1b81
db dummyf_7432; // 058b:1b82
db dummyf_7433; // 058b:1b83
db dummyf_7434; // 058b:1b84
db dummyf_7435;
db dummyf_7436;
db dummyf_7437;
db dummyf_7438;
db dummyf_7439;
db dummyf_743a; // 058b:1b8a
db dummyf_743b;
db dummyf_743c; // 058b:1b8c
db dummyf_743d;
db dummyf_743e;
db dummyf_743f; // 058b:1b8f
db dummyf_7440; // 058b:1b90
db dummyf_7441[4]; // 058b:1b91
db dummyf_7445;
db dummyf_7446; // 058b:1b96
db dummyf_7447; // 058b:1b97
db dummyf_7448; // 058b:1b98
db dummyf_7449;
db dummyf_744a; // 058b:1b9a
db dummyf_744b; // 058b:1b9b
db dummyf_744c; // 058b:1b9c
db dummyf_744d; // 058b:1b9d
db dummyf_744e; // 058b:1b9e
db dummyf_744f; // 058b:1b9f
db dummyf_7450; // 058b:1ba0
db dummyf_7451; // 058b:1ba1
db dummyf_7452; // 058b:1ba2
db dummyf_7453; // 058b:1ba3
db dummyf_7454; // 058b:1ba4
db dummyf_7455; // 058b:1ba5
db dummyf_7456; // 058b:1ba6
db dummyf_7457; // 058b:1ba7
db dummyf_7458; // 058b:1ba8
db dummyf_7459[4]; // 058b:1ba9
db dummyf_745d; // 058b:1bad
db dummyf_745e; // 058b:1bae
db dummyf_745f[5]; // 058b:1baf
db dummyf_7464[32]; // 058b:1bb4
db dummyf_7484[32]; // 058b:1bd4
db dummyf_74a4[32]; // 058b:1bf4
db dummyf_74c4[32]; // 058b:1c14
db dummyf_74e4[32]; // 058b:1c34
db dummyf_7504[32]; // 058b:1c54
db dummyf_7524; // 058b:1c74
db dummyf_7525;
db byte_15b06; // 058b:1c76
db byte_15b07; // 058b:1c77
dw word_15b08; // 058b:1c78
dw word_15b0a; // 058b:1c7a
db byte_15b0c; // 058b:1c7c
db byte_15b0d; // 058b:1c7d
db byte_15b0e; // 058b:1c7e
db byte_15b0f; // 058b:1c7f
dw word_15b10; // 058b:1c80
dw word_15b12; // 058b:1c82
db dummyf_7534[32]; // 058b:1c84
db dummyf_7554[32]; // 058b:1ca4
db dummyf_7574; // 058b:1cc4
db dummyf_7575;
db dummyf_7576; // 058b:1cc6
db dummyf_7577;
db byte_15b58[6]; // 058b:1cc8
char acopyrightc1988[63]; // 058b:1cce
db dummyf_75bd;
db dummyf_75be[2]; // 075b:000e
db dummyf_75c0[13]; // 075b:0010
db dummyf_75cd[12]; // 075b:0010
db dummyf_75d9[11]; // 075b:0010
db dummyf_75e4[11]; // 075b:0010
db dummyf_75ef[11]; // 075b:0010
db dummyf_75fa[11]; // 075b:0010
db dummyf_7605[11]; // 075b:0010
db dummyf_7610[11]; // 075b:0010
db dummyf_761b[11]; // 075b:0010
db dummyf_7626[11]; // 075b:0010
db dummyf_7631[11]; // 075b:0010
db dummyf_763c[11]; // 075b:0010
db dummyf_7647[11]; // 075b:0010
db dummyf_7652[11]; // 075b:0010
db dummyf_765d[11]; // 075b:0010
db dummyf_7668[11]; // 075b:0010
db dummyf_7673[11]; // 075b:0010
db dummyf_767e[11]; // 075b:0010
db dummyf_7689[11]; // 075b:0010
db dummyf_7694[11]; // 075b:0010
db dummyf_769f[11]; // 075b:0010
db dummyf_76aa[11]; // 075b:0010
db dummyf_76b5[11]; // 075b:0010
db dummyf_76c0[10]; // 075b:0010
db dummyf_76ca[10]; // 075b:0010
db dummyf_76d4[10]; // 075b:0010
db dummyf_76de[10]; // 075b:0010
db dummyf_76e8[10]; // 075b:0010
db dummyf_76f2[10]; // 075b:0010
db dummyf_76fc[10]; // 075b:0010
db dummyf_7706[10]; // 075b:0010
db dummyf_7710[10]; // 075b:0010
db dummyf_771a[10]; // 075b:0010
db dummyf_7724[10]; // 075b:0010
db dummyf_772e[10]; // 075b:0010
db dummyf_7738[10]; // 075b:0010
db dummyf_7742[10]; // 075b:0010
db dummyf_774c[2]; // 075b:0010
dw word_15d2e; // 075b:019e
dw word_15d30; // 075b:01a0
db byte_15d32; // 075b:01a2
db dummyf_7753[33];
db dummyf_7774; // 075b:01c4
db dummyf_7775[13];
dw word_15d62; // 075b:01d2
dw _unk_15d64; // 075b:01d4
dw word_15d66; // 075b:01d6
dw word_15d68; // 075b:01d8
dw word_15d6a; // 075b:01da
dw word_15d6c; // 075b:01dc
dw word_15d6e; // 075b:01de
db dummyf_7790[73];
db dummyf_77d9; // 075b:0229
db dummyf_77da[575];
db dummyf_7a19; // 075b:0469
db dummyf_7a1a[242];
db dummyf_7b0c; // 075b:055c
db dummyf_7b0d[261];
db dummyf_7c12; // 075b:0662
db dummyf_7c13[30];
dw word_16211; // 075b:0681
dw seg_16213; // 075b:0683
dw dummyf_7c35; // 075b:0685
db dummyf_7c37;
db dummyf_7c38;
db dummyf_7c39;
db dummyf_7c3a;
db dummyf_7c3b[201];
db dummyf_7d04; // 075b:0754
db dummyf_7d05[13];
db dummyf_7d12; // 075b:0762
db dummyf_7d13[19];
db dummyf_7d26; // 075b:0776
db dummyf_7d27[27];
db dummyf_7d42; // 075b:0792
db dummyf_7d43[13];
db dummyf_7d50; // 075b:07a0
db dummyf_7d51[19];
db dummyf_7d64; // 075b:07b4
db dummyf_7d65[429];
db dummyf_7f12; // 075b:0962
db dummyf_7f13[79];
db byte_16542; // 075b:09b2
db dummyf_7f63[291];
db dummyf_8086; // 075b:0ad6
db dummyf_8087; // 075b:0ad7
char af15[3]; // 075b:0ad8
db dummyf_808b;
db dummyf_808c;
db dummyf_808d;
db dummyf_808e;
db dummyf_808f;
db unk_16670; // 0809:0000
db dummyf_8091[32]; // 0809:0001
db dummyf_80b1[32]; // 0809:0021
db dummyf_80d1[32]; // 0809:0041
db dummyf_80f1;
db dummyf_80f2;
db dummyf_80f3;
db dummyf_80f4; // 0809:0064
db dummyf_80f5;
db dummyf_80f6;
db dummyf_80f7;
db dummyf_80f8;
db dummyf_80f9;
db dummyf_80fa;
db dummyf_80fb;
db dummyf_80fc;
db dummyf_80fd;
db dummyf_80fe; // 0809:006e
db dummyf_80ff;
db dummyf_8100;
db unk_166e1; // 0809:0071
db dummyf_8102[32]; // 0809:0072
db dummyf_8122[32]; // 0809:0092
db dummyf_8142[32]; // 0809:00b2
db dummyf_8162[32]; // 0809:00d2
db dummyf_8182[32]; // 0809:00f2
db dummyf_81a2[32]; // 0809:0112
db dummyf_81c2[32]; // 0809:0132
db dummyf_81e2[32]; // 0809:0152
db dummyf_8202[32]; // 0809:0172
db dummyf_8222[32]; // 0809:0192
db dummyf_8242[32]; // 0809:01b2
db dummyf_8262[32]; // 0809:01d2
db dummyf_8282[32]; // 0809:01f2
db dummyf_82a2[32]; // 0809:0212
db dummyf_82c2[32]; // 0809:0232
db dummyf_82e2[32]; // 0809:0252
db dummyf_8302[32]; // 0809:0272
db dummyf_8322[32]; // 0809:0292
db dummyf_8342[32]; // 0809:02b2
db dummyf_8362[32]; // 0809:02d2
db dummyf_8382[32]; // 0809:02f2
db dummyf_83a2[32]; // 0809:0312
db dummyf_83c2[32]; // 0809:0332
db dummyf_83e2[32]; // 0809:0352
db dummyf_8402[32]; // 0809:0372
db dummyf_8422[32]; // 0809:0392
db dummyf_8442[32]; // 0809:03b2
db dummyf_8462[32]; // 0809:03d2
db dummyf_8482[32]; // 0809:03f2
db dummyf_84a2[32]; // 0809:0412
db dummyf_84c2[32]; // 0809:0432
db dummyf_84e2[32]; // 0809:0452
db dummyf_8502[32]; // 0809:0472
db dummyf_8522[32]; // 0809:0492
db dummyf_8542[32]; // 0809:04b2
db dummyf_8562[32]; // 0809:04d2
db dummyf_8582[32]; // 0809:04f2
db dummyf_85a2[32]; // 0809:0512
db dummyf_85c2[32]; // 0809:0532
db dummyf_85e2[32]; // 0809:0552
db dummyf_8602[32]; // 0809:0572
db dummyf_8622[32]; // 0809:0592
db dummyf_8642[32]; // 0809:05b2
db dummyf_8662[32]; // 0809:05d2
db dummyf_8682[32]; // 0809:05f2
db dummyf_86a2[32]; // 0809:0612
db dummyf_86c2[32]; // 0809:0632
db dummyf_86e2[32]; // 0809:0652
db dummyf_8702[32]; // 0809:0672
db dummyf_8722[32]; // 0809:0692
db dummyf_8742[32]; // 0809:06b2
db dummyf_8762[32]; // 0809:06d2
db dummyf_8782[32]; // 0809:06f2
db dummyf_87a2[32]; // 0809:0712
db dummyf_87c2[32]; // 0809:0732
db dummyf_87e2[32]; // 0809:0752
db dummyf_8802[32]; // 0809:0772
db dummyf_8822[32]; // 0809:0792
db dummyf_8842[32]; // 0809:07b2
db dummyf_8862[32]; // 0809:07d2
db dummyf_8882[32]; // 0809:07f2
db dummyf_88a2[32]; // 0809:0812
db dummyf_88c2[32]; // 0809:0832
db dummyf_88e2[32]; // 0809:0852
db dummyf_8902[32]; // 0809:0872
db dummyf_8922[32]; // 0809:0892
db dummyf_8942[32]; // 0809:08b2
db dummyf_8962[32]; // 0809:08d2
db dummyf_8982[32]; // 0809:08f2
db dummyf_89a2[32]; // 0809:0912
db dummyf_89c2[32]; // 0809:0932
db dummyf_89e2[32]; // 0809:0952
db dummyf_8a02[32]; // 0809:0972
db dummyf_8a22[32]; // 0809:0992
db dummyf_8a42[32]; // 0809:09b2
db dummyf_8a62[32]; // 0809:09d2
db dummyf_8a82[32]; // 0809:09f2
db dummyf_8aa2[32]; // 0809:0a12
db dummyf_8ac2[32]; // 0809:0a32
db dummyf_8ae2[32]; // 0809:0a52
db dummyf_8b02[32]; // 0809:0a72
db dummyf_8b22[32]; // 0809:0a92
db dummyf_8b42[32]; // 0809:0ab2
db dummyf_8b62[32]; // 0809:0ad2
db dummyf_8b82[32]; // 0809:0af2
db dummyf_8ba2[32]; // 0809:0b12
db dummyf_8bc2[32]; // 0809:0b32
db dummyf_8be2[32]; // 0809:0b52
db dummyf_8c02[32]; // 0809:0b72
db dummyf_8c22[32]; // 0809:0b92
db dummyf_8c42[32]; // 0809:0bb2
db dummyf_8c62[32]; // 0809:0bd2
db dummyf_8c82[32]; // 0809:0bf2
db dummyf_8ca2[32]; // 0809:0c12
db dummyf_8cc2[32]; // 0809:0c32
db dummyf_8ce2[32]; // 0809:0c52
db dummyf_8d02[32]; // 0809:0c72
db dummyf_8d22[32]; // 0809:0c92
db dummyf_8d42[32]; // 0809:0cb2
db dummyf_8d62[32]; // 0809:0cd2
db dummyf_8d82[32]; // 0809:0cf2
db dummyf_8da2[32]; // 0809:0d12
db dummyf_8dc2[32]; // 0809:0d32
db dummyf_8de2[32]; // 0809:0d52
db dummyf_8e02[32]; // 0809:0d72
db dummyf_8e22[32]; // 0809:0d92
db dummyf_8e42[32]; // 0809:0db2
db dummyf_8e62[32]; // 0809:0dd2
db dummyf_8e82[32]; // 0809:0df2
db dummyf_8ea2[32]; // 0809:0e12
db dummyf_8ec2[32]; // 0809:0e32
db dummyf_8ee2[32]; // 0809:0e52
db dummyf_8f02[32]; // 0809:0e72
db dummyf_8f22[32]; // 0809:0e92
db dummyf_8f42[32]; // 0809:0eb2
db dummyf_8f62[32]; // 0809:0ed2
db dummyf_8f82[32]; // 0809:0ef2
db dummyf_8fa2[32]; // 0809:0f12
db dummyf_8fc2[32]; // 0809:0f32
db dummyf_8fe2[32]; // 0809:0f52
db dummyf_9002[32]; // 0809:0f72
db dummyf_9022[32]; // 0809:0f92
db dummyf_9042[32]; // 0809:0fb2
db dummyf_9062[32]; // 0809:0fd2
db dummyf_9082[32]; // 0809:0ff2
db dummyf_90a2[32]; // 0809:1012
db dummyf_90c2[32]; // 0809:1032
db dummyf_90e2[32]; // 0809:1052
db dummyf_9102[32]; // 0809:1072
db dummyf_9122[32]; // 0809:1092
db dummyf_9142[32]; // 0809:10b2
db dummyf_9162[32]; // 0809:10d2
db dummyf_9182[32]; // 0809:10f2
db dummyf_91a2[32]; // 0809:1112
db dummyf_91c2[32]; // 0809:1132
db dummyf_91e2[32]; // 0809:1152
db dummyf_9202[32]; // 0809:1172
db dummyf_9222[32]; // 0809:1192
db dummyf_9242[32]; // 0809:11b2
db dummyf_9262[32]; // 0809:11d2
db dummyf_9282[32]; // 0809:11f2
db dummyf_92a2[32]; // 0809:1212
db dummyf_92c2[32]; // 0809:1232
db dummyf_92e2[32]; // 0809:1252
db dummyf_9302[32]; // 0809:1272
db dummyf_9322[32]; // 0809:1292
db dummyf_9342[32]; // 0809:12b2
db dummyf_9362[32]; // 0809:12d2
db dummyf_9382[32]; // 0809:12f2
db dummyf_93a2[32]; // 0809:1312
db dummyf_93c2[32]; // 0809:1332
db dummyf_93e2[32]; // 0809:1352
db dummyf_9402[32]; // 0809:1372
db dummyf_9422[32]; // 0809:1392
db dummyf_9442[32]; // 0809:13b2
db dummyf_9462[32]; // 0809:13d2
db dummyf_9482[32]; // 0809:13f2
db dummyf_94a2[32]; // 0809:1412
db dummyf_94c2[32]; // 0809:1432
db dummyf_94e2[32]; // 0809:1452
db dummyf_9502[32]; // 0809:1472
db dummyf_9522[32]; // 0809:1492
db dummyf_9542[32]; // 0809:14b2
db dummyf_9562[32]; // 0809:14d2
db dummyf_9582[32]; // 0809:14f2
db dummyf_95a2[32]; // 0809:1512
db dummyf_95c2[32]; // 0809:1532
db dummyf_95e2[32]; // 0809:1552
db dummyf_9602[32]; // 0809:1572
db dummyf_9622[32]; // 0809:1592
db dummyf_9642[32]; // 0809:15b2
db dummyf_9662[32]; // 0809:15d2
db dummyf_9682[32]; // 0809:15f2
db dummyf_96a2[32]; // 0809:1612
db dummyf_96c2[32]; // 0809:1632
db dummyf_96e2[32]; // 0809:1652
db dummyf_9702[32]; // 0809:1672
db dummyf_9722[32]; // 0809:1692
db dummyf_9742[32]; // 0809:16b2
db dummyf_9762[32]; // 0809:16d2
db dummyf_9782[32]; // 0809:16f2
db dummyf_97a2[32]; // 0809:1712
db dummyf_97c2[32]; // 0809:1732
db dummyf_97e2[32]; // 0809:1752
db dummyf_9802[32]; // 0809:1772
db dummyf_9822[32]; // 0809:1792
db dummyf_9842[32]; // 0809:17b2
db dummyf_9862[32]; // 0809:17d2
db dummyf_9882[32]; // 0809:17f2
db dummyf_98a2[32]; // 0809:1812
db dummyf_98c2[32]; // 0809:1832
db dummyf_98e2[32]; // 0809:1852
db dummyf_9902[32]; // 0809:1872
db dummyf_9922[32]; // 0809:1892
db dummyf_9942[32]; // 0809:18b2
db dummyf_9962[32]; // 0809:18d2
db dummyf_9982[32]; // 0809:18f2
db dummyf_99a2[32]; // 0809:1912
db dummyf_99c2[32]; // 0809:1932
db dummyf_99e2[32]; // 0809:1952
db dummyf_9a02[32]; // 0809:1972
db dummyf_9a22[32]; // 0809:1992
db dummyf_9a42[32]; // 0809:19b2
db dummyf_9a62[32]; // 0809:19d2
db dummyf_9a82[32]; // 0809:19f2
db dummyf_9aa2[32]; // 0809:1a12
db dummyf_9ac2[32]; // 0809:1a32
db dummyf_9ae2[32]; // 0809:1a52
db dummyf_9b02[32]; // 0809:1a72
db dummyf_9b22[32]; // 0809:1a92
db dummyf_9b42[32]; // 0809:1ab2
db dummyf_9b62[32]; // 0809:1ad2
db dummyf_9b82[32]; // 0809:1af2
db dummyf_9ba2[32]; // 0809:1b12
db dummyf_9bc2[32]; // 0809:1b32
db dummyf_9be2[32]; // 0809:1b52
db dummyf_9c02[32]; // 0809:1b72
db dummyf_9c22[32]; // 0809:1b92
db dummyf_9c42[32]; // 0809:1bb2
db dummyf_9c62[32]; // 0809:1bd2
db dummyf_9c82[32]; // 0809:1bf2
db dummyf_9ca2[32]; // 0809:1c12
db dummyf_9cc2[32]; // 0809:1c32
db dummyf_9ce2[32]; // 0809:1c52
db dummyf_9d02[32]; // 0809:1c72
db dummyf_9d22[32]; // 0809:1c92
db dummyf_9d42[32]; // 0809:1cb2
db dummyf_9d62[32]; // 0809:1cd2
db dummyf_9d82[32]; // 0809:1cf2
db dummyf_9da2[32]; // 0809:1d12
db dummyf_9dc2[32]; // 0809:1d32
db dummyf_9de2[32]; // 0809:1d52
db dummyf_9e02[32]; // 0809:1d72
db dummyf_9e22[32]; // 0809:1d92
db dummyf_9e42[32]; // 0809:1db2
db dummyf_9e62[32]; // 0809:1dd2
db dummyf_9e82[32]; // 0809:1df2
db dummyf_9ea2[32]; // 0809:1e12
db dummyf_9ec2[32]; // 0809:1e32
db dummyf_9ee2[32]; // 0809:1e52
db dummyf_9f02[32]; // 0809:1e72
db dummyf_9f22[32]; // 0809:1e92
db dummyf_9f42[32]; // 0809:1eb2
db dummyf_9f62[32]; // 0809:1ed2
db dummyf_9f82[32]; // 0809:1ef2
db dummyf_9fa2[32]; // 0809:1f12
db dummyf_9fc2[32]; // 0809:1f32
db dummyf_9fe2[32]; // 0809:1f52
db dummyf_a002[32]; // 0809:1f72
db dummyf_a022[32]; // 0809:1f92
db dummyf_a042[32]; // 0809:1fb2
db dummyf_a062[32]; // 0809:1fd2
db dummyf_a082[32]; // 0809:1ff2
db dummyf_a0a2[32]; // 0809:2012
db dummyf_a0c2[32]; // 0809:2032
db dummyf_a0e2[32]; // 0809:2052
db dummyf_a102[32]; // 0809:2072
db dummyf_a122[32]; // 0809:2092
db dummyf_a142[32]; // 0809:20b2
db dummyf_a162[32]; // 0809:20d2
db dummyf_a182[32]; // 0809:20f2
db dummyf_a1a2[32]; // 0809:2112
db dummyf_a1c2[32]; // 0809:2132
db dummyf_a1e2[32]; // 0809:2152
db dummyf_a202[32]; // 0809:2172
db dummyf_a222[32]; // 0809:2192
db dummyf_a242[32]; // 0809:21b2
db dummyf_a262[32]; // 0809:21d2
db dummyf_a282[32]; // 0809:21f2
db dummyf_a2a2[32]; // 0809:2212
db dummyf_a2c2[32]; // 0809:2232
db dummyf_a2e2[32]; // 0809:2252
db dummyf_a302[32]; // 0809:2272
db dummyf_a322[32]; // 0809:2292
db dummyf_a342[32]; // 0809:22b2
db dummyf_a362; // 0809:22d2
db dummyf_a363; // 0809:22d3
db dummyf_a364; // 0809:22d4
db dummyf_a365; // 0809:22d5
db unk_18946; // 0809:22d6
db dummyf_a367[32]; // 0809:22d7
db dummyf_a387[32]; // 0809:22f7
db dummyf_a3a7[32]; // 0809:2317
db dummyf_a3c7[32]; // 0809:2337
db dummyf_a3e7[32]; // 0809:2357
db dummyf_a407[32]; // 0809:2377
db dummyf_a427[32]; // 0809:2397
db dummyf_a447[32]; // 0809:23b7
db dummyf_a467[32]; // 0809:23d7
db dummyf_a487[32]; // 0809:23f7
db dummyf_a4a7[32]; // 0809:2417
db dummyf_a4c7[32]; // 0809:2437
db dummyf_a4e7[32]; // 0809:2457
db dummyf_a507[32]; // 0809:2477
db dummyf_a527[32]; // 0809:2497
db dummyf_a547[32]; // 0809:24b7
db dummyf_a567[32]; // 0809:24d7
db dummyf_a587[32]; // 0809:24f7
db dummyf_a5a7[32]; // 0809:2517
db dummyf_a5c7[32]; // 0809:2537
db dummyf_a5e7[32]; // 0809:2557
db dummyf_a607[32]; // 0809:2577
db dummyf_a627[32]; // 0809:2597
db dummyf_a647[32]; // 0809:25b7
db dummyf_a667[32]; // 0809:25d7
db dummyf_a687[32]; // 0809:25f7
db dummyf_a6a7[32]; // 0809:2617
db dummyf_a6c7[32]; // 0809:2637
db dummyf_a6e7[32]; // 0809:2657
db dummyf_a707[32]; // 0809:2677
db dummyf_a727[32]; // 0809:2697
db dummyf_a747[32]; // 0809:26b7
db dummyf_a767[32]; // 0809:26d7
db dummyf_a787[32]; // 0809:26f7
db dummyf_a7a7[32]; // 0809:2717
db dummyf_a7c7[32]; // 0809:2737
db dummyf_a7e7[32]; // 0809:2757
db dummyf_a807[32]; // 0809:2777
db dummyf_a827[32]; // 0809:2797
db dummyf_a847[32]; // 0809:27b7
db dummyf_a867[32]; // 0809:27d7
db dummyf_a887[32]; // 0809:27f7
db dummyf_a8a7[32]; // 0809:2817
db dummyf_a8c7[32]; // 0809:2837
db dummyf_a8e7[32]; // 0809:2857
db dummyf_a907[32]; // 0809:2877
db dummyf_a927[32]; // 0809:2897
db dummyf_a947[32]; // 0809:28b7
db dummyf_a967[32]; // 0809:28d7
db dummyf_a987[32]; // 0809:28f7
db dummyf_a9a7[32]; // 0809:2917
db dummyf_a9c7[32]; // 0809:2937
db dummyf_a9e7;
db dummyf_a9e8;
db dummyf_a9e9;
db dummyf_a9ea;
db dummyf_a9eb; // 0809:295b
db dummyf_a9ec; // 0809:295c
db dummyf_a9ed; // 0809:295d
db dummyf_a9ee; // 0809:295e
db dummyf_a9ef; // 0809:295f
db dummyf_a9f0;
db dummyf_a9f1;
db dummyf_a9f2; // 0809:2962
db dummyf_a9f3; // 0809:2963
db dummyf_a9f4; // 0809:2964
db dummyf_a9f5; // 0809:2965
db dummyf_a9f6;
db dummyf_a9f7;
db unk_18fd8; // 0809:2968
db dummyf_a9f9[32]; // 0809:2969
db dummyf_aa19[32]; // 0809:2989
db dummyf_aa39[32]; // 0809:29a9
db dummyf_aa59[32]; // 0809:29c9
db dummyf_aa79;
db dummyf_aa7a;
db dummyf_aa7b;
db dummyf_aa7c;
db dummyf_aa7d;
db dummyf_aa7e;
db dummyf_aa7f;
db dummyf_aa80;
db dummyf_aa81;
db dummyf_aa82;
db dummyf_aa83;
db dummyf_aa84;
db dummyf_aa85;
db dummyf_aa86;
db dummyf_aa87;
db dummyf_aa88;
db dummyf_aa89;
db dummyf_aa8a;
db dummyf_aa8b;
db dummyf_aa8c;
db dummyf_aa8d;
dw dummyf_aa8e;
dw dummyf_aa90;
db dummyf_aa92;
db dummyf_aa93;
dw dummyf_aa94;
dw dummyf_aa96;
db dummyf_aa98[32]; // 0809:2a08
db dummyf_aab8[32]; // 0809:2a28
db dummyf_aad8[32]; // 0809:2a48
db dummyf_aaf8[32]; // 0809:2a68
db dummyf_ab18[32]; // 0809:2a88
db dummyf_ab38[32]; // 0809:2aa8
db dummyf_ab58[32]; // 0809:2ac8
db dummyf_ab78[32]; // 0809:2ae8
db dummyf_ab98[32]; // 0809:2b08
db dummyf_abb8[32]; // 0809:2b28
dw dummyf_abd8;
dw dummyf_abda;
dw dummyf_abdc;
db dummyf_abde;
db dummyf_abdf;
dw dummyf_abe0;
dw dummyf_abe2; // 0809:2b52
dw dummyf_abe4; // 0809:2b54
db dummyf_abe6[32]; // 0809:2b56
db dummyf_ac06[32]; // 0809:2b76
db dummyf_ac26; // 0809:2b96
db dummyf_ac27; // 0809:2b97
db dummyf_ac28; // 0809:2b98
db dummyf_ac29; // 0809:2b99
db dummyf_ac2a; // 0809:2b9a
db dummyf_ac2b; // 0809:2b9b
db dummyf_ac2c; // 0809:2b9c
db dummyf_ac2d; // 0809:2b9d
db dummyf_ac2e; // 0809:2b9e
db dummyf_ac2f; // 0809:2b9f
db dummyf_ac30; // 0809:2ba0
db dummyf_ac31; // 0809:2ba1
db dummyf_ac32; // 0809:2ba2
db dummyf_ac33; // 0809:2ba3
db dummyf_ac34; // 0809:2ba4
db dummyf_ac35; // 0809:2ba5
db dummyf_ac36; // 0809:2ba6
db dummyf_ac37; // 0809:2ba7
db dummyf_ac38; // 0809:2ba8
db dummyf_ac39; // 0809:2ba9
dw dummyf_ac3a; // 0809:2baa
db dummyf_ac3c; // 0809:2bac
db dummyf_ac3d; // 0809:2bad
db dummyf_ac3e; // 0809:2bae
db dummyf_ac3f; // 0809:2baf
db dummyf_ac40; // 0809:2bb0
db dummyf_ac41; // 0809:2bb1
db dummyf_ac42; // 0809:2bb2
db dummyf_ac43; // 0809:2bb3
db dummyf_ac44; // 0809:2bb4
db dummyf_ac45; // 0809:2bb5
db dummyf_ac46; // 0809:2bb6
db dummyf_ac47; // 0809:2bb7
db dummyf_ac48; // 0809:2bb8
db dummyf_ac49; // 0809:2bb9
db dummyf_ac4a; // 0809:2bba
db dummyf_ac4b; // 0809:2bbb
db dummyf_ac4c; // 0809:2bbc
db dummyf_ac4d; // 0809:2bbd
db dummyf_ac4e;
db dummyf_ac4f;
db dummyf_ac50;
db dummyf_ac51; // 0809:2bc1
db dummyf_ac52; // 0809:2bc2
db dummyf_ac53; // 0809:2bc3
db dummyf_ac54; // 0809:2bc4
dw dummyf_ac55; // 0809:2bc5
dw dummyf_ac57; // 0809:2bc7
db dummyf_ac59;
db dummyf_ac5a;
dw dummyf_ac5b; // 0809:2bcb
db dummyf_ac5d; // 0809:2bcd
db dummyf_ac5e; // 0809:2bce
db dummyf_ac5f;
db dummyf_ac60;
db dummyf_ac61;
dw dummyf_ac62; // 0809:2bd2
db dummyf_ac64; // 0809:2bd4
db dummyf_ac65; // 0809:2bd5
db dummyf_ac66; // 0809:2bd6
db dummyf_ac67;
db dummyf_ac68;
db dummyf_ac69;
db dummyf_ac6a;
db dummyf_ac6b; // 0809:2bdb
db dummyf_ac6c; // 0809:2bdc
db dummyf_ac6d; // 0809:2bdd
db dummyf_ac6e;
db dummyf_ac6f;
db dummyf_ac70;
db dummyf_ac71;
db dummyf_ac72; // 0809:2be2
db dummyf_ac73; // 0809:2be3
db dummyf_ac74; // 0809:2be4
db dummyf_ac75; // 0809:2be5
db dummyf_ac76;
db dummyf_ac77;
dw dummyf_ac78;
dw dummyf_ac7a; // 0809:2bea
dw dummyf_ac7c; // 0809:2bec
db dummyf_ac7e; // 0809:2bee
db dummyf_ac7f; // 0809:2bef
db dummyf_ac80;
db dummyf_ac81;
db dummyf_ac82;
db dummyf_ac83; // 0809:2bf3
db dummyf_ac84; // 0809:2bf4
db dummyf_ac85; // 0809:2bf5
db dummyf_ac86; // 0809:2bf6
db dummyf_ac87;
dd dummyf_ac88; // 0809:2bf8
dw dummyf_ac8c; // 0809:2bfc
db dummyf_ac8e; // 0809:2bfe
db dummyf_ac8f;
db dummyf_ac90;
db dummyf_ac91;
dw dummyf_ac92; // 0809:2c02
dw dummyf_ac94; // 0809:2c04
dw dummyf_ac96;
dw dummyf_ac98;
db dummyf_ac9a[32]; // 0809:2c0a
db dummyf_acba[32]; // 0809:2c2a
db dummyf_acda[32]; // 0809:2c4a
db dummyf_acfa[32]; // 0809:2c6a
db dummyf_ad1a[32]; // 0809:2c8a
db dummyf_ad3a; // 0809:2caa
db dummyf_ad3b; // 0809:2cab
db dummyf_ad3c; // 0809:2cac
db dummyf_ad3d; // 0809:2cad
db dummyf_ad3e; // 0809:2cae
db dummyf_ad3f; // 0809:2caf
db dummyf_ad40; // 0809:2cb0
db dummyf_ad41; // 0809:2cb1
db dummyf_ad42; // 0809:2cb2
db dummyf_ad43; // 0809:2cb3
db dummyf_ad44; // 0809:2cb4
db dummyf_ad45; // 0809:2cb5
db dummyf_ad46; // 0809:2cb6
db dummyf_ad47; // 0809:2cb7
db dummyf_ad48; // 0809:2cb8
db dummyf_ad49; // 0809:2cb9
db unk_1932a; // 0809:2cba
db dummyf_ad4b[32]; // 0809:2cbb
db dummyf_ad6b[32]; // 0809:2cdb
db dummyf_ad8b[32]; // 0809:2cfb
db dummyf_adab; // 0809:2d1b
db dummyf_adac; // 0809:2d1c
db unk_1938d; // 0809:2d1d
db dummyf_adae;
db dummyf_adaf;
db dummyf_adb0;
db dummyf_adb1;
db dummyf_adb2;
db dummyf_adb3; // 0809:2d23
db dummyf_adb4; // 0809:2d24
db dummyf_adb5;
db dummyf_adb6;
db dummyf_adb7;
db dummyf_adb8;
db dummyf_adb9;
db dummyf_adba; // 0809:2d2a
db dummyf_adbb; // 0809:2d2b
db dummyf_adbc; // 0809:2d2c
db dummyf_adbd;
db dummyf_adbe;
db dummyf_adbf; // 0809:2d2f
db dummyf_adc0;
db dummyf_adc1;
db dummyf_adc2; // 0809:2d32
db dummyf_adc3; // 0809:2d33
db dummyf_adc4; // 0809:2d34
db dummyf_adc5; // 0809:2d35
dw dummyf_adc6; // 0809:2d36
dw dummyf_adc8;
dw dummyf_adca;
dw dummyf_adcc; // 0809:2d3c
db dummyf_adce; // 0809:2d3e
db dummyf_adcf;
dw dummyf_add0;
db dummyf_add2;
db dummyf_add3;
db dummyf_add4; // 0809:2d44
db dummyf_add5;
dw dummyf_add6;
db dummyf_add8;
db dummyf_add9;
dw dummyf_adda; // 0809:2d4a
dw dummyf_addc; // 0809:2d4c
db dummyf_adde[32]; // 0809:2d4e
db dummyf_adfe[32]; // 0809:2d6e
db dummyf_ae1e[32]; // 0809:2d8e
db dummyf_ae3e[32]; // 0809:2dae
db dummyf_ae5e[32]; // 0809:2dce
db dummyf_ae7e[32]; // 0809:2dee
db dummyf_ae9e[32]; // 0809:2e0e
db dummyf_aebe[32]; // 0809:2e2e
db dummyf_aede;
db dummyf_aedf;
db dummyf_aee0;
db dummyf_aee1;
db dummyf_aee2;
db dummyf_aee3;
db dummyf_aee4;
db dummyf_aee5;
db dummyf_aee6;
db dummyf_aee7;
db dummyf_aee8;
db dummyf_aee9;
db dummyf_aeea;
db dummyf_aeeb;
db dummyf_aeec; // 0809:2e5c
db dummyf_aeed;
db dummyf_aeee;
db unk_194cf; // 0809:2e5f
db dummyf_aef0[32]; // 0809:2e60
db dummyf_af10[32]; // 0809:2e80
db dummyf_af30[32]; // 0809:2ea0
db dummyf_af50;
db dummyf_af51;
db dummyf_af52;
db dummyf_af53;
db dummyf_af54;
db dummyf_af55;
db dummyf_af56;
db dummyf_af57;
db dummyf_af58;
db dummyf_af59;
dw dummyf_af5a;
dw dummyf_af5c;
dw dummyf_af5e;
db dummyf_af60;
db dummyf_af61;
db dummyf_af62;
db dummyf_af63;
dw dummyf_af64;
dw dummyf_af66;
dw dummyf_af68;
db dummyf_af6a;
db dummyf_af6b;
dw dummyf_af6c;
db dummyf_af6e[32]; // 0809:2ede
db dummyf_af8e[32]; // 0809:2efe
db dummyf_afae[32]; // 0809:2f1e
db dummyf_afce[32]; // 0809:2f3e
db dummyf_afee[32]; // 0809:2f5e
db dummyf_b00e[32]; // 0809:2f7e
db dummyf_b02e[32]; // 0809:2f9e
db dummyf_b04e[32]; // 0809:2fbe
db dummyf_b06e[32]; // 0809:2fde
db dummyf_b08e[32]; // 0809:2ffe
db dummyf_b0ae[32]; // 0809:301e
db dummyf_b0ce[32]; // 0809:303e
db dummyf_b0ee[32]; // 0809:305e
db dummyf_b10e[32]; // 0809:307e
db dummyf_b12e[32]; // 0809:309e
db dummyf_b14e[32]; // 0809:30be
db dummyf_b16e[32]; // 0809:30de
db dummyf_b18e[32]; // 0809:30fe
db dummyf_b1ae;
db dummyf_b1af;
db dummyf_b1b0;
db dummyf_b1b1;
db dummyf_b1b2;
db dummyf_b1b3;
db dummyf_b1b4;
db dummyf_b1b5; // 0809:3125
db dummyf_b1b6;
db dummyf_b1b7;
db dummyf_b1b8;
db dummyf_b1b9;
db dummyf_b1ba;
db dummyf_b1bb;
db dummyf_b1bc;
db dummyf_b1bd;
db dummyf_b1be; // 0809:312e
db dummyf_b1bf;
db dummyf_b1c0;
db dummyf_b1c1; // 0809:3131
db dummyf_b1c2; // 0809:3132
db dummyf_b1c3;
db dummyf_b1c4;
db dummyf_b1c5;
dw dummyf_b1c6;
db dummyf_b1c8[32]; // 0809:3138
db dummyf_b1e8;
db dummyf_b1e9;
db dummyf_b1ea;
db dummyf_b1eb;
db dummyf_b1ec;
db dummyf_b1ed;
db dummyf_b1ee;
db dummyf_b1ef;
dd dummyf_b1f0;
db dummyf_b1f4[32]; // 0809:3164
db dummyf_b214[32]; // 0809:3184
db dummyf_b234[32]; // 0809:31a4
db dummyf_b254[32]; // 0809:31c4
db dummyf_b274[32]; // 0809:31e4
db dummyf_b294[32]; // 0809:3204
db dummyf_b2b4[32]; // 0809:3224
db dummyf_b2d4[32]; // 0809:3244
db dummyf_b2f4[32]; // 0809:3264
db dummyf_b314[32]; // 0809:3284
db dummyf_b334[32]; // 0809:32a4
db dummyf_b354[32]; // 0809:32c4
db dummyf_b374[32]; // 0809:32e4
db dummyf_b394[32]; // 0809:3304
db dummyf_b3b4[32]; // 0809:3324
db dummyf_b3d4[32]; // 0809:3344
db dummyf_b3f4[32]; // 0809:3364
db dummyf_b414[32]; // 0809:3384
db dummyf_b434[32]; // 0809:33a4
db dummyf_b454[32]; // 0809:33c4
db dummyf_b474[32]; // 0809:33e4
db dummyf_b494[32]; // 0809:3404
db dummyf_b4b4[32]; // 0809:3424
db dummyf_b4d4[32]; // 0809:3444
db dummyf_b4f4[32]; // 0809:3464
db dummyf_b514[32]; // 0809:3484
db dummyf_b534[32]; // 0809:34a4
db dummyf_b554[32]; // 0809:34c4
db dummyf_b574[32]; // 0809:34e4
db dummyf_b594[32]; // 0809:3504
db dummyf_b5b4[32]; // 0809:3524
db dummyf_b5d4[32]; // 0809:3544
db dummyf_b5f4[32]; // 0809:3564
db dummyf_b614[32]; // 0809:3584
db dummyf_b634[32]; // 0809:35a4
db dummyf_b654[32]; // 0809:35c4
db dummyf_b674[32]; // 0809:35e4
db dummyf_b694[32]; // 0809:3604
db dummyf_b6b4[32]; // 0809:3624
db dummyf_b6d4[32]; // 0809:3644
db dummyf_b6f4[32]; // 0809:3664
db dummyf_b714[32]; // 0809:3684
db dummyf_b734[32]; // 0809:36a4
db dummyf_b754[32]; // 0809:36c4
db dummyf_b774[32]; // 0809:36e4
db dummyf_b794[32]; // 0809:3704
db dummyf_b7b4[32]; // 0809:3724
db dummyf_b7d4[32]; // 0809:3744
db dummyf_b7f4[32]; // 0809:3764
db dummyf_b814[32]; // 0809:3784
db dummyf_b834[32]; // 0809:37a4
db dummyf_b854[32]; // 0809:37c4
db dummyf_b874[32]; // 0809:37e4
db dummyf_b894[32]; // 0809:3804
db dummyf_b8b4[32]; // 0809:3824
db dummyf_b8d4[32]; // 0809:3844
db dummyf_b8f4[32]; // 0809:3864
db dummyf_b914[32]; // 0809:3884
db dummyf_b934[32]; // 0809:38a4
db dummyf_b954[32]; // 0809:38c4
db dummyf_b974[32]; // 0809:38e4
db dummyf_b994[32]; // 0809:3904
db dummyf_b9b4[32]; // 0809:3924
db dummyf_b9d4[32]; // 0809:3944
db dummyf_b9f4[32]; // 0809:3964
db dummyf_ba14[32]; // 0809:3984
db dummyf_ba34[32]; // 0809:39a4
db dummyf_ba54[32]; // 0809:39c4
db dummyf_ba74[32]; // 0809:39e4
db dummyf_ba94[32]; // 0809:3a04
db dummyf_bab4[32]; // 0809:3a24
db dummyf_bad4[32]; // 0809:3a44
db dummyf_baf4[32]; // 0809:3a64
db dummyf_bb14[32]; // 0809:3a84
db dummyf_bb34[32]; // 0809:3aa4
db dummyf_bb54[32]; // 0809:3ac4
db dummyf_bb74[32]; // 0809:3ae4
db dummyf_bb94[32]; // 0809:3b04
db dummyf_bbb4[32]; // 0809:3b24
db dummyf_bbd4[32]; // 0809:3b44
db dummyf_bbf4[32]; // 0809:3b64
db dummyf_bc14[32]; // 0809:3b84
db dummyf_bc34[32]; // 0809:3ba4
db dummyf_bc54[32]; // 0809:3bc4
db dummyf_bc74[32]; // 0809:3be4
db dummyf_bc94[32]; // 0809:3c04
db dummyf_bcb4[32]; // 0809:3c24
db dummyf_bcd4[32]; // 0809:3c44
db dummyf_bcf4[32]; // 0809:3c64
db dummyf_bd14[32]; // 0809:3c84
db dummyf_bd34[32]; // 0809:3ca4
db dummyf_bd54[32]; // 0809:3cc4
db dummyf_bd74[32]; // 0809:3ce4
db dummyf_bd94[32]; // 0809:3d04
db dummyf_bdb4[32]; // 0809:3d24
db dummyf_bdd4[32]; // 0809:3d44
db dummyf_bdf4[32]; // 0809:3d64
db dummyf_be14[32]; // 0809:3d84
db dummyf_be34[32]; // 0809:3da4
db dummyf_be54[32]; // 0809:3dc4
db dummyf_be74[32]; // 0809:3de4
db dummyf_be94[32]; // 0809:3e04
db dummyf_beb4[32]; // 0809:3e24
db dummyf_bed4[32]; // 0809:3e44
db dummyf_bef4;
db dummyf_bef5;
db dummyf_bef6;
db dummyf_bef7;
db dummyf_bef8;
db dummyf_bef9;
db dummyf_befa;
db dummyf_befb;
db dummyf_befc;
db dummyf_befd;
db dummyf_befe;
db dummyf_beff;
db dummyf_bf00;
db dummyf_bf01;
db dummyf_bf02;
db dummyf_bf03;
db dummyf_bf04;
db dummyf_bf05;
db dummyf_bf06;
db unk_1a4e7; // 0809:3e77
db dummyf_bf08[32]; // 0809:3e78
db dummyf_bf28[32]; // 0809:3e98
db dummyf_bf48[32]; // 0809:3eb8
db dummyf_bf68[32]; // 0809:3ed8
db dummyf_bf88[32]; // 0809:3ef8
db dummyf_bfa8[32]; // 0809:3f18
db dummyf_bfc8[32]; // 0809:3f38
db dummyf_bfe8[32]; // 0809:3f58
db dummyf_c008[32]; // 0809:3f78
db dummyf_c028[32]; // 0809:3f98
db dummyf_c048[32]; // 0809:3fb8
db dummyf_c068[32]; // 0809:3fd8
db dummyf_c088[32]; // 0809:3ff8
db dummyf_c0a8[32]; // 0809:4018
db dummyf_c0c8[32]; // 0809:4038
db dummyf_c0e8[32]; // 0809:4058
db dummyf_c108[32]; // 0809:4078
db dummyf_c128[32]; // 0809:4098
db dummyf_c148[32]; // 0809:40b8
db dummyf_c168[32]; // 0809:40d8
db dummyf_c188[32]; // 0809:40f8
db dummyf_c1a8[32]; // 0809:4118
db dummyf_c1c8[32]; // 0809:4138
db dummyf_c1e8[32]; // 0809:4158
db dummyf_c208[32]; // 0809:4178
db dummyf_c228;
db dummyf_c229;
db dummyf_c22a;
db dummyf_c22b;
db dummyf_c22c;
db dummyf_c22d;
db dummyf_c22e;
db dummyf_c22f;
db dummyf_c230;
db dummyf_c231;
db dummyf_c232;
db dummyf_c233;
db dummyf_c234;
db dummyf_c235;
db dummyf_c236;
db dummyf_c237;
db dummyf_c238;
db dummyf_c239;
db dummyf_c23a;
db unk_1a81b; // 0809:41ab
db dummyf_c23c[32]; // 0809:41ac
db dummyf_c25c[32]; // 0809:41cc
db dummyf_c27c[32]; // 0809:41ec
db dummyf_c29c[32]; // 0809:420c
db dummyf_c2bc[32]; // 0809:422c
db dummyf_c2dc[32]; // 0809:424c
db dummyf_c2fc[32]; // 0809:426c
db dummyf_c31c[32]; // 0809:428c
db dummyf_c33c[32]; // 0809:42ac
db dummyf_c35c[32]; // 0809:42cc
db dummyf_c37c[32]; // 0809:42ec
db dummyf_c39c[32]; // 0809:430c
db dummyf_c3bc[32]; // 0809:432c
db dummyf_c3dc[32]; // 0809:434c
db dummyf_c3fc[32]; // 0809:436c
db dummyf_c41c[32]; // 0809:438c
db dummyf_c43c[32]; // 0809:43ac
db dummyf_c45c[32]; // 0809:43cc
db dummyf_c47c[32]; // 0809:43ec
db dummyf_c49c[32]; // 0809:440c
db dummyf_c4bc[32]; // 0809:442c
db dummyf_c4dc[32]; // 0809:444c
db dummyf_c4fc[32]; // 0809:446c
db dummyf_c51c[32]; // 0809:448c
db dummyf_c53c[32]; // 0809:44ac
db dummyf_c55c[32]; // 0809:44cc
db dummyf_c57c[32]; // 0809:44ec
db dummyf_c59c[32]; // 0809:450c
db dummyf_c5bc[32]; // 0809:452c
db dummyf_c5dc[32]; // 0809:454c
db dummyf_c5fc[32]; // 0809:456c
db dummyf_c61c[32]; // 0809:458c
db dummyf_c63c[32]; // 0809:45ac
db dummyf_c65c[32]; // 0809:45cc
db dummyf_c67c[32]; // 0809:45ec
db dummyf_c69c[32]; // 0809:460c
db dummyf_c6bc[32]; // 0809:462c
db dummyf_c6dc[32]; // 0809:464c
db dummyf_c6fc[32]; // 0809:466c
db dummyf_c71c[32]; // 0809:468c
db dummyf_c73c[32]; // 0809:46ac
db dummyf_c75c[32]; // 0809:46cc
db dummyf_c77c[32]; // 0809:46ec
db dummyf_c79c[32]; // 0809:470c
db dummyf_c7bc[32]; // 0809:472c
db dummyf_c7dc[32]; // 0809:474c
db dummyf_c7fc[32]; // 0809:476c
db dummyf_c81c[32]; // 0809:478c
db dummyf_c83c;
db dummyf_c83d;
db dummyf_c83e;
db dummyf_c83f;
db dummyf_c840;
db dummyf_c841; // 0809:47b1
db dummyf_c842;
db dummyf_c843;
db dummyf_c844;
db dummyf_c845;
db dummyf_c846;
db dummyf_c847;
db dummyf_c848;
db dummyf_c849;
db dummyf_c84a;
db dummyf_c84b; // 0809:47bb
db dummyf_c84c;
db dummyf_c84d;
db dummyf_c84e;
db dummyf_c84f;
db unk_1ae30; // 0809:47c0
db dummyf_c851[32]; // 0809:47c1
db dummyf_c871[32]; // 0809:47e1
db dummyf_c891[32]; // 0809:4801
db dummyf_c8b1[32]; // 0809:4821
db dummyf_c8d1;
db dummyf_c8d2;
db dummyf_c8d3;
db dummyf_c8d4;
db dummyf_c8d5;
db dummyf_c8d6;
db dummyf_c8d7;
db dummyf_c8d8;
db dummyf_c8d9;
db dummyf_c8da;
db dummyf_c8db;
db dummyf_c8dc;
db dummyf_c8dd;
db dummyf_c8de;
db dummyf_c8df;
db dummyf_c8e0;
db dummyf_c8e1;
db dummyf_c8e2;
db dummyf_c8e3;
db dummyf_c8e4;
db dummyf_c8e5;
db dummyf_c8e6;
db dummyf_c8e7;
db dummyf_c8e8;
db dummyf_c8e9;
db dummyf_c8ea;
db dummyf_c8eb;
db unk_1aecc; // 0809:485c
db dummyf_c8ed[32]; // 0809:485d
db dummyf_c90d[32]; // 0809:487d
db dummyf_c92d[32]; // 0809:489d
db dummyf_c94d[32]; // 0809:48bd
db dummyf_c96d; // 0809:48dd
db dummyf_c96e; // 0809:48de
db dummyf_c96f;
db dummyf_c970;
db dummyf_c971;
db dummyf_c972;
db dummyf_c973;
db dummyf_c974;
db dummyf_c975;
db unk_1af56; // 0809:48e6
db dummyf_c977[32]; // 0809:48e7
db dummyf_c997[32]; // 0809:4907
db dummyf_c9b7[32]; // 0809:4927
db dummyf_c9d7[32]; // 0809:4947
db dummyf_c9f7[32]; // 0809:4967
db dummyf_ca17[32]; // 0809:4987
db dummyf_ca37[32]; // 0809:49a7
db dummyf_ca57; // 0809:49c7
db dummyf_ca58;
db dummyf_ca59;
db dummyf_ca5a;
db dummyf_ca5b;
db dummyf_ca5c; // 0809:49cc
db dummyf_ca5d; // 0809:49cd
db dummyf_ca5e; // 0809:49ce
db dummyf_ca5f; // 0809:49cf
db dummyf_ca60;
db dummyf_ca61;
db dummyf_ca62;
db dummyf_ca63; // 0809:49d3
db dummyf_ca64; // 0809:49d4
db dummyf_ca65;
db dummyf_ca66;
db dummyf_ca67;
db dummyf_ca68;
db dummyf_ca69;
db dummyf_ca6a; // 0809:49da
db dummyf_ca6b;
db dummyf_ca6c;
db dummyf_ca6d;
db dummyf_ca6e;
db dummyf_ca6f;
db unk_1b050; // 0809:49e0
db dummyf_ca71[32]; // 0809:49e1
db dummyf_ca91[32]; // 0809:4a01
db dummyf_cab1;
db dummyf_cab2;
db dummyf_cab3;
db dummyf_cab4;
db dummyf_cab5;
db dummyf_cab6;
db dummyf_cab7;
db dummyf_cab8;
db dummyf_cab9;
db dummyf_caba;
db dummyf_cabb;
db dummyf_cabc;
db dummyf_cabd;
db dummyf_cabe;
db dummyf_cabf;
db dummyf_cac0;
db dummyf_cac1; // 0809:4a31
db dummyf_cac2;
db dummyf_cac3;
db dummyf_cac4; // 0809:4a34
db dummyf_cac5;
db dummyf_cac6; // 0809:4a36
db dummyf_cac7;
db unk_1b0a8; // 0809:4a38
db dummyf_cac9[32]; // 0809:4a39
db dummyf_cae9[32]; // 0809:4a59
db dummyf_cb09[32]; // 0809:4a79
db dummyf_cb29[32]; // 0809:4a99
db dummyf_cb49[32]; // 0809:4ab9
db dummyf_cb69[32]; // 0809:4ad9
db dummyf_cb89[32]; // 0809:4af9
db dummyf_cba9[32]; // 0809:4b19
db dummyf_cbc9[32]; // 0809:4b39
db dummyf_cbe9[32]; // 0809:4b59
db dummyf_cc09[32]; // 0809:4b79
db dummyf_cc29[32]; // 0809:4b99
db dummyf_cc49[32]; // 0809:4bb9
db dummyf_cc69[32]; // 0809:4bd9
db dummyf_cc89[32]; // 0809:4bf9
db dummyf_cca9[32]; // 0809:4c19
db dummyf_ccc9[32]; // 0809:4c39
db dummyf_cce9[32]; // 0809:4c59
db dummyf_cd09[32]; // 0809:4c79
db dummyf_cd29[32]; // 0809:4c99
db dummyf_cd49[32]; // 0809:4cb9
db dummyf_cd69[32]; // 0809:4cd9
db dummyf_cd89[32]; // 0809:4cf9
db dummyf_cda9[32]; // 0809:4d19
db dummyf_cdc9[32]; // 0809:4d39
db dummyf_cde9[32]; // 0809:4d59
db dummyf_ce09[32]; // 0809:4d79
db dummyf_ce29[32]; // 0809:4d99
db dummyf_ce49[32]; // 0809:4db9
db dummyf_ce69[32]; // 0809:4dd9
db dummyf_ce89[32]; // 0809:4df9
db dummyf_cea9[32]; // 0809:4e19
db dummyf_cec9[32]; // 0809:4e39
db dummyf_cee9[32]; // 0809:4e59
db dummyf_cf09[32]; // 0809:4e79
db dummyf_cf29[32]; // 0809:4e99
db dummyf_cf49[32]; // 0809:4eb9
db dummyf_cf69[32]; // 0809:4ed9
db dummyf_cf89[32]; // 0809:4ef9
db dummyf_cfa9[32]; // 0809:4f19
db dummyf_cfc9[32]; // 0809:4f39
db dummyf_cfe9[32]; // 0809:4f59
db dummyf_d009[32]; // 0809:4f79
db dummyf_d029[32]; // 0809:4f99
db dummyf_d049[32]; // 0809:4fb9
db dummyf_d069[32]; // 0809:4fd9
db dummyf_d089[32]; // 0809:4ff9
db dummyf_d0a9[32]; // 0809:5019
db dummyf_d0c9[32]; // 0809:5039
db dummyf_d0e9[32]; // 0809:5059
db dummyf_d109[32]; // 0809:5079
db dummyf_d129[32]; // 0809:5099
db dummyf_d149[32]; // 0809:50b9
db dummyf_d169[32]; // 0809:50d9
db dummyf_d189[32]; // 0809:50f9
db dummyf_d1a9[32]; // 0809:5119
db dummyf_d1c9[32]; // 0809:5139
db dummyf_d1e9[32]; // 0809:5159
db dummyf_d209[32]; // 0809:5179
db dummyf_d229[32]; // 0809:5199
db dummyf_d249[32]; // 0809:51b9
db dummyf_d269[32]; // 0809:51d9
db dummyf_d289[32]; // 0809:51f9
db dummyf_d2a9[32]; // 0809:5219
db dummyf_d2c9[32]; // 0809:5239
db dummyf_d2e9[32]; // 0809:5259
db dummyf_d309[32]; // 0809:5279
db dummyf_d329;
db dummyf_d32a;
db dummyf_d32b;
db dummyf_d32c;
db dummyf_d32d;
db dummyf_d32e;
db dummyf_d32f;
db dummyf_d330;
db dummyf_d331;
db dummyf_d332;
db dummyf_d333;
db dummyf_d334;
db dummyf_d335;
db dummyf_d336;
db dummyf_d337;
db dummyf_d338;
db dummyf_d339;
db dummyf_d33a;
db dummyf_d33b;
db dummyf_d33c;
db dummyf_d33d;
db dummyf_d33e;
db dummyf_d33f;
db dummyf_d340;
db unk_1b921; // 0809:52b1
db dummyf_d342[32]; // 0809:52b2
db dummyf_d362[32]; // 0809:52d2
db dummyf_d382;
db dummyf_d383;
db dummyf_d384;
db dummyf_d385;
db dummyf_d386;
db dummyf_d387;
db dummyf_d388;
db unk_1b969; // 0809:52f9
db dummyf_d38a[32]; // 0809:52fa
db dummyf_d3aa[32]; // 0809:531a
db dummyf_d3ca[32]; // 0809:533a
db dummyf_d3ea[32]; // 0809:535a
db dummyf_d40a[32]; // 0809:537a
db dummyf_d42a[32]; // 0809:539a
db dummyf_d44a[32]; // 0809:53ba
db dummyf_d46a[32]; // 0809:53da
db dummyf_d48a[32]; // 0809:53fa
db dummyf_d4aa[32]; // 0809:541a
db dummyf_d4ca[32]; // 0809:543a
db dummyf_d4ea[32]; // 0809:545a
db dummyf_d50a[32]; // 0809:547a
db dummyf_d52a[32]; // 0809:549a
db dummyf_d54a[32]; // 0809:54ba
db dummyf_d56a[32]; // 0809:54da
db dummyf_d58a[32]; // 0809:54fa
db dummyf_d5aa[32]; // 0809:551a
db dummyf_d5ca[32]; // 0809:553a
db dummyf_d5ea[32]; // 0809:555a
db dummyf_d60a[32]; // 0809:557a
db dummyf_d62a[32]; // 0809:559a
db dummyf_d64a[32]; // 0809:55ba
db dummyf_d66a[32]; // 0809:55da
db dummyf_d68a[32]; // 0809:55fa
db dummyf_d6aa[32]; // 0809:561a
db dummyf_d6ca[32]; // 0809:563a
db dummyf_d6ea[32]; // 0809:565a
db dummyf_d70a[32]; // 0809:567a
db dummyf_d72a[32]; // 0809:569a
db dummyf_d74a[32]; // 0809:56ba
db dummyf_d76a[32]; // 0809:56da
db dummyf_d78a[32]; // 0809:56fa
db dummyf_d7aa[32]; // 0809:571a
db dummyf_d7ca[32]; // 0809:573a
db dummyf_d7ea[32]; // 0809:575a
db dummyf_d80a[32]; // 0809:577a
db dummyf_d82a[32]; // 0809:579a
db dummyf_d84a[32]; // 0809:57ba
db dummyf_d86a[32]; // 0809:57da
db dummyf_d88a[32]; // 0809:57fa
db dummyf_d8aa[32]; // 0809:581a
db dummyf_d8ca[32]; // 0809:583a
db dummyf_d8ea[32]; // 0809:585a
db dummyf_d90a[32]; // 0809:587a
db dummyf_d92a[32]; // 0809:589a
db dummyf_d94a[32]; // 0809:58ba
db dummyf_d96a[32]; // 0809:58da
db dummyf_d98a[32]; // 0809:58fa
db dummyf_d9aa[32]; // 0809:591a
db dummyf_d9ca[32]; // 0809:593a
db dummyf_d9ea[32]; // 0809:595a
db dummyf_da0a[32]; // 0809:597a
db dummyf_da2a[32]; // 0809:599a
db dummyf_da4a[32]; // 0809:59ba
db dummyf_da6a[32]; // 0809:59da
db dummyf_da8a[32]; // 0809:59fa
db dummyf_daaa[32]; // 0809:5a1a
db dummyf_daca[32]; // 0809:5a3a
db dummyf_daea[32]; // 0809:5a5a
db dummyf_db0a[32]; // 0809:5a7a
db dummyf_db2a[32]; // 0809:5a9a
db dummyf_db4a[32]; // 0809:5aba
db dummyf_db6a[32]; // 0809:5ada
db dummyf_db8a[32]; // 0809:5afa
db dummyf_dbaa[32]; // 0809:5b1a
db dummyf_dbca[32]; // 0809:5b3a
db dummyf_dbea[32]; // 0809:5b5a
db dummyf_dc0a[32]; // 0809:5b7a
db dummyf_dc2a[32]; // 0809:5b9a
db dummyf_dc4a[32]; // 0809:5bba
db dummyf_dc6a[32]; // 0809:5bda
db dummyf_dc8a[32]; // 0809:5bfa
db dummyf_dcaa[32]; // 0809:5c1a
db dummyf_dcca[32]; // 0809:5c3a
db dummyf_dcea[32]; // 0809:5c5a
db dummyf_dd0a[32]; // 0809:5c7a
db dummyf_dd2a[32]; // 0809:5c9a
db dummyf_dd4a[32]; // 0809:5cba
db dummyf_dd6a[32]; // 0809:5cda
db dummyf_dd8a[32]; // 0809:5cfa
db dummyf_ddaa[32]; // 0809:5d1a
db dummyf_ddca[32]; // 0809:5d3a
db dummyf_ddea[32]; // 0809:5d5a
db dummyf_de0a[32]; // 0809:5d7a
db dummyf_de2a[32]; // 0809:5d9a
db dummyf_de4a[32]; // 0809:5dba
db dummyf_de6a[32]; // 0809:5dda
db dummyf_de8a[32]; // 0809:5dfa
db dummyf_deaa[32]; // 0809:5e1a
db dummyf_deca[32]; // 0809:5e3a
db dummyf_deea[32]; // 0809:5e5a
db dummyf_df0a[32]; // 0809:5e7a
db dummyf_df2a[32]; // 0809:5e9a
db dummyf_df4a[32]; // 0809:5eba
db dummyf_df6a[32]; // 0809:5eda
db dummyf_df8a[32]; // 0809:5efa
db dummyf_dfaa[32]; // 0809:5f1a
db dummyf_dfca[32]; // 0809:5f3a
db dummyf_dfea[32]; // 0809:5f5a
db dummyf_e00a[32]; // 0809:5f7a
db dummyf_e02a[32]; // 0809:5f9a
db dummyf_e04a[32]; // 0809:5fba
db dummyf_e06a[32]; // 0809:5fda
db dummyf_e08a; // 0809:5ffa
db dummyf_e08b;
db dummyf_e08c;
db dummyf_e08d;
db dummyf_e08e;
db dummyf_e08f;
db dummyf_e090;
db dummyf_e091;
db dummyf_e092;
db dummyf_e093;
db dummyf_e094;
db dummyf_e095;
db dummyf_e096;
db dummyf_e097;
db dummyf_e098;
db dummyf_e099;
db dummyf_e09a;
db dummyf_e09b;
dw dummyf_e09c;
db dummyf_e09e[32]; // 0809:600e
db dummyf_e0be[32]; // 0809:602e
db dummyf_e0de[32]; // 0809:604e
db dummyf_e0fe[32]; // 0809:606e
db dummyf_e11e[32]; // 0809:608e
db dummyf_e13e[32]; // 0809:60ae
db dummyf_e15e[32]; // 0809:60ce
db dummyf_e17e[32]; // 0809:60ee
db dummyf_e19e[32]; // 0809:610e
db dummyf_e1be[32]; // 0809:612e
db dummyf_e1de[32]; // 0809:614e
db dummyf_e1fe[32]; // 0809:616e
db dummyf_e21e[32]; // 0809:618e
db dummyf_e23e[32]; // 0809:61ae
db dummyf_e25e[32]; // 0809:61ce
db dummyf_e27e[32]; // 0809:61ee
db dummyf_e29e[32]; // 0809:620e
db dummyf_e2be[32]; // 0809:622e
db dummyf_e2de[32]; // 0809:624e
db dummyf_e2fe[32]; // 0809:626e
db dummyf_e31e[32]; // 0809:628e
db dummyf_e33e[32]; // 0809:62ae
db dummyf_e35e[32]; // 0809:62ce
db dummyf_e37e[32]; // 0809:62ee
db dummyf_e39e[32]; // 0809:630e
db dummyf_e3be[32]; // 0809:632e
db dummyf_e3de[32]; // 0809:634e
db dummyf_e3fe[32]; // 0809:636e
db dummyf_e41e[32]; // 0809:638e
db dummyf_e43e[32]; // 0809:63ae
db dummyf_e45e[32]; // 0809:63ce
db dummyf_e47e[32]; // 0809:63ee
db dummyf_e49e[32]; // 0809:640e
db dummyf_e4be[32]; // 0809:642e
db dummyf_e4de[32]; // 0809:644e
db dummyf_e4fe[32]; // 0809:646e
db dummyf_e51e[32]; // 0809:648e
db dummyf_e53e[32]; // 0809:64ae
db dummyf_e55e[32]; // 0809:64ce
db dummyf_e57e[32]; // 0809:64ee
db dummyf_e59e[32]; // 0809:650e
db dummyf_e5be[32]; // 0809:652e
db dummyf_e5de[32]; // 0809:654e
db dummyf_e5fe[32]; // 0809:656e
db dummyf_e61e[32]; // 0809:658e
db dummyf_e63e[32]; // 0809:65ae
db dummyf_e65e[32]; // 0809:65ce
db dummyf_e67e[32]; // 0809:65ee
db dummyf_e69e[32]; // 0809:660e
db dummyf_e6be[32]; // 0809:662e
db dummyf_e6de[32]; // 0809:664e
db dummyf_e6fe[32]; // 0809:666e
db dummyf_e71e[32]; // 0809:668e
db dummyf_e73e[32]; // 0809:66ae
db dummyf_e75e[32]; // 0809:66ce
db dummyf_e77e[32]; // 0809:66ee
db dummyf_e79e[32]; // 0809:670e
db dummyf_e7be[32]; // 0809:672e
db dummyf_e7de[32]; // 0809:674e
db dummyf_e7fe[32]; // 0809:676e
db dummyf_e81e[32]; // 0809:678e
db dummyf_e83e[32]; // 0809:67ae
db dummyf_e85e[32]; // 0809:67ce
db dummyf_e87e[32]; // 0809:67ee
db dummyf_e89e; // 0809:680e
db dummyf_e89f; // 0809:680f
db dummyf_e8a0; // 0809:6810
db dummyf_e8a1;
db dummyf_e8a2;
db dummyf_e8a3;
db dummyf_e8a4;
db dummyf_e8a5;
dd dummyf_e8a6;
db dummyf_e8aa[32]; // 0809:681a
db dummyf_e8ca[32]; // 0809:683a
db dummyf_e8ea[32]; // 0809:685a
db dummyf_e90a[32]; // 0809:687a
db dummyf_e92a[32]; // 0809:689a
db dummyf_e94a[32]; // 0809:68ba
db dummyf_e96a[32]; // 0809:68da
db dummyf_e98a[32]; // 0809:68fa
db dummyf_e9aa[32]; // 0809:691a
db dummyf_e9ca[32]; // 0809:693a
db dummyf_e9ea[32]; // 0809:695a
db dummyf_ea0a[32]; // 0809:697a
db dummyf_ea2a[32]; // 0809:699a
db dummyf_ea4a[32]; // 0809:69ba
db dummyf_ea6a[32]; // 0809:69da
db dummyf_ea8a[32]; // 0809:69fa
db dummyf_eaaa;
db dummyf_eaab;
db dummyf_eaac;
db dummyf_eaad;
db dummyf_eaae;
db dummyf_eaaf;
db dummyf_eab0;
db dummyf_eab1;
db dummyf_eab2;
db dummyf_eab3;
dw dummyf_eab4;
db dummyf_eab6[32]; // 0809:6a26
db dummyf_ead6[32]; // 0809:6a46
db dummyf_eaf6[32]; // 0809:6a66
db dummyf_eb16[32]; // 0809:6a86
db dummyf_eb36[32]; // 0809:6aa6
db dummyf_eb56[32]; // 0809:6ac6
db dummyf_eb76[32]; // 0809:6ae6
db dummyf_eb96[32]; // 0809:6b06
db dummyf_ebb6[32]; // 0809:6b26
db dummyf_ebd6[32]; // 0809:6b46
db dummyf_ebf6[32]; // 0809:6b66
db dummyf_ec16[32]; // 0809:6b86
db dummyf_ec36[32]; // 0809:6ba6
db dummyf_ec56[32]; // 0809:6bc6
db dummyf_ec76[32]; // 0809:6be6
db dummyf_ec96[32]; // 0809:6c06
db dummyf_ecb6[32]; // 0809:6c26
db dummyf_ecd6[32]; // 0809:6c46
db dummyf_ecf6[32]; // 0809:6c66
db dummyf_ed16[32]; // 0809:6c86
db dummyf_ed36[32]; // 0809:6ca6
db dummyf_ed56[32]; // 0809:6cc6
db dummyf_ed76[32]; // 0809:6ce6
db dummyf_ed96[32]; // 0809:6d06
db dummyf_edb6[32]; // 0809:6d26
db dummyf_edd6[32]; // 0809:6d46
db dummyf_edf6[32]; // 0809:6d66
db dummyf_ee16[32]; // 0809:6d86
db dummyf_ee36[32]; // 0809:6da6
db dummyf_ee56[32]; // 0809:6dc6
db dummyf_ee76[32]; // 0809:6de6
db dummyf_ee96[32]; // 0809:6e06
db dummyf_eeb6[32]; // 0809:6e26
db dummyf_eed6[32]; // 0809:6e46
db dummyf_eef6[32]; // 0809:6e66
db dummyf_ef16[32]; // 0809:6e86
db dummyf_ef36[32]; // 0809:6ea6
db dummyf_ef56[32]; // 0809:6ec6
db dummyf_ef76[32]; // 0809:6ee6
db dummyf_ef96[32]; // 0809:6f06
db dummyf_efb6[32]; // 0809:6f26
db dummyf_efd6[32]; // 0809:6f46
db dummyf_eff6[32]; // 0809:6f66
db dummyf_f016[32]; // 0809:6f86
db dummyf_f036[32]; // 0809:6fa6
db dummyf_f056[32]; // 0809:6fc6
db dummyf_f076[32]; // 0809:6fe6
db dummyf_f096[32]; // 0809:7006
db dummyf_f0b6[32]; // 0809:7026
db dummyf_f0d6[32]; // 0809:7046
db dummyf_f0f6[32]; // 0809:7066
db dummyf_f116[32]; // 0809:7086
db dummyf_f136[32]; // 0809:70a6
db dummyf_f156[32]; // 0809:70c6
db dummyf_f176[32]; // 0809:70e6
db dummyf_f196[32]; // 0809:7106
db dummyf_f1b6[32]; // 0809:7126
db dummyf_f1d6[32]; // 0809:7146
db dummyf_f1f6[32]; // 0809:7166
db dummyf_f216[32]; // 0809:7186
db dummyf_f236[32]; // 0809:71a6
db dummyf_f256[32]; // 0809:71c6
db dummyf_f276[32]; // 0809:71e6
db dummyf_f296[32]; // 0809:7206
db dummyf_f2b6[32]; // 0809:7226
db dummyf_f2d6[32]; // 0809:7246
db dummyf_f2f6[32]; // 0809:7266
db dummyf_f316[32]; // 0809:7286
db dummyf_f336[32]; // 0809:72a6
db dummyf_f356[32]; // 0809:72c6
db dummyf_f376[32]; // 0809:72e6
db dummyf_f396[32]; // 0809:7306
db dummyf_f3b6[32]; // 0809:7326
db dummyf_f3d6[32]; // 0809:7346
db dummyf_f3f6[32]; // 0809:7366
db dummyf_f416[32]; // 0809:7386
db dummyf_f436[32]; // 0809:73a6
db dummyf_f456[32]; // 0809:73c6
db dummyf_f476[32]; // 0809:73e6
db dummyf_f496[32]; // 0809:7406
db dummyf_f4b6[32]; // 0809:7426
db dummyf_f4d6[32]; // 0809:7446
db dummyf_f4f6[32]; // 0809:7466
db dummyf_f516[32]; // 0809:7486
db dummyf_f536[32]; // 0809:74a6
db dummyf_f556[32]; // 0809:74c6
db dummyf_f576[32]; // 0809:74e6
db dummyf_f596[32]; // 0809:7506
db dummyf_f5b6[32]; // 0809:7526
db dummyf_f5d6[32]; // 0809:7546
db dummyf_f5f6[32]; // 0809:7566
db dummyf_f616[32]; // 0809:7586
db dummyf_f636[32]; // 0809:75a6
db dummyf_f656[32]; // 0809:75c6
db dummyf_f676[32]; // 0809:75e6
db dummyf_f696[32]; // 0809:7606
db dummyf_f6b6[32]; // 0809:7626
db dummyf_f6d6[32]; // 0809:7646
db dummyf_f6f6[32]; // 0809:7666
db dummyf_f716[32]; // 0809:7686
db dummyf_f736[32]; // 0809:76a6
db dummyf_f756[32]; // 0809:76c6
db dummyf_f776[32]; // 0809:76e6
db dummyf_f796[32]; // 0809:7706
db dummyf_f7b6[32]; // 0809:7726
db dummyf_f7d6[32]; // 0809:7746
db dummyf_f7f6[32]; // 0809:7766
db dummyf_f816[32]; // 0809:7786
db dummyf_f836[32]; // 0809:77a6
db dummyf_f856[32]; // 0809:77c6
db dummyf_f876[32]; // 0809:77e6
db dummyf_f896[32]; // 0809:7806
db dummyf_f8b6[32]; // 0809:7826
db dummyf_f8d6[32]; // 0809:7846
db dummyf_f8f6[32]; // 0809:7866
db dummyf_f916[32]; // 0809:7886
db dummyf_f936[32]; // 0809:78a6
db dummyf_f956[32]; // 0809:78c6
db dummyf_f976[32]; // 0809:78e6
db dummyf_f996[32]; // 0809:7906
db dummyf_f9b6[32]; // 0809:7926
db dummyf_f9d6[32]; // 0809:7946
db dummyf_f9f6[32]; // 0809:7966
db dummyf_fa16[32]; // 0809:7986
db dummyf_fa36[32]; // 0809:79a6
db dummyf_fa56[32]; // 0809:79c6
db dummyf_fa76[32]; // 0809:79e6
db dummyf_fa96[32]; // 0809:7a06
db dummyf_fab6[32]; // 0809:7a26
db dummyf_fad6[32]; // 0809:7a46
db dummyf_faf6[32]; // 0809:7a66
db dummyf_fb16[32]; // 0809:7a86
db dummyf_fb36[32]; // 0809:7aa6
db dummyf_fb56[32]; // 0809:7ac6
db dummyf_fb76[32]; // 0809:7ae6
db dummyf_fb96[32]; // 0809:7b06
db dummyf_fbb6[32]; // 0809:7b26
db dummyf_fbd6[32]; // 0809:7b46
db dummyf_fbf6[32]; // 0809:7b66
db dummyf_fc16[32]; // 0809:7b86
db dummyf_fc36[32]; // 0809:7ba6
db dummyf_fc56[32]; // 0809:7bc6
db dummyf_fc76[32]; // 0809:7be6
db dummyf_fc96[32]; // 0809:7c06
db dummyf_fcb6[32]; // 0809:7c26
db dummyf_fcd6[32]; // 0809:7c46
db dummyf_fcf6[32]; // 0809:7c66
db dummyf_fd16[32]; // 0809:7c86
db dummyf_fd36[32]; // 0809:7ca6
db dummyf_fd56[32]; // 0809:7cc6
db dummyf_fd76[32]; // 0809:7ce6
db dummyf_fd96[32]; // 0809:7d06
db dummyf_fdb6[32]; // 0809:7d26
db dummyf_fdd6[32]; // 0809:7d46
db dummyf_fdf6[32]; // 0809:7d66
db dummyf_fe16[32]; // 0809:7d86
db dummyf_fe36[32]; // 0809:7da6
db dummyf_fe56[32]; // 0809:7dc6
db dummyf_fe76[32]; // 0809:7de6
db dummyf_fe96[32]; // 0809:7e06
db dummyf_feb6[32]; // 0809:7e26
db dummyf_fed6[32]; // 0809:7e46
db dummyf_fef6[32]; // 0809:7e66
db dummyf_ff16[32]; // 0809:7e86
db dummyf_ff36[32]; // 0809:7ea6
db dummyf_ff56[32]; // 0809:7ec6
db dummyf_ff76[32]; // 0809:7ee6
db dummyf_ff96[32]; // 0809:7f06
db dummyf_ffb6[32]; // 0809:7f26
db dummyf_ffd6[32]; // 0809:7f46
db dummyf_fff6[32]; // 0809:7f66
db dummyf_10016[32]; // 0809:7f86
db dummyf_10036[32]; // 0809:7fa6
db dummyf_10056[32]; // 0809:7fc6
db dummyf_10076[32]; // 0809:7fe6
db dummyf_10096[32]; // 0809:8006
db dummyf_100b6[32]; // 0809:8026
db dummyf_100d6[32]; // 0809:8046
db dummyf_100f6[32]; // 0809:8066
db dummyf_10116[32]; // 0809:8086
db dummyf_10136[32]; // 0809:80a6
db dummyf_10156;
db dummyf_10157;
db dummyf_10158;
db dummyf_10159;
db dummyf_1015a;
db dummyf_1015b;
db dummyf_1015c;
db dummyf_1015d;
db dummyf_1015e;
db dummyf_1015f;
db dummyf_10160;
db dummyf_10161;
db dummyf_10162;
db dummyf_10163;
db dummyf_10164;
db unk_1e745; // 0809:80d5
db dummyf_10166[32]; // 0809:80d6
db dummyf_10186[32]; // 0809:80f6
db dummyf_101a6[32]; // 0809:8116
db dummyf_101c6[32]; // 0809:8136
db dummyf_101e6[32]; // 0809:8156
db dummyf_10206[32]; // 0809:8176
db dummyf_10226[32]; // 0809:8196
db dummyf_10246[32]; // 0809:81b6
db dummyf_10266[32]; // 0809:81d6
db dummyf_10286[32]; // 0809:81f6
db dummyf_102a6[32]; // 0809:8216
db dummyf_102c6[32]; // 0809:8236
db dummyf_102e6[32]; // 0809:8256
db dummyf_10306[32]; // 0809:8276
db dummyf_10326[32]; // 0809:8296
db dummyf_10346[32]; // 0809:82b6
db dummyf_10366[32]; // 0809:82d6
db dummyf_10386[32]; // 0809:82f6
db dummyf_103a6[32]; // 0809:8316
db dummyf_103c6[32]; // 0809:8336
db dummyf_103e6[32]; // 0809:8356
db dummyf_10406[32]; // 0809:8376
db dummyf_10426[32]; // 0809:8396
db dummyf_10446[32]; // 0809:83b6
db dummyf_10466[32]; // 0809:83d6
db dummyf_10486[32]; // 0809:83f6
db dummyf_104a6[32]; // 0809:8416
db dummyf_104c6[32]; // 0809:8436
db dummyf_104e6[32]; // 0809:8456
db dummyf_10506[32]; // 0809:8476
db dummyf_10526[32]; // 0809:8496
db dummyf_10546[32]; // 0809:84b6
db dummyf_10566[32]; // 0809:84d6
db dummyf_10586[32]; // 0809:84f6
db dummyf_105a6[32]; // 0809:8516
db dummyf_105c6[32]; // 0809:8536
db dummyf_105e6[32]; // 0809:8556
db dummyf_10606[32]; // 0809:8576
db dummyf_10626[32]; // 0809:8596
db dummyf_10646[32]; // 0809:85b6
db dummyf_10666[32]; // 0809:85d6
db dummyf_10686[32]; // 0809:85f6
db dummyf_106a6[32]; // 0809:8616
db dummyf_106c6[32]; // 0809:8636
db dummyf_106e6[32]; // 0809:8656
db dummyf_10706[32]; // 0809:8676
db dummyf_10726[32]; // 0809:8696
db dummyf_10746[32]; // 0809:86b6
db dummyf_10766[32]; // 0809:86d6
db dummyf_10786[32]; // 0809:86f6
db dummyf_107a6[32]; // 0809:8716
db dummyf_107c6[32]; // 0809:8736
db dummyf_107e6[32]; // 0809:8756
db dummyf_10806[32]; // 0809:8776
db dummyf_10826[32]; // 0809:8796
db dummyf_10846[32]; // 0809:87b6
db dummyf_10866[32]; // 0809:87d6
db dummyf_10886[32]; // 0809:87f6
db dummyf_108a6[32]; // 0809:8816
db dummyf_108c6[32]; // 0809:8836
db dummyf_108e6[32]; // 0809:8856
db dummyf_10906[32]; // 0809:8876
db dummyf_10926[32]; // 0809:8896
db dummyf_10946[32]; // 0809:88b6
db dummyf_10966[32]; // 0809:88d6
db dummyf_10986[32]; // 0809:88f6
db dummyf_109a6[32]; // 0809:8916
db dummyf_109c6[32]; // 0809:8936
db dummyf_109e6[32]; // 0809:8956
db dummyf_10a06[32]; // 0809:8976
db dummyf_10a26[32]; // 0809:8996
db dummyf_10a46[32]; // 0809:89b6
db dummyf_10a66[32]; // 0809:89d6
db dummyf_10a86[32]; // 0809:89f6
db dummyf_10aa6[32]; // 0809:8a16
db dummyf_10ac6[32]; // 0809:8a36
db dummyf_10ae6[32]; // 0809:8a56
db dummyf_10b06[32]; // 0809:8a76
db dummyf_10b26[32]; // 0809:8a96
db dummyf_10b46[32]; // 0809:8ab6
db dummyf_10b66[32]; // 0809:8ad6
db dummyf_10b86[32]; // 0809:8af6
db dummyf_10ba6[32]; // 0809:8b16
db dummyf_10bc6[32]; // 0809:8b36
db dummyf_10be6[32]; // 0809:8b56
db dummyf_10c06[32]; // 0809:8b76
db dummyf_10c26[32]; // 0809:8b96
db dummyf_10c46[32]; // 0809:8bb6
db dummyf_10c66[32]; // 0809:8bd6
db dummyf_10c86[32]; // 0809:8bf6
db dummyf_10ca6[32]; // 0809:8c16
db dummyf_10cc6[32]; // 0809:8c36
db dummyf_10ce6[32]; // 0809:8c56
db dummyf_10d06[32]; // 0809:8c76
db dummyf_10d26[32]; // 0809:8c96
db dummyf_10d46[32]; // 0809:8cb6
db dummyf_10d66;
db dummyf_10d67;
db dummyf_10d68;
db dummyf_10d69;
db dummyf_10d6a;
db dummyf_10d6b;
db dummyf_10d6c;
db dummyf_10d6d;
db dummyf_10d6e;
db dummyf_10d6f;
db dummyf_10d70;
db dummyf_10d71;
db dummyf_10d72;
db dummyf_10d73;
db dummyf_10d74;
db dummyf_10d75;
db dummyf_10d76;
db dummyf_10d77;
db dummyf_10d78;
db dummyf_10d79;
db dummyf_10d7a;
db dummyf_10d7b;
db dummyf_10d7c;
db dummyf_10d7d;
db dummyf_10d7e;
db unk_1f35f; // 0809:8cef
db dummyf_10d80[32]; // 0809:8cf0
db dummyf_10da0[32]; // 0809:8d10
db dummyf_10dc0[32]; // 0809:8d30
db dummyf_10de0[32]; // 0809:8d50
db dummyf_10e00[32]; // 0809:8d70
db dummyf_10e20[32]; // 0809:8d90
db dummyf_10e40[32]; // 0809:8db0
db dummyf_10e60[32]; // 0809:8dd0
db dummyf_10e80[32]; // 0809:8df0
db dummyf_10ea0[32]; // 0809:8e10
db dummyf_10ec0[32]; // 0809:8e30
db dummyf_10ee0[32]; // 0809:8e50
db dummyf_10f00[32]; // 0809:8e70
db dummyf_10f20[32]; // 0809:8e90
db dummyf_10f40[32]; // 0809:8eb0
db dummyf_10f60[32]; // 0809:8ed0
db dummyf_10f80[32]; // 0809:8ef0
db dummyf_10fa0[32]; // 0809:8f10
db dummyf_10fc0[32]; // 0809:8f30
db dummyf_10fe0[32]; // 0809:8f50
db dummyf_11000[32]; // 0809:8f70
db dummyf_11020[32]; // 0809:8f90
db dummyf_11040[32]; // 0809:8fb0
db dummyf_11060[32]; // 0809:8fd0
db dummyf_11080[32]; // 0809:8ff0
db dummyf_110a0[32]; // 0809:9010
db dummyf_110c0[32]; // 0809:9030
db dummyf_110e0[32]; // 0809:9050
db dummyf_11100[32]; // 0809:9070
db dummyf_11120[32]; // 0809:9090
db dummyf_11140[32]; // 0809:90b0
db dummyf_11160[32]; // 0809:90d0
db dummyf_11180[32]; // 0809:90f0
db dummyf_111a0[32]; // 0809:9110
db dummyf_111c0[32]; // 0809:9130
db dummyf_111e0[32]; // 0809:9150
db dummyf_11200[32]; // 0809:9170
db dummyf_11220[32]; // 0809:9190
db dummyf_11240[32]; // 0809:91b0
db dummyf_11260[32]; // 0809:91d0
db dummyf_11280[32]; // 0809:91f0
db dummyf_112a0[32]; // 0809:9210
db dummyf_112c0[32]; // 0809:9230
db dummyf_112e0[32]; // 0809:9250
db dummyf_11300[32]; // 0809:9270
db dummyf_11320[32]; // 0809:9290
db dummyf_11340[32]; // 0809:92b0
db dummyf_11360[32]; // 0809:92d0
db dummyf_11380[32]; // 0809:92f0
db dummyf_113a0[32]; // 0809:9310
db dummyf_113c0[32]; // 0809:9330
db dummyf_113e0[32]; // 0809:9350
db dummyf_11400[32]; // 0809:9370
db dummyf_11420[32]; // 0809:9390
db dummyf_11440[32]; // 0809:93b0
db dummyf_11460[32]; // 0809:93d0
db dummyf_11480[32]; // 0809:93f0
db dummyf_114a0[32]; // 0809:9410
db dummyf_114c0[32]; // 0809:9430
db dummyf_114e0[32]; // 0809:9450
db dummyf_11500[32]; // 0809:9470
db dummyf_11520[32]; // 0809:9490
db dummyf_11540[32]; // 0809:94b0
db dummyf_11560[32]; // 0809:94d0
db dummyf_11580[32]; // 0809:94f0
db dummyf_115a0[32]; // 0809:9510
db dummyf_115c0[32]; // 0809:9530
db dummyf_115e0[32]; // 0809:9550
db dummyf_11600[32]; // 0809:9570
db dummyf_11620[32]; // 0809:9590
db dummyf_11640[32]; // 0809:95b0
db dummyf_11660[32]; // 0809:95d0
db dummyf_11680[32]; // 0809:95f0
db dummyf_116a0[32]; // 0809:9610
db dummyf_116c0[32]; // 0809:9630
db dummyf_116e0[32]; // 0809:9650
db dummyf_11700[32]; // 0809:9670
db dummyf_11720[32]; // 0809:9690
db dummyf_11740[32]; // 0809:96b0
db dummyf_11760[32]; // 0809:96d0
db dummyf_11780[32]; // 0809:96f0
db dummyf_117a0[32]; // 0809:9710
db dummyf_117c0[32]; // 0809:9730
db dummyf_117e0[32]; // 0809:9750
db dummyf_11800[32]; // 0809:9770
db dummyf_11820[32]; // 0809:9790
db dummyf_11840[32]; // 0809:97b0
db dummyf_11860[32]; // 0809:97d0
db dummyf_11880[32]; // 0809:97f0
db dummyf_118a0[32]; // 0809:9810
db dummyf_118c0[32]; // 0809:9830
db dummyf_118e0[32]; // 0809:9850
db dummyf_11900[32]; // 0809:9870
db dummyf_11920[32]; // 0809:9890
db dummyf_11940[32]; // 0809:98b0
db dummyf_11960[32]; // 0809:98d0
db dummyf_11980[32]; // 0809:98f0
db dummyf_119a0[32]; // 0809:9910
db dummyf_119c0[32]; // 0809:9930
db dummyf_119e0[32]; // 0809:9950
db dummyf_11a00[32]; // 0809:9970
db dummyf_11a20[32]; // 0809:9990
db dummyf_11a40[32]; // 0809:99b0
db dummyf_11a60[32]; // 0809:99d0
db dummyf_11a80[32]; // 0809:99f0
db dummyf_11aa0[32]; // 0809:9a10
db dummyf_11ac0[32]; // 0809:9a30
db dummyf_11ae0[32]; // 0809:9a50
db dummyf_11b00[32]; // 0809:9a70
db dummyf_11b20[32]; // 0809:9a90
db dummyf_11b40[32]; // 0809:9ab0
db dummyf_11b60[32]; // 0809:9ad0
db dummyf_11b80[32]; // 0809:9af0
db dummyf_11ba0[32]; // 0809:9b10
db dummyf_11bc0[32]; // 0809:9b30
db dummyf_11be0[32]; // 0809:9b50
db dummyf_11c00[32]; // 0809:9b70
db dummyf_11c20[32]; // 0809:9b90
db dummyf_11c40[32]; // 0809:9bb0
db dummyf_11c60[32]; // 0809:9bd0
db dummyf_11c80[32]; // 0809:9bf0
db dummyf_11ca0[32]; // 0809:9c10
db dummyf_11cc0[32]; // 0809:9c30
db dummyf_11ce0[32]; // 0809:9c50
db dummyf_11d00[32]; // 0809:9c70
db dummyf_11d20[32]; // 0809:9c90
db dummyf_11d40[32]; // 0809:9cb0
db dummyf_11d60[32]; // 0809:9cd0
db dummyf_11d80[32]; // 0809:9cf0
db dummyf_11da0[32]; // 0809:9d10
db dummyf_11dc0[32]; // 0809:9d30
db dummyf_11de0[32]; // 0809:9d50
db dummyf_11e00[32]; // 0809:9d70
db dummyf_11e20[32]; // 0809:9d90
db dummyf_11e40[32]; // 0809:9db0
db dummyf_11e60[32]; // 0809:9dd0
db dummyf_11e80[32]; // 0809:9df0
db dummyf_11ea0[32]; // 0809:9e10
db dummyf_11ec0[32]; // 0809:9e30
db dummyf_11ee0[32]; // 0809:9e50
db dummyf_11f00[32]; // 0809:9e70
db dummyf_11f20[32]; // 0809:9e90
db dummyf_11f40[32]; // 0809:9eb0
db dummyf_11f60[32]; // 0809:9ed0
db dummyf_11f80[32]; // 0809:9ef0
db dummyf_11fa0[32]; // 0809:9f10
db dummyf_11fc0[32]; // 0809:9f30
db dummyf_11fe0[32]; // 0809:9f50
db dummyf_12000[32]; // 0809:9f70
db dummyf_12020[32]; // 0809:9f90
db dummyf_12040[32]; // 0809:9fb0
db dummyf_12060[32]; // 0809:9fd0
db dummyf_12080[32]; // 0809:9ff0
db dummyf_120a0[32]; // 0809:a010
db dummyf_120c0[32]; // 0809:a030
db dummyf_120e0[32]; // 0809:a050
db dummyf_12100[32]; // 0809:a070
db dummyf_12120[32]; // 0809:a090
db dummyf_12140[32]; // 0809:a0b0
db dummyf_12160[32]; // 0809:a0d0
db dummyf_12180[32]; // 0809:a0f0
db dummyf_121a0[32]; // 0809:a110
db dummyf_121c0[32]; // 0809:a130
db dummyf_121e0[32]; // 0809:a150
db dummyf_12200[32]; // 0809:a170
db dummyf_12220[32]; // 0809:a190
db dummyf_12240[32]; // 0809:a1b0
db dummyf_12260[32]; // 0809:a1d0
db dummyf_12280[32]; // 0809:a1f0
db dummyf_122a0[32]; // 0809:a210
db dummyf_122c0[32]; // 0809:a230
db dummyf_122e0[32]; // 0809:a250
db dummyf_12300[32]; // 0809:a270
db dummyf_12320[32]; // 0809:a290
db dummyf_12340[32]; // 0809:a2b0
db dummyf_12360[32]; // 0809:a2d0
db dummyf_12380[32]; // 0809:a2f0
db dummyf_123a0[32]; // 0809:a310
db dummyf_123c0[32]; // 0809:a330
db dummyf_123e0[32]; // 0809:a350
db dummyf_12400[32]; // 0809:a370
db dummyf_12420[32]; // 0809:a390
db dummyf_12440[32]; // 0809:a3b0
db dummyf_12460[32]; // 0809:a3d0
db dummyf_12480[32]; // 0809:a3f0
db dummyf_124a0[32]; // 0809:a410
db dummyf_124c0[32]; // 0809:a430
db dummyf_124e0[32]; // 0809:a450
db dummyf_12500[32]; // 0809:a470
db dummyf_12520[32]; // 0809:a490
db dummyf_12540[32]; // 0809:a4b0
db dummyf_12560[32]; // 0809:a4d0
db dummyf_12580[32]; // 0809:a4f0
db dummyf_125a0[32]; // 0809:a510
db dummyf_125c0[32]; // 0809:a530
db dummyf_125e0[32]; // 0809:a550
db dummyf_12600[32]; // 0809:a570
db dummyf_12620[32]; // 0809:a590
db dummyf_12640[32]; // 0809:a5b0
db dummyf_12660[32]; // 0809:a5d0
db dummyf_12680[32]; // 0809:a5f0
db dummyf_126a0[32]; // 0809:a610
db dummyf_126c0[32]; // 0809:a630
db dummyf_126e0[32]; // 0809:a650
db dummyf_12700[32]; // 0809:a670
db dummyf_12720[32]; // 0809:a690
db dummyf_12740[32]; // 0809:a6b0
db dummyf_12760[32]; // 0809:a6d0
db dummyf_12780[32]; // 0809:a6f0
db dummyf_127a0[32]; // 0809:a710
db dummyf_127c0[32]; // 0809:a730
db dummyf_127e0[32]; // 0809:a750
db dummyf_12800[32]; // 0809:a770
db dummyf_12820[32]; // 0809:a790
db dummyf_12840[32]; // 0809:a7b0
db dummyf_12860[32]; // 0809:a7d0
db dummyf_12880[32]; // 0809:a7f0
db dummyf_128a0[32]; // 0809:a810
db dummyf_128c0[32]; // 0809:a830
db dummyf_128e0[32]; // 0809:a850
db dummyf_12900[32]; // 0809:a870
db dummyf_12920[32]; // 0809:a890
db dummyf_12940[32]; // 0809:a8b0
db dummyf_12960[32]; // 0809:a8d0
db dummyf_12980[32]; // 0809:a8f0
db dummyf_129a0[32]; // 0809:a910
db dummyf_129c0[32]; // 0809:a930
db dummyf_129e0[32]; // 0809:a950
db dummyf_12a00[32]; // 0809:a970
db dummyf_12a20[32]; // 0809:a990
db dummyf_12a40[32]; // 0809:a9b0
db dummyf_12a60[32]; // 0809:a9d0
db dummyf_12a80[32]; // 0809:a9f0
db dummyf_12aa0[32]; // 0809:aa10
db dummyf_12ac0[32]; // 0809:aa30
db dummyf_12ae0[32]; // 0809:aa50
db dummyf_12b00[32]; // 0809:aa70
db dummyf_12b20[32]; // 0809:aa90
db dummyf_12b40[32]; // 0809:aab0
db dummyf_12b60[32]; // 0809:aad0
db dummyf_12b80[32]; // 0809:aaf0
db dummyf_12ba0[32]; // 0809:ab10
db dummyf_12bc0[32]; // 0809:ab30
db dummyf_12be0[32]; // 0809:ab50
db dummyf_12c00[32]; // 0809:ab70
db dummyf_12c20[32]; // 0809:ab90
db dummyf_12c40[32]; // 0809:abb0
db dummyf_12c60[32]; // 0809:abd0
db dummyf_12c80[32]; // 0809:abf0
db dummyf_12ca0[32]; // 0809:ac10
db dummyf_12cc0[32]; // 0809:ac30
db dummyf_12ce0[32]; // 0809:ac50
db dummyf_12d00[32]; // 0809:ac70
db dummyf_12d20[32]; // 0809:ac90
db dummyf_12d40[32]; // 0809:acb0
db dummyf_12d60[32]; // 0809:acd0
db dummyf_12d80[32]; // 0809:acf0
db dummyf_12da0[32]; // 0809:ad10
db dummyf_12dc0[32]; // 0809:ad30
db dummyf_12de0[32]; // 0809:ad50
db dummyf_12e00[32]; // 0809:ad70
db dummyf_12e20[32]; // 0809:ad90
db dummyf_12e40[32]; // 0809:adb0
db dummyf_12e60[32]; // 0809:add0
db dummyf_12e80[32]; // 0809:adf0
db dummyf_12ea0[32]; // 0809:ae10
db dummyf_12ec0[32]; // 0809:ae30
db dummyf_12ee0[32]; // 0809:ae50
db dummyf_12f00[32]; // 0809:ae70
db dummyf_12f20[32]; // 0809:ae90
db dummyf_12f40[32]; // 0809:aeb0
db dummyf_12f60[32]; // 0809:aed0
db dummyf_12f80[32]; // 0809:aef0
db dummyf_12fa0[32]; // 0809:af10
db dummyf_12fc0[32]; // 0809:af30
db dummyf_12fe0[32]; // 0809:af50
db dummyf_13000[32]; // 0809:af70
db dummyf_13020[32]; // 0809:af90
db dummyf_13040[32]; // 0809:afb0
db dummyf_13060[32]; // 0809:afd0
db dummyf_13080[32]; // 0809:aff0
db dummyf_130a0[32]; // 0809:b010
db dummyf_130c0[32]; // 0809:b030
db dummyf_130e0[32]; // 0809:b050
db dummyf_13100[32]; // 0809:b070
db dummyf_13120[32]; // 0809:b090
db dummyf_13140[32]; // 0809:b0b0
db dummyf_13160[32]; // 0809:b0d0
db dummyf_13180[32]; // 0809:b0f0
db dummyf_131a0[32]; // 0809:b110
db dummyf_131c0[32]; // 0809:b130
db dummyf_131e0[32]; // 0809:b150
db dummyf_13200[32]; // 0809:b170
db dummyf_13220[32]; // 0809:b190
db dummyf_13240[32]; // 0809:b1b0
db dummyf_13260[32]; // 0809:b1d0
db dummyf_13280[32]; // 0809:b1f0
db dummyf_132a0[32]; // 0809:b210
db dummyf_132c0[32]; // 0809:b230
db dummyf_132e0[32]; // 0809:b250
db dummyf_13300[32]; // 0809:b270
db dummyf_13320[32]; // 0809:b290
db dummyf_13340[32]; // 0809:b2b0
db dummyf_13360[32]; // 0809:b2d0
db dummyf_13380[32]; // 0809:b2f0
db dummyf_133a0[32]; // 0809:b310
db dummyf_133c0[32]; // 0809:b330
db dummyf_133e0[32]; // 0809:b350
db dummyf_13400[32]; // 0809:b370
db dummyf_13420[32]; // 0809:b390
db dummyf_13440[32]; // 0809:b3b0
db dummyf_13460[32]; // 0809:b3d0
db dummyf_13480[32]; // 0809:b3f0
db dummyf_134a0[32]; // 0809:b410
db dummyf_134c0[32]; // 0809:b430
db dummyf_134e0[32]; // 0809:b450
db dummyf_13500[32]; // 0809:b470
db dummyf_13520[32]; // 0809:b490
db dummyf_13540[32]; // 0809:b4b0
db dummyf_13560[32]; // 0809:b4d0
db dummyf_13580[32]; // 0809:b4f0
db dummyf_135a0[32]; // 0809:b510
db dummyf_135c0[32]; // 0809:b530
db dummyf_135e0[32]; // 0809:b550
db dummyf_13600[32]; // 0809:b570
db dummyf_13620[32]; // 0809:b590
db dummyf_13640[32]; // 0809:b5b0
db dummyf_13660[32]; // 0809:b5d0
db dummyf_13680[32]; // 0809:b5f0
db dummyf_136a0[32]; // 0809:b610
db dummyf_136c0[32]; // 0809:b630
db dummyf_136e0[32]; // 0809:b650
db dummyf_13700[32]; // 0809:b670
db dummyf_13720[32]; // 0809:b690
db dummyf_13740[32]; // 0809:b6b0
db dummyf_13760[32]; // 0809:b6d0
db dummyf_13780[32]; // 0809:b6f0
db dummyf_137a0[32]; // 0809:b710
db dummyf_137c0[32]; // 0809:b730
db dummyf_137e0[32]; // 0809:b750
db dummyf_13800[32]; // 0809:b770
db dummyf_13820[32]; // 0809:b790
db dummyf_13840[32]; // 0809:b7b0
db dummyf_13860[32]; // 0809:b7d0
db dummyf_13880[32]; // 0809:b7f0
db dummyf_138a0[32]; // 0809:b810
db dummyf_138c0[32]; // 0809:b830
db dummyf_138e0[32]; // 0809:b850
db dummyf_13900[32]; // 0809:b870
db dummyf_13920[32]; // 0809:b890
db dummyf_13940[32]; // 0809:b8b0
db dummyf_13960[32]; // 0809:b8d0
db dummyf_13980[32]; // 0809:b8f0
db dummyf_139a0[32]; // 0809:b910
db dummyf_139c0[32]; // 0809:b930
db dummyf_139e0[32]; // 0809:b950
db dummyf_13a00[32]; // 0809:b970
db dummyf_13a20[32]; // 0809:b990
db dummyf_13a40[32]; // 0809:b9b0
db dummyf_13a60[32]; // 0809:b9d0
db dummyf_13a80[32]; // 0809:b9f0
db dummyf_13aa0[32]; // 0809:ba10
db dummyf_13ac0[32]; // 0809:ba30
db dummyf_13ae0[32]; // 0809:ba50
db dummyf_13b00[32]; // 0809:ba70
db dummyf_13b20[32]; // 0809:ba90
db dummyf_13b40[32]; // 0809:bab0
db dummyf_13b60[32]; // 0809:bad0
db dummyf_13b80[32]; // 0809:baf0
db dummyf_13ba0[32]; // 0809:bb10
db dummyf_13bc0[32]; // 0809:bb30
db dummyf_13be0[32]; // 0809:bb50
db dummyf_13c00[32]; // 0809:bb70
db dummyf_13c20[32]; // 0809:bb90
db dummyf_13c40[32]; // 0809:bbb0
db dummyf_13c60[32]; // 0809:bbd0
db dummyf_13c80[32]; // 0809:bbf0
db dummyf_13ca0[32]; // 0809:bc10
db dummyf_13cc0[32]; // 0809:bc30
db dummyf_13ce0[32]; // 0809:bc50
db dummyf_13d00[32]; // 0809:bc70
db dummyf_13d20[32]; // 0809:bc90
db dummyf_13d40[32]; // 0809:bcb0
db dummyf_13d60[32]; // 0809:bcd0
db dummyf_13d80[32]; // 0809:bcf0
db dummyf_13da0[32]; // 0809:bd10
db dummyf_13dc0[32]; // 0809:bd30
db dummyf_13de0[32]; // 0809:bd50
db dummyf_13e00[32]; // 0809:bd70
db dummyf_13e20[32]; // 0809:bd90
db dummyf_13e40[32]; // 0809:bdb0
db dummyf_13e60[32]; // 0809:bdd0
db dummyf_13e80[32]; // 0809:bdf0
db dummyf_13ea0[32]; // 0809:be10
db dummyf_13ec0[32]; // 0809:be30
db dummyf_13ee0[32]; // 0809:be50
db dummyf_13f00[32]; // 0809:be70
db dummyf_13f20[32]; // 0809:be90
db dummyf_13f40[32]; // 0809:beb0
db dummyf_13f60[32]; // 0809:bed0
db dummyf_13f80[32]; // 0809:bef0
db dummyf_13fa0[32]; // 0809:bf10
db dummyf_13fc0[32]; // 0809:bf30
db dummyf_13fe0[32]; // 0809:bf50
db dummyf_14000[32]; // 0809:bf70
db dummyf_14020[32]; // 0809:bf90
db dummyf_14040[32]; // 0809:bfb0
db dummyf_14060[32]; // 0809:bfd0
db dummyf_14080[32]; // 0809:bff0
db dummyf_140a0[32]; // 0809:c010
db dummyf_140c0[32]; // 0809:c030
db dummyf_140e0[32]; // 0809:c050
db dummyf_14100[32]; // 0809:c070
db dummyf_14120[32]; // 0809:c090
db dummyf_14140[32]; // 0809:c0b0
db dummyf_14160[32]; // 0809:c0d0
db dummyf_14180[32]; // 0809:c0f0
db dummyf_141a0[32]; // 0809:c110
db dummyf_141c0[32]; // 0809:c130
db dummyf_141e0[32]; // 0809:c150
db dummyf_14200[32]; // 0809:c170
db dummyf_14220[32]; // 0809:c190
db dummyf_14240[32]; // 0809:c1b0
db dummyf_14260[32]; // 0809:c1d0
db dummyf_14280[32]; // 0809:c1f0
db dummyf_142a0[32]; // 0809:c210
db dummyf_142c0[32]; // 0809:c230
db dummyf_142e0[32]; // 0809:c250
db dummyf_14300[32]; // 0809:c270
db dummyf_14320[32]; // 0809:c290
db dummyf_14340[32]; // 0809:c2b0
db dummyf_14360[32]; // 0809:c2d0
db dummyf_14380[32]; // 0809:c2f0
db dummyf_143a0[32]; // 0809:c310
db dummyf_143c0[32]; // 0809:c330
db dummyf_143e0[32]; // 0809:c350
db dummyf_14400[32]; // 0809:c370
db dummyf_14420[32]; // 0809:c390
db dummyf_14440;
db dummyf_14441;
db dummyf_14442;
db dummyf_14443;
db dummyf_14444;
db dummyf_14445;
db dummyf_14446;
db dummyf_14447;
db dummyf_14448;
db dummyf_14449;
db dummyf_1444a;
db dummyf_1444b;
db dummyf_1444c;
db dummyf_1444d;
db dummyf_1444e;
db dummyf_1444f;
db dummyf_14450;
db unk_22a31; // 0809:c3c1
db dummyf_14452[32]; // 0809:c3c2
db dummyf_14472[32]; // 0809:c3e2
db dummyf_14492[32]; // 0809:c402
db dummyf_144b2[32]; // 0809:c422
db dummyf_144d2[32]; // 0809:c442
db dummyf_144f2[32]; // 0809:c462
db dummyf_14512[32]; // 0809:c482
db dummyf_14532[32]; // 0809:c4a2
db dummyf_14552;
db dummyf_14553;
db dummyf_14554;
db dummyf_14555;
db dummyf_14556;
db dummyf_14557;
db dummyf_14558;
db dummyf_14559;
db dummyf_1455a;
db dummyf_1455b;
db dummyf_1455c;
db dummyf_1455d;
db dummyf_1455e;
db dummyf_1455f;
db dummyf_14560;
db dummyf_14561;
db dummyf_14562;
db dummyf_14563;
db dummyf_14564;
db dummyf_14565;
db dummyf_14566;
db dummyf_14567;
db dummyf_14568;
db dummyf_14569;
db dummyf_1456a;
db unk_22b4b; // 0809:c4db
db dummyf_1456c[32]; // 0809:c4dc
db dummyf_1458c[32]; // 0809:c4fc
db dummyf_145ac[32]; // 0809:c51c
db dummyf_145cc[32]; // 0809:c53c
db dummyf_145ec[32]; // 0809:c55c
db dummyf_1460c[32]; // 0809:c57c
db dummyf_1462c[32]; // 0809:c59c
db dummyf_1464c[32]; // 0809:c5bc
db dummyf_1466c[32]; // 0809:c5dc
db dummyf_1468c[32]; // 0809:c5fc
db dummyf_146ac[32]; // 0809:c61c
db dummyf_146cc[32]; // 0809:c63c
db dummyf_146ec[32]; // 0809:c65c
db dummyf_1470c[32]; // 0809:c67c
db dummyf_1472c[32]; // 0809:c69c
db dummyf_1474c[32]; // 0809:c6bc
db dummyf_1476c[32]; // 0809:c6dc
db dummyf_1478c[32]; // 0809:c6fc
db dummyf_147ac[32]; // 0809:c71c
db dummyf_147cc[32]; // 0809:c73c
db dummyf_147ec[32]; // 0809:c75c
db dummyf_1480c[32]; // 0809:c77c
db dummyf_1482c[32]; // 0809:c79c
db dummyf_1484c[32]; // 0809:c7bc
db dummyf_1486c[32]; // 0809:c7dc
db dummyf_1488c[32]; // 0809:c7fc
db dummyf_148ac[32]; // 0809:c81c
db dummyf_148cc[32]; // 0809:c83c
db dummyf_148ec[32]; // 0809:c85c
db dummyf_1490c[32]; // 0809:c87c
db dummyf_1492c[32]; // 0809:c89c
db dummyf_1494c[32]; // 0809:c8bc
db dummyf_1496c[32]; // 0809:c8dc
db dummyf_1498c[32]; // 0809:c8fc
db dummyf_149ac[32]; // 0809:c91c
db dummyf_149cc[32]; // 0809:c93c
db dummyf_149ec[32]; // 0809:c95c
db dummyf_14a0c[32]; // 0809:c97c
db dummyf_14a2c[32]; // 0809:c99c
db dummyf_14a4c[32]; // 0809:c9bc
db dummyf_14a6c;
db dummyf_14a6d;
db dummyf_14a6e;
db dummyf_14a6f;
db dummyf_14a70;
db dummyf_14a71;
db unk_23052; // 0809:c9e2
db dummyf_14a73[32]; // 0809:c9e3
db dummyf_14a93;
db dummyf_14a94;
db dummyf_14a95;
db dummyf_14a96;
db dummyf_14a97;
db dummyf_14a98;
db dummyf_14a99;
db dummyf_14a9a;
db dummyf_14a9b;
db dummyf_14a9c;
db dummyf_14a9d;
db unk_2307e; // 0809:ca0e
db dummyf_14a9f[32]; // 0809:ca0f
db dummyf_14abf[32]; // 0809:ca2f
db dummyf_14adf[32]; // 0809:ca4f
db dummyf_14aff[32]; // 0809:ca6f
db dummyf_14b1f[32]; // 0809:ca8f
db dummyf_14b3f[32]; // 0809:caaf
db dummyf_14b5f[32]; // 0809:cacf
db dummyf_14b7f[32]; // 0809:caef
db dummyf_14b9f[32]; // 0809:cb0f
db dummyf_14bbf[32]; // 0809:cb2f
db dummyf_14bdf[32]; // 0809:cb4f
db dummyf_14bff[32]; // 0809:cb6f
db dummyf_14c1f[32]; // 0809:cb8f
db dummyf_14c3f[32]; // 0809:cbaf
db dummyf_14c5f[32]; // 0809:cbcf
db dummyf_14c7f[32]; // 0809:cbef
db dummyf_14c9f[32]; // 0809:cc0f
db dummyf_14cbf[32]; // 0809:cc2f
db dummyf_14cdf[32]; // 0809:cc4f
db dummyf_14cff[32]; // 0809:cc6f
db dummyf_14d1f[32]; // 0809:cc8f
db dummyf_14d3f[32]; // 0809:ccaf
db dummyf_14d5f[32]; // 0809:cccf
db dummyf_14d7f[32]; // 0809:ccef
db dummyf_14d9f[32]; // 0809:cd0f
db dummyf_14dbf[32]; // 0809:cd2f
db dummyf_14ddf[32]; // 0809:cd4f
db dummyf_14dff[32]; // 0809:cd6f
db dummyf_14e1f[32]; // 0809:cd8f
db dummyf_14e3f[32]; // 0809:cdaf
db dummyf_14e5f[32]; // 0809:cdcf
db dummyf_14e7f[32]; // 0809:cdef
db dummyf_14e9f[32]; // 0809:ce0f
db dummyf_14ebf[32]; // 0809:ce2f
db dummyf_14edf[32]; // 0809:ce4f
db dummyf_14eff[32]; // 0809:ce6f
db dummyf_14f1f[32]; // 0809:ce8f
db dummyf_14f3f[32]; // 0809:ceaf
db dummyf_14f5f[32]; // 0809:cecf
db dummyf_14f7f[32]; // 0809:ceef
db dummyf_14f9f[32]; // 0809:cf0f
db dummyf_14fbf[32]; // 0809:cf2f
db dummyf_14fdf[32]; // 0809:cf4f
db dummyf_14fff[32]; // 0809:cf6f
db dummyf_1501f[32]; // 0809:cf8f
db dummyf_1503f[32]; // 0809:cfaf
db dummyf_1505f[32]; // 0809:cfcf
db dummyf_1507f[32]; // 0809:cfef
db dummyf_1509f[32]; // 0809:d00f
db dummyf_150bf[32]; // 0809:d02f
db dummyf_150df[32]; // 0809:d04f
db dummyf_150ff[32]; // 0809:d06f
db dummyf_1511f[32]; // 0809:d08f
db dummyf_1513f[32]; // 0809:d0af
db dummyf_1515f[32]; // 0809:d0cf
db dummyf_1517f[32]; // 0809:d0ef
db dummyf_1519f[32]; // 0809:d10f
db dummyf_151bf[32]; // 0809:d12f
db dummyf_151df[32]; // 0809:d14f
db dummyf_151ff[32]; // 0809:d16f
db dummyf_1521f[32]; // 0809:d18f
db dummyf_1523f[32]; // 0809:d1af
db dummyf_1525f[32]; // 0809:d1cf
db dummyf_1527f[32]; // 0809:d1ef
db dummyf_1529f[32]; // 0809:d20f
db dummyf_152bf[32]; // 0809:d22f
db dummyf_152df[32]; // 0809:d24f
db dummyf_152ff[32]; // 0809:d26f
db dummyf_1531f[32]; // 0809:d28f
db dummyf_1533f[32]; // 0809:d2af
db dummyf_1535f[32]; // 0809:d2cf
db dummyf_1537f[32]; // 0809:d2ef
db dummyf_1539f[32]; // 0809:d30f
db dummyf_153bf[32]; // 0809:d32f
db dummyf_153df[32]; // 0809:d34f
db dummyf_153ff[32]; // 0809:d36f
db dummyf_1541f[32]; // 0809:d38f
db dummyf_1543f[32]; // 0809:d3af
db dummyf_1545f[32]; // 0809:d3cf
db dummyf_1547f[32]; // 0809:d3ef
db dummyf_1549f[32]; // 0809:d40f
db dummyf_154bf[32]; // 0809:d42f
db dummyf_154df[32]; // 0809:d44f
db dummyf_154ff[32]; // 0809:d46f
db dummyf_1551f[32]; // 0809:d48f
db dummyf_1553f[32]; // 0809:d4af
db dummyf_1555f[32]; // 0809:d4cf
db dummyf_1557f[32]; // 0809:d4ef
db dummyf_1559f[32]; // 0809:d50f
db dummyf_155bf[32]; // 0809:d52f
db dummyf_155df[32]; // 0809:d54f
db dummyf_155ff[32]; // 0809:d56f
db dummyf_1561f[32]; // 0809:d58f
db dummyf_1563f[32]; // 0809:d5af
db dummyf_1565f[32]; // 0809:d5cf
db dummyf_1567f[32]; // 0809:d5ef
db dummyf_1569f[32]; // 0809:d60f
db dummyf_156bf[32]; // 0809:d62f
db dummyf_156df[32]; // 0809:d64f
db dummyf_156ff[32]; // 0809:d66f
db dummyf_1571f[32]; // 0809:d68f
db dummyf_1573f[32]; // 0809:d6af
db dummyf_1575f[32]; // 0809:d6cf
db dummyf_1577f[32]; // 0809:d6ef
db dummyf_1579f[32]; // 0809:d70f
db dummyf_157bf[32]; // 0809:d72f
db dummyf_157df[32]; // 0809:d74f
db dummyf_157ff[32]; // 0809:d76f
db dummyf_1581f[32]; // 0809:d78f
db dummyf_1583f[32]; // 0809:d7af
db dummyf_1585f[32]; // 0809:d7cf
db dummyf_1587f[32]; // 0809:d7ef
db dummyf_1589f[32]; // 0809:d80f
db dummyf_158bf[32]; // 0809:d82f
db dummyf_158df[32]; // 0809:d84f
db dummyf_158ff[32]; // 0809:d86f
db dummyf_1591f[32]; // 0809:d88f
db dummyf_1593f[32]; // 0809:d8af
db dummyf_1595f[32]; // 0809:d8cf
db dummyf_1597f[32]; // 0809:d8ef
db dummyf_1599f[32]; // 0809:d90f
db dummyf_159bf[32]; // 0809:d92f
db dummyf_159df[32]; // 0809:d94f
db dummyf_159ff[32]; // 0809:d96f
db dummyf_15a1f[32]; // 0809:d98f
db dummyf_15a3f[32]; // 0809:d9af
db dummyf_15a5f[32]; // 0809:d9cf
db dummyf_15a7f[32]; // 0809:d9ef
db dummyf_15a9f[32]; // 0809:da0f
db dummyf_15abf[32]; // 0809:da2f
db dummyf_15adf[32]; // 0809:da4f
db dummyf_15aff[32]; // 0809:da6f
db dummyf_15b1f[32]; // 0809:da8f
db dummyf_15b3f[32]; // 0809:daaf
db dummyf_15b5f[32]; // 0809:dacf
db dummyf_15b7f[32]; // 0809:daef
db dummyf_15b9f[32]; // 0809:db0f
db dummyf_15bbf[32]; // 0809:db2f
db dummyf_15bdf[32]; // 0809:db4f
db dummyf_15bff[32]; // 0809:db6f
db dummyf_15c1f[32]; // 0809:db8f
db dummyf_15c3f[32]; // 0809:dbaf
db dummyf_15c5f[32]; // 0809:dbcf
db dummyf_15c7f[32]; // 0809:dbef
db dummyf_15c9f[32]; // 0809:dc0f
db dummyf_15cbf[32]; // 0809:dc2f
db dummyf_15cdf[32]; // 0809:dc4f
db dummyf_15cff[32]; // 0809:dc6f
db dummyf_15d1f[32]; // 0809:dc8f
db dummyf_15d3f[32]; // 0809:dcaf
db dummyf_15d5f[32]; // 0809:dccf
db dummyf_15d7f[32]; // 0809:dcef
db dummyf_15d9f[32]; // 0809:dd0f
db dummyf_15dbf[32]; // 0809:dd2f
db dummyf_15ddf[32]; // 0809:dd4f
db dummyf_15dff[32]; // 0809:dd6f
db dummyf_15e1f[32]; // 0809:dd8f
db dummyf_15e3f[32]; // 0809:ddaf
db dummyf_15e5f[32]; // 0809:ddcf
db dummyf_15e7f[32]; // 0809:ddef
db dummyf_15e9f[32]; // 0809:de0f
db dummyf_15ebf[32]; // 0809:de2f
db dummyf_15edf[32]; // 0809:de4f
db dummyf_15eff[32]; // 0809:de6f
db dummyf_15f1f[32]; // 0809:de8f
db dummyf_15f3f[32]; // 0809:deaf
db dummyf_15f5f[32]; // 0809:decf
db dummyf_15f7f[32]; // 0809:deef
db dummyf_15f9f[32]; // 0809:df0f
db dummyf_15fbf[32]; // 0809:df2f
db dummyf_15fdf[32]; // 0809:df4f
db dummyf_15fff[32]; // 0809:df6f
db dummyf_1601f[32]; // 0809:df8f
db dummyf_1603f[32]; // 0809:dfaf
db dummyf_1605f[32]; // 0809:dfcf
db dummyf_1607f[32]; // 0809:dfef
db dummyf_1609f[32]; // 0809:e00f
db dummyf_160bf[32]; // 0809:e02f
db dummyf_160df[32]; // 0809:e04f
db dummyf_160ff[32]; // 0809:e06f
db dummyf_1611f[32]; // 0809:e08f
db dummyf_1613f[32]; // 0809:e0af
db dummyf_1615f[32]; // 0809:e0cf
db dummyf_1617f[32]; // 0809:e0ef
db dummyf_1619f[32]; // 0809:e10f
db dummyf_161bf[32]; // 0809:e12f
db dummyf_161df[32]; // 0809:e14f
db dummyf_161ff[32]; // 0809:e16f
db dummyf_1621f[32]; // 0809:e18f
db dummyf_1623f[32]; // 0809:e1af
db dummyf_1625f[32]; // 0809:e1cf
db dummyf_1627f[32]; // 0809:e1ef
db dummyf_1629f[32]; // 0809:e20f
db dummyf_162bf[32]; // 0809:e22f
db dummyf_162df[32]; // 0809:e24f
db dummyf_162ff[32]; // 0809:e26f
db dummyf_1631f[32]; // 0809:e28f
db dummyf_1633f[32]; // 0809:e2af
db dummyf_1635f[32]; // 0809:e2cf
db dummyf_1637f[32]; // 0809:e2ef
db dummyf_1639f[32]; // 0809:e30f
db dummyf_163bf[32]; // 0809:e32f
db dummyf_163df[32]; // 0809:e34f
db dummyf_163ff[32]; // 0809:e36f
db dummyf_1641f[32]; // 0809:e38f
db dummyf_1643f[32]; // 0809:e3af
db dummyf_1645f[32]; // 0809:e3cf
db dummyf_1647f[32]; // 0809:e3ef
db dummyf_1649f[32]; // 0809:e40f
db dummyf_164bf[32]; // 0809:e42f
db dummyf_164df[32]; // 0809:e44f
db dummyf_164ff[32]; // 0809:e46f
db dummyf_1651f[32]; // 0809:e48f
db dummyf_1653f[32]; // 0809:e4af
db dummyf_1655f[32]; // 0809:e4cf
db dummyf_1657f[32]; // 0809:e4ef
db dummyf_1659f[32]; // 0809:e50f
db dummyf_165bf[32]; // 0809:e52f
db dummyf_165df[32]; // 0809:e54f
db dummyf_165ff[32]; // 0809:e56f
db dummyf_1661f[32]; // 0809:e58f
db dummyf_1663f[32]; // 0809:e5af
db dummyf_1665f[32]; // 0809:e5cf
db dummyf_1667f[32]; // 0809:e5ef
db dummyf_1669f[32]; // 0809:e60f
db dummyf_166bf[32]; // 0809:e62f
db dummyf_166df[32]; // 0809:e64f
db dummyf_166ff[32]; // 0809:e66f
db dummyf_1671f[32]; // 0809:e68f
db dummyf_1673f[32]; // 0809:e6af
db dummyf_1675f[32]; // 0809:e6cf
db dummyf_1677f[32]; // 0809:e6ef
db dummyf_1679f[32]; // 0809:e70f
db dummyf_167bf[32]; // 0809:e72f
db dummyf_167df[32]; // 0809:e74f
db dummyf_167ff[32]; // 0809:e76f
db dummyf_1681f[32]; // 0809:e78f
db dummyf_1683f[32]; // 0809:e7af
db dummyf_1685f[32]; // 0809:e7cf
db dummyf_1687f[32]; // 0809:e7ef
db dummyf_1689f[32]; // 0809:e80f
db dummyf_168bf[32]; // 0809:e82f
db dummyf_168df[32]; // 0809:e84f
db dummyf_168ff[32]; // 0809:e86f
db dummyf_1691f[32]; // 0809:e88f
db dummyf_1693f[32]; // 0809:e8af
db dummyf_1695f[32]; // 0809:e8cf
db dummyf_1697f[32]; // 0809:e8ef
db dummyf_1699f[32]; // 0809:e90f
db dummyf_169bf[32]; // 0809:e92f
db dummyf_169df[32]; // 0809:e94f
db dummyf_169ff[32]; // 0809:e96f
db dummyf_16a1f[32]; // 0809:e98f
db dummyf_16a3f[32]; // 0809:e9af
db dummyf_16a5f[32]; // 0809:e9cf
db dummyf_16a7f[32]; // 0809:e9ef
db dummyf_16a9f[32]; // 0809:ea0f
db dummyf_16abf[32]; // 0809:ea2f
db dummyf_16adf[32]; // 0809:ea4f
db dummyf_16aff[32]; // 0809:ea6f
db dummyf_16b1f[32]; // 0809:ea8f
db dummyf_16b3f[32]; // 0809:eaaf
db dummyf_16b5f[32]; // 0809:eacf
db dummyf_16b7f[32]; // 0809:eaef
db dummyf_16b9f[32]; // 0809:eb0f
db dummyf_16bbf[32]; // 0809:eb2f
db dummyf_16bdf[32]; // 0809:eb4f
db dummyf_16bff[32]; // 0809:eb6f
db dummyf_16c1f[32]; // 0809:eb8f
db dummyf_16c3f[32]; // 0809:ebaf
db dummyf_16c5f[32]; // 0809:ebcf
db dummyf_16c7f[32]; // 0809:ebef
db dummyf_16c9f[32]; // 0809:ec0f
db dummyf_16cbf[32]; // 0809:ec2f
db dummyf_16cdf[32]; // 0809:ec4f
db dummyf_16cff[32]; // 0809:ec6f
db dummyf_16d1f[32]; // 0809:ec8f
db dummyf_16d3f[32]; // 0809:ecaf
db dummyf_16d5f[32]; // 0809:eccf
db dummyf_16d7f[32]; // 0809:ecef
db dummyf_16d9f[32]; // 0809:ed0f
db dummyf_16dbf[32]; // 0809:ed2f
db dummyf_16ddf[32]; // 0809:ed4f
db dummyf_16dff[32]; // 0809:ed6f
db dummyf_16e1f[32]; // 0809:ed8f
db dummyf_16e3f[32]; // 0809:edaf
db dummyf_16e5f[32]; // 0809:edcf
db dummyf_16e7f[32]; // 0809:edef
db dummyf_16e9f[32]; // 0809:ee0f
db dummyf_16ebf[32]; // 0809:ee2f
db dummyf_16edf[32]; // 0809:ee4f
db dummyf_16eff[32]; // 0809:ee6f
db dummyf_16f1f[32]; // 0809:ee8f
db dummyf_16f3f[32]; // 0809:eeaf
db dummyf_16f5f[32]; // 0809:eecf
db dummyf_16f7f;
db dummyf_16f80;
db dummyf_16f81;
db dummyf_16f82;
db unk_25563; // 0809:eef3
db dummyf_16f84[32]; // 0809:eef4
db dummyf_16fa4[32]; // 0809:ef14
db dummyf_16fc4[32]; // 0809:ef34
db dummyf_16fe4[32]; // 0809:ef54
db dummyf_17004[32]; // 0809:ef74
db dummyf_17024[32]; // 0809:ef94
db dummyf_17044[32]; // 0809:efb4
db dummyf_17064[32]; // 0809:efd4
db dummyf_17084[32]; // 0809:eff4
db dummyf_170a4[32]; // 0809:f014
db dummyf_170c4[32]; // 0809:f034
db dummyf_170e4[32]; // 0809:f054
db dummyf_17104[32]; // 0809:f074
db dummyf_17124[32]; // 0809:f094
db dummyf_17144[32]; // 0809:f0b4
db dummyf_17164[32]; // 0809:f0d4
db dummyf_17184[32]; // 0809:f0f4
db dummyf_171a4[32]; // 0809:f114
db dummyf_171c4[32]; // 0809:f134
db dummyf_171e4[32]; // 0809:f154
db dummyf_17204[32]; // 0809:f174
db dummyf_17224[32]; // 0809:f194
db dummyf_17244[32]; // 0809:f1b4
db dummyf_17264[32]; // 0809:f1d4
db dummyf_17284[32]; // 0809:f1f4
db dummyf_172a4[32]; // 0809:f214
db dummyf_172c4[32]; // 0809:f234
db dummyf_172e4[32]; // 0809:f254
db dummyf_17304[32]; // 0809:f274
db dummyf_17324[32]; // 0809:f294
db dummyf_17344[32]; // 0809:f2b4
db dummyf_17364[32]; // 0809:f2d4
db dummyf_17384[32]; // 0809:f2f4
db dummyf_173a4[32]; // 0809:f314
db dummyf_173c4[32]; // 0809:f334
db dummyf_173e4[32]; // 0809:f354
db dummyf_17404[32]; // 0809:f374
db dummyf_17424[32]; // 0809:f394
db dummyf_17444[32]; // 0809:f3b4
db dummyf_17464[32]; // 0809:f3d4
db dummyf_17484[32]; // 0809:f3f4
db dummyf_174a4[32]; // 0809:f414
db dummyf_174c4[32]; // 0809:f434
db dummyf_174e4[32]; // 0809:f454
db dummyf_17504[32]; // 0809:f474
db dummyf_17524[32]; // 0809:f494
db dummyf_17544[32]; // 0809:f4b4
db dummyf_17564[32]; // 0809:f4d4
db dummyf_17584[32]; // 0809:f4f4
db dummyf_175a4[32]; // 0809:f514
db dummyf_175c4[32]; // 0809:f534
db dummyf_175e4[32]; // 0809:f554
db dummyf_17604[32]; // 0809:f574
db dummyf_17624[32]; // 0809:f594
db dummyf_17644[32]; // 0809:f5b4
db dummyf_17664[32]; // 0809:f5d4
db dummyf_17684[32]; // 0809:f5f4
db dummyf_176a4[32]; // 0809:f614
db dummyf_176c4[32]; // 0809:f634
db dummyf_176e4[32]; // 0809:f654
db dummyf_17704[32]; // 0809:f674
db dummyf_17724[32]; // 0809:f694
db dummyf_17744[32]; // 0809:f6b4
db dummyf_17764[32]; // 0809:f6d4
db dummyf_17784[32]; // 0809:f6f4
db dummyf_177a4[32]; // 0809:f714
db dummyf_177c4[32]; // 0809:f734
db dummyf_177e4[32]; // 0809:f754
db dummyf_17804[32]; // 0809:f774
db dummyf_17824[32]; // 0809:f794
db dummyf_17844[32]; // 0809:f7b4
db dummyf_17864[32]; // 0809:f7d4
db dummyf_17884[32]; // 0809:f7f4
db dummyf_178a4[32]; // 0809:f814
db dummyf_178c4[32]; // 0809:f834
db dummyf_178e4[32]; // 0809:f854
db dummyf_17904[32]; // 0809:f874
db dummyf_17924[32]; // 0809:f894
db dummyf_17944[32]; // 0809:f8b4
db dummyf_17964[32]; // 0809:f8d4
db dummyf_17984[32]; // 0809:f8f4
db dummyf_179a4[32]; // 0809:f914
db dummyf_179c4[32]; // 0809:f934
db dummyf_179e4[32]; // 0809:f954
db dummyf_17a04[32]; // 0809:f974
db dummyf_17a24[32]; // 0809:f994
db dummyf_17a44[32]; // 0809:f9b4
db dummyf_17a64[32]; // 0809:f9d4
db dummyf_17a84;
db dummyf_17a85;
db dummyf_17a86;
db dummyf_17a87;
db dummyf_17a88;
db dummyf_17a89;
db dummyf_17a8a;
db dummyf_17a8b;
db dummyf_17a8c;
db dummyf_17a8d;
db dummyf_17a8e;
db dummyf_17a8f;
db dummyf_17a90; // 0809:fa00
dw dummyf_17a91; // 0809:fa01
db dummyf_17a93[32]; // 0809:fa03
db dummyf_17ab3[32]; // 0809:fa23
db dummyf_17ad3[32]; // 0809:fa43
db dummyf_17af3[32]; // 0809:fa63
db dummyf_17b13[32]; // 0809:fa83
db dummyf_17b33;
db dummyf_17b34;
db dummyf_17b35;
db dummyf_17b36;
db dummyf_17b37;
db dummyf_17b38;
db dummyf_17b39;
db dummyf_17b3a;
db dummyf_17b3b;
db dummyf_17b3c;
db dummyf_17b3d;
db dummyf_17b3e;
dw dummyf_17b3f; // 0809:faaf
dw dummyf_17b41; // 0809:fab1
db dummyf_17b43; // 0809:fab3
db dummyf_17b44; // 0809:fab4
db dummyf_17b45;
db dummyf_17b46;
db dummyf_17b47;
db dummyf_17b48; // 0809:fab8
db dummyf_17b49; // 0809:fab9
db dummyf_17b4a; // 0809:faba
db dummyf_17b4b; // 0809:fabb
db dummyf_17b4c; // 0809:fabc
db dummyf_17b4d;
db dummyf_17b4e;
db dummyf_17b4f;
db dummyf_17b50[2];
db dummyf_17b52; // 0809:fac2
db dummyf_17b53; // 0809:fac3
db dummyf_17b54;
db dummyf_17b55[5];
db dummyf_17b5a[32]; // 0809:faca
dw dummyf_17b7a; // 0809:faea
dw dummyf_17b7c; // 0809:faec
db dummyf_17b7e; // 0809:faee
db dummyf_17b7f; // 0809:faef
db dummyf_17b80; // 0809:faf0
db dummyf_17b81; // 0809:faf1
db dummyf_17b82; // 0809:faf2
db dummyf_17b83;
dw dummyf_17b84; // 0809:faf4
dw dummyf_17b86; // 0809:faf6
db dummyf_17b88; // 0809:faf8
db dummyf_17b89; // 0809:faf9
db dummyf_17b8a; // 0809:fafa
db dummyf_17b8b; // 0809:fafb
db dummyf_17b8c;
db dummyf_17b8d;
db dummyf_17b8e;
db dummyf_17b8f;
db dummyf_17b90; // 0809:fb00
db dummyf_17b91;
db dummyf_17b92;
db dummyf_17b93;
db dummyf_17b94;
db dummyf_17b95;
db dummyf_17b96;
db dummyf_17b97;
db dummyf_17b98;
db dummyf_17b99;
db dummyf_17b9a;
db dummyf_17b9b;
db dummyf_17b9c;
db dummyf_17b9d;
db dummyf_17b9e;
db dummyf_17b9f;
db dummyf_17ba0[3];
db dummyf_17ba3[32]; // 0809:fb13
db dummyf_17bc3[32]; // 0809:fb33
db dummyf_17be3[32]; // 0809:fb53
db dummyf_17c03[32]; // 0809:fb73
db dummyf_17c23[32]; // 0809:fb93
db dummyf_17c43;
db dummyf_17c44;
db dummyf_17c45;
db dummyf_17c46;
db dummyf_17c47;
db dummyf_17c48;
db dummyf_17c49;
db dummyf_17c4a;
db dummyf_17c4b;
db dummyf_17c4c;
db dummyf_17c4d;
db dummyf_17c4e; // 0809:fbbe
db dummyf_17c4f; // 0809:fbbf
db dummyf_17c50;
db dummyf_17c51;
dw dummyf_17c52;
db dummyf_17c54;
db dummyf_17c55;
db dummyf_17c56;
db dummyf_17c57;
db dummyf_17c58;
db dummyf_17c59;
db dummyf_17c5a;
dw dummyf_17c5b;
db dummyf_17c5d;
db dummyf_17c5e;
db dummyf_17c5f;
db dummyf_17c60[304];
db dummyf_17d90; // 17c5:0140
db dummyf_17d91; // 17c5:0141
db dummyf_17d92; // 17c5:0142
db dummyf_17d93; // 17c5:0143
db dummyf_17d94; // 17c5:0144
db dummyf_17d95; // 17c5:0145
db dummyf_17d96; // 17c5:0146
db dummyf_17d97[410];
db dummyf_17f31; // 17c5:02e1
db dummyf_17f32[217];
db dummyf_1800b; // 17c5:03bb
db dummyf_1800c[599];
db dummyf_18263; // 17c5:0613
db dummyf_18264[113];
db dummyf_182d5; // 17c5:0685
db dummyf_182d6;
db dummyf_182d7;
db dummyf_182d8[18];
db dummyf_182ea; // 17c5:069a
db dummyf_182eb[88];
db dummyf_18343; // 17c5:06f3
db dummyf_18344[22];
db dummyf_1835a; // 17c5:070a
db dummyf_1835b[6842];
db dummyf_19e15; // 17c5:21c5
db dummyf_19e16[177];
db dummyf_19ec7; // 17c5:2277
db dummyf_19ec8[1531];
db dummyf_1a4c3; // 17c5:2873
db dummyf_1a4c4[2217];
db dummyf_1ad6d; // 17c5:311d
db dummyf_1ad6e[217];
db dummyf_1ae47; // 17c5:31f7
db dummyf_1ae48[17];
db dummyf_1ae59; // 17c5:3209
db dummyf_1ae5a[17];
db dummyf_1ae6b; // 17c5:321b
db dummyf_1ae6c[73];
db dummyf_1aeb5; // 17c5:3265
db dummyf_1aeb6[13];
db dummyf_1aec3; // 17c5:3273
db dummyf_1aec4[69];
db dummyf_1af09; // 17c5:32b9
db dummyf_1af0a[497];
db dummyf_1b0fb; // 17c5:34ab
db dummyf_1b0fc[329];
db dummyf_1b245; // 17c5:35f5
db dummyf_1b246[19];
db dummyf_1b259; // 17c5:3609
db dummyf_1b25a[137];
db dummyf_1b2e3; // 17c5:3693
db dummyf_1b2e4[61];
db dummyf_1b321; // 17c5:36d1
db dummyf_1b322[83];
db dummyf_1b375; // 17c5:3725
db dummyf_1b376[507];
db dummyf_1b571; // 17c5:3921
db dummyf_1b572[135];
db dummyf_1b5f9; // 17c5:39a9
db dummyf_1b5fa[21];
db dummyf_1b60f; // 17c5:39bf
db dummyf_1b610[67];
db dummyf_1b653; // 17c5:3a03
db dummyf_1b654[139];
db dummyf_1b6df; // 17c5:3a8f
db dummyf_1b6e0[23];
db dummyf_1b6f7; // 17c5:3aa7
db dummyf_1b6f8[43];
db dummyf_1b723; // 17c5:3ad3
db dummyf_1b724[3];
db dummyf_1b727; // 17c5:3ad7
db dummyf_1b728[21];
db dummyf_1b73d; // 17c5:3aed
db dummyf_1b73e[393];
db dummyf_1b8c7;
db dummyf_1b8c8[137];
dd off_29f31; // 17c5:3d01
db dummyf_1b955[341];
db dummyf_1baaa; // 17c5:3e5a
db dummyf_1baab[86];
db dummyf_1bb01; // 17c5:3eb1
db dummyf_1bb02[91];
db dummyf_1bb5d; // 17c5:3f0d
db dummyf_1bb5e[7445];
dw __jpt_2be4e; // 17c5:5c23
dw dummyf_1d875; // 17c5:5c23
dw dummyf_1d877; // 17c5:5c23
dw dummyf_1d879; // 17c5:5c23
dw dummyf_1d87b; // 17c5:5c23
dw dummyf_1d87d; // 17c5:5c23
dw dummyf_1d87f; // 17c5:5c23
dw dummyf_1d881; // 17c5:5c23
db dummyf_1d883[1333];
db dummyf_1ddb8; // 17c5:6168
db dummyf_1ddb9; // 17c5:6169
db dummyf_1ddba; // 17c5:616a
db dummyf_1ddbb; // 17c5:616b
db dummyf_1ddbc; // 17c5:616c
db dummyf_1ddbd; // 17c5:616d
db dummyf_1ddbe; // 17c5:616e
db dummyf_1ddbf; // 17c5:616f
db dummyf_1ddc0; // 17c5:6170
db dummyf_1ddc1; // 17c5:6171
db dummyf_1ddc2[48];
db dummyf_1ddf2; // 17c5:61a2
db dummyf_1ddf3; // 17c5:61a3
db dummyf_1ddf4; // 17c5:61a4
db dummyf_1ddf5; // 17c5:61a5
db dummyf_1ddf6;
db dummyf_1ddf7;
db dummyf_1ddf8; // 17c5:61a8
db dummyf_1ddf9; // 17c5:61a9
db dummyf_1ddfa; // 17c5:61aa
db dummyf_1ddfb; // 17c5:61ab
db dummyf_1ddfc;
db dummyf_1ddfd; // 17c5:61ad
db dummyf_1ddfe[7];
db dummyf_1de05; // 17c5:61b5
db dummyf_1de06[799];
db dummyf_1e125; // 17c5:64d5
db dummyf_1e126[311];
db dummyf_1e25d; // 17c5:660d
db dummyf_1e25e[207];
db dummyf_1e32d; // 17c5:66dd
db dummyf_1e32e[37];
db dummyf_1e353; // 17c5:6703
db dummyf_1e354[61];
db dummyf_1e391; // 17c5:6741
db dummyf_1e392[19];
db dummyf_1e3a5; // 17c5:6755
db dummyf_1e3a6[332];
db dummyf_1e4f2; // 17c5:68a2
db dummyf_1e4f3; // 17c5:68a3
db dummyf_1e4f4[345];
db dummyf_1e64d; // 17c5:69fd
db dummyf_1e64e[87];
db dummyf_1e6a5; // 17c5:6a55
db dummyf_1e6a6[2870];
db dummyf_1f1dc[2]; // 17c5:758c
db dummyf_1f1de[27046];
db dummyf_25b84; // 17c5:df34
db dummyf_25b85[1023];
db dummyf_25f84; // 17c5:e334
db dummyf_25f85[55];
db dummyf_25fbc; // 17c5:e36c
db dummyf_25fbd[2805];
db dummyf_26ab2; // 17c5:ee62
db dummyf_26ab3[1397];
db dummyf_27028; // 17c5:f3d8
db dummyf_27029[1191];
db dummyf_274d0[101];
db dummyf_27535;
db dummyf_27536[1371];
db dummyf_27a91;
db dummyf_27a92[83];
db dummyf_27ae5; // 274d:0615
db dummyf_27ae6[5];
db dummyf_27aeb; // 274d:061b
db dummyf_27aec[8];
db dummyf_27af4; // 274d:0624
db dummyf_27af5[5];
db dummyf_27afa; // 274d:062a
db dummyf_27afb[8];
db dummyf_27b03; // 274d:0633
db dummyf_27b04[33];
db dummyf_27b25; // 274d:0655
db dummyf_27b26[73];
db dummyf_27b6f; // 274d:069f
db dummyf_27b70[608];
db dummyf_27dd0; // 274d:0900
db dummyf_27dd1[426];
db dummyf_27f7b; // 274d:0aab
db dummyf_27f7c[435];
db dummyf_2812f; // 274d:0c5f
db dummyf_28130[1381];
db dummyf_28695;
db dummyf_28696[113];
db dummyf_28707; // 274d:1237
db dummyf_28708[7];
db dummyf_2870f; // 274d:123f
db dummyf_28710[13];
db dummyf_2871d; // 274d:124d
db dummyf_2871e[223];
db dummyf_287fd;
db dummyf_287fe[1471];
db dummyf_28dbd; // 274d:18ed
db dummyf_28dbe[725];
db dummyf_29093;
db dummyf_29094[275];
db dummyf_291a7; // 274d:1cd7
db dummyf_291a8[80];
db dummyf_291f8; // 274d:1d28
db dummyf_291f9[4];
db dummyf_291fd; // 274d:1d2d
db dummyf_291fe[13];
db dummyf_2920b; // 274d:1d3b
db dummyf_2920c[627];
db dummyf_2947f; // 274d:1faf
db dummyf_29480[107];
db dummyf_294eb;
db dummyf_294ec[45];
db dummyf_29519; // 274d:2049
db dummyf_2951a[57];
db dummyf_29553; // 274d:2083
db dummyf_29554[4];
db dummyf_29558; // 274d:2088
db dummyf_29559[13];
db dummyf_29566; // 274d:2096
db dummyf_29567[258];
db dummyf_29669; // 274d:2199
db dummyf_2966a[86];
db dummyf_296c0[262];
db dummyf_297c6; // 296c:0106
db dummyf_297c7[222];
db dummyf_298a5; // 296c:01e5
db dummyf_298a6[42];
db dummyf_298d0; // 296c:0210
db dummyf_298d1[304];
db dummyf_29a01; // 296c:0341
db dummyf_29a02[153];
db dummyf_29a9b; // 296c:03db
db dummyf_29a9c[754];
db dummyf_29d8e; // 296c:06ce
db dummyf_29d8f[548];
db dummyf_29fb3; // 296c:08f3
db dummyf_29fb4[26];
db dummyf_29fce; // 296c:090e
db dummyf_29fcf[69];
db dummyf_2a014; // 296c:0954
db dummyf_2a015[26];
db dummyf_2a02f; // 296c:096f
db dummyf_2a030[754];
db dummyf_2a322; // 296c:0c62
db dummyf_2a323[20];
db dummyf_2a337; // 296c:0c77
db dummyf_2a338[12];
db dummyf_2a344; // 296c:0c84
db dummyf_2a345[18];
db dummyf_2a357; // 296c:0c97
db dummyf_2a358[56];
db dummyf_2a390[393];
db dummyf_2a519;
db dummyf_2a51a;
db dummyf_2a51b;
db dummyf_2a51c;
db dummyf_2a51d;
db dummyf_2a51e;
db dummyf_2a51f;
db unk_38b00; // 2a52:0000
db dummyf_2a521[32]; // 2a52:0001
db dummyf_2a541;
db dummyf_2a542;
db dummyf_2a543;
db dummyf_2a544;
db dummyf_2a545;
db dummyf_2a546;
db dummyf_2a547;
db dummyf_2a548;
db dummyf_2a549;
db dummyf_2a54a;
db dummyf_2a54b;
db dummyf_2a54c;
db dummyf_2a54d;
db dummyf_2a54e;
db byte_38b2f; // 2a52:002f
db dummyf_2a550[32]; // 2a52:0030
db dummyf_2a570[32]; // 2a52:0050
db dummyf_2a590[32]; // 2a52:0070
db dummyf_2a5b0[32]; // 2a52:0090
db dummyf_2a5d0[32]; // 2a52:00b0
db dummyf_2a5f0[32]; // 2a52:00d0
db dummyf_2a610[32]; // 2a52:00f0
db dummyf_2a630[32]; // 2a52:0110
db dummyf_2a650[32]; // 2a52:0130
db dummyf_2a670[32]; // 2a52:0150
db dummyf_2a690[32]; // 2a52:0170
db dummyf_2a6b0[32]; // 2a52:0190
db dummyf_2a6d0[32]; // 2a52:01b0
db dummyf_2a6f0[32]; // 2a52:01d0
db dummyf_2a710[32]; // 2a52:01f0
db dummyf_2a730[32]; // 2a52:0210
db dummyf_2a750[32]; // 2a52:0230
db dummyf_2a770[32]; // 2a52:0250
db dummyf_2a790[32]; // 2a52:0270
db dummyf_2a7b0[32]; // 2a52:0290
db dummyf_2a7d0[32]; // 2a52:02b0
db dummyf_2a7f0[32]; // 2a52:02d0
db dummyf_2a810[32]; // 2a52:02f0
db dummyf_2a830[32]; // 2a52:0310
db dummyf_2a850[32]; // 2a52:0330
db dummyf_2a870[32]; // 2a52:0350
db dummyf_2a890[32]; // 2a52:0370
db dummyf_2a8b0[32]; // 2a52:0390
db dummyf_2a8d0[32]; // 2a52:03b0
db dummyf_2a8f0[32]; // 2a52:03d0
db dummyf_2a910[32]; // 2a52:03f0
db dummyf_2a930[32]; // 2a52:0410
db dummyf_2a950[32]; // 2a52:0430
db dummyf_2a970[32]; // 2a52:0450
db dummyf_2a990[32]; // 2a52:0470
db dummyf_2a9b0[32]; // 2a52:0490
db dummyf_2a9d0[32]; // 2a52:04b0
db dummyf_2a9f0[32]; // 2a52:04d0
db dummyf_2aa10[32]; // 2a52:04f0
db dummyf_2aa30[32]; // 2a52:0510
db dummyf_2aa50[32]; // 2a52:0530
db dummyf_2aa70[32]; // 2a52:0550
db dummyf_2aa90[32]; // 2a52:0570
db dummyf_2aab0[32]; // 2a52:0590
db dummyf_2aad0[32]; // 2a52:05b0
db dummyf_2aaf0[32]; // 2a52:05d0
db dummyf_2ab10[32]; // 2a52:05f0
db dummyf_2ab30[32]; // 2a52:0610
db dummyf_2ab50[32]; // 2a52:0630
db dummyf_2ab70[32]; // 2a52:0650
db dummyf_2ab90[32]; // 2a52:0670
db dummyf_2abb0[32]; // 2a52:0690
db dummyf_2abd0[32]; // 2a52:06b0
db dummyf_2abf0[32]; // 2a52:06d0
db dummyf_2ac10[32]; // 2a52:06f0
db dummyf_2ac30[32]; // 2a52:0710
db dummyf_2ac50[32]; // 2a52:0730
db dummyf_2ac70[32]; // 2a52:0750
db dummyf_2ac90[32]; // 2a52:0770
db dummyf_2acb0[32]; // 2a52:0790
db dummyf_2acd0[32]; // 2a52:07b0
db dummyf_2acf0[32]; // 2a52:07d0
db dummyf_2ad10[32]; // 2a52:07f0
db dummyf_2ad30[32]; // 2a52:0810
db dummyf_2ad50[32]; // 2a52:0830
db dummyf_2ad70[32]; // 2a52:0850
db dummyf_2ad90[32]; // 2a52:0870
db dummyf_2adb0[32]; // 2a52:0890
db dummyf_2add0[32]; // 2a52:08b0
db dummyf_2adf0[32]; // 2a52:08d0
db dummyf_2ae10[32]; // 2a52:08f0
db dummyf_2ae30[32]; // 2a52:0910
db dummyf_2ae50[32]; // 2a52:0930
db dummyf_2ae70[32]; // 2a52:0950
db dummyf_2ae90[32]; // 2a52:0970
db dummyf_2aeb0[32]; // 2a52:0990
db dummyf_2aed0[32]; // 2a52:09b0
db dummyf_2aef0[32]; // 2a52:09d0
db dummyf_2af10[32]; // 2a52:09f0
db dummyf_2af30[32]; // 2a52:0a10
db dummyf_2af50[32]; // 2a52:0a30
db dummyf_2af70[32]; // 2a52:0a50
db dummyf_2af90[32]; // 2a52:0a70
db dummyf_2afb0[32]; // 2a52:0a90
db dummyf_2afd0[32]; // 2a52:0ab0
db dummyf_2aff0[32]; // 2a52:0ad0
db dummyf_2b010[32]; // 2a52:0af0
db dummyf_2b030[32]; // 2a52:0b10
db dummyf_2b050[32]; // 2a52:0b30
db dummyf_2b070[32]; // 2a52:0b50
db dummyf_2b090[32]; // 2a52:0b70
db dummyf_2b0b0[32]; // 2a52:0b90
db dummyf_2b0d0[32]; // 2a52:0bb0
db dummyf_2b0f0[32]; // 2a52:0bd0
db dummyf_2b110[32]; // 2a52:0bf0
db dummyf_2b130[32]; // 2a52:0c10
db dummyf_2b150[32]; // 2a52:0c30
db dummyf_2b170[32]; // 2a52:0c50
db dummyf_2b190[32]; // 2a52:0c70
db dummyf_2b1b0[32]; // 2a52:0c90
db dummyf_2b1d0[32]; // 2a52:0cb0
db dummyf_2b1f0[32]; // 2a52:0cd0
db dummyf_2b210[32]; // 2a52:0cf0
db dummyf_2b230[32]; // 2a52:0d10
db dummyf_2b250[32]; // 2a52:0d30
db dummyf_2b270[32]; // 2a52:0d50
db dummyf_2b290[32]; // 2a52:0d70
db dummyf_2b2b0[32]; // 2a52:0d90
db dummyf_2b2d0[32]; // 2a52:0db0
db dummyf_2b2f0[32]; // 2a52:0dd0
db dummyf_2b310[32]; // 2a52:0df0
db dummyf_2b330[32]; // 2a52:0e10
db dummyf_2b350[32]; // 2a52:0e30
db dummyf_2b370[32]; // 2a52:0e50
db dummyf_2b390[32]; // 2a52:0e70
db dummyf_2b3b0[32]; // 2a52:0e90
db dummyf_2b3d0[32]; // 2a52:0eb0
db dummyf_2b3f0[32]; // 2a52:0ed0
db dummyf_2b410[32]; // 2a52:0ef0
db dummyf_2b430[32]; // 2a52:0f10
db dummyf_2b450[32]; // 2a52:0f30
db dummyf_2b470[32]; // 2a52:0f50
db dummyf_2b490[32]; // 2a52:0f70
db dummyf_2b4b0[32]; // 2a52:0f90
db dummyf_2b4d0[32]; // 2a52:0fb0
db dummyf_2b4f0[32]; // 2a52:0fd0
db dummyf_2b510[32]; // 2a52:0ff0
db dummyf_2b530[32]; // 2a52:1010
db dummyf_2b550[32]; // 2a52:1030
db dummyf_2b570[32]; // 2a52:1050
db dummyf_2b590[32]; // 2a52:1070
db dummyf_2b5b0[32]; // 2a52:1090
db dummyf_2b5d0[32]; // 2a52:10b0
db dummyf_2b5f0[32]; // 2a52:10d0
db dummyf_2b610[32]; // 2a52:10f0
db dummyf_2b630[32]; // 2a52:1110
db dummyf_2b650[32]; // 2a52:1130
db dummyf_2b670[32]; // 2a52:1150
db dummyf_2b690[32]; // 2a52:1170
db dummyf_2b6b0[32]; // 2a52:1190
db dummyf_2b6d0[32]; // 2a52:11b0
db dummyf_2b6f0[32]; // 2a52:11d0
db dummyf_2b710[32]; // 2a52:11f0
db dummyf_2b730[32]; // 2a52:1210
db dummyf_2b750[32]; // 2a52:1230
db dummyf_2b770[32]; // 2a52:1250
db dummyf_2b790[32]; // 2a52:1270
db dummyf_2b7b0[32]; // 2a52:1290
db dummyf_2b7d0[32]; // 2a52:12b0
db dummyf_2b7f0[32]; // 2a52:12d0
db dummyf_2b810[32]; // 2a52:12f0
db dummyf_2b830[32]; // 2a52:1310
db dummyf_2b850[32]; // 2a52:1330
db dummyf_2b870[32]; // 2a52:1350
db dummyf_2b890[32]; // 2a52:1370
db dummyf_2b8b0[32]; // 2a52:1390
db dummyf_2b8d0[32]; // 2a52:13b0
db dummyf_2b8f0[32]; // 2a52:13d0
db dummyf_2b910[32]; // 2a52:13f0
db dummyf_2b930[32]; // 2a52:1410
db dummyf_2b950[32]; // 2a52:1430
db dummyf_2b970[32]; // 2a52:1450
db dummyf_2b990[32]; // 2a52:1470
db dummyf_2b9b0[32]; // 2a52:1490
db dummyf_2b9d0[32]; // 2a52:14b0
db dummyf_2b9f0[32]; // 2a52:14d0
db dummyf_2ba10[32]; // 2a52:14f0
db dummyf_2ba30[32]; // 2a52:1510
db dummyf_2ba50[32]; // 2a52:1530
db dummyf_2ba70[32]; // 2a52:1550
db dummyf_2ba90[32]; // 2a52:1570
db dummyf_2bab0[32]; // 2a52:1590
db dummyf_2bad0[32]; // 2a52:15b0
db dummyf_2baf0[32]; // 2a52:15d0
db dummyf_2bb10[32]; // 2a52:15f0
db dummyf_2bb30[32]; // 2a52:1610
db dummyf_2bb50[32]; // 2a52:1630
db dummyf_2bb70[32]; // 2a52:1650
db dummyf_2bb90[32]; // 2a52:1670
db dummyf_2bbb0[32]; // 2a52:1690
db dummyf_2bbd0[32]; // 2a52:16b0
db dummyf_2bbf0[32]; // 2a52:16d0
db dummyf_2bc10[32]; // 2a52:16f0
db dummyf_2bc30[32]; // 2a52:1710
db dummyf_2bc50[32]; // 2a52:1730
db dummyf_2bc70[32]; // 2a52:1750
db dummyf_2bc90[32]; // 2a52:1770
db dummyf_2bcb0[32]; // 2a52:1790
db dummyf_2bcd0[32]; // 2a52:17b0
db dummyf_2bcf0[32]; // 2a52:17d0
db dummyf_2bd10[32]; // 2a52:17f0
db dummyf_2bd30[32]; // 2a52:1810
db dummyf_2bd50[32]; // 2a52:1830
db dummyf_2bd70[32]; // 2a52:1850
db dummyf_2bd90[32]; // 2a52:1870
db dummyf_2bdb0[32]; // 2a52:1890
db dummyf_2bdd0[32]; // 2a52:18b0
db dummyf_2bdf0[32]; // 2a52:18d0
db dummyf_2be10[32]; // 2a52:18f0
db dummyf_2be30[32]; // 2a52:1910
db dummyf_2be50[32]; // 2a52:1930
db dummyf_2be70[32]; // 2a52:1950
db dummyf_2be90[32]; // 2a52:1970
db dummyf_2beb0[32]; // 2a52:1990
db dummyf_2bed0[32]; // 2a52:19b0
db dummyf_2bef0[32]; // 2a52:19d0
db dummyf_2bf10[32]; // 2a52:19f0
db dummyf_2bf30[32]; // 2a52:1a10
db dummyf_2bf50[32]; // 2a52:1a30
db dummyf_2bf70[32]; // 2a52:1a50
db dummyf_2bf90[32]; // 2a52:1a70
db dummyf_2bfb0[32]; // 2a52:1a90
db dummyf_2bfd0[32]; // 2a52:1ab0
db dummyf_2bff0[32]; // 2a52:1ad0
db dummyf_2c010[32]; // 2a52:1af0
db dummyf_2c030[32]; // 2a52:1b10
db dummyf_2c050[32]; // 2a52:1b30
db dummyf_2c070[32]; // 2a52:1b50
db dummyf_2c090[32]; // 2a52:1b70
db dummyf_2c0b0[32]; // 2a52:1b90
db dummyf_2c0d0[32]; // 2a52:1bb0
db dummyf_2c0f0[32]; // 2a52:1bd0
db dummyf_2c110[32]; // 2a52:1bf0
db dummyf_2c130[32]; // 2a52:1c10
db dummyf_2c150[32]; // 2a52:1c30
db dummyf_2c170[32]; // 2a52:1c50
db dummyf_2c190[32]; // 2a52:1c70
db dummyf_2c1b0[32]; // 2a52:1c90
db dummyf_2c1d0[32]; // 2a52:1cb0
db dummyf_2c1f0[32]; // 2a52:1cd0
db dummyf_2c210[32]; // 2a52:1cf0
db dummyf_2c230[32]; // 2a52:1d10
db dummyf_2c250[32]; // 2a52:1d30
db dummyf_2c270[32]; // 2a52:1d50
db dummyf_2c290[32]; // 2a52:1d70
db dummyf_2c2b0[32]; // 2a52:1d90
db dummyf_2c2d0[32]; // 2a52:1db0
db dummyf_2c2f0[32]; // 2a52:1dd0
db dummyf_2c310[32]; // 2a52:1df0
db dummyf_2c330[32]; // 2a52:1e10
db dummyf_2c350[32]; // 2a52:1e30
db dummyf_2c370[32]; // 2a52:1e50
db dummyf_2c390[32]; // 2a52:1e70
db dummyf_2c3b0[32]; // 2a52:1e90
db dummyf_2c3d0[32]; // 2a52:1eb0
db dummyf_2c3f0[32]; // 2a52:1ed0
db dummyf_2c410[32]; // 2a52:1ef0
db dummyf_2c430[32]; // 2a52:1f10
db dummyf_2c450[32]; // 2a52:1f30
db dummyf_2c470[32]; // 2a52:1f50
db dummyf_2c490[32]; // 2a52:1f70
db dummyf_2c4b0[32]; // 2a52:1f90
db dummyf_2c4d0[32]; // 2a52:1fb0
db dummyf_2c4f0[32]; // 2a52:1fd0
db dummyf_2c510[32]; // 2a52:1ff0
db dummyf_2c530[32]; // 2a52:2010
db dummyf_2c550[32]; // 2a52:2030
db dummyf_2c570[32]; // 2a52:2050
db dummyf_2c590[32]; // 2a52:2070
db dummyf_2c5b0[32]; // 2a52:2090
db dummyf_2c5d0[32]; // 2a52:20b0
db dummyf_2c5f0[32]; // 2a52:20d0
db dummyf_2c610[32]; // 2a52:20f0
db dummyf_2c630[32]; // 2a52:2110
db dummyf_2c650[32]; // 2a52:2130
db dummyf_2c670[32]; // 2a52:2150
db dummyf_2c690[32]; // 2a52:2170
db dummyf_2c6b0[32]; // 2a52:2190
db dummyf_2c6d0[32]; // 2a52:21b0
db dummyf_2c6f0[32]; // 2a52:21d0
db dummyf_2c710[32]; // 2a52:21f0
db dummyf_2c730[32]; // 2a52:2210
db dummyf_2c750[32]; // 2a52:2230
db dummyf_2c770[32]; // 2a52:2250
db dummyf_2c790[32]; // 2a52:2270
db dummyf_2c7b0[32]; // 2a52:2290
db dummyf_2c7d0[32]; // 2a52:22b0
db dummyf_2c7f0[32]; // 2a52:22d0
db dummyf_2c810[32]; // 2a52:22f0
db dummyf_2c830[32]; // 2a52:2310
db dummyf_2c850[32]; // 2a52:2330
db dummyf_2c870[32]; // 2a52:2350
db dummyf_2c890[32]; // 2a52:2370
db dummyf_2c8b0[32]; // 2a52:2390
db dummyf_2c8d0[32]; // 2a52:23b0
db dummyf_2c8f0[32]; // 2a52:23d0
db dummyf_2c910[32]; // 2a52:23f0
db dummyf_2c930[32]; // 2a52:2410
db dummyf_2c950[32]; // 2a52:2430
db dummyf_2c970[32]; // 2a52:2450
db dummyf_2c990[32]; // 2a52:2470
db dummyf_2c9b0[32]; // 2a52:2490
db dummyf_2c9d0[32]; // 2a52:24b0
db dummyf_2c9f0[32]; // 2a52:24d0
db dummyf_2ca10[32]; // 2a52:24f0
db dummyf_2ca30[32]; // 2a52:2510
db dummyf_2ca50[32]; // 2a52:2530
db dummyf_2ca70[32]; // 2a52:2550
db dummyf_2ca90[32]; // 2a52:2570
db dummyf_2cab0[32]; // 2a52:2590
db dummyf_2cad0[32]; // 2a52:25b0
db dummyf_2caf0[32]; // 2a52:25d0
db dummyf_2cb10[32]; // 2a52:25f0
db dummyf_2cb30[32]; // 2a52:2610
db dummyf_2cb50[32]; // 2a52:2630
db dummyf_2cb70[32]; // 2a52:2650
db dummyf_2cb90[32]; // 2a52:2670
db dummyf_2cbb0[32]; // 2a52:2690
db dummyf_2cbd0[32]; // 2a52:26b0
db dummyf_2cbf0[32]; // 2a52:26d0
db dummyf_2cc10[32]; // 2a52:26f0
db dummyf_2cc30[32]; // 2a52:2710
db dummyf_2cc50[32]; // 2a52:2730
db dummyf_2cc70[32]; // 2a52:2750
db dummyf_2cc90[32]; // 2a52:2770
db dummyf_2ccb0[32]; // 2a52:2790
db dummyf_2ccd0[32]; // 2a52:27b0
db dummyf_2ccf0[32]; // 2a52:27d0
db dummyf_2cd10[32]; // 2a52:27f0
db dummyf_2cd30[32]; // 2a52:2810
db dummyf_2cd50[32]; // 2a52:2830
db dummyf_2cd70[32]; // 2a52:2850
db dummyf_2cd90[32]; // 2a52:2870
db dummyf_2cdb0[32]; // 2a52:2890
db dummyf_2cdd0[32]; // 2a52:28b0
db dummyf_2cdf0[32]; // 2a52:28d0
db dummyf_2ce10[32]; // 2a52:28f0
db dummyf_2ce30[32]; // 2a52:2910
db dummyf_2ce50[32]; // 2a52:2930
db dummyf_2ce70[32]; // 2a52:2950
db dummyf_2ce90[32]; // 2a52:2970
db dummyf_2ceb0[32]; // 2a52:2990
db dummyf_2ced0[32]; // 2a52:29b0
db dummyf_2cef0[32]; // 2a52:29d0
db dummyf_2cf10[32]; // 2a52:29f0
db dummyf_2cf30[32]; // 2a52:2a10
db dummyf_2cf50[32]; // 2a52:2a30
db dummyf_2cf70[32]; // 2a52:2a50
db dummyf_2cf90[32]; // 2a52:2a70
db dummyf_2cfb0[32]; // 2a52:2a90
db dummyf_2cfd0[32]; // 2a52:2ab0
db dummyf_2cff0[32]; // 2a52:2ad0
db dummyf_2d010[32]; // 2a52:2af0
db dummyf_2d030[32]; // 2a52:2b10
db dummyf_2d050[32]; // 2a52:2b30
db dummyf_2d070[32]; // 2a52:2b50
db dummyf_2d090[32]; // 2a52:2b70
db dummyf_2d0b0[32]; // 2a52:2b90
db dummyf_2d0d0[32]; // 2a52:2bb0
db dummyf_2d0f0[32]; // 2a52:2bd0
db dummyf_2d110[32]; // 2a52:2bf0
db dummyf_2d130[32]; // 2a52:2c10
db dummyf_2d150[32]; // 2a52:2c30
db dummyf_2d170[32]; // 2a52:2c50
db dummyf_2d190[32]; // 2a52:2c70
db dummyf_2d1b0[32]; // 2a52:2c90
db dummyf_2d1d0[32]; // 2a52:2cb0
db dummyf_2d1f0[32]; // 2a52:2cd0
db dummyf_2d210[32]; // 2a52:2cf0
db dummyf_2d230[32]; // 2a52:2d10
db dummyf_2d250[32]; // 2a52:2d30
db dummyf_2d270[32]; // 2a52:2d50
db dummyf_2d290[32]; // 2a52:2d70
db dummyf_2d2b0[32]; // 2a52:2d90
db dummyf_2d2d0[32]; // 2a52:2db0
db dummyf_2d2f0[32]; // 2a52:2dd0
db dummyf_2d310[32]; // 2a52:2df0
db dummyf_2d330[32]; // 2a52:2e10
db dummyf_2d350[32]; // 2a52:2e30
db dummyf_2d370[32]; // 2a52:2e50
db dummyf_2d390[32]; // 2a52:2e70
db dummyf_2d3b0[32]; // 2a52:2e90
db dummyf_2d3d0[32]; // 2a52:2eb0
db dummyf_2d3f0[32]; // 2a52:2ed0
db dummyf_2d410[32]; // 2a52:2ef0
db dummyf_2d430[32]; // 2a52:2f10
db dummyf_2d450[32]; // 2a52:2f30
db dummyf_2d470[32]; // 2a52:2f50
db dummyf_2d490[32]; // 2a52:2f70
db dummyf_2d4b0[32]; // 2a52:2f90
db dummyf_2d4d0[32]; // 2a52:2fb0
db dummyf_2d4f0[32]; // 2a52:2fd0
db dummyf_2d510[32]; // 2a52:2ff0
db dummyf_2d530[32]; // 2a52:3010
db dummyf_2d550[32]; // 2a52:3030
db dummyf_2d570[32]; // 2a52:3050
db dummyf_2d590[32]; // 2a52:3070
db dummyf_2d5b0[32]; // 2a52:3090
db dummyf_2d5d0[32]; // 2a52:30b0
db dummyf_2d5f0[32]; // 2a52:30d0
db dummyf_2d610[32]; // 2a52:30f0
db dummyf_2d630[32]; // 2a52:3110
db dummyf_2d650[32]; // 2a52:3130
db dummyf_2d670[32]; // 2a52:3150
db dummyf_2d690[32]; // 2a52:3170
db dummyf_2d6b0[32]; // 2a52:3190
db dummyf_2d6d0[32]; // 2a52:31b0
db dummyf_2d6f0[32]; // 2a52:31d0
db dummyf_2d710[32]; // 2a52:31f0
db dummyf_2d730[32]; // 2a52:3210
db dummyf_2d750[32]; // 2a52:3230
db dummyf_2d770[32]; // 2a52:3250
db dummyf_2d790[32]; // 2a52:3270
db dummyf_2d7b0[32]; // 2a52:3290
db dummyf_2d7d0[32]; // 2a52:32b0
db dummyf_2d7f0[32]; // 2a52:32d0
db dummyf_2d810[32]; // 2a52:32f0
db dummyf_2d830[32]; // 2a52:3310
db dummyf_2d850[32]; // 2a52:3330
db dummyf_2d870[32]; // 2a52:3350
db dummyf_2d890[32]; // 2a52:3370
db dummyf_2d8b0[32]; // 2a52:3390
db dummyf_2d8d0[32]; // 2a52:33b0
db dummyf_2d8f0[32]; // 2a52:33d0
db dummyf_2d910[32]; // 2a52:33f0
db dummyf_2d930[32]; // 2a52:3410
db dummyf_2d950[32]; // 2a52:3430
db dummyf_2d970[32]; // 2a52:3450
db dummyf_2d990[32]; // 2a52:3470
db dummyf_2d9b0[32]; // 2a52:3490
db dummyf_2d9d0[32]; // 2a52:34b0
db dummyf_2d9f0[32]; // 2a52:34d0
db dummyf_2da10[32]; // 2a52:34f0
db dummyf_2da30[32]; // 2a52:3510
db dummyf_2da50[32]; // 2a52:3530
db dummyf_2da70[32]; // 2a52:3550
db dummyf_2da90[32]; // 2a52:3570
db dummyf_2dab0[32]; // 2a52:3590
db dummyf_2dad0[32]; // 2a52:35b0
db dummyf_2daf0[32]; // 2a52:35d0
db dummyf_2db10[32]; // 2a52:35f0
db dummyf_2db30[32]; // 2a52:3610
db dummyf_2db50[32]; // 2a52:3630
db dummyf_2db70[32]; // 2a52:3650
db dummyf_2db90[32]; // 2a52:3670
db dummyf_2dbb0[32]; // 2a52:3690
db dummyf_2dbd0[32]; // 2a52:36b0
db dummyf_2dbf0[32]; // 2a52:36d0
db dummyf_2dc10[32]; // 2a52:36f0
db dummyf_2dc30[32]; // 2a52:3710
db dummyf_2dc50[32]; // 2a52:3730
db dummyf_2dc70[32]; // 2a52:3750
db dummyf_2dc90[32]; // 2a52:3770
db dummyf_2dcb0[32]; // 2a52:3790
db dummyf_2dcd0[32]; // 2a52:37b0
db dummyf_2dcf0[32]; // 2a52:37d0
db dummyf_2dd10[32]; // 2a52:37f0
db dummyf_2dd30[32]; // 2a52:3810
db dummyf_2dd50[32]; // 2a52:3830
db dummyf_2dd70[32]; // 2a52:3850
db dummyf_2dd90[32]; // 2a52:3870
db dummyf_2ddb0[32]; // 2a52:3890
db dummyf_2ddd0[32]; // 2a52:38b0
db dummyf_2ddf0[32]; // 2a52:38d0
db dummyf_2de10[32]; // 2a52:38f0
db dummyf_2de30[32]; // 2a52:3910
db dummyf_2de50[32]; // 2a52:3930
db dummyf_2de70[32]; // 2a52:3950
db dummyf_2de90[32]; // 2a52:3970
db dummyf_2deb0[32]; // 2a52:3990
db dummyf_2ded0[32]; // 2a52:39b0
db dummyf_2def0[32]; // 2a52:39d0
db dummyf_2df10[32]; // 2a52:39f0
db dummyf_2df30[32]; // 2a52:3a10
db dummyf_2df50[32]; // 2a52:3a30
db dummyf_2df70[32]; // 2a52:3a50
db dummyf_2df90[32]; // 2a52:3a70
db dummyf_2dfb0[32]; // 2a52:3a90
db dummyf_2dfd0[32]; // 2a52:3ab0
db dummyf_2dff0[32]; // 2a52:3ad0
db dummyf_2e010[32]; // 2a52:3af0
db dummyf_2e030[32]; // 2a52:3b10
db dummyf_2e050[32]; // 2a52:3b30
db dummyf_2e070[32]; // 2a52:3b50
db dummyf_2e090[32]; // 2a52:3b70
db dummyf_2e0b0[32]; // 2a52:3b90
db dummyf_2e0d0[32]; // 2a52:3bb0
db dummyf_2e0f0[32]; // 2a52:3bd0
db dummyf_2e110[32]; // 2a52:3bf0
db dummyf_2e130[32]; // 2a52:3c10
db dummyf_2e150[32]; // 2a52:3c30
db dummyf_2e170[32]; // 2a52:3c50
db dummyf_2e190[32]; // 2a52:3c70
db dummyf_2e1b0[32]; // 2a52:3c90
db dummyf_2e1d0[32]; // 2a52:3cb0
db dummyf_2e1f0[32]; // 2a52:3cd0
db dummyf_2e210[32]; // 2a52:3cf0
db dummyf_2e230[32]; // 2a52:3d10
db dummyf_2e250[32]; // 2a52:3d30
db dummyf_2e270[32]; // 2a52:3d50
db dummyf_2e290[32]; // 2a52:3d70
db dummyf_2e2b0[32]; // 2a52:3d90
db dummyf_2e2d0[32]; // 2a52:3db0
db dummyf_2e2f0[32]; // 2a52:3dd0
db dummyf_2e310[32]; // 2a52:3df0
db dummyf_2e330[32]; // 2a52:3e10
db dummyf_2e350[32]; // 2a52:3e30
db dummyf_2e370[32]; // 2a52:3e50
db dummyf_2e390[32]; // 2a52:3e70
db dummyf_2e3b0[32]; // 2a52:3e90
db dummyf_2e3d0[32]; // 2a52:3eb0
db dummyf_2e3f0[32]; // 2a52:3ed0
db dummyf_2e410[32]; // 2a52:3ef0
db dummyf_2e430[32]; // 2a52:3f10
db dummyf_2e450[32]; // 2a52:3f30
db dummyf_2e470[32]; // 2a52:3f50
db dummyf_2e490[32]; // 2a52:3f70
db dummyf_2e4b0[32]; // 2a52:3f90
db dummyf_2e4d0[32]; // 2a52:3fb0
db dummyf_2e4f0[32]; // 2a52:3fd0
db dummyf_2e510[32]; // 2a52:3ff0
db dummyf_2e530[32]; // 2a52:4010
db dummyf_2e550[32]; // 2a52:4030
db dummyf_2e570[32]; // 2a52:4050
db dummyf_2e590[32]; // 2a52:4070
db dummyf_2e5b0[32]; // 2a52:4090
db dummyf_2e5d0[32]; // 2a52:40b0
db dummyf_2e5f0[32]; // 2a52:40d0
db dummyf_2e610[32]; // 2a52:40f0
db dummyf_2e630[32]; // 2a52:4110
db dummyf_2e650[32]; // 2a52:4130
db dummyf_2e670[32]; // 2a52:4150
db dummyf_2e690[32]; // 2a52:4170
db dummyf_2e6b0[32]; // 2a52:4190
db dummyf_2e6d0[32]; // 2a52:41b0
db dummyf_2e6f0[32]; // 2a52:41d0
db dummyf_2e710[32]; // 2a52:41f0
db dummyf_2e730[32]; // 2a52:4210
db dummyf_2e750[32]; // 2a52:4230
db dummyf_2e770[32]; // 2a52:4250
db dummyf_2e790[32]; // 2a52:4270
db unk_3cd90; // 2e7b:0000
db dummyf_2e7b1[32]; // 2e7b:0001
db dummyf_2e7d1[32]; // 2e7b:0021
db dummyf_2e7f1[32]; // 2e7b:0041
db dummyf_2e811[32]; // 2e7b:0061
db dummyf_2e831[32]; // 2e7b:0081
db dummyf_2e851[32]; // 2e7b:00a1
db dummyf_2e871[32]; // 2e7b:00c1
db dummyf_2e891[32]; // 2e7b:00e1
db dummyf_2e8b1[32]; // 2e7b:0101
db dummyf_2e8d1[32]; // 2e7b:0121
db dummyf_2e8f1[32]; // 2e7b:0141
db dummyf_2e911[32]; // 2e7b:0161
db dummyf_2e931[32]; // 2e7b:0181
db dummyf_2e951[32]; // 2e7b:01a1
db dummyf_2e971[32]; // 2e7b:01c1
db dummyf_2e991[32]; // 2e7b:01e1
db dummyf_2e9b1[32]; // 2e7b:0201
db dummyf_2e9d1[32]; // 2e7b:0221
db dummyf_2e9f1[32]; // 2e7b:0241
db dummyf_2ea11[32]; // 2e7b:0261
db dummyf_2ea31[32]; // 2e7b:0281
db dummyf_2ea51[32]; // 2e7b:02a1
db dummyf_2ea71[32]; // 2e7b:02c1
db dummyf_2ea91[32]; // 2e7b:02e1
db dummyf_2eab1[32]; // 2e7b:0301
db dummyf_2ead1[32]; // 2e7b:0321
db dummyf_2eaf1[32]; // 2e7b:0341
db dummyf_2eb11[32]; // 2e7b:0361
db dummyf_2eb31[32]; // 2e7b:0381
db dummyf_2eb51[32]; // 2e7b:03a1
db dummyf_2eb71[32]; // 2e7b:03c1
db dummyf_2eb91[32]; // 2e7b:03e1
db dummyf_2ebb1[32]; // 2e7b:0401
db dummyf_2ebd1[32]; // 2e7b:0421
db dummyf_2ebf1[32]; // 2e7b:0441
db dummyf_2ec11[32]; // 2e7b:0461
db dummyf_2ec31[32]; // 2e7b:0481
db dummyf_2ec51[32]; // 2e7b:04a1
db dummyf_2ec71[32]; // 2e7b:04c1
db dummyf_2ec91[32]; // 2e7b:04e1
db dummyf_2ecb1[32]; // 2e7b:0501
db dummyf_2ecd1[32]; // 2e7b:0521
db dummyf_2ecf1[32]; // 2e7b:0541
db dummyf_2ed11[32]; // 2e7b:0561
db dummyf_2ed31[32]; // 2e7b:0581
db dummyf_2ed51[32]; // 2e7b:05a1
db dummyf_2ed71[32]; // 2e7b:05c1
db dummyf_2ed91[32]; // 2e7b:05e1
db dummyf_2edb1[32]; // 2e7b:0601
db dummyf_2edd1[32]; // 2e7b:0621
db dummyf_2edf1[32]; // 2e7b:0641
db dummyf_2ee11[32]; // 2e7b:0661
db dummyf_2ee31[32]; // 2e7b:0681
db dummyf_2ee51[32]; // 2e7b:06a1
db dummyf_2ee71[32]; // 2e7b:06c1
db dummyf_2ee91[32]; // 2e7b:06e1
db dummyf_2eeb1[32]; // 2e7b:0701
db dummyf_2eed1[32]; // 2e7b:0721
db dummyf_2eef1[32]; // 2e7b:0741
db dummyf_2ef11[32]; // 2e7b:0761
db dummyf_2ef31[32]; // 2e7b:0781
db dummyf_2ef51[32]; // 2e7b:07a1
db dummyf_2ef71[32]; // 2e7b:07c1
db dummyf_2ef91[32]; // 2e7b:07e1
db dummyf_2efb1[32]; // 2e7b:0801
db dummyf_2efd1[32]; // 2e7b:0821
db dummyf_2eff1[32]; // 2e7b:0841
db dummyf_2f011[32]; // 2e7b:0861
db dummyf_2f031[32]; // 2e7b:0881
db dummyf_2f051[32]; // 2e7b:08a1
db dummyf_2f071[32]; // 2e7b:08c1
db dummyf_2f091[32]; // 2e7b:08e1
db dummyf_2f0b1[32]; // 2e7b:0901
db dummyf_2f0d1[32]; // 2e7b:0921
db dummyf_2f0f1[32]; // 2e7b:0941
db dummyf_2f111[32]; // 2e7b:0961
db dummyf_2f131[32]; // 2e7b:0981
db dummyf_2f151[32]; // 2e7b:09a1
db dummyf_2f171[32]; // 2e7b:09c1
db dummyf_2f191[32]; // 2e7b:09e1
db dummyf_2f1b1[32]; // 2e7b:0a01
db dummyf_2f1d1[32]; // 2e7b:0a21
db dummyf_2f1f1[32]; // 2e7b:0a41
db dummyf_2f211[32]; // 2e7b:0a61
db dummyf_2f231[32]; // 2e7b:0a81
db dummyf_2f251[32]; // 2e7b:0aa1
db dummyf_2f271[32]; // 2e7b:0ac1
db dummyf_2f291[32]; // 2e7b:0ae1
db dummyf_2f2b1[32]; // 2e7b:0b01
db dummyf_2f2d1[32]; // 2e7b:0b21
db dummyf_2f2f1[32]; // 2e7b:0b41
db dummyf_2f311[32]; // 2e7b:0b61
db dummyf_2f331[32]; // 2e7b:0b81
db dummyf_2f351[32]; // 2e7b:0ba1
db dummyf_2f371[32]; // 2e7b:0bc1
db dummyf_2f391[32]; // 2e7b:0be1
db dummyf_2f3b1[32]; // 2e7b:0c01
db dummyf_2f3d1[32]; // 2e7b:0c21
db dummyf_2f3f1[32]; // 2e7b:0c41
db dummyf_2f411[32]; // 2e7b:0c61
db dummyf_2f431[32]; // 2e7b:0c81
db dummyf_2f451[32]; // 2e7b:0ca1
db dummyf_2f471[32]; // 2e7b:0cc1
db dummyf_2f491[32]; // 2e7b:0ce1
db dummyf_2f4b1[32]; // 2e7b:0d01
db dummyf_2f4d1[32]; // 2e7b:0d21
db dummyf_2f4f1[32]; // 2e7b:0d41
db dummyf_2f511[32]; // 2e7b:0d61
db dummyf_2f531[32]; // 2e7b:0d81
db dummyf_2f551[32]; // 2e7b:0da1
db dummyf_2f571[32]; // 2e7b:0dc1
db dummyf_2f591[32]; // 2e7b:0de1
db dummyf_2f5b1[32]; // 2e7b:0e01
db dummyf_2f5d1[32]; // 2e7b:0e21
db dummyf_2f5f1[32]; // 2e7b:0e41
db dummyf_2f611[32]; // 2e7b:0e61
db dummyf_2f631[32]; // 2e7b:0e81
db dummyf_2f651[32]; // 2e7b:0ea1
db dummyf_2f671[32]; // 2e7b:0ec1
db dummyf_2f691[32]; // 2e7b:0ee1
db dummyf_2f6b1[32]; // 2e7b:0f01
db dummyf_2f6d1[32]; // 2e7b:0f21
db dummyf_2f6f1[32]; // 2e7b:0f41
db dummyf_2f711[32]; // 2e7b:0f61
db dummyf_2f731[32]; // 2e7b:0f81
db dummyf_2f751[32]; // 2e7b:0fa1
db dummyf_2f771[32]; // 2e7b:0fc1
db dummyf_2f791[32]; // 2e7b:0fe1
db dummyf_2f7b1[32]; // 2e7b:1001
db dummyf_2f7d1[32]; // 2e7b:1021
db dummyf_2f7f1[32]; // 2e7b:1041
db dummyf_2f811[32]; // 2e7b:1061
db dummyf_2f831[32]; // 2e7b:1081
db dummyf_2f851[32]; // 2e7b:10a1
db dummyf_2f871[32]; // 2e7b:10c1
db dummyf_2f891[32]; // 2e7b:10e1
db dummyf_2f8b1[32]; // 2e7b:1101
db dummyf_2f8d1[32]; // 2e7b:1121
db dummyf_2f8f1[32]; // 2e7b:1141
db dummyf_2f911[32]; // 2e7b:1161
db dummyf_2f931[32]; // 2e7b:1181
db dummyf_2f951[32]; // 2e7b:11a1
db dummyf_2f971[32]; // 2e7b:11c1
db dummyf_2f991[32]; // 2e7b:11e1
db dummyf_2f9b1[32]; // 2e7b:1201
db dummyf_2f9d1[32]; // 2e7b:1221
db dummyf_2f9f1[32]; // 2e7b:1241
db dummyf_2fa11[32]; // 2e7b:1261
db dummyf_2fa31[32]; // 2e7b:1281
db dummyf_2fa51[32]; // 2e7b:12a1
db dummyf_2fa71[32]; // 2e7b:12c1
db dummyf_2fa91[32]; // 2e7b:12e1
db dummyf_2fab1[32]; // 2e7b:1301
db dummyf_2fad1[32]; // 2e7b:1321
db dummyf_2faf1[32]; // 2e7b:1341
db dummyf_2fb11[32]; // 2e7b:1361
db dummyf_2fb31[32]; // 2e7b:1381
db dummyf_2fb51[32]; // 2e7b:13a1
db dummyf_2fb71[32]; // 2e7b:13c1
db dummyf_2fb91[32]; // 2e7b:13e1
db dummyf_2fbb1[32]; // 2e7b:1401
db dummyf_2fbd1[32]; // 2e7b:1421
db dummyf_2fbf1[32]; // 2e7b:1441
db dummyf_2fc11[32]; // 2e7b:1461
db dummyf_2fc31[32]; // 2e7b:1481
db dummyf_2fc51[32]; // 2e7b:14a1
db dummyf_2fc71[32]; // 2e7b:14c1
db dummyf_2fc91[32]; // 2e7b:14e1
db dummyf_2fcb1[32]; // 2e7b:1501
db dummyf_2fcd1[32]; // 2e7b:1521
db dummyf_2fcf1[32]; // 2e7b:1541
db dummyf_2fd11[32]; // 2e7b:1561
db dummyf_2fd31[32]; // 2e7b:1581
db dummyf_2fd51[32]; // 2e7b:15a1
db dummyf_2fd71[32]; // 2e7b:15c1
db dummyf_2fd91[32]; // 2e7b:15e1
db dummyf_2fdb1[32]; // 2e7b:1601
db dummyf_2fdd1[32]; // 2e7b:1621
db dummyf_2fdf1[32]; // 2e7b:1641
db dummyf_2fe11[32]; // 2e7b:1661
db dummyf_2fe31[32]; // 2e7b:1681
db dummyf_2fe51[32]; // 2e7b:16a1
db dummyf_2fe71[32]; // 2e7b:16c1
db dummyf_2fe91[32]; // 2e7b:16e1
db dummyf_2feb1[32]; // 2e7b:1701
db dummyf_2fed1[32]; // 2e7b:1721
db dummyf_2fef1[32]; // 2e7b:1741
db dummyf_2ff11[32]; // 2e7b:1761
db dummyf_2ff31[32]; // 2e7b:1781
db dummyf_2ff51[32]; // 2e7b:17a1
db dummyf_2ff71[32]; // 2e7b:17c1
db dummyf_2ff91[32]; // 2e7b:17e1
db dummyf_2ffb1[32]; // 2e7b:1801
db dummyf_2ffd1[32]; // 2e7b:1821
db dummyf_2fff1[32]; // 2e7b:1841
db dummyf_30011[32]; // 2e7b:1861
db dummyf_30031[32]; // 2e7b:1881
db dummyf_30051[32]; // 2e7b:18a1
db dummyf_30071[32]; // 2e7b:18c1
db dummyf_30091[32]; // 2e7b:18e1
db dummyf_300b1[32]; // 2e7b:1901
db dummyf_300d1[32]; // 2e7b:1921
db dummyf_300f1[32]; // 2e7b:1941
db dummyf_30111[32]; // 2e7b:1961
db dummyf_30131[32]; // 2e7b:1981
db dummyf_30151[32]; // 2e7b:19a1
db dummyf_30171[32]; // 2e7b:19c1
db dummyf_30191[32]; // 2e7b:19e1
db dummyf_301b1[32]; // 2e7b:1a01
db dummyf_301d1[32]; // 2e7b:1a21
db dummyf_301f1[32]; // 2e7b:1a41
db dummyf_30211[32]; // 2e7b:1a61
db dummyf_30231[32]; // 2e7b:1a81
db dummyf_30251[32]; // 2e7b:1aa1
db dummyf_30271[32]; // 2e7b:1ac1
db dummyf_30291[32]; // 2e7b:1ae1
db dummyf_302b1[32]; // 2e7b:1b01
db dummyf_302d1[32]; // 2e7b:1b21
db dummyf_302f1[32]; // 2e7b:1b41
db dummyf_30311[32]; // 2e7b:1b61
db dummyf_30331[32]; // 2e7b:1b81
db dummyf_30351[32]; // 2e7b:1ba1
db dummyf_30371[32]; // 2e7b:1bc1
db dummyf_30391[32]; // 2e7b:1be1
db dummyf_303b1[32]; // 2e7b:1c01
db dummyf_303d1[32]; // 2e7b:1c21
db dummyf_303f1[32]; // 2e7b:1c41
db dummyf_30411[32]; // 2e7b:1c61
db dummyf_30431[32]; // 2e7b:1c81
db dummyf_30451[32]; // 2e7b:1ca1
db dummyf_30471[32]; // 2e7b:1cc1
db dummyf_30491[32]; // 2e7b:1ce1
db dummyf_304b1[32]; // 2e7b:1d01
db dummyf_304d1[32]; // 2e7b:1d21
db dummyf_304f1[32]; // 2e7b:1d41
db dummyf_30511[32]; // 2e7b:1d61
db dummyf_30531[32]; // 2e7b:1d81
db dummyf_30551[32]; // 2e7b:1da1
db dummyf_30571[32]; // 2e7b:1dc1
db dummyf_30591[32]; // 2e7b:1de1
db dummyf_305b1[32]; // 2e7b:1e01
db dummyf_305d1[32]; // 2e7b:1e21
db dummyf_305f1[32]; // 2e7b:1e41
db dummyf_30611[32]; // 2e7b:1e61
db dummyf_30631[32]; // 2e7b:1e81
db dummyf_30651[32]; // 2e7b:1ea1
db dummyf_30671[32]; // 2e7b:1ec1
db dummyf_30691[32]; // 2e7b:1ee1
db dummyf_306b1[32]; // 2e7b:1f01
db dummyf_306d1[32]; // 2e7b:1f21
db dummyf_306f1[32]; // 2e7b:1f41
db dummyf_30711[32]; // 2e7b:1f61
db dummyf_30731[32]; // 2e7b:1f81
db dummyf_30751[32]; // 2e7b:1fa1
db dummyf_30771[32]; // 2e7b:1fc1
db dummyf_30791[32]; // 2e7b:1fe1
db dummyf_307b1[32]; // 2e7b:2001
db dummyf_307d1[32]; // 2e7b:2021
db dummyf_307f1[32]; // 2e7b:2041
db dummyf_30811[32]; // 2e7b:2061
db dummyf_30831[32]; // 2e7b:2081
db dummyf_30851[32]; // 2e7b:20a1
db dummyf_30871[32]; // 2e7b:20c1
db dummyf_30891[32]; // 2e7b:20e1
db dummyf_308b1[32]; // 2e7b:2101
db dummyf_308d1[32]; // 2e7b:2121
db dummyf_308f1[32]; // 2e7b:2141
db dummyf_30911[32]; // 2e7b:2161
db dummyf_30931[32]; // 2e7b:2181
db dummyf_30951[32]; // 2e7b:21a1
db dummyf_30971[32]; // 2e7b:21c1
db dummyf_30991[32]; // 2e7b:21e1
db dummyf_309b1[32]; // 2e7b:2201
db dummyf_309d1[32]; // 2e7b:2221
db dummyf_309f1[32]; // 2e7b:2241
db dummyf_30a11[32]; // 2e7b:2261
db dummyf_30a31[32]; // 2e7b:2281
db dummyf_30a51[32]; // 2e7b:22a1
db dummyf_30a71[32]; // 2e7b:22c1
db dummyf_30a91[32]; // 2e7b:22e1
db dummyf_30ab1[32]; // 2e7b:2301
db dummyf_30ad1[32]; // 2e7b:2321
db dummyf_30af1[32]; // 2e7b:2341
db dummyf_30b11[32]; // 2e7b:2361
db dummyf_30b31[32]; // 2e7b:2381
db dummyf_30b51[32]; // 2e7b:23a1
db dummyf_30b71[32]; // 2e7b:23c1
db dummyf_30b91[32]; // 2e7b:23e1
db dummyf_30bb1[32]; // 2e7b:2401
db dummyf_30bd1[32]; // 2e7b:2421
db dummyf_30bf1[32]; // 2e7b:2441
db dummyf_30c11[32]; // 2e7b:2461
db dummyf_30c31[32]; // 2e7b:2481
db dummyf_30c51[32]; // 2e7b:24a1
db dummyf_30c71[32]; // 2e7b:24c1
db dummyf_30c91[32]; // 2e7b:24e1
db dummyf_30cb1[32]; // 2e7b:2501
db dummyf_30cd1[32]; // 2e7b:2521
db dummyf_30cf1[32]; // 2e7b:2541
db dummyf_30d11[32]; // 2e7b:2561
db dummyf_30d31[32]; // 2e7b:2581
db dummyf_30d51[32]; // 2e7b:25a1
db dummyf_30d71[32]; // 2e7b:25c1
db dummyf_30d91[32]; // 2e7b:25e1
db dummyf_30db1[32]; // 2e7b:2601
db dummyf_30dd1[32]; // 2e7b:2621
db dummyf_30df1[32]; // 2e7b:2641
db dummyf_30e11[32]; // 2e7b:2661
db dummyf_30e31[32]; // 2e7b:2681
db dummyf_30e51[32]; // 2e7b:26a1
db dummyf_30e71[32]; // 2e7b:26c1
db dummyf_30e91[32]; // 2e7b:26e1
db dummyf_30eb1[32]; // 2e7b:2701
db dummyf_30ed1[32]; // 2e7b:2721
db dummyf_30ef1[32]; // 2e7b:2741
db dummyf_30f11[32]; // 2e7b:2761
db dummyf_30f31[32]; // 2e7b:2781
db dummyf_30f51[32]; // 2e7b:27a1
db dummyf_30f71[32]; // 2e7b:27c1
db dummyf_30f91[32]; // 2e7b:27e1
db dummyf_30fb1[32]; // 2e7b:2801
db dummyf_30fd1[32]; // 2e7b:2821
db dummyf_30ff1[32]; // 2e7b:2841
db dummyf_31011[32]; // 2e7b:2861
db dummyf_31031[32]; // 2e7b:2881
db dummyf_31051[32]; // 2e7b:28a1
db dummyf_31071[32]; // 2e7b:28c1
db dummyf_31091[32]; // 2e7b:28e1
db dummyf_310b1[32]; // 2e7b:2901
db dummyf_310d1[32]; // 2e7b:2921
db dummyf_310f1[32]; // 2e7b:2941
db dummyf_31111[32]; // 2e7b:2961
db dummyf_31131[32]; // 2e7b:2981
db dummyf_31151[32]; // 2e7b:29a1
db dummyf_31171[32]; // 2e7b:29c1
db dummyf_31191[32]; // 2e7b:29e1
db dummyf_311b1[32]; // 2e7b:2a01
db dummyf_311d1[32]; // 2e7b:2a21
db dummyf_311f1[32]; // 2e7b:2a41
db dummyf_31211[32]; // 2e7b:2a61
db dummyf_31231[32]; // 2e7b:2a81
db dummyf_31251[32]; // 2e7b:2aa1
db dummyf_31271[32]; // 2e7b:2ac1
db dummyf_31291[32]; // 2e7b:2ae1
db dummyf_312b1[32]; // 2e7b:2b01
db dummyf_312d1[32]; // 2e7b:2b21
db dummyf_312f1[32]; // 2e7b:2b41
db dummyf_31311[32]; // 2e7b:2b61
db dummyf_31331[32]; // 2e7b:2b81
db dummyf_31351[32]; // 2e7b:2ba1
db dummyf_31371[32]; // 2e7b:2bc1
db dummyf_31391[32]; // 2e7b:2be1
db dummyf_313b1[32]; // 2e7b:2c01
db dummyf_313d1[32]; // 2e7b:2c21
db dummyf_313f1[32]; // 2e7b:2c41
db dummyf_31411[32]; // 2e7b:2c61
db dummyf_31431[32]; // 2e7b:2c81
db dummyf_31451[32]; // 2e7b:2ca1
db dummyf_31471[32]; // 2e7b:2cc1
db dummyf_31491[32]; // 2e7b:2ce1
db dummyf_314b1[32]; // 2e7b:2d01
db dummyf_314d1[32]; // 2e7b:2d21
db dummyf_314f1[32]; // 2e7b:2d41
db dummyf_31511[32]; // 2e7b:2d61
db dummyf_31531[32]; // 2e7b:2d81
db dummyf_31551[32]; // 2e7b:2da1
db dummyf_31571[32]; // 2e7b:2dc1
db dummyf_31591[32]; // 2e7b:2de1
db dummyf_315b1[32]; // 2e7b:2e01
db dummyf_315d1[32]; // 2e7b:2e21
db dummyf_315f1[32]; // 2e7b:2e41
db dummyf_31611[32]; // 2e7b:2e61
db dummyf_31631[32]; // 2e7b:2e81
db dummyf_31651[32]; // 2e7b:2ea1
db dummyf_31671[32]; // 2e7b:2ec1
db dummyf_31691[32]; // 2e7b:2ee1
db dummyf_316b1[32]; // 2e7b:2f01
db dummyf_316d1[32]; // 2e7b:2f21
db dummyf_316f1[32]; // 2e7b:2f41
db dummyf_31711[32]; // 2e7b:2f61
db dummyf_31731[32]; // 2e7b:2f81
db dummyf_31751[32]; // 2e7b:2fa1
db dummyf_31771[32]; // 2e7b:2fc1
db dummyf_31791[32]; // 2e7b:2fe1
db dummyf_317b1[32]; // 2e7b:3001
db dummyf_317d1[32]; // 2e7b:3021
db dummyf_317f1[32]; // 2e7b:3041
db dummyf_31811[32]; // 2e7b:3061
db dummyf_31831[32]; // 2e7b:3081
db dummyf_31851[32]; // 2e7b:30a1
db dummyf_31871[32]; // 2e7b:30c1
db dummyf_31891[32]; // 2e7b:30e1
db dummyf_318b1[32]; // 2e7b:3101
db dummyf_318d1[32]; // 2e7b:3121
db dummyf_318f1[32]; // 2e7b:3141
db dummyf_31911[32]; // 2e7b:3161
db dummyf_31931[32]; // 2e7b:3181
db dummyf_31951[32]; // 2e7b:31a1
db dummyf_31971[32]; // 2e7b:31c1
db dummyf_31991[32]; // 2e7b:31e1
db dummyf_319b1[32]; // 2e7b:3201
db dummyf_319d1[32]; // 2e7b:3221
db dummyf_319f1[32]; // 2e7b:3241
db dummyf_31a11[32]; // 2e7b:3261
db dummyf_31a31[32]; // 2e7b:3281
db dummyf_31a51[32]; // 2e7b:32a1
db dummyf_31a71[32]; // 2e7b:32c1
db dummyf_31a91[32]; // 2e7b:32e1
db dummyf_31ab1[32]; // 2e7b:3301
db dummyf_31ad1[32]; // 2e7b:3321
db dummyf_31af1[32]; // 2e7b:3341
db dummyf_31b11[32]; // 2e7b:3361
db dummyf_31b31[32]; // 2e7b:3381
db dummyf_31b51[32]; // 2e7b:33a1
db dummyf_31b71[32]; // 2e7b:33c1
db dummyf_31b91[32]; // 2e7b:33e1
db dummyf_31bb1[32]; // 2e7b:3401
db dummyf_31bd1[32]; // 2e7b:3421
db dummyf_31bf1[32]; // 2e7b:3441
db dummyf_31c11[32]; // 2e7b:3461
db dummyf_31c31[32]; // 2e7b:3481
db dummyf_31c51[32]; // 2e7b:34a1
db dummyf_31c71[32]; // 2e7b:34c1
db dummyf_31c91[32]; // 2e7b:34e1
db dummyf_31cb1[32]; // 2e7b:3501
db dummyf_31cd1[32]; // 2e7b:3521
db dummyf_31cf1[32]; // 2e7b:3541
db dummyf_31d11[32]; // 2e7b:3561
db dummyf_31d31[32]; // 2e7b:3581
db dummyf_31d51[32]; // 2e7b:35a1
db dummyf_31d71[32]; // 2e7b:35c1
db dummyf_31d91[32]; // 2e7b:35e1
db dummyf_31db1[32]; // 2e7b:3601
db dummyf_31dd1[32]; // 2e7b:3621
db dummyf_31df1[32]; // 2e7b:3641
db dummyf_31e11[32]; // 2e7b:3661
db dummyf_31e31[32]; // 2e7b:3681
db dummyf_31e51[32]; // 2e7b:36a1
db dummyf_31e71[32]; // 2e7b:36c1
db dummyf_31e91[32]; // 2e7b:36e1
db dummyf_31eb1[32]; // 2e7b:3701
db dummyf_31ed1[32]; // 2e7b:3721
db dummyf_31ef1[32]; // 2e7b:3741
db dummyf_31f11[32]; // 2e7b:3761
db dummyf_31f31[32]; // 2e7b:3781
db dummyf_31f51[32]; // 2e7b:37a1
db dummyf_31f71[32]; // 2e7b:37c1
db dummyf_31f91[32]; // 2e7b:37e1
db dummyf_31fb1[32]; // 2e7b:3801
db dummyf_31fd1[32]; // 2e7b:3821
db dummyf_31ff1[32]; // 2e7b:3841
db dummyf_32011[32]; // 2e7b:3861
db dummyf_32031[32]; // 2e7b:3881
db dummyf_32051[32]; // 2e7b:38a1
db dummyf_32071[32]; // 2e7b:38c1
db dummyf_32091[32]; // 2e7b:38e1
db dummyf_320b1[32]; // 2e7b:3901
db dummyf_320d1[32]; // 2e7b:3921
db dummyf_320f1[32]; // 2e7b:3941
db dummyf_32111[32]; // 2e7b:3961
db dummyf_32131[32]; // 2e7b:3981
db dummyf_32151[32]; // 2e7b:39a1
db dummyf_32171[32]; // 2e7b:39c1
db dummyf_32191[32]; // 2e7b:39e1
db dummyf_321b1[32]; // 2e7b:3a01
db dummyf_321d1[32]; // 2e7b:3a21
db dummyf_321f1[32]; // 2e7b:3a41
db dummyf_32211[32]; // 2e7b:3a61
db dummyf_32231[32]; // 2e7b:3a81
db dummyf_32251[32]; // 2e7b:3aa1
db dummyf_32271[32]; // 2e7b:3ac1
db dummyf_32291[32]; // 2e7b:3ae1
db dummyf_322b1[32]; // 2e7b:3b01
db dummyf_322d1[32]; // 2e7b:3b21
db dummyf_322f1[32]; // 2e7b:3b41
db dummyf_32311[32]; // 2e7b:3b61
db dummyf_32331[32]; // 2e7b:3b81
db dummyf_32351[32]; // 2e7b:3ba1
db dummyf_32371[32]; // 2e7b:3bc1
db dummyf_32391[32]; // 2e7b:3be1
db dummyf_323b1[32]; // 2e7b:3c01
db dummyf_323d1[32]; // 2e7b:3c21
db dummyf_323f1[32]; // 2e7b:3c41
db dummyf_32411[32]; // 2e7b:3c61
db dummyf_32431[32]; // 2e7b:3c81
db dummyf_32451[32]; // 2e7b:3ca1
db dummyf_32471[32]; // 2e7b:3cc1
db dummyf_32491[32]; // 2e7b:3ce1
db dummyf_324b1[32]; // 2e7b:3d01
db dummyf_324d1[32]; // 2e7b:3d21
db dummyf_324f1[32]; // 2e7b:3d41
db dummyf_32511[32]; // 2e7b:3d61
db dummyf_32531[32]; // 2e7b:3d81
db dummyf_32551[32]; // 2e7b:3da1
db dummyf_32571[32]; // 2e7b:3dc1
db dummyf_32591[32]; // 2e7b:3de1
db dummyf_325b1[32]; // 2e7b:3e01
db dummyf_325d1[32]; // 2e7b:3e21
db dummyf_325f1[32]; // 2e7b:3e41
db dummyf_32611[32]; // 2e7b:3e61
db dummyf_32631[32]; // 2e7b:3e81
db dummyf_32651[32]; // 2e7b:3ea1
db dummyf_32671[32]; // 2e7b:3ec1
db dummyf_32691[32]; // 2e7b:3ee1
db dummyf_326b1[32]; // 2e7b:3f01
db dummyf_326d1[32]; // 2e7b:3f21
db dummyf_326f1[32]; // 2e7b:3f41
db dummyf_32711[32]; // 2e7b:3f61
db dummyf_32731[32]; // 2e7b:3f81
db dummyf_32751[32]; // 2e7b:3fa1
db dummyf_32771[32]; // 2e7b:3fc1
db dummyf_32791[32]; // 2e7b:3fe1
db dummyf_327b1[32]; // 2e7b:4001
db dummyf_327d1[32]; // 2e7b:4021
db dummyf_327f1[32]; // 2e7b:4041
db dummyf_32811[32]; // 2e7b:4061
db dummyf_32831[32]; // 2e7b:4081
db dummyf_32851[32]; // 2e7b:40a1
db dummyf_32871[32]; // 2e7b:40c1
db dummyf_32891[32]; // 2e7b:40e1
db dummyf_328b1[32]; // 2e7b:4101
db dummyf_328d1[32]; // 2e7b:4121
db dummyf_328f1[32]; // 2e7b:4141
db dummyf_32911[32]; // 2e7b:4161
db dummyf_32931[32]; // 2e7b:4181
db dummyf_32951[32]; // 2e7b:41a1
db dummyf_32971[32]; // 2e7b:41c1
db dummyf_32991[32]; // 2e7b:41e1
db dummyf_329b1[32]; // 2e7b:4201
db dummyf_329d1[32]; // 2e7b:4221
db dummyf_329f1[32]; // 2e7b:4241
db dummyf_32a11[32]; // 2e7b:4261
db dummyf_32a31[32]; // 2e7b:4281
db dummyf_32a51[32]; // 2e7b:42a1
db dummyf_32a71[32]; // 2e7b:42c1
db dummyf_32a91[32]; // 2e7b:42e1
db dummyf_32ab1[32]; // 2e7b:4301
db dummyf_32ad1[32]; // 2e7b:4321
db dummyf_32af1[32]; // 2e7b:4341
db dummyf_32b11[32]; // 2e7b:4361
db dummyf_32b31[32]; // 2e7b:4381
db dummyf_32b51[32]; // 2e7b:43a1
db dummyf_32b71[32]; // 2e7b:43c1
db dummyf_32b91[32]; // 2e7b:43e1
db dummyf_32bb1[32]; // 2e7b:4401
db dummyf_32bd1[32]; // 2e7b:4421
db dummyf_32bf1[32]; // 2e7b:4441
db dummyf_32c11[32]; // 2e7b:4461
db dummyf_32c31[32]; // 2e7b:4481
db dummyf_32c51[32]; // 2e7b:44a1
db dummyf_32c71[32]; // 2e7b:44c1
db dummyf_32c91[32]; // 2e7b:44e1
db dummyf_32cb1[32]; // 2e7b:4501
db dummyf_32cd1[32]; // 2e7b:4521
db dummyf_32cf1[32]; // 2e7b:4541
db dummyf_32d11[32]; // 2e7b:4561
db dummyf_32d31[32]; // 2e7b:4581
db dummyf_32d51[32]; // 2e7b:45a1
db dummyf_32d71[32]; // 2e7b:45c1
db dummyf_32d91[32]; // 2e7b:45e1
db dummyf_32db1[32]; // 2e7b:4601
db dummyf_32dd1[32]; // 2e7b:4621
db dummyf_32df1[32]; // 2e7b:4641
db dummyf_32e11[32]; // 2e7b:4661
db dummyf_32e31[32]; // 2e7b:4681
db dummyf_32e51[32]; // 2e7b:46a1
db dummyf_32e71[32]; // 2e7b:46c1
db dummyf_32e91[32]; // 2e7b:46e1
db dummyf_32eb1[32]; // 2e7b:4701
db dummyf_32ed1[32]; // 2e7b:4721
db dummyf_32ef1[32]; // 2e7b:4741
db dummyf_32f11[32]; // 2e7b:4761
db dummyf_32f31[32]; // 2e7b:4781
db dummyf_32f51[32]; // 2e7b:47a1
db dummyf_32f71[32]; // 2e7b:47c1
db dummyf_32f91[32]; // 2e7b:47e1
db dummyf_32fb1[32]; // 2e7b:4801
db dummyf_32fd1[32]; // 2e7b:4821
db dummyf_32ff1[32]; // 2e7b:4841
db dummyf_33011[32]; // 2e7b:4861
db dummyf_33031[32]; // 2e7b:4881
db dummyf_33051[32]; // 2e7b:48a1
db dummyf_33071[32]; // 2e7b:48c1
db dummyf_33091[32]; // 2e7b:48e1
db dummyf_330b1[32]; // 2e7b:4901
db dummyf_330d1[32]; // 2e7b:4921
db dummyf_330f1[32]; // 2e7b:4941
db dummyf_33111[32]; // 2e7b:4961
db dummyf_33131[32]; // 2e7b:4981
db dummyf_33151[32]; // 2e7b:49a1
db dummyf_33171[32]; // 2e7b:49c1
db dummyf_33191[32]; // 2e7b:49e1
db dummyf_331b1[32]; // 2e7b:4a01
db dummyf_331d1[32]; // 2e7b:4a21
db dummyf_331f1[32]; // 2e7b:4a41
db dummyf_33211[32]; // 2e7b:4a61
db dummyf_33231[32]; // 2e7b:4a81
db dummyf_33251[32]; // 2e7b:4aa1
db dummyf_33271[32]; // 2e7b:4ac1
db dummyf_33291[32]; // 2e7b:4ae1
db dummyf_332b1[32]; // 2e7b:4b01
db dummyf_332d1[32]; // 2e7b:4b21
db dummyf_332f1[32]; // 2e7b:4b41
db dummyf_33311[32]; // 2e7b:4b61
db dummyf_33331[32]; // 2e7b:4b81
db dummyf_33351[32]; // 2e7b:4ba1
db dummyf_33371[32]; // 2e7b:4bc1
db dummyf_33391[32]; // 2e7b:4be1
db dummyf_333b1[32]; // 2e7b:4c01
db dummyf_333d1[32]; // 2e7b:4c21
db dummyf_333f1[32]; // 2e7b:4c41
db dummyf_33411[32]; // 2e7b:4c61
db dummyf_33431[32]; // 2e7b:4c81
db dummyf_33451[32]; // 2e7b:4ca1
db dummyf_33471[32]; // 2e7b:4cc1
db dummyf_33491[32]; // 2e7b:4ce1
db dummyf_334b1[32]; // 2e7b:4d01
db dummyf_334d1[32]; // 2e7b:4d21
db dummyf_334f1[32]; // 2e7b:4d41
db dummyf_33511[32]; // 2e7b:4d61
db dummyf_33531[32]; // 2e7b:4d81
db dummyf_33551[32]; // 2e7b:4da1
db dummyf_33571[32]; // 2e7b:4dc1
db dummyf_33591[32]; // 2e7b:4de1
db dummyf_335b1[32]; // 2e7b:4e01
db dummyf_335d1[32]; // 2e7b:4e21
db dummyf_335f1[32]; // 2e7b:4e41
db dummyf_33611[32]; // 2e7b:4e61
db dummyf_33631[32]; // 2e7b:4e81
db dummyf_33651[32]; // 2e7b:4ea1
db dummyf_33671[32]; // 2e7b:4ec1
db dummyf_33691[32]; // 2e7b:4ee1
db dummyf_336b1[32]; // 2e7b:4f01
db dummyf_336d1[32]; // 2e7b:4f21
db dummyf_336f1[32]; // 2e7b:4f41
db dummyf_33711[32]; // 2e7b:4f61
db dummyf_33731[32]; // 2e7b:4f81
db dummyf_33751[32]; // 2e7b:4fa1
db dummyf_33771[32]; // 2e7b:4fc1
db dummyf_33791[32]; // 2e7b:4fe1
db dummyf_337b1[32]; // 2e7b:5001
db dummyf_337d1[32]; // 2e7b:5021
db dummyf_337f1[32]; // 2e7b:5041
db dummyf_33811[32]; // 2e7b:5061
db dummyf_33831[32]; // 2e7b:5081
db dummyf_33851[32]; // 2e7b:50a1
db dummyf_33871[32]; // 2e7b:50c1
db dummyf_33891[32]; // 2e7b:50e1
db dummyf_338b1[32]; // 2e7b:5101
db dummyf_338d1[32]; // 2e7b:5121
db dummyf_338f1[32]; // 2e7b:5141
db dummyf_33911[32]; // 2e7b:5161
db dummyf_33931[32]; // 2e7b:5181
db dummyf_33951[32]; // 2e7b:51a1
db dummyf_33971[32]; // 2e7b:51c1
db dummyf_33991[32]; // 2e7b:51e1
db dummyf_339b1[32]; // 2e7b:5201
db dummyf_339d1[32]; // 2e7b:5221
db dummyf_339f1[32]; // 2e7b:5241
db dummyf_33a11[32]; // 2e7b:5261
db dummyf_33a31[32]; // 2e7b:5281
db dummyf_33a51[32]; // 2e7b:52a1
db dummyf_33a71[32]; // 2e7b:52c1
db dummyf_33a91[32]; // 2e7b:52e1
db dummyf_33ab1[32]; // 2e7b:5301
db dummyf_33ad1[32]; // 2e7b:5321
db dummyf_33af1[32]; // 2e7b:5341
db dummyf_33b11[32]; // 2e7b:5361
db dummyf_33b31[32]; // 2e7b:5381
db dummyf_33b51[32]; // 2e7b:53a1
db dummyf_33b71[32]; // 2e7b:53c1
db dummyf_33b91[32]; // 2e7b:53e1
db dummyf_33bb1[32]; // 2e7b:5401
db dummyf_33bd1[32]; // 2e7b:5421
db dummyf_33bf1[32]; // 2e7b:5441
db dummyf_33c11[32]; // 2e7b:5461
db dummyf_33c31[32]; // 2e7b:5481
db dummyf_33c51[32]; // 2e7b:54a1
db dummyf_33c71[32]; // 2e7b:54c1
db dummyf_33c91[32]; // 2e7b:54e1
db dummyf_33cb1[32]; // 2e7b:5501
db dummyf_33cd1[32]; // 2e7b:5521
db dummyf_33cf1[32]; // 2e7b:5541
db dummyf_33d11[32]; // 2e7b:5561
db dummyf_33d31[32]; // 2e7b:5581
db dummyf_33d51[32]; // 2e7b:55a1
db dummyf_33d71[32]; // 2e7b:55c1
db dummyf_33d91[32]; // 2e7b:55e1
db dummyf_33db1[32]; // 2e7b:5601
db dummyf_33dd1[32]; // 2e7b:5621
db dummyf_33df1[32]; // 2e7b:5641
db dummyf_33e11[32]; // 2e7b:5661
db dummyf_33e31[32]; // 2e7b:5681
db dummyf_33e51[32]; // 2e7b:56a1
db dummyf_33e71[32]; // 2e7b:56c1
db dummyf_33e91[32]; // 2e7b:56e1
db dummyf_33eb1[32]; // 2e7b:5701
db dummyf_33ed1[32]; // 2e7b:5721
db dummyf_33ef1[32]; // 2e7b:5741
db dummyf_33f11[32]; // 2e7b:5761
db dummyf_33f31[32]; // 2e7b:5781
db dummyf_33f51[32]; // 2e7b:57a1
db dummyf_33f71[32]; // 2e7b:57c1
db dummyf_33f91[32]; // 2e7b:57e1
db dummyf_33fb1[32]; // 2e7b:5801
db dummyf_33fd1[32]; // 2e7b:5821
db dummyf_33ff1[32]; // 2e7b:5841
db dummyf_34011[32]; // 2e7b:5861
db dummyf_34031[32]; // 2e7b:5881
db dummyf_34051[32]; // 2e7b:58a1
db dummyf_34071[32]; // 2e7b:58c1
db dummyf_34091[32]; // 2e7b:58e1
db dummyf_340b1[32]; // 2e7b:5901
db dummyf_340d1[32]; // 2e7b:5921
db dummyf_340f1[32]; // 2e7b:5941
db dummyf_34111[32]; // 2e7b:5961
db dummyf_34131[32]; // 2e7b:5981
db dummyf_34151[32]; // 2e7b:59a1
db dummyf_34171[32]; // 2e7b:59c1
db dummyf_34191[32]; // 2e7b:59e1
db dummyf_341b1[32]; // 2e7b:5a01
db dummyf_341d1[32]; // 2e7b:5a21
db dummyf_341f1[32]; // 2e7b:5a41
db dummyf_34211[32]; // 2e7b:5a61
db dummyf_34231[32]; // 2e7b:5a81
db dummyf_34251[32]; // 2e7b:5aa1
db dummyf_34271[32]; // 2e7b:5ac1
db dummyf_34291[32]; // 2e7b:5ae1
db dummyf_342b1[32]; // 2e7b:5b01
db dummyf_342d1[32]; // 2e7b:5b21
db dummyf_342f1[32]; // 2e7b:5b41
db dummyf_34311[32]; // 2e7b:5b61
db dummyf_34331[32]; // 2e7b:5b81
db dummyf_34351[32]; // 2e7b:5ba1
db dummyf_34371[32]; // 2e7b:5bc1
db dummyf_34391[32]; // 2e7b:5be1
db dummyf_343b1[32]; // 2e7b:5c01
db dummyf_343d1[32]; // 2e7b:5c21
db dummyf_343f1[32]; // 2e7b:5c41
db dummyf_34411[32]; // 2e7b:5c61
db dummyf_34431[32]; // 2e7b:5c81
db dummyf_34451[32]; // 2e7b:5ca1
db dummyf_34471[32]; // 2e7b:5cc1
db dummyf_34491[32]; // 2e7b:5ce1
db dummyf_344b1[32]; // 2e7b:5d01
db dummyf_344d1[32]; // 2e7b:5d21
db dummyf_344f1[32]; // 2e7b:5d41
db dummyf_34511[32]; // 2e7b:5d61
db dummyf_34531[32]; // 2e7b:5d81
db dummyf_34551[32]; // 2e7b:5da1
db dummyf_34571[32]; // 2e7b:5dc1
db dummyf_34591[32]; // 2e7b:5de1
db dummyf_345b1[32]; // 2e7b:5e01
db dummyf_345d1[32]; // 2e7b:5e21
db dummyf_345f1[32]; // 2e7b:5e41
db dummyf_34611[32]; // 2e7b:5e61
db dummyf_34631[32]; // 2e7b:5e81
db dummyf_34651[32]; // 2e7b:5ea1
db dummyf_34671[32]; // 2e7b:5ec1
db dummyf_34691[32]; // 2e7b:5ee1
db dummyf_346b1[32]; // 2e7b:5f01
db dummyf_346d1[32]; // 2e7b:5f21
db dummyf_346f1[32]; // 2e7b:5f41
db dummyf_34711[32]; // 2e7b:5f61
db dummyf_34731[32]; // 2e7b:5f81
db dummyf_34751[32]; // 2e7b:5fa1
db dummyf_34771[32]; // 2e7b:5fc1
db dummyf_34791[32]; // 2e7b:5fe1
db dummyf_347b1[32]; // 2e7b:6001
db dummyf_347d1[32]; // 2e7b:6021
db dummyf_347f1[32]; // 2e7b:6041
db dummyf_34811[32]; // 2e7b:6061
db dummyf_34831[32]; // 2e7b:6081
db dummyf_34851[32]; // 2e7b:60a1
db dummyf_34871[32]; // 2e7b:60c1
db dummyf_34891[32]; // 2e7b:60e1
db dummyf_348b1[32]; // 2e7b:6101
db dummyf_348d1[32]; // 2e7b:6121
db dummyf_348f1[32]; // 2e7b:6141
db dummyf_34911[32]; // 2e7b:6161
db dummyf_34931[32]; // 2e7b:6181
db dummyf_34951[32]; // 2e7b:61a1
db dummyf_34971[32]; // 2e7b:61c1
db dummyf_34991[32]; // 2e7b:61e1
db dummyf_349b1[32]; // 2e7b:6201
db dummyf_349d1[32]; // 2e7b:6221
db dummyf_349f1[32]; // 2e7b:6241
db dummyf_34a11[32]; // 2e7b:6261
db dummyf_34a31[32]; // 2e7b:6281
db dummyf_34a51[32]; // 2e7b:62a1
db dummyf_34a71[32]; // 2e7b:62c1
db dummyf_34a91[32]; // 2e7b:62e1
db dummyf_34ab1[32]; // 2e7b:6301
db dummyf_34ad1[32]; // 2e7b:6321
db dummyf_34af1[32]; // 2e7b:6341
db dummyf_34b11[32]; // 2e7b:6361
db dummyf_34b31[32]; // 2e7b:6381
db dummyf_34b51[32]; // 2e7b:63a1
db dummyf_34b71[32]; // 2e7b:63c1
db dummyf_34b91[32]; // 2e7b:63e1
db dummyf_34bb1[32]; // 2e7b:6401
db dummyf_34bd1[32]; // 2e7b:6421
db dummyf_34bf1[32]; // 2e7b:6441
db dummyf_34c11[32]; // 2e7b:6461
db dummyf_34c31[32]; // 2e7b:6481
db dummyf_34c51[32]; // 2e7b:64a1
db dummyf_34c71[32]; // 2e7b:64c1
db dummyf_34c91[32]; // 2e7b:64e1
db dummyf_34cb1[32]; // 2e7b:6501
db dummyf_34cd1[32]; // 2e7b:6521
db dummyf_34cf1[32]; // 2e7b:6541
db dummyf_34d11[32]; // 2e7b:6561
db dummyf_34d31[32]; // 2e7b:6581
db dummyf_34d51[32]; // 2e7b:65a1
db dummyf_34d71[32]; // 2e7b:65c1
db dummyf_34d91[32]; // 2e7b:65e1
db dummyf_34db1[32]; // 2e7b:6601
db dummyf_34dd1[32]; // 2e7b:6621
db dummyf_34df1[32]; // 2e7b:6641
db dummyf_34e11[32]; // 2e7b:6661
db dummyf_34e31[32]; // 2e7b:6681
db dummyf_34e51[32]; // 2e7b:66a1
db dummyf_34e71[32]; // 2e7b:66c1
db dummyf_34e91[32]; // 2e7b:66e1
db dummyf_34eb1[32]; // 2e7b:6701
db dummyf_34ed1[32]; // 2e7b:6721
db dummyf_34ef1[32]; // 2e7b:6741
db dummyf_34f11[32]; // 2e7b:6761
db dummyf_34f31[32]; // 2e7b:6781
db dummyf_34f51[32]; // 2e7b:67a1
db dummyf_34f71[32]; // 2e7b:67c1
db dummyf_34f91[32]; // 2e7b:67e1
db dummyf_34fb1[32]; // 2e7b:6801
db dummyf_34fd1[32]; // 2e7b:6821
db dummyf_34ff1[32]; // 2e7b:6841
db dummyf_35011[32]; // 2e7b:6861
db dummyf_35031[32]; // 2e7b:6881
db dummyf_35051[32]; // 2e7b:68a1
db dummyf_35071[32]; // 2e7b:68c1
db dummyf_35091[32]; // 2e7b:68e1
db dummyf_350b1[32]; // 2e7b:6901
db dummyf_350d1[32]; // 2e7b:6921
db dummyf_350f1[32]; // 2e7b:6941
db dummyf_35111[32]; // 2e7b:6961
db dummyf_35131[32]; // 2e7b:6981
db dummyf_35151[32]; // 2e7b:69a1
db dummyf_35171[32]; // 2e7b:69c1
db dummyf_35191[32]; // 2e7b:69e1
db dummyf_351b1[32]; // 2e7b:6a01
db dummyf_351d1[32]; // 2e7b:6a21
db dummyf_351f1[32]; // 2e7b:6a41
db dummyf_35211[32]; // 2e7b:6a61
db dummyf_35231[32]; // 2e7b:6a81
db dummyf_35251[32]; // 2e7b:6aa1
db dummyf_35271[32]; // 2e7b:6ac1
db dummyf_35291[32]; // 2e7b:6ae1
db dummyf_352b1[32]; // 2e7b:6b01
db dummyf_352d1[32]; // 2e7b:6b21
db dummyf_352f1;
db dummyf_352f2;
db dummyf_352f3;
db unk_438d4; // 2e7b:6b44
db dummyf_352f5[32]; // 2e7b:6b45
db dummyf_35315[32]; // 2e7b:6b65
db dummyf_35335[32]; // 2e7b:6b85
db dummyf_35355[32]; // 2e7b:6ba5
db dummyf_35375[32]; // 2e7b:6bc5
db dummyf_35395[32]; // 2e7b:6be5
db dummyf_353b5[32]; // 2e7b:6c05
db dummyf_353d5[32]; // 2e7b:6c25
db dummyf_353f5[32]; // 2e7b:6c45
db dummyf_35415[32]; // 2e7b:6c65
db dummyf_35435[32]; // 2e7b:6c85
db dummyf_35455[32]; // 2e7b:6ca5
db dummyf_35475[32]; // 2e7b:6cc5
db dummyf_35495[32]; // 2e7b:6ce5
db dummyf_354b5[32]; // 2e7b:6d05
db dummyf_354d5[32]; // 2e7b:6d25
db dummyf_354f5[32]; // 2e7b:6d45
db dummyf_35515[32]; // 2e7b:6d65
db dummyf_35535[32]; // 2e7b:6d85
db dummyf_35555[32]; // 2e7b:6da5
db dummyf_35575[32]; // 2e7b:6dc5
db dummyf_35595[32]; // 2e7b:6de5
db dummyf_355b5[32]; // 2e7b:6e05
db dummyf_355d5[32]; // 2e7b:6e25
db dummyf_355f5[32]; // 2e7b:6e45
db dummyf_35615[32]; // 2e7b:6e65
db dummyf_35635[32]; // 2e7b:6e85
db dummyf_35655[32]; // 2e7b:6ea5
db dummyf_35675[32]; // 2e7b:6ec5
db dummyf_35695[32]; // 2e7b:6ee5
db dummyf_356b5[32]; // 2e7b:6f05
db dummyf_356d5[32]; // 2e7b:6f25
db dummyf_356f5[32]; // 2e7b:6f45
db dummyf_35715[32]; // 2e7b:6f65
db dummyf_35735[32]; // 2e7b:6f85
db dummyf_35755[32]; // 2e7b:6fa5
db dummyf_35775[32]; // 2e7b:6fc5
db dummyf_35795[32]; // 2e7b:6fe5
db dummyf_357b5[32]; // 2e7b:7005
db dummyf_357d5[32]; // 2e7b:7025
db dummyf_357f5[32]; // 2e7b:7045
db dummyf_35815[32]; // 2e7b:7065
db dummyf_35835[32]; // 2e7b:7085
db dummyf_35855[32]; // 2e7b:70a5
db dummyf_35875[32]; // 2e7b:70c5
db dummyf_35895[32]; // 2e7b:70e5
db dummyf_358b5[32]; // 2e7b:7105
db dummyf_358d5[32]; // 2e7b:7125
db dummyf_358f5[32]; // 2e7b:7145
db dummyf_35915[32]; // 2e7b:7165
db dummyf_35935[32]; // 2e7b:7185
db dummyf_35955[32]; // 2e7b:71a5
db dummyf_35975[32]; // 2e7b:71c5
db dummyf_35995[32]; // 2e7b:71e5
db dummyf_359b5[32]; // 2e7b:7205
db dummyf_359d5[32]; // 2e7b:7225
db dummyf_359f5[32]; // 2e7b:7245
db dummyf_35a15[32]; // 2e7b:7265
db dummyf_35a35[32]; // 2e7b:7285
db dummyf_35a55[32]; // 2e7b:72a5
db dummyf_35a75[32]; // 2e7b:72c5
db dummyf_35a95[32]; // 2e7b:72e5
db dummyf_35ab5[32]; // 2e7b:7305
db dummyf_35ad5[32]; // 2e7b:7325
db dummyf_35af5[32]; // 2e7b:7345
db dummyf_35b15[32]; // 2e7b:7365
db dummyf_35b35[32]; // 2e7b:7385
db dummyf_35b55[32]; // 2e7b:73a5
db dummyf_35b75[32]; // 2e7b:73c5
db dummyf_35b95[32]; // 2e7b:73e5
db dummyf_35bb5[32]; // 2e7b:7405
db dummyf_35bd5[32]; // 2e7b:7425
db dummyf_35bf5[32]; // 2e7b:7445
db dummyf_35c15[32]; // 2e7b:7465
db dummyf_35c35[32]; // 2e7b:7485
db dummyf_35c55[32]; // 2e7b:74a5
db dummyf_35c75[32]; // 2e7b:74c5
db dummyf_35c95[32]; // 2e7b:74e5
db dummyf_35cb5[32]; // 2e7b:7505
db dummyf_35cd5[32]; // 2e7b:7525
db dummyf_35cf5[32]; // 2e7b:7545
db dummyf_35d15[32]; // 2e7b:7565
db dummyf_35d35[32]; // 2e7b:7585
db dummyf_35d55[32]; // 2e7b:75a5
db dummyf_35d75[32]; // 2e7b:75c5
db dummyf_35d95[32]; // 2e7b:75e5
db dummyf_35db5[32]; // 2e7b:7605
db dummyf_35dd5[32]; // 2e7b:7625
db dummyf_35df5[32]; // 2e7b:7645
db dummyf_35e15[32]; // 2e7b:7665
db dummyf_35e35[32]; // 2e7b:7685
db dummyf_35e55[32]; // 2e7b:76a5
db dummyf_35e75[32]; // 2e7b:76c5
db dummyf_35e95[32]; // 2e7b:76e5
db dummyf_35eb5[32]; // 2e7b:7705
db dummyf_35ed5[32]; // 2e7b:7725
db dummyf_35ef5[32]; // 2e7b:7745
db dummyf_35f15[32]; // 2e7b:7765
db dummyf_35f35[32]; // 2e7b:7785
db dummyf_35f55[32]; // 2e7b:77a5
db dummyf_35f75[32]; // 2e7b:77c5
db dummyf_35f95[32]; // 2e7b:77e5
db dummyf_35fb5[32]; // 2e7b:7805
db dummyf_35fd5[32]; // 2e7b:7825
db dummyf_35ff5[32]; // 2e7b:7845
db dummyf_36015[32]; // 2e7b:7865
db dummyf_36035[32]; // 2e7b:7885
db dummyf_36055[32]; // 2e7b:78a5
db dummyf_36075[32]; // 2e7b:78c5
db dummyf_36095[32]; // 2e7b:78e5
db dummyf_360b5[32]; // 2e7b:7905
db dummyf_360d5[32]; // 2e7b:7925
db dummyf_360f5[32]; // 2e7b:7945
db dummyf_36115[32]; // 2e7b:7965
db dummyf_36135[32]; // 2e7b:7985
db dummyf_36155[32]; // 2e7b:79a5
db dummyf_36175[32]; // 2e7b:79c5
db dummyf_36195[32]; // 2e7b:79e5
db dummyf_361b5[32]; // 2e7b:7a05
db dummyf_361d5[32]; // 2e7b:7a25
db dummyf_361f5[32]; // 2e7b:7a45
db dummyf_36215[32]; // 2e7b:7a65
db dummyf_36235[32]; // 2e7b:7a85
db dummyf_36255[32]; // 2e7b:7aa5
db dummyf_36275[32]; // 2e7b:7ac5
db dummyf_36295[32]; // 2e7b:7ae5
db dummyf_362b5[32]; // 2e7b:7b05
db dummyf_362d5[32]; // 2e7b:7b25
db dummyf_362f5[32]; // 2e7b:7b45
db dummyf_36315[32]; // 2e7b:7b65
db dummyf_36335[32]; // 2e7b:7b85
db dummyf_36355[32]; // 2e7b:7ba5
db dummyf_36375[32]; // 2e7b:7bc5
db dummyf_36395[32]; // 2e7b:7be5
db dummyf_363b5[32]; // 2e7b:7c05
db dummyf_363d5[32]; // 2e7b:7c25
db dummyf_363f5[32]; // 2e7b:7c45
db dummyf_36415[32]; // 2e7b:7c65
db dummyf_36435[32]; // 2e7b:7c85
db dummyf_36455[32]; // 2e7b:7ca5
db dummyf_36475[32]; // 2e7b:7cc5
db dummyf_36495[32]; // 2e7b:7ce5
db dummyf_364b5[32]; // 2e7b:7d05
db dummyf_364d5[32]; // 2e7b:7d25
db dummyf_364f5[32]; // 2e7b:7d45
db dummyf_36515[32]; // 2e7b:7d65
db dummyf_36535[32]; // 2e7b:7d85
db dummyf_36555[32]; // 2e7b:7da5
db dummyf_36575[32]; // 2e7b:7dc5
db dummyf_36595[32]; // 2e7b:7de5
db dummyf_365b5[32]; // 2e7b:7e05
db dummyf_365d5[32]; // 2e7b:7e25
db dummyf_365f5[32]; // 2e7b:7e45
db dummyf_36615[32]; // 2e7b:7e65
db dummyf_36635[32]; // 2e7b:7e85
db dummyf_36655[32]; // 2e7b:7ea5
db dummyf_36675[32]; // 2e7b:7ec5
db dummyf_36695[32]; // 2e7b:7ee5
db dummyf_366b5[32]; // 2e7b:7f05
db dummyf_366d5[32]; // 2e7b:7f25
db dummyf_366f5[32]; // 2e7b:7f45
db dummyf_36715[32]; // 2e7b:7f65
db dummyf_36735[32]; // 2e7b:7f85
db dummyf_36755[32]; // 2e7b:7fa5
db dummyf_36775[32]; // 2e7b:7fc5
db dummyf_36795[32]; // 2e7b:7fe5
db dummyf_367b5[32]; // 2e7b:8005
db dummyf_367d5[32]; // 2e7b:8025
db dummyf_367f5[32]; // 2e7b:8045
db dummyf_36815[32]; // 2e7b:8065
db dummyf_36835[32]; // 2e7b:8085
db dummyf_36855[32]; // 2e7b:80a5
db dummyf_36875[32]; // 2e7b:80c5
db dummyf_36895[32]; // 2e7b:80e5
db dummyf_368b5[32]; // 2e7b:8105
db dummyf_368d5[32]; // 2e7b:8125
db dummyf_368f5[32]; // 2e7b:8145
db dummyf_36915[32]; // 2e7b:8165
db dummyf_36935[32]; // 2e7b:8185
db dummyf_36955[32]; // 2e7b:81a5
db dummyf_36975[32]; // 2e7b:81c5
db dummyf_36995[32]; // 2e7b:81e5
db dummyf_369b5[32]; // 2e7b:8205
db dummyf_369d5[32]; // 2e7b:8225
db dummyf_369f5[32]; // 2e7b:8245
db dummyf_36a15[32]; // 2e7b:8265
db dummyf_36a35[32]; // 2e7b:8285
db dummyf_36a55[32]; // 2e7b:82a5
db dummyf_36a75[32]; // 2e7b:82c5
db dummyf_36a95[32]; // 2e7b:82e5
db dummyf_36ab5[32]; // 2e7b:8305
db dummyf_36ad5[32]; // 2e7b:8325
db dummyf_36af5[32]; // 2e7b:8345
db dummyf_36b15[32]; // 2e7b:8365
db dummyf_36b35[32]; // 2e7b:8385
db dummyf_36b55[32]; // 2e7b:83a5
db dummyf_36b75[32]; // 2e7b:83c5
db dummyf_36b95[32]; // 2e7b:83e5
db dummyf_36bb5[32]; // 2e7b:8405
db dummyf_36bd5[32]; // 2e7b:8425
db dummyf_36bf5[32]; // 2e7b:8445
db dummyf_36c15[32]; // 2e7b:8465
db dummyf_36c35[32]; // 2e7b:8485
db dummyf_36c55[32]; // 2e7b:84a5
db dummyf_36c75[32]; // 2e7b:84c5
db dummyf_36c95[32]; // 2e7b:84e5
db dummyf_36cb5[32]; // 2e7b:8505
db dummyf_36cd5[32]; // 2e7b:8525
db dummyf_36cf5[32]; // 2e7b:8545
db dummyf_36d15[32]; // 2e7b:8565
db dummyf_36d35[32]; // 2e7b:8585
db dummyf_36d55[32]; // 2e7b:85a5
db dummyf_36d75[32]; // 2e7b:85c5
db dummyf_36d95[32]; // 2e7b:85e5
db dummyf_36db5[32]; // 2e7b:8605
db dummyf_36dd5[32]; // 2e7b:8625
db dummyf_36df5[32]; // 2e7b:8645
db dummyf_36e15[32]; // 2e7b:8665
db dummyf_36e35[32]; // 2e7b:8685
db dummyf_36e55[32]; // 2e7b:86a5
db dummyf_36e75[32]; // 2e7b:86c5
db dummyf_36e95[32]; // 2e7b:86e5
db dummyf_36eb5[32]; // 2e7b:8705
db dummyf_36ed5[32]; // 2e7b:8725
db dummyf_36ef5[32]; // 2e7b:8745
db dummyf_36f15[32]; // 2e7b:8765
db dummyf_36f35[32]; // 2e7b:8785
db dummyf_36f55[32]; // 2e7b:87a5
db dummyf_36f75[32]; // 2e7b:87c5
db dummyf_36f95[32]; // 2e7b:87e5
db dummyf_36fb5[32]; // 2e7b:8805
db dummyf_36fd5[32]; // 2e7b:8825
db dummyf_36ff5[32]; // 2e7b:8845
db dummyf_37015[32]; // 2e7b:8865
db dummyf_37035[32]; // 2e7b:8885
db dummyf_37055[32]; // 2e7b:88a5
db dummyf_37075[32]; // 2e7b:88c5
db dummyf_37095[32]; // 2e7b:88e5
db dummyf_370b5[32]; // 2e7b:8905
db dummyf_370d5[32]; // 2e7b:8925
db dummyf_370f5[32]; // 2e7b:8945
db dummyf_37115[32]; // 2e7b:8965
db dummyf_37135[32]; // 2e7b:8985
db dummyf_37155[32]; // 2e7b:89a5
db dummyf_37175[32]; // 2e7b:89c5
db dummyf_37195[32]; // 2e7b:89e5
db dummyf_371b5[32]; // 2e7b:8a05
db dummyf_371d5[32]; // 2e7b:8a25
db dummyf_371f5[32]; // 2e7b:8a45
db dummyf_37215[32]; // 2e7b:8a65
db dummyf_37235[32]; // 2e7b:8a85
db dummyf_37255[32]; // 2e7b:8aa5
db dummyf_37275[32]; // 2e7b:8ac5
db dummyf_37295[32]; // 2e7b:8ae5
db dummyf_372b5[32]; // 2e7b:8b05
db dummyf_372d5[32]; // 2e7b:8b25
db dummyf_372f5[32]; // 2e7b:8b45
db dummyf_37315[32]; // 2e7b:8b65
db dummyf_37335[32]; // 2e7b:8b85
db dummyf_37355[32]; // 2e7b:8ba5
db dummyf_37375[32]; // 2e7b:8bc5
db dummyf_37395[32]; // 2e7b:8be5
db dummyf_373b5[32]; // 2e7b:8c05
db dummyf_373d5[32]; // 2e7b:8c25
db dummyf_373f5[32]; // 2e7b:8c45
db dummyf_37415[32]; // 2e7b:8c65
db dummyf_37435[32]; // 2e7b:8c85
db dummyf_37455[32]; // 2e7b:8ca5
db dummyf_37475[32]; // 2e7b:8cc5
db dummyf_37495[32]; // 2e7b:8ce5
db dummyf_374b5[32]; // 2e7b:8d05
db dummyf_374d5[32]; // 2e7b:8d25
db dummyf_374f5[32]; // 2e7b:8d45
db dummyf_37515[32]; // 2e7b:8d65
db dummyf_37535[32]; // 2e7b:8d85
db dummyf_37555[32]; // 2e7b:8da5
db dummyf_37575[32]; // 2e7b:8dc5
db dummyf_37595[32]; // 2e7b:8de5
db dummyf_375b5[32]; // 2e7b:8e05
db dummyf_375d5[32]; // 2e7b:8e25
db dummyf_375f5[32]; // 2e7b:8e45
db dummyf_37615[32]; // 2e7b:8e65
db dummyf_37635[32]; // 2e7b:8e85
db dummyf_37655[32]; // 2e7b:8ea5
db dummyf_37675[32]; // 2e7b:8ec5
db dummyf_37695[32]; // 2e7b:8ee5
db dummyf_376b5[32]; // 2e7b:8f05
db dummyf_376d5[32]; // 2e7b:8f25
db dummyf_376f5[32]; // 2e7b:8f45
db dummyf_37715[32]; // 2e7b:8f65
db dummyf_37735[32]; // 2e7b:8f85
db dummyf_37755[32]; // 2e7b:8fa5
db dummyf_37775[32]; // 2e7b:8fc5
db dummyf_37795[32]; // 2e7b:8fe5
db dummyf_377b5[32]; // 2e7b:9005
db dummyf_377d5[32]; // 2e7b:9025
db dummyf_377f5[32]; // 2e7b:9045
db dummyf_37815[32]; // 2e7b:9065
db dummyf_37835[32]; // 2e7b:9085
db dummyf_37855[32]; // 2e7b:90a5
db dummyf_37875[32]; // 2e7b:90c5
db dummyf_37895[32]; // 2e7b:90e5
db dummyf_378b5[32]; // 2e7b:9105
db dummyf_378d5[32]; // 2e7b:9125
db dummyf_378f5[32]; // 2e7b:9145
db dummyf_37915[32]; // 2e7b:9165
db dummyf_37935[32]; // 2e7b:9185
db dummyf_37955[32]; // 2e7b:91a5
db dummyf_37975[32]; // 2e7b:91c5
db dummyf_37995[32]; // 2e7b:91e5
db dummyf_379b5[32]; // 2e7b:9205
db dummyf_379d5[32]; // 2e7b:9225
db dummyf_379f5[32]; // 2e7b:9245
db dummyf_37a15[32]; // 2e7b:9265
db dummyf_37a35[32]; // 2e7b:9285
db dummyf_37a55[32]; // 2e7b:92a5
db dummyf_37a75[32]; // 2e7b:92c5
db dummyf_37a95[32]; // 2e7b:92e5
db dummyf_37ab5[32]; // 2e7b:9305
db dummyf_37ad5[32]; // 2e7b:9325
db dummyf_37af5[32]; // 2e7b:9345
db dummyf_37b15[32]; // 2e7b:9365
db dummyf_37b35[32]; // 2e7b:9385
db dummyf_37b55[32]; // 2e7b:93a5
db dummyf_37b75[32]; // 2e7b:93c5
db dummyf_37b95[32]; // 2e7b:93e5
db dummyf_37bb5[32]; // 2e7b:9405
db dummyf_37bd5[32]; // 2e7b:9425
db dummyf_37bf5[32]; // 2e7b:9445
db dummyf_37c15[32]; // 2e7b:9465
db dummyf_37c35[32]; // 2e7b:9485
db dummyf_37c55[32]; // 2e7b:94a5
db dummyf_37c75[32]; // 2e7b:94c5
db dummyf_37c95[32]; // 2e7b:94e5
db dummyf_37cb5[32]; // 2e7b:9505
db dummyf_37cd5[32]; // 2e7b:9525
db dummyf_37cf5[32]; // 2e7b:9545
db dummyf_37d15[32]; // 2e7b:9565
db dummyf_37d35[32]; // 2e7b:9585
db dummyf_37d55[32]; // 2e7b:95a5
db dummyf_37d75[32]; // 2e7b:95c5
db dummyf_37d95[32]; // 2e7b:95e5
db dummyf_37db5[32]; // 2e7b:9605
db dummyf_37dd5[32]; // 2e7b:9625
db dummyf_37df5[32]; // 2e7b:9645
db dummyf_37e15[32]; // 2e7b:9665
db dummyf_37e35[32]; // 2e7b:9685
db dummyf_37e55[32]; // 2e7b:96a5
db dummyf_37e75[32]; // 2e7b:96c5
db dummyf_37e95[32]; // 2e7b:96e5
db dummyf_37eb5[32]; // 2e7b:9705
db dummyf_37ed5[32]; // 2e7b:9725
db dummyf_37ef5[32]; // 2e7b:9745
db dummyf_37f15[32]; // 2e7b:9765
db dummyf_37f35[32]; // 2e7b:9785
db dummyf_37f55[32]; // 2e7b:97a5
db dummyf_37f75[32]; // 2e7b:97c5
db dummyf_37f95[32]; // 2e7b:97e5
db dummyf_37fb5[32]; // 2e7b:9805
db dummyf_37fd5[32]; // 2e7b:9825
db dummyf_37ff5[32]; // 2e7b:9845
db dummyf_38015[32]; // 2e7b:9865
db dummyf_38035[32]; // 2e7b:9885
db dummyf_38055[32]; // 2e7b:98a5
db dummyf_38075[32]; // 2e7b:98c5
db dummyf_38095[32]; // 2e7b:98e5
db dummyf_380b5[32]; // 2e7b:9905
db dummyf_380d5[32]; // 2e7b:9925
db dummyf_380f5[32]; // 2e7b:9945
db dummyf_38115[32]; // 2e7b:9965
db dummyf_38135[32]; // 2e7b:9985
db dummyf_38155[32]; // 2e7b:99a5
db dummyf_38175[32]; // 2e7b:99c5
db dummyf_38195[32]; // 2e7b:99e5
db dummyf_381b5[32]; // 2e7b:9a05
db dummyf_381d5[32]; // 2e7b:9a25
db dummyf_381f5[32]; // 2e7b:9a45
db dummyf_38215[32]; // 2e7b:9a65
db dummyf_38235[32]; // 2e7b:9a85
db dummyf_38255[32]; // 2e7b:9aa5
db dummyf_38275[32]; // 2e7b:9ac5
db dummyf_38295[32]; // 2e7b:9ae5
db dummyf_382b5[32]; // 2e7b:9b05
db dummyf_382d5[32]; // 2e7b:9b25
db dummyf_382f5[32]; // 2e7b:9b45
db dummyf_38315[32]; // 2e7b:9b65
db dummyf_38335[32]; // 2e7b:9b85
db dummyf_38355[32]; // 2e7b:9ba5
db dummyf_38375[32]; // 2e7b:9bc5
db dummyf_38395[32]; // 2e7b:9be5
db dummyf_383b5[32]; // 2e7b:9c05
db dummyf_383d5[32]; // 2e7b:9c25
db dummyf_383f5[32]; // 2e7b:9c45
db dummyf_38415[32]; // 2e7b:9c65
db dummyf_38435[32]; // 2e7b:9c85
db dummyf_38455[32]; // 2e7b:9ca5
db dummyf_38475[32]; // 2e7b:9cc5
db dummyf_38495[32]; // 2e7b:9ce5
db dummyf_384b5[32]; // 2e7b:9d05
db dummyf_384d5[32]; // 2e7b:9d25
db dummyf_384f5[32]; // 2e7b:9d45
db dummyf_38515[32]; // 2e7b:9d65
db dummyf_38535[32]; // 2e7b:9d85
db dummyf_38555[32]; // 2e7b:9da5
db dummyf_38575[32]; // 2e7b:9dc5
db dummyf_38595[32]; // 2e7b:9de5
db dummyf_385b5[32]; // 2e7b:9e05
db dummyf_385d5[32]; // 2e7b:9e25
db dummyf_385f5[32]; // 2e7b:9e45
db dummyf_38615[32]; // 2e7b:9e65
db dummyf_38635[32]; // 2e7b:9e85
db dummyf_38655[32]; // 2e7b:9ea5
db dummyf_38675[32]; // 2e7b:9ec5
db dummyf_38695[32]; // 2e7b:9ee5
db dummyf_386b5[32]; // 2e7b:9f05
db dummyf_386d5[32]; // 2e7b:9f25
db dummyf_386f5[32]; // 2e7b:9f45
db dummyf_38715[32]; // 2e7b:9f65
db dummyf_38735[32]; // 2e7b:9f85
db dummyf_38755[32]; // 2e7b:9fa5
db dummyf_38775[32]; // 2e7b:9fc5
db dummyf_38795[32]; // 2e7b:9fe5
db dummyf_387b5[32]; // 2e7b:a005
db dummyf_387d5[32]; // 2e7b:a025
db dummyf_387f5[32]; // 2e7b:a045
db dummyf_38815[32]; // 2e7b:a065
db dummyf_38835[32]; // 2e7b:a085
db dummyf_38855[32]; // 2e7b:a0a5
db dummyf_38875[32]; // 2e7b:a0c5
db dummyf_38895[32]; // 2e7b:a0e5
db dummyf_388b5[32]; // 2e7b:a105
db dummyf_388d5[32]; // 2e7b:a125
db dummyf_388f5[32]; // 2e7b:a145
db dummyf_38915[32]; // 2e7b:a165
db dummyf_38935[32]; // 2e7b:a185
db dummyf_38955[32]; // 2e7b:a1a5
db dummyf_38975[32]; // 2e7b:a1c5
db dummyf_38995[32]; // 2e7b:a1e5
db dummyf_389b5[32]; // 2e7b:a205
db dummyf_389d5[32]; // 2e7b:a225
db dummyf_389f5[32]; // 2e7b:a245
db dummyf_38a15[32]; // 2e7b:a265
db dummyf_38a35[32]; // 2e7b:a285
db dummyf_38a55[32]; // 2e7b:a2a5
db dummyf_38a75[32]; // 2e7b:a2c5
db dummyf_38a95[32]; // 2e7b:a2e5
db dummyf_38ab5[32]; // 2e7b:a305
db dummyf_38ad5[32]; // 2e7b:a325
db dummyf_38af5[32]; // 2e7b:a345
db dummyf_38b15[32]; // 2e7b:a365
db dummyf_38b35[32]; // 2e7b:a385
db dummyf_38b55[32]; // 2e7b:a3a5
db dummyf_38b75[32]; // 2e7b:a3c5
db dummyf_38b95[32]; // 2e7b:a3e5
db dummyf_38bb5[32]; // 2e7b:a405
db dummyf_38bd5[32]; // 2e7b:a425
db dummyf_38bf5[32]; // 2e7b:a445
db dummyf_38c15[32]; // 2e7b:a465
db dummyf_38c35[32]; // 2e7b:a485
db dummyf_38c55[32]; // 2e7b:a4a5
db dummyf_38c75[32]; // 2e7b:a4c5
db dummyf_38c95[32]; // 2e7b:a4e5
db dummyf_38cb5[32]; // 2e7b:a505
db dummyf_38cd5[32]; // 2e7b:a525
db dummyf_38cf5[32]; // 2e7b:a545
db dummyf_38d15[32]; // 2e7b:a565
db dummyf_38d35[32]; // 2e7b:a585
db dummyf_38d55[32]; // 2e7b:a5a5
db dummyf_38d75[32]; // 2e7b:a5c5
db dummyf_38d95[32]; // 2e7b:a5e5
db dummyf_38db5[32]; // 2e7b:a605
db dummyf_38dd5[32]; // 2e7b:a625
db dummyf_38df5[32]; // 2e7b:a645
db dummyf_38e15[32]; // 2e7b:a665
db dummyf_38e35[32]; // 2e7b:a685
db dummyf_38e55[32]; // 2e7b:a6a5
db dummyf_38e75[32]; // 2e7b:a6c5
db dummyf_38e95[32]; // 2e7b:a6e5
db dummyf_38eb5[32]; // 2e7b:a705
db dummyf_38ed5[32]; // 2e7b:a725
db dummyf_38ef5[32]; // 2e7b:a745
db dummyf_38f15[32]; // 2e7b:a765
db dummyf_38f35[32]; // 2e7b:a785
db dummyf_38f55[32]; // 2e7b:a7a5
db dummyf_38f75[32]; // 2e7b:a7c5
db dummyf_38f95[32]; // 2e7b:a7e5
db dummyf_38fb5[32]; // 2e7b:a805
db dummyf_38fd5[32]; // 2e7b:a825
db dummyf_38ff5[32]; // 2e7b:a845
db dummyf_39015[32]; // 2e7b:a865
db dummyf_39035[32]; // 2e7b:a885
db dummyf_39055[32]; // 2e7b:a8a5
db dummyf_39075[32]; // 2e7b:a8c5
db dummyf_39095[32]; // 2e7b:a8e5
db dummyf_390b5[32]; // 2e7b:a905
db dummyf_390d5[32]; // 2e7b:a925
db dummyf_390f5[32]; // 2e7b:a945
db dummyf_39115[32]; // 2e7b:a965
db dummyf_39135[32]; // 2e7b:a985
db dummyf_39155[32]; // 2e7b:a9a5
db dummyf_39175[32]; // 2e7b:a9c5
db dummyf_39195[32]; // 2e7b:a9e5
db dummyf_391b5[32]; // 2e7b:aa05
db dummyf_391d5[32]; // 2e7b:aa25
db dummyf_391f5[32]; // 2e7b:aa45
db dummyf_39215[32]; // 2e7b:aa65
db dummyf_39235[32]; // 2e7b:aa85
db dummyf_39255[32]; // 2e7b:aaa5
db dummyf_39275[32]; // 2e7b:aac5
db dummyf_39295[32]; // 2e7b:aae5
db dummyf_392b5[32]; // 2e7b:ab05
db dummyf_392d5[32]; // 2e7b:ab25
db dummyf_392f5[32]; // 2e7b:ab45
db dummyf_39315[32]; // 2e7b:ab65
db dummyf_39335[32]; // 2e7b:ab85
db dummyf_39355[32]; // 2e7b:aba5
db dummyf_39375[32]; // 2e7b:abc5
db dummyf_39395[32]; // 2e7b:abe5
db dummyf_393b5[32]; // 2e7b:ac05
db dummyf_393d5[32]; // 2e7b:ac25
db dummyf_393f5[32]; // 2e7b:ac45
db dummyf_39415[32]; // 2e7b:ac65
db dummyf_39435[32]; // 2e7b:ac85
db dummyf_39455[32]; // 2e7b:aca5
db dummyf_39475[32]; // 2e7b:acc5
db dummyf_39495[32]; // 2e7b:ace5
db dummyf_394b5[32]; // 2e7b:ad05
db dummyf_394d5[32]; // 2e7b:ad25
db dummyf_394f5[32]; // 2e7b:ad45
db dummyf_39515[32]; // 2e7b:ad65
db dummyf_39535[32]; // 2e7b:ad85
db dummyf_39555[32]; // 2e7b:ada5
db dummyf_39575[32]; // 2e7b:adc5
db dummyf_39595[32]; // 2e7b:ade5
db dummyf_395b5[32]; // 2e7b:ae05
db dummyf_395d5[32]; // 2e7b:ae25
db dummyf_395f5[32]; // 2e7b:ae45
db dummyf_39615[32]; // 2e7b:ae65
db dummyf_39635[32]; // 2e7b:ae85
db dummyf_39655[32]; // 2e7b:aea5
db dummyf_39675[32]; // 2e7b:aec5
db dummyf_39695[32]; // 2e7b:aee5
db dummyf_396b5[32]; // 2e7b:af05
db dummyf_396d5[32]; // 2e7b:af25
db dummyf_396f5[32]; // 2e7b:af45
db dummyf_39715[32]; // 2e7b:af65
db dummyf_39735[32]; // 2e7b:af85
db dummyf_39755[32]; // 2e7b:afa5
db dummyf_39775[32]; // 2e7b:afc5
db dummyf_39795[32]; // 2e7b:afe5
db dummyf_397b5[32]; // 2e7b:b005
db dummyf_397d5[32]; // 2e7b:b025
db dummyf_397f5[32]; // 2e7b:b045
db dummyf_39815[32]; // 2e7b:b065
db dummyf_39835[32]; // 2e7b:b085
db dummyf_39855[32]; // 2e7b:b0a5
db dummyf_39875[32]; // 2e7b:b0c5
db dummyf_39895[32]; // 2e7b:b0e5
db dummyf_398b5[32]; // 2e7b:b105
db dummyf_398d5[32]; // 2e7b:b125
db dummyf_398f5[32]; // 2e7b:b145
db dummyf_39915[32]; // 2e7b:b165
db dummyf_39935[32]; // 2e7b:b185
db dummyf_39955[32]; // 2e7b:b1a5
db dummyf_39975[32]; // 2e7b:b1c5
db dummyf_39995[32]; // 2e7b:b1e5
db dummyf_399b5[32]; // 2e7b:b205
db dummyf_399d5[32]; // 2e7b:b225
db dummyf_399f5[32]; // 2e7b:b245
db dummyf_39a15[32]; // 2e7b:b265
db dummyf_39a35[32]; // 2e7b:b285
db dummyf_39a55[32]; // 2e7b:b2a5
db dummyf_39a75[32]; // 2e7b:b2c5
db dummyf_39a95[32]; // 2e7b:b2e5
db dummyf_39ab5[32]; // 2e7b:b305
db dummyf_39ad5[32]; // 2e7b:b325
db dummyf_39af5[32]; // 2e7b:b345
db dummyf_39b15[32]; // 2e7b:b365
db dummyf_39b35[32]; // 2e7b:b385
db dummyf_39b55[32]; // 2e7b:b3a5
db dummyf_39b75[32]; // 2e7b:b3c5
db dummyf_39b95[32]; // 2e7b:b3e5
db dummyf_39bb5[32]; // 2e7b:b405
db dummyf_39bd5[32]; // 2e7b:b425
db dummyf_39bf5[32]; // 2e7b:b445
db dummyf_39c15[32]; // 2e7b:b465
db dummyf_39c35[32]; // 2e7b:b485
db dummyf_39c55[32]; // 2e7b:b4a5
db dummyf_39c75[32]; // 2e7b:b4c5
db dummyf_39c95[32]; // 2e7b:b4e5
db dummyf_39cb5[32]; // 2e7b:b505
db dummyf_39cd5[32]; // 2e7b:b525
db dummyf_39cf5[32]; // 2e7b:b545
db dummyf_39d15[32]; // 2e7b:b565
db dummyf_39d35[32]; // 2e7b:b585
db dummyf_39d55[32]; // 2e7b:b5a5
db dummyf_39d75[32]; // 2e7b:b5c5
db dummyf_39d95[32]; // 2e7b:b5e5
db dummyf_39db5[32]; // 2e7b:b605
db dummyf_39dd5[32]; // 2e7b:b625
db dummyf_39df5[32]; // 2e7b:b645
db dummyf_39e15[32]; // 2e7b:b665
db dummyf_39e35[32]; // 2e7b:b685
db dummyf_39e55[32]; // 2e7b:b6a5
db dummyf_39e75[32]; // 2e7b:b6c5
db dummyf_39e95[32]; // 2e7b:b6e5
db dummyf_39eb5[32]; // 2e7b:b705
db dummyf_39ed5[32]; // 2e7b:b725
db dummyf_39ef5[32]; // 2e7b:b745
db dummyf_39f15[32]; // 2e7b:b765
db dummyf_39f35[32]; // 2e7b:b785
db dummyf_39f55[32]; // 2e7b:b7a5
db dummyf_39f75[32]; // 2e7b:b7c5
db dummyf_39f95[32]; // 2e7b:b7e5
db dummyf_39fb5[32]; // 2e7b:b805
db dummyf_39fd5[32]; // 2e7b:b825
db dummyf_39ff5[32]; // 2e7b:b845
db dummyf_3a015[32]; // 2e7b:b865
db dummyf_3a035[32]; // 2e7b:b885
db dummyf_3a055[32]; // 2e7b:b8a5
db dummyf_3a075[32]; // 2e7b:b8c5
db dummyf_3a095[32]; // 2e7b:b8e5
db dummyf_3a0b5[32]; // 2e7b:b905
db dummyf_3a0d5[32]; // 2e7b:b925
db dummyf_3a0f5[32]; // 2e7b:b945
db dummyf_3a115[32]; // 2e7b:b965
db dummyf_3a135[32]; // 2e7b:b985
db dummyf_3a155[32]; // 2e7b:b9a5
db dummyf_3a175[32]; // 2e7b:b9c5
db dummyf_3a195[32]; // 2e7b:b9e5
db dummyf_3a1b5[32]; // 2e7b:ba05
db dummyf_3a1d5[32]; // 2e7b:ba25
db dummyf_3a1f5[32]; // 2e7b:ba45
db dummyf_3a215[32]; // 2e7b:ba65
db dummyf_3a235[32]; // 2e7b:ba85
db dummyf_3a255[32]; // 2e7b:baa5
db dummyf_3a275[32]; // 2e7b:bac5
db dummyf_3a295[32]; // 2e7b:bae5
db dummyf_3a2b5[32]; // 2e7b:bb05
db dummyf_3a2d5[32]; // 2e7b:bb25
db dummyf_3a2f5[32]; // 2e7b:bb45
db dummyf_3a315[32]; // 2e7b:bb65
db dummyf_3a335[32]; // 2e7b:bb85
db dummyf_3a355[32]; // 2e7b:bba5
db dummyf_3a375[32]; // 2e7b:bbc5
db dummyf_3a395[32]; // 2e7b:bbe5
db dummyf_3a3b5[32]; // 2e7b:bc05
db dummyf_3a3d5[32]; // 2e7b:bc25
db dummyf_3a3f5[32]; // 2e7b:bc45
db dummyf_3a415[32]; // 2e7b:bc65
db dummyf_3a435[32]; // 2e7b:bc85
db dummyf_3a455[32]; // 2e7b:bca5
db dummyf_3a475[32]; // 2e7b:bcc5
db dummyf_3a495[32]; // 2e7b:bce5
db dummyf_3a4b5[32]; // 2e7b:bd05
db dummyf_3a4d5[32]; // 2e7b:bd25
db dummyf_3a4f5;
db dummyf_3a4f6;
db dummyf_3a4f7;
db dummyf_3a4f8;
db dummyf_3a4f9;
db dummyf_3a4fa;
db dummyf_3a4fb;
db dummyf_3a4fc;
db dummyf_3a4fd;
db dummyf_3a4fe;
db dummyf_3a4ff;
db byte_48ae0; // 3a50:0000
db dummyf_3a501;
dw dummyf_3a502;
db dummyf_3a504;
db dummyf_3a505;
dw dummyf_3a506;
char amsruntimelibra[56]; // 3a50:0008
db dummyf_3a540; // 3a50:0040
db dummyf_3a541;
char aregnxxx[9]; // 3a50:0042
char albxxx[7]; // 3a50:004b
char apgxxx[7]; // 3a50:0052
char avnxxx[7]; // 3a50:0059
char amexxx[7]; // 3a50:0060
char ancxxx[7]; // 3a50:0067
char acexxx[7]; // 3a50:006e
char ajpxxx[7]; // 3a50:0075
char anaxxx[7]; // 3a50:007c
db byte_48b63; // 3a50:0083
db byte_48b64; // 3a50:0084
db dummyf_3a585;
dw word_48b66; // 3a50:0086
dw word_48b68; // 3a50:0088
dw word_48b6a; // 3a50:008a
dw dummyf_3a58c; // 3a50:008c
dw dummyf_3a58e; // 3a50:008e
dw dummyf_3a590; // 3a50:0090
dw dummyf_3a592; // 3a50:0092
dw dummyf_3a594; // 3a50:0094
dw dummyf_3a596; // 3a50:0096
dw dummyf_3a598; // 3a50:0098
dw dummyf_3a59a; // 3a50:009a
char a256pitpic[11]; // 3a50:009c
char acockpitpic[12]; // 3a50:00a7
db dummyf_3a5b3[1];
char af15dgtlbin[12]; // 3a50:00b4
dw word_48ba0; // 3a50:00c0
dw word_48ba2; // 3a50:00c2
db dummyf_3a5c4; // 3a50:00c4
db dummyf_3a5c5;
db dummyf_3a5c6;
db dummyf_3a5c7;
db dummyf_3a5c8;
db dummyf_3a5c9;
db dummyf_3a5ca; // 3a50:00ca
db dummyf_3a5cb; // 3a50:00cb
db dummyf_3a5cc; // 3a50:00cc
db dummyf_3a5cd;
db dummyf_3a5ce;
db dummyf_3a5cf;
db dummyf_3a5d0; // 3a50:00d0
db dummyf_3a5d1;
db dummyf_3a5d2; // 3a50:00d2
db dummyf_3a5d3;
db dummyf_3a5d4;
db dummyf_3a5d5;
db dummyf_3a5d6;
db dummyf_3a5d7;
db dummyf_3a5d8;
db dummyf_3a5d9;
dw word_48bba; // 3a50:00da
dw word_48bbc; // 3a50:00dc
dw word_48bbe[2]; // 3a50:00de
db byte_48bc2[16]; // 3a50:00e2
db dummyf_3a5f2[13]; // 3a50:00e2
db dummyf_3a5ff[5]; // 3a50:00e2
db byte_48be4; // 3a50:0104
char aerrorreleasing[44]; // 3a50:0105
char areadyfortakeof[18]; // 3a50:0131
char aweaponsrepleni[20]; // 3a50:0143
char aautomaticlandi[26]; // 3a50:0157
db dummyf_3a671;
dw word_48c52; // 3a50:0172
dw word_48c54[2]; // 3a50:0174
dw word_48c58[3]; // 3a50:0178
dw word_48c5e; // 3a50:017e
dw word_48c60; // 3a50:0180
dw word_48c62; // 3a50:0182
dw word_48c64; // 3a50:0184
char anone[5]; // 3a50:0186
db dummyf_3a68b;
db dummyf_3a68c;
db dummyf_3a68d;
db dummyf_3a68e;
db dummyf_3a68f;
db dummyf_3a690;
db dummyf_3a691;
db dummyf_3a692;
db dummyf_3a693;
char asa2[5]; // 3a50:0194
db dummyf_3a699;
db dummyf_3a69a;
db dummyf_3a69b;
db dummyf_3a69c; // 3a50:019c
db dummyf_3a69d;
db dummyf_3a69e; // 3a50:019e
db dummyf_3a69f;
db dummyf_3a6a0;
db dummyf_3a6a1;
char asa5[5]; // 3a50:01a2
db dummyf_3a6a7;
db dummyf_3a6a8;
db dummyf_3a6a9;
db dummyf_3a6aa; // 3a50:01aa
db dummyf_3a6ab; // 3a50:01ab
db dummyf_3a6ac; // 3a50:01ac
db dummyf_3a6ad;
db dummyf_3a6ae;
db dummyf_3a6af;
char asa8b[6]; // 3a50:01b0
db dummyf_3a6b6;
db dummyf_3a6b7;
db dummyf_3a6b8; // 3a50:01b8
db dummyf_3a6b9;
db dummyf_3a6ba; // 3a50:01ba
db dummyf_3a6bb;
db dummyf_3a6bc;
db dummyf_3a6bd;
char asa10[6]; // 3a50:01be
db dummyf_3a6c4;
db dummyf_3a6c5;
db dummyf_3a6c6; // 3a50:01c6
db dummyf_3a6c7; // 3a50:01c7
db dummyf_3a6c8; // 3a50:01c8
db dummyf_3a6c9;
db dummyf_3a6ca; // 3a50:01ca
db dummyf_3a6cb;
char asa11[6]; // 3a50:01cc
db dummyf_3a6d2;
db dummyf_3a6d3;
db dummyf_3a6d4; // 3a50:01d4
db dummyf_3a6d5;
db dummyf_3a6d6; // 3a50:01d6
db dummyf_3a6d7;
db dummyf_3a6d8;
db dummyf_3a6d9;
char asa12[6]; // 3a50:01da
db dummyf_3a6e0;
db dummyf_3a6e1;
db dummyf_3a6e2; // 3a50:01e2
db dummyf_3a6e3; // 3a50:01e3
db dummyf_3a6e4; // 3a50:01e4
db dummyf_3a6e5;
db dummyf_3a6e6; // 3a50:01e6
db dummyf_3a6e7;
char asa13[6]; // 3a50:01e8
db dummyf_3a6ee;
db dummyf_3a6ef;
db dummyf_3a6f0; // 3a50:01f0
db dummyf_3a6f1;
db dummyf_3a6f2; // 3a50:01f2
db dummyf_3a6f3;
db dummyf_3a6f4;
db dummyf_3a6f5;
char asan4[7]; // 3a50:01f6
db dummyf_3a6fd;
db dummyf_3a6fe; // 3a50:01fe
db dummyf_3a6ff;
db dummyf_3a700; // 3a50:0200
db dummyf_3a701;
db dummyf_3a702; // 3a50:0202
db dummyf_3a703;
char asan5[7]; // 3a50:0204
db dummyf_3a70b;
db dummyf_3a70c; // 3a50:020c
db dummyf_3a70d;
db dummyf_3a70e; // 3a50:020e
db dummyf_3a70f;
db dummyf_3a710;
db dummyf_3a711;
char asan6[7]; // 3a50:0212
db dummyf_3a719;
db dummyf_3a71a; // 3a50:021a
db dummyf_3a71b; // 3a50:021b
db dummyf_3a71c; // 3a50:021c
db dummyf_3a71d;
db dummyf_3a71e; // 3a50:021e
db dummyf_3a71f;
char asan7[7]; // 3a50:0220
db dummyf_3a727;
db dummyf_3a728; // 3a50:0228
db dummyf_3a729;
db dummyf_3a72a; // 3a50:022a
db dummyf_3a72b;
db dummyf_3a72c;
db dummyf_3a72d;
char ahawk[5]; // 3a50:022e
db dummyf_3a733;
db dummyf_3a734;
db dummyf_3a735;
db dummyf_3a736; // 3a50:0236
db dummyf_3a737;
db dummyf_3a738; // 3a50:0238
db dummyf_3a739;
db dummyf_3a73a; // 3a50:023a
db dummyf_3a73b;
char arapier[7]; // 3a50:023c
db dummyf_3a743;
db dummyf_3a744; // 3a50:0244
db dummyf_3a745;
db dummyf_3a746; // 3a50:0246
db dummyf_3a747;
db dummyf_3a748;
db dummyf_3a749;
char atiger[6]; // 3a50:024a
db dummyf_3a750;
db dummyf_3a751;
db dummyf_3a752; // 3a50:0252
db dummyf_3a753;
db dummyf_3a754; // 3a50:0254
db dummyf_3a755;
db dummyf_3a756;
db dummyf_3a757;
char aseacat[7]; // 3a50:0258
db dummyf_3a75f;
db dummyf_3a760; // 3a50:0260
db dummyf_3a761;
db dummyf_3a762; // 3a50:0262
db dummyf_3a763;
db dummyf_3a764;
db dummyf_3a765;
char ail76[5]; // 3a50:0266
db dummyf_3a76b[32]; // 3a50:026b
db dummyf_3a78b[32]; // 3a50:028b
db dummyf_3a7ab;
db dummyf_3a7ac; // 3a50:02ac
db dummyf_3a7ad; // 3a50:02ad
db dummyf_3a7ae; // 3a50:02ae
db dummyf_3a7af;
db dummyf_3a7b0;
db dummyf_3a7b1;
db dummyf_3a7b2;
db dummyf_3a7b3;
db dummyf_3a7b4; // 3a50:02b4
db dummyf_3a7b5; // 3a50:02b5
db dummyf_3a7b6; // 3a50:02b6
db dummyf_3a7b7;
db dummyf_3a7b8; // 3a50:02b8
db dummyf_3a7b9;
db dummyf_3a7ba;
db dummyf_3a7bb;
db dummyf_3a7bc;
db dummyf_3a7bd;
db dummyf_3a7be;
db dummyf_3a7bf;
db dummyf_3a7c0;
db dummyf_3a7c1;
db dummyf_3a7c2; // 3a50:02c2
db dummyf_3a7c3;
db dummyf_3a7c4; // 3a50:02c4
db dummyf_3a7c5;
db dummyf_3a7c6;
db dummyf_3a7c7;
char amig23[7]; // 3a50:02c8
char aflogger[9]; // 3a50:02cf
db dummyf_3a7d8;
db dummyf_3a7d9;
db dummyf_3a7da; // 3a50:02da
db dummyf_3a7db; // 3a50:02db
db dummyf_3a7dc; // 3a50:02dc
db dummyf_3a7dd; // 3a50:02dd
db dummyf_3a7de; // 3a50:02de
db dummyf_3a7df;
db dummyf_3a7e0; // 3a50:02e0
db dummyf_3a7e1;
db dummyf_3a7e2; // 3a50:02e2
db dummyf_3a7e3;
db dummyf_3a7e4; // 3a50:02e4
db dummyf_3a7e5;
db dummyf_3a7e6;
db dummyf_3a7e7;
char amig25[7]; // 3a50:02e8
char afoxbat[8]; // 3a50:02ef
db dummyf_3a7f7;
db dummyf_3a7f8;
db dummyf_3a7f9;
db dummyf_3a7fa; // 3a50:02fa
db dummyf_3a7fb; // 3a50:02fb
db dummyf_3a7fc; // 3a50:02fc
db dummyf_3a7fd; // 3a50:02fd
db dummyf_3a7fe; // 3a50:02fe
db dummyf_3a7ff;
db dummyf_3a800; // 3a50:0300
db dummyf_3a801;
db dummyf_3a802;
db dummyf_3a803;
db dummyf_3a804; // 3a50:0304
db dummyf_3a805;
db dummyf_3a806;
db dummyf_3a807;
char amig29[7]; // 3a50:0308
char afulcrum[9]; // 3a50:030f
db dummyf_3a818;
db dummyf_3a819;
db dummyf_3a81a; // 3a50:031a
db dummyf_3a81b; // 3a50:031b
db dummyf_3a81c; // 3a50:031c
db dummyf_3a81d; // 3a50:031d
db dummyf_3a81e; // 3a50:031e
db dummyf_3a81f;
db dummyf_3a820; // 3a50:0320
db dummyf_3a821;
db dummyf_3a822; // 3a50:0322
db dummyf_3a823;
db dummyf_3a824; // 3a50:0324
db dummyf_3a825;
db dummyf_3a826;
db dummyf_3a827;
char af1[4]; // 3a50:0328
db dummyf_3a82c;
db dummyf_3a82d;
db dummyf_3a82e;
char amirage[8]; // 3a50:032f
db dummyf_3a837;
db dummyf_3a838;
db dummyf_3a839;
db dummyf_3a83a; // 3a50:033a
db dummyf_3a83b; // 3a50:033b
db dummyf_3a83c; // 3a50:033c
db dummyf_3a83d; // 3a50:033d
db dummyf_3a83e; // 3a50:033e
db dummyf_3a83f;
db dummyf_3a840; // 3a50:0340
db dummyf_3a841;
db dummyf_3a842;
db dummyf_3a843;
db dummyf_3a844; // 3a50:0344
db dummyf_3a845;
db dummyf_3a846;
db dummyf_3a847;
char asu27[6]; // 3a50:0348
db dummyf_3a84e;
char aflanker[9]; // 3a50:034f
db dummyf_3a858;
db dummyf_3a859;
db dummyf_3a85a; // 3a50:035a
db dummyf_3a85b; // 3a50:035b
db dummyf_3a85c; // 3a50:035c
db dummyf_3a85d; // 3a50:035d
db dummyf_3a85e; // 3a50:035e
db dummyf_3a85f;
db dummyf_3a860; // 3a50:0360
db dummyf_3a861;
db dummyf_3a862; // 3a50:0362
db dummyf_3a863;
db dummyf_3a864; // 3a50:0364
db dummyf_3a865;
db dummyf_3a866;
db dummyf_3a867;
char ail76_0[6]; // 3a50:0368
db dummyf_3a86e;
char amainstay[10]; // 3a50:036f
db dummyf_3a879[32]; // 3a50:0379
db dummyf_3a899[32]; // 3a50:0399
db dummyf_3a8b9[32]; // 3a50:03b9
db dummyf_3a8d9;
db dummyf_3a8da; // 3a50:03da
db dummyf_3a8db; // 3a50:03db
db dummyf_3a8dc; // 3a50:03dc
db dummyf_3a8dd; // 3a50:03dd
db dummyf_3a8de; // 3a50:03de
db dummyf_3a8df;
db dummyf_3a8e0; // 3a50:03e0
db dummyf_3a8e1; // 3a50:03e1
db dummyf_3a8e2;
db dummyf_3a8e3;
db dummyf_3a8e4; // 3a50:03e4
db dummyf_3a8e5;
db dummyf_3a8e6;
db dummyf_3a8e7;
char aan72[6]; // 3a50:03e8
db dummyf_3a8ee;
char acoaler[8]; // 3a50:03ef
db dummyf_3a8f7[32]; // 3a50:03f7
db dummyf_3a917[32]; // 3a50:0417
db dummyf_3a937[32]; // 3a50:0437
db dummyf_3a957;
db dummyf_3a958;
db dummyf_3a959;
db dummyf_3a95a; // 3a50:045a
db dummyf_3a95b; // 3a50:045b
db dummyf_3a95c; // 3a50:045c
db dummyf_3a95d; // 3a50:045d
db dummyf_3a95e; // 3a50:045e
db dummyf_3a95f;
db dummyf_3a960; // 3a50:0460
db dummyf_3a961; // 3a50:0461
db dummyf_3a962; // 3a50:0462
db dummyf_3a963;
db dummyf_3a964; // 3a50:0464
db dummyf_3a965;
db dummyf_3a966;
db dummyf_3a967;
char af4e[5]; // 3a50:0468
db dummyf_3a96d[32]; // 3a50:046d
db dummyf_3a98d[32]; // 3a50:048d
db dummyf_3a9ad[32]; // 3a50:04ad
db dummyf_3a9cd[32]; // 3a50:04cd
db dummyf_3a9ed;
db dummyf_3a9ee;
db dummyf_3a9ef; // 3a50:04ef
db dummyf_3a9f0; // 3a50:04f0
db dummyf_3a9f1; // 3a50:04f1
db dummyf_3a9f2; // 3a50:04f2
db dummyf_3a9f3; // 3a50:04f3
db dummyf_3a9f4; // 3a50:04f4
db dummyf_3a9f5;
db dummyf_3a9f6;
db dummyf_3a9f7;
db dummyf_3a9f8;
db dummyf_3a9f9;
db dummyf_3a9fa; // 3a50:04fa
db dummyf_3a9fb; // 3a50:04fb
db dummyf_3a9fc; // 3a50:04fc
db dummyf_3a9fd;
db dummyf_3a9fe; // 3a50:04fe
db dummyf_3a9ff;
db dummyf_3aa00; // 3a50:0500
db dummyf_3aa01;
db dummyf_3aa02; // 3a50:0502
db dummyf_3aa03;
db dummyf_3aa04; // 3a50:0504
db dummyf_3aa05;
db dummyf_3aa06;
db dummyf_3aa07;
db dummyf_3aa08; // 3a50:0508
db dummyf_3aa09; // 3a50:0509
db dummyf_3aa0a; // 3a50:050a
dw word_48feb; // 3a50:050b
dw word_48fed; // 3a50:050d
db dummyf_3aa0f[32]; // 3a50:050f
db dummyf_3aa2f[32]; // 3a50:052f
db dummyf_3aa4f[32]; // 3a50:054f
db dummyf_3aa6f;
db dummyf_3aa70; // 3a50:0570
db dummyf_3aa71; // 3a50:0571
db dummyf_3aa72; // 3a50:0572
db dummyf_3aa73; // 3a50:0573
db dummyf_3aa74; // 3a50:0574
db dummyf_3aa75;
db dummyf_3aa76;
db dummyf_3aa77;
db dummyf_3aa78; // 3a50:0578
db dummyf_3aa79;
db dummyf_3aa7a; // 3a50:057a
db dummyf_3aa7b; // 3a50:057b
db dummyf_3aa7c; // 3a50:057c
db dummyf_3aa7d;
db dummyf_3aa7e; // 3a50:057e
db dummyf_3aa7f;
dw word_49060; // 3a50:0580
dw word_49062; // 3a50:0582
db dummyf_3aa84; // 3a50:0584
db dummyf_3aa85; // 3a50:0585
db dummyf_3aa86; // 3a50:0586
db dummyf_3aa87;
dw word_49068; // 3a50:0588
db dummyf_3aa8a; // 3a50:058a
db dummyf_3aa8b;
dw word_4906c; // 3a50:058c
db dummyf_3aa8e; // 3a50:058e
db dummyf_3aa8f;
dw word_49070; // 3a50:0590
db dummyf_3aa92; // 3a50:0592
db byte_49073; // 3a50:0593
db dummyf_3aa94[32]; // 3a50:0594
db dummyf_3aab4[32]; // 3a50:05b4
db dummyf_3aad4[32]; // 3a50:05d4
db dummyf_3aaf4[32]; // 3a50:05f4
db dummyf_3ab14[32]; // 3a50:0614
db dummyf_3ab34[32]; // 3a50:0634
db dummyf_3ab54[32]; // 3a50:0654
db dummyf_3ab74[32]; // 3a50:0674
db dummyf_3ab94[32]; // 3a50:0694
db dummyf_3abb4; // 3a50:06b4
db dummyf_3abb5; // 3a50:06b5
db dummyf_3abb6; // 3a50:06b6
db dummyf_3abb7; // 3a50:06b7
db dummyf_3abb8; // 3a50:06b8
db dummyf_3abb9; // 3a50:06b9
db dummyf_3abba;
db dummyf_3abbb;
db dummyf_3abbc; // 3a50:06bc
db dummyf_3abbd;
db dummyf_3abbe; // 3a50:06be
db dummyf_3abbf; // 3a50:06bf
db dummyf_3abc0; // 3a50:06c0
db dummyf_3abc1;
db dummyf_3abc2; // 3a50:06c2
db dummyf_3abc3;
db dummyf_3abc4; // 3a50:06c4
db dummyf_3abc5;
char aaim9[6]; // 3a50:06c6
db dummyf_3abcc[32]; // 3a50:06cc
db dummyf_3abec[32]; // 3a50:06ec
db dummyf_3ac0c[32]; // 3a50:070c
db dummyf_3ac2c[32]; // 3a50:072c
db dummyf_3ac4c[32]; // 3a50:074c
db dummyf_3ac6c[32]; // 3a50:076c
db dummyf_3ac8c[32]; // 3a50:078c
db dummyf_3acac[32]; // 3a50:07ac
db dummyf_3accc; // 3a50:07cc
db dummyf_3accd; // 3a50:07cd
db dummyf_3acce;
db dummyf_3accf;
db dummyf_3acd0; // 3a50:07d0
db dummyf_3acd1;
db dummyf_3acd2; // 3a50:07d2
db dummyf_3acd3;
db dummyf_3acd4; // 3a50:07d4
db dummyf_3acd5; // 3a50:07d5
db dummyf_3acd6; // 3a50:07d6
db dummyf_3acd7; // 3a50:07d7
db dummyf_3acd8; // 3a50:07d8
db dummyf_3acd9; // 3a50:07d9
db dummyf_3acda;
db dummyf_3acdb;
db dummyf_3acdc;
db dummyf_3acdd;
db dummyf_3acde;
db dummyf_3acdf;
db dummyf_3ace0; // 3a50:07e0
db dummyf_3ace1;
db dummyf_3ace2;
db dummyf_3ace3;
db dummyf_3ace4; // 3a50:07e4
db dummyf_3ace5;
dw word_492c6; // 3a50:07e6
dw word_492c8[2]; // 3a50:07e8
dw word_492cc; // 3a50:07ec
dw word_492ce[3]; // 3a50:07ee
db dummyf_3acf4[14]; // 3a50:07f4
dw word_492e2; // 3a50:0802
dw word_492e4; // 3a50:0804
dw word_492e6; // 3a50:0806
dw word_492e8; // 3a50:0808
dw word_492ea; // 3a50:080a
dw word_492ec; // 3a50:080c
dw word_492ee; // 3a50:080e
db dummyf_3ad10; // 3a50:0810
db dummyf_3ad11;
dw word_492f2; // 3a50:0812
dw word_492f4; // 3a50:0814
char aaim9m[7]; // 3a50:0816
db dummyf_3ad1d[3];
char asidewinder[11]; // 3a50:0820
db dummyf_3ad2b;
db dummyf_3ad2c; // 3a50:082c
db dummyf_3ad2d[1];
db dummyf_3ad2e[2]; // 3a50:082e
char aaim120[8]; // 3a50:0830
db dummyf_3ad38[2]; // 3a50:0838
char aamraam[8]; // 3a50:083a
db dummyf_3ad42[8]; // 3a50:0842
char aagm88a[8]; // 3a50:084a
db dummyf_3ad52[2];
char aharm[5]; // 3a50:0854
db dummyf_3ad59[7];
db dummyf_3ad60[4]; // 3a50:0860
char aaim7m[7]; // 3a50:0864
db dummyf_3ad6b[3]; // 3a50:086b
char asparrow[8]; // 3a50:086e
db dummyf_3ad76[8]; // 3a50:0876
char aagm86a[8]; // 3a50:087e
db dummyf_3ad86[2];
char aharpoon[8]; // 3a50:0888
db dummyf_3ad90[8]; // 3a50:0890
char aagm65d[8]; // 3a50:0898
db dummyf_3ada0[2]; // 3a50:08a0
char amaverick[9]; // 3a50:08a2
db dummyf_3adab[7]; // 3a50:08ab
char agbu12[7]; // 3a50:08b2
db dummyf_3adb9[3];
char apaveway[8]; // 3a50:08bc
db dummyf_3adc4[4];
db dummyf_3adc8[4]; // 3a50:08c8
char amk20[6]; // 3a50:08cc
db dummyf_3add2[4]; // 3a50:08d2
char arockeye[8]; // 3a50:08d6
db dummyf_3adde[8]; // 3a50:08de
char adndl[5]; // 3a50:08e6
db dummyf_3adeb[5];
char adurandal[9]; // 3a50:08f0
db dummyf_3adf9[3];
db dummyf_3adfc[4]; // 3a50:08fc
char amk820[8]; // 3a50:0900
db dummyf_3ae08[2]; // 3a50:0908
char aslick[6]; // 3a50:090a
db dummyf_3ae10[10]; // 3a50:0910
char amk821[8]; // 3a50:091a
db dummyf_3ae22[2];
char asnakeye[8]; // 3a50:0924
db dummyf_3ae2c[4];
db dummyf_3ae30[4]; // 3a50:0930
char amk20_0[6]; // 3a50:0934
db dummyf_3ae3a[4]; // 3a50:093a
char arockeyeii[11]; // 3a50:093e
db dummyf_3ae49[1];
db dummyf_3ae4a[4]; // 3a50:094a
char amk122[7]; // 3a50:094e
db dummyf_3ae55[3];
char afireeye[8]; // 3a50:0958
db dummyf_3ae60[8]; // 3a50:0960
char acbu72[7]; // 3a50:0968
db dummyf_3ae6f[3]; // 3a50:096f
char afuelair[9]; // 3a50:0972
db dummyf_3ae7b[7]; // 3a50:097b
char amk35[6]; // 3a50:0982
db dummyf_3ae88[4]; // 3a50:0988
char aincluster[11]; // 3a50:098c
db dummyf_3ae97[1];
db dummyf_3ae98[4]; // 3a50:0998
char aiscb1[8]; // 3a50:099c
db dummyf_3aea4[2]; // 3a50:09a4
char aminelets[9]; // 3a50:09a6
db dummyf_3aeaf[7]; // 3a50:09af
char a135mm[7]; // 3a50:09b6
db dummyf_3aebd[3];
char acamera[7]; // 3a50:09c0
db dummyf_3aec7[9]; // 3a50:09c7
char a1900lbs[8]; // 3a50:09d0
db dummyf_3aed8[2]; // 3a50:09d8
char aextrafuel[11]; // 3a50:09da
db dummyf_3aee5[1];
db dummyf_3aee6[4]; // 3a50:09e6
char a20mm[6]; // 3a50:09ea
db dummyf_3aef0[4]; // 3a50:09f0
char aguns[5]; // 3a50:09f4
db dummyf_3aef9[11]; // 3a50:09f9
char aspecial[8]; // 3a50:0a04
db dummyf_3af0c[2]; // 3a50:0a0c
char aequip[6]; // 3a50:0a0e
db dummyf_3af14[74]; // 3a50:0a14
db dummyf_3af5e[15]; // 3a50:0a14
db dummyf_3af6d[14]; // 3a50:0a14
db dummyf_3af7b[12]; // 3a50:0a14
db dummyf_3af87[19]; // 3a50:0a14
db dummyf_3af9a[14]; // 3a50:0a14
db dummyf_3afa8[16]; // 3a50:0a14
db dummyf_3afb8[15]; // 3a50:0a14
db dummyf_3afc7[16]; // 3a50:0a14
db dummyf_3afd7[14]; // 3a50:0a14
db dummyf_3afe5[39]; // 3a50:0a14
db dummyf_3b00c[22]; // 3a50:0a14
dw word_49602; // 3a50:0b22
dw word_49604; // 3a50:0b24
db dummyf_3b026;
db dummyf_3b027;
db dummyf_3b028;
db dummyf_3b029;
dw word_4960a[52]; // 3a50:0b2a
dw word_49672; // 3a50:0b92
db dummyf_3b094[32]; // 3a50:0b94
db dummyf_3b0b4[32]; // 3a50:0bb4
db dummyf_3b0d4[32]; // 3a50:0bd4
db dummyf_3b0f4[32]; // 3a50:0bf4
db dummyf_3b114[32]; // 3a50:0c14
db dummyf_3b134[32]; // 3a50:0c34
db dummyf_3b154[32]; // 3a50:0c54
db dummyf_3b174[32]; // 3a50:0c74
db dummyf_3b194[32]; // 3a50:0c94
db dummyf_3b1b4[32]; // 3a50:0cb4
db dummyf_3b1d4[32]; // 3a50:0cd4
db dummyf_3b1f4[32]; // 3a50:0cf4
db dummyf_3b214[32]; // 3a50:0d14
db dummyf_3b234[32]; // 3a50:0d34
db dummyf_3b254[32]; // 3a50:0d54
db dummyf_3b274[32]; // 3a50:0d74
db dummyf_3b294[32]; // 3a50:0d94
db dummyf_3b2b4[32]; // 3a50:0db4
db dummyf_3b2d4[32]; // 3a50:0dd4
db dummyf_3b2f4[32]; // 3a50:0df4
db dummyf_3b314[32]; // 3a50:0e14
dw word_49914; // 3a50:0e34
dw word_49916; // 3a50:0e36
dw word_49918; // 3a50:0e38
dw word_4991a; // 3a50:0e3a
dw word_4991c; // 3a50:0e3c
dw _unk_4991e; // 3a50:0e3e
dw word_49920; // 3a50:0e40
dw word_49922; // 3a50:0e42
dw word_49924; // 3a50:0e44
dw word_49926; // 3a50:0e46
dw word_49928; // 3a50:0e48
dw word_4992a; // 3a50:0e4a
dw word_4992c; // 3a50:0e4c
dw word_4992e; // 3a50:0e4e
dw word_49930; // 3a50:0e50
dw word_49932; // 3a50:0e52
dw word_49934; // 3a50:0e54
dw word_49936; // 3a50:0e56
dw word_49938; // 3a50:0e58
dw word_4993a; // 3a50:0e5a
dw word_4993c; // 3a50:0e5c
dw word_4993e; // 3a50:0e5e
dw word_49940; // 3a50:0e60
dw word_49942; // 3a50:0e62
dw word_49944; // 3a50:0e64
char astoresexhauste[17]; // 3a50:0e66
char aflare[6]; // 3a50:0e77
char achaff[6]; // 3a50:0e7d
char areleased[10]; // 3a50:0e83
db dummyf_3b38d; // 3a50:0e8d
db dummyf_3b38e;
char agun[5]; // 3a50:0e8f
char dummyf_3b394[2]; // 3a50:0e94
db dummyf_3b396; // 3a50:0e96
db dummyf_3b397;
db as; // 3a50:0e98
db dummyf_3b399;
dw word_4997a; // 3a50:0e9a
char aonpatrol[11]; // 3a50:0e9c
char af15strikeeagle[17]; // 3a50:0ea7
char aat[5]; // 3a50:0eb8
db dummyf_3b3bd;
db dummyf_3b3be[420];
db dummyf_3b562;
db dummyf_3b563;
db dummyf_3b564;
db dummyf_3b565;
db dummyf_3b566;
db dummyf_3b567;
db dummyf_3b568;
db dummyf_3b569;
db dummyf_3b56a;
db dummyf_3b56b;
db dummyf_3b56c;
db dummyf_3b56d;
db dummyf_3b56e;
db dummyf_3b56f;
db dummyf_3b570;
db dummyf_3b571;
db dummyf_3b572;
db dummyf_3b573;
db dummyf_3b574;
db dummyf_3b575;
db dummyf_3b576;
db dummyf_3b577;
db dummyf_3b578;
db dummyf_3b579;
db dummyf_3b57a;
db dummyf_3b57b;
db dummyf_3b57c;
db dummyf_3b57d;
db dummyf_3b57e;
db dummyf_3b57f;
db dummyf_3b580[30];
db dummyf_3b59e;
db dummyf_3b59f;
db dummyf_3b5a0;
db dummyf_3b5a1;
db dummyf_3b5a2;
db dummyf_3b5a3;
db dummyf_3b5a4;
db dummyf_3b5a5;
db dummyf_3b5a6;
db dummyf_3b5a7;
db dummyf_3b5a8;
db dummyf_3b5a9;
db dummyf_3b5aa;
db dummyf_3b5ab;
db dummyf_3b5ac;
db dummyf_3b5ad;
db dummyf_3b5ae;
db dummyf_3b5af;
db dummyf_3b5b0;
db dummyf_3b5b1;
db dummyf_3b5b2[50];
db dummyf_3b5e4;
db dummyf_3b5e5;
db dummyf_3b5e6;
db dummyf_3b5e7;
db dummyf_3b5e8;
db dummyf_3b5e9;
db dummyf_3b5ea;
db dummyf_3b5eb;
db dummyf_3b5ec; // 3a50:10ec
db dummyf_3b5ed;
db dummyf_3b5ee; // 3a50:10ee
db dummyf_3b5ef;
db dummyf_3b5f0;
db dummyf_3b5f1;
db dummyf_3b5f2;
db dummyf_3b5f3;
db dummyf_3b5f4;
db dummyf_3b5f5;
db dummyf_3b5f6; // 3a50:10f6
db dummyf_3b5f7;
db dummyf_3b5f8;
db dummyf_3b5f9;
db dummyf_3b5fa; // 3a50:10fa
db dummyf_3b5fb;
db dummyf_3b5fc;
db dummyf_3b5fd;
db dummyf_3b5fe; // 3a50:10fe
db dummyf_3b5ff; // 3a50:10ff
dw word_49be0; // 3a50:1100
db byte_49be2[15]; // 3a50:1102
db dummyf_3b611[12]; // 3a50:1102
db dummyf_3b61d[16]; // 3a50:1102
db dummyf_3b62d[23]; // 3a50:1102
db dummyf_3b644[12]; // 3a50:1102
db dummyf_3b650[15]; // 3a50:1102
db dummyf_3b65f[17]; // 3a50:1102
db dummyf_3b670[21]; // 3a50:1102
db dummyf_3b685[17]; // 3a50:1102
db dummyf_3b696[12]; // 3a50:1102
db dummyf_3b6a2[12]; // 3a50:1102
db dummyf_3b6ae[14]; // 3a50:1102
db dummyf_3b6bc[14]; // 3a50:1102
db dummyf_3b6ca[16]; // 3a50:1102
db dummyf_3b6da[14]; // 3a50:1102
db dummyf_3b6e8[13]; // 3a50:1102
db dummyf_3b6f5[15]; // 3a50:1102
db dummyf_3b704[13]; // 3a50:1102
db dummyf_3b711[18]; // 3a50:1102
db dummyf_3b723[24]; // 3a50:1102
db dummyf_3b73b[13]; // 3a50:1102
db dummyf_3b748[12]; // 3a50:1102
db dummyf_3b754[12]; // 3a50:1102
db dummyf_3b760[11]; // 3a50:1102
db dummyf_3b76b[11]; // 3a50:1102
db dummyf_3b776[11]; // 3a50:1102
db dummyf_3b781[10]; // 3a50:1102
db dummyf_3b78b[27]; // 3a50:1102
db dummyf_3b7a6[10]; // 3a50:1102
db dummyf_3b7b0[10]; // 3a50:1102
db dummyf_3b7ba[15]; // 3a50:1102
db dummyf_3b7c9[11]; // 3a50:1102
db dummyf_3b7d4[16]; // 3a50:1102
db dummyf_3b7e4[16]; // 3a50:1102
db dummyf_3b7f4[8]; // 3a50:1102
dw word_49ddc; // 3a50:12fc
db dummyf_3b7fe;
db dummyf_3b7ff; // 3a50:12ff
db dummyf_3b800;
db dummyf_3b801; // 3a50:1301
db dummyf_3b802; // 3a50:1302
db dummyf_3b803;
db dummyf_3b804; // 3a50:1304
db dummyf_3b805;
db dummyf_3b806; // 3a50:1306
db dummyf_3b807;
dw word_49de8[101]; // 3a50:1308
dw word_49eb2; // 3a50:13d2
dw word_49eb4[198]; // 3a50:13d4
dw word_4a040; // 3a50:1560
dw word_4a042; // 3a50:1562
dw word_4a044; // 3a50:1564
dw word_4a046; // 3a50:1566
dw word_4a048[15]; // 3a50:1568
dw dummyf_3ba86[8]; // 3a50:1568
dw dummyf_3ba96[9]; // 3a50:1568
dw dummyf_3baa8[10]; // 3a50:1568
dw dummyf_3babc[8]; // 3a50:1568
dw dummyf_3bacc[15]; // 3a50:1568
dw dummyf_3baea[15]; // 3a50:1568
dw dummyf_3bb08[8]; // 3a50:1568
dw dummyf_3bb18[15]; // 3a50:1568
dw dummyf_3bb36[8]; // 3a50:1568
dw dummyf_3bb46[8]; // 3a50:1568
dw dummyf_3bb56[19]; // 3a50:1568
dw dummyf_3bb7c[8]; // 3a50:1568
dw dummyf_3bb8c[15]; // 3a50:1568
dw dummyf_3bbaa[15]; // 3a50:1568
dw dummyf_3bbc8[8]; // 3a50:1568
dw dummyf_3bbd8[8]; // 3a50:1568
dw dummyf_3bbe8[9]; // 3a50:1568
dw dummyf_3bbfa[8]; // 3a50:1568
dw dummyf_3bc0a[12]; // 3a50:1568
dw dummyf_3bc22[8]; // 3a50:1568
dw dummyf_3bc32[9]; // 3a50:1568
dw dummyf_3bc44[8]; // 3a50:1568
dw dummyf_3bc54[10]; // 3a50:1568
dw dummyf_3bc68; // 3a50:1568
dw word_4a24a[2]; // 3a50:176a
char a3d3[5]; // 3a50:176e
char arb[3]; // 3a50:1773
char aopenerroron3d3[20]; // 3a50:1776
char abadobjfileform[21]; // 3a50:178a
char aobjectdatatoob[21]; // 3a50:179f
char arb_0[3]; // 3a50:17b4
char aphoto3d3[10]; // 3a50:17b7
char apleaseinsertf1[25]; // 3a50:17c1
char arb_1[3]; // 3a50:17da
char aphoto3d3_0[10]; // 3a50:17dd
char aobjdataoverflo[17]; // 3a50:17e7
char a3dt[5]; // 3a50:17f8
char arb_2[3]; // 3a50:17fd
char aopenerroron3dt[20]; // 3a50:1800
char abadtilefilefor[22]; // 3a50:1814
char atoomanytiles[16]; // 3a50:182a
char atoomuchtiledat[19]; // 3a50:183a
char a3dg[5]; // 3a50:184d
char arb_3[3]; // 3a50:1852
char apleaseinsertsc[28]; // 3a50:1855
char apressakeywhenr[25]; // 3a50:1871
char abadgridfilefor[22]; // 3a50:188a
dw word_4a380; // 3a50:18a0
dw word_4a382[2]; // 3a50:18a2
dw word_4a386; // 3a50:18a6
dw word_4a388; // 3a50:18a8
dw word_4a38a; // 3a50:18aa
dw word_4a38c; // 3a50:18ac
dw word_4a38e; // 3a50:18ae
dw word_4a390; // 3a50:18b0
dw word_4a392; // 3a50:18b2
dw word_4a394; // 3a50:18b4
dw word_4a396; // 3a50:18b6
dw word_4a398; // 3a50:18b8
dw word_4a39a; // 3a50:18ba
dw word_4a39c; // 3a50:18bc
db byte_4a39e; // 3a50:18be
db byte_4a39f; // 3a50:18bf
db byte_4a3a0; // 3a50:18c0
dw word_4a3a1; // 3a50:18c1
dw word_4a3a3; // 3a50:18c3
dw word_4a3a5; // 3a50:18c5
dw word_4a3a7; // 3a50:18c7
dw word_4a3a9; // 3a50:18c9
dw word_4a3ab; // 3a50:18cb
dw word_4a3ad; // 3a50:18cd
dw word_4a3af; // 3a50:18cf
db dummyf_3bdd1;
db dummyf_3bdd2; // 3a50:18d2
db dummyf_3bdd3;
db dummyf_3bdd4;
db dummyf_3bdd5;
db dummyf_3bdd6; // 3a50:18d6
db dummyf_3bdd7;
db dummyf_3bdd8; // 3a50:18d8
db dummyf_3bdd9;
db dummyf_3bdda; // 3a50:18da
db dummyf_3bddb;
db dummyf_3bddc; // 3a50:18dc
db dummyf_3bddd;
db dummyf_3bdde; // 3a50:18de
db dummyf_3bddf;
dw word_4a3c0; // 3a50:18e0
dw word_4a3c2; // 3a50:18e2
dw word_4a3c4; // 3a50:18e4
db byte_4a3c6; // 3a50:18e6
db byte_4a3c7; // 3a50:18e7
dw word_4a3c8; // 3a50:18e8
db byte_4a3ca[5]; // 3a50:18ea
db byte_4a3cf[14]; // 3a50:18ef
db dummyf_3bdfd[7]; // 3a50:18ef
dw word_4a3e4; // 3a50:1904
dw word_4a3e6; // 3a50:1906
dw word_4a3e8; // 3a50:1908
dw word_4a3ea; // 3a50:190a
dw word_4a3ec[13]; // 3a50:190c
dw dummyf_3be26[9]; // 3a50:190c
dw dummyf_3be38[10]; // 3a50:190c
dw dummyf_3be4c[10]; // 3a50:190c
dw dummyf_3be60[10]; // 3a50:190c
dw dummyf_3be74[9]; // 3a50:190c
dw dummyf_3be86[3]; // 3a50:190c
dd dword_4a46c; // 3a50:198c
dw word_4a470; // 3a50:1990
dw word_4a472; // 3a50:1992
dw word_4a474; // 3a50:1994
dw word_4a476; // 3a50:1996
dw word_4a478; // 3a50:1998
dw word_4a47a; // 3a50:199a
dw word_4a47c; // 3a50:199c
dw word_4a47e; // 3a50:199e
dw word_4a480; // 3a50:19a0
dw word_4a482; // 3a50:19a2
dw word_4a484; // 3a50:19a4
dw word_4a486; // 3a50:19a6
db byte_4a488[8]; // 3a50:19a8
dw word_4a490; // 3a50:19b0
dw word_4a492; // 3a50:19b2
dw word_4a494; // 3a50:19b4
dw word_4a496; // 3a50:19b6
dw word_4a498; // 3a50:19b8
dw word_4a49a; // 3a50:19ba
dw word_4a49c; // 3a50:19bc
dw word_4a49e; // 3a50:19be
dw word_4a4a0; // 3a50:19c0
dw word_4a4a2; // 3a50:19c2
dw word_4a4a4; // 3a50:19c4
dw word_4a4a6; // 3a50:19c6
dw word_4a4a8; // 3a50:19c8
dw word_4a4aa; // 3a50:19ca
dw word_4a4ac; // 3a50:19cc
dw word_4a4ae; // 3a50:19ce
dw word_4a4b0; // 3a50:19d0
dw word_4a4b2; // 3a50:19d2
dw word_4a4b4; // 3a50:19d4
dw word_4a4b6; // 3a50:19d6
dw word_4a4b8; // 3a50:19d8
dw word_4a4ba; // 3a50:19da
dw word_4a4bc; // 3a50:19dc
dw word_4a4be; // 3a50:19de
dw word_4a4c0; // 3a50:19e0
dw word_4a4c2; // 3a50:19e2
dw word_4a4c4; // 3a50:19e4
dw word_4a4c6; // 3a50:19e6
dw word_4a4c8; // 3a50:19e8
dw word_4a4ca; // 3a50:19ea
dw word_4a4cc; // 3a50:19ec
dw word_4a4ce; // 3a50:19ee
dw word_4a4d0; // 3a50:19f0
dw word_4a4d2; // 3a50:19f2
dw word_4a4d4; // 3a50:19f4
dw word_4a4d6; // 3a50:19f6
dw word_4a4d8; // 3a50:19f8
dw word_4a4da; // 3a50:19fa
dw word_4a4dc; // 3a50:19fc
dw word_4a4de; // 3a50:19fe
dw word_4a4e0[2]; // 3a50:1a00
db byte_4a4e4[2]; // 3a50:1a04
dw word_4a4e6; // 3a50:1a06
dw word_4a4e8; // 3a50:1a08
dw word_4a4ea; // 3a50:1a0a
dw word_4a4ec; // 3a50:1a0c
dw word_4a4ee[239]; // 3a50:1a0e
dw word_4a6cc; // 3a50:1bec
dw word_4a6ce; // 3a50:1bee
dw word_4a6d0; // 3a50:1bf0
dw word_4a6d2[239]; // 3a50:1bf2
dw word_4a8b0; // 3a50:1dd0
dw word_4a8b2; // 3a50:1dd2
dw word_4a8b4; // 3a50:1dd4
dw word_4a8b6[239]; // 3a50:1dd6
dw word_4aa94; // 3a50:1fb4
dw word_4aa96; // 3a50:1fb6
dw word_4aa98[240]; // 3a50:1fb8
dw word_4ac78[2]; // 3a50:2198
dw word_4ac7c[240]; // 3a50:219c
dw word_4ae5c[1894]; // 3a50:237c
dw _unk_4bd28[1340]; // 3a50:3248
db unk_4c7a0; // 3e1c:0000
db dummyf_3e1c1[32]; // 3e1c:0001
db dummyf_3e1e1[32]; // 3e1c:0021
db dummyf_3e201[32]; // 3e1c:0041
db dummyf_3e221[32]; // 3e1c:0061
db dummyf_3e241[32]; // 3e1c:0081
db dummyf_3e261[32]; // 3e1c:00a1
db dummyf_3e281[32]; // 3e1c:00c1
db dummyf_3e2a1[32]; // 3e1c:00e1
db dummyf_3e2c1[32]; // 3e1c:0101
db dummyf_3e2e1[32]; // 3e1c:0121
db dummyf_3e301[32]; // 3e1c:0141
db dummyf_3e321[32]; // 3e1c:0161
db dummyf_3e341[32]; // 3e1c:0181
db dummyf_3e361[32]; // 3e1c:01a1
db dummyf_3e381[32]; // 3e1c:01c1
db dummyf_3e3a1[32]; // 3e1c:01e1
db dummyf_3e3c1[32]; // 3e1c:0201
db dummyf_3e3e1[32]; // 3e1c:0221
db dummyf_3e401[32]; // 3e1c:0241
db dummyf_3e421[32]; // 3e1c:0261
db dummyf_3e441[32]; // 3e1c:0281
db dummyf_3e461[32]; // 3e1c:02a1
db dummyf_3e481[32]; // 3e1c:02c1
db dummyf_3e4a1[32]; // 3e1c:02e1
db dummyf_3e4c1[32]; // 3e1c:0301
db dummyf_3e4e1[32]; // 3e1c:0321
db dummyf_3e501[32]; // 3e1c:0341
db dummyf_3e521[32]; // 3e1c:0361
db dummyf_3e541[32]; // 3e1c:0381
db dummyf_3e561[32]; // 3e1c:03a1
db dummyf_3e581[32]; // 3e1c:03c1
db dummyf_3e5a1[32]; // 3e1c:03e1
db dummyf_3e5c1[32]; // 3e1c:0401
db dummyf_3e5e1[32]; // 3e1c:0421
db dummyf_3e601[32]; // 3e1c:0441
db dummyf_3e621[32]; // 3e1c:0461
db dummyf_3e641[32]; // 3e1c:0481
db dummyf_3e661[32]; // 3e1c:04a1
db dummyf_3e681[32]; // 3e1c:04c1
db dummyf_3e6a1[32]; // 3e1c:04e1
db dummyf_3e6c1[32]; // 3e1c:0501
db dummyf_3e6e1[32]; // 3e1c:0521
db dummyf_3e701[32]; // 3e1c:0541
db dummyf_3e721[32]; // 3e1c:0561
db dummyf_3e741[32]; // 3e1c:0581
db dummyf_3e761[32]; // 3e1c:05a1
db dummyf_3e781[32]; // 3e1c:05c1
db dummyf_3e7a1[32]; // 3e1c:05e1
db dummyf_3e7c1;
db dummyf_3e7c2;
db dummyf_3e7c3;
db dummyf_3e7c4;
db dummyf_3e7c5;
db dummyf_3e7c6;
db dummyf_3e7c7;
db dummyf_3e7c8;
db dummyf_3e7c9;
db dummyf_3e7ca;
db dummyf_3e7cb;
db dummyf_3e7cc;
db dummyf_3e7cd;
dw word_4cdae; // 3e1c:060e
dw word_4cdb0; // 3e1c:0610
dw word_4cdb2; // 3e1c:0612
dw word_4cdb4; // 3e1c:0614
dw word_4cdb6; // 3e1c:0616
db byte_4cdb8; // 3e1c:0618
dw word_4cdb9; // 3e1c:0619
dw word_4cdbb; // 3e1c:061b
db dummyf_3e7dd[32]; // 3e1c:061d
db dummyf_3e7fd; // 3e1c:063d
db byte_4cdde; // 3e1c:063e
db dummyf_3e7ff[32]; // 3e1c:063f
db dummyf_3e81f[32]; // 3e1c:065f
db dummyf_3e83f[32]; // 3e1c:067f
db dummyf_3e85f;
dw word_4ce40; // 3e1c:06a0
dw word_4ce42; // 3e1c:06a2
dw word_4ce44; // 3e1c:06a4
db byte_4ce46; // 3e1c:06a6
db byte_4ce47; // 3e1c:06a7
db byte_4ce48; // 3e1c:06a8
dw word_4ce49; // 3e1c:06a9
dw word_4ce4b; // 3e1c:06ab
dw word_4ce4d; // 3e1c:06ad
dw word_4ce4f; // 3e1c:06af
dw word_4ce51; // 3e1c:06b1
dw word_4ce53; // 3e1c:06b3
dw word_4ce55; // 3e1c:06b5
dw word_4ce57; // 3e1c:06b7
db dummyf_3e879;
db dummyf_3e87a;
db dummyf_3e87b;
db dummyf_3e87c;
db dummyf_3e87d;
db dummyf_3e87e;
db dummyf_3e87f;
db dummyf_3e880;
db byte_4ce61; // 3e1c:06c1
db byte_4ce62; // 3e1c:06c2
dw word_4ce63; // 3e1c:06c3
db dummyf_3e885[32]; // 3e1c:06c5
db dummyf_3e8a5[32]; // 3e1c:06e5
db dummyf_3e8c5[32]; // 3e1c:0705
db dummyf_3e8e5[32]; // 3e1c:0725
db dummyf_3e905[32]; // 3e1c:0745
db dummyf_3e925[32]; // 3e1c:0765
db dummyf_3e945[32]; // 3e1c:0785
db dummyf_3e965[32]; // 3e1c:07a5
db dummyf_3e985[32]; // 3e1c:07c5
db dummyf_3e9a5[32]; // 3e1c:07e5
db dummyf_3e9c5[32]; // 3e1c:0805
db dummyf_3e9e5[32]; // 3e1c:0825
db dummyf_3ea05[32]; // 3e1c:0845
db dummyf_3ea25[32]; // 3e1c:0865
db dummyf_3ea45[32]; // 3e1c:0885
db dummyf_3ea65[32]; // 3e1c:08a5
db dummyf_3ea85[32]; // 3e1c:08c5
db dummyf_3eaa5[32]; // 3e1c:08e5
db dummyf_3eac5[32]; // 3e1c:0905
db dummyf_3eae5[32]; // 3e1c:0925
db dummyf_3eb05[32]; // 3e1c:0945
db dummyf_3eb25[32]; // 3e1c:0965
db dummyf_3eb45[32]; // 3e1c:0985
db dummyf_3eb65[32]; // 3e1c:09a5
db dummyf_3eb85[32]; // 3e1c:09c5
db dummyf_3eba5[32]; // 3e1c:09e5
db dummyf_3ebc5[32]; // 3e1c:0a05
db dummyf_3ebe5[32]; // 3e1c:0a25
db dummyf_3ec05[32]; // 3e1c:0a45
db dummyf_3ec25[32]; // 3e1c:0a65
db dummyf_3ec45[32]; // 3e1c:0a85
db dummyf_3ec65[32]; // 3e1c:0aa5
db dummyf_3ec85[32]; // 3e1c:0ac5
db dummyf_3eca5[32]; // 3e1c:0ae5
db dummyf_3ecc5[32]; // 3e1c:0b05
db dummyf_3ece5[32]; // 3e1c:0b25
db dummyf_3ed05[32]; // 3e1c:0b45
db dummyf_3ed25[32]; // 3e1c:0b65
db dummyf_3ed45[32]; // 3e1c:0b85
db dummyf_3ed65[32]; // 3e1c:0ba5
db dummyf_3ed85[32]; // 3e1c:0bc5
db dummyf_3eda5[32]; // 3e1c:0be5
db dummyf_3edc5[32]; // 3e1c:0c05
db dummyf_3ede5[32]; // 3e1c:0c25
db dummyf_3ee05[32]; // 3e1c:0c45
db dummyf_3ee25[32]; // 3e1c:0c65
db dummyf_3ee45[32]; // 3e1c:0c85
db dummyf_3ee65[32]; // 3e1c:0ca5
db dummyf_3ee85[32]; // 3e1c:0cc5
db dummyf_3eea5[32]; // 3e1c:0ce5
db dummyf_3eec5[32]; // 3e1c:0d05
db dummyf_3eee5[32]; // 3e1c:0d25
db dummyf_3ef05[32]; // 3e1c:0d45
db dummyf_3ef25[32]; // 3e1c:0d65
db dummyf_3ef45[32]; // 3e1c:0d85
db dummyf_3ef65[32]; // 3e1c:0da5
db dummyf_3ef85[32]; // 3e1c:0dc5
db dummyf_3efa5[32]; // 3e1c:0de5
db dummyf_3efc5[32]; // 3e1c:0e05
db dummyf_3efe5[32]; // 3e1c:0e25
db dummyf_3f005[32]; // 3e1c:0e45
db dummyf_3f025[32]; // 3e1c:0e65
db dummyf_3f045[32]; // 3e1c:0e85
db dummyf_3f065[32]; // 3e1c:0ea5
db dummyf_3f085[32]; // 3e1c:0ec5
db dummyf_3f0a5[32]; // 3e1c:0ee5
db dummyf_3f0c5[32]; // 3e1c:0f05
db dummyf_3f0e5[32]; // 3e1c:0f25
db dummyf_3f105[32]; // 3e1c:0f45
db dummyf_3f125[32]; // 3e1c:0f65
db dummyf_3f145[32]; // 3e1c:0f85
db dummyf_3f165[32]; // 3e1c:0fa5
db dummyf_3f185; // 3e1c:0fc5
db dummyf_3f186; // 3e1c:0fc6
db dummyf_3f187; // 3e1c:0fc7
db dummyf_3f188; // 3e1c:0fc8
db dummyf_3f189; // 3e1c:0fc9
db dummyf_3f18a; // 3e1c:0fca
db dummyf_3f18b; // 3e1c:0fcb
db dummyf_3f18c; // 3e1c:0fcc
db dummyf_3f18d; // 3e1c:0fcd
db dummyf_3f18e; // 3e1c:0fce
db dummyf_3f18f; // 3e1c:0fcf
db dummyf_3f190; // 3e1c:0fd0
db dummyf_3f191; // 3e1c:0fd1
db dummyf_3f192; // 3e1c:0fd2
db dummyf_3f193; // 3e1c:0fd3
db dummyf_3f194; // 3e1c:0fd4
db dummyf_3f195; // 3e1c:0fd5
db dummyf_3f196; // 3e1c:0fd6
db dummyf_3f197; // 3e1c:0fd7
db dummyf_3f198;
db dummyf_3f199;
db dummyf_3f19a;
db dummyf_3f19b;
db dummyf_3f19c;
db dummyf_3f19d;
db byte_4d77e; // 3e1c:0fde
dw word_4d77f; // 3e1c:0fdf
dw word_4d781; // 3e1c:0fe1
dw word_4d783; // 3e1c:0fe3
dw word_4d785; // 3e1c:0fe5
dw word_4d787; // 3e1c:0fe7
dw word_4d789; // 3e1c:0fe9
db dummyf_3f1ab;
db dummyf_3f1ac;
dw word_4d78d; // 3e1c:0fed
dw word_4d78f; // 3e1c:0fef
dw word_4d791; // 3e1c:0ff1
dw word_4d793; // 3e1c:0ff3
db unk_4d795; // 3e1c:0ff5
db dummyf_3f1b6[32]; // 3e1c:0ff6
db dummyf_3f1d6[32]; // 3e1c:1016
db dummyf_3f1f6[32]; // 3e1c:1036
db dummyf_3f216[32]; // 3e1c:1056
db dummyf_3f236[32]; // 3e1c:1076
db dummyf_3f256[32]; // 3e1c:1096
db dummyf_3f276[32]; // 3e1c:10b6
db dummyf_3f296[32]; // 3e1c:10d6
db dummyf_3f2b6[32]; // 3e1c:10f6
db dummyf_3f2d6[32]; // 3e1c:1116
db dummyf_3f2f6[32]; // 3e1c:1136
db dummyf_3f316[32]; // 3e1c:1156
db dummyf_3f336[32]; // 3e1c:1176
db dummyf_3f356; // 3e1c:1196
db dummyf_3f357; // 3e1c:1197
db dummyf_3f358; // 3e1c:1198
db dummyf_3f359; // 3e1c:1199
db dummyf_3f35a; // 3e1c:119a
db dummyf_3f35b; // 3e1c:119b
db dummyf_3f35c; // 3e1c:119c
db dummyf_3f35d; // 3e1c:119d
db dummyf_3f35e; // 3e1c:119e
db dummyf_3f35f; // 3e1c:119f
db dummyf_3f360; // 3e1c:11a0
db dummyf_3f361; // 3e1c:11a1
db dummyf_3f362; // 3e1c:11a2
db dummyf_3f363; // 3e1c:11a3
db dummyf_3f364; // 3e1c:11a4
db dummyf_3f365; // 3e1c:11a5
db dummyf_3f366; // 3e1c:11a6
db dummyf_3f367; // 3e1c:11a7
db dummyf_3f368; // 3e1c:11a8
db dummyf_3f369; // 3e1c:11a9
db dummyf_3f36a; // 3e1c:11aa
db dummyf_3f36b; // 3e1c:11ab
db dummyf_3f36c; // 3e1c:11ac
db unk_4d94d; // 3e1c:11ad
db dummyf_3f36e[32]; // 3e1c:11ae
db dummyf_3f38e[32]; // 3e1c:11ce
db dummyf_3f3ae[32]; // 3e1c:11ee
db dummyf_3f3ce[32]; // 3e1c:120e
db dummyf_3f3ee[32]; // 3e1c:122e
db dummyf_3f40e[32]; // 3e1c:124e
db dummyf_3f42e[32]; // 3e1c:126e
db dummyf_3f44e[32]; // 3e1c:128e
db dummyf_3f46e[32]; // 3e1c:12ae
db dummyf_3f48e[32]; // 3e1c:12ce
db dummyf_3f4ae[32]; // 3e1c:12ee
db dummyf_3f4ce[32]; // 3e1c:130e
db dummyf_3f4ee[32]; // 3e1c:132e
db dummyf_3f50e;
db dummyf_3f50f;
db dummyf_3f510;
db dummyf_3f511;
db dummyf_3f512;
db dummyf_3f513;
db dummyf_3f514;
db dummyf_3f515;
db dummyf_3f516;
db dummyf_3f517;
db dummyf_3f518;
db dummyf_3f519;
db dummyf_3f51a;
db dummyf_3f51b;
db dummyf_3f51c;
db dummyf_3f51d;
db dummyf_3f51e;
db dummyf_3f51f;
db dummyf_3f520;
db dummyf_3f521;
db dummyf_3f522;
db dummyf_3f523;
db dummyf_3f524;
dw word_4db05; // 3e1c:1365
dw word_4db07; // 3e1c:1367
dw word_4db09; // 3e1c:1369
dw word_4db0b; // 3e1c:136b
db dummyf_3f52d;
db byte_4db0e; // 3e1c:136e
dw word_4db0f; // 3e1c:136f
dw word_4db11; // 3e1c:1371
dw word_4db13; // 3e1c:1373
dw word_4db15; // 3e1c:1375
db dummyf_3f537;
db byte_4db18; // 3e1c:1378
dw word_4db19; // 3e1c:1379
dw word_4db1b; // 3e1c:137b
db dummyf_3f53d;
db byte_4db1e; // 3e1c:137e
db byte_4db1f; // 3e1c:137f
dw word_4db20; // 3e1c:1380
dw word_4db22; // 3e1c:1382
dw word_4db24; // 3e1c:1384
dw word_4db26; // 3e1c:1386
dw word_4db28; // 3e1c:1388
dw word_4db2a; // 3e1c:138a
db byte_4db2c; // 3e1c:138c
dw word_4db2d; // 3e1c:138d
dw word_4db2f; // 3e1c:138f
dw word_4db31; // 3e1c:1391
db byte_4db33; // 3e1c:1393
dw word_4db34; // 3e1c:1394
dw word_4db36; // 3e1c:1396
db dummyf_3f558;
db dummyf_3f559;
dw word_4db3a; // 3e1c:139a
db byte_4db3c; // 3e1c:139c
db dummyf_3f55d[32]; // 3e1c:139d
db dummyf_3f57d[32]; // 3e1c:13bd
db dummyf_3f59d[32]; // 3e1c:13dd
db dummyf_3f5bd[32]; // 3e1c:13fd
db dummyf_3f5dd[32]; // 3e1c:141d
db dummyf_3f5fd[32]; // 3e1c:143d
db dummyf_3f61d[32]; // 3e1c:145d
db dummyf_3f63d[32]; // 3e1c:147d
db dummyf_3f65d[32]; // 3e1c:149d
db dummyf_3f67d[32]; // 3e1c:14bd
db dummyf_3f69d[32]; // 3e1c:14dd
db dummyf_3f6bd[32]; // 3e1c:14fd
db dummyf_3f6dd[32]; // 3e1c:151d
db dummyf_3f6fd[32]; // 3e1c:153d
db dummyf_3f71d[32]; // 3e1c:155d
db dummyf_3f73d[32]; // 3e1c:157d
db dummyf_3f75d;
db dummyf_3f75e; // 3e1c:159e
db dummyf_3f75f;
db dummyf_3f760; // 3e1c:15a0
db dummyf_3f761;
db dummyf_3f762; // 3e1c:15a2
db dummyf_3f763;
db dummyf_3f764; // 3e1c:15a4
db dummyf_3f765;
db dummyf_3f766; // 3e1c:15a6
db dummyf_3f767;
db dummyf_3f768; // 3e1c:15a8
db dummyf_3f769;
db dummyf_3f76a; // 3e1c:15aa
db dummyf_3f76b;
db dummyf_3f76c; // 3e1c:15ac
db dummyf_3f76d;
db dummyf_3f76e;
db dummyf_3f76f;
db dummyf_3f770;
db dummyf_3f771;
db dummyf_3f772;
db dummyf_3f773;
db dummyf_3f774;
db dummyf_3f775;
dw word_4dd56; // 3e1c:15b6
db dummyf_3f778; // 3e1c:15b8
db dummyf_3f779;
db dummyf_3f77a; // 3e1c:15ba
db dummyf_3f77b;
db dummyf_3f77c;
db dummyf_3f77d;
dw word_4dd5e; // 3e1c:15be
dw word_4dd60; // 3e1c:15c0
dw word_4dd62; // 3e1c:15c2
dw word_4dd64; // 3e1c:15c4
dw word_4dd66; // 3e1c:15c6
db dummyf_3f788;
db dummyf_3f789;
db dummyf_3f78a; // 3e1c:15ca
db dummyf_3f78b; // 3e1c:15cb
dw word_4dd6c; // 3e1c:15cc
db dummyf_3f78e; // 3e1c:15ce
db dummyf_3f78f;
db dummyf_3f790; // 3e1c:15d0
db dummyf_3f791;
db dummyf_3f792;
db dummyf_3f793;
dw word_4dd74; // 3e1c:15d4
dw word_4dd76; // 3e1c:15d6
dw word_4dd78; // 3e1c:15d8
db dummyf_3f79a;
db dummyf_3f79b;
db dummyf_3f79c; // 3e1c:15dc
db dummyf_3f79d;
dw word_4dd7e; // 3e1c:15de
dw word_4dd80; // 3e1c:15e0
dw word_4dd82; // 3e1c:15e2
db dummyf_3f7a4; // 3e1c:15e4
db dummyf_3f7a5;
db dummyf_3f7a6; // 3e1c:15e6
db dummyf_3f7a7;
db dummyf_3f7a8;
db dummyf_3f7a9;
dw word_4dd8a; // 3e1c:15ea
dw word_4dd8c; // 3e1c:15ec
dw word_4dd8e; // 3e1c:15ee
dw word_4dd90; // 3e1c:15f0
db dummyf_3f7b2; // 3e1c:15f2
db dummyf_3f7b3;
dw word_4dd94; // 3e1c:15f4
dw word_4dd96; // 3e1c:15f6
dw word_4dd98; // 3e1c:15f8
db dummyf_3f7ba; // 3e1c:15fa
db dummyf_3f7bb;
db dummyf_3f7bc; // 3e1c:15fc
db dummyf_3f7bd;
db dummyf_3f7be;
db dummyf_3f7bf;
dw word_4dda0; // 3e1c:1600
dw word_4dda2; // 3e1c:1602
dw word_4dda4; // 3e1c:1604
db dummyf_3f7c6; // 3e1c:1606
db dummyf_3f7c7;
db dummyf_3f7c8; // 3e1c:1608
db dummyf_3f7c9;
db dummyf_3f7ca; // 3e1c:160a
db dummyf_3f7cb;
db dummyf_3f7cc; // 3e1c:160c
db dummyf_3f7cd; // 3e1c:160d
dw word_4ddae; // 3e1c:160e
db dummyf_3f7d0;
db dummyf_3f7d1;
dw word_4ddb2; // 3e1c:1612
dw word_4ddb4; // 3e1c:1614
dw word_4ddb6; // 3e1c:1616
dw word_4ddb8; // 3e1c:1618
dw word_4ddba; // 3e1c:161a
dw word_4ddbc; // 3e1c:161c
db dummyf_3f7de;
db dummyf_3f7df;
db dummyf_3f7e0; // 3e1c:1620
db dummyf_3f7e1;
db dummyf_3f7e2;
db dummyf_3f7e3;
db dummyf_3f7e4; // 3e1c:1624
db dummyf_3f7e5; // 3e1c:1625
db dummyf_3f7e6; // 3e1c:1626
db dummyf_3f7e7; // 3e1c:1627
db dummyf_3f7e8; // 3e1c:1628
db dummyf_3f7e9;
db dummyf_3f7ea; // 3e1c:162a
db dummyf_3f7eb;
dw word_4ddcc; // 3e1c:162c
dw word_4ddce; // 3e1c:162e
dw word_4ddd0; // 3e1c:1630
dw word_4ddd2; // 3e1c:1632
dw word_4ddd4; // 3e1c:1634
dw word_4ddd6; // 3e1c:1636
dw word_4ddd8; // 3e1c:1638
dw word_4ddda; // 3e1c:163a
db dummyf_3f7fc;
db dummyf_3f7fd;
db dummyf_3f7fe; // 3e1c:163e
db dummyf_3f7ff;
db dummyf_3f800;
db dummyf_3f801;
db dummyf_3f802; // 3e1c:1642
db dummyf_3f803; // 3e1c:1643
db dummyf_3f804; // 3e1c:1644
db dummyf_3f805; // 3e1c:1645
db dummyf_3f806; // 3e1c:1646
db dummyf_3f807;
db dummyf_3f808; // 3e1c:1648
db dummyf_3f809;
dw word_4ddea; // 3e1c:164a
db dummyf_3f80c; // 3e1c:164c
db dummyf_3f80d;
db dummyf_3f80e; // 3e1c:164e
db dummyf_3f80f;
dw word_4ddf0; // 3e1c:1650
db dummyf_3f812; // 3e1c:1652
db dummyf_3f813;
db dummyf_3f814; // 3e1c:1654
db dummyf_3f815;
db dummyf_3f816; // 3e1c:1656
db dummyf_3f817;
db dummyf_3f818; // 3e1c:1658
db dummyf_3f819;
db dummyf_3f81a;
db dummyf_3f81b;
db dummyf_3f81c; // 3e1c:165c
db dummyf_3f81d;
db dummyf_3f81e;
db dummyf_3f81f;
db dummyf_3f820; // 3e1c:1660
db dummyf_3f821; // 3e1c:1661
db dummyf_3f822; // 3e1c:1662
db dummyf_3f823; // 3e1c:1663
db dummyf_3f824; // 3e1c:1664
db dummyf_3f825;
db dummyf_3f826; // 3e1c:1666
db dummyf_3f827;
dw word_4de08; // 3e1c:1668
db dummyf_3f82a; // 3e1c:166a
db dummyf_3f82b;
db dummyf_3f82c; // 3e1c:166c
db dummyf_3f82d;
dw word_4de0e; // 3e1c:166e
db dummyf_3f830; // 3e1c:1670
db dummyf_3f831;
db dummyf_3f832; // 3e1c:1672
db dummyf_3f833;
db dummyf_3f834; // 3e1c:1674
db dummyf_3f835;
db dummyf_3f836; // 3e1c:1676
db dummyf_3f837;
db dummyf_3f838;
db dummyf_3f839;
db dummyf_3f83a; // 3e1c:167a
db dummyf_3f83b;
db dummyf_3f83c;
db dummyf_3f83d;
db dummyf_3f83e; // 3e1c:167e
db dummyf_3f83f; // 3e1c:167f
db dummyf_3f840; // 3e1c:1680
db dummyf_3f841; // 3e1c:1681
db dummyf_3f842; // 3e1c:1682
db dummyf_3f843;
db dummyf_3f844; // 3e1c:1684
db dummyf_3f845;
db byte_4de26; // 3e1c:1686
dw word_4de27; // 3e1c:1687
db byte_4de29; // 3e1c:1689
dw word_4de2a; // 3e1c:168a
db byte_4de2c; // 3e1c:168c
dw word_4de2d; // 3e1c:168d
dw word_4de2f; // 3e1c:168f
dw word_4de31; // 3e1c:1691
dw word_4de33; // 3e1c:1693
dw word_4de35; // 3e1c:1695
dw word_4de37; // 3e1c:1697
dw word_4de39; // 3e1c:1699
dw word_4de3b; // 3e1c:169b
dw word_4de3d; // 3e1c:169d
dw word_4de3f; // 3e1c:169f
dw word_4de41; // 3e1c:16a1
db byte_4de43; // 3e1c:16a3
dw word_4de44; // 3e1c:16a4
dw word_4de46; // 3e1c:16a6
dw word_4de48; // 3e1c:16a8
dw word_4de4a; // 3e1c:16aa
dw word_4de4c; // 3e1c:16ac
dw word_4de4e; // 3e1c:16ae
dw word_4de50; // 3e1c:16b0
dw word_4de52; // 3e1c:16b2
db byte_4de54; // 3e1c:16b4
dw word_4de55; // 3e1c:16b5
dw word_4de57; // 3e1c:16b7
dw word_4de59; // 3e1c:16b9
dw word_4de5b; // 3e1c:16bb
db byte_4de5d; // 3e1c:16bd
db byte_4de5e; // 3e1c:16be
db byte_4de5f; // 3e1c:16bf
dw word_4de60; // 3e1c:16c0
dw word_4de62; // 3e1c:16c2
db dummyf_3f884;
db byte_4de65; // 3e1c:16c5
dw word_4de66; // 3e1c:16c6
db dummyf_3f888; // 3e1c:16c8
db dummyf_3f889;
db byte_4de6a; // 3e1c:16ca
db dummyf_3f88b[32]; // 3e1c:16cb
db dummyf_3f8ab[32]; // 3e1c:16eb
db dummyf_3f8cb[32]; // 3e1c:170b
db dummyf_3f8eb[32]; // 3e1c:172b
db dummyf_3f90b[32]; // 3e1c:174b
db dummyf_3f92b[32]; // 3e1c:176b
db dummyf_3f94b[32]; // 3e1c:178b
db dummyf_3f96b[32]; // 3e1c:17ab
db dummyf_3f98b[32]; // 3e1c:17cb
db dummyf_3f9ab[32]; // 3e1c:17eb
db dummyf_3f9cb[32]; // 3e1c:180b
db dummyf_3f9eb[32]; // 3e1c:182b
db dummyf_3fa0b[32]; // 3e1c:184b
db dummyf_3fa2b[32]; // 3e1c:186b
db dummyf_3fa4b[32]; // 3e1c:188b
db dummyf_3fa6b[32]; // 3e1c:18ab
db dummyf_3fa8b[32]; // 3e1c:18cb
db dummyf_3faab[32]; // 3e1c:18eb
db dummyf_3facb[32]; // 3e1c:190b
db dummyf_3faeb[32]; // 3e1c:192b
db dummyf_3fb0b[32]; // 3e1c:194b
db dummyf_3fb2b;
db dummyf_3fb2c;
db dummyf_3fb2d;
db dummyf_3fb2e;
db dummyf_3fb2f;
db dummyf_3fb30;
db dummyf_3fb31;
db dummyf_3fb32;
db dummyf_3fb33;
db dummyf_3fb34;
db dummyf_3fb35;
db dummyf_3fb36;
db dummyf_3fb37;
db dummyf_3fb38;
db dummyf_3fb39;
db dummyf_3fb3a;
db dummyf_3fb3b;
db dummyf_3fb3c;
db dummyf_3fb3d;
db byte_4e11e; // 3e1c:197e
db byte_4e11f; // 3e1c:197f
dw word_4e120; // 3e1c:1980
dw word_4e122; // 3e1c:1982
db dummyf_3fb44[32]; // 3e1c:1984
db dummyf_3fb64[32]; // 3e1c:19a4
db dummyf_3fb84; // 3e1c:19c4
db dummyf_3fb85; // 3e1c:19c5
db dummyf_3fb86;
db dummyf_3fb87;
db dummyf_3fb88; // 3e1c:19c8
db dummyf_3fb89; // 3e1c:19c9
db dummyf_3fb8a;
db dummyf_3fb8b;
db dummyf_3fb8c; // 3e1c:19cc
db dummyf_3fb8d; // 3e1c:19cd
db dummyf_3fb8e;
db dummyf_3fb8f;
db dummyf_3fb90; // 3e1c:19d0
db dummyf_3fb91; // 3e1c:19d1
db dummyf_3fb92;
db dummyf_3fb93;
db dummyf_3fb94; // 3e1c:19d4
db dummyf_3fb95; // 3e1c:19d5
db dummyf_3fb96;
db dummyf_3fb97;
db dummyf_3fb98; // 3e1c:19d8
db dummyf_3fb99; // 3e1c:19d9
db dummyf_3fb9a;
db dummyf_3fb9b;
db dummyf_3fb9c; // 3e1c:19dc
db dummyf_3fb9d; // 3e1c:19dd
db dummyf_3fb9e;
db dummyf_3fb9f;
dw word_4e180; // 3e1c:19e0
dw word_4e182; // 3e1c:19e2
dw word_4e184; // 3e1c:19e4
dw word_4e186; // 3e1c:19e6
dw word_4e188; // 3e1c:19e8
dw word_4e18a; // 3e1c:19ea
dw word_4e18c; // 3e1c:19ec
dw word_4e18e; // 3e1c:19ee
dw word_4e190; // 3e1c:19f0
dw word_4e192; // 3e1c:19f2
db dummyf_3fbb4[32]; // 3e1c:19f4
db dummyf_3fbd4;
db dummyf_3fbd5;
db dummyf_3fbd6;
db dummyf_3fbd7;
db dummyf_3fbd8;
db dummyf_3fbd9;
db dummyf_3fbda;
db dummyf_3fbdb;
dw word_4e1bc; // 3e1c:1a1c
dw word_4e1be; // 3e1c:1a1e
db dummyf_3fbe0;
db dummyf_3fbe1;
db dummyf_3fbe2;
db dummyf_3fbe3;
dw word_4e1c4; // 3e1c:1a24
db dummyf_3fbe6;
db dummyf_3fbe7;
db byte_4e1c8; // 3e1c:1a28
db byte_4e1c9; // 3e1c:1a29
db byte_4e1ca; // 3e1c:1a2a
dw word_4e1cb; // 3e1c:1a2b
db byte_4e1cd; // 3e1c:1a2d
db byte_4e1ce; // 3e1c:1a2e
db byte_4e1cf; // 3e1c:1a2f
db dummyf_3fbf0[32]; // 3e1c:1a30
db dummyf_3fc10[32]; // 3e1c:1a50
db dummyf_3fc30[32]; // 3e1c:1a70
db dummyf_3fc50[32]; // 3e1c:1a90
db dummyf_3fc70[32]; // 3e1c:1ab0
db dummyf_3fc90[32]; // 3e1c:1ad0
db dummyf_3fcb0; // 3e1c:1af0
db dummyf_3fcb1; // 3e1c:1af1
db dummyf_3fcb2; // 3e1c:1af2
db dummyf_3fcb3; // 3e1c:1af3
db dummyf_3fcb4; // 3e1c:1af4
db dummyf_3fcb5; // 3e1c:1af5
db dummyf_3fcb6; // 3e1c:1af6
db dummyf_3fcb7; // 3e1c:1af7
db dummyf_3fcb8; // 3e1c:1af8
db dummyf_3fcb9; // 3e1c:1af9
db dummyf_3fcba; // 3e1c:1afa
db dummyf_3fcbb; // 3e1c:1afb
db dummyf_3fcbc; // 3e1c:1afc
db dummyf_3fcbd;
db dummyf_3fcbe; // 3e1c:1afe
db dummyf_3fcbf; // 3e1c:1aff
dw word_4e2a0; // 3e1c:1b00
dw word_4e2a2; // 3e1c:1b02
dw word_4e2a4; // 3e1c:1b04
dw word_4e2a6; // 3e1c:1b06
dw word_4e2a8; // 3e1c:1b08
db dummyf_3fcca;
db dummyf_3fccb;
db dummyf_3fccc;
db dummyf_3fccd;
dw word_4e2ae; // 3e1c:1b0e
dw word_4e2b0; // 3e1c:1b10
db dummyf_3fcd2;
db dummyf_3fcd3;
dw word_4e2b4; // 3e1c:1b14
db dummyf_3fcd6;
db dummyf_3fcd7;
db dummyf_3fcd8; // 3e1c:1b18
db dummyf_3fcd9; // 3e1c:1b19
db dummyf_3fcda;
db dummyf_3fcdb;
dw word_4e2bc; // 3e1c:1b1c
db dummyf_3fcde;
db dummyf_3fcdf;
dw word_4e2c0; // 3e1c:1b20
db dummyf_3fce2; // 3e1c:1b22
db dummyf_3fce3; // 3e1c:1b23
db dummyf_3fce4;
db dummyf_3fce5;
db dummyf_3fce6;
db dummyf_3fce7;
db dummyf_3fce8;
db dummyf_3fce9;
dw word_4e2ca; // 3e1c:1b2a
dw word_4e2cc; // 3e1c:1b2c
db dummyf_3fcee;
db dummyf_3fcef;
dw word_4e2d0; // 3e1c:1b30
dw word_4e2d2; // 3e1c:1b32
dw word_4e2d4; // 3e1c:1b34
dw word_4e2d6; // 3e1c:1b36
db dummyf_3fcf8;
db dummyf_3fcf9;
dw word_4e2da; // 3e1c:1b3a
dw word_4e2dc; // 3e1c:1b3c
db dummyf_3fcfe;
db dummyf_3fcff;
db dummyf_3fd00;
db dummyf_3fd01;
db dummyf_3fd02;
db dummyf_3fd03;
db dummyf_3fd04; // 3e1c:1b44
db dummyf_3fd05; // 3e1c:1b45
db dummyf_3fd06;
db dummyf_3fd07;
db dummyf_3fd08;
db dummyf_3fd09;
db dummyf_3fd0a;
db dummyf_3fd0b;
db dummyf_3fd0c;
db dummyf_3fd0d;
db dummyf_3fd0e;
db dummyf_3fd0f;
db dummyf_3fd10;
db dummyf_3fd11;
db dummyf_3fd12;
db dummyf_3fd13;
db dummyf_3fd14;
db dummyf_3fd15;
db dummyf_3fd16;
db dummyf_3fd17;
dw word_4e2f8; // 3e1c:1b58
dw word_4e2fa; // 3e1c:1b5a
dw word_4e2fc; // 3e1c:1b5c
dw word_4e2fe; // 3e1c:1b5e
dw word_4e300; // 3e1c:1b60
db dummyf_3fd22; // 3e1c:1b62
db dummyf_3fd23;
db dummyf_3fd24;
db dummyf_3fd25;
db dummyf_3fd26;
db dummyf_3fd27;
dw word_4e308; // 3e1c:1b68
db byte_4e30a; // 3e1c:1b6a
db dummyf_3fd2b;
db dummyf_3fd2c; // 3e1c:1b6c
db byte_4e30d; // 3e1c:1b6d
db dummyf_3fd2e;
db dummyf_3fd2f;
dw word_4e310; // 3e1c:1b70
dw word_4e312; // 3e1c:1b72
db dummyf_3fd34[32]; // 3e1c:1b74
db dummyf_3fd54[32]; // 3e1c:1b94
db dummyf_3fd74;
db dummyf_3fd75;
dw word_4e356; // 3e1c:1bb6
db dummyf_3fd78[32]; // 3e1c:1bb8
db dummyf_3fd98; // 3e1c:1bd8
db dummyf_3fd99;
db dummyf_3fd9a; // 3e1c:1bda
db dummyf_3fd9b;
db dummyf_3fd9c; // 3e1c:1bdc
db dummyf_3fd9d;
db dummyf_3fd9e; // 3e1c:1bde
db dummyf_3fd9f; // 3e1c:1bdf
db dummyf_3fda0; // 3e1c:1be0
db dummyf_3fda1; // 3e1c:1be1
dw word_4e382; // 3e1c:1be2
db dummyf_3fda4; // 3e1c:1be4
db dummyf_3fda5; // 3e1c:1be5
db dummyf_3fda6; // 3e1c:1be6
db dummyf_3fda7; // 3e1c:1be7
db dummyf_3fda8; // 3e1c:1be8
db dummyf_3fda9; // 3e1c:1be9
db dummyf_3fdaa; // 3e1c:1bea
db dummyf_3fdab; // 3e1c:1beb
db dummyf_3fdac;
db dummyf_3fdad;
dw word_4e38e; // 3e1c:1bee
db dummyf_3fdb0[32]; // 3e1c:1bf0
db dummyf_3fdd0[32]; // 3e1c:1c10
db dummyf_3fdf0[32]; // 3e1c:1c30
db dummyf_3fe10[32]; // 3e1c:1c50
db dummyf_3fe30[32]; // 3e1c:1c70
db dummyf_3fe50[32]; // 3e1c:1c90
db dummyf_3fe70[32]; // 3e1c:1cb0
db dummyf_3fe90[32]; // 3e1c:1cd0
db dummyf_3feb0[32]; // 3e1c:1cf0
db dummyf_3fed0[32]; // 3e1c:1d10
db dummyf_3fef0[32]; // 3e1c:1d30
db dummyf_3ff10[32]; // 3e1c:1d50
db dummyf_3ff30[32]; // 3e1c:1d70
db dummyf_3ff50[32]; // 3e1c:1d90
db dummyf_3ff70; // 3e1c:1db0
db dummyf_3ff71;
db dummyf_3ff72; // 3e1c:1db2
db dummyf_3ff73;
db dummyf_3ff74;
db dummyf_3ff75;
db dummyf_3ff76;
db dummyf_3ff77;
db dummyf_3ff78;
db dummyf_3ff79;
db dummyf_3ff7a; // 3e1c:1dba
db dummyf_3ff7b;
db dummyf_3ff7c;
db dummyf_3ff7d;
db dummyf_3ff7e; // 3e1c:1dbe
db dummyf_3ff7f;
db dummyf_3ff80;
db dummyf_3ff81;
db dummyf_3ff82; // 3e1c:1dc2
db dummyf_3ff83; // 3e1c:1dc3
dw word_4e564; // 3e1c:1dc4
db dummyf_3ff86; // 3e1c:1dc6
db dummyf_3ff87;
db dummyf_3ff88; // 3e1c:1dc8
db dummyf_3ff89;
db dummyf_3ff8a; // 3e1c:1dca
db dummyf_3ff8b;
db dummyf_3ff8c;
db dummyf_3ff8d;
db dummyf_3ff8e;
db dummyf_3ff8f;
db dummyf_3ff90;
db dummyf_3ff91;
db dummyf_3ff92; // 3e1c:1dd2
db dummyf_3ff93;
db dummyf_3ff94;
db dummyf_3ff95;
db dummyf_3ff96; // 3e1c:1dd6
db dummyf_3ff97;
db dummyf_3ff98;
db dummyf_3ff99;
db dummyf_3ff9a; // 3e1c:1dda
db dummyf_3ff9b; // 3e1c:1ddb
dw word_4e57c; // 3e1c:1ddc
db dummyf_3ff9e; // 3e1c:1dde
db dummyf_3ff9f;
db dummyf_3ffa0; // 3e1c:1de0
db dummyf_3ffa1;
db dummyf_3ffa2; // 3e1c:1de2
db dummyf_3ffa3;
db dummyf_3ffa4;
db dummyf_3ffa5;
db dummyf_3ffa6;
db dummyf_3ffa7;
db dummyf_3ffa8;
db dummyf_3ffa9;
db dummyf_3ffaa;
db dummyf_3ffab;
db dummyf_3ffac;
db dummyf_3ffad;
db dummyf_3ffae; // 3e1c:1dee
db dummyf_3ffaf;
db dummyf_3ffb0;
db dummyf_3ffb1;
db dummyf_3ffb2; // 3e1c:1df2
db dummyf_3ffb3; // 3e1c:1df3
dw word_4e594; // 3e1c:1df4
db dummyf_3ffb6;
db dummyf_3ffb7;
db dummyf_3ffb8; // 3e1c:1df8
db dummyf_3ffb9;
db dummyf_3ffba; // 3e1c:1dfa
db dummyf_3ffbb;
db dummyf_3ffbc;
db dummyf_3ffbd;
db dummyf_3ffbe;
db dummyf_3ffbf;
db dummyf_3ffc0;
db dummyf_3ffc1;
db dummyf_3ffc2; // 3e1c:1e02
db dummyf_3ffc3;
db dummyf_3ffc4; // 3e1c:1e04
db dummyf_3ffc5;
db dummyf_3ffc6; // 3e1c:1e06
db dummyf_3ffc7;
db dummyf_3ffc8; // 3e1c:1e08
db dummyf_3ffc9;
db dummyf_3ffca; // 3e1c:1e0a
db dummyf_3ffcb;
dw word_4e5ac; // 3e1c:1e0c
db dummyf_3ffce[32]; // 3e1c:1e0e
db dummyf_3ffee;
db dummyf_3ffef;
db dummyf_3fff0;
db dummyf_3fff1;
db dummyf_3fff2; // 3e1c:1e32
db dummyf_3fff3;
db dummyf_3fff4; // 3e1c:1e34
db dummyf_3fff5;
db dummyf_3fff6; // 3e1c:1e36
db dummyf_3fff7;
db dummyf_3fff8; // 3e1c:1e38
db dummyf_3fff9;
db dummyf_3fffa; // 3e1c:1e3a
db dummyf_3fffb; // 3e1c:1e3b
dw word_4e5dc; // 3e1c:1e3c
dw word_4e5de; // 3e1c:1e3e
dw word_4e5e0; // 3e1c:1e40
dw word_4e5e2; // 3e1c:1e42
dw word_4e5e4; // 3e1c:1e44
dw word_4e5e6; // 3e1c:1e46
dw word_4e5e8; // 3e1c:1e48
dw word_4e5ea; // 3e1c:1e4a
dw word_4e5ec; // 3e1c:1e4c
db dummyf_4000e; // 3e1c:1e4e
db dummyf_4000f;
db dummyf_40010; // 3e1c:1e50
db dummyf_40011;
db dummyf_40012; // 3e1c:1e52
db dummyf_40013;
db dummyf_40014; // 3e1c:1e54
db dummyf_40015;
db dummyf_40016; // 3e1c:1e56
db dummyf_40017; // 3e1c:1e57
db dummyf_40018; // 3e1c:1e58
db dummyf_40019;
db dummyf_4001a; // 3e1c:1e5a
db dummyf_4001b;
dw word_4e5fc; // 3e1c:1e5c
dw word_4e5fe; // 3e1c:1e5e
dw word_4e600; // 3e1c:1e60
dw word_4e602; // 3e1c:1e62
dw word_4e604; // 3e1c:1e64
dw word_4e606; // 3e1c:1e66
dw word_4e608; // 3e1c:1e68
dw word_4e60a; // 3e1c:1e6a
db dummyf_4002c;
db dummyf_4002d;
db dummyf_4002e; // 3e1c:1e6e
db dummyf_4002f;
db dummyf_40030;
db dummyf_40031;
db dummyf_40032; // 3e1c:1e72
db dummyf_40033; // 3e1c:1e73
db byte_4e614; // 3e1c:1e74
db byte_4e615; // 3e1c:1e75
db dummyf_40036; // 3e1c:1e76
db dummyf_40037;
db dummyf_40038; // 3e1c:1e78
db dummyf_40039;
dw word_4e61a; // 3e1c:1e7a
dw word_4e61c; // 3e1c:1e7c
dw word_4e61e; // 3e1c:1e7e
dw word_4e620; // 3e1c:1e80
dw word_4e622; // 3e1c:1e82
dw word_4e624; // 3e1c:1e84
db dummyf_40046[32]; // 3e1c:1e86
db dummyf_40066[32]; // 3e1c:1ea6
db dummyf_40086[32]; // 3e1c:1ec6
db dummyf_400a6;
db dummyf_400a7; // 3e1c:1ee7
db dummyf_400a8; // 3e1c:1ee8
db dummyf_400a9; // 3e1c:1ee9
db dummyf_400aa;
db dummyf_400ab;
db dummyf_400ac;
db dummyf_400ad;
db dummyf_400ae;
db dummyf_400af;
dw word_4e690; // 3e1c:1ef0
db dummyf_400b2[32]; // 3e1c:1ef2
db dummyf_400d2[32]; // 3e1c:1f12
db dummyf_400f2[32]; // 3e1c:1f32
db dummyf_40112[32]; // 3e1c:1f52
db dummyf_40132; // 3e1c:1f72
db dummyf_40133;
db dummyf_40134; // 3e1c:1f74
db dummyf_40135; // 3e1c:1f75
db dummyf_40136; // 3e1c:1f76
db dummyf_40137; // 3e1c:1f77
db dummyf_40138; // 3e1c:1f78
db dummyf_40139; // 3e1c:1f79
db dummyf_4013a;
db dummyf_4013b; // 3e1c:1f7b
db dummyf_4013c;
db dummyf_4013d; // 3e1c:1f7d
db dummyf_4013e; // 3e1c:1f7e
db dummyf_4013f; // 3e1c:1f7f
db dummyf_40140;
db dummyf_40141;
db dummyf_40142; // 3e1c:1f82
db dummyf_40143; // 3e1c:1f83
db dummyf_40144; // 3e1c:1f84
db dummyf_40145; // 3e1c:1f85
db dummyf_40146;
db dummyf_40147; // 3e1c:1f87
db dummyf_40148; // 3e1c:1f88
db dummyf_40149;
char aopenerroron3d3_0[20]; // 3e1c:1f8a
db byte_4e73e; // 3e1c:1f9e
db dummyf_4015f[32]; // 3e1c:1f9f
db dummyf_4017f[32]; // 3e1c:1fbf
db dummyf_4019f[32]; // 3e1c:1fdf
db dummyf_401bf[32]; // 3e1c:1fff
db dummyf_401df[32]; // 3e1c:201f
db dummyf_401ff[32]; // 3e1c:203f
db dummyf_4021f[32]; // 3e1c:205f
db dummyf_4023f; // 3e1c:207f
db dummyf_40240; // 3e1c:2080
db dummyf_40241;
db dummyf_40242; // 3e1c:2082
db dummyf_40243; // 3e1c:2083
db dummyf_40244; // 3e1c:2084
db dummyf_40245; // 3e1c:2085
db dummyf_40246; // 3e1c:2086
db dummyf_40247; // 3e1c:2087
db dummyf_40248; // 3e1c:2088
db dummyf_40249; // 3e1c:2089
db dummyf_4024a; // 3e1c:208a
db dummyf_4024b; // 3e1c:208b
db dummyf_4024c; // 3e1c:208c
db dummyf_4024d; // 3e1c:208d
db dummyf_4024e;
db dummyf_4024f;
dw word_4e830; // 3e1c:2090
dw word_4e832; // 3e1c:2092
dw word_4e834; // 3e1c:2094
dw word_4e836; // 3e1c:2096
dw word_4e838; // 3e1c:2098
dw word_4e83a; // 3e1c:209a
db dummyf_4025c;
db dummyf_4025d;
db dummyf_4025e; // 3e1c:209e
db dummyf_4025f; // 3e1c:209f
db dummyf_40260; // 3e1c:20a0
db dummyf_40261; // 3e1c:20a1
db dummyf_40262; // 3e1c:20a2
db dummyf_40263; // 3e1c:20a3
db dummyf_40264; // 3e1c:20a4
db dummyf_40265; // 3e1c:20a5
db dummyf_40266; // 3e1c:20a6
db dummyf_40267; // 3e1c:20a7
db dummyf_40268; // 3e1c:20a8
db dummyf_40269; // 3e1c:20a9
db dummyf_4026a; // 3e1c:20aa
db dummyf_4026b; // 3e1c:20ab
db dummyf_4026c;
db dummyf_4026d; // 3e1c:20ad
db dummyf_4026e; // 3e1c:20ae
db dummyf_4026f; // 3e1c:20af
db dummyf_40270; // 3e1c:20b0
db dummyf_40271; // 3e1c:20b1
db dummyf_40272; // 3e1c:20b2
db dummyf_40273;
db dummyf_40274; // 3e1c:20b4
db dummyf_40275; // 3e1c:20b5
db dummyf_40276; // 3e1c:20b6
db dummyf_40277; // 3e1c:20b7
db dummyf_40278; // 3e1c:20b8
db dummyf_40279; // 3e1c:20b9
db byte_4e85a; // 3e1c:20ba
db byte_4e85b; // 3e1c:20bb
db dummyf_4027c[32]; // 3e1c:20bc
db dummyf_4029c[32]; // 3e1c:20dc
db dummyf_402bc[32]; // 3e1c:20fc
db dummyf_402dc[32]; // 3e1c:211c
db dummyf_402fc[32]; // 3e1c:213c
db dummyf_4031c[32]; // 3e1c:215c
db dummyf_4033c[32]; // 3e1c:217c
db dummyf_4035c[32]; // 3e1c:219c
db dummyf_4037c[32]; // 3e1c:21bc
db dummyf_4039c[32]; // 3e1c:21dc
db dummyf_403bc[32]; // 3e1c:21fc
db dummyf_403dc[32]; // 3e1c:221c
db dummyf_403fc[32]; // 3e1c:223c
db dummyf_4041c[32]; // 3e1c:225c
db dummyf_4043c[32]; // 3e1c:227c
db dummyf_4045c[32]; // 3e1c:229c
db dummyf_4047c[32]; // 3e1c:22bc
db dummyf_4049c[32]; // 3e1c:22dc
db dummyf_404bc[32]; // 3e1c:22fc
db dummyf_404dc; // 3e1c:231c
db dummyf_404dd; // 3e1c:231d
dw word_4eabe; // 3e1c:231e
dw word_4eac0; // 3e1c:2320
db dummyf_404e2;
db dummyf_404e3;
dw word_4eac4; // 3e1c:2324
dw word_4eac6; // 3e1c:2326
db dummyf_404e8[32]; // 3e1c:2328
db dummyf_40508[32]; // 3e1c:2348
db dummyf_40528[32]; // 3e1c:2368
db dummyf_40548[32]; // 3e1c:2388
db dummyf_40568[32]; // 3e1c:23a8
db dummyf_40588[32]; // 3e1c:23c8
db dummyf_405a8[32]; // 3e1c:23e8
db dummyf_405c8[32]; // 3e1c:2408
db dummyf_405e8[32]; // 3e1c:2428
db dummyf_40608[32]; // 3e1c:2448
dw word_4ec08; // 3e1c:2468
dw word_4ec0a; // 3e1c:246a
dw word_4ec0c; // 3e1c:246c
db dummyf_4062e;
db dummyf_4062f;
dw word_4ec10; // 3e1c:2470
dw word_4ec12; // 3e1c:2472
dw word_4ec14; // 3e1c:2474
dw word_4ec16; // 3e1c:2476
dw off_4ec18; // 3e1c:2478
dw word_4ec1a; // 3e1c:247a
dw dummyf_4063c; // 3e1c:247c
db dummyf_4063e[32]; // 3e1c:247e
db dummyf_4065e[32]; // 3e1c:249e
db dummyf_4067e;
db dummyf_4067f;
db dummyf_40680;
db dummyf_40681;
db dummyf_40682;
db dummyf_40683;
db dummyf_40684;
db dummyf_40685;
db dummyf_40686;
db dummyf_40687;
db dummyf_40688;
db dummyf_40689;
char aacfileinfo[15]; // 3e1c:24ca
dd dword_4ec79; // 3e1c:24d9
db dummyf_4069d;
db dummyf_4069e;
db dummyf_4069f;
db dummyf_406a0;
db dummyf_406a1;
db dummyf_406a2;
db dummyf_406a3;
db dummyf_406a4;
dw word_4ec85; // 3e1c:24e5
dw word_4ec87; // 3e1c:24e7
db dummyf_406a9;
db dummyf_406aa;
dw word_4ec8b; // 3e1c:24eb
dw word_4ec8d; // 3e1c:24ed
db dummyf_406af;
db byte_4ec90; // 3e1c:24f0
db dummyf_406b1;
dw word_4ec92; // 3e1c:24f2
db dummyf_406b4; // 3e1c:24f4
db dummyf_406b5; // 3e1c:24f5
db dummyf_406b6; // 3e1c:24f6
db dummyf_406b7; // 3e1c:24f7
db dummyf_406b8; // 3e1c:24f8
db dummyf_406b9;
db dummyf_406ba;
db dummyf_406bb;
db dummyf_406bc;
db dummyf_406bd;
db dummyf_406be;
db dummyf_406bf;
db dummyf_406c0;
db dummyf_406c1;
db dummyf_406c2;
db dummyf_406c3;
db dummyf_406c4;
db dummyf_406c5;
db dummyf_406c6;
db dummyf_406c7;
dw word_4eca8; // 3e1c:2508
dw word_4ecaa; // 3e1c:250a
dw word_4ecac; // 3e1c:250c
dd dummyf_406ce; // 3e1c:250e
db unk_4ecb2; // 3e1c:2512
db dummyf_406d3;
db dummyf_406d4;
db dummyf_406d5;
db byte_4ecb6; // 3e1c:2516
db byte_4ecb7; // 3e1c:2517
dd dword_4ecb8; // 3e1c:2518
dw word_4ecbc; // 3e1c:251c
db dummyf_406de; // 3e1c:251e
db dummyf_406df;
db dummyf_406e0; // 3e1c:2520
db dummyf_406e1;
dw word_4ecc2; // 3e1c:2522
dw word_4ecc4; // 3e1c:2524
dw word_4ecc6; // 3e1c:2526
dw word_4ecc8; // 3e1c:2528
db dummyf_406ea[32]; // 3e1c:252a
db dummyf_4070a[32]; // 3e1c:254a
db dummyf_4072a[32]; // 3e1c:256a
db dummyf_4074a[32]; // 3e1c:258a
db dummyf_4076a[32]; // 3e1c:25aa
db dummyf_4078a[32]; // 3e1c:25ca
db dummyf_407aa[32]; // 3e1c:25ea
db dummyf_407ca[32]; // 3e1c:260a
db dummyf_407ea[32]; // 3e1c:262a
db dummyf_4080a;
db dummyf_4080b;
db dummyf_4080c;
db dummyf_4080d;
db dummyf_4080e;
db dummyf_4080f;
db dummyf_40810;
db dummyf_40811;
db dummyf_40812;
db dummyf_40813;
db dummyf_40814;
db dummyf_40815;
dw word_4edf6; // 3e1c:2656
dw word_4edf8; // 3e1c:2658
dw word_4edfa; // 3e1c:265a
dw word_4edfc; // 3e1c:265c
db dummyf_4081e;
db dummyf_4081f;
dw word_4ee00; // 3e1c:2660
db dummyf_40822;
db dummyf_40823;
db dummyf_40824;
db byte_4ee05; // 3e1c:2665
dw word_4ee06; // 3e1c:2666
db dummyf_40828;
db dummyf_40829;
dw word_4ee0a; // 3e1c:266a
dw word_4ee0c; // 3e1c:266c
db dummyf_4082e;
db dummyf_4082f;
db byte_4ee10; // 3e1c:2670
db dummyf_40831;
db dummyf_40832;
db dummyf_40833;
db unk_4ee14; // 3e1c:2674
db dummyf_40835;
dw word_4ee16; // 3e1c:2676
dd dword_4ee18; // 3e1c:2678
dd dword_4ee1c; // 3e1c:267c
dw word_4ee20; // 3e1c:2680
dw seg_4ee22; // 3e1c:2682
dw seg_4ee24; // 3e1c:2684
dw seg_4ee26; // 3e1c:2686
char anmsg[9]; // 3e1c:2688
db dummyf_40851[1];
char ar6000stackover[7]; // 3e1c:2692
char dummyf_40859[19]; // 3e1c:2692
db dummyf_4086c[32]; // 3e1c:26ac
db dummyf_4088c[32]; // 3e1c:26cc
db dummyf_408ac[32]; // 3e1c:26ec
db dummyf_408cc[32]; // 3e1c:270c
db dummyf_408ec[32]; // 3e1c:272c
db dummyf_4090c; // 3e1c:274c
db dummyf_4090d; // 3e1c:274d
db dummyf_4090e; // 3e1c:274e
db dummyf_4090f; // 3e1c:274f
db dummyf_40910; // 3e1c:2750
db dummyf_40911; // 3e1c:2751
db dummyf_40912; // 3e1c:2752
db dummyf_40913; // 3e1c:2753
db dummyf_40914; // 3e1c:2754
db dummyf_40915; // 3e1c:2755
db dummyf_40916; // 3e1c:2756
db dummyf_40917; // 3e1c:2757
db dummyf_40918; // 3e1c:2758
db dummyf_40919; // 3e1c:2759
db dummyf_4091a; // 3e1c:275a
db dummyf_4091b; // 3e1c:275b
db dummyf_4091c; // 3e1c:275c
db dummyf_4091d;
db dummyf_4091e; // 3e1c:275e
db dummyf_4091f; // 3e1c:275f
db dummyf_40920; // 3e1c:2760
db dummyf_40921;
dw word_4ef02; // 3e1c:2762
dw word_4ef04; // 3e1c:2764
dw word_4ef06; // 3e1c:2766
dw word_4ef08; // 3e1c:2768
dw word_4ef0a; // 3e1c:276a
dw word_4ef0c; // 3e1c:276c
dw word_4ef0e; // 3e1c:276e
dw word_4ef10; // 3e1c:2770
dw word_4ef12; // 3e1c:2772
dw word_4ef14; // 3e1c:2774
dw word_4ef16; // 3e1c:2776
dw word_4ef18; // 3e1c:2778
dw word_4ef1a; // 3e1c:277a
dw word_4ef1c; // 3e1c:277c
dw word_4ef1e; // 3e1c:277e
dw word_4ef20; // 3e1c:2780
dw word_4ef22; // 3e1c:2782
db dummyf_40944;
db dummyf_40945;
db dummyf_40946;
db dummyf_40947;
db dummyf_40948;
db dummyf_40949;
dw word_4ef2a; // 3e1c:278a
dw word_4ef2c; // 3e1c:278c
dw word_4ef2e; // 3e1c:278e
dw word_4ef30; // 3e1c:2790
dw word_4ef32; // 3e1c:2792
dw word_4ef34; // 3e1c:2794
dw word_4ef36; // 3e1c:2796
db dummyf_40958[32]; // 3e1c:2798
db dummyf_40978[32]; // 3e1c:27b8
db dummyf_40998;
db dummyf_40999;
dw word_4ef7a; // 3e1c:27da
dw word_4ef7c; // 3e1c:27dc
dw word_4ef7e; // 3e1c:27de
dw word_4ef80; // 3e1c:27e0
dw word_4ef82; // 3e1c:27e2
dw word_4ef84; // 3e1c:27e4
dw word_4ef86; // 3e1c:27e6
dw word_4ef88; // 3e1c:27e8
dw word_4ef8a; // 3e1c:27ea
dw word_4ef8c; // 3e1c:27ec
dw word_4ef8e; // 3e1c:27ee
db byte_4ef90; // 3e1c:27f0
db byte_4ef91; // 3e1c:27f1
db byte_4ef92; // 3e1c:27f2
db byte_4ef93; // 3e1c:27f3
dw word_4ef94; // 3e1c:27f4
dw word_4ef96; // 3e1c:27f6
dw word_4ef98; // 3e1c:27f8
db byte_4ef9a; // 3e1c:27fa
db byte_4ef9b; // 3e1c:27fb
dw word_4ef9c; // 3e1c:27fc
db byte_4ef9e; // 3e1c:27fe
db dummyf_409bf[32]; // 3e1c:27ff
db dummyf_409df[32]; // 3e1c:281f
db dummyf_409ff[32]; // 3e1c:283f
db dummyf_40a1f[32]; // 3e1c:285f
db dummyf_40a3f[32]; // 3e1c:287f
db dummyf_40a5f[32]; // 3e1c:289f
db dummyf_40a7f[32]; // 3e1c:28bf
db dummyf_40a9f[32]; // 3e1c:28df
db dummyf_40abf[32]; // 3e1c:28ff
db dummyf_40adf[32]; // 3e1c:291f
db dummyf_40aff[32]; // 3e1c:293f
db dummyf_40b1f[32]; // 3e1c:295f
db dummyf_40b3f[32]; // 3e1c:297f
db dummyf_40b5f[32]; // 3e1c:299f
db dummyf_40b7f[32]; // 3e1c:29bf
db dummyf_40b9f[32]; // 3e1c:29df
db dummyf_40bbf;
dw word_4f1a0; // 3e1c:2a00
dw word_4f1a2; // 3e1c:2a02
db dummyf_40bc4; // 3e1c:2a04
db dummyf_40bc5; // 3e1c:2a05
db dummyf_40bc6; // 3e1c:2a06
db dummyf_40bc7; // 3e1c:2a07
db dummyf_40bc8; // 3e1c:2a08
db dummyf_40bc9; // 3e1c:2a09
db dummyf_40bca; // 3e1c:2a0a
db dummyf_40bcb; // 3e1c:2a0b
db dummyf_40bcc; // 3e1c:2a0c
db dummyf_40bcd; // 3e1c:2a0d
db dummyf_40bce; // 3e1c:2a0e
db dummyf_40bcf; // 3e1c:2a0f
db dummyf_40bd0; // 3e1c:2a10
db dummyf_40bd1; // 3e1c:2a11
db dummyf_40bd2; // 3e1c:2a12
db dummyf_40bd3; // 3e1c:2a13
db dummyf_40bd4; // 3e1c:2a14
db dummyf_40bd5; // 3e1c:2a15
db dummyf_40bd6; // 3e1c:2a16
db dummyf_40bd7; // 3e1c:2a17
db dummyf_40bd8; // 3e1c:2a18
db dummyf_40bd9; // 3e1c:2a19
db dummyf_40bda; // 3e1c:2a1a
db dummyf_40bdb; // 3e1c:2a1b
db byte_4f1bc; // 3e1c:2a1c
db byte_4f1bd; // 3e1c:2a1d
db dummyf_40bde[32]; // 3e1c:2a1e
db dummyf_40bfe; // 3e1c:2a3e
db dummyf_40bff; // 3e1c:2a3f
db dummyf_40c00; // 3e1c:2a40
db dummyf_40c01; // 3e1c:2a41
db dummyf_40c02; // 3e1c:2a42
db dummyf_40c03; // 3e1c:2a43
db dummyf_40c04; // 3e1c:2a44
db dummyf_40c05; // 3e1c:2a45
db dummyf_40c06;
db dummyf_40c07; // 3e1c:2a47
db dummyf_40c08; // 3e1c:2a48
db dummyf_40c09; // 3e1c:2a49
db dummyf_40c0a; // 3e1c:2a4a
db dummyf_40c0b; // 3e1c:2a4b
db dummyf_40c0c;
db dummyf_40c0d; // 3e1c:2a4d
db dummyf_40c0e; // 3e1c:2a4e
db dummyf_40c0f; // 3e1c:2a4f
db dummyf_40c10; // 3e1c:2a50
db dummyf_40c11; // 3e1c:2a51
db dummyf_40c12; // 3e1c:2a52
db dummyf_40c13; // 3e1c:2a53
dw word_4f1f4; // 3e1c:2a54
dw word_4f1f6; // 3e1c:2a56
dw word_4f1f8; // 3e1c:2a58
db dummyf_40c1a; // 3e1c:2a5a
db dummyf_40c1b; // 3e1c:2a5b
dw word_4f1fc; // 3e1c:2a5c
dw seg_4f1fe; // 3e1c:2a5e
db dummyf_40c20; // 3e1c:2a60
db dummyf_40c21; // 3e1c:2a61
db dummyf_40c22; // 3e1c:2a62
db dummyf_40c23; // 3e1c:2a63
db dummyf_40c24; // 3e1c:2a64
db dummyf_40c25;
db dummyf_40c26; // 3e1c:2a66
db dummyf_40c27; // 3e1c:2a67
db dummyf_40c28; // 3e1c:2a68
db dummyf_40c29; // 3e1c:2a69
dw word_4f20a; // 3e1c:2a6a
dw word_4f20c; // 3e1c:2a6c
dw word_4f20e; // 3e1c:2a6e
dw word_4f210; // 3e1c:2a70
dd dword_4f212; // 3e1c:2a72
dw word_4f216; // 3e1c:2a76
dw word_4f218; // 3e1c:2a78
dw word_4f21a; // 3e1c:2a7a
dw word_4f21c; // 3e1c:2a7c
dw word_4f21e; // 3e1c:2a7e
dd dword_4f220; // 3e1c:2a80
db dummyf_40c44; // 3e1c:2a84
db dummyf_40c45; // 3e1c:2a85
dw word_4f226; // 3e1c:2a86
dw word_4f228; // 3e1c:2a88
dw word_4f22a; // 3e1c:2a8a
dw word_4f22c; // 3e1c:2a8c
db dummyf_40c4e[32]; // 3e1c:2a8e
db dummyf_40c6e[32]; // 3e1c:2aae
db dummyf_40c8e[32]; // 3e1c:2ace
db dummyf_40cae[32]; // 3e1c:2aee
db dummyf_40cce[32]; // 3e1c:2b0e
db dummyf_40cee[32]; // 3e1c:2b2e
db dummyf_40d0e[32]; // 3e1c:2b4e
db dummyf_40d2e[32]; // 3e1c:2b6e
db dummyf_40d4e[32]; // 3e1c:2b8e
db dummyf_40d6e[32]; // 3e1c:2bae
db dummyf_40d8e[32]; // 3e1c:2bce
db dummyf_40dae[32]; // 3e1c:2bee
db dummyf_40dce[32]; // 3e1c:2c0e
db dummyf_40dee; // 3e1c:2c2e
db dummyf_40def; // 3e1c:2c2f
db dummyf_40df0; // 3e1c:2c30
db dummyf_40df1; // 3e1c:2c31
db dummyf_40df2; // 3e1c:2c32
db dummyf_40df3; // 3e1c:2c33
db dummyf_40df4; // 3e1c:2c34
db dummyf_40df5; // 3e1c:2c35
db dummyf_40df6; // 3e1c:2c36
db dummyf_40df7;
db dummyf_40df8; // 3e1c:2c38
db dummyf_40df9; // 3e1c:2c39
db dummyf_40dfa; // 3e1c:2c3a
db dummyf_40dfb; // 3e1c:2c3b
db dummyf_40dfc; // 3e1c:2c3c
db dummyf_40dfd; // 3e1c:2c3d
db dummyf_40dfe; // 3e1c:2c3e
db dummyf_40dff; // 3e1c:2c3f
db dummyf_40e00; // 3e1c:2c40
db dummyf_40e01; // 3e1c:2c41
db dummyf_40e02; // 3e1c:2c42
db dummyf_40e03; // 3e1c:2c43
db dummyf_40e04; // 3e1c:2c44
db dummyf_40e05; // 3e1c:2c45
db dummyf_40e06; // 3e1c:2c46
db dummyf_40e07;
db dummyf_40e08; // 3e1c:2c48
dw dummyf_40e09; // 3e1c:2c49
dw dummyf_40e0b; // 3e1c:2c4b
db dummyf_40e0d; // 3e1c:2c4d
db dummyf_40e0e; // 3e1c:2c4e
db dummyf_40e0f; // 3e1c:2c4f
db dummyf_40e10; // 3e1c:2c50
db dummyf_40e11; // 3e1c:2c51
db dummyf_40e12; // 3e1c:2c52
db dummyf_40e13; // 3e1c:2c53
db dummyf_40e14; // 3e1c:2c54
db dummyf_40e15; // 3e1c:2c55
db dummyf_40e16; // 3e1c:2c56
db dummyf_40e17; // 3e1c:2c57
db dummyf_40e18; // 3e1c:2c58
dw dummyf_40e19; // 3e1c:2c59
db dummyf_40e1b; // 3e1c:2c5b
db dummyf_40e1c; // 3e1c:2c5c
db dummyf_40e1d; // 3e1c:2c5d
db dummyf_40e1e; // 3e1c:2c5e
db dummyf_40e1f; // 3e1c:2c5f
db dummyf_40e20; // 3e1c:2c60
db dummyf_40e21; // 3e1c:2c61
db dummyf_40e22; // 3e1c:2c62
db dummyf_40e23; // 3e1c:2c63
db dummyf_40e24; // 3e1c:2c64
db dummyf_40e25; // 3e1c:2c65
db dummyf_40e26; // 3e1c:2c66
db dummyf_40e27; // 3e1c:2c67
db dummyf_40e28; // 3e1c:2c68
db dummyf_40e29; // 3e1c:2c69
dw dummyf_40e2a; // 3e1c:2c6a
db dummyf_40e2c; // 3e1c:2c6c
db dummyf_40e2d; // 3e1c:2c6d
db dummyf_40e2e; // 3e1c:2c6e
db dummyf_40e2f; // 3e1c:2c6f
db dummyf_40e30; // 3e1c:2c70
db dummyf_40e31; // 3e1c:2c71
db dummyf_40e32; // 3e1c:2c72
db dummyf_40e33; // 3e1c:2c73
db dummyf_40e34; // 3e1c:2c74
db dummyf_40e35; // 3e1c:2c75
db dummyf_40e36; // 3e1c:2c76
db dummyf_40e37; // 3e1c:2c77
dw dummyf_40e38; // 3e1c:2c78
db dummyf_40e3a; // 3e1c:2c7a
db dummyf_40e3b; // 3e1c:2c7b
db dummyf_40e3c; // 3e1c:2c7c
db dummyf_40e3d; // 3e1c:2c7d
db dummyf_40e3e; // 3e1c:2c7e
db dummyf_40e3f; // 3e1c:2c7f
db dummyf_40e40; // 3e1c:2c80
db dummyf_40e41; // 3e1c:2c81
db dummyf_40e42; // 3e1c:2c82
db dummyf_40e43; // 3e1c:2c83
db dummyf_40e44; // 3e1c:2c84
db dummyf_40e45; // 3e1c:2c85
db dummyf_40e46; // 3e1c:2c86
db dummyf_40e47; // 3e1c:2c87
db dummyf_40e48; // 3e1c:2c88
db dummyf_40e49; // 3e1c:2c89
db dummyf_40e4a;
db dummyf_40e4b; // 3e1c:2c8b
db dummyf_40e4c; // 3e1c:2c8c
db dummyf_40e4d; // 3e1c:2c8d
dw word_4f42e; // 3e1c:2c8e
dw word_4f430; // 3e1c:2c90
db dummyf_40e52[32]; // 3e1c:2c92
db dummyf_40e72; // 3e1c:2cb2
db dummyf_40e73; // 3e1c:2cb3
db dummyf_40e74; // 3e1c:2cb4
dw dummyf_40e75; // 3e1c:2cb5
db dummyf_40e77; // 3e1c:2cb7
db dummyf_40e78; // 3e1c:2cb8
db dummyf_40e79; // 3e1c:2cb9
db dummyf_40e7a; // 3e1c:2cba
db dummyf_40e7b; // 3e1c:2cbb
db dummyf_40e7c; // 3e1c:2cbc
db dummyf_40e7d;
db dummyf_40e7e; // 3e1c:2cbe
db dummyf_40e7f; // 3e1c:2cbf
db dummyf_40e80; // 3e1c:2cc0
db dummyf_40e81; // 3e1c:2cc1
db dummyf_40e82; // 3e1c:2cc2
db dummyf_40e83; // 3e1c:2cc3
db dummyf_40e84; // 3e1c:2cc4
db dummyf_40e85; // 3e1c:2cc5
db dummyf_40e86; // 3e1c:2cc6
db dummyf_40e87; // 3e1c:2cc7
db dummyf_40e88; // 3e1c:2cc8
db dummyf_40e89; // 3e1c:2cc9
db dummyf_40e8a; // 3e1c:2cca
db dummyf_40e8b; // 3e1c:2ccb
db dummyf_40e8c; // 3e1c:2ccc
dw dummyf_40e8d; // 3e1c:2ccd
db dummyf_40e8f[32]; // 3e1c:2ccf
db dummyf_40eaf[32]; // 3e1c:2cef
db dummyf_40ecf[32]; // 3e1c:2d0f
db dummyf_40eef[32]; // 3e1c:2d2f
db dummyf_40f0f; // 3e1c:2d4f
db dummyf_40f10; // 3e1c:2d50
db dummyf_40f11; // 3e1c:2d51
db dummyf_40f12; // 3e1c:2d52
db dummyf_40f13; // 3e1c:2d53
db dummyf_40f14; // 3e1c:2d54
db dummyf_40f15; // 3e1c:2d55
db dummyf_40f16; // 3e1c:2d56
db dummyf_40f17; // 3e1c:2d57
db dummyf_40f18; // 3e1c:2d58
db dummyf_40f19; // 3e1c:2d59
dd dummyf_40f1a; // 3e1c:2d5a
db dummyf_40f1e[32]; // 3e1c:2d5e
db dummyf_40f3e; // 3e1c:2d7e
db dummyf_40f3f; // 3e1c:2d7f
db dummyf_40f40; // 3e1c:2d80
dw dummyf_40f41; // 3e1c:2d81
db dummyf_40f43; // 3e1c:2d83
db dummyf_40f44; // 3e1c:2d84
db dummyf_40f45; // 3e1c:2d85
db dummyf_40f46; // 3e1c:2d86
db dummyf_40f47; // 3e1c:2d87
db dummyf_40f48; // 3e1c:2d88
db dummyf_40f49;
db dummyf_40f4a; // 3e1c:2d8a
db dummyf_40f4b; // 3e1c:2d8b
db dummyf_40f4c; // 3e1c:2d8c
db dummyf_40f4d; // 3e1c:2d8d
db dummyf_40f4e; // 3e1c:2d8e
db dummyf_40f4f; // 3e1c:2d8f
db unk_4f530; // 3e1c:2d90
db dummyf_40f51; // 3e1c:2d91
db dummyf_40f52; // 3e1c:2d92
dw dummyf_40f53; // 3e1c:2d93
db dummyf_40f55[32]; // 3e1c:2d95
db dummyf_40f75[32]; // 3e1c:2db5
db dummyf_40f95[32]; // 3e1c:2dd5
db dummyf_40fb5[32]; // 3e1c:2df5
db dummyf_40fd5[32]; // 3e1c:2e15
db dummyf_40ff5[32]; // 3e1c:2e35
db dummyf_41015[32]; // 3e1c:2e55
db dummyf_41035; // 3e1c:2e75
db dummyf_41036; // 3e1c:2e76
db dummyf_41037; // 3e1c:2e77
db dummyf_41038; // 3e1c:2e78
db dummyf_41039; // 3e1c:2e79
db dummyf_4103a; // 3e1c:2e7a
db dummyf_4103b; // 3e1c:2e7b
db dummyf_4103c; // 3e1c:2e7c
db dummyf_4103d; // 3e1c:2e7d
db dummyf_4103e; // 3e1c:2e7e
db dummyf_4103f; // 3e1c:2e7f
db dummyf_41040; // 3e1c:2e80
db dummyf_41041; // 3e1c:2e81
db dummyf_41042; // 3e1c:2e82
db dummyf_41043; // 3e1c:2e83
db dummyf_41044; // 3e1c:2e84
db dummyf_41045; // 3e1c:2e85
db dummyf_41046; // 3e1c:2e86
db dummyf_41047; // 3e1c:2e87
db dummyf_41048; // 3e1c:2e88
db dummyf_41049; // 3e1c:2e89
db dummyf_4104a; // 3e1c:2e8a
db dummyf_4104b; // 3e1c:2e8b
db dummyf_4104c; // 3e1c:2e8c
db dummyf_4104d; // 3e1c:2e8d
db dummyf_4104e; // 3e1c:2e8e
db dummyf_4104f; // 3e1c:2e8f
db dummyf_41050; // 3e1c:2e90
db dummyf_41051; // 3e1c:2e91
dw word_4f632; // 3e1c:2e92
db dummyf_41054; // 3e1c:2e94
db dummyf_41055; // 3e1c:2e95
db dummyf_41056; // 3e1c:2e96
db dummyf_41057; // 3e1c:2e97
db dummyf_41058; // 3e1c:2e98
db dummyf_41059; // 3e1c:2e99
db dummyf_4105a; // 3e1c:2e9a
db dummyf_4105b; // 3e1c:2e9b
db dummyf_4105c; // 3e1c:2e9c
db dummyf_4105d; // 3e1c:2e9d
db dummyf_4105e; // 3e1c:2e9e
db dummyf_4105f; // 3e1c:2e9f
db dummyf_41060; // 3e1c:2ea0
db dummyf_41061; // 3e1c:2ea1
db dummyf_41062; // 3e1c:2ea2
dw dummyf_41063; // 3e1c:2ea3
db dummyf_41065[32]; // 3e1c:2ea5
db dummyf_41085[32]; // 3e1c:2ec5
db dummyf_410a5[32]; // 3e1c:2ee5
db dummyf_410c5[32]; // 3e1c:2f05
db dummyf_410e5[32]; // 3e1c:2f25
db dummyf_41105[32]; // 3e1c:2f45
db dummyf_41125[32]; // 3e1c:2f65
db dummyf_41145[32]; // 3e1c:2f85
db dummyf_41165[32]; // 3e1c:2fa5
db dummyf_41185[32]; // 3e1c:2fc5
db dummyf_411a5[32]; // 3e1c:2fe5
db dummyf_411c5[32]; // 3e1c:3005
db dummyf_411e5[32]; // 3e1c:3025
db dummyf_41205[32]; // 3e1c:3045
db dummyf_41225[32]; // 3e1c:3065
db dummyf_41245; // 3e1c:3085
db dummyf_41246; // 3e1c:3086
db dummyf_41247; // 3e1c:3087
db dummyf_41248; // 3e1c:3088
db dummyf_41249; // 3e1c:3089
db dummyf_4124a; // 3e1c:308a
db dummyf_4124b; // 3e1c:308b
db dummyf_4124c; // 3e1c:308c
db dummyf_4124d; // 3e1c:308d
db dummyf_4124e; // 3e1c:308e
db dummyf_4124f; // 3e1c:308f
db dummyf_41250; // 3e1c:3090
db dummyf_41251; // 3e1c:3091
db dummyf_41252; // 3e1c:3092
db dummyf_41253; // 3e1c:3093
dw word_4f834; // 3e1c:3094
dw word_4f836; // 3e1c:3096
db dummyf_41258[32]; // 3e1c:3098
db dummyf_41278[32]; // 3e1c:30b8
db dummyf_41298[32]; // 3e1c:30d8
db dummyf_412b8[32]; // 3e1c:30f8
db dummyf_412d8[32]; // 3e1c:3118
db dummyf_412f8[32]; // 3e1c:3138
db dummyf_41318[32]; // 3e1c:3158
db dummyf_41338[32]; // 3e1c:3178
db dummyf_41358[32]; // 3e1c:3198
db dummyf_41378[32]; // 3e1c:31b8
db dummyf_41398; // 3e1c:31d8
db dummyf_41399; // 3e1c:31d9
db dummyf_4139a; // 3e1c:31da
db dummyf_4139b; // 3e1c:31db
db dummyf_4139c; // 3e1c:31dc
db dummyf_4139d; // 3e1c:31dd
db dummyf_4139e; // 3e1c:31de
db dummyf_4139f; // 3e1c:31df
db dummyf_413a0; // 3e1c:31e0
db dummyf_413a1; // 3e1c:31e1
db dummyf_413a2; // 3e1c:31e2
db dummyf_413a3; // 3e1c:31e3
db dummyf_413a4; // 3e1c:31e4
db dummyf_413a5; // 3e1c:31e5
db dummyf_413a6; // 3e1c:31e6
db dummyf_413a7; // 3e1c:31e7
db dummyf_413a8; // 3e1c:31e8
db dummyf_413a9; // 3e1c:31e9
db dummyf_413aa; // 3e1c:31ea
dw dummyf_413ab; // 3e1c:31eb
db dummyf_413ad; // 3e1c:31ed
db dummyf_413ae; // 3e1c:31ee
db dummyf_413af; // 3e1c:31ef
db dummyf_413b0; // 3e1c:31f0
db dummyf_413b1; // 3e1c:31f1
db dummyf_413b2; // 3e1c:31f2
db dummyf_413b3;
db dummyf_413b4; // 3e1c:31f4
db dummyf_413b5; // 3e1c:31f5
db dummyf_413b6; // 3e1c:31f6
db dummyf_413b7; // 3e1c:31f7
db dummyf_413b8; // 3e1c:31f8
db dummyf_413b9; // 3e1c:31f9
db dummyf_413ba; // 3e1c:31fa
db dummyf_413bb; // 3e1c:31fb
db dummyf_413bc; // 3e1c:31fc
db dummyf_413bd; // 3e1c:31fd
db dummyf_413be; // 3e1c:31fe
db dummyf_413bf; // 3e1c:31ff
db dummyf_413c0; // 3e1c:3200
db dummyf_413c1; // 3e1c:3201
db dummyf_413c2; // 3e1c:3202
dw dummyf_413c3; // 3e1c:3203
db dummyf_413c5[32]; // 3e1c:3205
db dummyf_413e5[32]; // 3e1c:3225
db dummyf_41405[32]; // 3e1c:3245
db dummyf_41425[32]; // 3e1c:3265
db dummyf_41445; // 3e1c:3285
db dummyf_41446; // 3e1c:3286
db dummyf_41447; // 3e1c:3287
db dummyf_41448; // 3e1c:3288
db dummyf_41449; // 3e1c:3289
db dummyf_4144a; // 3e1c:328a
db dummyf_4144b; // 3e1c:328b
db dummyf_4144c; // 3e1c:328c
db dummyf_4144d; // 3e1c:328d
db dummyf_4144e; // 3e1c:328e
db dummyf_4144f; // 3e1c:328f
dd dummyf_41450; // 3e1c:3290
db dummyf_41454; // 3e1c:3294
db dummyf_41455; // 3e1c:3295
db dummyf_41456; // 3e1c:3296
db dummyf_41457; // 3e1c:3297
dw word_4fa38; // 3e1c:3298
db dummyf_4145a; // 3e1c:329a
db dummyf_4145b; // 3e1c:329b
db dummyf_4145c; // 3e1c:329c
db dummyf_4145d; // 3e1c:329d
db dummyf_4145e; // 3e1c:329e
db dummyf_4145f;
db dummyf_41460; // 3e1c:32a0
db dummyf_41461; // 3e1c:32a1
db dummyf_41462; // 3e1c:32a2
db dummyf_41463; // 3e1c:32a3
db dummyf_41464; // 3e1c:32a4
db dummyf_41465; // 3e1c:32a5
db dummyf_41466; // 3e1c:32a6
db dummyf_41467; // 3e1c:32a7
db dummyf_41468; // 3e1c:32a8
db dummyf_41469; // 3e1c:32a9
db dummyf_4146a; // 3e1c:32aa
db dummyf_4146b; // 3e1c:32ab
db dummyf_4146c; // 3e1c:32ac
db dummyf_4146d; // 3e1c:32ad
db dummyf_4146e; // 3e1c:32ae
db dummyf_4146f; // 3e1c:32af
db dummyf_41470; // 3e1c:32b0
db dummyf_41471; // 3e1c:32b1
db dummyf_41472; // 3e1c:32b2
db dummyf_41473; // 3e1c:32b3
db dummyf_41474; // 3e1c:32b4
db dummyf_41475; // 3e1c:32b5
db dummyf_41476; // 3e1c:32b6
dw dummyf_41477; // 3e1c:32b7
db dummyf_41479; // 3e1c:32b9
db dummyf_4147a; // 3e1c:32ba
db dummyf_4147b; // 3e1c:32bb
db dummyf_4147c; // 3e1c:32bc
db dummyf_4147d; // 3e1c:32bd
db dummyf_4147e; // 3e1c:32be
db dummyf_4147f;
db dummyf_41480; // 3e1c:32c0
db dummyf_41481; // 3e1c:32c1
db dummyf_41482; // 3e1c:32c2
db dummyf_41483; // 3e1c:32c3
db dummyf_41484; // 3e1c:32c4
db dummyf_41485; // 3e1c:32c5
db unk_4fa66; // 3e1c:32c6
db dummyf_41487; // 3e1c:32c7
db dummyf_41488; // 3e1c:32c8
dw dummyf_41489; // 3e1c:32c9
db dummyf_4148b[32]; // 3e1c:32cb
db dummyf_414ab[32]; // 3e1c:32eb
db dummyf_414cb[32]; // 3e1c:330b
db dummyf_414eb[32]; // 3e1c:332b
db dummyf_4150b[32]; // 3e1c:334b
db dummyf_4152b[32]; // 3e1c:336b
db dummyf_4154b[32]; // 3e1c:338b
db dummyf_4156b[32]; // 3e1c:33ab
db dummyf_4158b; // 3e1c:33cb
db dummyf_4158c; // 3e1c:33cc
db dummyf_4158d; // 3e1c:33cd
db dummyf_4158e; // 3e1c:33ce
db dummyf_4158f; // 3e1c:33cf
db dummyf_41590; // 3e1c:33d0
db dummyf_41591; // 3e1c:33d1
db dummyf_41592; // 3e1c:33d2
db dummyf_41593; // 3e1c:33d3
db dummyf_41594; // 3e1c:33d4
db dummyf_41595; // 3e1c:33d5
db dummyf_41596; // 3e1c:33d6
db dummyf_41597; // 3e1c:33d7
db dummyf_41598;
db dummyf_41599; // 3e1c:33d9
db dummyf_4159a; // 3e1c:33da
db dummyf_4159b; // 3e1c:33db
db dummyf_4159c; // 3e1c:33dc
db dummyf_4159d; // 3e1c:33dd
db dummyf_4159e; // 3e1c:33de
db dummyf_4159f; // 3e1c:33df
db dummyf_415a0; // 3e1c:33e0
db dummyf_415a1; // 3e1c:33e1
db dummyf_415a2; // 3e1c:33e2
db dummyf_415a3; // 3e1c:33e3
db dummyf_415a4; // 3e1c:33e4
db dummyf_415a5; // 3e1c:33e5
db dummyf_415a6; // 3e1c:33e6
db dummyf_415a7; // 3e1c:33e7
db dummyf_415a8; // 3e1c:33e8
db dummyf_415a9;
db byte_4fb8a; // 3e1c:33ea
db dummyf_415ab; // 3e1c:33eb
dw word_4fb8c; // 3e1c:33ec
db dummyf_415ae[32]; // 3e1c:33ee
db dummyf_415ce[32]; // 3e1c:340e
db dummyf_415ee[32]; // 3e1c:342e
db dummyf_4160e; // 3e1c:344e
db dummyf_4160f; // 3e1c:344f
db dummyf_41610; // 3e1c:3450
db dummyf_41611; // 3e1c:3451
db dummyf_41612; // 3e1c:3452
db dummyf_41613; // 3e1c:3453
db dummyf_41614; // 3e1c:3454
db dummyf_41615; // 3e1c:3455
db dummyf_41616; // 3e1c:3456
db dummyf_41617; // 3e1c:3457
db dummyf_41618; // 3e1c:3458
db dummyf_41619; // 3e1c:3459
db dummyf_4161a; // 3e1c:345a
db dummyf_4161b; // 3e1c:345b
db dummyf_4161c; // 3e1c:345c
db dummyf_4161d; // 3e1c:345d
db dummyf_4161e; // 3e1c:345e
db dummyf_4161f; // 3e1c:345f
db dummyf_41620; // 3e1c:3460
db dummyf_41621; // 3e1c:3461
db dummyf_41622; // 3e1c:3462
db dummyf_41623; // 3e1c:3463
db dummyf_41624; // 3e1c:3464
dw dummyf_41625; // 3e1c:3465
db dummyf_41627[32]; // 3e1c:3467
db dummyf_41647[32]; // 3e1c:3487
db dummyf_41667[32]; // 3e1c:34a7
db dummyf_41687[32]; // 3e1c:34c7
db dummyf_416a7[32]; // 3e1c:34e7
db dummyf_416c7[32]; // 3e1c:3507
db dummyf_416e7[32]; // 3e1c:3527
db dummyf_41707[32]; // 3e1c:3547
db dummyf_41727[32]; // 3e1c:3567
db dummyf_41747[32]; // 3e1c:3587
db dummyf_41767; // 3e1c:35a7
db dummyf_41768; // 3e1c:35a8
db dummyf_41769; // 3e1c:35a9
db dummyf_4176a; // 3e1c:35aa
db dummyf_4176b; // 3e1c:35ab
db dummyf_4176c; // 3e1c:35ac
db dummyf_4176d; // 3e1c:35ad
db dummyf_4176e; // 3e1c:35ae
db dummyf_4176f; // 3e1c:35af
db dummyf_41770; // 3e1c:35b0
db dummyf_41771; // 3e1c:35b1
db dummyf_41772; // 3e1c:35b2
db dummyf_41773; // 3e1c:35b3
db dummyf_41774; // 3e1c:35b4
db dummyf_41775; // 3e1c:35b5
db dummyf_41776; // 3e1c:35b6
db dummyf_41777; // 3e1c:35b7
db dummyf_41778; // 3e1c:35b8
db dummyf_41779; // 3e1c:35b9
db dummyf_4177a; // 3e1c:35ba
db dummyf_4177b; // 3e1c:35bb
db dummyf_4177c; // 3e1c:35bc
db dummyf_4177d; // 3e1c:35bd
db dummyf_4177e; // 3e1c:35be
db dummyf_4177f; // 3e1c:35bf
db dummyf_41780; // 3e1c:35c0
db dummyf_41781; // 3e1c:35c1
db dummyf_41782; // 3e1c:35c2
dw dummyf_41783; // 3e1c:35c3
db dummyf_41785[32]; // 3e1c:35c5
db dummyf_417a5[32]; // 3e1c:35e5
db dummyf_417c5[32]; // 3e1c:3605
db dummyf_417e5[32]; // 3e1c:3625
db dummyf_41805[32]; // 3e1c:3645
db dummyf_41825; // 3e1c:3665
db dummyf_41826; // 3e1c:3666
db dummyf_41827; // 3e1c:3667
db dummyf_41828; // 3e1c:3668
db dummyf_41829; // 3e1c:3669
db dummyf_4182a; // 3e1c:366a
db dummyf_4182b; // 3e1c:366b
db dummyf_4182c; // 3e1c:366c
db dummyf_4182d; // 3e1c:366d
db dummyf_4182e; // 3e1c:366e
db dummyf_4182f; // 3e1c:366f
db dummyf_41830; // 3e1c:3670
db dummyf_41831; // 3e1c:3671
db dummyf_41832; // 3e1c:3672
db dummyf_41833; // 3e1c:3673
db dummyf_41834; // 3e1c:3674
db dummyf_41835; // 3e1c:3675
db dummyf_41836; // 3e1c:3676
db dummyf_41837; // 3e1c:3677
db dummyf_41838; // 3e1c:3678
db dummyf_41839; // 3e1c:3679
db dummyf_4183a; // 3e1c:367a
db dummyf_4183b; // 3e1c:367b
db dummyf_4183c; // 3e1c:367c
db dummyf_4183d; // 3e1c:367d
db dummyf_4183e; // 3e1c:367e
db dummyf_4183f; // 3e1c:367f
db dummyf_41840; // 3e1c:3680
db dummyf_41841; // 3e1c:3681
dw dummyf_41842; // 3e1c:3682
db dummyf_41844[32]; // 3e1c:3684
db dummyf_41864[32]; // 3e1c:36a4
db dummyf_41884[32]; // 3e1c:36c4
db dummyf_418a4[32]; // 3e1c:36e4
db dummyf_418c4[32]; // 3e1c:3704
db dummyf_418e4; // 3e1c:3724
db dummyf_418e5; // 3e1c:3725
db dummyf_418e6; // 3e1c:3726
db dummyf_418e7; // 3e1c:3727
db dummyf_418e8; // 3e1c:3728
db dummyf_418e9; // 3e1c:3729
db dummyf_418ea; // 3e1c:372a
db dummyf_418eb; // 3e1c:372b
db dummyf_418ec; // 3e1c:372c
db dummyf_418ed; // 3e1c:372d
db dummyf_418ee; // 3e1c:372e
db dummyf_418ef; // 3e1c:372f
db dummyf_418f0; // 3e1c:3730
db dummyf_418f1; // 3e1c:3731
db dummyf_418f2; // 3e1c:3732
db dummyf_418f3; // 3e1c:3733
db dummyf_418f4; // 3e1c:3734
dw dummyf_418f5; // 3e1c:3735
db dummyf_418f7[32]; // 3e1c:3737
db dummyf_41917[32]; // 3e1c:3757
db dummyf_41937[32]; // 3e1c:3777
db dummyf_41957[32]; // 3e1c:3797
db dummyf_41977[32]; // 3e1c:37b7
db dummyf_41997[32]; // 3e1c:37d7
db dummyf_419b7[32]; // 3e1c:37f7
db dummyf_419d7[32]; // 3e1c:3817
db dummyf_419f7[32]; // 3e1c:3837
db dummyf_41a17[32]; // 3e1c:3857
db dummyf_41a37[32]; // 3e1c:3877
db dummyf_41a57[32]; // 3e1c:3897
db dummyf_41a77[32]; // 3e1c:38b7
db dummyf_41a97; // 3e1c:38d7
db dummyf_41a98; // 3e1c:38d8
db dummyf_41a99; // 3e1c:38d9
db dummyf_41a9a; // 3e1c:38da
db dummyf_41a9b; // 3e1c:38db
db dummyf_41a9c; // 3e1c:38dc
db dummyf_41a9d; // 3e1c:38dd
db dummyf_41a9e; // 3e1c:38de
db dummyf_41a9f; // 3e1c:38df
db dummyf_41aa0; // 3e1c:38e0
db dummyf_41aa1; // 3e1c:38e1
db dummyf_41aa2; // 3e1c:38e2
db dummyf_41aa3; // 3e1c:38e3
db dummyf_41aa4; // 3e1c:38e4
db dummyf_41aa5; // 3e1c:38e5
db dummyf_41aa6; // 3e1c:38e6
db dummyf_41aa7; // 3e1c:38e7
db dummyf_41aa8; // 3e1c:38e8
db dummyf_41aa9; // 3e1c:38e9
db dummyf_41aaa; // 3e1c:38ea
db dummyf_41aab; // 3e1c:38eb
db dummyf_41aac; // 3e1c:38ec
db dummyf_41aad; // 3e1c:38ed
db dummyf_41aae; // 3e1c:38ee
dw dummyf_41aaf; // 3e1c:38ef
db dummyf_41ab1[32]; // 3e1c:38f1
db dummyf_41ad1[32]; // 3e1c:3911
db dummyf_41af1[32]; // 3e1c:3931
db dummyf_41b11[32]; // 3e1c:3951
db dummyf_41b31[32]; // 3e1c:3971
db dummyf_41b51[32]; // 3e1c:3991
db dummyf_41b71[32]; // 3e1c:39b1
db dummyf_41b91; // 3e1c:39d1
db dummyf_41b92; // 3e1c:39d2
db dummyf_41b93; // 3e1c:39d3
db dummyf_41b94; // 3e1c:39d4
db dummyf_41b95; // 3e1c:39d5
db dummyf_41b96; // 3e1c:39d6
db dummyf_41b97; // 3e1c:39d7
db dummyf_41b98; // 3e1c:39d8
db dummyf_41b99; // 3e1c:39d9
db dummyf_41b9a; // 3e1c:39da
db dummyf_41b9b;
db dummyf_41b9c;
db dummyf_41b9d; // 3e1c:39dd
db dummyf_41b9e; // 3e1c:39de
db dummyf_41b9f; // 3e1c:39df
db dummyf_41ba0; // 3e1c:39e0
db dummyf_41ba1; // 3e1c:39e1
db dummyf_41ba2;
db dummyf_41ba3; // 3e1c:39e3
db dummyf_41ba4; // 3e1c:39e4
db dummyf_41ba5; // 3e1c:39e5
db dummyf_41ba6; // 3e1c:39e6
db dummyf_41ba7; // 3e1c:39e7
db dummyf_41ba8; // 3e1c:39e8
db dummyf_41ba9; // 3e1c:39e9
dw dummyf_41baa; // 3e1c:39ea
db dummyf_41bac[32]; // 3e1c:39ec
db dummyf_41bcc[32]; // 3e1c:3a0c
db dummyf_41bec; // 3e1c:3a2c
db dummyf_41bed; // 3e1c:3a2d
db dummyf_41bee; // 3e1c:3a2e
db dummyf_41bef; // 3e1c:3a2f
db dummyf_41bf0; // 3e1c:3a30
db dummyf_41bf1; // 3e1c:3a31
db dummyf_41bf2; // 3e1c:3a32
db dummyf_41bf3; // 3e1c:3a33
db dummyf_41bf4; // 3e1c:3a34
db dummyf_41bf5;
db dummyf_41bf6; // 3e1c:3a36
db dummyf_41bf7; // 3e1c:3a37
db dummyf_41bf8; // 3e1c:3a38
db dummyf_41bf9; // 3e1c:3a39
db dummyf_41bfa; // 3e1c:3a3a
db dummyf_41bfb; // 3e1c:3a3b
db dummyf_41bfc; // 3e1c:3a3c
db dummyf_41bfd; // 3e1c:3a3d
db dummyf_41bfe; // 3e1c:3a3e
db dummyf_41bff; // 3e1c:3a3f
db dummyf_41c00; // 3e1c:3a40
db dummyf_41c01; // 3e1c:3a41
db dummyf_41c02; // 3e1c:3a42
dw dummyf_41c03; // 3e1c:3a43
db dummyf_41c05[32]; // 3e1c:3a45
db dummyf_41c25[32]; // 3e1c:3a65
db dummyf_41c45; // 3e1c:3a85
db dummyf_41c46; // 3e1c:3a86
db dummyf_41c47; // 3e1c:3a87
db dummyf_41c48; // 3e1c:3a88
db dummyf_41c49; // 3e1c:3a89
db dummyf_41c4a; // 3e1c:3a8a
db dummyf_41c4b; // 3e1c:3a8b
db dummyf_41c4c;
db dummyf_41c4d;
db dummyf_41c4e; // 3e1c:3a8e
db dummyf_41c4f; // 3e1c:3a8f
db dummyf_41c50; // 3e1c:3a90
db dummyf_41c51; // 3e1c:3a91
db dummyf_41c52; // 3e1c:3a92
db dummyf_41c53; // 3e1c:3a93
db dummyf_41c54; // 3e1c:3a94
db dummyf_41c55; // 3e1c:3a95
db dummyf_41c56; // 3e1c:3a96
db dummyf_41c57; // 3e1c:3a97
db dummyf_41c58; // 3e1c:3a98
db dummyf_41c59; // 3e1c:3a99
db dummyf_41c5a; // 3e1c:3a9a
db dummyf_41c5b; // 3e1c:3a9b
db dummyf_41c5c; // 3e1c:3a9c
db dummyf_41c5d; // 3e1c:3a9d
db dummyf_41c5e; // 3e1c:3a9e
dw dummyf_41c5f; // 3e1c:3a9f
db dummyf_41c61; // 3e1c:3aa1
db dummyf_41c62; // 3e1c:3aa2
db dummyf_41c63; // 3e1c:3aa3
db dummyf_41c64; // 3e1c:3aa4
db dummyf_41c65; // 3e1c:3aa5
db dummyf_41c66; // 3e1c:3aa6
db dummyf_41c67; // 3e1c:3aa7
db dummyf_41c68; // 3e1c:3aa8
db dummyf_41c69; // 3e1c:3aa9
db dummyf_41c6a; // 3e1c:3aaa
db dummyf_41c6b; // 3e1c:3aab
db dummyf_41c6c; // 3e1c:3aac
db dummyf_41c6d; // 3e1c:3aad
db dummyf_41c6e; // 3e1c:3aae
db dummyf_41c6f; // 3e1c:3aaf
db dummyf_41c70; // 3e1c:3ab0
db dummyf_41c71; // 3e1c:3ab1
db dummyf_41c72; // 3e1c:3ab2
db dummyf_41c73; // 3e1c:3ab3
db dummyf_41c74; // 3e1c:3ab4
db dummyf_41c75; // 3e1c:3ab5
db dummyf_41c76; // 3e1c:3ab6
db dummyf_41c77; // 3e1c:3ab7
db dummyf_41c78; // 3e1c:3ab8
db dummyf_41c79; // 3e1c:3ab9
dw dummyf_41c7a; // 3e1c:3aba
db dummyf_41c7c[32]; // 3e1c:3abc
db dummyf_41c9c[32]; // 3e1c:3adc
db dummyf_41cbc; // 3e1c:3afc
db dummyf_41cbd; // 3e1c:3afd
db dummyf_41cbe; // 3e1c:3afe
db dummyf_41cbf; // 3e1c:3aff
dw dummyf_41cc0; // 3e1c:3b00
db dummyf_41cc2[32]; // 3e1c:3b02
db dummyf_41ce2[32]; // 3e1c:3b22
db dummyf_41d02; // 3e1c:3b42
db dummyf_41d03; // 3e1c:3b43
db dummyf_41d04; // 3e1c:3b44
db dummyf_41d05; // 3e1c:3b45
db dummyf_41d06; // 3e1c:3b46
db dummyf_41d07; // 3e1c:3b47
db dummyf_41d08; // 3e1c:3b48
db dummyf_41d09; // 3e1c:3b49
db dummyf_41d0a; // 3e1c:3b4a
db dummyf_41d0b; // 3e1c:3b4b
db dummyf_41d0c; // 3e1c:3b4c
db dummyf_41d0d; // 3e1c:3b4d
db dummyf_41d0e; // 3e1c:3b4e
db dummyf_41d0f;
db dummyf_41d10; // 3e1c:3b50
db dummyf_41d11; // 3e1c:3b51
db dummyf_41d12; // 3e1c:3b52
db dummyf_41d13; // 3e1c:3b53
db dummyf_41d14; // 3e1c:3b54
db dummyf_41d15; // 3e1c:3b55
db dummyf_41d16; // 3e1c:3b56
dw dummyf_41d17; // 3e1c:3b57
db dummyf_41d19[32]; // 3e1c:3b59
db dummyf_41d39; // 3e1c:3b79
db dummyf_41d3a; // 3e1c:3b7a
db dummyf_41d3b; // 3e1c:3b7b
db dummyf_41d3c; // 3e1c:3b7c
db dummyf_41d3d; // 3e1c:3b7d
db dummyf_41d3e; // 3e1c:3b7e
db dummyf_41d3f;
db dummyf_41d40; // 3e1c:3b80
db dummyf_41d41; // 3e1c:3b81
db dummyf_41d42; // 3e1c:3b82
db dummyf_41d43; // 3e1c:3b83
db dummyf_41d44; // 3e1c:3b84
db dummyf_41d45; // 3e1c:3b85
db dummyf_41d46; // 3e1c:3b86
db dummyf_41d47; // 3e1c:3b87
db dummyf_41d48; // 3e1c:3b88
db dummyf_41d49;
db dummyf_41d4a; // 3e1c:3b8a
db dummyf_41d4b; // 3e1c:3b8b
db dummyf_41d4c; // 3e1c:3b8c
db dummyf_41d4d; // 3e1c:3b8d
db dummyf_41d4e; // 3e1c:3b8e
db dummyf_41d4f; // 3e1c:3b8f
db dummyf_41d50; // 3e1c:3b90
db dummyf_41d51; // 3e1c:3b91
db dummyf_41d52; // 3e1c:3b92
db dummyf_41d53; // 3e1c:3b93
db dummyf_41d54; // 3e1c:3b94
db dummyf_41d55; // 3e1c:3b95
db dummyf_41d56; // 3e1c:3b96
dw dummyf_41d57; // 3e1c:3b97
db dummyf_41d59[32]; // 3e1c:3b99
db dummyf_41d79[32]; // 3e1c:3bb9
db dummyf_41d99[32]; // 3e1c:3bd9
db dummyf_41db9[32]; // 3e1c:3bf9
db dummyf_41dd9[32]; // 3e1c:3c19
db dummyf_41df9[32]; // 3e1c:3c39
db dummyf_41e19[32]; // 3e1c:3c59
db dummyf_41e39[32]; // 3e1c:3c79
db dummyf_41e59[32]; // 3e1c:3c99
db dummyf_41e79[32]; // 3e1c:3cb9
db dummyf_41e99[32]; // 3e1c:3cd9
db dummyf_41eb9[32]; // 3e1c:3cf9
db dummyf_41ed9[32]; // 3e1c:3d19
db dummyf_41ef9[32]; // 3e1c:3d39
db dummyf_41f19[32]; // 3e1c:3d59
db dummyf_41f39[32]; // 3e1c:3d79
db dummyf_41f59[32]; // 3e1c:3d99
db dummyf_41f79[32]; // 3e1c:3db9
db dummyf_41f99[32]; // 3e1c:3dd9
db dummyf_41fb9[32]; // 3e1c:3df9
db dummyf_41fd9[32]; // 3e1c:3e19
db dummyf_41ff9[32]; // 3e1c:3e39
db dummyf_42019[32]; // 3e1c:3e59
db dummyf_42039[32]; // 3e1c:3e79
db dummyf_42059[32]; // 3e1c:3e99
db dummyf_42079[32]; // 3e1c:3eb9
db dummyf_42099[32]; // 3e1c:3ed9
db dummyf_420b9[32]; // 3e1c:3ef9
db dummyf_420d9[32]; // 3e1c:3f19
db dummyf_420f9[32]; // 3e1c:3f39
db dummyf_42119[32]; // 3e1c:3f59
db dummyf_42139[32]; // 3e1c:3f79
db dummyf_42159[32]; // 3e1c:3f99
db dummyf_42179[32]; // 3e1c:3fb9
db dummyf_42199[32]; // 3e1c:3fd9
db dummyf_421b9[32]; // 3e1c:3ff9
db dummyf_421d9[32]; // 3e1c:4019
db dummyf_421f9[32]; // 3e1c:4039
db dummyf_42219[32]; // 3e1c:4059
db dummyf_42239[32]; // 3e1c:4079
db dummyf_42259[32]; // 3e1c:4099
db dummyf_42279[32]; // 3e1c:40b9
db dummyf_42299[32]; // 3e1c:40d9
db dummyf_422b9[32]; // 3e1c:40f9
db dummyf_422d9[32]; // 3e1c:4119
db dummyf_422f9[32]; // 3e1c:4139
db dummyf_42319[32]; // 3e1c:4159
db dummyf_42339[32]; // 3e1c:4179
db dummyf_42359[32]; // 3e1c:4199
db dummyf_42379[32]; // 3e1c:41b9
db dummyf_42399[32]; // 3e1c:41d9
db dummyf_423b9[32]; // 3e1c:41f9
db dummyf_423d9[32]; // 3e1c:4219
db dummyf_423f9[32]; // 3e1c:4239
db dummyf_42419[32]; // 3e1c:4259
db dummyf_42439[32]; // 3e1c:4279
db dummyf_42459[32]; // 3e1c:4299
db dummyf_42479[32]; // 3e1c:42b9
db dummyf_42499[32]; // 3e1c:42d9
db dummyf_424b9[32]; // 3e1c:42f9
db dummyf_424d9[32]; // 3e1c:4319
db dummyf_424f9[32]; // 3e1c:4339
db dummyf_42519[32]; // 3e1c:4359
db dummyf_42539;
db dummyf_4253a;
db dummyf_4253b; // 3e1c:437b
db dummyf_4253c; // 3e1c:437c
db dummyf_4253d;
db dummyf_4253e;
db dummyf_4253f;
db dummyf_42540;
db dummyf_42541;
db dummyf_42542;
db dummyf_42543;
db dummyf_42544;
db dummyf_42545;
db dummyf_42546;
db dummyf_42547;
db dummyf_42548;
db dummyf_42549;
db dummyf_4254a;
db dummyf_4254b;
db dummyf_4254c;
db dummyf_4254d;
dw word_50b2e; // 3e1c:438e
db dummyf_42550[32]; // 3e1c:4390
db dummyf_42570[32]; // 3e1c:43b0
dw word_50b70; // 3e1c:43d0
db dummyf_42592;
db dummyf_42593;
dw word_50b74; // 3e1c:43d4
dw word_50b76; // 3e1c:43d6
db dummyf_42598[32]; // 3e1c:43d8
db dummyf_425b8[32]; // 3e1c:43f8
db dummyf_425d8[32]; // 3e1c:4418
db dummyf_425f8[32]; // 3e1c:4438
db dummyf_42618[32]; // 3e1c:4458
db dummyf_42638[32]; // 3e1c:4478
db dummyf_42658[32]; // 3e1c:4498
db dummyf_42678[32]; // 3e1c:44b8
db dummyf_42698;
db dummyf_42699;
db dummyf_4269a;
db dummyf_4269b;
db dummyf_4269c;
db dummyf_4269d;
db dummyf_4269e;
db dummyf_4269f;
db dummyf_426a0;
db dummyf_426a1;
db dummyf_426a2;
db dummyf_426a3;
db dummyf_426a4;
db dummyf_426a5;
db dummyf_426a6;
db dummyf_426a7;
db dummyf_426a8;
db dummyf_426a9;
dw word_50c8a; // 3e1c:44ea
db dummyf_426ac;
db dummyf_426ad;
dw word_50c8e; // 3e1c:44ee
db asc_50c90[17]; // 3e1c:44f0
db dummyf_426c1[32]; // 3e1c:4501
db dummyf_426e1[32]; // 3e1c:4521
db dummyf_42701[32]; // 3e1c:4541
db dummyf_42721[32]; // 3e1c:4561
db dummyf_42741[32]; // 3e1c:4581
db dummyf_42761[32]; // 3e1c:45a1
db dummyf_42781[32]; // 3e1c:45c1
db dummyf_427a1[32]; // 3e1c:45e1
db dummyf_427c1[32]; // 3e1c:4601
db dummyf_427e1[32]; // 3e1c:4621
db dummyf_42801[32]; // 3e1c:4641
db dummyf_42821[32]; // 3e1c:4661
db dummyf_42841[32]; // 3e1c:4681
db dummyf_42861[32]; // 3e1c:46a1
db dummyf_42881[32]; // 3e1c:46c1
db dummyf_428a1[32]; // 3e1c:46e1
db dummyf_428c1[32]; // 3e1c:4701
db dummyf_428e1[32]; // 3e1c:4721
db dummyf_42901[32]; // 3e1c:4741
db dummyf_42921[32]; // 3e1c:4761
db dummyf_42941[32]; // 3e1c:4781
db dummyf_42961[32]; // 3e1c:47a1
db dummyf_42981[32]; // 3e1c:47c1
db dummyf_429a1[32]; // 3e1c:47e1
db dummyf_429c1[32]; // 3e1c:4801
db dummyf_429e1[32]; // 3e1c:4821
db dummyf_42a01[32]; // 3e1c:4841
db dummyf_42a21[32]; // 3e1c:4861
db dummyf_42a41[32]; // 3e1c:4881
db dummyf_42a61[32]; // 3e1c:48a1
db dummyf_42a81[32]; // 3e1c:48c1
db dummyf_42aa1[32]; // 3e1c:48e1
db dummyf_42ac1[32]; // 3e1c:4901
db dummyf_42ae1[32]; // 3e1c:4921
db dummyf_42b01[32]; // 3e1c:4941
db dummyf_42b21[32]; // 3e1c:4961
db dummyf_42b41;
db dummyf_42b42;
db dummyf_42b43;
db dummyf_42b44;
db dummyf_42b45;
db dummyf_42b46;
db dummyf_42b47;
db dummyf_42b48;
db dummyf_42b49;
db dummyf_42b4a;
db dummyf_42b4b;
db dummyf_42b4c;
db dummyf_42b4d;
db dummyf_42b4e;
db dummyf_42b4f;
db dummyf_42b50;
db dummyf_42b51;
db dummyf_42b52;
db dummyf_42b53;
db dummyf_42b54;
db dummyf_42b55;
db dummyf_42b56;
db dummyf_42b57;
db dummyf_42b58;
db dummyf_42b59;
db dummyf_42b5a;
db dummyf_42b5b;
dw word_5113c; // 3e1c:499c
db dummyf_42b5e[32]; // 3e1c:499e
db dummyf_42b7e[32]; // 3e1c:49be
db dummyf_42b9e[32]; // 3e1c:49de
db dummyf_42bbe[32]; // 3e1c:49fe
db dummyf_42bde;
db dummyf_42bdf;
db dummyf_42be0;
db dummyf_42be1;
db dummyf_42be2;
db dummyf_42be3;
db dummyf_42be4;
db dummyf_42be5;
db dummyf_42be6;
db dummyf_42be7;
db dummyf_42be8;
db dummyf_42be9;
db dummyf_42bea;
db dummyf_42beb;
db dummyf_42bec;
db dummyf_42bed;
db dummyf_42bee;
db dummyf_42bef;
db dummyf_42bf0;
db dummyf_42bf1;
db dummyf_42bf2;
db dummyf_42bf3;
dw word_511d4; // 3e1c:4a34
dw word_511d6; // 3e1c:4a36
dw word_511d8; // 3e1c:4a38
dw word_511da; // 3e1c:4a3a
db dummyf_42bfc[32]; // 3e1c:4a3c
db dummyf_42c1c[32]; // 3e1c:4a5c
db dummyf_42c3c[32]; // 3e1c:4a7c
db dummyf_42c5c[32]; // 3e1c:4a9c
db dummyf_42c7c[32]; // 3e1c:4abc
db dummyf_42c9c[32]; // 3e1c:4adc
db dummyf_42cbc[32]; // 3e1c:4afc
db dummyf_42cdc[32]; // 3e1c:4b1c
db asc_512dc[11]; // 3e1c:4b3c
db dummyf_42d07[32]; // 3e1c:4b47
db dummyf_42d27[32]; // 3e1c:4b67
db dummyf_42d47[32]; // 3e1c:4b87
db dummyf_42d67[32]; // 3e1c:4ba7
db dummyf_42d87;
db dummyf_42d88;
db dummyf_42d89;
db dummyf_42d8a;
db dummyf_42d8b;
db dummyf_42d8c;
db dummyf_42d8d;
db dummyf_42d8e;
db dummyf_42d8f;
db dummyf_42d90;
db dummyf_42d91;
db dummyf_42d92;
db dummyf_42d93;
dw word_51374; // 3e1c:4bd4
dw word_51376; // 3e1c:4bd6
dw word_51378; // 3e1c:4bd8
db dummyf_42d9a;
db dummyf_42d9b; // 3e1c:4bdb
dw word_5137c; // 3e1c:4bdc
db dummyf_42d9e;
db dummyf_42d9f;
db dummyf_42da0;
db dummyf_42da1;
db dummyf_42da2;
db dummyf_42da3;
db dummyf_42da4;
db dummyf_42da5;
db dummyf_42da6;
db dummyf_42da7;
dw word_51388; // 3e1c:4be8
dw word_5138a; // 3e1c:4bea
db dummyf_42dac;
db dummyf_42dad;
db asc_5138e[14]; // 3e1c:4bee
db dummyf_42dbc[32]; // 3e1c:4bfc
db dummyf_42ddc[32]; // 3e1c:4c1c
db dummyf_42dfc[32]; // 3e1c:4c3c
db dummyf_42e1c[32]; // 3e1c:4c5c
db dummyf_42e3c; // 3e1c:4c7c
db dummyf_42e3d; // 3e1c:4c7d
db dummyf_42e3e; // 3e1c:4c7e
db dummyf_42e3f; // 3e1c:4c7f
db dummyf_42e40; // 3e1c:4c80
db dummyf_42e41; // 3e1c:4c81
db dummyf_42e42; // 3e1c:4c82
db dummyf_42e43; // 3e1c:4c83
db dummyf_42e44; // 3e1c:4c84
db dummyf_42e45; // 3e1c:4c85
db dummyf_42e46; // 3e1c:4c86
db dummyf_42e47; // 3e1c:4c87
db dummyf_42e48;
db dummyf_42e49;
db dummyf_42e4a;
db dummyf_42e4b;
db dummyf_42e4c;
db dummyf_42e4d;
dw word_5142e; // 3e1c:4c8e
dw word_51430; // 3e1c:4c90
db dummyf_42e52[32]; // 3e1c:4c92
db dummyf_42e72;
db dummyf_42e73;
db dummyf_42e74;
db dummyf_42e75;
db dummyf_42e76;
db dummyf_42e77;
dw word_51458; // 3e1c:4cb8
dw word_5145a; // 3e1c:4cba
dw word_5145c; // 3e1c:4cbc
dw word_5145e; // 3e1c:4cbe
dw word_51460; // 3e1c:4cc0
dw word_51462; // 3e1c:4cc2
dw word_51464; // 3e1c:4cc4
dw word_51466; // 3e1c:4cc6
db dummyf_42e88; // 3e1c:4cc8
db dummyf_42e89;
db dummyf_42e8a;
db dummyf_42e8b;
db dummyf_42e8c;
db dummyf_42e8d;
db byte_5146e; // 3e1c:4cce
db dummyf_42e8f;
dw word_51470; // 3e1c:4cd0
db dummyf_42e92[32]; // 3e1c:4cd2
db dummyf_42eb2[32]; // 3e1c:4cf2
db dummyf_42ed2[32]; // 3e1c:4d12
db dummyf_42ef2[32]; // 3e1c:4d32
db dummyf_42f12[32]; // 3e1c:4d52
db dummyf_42f32[32]; // 3e1c:4d72
db dummyf_42f52[32]; // 3e1c:4d92
db dummyf_42f72[32]; // 3e1c:4db2
db dummyf_42f92[32]; // 3e1c:4dd2
db dummyf_42fb2[32]; // 3e1c:4df2
db dummyf_42fd2[32]; // 3e1c:4e12
db dummyf_42ff2[32]; // 3e1c:4e32
db dummyf_43012[32]; // 3e1c:4e52
db dummyf_43032[32]; // 3e1c:4e72
db dummyf_43052[32]; // 3e1c:4e92
db dummyf_43072[32]; // 3e1c:4eb2
db dummyf_43092[32]; // 3e1c:4ed2
db dummyf_430b2[32]; // 3e1c:4ef2
db dummyf_430d2[32]; // 3e1c:4f12
db dummyf_430f2[32]; // 3e1c:4f32
db dummyf_43112;
db dummyf_43113;
db dummyf_43114;
db dummyf_43115;
db dummyf_43116;
db dummyf_43117;
db dummyf_43118;
db dummyf_43119;
db dummyf_4311a;
db dummyf_4311b;
db dummyf_4311c;
db dummyf_4311d;
db dummyf_4311e;
db dummyf_4311f;
db dummyf_43120;
db dummyf_43121;
dw word_51702; // 3e1c:4f62
dw word_51704; // 3e1c:4f64
dw word_51706; // 3e1c:4f66
dw word_51708; // 3e1c:4f68
dw word_5170a; // 3e1c:4f6a
dw word_5170c; // 3e1c:4f6c
dw word_5170e; // 3e1c:4f6e
dw word_51710; // 3e1c:4f70
db byte_51712; // 3e1c:4f72
db dummyf_43133;
dw word_51714; // 3e1c:4f74
db dummyf_43136[32]; // 3e1c:4f76
db dummyf_43156[32]; // 3e1c:4f96
db dummyf_43176[32]; // 3e1c:4fb6
db dummyf_43196[32]; // 3e1c:4fd6
db dummyf_431b6[32]; // 3e1c:4ff6
db dummyf_431d6[32]; // 3e1c:5016
db dummyf_431f6[32]; // 3e1c:5036
db dummyf_43216;
db dummyf_43217;
db dummyf_43218;
db dummyf_43219;
db dummyf_4321a;
db dummyf_4321b;
db dummyf_4321c;
db dummyf_4321d;
db dummyf_4321e;
db dummyf_4321f;
db dummyf_43220;
db dummyf_43221;
db dummyf_43222;
db dummyf_43223;
db dummyf_43224;
db dummyf_43225;
dw word_51806; // 3e1c:5066
db dummyf_43228[32]; // 3e1c:5068
db dummyf_43248[32]; // 3e1c:5088
db dummyf_43268[32]; // 3e1c:50a8
db dummyf_43288[32]; // 3e1c:50c8
db dummyf_432a8[32]; // 3e1c:50e8
db dummyf_432c8[32]; // 3e1c:5108
db dummyf_432e8[32]; // 3e1c:5128
db dummyf_43308[32]; // 3e1c:5148
db dummyf_43328[32]; // 3e1c:5168
db dummyf_43348[32]; // 3e1c:5188
db dummyf_43368[32]; // 3e1c:51a8
db dummyf_43388[32]; // 3e1c:51c8
db dummyf_433a8[32]; // 3e1c:51e8
db dummyf_433c8[32]; // 3e1c:5208
db dummyf_433e8[32]; // 3e1c:5228
db dummyf_43408[32]; // 3e1c:5248
db dummyf_43428; // 3e1c:5268
db dummyf_43429; // 3e1c:5269
dw word_51a0a; // 3e1c:526a
dw word_51a0c; // 3e1c:526c
dw word_51a0e; // 3e1c:526e
dw word_51a10; // 3e1c:5270
dw word_51a12; // 3e1c:5272
dw word_51a14; // 3e1c:5274
dw word_51a16; // 3e1c:5276
dw word_51a18; // 3e1c:5278
dw word_51a1a; // 3e1c:527a
dw word_51a1c; // 3e1c:527c
db byte_51a1e; // 3e1c:527e
db byte_51a1f; // 3e1c:527f
db byte_51a20; // 3e1c:5280
db byte_51a21; // 3e1c:5281
db dummyf_43442;
db dummyf_43443;
db dummyf_43444;
db dummyf_43445;
db dummyf_43446;
db dummyf_43447;
dw word_51a28; // 3e1c:5288
dw word_51a2a; // 3e1c:528a
db dummyf_4344c[32]; // 3e1c:528c
db dummyf_4346c[32]; // 3e1c:52ac
db dummyf_4348c[32]; // 3e1c:52cc
db dummyf_434ac[32]; // 3e1c:52ec
db dummyf_434cc[32]; // 3e1c:530c
db dummyf_434ec[32]; // 3e1c:532c
db dummyf_4350c[32]; // 3e1c:534c
db dummyf_4352c[32]; // 3e1c:536c
db dummyf_4354c[32]; // 3e1c:538c
db dummyf_4356c[32]; // 3e1c:53ac
db dummyf_4358c[32]; // 3e1c:53cc
db dummyf_435ac[32]; // 3e1c:53ec
db dummyf_435cc[32]; // 3e1c:540c
db dummyf_435ec[32]; // 3e1c:542c
db dummyf_4360c[32]; // 3e1c:544c
db dummyf_4362c[32]; // 3e1c:546c
db dummyf_4364c[32]; // 3e1c:548c
db dummyf_4366c[32]; // 3e1c:54ac
db dummyf_4368c[32]; // 3e1c:54cc
db dummyf_436ac[32]; // 3e1c:54ec
db dummyf_436cc[32]; // 3e1c:550c
db dummyf_436ec[32]; // 3e1c:552c
db dummyf_4370c[32]; // 3e1c:554c
db dummyf_4372c[32]; // 3e1c:556c
db dummyf_4374c[32]; // 3e1c:558c
db dummyf_4376c[32]; // 3e1c:55ac
db dummyf_4378c[32]; // 3e1c:55cc
db dummyf_437ac[32]; // 3e1c:55ec
db dummyf_437cc[32]; // 3e1c:560c
db dummyf_437ec[32]; // 3e1c:562c
db dummyf_4380c[32]; // 3e1c:564c
db dummyf_4382c[32]; // 3e1c:566c
db dummyf_4384c[32]; // 3e1c:568c
db dummyf_4386c[32]; // 3e1c:56ac
db dummyf_4388c[32]; // 3e1c:56cc
db dummyf_438ac[32]; // 3e1c:56ec
db dummyf_438cc[32]; // 3e1c:570c
db dummyf_438ec[32]; // 3e1c:572c
db dummyf_4390c[32]; // 3e1c:574c
db dummyf_4392c[32]; // 3e1c:576c
db dummyf_4394c[32]; // 3e1c:578c
db dummyf_4396c[32]; // 3e1c:57ac
db dummyf_4398c[32]; // 3e1c:57cc
db dummyf_439ac[32]; // 3e1c:57ec
db dummyf_439cc[32]; // 3e1c:580c
db dummyf_439ec[32]; // 3e1c:582c
db dummyf_43a0c[32]; // 3e1c:584c
db dummyf_43a2c[32]; // 3e1c:586c
db dummyf_43a4c[32]; // 3e1c:588c
db dummyf_43a6c[32]; // 3e1c:58ac
dw word_5206c; // 3e1c:58cc
db dummyf_43a8e[32]; // 3e1c:58ce
db dummyf_43aae[32]; // 3e1c:58ee
dw word_520ae; // 3e1c:590e
db dummyf_43ad0; // 3e1c:5910
db dummyf_43ad1; // 3e1c:5911
db dummyf_43ad2; // 3e1c:5912
db dummyf_43ad3; // 3e1c:5913
db dummyf_43ad4; // 3e1c:5914
db dummyf_43ad5; // 3e1c:5915
db dummyf_43ad6; // 3e1c:5916
db dummyf_43ad7; // 3e1c:5917
db dummyf_43ad8; // 3e1c:5918
db dummyf_43ad9; // 3e1c:5919
db dummyf_43ada; // 3e1c:591a
db dummyf_43adb; // 3e1c:591b
db dummyf_43adc; // 3e1c:591c
db dummyf_43add; // 3e1c:591d
db dummyf_43ade; // 3e1c:591e
db dummyf_43adf; // 3e1c:591f
dw word_520c0; // 3e1c:5920
dw word_520c2; // 3e1c:5922
dw word_520c4; // 3e1c:5924
dw word_520c6; // 3e1c:5926
dw word_520c8; // 3e1c:5928
db dummyf_43aea; // 3e1c:592a
db dummyf_43aeb; // 3e1c:592b
dw word_520cc; // 3e1c:592c
db dummyf_43aee; // 3e1c:592e
db dummyf_43aef; // 3e1c:592f
db dummyf_43af0; // 3e1c:5930
db dummyf_43af1; // 3e1c:5931
db dummyf_43af2; // 3e1c:5932
db dummyf_43af3; // 3e1c:5933
db dummyf_43af4; // 3e1c:5934
db dummyf_43af5; // 3e1c:5935
db dummyf_43af6; // 3e1c:5936
db dummyf_43af7; // 3e1c:5937
db dummyf_43af8; // 3e1c:5938
db dummyf_43af9; // 3e1c:5939
db dummyf_43afa; // 3e1c:593a
db dummyf_43afb; // 3e1c:593b
db dummyf_43afc; // 3e1c:593c
db dummyf_43afd; // 3e1c:593d
db dummyf_43afe; // 3e1c:593e
db dummyf_43aff; // 3e1c:593f
db dummyf_43b00; // 3e1c:5940
db dummyf_43b01; // 3e1c:5941
db dummyf_43b02; // 3e1c:5942
db dummyf_43b03; // 3e1c:5943
db dummyf_43b04; // 3e1c:5944
db dummyf_43b05; // 3e1c:5945
db dummyf_43b06;
db dummyf_43b07;
db dummyf_43b08;
db dummyf_43b09;
db dummyf_43b0a;
db dummyf_43b0b;
dw word_520ec; // 3e1c:594c
dw word_520ee; // 3e1c:594e
dw word_520f0; // 3e1c:5950
dw word_520f2; // 3e1c:5952
db byte_520f4; // 3e1c:5954
db dummyf_43b15;
db dummyf_43b16;
db dummyf_43b17;
dw word_520f8; // 3e1c:5958
dw word_520fa; // 3e1c:595a
dw word_520fc; // 3e1c:595c
dw word_520fe; // 3e1c:595e
dw word_52100; // 3e1c:5960
dw word_52102; // 3e1c:5962
dw word_52104; // 3e1c:5964
dw word_52106; // 3e1c:5966
db dummyf_43b28[32]; // 3e1c:5968
db dummyf_43b48[32]; // 3e1c:5988
db dummyf_43b68[32]; // 3e1c:59a8
db dummyf_43b88;
db dummyf_43b89;
db dummyf_43b8a;
db dummyf_43b8b;
dw word_5216c; // 3e1c:59cc
dw word_5216e; // 3e1c:59ce
db dummyf_43b90[32]; // 3e1c:59d0
db dummyf_43bb0[32]; // 3e1c:59f0
db dummyf_43bd0;
db dummyf_43bd1;
db dummyf_43bd2;
db dummyf_43bd3;
db dummyf_43bd4;
db dummyf_43bd5;
db dummyf_43bd6;
db dummyf_43bd7;
db dummyf_43bd8;
db dummyf_43bd9;
db dummyf_43bda;
db dummyf_43bdb;
db dummyf_43bdc;
db dummyf_43bdd;
db dummyf_43bde;
db dummyf_43bdf;
dw word_521c0; // 3e1c:5a20
db byte_521c2; // 3e1c:5a22
db byte_521c3; // 3e1c:5a23
db dummyf_43be4;
db byte_521c5; // 3e1c:5a25
dw word_521c6; // 3e1c:5a26
dw word_521c8; // 3e1c:5a28
db dummyf_43bea;
db dummyf_43beb;
db dummyf_43bec;
db dummyf_43bed;
db dummyf_43bee;
db dummyf_43bef;
dw word_521d0; // 3e1c:5a30
dw word_521d2; // 3e1c:5a32
db dummyf_43bf4[32]; // 3e1c:5a34
db dummyf_43c14[32]; // 3e1c:5a54
db dummyf_43c34[32]; // 3e1c:5a74
db dummyf_43c54;
db dummyf_43c55;
db dummyf_43c56;
db dummyf_43c57;
dw word_52238; // 3e1c:5a98
dw word_5223a; // 3e1c:5a9a
db dummyf_43c5c;
db dummyf_43c5d;
dw word_5223e; // 3e1c:5a9e
dw word_52240; // 3e1c:5aa0
dw word_52242; // 3e1c:5aa2
dw word_52244; // 3e1c:5aa4
dw word_52246; // 3e1c:5aa6
dw word_52248; // 3e1c:5aa8
dw word_5224a; // 3e1c:5aaa
dw word_5224c; // 3e1c:5aac
dw word_5224e; // 3e1c:5aae
dw word_52250; // 3e1c:5ab0
db dummyf_43c72;
db dummyf_43c73;
dw word_52254; // 3e1c:5ab4
dw word_52256; // 3e1c:5ab6
dw word_52258; // 3e1c:5ab8
db byte_5225a; // 3e1c:5aba
db dummyf_43c7b;
dw word_5225c; // 3e1c:5abc
dw word_5225e; // 3e1c:5abe
db dummyf_43c80;
db dummyf_43c81;
db dummyf_43c82;
db dummyf_43c83;
db dummyf_43c84;
db dummyf_43c85;
db dummyf_43c86;
db dummyf_43c87;
db dummyf_43c88;
db dummyf_43c89;
dw word_5226a; // 3e1c:5aca
db dummyf_43c8c;
db dummyf_43c8d;
dw word_5226e; // 3e1c:5ace
dw word_52270; // 3e1c:5ad0
dw word_52272; // 3e1c:5ad2
dw word_52274; // 3e1c:5ad4
dw word_52276; // 3e1c:5ad6
dw word_52278; // 3e1c:5ad8
db dummyf_43c9a[32]; // 3e1c:5ada
db dummyf_43cba[32]; // 3e1c:5afa
db dummyf_43cda; // 3e1c:5b1a
db dummyf_43cdb; // 3e1c:5b1b
db dummyf_43cdc; // 3e1c:5b1c
db dummyf_43cdd; // 3e1c:5b1d
db dummyf_43cde; // 3e1c:5b1e
db dummyf_43cdf; // 3e1c:5b1f
db dummyf_43ce0; // 3e1c:5b20
db dummyf_43ce1; // 3e1c:5b21
db dummyf_43ce2; // 3e1c:5b22
db dummyf_43ce3; // 3e1c:5b23
db dummyf_43ce4; // 3e1c:5b24
db dummyf_43ce5; // 3e1c:5b25
db dummyf_43ce6; // 3e1c:5b26
db dummyf_43ce7; // 3e1c:5b27
db dummyf_43ce8; // 3e1c:5b28
db dummyf_43ce9; // 3e1c:5b29
dw word_522ca; // 3e1c:5b2a
dw word_522cc; // 3e1c:5b2c
dw word_522ce; // 3e1c:5b2e
dw word_522d0; // 3e1c:5b30
dw word_522d2; // 3e1c:5b32
db dummyf_43cf4[32]; // 3e1c:5b34
db dummyf_43d14[32]; // 3e1c:5b54
db dummyf_43d34[32]; // 3e1c:5b74
db dummyf_43d54[32]; // 3e1c:5b94
db dummyf_43d74[32]; // 3e1c:5bb4
db dummyf_43d94[32]; // 3e1c:5bd4
db dummyf_43db4;
db dummyf_43db5;
db dummyf_43db6;
db dummyf_43db7;
db dummyf_43db8;
db dummyf_43db9;
dw word_5239a; // 3e1c:5bfa
dw word_5239c; // 3e1c:5bfc
db dummyf_43dbe[32]; // 3e1c:5bfe
db dummyf_43dde[32]; // 3e1c:5c1e
db dummyf_43dfe[32]; // 3e1c:5c3e
db dummyf_43e1e[32]; // 3e1c:5c5e
db dummyf_43e3e[32]; // 3e1c:5c7e
db dummyf_43e5e[32]; // 3e1c:5c9e
db dummyf_43e7e[32]; // 3e1c:5cbe
db dummyf_43e9e[32]; // 3e1c:5cde
db dummyf_43ebe[32]; // 3e1c:5cfe
db dummyf_43ede[32]; // 3e1c:5d1e
db dummyf_43efe[32]; // 3e1c:5d3e
db dummyf_43f1e[32]; // 3e1c:5d5e
db dummyf_43f3e[32]; // 3e1c:5d7e
db dummyf_43f5e[32]; // 3e1c:5d9e
db dummyf_43f7e[32]; // 3e1c:5dbe
db dummyf_43f9e[32]; // 3e1c:5dde
db dummyf_43fbe[32]; // 3e1c:5dfe
db dummyf_43fde[32]; // 3e1c:5e1e
db dummyf_43ffe[32]; // 3e1c:5e3e
db dummyf_4401e[32]; // 3e1c:5e5e
db dummyf_4403e[32]; // 3e1c:5e7e
db dummyf_4405e[32]; // 3e1c:5e9e
db dummyf_4407e[32]; // 3e1c:5ebe
db dummyf_4409e; // 3e1c:5ede
db dummyf_4409f; // 3e1c:5edf
db dummyf_440a0; // 3e1c:5ee0
db dummyf_440a1; // 3e1c:5ee1
db dummyf_440a2; // 3e1c:5ee2
db dummyf_440a3; // 3e1c:5ee3
db dummyf_440a4; // 3e1c:5ee4
db dummyf_440a5; // 3e1c:5ee5
db dummyf_440a6; // 3e1c:5ee6
db dummyf_440a7; // 3e1c:5ee7
db dummyf_440a8; // 3e1c:5ee8
db dummyf_440a9;
db dummyf_440aa;
db dummyf_440ab;
dw word_5268c; // 3e1c:5eec
dw word_5268e; // 3e1c:5eee
db dummyf_440b0[32]; // 3e1c:5ef0
db dummyf_440d0[32]; // 3e1c:5f10
db dummyf_440f0[32]; // 3e1c:5f30
db dummyf_44110[32]; // 3e1c:5f50
db dummyf_44130[32]; // 3e1c:5f70
db dummyf_44150[32]; // 3e1c:5f90
db dummyf_44170[32]; // 3e1c:5fb0
db dummyf_44190[32]; // 3e1c:5fd0
db dummyf_441b0[32]; // 3e1c:5ff0
db dummyf_441d0[32]; // 3e1c:6010
db byte_527d0; // 3e1c:6030
db dummyf_441f1;
dw word_527d2; // 3e1c:6032
dw word_527d4; // 3e1c:6034
dw word_527d6; // 3e1c:6036
dw word_527d8; // 3e1c:6038
dw word_527da; // 3e1c:603a
db dummyf_441fc[32]; // 3e1c:603c
db dummyf_4421c[32]; // 3e1c:605c
db dummyf_4423c[32]; // 3e1c:607c
db dummyf_4425c[32]; // 3e1c:609c
db dummyf_4427c[32]; // 3e1c:60bc
db dummyf_4429c[32]; // 3e1c:60dc
db dummyf_442bc[32]; // 3e1c:60fc
db dummyf_442dc;
db dummyf_442dd;
db dummyf_442de;
db dummyf_442df;
db dummyf_442e0;
db dummyf_442e1;
db dummyf_442e2;
db dummyf_442e3;
db dummyf_442e4;
db dummyf_442e5;
db dummyf_442e6;
db dummyf_442e7;
db dummyf_442e8;
db dummyf_442e9;
db dummyf_442ea;
db dummyf_442eb;
dw word_528cc; // 3e1c:612c
dw word_528ce; // 3e1c:612e
db byte_528d0; // 3e1c:6130
db dummyf_442f1;
dw word_528d2; // 3e1c:6132
dw word_528d4; // 3e1c:6134
dd dword_528d6; // 3e1c:6136
dw word_528da; // 3e1c:613a
dw word_528dc; // 3e1c:613c
dw word_528de; // 3e1c:613e
db dummyf_44300[32]; // 3e1c:6140
db dummyf_44320[32]; // 3e1c:6160
db dummyf_44340[32]; // 3e1c:6180
db dummyf_44360[32]; // 3e1c:61a0
db dummyf_44380[32]; // 3e1c:61c0
db dummyf_443a0[32]; // 3e1c:61e0
db dummyf_443c0[32]; // 3e1c:6200
db dummyf_443e0[32]; // 3e1c:6220
db dummyf_44400[32]; // 3e1c:6240
db dummyf_44420[32]; // 3e1c:6260
db dummyf_44440[32]; // 3e1c:6280
db dummyf_44460[32]; // 3e1c:62a0
db dummyf_44480[32]; // 3e1c:62c0
db dummyf_444a0[32]; // 3e1c:62e0
db dummyf_444c0[32]; // 3e1c:6300
db dummyf_444e0[32]; // 3e1c:6320
db byte_52ae0; // 3e1c:6340
db dummyf_44501;
dw word_52ae2; // 3e1c:6342
dw word_52ae4; // 3e1c:6344
dw word_52ae6; // 3e1c:6346
dw word_52ae8; // 3e1c:6348
dw word_52aea; // 3e1c:634a
dw word_52aec; // 3e1c:634c
dw word_52aee; // 3e1c:634e
dw word_52af0; // 3e1c:6350
dw word_52af2; // 3e1c:6352
dw word_52af4; // 3e1c:6354
db dummyf_44516;
db dummyf_44517;
db dummyf_44518;
db dummyf_44519;
db dummyf_4451a;
db dummyf_4451b;
db dummyf_4451c; // 3e1c:635c
db dummyf_4451d; // 3e1c:635d
db dummyf_4451e; // 3e1c:635e
db dummyf_4451f; // 3e1c:635f
db byte_52b00[2048]; // 4452:0000

#ifdef DOSBOX_CUSTOM
    db filll[1024*1024*16];
#endif
                        db stack[STACK_SIZE];
                        db heap[HEAP_SIZE];
                };
}
#pragma pack(pop)

#endif
