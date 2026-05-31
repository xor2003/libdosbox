
#ifndef ___DATA_H__
#define ___DATA_H__
#include "../asm.h"

#pragma pack(push, 1)
struct cmd_arg_s {
  db name_[3];
  dw ofs;
  dw storerest;
};

#pragma pack(pop)


#pragma pack(push, 1)
namespace m2c{
struct Memory{
db dummy9_0[6688];
db dummy9_1a20[351];
dw dummy9_1b7f;
dw dummy9_1b81;
dw dummy9_1b83;
dw dummy9_1b85;
dw word_10167; // 01a2:0167
db dummy9_1b89[163];
dw dummy9_1c2c; // 01a2:020c
dw dummy9_1c2e; // 01a2:020e
dw dummy9_1c30; // 01a2:0210
dw dummy9_1c32; // 01a2:0212
dw dummy9_1c34; // 01a2:0214
dw dummy9_1c36; // 01a2:0216
dw dummy9_1c38; // 01a2:0218
dw dummy9_1c3a; // 01a2:021a
db dummy9_1c3c[283];
dw _word_10337_intro_script; // 01a2:0337
dw dummy9_1d59; // 01a2:0339
dw dummy9_1d5b;
dw dummy9_1d5d; // 01a2:033d
dw dummy9_1d5f; // 01a2:033f
dw dummy9_1d61; // 01a2:0341
dw dummy9_1d63;
dw dummy9_1d65; // 01a2:0345
dw dummy9_1d67;
dw dummy9_1d69; // 01a2:0349
dw dummy9_1d6b; // 01a2:034b
dw dummy9_1d6d; // 01a2:034d
dw dummy9_1d6f;
dw dummy9_1d71; // 01a2:0351
dw dummy9_1d73;
dw dummy9_1d75; // 01a2:0355
dw dummy9_1d77; // 01a2:0357
dw dummy9_1d79; // 01a2:0359
dw dummy9_1d7b;
dw dummy9_1d7d; // 01a2:035d
dw dummy9_1d7f; // 01a2:035f
dw dummy9_1d81; // 01a2:0361
dw dummy9_1d83; // 01a2:0363
dw dummy9_1d85; // 01a2:0365
dw dummy9_1d87;
dw dummy9_1d89; // 01a2:0369
dw dummy9_1d8b; // 01a2:036b
dw dummy9_1d8d; // 01a2:036d
dw dummy9_1d8f; // 01a2:036f
dw dummy9_1d91; // 01a2:0371
dw dummy9_1d93;
dw dummy9_1d95; // 01a2:0375
dw dummy9_1d97;
dw dummy9_1d99; // 01a2:0379
dw dummy9_1d9b; // 01a2:037b
dw dummy9_1d9d; // 01a2:037d
dw dummy9_1d9f;
dw dummy9_1da1; // 01a2:0381
dw dummy9_1da3;
dw dummy9_1da5; // 01a2:0385
dw dummy9_1da7; // 01a2:0387
dw dummy9_1da9; // 01a2:0389
dw dummy9_1dab;
dw dummy9_1dad; // 01a2:038d
dw dummy9_1daf;
dw dummy9_1db1; // 01a2:0391
dw dummy9_1db3; // 01a2:0393
dw dummy9_1db5; // 01a2:0395
dw dummy9_1db7;
dw dummy9_1db9; // 01a2:0399
dw dummy9_1dbb;
dw dummy9_1dbd; // 01a2:039d
dw dummy9_1dbf; // 01a2:039f
dw dummy9_1dc1; // 01a2:03a1
dw dummy9_1dc3;
dw dummy9_1dc5; // 01a2:03a5
dw dummy9_1dc7; // 01a2:03a7
dw dummy9_1dc9; // 01a2:03a9
dw dummy9_1dcb; // 01a2:03ab
dw dummy9_1dcd; // 01a2:03ad
dw dummy9_1dcf;
dw dummy9_1dd1; // 01a2:03b1
dw dummy9_1dd3; // 01a2:03b3
dw dummy9_1dd5; // 01a2:03b5
dw dummy9_1dd7; // 01a2:03b7
dw dummy9_1dd9; // 01a2:03b9
dw dummy9_1ddb;
dw dummy9_1ddd; // 01a2:03bd
dw dummy9_1ddf;
dw dummy9_1de1; // 01a2:03c1
dw dummy9_1de3; // 01a2:03c3
dw dummy9_1de5; // 01a2:03c5
dw dummy9_1de7; // 01a2:03c7
dw dummy9_1de9; // 01a2:03c9
dw dummy9_1deb; // 01a2:03cb
dw dummy9_1ded; // 01a2:03cd
dw dummy9_1def; // 01a2:03cf
dw dummy9_1df1; // 01a2:03d1
dw dummy9_1df3; // 01a2:03d3
dw dummy9_1df5; // 01a2:03d5
dw dummy9_1df7; // 01a2:03d7
dw dummy9_1df9; // 01a2:03d9
dw dummy9_1dfb; // 01a2:03db
dw dummy9_1dfd; // 01a2:03dd
dw dummy9_1dff;
dw dummy9_1e01; // 01a2:03e1
dw dummy9_1e03; // 01a2:03e3
dw dummy9_1e05; // 01a2:03e5
dw dummy9_1e07; // 01a2:03e7
dw dummy9_1e09; // 01a2:03e9
dw dummy9_1e0b;
dw dummy9_1e0d; // 01a2:03ed
dw dummy9_1e0f; // 01a2:03ef
dw dummy9_1e11; // 01a2:03f1
dw dummy9_1e13; // 01a2:03f3
dw dummy9_1e15; // 01a2:03f5
dw dummy9_1e17; // 01a2:03f7
dw dummy9_1e19; // 01a2:03f9
dw dummy9_1e1b; // 01a2:03fb
dw dummy9_1e1d; // 01a2:03fd
dw dummy9_1e1f; // 01a2:03ff
dw dummy9_1e21; // 01a2:0401
dw dummy9_1e23; // 01a2:0403
dw dummy9_1e25; // 01a2:0405
dw dummy9_1e27; // 01a2:0407
dw dummy9_1e29; // 01a2:0409
dw dummy9_1e2b; // 01a2:040b
dw dummy9_1e2d; // 01a2:040d
dw dummy9_1e2f; // 01a2:040f
dw dummy9_1e31; // 01a2:0411
dw dummy9_1e33; // 01a2:0413
dw dummy9_1e35; // 01a2:0415
dw dummy9_1e37; // 01a2:0417
dw dummy9_1e39; // 01a2:0419
dw dummy9_1e3b;
dw dummy9_1e3d; // 01a2:041d
dw dummy9_1e3f; // 01a2:041f
dw dummy9_1e41; // 01a2:0421
dw dummy9_1e43; // 01a2:0423
dw dummy9_1e45; // 01a2:0425
dw dummy9_1e47; // 01a2:0427
dw dummy9_1e49; // 01a2:0429
dw dummy9_1e4b; // 01a2:042b
dw dummy9_1e4d; // 01a2:042d
dw dummy9_1e4f; // 01a2:042f
dw dummy9_1e51; // 01a2:0431
dw dummy9_1e53;
dw dummy9_1e55; // 01a2:0435
dw dummy9_1e57; // 01a2:0437
dw dummy9_1e59; // 01a2:0439
dw dummy9_1e5b; // 01a2:043b
dw dummy9_1e5d; // 01a2:043d
dw dummy9_1e5f; // 01a2:043f
dw dummy9_1e61; // 01a2:0441
dw dummy9_1e63; // 01a2:0443
dw dummy9_1e65; // 01a2:0445
dw dummy9_1e67; // 01a2:0447
dw dummy9_1e69; // 01a2:0449
dw dummy9_1e6b; // 01a2:044b
dw dummy9_1e6d; // 01a2:044d
dw dummy9_1e6f; // 01a2:044f
dw dummy9_1e71; // 01a2:0451
dw dummy9_1e73; // 01a2:0453
dw dummy9_1e75; // 01a2:0455
dw dummy9_1e77; // 01a2:0457
dw dummy9_1e79; // 01a2:0459
dw dummy9_1e7b; // 01a2:045b
dw dummy9_1e7d; // 01a2:045d
dw dummy9_1e7f; // 01a2:045f
dw dummy9_1e81; // 01a2:0461
dw dummy9_1e83; // 01a2:0463
dw dummy9_1e85; // 01a2:0465
dw dummy9_1e87; // 01a2:0467
dw dummy9_1e89; // 01a2:0469
dw dummy9_1e8b; // 01a2:046b
dw dummy9_1e8d; // 01a2:046d
dw dummy9_1e8f; // 01a2:046f
dw dummy9_1e91; // 01a2:0471
dw dummy9_1e93; // 01a2:0473
dw dummy9_1e95; // 01a2:0475
dw dummy9_1e97; // 01a2:0477
dw dummy9_1e99; // 01a2:0479
dw dummy9_1e9b; // 01a2:047b
dw dummy9_1e9d; // 01a2:047d
dw dummy9_1e9f;
dw dummy9_1ea1; // 01a2:0481
dw dummy9_1ea3; // 01a2:0483
dw dummy9_1ea5; // 01a2:0485
dw dummy9_1ea7; // 01a2:0487
dw dummy9_1ea9; // 01a2:0489
dw dummy9_1eab; // 01a2:048b
dw dummy9_1ead; // 01a2:048d
dw dummy9_1eaf; // 01a2:048f
dw dummy9_1eb1; // 01a2:0491
dw dummy9_1eb3; // 01a2:0493
dw dummy9_1eb5; // 01a2:0495
dw dummy9_1eb7;
dw dummy9_1eb9; // 01a2:0499
dw dummy9_1ebb; // 01a2:049b
dw dummy9_1ebd; // 01a2:049d
dw dummy9_1ebf; // 01a2:049f
dw dummy9_1ec1; // 01a2:04a1
dw dummy9_1ec3; // 01a2:04a3
dw dummy9_1ec5; // 01a2:04a5
dw dummy9_1ec7; // 01a2:04a7
dw dummy9_1ec9; // 01a2:04a9
dw dummy9_1ecb;
dw dummy9_1ecd; // 01a2:04ad
dw dummy9_1ecf; // 01a2:04af
dw dummy9_1ed1; // 01a2:04b1
dw dummy9_1ed3; // 01a2:04b3
dw dummy9_1ed5; // 01a2:04b5
dw dummy9_1ed7;
dw dummy9_1ed9; // 01a2:04b9
dw dummy9_1edb; // 01a2:04bb
dw dummy9_1edd; // 01a2:04bd
dw dummy9_1edf; // 01a2:04bf
dw dummy9_1ee1; // 01a2:04c1
dw dummy9_1ee3;
dw dummy9_1ee5; // 01a2:04c5
dw dummy9_1ee7; // 01a2:04c7
dw dummy9_1ee9; // 01a2:04c9
dw dummy9_1eeb; // 01a2:04cb
dw dummy9_1eed; // 01a2:04cd
dw dummy9_1eef;
dw dummy9_1ef1; // 01a2:04d1
dw dummy9_1ef3; // 01a2:04d3
dw dummy9_1ef5; // 01a2:04d5
dw dummy9_1ef7; // 01a2:04d7
dw dummy9_1ef9; // 01a2:04d9
dw dummy9_1efb;
dw dummy9_1efd; // 01a2:04dd
dw dummy9_1eff; // 01a2:04df
dw dummy9_1f01; // 01a2:04e1
dw dummy9_1f03; // 01a2:04e3
dw dummy9_1f05; // 01a2:04e5
dw dummy9_1f07;
dw dummy9_1f09; // 01a2:04e9
dw dummy9_1f0b; // 01a2:04eb
dw dummy9_1f0d; // 01a2:04ed
dw dummy9_1f0f; // 01a2:04ef
dw dummy9_1f11; // 01a2:04f1
dw dummy9_1f13;
dw dummy9_1f15; // 01a2:04f5
dw dummy9_1f17; // 01a2:04f7
dw dummy9_1f19; // 01a2:04f9
dw dummy9_1f1b; // 01a2:04fb
dw dummy9_1f1d; // 01a2:04fd
dw dummy9_1f1f;
dw dummy9_1f21; // 01a2:0501
dw dummy9_1f23; // 01a2:0503
dw dummy9_1f25; // 01a2:0505
dw dummy9_1f27; // 01a2:0507
dw dummy9_1f29; // 01a2:0509
dw dummy9_1f2b; // 01a2:050b
dw dummy9_1f2d; // 01a2:050d
dw dummy9_1f2f; // 01a2:050f
dw dummy9_1f31; // 01a2:0511
dw dummy9_1f33; // 01a2:0513
dw dummy9_1f35; // 01a2:0515
dw dummy9_1f37; // 01a2:0517
dw dummy9_1f39; // 01a2:0519
dw dummy9_1f3b; // 01a2:051b
dw dummy9_1f3d; // 01a2:051d
dw dummy9_1f3f; // 01a2:051f
dw dummy9_1f41; // 01a2:0521
dw dummy9_1f43;
dw dummy9_1f45; // 01a2:0525
dw dummy9_1f47; // 01a2:0527
dw dummy9_1f49; // 01a2:0529
dw dummy9_1f4b; // 01a2:052b
dw dummy9_1f4d; // 01a2:052d
dw dummy9_1f4f;
dw dummy9_1f51; // 01a2:0531
dw dummy9_1f53; // 01a2:0533
dw dummy9_1f55; // 01a2:0535
dw dummy9_1f57; // 01a2:0537
dw dummy9_1f59; // 01a2:0539
dw dummy9_1f5b;
dw dummy9_1f5d; // 01a2:053d
dw dummy9_1f5f; // 01a2:053f
dw dummy9_1f61; // 01a2:0541
dw dummy9_1f63; // 01a2:0543
dw dummy9_1f65; // 01a2:0545
dw dummy9_1f67;
dw dummy9_1f69; // 01a2:0549
dw dummy9_1f6b; // 01a2:054b
dw dummy9_1f6d; // 01a2:054d
dw dummy9_1f6f; // 01a2:054f
dw dummy9_1f71; // 01a2:0551
dw dummy9_1f73;
dw dummy9_1f75; // 01a2:0555
dw dummy9_1f77; // 01a2:0557
dw dummy9_1f79; // 01a2:0559
dw dummy9_1f7b; // 01a2:055b
dw dummy9_1f7d; // 01a2:055d
dw dummy9_1f7f;
dw dummy9_1f81; // 01a2:0561
dw dummy9_1f83; // 01a2:0563
dw dummy9_1f85; // 01a2:0565
dw dummy9_1f87; // 01a2:0567
dw dummy9_1f89; // 01a2:0569
dw dummy9_1f8b;
dw dummy9_1f8d; // 01a2:056d
dw dummy9_1f8f; // 01a2:056f
dw dummy9_1f91; // 01a2:0571
db dummy9_1f93; // 01a2:0573
db dummy9_1f94[5]; // 01a2:0574
db dummy9_1f99[2728];
db dummy9_2a41[6]; // 01a2:1021
db dummy9_2a47[66];
db dummy9_2a89; // 01a2:1069
db dummy9_2a8a; // 01a2:106a
db dummy9_2a8b; // 01a2:106b
db dummy9_2a8c; // 01a2:106c
db dummy9_2a8d; // 01a2:106d
db dummy9_2a8e; // 01a2:106e
db dummy9_2a8f;
db dummy9_2a90;
db dummy9_2a91[134];
dw dummy9_2b17; // 01a2:10f7
db dummy9_2b19[10]; // 01a2:10f9
db dummy9_2b23[89];
db dummy9_2b7c[10]; // 01a2:115c
db dummy9_2b86[65];
db dummy9_2bc7[12]; // 01a2:11a7
db dummy9_2bd3[54];
dw dummy9_2c09; // 01a2:11e9
dw dummy9_2c0b; // 01a2:11eb
dw dummy9_2c0d; // 01a2:11ed
dw dummy9_2c0f; // 01a2:11ef
dw dummy9_2c11; // 01a2:11f1
dw dummy9_2c13; // 01a2:11f3
dw dummy9_2c15; // 01a2:11f5
dw dummy9_2c17; // 01a2:11f7
dw dummy9_2c19; // 01a2:11f9
dw dummy9_2c1b; // 01a2:11fb
dw dummy9_2c1d; // 01a2:11fd
dw dummy9_2c1f; // 01a2:11ff
dw dummy9_2c21; // 01a2:1201
dw dummy9_2c23; // 01a2:1203
dw dummy9_2c25; // 01a2:1205
dw dummy9_2c27; // 01a2:1207
dw dummy9_2c29; // 01a2:1209
dw dummy9_2c2b; // 01a2:120b
dw dummy9_2c2d; // 01a2:120d
dw dummy9_2c2f; // 01a2:120f
dw dummy9_2c31; // 01a2:1211
dw dummy9_2c33; // 01a2:1213
dw dummy9_2c35; // 01a2:1215
dw dummy9_2c37; // 01a2:1217
dw dummy9_2c39; // 01a2:1219
dw dummy9_2c3b; // 01a2:121b
dw dummy9_2c3d; // 01a2:121d
db dummy9_2c3f[113];
db dummy9_2cb0[19]; // 01a2:1290
db dummy9_2cc3[14]; // 01a2:1290
db dummy9_2cd1[16]; // 01a2:1290
db dummy9_2ce1[20]; // 01a2:1290
db dummy9_2cf5[17]; // 01a2:1290
db dummy9_2d06[17]; // 01a2:1290
db dummy9_2d17[14]; // 01a2:1290
db dummy9_2d25[17]; // 01a2:1290
db dummy9_2d36[21]; // 01a2:1290
db dummy9_2d4b[17]; // 01a2:1290
db dummy9_2d5c[16]; // 01a2:1290
db dummy9_2d6c[15]; // 01a2:1290
db dummy9_2d7b[16]; // 01a2:1290
db dummy9_2d8b[16]; // 01a2:1290
db dummy9_2d9b[17]; // 01a2:1290
db dummy9_2dac[6]; // 01a2:1290
db dummy9_2db2[227];
dw off_11475; // 01a2:1475
dw dummy9_2e97; // 01a2:1477
dw dummy9_2e99; // 01a2:1479
dw dummy9_2e9b; // 01a2:147b
dw dummy9_2e9d; // 01a2:147d
dw dummy9_2e9f; // 01a2:147f
dw dummy9_2ea1; // 01a2:1481
dw dummy9_2ea3; // 01a2:1483
dw dummy9_2ea5; // 01a2:1485
dw dummy9_2ea7; // 01a2:1487
dw dummy9_2ea9; // 01a2:1489
dw dummy9_2eab; // 01a2:148b
db dummy9_2ead[461];
dw off_1165a; // 01a2:165a
dw dummy9_307c; // 01a2:165c
dw dummy9_307e; // 01a2:165e
dw dummy9_3080; // 01a2:1660
dw dummy9_3082; // 01a2:1662
dw dummy9_3084; // 01a2:1664
dw dummy9_3086; // 01a2:1666
dw dummy9_3088; // 01a2:1668
dw dummy9_308a; // 01a2:166a
dw dummy9_308c; // 01a2:166c
dw dummy9_308e; // 01a2:166e
dw dummy9_3090; // 01a2:1670
dw dummy9_3092; // 01a2:1672
dw dummy9_3094; // 01a2:1674
dw dummy9_3096; // 01a2:1676
dw dummy9_3098; // 01a2:1678
dw dummy9_309a; // 01a2:167a
db dummy9_309c[1847];
dw funcs_11b7d; // 01a2:1db3
dw dummy9_37d5; // 01a2:1db3
dw dummy9_37d7; // 01a2:1db3
dw dummy9_37d9; // 01a2:1db3
dw dummy9_37db; // 01a2:1db3
dw dummy9_37dd; // 01a2:1db3
dw dummy9_37df; // 01a2:1db3
dw dummy9_37e1; // 01a2:1db3
dw dummy9_37e3; // 01a2:1db3
dw dummy9_37e5; // 01a2:1db3
dw dummy9_37e7; // 01a2:1db3
dw dummy9_37e9; // 01a2:1db3
dw dummy9_37eb; // 01a2:1db3
dw dummy9_37ed; // 01a2:1db3
dw dummy9_37ef; // 01a2:1db3
dw dummy9_37f1; // 01a2:1db3
db dummy9_37f3[914];
db dummy9_3b85[11]; // 01a2:2165
db dummy9_3b90[750];
db dummy9_3e7e; // 01a2:245e
db dummy9_3e7f[4785];
db dummy9_5130; // 01a2:3710
db dummy9_5131[8570];
dw jpt_15886; // 01a2:588b
dw dummy9_72ad; // 01a2:588b
dw dummy9_72af; // 01a2:588b
dw dummy9_72b1; // 01a2:588b
dw dummy9_72b3; // 01a2:588b
dw dummy9_72b5; // 01a2:588b
dw dummy9_72b7; // 01a2:588b
dw dummy9_72b9; // 01a2:588b
db dummy9_72bb[3154];
dw word_164ed; // 01a2:64ed
db dummy9_7f0f[197];
dw word_165b4; // 01a2:65b4
db dummy9_7fd6[1166];
db dummy9_8464; // 01a2:6a44
db dummy9_8465[43];
db dummy9_8490; // 01a2:6a70
db dummy9_8491[388];
dw funcs_16c21; // 01a2:6bf5
dw dummy9_8617; // 01a2:6bf5
dw dummy9_8619; // 01a2:6bf5
dw dummy9_861b; // 01a2:6bf5
dw dummy9_861d; // 01a2:6bf5
dw dummy9_861f; // 01a2:6bf5
dw dummy9_8621; // 01a2:6bf5
dw dummy9_8623; // 01a2:6bf5
dw dummy9_8625; // 01a2:6bf5
dw dummy9_8627; // 01a2:6bf5
dw dummy9_8629; // 01a2:6bf5
dw dummy9_862b; // 01a2:6bf5
dw dummy9_862d; // 01a2:6bf5
dw dummy9_862f; // 01a2:6bf5
dw dummy9_8631; // 01a2:6bf5
dw dummy9_8633; // 01a2:6bf5
db dummy9_8635[17];
dw funcs_16cba; // 01a2:6c26
dw dummy9_8648; // 01a2:6c26
dw dummy9_864a; // 01a2:6c26
dw dummy9_864c; // 01a2:6c26
dw dummy9_864e; // 01a2:6c26
dw dummy9_8650; // 01a2:6c26
dw dummy9_8652; // 01a2:6c26
dw dummy9_8654; // 01a2:6c26
dw dummy9_8656; // 01a2:6c26
dw dummy9_8658; // 01a2:6c26
dw dummy9_865a; // 01a2:6c26
dw dummy9_865c; // 01a2:6c26
dw dummy9_865e; // 01a2:6c26
dw dummy9_8660; // 01a2:6c26
dw dummy9_8662; // 01a2:6c26
dw dummy9_8664; // 01a2:6c26
db dummy9_8666[1282];
db dummy9_8b68; // 01a2:7148
db dummy9_8b69[6853];
db dummy9_a62e; // 01a2:8c0e
db dummy9_a62f[5368];
db dummy9_bb27[9]; // 01a2:a107
db dummy9_bb30[9]; // 01a2:a107
db dummy9_bb39[10]; // 01a2:a107
db dummy9_bb43[11]; // 01a2:a107
db dummy9_bb4e[13]; // 01a2:a107
db dummy9_bb5b[12]; // 01a2:a107
db dummy9_bb67[11]; // 01a2:a107
db dummy9_bb72[11]; // 01a2:a107
db dummy9_bb7d[12]; // 01a2:a107
db dummy9_bb89[10]; // 01a2:a107
db dummy9_bb93[12]; // 01a2:a107
db dummy9_bb9f[12]; // 01a2:a107
db dummy9_bbab[10]; // 01a2:a107
db dummy9_bbb5[12]; // 01a2:a107
db dummy9_bbc1[11]; // 01a2:a107
db dummy9_bbcc[12]; // 01a2:a107
db dummy9_bbd8[10]; // 01a2:a107
db dummy9_bbe2[2]; // 01a2:a107
db dummy9_bbe4[434];
dw off_1a376; // 01a2:a376
dw dummy9_bd98; // 01a2:a378
dw dummy9_bd9a; // 01a2:a37a
dw dummy9_bd9c; // 01a2:a37c
dw dummy9_bd9e; // 01a2:a37e
dw dummy9_bda0; // 01a2:a380
dw dummy9_bda2; // 01a2:a382
dw dummy9_bda4; // 01a2:a384
dw dummy9_bda6; // 01a2:a386
dw dummy9_bda8; // 01a2:a388
dw dummy9_bdaa; // 01a2:a38a
dw dummy9_bdac; // 01a2:a38c
dw dummy9_bdae; // 01a2:a38e
dw dummy9_bdb0; // 01a2:a390
dw dummy9_bdb2; // 01a2:a392
dw dummy9_bdb4; // 01a2:a394
db dummy9_bdb6[2344];
db dummy9_c6de; // 01a2:acbe
db dummy9_c6df[5244];
db byte_1c13b; // 01a2:c13b
db byte_1c13c; // 01a2:c13c
db dummy9_db5d[221];
db _byte_1c21a_pal_offset; // 01a2:c21a
db dummy9_dc3b[2679];
dw word_1cc92; // 01a2:cc92
dw _word_1cc94_bltfunc; // 01a2:cc94
db dummy9_e6b6[234];
db dummy9_e7a0; // 01a2:cd80
db dummy9_e7a1[4646];
db dummy9_f9c7[9]; // 01a2:dfa7
db dummy9_f9d0[7]; // 01a2:dfa7
db dummy9_f9d7[1109];
cmd_arg_s _stru_1e40c_cmd_arg_list;
cmd_arg_s dummy9_fe33;
cmd_arg_s dummy9_fe3a;
cmd_arg_s dummy9_fe41;
cmd_arg_s dummy9_fe48;
cmd_arg_s dummy9_fe4f;
cmd_arg_s dummy9_fe56;
cmd_arg_s dummy9_fe5d;
cmd_arg_s dummy9_fe64;
cmd_arg_s dummy9_fe6b;
cmd_arg_s dummy9_fe72;
cmd_arg_s dummy9_fe79;
cmd_arg_s dummy9_fe80;
cmd_arg_s dummy9_fe87;
cmd_arg_s dummy9_fe8e;
cmd_arg_s dummy9_fe95;
cmd_arg_s dummy9_fe9c;
cmd_arg_s dummy9_fea3;
cmd_arg_s dummy9_feaa;
cmd_arg_s dummy9_feb1;
cmd_arg_s dummy9_feb8;
cmd_arg_s dummy9_febf;
cmd_arg_s dummy9_fec6;
db dummy9_fecd[1061];
dw _word_1e8d2_pit_timer_value; // 01a2:e8d2
db _byte_1e8d4_pit_timer_counter; // 01a2:e8d4
db dummy9_102f5[129];
dw off_1e956; // 01a2:e956
dw dummy9_10378; // 01a2:e958
dd off_1e95a; // 01a2:e95a
dd off_1e95e; // 01a2:e95e
dd off_1e962; // 01a2:e962
dd off_1e966; // 01a2:e966
dd off_1e96a; // 01a2:e96a
dd off_1e96e; // 01a2:e96e
dd off_1e972; // 01a2:e972
dd off_1e976; // 01a2:e976
db dummy9_1039a[182];
dw seg_1ea30; // 01a2:ea30
db dummy9_10452[67];
dw word_1ea75; // 01a2:ea75
dw _off_1ea77_memory_func_1; // 01a2:ea77
dw _off_1ea79_memory_func_2; // 01a2:ea79
db dummy9_1049b[497];
db dummy9_1068c[26]; // 01a2:ec6c
db dummy9_106a6[22]; // 01a2:ec6c
db dummy9_106bc[158];
dw _word_1ed3a_ems_emm_handle; // 01a2:ed3a
dw _word_1ed3c_ems_page_frame_base_seg; // 01a2:ed3c
dw word_1ed3e; // 01a2:ed3e
db dummy9_10760[330];
dw _word_1ee8a_xms_memory_block; // 01a2:ee8a
dd _dword_1ee8c_xms_driver_addr; // 01a2:ee8c
dw word_1ee90; // 01a2:ee90
dw dummy9_108b2;
dw dummy9_108b4;
dw dummy9_108b6;
dw dummy9_108b8;
dw dummy9_108ba;
dw dummy9_108bc;
dw dummy9_108be;
db dummy9_108c0[309];
db byte_1efd5[4]; // 01a2:efd5
db byte_1efd9; // 01a2:efd9
db byte_1efda[5]; // 01a2:efda
dw dummy9_109ff; // 01a2:efdf
db dummy9_10a01[1231];
dw word_1f4b0; // 10ed:0000
dw word_1f4b2; // 10ed:0002
dw word_1f4b4; // 10ed:0004
dw word_1f4b6; // 10ed:0006
db byte_1f4b8; // 10ed:0008
db byte_1f4b9; // 10ed:0009
db byte_1f4ba; // 10ed:000a
db byte_1f4bb; // 10ed:000b
db byte_1f4bc; // 10ed:000c
db byte_1f4bd; // 10ed:000d
db dummy9_10ede[2]; // 10ed:000e
dw word_1f4c0; // 10ed:0010
dw word_1f4c2; // 10ed:0012
db dummy9_10ee4[12]; // 10ed:0014
dw word_1f4d0; // 10ed:0020
db dummy9_10ef2;
db byte_1f4d3; // 10ed:0023
db dummy9_10ef4;
db byte_1f4d5; // 10ed:0025
db byte_1f4d6; // 10ed:0026
db dummy9_10ef7; // 10ed:0027
db byte_1f4d8; // 10ed:0028
db byte_1f4d9; // 10ed:0029
db byte_1f4da; // 10ed:002a
db byte_1f4db; // 10ed:002b
db dummy9_10efc[32]; // 10ed:002c
db dummy9_10f1c[32]; // 10ed:004c
db dummy9_10f3c;
db dummy9_10f3d;
db dummy9_10f3e;
db dummy9_10f3f;
db dummy9_10f40;
db dummy9_10f41;
db dummy9_10f42;
db dummy9_10f43;
db dummy9_10f44;
db dummy9_10f45;
db dummy9_10f46;
db dummy9_10f47;
db dummy9_10f48;
db dummy9_10f49;
db dummy9_10f4a;
db dummy9_10f4b;
db dummy9_10f4c;
db dummy9_10f4d;
db dummy9_10f4e;
db dummy9_10f4f;
db dummy9_10f50;
db dummy9_10f51;
db res_hark_hsq; // 10ed:0082
db dummy9_10f53;
db dummy9_10f54;
db dummy9_10f55;
db dummy9_10f56;
db dummy9_10f57;
db dummy9_10f58;
db dummy9_10f59;
db dummy9_10f5a;
db dummy9_10f5b;
db unk_1f53c; // 10ed:008c
db dummy9_10f5d;
db dummy9_10f5e;
db dummy9_10f5f;
db dummy9_10f60;
db dummy9_10f61;
db dummy9_10f62;
db dummy9_10f63;
db dummy9_10f64;
db dummy9_10f65;
db dummy9_10f66;
db dummy9_10f67;
dw word_1f548; // 10ed:0098
dw word_1f54a; // 10ed:009a
db dummy9_10f6c;
db byte_1f54d; // 10ed:009d
db dummy9_10f6e;
db dummy9_10f6f;
db dummy9_10f70;
db dummy9_10f71;
db dummy9_10f72;
db dummy9_10f73;
db dummy9_10f74;
db dummy9_10f75;
db dummy9_10f76;
db dummy9_10f77;
db dummy9_10f78; // 10ed:00a8
db dummy9_10f79; // 10ed:00a9
db unk_1f55a; // 10ed:00aa
db dummy9_10f7b;
db dummy9_10f7c; // 10ed:00ac
db dummy9_10f7d; // 10ed:00ad
db dummy9_10f7e;
db dummy9_10f7f;
db dummy9_10f80;
db dummy9_10f81;
db dummy9_10f82;
db dummy9_10f83;
db dummy9_10f84;
db dummy9_10f85;
db dummy9_10f86;
db dummy9_10f87;
db dummy9_10f88;
db dummy9_10f89;
db dummy9_10f8a;
db dummy9_10f8b;
db dummy9_10f8c;
db dummy9_10f8d;
db dummy9_10f8e; // 10ed:00be
db dummy9_10f8f;
db dummy9_10f90;
db dummy9_10f91;
db byte_1f572; // 10ed:00c2
db dummy9_10f93;
db dummy9_10f94;
db byte_1f575; // 10ed:00c5
db byte_1f576; // 10ed:00c6
db dummy9_10f97;
db unk_1f578; // 10ed:00c8
db res_smug_hsq; // 10ed:00c9
db dummy9_10f9a; // 10ed:00ca
db dummy9_10f9b; // 10ed:00cb
db dummy9_10f9c;
db dummy9_10f9d;
db dummy9_10f9e;
db byte_1f57f; // 10ed:00cf
db dummy9_10fa0; // 10ed:00d0
db dummy9_10fa1; // 10ed:00d1
db dummy9_10fa2;
db dummy9_10fa3;
db dummy9_10fa4;
db byte_1f585; // 10ed:00d5
db dummy9_10fa6; // 10ed:00d6
db dummy9_10fa7; // 10ed:00d7
db dummy9_10fa8;
db dummy9_10fa9;
db dummy9_10faa;
db dummy9_10fab;
db dummy9_10fac; // 10ed:00dc
db dummy9_10fad; // 10ed:00dd
db dummy9_10fae;
db dummy9_10faf;
db dummy9_10fb0;
db dummy9_10fb1;
db dummy9_10fb2; // 10ed:00e2
db dummy9_10fb3; // 10ed:00e3
db dummy9_10fb4;
db dummy9_10fb5;
db dummy9_10fb6;
db byte_1f597; // 10ed:00e7
db byte_1f598; // 10ed:00e8
db byte_1f599; // 10ed:00e9
db byte_1f59a; // 10ed:00ea
db dummy9_10fbb[5]; // 10ed:00eb
db unk_1f5a0; // 10ed:00f0
db res_frm1_hsq_; // 10ed:00f1
db dummy9_10fc2;
db dummy9_10fc3;
db byte_1f5a4; // 10ed:00f4
db dummy9_10fc5;
db byte_1f5a6; // 10ed:00f6
db dummy9_10fc7;
db dummy9_10fc8;
db dummy9_10fc9;
db dummy9_10fca;
db byte_1f5ab; // 10ed:00fb
db dummy9_10fcc; // 10ed:00fc
db dummy9_10fcd;
db dummy9_10fce;
db byte_1f5af; // 10ed:00ff
db dummy9_10fd0; // 10ed:0100
db dummy9_10fd1; // 10ed:0101
db dummy9_10fd2; // 10ed:0102
db dummy9_10fd3; // 10ed:0103
db dummy9_10fd4; // 10ed:0104
db dummy9_10fd5; // 10ed:0105
db dummy9_10fd6;
db dummy9_10fd7;
db dummy9_10fd8; // 10ed:0108
db dummy9_10fd9;
db dummy9_10fda; // 10ed:010a
db dummy9_10fdb; // 10ed:010b
db dummy9_10fdc;
db dummy9_10fdd;
db dummy9_10fde;
db dummy9_10fdf;
db dummy9_10fe0;
db dummy9_10fe1;
db dummy9_10fe2;
db dummy9_10fe3;
db dummy9_10fe4;
db byte_1f5c5; // 10ed:0115
db dummy9_10fe6[32]; // 10ed:0116
db dummy9_11006[32]; // 10ed:0136
db dummy9_11026[32]; // 10ed:0156
db dummy9_11046[32]; // 10ed:0176
db dummy9_11066[32]; // 10ed:0196
db dummy9_11086[32]; // 10ed:01b6
db dummy9_110a6[32]; // 10ed:01d6
db dummy9_110c6;
db dummy9_110c7; // 10ed:01f7
db dummy9_110c8; // 10ed:01f8
db dummy9_110c9;
db dummy9_110ca;
db dummy9_110cb;
db dummy9_110cc; // 10ed:01fc
db dummy9_110cd; // 10ed:01fd
db dummy9_110ce; // 10ed:01fe
db dummy9_110cf; // 10ed:01ff
db dummy9_110d0; // 10ed:0200
db dummy9_110d1; // 10ed:0201
db dummy9_110d2;
db dummy9_110d3;
db dummy9_110d4; // 10ed:0204
db dummy9_110d5;
db dummy9_110d6; // 10ed:0206
db dummy9_110d7; // 10ed:0207
db dummy9_110d8;
db dummy9_110d9;
dw dummy9_110da;
db dummy9_110dc[32]; // 10ed:020c
db dummy9_110fc[32]; // 10ed:022c
db dummy9_1111c[32]; // 10ed:024c
db dummy9_1113c[32]; // 10ed:026c
db dummy9_1115c[32]; // 10ed:028c
db dummy9_1117c; // 10ed:02ac
db dummy9_1117d; // 10ed:02ad
db dummy9_1117e; // 10ed:02ae
db dummy9_1117f; // 10ed:02af
db dummy9_11180;
db dummy9_11181;
db dummy9_11182;
db dummy9_11183;
db dummy9_11184;
db dummy9_11185;
db dummy9_11186; // 10ed:02b6
db dummy9_11187;
db dummy9_11188; // 10ed:02b8
db dummy9_11189;
db dummy9_1118a;
db dummy9_1118b;
db dummy9_1118c;
db dummy9_1118d;
db dummy9_1118e;
db dummy9_1118f; // 10ed:02bf
db dummy9_11190; // 10ed:02c0
dw word_1f771; // 10ed:02c1
dw dummy9_11193; // 10ed:02c3
db dummy9_11195[3]; // 10ed:02c5
db dummy9_11198[32]; // 10ed:02c8
db dummy9_111b8[32]; // 10ed:02e8
db dummy9_111d8[32]; // 10ed:0308
db dummy9_111f8; // 10ed:0328
db dummy9_111f9; // 10ed:0329
db dummy9_111fa; // 10ed:032a
db dummy9_111fb;
db dummy9_111fc;
db dummy9_111fd;
db dummy9_111fe;
db dummy9_111ff;
db dummy9_11200; // 10ed:0330
db dummy9_11201; // 10ed:0331
db dummy9_11202; // 10ed:0332
db dummy9_11203; // 10ed:0333
db dummy9_11204; // 10ed:0334
db dummy9_11205;
db dummy9_11206;
dw dummy9_11207; // 10ed:0337
db dummy9_11209[32]; // 10ed:0339
db dummy9_11229[32]; // 10ed:0359
db dummy9_11249[32]; // 10ed:0379
db dummy9_11269[32]; // 10ed:0399
db dummy9_11289[32]; // 10ed:03b9
db dummy9_112a9; // 10ed:03d9
db dummy9_112aa; // 10ed:03da
db dummy9_112ab; // 10ed:03db
db dummy9_112ac; // 10ed:03dc
db dummy9_112ad;
db dummy9_112ae;
db dummy9_112af;
db dummy9_112b0; // 10ed:03e0
db dummy9_112b1;
db dummy9_112b2; // 10ed:03e2
db dummy9_112b3; // 10ed:03e3
db dummy9_112b4;
db dummy9_112b5;
db dummy9_112b6;
db dummy9_112b7;
db unk_1f898; // 10ed:03e8
db dummy9_112b9[32]; // 10ed:03e9
db dummy9_112d9[32]; // 10ed:0409
db dummy9_112f9[32]; // 10ed:0429
db dummy9_11319[32]; // 10ed:0449
db dummy9_11339[32]; // 10ed:0469
db dummy9_11359[32]; // 10ed:0489
db dummy9_11379;
db dummy9_1137a;
db dummy9_1137b;
db dummy9_1137c;
db dummy9_1137d;
db dummy9_1137e; // 10ed:04ae
db dummy9_1137f;
db unk_1f960; // 10ed:04b0
db dummy9_11381[32]; // 10ed:04b1
db dummy9_113a1[32]; // 10ed:04d1
db dummy9_113c1[32]; // 10ed:04f1
db dummy9_113e1[32]; // 10ed:0511
db dummy9_11401[32]; // 10ed:0531
db dummy9_11421[32]; // 10ed:0551
db dummy9_11441[32]; // 10ed:0571
db dummy9_11461[32]; // 10ed:0591
db dummy9_11481[32]; // 10ed:05b1
db dummy9_114a1[32]; // 10ed:05d1
db dummy9_114c1[32]; // 10ed:05f1
db dummy9_114e1[32]; // 10ed:0611
db dummy9_11501[32]; // 10ed:0631
db dummy9_11521[32]; // 10ed:0651
db dummy9_11541[32]; // 10ed:0671
db dummy9_11561[32]; // 10ed:0691
db dummy9_11581[32]; // 10ed:06b1
db dummy9_115a1[32]; // 10ed:06d1
db dummy9_115c1[32]; // 10ed:06f1
db dummy9_115e1[32]; // 10ed:0711
db dummy9_11601[32]; // 10ed:0731
db dummy9_11621[32]; // 10ed:0751
db dummy9_11641[32]; // 10ed:0771
db dummy9_11661[32]; // 10ed:0791
db dummy9_11681[32]; // 10ed:07b1
db dummy9_116a1[32]; // 10ed:07d1
db dummy9_116c1;
db dummy9_116c2;
db dummy9_116c3;
db dummy9_116c4;
db dummy9_116c5;
db dummy9_116c6; // 10ed:07f6
db dummy9_116c7;
db dummy9_116c8;
db dummy9_116c9;
db dummy9_116ca;
db dummy9_116cb;
db dummy9_116cc;
db dummy9_116cd;
db dummy9_116ce;
db dummy9_116cf; // 10ed:07ff
char _unk_1fcb0_dune_dat_toc_seg[7]; // 10ed:0800
db dummy9_116d7[32]; // 10ed:0807
db dummy9_116f7[32]; // 10ed:0827
db dummy9_11717[32]; // 10ed:0847
db dummy9_11737[32]; // 10ed:0867
db dummy9_11757[32]; // 10ed:0887
db dummy9_11777[32]; // 10ed:08a7
db dummy9_11797[32]; // 10ed:08c7
db dummy9_117b7[32]; // 10ed:08e7
db dummy9_117d7[32]; // 10ed:0907
db dummy9_117f7[32]; // 10ed:0927
db dummy9_11817[32]; // 10ed:0947
db dummy9_11837[32]; // 10ed:0967
db dummy9_11857[32]; // 10ed:0987
db dummy9_11877[32]; // 10ed:09a7
db dummy9_11897[32]; // 10ed:09c7
db dummy9_118b7[32]; // 10ed:09e7
db dummy9_118d7[32]; // 10ed:0a07
db dummy9_118f7[32]; // 10ed:0a27
db dummy9_11917[32]; // 10ed:0a47
db dummy9_11937[32]; // 10ed:0a67
db dummy9_11957[32]; // 10ed:0a87
db dummy9_11977[32]; // 10ed:0aa7
db dummy9_11997[32]; // 10ed:0ac7
db dummy9_119b7[32]; // 10ed:0ae7
db dummy9_119d7[32]; // 10ed:0b07
db dummy9_119f7[32]; // 10ed:0b27
db dummy9_11a17[32]; // 10ed:0b47
db dummy9_11a37[32]; // 10ed:0b67
db dummy9_11a57[32]; // 10ed:0b87
db dummy9_11a77[32]; // 10ed:0ba7
db dummy9_11a97[32]; // 10ed:0bc7
db dummy9_11ab7[32]; // 10ed:0be7
db dummy9_11ad7[32]; // 10ed:0c07
db dummy9_11af7[32]; // 10ed:0c27
db dummy9_11b17[32]; // 10ed:0c47
db dummy9_11b37[32]; // 10ed:0c67
db dummy9_11b57[32]; // 10ed:0c87
db dummy9_11b77[32]; // 10ed:0ca7
db dummy9_11b97[32]; // 10ed:0cc7
db dummy9_11bb7[32]; // 10ed:0ce7
db dummy9_11bd7[32]; // 10ed:0d07
db dummy9_11bf7[32]; // 10ed:0d27
db dummy9_11c17[32]; // 10ed:0d47
db dummy9_11c37[32]; // 10ed:0d67
db dummy9_11c57[32]; // 10ed:0d87
db dummy9_11c77[32]; // 10ed:0da7
db dummy9_11c97[32]; // 10ed:0dc7
db dummy9_11cb7[32]; // 10ed:0de7
db dummy9_11cd7[32]; // 10ed:0e07
db dummy9_11cf7[32]; // 10ed:0e27
db dummy9_11d17[32]; // 10ed:0e47
db dummy9_11d37[32]; // 10ed:0e67
db dummy9_11d57[32]; // 10ed:0e87
db dummy9_11d77[32]; // 10ed:0ea7
db dummy9_11d97[32]; // 10ed:0ec7
db dummy9_11db7[32]; // 10ed:0ee7
db dummy9_11dd7[32]; // 10ed:0f07
db dummy9_11df7;
db dummy9_11df8;
db dummy9_11df9; // 10ed:0f29
db dummy9_11dfa;
db dummy9_11dfb;
db dummy9_11dfc;
db dummy9_11dfd;
db dummy9_11dfe; // 10ed:0f2e
db dummy9_11dff; // 10ed:0f2f
db dummy9_11e00; // 10ed:0f30
db dummy9_11e01; // 10ed:0f31
db dummy9_11e02; // 10ed:0f32
db dummy9_11e03; // 10ed:0f33
db dummy9_11e04; // 10ed:0f34
db dummy9_11e05; // 10ed:0f35
db dummy9_11e06; // 10ed:0f36
db dummy9_11e07; // 10ed:0f37
db unk_203e8; // 10ed:0f38
db dummy9_11e09[32]; // 10ed:0f39
db dummy9_11e29[32]; // 10ed:0f59
db dummy9_11e49[32]; // 10ed:0f79
db dummy9_11e69[32]; // 10ed:0f99
db dummy9_11e89; // 10ed:0fb9
db dummy9_11e8a; // 10ed:0fba
db dummy9_11e8b;
db dummy9_11e8c;
db dummy9_11e8d;
db dummy9_11e8e;
db dummy9_11e8f;
db dummy9_11e90;
db dummy9_11e91;
db dummy9_11e92;
db dummy9_11e93;
db dummy9_11e94;
db dummy9_11e95;
db dummy9_11e96;
db dummy9_11e97;
db dummy9_11e98;
db dummy9_11e99;
db dummy9_11e9a;
db dummy9_11e9b;
db dummy9_11e9c;
db dummy9_11e9d;
db dummy9_11e9e;
db dummy9_11e9f;
db dummy9_11ea0;
db dummy9_11ea1;
db dummy9_11ea2;
db dummy9_11ea3;
db dummy9_11ea4;
db dummy9_11ea5;
db dummy9_11ea6;
db dummy9_11ea7;
db byte_20488; // 10ed:0fd8
db dummy9_11ea9; // 10ed:0fd9
db dummy9_11eaa; // 10ed:0fda
db byte_2048b; // 10ed:0fdb
db dummy9_11eac; // 10ed:0fdc
db dummy9_11ead; // 10ed:0fdd
db dummy9_11eae;
db dummy9_11eaf;
db dummy9_11eb0;
db dummy9_11eb1;
db dummy9_11eb2;
db dummy9_11eb3;
db dummy9_11eb4;
db dummy9_11eb5;
db dummy9_11eb6;
db dummy9_11eb7; // 10ed:0fe7
db byte_20498; // 10ed:0fe8
db dummy9_11eb9; // 10ed:0fe9
dw word_2049a; // 10ed:0fea
db dummy9_11ebc; // 10ed:0fec
db dummy9_11ebd; // 10ed:0fed
db dummy9_11ebe;
db dummy9_11ebf;
db dummy9_11ec0;
db dummy9_11ec1;
db dummy9_11ec2;
db dummy9_11ec3;
db dummy9_11ec4;
db dummy9_11ec5;
db dummy9_11ec6; // 10ed:0ff6
db dummy9_11ec7; // 10ed:0ff7
dw word_204a8; // 10ed:0ff8
db unk_204aa; // 10ed:0ffa
db byte_204ab; // 10ed:0ffb
db dummy9_11ecc; // 10ed:0ffc
db dummy9_11ecd; // 10ed:0ffd
db dummy9_11ece;
db dummy9_11ecf;
db dummy9_11ed0;
db dummy9_11ed1;
db dummy9_11ed2;
db dummy9_11ed3;
db dummy9_11ed4;
db dummy9_11ed5;
db dummy9_11ed6; // 10ed:1006
db dummy9_11ed7; // 10ed:1007
db dummy9_11ed8; // 10ed:1008
db dummy9_11ed9; // 10ed:1009
db dummy9_11eda; // 10ed:100a
db byte_204bb; // 10ed:100b
db dummy9_11edc; // 10ed:100c
db dummy9_11edd; // 10ed:100d
db dummy9_11ede;
db dummy9_11edf;
db dummy9_11ee0;
db dummy9_11ee1;
db dummy9_11ee2;
db dummy9_11ee3;
db dummy9_11ee4;
db dummy9_11ee5;
db dummy9_11ee6; // 10ed:1016
db dummy9_11ee7; // 10ed:1017
dw word_204c8; // 10ed:1018
dw word_204ca; // 10ed:101a
db dummy9_11eec; // 10ed:101c
db dummy9_11eed; // 10ed:101d
db dummy9_11eee;
db dummy9_11eef;
db dummy9_11ef0;
db dummy9_11ef1;
db dummy9_11ef2;
db dummy9_11ef3;
db dummy9_11ef4;
db dummy9_11ef5;
db dummy9_11ef6; // 10ed:1026
db dummy9_11ef7;
db dummy9_11ef8; // 10ed:1028
db dummy9_11ef9; // 10ed:1029
db dummy9_11efa; // 10ed:102a
db dummy9_11efb; // 10ed:102b
db dummy9_11efc; // 10ed:102c
db dummy9_11efd; // 10ed:102d
db dummy9_11efe;
db dummy9_11eff;
db dummy9_11f00;
db dummy9_11f01;
db dummy9_11f02;
db dummy9_11f03;
db dummy9_11f04;
db dummy9_11f05;
db dummy9_11f06; // 10ed:1036
db dummy9_11f07;
db byte_204e8; // 10ed:1038
db dummy9_11f09; // 10ed:1039
db dummy9_11f0a; // 10ed:103a
db dummy9_11f0b; // 10ed:103b
db dummy9_11f0c; // 10ed:103c
db dummy9_11f0d; // 10ed:103d
db dummy9_11f0e;
db dummy9_11f0f;
db dummy9_11f10;
db dummy9_11f11;
db dummy9_11f12;
db dummy9_11f13;
db dummy9_11f14;
db dummy9_11f15;
db dummy9_11f16; // 10ed:1046
db dummy9_11f17;
dw word_204f8; // 10ed:1048
dw word_204fa; // 10ed:104a
db dummy9_11f1c; // 10ed:104c
db dummy9_11f1d; // 10ed:104d
db dummy9_11f1e;
db dummy9_11f1f;
db dummy9_11f20;
db dummy9_11f21;
db dummy9_11f22;
db dummy9_11f23;
db dummy9_11f24;
db dummy9_11f25;
db dummy9_11f26; // 10ed:1056
db byte_20507; // 10ed:1057
db dummy9_11f28; // 10ed:1058
db dummy9_11f29; // 10ed:1059
db dummy9_11f2a; // 10ed:105a
db dummy9_11f2b; // 10ed:105b
db dummy9_11f2c; // 10ed:105c
db dummy9_11f2d; // 10ed:105d
db dummy9_11f2e;
db dummy9_11f2f;
db dummy9_11f30;
db dummy9_11f31;
db dummy9_11f32;
db dummy9_11f33;
db dummy9_11f34;
db dummy9_11f35;
db dummy9_11f36; // 10ed:1066
db byte_20517; // 10ed:1067
db dummy9_11f38[32]; // 10ed:1068
db dummy9_11f58[32]; // 10ed:1088
db dummy9_11f78[32]; // 10ed:10a8
db dummy9_11f98[32]; // 10ed:10c8
db dummy9_11fb8[32]; // 10ed:10e8
db dummy9_11fd8[32]; // 10ed:1108
db dummy9_11ff8; // 10ed:1128
db dummy9_11ff9; // 10ed:1129
db dummy9_11ffa;
db dummy9_11ffb;
db dummy9_11ffc;
db dummy9_11ffd; // 10ed:112d
db dummy9_11ffe; // 10ed:112e
db dummy9_11fff;
db dummy9_12000;
db dummy9_12001; // 10ed:1131
db dummy9_12002; // 10ed:1132
db dummy9_12003; // 10ed:1133
db dummy9_12004; // 10ed:1134
db dummy9_12005;
db dummy9_12006; // 10ed:1136
db dummy9_12007; // 10ed:1137
db dummy9_12008; // 10ed:1138
db dummy9_12009; // 10ed:1139
db dummy9_1200a; // 10ed:113a
db dummy9_1200b;
db dummy9_1200c;
db dummy9_1200d;
db dummy9_1200e; // 10ed:113e
db dummy9_1200f; // 10ed:113f
db dummy9_12010; // 10ed:1140
db byte_205f1; // 10ed:1141
db dummy9_12012; // 10ed:1142
db dummy9_12013; // 10ed:1143
db dummy9_12014; // 10ed:1144
db dummy9_12015; // 10ed:1145
db dummy9_12016; // 10ed:1146
db dummy9_12017; // 10ed:1147
db dummy9_12018; // 10ed:1148
db dummy9_12019; // 10ed:1149
db dummy9_1201a; // 10ed:114a
db dummy9_1201b; // 10ed:114b
db dummy9_1201c; // 10ed:114c
db dummy9_1201d; // 10ed:114d
dw word_205fe; // 10ed:114e
dw word_20600; // 10ed:1150
dw word_20602; // 10ed:1152
dw word_20604; // 10ed:1154
dw word_20606; // 10ed:1156
dw word_20608; // 10ed:1158
db dummy9_1202a[2]; // 10ed:115a
db dummy9_1202c; // 10ed:115c
db dummy9_1202d; // 10ed:115d
db dummy9_1202e; // 10ed:115e
db dummy9_1202f;
db dummy9_12030; // 10ed:1160
db dummy9_12031;
db dummy9_12032;
db dummy9_12033;
db dummy9_12034;
db dummy9_12035;
db dummy9_12036;
db dummy9_12037;
db dummy9_12038;
db dummy9_12039;
db dummy9_1203a;
db dummy9_1203b; // 10ed:116b
db dummy9_1203c;
db dummy9_1203d; // 10ed:116d
db dummy9_1203e;
db dummy9_1203f; // 10ed:116f
db dummy9_12040;
db dummy9_12041;
db dummy9_12042;
db dummy9_12043;
db dummy9_12044; // 10ed:1174
db dummy9_12045;
dw word_20626; // 10ed:1176
db byte_20628; // 10ed:1178
db unk_20629; // 10ed:1179
db dummy9_1204a[32]; // 10ed:117a
db dummy9_1206a[32]; // 10ed:119a
db dummy9_1208a; // 10ed:11ba
db dummy9_1208b;
db byte_2066c; // 10ed:11bc
dw word_2066d; // 10ed:11bd
db dummy9_1208f; // 10ed:11bf
db dummy9_12090;
db dummy9_12091; // 10ed:11c1
db dummy9_12092;
db dummy9_12093; // 10ed:11c3
db dummy9_12094;
db dummy9_12095;
db dummy9_12096;
db dummy9_12097;
db dummy9_12098;
db byte_20679; // 10ed:11c9
db byte_2067a; // 10ed:11ca
db byte_2067b; // 10ed:11cb
db dummy9_1209c;
db dummy9_1209d;
db dummy9_1209e;
db dummy9_1209f; // 10ed:11cf
db byte_20680; // 10ed:11d0
db dummy9_120a1; // 10ed:11d1
db dummy9_120a2; // 10ed:11d2
db dummy9_120a3;
db dummy9_120a4;
db dummy9_120a5;
db dummy9_120a6;
db dummy9_120a7;
db dummy9_120a8;
db dummy9_120a9;
db dummy9_120aa;
db dummy9_120ab;
db dummy9_120ac;
db dummy9_120ad; // 10ed:11dd
db dummy9_120ae;
db dummy9_120af;
db dummy9_120b0;
db dummy9_120b1; // 10ed:11e1
db dummy9_120b2;
db dummy9_120b3; // 10ed:11e3
db dummy9_120b4;
db dummy9_120b5;
db dummy9_120b6;
db dummy9_120b7; // 10ed:11e7
db dummy9_120b8;
db dummy9_120b9; // 10ed:11e9
db dummy9_120ba; // 10ed:11ea
dw word_2069b; // 10ed:11eb
db dummy9_120bd; // 10ed:11ed
db dummy9_120be;
db dummy9_120bf; // 10ed:11ef
db dummy9_120c0;
db dummy9_120c1; // 10ed:11f1
db dummy9_120c2;
db dummy9_120c3; // 10ed:11f3
db dummy9_120c4;
db dummy9_120c5; // 10ed:11f5
db dummy9_120c6;
db dummy9_120c7; // 10ed:11f7
db dummy9_120c8;
db dummy9_120c9; // 10ed:11f9
db dummy9_120ca;
db dummy9_120cb; // 10ed:11fb
db dummy9_120cc;
db dummy9_120cd; // 10ed:11fd
db dummy9_120ce;
db dummy9_120cf; // 10ed:11ff
db dummy9_120d0;
dw word_206b1; // 10ed:1201
db dummy9_120d3; // 10ed:1203
db dummy9_120d4;
db dummy9_120d5; // 10ed:1205
db dummy9_120d6;
db dummy9_120d7; // 10ed:1207
db dummy9_120d8;
db dummy9_120d9; // 10ed:1209
db dummy9_120da;
db dummy9_120db;
db dummy9_120dc;
db dummy9_120dd; // 10ed:120d
db dummy9_120de;
db dummy9_120df; // 10ed:120f
db dummy9_120e0;
dw word_206c1; // 10ed:1211
db dummy9_120e3; // 10ed:1213
db dummy9_120e4; // 10ed:1214
db dummy9_120e5; // 10ed:1215
db dummy9_120e6;
dw word_206c7; // 10ed:1217
db dummy9_120e9; // 10ed:1219
db dummy9_120ea;
db dummy9_120eb; // 10ed:121b
db dummy9_120ec;
dw word_206cd; // 10ed:121d
db dummy9_120ef; // 10ed:121f
db dummy9_120f0;
db dummy9_120f1; // 10ed:1221
db dummy9_120f2;
db dummy9_120f3; // 10ed:1223
db dummy9_120f4; // 10ed:1224
db dummy9_120f5; // 10ed:1225
db dummy9_120f6; // 10ed:1226
db dummy9_120f7;
db dummy9_120f8; // 10ed:1228
db dummy9_120f9;
db byte_206da; // 10ed:122a
db dummy9_120fb; // 10ed:122b
db dummy9_120fc;
db dummy9_120fd; // 10ed:122d
db byte_206de; // 10ed:122e
db dummy9_120ff; // 10ed:122f
db dummy9_12100;
db dummy9_12101;
db dummy9_12102;
db dummy9_12103; // 10ed:1233
db dummy9_12104; // 10ed:1234
db dummy9_12105; // 10ed:1235
db dummy9_12106;
db dummy9_12107; // 10ed:1237
db dummy9_12108;
db dummy9_12109; // 10ed:1239
db dummy9_1210a;
db dummy9_1210b;
db dummy9_1210c;
db dummy9_1210d; // 10ed:123d
db dummy9_1210e; // 10ed:123e
db dummy9_1210f; // 10ed:123f
db dummy9_12110;
db dummy9_12111;
db dummy9_12112;
db dummy9_12113; // 10ed:1243
db dummy9_12114; // 10ed:1244
db byte_206f5; // 10ed:1245
db dummy9_12116; // 10ed:1246
db byte_206f7; // 10ed:1247
db dummy9_12118; // 10ed:1248
db dummy9_12119;
db byte_206fa; // 10ed:124a
db dummy9_1211b; // 10ed:124b
db dummy9_1211c;
db dummy9_1211d; // 10ed:124d
db dummy9_1211e;
db dummy9_1211f;
db dummy9_12120; // 10ed:1250
db dummy9_12121;
db dummy9_12122; // 10ed:1252
db dummy9_12123; // 10ed:1253
db dummy9_12124; // 10ed:1254
db dummy9_12125; // 10ed:1255
db dummy9_12126;
db dummy9_12127; // 10ed:1257
db dummy9_12128;
db byte_20709; // 10ed:1259
db dummy9_1212a[32]; // 10ed:125a
db dummy9_1214a[32]; // 10ed:127a
db dummy9_1216a[32]; // 10ed:129a
db dummy9_1218a[32]; // 10ed:12ba
db dummy9_121aa[32]; // 10ed:12da
db dummy9_121ca[32]; // 10ed:12fa
db dummy9_121ea[32]; // 10ed:131a
db dummy9_1220a[32]; // 10ed:133a
db dummy9_1222a[32]; // 10ed:135a
db dummy9_1224a[32]; // 10ed:137a
db dummy9_1226a[32]; // 10ed:139a
db dummy9_1228a; // 10ed:13ba
db dummy9_1228b; // 10ed:13bb
db dummy9_1228c; // 10ed:13bc
db dummy9_1228d; // 10ed:13bd
db dummy9_1228e; // 10ed:13be
db dummy9_1228f; // 10ed:13bf
db dummy9_12290;
db dummy9_12291;
db dummy9_12292; // 10ed:13c2
db dummy9_12293;
dw word_20874; // 10ed:13c4
dw dummy9_12296; // 10ed:13c6
dw dummy9_12298; // 10ed:13c8
dw dummy9_1229a; // 10ed:13ca
dw dummy9_1229c; // 10ed:13cc
dw dummy9_1229e; // 10ed:13ce
dw dummy9_122a0; // 10ed:13d0
dw dummy9_122a2; // 10ed:13d2
dw dummy9_122a4; // 10ed:13d4
dw dummy9_122a6; // 10ed:13d6
dw dummy9_122a8; // 10ed:13d8
dw dummy9_122aa; // 10ed:13da
dw dummy9_122ac; // 10ed:13dc
dw dummy9_122ae; // 10ed:13de
dw dummy9_122b0; // 10ed:13e0
dw dummy9_122b2; // 10ed:13e2
dw dummy9_122b4; // 10ed:13e4
dw dummy9_122b6; // 10ed:13e6
dw dummy9_122b8; // 10ed:13e8
dw dummy9_122ba; // 10ed:13ea
dw dummy9_122bc; // 10ed:13ec
dw dummy9_122be; // 10ed:13ee
dw dummy9_122c0; // 10ed:13f0
dw dummy9_122c2; // 10ed:13f2
dw dummy9_122c4; // 10ed:13f4
dw dummy9_122c6; // 10ed:13f6
dw dummy9_122c8; // 10ed:13f8
dw dummy9_122ca; // 10ed:13fa
dw dummy9_122cc; // 10ed:13fc
dw dummy9_122ce; // 10ed:13fe
dw dummy9_122d0; // 10ed:1400
dw dummy9_122d2; // 10ed:1402
dw dummy9_122d4; // 10ed:1404
dw dummy9_122d6; // 10ed:1406
dw dummy9_122d8; // 10ed:1408
dw dummy9_122da; // 10ed:140a
dw dummy9_122dc; // 10ed:140c
dw dummy9_122de; // 10ed:140e
dw dummy9_122e0; // 10ed:1410
dw dummy9_122e2; // 10ed:1412
dw dummy9_122e4; // 10ed:1414
dw dummy9_122e6; // 10ed:1416
dw dummy9_122e8; // 10ed:1418
dw dummy9_122ea; // 10ed:141a
dw dummy9_122ec; // 10ed:141c
dw dummy9_122ee; // 10ed:141e
dw dummy9_122f0; // 10ed:1420
dw dummy9_122f2; // 10ed:1422
dw dummy9_122f4; // 10ed:1424
dw dummy9_122f6; // 10ed:1426
dw dummy9_122f8; // 10ed:1428
dw dummy9_122fa; // 10ed:142a
dw dummy9_122fc; // 10ed:142c
dw dummy9_122fe; // 10ed:142e
dw dummy9_12300; // 10ed:1430
dw dummy9_12302; // 10ed:1432
dw dummy9_12304; // 10ed:1434
dw dummy9_12306; // 10ed:1436
dw dummy9_12308; // 10ed:1438
dw dummy9_1230a; // 10ed:143a
dw dummy9_1230c; // 10ed:143c
db dummy9_1230e[2]; // 10ed:143e
db dummy9_12310; // 10ed:1440
db dummy9_12311; // 10ed:1441
db dummy9_12312; // 10ed:1442
db dummy9_12313;
db dummy9_12314; // 10ed:1444
db dummy9_12315;
db dummy9_12316; // 10ed:1446
db dummy9_12317;
db dummy9_12318; // 10ed:1448
db dummy9_12319; // 10ed:1449
db dummy9_1231a; // 10ed:144a
db dummy9_1231b;
db _byte_208fc_loaded_sal_index; // 10ed:144c
db dummy9_1231d[32]; // 10ed:144d
db dummy9_1233d;
dw word_2091e; // 10ed:146e
db unk_20920; // 10ed:1470
db dummy9_12341[32]; // 10ed:1471
db dummy9_12361[32]; // 10ed:1491
db dummy9_12381[32]; // 10ed:14b1
db dummy9_123a1[32]; // 10ed:14d1
db dummy9_123c1[32]; // 10ed:14f1
db dummy9_123e1[32]; // 10ed:1511
db dummy9_12401[32]; // 10ed:1531
db dummy9_12421[32]; // 10ed:1551
db dummy9_12441[32]; // 10ed:1571
db dummy9_12461[32]; // 10ed:1591
db dummy9_12481[32]; // 10ed:15b1
db dummy9_124a1[32]; // 10ed:15d1
db dummy9_124c1[32]; // 10ed:15f1
db dummy9_124e1[32]; // 10ed:1611
db dummy9_12501[32]; // 10ed:1631
db dummy9_12521[32]; // 10ed:1651
db dummy9_12541[32]; // 10ed:1671
db dummy9_12561[32]; // 10ed:1691
db dummy9_12581[32]; // 10ed:16b1
db dummy9_125a1[32]; // 10ed:16d1
db dummy9_125c1[32]; // 10ed:16f1
db dummy9_125e1[32]; // 10ed:1711
db dummy9_12601;
db dummy9_12602; // 10ed:1732
db dummy9_12603;
db dummy9_12604;
db dummy9_12605; // 10ed:1735
db dummy9_12606;
db dummy9_12607; // 10ed:1737
db dummy9_12608; // 10ed:1738
db dummy9_12609;
db dummy9_1260a; // 10ed:173a
db dummy9_1260b;
db dummy9_1260c; // 10ed:173c
db dummy9_1260d;
db dummy9_1260e;
db dummy9_1260f; // 10ed:173f
db dummy9_12610; // 10ed:1740
db dummy9_12611; // 10ed:1741
db dummy9_12612; // 10ed:1742
db dummy9_12613; // 10ed:1743
db dummy9_12614; // 10ed:1744
db unk_20bf5; // 10ed:1745
db dummy9_12616[32]; // 10ed:1746
db dummy9_12636;
db dummy9_12637; // 10ed:1767
db dummy9_12638;
db dummy9_12639;
db dummy9_1263a; // 10ed:176a
db unk_20c1b; // 10ed:176b
db dummy9_1263c[32]; // 10ed:176c
db dummy9_1265c[32]; // 10ed:178c
db dummy9_1267c[32]; // 10ed:17ac
db dummy9_1269c[32]; // 10ed:17cc
db dummy9_126bc[32]; // 10ed:17ec
db dummy9_126dc[32]; // 10ed:180c
db dummy9_126fc[32]; // 10ed:182c
db dummy9_1271c[32]; // 10ed:184c
db dummy9_1273c[32]; // 10ed:186c
db dummy9_1275c[32]; // 10ed:188c
db dummy9_1277c[32]; // 10ed:18ac
db dummy9_1279c[32]; // 10ed:18cc
db dummy9_127bc;
db dummy9_127bd; // 10ed:18ed
db dummy9_127be;
db dummy9_127bf; // 10ed:18ef
db dummy9_127c0;
db dummy9_127c1; // 10ed:18f1
db dummy9_127c2; // 10ed:18f2
dw word_20da3; // 10ed:18f3
dw word_20da5; // 10ed:18f5
db dummy9_127c7[32]; // 10ed:18f7
db dummy9_127e7[32]; // 10ed:1917
db dummy9_12807[32]; // 10ed:1937
db dummy9_12827[32]; // 10ed:1957
db dummy9_12847; // 10ed:1977
db dummy9_12848; // 10ed:1978
db dummy9_12849; // 10ed:1979
db dummy9_1284a; // 10ed:197a
db dummy9_1284b; // 10ed:197b
dw word_20e2c; // 10ed:197c
dw word_20e2e; // 10ed:197e
dw word_20e30; // 10ed:1980
dw word_20e32; // 10ed:1982
db dummy9_12854[32]; // 10ed:1984
db dummy9_12874[32]; // 10ed:19a4
db dummy9_12894[32]; // 10ed:19c4
db dummy9_128b4[32]; // 10ed:19e4
db dummy9_128d4[32]; // 10ed:1a04
db dummy9_128f4[32]; // 10ed:1a24
db dummy9_12914[32]; // 10ed:1a44
db dummy9_12934[32]; // 10ed:1a64
db dummy9_12954[32]; // 10ed:1a84
db dummy9_12974[32]; // 10ed:1aa4
db dummy9_12994[32]; // 10ed:1ac4
db unk_20f94; // 10ed:1ae4
db dummy9_129b5;
db unk_20f96; // 10ed:1ae6
db dummy9_129b7;
db dummy9_129b8; // 10ed:1ae8
db dummy9_129b9;
db dummy9_129ba; // 10ed:1aea
db dummy9_129bb;
db dummy9_129bc; // 10ed:1aec
db dummy9_129bd;
db dummy9_129be;
db dummy9_129bf;
db dummy9_129c0; // 10ed:1af0
db dummy9_129c1; // 10ed:1af1
db dummy9_129c2; // 10ed:1af2
db dummy9_129c3; // 10ed:1af3
db unk_20fa4; // 10ed:1af4
db dummy9_129c5;
db dummy9_129c6; // 10ed:1af6
db dummy9_129c7;
db dummy9_129c8;
db dummy9_129c9;
db dummy9_129ca; // 10ed:1afa
db dummy9_129cb;
db dummy9_129cc;
db dummy9_129cd;
dw word_20fae; // 10ed:1afe
db dummy9_129d0[32]; // 10ed:1b00
db dummy9_129f0[32]; // 10ed:1b20
db dummy9_12a10; // 10ed:1b40
db dummy9_12a11;
db dummy9_12a12;
db dummy9_12a13;
db dummy9_12a14; // 10ed:1b44
db dummy9_12a15;
db dummy9_12a16; // 10ed:1b46
db dummy9_12a17; // 10ed:1b47
db byte_20ff8; // 10ed:1b48
db dummy9_12a19[32]; // 10ed:1b49
db dummy9_12a39[32]; // 10ed:1b69
db dummy9_12a59;
db dummy9_12a5a; // 10ed:1b8a
db dummy9_12a5b;
db dummy9_12a5c; // 10ed:1b8c
db dummy9_12a5d; // 10ed:1b8d
db unk_2103e; // 10ed:1b8e
db dummy9_12a5f[32]; // 10ed:1b8f
db dummy9_12a7f[32]; // 10ed:1baf
db dummy9_12a9f;
db dummy9_12aa0; // 10ed:1bd0
db dummy9_12aa1; // 10ed:1bd1
db dummy9_12aa2; // 10ed:1bd2
db dummy9_12aa3; // 10ed:1bd3
db dummy9_12aa4;
db dummy9_12aa5;
db dummy9_12aa6;
db dummy9_12aa7;
db dummy9_12aa8;
db dummy9_12aa9;
db dummy9_12aaa;
db dummy9_12aab;
db dummy9_12aac;
db dummy9_12aad;
db dummy9_12aae; // 10ed:1bde
db dummy9_12aaf; // 10ed:1bdf
db dummy9_12ab0; // 10ed:1be0
db dummy9_12ab1; // 10ed:1be1
db unk_21092; // 10ed:1be2
db dummy9_12ab3;
dw word_21094; // 10ed:1be4
db dummy9_12ab6;
db dummy9_12ab7;
db dummy9_12ab8;
db dummy9_12ab9;
dw word_2109a; // 10ed:1bea
db dummy9_12abc; // 10ed:1bec
db dummy9_12abd; // 10ed:1bed
db dummy9_12abe; // 10ed:1bee
db dummy9_12abf; // 10ed:1bef
dw word_210a0; // 10ed:1bf0
dw word_210a2; // 10ed:1bf2
db dummy9_12ac4[4]; // 10ed:1bf4
dw word_210a8; // 10ed:1bf8
db dummy9_12aca; // 10ed:1bfa
db dummy9_12acb; // 10ed:1bfb
db dummy9_12acc; // 10ed:1bfc
db dummy9_12acd; // 10ed:1bfd
db dummy9_12ace;
db dummy9_12acf;
db dummy9_12ad0;
db dummy9_12ad1;
db dummy9_12ad2; // 10ed:1c02
db dummy9_12ad3; // 10ed:1c03
db dummy9_12ad4; // 10ed:1c04
db dummy9_12ad5;
dw word_210b6; // 10ed:1c06
db dummy9_12ad8[32]; // 10ed:1c08
db dummy9_12af8;
db dummy9_12af9;
db dummy9_12afa; // 10ed:1c2a
db dummy9_12afb;
db dummy9_12afc; // 10ed:1c2c
db dummy9_12afd;
db dummy9_12afe; // 10ed:1c2e
db dummy9_12aff;
db byte_210e0; // 10ed:1c30
db dummy9_12b01[32]; // 10ed:1c31
db dummy9_12b21[32]; // 10ed:1c51
db dummy9_12b41[32]; // 10ed:1c71
db dummy9_12b61[32]; // 10ed:1c91
db dummy9_12b81[32]; // 10ed:1cb1
db dummy9_12ba1[32]; // 10ed:1cd1
db dummy9_12bc1[32]; // 10ed:1cf1
db dummy9_12be1; // 10ed:1d11
db dummy9_12be2; // 10ed:1d12
db dummy9_12be3;
db dummy9_12be4; // 10ed:1d14
db dummy9_12be5; // 10ed:1d15
db dummy9_12be6; // 10ed:1d16
db dummy9_12be7;
db dummy9_12be8;
db dummy9_12be9;
db dummy9_12bea; // 10ed:1d1a
db dummy9_12beb;
db dummy9_12bec; // 10ed:1d1c
db dummy9_12bed; // 10ed:1d1d
db unk_211ce; // 10ed:1d1e
db dummy9_12bef[32]; // 10ed:1d1f
db dummy9_12c0f[32]; // 10ed:1d3f
db dummy9_12c2f[32]; // 10ed:1d5f
db dummy9_12c4f[32]; // 10ed:1d7f
db dummy9_12c6f[32]; // 10ed:1d9f
db dummy9_12c8f;
db dummy9_12c90;
db dummy9_12c91;
db dummy9_12c92; // 10ed:1dc2
db dummy9_12c93; // 10ed:1dc3
db dummy9_12c94; // 10ed:1dc4
db dummy9_12c95; // 10ed:1dc5
db unk_21276; // 10ed:1dc6
db dummy9_12c97[32]; // 10ed:1dc7
db dummy9_12cb7[32]; // 10ed:1de7
db dummy9_12cd7; // 10ed:1e07
db dummy9_12cd8; // 10ed:1e08
db dummy9_12cd9;
db dummy9_12cda; // 10ed:1e0a
db dummy9_12cdb; // 10ed:1e0b
db dummy9_12cdc; // 10ed:1e0c
db dummy9_12cdd;
db dummy9_12cde; // 10ed:1e0e
db dummy9_12cdf;
db dummy9_12ce0; // 10ed:1e10
db dummy9_12ce1;
db dummy9_12ce2; // 10ed:1e12
db dummy9_12ce3;
db dummy9_12ce4; // 10ed:1e14
db dummy9_12ce5;
db dummy9_12ce6; // 10ed:1e16
db dummy9_12ce7;
db dummy9_12ce8; // 10ed:1e18
db dummy9_12ce9; // 10ed:1e19
db unk_212ca; // 10ed:1e1a
db dummy9_12ceb[32]; // 10ed:1e1b
db dummy9_12d0b[32]; // 10ed:1e3b
db dummy9_12d2b[32]; // 10ed:1e5b
db dummy9_12d4b[32]; // 10ed:1e7b
db dummy9_12d6b[32]; // 10ed:1e9b
db dummy9_12d8b[32]; // 10ed:1ebb
db dummy9_12dab[32]; // 10ed:1edb
db dummy9_12dcb[32]; // 10ed:1efb
db dummy9_12deb[32]; // 10ed:1f1b
db dummy9_12e0b[32]; // 10ed:1f3b
db dummy9_12e2b[32]; // 10ed:1f5b
db dummy9_12e4b[32]; // 10ed:1f7b
db dummy9_12e6b[32]; // 10ed:1f9b
db dummy9_12e8b[32]; // 10ed:1fbb
db dummy9_12eab[32]; // 10ed:1fdb
db dummy9_12ecb[32]; // 10ed:1ffb
db dummy9_12eeb;
db dummy9_12eec; // 10ed:201c
db dummy9_12eed; // 10ed:201d
db dummy9_12eee; // 10ed:201e
db dummy9_12eef; // 10ed:201f
db dummy9_12ef0; // 10ed:2020
db dummy9_12ef1; // 10ed:2021
db dummy9_12ef2; // 10ed:2022
db dummy9_12ef3; // 10ed:2023
db dummy9_12ef4; // 10ed:2024
db dummy9_12ef5; // 10ed:2025
db dummy9_12ef6; // 10ed:2026
db dummy9_12ef7; // 10ed:2027
db dummy9_12ef8; // 10ed:2028
db dummy9_12ef9;
db dummy9_12efa; // 10ed:202a
db dummy9_12efb; // 10ed:202b
db dummy9_12efc; // 10ed:202c
db dummy9_12efd;
db dummy9_12efe; // 10ed:202e
db dummy9_12eff; // 10ed:202f
db dummy9_12f00;
db dummy9_12f01;
db unk_214e2; // 10ed:2032
db dummy9_12f03;
db unk_214e4; // 10ed:2034
db dummy9_12f05[32]; // 10ed:2035
db dummy9_12f25;
db dummy9_12f26; // 10ed:2056
db dummy9_12f27; // 10ed:2057
db dummy9_12f28; // 10ed:2058
db dummy9_12f29;
db dummy9_12f2a; // 10ed:205a
db dummy9_12f2b; // 10ed:205b
db dummy9_12f2c; // 10ed:205c
db dummy9_12f2d;
db dummy9_12f2e; // 10ed:205e
db dummy9_12f2f; // 10ed:205f
db dummy9_12f30;
db dummy9_12f31;
db dummy9_12f32; // 10ed:2062
db dummy9_12f33;
db dummy9_12f34; // 10ed:2064
db dummy9_12f35; // 10ed:2065
db dummy9_12f36; // 10ed:2066
db dummy9_12f37; // 10ed:2067
db dummy9_12f38;
db dummy9_12f39;
db unk_2151a; // 10ed:206a
db dummy9_12f3b[32]; // 10ed:206b
db dummy9_12f5b;
db dummy9_12f5c; // 10ed:208c
db dummy9_12f5d; // 10ed:208d
db dummy9_12f5e; // 10ed:208e
db dummy9_12f5f; // 10ed:208f
db dummy9_12f60; // 10ed:2090
db dummy9_12f61; // 10ed:2091
db dummy9_12f62; // 10ed:2092
db dummy9_12f63; // 10ed:2093
db dummy9_12f64; // 10ed:2094
db dummy9_12f65; // 10ed:2095
db dummy9_12f66; // 10ed:2096
db dummy9_12f67; // 10ed:2097
db dummy9_12f68; // 10ed:2098
db dummy9_12f69; // 10ed:2099
db dummy9_12f6a; // 10ed:209a
db dummy9_12f6b; // 10ed:209b
db dummy9_12f6c; // 10ed:209c
db dummy9_12f6d;
db dummy9_12f6e; // 10ed:209e
db dummy9_12f6f; // 10ed:209f
db dummy9_12f70;
db dummy9_12f71;
db unk_21552; // 10ed:20a2
db dummy9_12f73[32]; // 10ed:20a3
db dummy9_12f93[32]; // 10ed:20c3
db dummy9_12fb3[32]; // 10ed:20e3
db dummy9_12fd3; // 10ed:2103
db dummy9_12fd4; // 10ed:2104
db dummy9_12fd5;
db dummy9_12fd6; // 10ed:2106
db dummy9_12fd7; // 10ed:2107
db dummy9_12fd8;
db dummy9_12fd9;
db dummy9_12fda; // 10ed:210a
db dummy9_12fdb;
db dummy9_12fdc; // 10ed:210c
db dummy9_12fdd;
db dummy9_12fde; // 10ed:210e
db dummy9_12fdf; // 10ed:210f
db dummy9_12fe0; // 10ed:2110
db dummy9_12fe1;
db dummy9_12fe2; // 10ed:2112
db dummy9_12fe3; // 10ed:2113
db dummy9_12fe4; // 10ed:2114
db dummy9_12fe5;
db dummy9_12fe6; // 10ed:2116
db dummy9_12fe7; // 10ed:2117
db dummy9_12fe8; // 10ed:2118
db dummy9_12fe9;
db dummy9_12fea; // 10ed:211a
db dummy9_12feb; // 10ed:211b
dw word_215cc; // 10ed:211c
db dummy9_12fee; // 10ed:211e
db dummy9_12fef; // 10ed:211f
db dummy9_12ff0;
db dummy9_12ff1;
db unk_215d2; // 10ed:2122
db dummy9_12ff3[32]; // 10ed:2123
db dummy9_13013[32]; // 10ed:2143
db dummy9_13033[32]; // 10ed:2163
db dummy9_13053[32]; // 10ed:2183
db dummy9_13073[32]; // 10ed:21a3
db dummy9_13093;
db dummy9_13094;
db dummy9_13095;
db dummy9_13096;
db dummy9_13097;
db dummy9_13098;
db dummy9_13099;
db dummy9_1309a;
db dummy9_1309b;
db dummy9_1309c;
db dummy9_1309d;
db dummy9_1309e;
db dummy9_1309f;
db dummy9_130a0;
db dummy9_130a1;
db dummy9_130a2;
db dummy9_130a3;
db dummy9_130a4;
db dummy9_130a5;
db dummy9_130a6;
db dummy9_130a7;
db dummy9_130a8;
db dummy9_130a9;
dw word_2168a; // 10ed:21da
db dummy9_130ac; // 10ed:21dc
db dummy9_130ad;
db dummy9_130ae; // 10ed:21de
db dummy9_130af; // 10ed:21df
db unk_21690; // 10ed:21e0
db dummy9_130b1;
db dummy9_130b2; // 10ed:21e2
db dummy9_130b3; // 10ed:21e3
db dummy9_130b4; // 10ed:21e4
db dummy9_130b5;
db dummy9_130b6; // 10ed:21e6
db dummy9_130b7; // 10ed:21e7
db dummy9_130b8; // 10ed:21e8
db dummy9_130b9;
db dummy9_130ba; // 10ed:21ea
db dummy9_130bb; // 10ed:21eb
db dummy9_130bc; // 10ed:21ec
db dummy9_130bd;
db dummy9_130be; // 10ed:21ee
db dummy9_130bf; // 10ed:21ef
db unk_216a0; // 10ed:21f0
db dummy9_130c1;
db dummy9_130c2; // 10ed:21f2
db dummy9_130c3; // 10ed:21f3
db unk_216a4; // 10ed:21f4
db dummy9_130c5;
db dummy9_130c6; // 10ed:21f6
db dummy9_130c7; // 10ed:21f7
db dummy9_130c8; // 10ed:21f8
db dummy9_130c9;
db dummy9_130ca; // 10ed:21fa
db dummy9_130cb; // 10ed:21fb
db unk_216ac; // 10ed:21fc
db dummy9_130cd;
db dummy9_130ce; // 10ed:21fe
db dummy9_130cf; // 10ed:21ff
db unk_216b0; // 10ed:2200
db dummy9_130d1;
db dummy9_130d2; // 10ed:2202
db dummy9_130d3; // 10ed:2203
db unk_216b4; // 10ed:2204
db dummy9_130d5;
db dummy9_130d6; // 10ed:2206
db dummy9_130d7; // 10ed:2207
db dummy9_130d8; // 10ed:2208
db dummy9_130d9;
db dummy9_130da; // 10ed:220a
db dummy9_130db; // 10ed:220b
db unk_216bc; // 10ed:220c
db dummy9_130dd;
db dummy9_130de; // 10ed:220e
db dummy9_130df; // 10ed:220f
db dummy9_130e0; // 10ed:2210
db dummy9_130e1;
db dummy9_130e2; // 10ed:2212
db dummy9_130e3; // 10ed:2213
db unk_216c4; // 10ed:2214
db dummy9_130e5;
db dummy9_130e6; // 10ed:2216
db dummy9_130e7; // 10ed:2217
db unk_216c8; // 10ed:2218
db dummy9_130e9;
db dummy9_130ea; // 10ed:221a
db dummy9_130eb; // 10ed:221b
db dummy9_130ec; // 10ed:221c
db dummy9_130ed;
db dummy9_130ee; // 10ed:221e
db dummy9_130ef; // 10ed:221f
dw word_216d0; // 10ed:2220
dw word_216d2; // 10ed:2222
db dummy9_130f4; // 10ed:2224
db dummy9_130f5;
db dummy9_130f6; // 10ed:2226
db dummy9_130f7;
db dummy9_130f8; // 10ed:2228
db dummy9_130f9;
db dummy9_130fa; // 10ed:222a
db dummy9_130fb;
db dummy9_130fc; // 10ed:222c
db dummy9_130fd;
db dummy9_130fe; // 10ed:222e
db dummy9_130ff;
db dummy9_13100; // 10ed:2230
db dummy9_13101;
db dummy9_13102; // 10ed:2232
db dummy9_13103;
db dummy9_13104; // 10ed:2234
db dummy9_13105;
db dummy9_13106; // 10ed:2236
db dummy9_13107;
db dummy9_13108; // 10ed:2238
db dummy9_13109;
db dummy9_1310a; // 10ed:223a
db dummy9_1310b;
db unk_216ec; // 10ed:223c
db dummy9_1310d;
db dummy9_1310e;
db dummy9_1310f;
db dummy9_13110; // 10ed:2240
db dummy9_13111; // 10ed:2241
db dummy9_13112; // 10ed:2242
db dummy9_13113;
db unk_216f4; // 10ed:2244
db dummy9_13115;
db dummy9_13116;
db dummy9_13117;
db dummy9_13118; // 10ed:2248
db dummy9_13119;
db dummy9_1311a; // 10ed:224a
db dummy9_1311b;
db dummy9_1311c; // 10ed:224c
db dummy9_1311d;
db dummy9_1311e;
db dummy9_1311f;
db dummy9_13120; // 10ed:2250
db dummy9_13121; // 10ed:2251
db dummy9_13122; // 10ed:2252
db dummy9_13123;
dw word_21704; // 10ed:2254
dw word_21706; // 10ed:2256
db dummy9_13128; // 10ed:2258
db dummy9_13129;
db dummy9_1312a; // 10ed:225a
db dummy9_1312b;
db dummy9_1312c; // 10ed:225c
dw word_2170d; // 10ed:225d
db dummy9_1312f; // 10ed:225f
db dummy9_13130; // 10ed:2260
db dummy9_13131; // 10ed:2261
db dummy9_13132; // 10ed:2262
db dummy9_13133; // 10ed:2263
db dummy9_13134; // 10ed:2264
db dummy9_13135;
db dummy9_13136;
db dummy9_13137;
db dummy9_13138;
db dummy9_13139; // 10ed:2269
db dummy9_1313a; // 10ed:226a
db dummy9_1313b; // 10ed:226b
db dummy9_1313c;
db dummy9_1313d; // 10ed:226d
db dummy9_1313e;
db dummy9_1313f; // 10ed:226f
db dummy9_13140; // 10ed:2270
db dummy9_13141; // 10ed:2271
db dummy9_13142; // 10ed:2272
db dummy9_13143; // 10ed:2273
db dummy9_13144; // 10ed:2274
db dummy9_13145;
db dummy9_13146;
db dummy9_13147; // 10ed:2277
db dummy9_13148;
db dummy9_13149; // 10ed:2279
db dummy9_1314a; // 10ed:227a
db dummy9_1314b; // 10ed:227b
db dummy9_1314c;
db byte_2172d; // 10ed:227d
db dummy9_1314e; // 10ed:227e
db dummy9_1314f; // 10ed:227f
db asc_21730[12]; // 10ed:2280
db dummy9_1315c; // 10ed:2280
db dummy9_1315d[4]; // 10ed:2280
db dummy9_13161;
char an[2]; // 10ed:2292
char dummy9_13164[2]; // 10ed:2294
db dummy9_13166; // 10ed:2296
db dummy9_13167; // 10ed:2297
db unk_21748; // 10ed:2298
db dummy9_13169;
db dummy9_1316a; // 10ed:229a
db dummy9_1316b;
db dummy9_1316c; // 10ed:229c
db dummy9_1316d;
db dummy9_1316e; // 10ed:229e
db dummy9_1316f; // 10ed:229f
db dummy9_13170; // 10ed:22a0
db dummy9_13171; // 10ed:22a1
db dummy9_13172; // 10ed:22a2
db dummy9_13173; // 10ed:22a3
db dummy9_13174; // 10ed:22a4
db dummy9_13175; // 10ed:22a5
dw word_21756; // 10ed:22a6
db dummy9_13178; // 10ed:22a8
db dummy9_13179; // 10ed:22a9
db dummy9_1317a; // 10ed:22aa
db dummy9_1317b; // 10ed:22ab
db dummy9_1317c; // 10ed:22ac
db dummy9_1317d; // 10ed:22ad
db dummy9_1317e; // 10ed:22ae
db dummy9_1317f; // 10ed:22af
db dummy9_13180; // 10ed:22b0
db dummy9_13181; // 10ed:22b1
db dummy9_13182; // 10ed:22b2
db dummy9_13183; // 10ed:22b3
db dummy9_13184; // 10ed:22b4
db dummy9_13185; // 10ed:22b5
db dummy9_13186; // 10ed:22b6
db dummy9_13187; // 10ed:22b7
db dummy9_13188; // 10ed:22b8
dw word_21769; // 10ed:22b9
dw dummy9_1318b; // 10ed:22bb
dw dummy9_1318d; // 10ed:22bd
dw dummy9_1318f; // 10ed:22bf
dw dummy9_13191; // 10ed:22c1
dw dummy9_13193; // 10ed:22c3
dw dummy9_13195; // 10ed:22c5
dw dummy9_13197; // 10ed:22c7
dw dummy9_13199; // 10ed:22c9
dw dummy9_1319b; // 10ed:22cb
db dummy9_1319d; // 10ed:22cd
db dummy9_1319e; // 10ed:22ce
db dummy9_1319f; // 10ed:22cf
db dummy9_131a0; // 10ed:22d0
db dummy9_131a1; // 10ed:22d1
db dummy9_131a2; // 10ed:22d2
db dummy9_131a3; // 10ed:22d3
db dummy9_131a4; // 10ed:22d4
db dummy9_131a5; // 10ed:22d5
db dummy9_131a6; // 10ed:22d6
db dummy9_131a7; // 10ed:22d7
db dummy9_131a8; // 10ed:22d8
dw word_21789; // 10ed:22d9
dw word_2178b; // 10ed:22db
dw word_2178d; // 10ed:22dd
dw word_2178f; // 10ed:22df
db dummy9_131b1; // 10ed:22e1
db dummy9_131b2; // 10ed:22e2
db byte_21793; // 10ed:22e3
db unk_21794; // 10ed:22e4
db dummy9_131b5;
db dummy9_131b6; // 10ed:22e6
db dummy9_131b7;
db dummy9_131b8; // 10ed:22e8
db dummy9_131b9;
db dummy9_131ba; // 10ed:22ea
db dummy9_131bb; // 10ed:22eb
db dummy9_131bc; // 10ed:22ec
db dummy9_131bd;
db dummy9_131be; // 10ed:22ee
db dummy9_131bf;
db dummy9_131c0; // 10ed:22f0
db dummy9_131c1; // 10ed:22f1
db dummy9_131c2; // 10ed:22f2
db dummy9_131c3;
db unk_217a4; // 10ed:22f4
db dummy9_131c5;
db dummy9_131c6; // 10ed:22f6
db dummy9_131c7;
db dummy9_131c8; // 10ed:22f8
db dummy9_131c9; // 10ed:22f9
db dummy9_131ca; // 10ed:22fa
db dummy9_131cb;
db unk_217ac; // 10ed:22fc
char alim1_hsq[9]; // 10ed:22fd
db dummy9_131d6[32]; // 10ed:2306
db dummy9_131f6[32]; // 10ed:2326
db dummy9_13216[32]; // 10ed:2346
db dummy9_13236[32]; // 10ed:2366
db dummy9_13256[32]; // 10ed:2386
db dummy9_13276[32]; // 10ed:23a6
db dummy9_13296[32]; // 10ed:23c6
db dummy9_132b6[32]; // 10ed:23e6
dw word_218b6; // 10ed:2406
db dummy9_132d8;
db dummy9_132d9;
db dummy9_132da;
db dummy9_132db;
db dummy9_132dc; // 10ed:240c
db dummy9_132dd; // 10ed:240d
db dummy9_132de; // 10ed:240e
db dummy9_132df;
db dummy9_132e0; // 10ed:2410
db dummy9_132e1; // 10ed:2411
db dummy9_132e2; // 10ed:2412
db dummy9_132e3;
db dummy9_132e4; // 10ed:2414
db dummy9_132e5;
db dummy9_132e6; // 10ed:2416
db dummy9_132e7;
db dummy9_132e8; // 10ed:2418
db dummy9_132e9;
db dummy9_132ea; // 10ed:241a
db dummy9_132eb;
db dummy9_132ec; // 10ed:241c
db dummy9_132ed;
db dummy9_132ee; // 10ed:241e
db dummy9_132ef;
db dummy9_132f0; // 10ed:2420
db dummy9_132f1;
db dummy9_132f2; // 10ed:2422
db dummy9_132f3;
db dummy9_132f4; // 10ed:2424
db dummy9_132f5; // 10ed:2425
db unk_218d6; // 10ed:2426
db dummy9_132f7; // 10ed:2427
db dummy9_132f8; // 10ed:2428
db dummy9_132f9; // 10ed:2429
db unk_218da; // 10ed:242a
db dummy9_132fb; // 10ed:242b
db dummy9_132fc; // 10ed:242c
db dummy9_132fd; // 10ed:242d
db dummy9_132fe; // 10ed:242e
db dummy9_132ff; // 10ed:242f
db dummy9_13300; // 10ed:2430
db dummy9_13301; // 10ed:2431
db dummy9_13302; // 10ed:2432
db dummy9_13303; // 10ed:2433
db dummy9_13304; // 10ed:2434
db dummy9_13305; // 10ed:2435
db dummy9_13306; // 10ed:2436
db dummy9_13307; // 10ed:2437
db dummy9_13308; // 10ed:2438
db dummy9_13309; // 10ed:2439
db dummy9_1330a; // 10ed:243a
db dummy9_1330b; // 10ed:243b
db dummy9_1330c; // 10ed:243c
db dummy9_1330d; // 10ed:243d
dw word_218ee; // 10ed:243e
db unk_218f0; // 10ed:2440
db dummy9_13311;
db dummy9_13312; // 10ed:2442
db dummy9_13313;
db dummy9_13314; // 10ed:2444
db dummy9_13315;
db dummy9_13316; // 10ed:2446
db dummy9_13317;
db dummy9_13318; // 10ed:2448
db dummy9_13319;
db dummy9_1331a; // 10ed:244a
db dummy9_1331b;
db dummy9_1331c; // 10ed:244c
db dummy9_1331d;
db dummy9_1331e; // 10ed:244e
db dummy9_1331f;
db dummy9_13320;
db dummy9_13321;
dw dummy9_13322; // 10ed:2452
dw dummy9_13324; // 10ed:2454
dw dummy9_13326; // 10ed:2456
dw dummy9_13328; // 10ed:2458
dw dummy9_1332a; // 10ed:245a
dw dummy9_1332c; // 10ed:245c
dw dummy9_1332e; // 10ed:245e
dw word_21910; // 10ed:2460
db dummy9_13332; // 10ed:2462
db dummy9_13333;
db dummy9_13334; // 10ed:2464
dw dummy9_13335; // 10ed:2465
db dummy9_13337[32]; // 10ed:2467
db dummy9_13357[32]; // 10ed:2487
db dummy9_13377[32]; // 10ed:24a7
db dummy9_13397[32]; // 10ed:24c7
db dummy9_133b7;
db dummy9_133b8; // 10ed:24e8
db dummy9_133b9;
db dummy9_133ba; // 10ed:24ea
db dummy9_133bb; // 10ed:24eb
db dummy9_133bc; // 10ed:24ec
db dummy9_133bd; // 10ed:24ed
db dummy9_133be; // 10ed:24ee
db dummy9_133bf;
db dummy9_133c0; // 10ed:24f0
db dummy9_133c1;
db dummy9_133c2; // 10ed:24f2
db dummy9_133c3;
db dummy9_133c4; // 10ed:24f4
db dummy9_133c5;
db dummy9_133c6; // 10ed:24f6
db dummy9_133c7;
db dummy9_133c8; // 10ed:24f8
db dummy9_133c9;
db dummy9_133ca; // 10ed:24fa
db dummy9_133cb; // 10ed:24fb
db dummy9_133cc; // 10ed:24fc
db dummy9_133cd;
db dummy9_133ce; // 10ed:24fe
db dummy9_133cf;
db dummy9_133d0; // 10ed:2500
db dummy9_133d1;
db dummy9_133d2; // 10ed:2502
db dummy9_133d3; // 10ed:2503
db dummy9_133d4; // 10ed:2504
db dummy9_133d5;
db unk_219b6; // 10ed:2506
db dummy9_133d7;
db dummy9_133d8; // 10ed:2508
db dummy9_133d9;
db dummy9_133da; // 10ed:250a
db dummy9_133db;
db dummy9_133dc; // 10ed:250c
db dummy9_133dd;
db dummy9_133de; // 10ed:250e
db dummy9_133df;
db dummy9_133e0; // 10ed:2510
db dummy9_133e1;
db dummy9_133e2; // 10ed:2512
db dummy9_133e3; // 10ed:2513
dw word_219c4; // 10ed:2514
dw word_219c6; // 10ed:2516
dw off_219c8; // 10ed:2518
char athstndrder____[32]; // 10ed:251a
db dummy9_1340a[32]; // 10ed:253a
db dummy9_1342a; // 10ed:255a
db dummy9_1342b; // 10ed:255b
db dummy9_1342c; // 10ed:255c
db dummy9_1342d; // 10ed:255d
db dummy9_1342e; // 10ed:255e
db dummy9_1342f; // 10ed:255f
db dummy9_13430; // 10ed:2560
db dummy9_13431; // 10ed:2561
db dummy9_13432; // 10ed:2562
db dummy9_13433; // 10ed:2563
db dummy9_13434; // 10ed:2564
db dummy9_13435; // 10ed:2565
db dummy9_13436; // 10ed:2566
db dummy9_13437; // 10ed:2567
db dummy9_13438; // 10ed:2568
db dummy9_13439; // 10ed:2569
db dummy9_1343a; // 10ed:256a
db dummy9_1343b; // 10ed:256b
db dummy9_1343c; // 10ed:256c
db dummy9_1343d; // 10ed:256d
db dummy9_1343e; // 10ed:256e
db dummy9_1343f; // 10ed:256f
dw word_21a20; // 10ed:2570
db unk_21a22; // 10ed:2572
db dummy9_13443; // 10ed:2573
db dummy9_13444; // 10ed:2574
db dummy9_13445; // 10ed:2575
db dummy9_13446; // 10ed:2576
db dummy9_13447; // 10ed:2577
db dummy9_13448; // 10ed:2578
db dummy9_13449; // 10ed:2579
db dummy9_1344a; // 10ed:257a
db dummy9_1344b; // 10ed:257b
db dummy9_1344c; // 10ed:257c
db dummy9_1344d; // 10ed:257d
db dummy9_1344e; // 10ed:257e
db dummy9_1344f; // 10ed:257f
dw _word_21a30_mouse_pos_scaler; // 10ed:2580
dw _word_21a32_mouse_cursor_image_addr; // 10ed:2582
dw word_21a34; // 10ed:2584
dw dummy9_13456;
db dummy9_13458[32]; // 10ed:2588
db dummy9_13478[32]; // 10ed:25a8
db unk_21a78; // 10ed:25c8
db dummy9_13499[32]; // 10ed:25c9
db dummy9_134b9[32]; // 10ed:25e9
db dummy9_134d9;
db dummy9_134da; // 10ed:260a
db dummy9_134db;
db unk_21abc; // 10ed:260c
db dummy9_134dd[32]; // 10ed:260d
db dummy9_134fd[32]; // 10ed:262d
db dummy9_1351d;
db dummy9_1351e;
db dummy9_1351f;
db unk_21b00; // 10ed:2650
db dummy9_13521[32]; // 10ed:2651
db dummy9_13541[32]; // 10ed:2671
db dummy9_13561;
db dummy9_13562;
db dummy9_13563;
db unk_21b44; // 10ed:2694
db dummy9_13565[32]; // 10ed:2695
db dummy9_13585[32]; // 10ed:26b5
db dummy9_135a5;
db dummy9_135a6;
db dummy9_135a7;
db unk_21b88; // 10ed:26d8
db dummy9_135a9[32]; // 10ed:26d9
db dummy9_135c9[32]; // 10ed:26f9
db dummy9_135e9[32]; // 10ed:2719
db dummy9_13609[32]; // 10ed:2739
db dummy9_13629;
db dummy9_1362a; // 10ed:275a
db dummy9_1362b;
db dummy9_1362c; // 10ed:275c
db dummy9_1362d;
db dummy9_1362e; // 10ed:275e
db dummy9_1362f;
db dummy9_13630;
db dummy9_13631;
db dummy9_13632;
db dummy9_13633;
db dummy9_13634; // 10ed:2764
db dummy9_13635;
db dummy9_13636;
db dummy9_13637;
db dummy9_13638;
db dummy9_13639;
db dummy9_1363a;
db dummy9_1363b;
db dummy9_1363c;
db dummy9_1363d;
db dummy9_1363e; // 10ed:276e
db dummy9_1363f; // 10ed:276f
db dummy9_13640; // 10ed:2770
db dummy9_13641;
dw word_21c22; // 10ed:2772
dw word_21c24; // 10ed:2774
dw dummy9_13646; // 10ed:2776
dw dummy9_13648; // 10ed:2778
dw dummy9_1364a; // 10ed:277a
dw dummy9_1364c; // 10ed:277c
dw dummy9_1364e; // 10ed:277e
dw dummy9_13650; // 10ed:2780
dw dummy9_13652; // 10ed:2782
dw _word_21c34_resource_id; // 10ed:2784
dw word_21c36; // 10ed:2786
db byte_21c38; // 10ed:2788
db dummy9_13659; // 10ed:2789
db dummy9_1365a; // 10ed:278a
db dummy9_1365b; // 10ed:278b
db dummy9_1365c; // 10ed:278c
db dummy9_1365d;
db dummy9_1365e; // 10ed:278e
db dummy9_1365f; // 10ed:278f
db dummy9_13660; // 10ed:2790
db dummy9_13661;
db dummy9_13662; // 10ed:2792
db dummy9_13663; // 10ed:2793
db dummy9_13664; // 10ed:2794
db dummy9_13665; // 10ed:2795
dw word_21c46; // 10ed:2796
dw word_21c48; // 10ed:2798
dw dummy9_1366a; // 10ed:279a
dw dummy9_1366c; // 10ed:279c
dw dummy9_1366e; // 10ed:279e
dw dummy9_13670; // 10ed:27a0
dw dummy9_13672; // 10ed:27a2
dw dummy9_13674; // 10ed:27a4
dw dummy9_13676; // 10ed:27a6
dw dummy9_13678; // 10ed:27a8
dw dummy9_1367a; // 10ed:27aa
dw dummy9_1367c; // 10ed:27ac
dw dummy9_1367e; // 10ed:27ae
dw dummy9_13680; // 10ed:27b0
dw dummy9_13682; // 10ed:27b2
dw dummy9_13684; // 10ed:27b4
dw word_21c66; // 10ed:27b6
dw dummy9_13688; // 10ed:27b8
dw dummy9_1368a; // 10ed:27ba
dw dummy9_1368c; // 10ed:27bc
dw dummy9_1368e;
dw dummy9_13690;
dw dummy9_13692; // 10ed:27c2
dw dummy9_13694; // 10ed:27c4
db dummy9_13696[32]; // 10ed:27c6
db dummy9_136b6[32]; // 10ed:27e6
db dummy9_136d6[32]; // 10ed:2806
db dummy9_136f6[32]; // 10ed:2826
db dummy9_13716[32]; // 10ed:2846
db dummy9_13736; // 10ed:2866
db dummy9_13737;
db dummy9_13738; // 10ed:2868
db dummy9_13739;
db dummy9_1373a; // 10ed:286a
db dummy9_1373b;
db dummy9_1373c; // 10ed:286c
db dummy9_1373d;
db dummy9_1373e; // 10ed:286e
db dummy9_1373f;
db dummy9_13740; // 10ed:2870
db dummy9_13741;
db dummy9_13742; // 10ed:2872
db dummy9_13743;
db dummy9_13744; // 10ed:2874
db dummy9_13745;
db dummy9_13746; // 10ed:2876
db dummy9_13747;
db dummy9_13748; // 10ed:2878
db dummy9_13749;
db dummy9_1374a; // 10ed:287a
db dummy9_1374b;
db dummy9_1374c; // 10ed:287c
db dummy9_1374d;
db dummy9_1374e; // 10ed:287e
db dummy9_1374f;
db dummy9_13750; // 10ed:2880
db dummy9_13751;
dw _word_21d32_audio_time_to_play_28224_samples_hi; // 10ed:2882
dw _word_21d34_audio_time_to_play_28224_samples_lo; // 10ed:2884
dw word_21d36; // 10ed:2886
dw word_21d38; // 10ed:2888
db dummy9_1375a; // 10ed:288a
db dummy9_1375b;
db dummy9_1375c; // 10ed:288c
db dummy9_1375d;
db unk_21d3e; // 10ed:288e
db dummy9_1375f;
db dummy9_13760; // 10ed:2890
db dummy9_13761;
db dummy9_13762; // 10ed:2892
db dummy9_13763;
db dummy9_13764; // 10ed:2894
db dummy9_13765; // 10ed:2895
db byte_21d46; // 10ed:2896
db dummy9_13767;
db dummy9_13768; // 10ed:2898
db dummy9_13769;
db dummy9_1376a; // 10ed:289a
db dummy9_1376b;
db dummy9_1376c; // 10ed:289c
db dummy9_1376d; // 10ed:289d
db byte_21d4e; // 10ed:289e
db dummy9_1376f;
db dummy9_13770; // 10ed:28a0
db dummy9_13771;
db dummy9_13772; // 10ed:28a2
db dummy9_13773;
db dummy9_13774; // 10ed:28a4
db dummy9_13775; // 10ed:28a5
db dummy9_13776; // 10ed:28a6
db dummy9_13777;
db dummy9_13778; // 10ed:28a8
db dummy9_13779;
db dummy9_1377a; // 10ed:28aa
db dummy9_1377b;
db dummy9_1377c; // 10ed:28ac
db dummy9_1377d; // 10ed:28ad
db byte_21d5e; // 10ed:28ae
db dummy9_1377f;
db dummy9_13780; // 10ed:28b0
db dummy9_13781;
db dummy9_13782; // 10ed:28b2
db dummy9_13783;
db dummy9_13784; // 10ed:28b4
db dummy9_13785; // 10ed:28b5
db byte_21d66; // 10ed:28b6
db dummy9_13787;
db dummy9_13788; // 10ed:28b8
db dummy9_13789;
db dummy9_1378a; // 10ed:28ba
db dummy9_1378b;
db dummy9_1378c; // 10ed:28bc
db dummy9_1378d; // 10ed:28bd
db byte_21d6e; // 10ed:28be
db dummy9_1378f[32]; // 10ed:28bf
db dummy9_137af; // 10ed:28df
db dummy9_137b0; // 10ed:28e0
db dummy9_137b1; // 10ed:28e1
db dummy9_137b2; // 10ed:28e2
db dummy9_137b3; // 10ed:28e3
db dummy9_137b4; // 10ed:28e4
db dummy9_137b5; // 10ed:28e5
db dummy9_137b6; // 10ed:28e6
db byte_21d97; // 10ed:28e7
db byte_21d98; // 10ed:28e8
db dummy9_137b9[32]; // 10ed:28e9
db dummy9_137d9; // 10ed:2909
db dummy9_137da;
db dummy9_137db; // 10ed:290b
db dummy9_137dc;
db dummy9_137dd; // 10ed:290d
db dummy9_137de;
db dummy9_137df; // 10ed:290f
db dummy9_137e0;
db dummy9_137e1; // 10ed:2911
db dummy9_137e2; // 10ed:2912
dw _word_21dc3_interrupt_table; // 10ed:2913
dw dummy9_137e5; // 10ed:2915
dw dummy9_137e7; // 10ed:2917
dw dummy9_137e9; // 10ed:2919
dw dummy9_137eb; // 10ed:291b
dw dummy9_137ed; // 10ed:291d
dw dummy9_137ef; // 10ed:291f
dw dummy9_137f1; // 10ed:2921
dw dummy9_137f3; // 10ed:2923
dw dummy9_137f5; // 10ed:2925
dw dummy9_137f7; // 10ed:2927
dw dummy9_137f9; // 10ed:2929
dw dummy9_137fb; // 10ed:292b
dw dummy9_137fd; // 10ed:292d
dw dummy9_137ff; // 10ed:292f
dw dummy9_13801; // 10ed:2931
dw dummy9_13803; // 10ed:2933
dw dummy9_13805; // 10ed:2935
dw dummy9_13807; // 10ed:2937
dw dummy9_13809; // 10ed:2939
dw dummy9_1380b; // 10ed:293b
dw dummy9_1380d; // 10ed:293d
dw dummy9_1380f; // 10ed:293f
db byte_21df1; // 10ed:2941
db _byte_21df2_cmd_args; // 10ed:2942
db _byte_21df3_cmd_args_memory; // 10ed:2943
db _byte_21df4_cmd_args_audio; // 10ed:2944
db unk_21df5; // 10ed:2945
db dummy9_13816;
db dummy9_13817; // 10ed:2947
db dummy9_13818;
db dummy9_13819; // 10ed:2949
db dummy9_1381a;
db dummy9_1381b; // 10ed:294b
db dummy9_1381c;
db dummy9_1381d; // 10ed:294d
db dummy9_1381e; // 10ed:294e
dw res_tablat_bin; // 10ed:294f
char atablat_bin[11]; // 10ed:2951
dw res_dnchar_bin; // 10ed:295c
char adnchar_bin[11]; // 10ed:295e
dw res_dnchar2_bin; // 10ed:2969
char adnchar2_bin[12]; // 10ed:296b
dw res_dialogue_hsq; // 10ed:2977
char adialogue_hsq[13]; // 10ed:2979
dw res_ver_bin; // 10ed:2986
char aver_bin[8]; // 10ed:2988
dw res_siet_sal; // 10ed:2990
char asiet_sal[9]; // 10ed:2992
dw res_palace_sal; // 10ed:299b
char apalace_sal[11]; // 10ed:299d
dw res_vilg_sal; // 10ed:29a8
char avilg_sal[9]; // 10ed:29aa
dw res_hark_sal; // 10ed:29b3
char ahark_sal[9]; // 10ed:29b5
dw res_globdata_hsq; // 10ed:29be
char aglobdata_hsq[13]; // 10ed:29c0
dw res_phrase11_hsq; // 10ed:29cd
char aphrase11_hsq[13]; // 10ed:29cf
dw res_phrase21_hsq; // 10ed:29dc
char aphrase21_hsq[13]; // 10ed:29de
dw res_phrase31_hsq; // 10ed:29eb
char aphrase31_hsq[13]; // 10ed:29ed
dw res_phrase41_hsq; // 10ed:29fa
char aphrase41_hsq[13]; // 10ed:29fc
dw res_phrase51_hsq; // 10ed:2a09
char aphrase51_hsq[13]; // 10ed:2a0b
dw res_phrase61_hsq; // 10ed:2a18
char aphrase61_hsq[13]; // 10ed:2a1a
dw res_phrase71_hsq; // 10ed:2a27
char aphrase71_hsq[13]; // 10ed:2a29
dw res_phrase12_hsq; // 10ed:2a36
char aphrase12_hsq[13]; // 10ed:2a38
dw res_phrase22_hsq; // 10ed:2a45
char aphrase22_hsq[13]; // 10ed:2a47
dw res_phrase32_hsq; // 10ed:2a54
char aphrase32_hsq[13]; // 10ed:2a56
dw res_phrase42_hsq; // 10ed:2a63
char aphrase42_hsq[13]; // 10ed:2a65
dw res_phrase52_hsq; // 10ed:2a72
char aphrase52_hsq[13]; // 10ed:2a74
dw res_phrase62_hsq; // 10ed:2a81
char aphrase62_hsq[13]; // 10ed:2a83
dw res_phrase72_hsq; // 10ed:2a90
char aphrase72_hsq[13]; // 10ed:2a92
dw res_command1_hsq; // 10ed:2a9f
char acommand1_hsq[13]; // 10ed:2aa1
dw res_command2_hsq; // 10ed:2aae
char acommand2_hsq[13]; // 10ed:2ab0
dw res_command3_hsq; // 10ed:2abd
char acommand3_hsq[13]; // 10ed:2abf
dw res_command4_hsq; // 10ed:2acc
char acommand4_hsq[13]; // 10ed:2ace
dw res_command5_hsq; // 10ed:2adb
char acommand5_hsq[13]; // 10ed:2add
dw res_command6_hsq; // 10ed:2aea
char acommand6_hsq[13]; // 10ed:2aec
dw res_command7_hsq; // 10ed:2af9
char acommand7_hsq[13]; // 10ed:2afb
dw res_dnvga_hsq; // 10ed:2b08
char adnvga_hsq[10]; // 10ed:2b0a
dw res_dn386_hsq; // 10ed:2b14
char adn386_hsq[10]; // 10ed:2b16
dw res_dnpcs_hsq; // 10ed:2b20
char adnpcs_hsq[10]; // 10ed:2b22
dw res_dnadl_hsq; // 10ed:2b2c
char adnadl_hsq[10]; // 10ed:2b2e
dw res_dnadp_hsq; // 10ed:2b38
char adnadp_hsq[10]; // 10ed:2b3a
dw res_dnadg_hsq; // 10ed:2b44
char adnadg_hsq[10]; // 10ed:2b46
dw res_dnmid_hsq; // 10ed:2b50
char adnmid_hsq[10]; // 10ed:2b52
dw res_dnpcs2_hsq; // 10ed:2b5c
char adnpcs2_hsq[11]; // 10ed:2b5e
dw res_dnsdb_hsq; // 10ed:2b69
char adnsdb_hsq[10]; // 10ed:2b6b
dw res_dnsdp_hsq; // 10ed:2b75
char adnsbp_hsq[10]; // 10ed:2b77
dw res_condit_hsq; // 10ed:2b81
char acondit_hsq[11]; // 10ed:2b83
dw res_map_hsq; // 10ed:2b8e
char amap_hsq[8]; // 10ed:2b90
dw res_icones_hsq; // 10ed:2b98
char aicones_hsq[11]; // 10ed:2b9a
dw res_fresk_hsq; // 10ed:2ba5
char afresk_hsq[10]; // 10ed:2ba7
dw res_leto_hsq; // 10ed:2bb1
char aleto_hsq[9]; // 10ed:2bb3
dw res_jess_hsq; // 10ed:2bbc
char ajess_hsq[9]; // 10ed:2bbe
dw res_hawa_hsq; // 10ed:2bc7
char ahawa_hsq[9]; // 10ed:2bc9
dw res_idah_hsq; // 10ed:2bd2
char aidah_hsq[9]; // 10ed:2bd4
dw res_gurn_hsq; // 10ed:2bdd
char agurn_hsq[9]; // 10ed:2bdf
dw res_stil_hsq; // 10ed:2be8
char astil_hsq[9]; // 10ed:2bea
dw res_kyne_hsq; // 10ed:2bf3
char akyne_hsq[9]; // 10ed:2bf5
dw res_chan_hsq; // 10ed:2bfe
char achan_hsq[9]; // 10ed:2c00
dw res_hara_hsq; // 10ed:2c09
char ahara_hsq[9]; // 10ed:2c0b
dw res_baro_hsq; // 10ed:2c14
char abaro_hsq[9]; // 10ed:2c16
dw res_feyd_hsq; // 10ed:2c1f
char afeyd_hsq[9]; // 10ed:2c21
db res_empr_hsq; // 10ed:2c2a
db dummy9_13afb; // 10ed:2c2b
char aempr_hsq[9]; // 10ed:2c2c
db res_hark_hsq_0; // 10ed:2c35
db dummy9_13b06; // 10ed:2c36
char ahark_hsq[9]; // 10ed:2c37
db res_smug_hsq_0; // 10ed:2c40
db dummy9_13b11; // 10ed:2c41
char asmug_hsq[9]; // 10ed:2c42
db res_frm1_hsq; // 10ed:2c4b
db dummy9_13b1c; // 10ed:2c4c
char afrm1_hsq[9]; // 10ed:2c4d
db res_frm2_hsq; // 10ed:2c56
db dummy9_13b27; // 10ed:2c57
char afrm2_hsq[9]; // 10ed:2c58
db res_frm3_hsq; // 10ed:2c61
db dummy9_13b32; // 10ed:2c62
char afrm3_hsq[9]; // 10ed:2c63
db res_generic_hsq; // 10ed:2c6c
db dummy9_13b3d; // 10ed:2c6d
char ageneric_hsq[12]; // 10ed:2c6e
db res_progue_hsq; // 10ed:2c7a
db dummy9_13b4b; // 10ed:2c7b
char aprouge_hsq[11]; // 10ed:2c7c
db res_comm_hsq; // 10ed:2c87
db dummy9_13b58; // 10ed:2c88
char acomm_hsq[9]; // 10ed:2c89
db res_equi_hsq; // 10ed:2c92
db dummy9_13b63; // 10ed:2c93
char aequi_hsq[9]; // 10ed:2c94
db res_balcon_hsq; // 10ed:2c9d
db dummy9_13b6e; // 10ed:2c9e
char abalcon_hsq[11]; // 10ed:2c9f
db res_corr_hsq; // 10ed:2caa
db dummy9_13b7b; // 10ed:2cab
char acorr_hsq[9]; // 10ed:2cac
db res_por_hsq; // 10ed:2cb5
db dummy9_13b86; // 10ed:2cb6
char apor_hsq[8]; // 10ed:2cb7
db res_siet1_hsq; // 10ed:2cbf
db dummy9_13b90; // 10ed:2cc0
char asiet1_hsq[10]; // 10ed:2cc1
db res_xplain9_hsq; // 10ed:2ccb
db dummy9_13b9c; // 10ed:2ccc
char axplain9_hsq[12]; // 10ed:2ccd
db res_libre; // 10ed:2cd9
db dummy9_13baa; // 10ed:2cda
char alibre[6]; // 10ed:2cdb
db res_bunk_hsq; // 10ed:2ce1
db dummy9_13bb2; // 10ed:2ce2
char abunk_hsq[9]; // 10ed:2ce3
db res_final_hsq; // 10ed:2cec
db dummy9_13bbd; // 10ed:2ced
char afinal_hsq[10]; // 10ed:2cee
db res_serre_hsq; // 10ed:2cf8
db dummy9_13bc9; // 10ed:2cf9
char aserre_hsq[10]; // 10ed:2cfa
db res_bota_hsq; // 10ed:2d04
db dummy9_13bd5; // 10ed:2d05
char abota_hsq[9]; // 10ed:2d06
char res_palplan_hsq[2]; // 10ed:2d0f
char apalplan_hsq[12]; // 10ed:2d11
db res_sun_hsq; // 10ed:2d1d
db dummy9_13bee; // 10ed:2d1e
char asun_hsq[8]; // 10ed:2d1f
db res_vis_hsq; // 10ed:2d27
db dummy9_13bf8; // 10ed:2d28
char avis_hsq[8]; // 10ed:2d29
db res_ornypan_hsq; // 10ed:2d31
db dummy9_13c02; // 10ed:2d32
char aornypan_hsq[12]; // 10ed:2d33
db res_onmap_hsq; // 10ed:2d3f
db dummy9_13c10; // 10ed:2d40
char aonmap_hsq[10]; // 10ed:2d41
db res_pers_hsq; // 10ed:2d4b
db dummy9_13c1c; // 10ed:2d4c
char apers_hsq[9]; // 10ed:2d4d
db res_chankiss_hsq; // 10ed:2d56
db dummy9_13c27; // 10ed:2d57
char achankiss_hsq[13]; // 10ed:2d58
db res_sky_hsq; // 10ed:2d65
db dummy9_13c36; // 10ed:2d66
char asky_hsq[8]; // 10ed:2d67
db res_skydn_hsq; // 10ed:2d6f
db dummy9_13c40; // 10ed:2d70
char askydn_hsq[10]; // 10ed:2d71
db res_ornytk_hsq; // 10ed:2d7b
db dummy9_13c4c; // 10ed:2d7c
char aornytk_hsq[11]; // 10ed:2d7d
db res_attack_hsq; // 10ed:2d88
db dummy9_13c59; // 10ed:2d89
char aattack_hsq[11]; // 10ed:2d8a
db res_stars_hsq; // 10ed:2d95
db dummy9_13c66; // 10ed:2d96
char astars_hsq[10]; // 10ed:2d97
db res_intds_hsq; // 10ed:2da1
db dummy9_13c72; // 10ed:2da2
char aintds_hsq[10]; // 10ed:2da3
db res_sunrs_hsq; // 10ed:2dad
db dummy9_13c7e; // 10ed:2dae
char asunrs_hsq[10]; // 10ed:2daf
db res_paul_hsq; // 10ed:2db9
db dummy9_13c8a; // 10ed:2dba
char apaul_hsq[9]; // 10ed:2dbb
db res_back_hsq; // 10ed:2dc4
db dummy9_13c95; // 10ed:2dc5
char aback_hsq[9]; // 10ed:2dc6
db res_mois_hsq; // 10ed:2dcf
db dummy9_13ca0; // 10ed:2dd0
char amois_hsq[9]; // 10ed:2dd1
db res_book_hsq; // 10ed:2dda
db dummy9_13cab; // 10ed:2ddb
char abook_hsq[9]; // 10ed:2ddc
db res_orny_hsq; // 10ed:2de5
db dummy9_13cb6;
char aorny_hsq[9]; // 10ed:2de7
db res_ornycab_hsq; // 10ed:2df0
db dummy9_13cc1; // 10ed:2df1
char aornycab_hsq[12]; // 10ed:2df2
db res_libre_hsq; // 10ed:2dfe
db dummy9_13ccf; // 10ed:2dff
char alibre_hsq[10]; // 10ed:2e00
db res_libre_hsq_0; // 10ed:2e0a
db dummy9_13cdb; // 10ed:2e0b
char alibre_hsq_0[10]; // 10ed:2e0c
db res_libre_hsq_1; // 10ed:2e16
db dummy9_13ce7; // 10ed:2e17
char alibre_hsq_1[10]; // 10ed:2e18
db res_libre_hsq_2; // 10ed:2e22
db dummy9_13cf3; // 10ed:2e23
char alibre_0[6]; // 10ed:2e24
db res_ver_hsq; // 10ed:2e2a
db dummy9_13cfb; // 10ed:2e2b
char aver_hsq[8]; // 10ed:2e2c
db res_map2_hsq; // 10ed:2e34
db dummy9_13d05; // 10ed:2e35
char amap2_hsq[9]; // 10ed:2e36
db res_mirror_hsq; // 10ed:2e3f
db dummy9_13d10; // 10ed:2e40
char amirror_hsq[11]; // 10ed:2e41
db res_ds0_hsq; // 10ed:2e4c
db dummy9_13d1d; // 10ed:2e4d
char ads0_hsq[8]; // 10ed:2e4e
db res_ds1_hsq; // 10ed:2e56
db dummy9_13d27; // 10ed:2e57
char ads1_hsq[8]; // 10ed:2e58
db res_ds2_hsq; // 10ed:2e60
db dummy9_13d31; // 10ed:2e61
char ads2_hsq[8]; // 10ed:2e62
db res_ds3_hsq; // 10ed:2e6a
db dummy9_13d3b; // 10ed:2e6b
char ads3_hsq[8]; // 10ed:2e6c
db res_ds4_hsq; // 10ed:2e74
db dummy9_13d45; // 10ed:2e75
char ads4_hsq[8]; // 10ed:2e76
db res_libre_; // 10ed:2e7e
db dummy9_13d4f; // 10ed:2e7f
char alibre_1[6]; // 10ed:2e80
db res_dn20_hsq; // 10ed:2e86
db dummy9_13d57; // 10ed:2e87
char adn20_hsq[9]; // 10ed:2e88
db res_dn21_hsq; // 10ed:2e91
db dummy9_13d62; // 10ed:2e92
char adn21_hsq[9]; // 10ed:2e93
db res_dn22_hsq; // 10ed:2e9c
db dummy9_13d6d; // 10ed:2e9d
char adn22_hsq[9]; // 10ed:2e9e
db res_dn23_hsq; // 10ed:2ea7
db dummy9_13d78; // 10ed:2ea8
char adn23_hsq[9]; // 10ed:2ea9
db res_dn24_hsq; // 10ed:2eb2
db dummy9_13d83; // 10ed:2eb3
char adn24_hsq[9]; // 10ed:2eb4
db res_dn25_hsq; // 10ed:2ebd
db dummy9_13d8e; // 10ed:2ebe
char adn25_hsq[9]; // 10ed:2ebf
db res_dn26_hsq; // 10ed:2ec8
db dummy9_13d99; // 10ed:2ec9
char adn26_hsq[9]; // 10ed:2eca
db res_dn27_hsq; // 10ed:2ed3
db dummy9_13da4; // 10ed:2ed4
char adn27_hsq[9]; // 10ed:2ed5
db res_dn28_hsq; // 10ed:2ede
db dummy9_13daf; // 10ed:2edf
char adn28_hsq[9]; // 10ed:2ee0
db res_dn29_hsq; // 10ed:2ee9
db dummy9_13dba; // 10ed:2eea
char adn29_hsq[9]; // 10ed:2eeb
db res_dn30_hsq; // 10ed:2ef4
db dummy9_13dc5; // 10ed:2ef5
char adn30_hsq[9]; // 10ed:2ef6
db res_dn31_hsq; // 10ed:2eff
db dummy9_13dd0; // 10ed:2f00
char adn31_hsq[9]; // 10ed:2f01
db res_dn32_hsq; // 10ed:2f0a
db dummy9_13ddb; // 10ed:2f0b
char adn32_hsq[9]; // 10ed:2f0c
db res_dn33_hsq; // 10ed:2f15
db dummy9_13de6; // 10ed:2f16
char adn33_hsq[9]; // 10ed:2f17
db res_dn34_hsq; // 10ed:2f20
db dummy9_13df1; // 10ed:2f21
char adn34_hsq[9]; // 10ed:2f22
db res_dn35_hsq; // 10ed:2f2b
db dummy9_13dfc; // 10ed:2f2c
char adn35_hsq[9]; // 10ed:2f2d
db res_dn36_hsq; // 10ed:2f36
db dummy9_13e07; // 10ed:2f37
char adn36_hsq[9]; // 10ed:2f38
db res_dn37_hsq; // 10ed:2f41
db dummy9_13e12; // 10ed:2f42
char adn37_hsq[9]; // 10ed:2f43
db res_dn38_hsq; // 10ed:2f4c
db dummy9_13e1d; // 10ed:2f4d
char adn38_hsq[9]; // 10ed:2f4e
db res_mixr_hsq; // 10ed:2f57
db dummy9_13e28; // 10ed:2f58
char amixr_hsq[9]; // 10ed:2f59
db res_int02_hsq; // 10ed:2f62
db dummy9_13e33; // 10ed:2f63
char aint02_hsq[10]; // 10ed:2f64
db res_int04_hsq; // 10ed:2f6e
db dummy9_13e3f; // 10ed:2f6f
char aint04_hsq[10]; // 10ed:2f70
db res_int05_hsq; // 10ed:2f7a
db dummy9_13e4b; // 10ed:2f7b
char aint05_hsq[10]; // 10ed:2f7c
db res_int06_hsq; // 10ed:2f86
db dummy9_13e57; // 10ed:2f87
char aint06_hsq[10]; // 10ed:2f88
db res_int07_hsq; // 10ed:2f92
db dummy9_13e63; // 10ed:2f93
char aint07_hsq[10]; // 10ed:2f94
db res_int08_hsq; // 10ed:2f9e
db dummy9_13e6f; // 10ed:2f9f
char aint08_hsq[10]; // 10ed:2fa0
db res_int09_hsq; // 10ed:2faa
db dummy9_13e7b; // 10ed:2fab
char aint09_hsq[10]; // 10ed:2fac
db res_int10_hsq; // 10ed:2fb6
db dummy9_13e87; // 10ed:2fb7
char aint10_hsq[10]; // 10ed:2fb8
db res_int11_hsq; // 10ed:2fc2
db dummy9_13e93; // 10ed:2fc3
char aint11_hsq[10]; // 10ed:2fc4
db res_int13_hsq; // 10ed:2fce
db dummy9_13e9f; // 10ed:2fcf
char aint13_hsq[10]; // 10ed:2fd0
db res_int14_hsq; // 10ed:2fda
db dummy9_13eab; // 10ed:2fdb
char aint14_hsq[10]; // 10ed:2fdc
db res_int15_hsq; // 10ed:2fe6
db dummy9_13eb7; // 10ed:2fe7
char aint15_hsq[10]; // 10ed:2fe8
db res_palais_hsq; // 10ed:2ff2
db dummy9_13ec3; // 10ed:2ff3
char apalais_hsq[11]; // 10ed:2ff4
db res_mnt1_lop; // 10ed:2fff
db dummy9_13ed0; // 10ed:3000
char amnt1_lop[9]; // 10ed:3001
db res_mnt2_lop; // 10ed:300a
db dummy9_13edb; // 10ed:300b
char amnt2_lop[9]; // 10ed:300c
db res_mnt3_lop; // 10ed:3015
db dummy9_13ee6; // 10ed:3016
char amnt3_lop[9]; // 10ed:3017
db res_mnt4_lop; // 10ed:3020
db dummy9_13ef1; // 10ed:3021
char amnt4_lop[9]; // 10ed:3022
db res_siet_lop; // 10ed:302b
db dummy9_13efc; // 10ed:302c
char asiet_lop[9]; // 10ed:302d
db res_palace_lop; // 10ed:3036
db dummy9_13f07; // 10ed:3037
char apalace_lop[11]; // 10ed:3038
db res_irul1_hsq; // 10ed:3043
db dummy9_13f14; // 10ed:3044
char airul1_hsq[10]; // 10ed:3045
db res_irul2_hsq; // 10ed:304f
db dummy9_13f20; // 10ed:3050
char airul2_hsq[10]; // 10ed:3051
db res_irul3_hsq; // 10ed:305b
db dummy9_13f2c; // 10ed:305c
char airul3_hsq[10]; // 10ed:305d
db res_irul4_hsq; // 10ed:3067
db dummy9_13f38; // 10ed:3068
char airul4_hsq[10]; // 10ed:3069
db res_irul5_hsq; // 10ed:3073
db dummy9_13f44; // 10ed:3074
char airul5_hsq[10]; // 10ed:3075
db res_irul6_hsq; // 10ed:307f
db dummy9_13f50; // 10ed:3080
char airul6_hsq[10]; // 10ed:3081
db res_irul7_hsq; // 10ed:308b
db dummy9_13f5c; // 10ed:308c
char airul7_hsq[10]; // 10ed:308d
db res_irul8_hsq; // 10ed:3097
db dummy9_13f68; // 10ed:3098
char airul8_hsq[10]; // 10ed:3099
db res_irul9_hsq; // 10ed:30a3
db dummy9_13f74; // 10ed:30a4
char airul9_hsq[10]; // 10ed:30a5
db res_dp1_hsq; // 10ed:30af
db dummy9_13f80; // 10ed:30b0
char adp1_hsq[8]; // 10ed:30b1
db res_dp0_hsq; // 10ed:30b9
db dummy9_13f8a; // 10ed:30ba
char adp0_hsq[8]; // 10ed:30bb
db res_dp2_hsq; // 10ed:30c3
db dummy9_13f94; // 10ed:30c4
char adp2_hsq[8]; // 10ed:30c5
db res_dp3_hsq; // 10ed:30cd
db dummy9_13f9e; // 10ed:30ce
char adp3_hsq[8]; // 10ed:30cf
db res_df1_hsq; // 10ed:30d7
db dummy9_13fa8; // 10ed:30d8
char adf1_hsq[8]; // 10ed:30d9
db res_df2_hsq; // 10ed:30e1
db dummy9_13fb2; // 10ed:30e2
char adf2_hsq[8]; // 10ed:30e3
db res_df3_hsq; // 10ed:30eb
db dummy9_13fbc; // 10ed:30ec
char adf3_hsq[8]; // 10ed:30ed
db res_df4_hsq; // 10ed:30f5
db dummy9_13fc6; // 10ed:30f6
char adf4_hsq[8]; // 10ed:30f7
db res_vil1_hsq; // 10ed:30ff
db dummy9_13fd0; // 10ed:3100
char avil1_hsq[9]; // 10ed:3101
db res_vil2_hsq; // 10ed:310a
db dummy9_13fdb; // 10ed:310b
char avil2_hsq[9]; // 10ed:310c
db res_vil3_hsq; // 10ed:3115
db dummy9_13fe6; // 10ed:3116
char avil3_hsq[9]; // 10ed:3117
db res_vil4_hsq; // 10ed:3120
db dummy9_13ff1; // 10ed:3121
char avil4_hsq[9]; // 10ed:3122
db res_vil5_hsq; // 10ed:312b
db dummy9_13ffc; // 10ed:312c
char avil5_hsq[9]; // 10ed:312d
db res_vil6_hsq; // 10ed:3136
db dummy9_14007; // 10ed:3137
char avil6_hsq[9]; // 10ed:3138
db res_dv1_hsq; // 10ed:3141
db dummy9_14012; // 10ed:3142
char adv1_hsq[8]; // 10ed:3143
db res_dv2_hsq; // 10ed:314b
db dummy9_1401c; // 10ed:314c
char adv2_hsq[8]; // 10ed:314d
db res_dv3_hsq; // 10ed:3155
db dummy9_14026; // 10ed:3156
char adv3_hsq[8]; // 10ed:3157
db res_dv4_hsq; // 10ed:315f
db dummy9_14030; // 10ed:3160
char adv4_hsq[8]; // 10ed:3161
db res_dh0_hsq; // 10ed:3169
db dummy9_1403a; // 10ed:316a
char adh0_hsq[8]; // 10ed:316b
db res_dh1_hsq; // 10ed:3173
db dummy9_14044; // 10ed:3174
char adh1_hsq[8]; // 10ed:3175
db res_dh2_hsq; // 10ed:317d
db dummy9_1404e; // 10ed:317e
char adh2_hsq[8]; // 10ed:317f
db res_dh3_hsq; // 10ed:3187
db dummy9_14058; // 10ed:3188
char adh3_hsq[8]; // 10ed:3189
db res_vg01_hsq; // 10ed:3191
db dummy9_14062; // 10ed:3192
char avg01_hsq[9]; // 10ed:3193
db res_vg02_hsq; // 10ed:319c
db dummy9_1406d; // 10ed:319d
char avg02_hsq[9]; // 10ed:319e
db res_vg03_hsq; // 10ed:31a7
db dummy9_14078; // 10ed:31a8
char avg03_hsq[9]; // 10ed:31a9
db res_vg04_hsq; // 10ed:31b2
db dummy9_14083; // 10ed:31b3
char avg04_hsq[9]; // 10ed:31b4
db res_vg05_hsq; // 10ed:31bd
db dummy9_1408e; // 10ed:31be
char avg05_hsq[9]; // 10ed:31bf
db res_vg06_hsq; // 10ed:31c8
db dummy9_14099; // 10ed:31c9
char avg06_hsq[9]; // 10ed:31ca
db res_vg07_hsq; // 10ed:31d3
db dummy9_140a4; // 10ed:31d4
char avg07_hsq[9]; // 10ed:31d5
db res_vg08_hsq; // 10ed:31de
db dummy9_140af; // 10ed:31df
char avg08_hsq[9]; // 10ed:31e0
db res_vg09_hsq; // 10ed:31e9
db dummy9_140ba; // 10ed:31ea
char avg09_hsq[9]; // 10ed:31eb
db res_vg10_hsq; // 10ed:31f4
db dummy9_140c5; // 10ed:31f5
char avg10_hsq[9]; // 10ed:31f6
dw _off_226af_resource_names; // 10ed:31ff
dw dummy9_140d1; // 10ed:3201
dw dummy9_140d3; // 10ed:3203
dw dummy9_140d5; // 10ed:3205
dw dummy9_140d7; // 10ed:3207
dw dummy9_140d9; // 10ed:3209
dw dummy9_140db; // 10ed:320b
dw dummy9_140dd; // 10ed:320d
dw dummy9_140df; // 10ed:320f
dw dummy9_140e1; // 10ed:3211
dw dummy9_140e3; // 10ed:3213
dw dummy9_140e5; // 10ed:3215
dw dummy9_140e7; // 10ed:3217
dw dummy9_140e9; // 10ed:3219
dw dummy9_140eb; // 10ed:321b
dw dummy9_140ed; // 10ed:321d
dw dummy9_140ef; // 10ed:321f
dw dummy9_140f1; // 10ed:3221
dw dummy9_140f3; // 10ed:3223
dw dummy9_140f5; // 10ed:3225
dw dummy9_140f7; // 10ed:3227
dw dummy9_140f9; // 10ed:3229
dw dummy9_140fb; // 10ed:322b
dw dummy9_140fd; // 10ed:322d
dw dummy9_140ff; // 10ed:322f
dw dummy9_14101; // 10ed:3231
dw dummy9_14103; // 10ed:3233
dw dummy9_14105; // 10ed:3235
dw dummy9_14107; // 10ed:3237
dw dummy9_14109; // 10ed:3239
dw dummy9_1410b; // 10ed:323b
dw dummy9_1410d; // 10ed:323d
dw dummy9_1410f; // 10ed:323f
dw dummy9_14111; // 10ed:3241
dw dummy9_14113; // 10ed:3243
dw dummy9_14115; // 10ed:3245
dw dummy9_14117; // 10ed:3247
dw dummy9_14119; // 10ed:3249
dw dummy9_1411b; // 10ed:324b
dw dummy9_1411d; // 10ed:324d
dw dummy9_1411f; // 10ed:324f
dw dummy9_14121; // 10ed:3251
dw dummy9_14123; // 10ed:3253
dw dummy9_14125; // 10ed:3255
dw dummy9_14127; // 10ed:3257
dw dummy9_14129; // 10ed:3259
dw dummy9_1412b; // 10ed:325b
dw dummy9_1412d; // 10ed:325d
dw dummy9_1412f; // 10ed:325f
dw dummy9_14131; // 10ed:3261
dw dummy9_14133; // 10ed:3263
dw dummy9_14135; // 10ed:3265
dw dummy9_14137; // 10ed:3267
dw dummy9_14139; // 10ed:3269
dw dummy9_1413b; // 10ed:326b
dw dummy9_1413d; // 10ed:326d
dw dummy9_1413f; // 10ed:326f
dw dummy9_14141; // 10ed:3271
dw dummy9_14143; // 10ed:3273
dw dummy9_14145; // 10ed:3275
dw dummy9_14147; // 10ed:3277
dw dummy9_14149; // 10ed:3279
dw dummy9_1414b; // 10ed:327b
dw dummy9_1414d; // 10ed:327d
dw dummy9_1414f; // 10ed:327f
dw dummy9_14151; // 10ed:3281
dw dummy9_14153; // 10ed:3283
dw dummy9_14155; // 10ed:3285
dw dummy9_14157; // 10ed:3287
dw dummy9_14159; // 10ed:3289
dw dummy9_1415b; // 10ed:328b
dw dummy9_1415d; // 10ed:328d
dw dummy9_1415f; // 10ed:328f
dw dummy9_14161; // 10ed:3291
dw dummy9_14163; // 10ed:3293
dw dummy9_14165; // 10ed:3295
dw dummy9_14167; // 10ed:3297
dw dummy9_14169; // 10ed:3299
dw dummy9_1416b; // 10ed:329b
dw dummy9_1416d; // 10ed:329d
dw dummy9_1416f; // 10ed:329f
dw dummy9_14171; // 10ed:32a1
dw dummy9_14173; // 10ed:32a3
dw dummy9_14175; // 10ed:32a5
dw dummy9_14177; // 10ed:32a7
dw dummy9_14179; // 10ed:32a9
dw dummy9_1417b; // 10ed:32ab
dw dummy9_1417d; // 10ed:32ad
dw dummy9_1417f; // 10ed:32af
dw dummy9_14181; // 10ed:32b1
dw dummy9_14183; // 10ed:32b3
dw dummy9_14185; // 10ed:32b5
dw dummy9_14187; // 10ed:32b7
dw dummy9_14189; // 10ed:32b9
dw dummy9_1418b; // 10ed:32bb
dw dummy9_1418d; // 10ed:32bd
dw dummy9_1418f; // 10ed:32bf
dw dummy9_14191; // 10ed:32c1
dw dummy9_14193; // 10ed:32c3
dw dummy9_14195; // 10ed:32c5
dw dummy9_14197; // 10ed:32c7
dw dummy9_14199; // 10ed:32c9
dw dummy9_1419b; // 10ed:32cb
dw dummy9_1419d; // 10ed:32cd
dw dummy9_1419f; // 10ed:32cf
dw dummy9_141a1; // 10ed:32d1
dw dummy9_141a3; // 10ed:32d3
dw dummy9_141a5; // 10ed:32d5
dw dummy9_141a7; // 10ed:32d7
dw dummy9_141a9; // 10ed:32d9
dw dummy9_141ab; // 10ed:32db
dw dummy9_141ad; // 10ed:32dd
dw dummy9_141af; // 10ed:32df
dw dummy9_141b1; // 10ed:32e1
dw dummy9_141b3; // 10ed:32e3
dw dummy9_141b5; // 10ed:32e5
dw dummy9_141b7; // 10ed:32e7
dw dummy9_141b9; // 10ed:32e9
dw dummy9_141bb; // 10ed:32eb
dw dummy9_141bd; // 10ed:32ed
dw dummy9_141bf; // 10ed:32ef
dw dummy9_141c1; // 10ed:32f1
dw dummy9_141c3; // 10ed:32f3
dw dummy9_141c5; // 10ed:32f5
dw dummy9_141c7; // 10ed:32f7
dw dummy9_141c9; // 10ed:32f9
dw dummy9_141cb; // 10ed:32fb
dw dummy9_141cd; // 10ed:32fd
dw dummy9_141cf; // 10ed:32ff
dw dummy9_141d1; // 10ed:3301
dw dummy9_141d3; // 10ed:3303
dw dummy9_141d5; // 10ed:3305
dw dummy9_141d7; // 10ed:3307
dw dummy9_141d9; // 10ed:3309
dw dummy9_141db; // 10ed:330b
dw dummy9_141dd; // 10ed:330d
dw dummy9_141df; // 10ed:330f
dw dummy9_141e1; // 10ed:3311
dw dummy9_141e3; // 10ed:3313
dw dummy9_141e5; // 10ed:3315
dw dummy9_141e7; // 10ed:3317
dw dummy9_141e9; // 10ed:3319
dw dummy9_141eb; // 10ed:331b
dw dummy9_141ed; // 10ed:331d
dw dummy9_141ef; // 10ed:331f
dw dummy9_141f1; // 10ed:3321
dw dummy9_141f3; // 10ed:3323
dw dummy9_141f5; // 10ed:3325
dw dummy9_141f7; // 10ed:3327
dw dummy9_141f9; // 10ed:3329
dw dummy9_141fb; // 10ed:332b
dw dummy9_141fd; // 10ed:332d
dw dummy9_141ff; // 10ed:332f
dw dummy9_14201; // 10ed:3331
dw dummy9_14203; // 10ed:3333
dw dummy9_14205; // 10ed:3335
dw dummy9_14207; // 10ed:3337
dw dummy9_14209; // 10ed:3339
dw dummy9_1420b; // 10ed:333b
dw dummy9_1420d; // 10ed:333d
dw dummy9_1420f; // 10ed:333f
dw dummy9_14211; // 10ed:3341
dw dummy9_14213; // 10ed:3343
dw dummy9_14215; // 10ed:3345
dw dummy9_14217; // 10ed:3347
dw _off_227f9_midi_resource_files; // 10ed:3349
dw dummy9_1421b; // 10ed:334b
dw dummy9_1421d; // 10ed:334d
dw dummy9_1421f; // 10ed:334f
dw dummy9_14221; // 10ed:3351
dw dummy9_14223; // 10ed:3353
dw dummy9_14225; // 10ed:3355
dw dummy9_14227; // 10ed:3357
dw dummy9_14229; // 10ed:3359
dw dummy9_1422b; // 10ed:335b
dw dummy9_1422d; // 10ed:335d
dw dummy9_1422f; // 10ed:335f
dw dummy9_14231; // 10ed:3361
dw dummy9_14233; // 10ed:3363
dw dummy9_14235; // 10ed:3365
dw dummy9_14237; // 10ed:3367
dw dummy9_14239; // 10ed:3369
dw dummy9_1423b; // 10ed:336b
dw dummy9_1423d; // 10ed:336d
dw dummy9_1423f; // 10ed:336f
dw dummy9_14241; // 10ed:3371
dw dummy9_14243; // 10ed:3373
dw dummy9_14245; // 10ed:3375
dw dummy9_14247; // 10ed:3377
dw dummy9_14249; // 10ed:3379
dw dummy9_1424b; // 10ed:337b
dw dummy9_1424d; // 10ed:337d
dw dummy9_1424f; // 10ed:337f
dw dummy9_14251; // 10ed:3381
dw dummy9_14253; // 10ed:3383
dw dummy9_14255; // 10ed:3385
dw dummy9_14257; // 10ed:3387
dw dummy9_14259; // 10ed:3389
dw dummy9_1425b; // 10ed:338b
dw dummy9_1425d; // 10ed:338d
dw dummy9_1425f; // 10ed:338f
dw dummy9_14261; // 10ed:3391
dw dummy9_14263; // 10ed:3393
dw dummy9_14265; // 10ed:3395
dw dummy9_14267; // 10ed:3397
dw dummy9_14269; // 10ed:3399
dw dummy9_1426b; // 10ed:339b
dw dummy9_1426d; // 10ed:339d
dw dummy9_1426f; // 10ed:339f
dw dummy9_14271; // 10ed:33a1
dw resource_list_hnm; // 10ed:33a3
dw dummy9_14275; // 10ed:33a5
dw dummy9_14277; // 10ed:33a7
dw dummy9_14279; // 10ed:33a9
dw dummy9_1427b; // 10ed:33ab
dw dummy9_1427d; // 10ed:33ad
dw dummy9_1427f; // 10ed:33af
dw dummy9_14281; // 10ed:33b1
dw dummy9_14283; // 10ed:33b3
dw dummy9_14285; // 10ed:33b5
dw dummy9_14287; // 10ed:33b7
dw dummy9_14289; // 10ed:33b9
dw dummy9_1428b; // 10ed:33bb
dw dummy9_1428d; // 10ed:33bd
dw dummy9_1428f; // 10ed:33bf
dw dummy9_14291; // 10ed:33c1
dw dummy9_14293; // 10ed:33c3
dw dummy9_14295; // 10ed:33c5
dw dummy9_14297; // 10ed:33c7
dw dummy9_14299; // 10ed:33c9
dw dummy9_1429b; // 10ed:33cb
dw dummy9_1429d; // 10ed:33cd
dw dummy9_1429f; // 10ed:33cf
dw dummy9_142a1; // 10ed:33d1
dw dummy9_142a3; // 10ed:33d3
dw dummy9_142a5; // 10ed:33d5
dw dummy9_142a7; // 10ed:33d7
dw dummy9_142a9; // 10ed:33d9
dw dummy9_142ab; // 10ed:33db
dw dummy9_142ad; // 10ed:33dd
dw dummy9_142af; // 10ed:33df
dw dummy9_142b1; // 10ed:33e1
dw dummy9_142b3; // 10ed:33e3
dw dummy9_142b5; // 10ed:33e5
dw dummy9_142b7; // 10ed:33e7
dw dummy9_142b9; // 10ed:33e9
dw dummy9_142bb; // 10ed:33eb
dw res_blank_entry; // 10ed:33ed
db dummy9_142bf;
dw res_dfl2_hnm; // 10ed:33f0
char adfl2_hnm[9]; // 10ed:33f2
db dummy9_142cb;
db dummy9_142cc;
db dummy9_142cd;
db dummy9_142ce;
db dummy9_142cf;
db dummy9_142d0;
db dummy9_142d1;
db dummy9_142d2;
dw res_mnt1_hnm; // 10ed:3403
char amnt1_hnm[9]; // 10ed:3405
db dummy9_142de;
db dummy9_142df;
db dummy9_142e0;
db dummy9_142e1;
db dummy9_142e2;
db dummy9_142e3;
db dummy9_142e4;
db dummy9_142e5;
dw res_mnt2_hnm; // 10ed:3416
char amnt2_hnm[9]; // 10ed:3418
db dummy9_142f1;
db dummy9_142f2;
db dummy9_142f3;
db dummy9_142f4;
db dummy9_142f5;
db dummy9_142f6;
db dummy9_142f7;
db dummy9_142f8;
dw res_mnt3_hnm; // 10ed:3429
char amnt3_hnm[9]; // 10ed:342b
db dummy9_14304;
db dummy9_14305;
db dummy9_14306;
db dummy9_14307;
db dummy9_14308;
db dummy9_14309;
db dummy9_1430a;
db dummy9_1430b;
dw res_mnt4_hnm; // 10ed:343c
char amnt4_hnm[9]; // 10ed:343e
db dummy9_14317;
db dummy9_14318;
db dummy9_14319;
db dummy9_1431a;
db dummy9_1431b;
db dummy9_1431c;
db dummy9_1431d;
db dummy9_1431e;
dw res_siet_hnm; // 10ed:344f
char asiet_hnm[9]; // 10ed:3451
db dummy9_1432a;
db dummy9_1432b;
db dummy9_1432c;
db dummy9_1432d;
db dummy9_1432e;
db dummy9_1432f;
db dummy9_14330;
db dummy9_14331;
dw res_palace_hnm; // 10ed:3462
char apalace_hnm[11]; // 10ed:3464
dw res_fort_hnm; // 10ed:346f
char afort_hnm[9]; // 10ed:3471
dw res_mtg1_hnm; // 10ed:347a
char amtg1_hnm[9]; // 10ed:347c
dw res_mtg2_hnm; // 10ed:3485
char amtg2_hnm[9]; // 10ed:3487
dw res_mtg3_hnm; // 10ed:3490
char amtg3_hnm[9]; // 10ed:3492
dw res_plant_hnm; // 10ed:349b
char aplant_hnm[10]; // 10ed:349d
dw res_credits_hnm; // 10ed:34a7
char acredits_hnm[12]; // 10ed:34a9
dw res_virgin_hnm; // 10ed:34b5
char avirgin_hnm[11]; // 10ed:34b7
dw res_cryo_hnm; // 10ed:34c2
char acryo_hnm[9]; // 10ed:34c4
dw res_cryo2_hnm; // 10ed:34cd
char acryo2_hnm[10]; // 10ed:34cf
dw res_present_hnm; // 10ed:34d9
char apresent_hnm[12]; // 10ed:34db
dw res_irulan_hnm; // 10ed:34e7
char airulan_hnm[11]; // 10ed:34e9
dw res_seqa_hnm; // 10ed:34f4
char aseqa_hnm[9]; // 10ed:34f6
dw res_seql_hnm; // 10ed:34ff
char aseql_hnm[9]; // 10ed:3501
dw res_seqm_hnm; // 10ed:350a
char aseqm_hnm[9]; // 10ed:350c
dw res_seqp_hnm; // 10ed:3515
char aseqp_hnm[9]; // 10ed:3517
dw res_seqq_hnm; // 10ed:3520
char aseqg_hnm[9]; // 10ed:3522
dw res_seqj_hnm; // 10ed:352b
char aseqj_hnm[9]; // 10ed:352d
dw res_seqk_hnm; // 10ed:3536
char aseqk_hnm[9]; // 10ed:3538
dw res_seqi_hnm; // 10ed:3541
char aseqi_hnm[9]; // 10ed:3543
dw res_seqd_hnm; // 10ed:354c
char aseqd_hnm[9]; // 10ed:354e
dw res_seqn_hnm; // 10ed:3557
char aseqn_hnm[9]; // 10ed:3559
dw res_seqr_hnm; // 10ed:3562
char aseqr_hnm[9]; // 10ed:3564
dw res_dead_hnm; // 10ed:356d
char adead_hnm[9]; // 10ed:356f
dw res_dead2_hnm; // 10ed:3578
char adead2_hnm[10]; // 10ed:357a
dw res_dead3_hnm; // 10ed:3584
char adead3_hnm[10]; // 10ed:3586
dw res_ver_hnm; // 10ed:3590
char aver_hnm[8]; // 10ed:3592
dw res_title_hnm; // 10ed:359a
char atitle_hnm[10]; // 10ed:359c
dw _word_22a56_hnm_file_handle; // 10ed:35a6
dw _word_22a58_irulx_subtitle_frames[11]; // 10ed:35a8
dw dummy9_1448e[11]; // 10ed:35a8
dw dummy9_144a4[11]; // 10ed:35a8
dw dummy9_144ba[10]; // 10ed:35a8
dw dummy9_144ce[9]; // 10ed:35a8
dw dummy9_144e0[9]; // 10ed:35a8
dw _word_22ad2_urlx_subtitle_next_frame_ptr; // 10ed:3622
char anotenoughstand[38]; // 10ed:3624
db dummy9_1451a;
char anotenoughsta_0[65]; // 10ed:364b
db dummy9_1455c;
char anotenoughsta_1[39]; // 10ed:368d
char afilenotfound[29]; // 10ed:36b4
dw res_sekence_hsq; // 10ed:36d1
char asekence_hsq[12]; // 10ed:36d3
dw res_water_hsq; // 10ed:36df
char awater_hsq[10]; // 10ed:36e1
dw res_wormsuit_hsq; // 10ed:36eb
char awormsuit_hsq[13]; // 10ed:36ed
dw res_wormintr_hsq; // 10ed:36fa
char awormintr_hsq[13]; // 10ed:36fc
dw res_warsong_hsq; // 10ed:3709
char awarsong_hsq[12]; // 10ed:370b
dw res_morning_hsq; // 10ed:3717
char amorning_hsq[12]; // 10ed:3719
dw res_sietchm_hsq; // 10ed:3725
char asietchm_hsq[12]; // 10ed:3727
dw res_bagdad_hsq; // 10ed:3733
char abagdad_hsq[11]; // 10ed:3735
dw res_arrakis_hsq; // 10ed:3740
char aarrakis_hsq[12]; // 10ed:3742
dw res_cryomus_hsq; // 10ed:374e
char acryomus_hsq[12]; // 10ed:3750
db unk_22c0c; // 10ed:375c
db dummy9_1462d; // 10ed:375d
db dummy9_1462e; // 10ed:375e
db dummy9_1462f; // 10ed:375f
db dummy9_14630; // 10ed:3760
db dummy9_14631; // 10ed:3761
db dummy9_14632; // 10ed:3762
db dummy9_14633; // 10ed:3763
db dummy9_14634; // 10ed:3764
db dummy9_14635; // 10ed:3765
db dummy9_14636; // 10ed:3766
db dummy9_14637; // 10ed:3767
db dummy9_14638; // 10ed:3768
db dummy9_14639; // 10ed:3769
db _byte_22c1a_audio_current_sfx_id; // 10ed:376a
dw res_sn1_hsq; // 10ed:376b
char asn1_hsq[8]; // 10ed:376d
dw res_sn2_hsq; // 10ed:3775
char asn2_hsq[8]; // 10ed:3777
dw res_sn3_hsq; // 10ed:377f
char asn3_hsq[8]; // 10ed:3781
dw res_sn4_hsq; // 10ed:3789
char asn4_hsq[8]; // 10ed:378b
dw res_sn5_hsq; // 10ed:3793
char asn5_voc[8]; // 10ed:3795
dw res_sn6_hsq; // 10ed:379d
char asn6_hsq[8]; // 10ed:379f
dw res_sn7_hsq; // 10ed:37a7
char asn7_voc[8]; // 10ed:37a9
dw res_sn8_hsq; // 10ed:37b1
char asn8_voc[8]; // 10ed:37b3
dw res_sn9_hsq; // 10ed:37bb
char asn9_voc[8]; // 10ed:37bd
dw res_sna_hsq; // 10ed:37c5
char asna_hsq[8]; // 10ed:37c7
dw res_freq_hsq; // 10ed:37cf
char afreq_hsq[9]; // 10ed:37d1
char apfpf001i_voc[15]; // 10ed:37da
char adune_dat[9]; // 10ed:37e9
char adnmaj1[7]; // 10ed:37f2
db dummy9_146c9;
db byte_22caa[10]; // 10ed:37fa
db byte_22cb4[10]; // 10ed:3804
dw word_22cbe; // 10ed:380e
db byte_22cc0; // 10ed:3810
dd _dword_22cc1_pcm_voc_resource_offset; // 10ed:3811
dw _word_22cc5_res_remaining; // 10ed:3815
dw _word_22cc7_pcm_callback_flag_q; // 10ed:3817
dd dword_22cc9; // 10ed:3819
dw word_22ccd; // 10ed:381d
dw _word_22ccf_pcm_callback_flag_qq; // 10ed:381f
dw _word_22cd1_res_file_handle; // 10ed:3821
db byte_22cd3; // 10ed:3823
dw word_22cd4; // 10ed:3824
db _22cd6_temp_filepath_buffer; // 10ed:3826
db dummy9_146f7[32]; // 10ed:3827
db dummy9_14717[32]; // 10ed:3847
db dummy9_14737[32]; // 10ed:3867
db dummy9_14757;
db dummy9_14758;
db dummy9_14759;
db dummy9_1475a;
db dummy9_1475b;
db dummy9_1475c;
db dummy9_1475d;
db dummy9_1475e;
db dummy9_1475f;
db dummy9_14760;
db dummy9_14761;
db dummy9_14762;
db dummy9_14763;
db dummy9_14764;
db dummy9_14765;
db dummy9_14766;
db dummy9_14767;
db dummy9_14768;
db dummy9_14769;
db dummy9_1476a;
db dummy9_1476b;
db dummy9_1476c;
db dummy9_1476d;
db dummy9_1476e;
db dummy9_1476f;
db dummy9_14770;
db dummy9_14771;
db dummy9_14772;
db dummy9_14773;
db dummy9_14774;
db dummy9_14775;
dw off_22d56; // 10ed:38a6
char adune37s0_sav[13]; // 10ed:38a8
dd _ptr_22d65_gfx_vtable_func_00_set_mode; // 10ed:38b5
dd _ptr_22d65_gfx_vtable_func_01_get_info; // 10ed:38b9
dd _ptr_22d65_gfx_vtable_func_02; // 10ed:38bd
dd _ptr_22d65_gfx_vtable_func_03_draw_mouse; // 10ed:38c1
dd _ptr_22d65_gfx_vtable_func_04_restore_mouse_area_qq; // 10ed:38c5
dd _ptr_22d65_gfx_vtable_func_05_blit; // 10ed:38c9
dd _ptr_22d65_gfx_vtable_func_06; // 10ed:38cd
dd _ptr_22d65_gfx_vtable_func_07; // 10ed:38d1
dd _ptr_22d65_gfx_vtable_func_08; // 10ed:38d5
dd _ptr_22d65_gfx_vtable_func_09; // 10ed:38d9
dd _ptr_22d65_gfx_vtable_func_10; // 10ed:38dd
dd _ptr_22d65_gfx_vtable_func_11_copy_framebuf; // 10ed:38e1
dd _ptr_22d65_gfx_vtable_func_12_copy_rect; // 10ed:38e5
dd _ptr_22d65_gfx_vtable_func_13_copy_framebuf; // 10ed:38e9
dd _ptr_22d65_gfx_vtable_func_14; // 10ed:38ed
dd _ptr_22d65_gfx_vtable_func_15_copy_framebuf; // 10ed:38f1
dd _ptr_22d65_gfx_vtable_func_16; // 10ed:38f5
dd _ptr_22d65_gfx_vtable_func_17_copy_fbuf_explode_and_center; // 10ed:38f9
dd _ptr_22d65_gfx_vtable_func_18; // 10ed:38fd
dd _ptr_22d65_gfx_vtable_func_19; // 10ed:3901
dd _ptr_22d65_gfx_vtable_func_20; // 10ed:3905
dd _ptr_22d65_gfx_vtable_func_21_set_pixel; // 10ed:3909
dd _ptr_22d65_gfx_vtable_func_22; // 10ed:390d
dd _ptr_22d65_gfx_vtable_func_23; // 10ed:3911
dd _ptr_22d65_gfx_vtable_func_24; // 10ed:3915
dd _ptr_22d65_gfx_vtable_func_25; // 10ed:3919
dd _ptr_22d65_gfx_vtable_func_26; // 10ed:391d
dd _ptr_22d65_gfx_vtable_func_27; // 10ed:3921
dd _ptr_22d65_gfx_vtable_func_28; // 10ed:3925
dd _ptr_22d65_gfx_vtable_func_29; // 10ed:3929
dd _ptr_22d65_gfx_vtable_func_30; // 10ed:392d
dd _ptr_22d65_gfx_vtable_func_31; // 10ed:3931
dd _ptr_22d65_gfx_vtable_func_32; // 10ed:3935
dd _ptr_22d65_gfx_vtable_func_set_global_y_offset; // 10ed:3939
dd _ptr_22d65_gfx_vtable_func_34; // 10ed:393d
dd _ptr_22d65_gfx_vtable_func_35; // 10ed:3941
dd _ptr_22d65_gfx_vtable_func_36; // 10ed:3945
dd _ptr_22d65_gfx_vtable_func_37; // 10ed:3949
dd _ptr_22d65_gfx_vtable_func_38; // 10ed:394d
dd _ptr_22d65_gfx_vtable_func_39; // 10ed:3951
dd _ptr_22d65_gfx_vtable_func_40; // 10ed:3955
dd _ptr_22d65_gfx_vtable_func_41_copy_pal2_to_pal1; // 10ed:3959
dd _ptr_22d65_gfx_vtable_func_42; // 10ed:395d
dd _ptr_22d65_gfx_vtable_func_43; // 10ed:3961
dd _ptr_22d65_gfx_vtable_func_44; // 10ed:3965
dd _ptr_22d65_gfx_vtable_func_45; // 10ed:3969
dd midi_vtable_func_0; // 10ed:396d
dd midi_vtable_func_1; // 10ed:3971
dd midi_vtable_func_2; // 10ed:3975
dd midi_vtable_func_3; // 10ed:3979
dd midi_vtable_func_4; // 10ed:397d
dd midi_vtable_func_5; // 10ed:3981
dd midi_vtable_func_6; // 10ed:3985
dd _dword_22e39_pcm_audio_vtable_func_1; // 10ed:3989
dd _dword_22e3d_pcm_audio_vtable_func_2; // 10ed:398d
dd pcm_audio_vtable_func_3; // 10ed:3991
dd pcm_audio_vtable_func_4; // 10ed:3995
dd pcm_audio_vtable_func_5; // 10ed:3999
dd pcm_audio_vtable_func_6; // 10ed:399d
dd pcm_audio_vtable_func_7; // 10ed:39a1
dd pcm_audio_vtable_func_8; // 10ed:39a5
dw _word_22e59_xms_or_ems_mem_limit; // 10ed:39a9
dw _word_22e5b_joystick_param; // 10ed:39ab
db dummy9_1487d;
db dummy9_1487e;
dw word_22e5f; // 10ed:39af
dw word_22e61; // 10ed:39b1
dw _word_22e63_cmd_arg_midi; // 10ed:39b3
dw word_22e65; // 10ed:39b5
dw _word_22e67_allocator_next_free_ofs; // 10ed:39b7
dw _word_22e69_allocator_next_free_seg; // 10ed:39b9
db dummy9_1488b[32]; // 10ed:39bb
db dummy9_148ab[32]; // 10ed:39db
db dummy9_148cb[32]; // 10ed:39fb
db dummy9_148eb[32]; // 10ed:3a1b
db dummy9_1490b[32]; // 10ed:3a3b
db dummy9_1492b[32]; // 10ed:3a5b
db dummy9_1494b[32]; // 10ed:3a7b
db dummy9_1496b[32]; // 10ed:3a9b
db dummy9_1498b[32]; // 10ed:3abb
db dummy9_149ab[32]; // 10ed:3adb
db dummy9_149cb[32]; // 10ed:3afb
db dummy9_149eb[32]; // 10ed:3b1b
db dummy9_14a0b[32]; // 10ed:3b3b
db dummy9_14a2b[32]; // 10ed:3b5b
db dummy9_14a4b[32]; // 10ed:3b7b
db dummy9_14a6b[32]; // 10ed:3b9b
db dummy9_14a8b[32]; // 10ed:3bbb
db dummy9_14aab[32]; // 10ed:3bdb
db dummy9_14acb[32]; // 10ed:3bfb
db dummy9_14aeb[32]; // 10ed:3c1b
db dummy9_14b0b[32]; // 10ed:3c3b
db dummy9_14b2b[32]; // 10ed:3c5b
db dummy9_14b4b[32]; // 10ed:3c7b
db dummy9_14b6b[32]; // 10ed:3c9b
db dummy9_14b8b;
dw _word_2316c_error_msg; // 10ed:3cbc
dw word_2316e; // 10ed:3cbe
db unk_23170; // 10ed:3cc0
db dummy9_14b91[32]; // 10ed:3cc1
db dummy9_14bb1[32]; // 10ed:3ce1
db dummy9_14bd1[32]; // 10ed:3d01
db dummy9_14bf1[32]; // 10ed:3d21
db dummy9_14c11[32]; // 10ed:3d41
db dummy9_14c31[32]; // 10ed:3d61
db dummy9_14c51[32]; // 10ed:3d81
db dummy9_14c71[32]; // 10ed:3da1
db dummy9_14c91[32]; // 10ed:3dc1
db dummy9_14cb1[32]; // 10ed:3de1
db dummy9_14cd1[32]; // 10ed:3e01
db dummy9_14cf1[32]; // 10ed:3e21
db dummy9_14d11[32]; // 10ed:3e41
db dummy9_14d31[32]; // 10ed:3e61
db dummy9_14d51[32]; // 10ed:3e81
db dummy9_14d71[32]; // 10ed:3ea1
db dummy9_14d91[32]; // 10ed:3ec1
db dummy9_14db1[32]; // 10ed:3ee1
db dummy9_14dd1[32]; // 10ed:3f01
db dummy9_14df1[32]; // 10ed:3f21
db dummy9_14e11[32]; // 10ed:3f41
db dummy9_14e31[32]; // 10ed:3f61
db dummy9_14e51[32]; // 10ed:3f81
db dummy9_14e71[32]; // 10ed:3fa1
db dummy9_14e91[32]; // 10ed:3fc1
db dummy9_14eb1[32]; // 10ed:3fe1
db dummy9_14ed1[32]; // 10ed:4001
db dummy9_14ef1[32]; // 10ed:4021
db dummy9_14f11[32]; // 10ed:4041
db dummy9_14f31[32]; // 10ed:4061
db dummy9_14f51[32]; // 10ed:4081
db dummy9_14f71[32]; // 10ed:40a1
db dummy9_14f91[32]; // 10ed:40c1
db dummy9_14fb1[32]; // 10ed:40e1
db dummy9_14fd1[32]; // 10ed:4101
db dummy9_14ff1[32]; // 10ed:4121
db dummy9_15011[32]; // 10ed:4141
db dummy9_15031[32]; // 10ed:4161
db dummy9_15051[32]; // 10ed:4181
db dummy9_15071[32]; // 10ed:41a1
db dummy9_15091[32]; // 10ed:41c1
db dummy9_150b1[32]; // 10ed:41e1
db dummy9_150d1[32]; // 10ed:4201
db dummy9_150f1[32]; // 10ed:4221
db dummy9_15111[32]; // 10ed:4241
db dummy9_15131[32]; // 10ed:4261
db dummy9_15151[32]; // 10ed:4281
db dummy9_15171[32]; // 10ed:42a1
db dummy9_15191[32]; // 10ed:42c1
db dummy9_151b1[32]; // 10ed:42e1
db dummy9_151d1[32]; // 10ed:4301
db dummy9_151f1[32]; // 10ed:4321
db dummy9_15211[32]; // 10ed:4341
db dummy9_15231[32]; // 10ed:4361
db dummy9_15251[32]; // 10ed:4381
db dummy9_15271[32]; // 10ed:43a1
db dummy9_15291[32]; // 10ed:43c1
db dummy9_152b1[32]; // 10ed:43e1
db dummy9_152d1[32]; // 10ed:4401
db dummy9_152f1[32]; // 10ed:4421
db dummy9_15311[32]; // 10ed:4441
db dummy9_15331[32]; // 10ed:4461
db dummy9_15351[32]; // 10ed:4481
db dummy9_15371[32]; // 10ed:44a1
db dummy9_15391[32]; // 10ed:44c1
db dummy9_153b1[32]; // 10ed:44e1
db dummy9_153d1[32]; // 10ed:4501
db dummy9_153f1;
db dummy9_153f2;
db dummy9_153f3;
db dummy9_153f4;
db dummy9_153f5;
db dummy9_153f6;
db dummy9_153f7;
db dummy9_153f8;
db dummy9_153f9;
db dummy9_153fa;
db dummy9_153fb;
db dummy9_153fc;
db dummy9_153fd;
db dummy9_153fe;
db dummy9_153ff;
db dummy9_15400;
db dummy9_15401;
db dummy9_15402;
db dummy9_15403;
db dummy9_15404;
db dummy9_15405;
db dummy9_15406;
db dummy9_15407;
db dummy9_15408;
db dummy9_15409;
db dummy9_1540a;
db dummy9_1540b;
db dummy9_1540c;
db dummy9_1540d;
db dummy9_1540e;
db dummy9_1540f;
dw word_239f0; // 10ed:4540
db dummy9_15412[32]; // 10ed:4542
db dummy9_15432[32]; // 10ed:4562
db dummy9_15452[32]; // 10ed:4582
db dummy9_15472[32]; // 10ed:45a2
db dummy9_15492[32]; // 10ed:45c2
db dummy9_154b2[32]; // 10ed:45e2
db dummy9_154d2;
db dummy9_154d3;
db dummy9_154d4;
db dummy9_154d5;
db dummy9_154d6;
db dummy9_154d7;
dw word_23ab8; // 10ed:4608
db dummy9_154da[32]; // 10ed:460a
db dummy9_154fa[32]; // 10ed:462a
db dummy9_1551a[32]; // 10ed:464a
db dummy9_1553a[32]; // 10ed:466a
db dummy9_1555a[32]; // 10ed:468a
db dummy9_1557a;
db dummy9_1557b;
db dummy9_1557c;
db dummy9_1557d;
db dummy9_1557e;
db dummy9_1557f;
db dummy9_15580;
db dummy9_15581;
db dummy9_15582;
db dummy9_15583;
db dummy9_15584;
db unk_23b65; // 10ed:46b5
db dummy9_15586;
db dummy9_15587;
db dummy9_15588;
db dummy9_15589;
db dummy9_1558a;
db dummy9_1558b;
db dummy9_1558c;
db dummy9_1558d;
db dummy9_1558e;
db dummy9_1558f;
db dummy9_15590;
db dummy9_15591;
db dummy9_15592;
db dummy9_15593;
db dummy9_15594;
db dummy9_15595;
db dummy9_15596;
db dummy9_15597;
db dummy9_15598;
db dummy9_15599;
db dummy9_1559a;
db dummy9_1559b;
db dummy9_1559c;
db dummy9_1559d;
db dummy9_1559e;
db dummy9_1559f;
db dummy9_155a0;
db dummy9_155a1;
dw word_23b82; // 10ed:46d2
dw word_23b84; // 10ed:46d4
db byte_23b86; // 10ed:46d6
db byte_23b87; // 10ed:46d7
db byte_23b88; // 10ed:46d8
db byte_23b89; // 10ed:46d9
db byte_23b8a; // 10ed:46da
dw word_23b8b; // 10ed:46db
db byte_23b8d; // 10ed:46dd
db dummy9_155ae;
db byte_23b8f; // 10ed:46df
db byte_23b90; // 10ed:46e0
db dummy9_155b1;
db dummy9_155b2;
dw word_23b93; // 10ed:46e3
dw word_23b95; // 10ed:46e5
dw word_23b97; // 10ed:46e7
dw word_23b99; // 10ed:46e9
db byte_23b9b; // 10ed:46eb
db byte_23b9c; // 10ed:46ec
dw word_23b9d; // 10ed:46ed
db dummy9_155bf;
db dummy9_155c0;
db dummy9_155c1;
db dummy9_155c2;
db dummy9_155c3;
db dummy9_155c4;
db dummy9_155c5;
db dummy9_155c6;
db dummy9_155c7;
db dummy9_155c8;
db dummy9_155c9;
db dummy9_155ca;
db dummy9_155cb;
db dummy9_155cc;
db dummy9_155cd;
db dummy9_155ce;
db byte_23baf; // 10ed:46ff
db dummy9_155d0;
db dummy9_155d1;
db dummy9_155d2;
db dummy9_155d3;
db dummy9_155d4;
db dummy9_155d5;
db dummy9_155d6;
db dummy9_155d7;
db dummy9_155d8;
db dummy9_155d9;
db dummy9_155da;
db dummy9_155db;
db dummy9_155dc;
db dummy9_155dd;
db dummy9_155de;
db dummy9_155df;
dw word_23bc0; // 10ed:4710
db dummy9_155e2;
db dummy9_155e3;
db dummy9_155e4;
db dummy9_155e5;
db dummy9_155e6;
db dummy9_155e7;
db dummy9_155e8;
db dummy9_155e9;
db dummy9_155ea;
db dummy9_155eb;
db dummy9_155ec;
db dummy9_155ed;
db dummy9_155ee;
db dummy9_155ef;
db dummy9_155f0;
db dummy9_155f1;
db dummy9_155f2;
db dummy9_155f3;
db dummy9_155f4;
db dummy9_155f5;
db dummy9_155f6;
db byte_23bd7; // 10ed:4727
db dummy9_155f8;
dw word_23bd9; // 10ed:4729
db dummy9_155fb;
db dummy9_155fc;
dw word_23bdd; // 10ed:472d
dw word_23bdf; // 10ed:472f
db byte_23be1; // 10ed:4731
db byte_23be2; // 10ed:4732
dw word_23be3; // 10ed:4733
db byte_23be5; // 10ed:4735
db dummy9_15606;
db dummy9_15607;
db dummy9_15608;
db dummy9_15609;
db byte_23bea; // 10ed:473a
db byte_23beb; // 10ed:473b
db dummy9_1560c; // 10ed:473c
db dummy9_1560d; // 10ed:473d
db byte_23bee; // 10ed:473e
dw word_23bef; // 10ed:473f
dw word_23bf1; // 10ed:4741
dw word_23bf3; // 10ed:4743
dw word_23bf5; // 10ed:4745
dw word_23bf7; // 10ed:4747
db dummy9_15619[32]; // 10ed:4749
db dummy9_15639;
db byte_23c1a; // 10ed:476a
db byte_23c1b; // 10ed:476b
db dummy9_1563c;
db dummy9_1563d;
dw word_23c1e; // 10ed:476e
dw word_23c20; // 10ed:4770
dw word_23c22; // 10ed:4772
db byte_23c24; // 10ed:4774
db dummy9_15645;
dw word_23c26; // 10ed:4776
dw word_23c28; // 10ed:4778
dw word_23c2a; // 10ed:477a
dw word_23c2c; // 10ed:477c
db byte_23c2e; // 10ed:477e
db byte_23c2f; // 10ed:477f
dw word_23c30; // 10ed:4780
dw word_23c32; // 10ed:4782
db dummy9_15654;
db dummy9_15655;
db dummy9_15656;
db dummy9_15657;
db dummy9_15658;
db dummy9_15659;
db dummy9_1565a;
db dummy9_1565b;
db byte_23c3c; // 10ed:478c
db dummy9_1565d;
db dummy9_1565e;
db dummy9_1565f;
db dummy9_15660;
db dummy9_15661;
db dummy9_15662;
dw word_23c43; // 10ed:4793
db dummy9_15665;
db dummy9_15666;
db dummy9_15667;
db dummy9_15668;
db dummy9_15669;
db dummy9_1566a;
db dummy9_1566b;
db dummy9_1566c;
db dummy9_1566d;
dw word_23c4e; // 10ed:479e
dw word_23c50; // 10ed:47a0
db dummy9_15672[2]; // 10ed:47a2
db byte_23c54; // 10ed:47a4
db dummy9_15675;
db byte_23c56; // 10ed:47a6
db byte_23c57; // 10ed:47a7
db dummy9_15678;
db byte_23c59; // 10ed:47a9
dw word_23c5a; // 10ed:47aa
dd dword_23c5c; // 10ed:47ac
dd dword_23c60; // 10ed:47b0
dw word_23c64; // 10ed:47b4
db dummy9_15686;
db dummy9_15687;
db dummy9_15688;
db dummy9_15689;
db dummy9_1568a;
db dummy9_1568b;
dw word_23c6c; // 10ed:47bc
db dummy9_1568e;
db dummy9_1568f;
db dummy9_15690;
db dummy9_15691;
dw word_23c72; // 10ed:47c2
dw word_23c74; // 10ed:47c4
dw word_23c76; // 10ed:47c6
dw word_23c78; // 10ed:47c8
dw word_23c7a; // 10ed:47ca
dw word_23c7c; // 10ed:47cc
dw word_23c7e; // 10ed:47ce
db byte_23c80; // 10ed:47d0
db byte_23c81; // 10ed:47d1
dw word_23c82; // 10ed:47d2
dw word_23c84; // 10ed:47d4
dw word_23c86; // 10ed:47d6
dw word_23c88; // 10ed:47d8
dw word_23c8a; // 10ed:47da
db byte_23c8c; // 10ed:47dc
db dummy9_156ad;
dw word_23c8e; // 10ed:47de
db byte_23c90; // 10ed:47e0
dw word_23c91; // 10ed:47e1
db dummy9_156b3;
dw word_23c94; // 10ed:47e4
dw word_23c96; // 10ed:47e6
dw word_23c98; // 10ed:47e8
dw word_23c9a; // 10ed:47ea
db byte_23c9c; // 10ed:47ec
db byte_23c9d; // 10ed:47ed
dw word_23c9e; // 10ed:47ee
dw word_23ca0; // 10ed:47f0
dw word_23ca2; // 10ed:47f2
dw word_23ca4; // 10ed:47f4
dw _word_23ca6_sal_stack_buffer_24b; // 10ed:47f6
dw word_23ca8; // 10ed:47f8
dw word_23caa; // 10ed:47fa
db dummy9_156cc[32]; // 10ed:47fc
db dummy9_156ec[32]; // 10ed:481c
db dummy9_1570c; // 10ed:483c
db dummy9_1570d; // 10ed:483d
db dummy9_1570e; // 10ed:483e
db dummy9_1570f; // 10ed:483f
db dummy9_15710; // 10ed:4840
db dummy9_15711; // 10ed:4841
db dummy9_15712; // 10ed:4842
db dummy9_15713; // 10ed:4843
db dummy9_15714; // 10ed:4844
db dummy9_15715; // 10ed:4845
db dummy9_15716; // 10ed:4846
db dummy9_15717; // 10ed:4847
db dummy9_15718; // 10ed:4848
db dummy9_15719; // 10ed:4849
db dummy9_1571a; // 10ed:484a
db dummy9_1571b; // 10ed:484b
db dummy9_1571c; // 10ed:484c
db dummy9_1571d; // 10ed:484d
db dummy9_1571e; // 10ed:484e
db dummy9_1571f; // 10ed:484f
db dummy9_15720; // 10ed:4850
db dummy9_15721; // 10ed:4851
db dummy9_15722; // 10ed:4852
db dummy9_15723; // 10ed:4853
dw _word_23d04_intro_script_offset; // 10ed:4854
db unk_23d06; // 10ed:4856
db dummy9_15727;
db dummy9_15728;
db dummy9_15729;
db dummy9_1572a;
db dummy9_1572b;
db dummy9_1572c;
db dummy9_1572d;
dw word_23d0e; // 10ed:485e
db dummy9_15730;
db dummy9_15731;
db dummy9_15732;
db dummy9_15733;
db dummy9_15734;
db dummy9_15735;
db dummy9_15736;
db dummy9_15737;
dw word_23d18; // 10ed:4868
dw word_23d1a; // 10ed:486a
dw word_23d1c; // 10ed:486c
dw word_23d1e; // 10ed:486e
dw word_23d20; // 10ed:4870
dw word_23d22; // 10ed:4872
dw word_23d24; // 10ed:4874
dw word_23d26; // 10ed:4876
dw word_23d28; // 10ed:4878
dw word_23d2a; // 10ed:487a
dw word_23d2c; // 10ed:487c
dw word_23d2e; // 10ed:487e
db unk_23d30; // 10ed:4880
db dummy9_15751[32]; // 10ed:4881
db dummy9_15771[32]; // 10ed:48a1
db dummy9_15791[32]; // 10ed:48c1
db dummy9_157b1[32]; // 10ed:48e1
db dummy9_157d1[32]; // 10ed:4901
db dummy9_157f1[32]; // 10ed:4921
db dummy9_15811; // 10ed:4941
db dummy9_15812; // 10ed:4942
db dummy9_15813; // 10ed:4943
db dummy9_15814; // 10ed:4944
db dummy9_15815; // 10ed:4945
db dummy9_15816;
db dummy9_15817;
dw resource_tablat; // 10ed:4948
dw word_23dfa; // 10ed:494a
dw word_23dfc; // 10ed:494c
db dummy9_1581e[2]; // 10ed:494e
db dummy9_15820[32]; // 10ed:4950
db dummy9_15840[32]; // 10ed:4970
db dummy9_15860[32]; // 10ed:4990
db dummy9_15880[32]; // 10ed:49b0
db dummy9_158a0[32]; // 10ed:49d0
db dummy9_158c0[32]; // 10ed:49f0
db dummy9_158e0[32]; // 10ed:4a10
db dummy9_15900[32]; // 10ed:4a30
db dummy9_15920[32]; // 10ed:4a50
db dummy9_15940[32]; // 10ed:4a70
db dummy9_15960[32]; // 10ed:4a90
db dummy9_15980[32]; // 10ed:4ab0
db dummy9_159a0[32]; // 10ed:4ad0
db dummy9_159c0[32]; // 10ed:4af0
db dummy9_159e0[32]; // 10ed:4b10
db dummy9_15a00[32]; // 10ed:4b30
db dummy9_15a20[32]; // 10ed:4b50
db dummy9_15a40[32]; // 10ed:4b70
db dummy9_15a60[32]; // 10ed:4b90
db dummy9_15a80; // 10ed:4bb0
db dummy9_15a81; // 10ed:4bb1
db dummy9_15a82; // 10ed:4bb2
db dummy9_15a83;
db dummy9_15a84; // 10ed:4bb4
db dummy9_15a85;
db dummy9_15a86;
db dummy9_15a87;
db dummy9_15a88; // 10ed:4bb8
db unk_24069; // 10ed:4bb9
db dummy9_15a8a[32]; // 10ed:4bba
db dummy9_15aaa[32]; // 10ed:4bda
db dummy9_15aca[32]; // 10ed:4bfa
db dummy9_15aea[32]; // 10ed:4c1a
db dummy9_15b0a[32]; // 10ed:4c3a
db dummy9_15b2a; // 10ed:4c5a
db dummy9_15b2b;
db dummy9_15b2c; // 10ed:4c5c
db dummy9_15b2d;
db dummy9_15b2e;
db dummy9_15b2f;
dw resource_globdata; // 10ed:4c60
db unk_24112; // 10ed:4c62
db dummy9_15b33[12];
db unk_2411f; // 10ed:4c6f
db dummy9_15b40[432];
db unk_242d0; // 10ed:4e20
db dummy9_15cf1[2392];
db unk_24c29; // 10ed:5779
db dummy9_1664a[448];
db unk_24dea; // 10ed:593a
db dummy9_1680b[37];
db unk_24e10; // 10ed:5960
db dummy9_16831[7246];
db unk_26a5f; // 10ed:75af
db dummy9_18480[58];
db unk_26a9a; // 10ed:75ea
db dummy9_184bb[5584];
db unk_2806b; // 10ed:8bbb
db dummy9_19a8c[3586];
db unk_28e6e; // 10ed:99be
db dummy9_1a88f[3072];
db unk_29a6f; // 10ed:a5bf
db dummy9_1b490[240];
db unk_29b60; // 10ed:a6b0
db dummy9_1b581[273];
db unk_29c72; // 10ed:a7c2
db dummy9_1b693[675];
dw word_29f16; // 10ed:aa66
dw word_29f18; // 10ed:aa68
db dummy9_1b93a;
db dummy9_1b93b;
db dummy9_1b93c;
db dummy9_1b93d;
dw word_29f1e; // 10ed:aa6e
db dummy9_1b940;
db dummy9_1b941;
dw _word_29f22_res_condit_ofs; // 10ed:aa72
dw _word_29f24_res_condit_seg; // 10ed:aa74
dw _word_29f26_res_dialogue_ofs; // 10ed:aa76
dw _word_29f28_res_dialogue_seg; // 10ed:aa78
db dummy9_1b94a[32]; // 10ed:aa7a
db dummy9_1b96a[32]; // 10ed:aa9a
db dummy9_1b98a; // 10ed:aaba
db dummy9_1b98b; // 10ed:aabb
db dummy9_1b98c; // 10ed:aabc
db dummy9_1b98d; // 10ed:aabd
db dummy9_1b98e; // 10ed:aabe
db dummy9_1b98f; // 10ed:aabf
db dummy9_1b990; // 10ed:aac0
db dummy9_1b991; // 10ed:aac1
db dummy9_1b992; // 10ed:aac2
db dummy9_1b993; // 10ed:aac3
db dummy9_1b994; // 10ed:aac4
db dummy9_1b995; // 10ed:aac5
db dummy9_1b996; // 10ed:aac6
db dummy9_1b997; // 10ed:aac7
db dummy9_1b998; // 10ed:aac8
db dummy9_1b999; // 10ed:aac9
db dummy9_1b99a; // 10ed:aaca
db dummy9_1b99b; // 10ed:aacb
db dummy9_1b99c; // 10ed:aacc
db dummy9_1b99d; // 10ed:aacd
db dummy9_1b99e; // 10ed:aace
db dummy9_1b99f; // 10ed:aacf
db dummy9_1b9a0; // 10ed:aad0
db dummy9_1b9a1; // 10ed:aad1
db dummy9_1b9a2; // 10ed:aad2
db dummy9_1b9a3; // 10ed:aad3
db dummy9_1b9a4; // 10ed:aad4
db dummy9_1b9a5; // 10ed:aad5
dw word_29f86; // 10ed:aad6
char aitifiirii[13]; // 10ed:aad8
db dummy9_1b9b5[32]; // 10ed:aae5
db dummy9_1b9d5[32]; // 10ed:ab05
db dummy9_1b9f5[32]; // 10ed:ab25
db dummy9_1ba15[32]; // 10ed:ab45
db dummy9_1ba35; // 10ed:ab65
db dummy9_1ba36; // 10ed:ab66
db dummy9_1ba37; // 10ed:ab67
db dummy9_1ba38; // 10ed:ab68
db dummy9_1ba39; // 10ed:ab69
db dummy9_1ba3a; // 10ed:ab6a
db dummy9_1ba3b; // 10ed:ab6b
db dummy9_1ba3c; // 10ed:ab6c
db dummy9_1ba3d; // 10ed:ab6d
db dummy9_1ba3e; // 10ed:ab6e
db dummy9_1ba3f; // 10ed:ab6f
db dummy9_1ba40; // 10ed:ab70
db dummy9_1ba41; // 10ed:ab71
db dummy9_1ba42; // 10ed:ab72
db dummy9_1ba43; // 10ed:ab73
db dummy9_1ba44; // 10ed:ab74
db dummy9_1ba45; // 10ed:ab75
db dummy9_1ba46; // 10ed:ab76
db dummy9_1ba47; // 10ed:ab77
db dummy9_1ba48; // 10ed:ab78
db dummy9_1ba49; // 10ed:ab79
db dummy9_1ba4a; // 10ed:ab7a
db dummy9_1ba4b; // 10ed:ab7b
db dummy9_1ba4c; // 10ed:ab7c
db dummy9_1ba4d; // 10ed:ab7d
db dummy9_1ba4e; // 10ed:ab7e
db dummy9_1ba4f; // 10ed:ab7f
db dummy9_1ba50; // 10ed:ab80
db dummy9_1ba51; // 10ed:ab81
db dummy9_1ba52; // 10ed:ab82
db dummy9_1ba53; // 10ed:ab83
dw word_2a034; // 10ed:ab84
db dummy9_1ba56; // 10ed:ab86
db dummy9_1ba57; // 10ed:ab87
db dummy9_1ba58; // 10ed:ab88
db dummy9_1ba59; // 10ed:ab89
db dummy9_1ba5a;
db dummy9_1ba5b; // 10ed:ab8b
db dummy9_1ba5c; // 10ed:ab8c
db dummy9_1ba5d; // 10ed:ab8d
db dummy9_1ba5e;
db dummy9_1ba5f; // 10ed:ab8f
db dummy9_1ba60; // 10ed:ab90
db dummy9_1ba61; // 10ed:ab91
db unk_2a042; // 10ed:ab92
db dummy9_1ba63[3611];
db unk_2ae5e; // 10ed:b9ae
db dummy9_1c87f[703];
dw _work_2b11e_sal_data; // 10ed:bc6e
db dummy9_1cb40[487];
db unk_2b307; // 10ed:be57
db dummy9_1cd28[606];
db unk_2b566; // 10ed:c0b6
db dummy9_1cf87[2842];
db unk_2c081; // 10ed:cbd1
db dummy9_1daa2[660];
db byte_2c316; // 10ed:ce66
db dummy9_1dd37;
dw _word_2c318_allocator_last_free_seg; // 10ed:ce68
dd dword_2c31a; // 10ed:ce6a
dw word_2c31e; // 10ed:ce6e
db byte_2c320; // 10ed:ce70
db _byte_2c321_disable_hsq; // 10ed:ce71
db byte_2c322; // 10ed:ce72
db byte_2c323; // 10ed:ce73
dw _unk_2c324_vga_framebuffer_size; // 10ed:ce74
db _unk_2c326_default_drive; // 10ed:ce76
db _unk_2c327_default_drive; // 10ed:ce77
dw _word_2c328_resource_index; // 10ed:ce78
dw _word_2c32a_pit_timer_callback_counter; // 10ed:ce7a
dw word_2c32c; // 10ed:ce7c
db dummy9_1dd4e[2]; // 10ed:ce7e
db byte_2c330; // 10ed:ce80
db _unk_2c331_key_pressed_array; // 10ed:ce81
db dummy9_1dd52;
db dummy9_1dd53;
db dummy9_1dd54;
db dummy9_1dd55;
db dummy9_1dd56;
db dummy9_1dd57;
db dummy9_1dd58;
db dummy9_1dd59;
db dummy9_1dd5a;
db dummy9_1dd5b;
db dummy9_1dd5c;
db dummy9_1dd5d;
db dummy9_1dd5e;
db dummy9_1dd5f;
db dummy9_1dd60;
db dummy9_1dd61;
db dummy9_1dd62;
db dummy9_1dd63;
db dummy9_1dd64;
db dummy9_1dd65;
db dummy9_1dd66;
db dummy9_1dd67;
db dummy9_1dd68;
db dummy9_1dd69;
db _byte_2c34a_key_p_status; // 10ed:ce9a
db dummy9_1dd6b;
db dummy9_1dd6c;
db _byte_2c34d_key_enter_status; // 10ed:ce9d
db _byte_2c34e_key_w_status; // 10ed:ce9e
db dummy9_1dd6f;
db dummy9_1dd70;
db dummy9_1dd71;
db dummy9_1dd72;
db dummy9_1dd73;
db dummy9_1dd74;
db dummy9_1dd75;
db dummy9_1dd76;
db dummy9_1dd77;
db dummy9_1dd78;
db dummy9_1dd79;
db dummy9_1dd7a;
db dummy9_1dd7b;
db dummy9_1dd7c;
db dummy9_1dd7d;
db dummy9_1dd7e;
db dummy9_1dd7f;
db dummy9_1dd80;
db dummy9_1dd81;
db dummy9_1dd82;
db dummy9_1dd83;
db dummy9_1dd84;
db dummy9_1dd85;
db dummy9_1dd86;
db dummy9_1dd87;
db dummy9_1dd88;
db byte_2c369; // 10ed:ceb9
db byte_2c36a; // 10ed:ceba
db dummy9_1dd8b[32]; // 10ed:cebb
db dummy9_1ddab;
db byte_2c38c; // 10ed:cedc
db dummy9_1ddad;
db dummy9_1ddae;
db byte_2c38f; // 10ed:cedf
db dummy9_1ddb0;
db byte_2c391; // 10ed:cee1
db dummy9_1ddb2[2]; // 10ed:cee2
db byte_2c394; // 10ed:cee4
db dummy9_1ddb5[3]; // 10ed:cee5
db _byte_2c398_key_hit_qq; // 10ed:cee8
db byte_2c399; // 10ed:cee9
db _byte_2c39a_reset_keyboard_counter; // 10ed:ceea
db _byte_2c39b_language_setting; // 10ed:ceeb
db unk_2c39c; // 10ed:ceec
db dummy9_1ddbd[32]; // 10ed:ceed
db dummy9_1dddd[32]; // 10ed:cf0d
db dummy9_1ddfd[32]; // 10ed:cf2d
db dummy9_1de1d; // 10ed:cf4d
db dummy9_1de1e; // 10ed:cf4e
db dummy9_1de1f; // 10ed:cf4f
db dummy9_1de20; // 10ed:cf50
db dummy9_1de21; // 10ed:cf51
db dummy9_1de22; // 10ed:cf52
db dummy9_1de23; // 10ed:cf53
db dummy9_1de24; // 10ed:cf54
db dummy9_1de25; // 10ed:cf55
db dummy9_1de26; // 10ed:cf56
db dummy9_1de27; // 10ed:cf57
db dummy9_1de28; // 10ed:cf58
db dummy9_1de29; // 10ed:cf59
db dummy9_1de2a; // 10ed:cf5a
db dummy9_1de2b; // 10ed:cf5b
db dummy9_1de2c; // 10ed:cf5c
db dummy9_1de2d; // 10ed:cf5d
db dummy9_1de2e; // 10ed:cf5e
db dummy9_1de2f; // 10ed:cf5f
db dummy9_1de30; // 10ed:cf60
db dummy9_1de31; // 10ed:cf61
db dummy9_1de32; // 10ed:cf62
db dummy9_1de33; // 10ed:cf63
db dummy9_1de34; // 10ed:cf64
db dummy9_1de35; // 10ed:cf65
db dummy9_1de36; // 10ed:cf66
db dummy9_1de37; // 10ed:cf67
db dummy9_1de38; // 10ed:cf68
db dummy9_1de39; // 10ed:cf69
db dummy9_1de3a; // 10ed:cf6a
db dummy9_1de3b; // 10ed:cf6b
db unk_2c41c; // 10ed:cf6c
db dummy9_1de3d[32]; // 10ed:cf6d
db dummy9_1de5d[32]; // 10ed:cf8d
db dummy9_1de7d[32]; // 10ed:cfad
db dummy9_1de9d[32]; // 10ed:cfcd
db dummy9_1debd[32]; // 10ed:cfed
db dummy9_1dedd[32]; // 10ed:d00d
db dummy9_1defd[32]; // 10ed:d02d
db dummy9_1df1d[32]; // 10ed:d04d
db dummy9_1df3d[32]; // 10ed:d06d
db dummy9_1df5d[32]; // 10ed:d08d
db dummy9_1df7d[32]; // 10ed:d0ad
db dummy9_1df9d; // 10ed:d0cd
db dummy9_1df9e;
db dummy9_1df9f; // 10ed:d0cf
db dummy9_1dfa0; // 10ed:d0d0
db unk_2c581; // 10ed:d0d1
db dummy9_1dfa2[32]; // 10ed:d0d2
db dummy9_1dfc2[32]; // 10ed:d0f2
db dummy9_1dfe2;
db dummy9_1dfe3;
db dummy9_1dfe4;
db dummy9_1dfe5; // 10ed:d115
db dummy9_1dfe6; // 10ed:d116
db dummy9_1dfe7; // 10ed:d117
db dummy9_1dfe8; // 10ed:d118
db dummy9_1dfe9; // 10ed:d119
db dummy9_1dfea;
db dummy9_1dfeb; // 10ed:d11b
db dummy9_1dfec;
db dummy9_1dfed;
db dummy9_1dfee; // 10ed:d11e
db dummy9_1dfef; // 10ed:d11f
db dummy9_1dff0; // 10ed:d120
db dummy9_1dff1;
db dummy9_1dff2;
db dummy9_1dff3;
db dummy9_1dff4;
db dummy9_1dff5;
db dummy9_1dff6;
db dummy9_1dff7;
db dummy9_1dff8; // 10ed:d128
db dummy9_1dff9; // 10ed:d129
db dummy9_1dffa; // 10ed:d12a
db dummy9_1dffb; // 10ed:d12b
db dummy9_1dffc; // 10ed:d12c
db dummy9_1dffd;
db dummy9_1dffe;
db unk_2c5df; // 10ed:d12f
db dummy9_1e000[32]; // 10ed:d130
db dummy9_1e020[32]; // 10ed:d150
db dummy9_1e040[32]; // 10ed:d170
db dummy9_1e060[32]; // 10ed:d190
db dummy9_1e080[32]; // 10ed:d1b0
db dummy9_1e0a0[32]; // 10ed:d1d0
db dummy9_1e0c0[32]; // 10ed:d1f0
db dummy9_1e0e0[32]; // 10ed:d210
db dummy9_1e100[32]; // 10ed:d230
db dummy9_1e120[32]; // 10ed:d250
db dummy9_1e140[32]; // 10ed:d270
db dummy9_1e160[32]; // 10ed:d290
db dummy9_1e180[32]; // 10ed:d2b0
db dummy9_1e1a0[32]; // 10ed:d2d0
db dummy9_1e1c0[32]; // 10ed:d2f0
db dummy9_1e1e0[32]; // 10ed:d310
db dummy9_1e200[32]; // 10ed:d330
db dummy9_1e220[32]; // 10ed:d350
db dummy9_1e240[32]; // 10ed:d370
db dummy9_1e260[32]; // 10ed:d390
db dummy9_1e280[32]; // 10ed:d3b0
db dummy9_1e2a0[32]; // 10ed:d3d0
db dummy9_1e2c0[32]; // 10ed:d3f0
db dummy9_1e2e0[32]; // 10ed:d410
db dummy9_1e300[32]; // 10ed:d430
db dummy9_1e320[32]; // 10ed:d450
db dummy9_1e340[32]; // 10ed:d470
db dummy9_1e360[32]; // 10ed:d490
db dummy9_1e380[32]; // 10ed:d4b0
db dummy9_1e3a0[32]; // 10ed:d4d0
db dummy9_1e3c0[32]; // 10ed:d4f0
db dummy9_1e3e0[32]; // 10ed:d510
db dummy9_1e400[32]; // 10ed:d530
db dummy9_1e420[32]; // 10ed:d550
db dummy9_1e440[32]; // 10ed:d570
db dummy9_1e460[32]; // 10ed:d590
db dummy9_1e480[32]; // 10ed:d5b0
db dummy9_1e4a0[32]; // 10ed:d5d0
db dummy9_1e4c0[32]; // 10ed:d5f0
db dummy9_1e4e0[32]; // 10ed:d610
db dummy9_1e500[32]; // 10ed:d630
db dummy9_1e520[32]; // 10ed:d650
db dummy9_1e540[32]; // 10ed:d670
db dummy9_1e560[32]; // 10ed:d690
db dummy9_1e580[32]; // 10ed:d6b0
db dummy9_1e5a0[32]; // 10ed:d6d0
db dummy9_1e5c0[32]; // 10ed:d6f0
db dummy9_1e5e0[32]; // 10ed:d710
db dummy9_1e600[32]; // 10ed:d730
db dummy9_1e620[32]; // 10ed:d750
db dummy9_1e640[32]; // 10ed:d770
db dummy9_1e660[32]; // 10ed:d790
db dummy9_1e680[32]; // 10ed:d7b0
db dummy9_1e6a0[32]; // 10ed:d7d0
db dummy9_1e6c0[32]; // 10ed:d7f0
db dummy9_1e6e0; // 10ed:d810
db dummy9_1e6e1;
db dummy9_1e6e2; // 10ed:d812
db dummy9_1e6e3;
dw word_2ccc4; // 10ed:d814
dw _unk_2ccc6_sav_file_first_word; // 10ed:d816
dw word_2ccc8; // 10ed:d818
dw word_2ccca; // 10ed:d81a
db dummy9_1e6ec[4]; // 10ed:d81c
dw word_2ccd0; // 10ed:d820
db dummy9_1e6f2[2]; // 10ed:d822
dw _unk_2ccd4_bios_timer_count_1; // 10ed:d824
dw _unk_2ccd6_bios_timer_count_2; // 10ed:d826
dw _unk_2ccd8_bios_timer_count_3; // 10ed:d828
db dummy9_1e6fa[2]; // 10ed:d82a
dw word_2ccdc; // 10ed:d82c
dw word_2ccde; // 10ed:d82e
dw word_2cce0; // 10ed:d830
dw word_2cce2; // 10ed:d832
dw word_2cce4; // 10ed:d834
dw word_2cce6; // 10ed:d836
dw word_2cce8; // 10ed:d838
dw word_2ccea; // 10ed:d83a
db dummy9_1e70c;
db dummy9_1e70d;
db dummy9_1e70e;
db dummy9_1e70f;
db dummy9_1e710; // 10ed:d840
db dummy9_1e711; // 10ed:d841
db dummy9_1e712; // 10ed:d842
db dummy9_1e713;
db unk_2ccf4; // 10ed:d844
db dummy9_1e715;
db dummy9_1e716; // 10ed:d846
db dummy9_1e717; // 10ed:d847
db dummy9_1e718;
db dummy9_1e719;
db unk_2ccfa; // 10ed:d84a
db dummy9_1e71b[204];
db unk_2cdc7; // 10ed:d917
db dummy9_1e7e8[372];
dw _word_2cf3c_open_res_info; // 10ed:da8c
db dummy9_1e95e[290];
dd _dword_2d060_sprite_sheet_resource_ptr; // 10ed:dbb0
db byte_2d064; // 10ed:dbb4
db _byte_2d065_hnm_flag_msb; // 10ed:dbb5
dd dword_2d066; // 10ed:dbb6
dw _2d06a_dune_dat_file_handle; // 10ed:dbba
dd _dword_2d06c_dnmaj_func_ptr_2; // 10ed:dbbc
dw word_2d070; // 10ed:dbc0
dw word_2d072; // 10ed:dbc2
dw word_2d074; // 10ed:dbc4
dw word_2d076; // 10ed:dbc6
dw word_2d078; // 10ed:dbc8
db byte_2d07a; // 10ed:dbca
db byte_2d07b; // 10ed:dbcb
db byte_2d07c; // 10ed:dbcc
db _unk_2d07d_midi_func_return_value; // 10ed:dbcd
dw _word_2d07e_midi_func_5_return_bx; // 10ed:dbce
dw _word_2d080_midi_func_5_return_cx; // 10ed:dbd0
dw word_2d082; // 10ed:dbd2
dw word_2d084; // 10ed:dbd4
dw _word_2d086_framebuffer_front; // 10ed:dbd6
dw _word_2d088_screen_buffer; // 10ed:dbd8
dw _word_2d08a_framebuffer_active; // 10ed:dbda
dw _word_2d08c_framebuffer2_ofs; // 10ed:dbdc
dw _word_2d08e_framebuffer2_seg; // 10ed:dbde
db dummy9_1eab0;
db dummy9_1eab1;
db dummy9_1eab2;
db dummy9_1eab3;
dw word_2d094; // 10ed:dbe4
db byte_2d096; // 10ed:dbe6
db _byte_2d097_hnm_finished_flag; // 10ed:dbe7
dw _word_2d098_hnm_frame_counter; // 10ed:dbe8
dw _word_2d09a_hnm_counter_2; // 10ed:dbea
dw word_2d09c; // 10ed:dbec
dw word_2d09e; // 10ed:dbee
db dummy9_1eac0;
db dummy9_1eac1;
db dummy9_1eac2;
db dummy9_1eac3;
db dummy9_1eac4;
db dummy9_1eac5;
dw word_2d0a6; // 10ed:dbf6
dw word_2d0a8; // 10ed:dbf8
dw word_2d0aa; // 10ed:dbfa
dw word_2d0ac; // 10ed:dbfc
dw _word_2d0ae_current_hnm_resource_flag; // 10ed:dbfe
dw _word_2d0b0_hnm_video_id; // 10ed:dc00
dw _word_2d0b2_hnm_active_video_id; // 10ed:dc02
dw _word_2d0b4_hnm_file_offset_lo; // 10ed:dc04
dw _word_2d0b6_hnm_file_offset_hi; // 10ed:dc06
dw _word_2d0b8_hnm_file_remain_lo; // 10ed:dc08
dw _word_2d0ba_hnm_file_remain_hi; // 10ed:dc0a
dd _dword_2d0bc_hnm_file_read_buf_seg; // 10ed:dc0c
dd _dword_2d0c0_hnm_file_read_buf_ofs; // 10ed:dc10
dw _word_2d0c4_video_decode_buf_ofs; // 10ed:dc14
dw _word_2d0c6_video_decode_buf_seg; // 10ed:dc16
dw word_2d0c8; // 10ed:dc18
dw word_2d0ca; // 10ed:dc1a
dw _word_2d0cc_hnm_sd_block_ofs; // 10ed:dc1c
dw _word_2d0ce_hnm_pl_block_ofs; // 10ed:dc1e
dw word_2d0d0; // 10ed:dc20
dw word_2d0d2; // 10ed:dc22
dw _word_2d0d4_video_chunk_tag; // 10ed:dc24
dw _word_2d0d6_pcm_voc_lipsync_data; // 10ed:dc26
dw word_2d0d8; // 10ed:dc28
db byte_2d0da; // 10ed:dc2a
db byte_2d0db; // 10ed:dc2b
dw word_2d0dc; // 10ed:dc2c
dw word_2d0de; // 10ed:dc2e
dw word_2d0e0; // 10ed:dc30
dw _word_2d0e2_framebuffer_back; // 10ed:dc32
dw word_2d0e4; // 10ed:dc34
dw _word_2d0e6_mouse_pos_y; // 10ed:dc36
dw _word_2d0e8_mouse_pos_x; // 10ed:dc38
db _ptr_2d0ea_mouse_clip_region; // 10ed:dc3a
db dummy9_1eb0b;
db dummy9_1eb0c; // 10ed:dc3c
db dummy9_1eb0d; // 10ed:dc3d
db dummy9_1eb0e;
db dummy9_1eb0f;
db dummy9_1eb10; // 10ed:dc40
db dummy9_1eb11;
dw _word_2d0f2_mouse_draw_pos_y; // 10ed:dc42
dw _word_2d0f4_mouse_draw_pos_x; // 10ed:dc44
db _byte_2d0f6_cursor_hide_counter; // 10ed:dc46
db _byte_2d0f7_cursor_unk_q; // 10ed:dc47
dw word_2d0f8; // 10ed:dc48
db byte_2d0fa; // 10ed:dc4a
db byte_2d0fb; // 10ed:dc4b
dw word_2d0fc; // 10ed:dc4c
dw word_2d0fe; // 10ed:dc4e
db dummy9_1eb20;
dw word_2d101; // 10ed:dc51
dw word_2d103; // 10ed:dc53
db unk_2d105; // 10ed:dc55
db dummy9_1eb26;
db dummy9_1eb27;
dw word_2d108; // 10ed:dc58
dw word_2d10a; // 10ed:dc5a
dw word_2d10c; // 10ed:dc5c
dw word_2d10e; // 10ed:dc5e
dw word_2d110; // 10ed:dc60
dw word_2d112; // 10ed:dc62
dw word_2d114; // 10ed:dc64
dw word_2d116; // 10ed:dc66
dw word_2d118; // 10ed:dc68
dw word_2d11a; // 10ed:dc6a
db dummy9_1eb3c[121];
db dummy9_1ebb5; // 10ed:dce5
db _byte_2d196_in_transitionque; // 10ed:dce6
db byte_2d197; // 10ed:dce7
db dummy9_1ebb8; // 10ed:dce8
db dummy9_1ebb9; // 10ed:dce9
db dummy9_1ebba;
db dummy9_1ebbb; // 10ed:dceb
db dummy9_1ebbc;
db dummy9_1ebbd; // 10ed:dced
db dummy9_1ebbe;
db dummy9_1ebbf; // 10ed:dcef
db dummy9_1ebc0;
db byte_2d1a1; // 10ed:dcf1
dw word_2d1a2; // 10ed:dcf2
dw word_2d1a4; // 10ed:dcf4
dw word_2d1a6; // 10ed:dcf6
dw word_2d1a8; // 10ed:dcf8
dw word_2d1aa; // 10ed:dcfa
dw word_2d1ac; // 10ed:dcfc
dd _unk_2d1ae_res_map; // 10ed:dcfe
db byte_2d1b2; // 10ed:dd02
db byte_2d1b3; // 10ed:dd03
db dummy9_1ebd4;
db dummy9_1ebd5;
db unk_2d1b6; // 10ed:dd06
db dummy9_1ebd7;
db dummy9_1ebd8;
db dummy9_1ebd9;
db dummy9_1ebda;
db dummy9_1ebdb;
db dummy9_1ebdc;
db dummy9_1ebdd;
db dummy9_1ebde;
dw word_2d1bf; // 10ed:dd0f
db dummy9_1ebe1;
db dummy9_1ebe2;
db dummy9_1ebe3;
db dummy9_1ebe4;
db dummy9_1ebe5;
db dummy9_1ebe6;
db dummy9_1ebe7;
db dummy9_1ebe8;
db dummy9_1ebe9;
db dummy9_1ebea;
db dummy9_1ebeb;
db dummy9_1ebec;
db _unk_2d1cd_top_of_mem; // 10ed:dd1d
db dummy9_1ebee[25314];
db dummy9_24ed0[32]; // 24ed:0000
db dummy9_24ef0[32]; // 24ed:0020
db dummy9_24f10[32]; // 24ed:0040
db dummy9_24f30[32]; // 24ed:0060
db dummy9_24f50[32]; // 24ed:0080
db dummy9_24f70[32]; // 24ed:00a0
db dummy9_24f90[32]; // 24ed:00c0
db dummy9_24fb0[32]; // 24ed:00e0
db dummy9_24fd0[138];
dw word_3363a; // 24ed:018a
dw word_3363c; // 24ed:018c
dw word_3363e; // 24ed:018e
dw word_33640; // 24ed:0190
dw word_33642; // 24ed:0192
dw word_33644; // 24ed:0194
dw word_33646; // 24ed:0196
dw word_33648; // 24ed:0198
dw word_3364a; // 24ed:019a
db byte_3364c; // 24ed:019c
db unk_3364d; // 24ed:019d
db byte_3364e; // 24ed:019e
dw word_3364f; // 24ed:019f
db byte_33651; // 24ed:01a1
db byte_33652; // 24ed:01a2
dw word_33653; // 24ed:01a3
dw word_33655; // 24ed:01a5
dd dword_33657; // 24ed:01a7
dw word_3365b; // 24ed:01ab
dw word_3365d; // 24ed:01ad
dw word_3365f; // 24ed:01af
dw word_33661; // 24ed:01b1
dw word_33663; // 24ed:01b3
dw word_33665; // 24ed:01b5
dw word_33667; // 24ed:01b7
dw word_33669; // 24ed:01b9
dw word_3366b; // 24ed:01bb
db byte_3366d; // 24ed:01bd
db byte_3366e; // 24ed:01be
db dummy9_2508f[32]; // 24ed:01bf
db dummy9_250af[32]; // 24ed:01df
db dummy9_250cf[32]; // 24ed:01ff
db dummy9_250ef[32]; // 24ed:021f
db dummy9_2510f[32]; // 24ed:023f
db dummy9_2512f[32]; // 24ed:025f
db dummy9_2514f[32]; // 24ed:027f
db dummy9_2516f[32]; // 24ed:029f
db dummy9_2518f[32]; // 24ed:02bf
db dummy9_251af[32]; // 24ed:02df
db dummy9_251cf[32]; // 24ed:02ff
db dummy9_251ef[32]; // 24ed:031f
db dummy9_2520f[32]; // 24ed:033f
db dummy9_2522f[32]; // 24ed:035f
db dummy9_2524f[32]; // 24ed:037f
db dummy9_2526f[32]; // 24ed:039f
db dummy9_2528f[32]; // 24ed:03bf
db dummy9_252af[32]; // 24ed:03df
db dummy9_252cf[32]; // 24ed:03ff
db dummy9_252ef[32]; // 24ed:041f
db dummy9_2530f[32]; // 24ed:043f
db dummy9_2532f[32]; // 24ed:045f
db dummy9_2534f[32]; // 24ed:047f
db dummy9_2536f[32]; // 24ed:049f
db dummy9_2538f[32]; // 24ed:04bf
db dummy9_253af[32]; // 24ed:04df
db dummy9_253cf[32]; // 24ed:04ff
db dummy9_253ef[32]; // 24ed:051f
db dummy9_2540f[32]; // 24ed:053f
db dummy9_2542f[32]; // 24ed:055f
db dummy9_2544f[32]; // 24ed:057f
db dummy9_2546f[32]; // 24ed:059f
db dummy9_2548f[32]; // 24ed:05bf
db dummy9_254af[32]; // 24ed:05df
db dummy9_254cf[32]; // 24ed:05ff
db dummy9_254ef[32]; // 24ed:061f
db dummy9_2550f[32]; // 24ed:063f
db dummy9_2552f[32]; // 24ed:065f
db dummy9_2554f[32]; // 24ed:067f
db dummy9_2556f[32]; // 24ed:069f
db dummy9_2558f[32]; // 24ed:06bf
db dummy9_255af[32]; // 24ed:06df
db dummy9_255cf[32]; // 24ed:06ff
db dummy9_255ef[32]; // 24ed:071f
db dummy9_2560f[32]; // 24ed:073f
db dummy9_2562f[32]; // 24ed:075f
db dummy9_2564f[32]; // 24ed:077f
db dummy9_2566f[32]; // 24ed:079f
db dummy9_2568f[32]; // 24ed:07bf
db dummy9_256af[32]; // 24ed:07df
db dummy9_256cf[32]; // 24ed:07ff
db dummy9_256ef[32]; // 24ed:081f
db dummy9_2570f[32]; // 24ed:083f
db dummy9_2572f[32]; // 24ed:085f
db dummy9_2574f[32]; // 24ed:087f
db dummy9_2576f[32]; // 24ed:089f
db dummy9_2578f[32]; // 24ed:08bf
db dummy9_257af[32]; // 24ed:08df
db dummy9_257cf[32]; // 24ed:08ff
db dummy9_257ef[32]; // 24ed:091f
db dummy9_2580f[32]; // 24ed:093f
db dummy9_2582f; // 24ed:095f
db dummy9_25830; // 24ed:0960
db dummy9_25831; // 24ed:0961
db dummy9_25832; // 24ed:0962
db dummy9_25833; // 24ed:0963
db dummy9_25834; // 24ed:0964
db dummy9_25835; // 24ed:0965
db dummy9_25836; // 24ed:0966
db dummy9_25837[646];
db dummy9_25abd; // 24ed:0bed
db dummy9_25abe[280];
db dummy9_25bd6; // 24ed:0d06
db dummy9_25bd7[14];
db dummy9_25be5; // 24ed:0d15
db dummy9_25be6[67];
dw word_34209; // 24ed:0d59
dw word_3420b; // 24ed:0d5b
db dummy9_25c2d[356];
db dummy9_25d91; // 24ed:0ec1
db byte_34372; // 24ed:0ec2
db dummy9_25d93; // 24ed:0ec3
db dummy9_25d94; // 24ed:0ec4
db dummy9_25d95[46];
db dummy9_25dc3; // 24ed:0ef3
db byte_343a4; // 24ed:0ef4
db dummy9_25dc5; // 24ed:0ef5
db dummy9_25dc6; // 24ed:0ef6
db dummy9_25dc7[457];
dw word_34570; // 24ed:10c0
dw word_34572; // 24ed:10c2
dw word_34574; // 24ed:10c4
db dummy9_25f96[105];
db dummy9_25fff; // 24ed:112f
db dummy9_26000[162];
db dummy9_260a2; // 24ed:11d2
db dummy9_260a3[109];
db dummy9_26110; // 24ed:1240
db dummy9_26111[65];
db dummy9_26152; // 24ed:1282
db dummy9_26153[563];
dw jpt_34964; // 24ed:14b6
dw dummy9_26388; // 24ed:14b6
dw dummy9_2638a; // 24ed:14b6
dw dummy9_2638c; // 24ed:14b6
db dummy9_2638e[730];
db dummy9_26668; // 24ed:1798
db dummy9_26669[1245];
dw word_35126; // 24ed:1c76
dw word_35128; // 24ed:1c78
dw word_3512a; // 24ed:1c7a
dw word_3512c; // 24ed:1c7c
dw word_3512e; // 24ed:1c7e
dw word_35130; // 24ed:1c80
dw word_35132; // 24ed:1c82
dw word_35134; // 24ed:1c84
dw word_35136; // 24ed:1c86
dw word_35138; // 24ed:1c88
dw word_3513a; // 24ed:1c8a
db dummy9_26b5c[266];
db dummy9_26c66; // 24ed:1d96
db dummy9_26c67[683];
db dummy9_26f12; // 24ed:2042
db dummy9_26f13[32];
db dummy9_26f33; // 24ed:2063
db dummy9_26f34[720];
db dummy9_27204; // 24ed:2334
db dummy9_27205; // 24ed:2335
db dummy9_27206; // 24ed:2336
db dummy9_27207; // 24ed:2337
db dummy9_27208; // 24ed:2338
db dummy9_27209; // 24ed:2339
db dummy9_2720a; // 24ed:233a
db dummy9_2720b; // 24ed:233b
db dummy9_2720c; // 24ed:233c
db dummy9_2720d; // 24ed:233d
db dummy9_2720e; // 24ed:233e
db dummy9_2720f; // 24ed:233f
db dummy9_27210; // 24ed:2340
db dummy9_27211; // 24ed:2341
db dummy9_27212; // 24ed:2342
db dummy9_27213; // 24ed:2343
db dummy9_27214; // 24ed:2344
db dummy9_27215; // 24ed:2345
db dummy9_27216[430];
dw word_359a4; // 24ed:24f4
dw word_359a6; // 24ed:24f6
dw word_359a8; // 24ed:24f8
dw word_359aa; // 24ed:24fa
db dummy9_273cc[108];
dw off_35a18; // 24ed:2568
dw dummy9_2743a; // 24ed:256a
dw dummy9_2743c; // 24ed:256c
dw dummy9_2743e; // 24ed:256e
dw dummy9_27440; // 24ed:2570
dw dummy9_27442; // 24ed:2572
dw dummy9_27444; // 24ed:2574
dw dummy9_27446; // 24ed:2576
dw dummy9_27448; // 24ed:2578
dw dummy9_2744a; // 24ed:257a
dw dummy9_2744c; // 24ed:257c
dw dummy9_2744e; // 24ed:257e
dw dummy9_27450; // 24ed:2580
dw dummy9_27452; // 24ed:2582
dw dummy9_27454; // 24ed:2584
dw dummy9_27456; // 24ed:2586
dw dummy9_27458; // 24ed:2588
dw dummy9_2745a; // 24ed:258a
dw dummy9_2745c; // 24ed:258c
dw dummy9_2745e; // 24ed:258e
dw dummy9_27460; // 24ed:2590
dw dummy9_27462; // 24ed:2592
dw dummy9_27464; // 24ed:2594
dw dummy9_27466; // 24ed:2596
dw dummy9_27468; // 24ed:2598
dw dummy9_2746a; // 24ed:259a
dw dummy9_2746c; // 24ed:259c
dw dummy9_2746e; // 24ed:259e
dw dummy9_27470; // 24ed:25a0
dw dummy9_27472; // 24ed:25a2
dw dummy9_27474; // 24ed:25a4
db dummy9_27476[52];
dw word_35a8a; // 24ed:25da
db dummy9_274ac[358];
dw word_35bf2; // 24ed:2742
dw word_35bf4; // 24ed:2744
db dummy9_27616[120];
dw off_35c6e; // 24ed:27be
db dummy9_27690[501];
db byte_35e65; // 24ed:29b5
db dummy9_27886[1185];
db dummy9_27d27[32]; // 24ed:2e57
db dummy9_27d47[32]; // 24ed:2e77
db dummy9_27d67[32]; // 24ed:2e97
db dummy9_27d87[32]; // 24ed:2eb7
db dummy9_27da7; // 24ed:2ed7
db dummy9_27da8; // 24ed:2ed8
db dummy9_27da9; // 24ed:2ed9
db dummy9_27daa; // 24ed:2eda
db dummy9_27dab[205];
db dummy9_27e78;
db dummy9_27e79;
db dummy9_27e7a; // 24ed:2faa
db dummy9_27e7b; // 24ed:2fab
db dummy9_27e7c; // 24ed:2fac
db dummy9_27e7d;
db dummy9_27e7e; // 24ed:2fae
db dummy9_27e7f; // 24ed:2faf
db dummy9_27e80; // 24ed:2fb0
db dummy9_27e81; // 24ed:2fb1
db dummy9_27e82[22];
db dummy9_27e98[32]; // 24ed:2fc8
db dummy9_27eb8; // 24ed:2fe8
db dummy9_27eb9; // 24ed:2fe9
db dummy9_27eba[22];
db dummy9_27ed0[32]; // 24ed:3000
db dummy9_27ef0; // 24ed:3020
db dummy9_27ef1; // 24ed:3021
db dummy9_27ef2[197];
db dummy9_27fb7[32]; // 24ed:30e7
db dummy9_27fd7; // 24ed:3107
db dummy9_27fd8; // 24ed:3108
dw word_365b9; // 24ed:3109
dw word_365bb; // 24ed:310b
dw word_365bd; // 24ed:310d
db dummy9_27fdf[211];
dw off_36692; // 24ed:31e2
dw dummy9_280b4; // 24ed:31e4
dw dummy9_280b6; // 24ed:31e6
dw dummy9_280b8; // 24ed:31e8
dw dummy9_280ba; // 24ed:31ea
dw dummy9_280bc; // 24ed:31ec
dw dummy9_280be; // 24ed:31ee
dw dummy9_280c0; // 24ed:31f0
dw dummy9_280c2; // 24ed:31f2
dw dummy9_280c4; // 24ed:31f4
dw dummy9_280c6; // 24ed:31f6
dw dummy9_280c8; // 24ed:31f8
dw dummy9_280ca; // 24ed:31fa
db dummy9_280cc[656];
db dummy9_2835c[32]; // 24ed:348c
db dummy9_2837c[32]; // 24ed:34ac
db dummy9_2839c[32]; // 24ed:34cc
db dummy9_283bc; // 24ed:34ec
db dummy9_283bd; // 24ed:34ed
db dummy9_283be; // 24ed:34ee
db dummy9_283bf; // 24ed:34ef
db dummy9_283c0; // 24ed:34f0
db dummy9_283c1; // 24ed:34f1
db dummy9_283c2; // 24ed:34f2
db dummy9_283c3; // 24ed:34f3
db dummy9_283c4; // 24ed:34f4
db dummy9_283c5; // 24ed:34f5
db dummy9_283c6; // 24ed:34f6
db dummy9_283c7; // 24ed:34f7
db dummy9_283c8; // 24ed:34f8
db dummy9_283c9; // 24ed:34f9
db dummy9_283ca; // 24ed:34fa
db dummy9_283cb; // 24ed:34fb
db dummy9_283cc; // 24ed:34fc
db dummy9_283cd; // 24ed:34fd
db dummy9_283ce; // 24ed:34fe
db dummy9_283cf; // 24ed:34ff
db dummy9_283d0; // 24ed:3500
dw word_369b1; // 24ed:3501
dw word_369b3; // 24ed:3503
db dummy9_283d5[241];
dw word_36aa6; // 24ed:35f6
dw word_36aa8; // 24ed:35f8
dw word_36aaa; // 24ed:35fa
dw word_36aac; // 24ed:35fc
dw word_36aae; // 24ed:35fe
dw word_36ab0; // 24ed:3600
dw word_36ab2; // 24ed:3602
dw word_36ab4; // 24ed:3604
dw word_36ab6; // 24ed:3606
dw word_36ab8; // 24ed:3608
dw word_36aba; // 24ed:360a
dw word_36abc; // 24ed:360c
db dummy9_284de[702];
dw word_36d7c; // 24ed:38cc
dw word_36d7e; // 24ed:38ce
dw word_36d80; // 24ed:38d0
dw word_36d82; // 24ed:38d2
dw word_36d84; // 24ed:38d4
dw word_36d86; // 24ed:38d6
dw word_36d88; // 24ed:38d8
dw word_36d8a; // 24ed:38da
dw word_36d8c; // 24ed:38dc
dw word_36d8e; // 24ed:38de
dw word_36d90; // 24ed:38e0
db dummy9_287b2;
db dummy9_287b3;
db dummy9_287b4[300];
dw jpt_36edc; // 24ed:3a10
dw dummy9_288e2; // 24ed:3a10
dw dummy9_288e4; // 24ed:3a10
dw dummy9_288e6; // 24ed:3a10
dw dummy9_288e8; // 24ed:3a10
dw dummy9_288ea; // 24ed:3a10
dw dummy9_288ec; // 24ed:3a10
dw dummy9_288ee; // 24ed:3a10
db dummy9_288f0[128144];
db dummy9_47d80[32]; // 47d8:0000
db dummy9_47da0[32]; // 47d8:0020
db dummy9_47dc0[32]; // 47d8:0040
db dummy9_47de0[32]; // 47d8:0060
db dummy9_47e00[32]; // 47d8:0080
db dummy9_47e20[32]; // 47d8:00a0
db dummy9_47e40[32]; // 47d8:00c0
db dummy9_47e60[32]; // 47d8:00e0
db dummy9_47e80[24];
dw word_56478; // 47d8:0118
dw word_5647a; // 47d8:011a
dd dword_5647c; // 47d8:011c
db dummy9_47ea0[355];
db dummy9_48003;
db dummy9_48004;
dw word_565e5; // 47d8:0285
db byte_565e7; // 47d8:0287
db byte_565e8; // 47d8:0288
db byte_565e9; // 47d8:0289
db dummy9_4800a; // 47d8:028a
db dummy9_4800b; // 47d8:028b
db dummy9_4800c; // 47d8:028c
db dummy9_4800d; // 47d8:028d
db byte_565ee; // 47d8:028e
dw word_565ef; // 47d8:028f
db dummy9_48011; // 47d8:0291
db byte_565f2; // 47d8:0292
db dummy9_48013;
db dummy9_48014;
db dummy9_48015; // 47d8:0295
db dummy9_48016; // 47d8:0296
db dummy9_48017; // 47d8:0297
db dummy9_48018;
db dummy9_48019; // 47d8:0299
db dummy9_4801a;
db dummy9_4801b; // 47d8:029b
db dummy9_4801c;
db dummy9_4801d; // 47d8:029d
db dummy9_4801e;
db dummy9_4801f;
dw word_56600; // 47d8:02a0
dw word_56602; // 47d8:02a2
db dummy9_48024; // 47d8:02a4
db dummy9_48025; // 47d8:02a5
db dummy9_48026;
db byte_56607; // 47d8:02a7
db dummy9_48028[32]; // 47d8:02a8
db dummy9_48048; // 47d8:02c8
db dummy9_48049; // 47d8:02c9
db dummy9_4804a; // 47d8:02ca
db dummy9_4804b; // 47d8:02cb
db dummy9_4804c; // 47d8:02cc
db dummy9_4804d; // 47d8:02cd
db dummy9_4804e; // 47d8:02ce
db dummy9_4804f; // 47d8:02cf
db dummy9_48050; // 47d8:02d0
db dummy9_48051; // 47d8:02d1
db dummy9_48052; // 47d8:02d2
db dummy9_48053; // 47d8:02d3
db dummy9_48054; // 47d8:02d4
db dummy9_48055; // 47d8:02d5
db dummy9_48056; // 47d8:02d6
db dummy9_48057; // 47d8:02d7
db dummy9_48058; // 47d8:02d8
db dummy9_48059; // 47d8:02d9
db dummy9_4805a; // 47d8:02da
db dummy9_4805b; // 47d8:02db
db dummy9_4805c; // 47d8:02dc
db dummy9_4805d; // 47d8:02dd
db dummy9_4805e; // 47d8:02de
db dummy9_4805f; // 47d8:02df
dw funcs_56bb2; // 47d8:02e0
dw dummy9_48062; // 47d8:02e0
dw dummy9_48064; // 47d8:02e0
dw dummy9_48066; // 47d8:02e0
dw dummy9_48068; // 47d8:02e0
dw dummy9_4806a; // 47d8:02e0
dw dummy9_4806c; // 47d8:02e0
dw dummy9_4806e; // 47d8:02e0
dw dummy9_48070; // 47d8:02e0
dw dummy9_48072; // 47d8:02e0
dw dummy9_48074; // 47d8:02e0
dw dummy9_48076; // 47d8:02e0
dw dummy9_48078; // 47d8:02e0
dw dummy9_4807a; // 47d8:02e0
db byte_5665c; // 47d8:02fc
db byte_5665d; // 47d8:02fd
db byte_5665e; // 47d8:02fe
db dummy9_4807f[128];
db dummy9_480ff; // 47d8:037f
db dummy9_48100[45];
db dummy9_4812d[32]; // 47d8:03ad
db dummy9_4814d; // 47d8:03cd
db dummy9_4814e; // 47d8:03ce
db dummy9_4814f; // 47d8:03cf
db dummy9_48150; // 47d8:03d0
db dummy9_48151[1473];
db dummy9_48712[32]; // 47d8:0992
db dummy9_48732; // 47d8:09b2
db dummy9_48733; // 47d8:09b3
db dummy9_48734; // 47d8:09b4
db dummy9_48735; // 47d8:09b5
db dummy9_48736; // 47d8:09b6
db dummy9_48737; // 47d8:09b7
db dummy9_48738; // 47d8:09b8
db dummy9_48739; // 47d8:09b9
db dummy9_4873a; // 47d8:09ba
db dummy9_4873b; // 47d8:09bb
db dummy9_4873c; // 47d8:09bc
db dummy9_4873d;
db dummy9_4873e; // 47d8:09be
db dummy9_4873f;
db dummy9_48740; // 47d8:09c0
db dummy9_48741; // 47d8:09c1
db dummy9_48742; // 47d8:09c2
db dummy9_48743[19709];
db dummy9_4d440[14];
db dummy9_4d44e[32]; // 4d44:000e
db dummy9_4d46e[32]; // 4d44:002e
db dummy9_4d48e[32]; // 4d44:004e
db dummy9_4d4ae[32]; // 4d44:006e
db dummy9_4d4ce[32]; // 4d44:008e
db dummy9_4d4ee[32]; // 4d44:00ae
db dummy9_4d50e[32]; // 4d44:00ce
db dummy9_4d52e; // 4d44:00ee
db dummy9_4d52f; // 4d44:00ef
db dummy9_4d530; // 4d44:00f0
db dummy9_4d531; // 4d44:00f1
db dummy9_4d532; // 4d44:00f2
db dummy9_4d533; // 4d44:00f3
db dummy9_4d534; // 4d44:00f4
db dummy9_4d535; // 4d44:00f5
db dummy9_4d536; // 4d44:00f6
db dummy9_4d537; // 4d44:00f7
db dummy9_4d538; // 4d44:00f8
db dummy9_4d539; // 4d44:00f9
db dummy9_4d53a; // 4d44:00fa
db dummy9_4d53b; // 4d44:00fb
db dummy9_4d53c; // 4d44:00fc
db dummy9_4d53d; // 4d44:00fd
db dummy9_4d53e; // 4d44:00fe
db dummy9_4d53f; // 4d44:00ff
db dummy9_4d540[12];
db dummy9_4d54c; // 4d44:010c
db dummy9_4d54d; // 4d44:010d
db dummy9_4d54e;
db dummy9_4d54f[6];
dw word_5bb35; // 4d44:0115
dw word_5bb37; // 4d44:0117
dw word_5bb39; // 4d44:0119
dw word_5bb3b; // 4d44:011b
dw word_5bb3d; // 4d44:011d
dw word_5bb3f; // 4d44:011f
dw word_5bb41; // 4d44:0121
dw word_5bb43; // 4d44:0123
dw word_5bb45; // 4d44:0125
dw word_5bb47; // 4d44:0127
dw dummy9_4d569; // 4d44:0129
dw dummy9_4d56b; // 4d44:012b
dw dummy9_4d56d; // 4d44:012d
dw dummy9_4d56f; // 4d44:012f
dw dummy9_4d571; // 4d44:0131
dw dummy9_4d573; // 4d44:0133
dw dummy9_4d575; // 4d44:0135
dw dummy9_4d577; // 4d44:0137
db byte_5bb59; // 4d44:0139
db byte_5bb5a; // 4d44:013a
dw word_5bb5b; // 4d44:013b
db byte_5bb5d; // 4d44:013d
db byte_5bb5e; // 4d44:013e
db byte_5bb5f; // 4d44:013f
dw word_5bb60; // 4d44:0140
db dummy9_4d582[32]; // 4d44:0142
db dummy9_4d5a2[32]; // 4d44:0162
db dummy9_4d5c2[32]; // 4d44:0182
db dummy9_4d5e2; // 4d44:01a2
db dummy9_4d5e3; // 4d44:01a3
db dummy9_4d5e4; // 4d44:01a4
dw word_5bbc5; // 4d44:01a5
db byte_5bbc7; // 4d44:01a7
db dummy9_4d5e8[158];
db dummy9_4d686;
db dummy9_4d687;
db dummy9_4d688; // 4d44:0248
db dummy9_4d689; // 4d44:0249
db dummy9_4d68a; // 4d44:024a
db dummy9_4d68b; // 4d44:024b
db dummy9_4d68c; // 4d44:024c
db dummy9_4d68d; // 4d44:024d
db dummy9_4d68e;
db dummy9_4d68f;

#ifdef DOSBOX_CUSTOM
    db filll[1024*1024*16];
#endif
                        db stack[STACK_SIZE];
                        db heap[HEAP_SIZE];
                };
}
#pragma pack(pop)

#endif
