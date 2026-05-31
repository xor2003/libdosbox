
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
db dummy9_1a20[168];
db dummy9_1ac8[2]; // 01a2:00a8
db dummy9_1aca;
db dummy9_1acb;
dw dummy9_1acc;
db dummy9_1ace;
db dummy9_1acf;
db dummy9_1ad0[175];
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
db dummy9_3e7f[13356];
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
db dummy9_c6df[5467];
db _byte_1c21a_pal_offset; // 01a2:c21a
db dummy9_dc3b[2679];
dw word_1cc92; // 01a2:cc92
dw _word_1cc94_bltfunc; // 01a2:cc94
db dummy9_e6b6[4881];
dw dummy9_f9c7; // 01a2:dfa7
dw dummy9_f9c9; // 01a2:dfa9
dw dummy9_f9cb; // 01a2:dfab
dw dummy9_f9cd; // 01a2:dfad
dw dummy9_f9cf; // 01a2:dfaf
dw dummy9_f9d1; // 01a2:dfb1
dw dummy9_f9d3; // 01a2:dfb3
dw dummy9_f9d5; // 01a2:dfb5
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
db dummy9_108c0[1552];
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
db byte_1f4be[2]; // 10ed:000e
dw word_1f4c0; // 10ed:0010
dw word_1f4c2; // 10ed:0012
db byte_1f4c4[12]; // 10ed:0014
dw word_1f4d0; // 10ed:0020
db dummy9_10ef2;
db byte_1f4d3; // 10ed:0023
db dummy9_10ef4;
db byte_1f4d5; // 10ed:0025
db byte_1f4d6; // 10ed:0026
db byte_1f4d7; // 10ed:0027
db byte_1f4d8; // 10ed:0028
db byte_1f4d9; // 10ed:0029
db byte_1f4da; // 10ed:002a
db byte_1f4db; // 10ed:002b
dw word_1f4dc; // 10ed:002c
db byte_1f4de; // 10ed:002e
db byte_1f4df; // 10ed:002f
db byte_1f4e0; // 10ed:0030
db byte_1f4e1; // 10ed:0031
dw word_1f4e2; // 10ed:0032
dw word_1f4e4; // 10ed:0034
db byte_1f4e6; // 10ed:0036
db byte_1f4e7; // 10ed:0037
db byte_1f4e8; // 10ed:0038
db byte_1f4e9; // 10ed:0039
db byte_1f4ea; // 10ed:003a
db byte_1f4eb; // 10ed:003b
db byte_1f4ec; // 10ed:003c
db byte_1f4ed; // 10ed:003d
db byte_1f4ee; // 10ed:003e
db byte_1f4ef; // 10ed:003f
db byte_1f4f0; // 10ed:0040
db byte_1f4f1; // 10ed:0041
dw word_1f4f2; // 10ed:0042
dw word_1f4f4; // 10ed:0044
dw word_1f4f6; // 10ed:0046
dw word_1f4f8; // 10ed:0048
dw word_1f4fa; // 10ed:004a
db byte_1f4fc; // 10ed:004c
db byte_1f4fd; // 10ed:004d
dw word_1f4fe; // 10ed:004e
db byte_1f500; // 10ed:0050
db byte_1f501; // 10ed:0051
db byte_1f502; // 10ed:0052
db byte_1f503; // 10ed:0053
db byte_1f504; // 10ed:0054
db dummy9_10f25;
db dummy9_10f26;
db dummy9_10f27;
db dummy9_10f28;
db dummy9_10f29;
db dummy9_10f2a;
db dummy9_10f2b;
dw word_1f50c; // 10ed:005c
dw word_1f50e; // 10ed:005e
db byte_1f510; // 10ed:0060
db byte_1f511; // 10ed:0061
db dummy9_10f32;
db dummy9_10f33;
db dummy9_10f34;
db dummy9_10f35;
db dummy9_10f36;
db dummy9_10f37;
db dummy9_10f38;
db dummy9_10f39;
db dummy9_10f3a;
db dummy9_10f3b;
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
db byte_1f52e; // 10ed:007e
db byte_1f52f; // 10ed:007f
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
db byte_1f540; // 10ed:0090
db byte_1f541; // 10ed:0091
db byte_1f542; // 10ed:0092
db dummy9_10f63;
dw word_1f544; // 10ed:0094
dw word_1f546; // 10ed:0096
dw word_1f548; // 10ed:0098
dw word_1f54a; // 10ed:009a
db byte_1f54c; // 10ed:009c
db byte_1f54d; // 10ed:009d
db dummy9_10f6e;
db byte_1f54f; // 10ed:009f
dw word_1f550; // 10ed:00a0
dw word_1f552; // 10ed:00a2
dw word_1f554; // 10ed:00a4
dw word_1f556; // 10ed:00a6
dw word_1f558; // 10ed:00a8
dw word_1f55a; // 10ed:00aa
dw word_1f55c; // 10ed:00ac
dw word_1f55e; // 10ed:00ae
dw word_1f560; // 10ed:00b0
dw word_1f562; // 10ed:00b2
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
db byte_1f56f; // 10ed:00bf
db dummy9_10f90;
db dummy9_10f91;
db byte_1f572; // 10ed:00c2
db byte_1f573; // 10ed:00c3
db byte_1f574; // 10ed:00c4
db byte_1f575; // 10ed:00c5
db byte_1f576; // 10ed:00c6
db dummy9_10f97;
db byte_1f578; // 10ed:00c8
db res_smug_hsq; // 10ed:00c9
dw word_1f57a; // 10ed:00ca
dw word_1f57c; // 10ed:00cc
db dummy9_10f9e;
db byte_1f57f; // 10ed:00cf
dw word_1f580; // 10ed:00d0
db dummy9_10fa2;
db dummy9_10fa3;
db dummy9_10fa4;
db byte_1f585; // 10ed:00d5
dw word_1f586; // 10ed:00d6
db dummy9_10fa8;
db dummy9_10fa9;
db dummy9_10faa;
db dummy9_10fab;
dw word_1f58c; // 10ed:00dc
db dummy9_10fae;
db dummy9_10faf;
db dummy9_10fb0;
db byte_1f591; // 10ed:00e1
dw word_1f592; // 10ed:00e2
dw word_1f594; // 10ed:00e4
db dummy9_10fb6;
db byte_1f597; // 10ed:00e7
db byte_1f598; // 10ed:00e8
db byte_1f599; // 10ed:00e9
db byte_1f59a; // 10ed:00ea
db byte_1f59b[5]; // 10ed:00eb
db unk_1f5a0; // 10ed:00f0
db res_frm1_hsq_; // 10ed:00f1
dw word_1f5a2; // 10ed:00f2
db byte_1f5a4; // 10ed:00f4
db byte_1f5a5; // 10ed:00f5
db byte_1f5a6; // 10ed:00f6
db byte_1f5a7; // 10ed:00f7
db byte_1f5a8; // 10ed:00f8
db byte_1f5a9; // 10ed:00f9
db byte_1f5aa; // 10ed:00fa
db byte_1f5ab; // 10ed:00fb
db dummy9_10fcc; // 10ed:00fc
db byte_1f5ad; // 10ed:00fd
db byte_1f5ae; // 10ed:00fe
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
db dummy9_11a17; // 10ed:0b47
db dummy9_11a18; // 10ed:0b48
db dummy9_11a19; // 10ed:0b49
db dummy9_11a1a; // 10ed:0b4a
db dummy9_11a1b;
db dummy9_11a1c; // 10ed:0b4c
db dummy9_11a1d; // 10ed:0b4d
db dummy9_11a1e;
db unk_1ffff; // 10ed:0b4f
db dummy9_11a20[32]; // 10ed:0b50
db dummy9_11a40[32]; // 10ed:0b70
db dummy9_11a60[32]; // 10ed:0b90
db dummy9_11a80[32]; // 10ed:0bb0
db dummy9_11aa0[32]; // 10ed:0bd0
db dummy9_11ac0[32]; // 10ed:0bf0
db dummy9_11ae0[32]; // 10ed:0c10
db dummy9_11b00[32]; // 10ed:0c30
db dummy9_11b20[32]; // 10ed:0c50
db dummy9_11b40[32]; // 10ed:0c70
db dummy9_11b60[32]; // 10ed:0c90
db dummy9_11b80[32]; // 10ed:0cb0
db dummy9_11ba0[32]; // 10ed:0cd0
db dummy9_11bc0[32]; // 10ed:0cf0
db dummy9_11be0[32]; // 10ed:0d10
db dummy9_11c00[32]; // 10ed:0d30
db dummy9_11c20[32]; // 10ed:0d50
db dummy9_11c40[32]; // 10ed:0d70
db dummy9_11c60[32]; // 10ed:0d90
db dummy9_11c80[32]; // 10ed:0db0
db dummy9_11ca0[32]; // 10ed:0dd0
db dummy9_11cc0[32]; // 10ed:0df0
db dummy9_11ce0[32]; // 10ed:0e10
db dummy9_11d00[32]; // 10ed:0e30
db dummy9_11d20[32]; // 10ed:0e50
db dummy9_11d40[32]; // 10ed:0e70
db dummy9_11d60[32]; // 10ed:0e90
db dummy9_11d80[32]; // 10ed:0eb0
db dummy9_11da0[32]; // 10ed:0ed0
db dummy9_11dc0[32]; // 10ed:0ef0
db dummy9_11de0[32]; // 10ed:0f10
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
db dummy9_11e89[32]; // 10ed:0fb9
db dummy9_11ea9; // 10ed:0fd9
db dummy9_11eaa; // 10ed:0fda
db dummy9_11eab; // 10ed:0fdb
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
dw dummy9_11eba; // 10ed:0fea
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
dw dummy9_11ec8; // 10ed:0ff8
db dummy9_11eca; // 10ed:0ffa
db dummy9_11ecb; // 10ed:0ffb
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
dw dummy9_11ee8; // 10ed:1018
dw word_204ca; // 10ed:101a
db dummy9_11eec[32]; // 10ed:101c
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
db dummy9_11f1c[32]; // 10ed:104c
db dummy9_11f3c[32]; // 10ed:106c
db dummy9_11f5c; // 10ed:108c
db dummy9_11f5d; // 10ed:108d
db dummy9_11f5e;
db dummy9_11f5f;
db dummy9_11f60;
db dummy9_11f61;
db dummy9_11f62;
db dummy9_11f63;
db dummy9_11f64;
db dummy9_11f65;
db dummy9_11f66; // 10ed:1096
db dummy9_11f67; // 10ed:1097
db dummy9_11f68; // 10ed:1098
db dummy9_11f69; // 10ed:1099
dw word_2054a; // 10ed:109a
db dummy9_11f6c; // 10ed:109c
db dummy9_11f6d; // 10ed:109d
db dummy9_11f6e;
db dummy9_11f6f;
db dummy9_11f70;
db dummy9_11f71;
db dummy9_11f72;
db dummy9_11f73;
db dummy9_11f74;
db dummy9_11f75;
db dummy9_11f76; // 10ed:10a6
db byte_20557; // 10ed:10a7
dw word_20558; // 10ed:10a8
dw word_2055a; // 10ed:10aa
db dummy9_11f7c; // 10ed:10ac
db dummy9_11f7d; // 10ed:10ad
db dummy9_11f7e;
db dummy9_11f7f;
db dummy9_11f80;
db dummy9_11f81;
db dummy9_11f82;
db dummy9_11f83;
db dummy9_11f84;
db dummy9_11f85;
db dummy9_11f86; // 10ed:10b6
db dummy9_11f87;
db dummy9_11f88; // 10ed:10b8
db dummy9_11f89; // 10ed:10b9
dw word_2056a; // 10ed:10ba
db dummy9_11f8c; // 10ed:10bc
db dummy9_11f8d; // 10ed:10bd
db dummy9_11f8e;
db dummy9_11f8f;
db dummy9_11f90;
db dummy9_11f91;
db dummy9_11f92;
db dummy9_11f93;
db dummy9_11f94;
db dummy9_11f95;
db dummy9_11f96; // 10ed:10c6
db dummy9_11f97;
db dummy9_11f98; // 10ed:10c8
db dummy9_11f99; // 10ed:10c9
dw word_2057a; // 10ed:10ca
db dummy9_11f9c[32]; // 10ed:10cc
db dummy9_11fbc[32]; // 10ed:10ec
db dummy9_11fdc[32]; // 10ed:110c
db dummy9_11ffc[32]; // 10ed:112c
db dummy9_1201c; // 10ed:114c
db dummy9_1201d; // 10ed:114d
dw word_205fe; // 10ed:114e
dw word_20600; // 10ed:1150
dw word_20602; // 10ed:1152
dw word_20604; // 10ed:1154
dw word_20606; // 10ed:1156
dw word_20608; // 10ed:1158
db dummy9_1202a[2]; // 10ed:115a
dw word_2060c; // 10ed:115c
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
dw word_20620; // 10ed:1170
dw word_20622; // 10ed:1172
dw word_20624; // 10ed:1174
dw word_20626; // 10ed:1176
db byte_20628; // 10ed:1178
db unk_20629; // 10ed:1179
db dummy9_1204a;
db dummy9_1204b;
db dummy9_1204c;
db dummy9_1204d;
db dummy9_1204e;
db dummy9_1204f;
db dummy9_12050;
db dummy9_12051;
db dummy9_12052;
db dummy9_12053;
db dummy9_12054;
db dummy9_12055;
db dummy9_12056;
db dummy9_12057;
db dummy9_12058;
db dummy9_12059;
db dummy9_1205a;
db dummy9_1205b;
db dummy9_1205c;
db dummy9_1205d;
db dummy9_1205e;
db dummy9_1205f;
db byte_20640; // 10ed:1190
db dummy9_12061[32]; // 10ed:1191
db dummy9_12081;
db dummy9_12082;
db dummy9_12083;
db dummy9_12084;
db dummy9_12085;
db dummy9_12086;
db dummy9_12087;
db dummy9_12088;
db dummy9_12089; // 10ed:11b9
db dummy9_1208a; // 10ed:11ba
db dummy9_1208b;
db byte_2066c; // 10ed:11bc
dw word_2066d; // 10ed:11bd
dw word_2066f; // 10ed:11bf
db dummy9_12091; // 10ed:11c1
db dummy9_12092;
db dummy9_12093; // 10ed:11c3
db dummy9_12094;
dw word_20675; // 10ed:11c5
db byte_20677; // 10ed:11c7
db byte_20678; // 10ed:11c8
db byte_20679; // 10ed:11c9
db byte_2067a; // 10ed:11ca
db byte_2067b; // 10ed:11cb
dw word_2067c; // 10ed:11cc
dw word_2067e; // 10ed:11ce
db dummy9_120a0; // 10ed:11d0
db dummy9_120a1; // 10ed:11d1
db dummy9_120a2; // 10ed:11d2
dw word_20683; // 10ed:11d3
db dummy9_120a5;
db dummy9_120a6;
db dummy9_120a7;
db dummy9_120a8;
db dummy9_120a9;
db dummy9_120aa;
dw word_2068b; // 10ed:11db
db byte_2068d; // 10ed:11dd
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
dw word_2069d; // 10ed:11ed
dw word_2069f; // 10ed:11ef
dw word_206a1; // 10ed:11f1
dw word_206a3; // 10ed:11f3
dw word_206a5; // 10ed:11f5
dw word_206a7; // 10ed:11f7
dw word_206a9; // 10ed:11f9
dw word_206ab; // 10ed:11fb
dw word_206ad; // 10ed:11fd
dw word_206af; // 10ed:11ff
db dummy9_120d1; // 10ed:1201
db dummy9_120d2; // 10ed:1202
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
dw word_206bd; // 10ed:120d
dw word_206bf; // 10ed:120f
dw dummy9_120e1; // 10ed:1211
db dummy9_120e3; // 10ed:1213
db dummy9_120e4; // 10ed:1214
db dummy9_120e5; // 10ed:1215
db dummy9_120e6;
dw dummy9_120e7; // 10ed:1217
db dummy9_120e9; // 10ed:1219
db dummy9_120ea;
db dummy9_120eb; // 10ed:121b
db dummy9_120ec;
dw dummy9_120ed; // 10ed:121d
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
db dummy9_120fe; // 10ed:122e
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
db dummy9_12115; // 10ed:1245
db dummy9_12116; // 10ed:1246
db dummy9_12117; // 10ed:1247
db byte_206f8; // 10ed:1248
db dummy9_12119[32]; // 10ed:1249
db dummy9_12139[32]; // 10ed:1269
db dummy9_12159[32]; // 10ed:1289
db dummy9_12179[32]; // 10ed:12a9
db dummy9_12199[32]; // 10ed:12c9
db dummy9_121b9[32]; // 10ed:12e9
db dummy9_121d9[32]; // 10ed:1309
db dummy9_121f9[32]; // 10ed:1329
db dummy9_12219[32]; // 10ed:1349
db dummy9_12239[32]; // 10ed:1369
db dummy9_12259[32]; // 10ed:1389
db dummy9_12279;
db dummy9_1227a; // 10ed:13aa
db dummy9_1227b; // 10ed:13ab
db dummy9_1227c; // 10ed:13ac
db dummy9_1227d; // 10ed:13ad
db dummy9_1227e; // 10ed:13ae
db dummy9_1227f; // 10ed:13af
db dummy9_12280; // 10ed:13b0
db dummy9_12281;
db dummy9_12282;
db dummy9_12283; // 10ed:13b3
db dummy9_12284; // 10ed:13b4
db dummy9_12285; // 10ed:13b5
db dummy9_12286;
db dummy9_12287; // 10ed:13b7
db dummy9_12288;
db dummy9_12289;
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
db dummy9_12361;
db dummy9_12362; // 10ed:1492
db dummy9_12363;
db dummy9_12364;
db dummy9_12365;
db dummy9_12366; // 10ed:1496
db dummy9_12367; // 10ed:1497
db dummy9_12368; // 10ed:1498
db dummy9_12369;
dw word_2094a; // 10ed:149a
db dummy9_1236c[32]; // 10ed:149c
db dummy9_1238c[32]; // 10ed:14bc
db dummy9_123ac[32]; // 10ed:14dc
db dummy9_123cc[32]; // 10ed:14fc
db dummy9_123ec[32]; // 10ed:151c
db dummy9_1240c[32]; // 10ed:153c
db dummy9_1242c[32]; // 10ed:155c
db dummy9_1244c[32]; // 10ed:157c
db dummy9_1246c[32]; // 10ed:159c
db dummy9_1248c[32]; // 10ed:15bc
db dummy9_124ac[32]; // 10ed:15dc
db dummy9_124cc[32]; // 10ed:15fc
db dummy9_124ec[32]; // 10ed:161c
db dummy9_1250c[32]; // 10ed:163c
db dummy9_1252c; // 10ed:165c
db dummy9_1252d;
db dummy9_1252e; // 10ed:165e
db dummy9_1252f;
db dummy9_12530; // 10ed:1660
db dummy9_12531;
db dummy9_12532; // 10ed:1662
db dummy9_12533; // 10ed:1663
db dummy9_12534; // 10ed:1664
db dummy9_12535;
db dummy9_12536; // 10ed:1666
db dummy9_12537; // 10ed:1667
dw word_20b18; // 10ed:1668
dw word_20b1a; // 10ed:166a
dw word_20b1c; // 10ed:166c
db dummy9_1253e;
db dummy9_1253f;
db dummy9_12540; // 10ed:1670
db byte_20b21; // 10ed:1671
db dummy9_12542[32]; // 10ed:1672
db dummy9_12562[32]; // 10ed:1692
db dummy9_12582; // 10ed:16b2
db dummy9_12583;
db unk_20b64; // 10ed:16b4
db dummy9_12585[32]; // 10ed:16b5
db dummy9_125a5[32]; // 10ed:16d5
db dummy9_125c5[32]; // 10ed:16f5
db dummy9_125e5[32]; // 10ed:1715
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
db dummy9_1279c; // 10ed:18cc
db dummy9_1279d; // 10ed:18cd
db dummy9_1279e; // 10ed:18ce
db dummy9_1279f; // 10ed:18cf
db dummy9_127a0; // 10ed:18d0
db dummy9_127a1; // 10ed:18d1
db dummy9_127a2; // 10ed:18d2
db dummy9_127a3; // 10ed:18d3
db dummy9_127a4; // 10ed:18d4
db dummy9_127a5; // 10ed:18d5
db dummy9_127a6; // 10ed:18d6
db dummy9_127a7; // 10ed:18d7
db dummy9_127a8; // 10ed:18d8
db dummy9_127a9; // 10ed:18d9
db dummy9_127aa; // 10ed:18da
db dummy9_127ab; // 10ed:18db
db dummy9_127ac; // 10ed:18dc
db dummy9_127ad; // 10ed:18dd
db dummy9_127ae; // 10ed:18de
db dummy9_127af;
db dummy9_127b0;
db dummy9_127b1;
db dummy9_127b2;
db dummy9_127b3;
db dummy9_127b4;
db dummy9_127b5;
db dummy9_127b6;
db dummy9_127b7; // 10ed:18e7
db dummy9_127b8; // 10ed:18e8
dw word_20d99; // 10ed:18e9
dw word_20d9b; // 10ed:18eb
db dummy9_127bd; // 10ed:18ed
db dummy9_127be;
dw word_20d9f; // 10ed:18ef
db dummy9_127c1; // 10ed:18f1
db byte_20da2; // 10ed:18f2
dw word_20da3; // 10ed:18f3
dw word_20da5; // 10ed:18f5
db dummy9_127c7[32]; // 10ed:18f7
db dummy9_127e7[32]; // 10ed:1917
db dummy9_12807;
db dummy9_12808; // 10ed:1938
db dummy9_12809;
db dummy9_1280a; // 10ed:193a
db dummy9_1280b; // 10ed:193b
db dummy9_1280c; // 10ed:193c
db dummy9_1280d;
db dummy9_1280e; // 10ed:193e
db dummy9_1280f; // 10ed:193f
dw word_20df0; // 10ed:1940
dw word_20df2; // 10ed:1942
db dummy9_12814; // 10ed:1944
db dummy9_12815; // 10ed:1945
dw word_20df6; // 10ed:1946
dw word_20df8; // 10ed:1948
dw word_20dfa; // 10ed:194a
dw word_20dfc; // 10ed:194c
db dummy9_1281e; // 10ed:194e
db dummy9_1281f;
db dummy9_12820; // 10ed:1950
db dummy9_12821;
db dummy9_12822; // 10ed:1952
db dummy9_12823; // 10ed:1953
dw word_20e04; // 10ed:1954
db dummy9_12826; // 10ed:1956
db dummy9_12827;
db dummy9_12828; // 10ed:1958
db dummy9_12829;
db dummy9_1282a; // 10ed:195a
db dummy9_1282b;
db dummy9_1282c; // 10ed:195c
db dummy9_1282d;
db dummy9_1282e; // 10ed:195e
db dummy9_1282f; // 10ed:195f
db dummy9_12830;
db dummy9_12831;
db dummy9_12832; // 10ed:1962
db dummy9_12833;
db dummy9_12834;
db dummy9_12835;
db dummy9_12836; // 10ed:1966
db dummy9_12837;
db dummy9_12838;
db dummy9_12839;
dw word_20e1a; // 10ed:196a
db byte_20e1c; // 10ed:196c
db dummy9_1283d; // 10ed:196d
db dummy9_1283e; // 10ed:196e
db dummy9_1283f; // 10ed:196f
db dummy9_12840; // 10ed:1970
db dummy9_12841; // 10ed:1971
db dummy9_12842; // 10ed:1972
db dummy9_12843; // 10ed:1973
db dummy9_12844; // 10ed:1974
db dummy9_12845; // 10ed:1975
db dummy9_12846; // 10ed:1976
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
db dummy9_129d0; // 10ed:1b00
db dummy9_129d1; // 10ed:1b01
db dummy9_129d2; // 10ed:1b02
db dummy9_129d3;
db dummy9_129d4; // 10ed:1b04
db dummy9_129d5;
db dummy9_129d6; // 10ed:1b06
db dummy9_129d7; // 10ed:1b07
db dummy9_129d8; // 10ed:1b08
db dummy9_129d9;
db dummy9_129da;
db dummy9_129db;
dw word_20fbc; // 10ed:1b0c
db dummy9_129de[32]; // 10ed:1b0e
db dummy9_129fe; // 10ed:1b2e
db dummy9_129ff;
db dummy9_12a00; // 10ed:1b30
db dummy9_12a01;
db dummy9_12a02; // 10ed:1b32
db dummy9_12a03;
db dummy9_12a04;
db dummy9_12a05;
db dummy9_12a06; // 10ed:1b36
db dummy9_12a07;
db dummy9_12a08; // 10ed:1b38
db dummy9_12a09; // 10ed:1b39
db dummy9_12a0a; // 10ed:1b3a
db dummy9_12a0b; // 10ed:1b3b
db dummy9_12a0c; // 10ed:1b3c
db dummy9_12a0d;
db dummy9_12a0e; // 10ed:1b3e
db dummy9_12a0f; // 10ed:1b3f
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
db dummy9_12ad8; // 10ed:1c08
db dummy9_12ad9; // 10ed:1c09
db dummy9_12ada; // 10ed:1c0a
db dummy9_12adb; // 10ed:1c0b
db dummy9_12adc; // 10ed:1c0c
db dummy9_12add;
db dummy9_12ade; // 10ed:1c0e
db dummy9_12adf;
db dummy9_12ae0; // 10ed:1c10
db dummy9_12ae1;
db dummy9_12ae2; // 10ed:1c12
db dummy9_12ae3;
dw word_210c4; // 10ed:1c14
db dummy9_12ae6; // 10ed:1c16
db dummy9_12ae7;
db dummy9_12ae8; // 10ed:1c18
db dummy9_12ae9; // 10ed:1c19
db dummy9_12aea; // 10ed:1c1a
db dummy9_12aeb;
db dummy9_12aec; // 10ed:1c1c
db dummy9_12aed;
db dummy9_12aee; // 10ed:1c1e
db dummy9_12aef;
db dummy9_12af0; // 10ed:1c20
db dummy9_12af1;
dw word_210d2; // 10ed:1c22
db dummy9_12af4; // 10ed:1c24
db dummy9_12af5;
db dummy9_12af6; // 10ed:1c26
db dummy9_12af7; // 10ed:1c27
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
db dummy9_12b81;
db dummy9_12b82; // 10ed:1cb2
db dummy9_12b83; // 10ed:1cb3
db dummy9_12b84; // 10ed:1cb4
db dummy9_12b85;
db dummy9_12b86; // 10ed:1cb6
db dummy9_12b87;
db dummy9_12b88; // 10ed:1cb8
db dummy9_12b89;
db dummy9_12b8a; // 10ed:1cba
db dummy9_12b8b; // 10ed:1cbb
db dummy9_12b8c; // 10ed:1cbc
db dummy9_12b8d; // 10ed:1cbd
db dummy9_12b8e; // 10ed:1cbe
db dummy9_12b8f;
db dummy9_12b90; // 10ed:1cc0
db dummy9_12b91; // 10ed:1cc1
db dummy9_12b92; // 10ed:1cc2
db dummy9_12b93;
db byte_21174; // 10ed:1cc4
db dummy9_12b95[32]; // 10ed:1cc5
db dummy9_12bb5[32]; // 10ed:1ce5
db dummy9_12bd5;
db dummy9_12bd6; // 10ed:1d06
db dummy9_12bd7; // 10ed:1d07
db dummy9_12bd8; // 10ed:1d08
db dummy9_12bd9;
db dummy9_12bda; // 10ed:1d0a
db dummy9_12bdb; // 10ed:1d0b
db dummy9_12bdc; // 10ed:1d0c
db dummy9_12bdd;
db dummy9_12bde; // 10ed:1d0e
db dummy9_12bdf; // 10ed:1d0f
db dummy9_12be0; // 10ed:1d10
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
db dummy9_12dcb;
db dummy9_12dcc; // 10ed:1efc
db dummy9_12dcd;
db dummy9_12dce; // 10ed:1efe
db dummy9_12dcf;
db dummy9_12dd0; // 10ed:1f00
db dummy9_12dd1;
db dummy9_12dd2; // 10ed:1f02
db dummy9_12dd3;
db dummy9_12dd4; // 10ed:1f04
db dummy9_12dd5;
db dummy9_12dd6; // 10ed:1f06
db dummy9_12dd7;
db dummy9_12dd8; // 10ed:1f08
db dummy9_12dd9;
db dummy9_12dda; // 10ed:1f0a
db dummy9_12ddb;
db dummy9_12ddc; // 10ed:1f0c
db dummy9_12ddd;
db dummy9_12dde; // 10ed:1f0e
db dummy9_12ddf;
db dummy9_12de0;
db byte_213c1; // 10ed:1f11
dw word_213c2; // 10ed:1f12
db dummy9_12de4[32]; // 10ed:1f14
db dummy9_12e04[32]; // 10ed:1f34
db dummy9_12e24[32]; // 10ed:1f54
db dummy9_12e44;
db dummy9_12e45;
db dummy9_12e46;
db dummy9_12e47;
db dummy9_12e48;
db dummy9_12e49;
db dummy9_12e4a; // 10ed:1f7a
db dummy9_12e4b;
db dummy9_12e4c;
db dummy9_12e4d;
db dummy9_12e4e; // 10ed:1f7e
db dummy9_12e4f;
dw dummy9_12e50; // 10ed:1f80
dw dummy9_12e52; // 10ed:1f82
dw dummy9_12e54; // 10ed:1f84
dw dummy9_12e56; // 10ed:1f86
dw dummy9_12e58; // 10ed:1f88
dw dummy9_12e5a; // 10ed:1f8a
dw dummy9_12e5c; // 10ed:1f8c
dw dummy9_12e5e; // 10ed:1f8e
db dummy9_12e60[32]; // 10ed:1f90
db dummy9_12e80[32]; // 10ed:1fb0
db dummy9_12ea0[32]; // 10ed:1fd0
db dummy9_12ec0[32]; // 10ed:1ff0
db dummy9_12ee0[32]; // 10ed:2010
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
dw word_215c0; // 10ed:2110
db dummy9_12fe2; // 10ed:2112
db dummy9_12fe3; // 10ed:2113
db dummy9_12fe4; // 10ed:2114
db byte_215c5; // 10ed:2115
db dummy9_12fe6; // 10ed:2116
db dummy9_12fe7; // 10ed:2117
db dummy9_12fe8; // 10ed:2118
db byte_215c9; // 10ed:2119
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
db dummy9_13053;
db dummy9_13054; // 10ed:2184
db dummy9_13055;
db dummy9_13056; // 10ed:2186
db dummy9_13057; // 10ed:2187
dw word_21638; // 10ed:2188
db dummy9_1305a[32]; // 10ed:218a
db dummy9_1307a[32]; // 10ed:21aa
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
dw dummy9_130ac; // 10ed:21dc
dw dummy9_130ae; // 10ed:21de
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
db byte_216ad; // 10ed:21fd
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
dw word_216d4; // 10ed:2224
db dummy9_130f6; // 10ed:2226
db dummy9_130f7;
db dummy9_130f8; // 10ed:2228
db dummy9_130f9;
db dummy9_130fa; // 10ed:222a
db dummy9_130fb;
dw word_216dc; // 10ed:222c
db dummy9_130fe; // 10ed:222e
db dummy9_130ff;
db dummy9_13100; // 10ed:2230
db dummy9_13101;
db dummy9_13102; // 10ed:2232
db dummy9_13103;
dw word_216e4; // 10ed:2234
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
dw word_216f0; // 10ed:2240
db dummy9_13112; // 10ed:2242
db dummy9_13113;
dw word_216f4; // 10ed:2244
dw word_216f6; // 10ed:2246
db dummy9_13118; // 10ed:2248
db dummy9_13119;
dw word_216fa; // 10ed:224a
db dummy9_1311c; // 10ed:224c
db dummy9_1311d;
db dummy9_1311e;
db dummy9_1311f;
db dummy9_13120; // 10ed:2250
db dummy9_13121; // 10ed:2251
db dummy9_13122; // 10ed:2252
db dummy9_13123;
dw word_21704; // 10ed:2254
dw dummy9_13126; // 10ed:2256
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
db byte_2171d; // 10ed:226d
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
dw word_2172e; // 10ed:227e
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
db dummy9_13337;
db dummy9_13338; // 10ed:2468
db dummy9_13339;
db dummy9_1333a; // 10ed:246a
db dummy9_1333b;
db dummy9_1333c; // 10ed:246c
db dummy9_1333d;
db dummy9_1333e; // 10ed:246e
db dummy9_1333f;
db dummy9_13340; // 10ed:2470
db dummy9_13341;
db dummy9_13342; // 10ed:2472
db dummy9_13343;
db dummy9_13344; // 10ed:2474
db dummy9_13345;
db dummy9_13346; // 10ed:2476
db dummy9_13347;
db dummy9_13348; // 10ed:2478
db dummy9_13349;
db dummy9_1334a; // 10ed:247a
db dummy9_1334b;
db dummy9_1334c; // 10ed:247c
db dummy9_1334d;
db dummy9_1334e; // 10ed:247e
db dummy9_1334f;
db dummy9_13350; // 10ed:2480
db dummy9_13351;
dw word_21932; // 10ed:2482
dw dummy9_13354; // 10ed:2484
dw dummy9_13356; // 10ed:2486
dw dummy9_13358; // 10ed:2488
dw dummy9_1335a; // 10ed:248a
dw dummy9_1335c; // 10ed:248c
dw dummy9_1335e; // 10ed:248e
dw dummy9_13360; // 10ed:2490
db dummy9_13362[32]; // 10ed:2492
db dummy9_13382[32]; // 10ed:24b2
db dummy9_133a2[32]; // 10ed:24d2
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
dw off_21c36; // 10ed:2786
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
db byte_21d3e; // 10ed:288e
db byte_21d3f; // 10ed:288f
db dummy9_13760; // 10ed:2890
db dummy9_13761;
db dummy9_13762; // 10ed:2892
db dummy9_13763;
db dummy9_13764; // 10ed:2894
db dummy9_13765; // 10ed:2895
db byte_21d46; // 10ed:2896
db byte_21d47; // 10ed:2897
db dummy9_13768; // 10ed:2898
db dummy9_13769;
db dummy9_1376a; // 10ed:289a
db dummy9_1376b;
db dummy9_1376c; // 10ed:289c
db dummy9_1376d; // 10ed:289d
db byte_21d4e; // 10ed:289e
db byte_21d4f; // 10ed:289f
db dummy9_13770; // 10ed:28a0
db dummy9_13771;
db dummy9_13772; // 10ed:28a2
db dummy9_13773;
db dummy9_13774; // 10ed:28a4
db dummy9_13775; // 10ed:28a5
db byte_21d56; // 10ed:28a6
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
db dummy9_1378f; // 10ed:28bf
db dummy9_13790;
db dummy9_13791; // 10ed:28c1
db dummy9_13792;
db dummy9_13793; // 10ed:28c3
db dummy9_13794;
db dummy9_13795; // 10ed:28c5
db dummy9_13796;
dw word_21d77; // 10ed:28c7
dw word_21d79; // 10ed:28c9
db dummy9_1379b; // 10ed:28cb
db dummy9_1379c;
db dummy9_1379d; // 10ed:28cd
db dummy9_1379e;
db dummy9_1379f;
db dummy9_137a0; // 10ed:28d0
db dummy9_137a1; // 10ed:28d1
db dummy9_137a2; // 10ed:28d2
db dummy9_137a3; // 10ed:28d3
db dummy9_137a4; // 10ed:28d4
db dummy9_137a5; // 10ed:28d5
db dummy9_137a6; // 10ed:28d6
db dummy9_137a7; // 10ed:28d7
db dummy9_137a8; // 10ed:28d8
db dummy9_137a9; // 10ed:28d9
db dummy9_137aa; // 10ed:28da
db dummy9_137ab; // 10ed:28db
db dummy9_137ac;
db dummy9_137ad; // 10ed:28dd
db dummy9_137ae; // 10ed:28de
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
dw word_22e5d; // 10ed:39ad
dw word_22e5f; // 10ed:39af
dw word_22e61; // 10ed:39b1
dw _word_22e63_cmd_arg_midi; // 10ed:39b3
dw _word_22e65_cmd_arg_audio; // 10ed:39b5
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
db byte_23b8e; // 10ed:46de
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
dw word_23b9f; // 10ed:46ef
dw word_23ba1; // 10ed:46f1
db byte_23ba3; // 10ed:46f3
db byte_23ba4; // 10ed:46f4
db byte_23ba5; // 10ed:46f5
db byte_23ba6; // 10ed:46f6
db byte_23ba7; // 10ed:46f7
dw word_23ba8; // 10ed:46f8
dw word_23baa; // 10ed:46fa
dw word_23bac; // 10ed:46fc
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
dw word_23bbc; // 10ed:470c
dw word_23bbe; // 10ed:470e
dw word_23bc0; // 10ed:4710
dw word_23bc2; // 10ed:4712
db dummy9_155e4;
db dummy9_155e5;
db dummy9_155e6;
db dummy9_155e7;
dw word_23bc8; // 10ed:4718
dw word_23bca; // 10ed:471a
dw word_23bcc; // 10ed:471c
db dummy9_155ee;
db dummy9_155ef;
dw word_23bd0; // 10ed:4720
db byte_23bd2; // 10ed:4722
db byte_23bd3; // 10ed:4723
db dummy9_155f4;
db dummy9_155f5;
db byte_23bd6; // 10ed:4726
db byte_23bd7; // 10ed:4727
db byte_23bd8; // 10ed:4728
dw word_23bd9; // 10ed:4729
dw word_23bdb; // 10ed:472b
dw word_23bdd; // 10ed:472d
dw word_23bdf; // 10ed:472f
db byte_23be1; // 10ed:4731
db byte_23be2; // 10ed:4732
dw word_23be3; // 10ed:4733
db byte_23be5; // 10ed:4735
db dummy9_15606;
db byte_23be7; // 10ed:4737
db byte_23be8; // 10ed:4738
db byte_23be9; // 10ed:4739
db byte_23bea; // 10ed:473a
db byte_23beb; // 10ed:473b
dw word_23bec; // 10ed:473c
db byte_23bee; // 10ed:473e
dd dword_23bef; // 10ed:473f
dw word_23bf3; // 10ed:4743
dw word_23bf5; // 10ed:4745
dw word_23bf7; // 10ed:4747
dw word_23bf9; // 10ed:4749
dw word_23bfb; // 10ed:474b
db dummy9_1561d;
db dummy9_1561e;
dw word_23bff; // 10ed:474f
db byte_23c01; // 10ed:4751
dw word_23c02; // 10ed:4752
db dummy9_15624;
db dummy9_15625;
dw word_23c06; // 10ed:4756
dw word_23c08; // 10ed:4758
db dummy9_1562a;
db dummy9_1562b;
db dummy9_1562c;
db dummy9_1562d;
db dummy9_1562e;
db dummy9_1562f;
db dummy9_15630;
db dummy9_15631;
db dummy9_15632;
db dummy9_15633;
db dummy9_15634;
db dummy9_15635;
db dummy9_15636;
db dummy9_15637;
dw word_23c18; // 10ed:4768
db byte_23c1a; // 10ed:476a
db byte_23c1b; // 10ed:476b
db byte_23c1c; // 10ed:476c
db byte_23c1d; // 10ed:476d
dw word_23c1e; // 10ed:476e
dw word_23c20; // 10ed:4770
dw word_23c22; // 10ed:4772
db byte_23c24; // 10ed:4774
db byte_23c25; // 10ed:4775
dw word_23c26; // 10ed:4776
dw word_23c28; // 10ed:4778
dw word_23c2a; // 10ed:477a
dw word_23c2c; // 10ed:477c
db byte_23c2e; // 10ed:477e
db byte_23c2f; // 10ed:477f
dw word_23c30; // 10ed:4780
dw word_23c32; // 10ed:4782
dw word_23c34; // 10ed:4784
dw word_23c36; // 10ed:4786
dw word_23c38; // 10ed:4788
dw word_23c3a; // 10ed:478a
db byte_23c3c; // 10ed:478c
dw word_23c3d; // 10ed:478d
dw word_23c3f; // 10ed:478f
dw word_23c41; // 10ed:4791
dw word_23c43; // 10ed:4793
dw word_23c45; // 10ed:4795
dw word_23c47; // 10ed:4797
db byte_23c49; // 10ed:4799
dw word_23c4a; // 10ed:479a
dw word_23c4c; // 10ed:479c
dw word_23c4e; // 10ed:479e
dw word_23c50; // 10ed:47a0
db byte_23c52[2]; // 10ed:47a2
db byte_23c54; // 10ed:47a4
db byte_23c55; // 10ed:47a5
db byte_23c56; // 10ed:47a6
db byte_23c57; // 10ed:47a7
db byte_23c58; // 10ed:47a8
db byte_23c59; // 10ed:47a9
dw word_23c5a; // 10ed:47aa
dd dword_23c5c; // 10ed:47ac
dd dword_23c60; // 10ed:47b0
dw word_23c64; // 10ed:47b4
dd dword_23c66; // 10ed:47b6
dw word_23c6a; // 10ed:47ba
dw word_23c6c; // 10ed:47bc
dw word_23c6e; // 10ed:47be
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
db byte_23c8d; // 10ed:47dd
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
dw dummy9_15738;
dw word_23d1a; // 10ed:486a
dw dummy9_1573c;
dw word_23d1e; // 10ed:486e
dw word_23d20; // 10ed:4870
dw word_23d22; // 10ed:4872
dw word_23d24; // 10ed:4874
dw word_23d26; // 10ed:4876
dw word_23d28; // 10ed:4878
dw dummy9_1574a;
dw dummy9_1574c;
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
db dummy9_15b33;
db dummy9_15b34;
db dummy9_15b35;
db dummy9_15b36;
db dummy9_15b37; // 10ed:4c67
db dummy9_15b38; // 10ed:4c68
db dummy9_15b39; // 10ed:4c69
db dummy9_15b3a;
db dummy9_15b3b;
db dummy9_15b3c;
db dummy9_15b3d;
db dummy9_15b3e;
db unk_2411f; // 10ed:4c6f
db dummy9_15b40[32]; // 10ed:4c70
db dummy9_15b60[32]; // 10ed:4c90
db dummy9_15b80[32]; // 10ed:4cb0
db dummy9_15ba0[32]; // 10ed:4cd0
db dummy9_15bc0[32]; // 10ed:4cf0
db dummy9_15be0[32]; // 10ed:4d10
db dummy9_15c00[32]; // 10ed:4d30
db dummy9_15c20[32]; // 10ed:4d50
db dummy9_15c40[32]; // 10ed:4d70
db dummy9_15c60[32]; // 10ed:4d90
db dummy9_15c80[32]; // 10ed:4db0
db dummy9_15ca0[32]; // 10ed:4dd0
db dummy9_15cc0[32]; // 10ed:4df0
db dummy9_15ce0;
db dummy9_15ce1; // 10ed:4e11
db dummy9_15ce2; // 10ed:4e12
db dummy9_15ce3; // 10ed:4e13
db dummy9_15ce4; // 10ed:4e14
db dummy9_15ce5; // 10ed:4e15
db dummy9_15ce6; // 10ed:4e16
db dummy9_15ce7; // 10ed:4e17
db dummy9_15ce8; // 10ed:4e18
db dummy9_15ce9; // 10ed:4e19
db dummy9_15cea; // 10ed:4e1a
db dummy9_15ceb; // 10ed:4e1b
db dummy9_15cec; // 10ed:4e1c
db dummy9_15ced; // 10ed:4e1d
db dummy9_15cee; // 10ed:4e1e
db dummy9_15cef;
db unk_242d0; // 10ed:4e20
db dummy9_15cf1[32]; // 10ed:4e21
db dummy9_15d11[32]; // 10ed:4e41
db dummy9_15d31[32]; // 10ed:4e61
db dummy9_15d51[32]; // 10ed:4e81
db dummy9_15d71[32]; // 10ed:4ea1
db dummy9_15d91[32]; // 10ed:4ec1
db dummy9_15db1[32]; // 10ed:4ee1
db dummy9_15dd1[32]; // 10ed:4f01
db dummy9_15df1[32]; // 10ed:4f21
db dummy9_15e11[32]; // 10ed:4f41
db dummy9_15e31[32]; // 10ed:4f61
db dummy9_15e51[32]; // 10ed:4f81
db dummy9_15e71[32]; // 10ed:4fa1
db dummy9_15e91[32]; // 10ed:4fc1
db dummy9_15eb1[32]; // 10ed:4fe1
db dummy9_15ed1[32]; // 10ed:5001
db dummy9_15ef1[32]; // 10ed:5021
db dummy9_15f11[32]; // 10ed:5041
db dummy9_15f31[32]; // 10ed:5061
db dummy9_15f51[32]; // 10ed:5081
db dummy9_15f71[32]; // 10ed:50a1
db dummy9_15f91[32]; // 10ed:50c1
db dummy9_15fb1[32]; // 10ed:50e1
db dummy9_15fd1[32]; // 10ed:5101
db dummy9_15ff1[32]; // 10ed:5121
db dummy9_16011[32]; // 10ed:5141
db dummy9_16031[32]; // 10ed:5161
db dummy9_16051[32]; // 10ed:5181
db dummy9_16071[32]; // 10ed:51a1
db dummy9_16091[32]; // 10ed:51c1
db dummy9_160b1[32]; // 10ed:51e1
db dummy9_160d1[32]; // 10ed:5201
db dummy9_160f1[32]; // 10ed:5221
db dummy9_16111[32]; // 10ed:5241
db dummy9_16131[32]; // 10ed:5261
db dummy9_16151[32]; // 10ed:5281
db dummy9_16171[32]; // 10ed:52a1
db dummy9_16191[32]; // 10ed:52c1
db dummy9_161b1[32]; // 10ed:52e1
db dummy9_161d1[32]; // 10ed:5301
db dummy9_161f1[32]; // 10ed:5321
db dummy9_16211[32]; // 10ed:5341
db dummy9_16231[32]; // 10ed:5361
db dummy9_16251[32]; // 10ed:5381
db dummy9_16271[32]; // 10ed:53a1
db dummy9_16291[32]; // 10ed:53c1
db dummy9_162b1[32]; // 10ed:53e1
db dummy9_162d1[32]; // 10ed:5401
db dummy9_162f1[32]; // 10ed:5421
db dummy9_16311[32]; // 10ed:5441
db dummy9_16331[32]; // 10ed:5461
db dummy9_16351[32]; // 10ed:5481
db dummy9_16371[32]; // 10ed:54a1
db dummy9_16391[32]; // 10ed:54c1
db dummy9_163b1[32]; // 10ed:54e1
db dummy9_163d1[32]; // 10ed:5501
db dummy9_163f1[32]; // 10ed:5521
db dummy9_16411[32]; // 10ed:5541
db dummy9_16431[32]; // 10ed:5561
db dummy9_16451[32]; // 10ed:5581
db dummy9_16471[32]; // 10ed:55a1
db dummy9_16491[32]; // 10ed:55c1
db dummy9_164b1[32]; // 10ed:55e1
db dummy9_164d1[32]; // 10ed:5601
db dummy9_164f1[32]; // 10ed:5621
db dummy9_16511[32]; // 10ed:5641
db dummy9_16531[32]; // 10ed:5661
db dummy9_16551[32]; // 10ed:5681
db dummy9_16571[32]; // 10ed:56a1
db dummy9_16591[32]; // 10ed:56c1
db dummy9_165b1[32]; // 10ed:56e1
db dummy9_165d1[32]; // 10ed:5701
db dummy9_165f1[32]; // 10ed:5721
db dummy9_16611[32]; // 10ed:5741
db dummy9_16631; // 10ed:5761
db dummy9_16632; // 10ed:5762
db dummy9_16633; // 10ed:5763
db dummy9_16634; // 10ed:5764
db dummy9_16635; // 10ed:5765
db dummy9_16636; // 10ed:5766
db dummy9_16637; // 10ed:5767
db dummy9_16638; // 10ed:5768
db dummy9_16639; // 10ed:5769
db dummy9_1663a; // 10ed:576a
db dummy9_1663b; // 10ed:576b
db dummy9_1663c; // 10ed:576c
db dummy9_1663d; // 10ed:576d
db dummy9_1663e; // 10ed:576e
db dummy9_1663f; // 10ed:576f
db dummy9_16640; // 10ed:5770
db dummy9_16641; // 10ed:5771
db dummy9_16642; // 10ed:5772
db dummy9_16643; // 10ed:5773
db dummy9_16644; // 10ed:5774
db dummy9_16645; // 10ed:5775
db dummy9_16646; // 10ed:5776
db dummy9_16647;
db dummy9_16648; // 10ed:5778
db unk_24c29; // 10ed:5779
db dummy9_1664a; // 10ed:577a
db dummy9_1664b; // 10ed:577b
db dummy9_1664c; // 10ed:577c
db dummy9_1664d; // 10ed:577d
db dummy9_1664e; // 10ed:577e
db dummy9_1664f; // 10ed:577f
db dummy9_16650; // 10ed:5780
db dummy9_16651; // 10ed:5781
db dummy9_16652; // 10ed:5782
db dummy9_16653; // 10ed:5783
db dummy9_16654; // 10ed:5784
dd dummy9_16655; // 10ed:5785
db dummy9_16659[32]; // 10ed:5789
db dummy9_16679[32]; // 10ed:57a9
db dummy9_16699[32]; // 10ed:57c9
db dummy9_166b9[32]; // 10ed:57e9
db dummy9_166d9[32]; // 10ed:5809
db dummy9_166f9[32]; // 10ed:5829
db dummy9_16719; // 10ed:5849
db dummy9_1671a; // 10ed:584a
db dummy9_1671b; // 10ed:584b
db dummy9_1671c; // 10ed:584c
db dummy9_1671d; // 10ed:584d
db dummy9_1671e; // 10ed:584e
db dummy9_1671f; // 10ed:584f
db dummy9_16720; // 10ed:5850
db dummy9_16721; // 10ed:5851
db dummy9_16722; // 10ed:5852
db dummy9_16723; // 10ed:5853
db dummy9_16724; // 10ed:5854
db dummy9_16725; // 10ed:5855
db dummy9_16726; // 10ed:5856
db dummy9_16727; // 10ed:5857
db dummy9_16728; // 10ed:5858
db dummy9_16729; // 10ed:5859
db dummy9_1672a; // 10ed:585a
db dummy9_1672b; // 10ed:585b
db dummy9_1672c; // 10ed:585c
db dummy9_1672d; // 10ed:585d
db dummy9_1672e; // 10ed:585e
db dummy9_1672f; // 10ed:585f
db dummy9_16730; // 10ed:5860
dd dummy9_16731; // 10ed:5861
db dummy9_16735[32]; // 10ed:5865
db dummy9_16755[32]; // 10ed:5885
db dummy9_16775[32]; // 10ed:58a5
db dummy9_16795[32]; // 10ed:58c5
db dummy9_167b5[32]; // 10ed:58e5
db dummy9_167d5[32]; // 10ed:5905
db dummy9_167f5; // 10ed:5925
db dummy9_167f6; // 10ed:5926
db dummy9_167f7; // 10ed:5927
db dummy9_167f8; // 10ed:5928
db dummy9_167f9; // 10ed:5929
db dummy9_167fa; // 10ed:592a
db dummy9_167fb; // 10ed:592b
db dummy9_167fc;
db dummy9_167fd; // 10ed:592d
db dummy9_167fe; // 10ed:592e
db dummy9_167ff; // 10ed:592f
db dummy9_16800; // 10ed:5930
db dummy9_16801; // 10ed:5931
db dummy9_16802; // 10ed:5932
db dummy9_16803; // 10ed:5933
db dummy9_16804; // 10ed:5934
db dummy9_16805;
db dummy9_16806; // 10ed:5936
db dummy9_16807; // 10ed:5937
db dummy9_16808; // 10ed:5938
db dummy9_16809; // 10ed:5939
db unk_24dea; // 10ed:593a
db dummy9_1680b[32]; // 10ed:593b
db dummy9_1682b; // 10ed:595b
db dummy9_1682c; // 10ed:595c
db dummy9_1682d; // 10ed:595d
db dummy9_1682e; // 10ed:595e
db dummy9_1682f; // 10ed:595f
db unk_24e10; // 10ed:5960
db dummy9_16831[32]; // 10ed:5961
db dummy9_16851[32]; // 10ed:5981
db dummy9_16871[32]; // 10ed:59a1
db dummy9_16891[32]; // 10ed:59c1
db dummy9_168b1[32]; // 10ed:59e1
db dummy9_168d1[32]; // 10ed:5a01
db dummy9_168f1[32]; // 10ed:5a21
db dummy9_16911[32]; // 10ed:5a41
db dummy9_16931[32]; // 10ed:5a61
db dummy9_16951[32]; // 10ed:5a81
db dummy9_16971[32]; // 10ed:5aa1
db dummy9_16991[32]; // 10ed:5ac1
db dummy9_169b1[32]; // 10ed:5ae1
db dummy9_169d1[32]; // 10ed:5b01
db dummy9_169f1[32]; // 10ed:5b21
db dummy9_16a11[32]; // 10ed:5b41
db dummy9_16a31[32]; // 10ed:5b61
db dummy9_16a51[32]; // 10ed:5b81
db dummy9_16a71[32]; // 10ed:5ba1
db dummy9_16a91[32]; // 10ed:5bc1
db dummy9_16ab1[32]; // 10ed:5be1
db dummy9_16ad1[32]; // 10ed:5c01
db dummy9_16af1[32]; // 10ed:5c21
db dummy9_16b11[32]; // 10ed:5c41
db dummy9_16b31[32]; // 10ed:5c61
db dummy9_16b51[32]; // 10ed:5c81
db dummy9_16b71[32]; // 10ed:5ca1
db dummy9_16b91[32]; // 10ed:5cc1
db dummy9_16bb1[32]; // 10ed:5ce1
db dummy9_16bd1[32]; // 10ed:5d01
db dummy9_16bf1[32]; // 10ed:5d21
db dummy9_16c11[32]; // 10ed:5d41
db dummy9_16c31[32]; // 10ed:5d61
db dummy9_16c51[32]; // 10ed:5d81
db dummy9_16c71[32]; // 10ed:5da1
db dummy9_16c91[32]; // 10ed:5dc1
db dummy9_16cb1[32]; // 10ed:5de1
db dummy9_16cd1[32]; // 10ed:5e01
db dummy9_16cf1[32]; // 10ed:5e21
db dummy9_16d11[32]; // 10ed:5e41
db dummy9_16d31[32]; // 10ed:5e61
db dummy9_16d51[32]; // 10ed:5e81
db dummy9_16d71[32]; // 10ed:5ea1
db dummy9_16d91[32]; // 10ed:5ec1
db dummy9_16db1[32]; // 10ed:5ee1
db dummy9_16dd1[32]; // 10ed:5f01
db dummy9_16df1[32]; // 10ed:5f21
db dummy9_16e11[32]; // 10ed:5f41
db dummy9_16e31[32]; // 10ed:5f61
db dummy9_16e51[32]; // 10ed:5f81
db dummy9_16e71[32]; // 10ed:5fa1
db dummy9_16e91[32]; // 10ed:5fc1
db dummy9_16eb1[32]; // 10ed:5fe1
db dummy9_16ed1[32]; // 10ed:6001
db dummy9_16ef1[32]; // 10ed:6021
db dummy9_16f11[32]; // 10ed:6041
db dummy9_16f31[32]; // 10ed:6061
db dummy9_16f51[32]; // 10ed:6081
db dummy9_16f71[32]; // 10ed:60a1
db dummy9_16f91[32]; // 10ed:60c1
db dummy9_16fb1[32]; // 10ed:60e1
db dummy9_16fd1[32]; // 10ed:6101
db dummy9_16ff1[32]; // 10ed:6121
db dummy9_17011[32]; // 10ed:6141
db dummy9_17031[32]; // 10ed:6161
db dummy9_17051[32]; // 10ed:6181
db dummy9_17071[32]; // 10ed:61a1
db dummy9_17091[32]; // 10ed:61c1
db dummy9_170b1[32]; // 10ed:61e1
db dummy9_170d1[32]; // 10ed:6201
db dummy9_170f1[32]; // 10ed:6221
db dummy9_17111[32]; // 10ed:6241
db dummy9_17131[32]; // 10ed:6261
db dummy9_17151[32]; // 10ed:6281
db dummy9_17171[32]; // 10ed:62a1
db dummy9_17191[32]; // 10ed:62c1
db dummy9_171b1[32]; // 10ed:62e1
db dummy9_171d1[32]; // 10ed:6301
db dummy9_171f1[32]; // 10ed:6321
db dummy9_17211[32]; // 10ed:6341
db dummy9_17231[32]; // 10ed:6361
db dummy9_17251[32]; // 10ed:6381
db dummy9_17271[32]; // 10ed:63a1
db dummy9_17291[32]; // 10ed:63c1
db dummy9_172b1[32]; // 10ed:63e1
db dummy9_172d1[32]; // 10ed:6401
db dummy9_172f1[32]; // 10ed:6421
db dummy9_17311[32]; // 10ed:6441
db dummy9_17331[32]; // 10ed:6461
db dummy9_17351[32]; // 10ed:6481
db dummy9_17371[32]; // 10ed:64a1
db dummy9_17391[32]; // 10ed:64c1
db dummy9_173b1[32]; // 10ed:64e1
db dummy9_173d1[32]; // 10ed:6501
db dummy9_173f1[32]; // 10ed:6521
db dummy9_17411[32]; // 10ed:6541
db dummy9_17431[32]; // 10ed:6561
db dummy9_17451[32]; // 10ed:6581
db dummy9_17471[32]; // 10ed:65a1
db dummy9_17491[32]; // 10ed:65c1
db dummy9_174b1[32]; // 10ed:65e1
db dummy9_174d1[32]; // 10ed:6601
db dummy9_174f1[32]; // 10ed:6621
db dummy9_17511[32]; // 10ed:6641
db dummy9_17531[32]; // 10ed:6661
db dummy9_17551[32]; // 10ed:6681
db dummy9_17571[32]; // 10ed:66a1
db dummy9_17591[32]; // 10ed:66c1
db dummy9_175b1[32]; // 10ed:66e1
db dummy9_175d1[32]; // 10ed:6701
db dummy9_175f1[32]; // 10ed:6721
db dummy9_17611[32]; // 10ed:6741
db dummy9_17631[32]; // 10ed:6761
db dummy9_17651[32]; // 10ed:6781
db dummy9_17671[32]; // 10ed:67a1
db dummy9_17691[32]; // 10ed:67c1
db dummy9_176b1[32]; // 10ed:67e1
db dummy9_176d1[32]; // 10ed:6801
db dummy9_176f1[32]; // 10ed:6821
db dummy9_17711[32]; // 10ed:6841
db dummy9_17731[32]; // 10ed:6861
db dummy9_17751[32]; // 10ed:6881
db dummy9_17771[32]; // 10ed:68a1
db dummy9_17791[32]; // 10ed:68c1
db dummy9_177b1[32]; // 10ed:68e1
db dummy9_177d1[32]; // 10ed:6901
db dummy9_177f1[32]; // 10ed:6921
db dummy9_17811[32]; // 10ed:6941
db dummy9_17831[32]; // 10ed:6961
db dummy9_17851[32]; // 10ed:6981
db dummy9_17871[32]; // 10ed:69a1
db dummy9_17891[32]; // 10ed:69c1
db dummy9_178b1[32]; // 10ed:69e1
db dummy9_178d1[32]; // 10ed:6a01
db dummy9_178f1[32]; // 10ed:6a21
db dummy9_17911[32]; // 10ed:6a41
db dummy9_17931[32]; // 10ed:6a61
db dummy9_17951[32]; // 10ed:6a81
db dummy9_17971[32]; // 10ed:6aa1
db dummy9_17991[32]; // 10ed:6ac1
db dummy9_179b1[32]; // 10ed:6ae1
db dummy9_179d1[32]; // 10ed:6b01
db dummy9_179f1[32]; // 10ed:6b21
db dummy9_17a11[32]; // 10ed:6b41
db dummy9_17a31[32]; // 10ed:6b61
db dummy9_17a51[32]; // 10ed:6b81
db dummy9_17a71[32]; // 10ed:6ba1
db dummy9_17a91[32]; // 10ed:6bc1
db dummy9_17ab1[32]; // 10ed:6be1
db dummy9_17ad1[32]; // 10ed:6c01
db dummy9_17af1[32]; // 10ed:6c21
db dummy9_17b11[32]; // 10ed:6c41
db dummy9_17b31[32]; // 10ed:6c61
db dummy9_17b51[32]; // 10ed:6c81
db dummy9_17b71[32]; // 10ed:6ca1
db dummy9_17b91[32]; // 10ed:6cc1
db dummy9_17bb1[32]; // 10ed:6ce1
db dummy9_17bd1[32]; // 10ed:6d01
db dummy9_17bf1[32]; // 10ed:6d21
db dummy9_17c11[32]; // 10ed:6d41
db dummy9_17c31[32]; // 10ed:6d61
db dummy9_17c51[32]; // 10ed:6d81
db dummy9_17c71[32]; // 10ed:6da1
db dummy9_17c91[32]; // 10ed:6dc1
db dummy9_17cb1[32]; // 10ed:6de1
db dummy9_17cd1[32]; // 10ed:6e01
db dummy9_17cf1[32]; // 10ed:6e21
db dummy9_17d11[32]; // 10ed:6e41
db dummy9_17d31[32]; // 10ed:6e61
db dummy9_17d51[32]; // 10ed:6e81
db dummy9_17d71[32]; // 10ed:6ea1
db dummy9_17d91[32]; // 10ed:6ec1
db dummy9_17db1[32]; // 10ed:6ee1
db dummy9_17dd1[32]; // 10ed:6f01
db dummy9_17df1[32]; // 10ed:6f21
db dummy9_17e11[32]; // 10ed:6f41
db dummy9_17e31[32]; // 10ed:6f61
db dummy9_17e51[32]; // 10ed:6f81
db dummy9_17e71[32]; // 10ed:6fa1
db dummy9_17e91[32]; // 10ed:6fc1
db dummy9_17eb1[32]; // 10ed:6fe1
db dummy9_17ed1[32]; // 10ed:7001
db dummy9_17ef1[32]; // 10ed:7021
db dummy9_17f11[32]; // 10ed:7041
db dummy9_17f31[32]; // 10ed:7061
db dummy9_17f51[32]; // 10ed:7081
db dummy9_17f71[32]; // 10ed:70a1
db dummy9_17f91[32]; // 10ed:70c1
db dummy9_17fb1[32]; // 10ed:70e1
db dummy9_17fd1[32]; // 10ed:7101
db dummy9_17ff1[32]; // 10ed:7121
db dummy9_18011[32]; // 10ed:7141
db dummy9_18031[32]; // 10ed:7161
db dummy9_18051[32]; // 10ed:7181
db dummy9_18071[32]; // 10ed:71a1
db dummy9_18091[32]; // 10ed:71c1
db dummy9_180b1[32]; // 10ed:71e1
db dummy9_180d1[32]; // 10ed:7201
db dummy9_180f1[32]; // 10ed:7221
db dummy9_18111[32]; // 10ed:7241
db dummy9_18131[32]; // 10ed:7261
db dummy9_18151[32]; // 10ed:7281
db dummy9_18171[32]; // 10ed:72a1
db dummy9_18191[32]; // 10ed:72c1
db dummy9_181b1[32]; // 10ed:72e1
db dummy9_181d1[32]; // 10ed:7301
db dummy9_181f1[32]; // 10ed:7321
db dummy9_18211[32]; // 10ed:7341
db dummy9_18231[32]; // 10ed:7361
db dummy9_18251[32]; // 10ed:7381
db dummy9_18271[32]; // 10ed:73a1
db dummy9_18291[32]; // 10ed:73c1
db dummy9_182b1[32]; // 10ed:73e1
db dummy9_182d1[32]; // 10ed:7401
db dummy9_182f1[32]; // 10ed:7421
db dummy9_18311[32]; // 10ed:7441
db dummy9_18331[32]; // 10ed:7461
db dummy9_18351[32]; // 10ed:7481
db dummy9_18371[32]; // 10ed:74a1
db dummy9_18391[32]; // 10ed:74c1
db dummy9_183b1[32]; // 10ed:74e1
db dummy9_183d1[32]; // 10ed:7501
db dummy9_183f1[32]; // 10ed:7521
db dummy9_18411[32]; // 10ed:7541
db dummy9_18431[32]; // 10ed:7561
db dummy9_18451[32]; // 10ed:7581
db dummy9_18471;
db dummy9_18472;
db dummy9_18473;
db dummy9_18474;
db dummy9_18475;
db dummy9_18476;
db dummy9_18477;
db dummy9_18478;
db dummy9_18479;
db dummy9_1847a;
db dummy9_1847b;
db dummy9_1847c;
db dummy9_1847d;
db dummy9_1847e;
db unk_26a5f; // 10ed:75af
db dummy9_18480[32]; // 10ed:75b0
db dummy9_184a0;
db dummy9_184a1;
db dummy9_184a2;
db dummy9_184a3;
db dummy9_184a4;
db dummy9_184a5;
db dummy9_184a6;
db dummy9_184a7;
db dummy9_184a8;
db dummy9_184a9;
db dummy9_184aa;
db dummy9_184ab;
db dummy9_184ac;
db dummy9_184ad;
db dummy9_184ae;
db dummy9_184af;
db dummy9_184b0;
db dummy9_184b1;
db dummy9_184b2;
db dummy9_184b3;
db dummy9_184b4;
db dummy9_184b5;
db dummy9_184b6;
db dummy9_184b7;
db dummy9_184b8;
db dummy9_184b9;
db unk_26a9a; // 10ed:75ea
db dummy9_184bb[32]; // 10ed:75eb
db dummy9_184db[32]; // 10ed:760b
db dummy9_184fb[32]; // 10ed:762b
db dummy9_1851b[32]; // 10ed:764b
db dummy9_1853b[32]; // 10ed:766b
db dummy9_1855b[32]; // 10ed:768b
db dummy9_1857b[32]; // 10ed:76ab
db dummy9_1859b[32]; // 10ed:76cb
db dummy9_185bb[32]; // 10ed:76eb
db dummy9_185db[32]; // 10ed:770b
db dummy9_185fb[32]; // 10ed:772b
db dummy9_1861b[32]; // 10ed:774b
db dummy9_1863b[32]; // 10ed:776b
db dummy9_1865b[32]; // 10ed:778b
db dummy9_1867b[32]; // 10ed:77ab
db dummy9_1869b[32]; // 10ed:77cb
db dummy9_186bb[32]; // 10ed:77eb
db dummy9_186db[32]; // 10ed:780b
db dummy9_186fb[32]; // 10ed:782b
db dummy9_1871b[32]; // 10ed:784b
db dummy9_1873b[32]; // 10ed:786b
db dummy9_1875b[32]; // 10ed:788b
db dummy9_1877b[32]; // 10ed:78ab
db dummy9_1879b[32]; // 10ed:78cb
db dummy9_187bb[32]; // 10ed:78eb
db dummy9_187db[32]; // 10ed:790b
db dummy9_187fb[32]; // 10ed:792b
db dummy9_1881b[32]; // 10ed:794b
db dummy9_1883b[32]; // 10ed:796b
db dummy9_1885b[32]; // 10ed:798b
db dummy9_1887b[32]; // 10ed:79ab
db dummy9_1889b[32]; // 10ed:79cb
db dummy9_188bb[32]; // 10ed:79eb
db dummy9_188db[32]; // 10ed:7a0b
db dummy9_188fb[32]; // 10ed:7a2b
db dummy9_1891b[32]; // 10ed:7a4b
db dummy9_1893b[32]; // 10ed:7a6b
db dummy9_1895b[32]; // 10ed:7a8b
db dummy9_1897b[32]; // 10ed:7aab
db dummy9_1899b[32]; // 10ed:7acb
db dummy9_189bb[32]; // 10ed:7aeb
db dummy9_189db[32]; // 10ed:7b0b
db dummy9_189fb[32]; // 10ed:7b2b
db dummy9_18a1b[32]; // 10ed:7b4b
db dummy9_18a3b[32]; // 10ed:7b6b
db dummy9_18a5b[32]; // 10ed:7b8b
db dummy9_18a7b[32]; // 10ed:7bab
db dummy9_18a9b[32]; // 10ed:7bcb
db dummy9_18abb[32]; // 10ed:7beb
db dummy9_18adb[32]; // 10ed:7c0b
db dummy9_18afb[32]; // 10ed:7c2b
db dummy9_18b1b[32]; // 10ed:7c4b
db dummy9_18b3b[32]; // 10ed:7c6b
db dummy9_18b5b[32]; // 10ed:7c8b
db dummy9_18b7b[32]; // 10ed:7cab
db dummy9_18b9b[32]; // 10ed:7ccb
db dummy9_18bbb[32]; // 10ed:7ceb
db dummy9_18bdb[32]; // 10ed:7d0b
db dummy9_18bfb[32]; // 10ed:7d2b
db dummy9_18c1b[32]; // 10ed:7d4b
db dummy9_18c3b[32]; // 10ed:7d6b
db dummy9_18c5b[32]; // 10ed:7d8b
db dummy9_18c7b[32]; // 10ed:7dab
db dummy9_18c9b[32]; // 10ed:7dcb
db dummy9_18cbb[32]; // 10ed:7deb
db dummy9_18cdb[32]; // 10ed:7e0b
db dummy9_18cfb[32]; // 10ed:7e2b
db dummy9_18d1b[32]; // 10ed:7e4b
db dummy9_18d3b[32]; // 10ed:7e6b
db dummy9_18d5b[32]; // 10ed:7e8b
db dummy9_18d7b[32]; // 10ed:7eab
db dummy9_18d9b[32]; // 10ed:7ecb
db dummy9_18dbb[32]; // 10ed:7eeb
db dummy9_18ddb[32]; // 10ed:7f0b
db dummy9_18dfb[32]; // 10ed:7f2b
db dummy9_18e1b[32]; // 10ed:7f4b
db dummy9_18e3b[32]; // 10ed:7f6b
db dummy9_18e5b[32]; // 10ed:7f8b
db dummy9_18e7b[32]; // 10ed:7fab
db dummy9_18e9b[32]; // 10ed:7fcb
db dummy9_18ebb[32]; // 10ed:7feb
db dummy9_18edb[32]; // 10ed:800b
db dummy9_18efb[32]; // 10ed:802b
db dummy9_18f1b[32]; // 10ed:804b
db dummy9_18f3b[32]; // 10ed:806b
db dummy9_18f5b[32]; // 10ed:808b
db dummy9_18f7b[32]; // 10ed:80ab
db dummy9_18f9b[32]; // 10ed:80cb
db dummy9_18fbb[32]; // 10ed:80eb
db dummy9_18fdb[32]; // 10ed:810b
db dummy9_18ffb[32]; // 10ed:812b
db dummy9_1901b[32]; // 10ed:814b
db dummy9_1903b[32]; // 10ed:816b
db dummy9_1905b[32]; // 10ed:818b
db dummy9_1907b[32]; // 10ed:81ab
db dummy9_1909b[32]; // 10ed:81cb
db dummy9_190bb[32]; // 10ed:81eb
db dummy9_190db[32]; // 10ed:820b
db dummy9_190fb[32]; // 10ed:822b
db dummy9_1911b[32]; // 10ed:824b
db dummy9_1913b[32]; // 10ed:826b
db dummy9_1915b[32]; // 10ed:828b
db dummy9_1917b[32]; // 10ed:82ab
db dummy9_1919b[32]; // 10ed:82cb
db dummy9_191bb[32]; // 10ed:82eb
db dummy9_191db[32]; // 10ed:830b
db dummy9_191fb[32]; // 10ed:832b
db dummy9_1921b[32]; // 10ed:834b
db dummy9_1923b[32]; // 10ed:836b
db dummy9_1925b[32]; // 10ed:838b
db dummy9_1927b[32]; // 10ed:83ab
db dummy9_1929b[32]; // 10ed:83cb
db dummy9_192bb[32]; // 10ed:83eb
db dummy9_192db[32]; // 10ed:840b
db dummy9_192fb[32]; // 10ed:842b
db dummy9_1931b[32]; // 10ed:844b
db dummy9_1933b[32]; // 10ed:846b
db dummy9_1935b[32]; // 10ed:848b
db dummy9_1937b[32]; // 10ed:84ab
db dummy9_1939b[32]; // 10ed:84cb
db dummy9_193bb[32]; // 10ed:84eb
db dummy9_193db[32]; // 10ed:850b
db dummy9_193fb[32]; // 10ed:852b
db dummy9_1941b[32]; // 10ed:854b
db dummy9_1943b[32]; // 10ed:856b
db dummy9_1945b[32]; // 10ed:858b
db dummy9_1947b[32]; // 10ed:85ab
db dummy9_1949b[32]; // 10ed:85cb
db dummy9_194bb[32]; // 10ed:85eb
db dummy9_194db[32]; // 10ed:860b
db dummy9_194fb[32]; // 10ed:862b
db dummy9_1951b[32]; // 10ed:864b
db dummy9_1953b[32]; // 10ed:866b
db dummy9_1955b[32]; // 10ed:868b
db dummy9_1957b[32]; // 10ed:86ab
db dummy9_1959b[32]; // 10ed:86cb
db dummy9_195bb[32]; // 10ed:86eb
db dummy9_195db[32]; // 10ed:870b
db dummy9_195fb[32]; // 10ed:872b
db dummy9_1961b[32]; // 10ed:874b
db dummy9_1963b[32]; // 10ed:876b
db dummy9_1965b[32]; // 10ed:878b
db dummy9_1967b[32]; // 10ed:87ab
db dummy9_1969b[32]; // 10ed:87cb
db dummy9_196bb[32]; // 10ed:87eb
db dummy9_196db[32]; // 10ed:880b
db dummy9_196fb[32]; // 10ed:882b
db dummy9_1971b[32]; // 10ed:884b
db dummy9_1973b[32]; // 10ed:886b
db dummy9_1975b[32]; // 10ed:888b
db dummy9_1977b[32]; // 10ed:88ab
db dummy9_1979b[32]; // 10ed:88cb
db dummy9_197bb[32]; // 10ed:88eb
db dummy9_197db[32]; // 10ed:890b
db dummy9_197fb[32]; // 10ed:892b
db dummy9_1981b[32]; // 10ed:894b
db dummy9_1983b[32]; // 10ed:896b
db dummy9_1985b[32]; // 10ed:898b
db dummy9_1987b[32]; // 10ed:89ab
db dummy9_1989b[32]; // 10ed:89cb
db dummy9_198bb[32]; // 10ed:89eb
db dummy9_198db[32]; // 10ed:8a0b
db dummy9_198fb[32]; // 10ed:8a2b
db dummy9_1991b[32]; // 10ed:8a4b
db dummy9_1993b[32]; // 10ed:8a6b
db dummy9_1995b[32]; // 10ed:8a8b
db dummy9_1997b[32]; // 10ed:8aab
db dummy9_1999b[32]; // 10ed:8acb
db dummy9_199bb[32]; // 10ed:8aeb
db dummy9_199db[32]; // 10ed:8b0b
db dummy9_199fb[32]; // 10ed:8b2b
db dummy9_19a1b[32]; // 10ed:8b4b
db dummy9_19a3b[32]; // 10ed:8b6b
db dummy9_19a5b[32]; // 10ed:8b8b
db dummy9_19a7b;
db dummy9_19a7c;
db dummy9_19a7d;
db dummy9_19a7e;
db dummy9_19a7f;
db dummy9_19a80;
db dummy9_19a81;
db dummy9_19a82;
db dummy9_19a83;
db dummy9_19a84;
db dummy9_19a85;
db dummy9_19a86;
db dummy9_19a87;
db dummy9_19a88;
db dummy9_19a89;
db dummy9_19a8a;
db unk_2806b; // 10ed:8bbb
db dummy9_19a8c[32]; // 10ed:8bbc
db dummy9_19aac[32]; // 10ed:8bdc
db dummy9_19acc[32]; // 10ed:8bfc
db dummy9_19aec[32]; // 10ed:8c1c
db dummy9_19b0c[32]; // 10ed:8c3c
db dummy9_19b2c[32]; // 10ed:8c5c
db dummy9_19b4c[32]; // 10ed:8c7c
db dummy9_19b6c[32]; // 10ed:8c9c
db dummy9_19b8c[32]; // 10ed:8cbc
db dummy9_19bac[32]; // 10ed:8cdc
db dummy9_19bcc[32]; // 10ed:8cfc
db dummy9_19bec[32]; // 10ed:8d1c
db dummy9_19c0c[32]; // 10ed:8d3c
db dummy9_19c2c[32]; // 10ed:8d5c
db dummy9_19c4c[32]; // 10ed:8d7c
db dummy9_19c6c[32]; // 10ed:8d9c
db dummy9_19c8c[32]; // 10ed:8dbc
db dummy9_19cac[32]; // 10ed:8ddc
db dummy9_19ccc[32]; // 10ed:8dfc
db dummy9_19cec[32]; // 10ed:8e1c
db dummy9_19d0c[32]; // 10ed:8e3c
db dummy9_19d2c[32]; // 10ed:8e5c
db dummy9_19d4c[32]; // 10ed:8e7c
db dummy9_19d6c[32]; // 10ed:8e9c
db dummy9_19d8c[32]; // 10ed:8ebc
db dummy9_19dac[32]; // 10ed:8edc
db dummy9_19dcc[32]; // 10ed:8efc
db dummy9_19dec[32]; // 10ed:8f1c
db dummy9_19e0c[32]; // 10ed:8f3c
db dummy9_19e2c[32]; // 10ed:8f5c
db dummy9_19e4c[32]; // 10ed:8f7c
db dummy9_19e6c[32]; // 10ed:8f9c
db dummy9_19e8c[32]; // 10ed:8fbc
db dummy9_19eac[32]; // 10ed:8fdc
db dummy9_19ecc[32]; // 10ed:8ffc
db dummy9_19eec;
db dummy9_19eed;
db dummy9_19eee;
db dummy9_19eef;
db dummy9_19ef0;
db dummy9_19ef1;
db dummy9_19ef2;
db dummy9_19ef3;
db dummy9_19ef4;
db dummy9_19ef5;
db dummy9_19ef6;
db dummy9_19ef7;
db dummy9_19ef8;
db dummy9_19ef9;
db dummy9_19efa;
db dummy9_19efb;
db dummy9_19efc;
db dummy9_19efd;
db dummy9_19efe;
db dummy9_19eff;
dw word_284e0; // 10ed:9030
dw word_284e2; // 10ed:9032
dw word_284e4; // 10ed:9034
dw word_284e6; // 10ed:9036
db byte_284e8; // 10ed:9038
db dummy9_19f09;
db byte_284ea; // 10ed:903a
db byte_284eb; // 10ed:903b
db dummy9_19f0c;
db dummy9_19f0d;
db dummy9_19f0e;
db dummy9_19f0f;
dw word_284f0; // 10ed:9040
dw word_284f2; // 10ed:9042
dw dummy9_19f14;
db dummy9_19f16;
db dummy9_19f17;
db dummy9_19f18;
db dummy9_19f19;
db byte_284fa; // 10ed:904a
db dummy9_19f1b;
db byte_284fc; // 10ed:904c
db byte_284fd; // 10ed:904d
db byte_284fe; // 10ed:904e
db byte_284ff; // 10ed:904f
dw word_28500; // 10ed:9050
db byte_28502; // 10ed:9052
db byte_28503; // 10ed:9053
db byte_28504; // 10ed:9054
db dummy9_19f25;
db dummy9_19f26;
db byte_28507; // 10ed:9057
db byte_28508; // 10ed:9058
db byte_28509; // 10ed:9059
dw word_2850a; // 10ed:905a
dw word_2850c; // 10ed:905c
db dummy9_19f2e;
db byte_2850f; // 10ed:905f
db byte_28510; // 10ed:9060
db dummy9_19f31;
dw word_28512; // 10ed:9062
dw word_28514; // 10ed:9064
dw dummy9_19f36;
dw dummy9_19f38;
dw dummy9_19f3a;
db dummy9_19f3c;
db byte_2851d; // 10ed:906d
db dummy9_19f3e;
db dummy9_19f3f;
db dummy9_19f40;
db dummy9_19f41;
dw dummy9_19f42;
dw dummy9_19f44;
dw dummy9_19f46;
dw dummy9_19f48;
dw dummy9_19f4a;
db dummy9_19f4c;
db dummy9_19f4d;
dw dummy9_19f4e;
db dummy9_19f50;
db dummy9_19f51;
db dummy9_19f52;
db dummy9_19f53;
db dummy9_19f54;
db dummy9_19f55;
db dummy9_19f56;
db dummy9_19f57;
db dummy9_19f58;
db dummy9_19f59;
db dummy9_19f5a;
db dummy9_19f5b;
dw dummy9_19f5c;
dw dummy9_19f5e;
db byte_28540; // 10ed:9090
db dummy9_19f61;
db dummy9_19f62;
db byte_28543; // 10ed:9093
db dummy9_19f64;
db dummy9_19f65;
db byte_28546; // 10ed:9096
db dummy9_19f67;
db dummy9_19f68;
db dummy9_19f69;
db dummy9_19f6a;
db dummy9_19f6b;
dw dummy9_19f6c;
dw dummy9_19f6e;
db dummy9_19f70;
db dummy9_19f71;
db dummy9_19f72;
db dummy9_19f73;
db dummy9_19f74;
db dummy9_19f75;
db dummy9_19f76;
db dummy9_19f77;
dw dummy9_19f78;
dw dummy9_19f7a;
dw dummy9_19f7c;
db dummy9_19f7e;
db dummy9_19f7f;
dw dummy9_19f80;
db dummy9_19f82;
db dummy9_19f83;
db dummy9_19f84;
db dummy9_19f85;
db dummy9_19f86;
db dummy9_19f87;
db dummy9_19f88;
db dummy9_19f89;
dw dummy9_19f8a;
db dummy9_19f8c;
db dummy9_19f8d;
db dummy9_19f8e;
db dummy9_19f8f;
db dummy9_19f90;
db dummy9_19f91;
db dummy9_19f92;
db dummy9_19f93;
dw word_28574; // 10ed:90c4
dw word_28576; // 10ed:90c6
dw word_28578; // 10ed:90c8
dw word_2857a; // 10ed:90ca
db byte_2857c; // 10ed:90cc
db byte_2857d; // 10ed:90cd
db byte_2857e; // 10ed:90ce
db byte_2857f; // 10ed:90cf
dw word_28580; // 10ed:90d0
db dummy9_19fa2;
db dummy9_19fa3;
db dummy9_19fa4;
db dummy9_19fa5;
dw dummy9_19fa6;
dw dummy9_19fa8;
db dummy9_19faa;
db dummy9_19fab;
db dummy9_19fac;
db dummy9_19fad;
dw dummy9_19fae;
dw dummy9_19fb0;
dw dummy9_19fb2;
db dummy9_19fb4;
db dummy9_19fb5;
db dummy9_19fb6;
db dummy9_19fb7;
db dummy9_19fb8;
db dummy9_19fb9;
db dummy9_19fba;
db dummy9_19fbb;
dw word_2859c; // 10ed:90ec
db byte_2859e; // 10ed:90ee
db byte_2859f; // 10ed:90ef
dw word_285a0; // 10ed:90f0
db byte_285a2; // 10ed:90f2
db byte_285a3; // 10ed:90f3
db dummy9_19fc4;
db dummy9_19fc5;
db dummy9_19fc6;
db dummy9_19fc7;
db byte_285a8; // 10ed:90f8
db byte_285a9; // 10ed:90f9
dw dummy9_19fca;
dw dummy9_19fcc;
db dummy9_19fce;
db byte_285af; // 10ed:90ff
dw dummy9_19fd0;
db dummy9_19fd2;
db dummy9_19fd3;
db dummy9_19fd4;
db byte_285b5; // 10ed:9105
dw dummy9_19fd6;
db dummy9_19fd8;
db dummy9_19fd9;
db dummy9_19fda;
db byte_285bb; // 10ed:910b
dw word_285bc; // 10ed:910c
dw word_285be; // 10ed:910e
db dummy9_19fe0;
db dummy9_19fe1;
dw word_285c2; // 10ed:9112
dw word_285c4; // 10ed:9114
db dummy9_19fe6;
db dummy9_19fe7;
db byte_285c8; // 10ed:9118
db dummy9_19fe9;
db byte_285ca; // 10ed:911a
db byte_285cb; // 10ed:911b
db byte_285cc; // 10ed:911c
db byte_285cd; // 10ed:911d
dw word_285ce; // 10ed:911e
db dummy9_19ff0;
db dummy9_19ff1;
dw dummy9_19ff2;
db dummy9_19ff4;
db dummy9_19ff5;
db dummy9_19ff6;
db byte_285d7; // 10ed:9127
db dummy9_19ff8;
db dummy9_19ff9;
db dummy9_19ffa;
db byte_285db; // 10ed:912b
db dummy9_19ffc;
db byte_285dd; // 10ed:912d
db dummy9_19ffe;
db byte_285df; // 10ed:912f
db dummy9_1a000[32]; // 10ed:9130
db dummy9_1a020[32]; // 10ed:9150
db dummy9_1a040[32]; // 10ed:9170
db dummy9_1a060[32]; // 10ed:9190
db dummy9_1a080[32]; // 10ed:91b0
db dummy9_1a0a0[32]; // 10ed:91d0
db dummy9_1a0c0[32]; // 10ed:91f0
db dummy9_1a0e0[32]; // 10ed:9210
db dummy9_1a100[32]; // 10ed:9230
db dummy9_1a120[32]; // 10ed:9250
db dummy9_1a140[32]; // 10ed:9270
db dummy9_1a160[32]; // 10ed:9290
db dummy9_1a180[32]; // 10ed:92b0
db dummy9_1a1a0[32]; // 10ed:92d0
db dummy9_1a1c0[32]; // 10ed:92f0
db dummy9_1a1e0[32]; // 10ed:9310
db dummy9_1a200;
db dummy9_1a201;
dw dummy9_1a202;
dw dummy9_1a204;
db dummy9_1a206[32]; // 10ed:9336
db dummy9_1a226;
db dummy9_1a227;
db dummy9_1a228;
db dummy9_1a229;
db dummy9_1a22a;
db dummy9_1a22b;
db dummy9_1a22c;
db dummy9_1a22d;
db dummy9_1a22e;
dw dummy9_1a22f;
dw dummy9_1a231;
db dummy9_1a233;
dw dummy9_1a234;
dw dummy9_1a236;
db dummy9_1a238;
db dummy9_1a239;
db dummy9_1a23a;
db dummy9_1a23b;
dw dummy9_1a23c;
db dummy9_1a23e;
db dummy9_1a23f;
dw dummy9_1a240;
db dummy9_1a242;
db dummy9_1a243;
db dummy9_1a244;
db dummy9_1a245;
db dummy9_1a246;
db dummy9_1a247;
db dummy9_1a248;
db dummy9_1a249;
dw dummy9_1a24a;
dw dummy9_1a24c;
db dummy9_1a24e;
db dummy9_1a24f;
db dummy9_1a250;
db dummy9_1a251;
dw dummy9_1a252;
db dummy9_1a254;
db dummy9_1a255;
db dummy9_1a256;
db dummy9_1a257;
db dummy9_1a258;
db dummy9_1a259;
db dummy9_1a25a;
db dummy9_1a25b;
db dummy9_1a25c;
db dummy9_1a25d;
db dummy9_1a25e;
db dummy9_1a25f;
db dummy9_1a260;
db dummy9_1a261;
db dummy9_1a262;
db dummy9_1a263;
db dummy9_1a264;
db dummy9_1a265;
db dummy9_1a266;
db dummy9_1a267;
db dummy9_1a268;
db dummy9_1a269;
db dummy9_1a26a;
db dummy9_1a26b;
db dummy9_1a26c;
db dummy9_1a26d;
db dummy9_1a26e;
db dummy9_1a26f;
db dummy9_1a270;
db dummy9_1a271;
dw dummy9_1a272;
dw dummy9_1a274;
dw dummy9_1a276;
dw dummy9_1a278;
db dummy9_1a27a;
db dummy9_1a27b;
db dummy9_1a27c;
db dummy9_1a27d;
db dummy9_1a27e;
db dummy9_1a27f;
db dummy9_1a280;
db dummy9_1a281;
db dummy9_1a282;
db dummy9_1a283;
db dummy9_1a284;
db dummy9_1a285;
db dummy9_1a286;
db dummy9_1a287;
db dummy9_1a288;
db dummy9_1a289;
db dummy9_1a28a;
db dummy9_1a28b;
dw dummy9_1a28c;
dw dummy9_1a28e;
dw dummy9_1a290;
dw dummy9_1a292;
dw dummy9_1a294;
dw dummy9_1a296;
dw dummy9_1a298;
dw dummy9_1a29a;
dw dummy9_1a29c;
dw dummy9_1a29e;
dw dummy9_1a2a0;
dw dummy9_1a2a2;
dw dummy9_1a2a4;
dw dummy9_1a2a6;
dw dummy9_1a2a8;
db dummy9_1a2aa;
db dummy9_1a2ab;
db dummy9_1a2ac;
db dummy9_1a2ad;
db dummy9_1a2ae;
db dummy9_1a2af;
db dummy9_1a2b0;
db dummy9_1a2b1;
dw dummy9_1a2b2;
dw dummy9_1a2b4;
db dummy9_1a2b6;
db dummy9_1a2b7;
db dummy9_1a2b8;
db dummy9_1a2b9;
dw dummy9_1a2ba;
db dummy9_1a2bc;
db dummy9_1a2bd;
db dummy9_1a2be;
db dummy9_1a2bf;
db dummy9_1a2c0;
db dummy9_1a2c1;
db dummy9_1a2c2;
db dummy9_1a2c3;
dw dummy9_1a2c4;
dw dummy9_1a2c6;
db dummy9_1a2c8;
db dummy9_1a2c9;
dw dummy9_1a2ca;
db dummy9_1a2cc;
db dummy9_1a2cd;
dw dummy9_1a2ce;
dw dummy9_1a2d0;
db dummy9_1a2d2;
db dummy9_1a2d3;
dw dummy9_1a2d4;
dw dummy9_1a2d6;
dw dummy9_1a2d8;
dw dummy9_1a2da;
dw dummy9_1a2dc;
dw dummy9_1a2de;
dw dummy9_1a2e0;
dw dummy9_1a2e2;
db dummy9_1a2e4[32]; // 10ed:9414
db dummy9_1a304;
db dummy9_1a305;
db dummy9_1a306;
db dummy9_1a307;
db dummy9_1a308;
db dummy9_1a309;
db dummy9_1a30a;
db dummy9_1a30b;
db dummy9_1a30c;
db dummy9_1a30d;
db dummy9_1a30e;
db dummy9_1a30f;
db dummy9_1a310;
db dummy9_1a311;
db dummy9_1a312;
db dummy9_1a313;
db dummy9_1a314;
db dummy9_1a315;
db dummy9_1a316;
db dummy9_1a317;
db dummy9_1a318;
db dummy9_1a319;
dw dummy9_1a31a;
dw dummy9_1a31c;
dw dummy9_1a31e;
db dummy9_1a320;
db dummy9_1a321;
db dummy9_1a322;
db dummy9_1a323;
db dummy9_1a324;
db dummy9_1a325;
db dummy9_1a326;
db dummy9_1a327;
db dummy9_1a328;
db dummy9_1a329;
db dummy9_1a32a;
db dummy9_1a32b;
db dummy9_1a32c;
db dummy9_1a32d;
db dummy9_1a32e;
dw dummy9_1a32f;
dw dummy9_1a331;
dw dummy9_1a333;
dw dummy9_1a335;
dw dummy9_1a337;
dw dummy9_1a339;
dw dummy9_1a33b;
dw dummy9_1a33d;
dw dummy9_1a33f;
db dummy9_1a341;
db dummy9_1a342;
dw dummy9_1a343;
dw dummy9_1a345;
db dummy9_1a347[32]; // 10ed:9477
db dummy9_1a367[32]; // 10ed:9497
db dummy9_1a387[32]; // 10ed:94b7
db dummy9_1a3a7[32]; // 10ed:94d7
db dummy9_1a3c7[32]; // 10ed:94f7
db dummy9_1a3e7[32]; // 10ed:9517
db dummy9_1a407[32]; // 10ed:9537
db dummy9_1a427[32]; // 10ed:9557
db dummy9_1a447[32]; // 10ed:9577
db dummy9_1a467[32]; // 10ed:9597
db dummy9_1a487;
db dummy9_1a488;
db dummy9_1a489;
db dummy9_1a48a;
db dummy9_1a48b;
db dummy9_1a48c;
db dummy9_1a48d;
db dummy9_1a48e;
db dummy9_1a48f;
db dummy9_1a490;
db dummy9_1a491;
db dummy9_1a492;
db dummy9_1a493;
db dummy9_1a494;
db dummy9_1a495;
db dummy9_1a496;
db dummy9_1a497;
db dummy9_1a498;
db dummy9_1a499;
db dummy9_1a49a;
db dummy9_1a49b;
db dummy9_1a49c;
db dummy9_1a49d;
db dummy9_1a49e;
db dummy9_1a49f;
db unk_28a80; // 10ed:95d0
db dummy9_1a4a1[32]; // 10ed:95d1
db dummy9_1a4c1[32]; // 10ed:95f1
db dummy9_1a4e1[32]; // 10ed:9611
db dummy9_1a501;
db dummy9_1a502;
db dummy9_1a503;
db dummy9_1a504;
db dummy9_1a505;
db dummy9_1a506;
db dummy9_1a507;
db dummy9_1a508;
db dummy9_1a509;
db dummy9_1a50a;
db dummy9_1a50b;
db dummy9_1a50c;
db dummy9_1a50d;
db dummy9_1a50e;
db dummy9_1a50f;
db dummy9_1a510;
db unk_28af1; // 10ed:9641
db dummy9_1a512[32]; // 10ed:9642
db dummy9_1a532[32]; // 10ed:9662
db dummy9_1a552[32]; // 10ed:9682
db dummy9_1a572[32]; // 10ed:96a2
db dummy9_1a592[32]; // 10ed:96c2
db dummy9_1a5b2[32]; // 10ed:96e2
db dummy9_1a5d2[32]; // 10ed:9702
db dummy9_1a5f2[32]; // 10ed:9722
db dummy9_1a612[32]; // 10ed:9742
db dummy9_1a632[32]; // 10ed:9762
db dummy9_1a652[32]; // 10ed:9782
db dummy9_1a672[32]; // 10ed:97a2
db dummy9_1a692[32]; // 10ed:97c2
db dummy9_1a6b2[32]; // 10ed:97e2
db dummy9_1a6d2[32]; // 10ed:9802
db dummy9_1a6f2[32]; // 10ed:9822
db dummy9_1a712[32]; // 10ed:9842
db dummy9_1a732[32]; // 10ed:9862
db dummy9_1a752[32]; // 10ed:9882
db dummy9_1a772[32]; // 10ed:98a2
db dummy9_1a792[32]; // 10ed:98c2
db dummy9_1a7b2[32]; // 10ed:98e2
db dummy9_1a7d2[32]; // 10ed:9902
db dummy9_1a7f2[32]; // 10ed:9922
db dummy9_1a812[32]; // 10ed:9942
db dummy9_1a832[32]; // 10ed:9962
db dummy9_1a852[32]; // 10ed:9982
db dummy9_1a872;
db dummy9_1a873;
db dummy9_1a874;
db dummy9_1a875;
db dummy9_1a876;
db dummy9_1a877;
db dummy9_1a878;
db dummy9_1a879;
db dummy9_1a87a;
db dummy9_1a87b;
db dummy9_1a87c;
db dummy9_1a87d;
db dummy9_1a87e;
db dummy9_1a87f;
db dummy9_1a880;
db dummy9_1a881;
db dummy9_1a882;
db dummy9_1a883;
db dummy9_1a884;
db dummy9_1a885;
db dummy9_1a886;
db dummy9_1a887;
db dummy9_1a888;
db dummy9_1a889;
db dummy9_1a88a;
db dummy9_1a88b;
db dummy9_1a88c;
db dummy9_1a88d;
db unk_28e6e; // 10ed:99be
db dummy9_1a88f[32]; // 10ed:99bf
db dummy9_1a8af[32]; // 10ed:99df
db dummy9_1a8cf[32]; // 10ed:99ff
db dummy9_1a8ef[32]; // 10ed:9a1f
db dummy9_1a90f[32]; // 10ed:9a3f
db dummy9_1a92f[32]; // 10ed:9a5f
db dummy9_1a94f[32]; // 10ed:9a7f
db dummy9_1a96f[32]; // 10ed:9a9f
db dummy9_1a98f[32]; // 10ed:9abf
db dummy9_1a9af[32]; // 10ed:9adf
db dummy9_1a9cf[32]; // 10ed:9aff
db dummy9_1a9ef[32]; // 10ed:9b1f
db dummy9_1aa0f[32]; // 10ed:9b3f
db dummy9_1aa2f[32]; // 10ed:9b5f
db dummy9_1aa4f[32]; // 10ed:9b7f
db dummy9_1aa6f[32]; // 10ed:9b9f
db dummy9_1aa8f[32]; // 10ed:9bbf
db dummy9_1aaaf[32]; // 10ed:9bdf
db dummy9_1aacf[32]; // 10ed:9bff
db dummy9_1aaef[32]; // 10ed:9c1f
db dummy9_1ab0f[32]; // 10ed:9c3f
db dummy9_1ab2f[32]; // 10ed:9c5f
db dummy9_1ab4f[32]; // 10ed:9c7f
db dummy9_1ab6f[32]; // 10ed:9c9f
db dummy9_1ab8f[32]; // 10ed:9cbf
db dummy9_1abaf[32]; // 10ed:9cdf
db dummy9_1abcf[32]; // 10ed:9cff
db dummy9_1abef[32]; // 10ed:9d1f
db dummy9_1ac0f[32]; // 10ed:9d3f
db dummy9_1ac2f[32]; // 10ed:9d5f
db dummy9_1ac4f[32]; // 10ed:9d7f
db dummy9_1ac6f[32]; // 10ed:9d9f
db dummy9_1ac8f[32]; // 10ed:9dbf
db dummy9_1acaf[32]; // 10ed:9ddf
db dummy9_1accf[32]; // 10ed:9dff
db dummy9_1acef[32]; // 10ed:9e1f
db dummy9_1ad0f[32]; // 10ed:9e3f
db dummy9_1ad2f[32]; // 10ed:9e5f
db dummy9_1ad4f[32]; // 10ed:9e7f
db dummy9_1ad6f[32]; // 10ed:9e9f
db dummy9_1ad8f[32]; // 10ed:9ebf
db dummy9_1adaf[32]; // 10ed:9edf
db dummy9_1adcf[32]; // 10ed:9eff
db dummy9_1adef[32]; // 10ed:9f1f
db dummy9_1ae0f[32]; // 10ed:9f3f
db dummy9_1ae2f[32]; // 10ed:9f5f
db dummy9_1ae4f[32]; // 10ed:9f7f
db dummy9_1ae6f[32]; // 10ed:9f9f
db dummy9_1ae8f[32]; // 10ed:9fbf
db dummy9_1aeaf[32]; // 10ed:9fdf
db dummy9_1aecf;
db dummy9_1aed0;
db dummy9_1aed1;
db dummy9_1aed2;
db dummy9_1aed3;
db dummy9_1aed4;
db dummy9_1aed5;
db dummy9_1aed6;
db dummy9_1aed7;
db byte_294b8; // 10ed:a008
db dummy9_1aed9;
db dummy9_1aeda;
db byte_294bb; // 10ed:a00b
db dummy9_1aedc;
db dummy9_1aedd;
db dummy9_1aede;
db dummy9_1aedf;
db dummy9_1aee0;
db dummy9_1aee1;
db dummy9_1aee2;
db dummy9_1aee3;
db dummy9_1aee4;
db dummy9_1aee5;
db dummy9_1aee6;
db dummy9_1aee7;
db byte_294c8; // 10ed:a018
db dummy9_1aee9;
dw word_294ca; // 10ed:a01a
db dummy9_1aeec;
db dummy9_1aeed;
db dummy9_1aeee;
db dummy9_1aeef;
db dummy9_1aef0;
db dummy9_1aef1;
db dummy9_1aef2;
db dummy9_1aef3;
db dummy9_1aef4;
db dummy9_1aef5;
db dummy9_1aef6;
db byte_294d7; // 10ed:a027
dw word_294d8; // 10ed:a028
db unk_294da; // 10ed:a02a
db byte_294db; // 10ed:a02b
db dummy9_1aefc;
db dummy9_1aefd;
db dummy9_1aefe;
db dummy9_1aeff;
db dummy9_1af00;
db dummy9_1af01;
db dummy9_1af02;
db dummy9_1af03;
db dummy9_1af04;
db dummy9_1af05;
db dummy9_1af06;
db byte_294e7; // 10ed:a037
db dummy9_1af08;
db dummy9_1af09;
db dummy9_1af0a;
db dummy9_1af0b;
db dummy9_1af0c;
db dummy9_1af0d;
db dummy9_1af0e;
db dummy9_1af0f;
db dummy9_1af10;
db dummy9_1af11;
db dummy9_1af12;
db dummy9_1af13;
db dummy9_1af14;
db dummy9_1af15;
db dummy9_1af16;
db dummy9_1af17;
dw word_294f8; // 10ed:a048
dw word_294fa; // 10ed:a04a
db dummy9_1af1c;
db dummy9_1af1d;
db dummy9_1af1e;
db dummy9_1af1f;
db dummy9_1af20;
db dummy9_1af21;
db dummy9_1af22;
db dummy9_1af23;
db dummy9_1af24;
db dummy9_1af25;
db dummy9_1af26;
db dummy9_1af27;
db dummy9_1af28;
db dummy9_1af29;
db dummy9_1af2a;
db dummy9_1af2b;
db dummy9_1af2c;
db dummy9_1af2d;
db dummy9_1af2e;
db dummy9_1af2f;
db dummy9_1af30;
db dummy9_1af31;
db dummy9_1af32;
db dummy9_1af33;
db dummy9_1af34;
db dummy9_1af35;
db dummy9_1af36;
db dummy9_1af37;
db byte_29518; // 10ed:a068
db dummy9_1af39;
db dummy9_1af3a;
db dummy9_1af3b;
db dummy9_1af3c;
db dummy9_1af3d;
db dummy9_1af3e;
db dummy9_1af3f;
db dummy9_1af40;
db dummy9_1af41;
db dummy9_1af42;
db dummy9_1af43;
db dummy9_1af44;
db dummy9_1af45;
db dummy9_1af46;
db dummy9_1af47;
dw word_29528; // 10ed:a078
dw word_2952a; // 10ed:a07a
db dummy9_1af4c;
db dummy9_1af4d;
db dummy9_1af4e;
db dummy9_1af4f;
db dummy9_1af50;
db dummy9_1af51;
db dummy9_1af52;
db dummy9_1af53;
db dummy9_1af54;
db dummy9_1af55;
db dummy9_1af56;
db byte_29537; // 10ed:a087
db dummy9_1af58;
db dummy9_1af59;
db dummy9_1af5a;
db dummy9_1af5b;
db dummy9_1af5c;
db dummy9_1af5d;
db dummy9_1af5e;
db dummy9_1af5f;
db dummy9_1af60;
db dummy9_1af61;
db dummy9_1af62;
db dummy9_1af63;
db dummy9_1af64;
db dummy9_1af65;
db dummy9_1af66;
db byte_29547; // 10ed:a097
db dummy9_1af68[32]; // 10ed:a098
db dummy9_1af88;
db dummy9_1af89;
db dummy9_1af8a;
db dummy9_1af8b;
db dummy9_1af8c;
db dummy9_1af8d;
db dummy9_1af8e;
db dummy9_1af8f;
db dummy9_1af90;
db dummy9_1af91;
db dummy9_1af92;
db dummy9_1af93;
db dummy9_1af94;
db dummy9_1af95;
db dummy9_1af96;
db dummy9_1af97;
db dummy9_1af98;
db dummy9_1af99;
dw dummy9_1af9a;
db dummy9_1af9c;
db dummy9_1af9d;
db dummy9_1af9e;
db dummy9_1af9f;
db dummy9_1afa0;
db dummy9_1afa1;
db dummy9_1afa2;
db dummy9_1afa3;
db dummy9_1afa4;
db dummy9_1afa5;
db dummy9_1afa6;
db dummy9_1afa7;
dw dummy9_1afa8;
dw word_2958a; // 10ed:a0da
db dummy9_1afac;
db dummy9_1afad;
db dummy9_1afae;
db dummy9_1afaf;
db dummy9_1afb0;
db dummy9_1afb1;
db dummy9_1afb2;
db dummy9_1afb3;
dw word_29594; // 10ed:a0e4
db dummy9_1afb6;
db dummy9_1afb7;
db dummy9_1afb8;
db dummy9_1afb9;
dw dummy9_1afba;
db dummy9_1afbc;
db dummy9_1afbd;
db dummy9_1afbe;
db dummy9_1afbf;
db dummy9_1afc0;
db dummy9_1afc1;
db dummy9_1afc2;
db dummy9_1afc3;
db dummy9_1afc4;
db dummy9_1afc5;
db dummy9_1afc6;
db dummy9_1afc7;
db dummy9_1afc8;
db dummy9_1afc9;
dw dummy9_1afca;
db dummy9_1afcc[32]; // 10ed:a0fc
db dummy9_1afec[32]; // 10ed:a11c
db dummy9_1b00c[32]; // 10ed:a13c
db dummy9_1b02c;
db dummy9_1b02d;
db dummy9_1b02e;
db dummy9_1b02f;
db dummy9_1b030;
db dummy9_1b031;
db dummy9_1b032;
db dummy9_1b033;
db dummy9_1b034;
db dummy9_1b035;
db dummy9_1b036;
db dummy9_1b037;
db dummy9_1b038;
db dummy9_1b039;
db dummy9_1b03a;
db dummy9_1b03b;
db dummy9_1b03c;
db dummy9_1b03d;
db dummy9_1b03e;
dw word_2961f; // 10ed:a16f
db byte_29621; // 10ed:a171
db dummy9_1b042;
db dummy9_1b043;
db dummy9_1b044;
db dummy9_1b045;
db dummy9_1b046;
db dummy9_1b047;
db dummy9_1b048;
db dummy9_1b049;
db dummy9_1b04a;
db dummy9_1b04b;
db dummy9_1b04c;
db dummy9_1b04d;
dw word_2962e; // 10ed:a17e
dw word_29630; // 10ed:a180
dw word_29632; // 10ed:a182
dw word_29634; // 10ed:a184
dw word_29636; // 10ed:a186
dw word_29638; // 10ed:a188
dw word_2963a; // 10ed:a18a
db dummy9_1b05c;
db dummy9_1b05d;
db dummy9_1b05e;
db dummy9_1b05f;
db dummy9_1b060;
db dummy9_1b061;
db dummy9_1b062;
db dummy9_1b063;
db dummy9_1b064;
db dummy9_1b065;
db dummy9_1b066;
db dummy9_1b067;
db dummy9_1b068;
db dummy9_1b069;
db dummy9_1b06a;
db dummy9_1b06b;
db dummy9_1b06c;
db dummy9_1b06d;
db dummy9_1b06e;
db dummy9_1b06f;
dw dummy9_1b070;
dw word_29652; // 10ed:a1a2
dw dummy9_1b074;
dw word_29656; // 10ed:a1a6
db byte_29658; // 10ed:a1a8
db dummy9_1b079;
db dummy9_1b07a;
db dummy9_1b07b;
db dummy9_1b07c;
db dummy9_1b07d;
db dummy9_1b07e;
db dummy9_1b07f;
db dummy9_1b080;
db dummy9_1b081;
db dummy9_1b082;
db dummy9_1b083;
db dummy9_1b084;
db dummy9_1b085;
db dummy9_1b086;
db dummy9_1b087;
db dummy9_1b088;
db dummy9_1b089;
db dummy9_1b08a;
db dummy9_1b08b;
db dummy9_1b08c;
dw word_2966d; // 10ed:a1bd
db dummy9_1b08f;
db byte_29670; // 10ed:a1c0
dw word_29671; // 10ed:a1c1
dw word_29673; // 10ed:a1c3
db dummy9_1b095[32]; // 10ed:a1c5
db dummy9_1b0b5;
db dummy9_1b0b6;
db dummy9_1b0b7;
db dummy9_1b0b8;
db dummy9_1b0b9;
db dummy9_1b0ba;
db byte_2969b; // 10ed:a1eb
db byte_2969c; // 10ed:a1ec
db dummy9_1b0bd;
db dummy9_1b0be;
db dummy9_1b0bf;
db dummy9_1b0c0;
dw word_296a1; // 10ed:a1f1
dw word_296a3; // 10ed:a1f3
dw dummy9_1b0c5;
db byte_296a7; // 10ed:a1f7
db byte_296a8; // 10ed:a1f8
db byte_296a9; // 10ed:a1f9
db byte_296aa; // 10ed:a1fa
db dummy9_1b0cb;
dw dummy9_1b0cc;
dw word_296ae; // 10ed:a1fe
db byte_296b0; // 10ed:a200
db dummy9_1b0d1;
db dummy9_1b0d2;
dw word_296b3; // 10ed:a203
db dummy9_1b0d5;
db dummy9_1b0d6;
db dummy9_1b0d7;
db dummy9_1b0d8;
db dummy9_1b0d9;
db dummy9_1b0da;
dw dummy9_1b0db;
db dummy9_1b0dd;
db dummy9_1b0de;
db dummy9_1b0df;
db dummy9_1b0e0;
db dummy9_1b0e1;
db dummy9_1b0e2;
db dummy9_1b0e3;
db dummy9_1b0e4;
db dummy9_1b0e5;
db dummy9_1b0e6;
db dummy9_1b0e7;
db dummy9_1b0e8;
db dummy9_1b0e9;
db dummy9_1b0ea;
dw word_296cb; // 10ed:a21b
dw dummy9_1b0ed;
dw dummy9_1b0ef;
dw word_296d1; // 10ed:a221
dw word_296d3; // 10ed:a223
dw dummy9_1b0f5;
dw word_296d7; // 10ed:a227
dw dummy9_1b0f9;
dw dummy9_1b0fb;
dw dummy9_1b0fd;
dw dummy9_1b0ff;
dw word_296e1; // 10ed:a231
dw word_296e3; // 10ed:a233
db dummy9_1b105;
db dummy9_1b106;
db dummy9_1b107;
db dummy9_1b108;
db dummy9_1b109;
db dummy9_1b10a;
db dummy9_1b10b;
db dummy9_1b10c;
dw dummy9_1b10d;
dw dummy9_1b10f;
dw word_296f1; // 10ed:a241
db dummy9_1b113;
db dummy9_1b114;
db dummy9_1b115;
db dummy9_1b116;
dw word_296f7; // 10ed:a247
db dummy9_1b119;
db dummy9_1b11a;
db dummy9_1b11b;
db dummy9_1b11c;
dw word_296fd; // 10ed:a24d
db dummy9_1b11f;
db dummy9_1b120;
db dummy9_1b121;
db dummy9_1b122;
db dummy9_1b123;
db dummy9_1b124;
db dummy9_1b125;
db dummy9_1b126;
db dummy9_1b127;
db dummy9_1b128;
db dummy9_1b129;
db dummy9_1b12a;
db dummy9_1b12b;
db dummy9_1b12c;
db dummy9_1b12d;
db byte_2970e; // 10ed:a25e
db dummy9_1b12f;
db dummy9_1b130;
db dummy9_1b131;
db dummy9_1b132;
db dummy9_1b133;
db dummy9_1b134;
db dummy9_1b135;
db dummy9_1b136;
db dummy9_1b137;
db dummy9_1b138;
db dummy9_1b139;
db dummy9_1b13a;
db dummy9_1b13b;
db dummy9_1b13c;
db dummy9_1b13d;
db dummy9_1b13e;
db dummy9_1b13f;
db dummy9_1b140;
db dummy9_1b141;
db dummy9_1b142;
db dummy9_1b143;
db dummy9_1b144;
db byte_29725; // 10ed:a275
db dummy9_1b146;
db byte_29727; // 10ed:a277
db dummy9_1b148;
db dummy9_1b149;
db byte_2972a; // 10ed:a27a
db dummy9_1b14b;
db dummy9_1b14c;
db dummy9_1b14d;
db dummy9_1b14e;
db dummy9_1b14f;
db dummy9_1b150;
db dummy9_1b151;
db dummy9_1b152;
db dummy9_1b153;
db dummy9_1b154;
db dummy9_1b155;
db dummy9_1b156;
db dummy9_1b157;
db dummy9_1b158;
db byte_29739; // 10ed:a289
db dummy9_1b15a[32]; // 10ed:a28a
db dummy9_1b17a[32]; // 10ed:a2aa
db dummy9_1b19a[32]; // 10ed:a2ca
db dummy9_1b1ba[32]; // 10ed:a2ea
db dummy9_1b1da[32]; // 10ed:a30a
db dummy9_1b1fa[32]; // 10ed:a32a
db dummy9_1b21a[32]; // 10ed:a34a
db dummy9_1b23a[32]; // 10ed:a36a
db dummy9_1b25a[32]; // 10ed:a38a
db dummy9_1b27a[32]; // 10ed:a3aa
db dummy9_1b29a[32]; // 10ed:a3ca
db dummy9_1b2ba[32]; // 10ed:a3ea
db dummy9_1b2da[32]; // 10ed:a40a
db dummy9_1b2fa[32]; // 10ed:a42a
db dummy9_1b31a[32]; // 10ed:a44a
db dummy9_1b33a[32]; // 10ed:a46a
db dummy9_1b35a;
db dummy9_1b35b;
db dummy9_1b35c;
db dummy9_1b35d;
db dummy9_1b35e;
db dummy9_1b35f;
db dummy9_1b360;
db dummy9_1b361;
db dummy9_1b362;
db dummy9_1b363;
db dummy9_1b364;
db dummy9_1b365;
db dummy9_1b366;
db dummy9_1b367;
db dummy9_1b368;
db dummy9_1b369;
db dummy9_1b36a;
db dummy9_1b36b;
db dummy9_1b36c;
db dummy9_1b36d;
dw dummy9_1b36e;
db dummy9_1b370[32]; // 10ed:a4a0
db dummy9_1b390;
db dummy9_1b391;
db dummy9_1b392;
db dummy9_1b393;
db dummy9_1b394;
db dummy9_1b395;
db dummy9_1b396;
db dummy9_1b397;
db dummy9_1b398;
db dummy9_1b399;
dw dummy9_1b39a;
db dummy9_1b39c[32]; // 10ed:a4cc
db dummy9_1b3bc[32]; // 10ed:a4ec
db dummy9_1b3dc[32]; // 10ed:a50c
db dummy9_1b3fc[32]; // 10ed:a52c
db dummy9_1b41c[32]; // 10ed:a54c
db dummy9_1b43c[32]; // 10ed:a56c
db dummy9_1b45c[32]; // 10ed:a58c
db dummy9_1b47c;
db dummy9_1b47d;
db dummy9_1b47e;
db dummy9_1b47f;
db dummy9_1b480;
db dummy9_1b481;
db dummy9_1b482;
db dummy9_1b483;
db dummy9_1b484;
db dummy9_1b485;
db dummy9_1b486;
db dummy9_1b487;
db dummy9_1b488;
db dummy9_1b489;
db dummy9_1b48a;
db dummy9_1b48b;
db dummy9_1b48c;
db dummy9_1b48d;
db dummy9_1b48e;
db unk_29a6f; // 10ed:a5bf
dw word_29a70; // 10ed:a5c0
db dummy9_1b492[32]; // 10ed:a5c2
db dummy9_1b4b2[32]; // 10ed:a5e2
db dummy9_1b4d2[32]; // 10ed:a602
db dummy9_1b4f2[32]; // 10ed:a622
db dummy9_1b512[32]; // 10ed:a642
db dummy9_1b532[32]; // 10ed:a662
db dummy9_1b552;
db dummy9_1b553;
db dummy9_1b554;
db dummy9_1b555;
db dummy9_1b556;
db dummy9_1b557;
db dummy9_1b558;
db dummy9_1b559;
db dummy9_1b55a;
db dummy9_1b55b;
db dummy9_1b55c;
db dummy9_1b55d;
db dummy9_1b55e;
db dummy9_1b55f;
db dummy9_1b560;
db dummy9_1b561;
db dummy9_1b562;
db dummy9_1b563;
db dummy9_1b564;
db dummy9_1b565;
db dummy9_1b566;
db dummy9_1b567;
dw dummy9_1b568;
dw dummy9_1b56a;
dw dummy9_1b56c;
dw word_29b4e; // 10ed:a69e
db dummy9_1b570;
db dummy9_1b571;
db dummy9_1b572;
db dummy9_1b573;
db dummy9_1b574;
db dummy9_1b575;
db dummy9_1b576;
db dummy9_1b577;
db dummy9_1b578;
db dummy9_1b579;
db dummy9_1b57a;
db dummy9_1b57b;
db dummy9_1b57c;
db dummy9_1b57d;
db dummy9_1b57e;
db dummy9_1b57f;
db unk_29b60; // 10ed:a6b0
db dummy9_1b581[32]; // 10ed:a6b1
db dummy9_1b5a1;
db dummy9_1b5a2;
db byte_29b83; // 10ed:a6d3
db dummy9_1b5a4[32]; // 10ed:a6d4
db dummy9_1b5c4[32]; // 10ed:a6f4
db dummy9_1b5e4[32]; // 10ed:a714
db dummy9_1b604[32]; // 10ed:a734
db dummy9_1b624[32]; // 10ed:a754
db dummy9_1b644[32]; // 10ed:a774
db dummy9_1b664[32]; // 10ed:a794
db dummy9_1b684;
db dummy9_1b685;
db dummy9_1b686;
db dummy9_1b687;
db dummy9_1b688;
db dummy9_1b689;
db dummy9_1b68a;
db dummy9_1b68b;
db dummy9_1b68c;
db dummy9_1b68d;
db dummy9_1b68e;
db dummy9_1b68f;
db dummy9_1b690;
db dummy9_1b691;
db unk_29c72; // 10ed:a7c2
db dummy9_1b693[32]; // 10ed:a7c3
db dummy9_1b6b3[32]; // 10ed:a7e3
db dummy9_1b6d3[32]; // 10ed:a803
db dummy9_1b6f3[32]; // 10ed:a823
db dummy9_1b713[32]; // 10ed:a843
db dummy9_1b733[32]; // 10ed:a863
db dummy9_1b753[32]; // 10ed:a883
db dummy9_1b773[32]; // 10ed:a8a3
db dummy9_1b793[32]; // 10ed:a8c3
db dummy9_1b7b3[32]; // 10ed:a8e3
db dummy9_1b7d3;
db dummy9_1b7d4;
db dummy9_1b7d5;
db dummy9_1b7d6;
db dummy9_1b7d7;
db dummy9_1b7d8;
db dummy9_1b7d9;
db dummy9_1b7da;
db dummy9_1b7db;
db dummy9_1b7dc;
db dummy9_1b7dd;
db dummy9_1b7de;
dw word_29dbf; // 10ed:a90f
dw word_29dc1; // 10ed:a911
db dummy9_1b7e3;
db dummy9_1b7e4;
dw word_29dc5; // 10ed:a915
db dummy9_1b7e7;
db byte_29dc8; // 10ed:a918
db dummy9_1b7e9[32]; // 10ed:a919
db dummy9_1b809[32]; // 10ed:a939
db dummy9_1b829[32]; // 10ed:a959
db dummy9_1b849;
dw dummy9_1b84a;
dw dummy9_1b84c;
db dummy9_1b84e;
db dummy9_1b84f;
db dummy9_1b850;
db dummy9_1b851;
db dummy9_1b852;
db dummy9_1b853;
dw word_29e34; // 10ed:a984
db dummy9_1b856;
db dummy9_1b857;
db dummy9_1b858;
db dummy9_1b859;
db dummy9_1b85a;
db dummy9_1b85b;
db dummy9_1b85c;
db dummy9_1b85d;
db dummy9_1b85e;
db dummy9_1b85f;
dw word_29e40; // 10ed:a990
db dummy9_1b862;
db dummy9_1b863;
dw word_29e44; // 10ed:a994
db dummy9_1b866;
db dummy9_1b867;
dw word_29e48; // 10ed:a998
dw word_29e4a; // 10ed:a99a
db byte_29e4c; // 10ed:a99c
db dummy9_1b86d;
db dummy9_1b86e;
db dummy9_1b86f;
db dummy9_1b870;
db dummy9_1b871;
db dummy9_1b872;
db dummy9_1b873;
db dummy9_1b874;
db dummy9_1b875;
db dummy9_1b876;
db dummy9_1b877;
db dummy9_1b878;
db dummy9_1b879;
db dummy9_1b87a;
db dummy9_1b87b;
dw word_29e5c; // 10ed:a9ac
dw word_29e5e; // 10ed:a9ae
dw word_29e60; // 10ed:a9b0
dw word_29e62; // 10ed:a9b2
db dummy9_1b884;
db dummy9_1b885;
db dummy9_1b886;
db dummy9_1b887;
db dummy9_1b888;
db dummy9_1b889;
db dummy9_1b88a;
db dummy9_1b88b;
db dummy9_1b88c;
db dummy9_1b88d;
db dummy9_1b88e;
db dummy9_1b88f;
db dummy9_1b890;
db dummy9_1b891;
db dummy9_1b892;
db dummy9_1b893;
db dummy9_1b894;
db dummy9_1b895;
db dummy9_1b896;
db dummy9_1b897;
db dummy9_1b898;
db dummy9_1b899;
db dummy9_1b89a;
db dummy9_1b89b;
db dummy9_1b89c;
db dummy9_1b89d;
db dummy9_1b89e;
db dummy9_1b89f;
dw word_29e80; // 10ed:a9d0
db dummy9_1b8a2[32]; // 10ed:a9d2
db dummy9_1b8c2[32]; // 10ed:a9f2
db dummy9_1b8e2[32]; // 10ed:aa12
db dummy9_1b902[32]; // 10ed:aa32
db dummy9_1b922;
db dummy9_1b923;
db dummy9_1b924;
db dummy9_1b925;
db dummy9_1b926;
db dummy9_1b927;
db dummy9_1b928;
db dummy9_1b929;
db dummy9_1b92a;
db dummy9_1b92b;
db dummy9_1b92c;
db dummy9_1b92d;
db dummy9_1b92e;
db dummy9_1b92f;
db dummy9_1b930;
db dummy9_1b931;
db dummy9_1b932;
db dummy9_1b933;
db dummy9_1b934;
db dummy9_1b935;
dw word_29f16; // 10ed:aa66
dw dummy9_1b938;
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
db dummy9_1b9f5; // 10ed:ab25
db dummy9_1b9f6; // 10ed:ab26
db dummy9_1b9f7; // 10ed:ab27
db dummy9_1b9f8; // 10ed:ab28
db dummy9_1b9f9; // 10ed:ab29
db dummy9_1b9fa; // 10ed:ab2a
db dummy9_1b9fb; // 10ed:ab2b
db dummy9_1b9fc; // 10ed:ab2c
db dummy9_1b9fd; // 10ed:ab2d
dw dummy9_1b9fe; // 10ed:ab2e
db dummy9_1ba00[32]; // 10ed:ab30
db dummy9_1ba20; // 10ed:ab50
db dummy9_1ba21; // 10ed:ab51
db dummy9_1ba22; // 10ed:ab52
db dummy9_1ba23; // 10ed:ab53
db dummy9_1ba24; // 10ed:ab54
db dummy9_1ba25; // 10ed:ab55
db dummy9_1ba26; // 10ed:ab56
db dummy9_1ba27; // 10ed:ab57
db dummy9_1ba28; // 10ed:ab58
db dummy9_1ba29; // 10ed:ab59
db dummy9_1ba2a; // 10ed:ab5a
db dummy9_1ba2b; // 10ed:ab5b
db dummy9_1ba2c; // 10ed:ab5c
db dummy9_1ba2d; // 10ed:ab5d
db dummy9_1ba2e; // 10ed:ab5e
db dummy9_1ba2f; // 10ed:ab5f
db dummy9_1ba30; // 10ed:ab60
db dummy9_1ba31; // 10ed:ab61
db dummy9_1ba32; // 10ed:ab62
db dummy9_1ba33; // 10ed:ab63
db dummy9_1ba34; // 10ed:ab64
db dummy9_1ba35; // 10ed:ab65
db dummy9_1ba36; // 10ed:ab66
db dummy9_1ba37; // 10ed:ab67
db dummy9_1ba38; // 10ed:ab68
db dummy9_1ba39; // 10ed:ab69
dw word_2a01a; // 10ed:ab6a
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
db dummy9_1ba63[32]; // 10ed:ab93
db dummy9_1ba83[32]; // 10ed:abb3
db dummy9_1baa3[32]; // 10ed:abd3
db dummy9_1bac3[32]; // 10ed:abf3
db dummy9_1bae3; // 10ed:ac13
db dummy9_1bae4; // 10ed:ac14
db dummy9_1bae5; // 10ed:ac15
db dummy9_1bae6;
db dummy9_1bae7; // 10ed:ac17
db dummy9_1bae8; // 10ed:ac18
db dummy9_1bae9; // 10ed:ac19
dw word_2a0ca; // 10ed:ac1a
db dummy9_1baec; // 10ed:ac1c
db dummy9_1baed; // 10ed:ac1d
db dummy9_1baee;
db dummy9_1baef; // 10ed:ac1f
db dummy9_1baf0; // 10ed:ac20
db dummy9_1baf1; // 10ed:ac21
dw word_2a0d2; // 10ed:ac22
db dummy9_1baf4; // 10ed:ac24
db dummy9_1baf5; // 10ed:ac25
db dummy9_1baf6; // 10ed:ac26
db dummy9_1baf7; // 10ed:ac27
dw word_2a0d8; // 10ed:ac28
db dummy9_1bafa;
db dummy9_1bafb; // 10ed:ac2b
db dummy9_1bafc;
db dummy9_1bafd; // 10ed:ac2d
db dummy9_1bafe;
db dummy9_1baff; // 10ed:ac2f
db dummy9_1bb00;
db dummy9_1bb01; // 10ed:ac31
db dummy9_1bb02;
db dummy9_1bb03; // 10ed:ac33
db dummy9_1bb04;
db dummy9_1bb05; // 10ed:ac35
dw word_2a0e6; // 10ed:ac36
db dummy9_1bb08;
db dummy9_1bb09; // 10ed:ac39
db dummy9_1bb0a;
db dummy9_1bb0b; // 10ed:ac3b
db dummy9_1bb0c;
db dummy9_1bb0d; // 10ed:ac3d
db dummy9_1bb0e;
db dummy9_1bb0f; // 10ed:ac3f
db dummy9_1bb10;
db dummy9_1bb11; // 10ed:ac41
db dummy9_1bb12;
db dummy9_1bb13; // 10ed:ac43
dw dummy9_1bb14; // 10ed:ac44
db dummy9_1bb16;
db dummy9_1bb17; // 10ed:ac47
db dummy9_1bb18;
db dummy9_1bb19; // 10ed:ac49
db dummy9_1bb1a;
db dummy9_1bb1b; // 10ed:ac4b
db dummy9_1bb1c;
db dummy9_1bb1d; // 10ed:ac4d
db dummy9_1bb1e;
db dummy9_1bb1f; // 10ed:ac4f
db dummy9_1bb20;
db dummy9_1bb21; // 10ed:ac51
dw dummy9_1bb22; // 10ed:ac52
db dummy9_1bb24[32]; // 10ed:ac54
db dummy9_1bb44[32]; // 10ed:ac74
db dummy9_1bb64[32]; // 10ed:ac94
db dummy9_1bb84[32]; // 10ed:acb4
db dummy9_1bba4[32]; // 10ed:acd4
db dummy9_1bbc4[32]; // 10ed:acf4
db dummy9_1bbe4[32]; // 10ed:ad14
db dummy9_1bc04[32]; // 10ed:ad34
db dummy9_1bc24[32]; // 10ed:ad54
db dummy9_1bc44[32]; // 10ed:ad74
db dummy9_1bc64[32]; // 10ed:ad94
db dummy9_1bc84[32]; // 10ed:adb4
db dummy9_1bca4[32]; // 10ed:add4
db dummy9_1bcc4[32]; // 10ed:adf4
db dummy9_1bce4[32]; // 10ed:ae14
db dummy9_1bd04[32]; // 10ed:ae34
db dummy9_1bd24[32]; // 10ed:ae54
db dummy9_1bd44[32]; // 10ed:ae74
db dummy9_1bd64[32]; // 10ed:ae94
db dummy9_1bd84[32]; // 10ed:aeb4
db dummy9_1bda4[32]; // 10ed:aed4
db dummy9_1bdc4[32]; // 10ed:aef4
db dummy9_1bde4[32]; // 10ed:af14
db dummy9_1be04;
db dummy9_1be05; // 10ed:af35
db dummy9_1be06;
db dummy9_1be07; // 10ed:af37
db dummy9_1be08; // 10ed:af38
db dummy9_1be09; // 10ed:af39
db dummy9_1be0a;
db dummy9_1be0b; // 10ed:af3b
db dummy9_1be0c; // 10ed:af3c
db dummy9_1be0d; // 10ed:af3d
db dummy9_1be0e;
db byte_2a3ef; // 10ed:af3f
dw word_2a3f0; // 10ed:af40
dw dummy9_1be12; // 10ed:af42
db dummy9_1be14[32]; // 10ed:af44
db dummy9_1be34[32]; // 10ed:af64
db dummy9_1be54[32]; // 10ed:af84
db dummy9_1be74[32]; // 10ed:afa4
db dummy9_1be94[32]; // 10ed:afc4
db dummy9_1beb4; // 10ed:afe4
db dummy9_1beb5;
db dummy9_1beb6; // 10ed:afe6
db dummy9_1beb7; // 10ed:afe7
db dummy9_1beb8; // 10ed:afe8
db dummy9_1beb9; // 10ed:afe9
db dummy9_1beba; // 10ed:afea
db dummy9_1bebb; // 10ed:afeb
db dummy9_1bebc; // 10ed:afec
db dummy9_1bebd; // 10ed:afed
db dummy9_1bebe; // 10ed:afee
db dummy9_1bebf; // 10ed:afef
db dummy9_1bec0; // 10ed:aff0
db dummy9_1bec1; // 10ed:aff1
db dummy9_1bec2; // 10ed:aff2
db byte_2a4a3; // 10ed:aff3
db dummy9_1bec4[32]; // 10ed:aff4
db dummy9_1bee4[32]; // 10ed:b014
db dummy9_1bf04[32]; // 10ed:b034
db dummy9_1bf24[32]; // 10ed:b054
db dummy9_1bf44[32]; // 10ed:b074
db dummy9_1bf64[32]; // 10ed:b094
db dummy9_1bf84[32]; // 10ed:b0b4
db dummy9_1bfa4[32]; // 10ed:b0d4
db dummy9_1bfc4[32]; // 10ed:b0f4
db dummy9_1bfe4[32]; // 10ed:b114
db dummy9_1c004; // 10ed:b134
db dummy9_1c005; // 10ed:b135
db dummy9_1c006; // 10ed:b136
db dummy9_1c007;
db dummy9_1c008; // 10ed:b138
db dummy9_1c009; // 10ed:b139
db dummy9_1c00a; // 10ed:b13a
db dummy9_1c00b; // 10ed:b13b
db dummy9_1c00c; // 10ed:b13c
db dummy9_1c00d; // 10ed:b13d
db dummy9_1c00e; // 10ed:b13e
db dummy9_1c00f; // 10ed:b13f
dw dummy9_1c010; // 10ed:b140
db dummy9_1c012; // 10ed:b142
db dummy9_1c013; // 10ed:b143
db dummy9_1c014; // 10ed:b144
db dummy9_1c015; // 10ed:b145
db dummy9_1c016; // 10ed:b146
db dummy9_1c017; // 10ed:b147
db dummy9_1c018; // 10ed:b148
db byte_2a5f9; // 10ed:b149
db dummy9_1c01a[32]; // 10ed:b14a
db dummy9_1c03a[32]; // 10ed:b16a
db dummy9_1c05a[32]; // 10ed:b18a
db dummy9_1c07a; // 10ed:b1aa
db dummy9_1c07b; // 10ed:b1ab
db dummy9_1c07c; // 10ed:b1ac
db dummy9_1c07d; // 10ed:b1ad
db dummy9_1c07e; // 10ed:b1ae
db dummy9_1c07f; // 10ed:b1af
db dummy9_1c080; // 10ed:b1b0
db dummy9_1c081; // 10ed:b1b1
db dummy9_1c082; // 10ed:b1b2
db dummy9_1c083; // 10ed:b1b3
db dummy9_1c084; // 10ed:b1b4
db dummy9_1c085; // 10ed:b1b5
db dummy9_1c086;
db dummy9_1c087; // 10ed:b1b7
db dummy9_1c088; // 10ed:b1b8
db dummy9_1c089; // 10ed:b1b9
db dummy9_1c08a; // 10ed:b1ba
db dummy9_1c08b; // 10ed:b1bb
db dummy9_1c08c;
db dummy9_1c08d; // 10ed:b1bd
db dummy9_1c08e; // 10ed:b1be
dw dummy9_1c08f; // 10ed:b1bf
dw dummy9_1c091; // 10ed:b1c1
db dummy9_1c093[32]; // 10ed:b1c3
db dummy9_1c0b3[32]; // 10ed:b1e3
db dummy9_1c0d3; // 10ed:b203
db dummy9_1c0d4;
db dummy9_1c0d5; // 10ed:b205
db dummy9_1c0d6; // 10ed:b206
db dummy9_1c0d7; // 10ed:b207
db dummy9_1c0d8;
db dummy9_1c0d9; // 10ed:b209
dw dummy9_1c0da; // 10ed:b20a
db dummy9_1c0dc[32]; // 10ed:b20c
db dummy9_1c0fc[32]; // 10ed:b22c
db dummy9_1c11c; // 10ed:b24c
db dummy9_1c11d; // 10ed:b24d
db dummy9_1c11e; // 10ed:b24e
db dummy9_1c11f; // 10ed:b24f
dw word_2a700; // 10ed:b250
db dummy9_1c122[32]; // 10ed:b252
db dummy9_1c142; // 10ed:b272
db dummy9_1c143; // 10ed:b273
dw dummy9_1c144; // 10ed:b274
dw dummy9_1c146; // 10ed:b276
db dummy9_1c148; // 10ed:b278
db dummy9_1c149; // 10ed:b279
db dummy9_1c14a; // 10ed:b27a
db dummy9_1c14b; // 10ed:b27b
db dummy9_1c14c; // 10ed:b27c
db dummy9_1c14d; // 10ed:b27d
db dummy9_1c14e; // 10ed:b27e
db dummy9_1c14f; // 10ed:b27f
db dummy9_1c150; // 10ed:b280
db dummy9_1c151; // 10ed:b281
db dummy9_1c152; // 10ed:b282
db dummy9_1c153; // 10ed:b283
dw word_2a734; // 10ed:b284
dw word_2a736; // 10ed:b286
db dummy9_1c158[32]; // 10ed:b288
db dummy9_1c178[32]; // 10ed:b2a8
db dummy9_1c198; // 10ed:b2c8
db dummy9_1c199; // 10ed:b2c9
db dummy9_1c19a; // 10ed:b2ca
db dummy9_1c19b; // 10ed:b2cb
db dummy9_1c19c; // 10ed:b2cc
db dummy9_1c19d; // 10ed:b2cd
db dummy9_1c19e; // 10ed:b2ce
db dummy9_1c19f; // 10ed:b2cf
db dummy9_1c1a0; // 10ed:b2d0
db dummy9_1c1a1; // 10ed:b2d1
db dummy9_1c1a2; // 10ed:b2d2
db dummy9_1c1a3; // 10ed:b2d3
db dummy9_1c1a4; // 10ed:b2d4
db dummy9_1c1a5; // 10ed:b2d5
dw word_2a786; // 10ed:b2d6
db dummy9_1c1a8[32]; // 10ed:b2d8
db dummy9_1c1c8[32]; // 10ed:b2f8
db dummy9_1c1e8[32]; // 10ed:b318
db dummy9_1c208[32]; // 10ed:b338
db dummy9_1c228[32]; // 10ed:b358
db dummy9_1c248[32]; // 10ed:b378
db dummy9_1c268[32]; // 10ed:b398
db dummy9_1c288[32]; // 10ed:b3b8
db dummy9_1c2a8[32]; // 10ed:b3d8
db dummy9_1c2c8[32]; // 10ed:b3f8
db dummy9_1c2e8[32]; // 10ed:b418
db dummy9_1c308[32]; // 10ed:b438
db dummy9_1c328[32]; // 10ed:b458
db dummy9_1c348[32]; // 10ed:b478
db dummy9_1c368[32]; // 10ed:b498
db dummy9_1c388[32]; // 10ed:b4b8
db dummy9_1c3a8[32]; // 10ed:b4d8
db dummy9_1c3c8[32]; // 10ed:b4f8
db dummy9_1c3e8[32]; // 10ed:b518
db dummy9_1c408;
db dummy9_1c409; // 10ed:b539
db dummy9_1c40a; // 10ed:b53a
db dummy9_1c40b; // 10ed:b53b
db dummy9_1c40c;
db dummy9_1c40d; // 10ed:b53d
db dummy9_1c40e; // 10ed:b53e
db dummy9_1c40f; // 10ed:b53f
db dummy9_1c410;
db dummy9_1c411; // 10ed:b541
db dummy9_1c412;
db dummy9_1c413; // 10ed:b543
db dummy9_1c414;
db dummy9_1c415; // 10ed:b545
db dummy9_1c416;
db dummy9_1c417; // 10ed:b547
dw off_2a9f8; // 10ed:b548
db dummy9_1c41a[32]; // 10ed:b54a
db dummy9_1c43a[32]; // 10ed:b56a
db dummy9_1c45a; // 10ed:b58a
db dummy9_1c45b; // 10ed:b58b
db dummy9_1c45c; // 10ed:b58c
db dummy9_1c45d; // 10ed:b58d
db dummy9_1c45e; // 10ed:b58e
db dummy9_1c45f; // 10ed:b58f
db dummy9_1c460; // 10ed:b590
db dummy9_1c461; // 10ed:b591
db dummy9_1c462; // 10ed:b592
db dummy9_1c463; // 10ed:b593
db dummy9_1c464; // 10ed:b594
db dummy9_1c465; // 10ed:b595
db dummy9_1c466; // 10ed:b596
db dummy9_1c467; // 10ed:b597
db dummy9_1c468; // 10ed:b598
db dummy9_1c469; // 10ed:b599
db dummy9_1c46a; // 10ed:b59a
db dummy9_1c46b; // 10ed:b59b
db dummy9_1c46c; // 10ed:b59c
db dummy9_1c46d; // 10ed:b59d
db dummy9_1c46e;
db dummy9_1c46f; // 10ed:b59f
dw dummy9_1c470; // 10ed:b5a0
db dummy9_1c472; // 10ed:b5a2
db dummy9_1c473; // 10ed:b5a3
db dummy9_1c474; // 10ed:b5a4
db dummy9_1c475; // 10ed:b5a5
db dummy9_1c476; // 10ed:b5a6
db dummy9_1c477; // 10ed:b5a7
db dummy9_1c478; // 10ed:b5a8
db dummy9_1c479; // 10ed:b5a9
db dummy9_1c47a; // 10ed:b5aa
dw dummy9_1c47b; // 10ed:b5ab
dw dummy9_1c47d; // 10ed:b5ad
dw dummy9_1c47f; // 10ed:b5af
dw dummy9_1c481; // 10ed:b5b1
db dummy9_1c483[32]; // 10ed:b5b3
db dummy9_1c4a3; // 10ed:b5d3
dw dummy9_1c4a4; // 10ed:b5d4
dw dummy9_1c4a6; // 10ed:b5d6
dw dummy9_1c4a8; // 10ed:b5d8
db dummy9_1c4aa;
db dummy9_1c4ab; // 10ed:b5db
db dummy9_1c4ac; // 10ed:b5dc
db dummy9_1c4ad; // 10ed:b5dd
db dummy9_1c4ae; // 10ed:b5de
dw dummy9_1c4af; // 10ed:b5df
db dummy9_1c4b1[32]; // 10ed:b5e1
db dummy9_1c4d1[32]; // 10ed:b601
db dummy9_1c4f1[32]; // 10ed:b621
db dummy9_1c511[32]; // 10ed:b641
db dummy9_1c531[32]; // 10ed:b661
db dummy9_1c551[32]; // 10ed:b681
db dummy9_1c571[32]; // 10ed:b6a1
db dummy9_1c591[32]; // 10ed:b6c1
db dummy9_1c5b1[32]; // 10ed:b6e1
db dummy9_1c5d1[32]; // 10ed:b701
db dummy9_1c5f1[32]; // 10ed:b721
db dummy9_1c611[32]; // 10ed:b741
db dummy9_1c631[32]; // 10ed:b761
db dummy9_1c651[32]; // 10ed:b781
db dummy9_1c671; // 10ed:b7a1
dw word_2ac52; // 10ed:b7a2
db dummy9_1c674; // 10ed:b7a4
db dummy9_1c675; // 10ed:b7a5
db dummy9_1c676; // 10ed:b7a6
db dummy9_1c677; // 10ed:b7a7
db dummy9_1c678; // 10ed:b7a8
db dummy9_1c679; // 10ed:b7a9
db dummy9_1c67a; // 10ed:b7aa
db dummy9_1c67b; // 10ed:b7ab
db dummy9_1c67c; // 10ed:b7ac
db dummy9_1c67d; // 10ed:b7ad
db dummy9_1c67e; // 10ed:b7ae
db dummy9_1c67f; // 10ed:b7af
db dummy9_1c680; // 10ed:b7b0
db dummy9_1c681; // 10ed:b7b1
db dummy9_1c682; // 10ed:b7b2
db dummy9_1c683; // 10ed:b7b3
dw dummy9_1c684; // 10ed:b7b4
dw dummy9_1c686; // 10ed:b7b6
db dummy9_1c688[32]; // 10ed:b7b8
db dummy9_1c6a8[32]; // 10ed:b7d8
db dummy9_1c6c8[32]; // 10ed:b7f8
db dummy9_1c6e8[32]; // 10ed:b818
db dummy9_1c708[32]; // 10ed:b838
db dummy9_1c728[32]; // 10ed:b858
db dummy9_1c748[32]; // 10ed:b878
db dummy9_1c768[32]; // 10ed:b898
db dummy9_1c788[32]; // 10ed:b8b8
db dummy9_1c7a8[32]; // 10ed:b8d8
db dummy9_1c7c8[32]; // 10ed:b8f8
db dummy9_1c7e8[32]; // 10ed:b918
db dummy9_1c808[32]; // 10ed:b938
db dummy9_1c828[32]; // 10ed:b958
db dummy9_1c848[32]; // 10ed:b978
db dummy9_1c868; // 10ed:b998
db dummy9_1c869; // 10ed:b999
db dummy9_1c86a; // 10ed:b99a
db dummy9_1c86b; // 10ed:b99b
db dummy9_1c86c; // 10ed:b99c
db dummy9_1c86d; // 10ed:b99d
db dummy9_1c86e; // 10ed:b99e
db dummy9_1c86f; // 10ed:b99f
db dummy9_1c870; // 10ed:b9a0
db dummy9_1c871; // 10ed:b9a1
db dummy9_1c872; // 10ed:b9a2
db dummy9_1c873; // 10ed:b9a3
db dummy9_1c874; // 10ed:b9a4
db dummy9_1c875; // 10ed:b9a5
db dummy9_1c876; // 10ed:b9a6
db dummy9_1c877; // 10ed:b9a7
db dummy9_1c878; // 10ed:b9a8
db dummy9_1c879; // 10ed:b9a9
db dummy9_1c87a; // 10ed:b9aa
db dummy9_1c87b; // 10ed:b9ab
db dummy9_1c87c; // 10ed:b9ac
db dummy9_1c87d; // 10ed:b9ad
db unk_2ae5e; // 10ed:b9ae
db dummy9_1c87f[32]; // 10ed:b9af
db dummy9_1c89f[32]; // 10ed:b9cf
db dummy9_1c8bf[32]; // 10ed:b9ef
db dummy9_1c8df[32]; // 10ed:ba0f
db dummy9_1c8ff[32]; // 10ed:ba2f
db dummy9_1c91f[32]; // 10ed:ba4f
db dummy9_1c93f[32]; // 10ed:ba6f
db dummy9_1c95f[32]; // 10ed:ba8f
db dummy9_1c97f[32]; // 10ed:baaf
db dummy9_1c99f[32]; // 10ed:bacf
db dummy9_1c9bf[32]; // 10ed:baef
db dummy9_1c9df[32]; // 10ed:bb0f
db dummy9_1c9ff[32]; // 10ed:bb2f
db dummy9_1ca1f[32]; // 10ed:bb4f
db dummy9_1ca3f[32]; // 10ed:bb6f
db dummy9_1ca5f; // 10ed:bb8f
db dummy9_1ca60; // 10ed:bb90
db dummy9_1ca61; // 10ed:bb91
db dummy9_1ca62; // 10ed:bb92
db dummy9_1ca63; // 10ed:bb93
dw dummy9_1ca64; // 10ed:bb94
db dummy9_1ca66[32]; // 10ed:bb96
db dummy9_1ca86[32]; // 10ed:bbb6
db dummy9_1caa6; // 10ed:bbd6
db dummy9_1caa7; // 10ed:bbd7
db dummy9_1caa8;
db dummy9_1caa9; // 10ed:bbd9
db dummy9_1caaa; // 10ed:bbda
db dummy9_1caab; // 10ed:bbdb
db dummy9_1caac;
db dummy9_1caad; // 10ed:bbdd
db dummy9_1caae; // 10ed:bbde
db dummy9_1caaf; // 10ed:bbdf
db dummy9_1cab0;
db dummy9_1cab1; // 10ed:bbe1
dw dummy9_1cab2; // 10ed:bbe2
dw dummy9_1cab4; // 10ed:bbe4
dw dummy9_1cab6; // 10ed:bbe6
dd dummy9_1cab8; // 10ed:bbe8
dw dummy9_1cabc; // 10ed:bbec
db dummy9_1cabe[32]; // 10ed:bbee
db dummy9_1cade[32]; // 10ed:bc0e
db dummy9_1cafe[32]; // 10ed:bc2e
db dummy9_1cb1e[32]; // 10ed:bc4e
dw _work_2b11e_sal_data; // 10ed:bc6e
db dummy9_1cb40[32]; // 10ed:bc70
db dummy9_1cb60[32]; // 10ed:bc90
db dummy9_1cb80[32]; // 10ed:bcb0
db dummy9_1cba0[32]; // 10ed:bcd0
db dummy9_1cbc0[32]; // 10ed:bcf0
db dummy9_1cbe0[32]; // 10ed:bd10
db dummy9_1cc00[32]; // 10ed:bd30
db dummy9_1cc20[32]; // 10ed:bd50
db dummy9_1cc40[32]; // 10ed:bd70
db dummy9_1cc60[32]; // 10ed:bd90
db dummy9_1cc80[32]; // 10ed:bdb0
db dummy9_1cca0[32]; // 10ed:bdd0
db dummy9_1ccc0[32]; // 10ed:bdf0
db dummy9_1cce0[32]; // 10ed:be10
db dummy9_1cd00[32]; // 10ed:be30
db dummy9_1cd20;
db dummy9_1cd21;
db dummy9_1cd22; // 10ed:be52
db dummy9_1cd23;
db dummy9_1cd24; // 10ed:be54
db dummy9_1cd25;
db dummy9_1cd26; // 10ed:be56
db unk_2b307; // 10ed:be57
db dummy9_1cd28[32]; // 10ed:be58
db dummy9_1cd48; // 10ed:be78
db dummy9_1cd49;
db dummy9_1cd4a; // 10ed:be7a
db dummy9_1cd4b;
db dummy9_1cd4c; // 10ed:be7c
db dummy9_1cd4d; // 10ed:be7d
db dummy9_1cd4e; // 10ed:be7e
db dummy9_1cd4f;
db dummy9_1cd50; // 10ed:be80
db dummy9_1cd51; // 10ed:be81
db dummy9_1cd52; // 10ed:be82
db dummy9_1cd53;
db dummy9_1cd54; // 10ed:be84
db dummy9_1cd55;
db dummy9_1cd56;
db dummy9_1cd57;
db dummy9_1cd58; // 10ed:be88
db dummy9_1cd59;
db dummy9_1cd5a; // 10ed:be8a
db dummy9_1cd5b; // 10ed:be8b
db dummy9_1cd5c; // 10ed:be8c
dw dummy9_1cd5d; // 10ed:be8d
dw dummy9_1cd5f;
dw dummy9_1cd61; // 10ed:be91
dw dummy9_1cd63; // 10ed:be93
dw dummy9_1cd65; // 10ed:be95
dw dummy9_1cd67; // 10ed:be97
dw dummy9_1cd69;
db dummy9_1cd6b;
db dummy9_1cd6c; // 10ed:be9c
db dummy9_1cd6d;
db dummy9_1cd6e; // 10ed:be9e
db dummy9_1cd6f; // 10ed:be9f
db dummy9_1cd70; // 10ed:bea0
dw dummy9_1cd71; // 10ed:bea1
dw dummy9_1cd73; // 10ed:bea3
dw dummy9_1cd75; // 10ed:bea5
dw dummy9_1cd77; // 10ed:bea7
dw dummy9_1cd79; // 10ed:bea9
dw dummy9_1cd7b; // 10ed:beab
db dummy9_1cd7d[32]; // 10ed:bead
db dummy9_1cd9d[32]; // 10ed:becd
db dummy9_1cdbd[32]; // 10ed:beed
db dummy9_1cddd[32]; // 10ed:bf0d
db dummy9_1cdfd[32]; // 10ed:bf2d
db dummy9_1ce1d[32]; // 10ed:bf4d
db dummy9_1ce3d[32]; // 10ed:bf6d
db dummy9_1ce5d[32]; // 10ed:bf8d
db dummy9_1ce7d[32]; // 10ed:bfad
db dummy9_1ce9d[32]; // 10ed:bfcd
db dummy9_1cebd[32]; // 10ed:bfed
db dummy9_1cedd[32]; // 10ed:c00d
db dummy9_1cefd[32]; // 10ed:c02d
db dummy9_1cf1d[32]; // 10ed:c04d
db dummy9_1cf3d[32]; // 10ed:c06d
db dummy9_1cf5d[32]; // 10ed:c08d
db dummy9_1cf7d; // 10ed:c0ad
db dummy9_1cf7e; // 10ed:c0ae
db dummy9_1cf7f;
db dummy9_1cf80;
db dummy9_1cf81; // 10ed:c0b1
db dummy9_1cf82; // 10ed:c0b2
db dummy9_1cf83; // 10ed:c0b3
db dummy9_1cf84;
db dummy9_1cf85; // 10ed:c0b5
db unk_2b566; // 10ed:c0b6
db dummy9_1cf87[32]; // 10ed:c0b7
db dummy9_1cfa7[32]; // 10ed:c0d7
db dummy9_1cfc7[32]; // 10ed:c0f7
db dummy9_1cfe7[32]; // 10ed:c117
db dummy9_1d007[32]; // 10ed:c137
db dummy9_1d027[32]; // 10ed:c157
db dummy9_1d047[32]; // 10ed:c177
db dummy9_1d067[32]; // 10ed:c197
db dummy9_1d087[32]; // 10ed:c1b7
db dummy9_1d0a7[32]; // 10ed:c1d7
db dummy9_1d0c7[32]; // 10ed:c1f7
db dummy9_1d0e7[32]; // 10ed:c217
db dummy9_1d107[32]; // 10ed:c237
db dummy9_1d127[32]; // 10ed:c257
db dummy9_1d147[32]; // 10ed:c277
db dummy9_1d167[32]; // 10ed:c297
db dummy9_1d187[32]; // 10ed:c2b7
db dummy9_1d1a7[32]; // 10ed:c2d7
db dummy9_1d1c7[32]; // 10ed:c2f7
db dummy9_1d1e7[32]; // 10ed:c317
db dummy9_1d207[32]; // 10ed:c337
db dummy9_1d227[32]; // 10ed:c357
db dummy9_1d247[32]; // 10ed:c377
db dummy9_1d267[32]; // 10ed:c397
db dummy9_1d287[32]; // 10ed:c3b7
db dummy9_1d2a7[32]; // 10ed:c3d7
db dummy9_1d2c7[32]; // 10ed:c3f7
db dummy9_1d2e7[32]; // 10ed:c417
db dummy9_1d307[32]; // 10ed:c437
db dummy9_1d327[32]; // 10ed:c457
db dummy9_1d347[32]; // 10ed:c477
db dummy9_1d367[32]; // 10ed:c497
db dummy9_1d387[32]; // 10ed:c4b7
db dummy9_1d3a7[32]; // 10ed:c4d7
db dummy9_1d3c7[32]; // 10ed:c4f7
db dummy9_1d3e7[32]; // 10ed:c517
db dummy9_1d407[32]; // 10ed:c537
db dummy9_1d427[32]; // 10ed:c557
db dummy9_1d447[32]; // 10ed:c577
db dummy9_1d467[32]; // 10ed:c597
db dummy9_1d487[32]; // 10ed:c5b7
db dummy9_1d4a7[32]; // 10ed:c5d7
db dummy9_1d4c7[32]; // 10ed:c5f7
db dummy9_1d4e7[32]; // 10ed:c617
db dummy9_1d507[32]; // 10ed:c637
db dummy9_1d527[32]; // 10ed:c657
db dummy9_1d547[32]; // 10ed:c677
db dummy9_1d567[32]; // 10ed:c697
db dummy9_1d587[32]; // 10ed:c6b7
db dummy9_1d5a7[32]; // 10ed:c6d7
db dummy9_1d5c7[32]; // 10ed:c6f7
db dummy9_1d5e7[32]; // 10ed:c717
db dummy9_1d607[32]; // 10ed:c737
db dummy9_1d627[32]; // 10ed:c757
db dummy9_1d647[32]; // 10ed:c777
db dummy9_1d667[32]; // 10ed:c797
db dummy9_1d687[32]; // 10ed:c7b7
db dummy9_1d6a7[32]; // 10ed:c7d7
db dummy9_1d6c7[32]; // 10ed:c7f7
db dummy9_1d6e7[32]; // 10ed:c817
db dummy9_1d707;
db dummy9_1d708;
db dummy9_1d709;
db dummy9_1d70a;
db dummy9_1d70b;
db dummy9_1d70c;
db dummy9_1d70d;
db dummy9_1d70e;
db dummy9_1d70f;
db byte_2bcf0; // 10ed:c840
db dummy9_1d711[32]; // 10ed:c841
db dummy9_1d731[32]; // 10ed:c861
db dummy9_1d751[32]; // 10ed:c881
db dummy9_1d771[32]; // 10ed:c8a1
db dummy9_1d791[32]; // 10ed:c8c1
db dummy9_1d7b1;
db dummy9_1d7b2;
db dummy9_1d7b3;
db dummy9_1d7b4;
db dummy9_1d7b5;
db dummy9_1d7b6;
db dummy9_1d7b7;
db dummy9_1d7b8;
db dummy9_1d7b9;
db dummy9_1d7ba;
db dummy9_1d7bb;
db dummy9_1d7bc;
dd dword_2bd9d; // 10ed:c8ed
db dummy9_1d7c1;
db dummy9_1d7c2;
db dummy9_1d7c3;
db dummy9_1d7c4;
db dummy9_1d7c5;
db dummy9_1d7c6;
db dummy9_1d7c7;
db dummy9_1d7c8;
db dummy9_1d7c9;
db dummy9_1d7ca;
db dummy9_1d7cb;
db dummy9_1d7cc;
db dummy9_1d7cd;
db dummy9_1d7ce;
db dummy9_1d7cf;
db dummy9_1d7d0;
db dummy9_1d7d1;
db dummy9_1d7d2;
db dummy9_1d7d3;
db dummy9_1d7d4;
dd dummy9_1d7d5;
dd dummy9_1d7d9;
dd dword_2bdbd; // 10ed:c90d
db dummy9_1d7e1;
db dummy9_1d7e2;
db dummy9_1d7e3;
db dummy9_1d7e4;
db dummy9_1d7e5;
db dummy9_1d7e6;
db dummy9_1d7e7;
db dummy9_1d7e8;
db dummy9_1d7e9;
db dummy9_1d7ea;
db dummy9_1d7eb;
db dummy9_1d7ec;
db dummy9_1d7ed;
db dummy9_1d7ee;
db dummy9_1d7ef;
db dummy9_1d7f0;
db dummy9_1d7f1;
db dummy9_1d7f2;
db dummy9_1d7f3;
db dummy9_1d7f4;
db dummy9_1d7f5;
db dummy9_1d7f6;
db dummy9_1d7f7;
db dummy9_1d7f8;
db dummy9_1d7f9;
db dummy9_1d7fa;
db dummy9_1d7fb;
db dummy9_1d7fc;
dd dummy9_1d7fd;
db dummy9_1d801;
db dummy9_1d802;
db dummy9_1d803;
db dummy9_1d804;
db dummy9_1d805;
db dummy9_1d806;
db dummy9_1d807;
db dummy9_1d808;
db dummy9_1d809;
db dummy9_1d80a;
db dummy9_1d80b;
db dummy9_1d80c;
db dummy9_1d80d;
db dummy9_1d80e;
db dummy9_1d80f;
db dummy9_1d810;
db dummy9_1d811;
db dummy9_1d812;
db dummy9_1d813;
db dummy9_1d814;
db dummy9_1d815;
db dummy9_1d816;
db dummy9_1d817;
db dummy9_1d818;
dd dword_2bdf9; // 10ed:c949
dd dummy9_1d81d;
db dummy9_1d821;
db dummy9_1d822;
db dummy9_1d823;
db dummy9_1d824;
db dummy9_1d825;
db dummy9_1d826;
db dummy9_1d827;
db dummy9_1d828;
db dummy9_1d829;
db dummy9_1d82a;
db dummy9_1d82b;
db dummy9_1d82c;
db dummy9_1d82d;
db dummy9_1d82e;
db dummy9_1d82f;
db dummy9_1d830;
db dummy9_1d831;
db dummy9_1d832;
db dummy9_1d833;
db dummy9_1d834;
dd dword_2be15; // 10ed:c965
dd dummy9_1d839;
db dummy9_1d83d;
db dummy9_1d83e;
db dummy9_1d83f;
db dummy9_1d840;
db dummy9_1d841;
db dummy9_1d842;
db dummy9_1d843;
db dummy9_1d844;
db dummy9_1d845;
db dummy9_1d846;
db dummy9_1d847;
db dummy9_1d848;
db dummy9_1d849;
db dummy9_1d84a;
db dummy9_1d84b;
db dummy9_1d84c;
dd dword_2be2d; // 10ed:c97d
dd dword_2be31; // 10ed:c981
db dummy9_1d855;
db dummy9_1d856;
db dummy9_1d857;
db dummy9_1d858;
dd dummy9_1d859;
dd dword_2be3d; // 10ed:c98d
dd dword_2be41; // 10ed:c991
dd dword_2be45; // 10ed:c995
db dummy9_1d869;
db dummy9_1d86a;
db dummy9_1d86b;
db dummy9_1d86c;
db dummy9_1d86d;
db dummy9_1d86e;
db dummy9_1d86f;
db dummy9_1d870;
db dummy9_1d871;
db dummy9_1d872;
db dummy9_1d873;
db dummy9_1d874;
dd dummy9_1d875;
db dummy9_1d879;
db dummy9_1d87a;
db dummy9_1d87b;
db dummy9_1d87c;
dd dword_2be5d; // 10ed:c9ad
db dummy9_1d881;
db dummy9_1d882;
db dummy9_1d883;
db dummy9_1d884;
db dummy9_1d885;
db dummy9_1d886;
db dummy9_1d887;
db dummy9_1d888;
db dummy9_1d889;
db dummy9_1d88a;
db dummy9_1d88b;
db dummy9_1d88c;
dd dummy9_1d88d;
db dummy9_1d891[32]; // 10ed:c9c1
db dummy9_1d8b1;
db dummy9_1d8b2;
db dummy9_1d8b3;
db dummy9_1d8b4;
db dummy9_1d8b5;
db dummy9_1d8b6;
dd dummy9_1d8b7;
db dummy9_1d8bb[32]; // 10ed:c9eb
db dummy9_1d8db[32]; // 10ed:ca0b
db dummy9_1d8fb[32]; // 10ed:ca2b
db dummy9_1d91b[32]; // 10ed:ca4b
db dummy9_1d93b[32]; // 10ed:ca6b
db dummy9_1d95b[32]; // 10ed:ca8b
db dummy9_1d97b[32]; // 10ed:caab
db dummy9_1d99b[32]; // 10ed:cacb
db dummy9_1d9bb[32]; // 10ed:caeb
db dummy9_1d9db[32]; // 10ed:cb0b
db dummy9_1d9fb[32]; // 10ed:cb2b
db dummy9_1da1b[32]; // 10ed:cb4b
db dummy9_1da3b[32]; // 10ed:cb6b
db dummy9_1da5b[32]; // 10ed:cb8b
db dummy9_1da7b[32]; // 10ed:cbab
db dummy9_1da9b;
db dummy9_1da9c;
db dummy9_1da9d;
db dummy9_1da9e;
db dummy9_1da9f;
db dummy9_1daa0;
db unk_2c081; // 10ed:cbd1
db dummy9_1daa2[32]; // 10ed:cbd2
db dummy9_1dac2[32]; // 10ed:cbf2
db dummy9_1dae2[32]; // 10ed:cc12
db dummy9_1db02[32]; // 10ed:cc32
db dummy9_1db22[32]; // 10ed:cc52
db dummy9_1db42[32]; // 10ed:cc72
db dummy9_1db62;
db dummy9_1db63;
dw dummy9_1db64;
db dummy9_1db66[32]; // 10ed:cc96
db dummy9_1db86[32]; // 10ed:ccb6
db dummy9_1dba6;
db dummy9_1dba7;
db dummy9_1dba8;
db dummy9_1dba9;
db dummy9_1dbaa;
db dummy9_1dbab;
db dummy9_1dbac;
db dummy9_1dbad;
db dummy9_1dbae;
db dummy9_1dbaf;
db dummy9_1dbb0;
db dummy9_1dbb1;
db dummy9_1dbb2;
db dummy9_1dbb3;
db dummy9_1dbb4;
db dummy9_1dbb5;
db dummy9_1dbb6;
db dummy9_1dbb7;
db dummy9_1dbb8;
db dummy9_1dbb9;
db dummy9_1dbba;
db dummy9_1dbbb;
db dummy9_1dbbc;
db dummy9_1dbbd;
dw word_2c19e; // 10ed:ccee
db dummy9_1dbc0[32]; // 10ed:ccf0
db dummy9_1dbe0[32]; // 10ed:cd10
db dummy9_1dc00[32]; // 10ed:cd30
db dummy9_1dc20[32]; // 10ed:cd50
db dummy9_1dc40[32]; // 10ed:cd70
db dummy9_1dc60[32]; // 10ed:cd90
db dummy9_1dc80[32]; // 10ed:cdb0
db dummy9_1dca0[32]; // 10ed:cdd0
db dummy9_1dcc0[32]; // 10ed:cdf0
db dummy9_1dce0[32]; // 10ed:ce10
db dummy9_1dd00[32]; // 10ed:ce30
db dummy9_1dd20; // 10ed:ce50
db dummy9_1dd21; // 10ed:ce51
db dummy9_1dd22; // 10ed:ce52
db dummy9_1dd23; // 10ed:ce53
db dummy9_1dd24; // 10ed:ce54
db dummy9_1dd25; // 10ed:ce55
db dummy9_1dd26; // 10ed:ce56
db dummy9_1dd27; // 10ed:ce57
db dummy9_1dd28; // 10ed:ce58
db dummy9_1dd29; // 10ed:ce59
db dummy9_1dd2a; // 10ed:ce5a
db dummy9_1dd2b; // 10ed:ce5b
db dummy9_1dd2c; // 10ed:ce5c
db dummy9_1dd2d; // 10ed:ce5d
db dummy9_1dd2e; // 10ed:ce5e
db dummy9_1dd2f; // 10ed:ce5f
db dummy9_1dd30; // 10ed:ce60
db dummy9_1dd31; // 10ed:ce61
db dummy9_1dd32; // 10ed:ce62
db dummy9_1dd33; // 10ed:ce63
db dummy9_1dd34; // 10ed:ce64
db dummy9_1dd35; // 10ed:ce65
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
db byte_2c395; // 10ed:cee5
db byte_2c396; // 10ed:cee6
db dummy9_1ddb7;
db byte_2c398; // 10ed:cee8
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
dw word_2ca20; // 10ed:d570
db dummy9_1e442[32]; // 10ed:d572
db dummy9_1e462[32]; // 10ed:d592
db dummy9_1e482[32]; // 10ed:d5b2
db dummy9_1e4a2[32]; // 10ed:d5d2
db dummy9_1e4c2[32]; // 10ed:d5f2
db dummy9_1e4e2[32]; // 10ed:d612
db dummy9_1e502[32]; // 10ed:d632
db dummy9_1e522[32]; // 10ed:d652
db dummy9_1e542[32]; // 10ed:d672
db dummy9_1e562[32]; // 10ed:d692
db dummy9_1e582[32]; // 10ed:d6b2
db dummy9_1e5a2[32]; // 10ed:d6d2
db dummy9_1e5c2; // 10ed:d6f2
db dummy9_1e5c3; // 10ed:d6f3
db dummy9_1e5c4; // 10ed:d6f4
db dummy9_1e5c5; // 10ed:d6f5
db dummy9_1e5c6;
db dummy9_1e5c7; // 10ed:d6f7
db dummy9_1e5c8; // 10ed:d6f8
db dummy9_1e5c9;
db dummy9_1e5ca; // 10ed:d6fa
db dummy9_1e5cb; // 10ed:d6fb
db dummy9_1e5cc; // 10ed:d6fc
db dummy9_1e5cd;
db dummy9_1e5ce; // 10ed:d6fe
db dummy9_1e5cf; // 10ed:d6ff
db dummy9_1e5d0; // 10ed:d700
db dummy9_1e5d1; // 10ed:d701
dw dummy9_1e5d2; // 10ed:d702
dw dummy9_1e5d4; // 10ed:d704
db byte_2cbb6; // 10ed:d706
db byte_2cbb7; // 10ed:d707
db byte_2cbb8; // 10ed:d708
db byte_2cbb9; // 10ed:d709
db dummy9_1e5da; // 10ed:d70a
dw dummy9_1e5db; // 10ed:d70b
db dummy9_1e5dd; // 10ed:d70d
db byte_2cbbe; // 10ed:d70e
db byte_2cbbf; // 10ed:d70f
db byte_2cbc0; // 10ed:d710
dw word_2cbc1; // 10ed:d711
dw dummy9_1e5e3;
dw dummy9_1e5e5; // 10ed:d715
dw dummy9_1e5e7; // 10ed:d717
dw dummy9_1e5e9;
db byte_2cbcb; // 10ed:d71b
db byte_2cbcc; // 10ed:d71c
dw word_2cbcd; // 10ed:d71d
dw word_2cbcf; // 10ed:d71f
db dummy9_1e5f1;
db dummy9_1e5f2;
db dummy9_1e5f3; // 10ed:d723
db dummy9_1e5f4; // 10ed:d724
db dummy9_1e5f5; // 10ed:d725
db dummy9_1e5f6; // 10ed:d726
db dummy9_1e5f7;
dw word_2cbd8; // 10ed:d728
dw word_2cbda; // 10ed:d72a
dw word_2cbdc; // 10ed:d72c
db dummy9_1e5fe;
db byte_2cbdf; // 10ed:d72f
db dummy9_1e600;
db dummy9_1e601; // 10ed:d731
db dummy9_1e602; // 10ed:d732
db dummy9_1e603; // 10ed:d733
db dummy9_1e604; // 10ed:d734
db dummy9_1e605;
db dummy9_1e606;
db dummy9_1e607; // 10ed:d737
db dummy9_1e608; // 10ed:d738
db dummy9_1e609; // 10ed:d739
db dummy9_1e60a; // 10ed:d73a
db dummy9_1e60b; // 10ed:d73b
dw word_2cbec; // 10ed:d73c
dw word_2cbee; // 10ed:d73e
dw word_2cbf0; // 10ed:d740
dw word_2cbf2; // 10ed:d742
db dummy9_1e614;
db dummy9_1e615; // 10ed:d745
dw word_2cbf6; // 10ed:d746
db dummy9_1e618; // 10ed:d748
db dummy9_1e619; // 10ed:d749
db dummy9_1e61a;
db dummy9_1e61b;
db dummy9_1e61c; // 10ed:d74c
db dummy9_1e61d;
db dummy9_1e61e; // 10ed:d74e
db dummy9_1e61f; // 10ed:d74f
dw word_2cc00; // 10ed:d750
db byte_2cc02; // 10ed:d752
db byte_2cc03; // 10ed:d753
db byte_2cc04; // 10ed:d754
db byte_2cc05; // 10ed:d755
db byte_2cc06; // 10ed:d756
db byte_2cc07; // 10ed:d757
db byte_2cc08; // 10ed:d758
dw dummy9_1e629; // 10ed:d759
dw dummy9_1e62b; // 10ed:d75b
dw dummy9_1e62d; // 10ed:d75d
db dummy9_1e62f;
db dummy9_1e630;
db byte_2cc11; // 10ed:d761
db byte_2cc12; // 10ed:d762
dw word_2cc13; // 10ed:d763
db byte_2cc15; // 10ed:d765
db byte_2cc16; // 10ed:d766
db byte_2cc17; // 10ed:d767
db dummy9_1e638;
db byte_2cc19; // 10ed:d769
db byte_2cc1a; // 10ed:d76a
db byte_2cc1b; // 10ed:d76b
db dummy9_1e63c; // 10ed:d76c
db dummy9_1e63d;
db byte_2cc1e; // 10ed:d76e
dd dummy9_1e63f; // 10ed:d76f
dw dummy9_1e643; // 10ed:d773
dw dummy9_1e645;
dw dummy9_1e647; // 10ed:d777
dw word_2cc29; // 10ed:d779
dw dummy9_1e64b;
db dummy9_1e64d;
db dummy9_1e64e; // 10ed:d77e
dw dummy9_1e64f; // 10ed:d77f
db dummy9_1e651; // 10ed:d781
dw dummy9_1e652; // 10ed:d782
db dummy9_1e654;
db dummy9_1e655; // 10ed:d785
dw word_2cc36; // 10ed:d786
dw dummy9_1e658; // 10ed:d788
db dummy9_1e65a;
db dummy9_1e65b;
db dummy9_1e65c; // 10ed:d78c
db dummy9_1e65d; // 10ed:d78d
db dummy9_1e65e; // 10ed:d78e
db dummy9_1e65f; // 10ed:d78f
db dummy9_1e660;
db dummy9_1e661;
db dummy9_1e662;
db dummy9_1e663; // 10ed:d793
db dummy9_1e664; // 10ed:d794
db dummy9_1e665; // 10ed:d795
db dummy9_1e666; // 10ed:d796
db dummy9_1e667;
db dummy9_1e668;
db dummy9_1e669; // 10ed:d799
db dummy9_1e66a; // 10ed:d79a
db dummy9_1e66b; // 10ed:d79b
db dummy9_1e66c; // 10ed:d79c
db byte_2cc4d; // 10ed:d79d
db dummy9_1e66e;
db dummy9_1e66f;
db unk_2cc50; // 10ed:d7a0
db dummy9_1e671; // 10ed:d7a1
db dummy9_1e672; // 10ed:d7a2
db dummy9_1e673; // 10ed:d7a3
db byte_2cc54; // 10ed:d7a4
db byte_2cc55; // 10ed:d7a5
dw word_2cc56; // 10ed:d7a6
dw word_2cc58; // 10ed:d7a8
dw word_2cc5a; // 10ed:d7aa
db dummy9_1e67c;
db dummy9_1e67d;
db dummy9_1e67e;
db dummy9_1e67f; // 10ed:d7af
dw word_2cc60; // 10ed:d7b0
db dummy9_1e682; // 10ed:d7b2
db dummy9_1e683;
dw dummy9_1e684;
dw dummy9_1e686; // 10ed:d7b6
dw dummy9_1e688; // 10ed:d7b8
dw dummy9_1e68a;
db byte_2cc6c; // 10ed:d7bc
db dummy9_1e68d; // 10ed:d7bd
db dummy9_1e68e; // 10ed:d7be
db dummy9_1e68f; // 10ed:d7bf
db dummy9_1e690; // 10ed:d7c0
db dummy9_1e691; // 10ed:d7c1
db dummy9_1e692;
db dummy9_1e693;
db dummy9_1e694; // 10ed:d7c4
db dummy9_1e695; // 10ed:d7c5
db dummy9_1e696; // 10ed:d7c6
db dummy9_1e697; // 10ed:d7c7
db dummy9_1e698;
db dummy9_1e699; // 10ed:d7c9
db dummy9_1e69a; // 10ed:d7ca
db dummy9_1e69b; // 10ed:d7cb
db dummy9_1e69c; // 10ed:d7cc
db dummy9_1e69d; // 10ed:d7cd
dw word_2cc7e; // 10ed:d7ce
db dummy9_1e6a0; // 10ed:d7d0
db dummy9_1e6a1; // 10ed:d7d1
db dummy9_1e6a2; // 10ed:d7d2
db dummy9_1e6a3; // 10ed:d7d3
db byte_2cc84; // 10ed:d7d4
db dummy9_1e6a5; // 10ed:d7d5
db byte_2cc86; // 10ed:d7d6
db byte_2cc87; // 10ed:d7d7
db dummy9_1e6a8; // 10ed:d7d8
db byte_2cc89; // 10ed:d7d9
dw dummy9_1e6aa; // 10ed:d7da
dw dummy9_1e6ac; // 10ed:d7dc
dw dummy9_1e6ae; // 10ed:d7de
dw dummy9_1e6b0; // 10ed:d7e0
dw dummy9_1e6b2; // 10ed:d7e2
db dummy9_1e6b4;
db dummy9_1e6b5;
db dummy9_1e6b6;
db dummy9_1e6b7; // 10ed:d7e7
db dummy9_1e6b8; // 10ed:d7e8
db dummy9_1e6b9; // 10ed:d7e9
db dummy9_1e6ba; // 10ed:d7ea
db dummy9_1e6bb; // 10ed:d7eb
db dummy9_1e6bc;
db dummy9_1e6bd;
db dummy9_1e6be;
db dummy9_1e6bf;
db dummy9_1e6c0;
db dummy9_1e6c1;
db dummy9_1e6c2;
db byte_2cca3; // 10ed:d7f3
dw word_2cca4; // 10ed:d7f4
dw word_2cca6; // 10ed:d7f6
db dummy9_1e6c8; // 10ed:d7f8
db dummy9_1e6c9;
db dummy9_1e6ca; // 10ed:d7fa
db dummy9_1e6cb;
db dummy9_1e6cc; // 10ed:d7fc
db dummy9_1e6cd; // 10ed:d7fd
db dummy9_1e6ce; // 10ed:d7fe
db dummy9_1e6cf; // 10ed:d7ff
db dummy9_1e6d0;
db dummy9_1e6d1;
db dummy9_1e6d2; // 10ed:d802
db dummy9_1e6d3;
db dummy9_1e6d4; // 10ed:d804
db dummy9_1e6d5;
db dummy9_1e6d6; // 10ed:d806
db dummy9_1e6d7;
db dummy9_1e6d8; // 10ed:d808
db dummy9_1e6d9;
db dummy9_1e6da; // 10ed:d80a
db dummy9_1e6db;
db dummy9_1e6dc; // 10ed:d80c
db dummy9_1e6dd;
db dummy9_1e6de; // 10ed:d80e
db dummy9_1e6df;
dw word_2ccc0; // 10ed:d810
db dummy9_1e6e2; // 10ed:d812
db dummy9_1e6e3;
dw word_2ccc4; // 10ed:d814
dw _unk_2ccc6_sav_file_first_word; // 10ed:d816
dw word_2ccc8; // 10ed:d818
dw word_2ccca; // 10ed:d81a
db byte_2cccc[4]; // 10ed:d81c
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
db dummy9_1e71b[32]; // 10ed:d84b
db dummy9_1e73b;
db dummy9_1e73c;
db dummy9_1e73d;
db dummy9_1e73e;
db dummy9_1e73f;
db dummy9_1e740;
db dummy9_1e741;
db dummy9_1e742;
db dummy9_1e743;
db dummy9_1e744;
db dummy9_1e745;
db dummy9_1e746;
db dummy9_1e747;
db dummy9_1e748;
db dummy9_1e749;
db dummy9_1e74a;
db dummy9_1e74b;
db dummy9_1e74c;
db dummy9_1e74d;
db dummy9_1e74e;
db dummy9_1e74f;
db dummy9_1e750;
db dummy9_1e751;
db dummy9_1e752;
db dummy9_1e753;
dw dummy9_1e754;
db dummy9_1e756;
db dummy9_1e757;
db dummy9_1e758;
db dummy9_1e759;
db dummy9_1e75a;
db dummy9_1e75b;
db dummy9_1e75c;
db byte_2cd3d; // 10ed:d88d
db dummy9_1e75e;
db dummy9_1e75f;
dw word_2cd40; // 10ed:d890
dw word_2cd42; // 10ed:d892
dw word_2cd44; // 10ed:d894
dw word_2cd46; // 10ed:d896
db dummy9_1e768;
db dummy9_1e769;
db dummy9_1e76a;
db dummy9_1e76b;
db dummy9_1e76c;
db dummy9_1e76d;
db dummy9_1e76e;
db dummy9_1e76f;
db dummy9_1e770;
db dummy9_1e771;
db dummy9_1e772;
db dummy9_1e773;
db dummy9_1e774;
db dummy9_1e775;
db dummy9_1e776;
db dummy9_1e777;
db dummy9_1e778; // 10ed:d8a8
db dummy9_1e779; // 10ed:d8a9
dw word_2cd5a; // 10ed:d8aa
dw word_2cd5c; // 10ed:d8ac
dw word_2cd5e; // 10ed:d8ae
db dummy9_1e780[32]; // 10ed:d8b0
db dummy9_1e7a0[32]; // 10ed:d8d0
db dummy9_1e7c0[32]; // 10ed:d8f0
db dummy9_1e7e0;
db dummy9_1e7e1;
db dummy9_1e7e2;
db dummy9_1e7e3;
db dummy9_1e7e4;
db dummy9_1e7e5;
db dummy9_1e7e6;
db unk_2cdc7; // 10ed:d917
db dummy9_1e7e8[32]; // 10ed:d918
db dummy9_1e808[32]; // 10ed:d938
db dummy9_1e828[32]; // 10ed:d958
db dummy9_1e848[32]; // 10ed:d978
db dummy9_1e868[32]; // 10ed:d998
db dummy9_1e888[32]; // 10ed:d9b8
db dummy9_1e8a8[32]; // 10ed:d9d8
db dummy9_1e8c8[32]; // 10ed:d9f8
db dummy9_1e8e8[32]; // 10ed:da18
db dummy9_1e908[32]; // 10ed:da38
db dummy9_1e928[32]; // 10ed:da58
db dummy9_1e948;
db dummy9_1e949;
db dummy9_1e94a;
db dummy9_1e94b;
db dummy9_1e94c;
db dummy9_1e94d;
db dummy9_1e94e;
db dummy9_1e94f;
db dummy9_1e950;
db dummy9_1e951;
db dummy9_1e952;
db dummy9_1e953;
db dummy9_1e954;
db dummy9_1e955;
db dummy9_1e956;
db dummy9_1e957;
db dummy9_1e958;
db dummy9_1e959;
db dummy9_1e95a;
db dummy9_1e95b;
dw _word_2cf3c_open_res_info; // 10ed:da8c
db dummy9_1e95e[32]; // 10ed:da8e
db dummy9_1e97e[32]; // 10ed:daae
db dummy9_1e99e[32]; // 10ed:dace
db dummy9_1e9be[32]; // 10ed:daee
db dummy9_1e9de[32]; // 10ed:db0e
db dummy9_1e9fe[32]; // 10ed:db2e
db dummy9_1ea1e[32]; // 10ed:db4e
db dummy9_1ea3e[32]; // 10ed:db6e
db dummy9_1ea5e[32]; // 10ed:db8e
db dummy9_1ea7e;
db dummy9_1ea7f;
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
dw dummy9_1eaa4;
dw _word_2d086_framebuffer_front; // 10ed:dbd6
dw _word_2d088_screen_buffer; // 10ed:dbd8
dw _word_2d08a_framebuffer_active; // 10ed:dbda
dw _word_2d08c_framebuffer2_ofs; // 10ed:dbdc
dw _word_2d08e_framebuffer2_seg; // 10ed:dbde
dw word_2d090; // 10ed:dbe0
dw word_2d092; // 10ed:dbe2
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
db byte_2d100; // 10ed:dc50
dw word_2d101; // 10ed:dc51
dw word_2d103; // 10ed:dc53
dw word_2d105; // 10ed:dc55
db byte_2d107; // 10ed:dc57
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
db dummy9_1eb3c[32]; // 10ed:dc6c
db dummy9_1eb5c[32]; // 10ed:dc8c
db dummy9_1eb7c[32]; // 10ed:dcac
db dummy9_1eb9c;
db dummy9_1eb9d;
db dummy9_1eb9e;
db dummy9_1eb9f;
db dummy9_1eba0;
db dummy9_1eba1;
db dummy9_1eba2;
db dummy9_1eba3;
db dummy9_1eba4;
db dummy9_1eba5;
db dummy9_1eba6;
db dummy9_1eba7;
db dummy9_1eba8;
db dummy9_1eba9;
db dummy9_1ebaa;
db dummy9_1ebab;
db dummy9_1ebac;
db dummy9_1ebad;
db dummy9_1ebae;
db dummy9_1ebaf;
db dummy9_1ebb0;
db dummy9_1ebb1;
db dummy9_1ebb2;
db dummy9_1ebb3;
db byte_2d194; // 10ed:dce4
db byte_2d195; // 10ed:dce5
db _byte_2d196_in_transitionque; // 10ed:dce6
db byte_2d197; // 10ed:dce7
db byte_2d198; // 10ed:dce8
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
db dummy9_1ebee[32]; // 10ed:dd1e
db dummy9_1ec0e[32]; // 10ed:dd3e
db dummy9_1ec2e[32]; // 10ed:dd5e
db dummy9_1ec4e[32]; // 10ed:dd7e
db dummy9_1ec6e[32]; // 10ed:dd9e
db dummy9_1ec8e[32]; // 10ed:ddbe
db dummy9_1ecae[32]; // 10ed:ddde
db dummy9_1ecce[32]; // 10ed:ddfe
db dummy9_1ecee[32]; // 10ed:de1e
db dummy9_1ed0e[32]; // 10ed:de3e
db dummy9_1ed2e[32]; // 10ed:de5e
db dummy9_1ed4e[32]; // 10ed:de7e
db dummy9_1ed6e[32]; // 10ed:de9e
db dummy9_1ed8e[32]; // 10ed:debe
db dummy9_1edae[32]; // 10ed:dede
db dummy9_1edce[32]; // 10ed:defe
db dummy9_1edee[32]; // 10ed:df1e
db dummy9_1ee0e[32]; // 10ed:df3e
db dummy9_1ee2e[32]; // 10ed:df5e
db dummy9_1ee4e[32]; // 10ed:df7e
db dummy9_1ee6e[32]; // 10ed:df9e
db dummy9_1ee8e[32]; // 10ed:dfbe
db dummy9_1eeae[32]; // 10ed:dfde
db dummy9_1eece[32]; // 10ed:dffe
db dummy9_1eeee[32]; // 10ed:e01e
db dummy9_1ef0e[32]; // 10ed:e03e
db dummy9_1ef2e[32]; // 10ed:e05e
db dummy9_1ef4e[32]; // 10ed:e07e
db dummy9_1ef6e[32]; // 10ed:e09e
db dummy9_1ef8e[32]; // 10ed:e0be
db dummy9_1efae[32]; // 10ed:e0de
db dummy9_1efce[32]; // 10ed:e0fe
db dummy9_1efee[32]; // 10ed:e11e
db dummy9_1f00e[32]; // 10ed:e13e
db dummy9_1f02e[32]; // 10ed:e15e
db dummy9_1f04e[32]; // 10ed:e17e
db dummy9_1f06e[32]; // 10ed:e19e
db dummy9_1f08e[32]; // 10ed:e1be
db dummy9_1f0ae[32]; // 10ed:e1de
db dummy9_1f0ce[32]; // 10ed:e1fe
db dummy9_1f0ee[32]; // 10ed:e21e
db dummy9_1f10e[32]; // 10ed:e23e
db dummy9_1f12e[32]; // 10ed:e25e
db dummy9_1f14e[32]; // 10ed:e27e
db dummy9_1f16e[32]; // 10ed:e29e
db dummy9_1f18e[32]; // 10ed:e2be
db dummy9_1f1ae[32]; // 10ed:e2de
db dummy9_1f1ce[32]; // 10ed:e2fe
db dummy9_1f1ee[32]; // 10ed:e31e
db dummy9_1f20e[32]; // 10ed:e33e
db dummy9_1f22e[32]; // 10ed:e35e
db dummy9_1f24e[32]; // 10ed:e37e
db dummy9_1f26e[32]; // 10ed:e39e
db dummy9_1f28e[32]; // 10ed:e3be
db dummy9_1f2ae[32]; // 10ed:e3de
db dummy9_1f2ce[32]; // 10ed:e3fe
db dummy9_1f2ee[32]; // 10ed:e41e
db dummy9_1f30e[32]; // 10ed:e43e
db dummy9_1f32e[32]; // 10ed:e45e
db dummy9_1f34e[32]; // 10ed:e47e
db dummy9_1f36e[32]; // 10ed:e49e
db dummy9_1f38e[32]; // 10ed:e4be
db dummy9_1f3ae[32]; // 10ed:e4de
db dummy9_1f3ce[32]; // 10ed:e4fe
db dummy9_1f3ee[32]; // 10ed:e51e
db dummy9_1f40e[32]; // 10ed:e53e
db dummy9_1f42e[32]; // 10ed:e55e
db dummy9_1f44e[32]; // 10ed:e57e
db dummy9_1f46e[32]; // 10ed:e59e
db dummy9_1f48e[32]; // 10ed:e5be
db dummy9_1f4ae[32]; // 10ed:e5de
db dummy9_1f4ce[32]; // 10ed:e5fe
db dummy9_1f4ee[32]; // 10ed:e61e
db dummy9_1f50e[32]; // 10ed:e63e
db dummy9_1f52e[32]; // 10ed:e65e
db dummy9_1f54e[32]; // 10ed:e67e
db dummy9_1f56e[32]; // 10ed:e69e
db dummy9_1f58e[32]; // 10ed:e6be
db dummy9_1f5ae[32]; // 10ed:e6de
db dummy9_1f5ce[32]; // 10ed:e6fe
db dummy9_1f5ee[32]; // 10ed:e71e
db dummy9_1f60e[32]; // 10ed:e73e
db dummy9_1f62e[32]; // 10ed:e75e
db dummy9_1f64e[32]; // 10ed:e77e
db dummy9_1f66e[32]; // 10ed:e79e
db dummy9_1f68e[32]; // 10ed:e7be
db dummy9_1f6ae[32]; // 10ed:e7de
db dummy9_1f6ce[32]; // 10ed:e7fe
db dummy9_1f6ee[32]; // 10ed:e81e
db dummy9_1f70e[32]; // 10ed:e83e
db dummy9_1f72e[32]; // 10ed:e85e
db dummy9_1f74e[32]; // 10ed:e87e
db dummy9_1f76e[32]; // 10ed:e89e
db dummy9_1f78e[32]; // 10ed:e8be
db dummy9_1f7ae[32]; // 10ed:e8de
db dummy9_1f7ce[32]; // 10ed:e8fe
db dummy9_1f7ee[32]; // 10ed:e91e
db dummy9_1f80e[32]; // 10ed:e93e
db dummy9_1f82e[32]; // 10ed:e95e
db dummy9_1f84e[32]; // 10ed:e97e
db dummy9_1f86e[32]; // 10ed:e99e
db dummy9_1f88e[32]; // 10ed:e9be
db dummy9_1f8ae[32]; // 10ed:e9de
db dummy9_1f8ce[32]; // 10ed:e9fe
db dummy9_1f8ee[32]; // 10ed:ea1e
db dummy9_1f90e[32]; // 10ed:ea3e
db dummy9_1f92e[32]; // 10ed:ea5e
db dummy9_1f94e[32]; // 10ed:ea7e
db dummy9_1f96e[32]; // 10ed:ea9e
db dummy9_1f98e[32]; // 10ed:eabe
db dummy9_1f9ae[32]; // 10ed:eade
db dummy9_1f9ce[32]; // 10ed:eafe
db dummy9_1f9ee[32]; // 10ed:eb1e
db dummy9_1fa0e[32]; // 10ed:eb3e
db dummy9_1fa2e[32]; // 10ed:eb5e
db dummy9_1fa4e[32]; // 10ed:eb7e
db dummy9_1fa6e[32]; // 10ed:eb9e
db dummy9_1fa8e[32]; // 10ed:ebbe
db dummy9_1faae[32]; // 10ed:ebde
db dummy9_1face[32]; // 10ed:ebfe
db dummy9_1faee[32]; // 10ed:ec1e
db dummy9_1fb0e[32]; // 10ed:ec3e
db dummy9_1fb2e[32]; // 10ed:ec5e
db dummy9_1fb4e[32]; // 10ed:ec7e
db dummy9_1fb6e[32]; // 10ed:ec9e
db dummy9_1fb8e[32]; // 10ed:ecbe
db dummy9_1fbae[32]; // 10ed:ecde
db dummy9_1fbce[32]; // 10ed:ecfe
db dummy9_1fbee[32]; // 10ed:ed1e
db dummy9_1fc0e[32]; // 10ed:ed3e
db dummy9_1fc2e[32]; // 10ed:ed5e
db dummy9_1fc4e[32]; // 10ed:ed7e
db dummy9_1fc6e[32]; // 10ed:ed9e
db dummy9_1fc8e[32]; // 10ed:edbe
db dummy9_1fcae[32]; // 10ed:edde
db dummy9_1fcce[32]; // 10ed:edfe
db dummy9_1fcee[32]; // 10ed:ee1e
db dummy9_1fd0e[32]; // 10ed:ee3e
db dummy9_1fd2e[32]; // 10ed:ee5e
db dummy9_1fd4e[32]; // 10ed:ee7e
db dummy9_1fd6e[32]; // 10ed:ee9e
db dummy9_1fd8e[32]; // 10ed:eebe
db dummy9_1fdae[32]; // 10ed:eede
db dummy9_1fdce[32]; // 10ed:eefe
db dummy9_1fdee[32]; // 10ed:ef1e
db dummy9_1fe0e[32]; // 10ed:ef3e
db dummy9_1fe2e[32]; // 10ed:ef5e
db dummy9_1fe4e[32]; // 10ed:ef7e
db dummy9_1fe6e[32]; // 10ed:ef9e
db dummy9_1fe8e; // 10ed:efbe
db dummy9_1fe8f; // 10ed:efbf
db dummy9_1fe90; // 10ed:efc0
db dummy9_1fe91; // 10ed:efc1
db dummy9_1fe92; // 10ed:efc2
db dummy9_1fe93; // 10ed:efc3
db dummy9_1fe94; // 10ed:efc4
db dummy9_1fe95; // 10ed:efc5
db dummy9_1fe96; // 10ed:efc6
db dummy9_1fe97; // 10ed:efc7
db dummy9_1fe98; // 10ed:efc8
db dummy9_1fe99; // 10ed:efc9
db dummy9_1fe9a; // 10ed:efca
db dummy9_1fe9b; // 10ed:efcb
db dummy9_1fe9c; // 10ed:efcc
db dummy9_1fe9d; // 10ed:efcd
db dummy9_1fe9e; // 10ed:efce
db dummy9_1fe9f; // 10ed:efcf
db dummy9_1fea0; // 10ed:efd0
db dummy9_1fea1; // 10ed:efd1
db dummy9_1fea2; // 10ed:efd2
db dummy9_1fea3; // 10ed:efd3
db dummy9_1fea4; // 10ed:efd4
db dummy9_1fea5; // 10ed:efd5
db dummy9_1fea6; // 10ed:efd6
db dummy9_1fea7; // 10ed:efd7
db dummy9_1fea8; // 10ed:efd8
db byte_2e489; // 10ed:efd9
db dummy9_1feaa[32]; // 10ed:efda
db dummy9_1feca[32]; // 10ed:effa
db dummy9_1feea[32]; // 10ed:f01a
db dummy9_1ff0a[32]; // 10ed:f03a
db dummy9_1ff2a[32]; // 10ed:f05a
db dummy9_1ff4a[32]; // 10ed:f07a
db dummy9_1ff6a[32]; // 10ed:f09a
db dummy9_1ff8a[32]; // 10ed:f0ba
db dummy9_1ffaa[32]; // 10ed:f0da
db dummy9_1ffca[32]; // 10ed:f0fa
db dummy9_1ffea[32]; // 10ed:f11a
db dummy9_2000a[32]; // 10ed:f13a
db dummy9_2002a[32]; // 10ed:f15a
db dummy9_2004a[32]; // 10ed:f17a
db dummy9_2006a[32]; // 10ed:f19a
db dummy9_2008a[32]; // 10ed:f1ba
db dummy9_200aa[32]; // 10ed:f1da
db dummy9_200ca[32]; // 10ed:f1fa
db dummy9_200ea[32]; // 10ed:f21a
db dummy9_2010a[32]; // 10ed:f23a
db dummy9_2012a[32]; // 10ed:f25a
db dummy9_2014a[32]; // 10ed:f27a
db dummy9_2016a[32]; // 10ed:f29a
db dummy9_2018a[32]; // 10ed:f2ba
db dummy9_201aa[32]; // 10ed:f2da
db dummy9_201ca[32]; // 10ed:f2fa
db dummy9_201ea[32]; // 10ed:f31a
db dummy9_2020a[32]; // 10ed:f33a
db dummy9_2022a[32]; // 10ed:f35a
db dummy9_2024a[32]; // 10ed:f37a
db dummy9_2026a[32]; // 10ed:f39a
db dummy9_2028a[32]; // 10ed:f3ba
db dummy9_202aa[32]; // 10ed:f3da
db dummy9_202ca[32]; // 10ed:f3fa
db dummy9_202ea[32]; // 10ed:f41a
db dummy9_2030a[32]; // 10ed:f43a
db dummy9_2032a[32]; // 10ed:f45a
db dummy9_2034a[32]; // 10ed:f47a
db dummy9_2036a[32]; // 10ed:f49a
db dummy9_2038a[32]; // 10ed:f4ba
db dummy9_203aa[32]; // 10ed:f4da
db dummy9_203ca[32]; // 10ed:f4fa
db dummy9_203ea[32]; // 10ed:f51a
db dummy9_2040a[32]; // 10ed:f53a
db dummy9_2042a[32]; // 10ed:f55a
db dummy9_2044a[32]; // 10ed:f57a
db dummy9_2046a[32]; // 10ed:f59a
db dummy9_2048a[32]; // 10ed:f5ba
db dummy9_204aa[32]; // 10ed:f5da
db dummy9_204ca[32]; // 10ed:f5fa
db dummy9_204ea[32]; // 10ed:f61a
db dummy9_2050a[32]; // 10ed:f63a
db dummy9_2052a[32]; // 10ed:f65a
db dummy9_2054a[32]; // 10ed:f67a
db dummy9_2056a[32]; // 10ed:f69a
db dummy9_2058a[32]; // 10ed:f6ba
db dummy9_205aa[32]; // 10ed:f6da
db dummy9_205ca[32]; // 10ed:f6fa
db dummy9_205ea[32]; // 10ed:f71a
db dummy9_2060a[32]; // 10ed:f73a
db dummy9_2062a[32]; // 10ed:f75a
db dummy9_2064a[32]; // 10ed:f77a
db dummy9_2066a[32]; // 10ed:f79a
db dummy9_2068a[32]; // 10ed:f7ba
db dummy9_206aa[32]; // 10ed:f7da
db dummy9_206ca[32]; // 10ed:f7fa
db dummy9_206ea[32]; // 10ed:f81a
db dummy9_2070a[32]; // 10ed:f83a
db dummy9_2072a[32]; // 10ed:f85a
db dummy9_2074a[32]; // 10ed:f87a
db dummy9_2076a[32]; // 10ed:f89a
db dummy9_2078a[32]; // 10ed:f8ba
db dummy9_207aa[32]; // 10ed:f8da
db dummy9_207ca[32]; // 10ed:f8fa
db dummy9_207ea[32]; // 10ed:f91a
db dummy9_2080a[32]; // 10ed:f93a
db dummy9_2082a[32]; // 10ed:f95a
db dummy9_2084a[32]; // 10ed:f97a
db dummy9_2086a[32]; // 10ed:f99a
db dummy9_2088a[32]; // 10ed:f9ba
db dummy9_208aa[32]; // 10ed:f9da
db dummy9_208ca[32]; // 10ed:f9fa
db dummy9_208ea[32]; // 10ed:fa1a
db dummy9_2090a[32]; // 10ed:fa3a
db dummy9_2092a[32]; // 10ed:fa5a
db dummy9_2094a[32]; // 10ed:fa7a
db dummy9_2096a[32]; // 10ed:fa9a
db dummy9_2098a[32]; // 10ed:faba
db dummy9_209aa[32]; // 10ed:fada
db dummy9_209ca[32]; // 10ed:fafa
db dummy9_209ea[32]; // 10ed:fb1a
db dummy9_20a0a[32]; // 10ed:fb3a
db dummy9_20a2a[32]; // 10ed:fb5a
db dummy9_20a4a[32]; // 10ed:fb7a
db dummy9_20a6a[32]; // 10ed:fb9a
db dummy9_20a8a[32]; // 10ed:fbba
db dummy9_20aaa[32]; // 10ed:fbda
db dummy9_20aca[32]; // 10ed:fbfa
db dummy9_20aea[32]; // 10ed:fc1a
db dummy9_20b0a[32]; // 10ed:fc3a
db dummy9_20b2a[32]; // 10ed:fc5a
db dummy9_20b4a[32]; // 10ed:fc7a
db dummy9_20b6a[32]; // 10ed:fc9a
db dummy9_20b8a[32]; // 10ed:fcba
db dummy9_20baa[32]; // 10ed:fcda
db dummy9_20bca[32]; // 10ed:fcfa
db dummy9_20bea[32]; // 10ed:fd1a
db dummy9_20c0a[32]; // 10ed:fd3a
db dummy9_20c2a[32]; // 10ed:fd5a
db dummy9_20c4a[32]; // 10ed:fd7a
db dummy9_20c6a[32]; // 10ed:fd9a
db dummy9_20c8a[32]; // 10ed:fdba
db dummy9_20caa; // 10ed:fdda
db dummy9_20cab; // 10ed:fddb
db dummy9_20cac;
db dummy9_20cad; // 10ed:fddd
db dummy9_20cae; // 10ed:fdde
db dummy9_20caf; // 10ed:fddf
db dummy9_20cb0; // 10ed:fde0
db dummy9_20cb1; // 10ed:fde1
db dummy9_20cb2;
db dummy9_20cb3; // 10ed:fde3
db dummy9_20cb4; // 10ed:fde4
dw dummy9_20cb5; // 10ed:fde5
db dummy9_20cb7[32]; // 10ed:fde7
db dummy9_20cd7[32]; // 10ed:fe07
db dummy9_20cf7[32]; // 10ed:fe27
db dummy9_20d17[32]; // 10ed:fe47
db dummy9_20d37[32]; // 10ed:fe67
db dummy9_20d57[32]; // 10ed:fe87
db dummy9_20d77[32]; // 10ed:fea7
db dummy9_20d97[32]; // 10ed:fec7
db dummy9_20db7[32]; // 10ed:fee7
db dummy9_20dd7[32]; // 10ed:ff07
db dummy9_20df7[32]; // 10ed:ff27
db dummy9_20e17[32]; // 10ed:ff47
db dummy9_20e37[32]; // 10ed:ff67
db dummy9_20e57[32]; // 10ed:ff87
db dummy9_20e77[32]; // 10ed:ffa7
db dummy9_20e97[32]; // 10ed:ffc7
db dummy9_20eb7; // 10ed:ffe7
db dummy9_20eb8; // 10ed:ffe8
db dummy9_20eb9; // 10ed:ffe9
db dummy9_20eba;
db dummy9_20ebb; // 10ed:ffeb
db dummy9_20ebc; // 10ed:ffec
db dummy9_20ebd; // 10ed:ffed
db dummy9_20ebe; // 10ed:ffee
db dummy9_20ebf; // 10ed:ffef
db dummy9_20ec0; // 10ed:fff0
db dummy9_20ec1; // 10ed:fff1
db dummy9_20ec2; // 10ed:fff2
db dummy9_20ec3; // 10ed:fff3
db dummy9_20ec4;
db dummy9_20ec5; // 10ed:fff5
db dummy9_20ec6; // 10ed:fff6
db dummy9_20ec7; // 10ed:fff7
db dummy9_20ec8; // 10ed:fff8
db dummy9_20ec9; // 10ed:fff9
db dummy9_20eca; // 10ed:fffa
db dummy9_20ecb; // 10ed:fffb
db dummy9_20ecc; // 10ed:fffc
db dummy9_20ecd; // 10ed:fffd
db dummy9_20ece;
db dummy9_20ecf; // 10ed:ffff
db dummy9_20ed0[16384];
db unk_334b0; // 24ed:0000
db dummy9_24ed1[32]; // 24ed:0001
db dummy9_24ef1[32]; // 24ed:0021
db dummy9_24f11[32]; // 24ed:0041
db dummy9_24f31[32]; // 24ed:0061
db dummy9_24f51[32]; // 24ed:0081
db dummy9_24f71[32]; // 24ed:00a1
db dummy9_24f91[32]; // 24ed:00c1
db dummy9_24fb1; // 24ed:00e1
db dummy9_24fb2; // 24ed:00e2
db dummy9_24fb3; // 24ed:00e3
db dummy9_24fb4; // 24ed:00e4
db dummy9_24fb5; // 24ed:00e5
db dummy9_24fb6; // 24ed:00e6
db dummy9_24fb7; // 24ed:00e7
db dummy9_24fb8; // 24ed:00e8
db dummy9_24fb9;
db dummy9_24fba;
db dummy9_24fbb;
db dummy9_24fbc;
db dummy9_24fbd;
db dummy9_24fbe;
db dummy9_24fbf;
db dummy9_24fc0;
db dummy9_24fc1;
db dummy9_24fc2;
db dummy9_24fc3;
db dummy9_24fc4;
db dummy9_24fc5;
db dummy9_24fc6;
db dummy9_24fc7;
db dummy9_24fc8;
db dummy9_24fc9;
db dummy9_24fca;
db dummy9_24fcb;
db dummy9_24fcc;
db dummy9_24fcd;
db dummy9_24fce;
db dummy9_24fcf;
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
db dummy9_253cf; // 24ed:04ff
db dummy9_253d0; // 24ed:0500
db dummy9_253d1; // 24ed:0501
db dummy9_253d2; // 24ed:0502
db dummy9_253d3; // 24ed:0503
db dummy9_253d4; // 24ed:0504
db dummy9_253d5; // 24ed:0505
db dummy9_253d6; // 24ed:0506
db dummy9_253d7; // 24ed:0507
db dummy9_253d8; // 24ed:0508
db dummy9_253d9; // 24ed:0509
dw dummy9_253da; // 24ed:050a
db dummy9_253dc[32]; // 24ed:050c
db dummy9_253fc[32]; // 24ed:052c
db dummy9_2541c[32]; // 24ed:054c
db dummy9_2543c[32]; // 24ed:056c
db dummy9_2545c[32]; // 24ed:058c
db dummy9_2547c[32]; // 24ed:05ac
db dummy9_2549c[32]; // 24ed:05cc
db dummy9_254bc[32]; // 24ed:05ec
db dummy9_254dc[32]; // 24ed:060c
db dummy9_254fc[32]; // 24ed:062c
db dummy9_2551c[32]; // 24ed:064c
db dummy9_2553c[32]; // 24ed:066c
db dummy9_2555c[32]; // 24ed:068c
db dummy9_2557c[32]; // 24ed:06ac
db dummy9_2559c[32]; // 24ed:06cc
db dummy9_255bc[32]; // 24ed:06ec
db dummy9_255dc[32]; // 24ed:070c
db dummy9_255fc[32]; // 24ed:072c
db dummy9_2561c[32]; // 24ed:074c
db dummy9_2563c[32]; // 24ed:076c
db dummy9_2565c[32]; // 24ed:078c
db dummy9_2567c[32]; // 24ed:07ac
db dummy9_2569c[32]; // 24ed:07cc
db dummy9_256bc[32]; // 24ed:07ec
db dummy9_256dc[32]; // 24ed:080c
db dummy9_256fc[32]; // 24ed:082c
db dummy9_2571c[32]; // 24ed:084c
db dummy9_2573c[32]; // 24ed:086c
db dummy9_2575c[32]; // 24ed:088c
db dummy9_2577c[32]; // 24ed:08ac
db dummy9_2579c[32]; // 24ed:08cc
db dummy9_257bc[32]; // 24ed:08ec
db dummy9_257dc[32]; // 24ed:090c
db dummy9_257fc[32]; // 24ed:092c
db dummy9_2581c; // 24ed:094c
db dummy9_2581d; // 24ed:094d
db dummy9_2581e; // 24ed:094e
db dummy9_2581f; // 24ed:094f
db dummy9_25820; // 24ed:0950
db dummy9_25821; // 24ed:0951
db dummy9_25822; // 24ed:0952
db dummy9_25823; // 24ed:0953
db dummy9_25824; // 24ed:0954
db dummy9_25825; // 24ed:0955
db dummy9_25826; // 24ed:0956
db dummy9_25827; // 24ed:0957
db dummy9_25828; // 24ed:0958
db dummy9_25829; // 24ed:0959
db dummy9_2582a; // 24ed:095a
db dummy9_2582b; // 24ed:095b
db dummy9_2582c; // 24ed:095c
db dummy9_2582d; // 24ed:095d
db dummy9_2582e; // 24ed:095e
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
db dummy9_25c2d[867];
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
db dummy9_2638e[133];
dw off_349f3; // 24ed:1543
dw dummy9_26415; // 24ed:1545
dw dummy9_26417; // 24ed:1547
dw dummy9_26419; // 24ed:1549
db dummy9_2641b[589];
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
db dummy9_288f0[386];
db dummy9_28a72; // 24ed:3ba2
db dummy9_28a73; // 24ed:3ba3
dw dummy9_28a74; // 24ed:3ba4
dw dummy9_28a76; // 24ed:3ba6
dw dummy9_28a78; // 24ed:3ba8
dw dummy9_28a7a; // 24ed:3baa
dw dummy9_28a7c; // 24ed:3bac
dw dummy9_28a7e; // 24ed:3bae
db dummy9_28a80; // 24ed:3bb0
db dummy9_28a81; // 24ed:3bb1
db dummy9_28a82; // 24ed:3bb2
db dummy9_28a83; // 24ed:3bb3
dw dummy9_28a84; // 24ed:3bb4
dw dummy9_28a86; // 24ed:3bb6
dw dummy9_28a88; // 24ed:3bb8
dw dummy9_28a8a; // 24ed:3bba
db dummy9_28a8c; // 24ed:3bbc
db dummy9_28a8d; // 24ed:3bbd
db dummy9_28a8e; // 24ed:3bbe
db dummy9_28a8f; // 24ed:3bbf
db dummy9_28a90; // 24ed:3bc0
dw dummy9_28a91; // 24ed:3bc1
db dummy9_28a93; // 24ed:3bc3
dw dummy9_28a94; // 24ed:3bc4
db dummy9_28a96; // 24ed:3bc6
db dummy9_28a97; // 24ed:3bc7
db byte_37078; // 24ed:3bc8
db dummy9_28a99[32]; // 24ed:3bc9
db dummy9_28ab9[32]; // 24ed:3be9
db dummy9_28ad9[32]; // 24ed:3c09
db dummy9_28af9; // 24ed:3c29
db dummy9_28afa; // 24ed:3c2a
db dummy9_28afb; // 24ed:3c2b
dw word_370dc; // 24ed:3c2c
db dummy9_28afe; // 24ed:3c2e
db dummy9_28aff; // 24ed:3c2f
db dummy9_28b00; // 24ed:3c30
db dummy9_28b01; // 24ed:3c31
db dummy9_28b02; // 24ed:3c32
db dummy9_28b03; // 24ed:3c33
db dummy9_28b04; // 24ed:3c34
db dummy9_28b05; // 24ed:3c35
db dummy9_28b06; // 24ed:3c36
db dummy9_28b07; // 24ed:3c37
db dummy9_28b08; // 24ed:3c38
db dummy9_28b09; // 24ed:3c39
db dummy9_28b0a; // 24ed:3c3a
db dummy9_28b0b; // 24ed:3c3b
db dummy9_28b0c; // 24ed:3c3c
db dummy9_28b0d; // 24ed:3c3d
dw word_370ee; // 24ed:3c3e
db dummy9_28b10; // 24ed:3c40
db dummy9_28b11; // 24ed:3c41
dw dummy9_28b12; // 24ed:3c42
db dummy9_28b14; // 24ed:3c44
db dummy9_28b15; // 24ed:3c45
db dummy9_28b16; // 24ed:3c46
db dummy9_28b17; // 24ed:3c47
dw word_370f8; // 24ed:3c48
dw word_370fa; // 24ed:3c4a
dw word_370fc; // 24ed:3c4c
dw word_370fe; // 24ed:3c4e
dw word_37100; // 24ed:3c50
dw word_37102; // 24ed:3c52
dw word_37104; // 24ed:3c54
dw word_37106; // 24ed:3c56
dw word_37108; // 24ed:3c58
dw word_3710a; // 24ed:3c5a
dw word_3710c; // 24ed:3c5c
db dummy9_28b2e[32]; // 24ed:3c5e
db dummy9_28b4e[32]; // 24ed:3c7e
db dummy9_28b6e[32]; // 24ed:3c9e
db dummy9_28b8e[32]; // 24ed:3cbe
db dummy9_28bae[32]; // 24ed:3cde
db dummy9_28bce[32]; // 24ed:3cfe
db dummy9_28bee[32]; // 24ed:3d1e
db dummy9_28c0e[32]; // 24ed:3d3e
db dummy9_28c2e[32]; // 24ed:3d5e
db dummy9_28c4e[32]; // 24ed:3d7e
db dummy9_28c6e[32]; // 24ed:3d9e
db dummy9_28c8e[32]; // 24ed:3dbe
db dummy9_28cae[32]; // 24ed:3dde
db dummy9_28cce[32]; // 24ed:3dfe
db dummy9_28cee[32]; // 24ed:3e1e
db dummy9_28d0e[32]; // 24ed:3e3e
db dummy9_28d2e[32]; // 24ed:3e5e
db dummy9_28d4e[32]; // 24ed:3e7e
db dummy9_28d6e[32]; // 24ed:3e9e
db dummy9_28d8e[32]; // 24ed:3ebe
db dummy9_28dae[32]; // 24ed:3ede
db dummy9_28dce[32]; // 24ed:3efe
db dummy9_28dee[32]; // 24ed:3f1e
db dummy9_28e0e[32]; // 24ed:3f3e
db dummy9_28e2e[32]; // 24ed:3f5e
db dummy9_28e4e[32]; // 24ed:3f7e
db dummy9_28e6e[32]; // 24ed:3f9e
db dummy9_28e8e[32]; // 24ed:3fbe
db dummy9_28eae[32]; // 24ed:3fde
db dummy9_28ece[32]; // 24ed:3ffe
db dummy9_28eee[32]; // 24ed:401e
db dummy9_28f0e[32]; // 24ed:403e
db dummy9_28f2e[32]; // 24ed:405e
db dummy9_28f4e[32]; // 24ed:407e
db dummy9_28f6e[32]; // 24ed:409e
db dummy9_28f8e[32]; // 24ed:40be
db dummy9_28fae[32]; // 24ed:40de
db dummy9_28fce[32]; // 24ed:40fe
db dummy9_28fee[32]; // 24ed:411e
db dummy9_2900e[32]; // 24ed:413e
db dummy9_2902e[32]; // 24ed:415e
db dummy9_2904e[32]; // 24ed:417e
db dummy9_2906e[32]; // 24ed:419e
db dummy9_2908e[32]; // 24ed:41be
db dummy9_290ae[32]; // 24ed:41de
db dummy9_290ce[32]; // 24ed:41fe
db dummy9_290ee[32]; // 24ed:421e
db dummy9_2910e[32]; // 24ed:423e
db dummy9_2912e[32]; // 24ed:425e
db dummy9_2914e[32]; // 24ed:427e
db dummy9_2916e[32]; // 24ed:429e
db dummy9_2918e[32]; // 24ed:42be
db dummy9_291ae[32]; // 24ed:42de
db dummy9_291ce[32]; // 24ed:42fe
db dummy9_291ee[32]; // 24ed:431e
db dummy9_2920e[32]; // 24ed:433e
db dummy9_2922e[32]; // 24ed:435e
db dummy9_2924e[32]; // 24ed:437e
db dummy9_2926e[32]; // 24ed:439e
db dummy9_2928e[32]; // 24ed:43be
db dummy9_292ae[32]; // 24ed:43de
db dummy9_292ce[32]; // 24ed:43fe
db dummy9_292ee[32]; // 24ed:441e
db dummy9_2930e[32]; // 24ed:443e
db dummy9_2932e[32]; // 24ed:445e
db dummy9_2934e[32]; // 24ed:447e
db dummy9_2936e[32]; // 24ed:449e
db dummy9_2938e[32]; // 24ed:44be
db dummy9_293ae[32]; // 24ed:44de
db dummy9_293ce[32]; // 24ed:44fe
db dummy9_293ee[32]; // 24ed:451e
db dummy9_2940e[32]; // 24ed:453e
db dummy9_2942e[32]; // 24ed:455e
db dummy9_2944e[32]; // 24ed:457e
db dummy9_2946e[32]; // 24ed:459e
db dummy9_2948e[32]; // 24ed:45be
db dummy9_294ae[32]; // 24ed:45de
db dummy9_294ce[32]; // 24ed:45fe
db dummy9_294ee[32]; // 24ed:461e
db dummy9_2950e[32]; // 24ed:463e
db dummy9_2952e[32]; // 24ed:465e
db dummy9_2954e[32]; // 24ed:467e
db dummy9_2956e[32]; // 24ed:469e
db dummy9_2958e[32]; // 24ed:46be
db dummy9_295ae[32]; // 24ed:46de
db dummy9_295ce[32]; // 24ed:46fe
db dummy9_295ee[32]; // 24ed:471e
db dummy9_2960e[32]; // 24ed:473e
db dummy9_2962e[32]; // 24ed:475e
db dummy9_2964e[32]; // 24ed:477e
db dummy9_2966e[32]; // 24ed:479e
db dummy9_2968e; // 24ed:47be
db dummy9_2968f; // 24ed:47bf
db dummy9_29690; // 24ed:47c0
db dummy9_29691; // 24ed:47c1
db dummy9_29692; // 24ed:47c2
db dummy9_29693; // 24ed:47c3
db dummy9_29694; // 24ed:47c4
db dummy9_29695; // 24ed:47c5
db dummy9_29696; // 24ed:47c6
db dummy9_29697; // 24ed:47c7
db dummy9_29698; // 24ed:47c8
db dummy9_29699; // 24ed:47c9
db dummy9_2969a; // 24ed:47ca
db dummy9_2969b; // 24ed:47cb
db dummy9_2969c; // 24ed:47cc
db dummy9_2969d; // 24ed:47cd
db dummy9_2969e; // 24ed:47ce
db dummy9_2969f; // 24ed:47cf
db dummy9_296a0; // 24ed:47d0
db dummy9_296a1; // 24ed:47d1
db dummy9_296a2; // 24ed:47d2
db dummy9_296a3; // 24ed:47d3
db dummy9_296a4; // 24ed:47d4
db dummy9_296a5; // 24ed:47d5
db dummy9_296a6; // 24ed:47d6
db dummy9_296a7; // 24ed:47d7
db unk_37c88; // 24ed:47d8
db dummy9_296a9[32]; // 24ed:47d9
db dummy9_296c9[32]; // 24ed:47f9
db dummy9_296e9[32]; // 24ed:4819
db dummy9_29709[32]; // 24ed:4839
db dummy9_29729[32]; // 24ed:4859
db dummy9_29749[32]; // 24ed:4879
db dummy9_29769[32]; // 24ed:4899
db dummy9_29789[32]; // 24ed:48b9
db dummy9_297a9[32]; // 24ed:48d9
db dummy9_297c9[32]; // 24ed:48f9
db dummy9_297e9[32]; // 24ed:4919
db dummy9_29809[32]; // 24ed:4939
db dummy9_29829[32]; // 24ed:4959
db dummy9_29849[32]; // 24ed:4979
db dummy9_29869[32]; // 24ed:4999
db dummy9_29889[32]; // 24ed:49b9
db dummy9_298a9[32]; // 24ed:49d9
db dummy9_298c9[32]; // 24ed:49f9
db dummy9_298e9[32]; // 24ed:4a19
db dummy9_29909[32]; // 24ed:4a39
db dummy9_29929[32]; // 24ed:4a59
db dummy9_29949[32]; // 24ed:4a79
db dummy9_29969[32]; // 24ed:4a99
db dummy9_29989[32]; // 24ed:4ab9
db dummy9_299a9[32]; // 24ed:4ad9
db dummy9_299c9[32]; // 24ed:4af9
db dummy9_299e9[32]; // 24ed:4b19
db dummy9_29a09[32]; // 24ed:4b39
db dummy9_29a29[32]; // 24ed:4b59
db dummy9_29a49[32]; // 24ed:4b79
db dummy9_29a69[32]; // 24ed:4b99
db dummy9_29a89[32]; // 24ed:4bb9
db dummy9_29aa9[32]; // 24ed:4bd9
db dummy9_29ac9[32]; // 24ed:4bf9
db dummy9_29ae9[32]; // 24ed:4c19
db dummy9_29b09[32]; // 24ed:4c39
db dummy9_29b29[32]; // 24ed:4c59
db dummy9_29b49[32]; // 24ed:4c79
db dummy9_29b69[32]; // 24ed:4c99
db dummy9_29b89[32]; // 24ed:4cb9
db dummy9_29ba9[32]; // 24ed:4cd9
db dummy9_29bc9[32]; // 24ed:4cf9
db dummy9_29be9[32]; // 24ed:4d19
db dummy9_29c09[32]; // 24ed:4d39
db dummy9_29c29[32]; // 24ed:4d59
db dummy9_29c49[32]; // 24ed:4d79
db dummy9_29c69[32]; // 24ed:4d99
db dummy9_29c89[32]; // 24ed:4db9
db dummy9_29ca9[32]; // 24ed:4dd9
db dummy9_29cc9[32]; // 24ed:4df9
db dummy9_29ce9[32]; // 24ed:4e19
db dummy9_29d09[32]; // 24ed:4e39
db dummy9_29d29[32]; // 24ed:4e59
db dummy9_29d49[32]; // 24ed:4e79
db dummy9_29d69[32]; // 24ed:4e99
db dummy9_29d89[32]; // 24ed:4eb9
db dummy9_29da9[32]; // 24ed:4ed9
db dummy9_29dc9[32]; // 24ed:4ef9
db dummy9_29de9[32]; // 24ed:4f19
db dummy9_29e09[32]; // 24ed:4f39
db dummy9_29e29[32]; // 24ed:4f59
db dummy9_29e49[32]; // 24ed:4f79
db dummy9_29e69[32]; // 24ed:4f99
db dummy9_29e89[32]; // 24ed:4fb9
db dummy9_29ea9[32]; // 24ed:4fd9
db dummy9_29ec9[32]; // 24ed:4ff9
db dummy9_29ee9[32]; // 24ed:5019
db dummy9_29f09[32]; // 24ed:5039
db dummy9_29f29[32]; // 24ed:5059
db dummy9_29f49[32]; // 24ed:5079
db dummy9_29f69[32]; // 24ed:5099
db dummy9_29f89[32]; // 24ed:50b9
db dummy9_29fa9[32]; // 24ed:50d9
db dummy9_29fc9[32]; // 24ed:50f9
db dummy9_29fe9[32]; // 24ed:5119
db dummy9_2a009[32]; // 24ed:5139
db dummy9_2a029[32]; // 24ed:5159
db dummy9_2a049[32]; // 24ed:5179
db dummy9_2a069[32]; // 24ed:5199
db dummy9_2a089[32]; // 24ed:51b9
db dummy9_2a0a9[32]; // 24ed:51d9
db dummy9_2a0c9[32]; // 24ed:51f9
db dummy9_2a0e9[32]; // 24ed:5219
db dummy9_2a109[32]; // 24ed:5239
db dummy9_2a129[32]; // 24ed:5259
db dummy9_2a149[32]; // 24ed:5279
db dummy9_2a169[32]; // 24ed:5299
db dummy9_2a189[32]; // 24ed:52b9
db dummy9_2a1a9[32]; // 24ed:52d9
db dummy9_2a1c9[32]; // 24ed:52f9
db dummy9_2a1e9[32]; // 24ed:5319
db dummy9_2a209[32]; // 24ed:5339
db dummy9_2a229[32]; // 24ed:5359
db dummy9_2a249[32]; // 24ed:5379
db dummy9_2a269[32]; // 24ed:5399
db dummy9_2a289[32]; // 24ed:53b9
db dummy9_2a2a9[32]; // 24ed:53d9
db dummy9_2a2c9[32]; // 24ed:53f9
db dummy9_2a2e9[32]; // 24ed:5419
db dummy9_2a309[32]; // 24ed:5439
db dummy9_2a329[32]; // 24ed:5459
db dummy9_2a349[32]; // 24ed:5479
db dummy9_2a369[32]; // 24ed:5499
db dummy9_2a389[32]; // 24ed:54b9
db dummy9_2a3a9[32]; // 24ed:54d9
db dummy9_2a3c9[32]; // 24ed:54f9
db dummy9_2a3e9[32]; // 24ed:5519
db dummy9_2a409[32]; // 24ed:5539
db dummy9_2a429[32]; // 24ed:5559
db dummy9_2a449[32]; // 24ed:5579
db dummy9_2a469[32]; // 24ed:5599
db dummy9_2a489[32]; // 24ed:55b9
db dummy9_2a4a9[32]; // 24ed:55d9
db dummy9_2a4c9[32]; // 24ed:55f9
db dummy9_2a4e9[32]; // 24ed:5619
db dummy9_2a509[32]; // 24ed:5639
db dummy9_2a529[32]; // 24ed:5659
db dummy9_2a549[32]; // 24ed:5679
db dummy9_2a569[32]; // 24ed:5699
db dummy9_2a589[32]; // 24ed:56b9
db dummy9_2a5a9[32]; // 24ed:56d9
db dummy9_2a5c9[32]; // 24ed:56f9
db dummy9_2a5e9[32]; // 24ed:5719
db dummy9_2a609[32]; // 24ed:5739
db dummy9_2a629[32]; // 24ed:5759
db dummy9_2a649[32]; // 24ed:5779
db dummy9_2a669[32]; // 24ed:5799
db dummy9_2a689[32]; // 24ed:57b9
db dummy9_2a6a9[32]; // 24ed:57d9
db dummy9_2a6c9[32]; // 24ed:57f9
db dummy9_2a6e9[32]; // 24ed:5819
db dummy9_2a709[32]; // 24ed:5839
db dummy9_2a729[32]; // 24ed:5859
db dummy9_2a749[32]; // 24ed:5879
db dummy9_2a769[32]; // 24ed:5899
db dummy9_2a789[32]; // 24ed:58b9
db dummy9_2a7a9[32]; // 24ed:58d9
db dummy9_2a7c9[32]; // 24ed:58f9
db dummy9_2a7e9[32]; // 24ed:5919
db dummy9_2a809[32]; // 24ed:5939
db dummy9_2a829[32]; // 24ed:5959
db dummy9_2a849[32]; // 24ed:5979
db dummy9_2a869[32]; // 24ed:5999
db dummy9_2a889[32]; // 24ed:59b9
db dummy9_2a8a9[32]; // 24ed:59d9
db dummy9_2a8c9[32]; // 24ed:59f9
db dummy9_2a8e9[32]; // 24ed:5a19
db dummy9_2a909[32]; // 24ed:5a39
db dummy9_2a929[32]; // 24ed:5a59
db dummy9_2a949[32]; // 24ed:5a79
db dummy9_2a969[32]; // 24ed:5a99
db dummy9_2a989[32]; // 24ed:5ab9
db dummy9_2a9a9[32]; // 24ed:5ad9
db dummy9_2a9c9[32]; // 24ed:5af9
db dummy9_2a9e9[32]; // 24ed:5b19
db dummy9_2aa09[32]; // 24ed:5b39
db dummy9_2aa29[32]; // 24ed:5b59
db dummy9_2aa49[32]; // 24ed:5b79
db dummy9_2aa69[32]; // 24ed:5b99
db dummy9_2aa89[32]; // 24ed:5bb9
db dummy9_2aaa9[32]; // 24ed:5bd9
db dummy9_2aac9[32]; // 24ed:5bf9
db dummy9_2aae9[32]; // 24ed:5c19
db dummy9_2ab09[32]; // 24ed:5c39
db dummy9_2ab29[32]; // 24ed:5c59
db dummy9_2ab49[32]; // 24ed:5c79
db dummy9_2ab69[32]; // 24ed:5c99
db dummy9_2ab89[32]; // 24ed:5cb9
db dummy9_2aba9[32]; // 24ed:5cd9
db dummy9_2abc9[32]; // 24ed:5cf9
db dummy9_2abe9[32]; // 24ed:5d19
db dummy9_2ac09[32]; // 24ed:5d39
db dummy9_2ac29[32]; // 24ed:5d59
db dummy9_2ac49[32]; // 24ed:5d79
db dummy9_2ac69[32]; // 24ed:5d99
db dummy9_2ac89[32]; // 24ed:5db9
db dummy9_2aca9[32]; // 24ed:5dd9
db dummy9_2acc9[32]; // 24ed:5df9
db dummy9_2ace9[32]; // 24ed:5e19
db dummy9_2ad09[32]; // 24ed:5e39
db dummy9_2ad29[32]; // 24ed:5e59
db dummy9_2ad49[32]; // 24ed:5e79
db dummy9_2ad69[32]; // 24ed:5e99
db dummy9_2ad89[32]; // 24ed:5eb9
db dummy9_2ada9[32]; // 24ed:5ed9
db dummy9_2adc9[32]; // 24ed:5ef9
db dummy9_2ade9[32]; // 24ed:5f19
db dummy9_2ae09[32]; // 24ed:5f39
db dummy9_2ae29[32]; // 24ed:5f59
db dummy9_2ae49[32]; // 24ed:5f79
db dummy9_2ae69[32]; // 24ed:5f99
db dummy9_2ae89[32]; // 24ed:5fb9
db dummy9_2aea9[32]; // 24ed:5fd9
db dummy9_2aec9[32]; // 24ed:5ff9
db dummy9_2aee9[32]; // 24ed:6019
db dummy9_2af09[32]; // 24ed:6039
db dummy9_2af29[32]; // 24ed:6059
db dummy9_2af49[32]; // 24ed:6079
db dummy9_2af69[32]; // 24ed:6099
db dummy9_2af89[32]; // 24ed:60b9
db dummy9_2afa9[32]; // 24ed:60d9
db dummy9_2afc9[32]; // 24ed:60f9
db dummy9_2afe9[32]; // 24ed:6119
db dummy9_2b009[32]; // 24ed:6139
db dummy9_2b029[32]; // 24ed:6159
db dummy9_2b049[32]; // 24ed:6179
db dummy9_2b069[32]; // 24ed:6199
db dummy9_2b089[32]; // 24ed:61b9
db dummy9_2b0a9[32]; // 24ed:61d9
db dummy9_2b0c9[32]; // 24ed:61f9
db dummy9_2b0e9[32]; // 24ed:6219
db dummy9_2b109[32]; // 24ed:6239
db dummy9_2b129[32]; // 24ed:6259
db dummy9_2b149[32]; // 24ed:6279
db dummy9_2b169[32]; // 24ed:6299
db dummy9_2b189[32]; // 24ed:62b9
db dummy9_2b1a9[32]; // 24ed:62d9
db dummy9_2b1c9[32]; // 24ed:62f9
db dummy9_2b1e9[32]; // 24ed:6319
db dummy9_2b209[32]; // 24ed:6339
db dummy9_2b229[32]; // 24ed:6359
db dummy9_2b249[32]; // 24ed:6379
db dummy9_2b269[32]; // 24ed:6399
db dummy9_2b289[32]; // 24ed:63b9
db dummy9_2b2a9[32]; // 24ed:63d9
db dummy9_2b2c9[32]; // 24ed:63f9
db dummy9_2b2e9[32]; // 24ed:6419
db dummy9_2b309[32]; // 24ed:6439
db dummy9_2b329[32]; // 24ed:6459
db dummy9_2b349[32]; // 24ed:6479
db dummy9_2b369[32]; // 24ed:6499
db dummy9_2b389[32]; // 24ed:64b9
db dummy9_2b3a9; // 24ed:64d9
db dummy9_2b3aa; // 24ed:64da
db dummy9_2b3ab; // 24ed:64db
db dummy9_2b3ac; // 24ed:64dc
db dummy9_2b3ad; // 24ed:64dd
db dummy9_2b3ae; // 24ed:64de
db dummy9_2b3af; // 24ed:64df
db dummy9_2b3b0; // 24ed:64e0
db dummy9_2b3b1; // 24ed:64e1
db dummy9_2b3b2; // 24ed:64e2
db dummy9_2b3b3; // 24ed:64e3
db dummy9_2b3b4; // 24ed:64e4
db dummy9_2b3b5; // 24ed:64e5
db dummy9_2b3b6; // 24ed:64e6
db dummy9_2b3b7; // 24ed:64e7
db dummy9_2b3b8; // 24ed:64e8
db dummy9_2b3b9; // 24ed:64e9
db dummy9_2b3ba; // 24ed:64ea
db dummy9_2b3bb; // 24ed:64eb
db dummy9_2b3bc; // 24ed:64ec
db dummy9_2b3bd; // 24ed:64ed
db dummy9_2b3be; // 24ed:64ee
db dummy9_2b3bf; // 24ed:64ef
db dummy9_2b3c0; // 24ed:64f0
db dummy9_2b3c1; // 24ed:64f1
db dummy9_2b3c2; // 24ed:64f2
db dummy9_2b3c3; // 24ed:64f3
dw word_399a4; // 24ed:64f4
db dummy9_2b3c6[32]; // 24ed:64f6
db dummy9_2b3e6[32]; // 24ed:6516
db dummy9_2b406[32]; // 24ed:6536
db dummy9_2b426[32]; // 24ed:6556
db dummy9_2b446[32]; // 24ed:6576
db dummy9_2b466[32]; // 24ed:6596
db dummy9_2b486[32]; // 24ed:65b6
db dummy9_2b4a6[32]; // 24ed:65d6
db dummy9_2b4c6[32]; // 24ed:65f6
db dummy9_2b4e6[32]; // 24ed:6616
db dummy9_2b506[32]; // 24ed:6636
db dummy9_2b526[32]; // 24ed:6656
db dummy9_2b546[32]; // 24ed:6676
db dummy9_2b566[32]; // 24ed:6696
db dummy9_2b586[32]; // 24ed:66b6
db dummy9_2b5a6[32]; // 24ed:66d6
db dummy9_2b5c6[32]; // 24ed:66f6
db dummy9_2b5e6[32]; // 24ed:6716
db dummy9_2b606[32]; // 24ed:6736
db dummy9_2b626[32]; // 24ed:6756
db dummy9_2b646[32]; // 24ed:6776
db dummy9_2b666[32]; // 24ed:6796
db dummy9_2b686[32]; // 24ed:67b6
db dummy9_2b6a6[32]; // 24ed:67d6
db dummy9_2b6c6[32]; // 24ed:67f6
db dummy9_2b6e6[32]; // 24ed:6816
db dummy9_2b706[32]; // 24ed:6836
db dummy9_2b726[32]; // 24ed:6856
db dummy9_2b746[32]; // 24ed:6876
db dummy9_2b766[32]; // 24ed:6896
db dummy9_2b786[32]; // 24ed:68b6
db dummy9_2b7a6[32]; // 24ed:68d6
db dummy9_2b7c6[32]; // 24ed:68f6
db dummy9_2b7e6[32]; // 24ed:6916
db dummy9_2b806[32]; // 24ed:6936
db dummy9_2b826[32]; // 24ed:6956
db dummy9_2b846[32]; // 24ed:6976
db dummy9_2b866[32]; // 24ed:6996
db dummy9_2b886[32]; // 24ed:69b6
db dummy9_2b8a6[32]; // 24ed:69d6
db dummy9_2b8c6[32]; // 24ed:69f6
db dummy9_2b8e6[32]; // 24ed:6a16
db dummy9_2b906[32]; // 24ed:6a36
db dummy9_2b926[32]; // 24ed:6a56
db dummy9_2b946[32]; // 24ed:6a76
db dummy9_2b966[32]; // 24ed:6a96
db dummy9_2b986[32]; // 24ed:6ab6
db dummy9_2b9a6[32]; // 24ed:6ad6
db dummy9_2b9c6[32]; // 24ed:6af6
db dummy9_2b9e6[32]; // 24ed:6b16
db dummy9_2ba06[32]; // 24ed:6b36
db dummy9_2ba26[32]; // 24ed:6b56
db dummy9_2ba46[32]; // 24ed:6b76
db dummy9_2ba66[32]; // 24ed:6b96
db dummy9_2ba86[32]; // 24ed:6bb6
db dummy9_2baa6[32]; // 24ed:6bd6
db dummy9_2bac6[32]; // 24ed:6bf6
db dummy9_2bae6[32]; // 24ed:6c16
db dummy9_2bb06[32]; // 24ed:6c36
db dummy9_2bb26[32]; // 24ed:6c56
db dummy9_2bb46[32]; // 24ed:6c76
db dummy9_2bb66[32]; // 24ed:6c96
db dummy9_2bb86[32]; // 24ed:6cb6
db dummy9_2bba6[32]; // 24ed:6cd6
db dummy9_2bbc6[32]; // 24ed:6cf6
db dummy9_2bbe6[32]; // 24ed:6d16
db dummy9_2bc06[32]; // 24ed:6d36
db dummy9_2bc26[32]; // 24ed:6d56
db dummy9_2bc46[32]; // 24ed:6d76
db dummy9_2bc66[32]; // 24ed:6d96
db dummy9_2bc86[32]; // 24ed:6db6
db dummy9_2bca6[32]; // 24ed:6dd6
db dummy9_2bcc6[32]; // 24ed:6df6
db dummy9_2bce6[32]; // 24ed:6e16
db dummy9_2bd06[32]; // 24ed:6e36
db dummy9_2bd26[32]; // 24ed:6e56
db dummy9_2bd46[32]; // 24ed:6e76
db dummy9_2bd66[32]; // 24ed:6e96
db dummy9_2bd86[32]; // 24ed:6eb6
db dummy9_2bda6[32]; // 24ed:6ed6
db dummy9_2bdc6[32]; // 24ed:6ef6
db dummy9_2bde6[32]; // 24ed:6f16
db dummy9_2be06[32]; // 24ed:6f36
db dummy9_2be26[32]; // 24ed:6f56
db dummy9_2be46[32]; // 24ed:6f76
db dummy9_2be66[32]; // 24ed:6f96
db dummy9_2be86[32]; // 24ed:6fb6
db dummy9_2bea6[32]; // 24ed:6fd6
db dummy9_2bec6[32]; // 24ed:6ff6
db dummy9_2bee6[32]; // 24ed:7016
db dummy9_2bf06[32]; // 24ed:7036
db dummy9_2bf26[32]; // 24ed:7056
db dummy9_2bf46[32]; // 24ed:7076
db dummy9_2bf66[32]; // 24ed:7096
db dummy9_2bf86[32]; // 24ed:70b6
db dummy9_2bfa6[32]; // 24ed:70d6
db dummy9_2bfc6[32]; // 24ed:70f6
db dummy9_2bfe6[32]; // 24ed:7116
db dummy9_2c006[32]; // 24ed:7136
db dummy9_2c026[32]; // 24ed:7156
db dummy9_2c046[32]; // 24ed:7176
db dummy9_2c066[32]; // 24ed:7196
db dummy9_2c086[32]; // 24ed:71b6
db dummy9_2c0a6[32]; // 24ed:71d6
db dummy9_2c0c6[32]; // 24ed:71f6
db dummy9_2c0e6[32]; // 24ed:7216
db dummy9_2c106[32]; // 24ed:7236
db dummy9_2c126[32]; // 24ed:7256
db dummy9_2c146[32]; // 24ed:7276
db dummy9_2c166[32]; // 24ed:7296
db dummy9_2c186[32]; // 24ed:72b6
db dummy9_2c1a6[32]; // 24ed:72d6
db dummy9_2c1c6[32]; // 24ed:72f6
db dummy9_2c1e6[32]; // 24ed:7316
db dummy9_2c206[32]; // 24ed:7336
db dummy9_2c226[32]; // 24ed:7356
db dummy9_2c246[32]; // 24ed:7376
db dummy9_2c266[32]; // 24ed:7396
db dummy9_2c286[32]; // 24ed:73b6
db dummy9_2c2a6[32]; // 24ed:73d6
db dummy9_2c2c6[32]; // 24ed:73f6
db dummy9_2c2e6[32]; // 24ed:7416
db dummy9_2c306[32]; // 24ed:7436
db dummy9_2c326[32]; // 24ed:7456
db dummy9_2c346[32]; // 24ed:7476
db dummy9_2c366[32]; // 24ed:7496
db dummy9_2c386[32]; // 24ed:74b6
db dummy9_2c3a6[32]; // 24ed:74d6
db dummy9_2c3c6[32]; // 24ed:74f6
db dummy9_2c3e6[32]; // 24ed:7516
db dummy9_2c406[32]; // 24ed:7536
db dummy9_2c426[32]; // 24ed:7556
db dummy9_2c446[32]; // 24ed:7576
db dummy9_2c466[32]; // 24ed:7596
db dummy9_2c486[32]; // 24ed:75b6
db dummy9_2c4a6[32]; // 24ed:75d6
db dummy9_2c4c6[32]; // 24ed:75f6
db dummy9_2c4e6[32]; // 24ed:7616
db dummy9_2c506[32]; // 24ed:7636
db dummy9_2c526[32]; // 24ed:7656
db dummy9_2c546[32]; // 24ed:7676
db dummy9_2c566[32]; // 24ed:7696
db dummy9_2c586[32]; // 24ed:76b6
db dummy9_2c5a6[32]; // 24ed:76d6
db dummy9_2c5c6[32]; // 24ed:76f6
db dummy9_2c5e6[32]; // 24ed:7716
db dummy9_2c606[32]; // 24ed:7736
db dummy9_2c626[32]; // 24ed:7756
db dummy9_2c646[32]; // 24ed:7776
db dummy9_2c666[32]; // 24ed:7796
db dummy9_2c686[32]; // 24ed:77b6
db dummy9_2c6a6[32]; // 24ed:77d6
db dummy9_2c6c6[32]; // 24ed:77f6
db dummy9_2c6e6[32]; // 24ed:7816
db dummy9_2c706[32]; // 24ed:7836
db dummy9_2c726[32]; // 24ed:7856
db dummy9_2c746[32]; // 24ed:7876
db dummy9_2c766[32]; // 24ed:7896
db dummy9_2c786[32]; // 24ed:78b6
db dummy9_2c7a6[32]; // 24ed:78d6
db dummy9_2c7c6[32]; // 24ed:78f6
db dummy9_2c7e6[32]; // 24ed:7916
db dummy9_2c806[32]; // 24ed:7936
db dummy9_2c826[32]; // 24ed:7956
db dummy9_2c846[32]; // 24ed:7976
db dummy9_2c866[32]; // 24ed:7996
db dummy9_2c886[32]; // 24ed:79b6
db dummy9_2c8a6[32]; // 24ed:79d6
db dummy9_2c8c6[32]; // 24ed:79f6
db dummy9_2c8e6[32]; // 24ed:7a16
db dummy9_2c906[32]; // 24ed:7a36
db dummy9_2c926[32]; // 24ed:7a56
db dummy9_2c946[32]; // 24ed:7a76
db dummy9_2c966[32]; // 24ed:7a96
db dummy9_2c986[32]; // 24ed:7ab6
db dummy9_2c9a6[32]; // 24ed:7ad6
db dummy9_2c9c6[32]; // 24ed:7af6
db dummy9_2c9e6[32]; // 24ed:7b16
db dummy9_2ca06[32]; // 24ed:7b36
db dummy9_2ca26[32]; // 24ed:7b56
db dummy9_2ca46[32]; // 24ed:7b76
db dummy9_2ca66[32]; // 24ed:7b96
db dummy9_2ca86[32]; // 24ed:7bb6
db dummy9_2caa6[32]; // 24ed:7bd6
db dummy9_2cac6[32]; // 24ed:7bf6
db dummy9_2cae6[32]; // 24ed:7c16
db dummy9_2cb06[32]; // 24ed:7c36
db dummy9_2cb26[32]; // 24ed:7c56
db dummy9_2cb46[32]; // 24ed:7c76
db dummy9_2cb66[32]; // 24ed:7c96
db dummy9_2cb86[32]; // 24ed:7cb6
db dummy9_2cba6[32]; // 24ed:7cd6
db dummy9_2cbc6[32]; // 24ed:7cf6
db dummy9_2cbe6[32]; // 24ed:7d16
db dummy9_2cc06[32]; // 24ed:7d36
db dummy9_2cc26[32]; // 24ed:7d56
db dummy9_2cc46[32]; // 24ed:7d76
db dummy9_2cc66[32]; // 24ed:7d96
db dummy9_2cc86[32]; // 24ed:7db6
db dummy9_2cca6[32]; // 24ed:7dd6
db dummy9_2ccc6[32]; // 24ed:7df6
db dummy9_2cce6[32]; // 24ed:7e16
db dummy9_2cd06[32]; // 24ed:7e36
db dummy9_2cd26[32]; // 24ed:7e56
db dummy9_2cd46[32]; // 24ed:7e76
db dummy9_2cd66[32]; // 24ed:7e96
db dummy9_2cd86[32]; // 24ed:7eb6
db dummy9_2cda6[32]; // 24ed:7ed6
db dummy9_2cdc6[32]; // 24ed:7ef6
db dummy9_2cde6[32]; // 24ed:7f16
db dummy9_2ce06[32]; // 24ed:7f36
db dummy9_2ce26[32]; // 24ed:7f56
db dummy9_2ce46[32]; // 24ed:7f76
db dummy9_2ce66[32]; // 24ed:7f96
db dummy9_2ce86[32]; // 24ed:7fb6
db dummy9_2cea6[32]; // 24ed:7fd6
db dummy9_2cec6[32]; // 24ed:7ff6
db dummy9_2cee6[32]; // 24ed:8016
db dummy9_2cf06[32]; // 24ed:8036
db dummy9_2cf26[32]; // 24ed:8056
db dummy9_2cf46[32]; // 24ed:8076
db dummy9_2cf66[32]; // 24ed:8096
db dummy9_2cf86[32]; // 24ed:80b6
db dummy9_2cfa6[32]; // 24ed:80d6
db dummy9_2cfc6[32]; // 24ed:80f6
db dummy9_2cfe6[32]; // 24ed:8116
db dummy9_2d006[32]; // 24ed:8136
db dummy9_2d026[32]; // 24ed:8156
db dummy9_2d046[32]; // 24ed:8176
db dummy9_2d066[32]; // 24ed:8196
db dummy9_2d086[32]; // 24ed:81b6
db dummy9_2d0a6[32]; // 24ed:81d6
db dummy9_2d0c6[32]; // 24ed:81f6
db dummy9_2d0e6[32]; // 24ed:8216
db dummy9_2d106[32]; // 24ed:8236
db dummy9_2d126[32]; // 24ed:8256
db dummy9_2d146[32]; // 24ed:8276
db dummy9_2d166[32]; // 24ed:8296
db dummy9_2d186[32]; // 24ed:82b6
db dummy9_2d1a6[32]; // 24ed:82d6
db dummy9_2d1c6[32]; // 24ed:82f6
db dummy9_2d1e6[32]; // 24ed:8316
db dummy9_2d206[32]; // 24ed:8336
db dummy9_2d226[32]; // 24ed:8356
db dummy9_2d246[32]; // 24ed:8376
db dummy9_2d266[32]; // 24ed:8396
db dummy9_2d286[32]; // 24ed:83b6
db dummy9_2d2a6[32]; // 24ed:83d6
db dummy9_2d2c6[32]; // 24ed:83f6
db dummy9_2d2e6[32]; // 24ed:8416
db dummy9_2d306[32]; // 24ed:8436
db dummy9_2d326[32]; // 24ed:8456
db dummy9_2d346[32]; // 24ed:8476
db dummy9_2d366[32]; // 24ed:8496
db dummy9_2d386[32]; // 24ed:84b6
db dummy9_2d3a6[32]; // 24ed:84d6
db dummy9_2d3c6[32]; // 24ed:84f6
db dummy9_2d3e6[32]; // 24ed:8516
db dummy9_2d406[32]; // 24ed:8536
db dummy9_2d426[32]; // 24ed:8556
db dummy9_2d446[32]; // 24ed:8576
db dummy9_2d466[32]; // 24ed:8596
db dummy9_2d486[32]; // 24ed:85b6
db dummy9_2d4a6[32]; // 24ed:85d6
db dummy9_2d4c6[32]; // 24ed:85f6
db dummy9_2d4e6[32]; // 24ed:8616
db dummy9_2d506[32]; // 24ed:8636
db dummy9_2d526[32]; // 24ed:8656
db dummy9_2d546[32]; // 24ed:8676
db dummy9_2d566[32]; // 24ed:8696
db dummy9_2d586[32]; // 24ed:86b6
db dummy9_2d5a6[32]; // 24ed:86d6
db dummy9_2d5c6[32]; // 24ed:86f6
db dummy9_2d5e6[32]; // 24ed:8716
db dummy9_2d606[32]; // 24ed:8736
db dummy9_2d626[32]; // 24ed:8756
db dummy9_2d646[32]; // 24ed:8776
db dummy9_2d666[32]; // 24ed:8796
db dummy9_2d686[32]; // 24ed:87b6
db dummy9_2d6a6[32]; // 24ed:87d6
db dummy9_2d6c6[32]; // 24ed:87f6
db dummy9_2d6e6[32]; // 24ed:8816
db dummy9_2d706[32]; // 24ed:8836
db dummy9_2d726[32]; // 24ed:8856
db dummy9_2d746[32]; // 24ed:8876
db dummy9_2d766[32]; // 24ed:8896
db dummy9_2d786[32]; // 24ed:88b6
db dummy9_2d7a6[32]; // 24ed:88d6
db dummy9_2d7c6[32]; // 24ed:88f6
db dummy9_2d7e6[32]; // 24ed:8916
db dummy9_2d806[32]; // 24ed:8936
db dummy9_2d826[32]; // 24ed:8956
db dummy9_2d846[32]; // 24ed:8976
db dummy9_2d866[32]; // 24ed:8996
db dummy9_2d886[32]; // 24ed:89b6
db dummy9_2d8a6[32]; // 24ed:89d6
db dummy9_2d8c6[32]; // 24ed:89f6
db dummy9_2d8e6[32]; // 24ed:8a16
db dummy9_2d906[32]; // 24ed:8a36
db dummy9_2d926[32]; // 24ed:8a56
db dummy9_2d946[32]; // 24ed:8a76
db dummy9_2d966[32]; // 24ed:8a96
db dummy9_2d986[32]; // 24ed:8ab6
db dummy9_2d9a6[32]; // 24ed:8ad6
db dummy9_2d9c6[32]; // 24ed:8af6
db dummy9_2d9e6[32]; // 24ed:8b16
db dummy9_2da06[32]; // 24ed:8b36
db dummy9_2da26[32]; // 24ed:8b56
db dummy9_2da46[32]; // 24ed:8b76
db dummy9_2da66[32]; // 24ed:8b96
db dummy9_2da86[32]; // 24ed:8bb6
db dummy9_2daa6[32]; // 24ed:8bd6
db dummy9_2dac6[32]; // 24ed:8bf6
db dummy9_2dae6[32]; // 24ed:8c16
db dummy9_2db06[32]; // 24ed:8c36
db dummy9_2db26[32]; // 24ed:8c56
db dummy9_2db46[32]; // 24ed:8c76
db dummy9_2db66[32]; // 24ed:8c96
db dummy9_2db86[32]; // 24ed:8cb6
db dummy9_2dba6[32]; // 24ed:8cd6
db dummy9_2dbc6[32]; // 24ed:8cf6
db dummy9_2dbe6[32]; // 24ed:8d16
db dummy9_2dc06[32]; // 24ed:8d36
db dummy9_2dc26[32]; // 24ed:8d56
db dummy9_2dc46[32]; // 24ed:8d76
db dummy9_2dc66[32]; // 24ed:8d96
db dummy9_2dc86[32]; // 24ed:8db6
db dummy9_2dca6[32]; // 24ed:8dd6
db dummy9_2dcc6[32]; // 24ed:8df6
db dummy9_2dce6[32]; // 24ed:8e16
db dummy9_2dd06[32]; // 24ed:8e36
db dummy9_2dd26[32]; // 24ed:8e56
db dummy9_2dd46[32]; // 24ed:8e76
db dummy9_2dd66[32]; // 24ed:8e96
db dummy9_2dd86[32]; // 24ed:8eb6
db dummy9_2dda6[32]; // 24ed:8ed6
db dummy9_2ddc6[32]; // 24ed:8ef6
db dummy9_2dde6[32]; // 24ed:8f16
db dummy9_2de06[32]; // 24ed:8f36
db dummy9_2de26[32]; // 24ed:8f56
db dummy9_2de46[32]; // 24ed:8f76
db dummy9_2de66[32]; // 24ed:8f96
db dummy9_2de86[32]; // 24ed:8fb6
db dummy9_2dea6[32]; // 24ed:8fd6
db dummy9_2dec6[32]; // 24ed:8ff6
db dummy9_2dee6[32]; // 24ed:9016
db dummy9_2df06[32]; // 24ed:9036
db dummy9_2df26[32]; // 24ed:9056
db dummy9_2df46[32]; // 24ed:9076
db dummy9_2df66[32]; // 24ed:9096
db dummy9_2df86[32]; // 24ed:90b6
db dummy9_2dfa6[32]; // 24ed:90d6
db dummy9_2dfc6[32]; // 24ed:90f6
db dummy9_2dfe6[32]; // 24ed:9116
db dummy9_2e006[32]; // 24ed:9136
db dummy9_2e026[32]; // 24ed:9156
db dummy9_2e046[32]; // 24ed:9176
db dummy9_2e066[32]; // 24ed:9196
db dummy9_2e086[32]; // 24ed:91b6
db dummy9_2e0a6[32]; // 24ed:91d6
db dummy9_2e0c6[32]; // 24ed:91f6
db dummy9_2e0e6[32]; // 24ed:9216
db dummy9_2e106[32]; // 24ed:9236
db dummy9_2e126[32]; // 24ed:9256
db dummy9_2e146[32]; // 24ed:9276
db dummy9_2e166[32]; // 24ed:9296
db dummy9_2e186[32]; // 24ed:92b6
db dummy9_2e1a6[32]; // 24ed:92d6
db dummy9_2e1c6[32]; // 24ed:92f6
db dummy9_2e1e6[32]; // 24ed:9316
db dummy9_2e206[32]; // 24ed:9336
db dummy9_2e226[32]; // 24ed:9356
db dummy9_2e246[32]; // 24ed:9376
db dummy9_2e266[32]; // 24ed:9396
db dummy9_2e286[32]; // 24ed:93b6
db dummy9_2e2a6[32]; // 24ed:93d6
db dummy9_2e2c6[32]; // 24ed:93f6
db dummy9_2e2e6[32]; // 24ed:9416
db dummy9_2e306[32]; // 24ed:9436
db dummy9_2e326[32]; // 24ed:9456
db dummy9_2e346[32]; // 24ed:9476
db dummy9_2e366[32]; // 24ed:9496
db dummy9_2e386[32]; // 24ed:94b6
db dummy9_2e3a6[32]; // 24ed:94d6
db dummy9_2e3c6[32]; // 24ed:94f6
db dummy9_2e3e6[32]; // 24ed:9516
db dummy9_2e406[32]; // 24ed:9536
db dummy9_2e426[32]; // 24ed:9556
db dummy9_2e446[32]; // 24ed:9576
db dummy9_2e466[32]; // 24ed:9596
db dummy9_2e486[32]; // 24ed:95b6
db dummy9_2e4a6[32]; // 24ed:95d6
db dummy9_2e4c6[32]; // 24ed:95f6
db dummy9_2e4e6[32]; // 24ed:9616
db dummy9_2e506[32]; // 24ed:9636
db dummy9_2e526[32]; // 24ed:9656
db dummy9_2e546[32]; // 24ed:9676
db dummy9_2e566[32]; // 24ed:9696
db dummy9_2e586[32]; // 24ed:96b6
db dummy9_2e5a6[32]; // 24ed:96d6
db dummy9_2e5c6[32]; // 24ed:96f6
db dummy9_2e5e6[32]; // 24ed:9716
db dummy9_2e606[32]; // 24ed:9736
db dummy9_2e626[32]; // 24ed:9756
db dummy9_2e646[32]; // 24ed:9776
db dummy9_2e666[32]; // 24ed:9796
db dummy9_2e686[32]; // 24ed:97b6
db dummy9_2e6a6[32]; // 24ed:97d6
db dummy9_2e6c6[32]; // 24ed:97f6
db dummy9_2e6e6[32]; // 24ed:9816
db dummy9_2e706[32]; // 24ed:9836
db dummy9_2e726[32]; // 24ed:9856
db dummy9_2e746[32]; // 24ed:9876
db dummy9_2e766[32]; // 24ed:9896
db dummy9_2e786[32]; // 24ed:98b6
db dummy9_2e7a6[32]; // 24ed:98d6
db dummy9_2e7c6[32]; // 24ed:98f6
db dummy9_2e7e6[32]; // 24ed:9916
db dummy9_2e806[32]; // 24ed:9936
db dummy9_2e826[32]; // 24ed:9956
db dummy9_2e846[32]; // 24ed:9976
db dummy9_2e866[32]; // 24ed:9996
db dummy9_2e886[32]; // 24ed:99b6
db dummy9_2e8a6[32]; // 24ed:99d6
db dummy9_2e8c6[32]; // 24ed:99f6
db dummy9_2e8e6[32]; // 24ed:9a16
db dummy9_2e906[32]; // 24ed:9a36
db dummy9_2e926[32]; // 24ed:9a56
db dummy9_2e946[32]; // 24ed:9a76
db dummy9_2e966[32]; // 24ed:9a96
db dummy9_2e986[32]; // 24ed:9ab6
db dummy9_2e9a6[32]; // 24ed:9ad6
db dummy9_2e9c6[32]; // 24ed:9af6
db dummy9_2e9e6[32]; // 24ed:9b16
db dummy9_2ea06[32]; // 24ed:9b36
db dummy9_2ea26[32]; // 24ed:9b56
db dummy9_2ea46[32]; // 24ed:9b76
db dummy9_2ea66[32]; // 24ed:9b96
db dummy9_2ea86[32]; // 24ed:9bb6
db dummy9_2eaa6[32]; // 24ed:9bd6
db dummy9_2eac6[32]; // 24ed:9bf6
db dummy9_2eae6[32]; // 24ed:9c16
db dummy9_2eb06[32]; // 24ed:9c36
db dummy9_2eb26[32]; // 24ed:9c56
db dummy9_2eb46[32]; // 24ed:9c76
db dummy9_2eb66[32]; // 24ed:9c96
db dummy9_2eb86[32]; // 24ed:9cb6
db dummy9_2eba6[32]; // 24ed:9cd6
db dummy9_2ebc6[32]; // 24ed:9cf6
db dummy9_2ebe6[32]; // 24ed:9d16
db dummy9_2ec06[32]; // 24ed:9d36
db dummy9_2ec26[32]; // 24ed:9d56
db dummy9_2ec46[32]; // 24ed:9d76
db dummy9_2ec66[32]; // 24ed:9d96
db dummy9_2ec86[32]; // 24ed:9db6
db dummy9_2eca6[32]; // 24ed:9dd6
db dummy9_2ecc6[32]; // 24ed:9df6
db dummy9_2ece6[32]; // 24ed:9e16
db dummy9_2ed06; // 24ed:9e36
db dummy9_2ed07; // 24ed:9e37
db dummy9_2ed08; // 24ed:9e38
db dummy9_2ed09; // 24ed:9e39
db dummy9_2ed0a; // 24ed:9e3a
db dummy9_2ed0b; // 24ed:9e3b
db dummy9_2ed0c; // 24ed:9e3c
db dummy9_2ed0d; // 24ed:9e3d
db dummy9_2ed0e; // 24ed:9e3e
db dummy9_2ed0f; // 24ed:9e3f
db dummy9_2ed10; // 24ed:9e40
db dummy9_2ed11; // 24ed:9e41
db dummy9_2ed12; // 24ed:9e42
db dummy9_2ed13; // 24ed:9e43
db dummy9_2ed14; // 24ed:9e44
db dummy9_2ed15; // 24ed:9e45
dw word_3d2f6; // 24ed:9e46
dw word_3d2f8; // 24ed:9e48
db dummy9_2ed1a; // 24ed:9e4a
db dummy9_2ed1b; // 24ed:9e4b
db dummy9_2ed1c; // 24ed:9e4c
db dummy9_2ed1d; // 24ed:9e4d
dw word_3d2fe; // 24ed:9e4e
db dummy9_2ed20[32]; // 24ed:9e50
db dummy9_2ed40[32]; // 24ed:9e70
db dummy9_2ed60[32]; // 24ed:9e90
db dummy9_2ed80[32]; // 24ed:9eb0
db dummy9_2eda0[32]; // 24ed:9ed0
db dummy9_2edc0[32]; // 24ed:9ef0
db dummy9_2ede0[32]; // 24ed:9f10
db dummy9_2ee00[32]; // 24ed:9f30
db dummy9_2ee20[32]; // 24ed:9f50
db dummy9_2ee40[32]; // 24ed:9f70
db dummy9_2ee60[32]; // 24ed:9f90
db dummy9_2ee80[32]; // 24ed:9fb0
db dummy9_2eea0[32]; // 24ed:9fd0
db dummy9_2eec0[32]; // 24ed:9ff0
db dummy9_2eee0[32]; // 24ed:a010
db dummy9_2ef00[32]; // 24ed:a030
db dummy9_2ef20[32]; // 24ed:a050
db dummy9_2ef40[32]; // 24ed:a070
db dummy9_2ef60[32]; // 24ed:a090
db dummy9_2ef80[32]; // 24ed:a0b0
db dummy9_2efa0[32]; // 24ed:a0d0
db dummy9_2efc0[32]; // 24ed:a0f0
db dummy9_2efe0[32]; // 24ed:a110
db dummy9_2f000[32]; // 24ed:a130
db dummy9_2f020[32]; // 24ed:a150
db dummy9_2f040[32]; // 24ed:a170
db dummy9_2f060[32]; // 24ed:a190
db dummy9_2f080[32]; // 24ed:a1b0
db dummy9_2f0a0[32]; // 24ed:a1d0
db dummy9_2f0c0[32]; // 24ed:a1f0
db dummy9_2f0e0[32]; // 24ed:a210
db dummy9_2f100[32]; // 24ed:a230
db dummy9_2f120[32]; // 24ed:a250
db dummy9_2f140[32]; // 24ed:a270
db dummy9_2f160[32]; // 24ed:a290
db dummy9_2f180[32]; // 24ed:a2b0
db dummy9_2f1a0[32]; // 24ed:a2d0
db dummy9_2f1c0[32]; // 24ed:a2f0
db dummy9_2f1e0[32]; // 24ed:a310
db dummy9_2f200[32]; // 24ed:a330
db dummy9_2f220[32]; // 24ed:a350
db dummy9_2f240[32]; // 24ed:a370
db dummy9_2f260[32]; // 24ed:a390
db dummy9_2f280[32]; // 24ed:a3b0
db dummy9_2f2a0[32]; // 24ed:a3d0
db dummy9_2f2c0[32]; // 24ed:a3f0
db dummy9_2f2e0[32]; // 24ed:a410
db dummy9_2f300[32]; // 24ed:a430
db dummy9_2f320[32]; // 24ed:a450
db dummy9_2f340[32]; // 24ed:a470
db dummy9_2f360[32]; // 24ed:a490
db dummy9_2f380[32]; // 24ed:a4b0
db dummy9_2f3a0[32]; // 24ed:a4d0
db dummy9_2f3c0[32]; // 24ed:a4f0
db dummy9_2f3e0[32]; // 24ed:a510
db dummy9_2f400[32]; // 24ed:a530
db dummy9_2f420[32]; // 24ed:a550
db dummy9_2f440[32]; // 24ed:a570
db dummy9_2f460[32]; // 24ed:a590
db dummy9_2f480[32]; // 24ed:a5b0
db dummy9_2f4a0[32]; // 24ed:a5d0
db dummy9_2f4c0[32]; // 24ed:a5f0
db dummy9_2f4e0[32]; // 24ed:a610
db dummy9_2f500[32]; // 24ed:a630
db dummy9_2f520[32]; // 24ed:a650
db dummy9_2f540[32]; // 24ed:a670
db dummy9_2f560[32]; // 24ed:a690
db dummy9_2f580[32]; // 24ed:a6b0
db dummy9_2f5a0[32]; // 24ed:a6d0
db dummy9_2f5c0[32]; // 24ed:a6f0
db dummy9_2f5e0[32]; // 24ed:a710
db dummy9_2f600[32]; // 24ed:a730
db dummy9_2f620[32]; // 24ed:a750
db dummy9_2f640[32]; // 24ed:a770
db dummy9_2f660[32]; // 24ed:a790
db dummy9_2f680[32]; // 24ed:a7b0
db dummy9_2f6a0[32]; // 24ed:a7d0
db dummy9_2f6c0[32]; // 24ed:a7f0
db dummy9_2f6e0[32]; // 24ed:a810
db dummy9_2f700[32]; // 24ed:a830
db dummy9_2f720[32]; // 24ed:a850
db dummy9_2f740[32]; // 24ed:a870
db dummy9_2f760[32]; // 24ed:a890
db dummy9_2f780[32]; // 24ed:a8b0
db dummy9_2f7a0[32]; // 24ed:a8d0
db dummy9_2f7c0[32]; // 24ed:a8f0
db dummy9_2f7e0[32]; // 24ed:a910
db dummy9_2f800[32]; // 24ed:a930
db dummy9_2f820[32]; // 24ed:a950
db dummy9_2f840[32]; // 24ed:a970
db dummy9_2f860[32]; // 24ed:a990
db dummy9_2f880[32]; // 24ed:a9b0
db dummy9_2f8a0[32]; // 24ed:a9d0
db dummy9_2f8c0[32]; // 24ed:a9f0
db dummy9_2f8e0[32]; // 24ed:aa10
db dummy9_2f900[32]; // 24ed:aa30
db dummy9_2f920[32]; // 24ed:aa50
db dummy9_2f940[32]; // 24ed:aa70
db dummy9_2f960[32]; // 24ed:aa90
db dummy9_2f980[32]; // 24ed:aab0
db dummy9_2f9a0[32]; // 24ed:aad0
db dummy9_2f9c0[32]; // 24ed:aaf0
db dummy9_2f9e0[32]; // 24ed:ab10
db dummy9_2fa00[32]; // 24ed:ab30
db dummy9_2fa20[32]; // 24ed:ab50
db dummy9_2fa40[32]; // 24ed:ab70
db dummy9_2fa60[32]; // 24ed:ab90
db dummy9_2fa80[32]; // 24ed:abb0
db dummy9_2faa0[32]; // 24ed:abd0
db dummy9_2fac0[32]; // 24ed:abf0
db dummy9_2fae0[32]; // 24ed:ac10
db dummy9_2fb00[32]; // 24ed:ac30
db dummy9_2fb20[32]; // 24ed:ac50
db dummy9_2fb40[32]; // 24ed:ac70
db dummy9_2fb60[32]; // 24ed:ac90
db dummy9_2fb80[32]; // 24ed:acb0
db dummy9_2fba0[32]; // 24ed:acd0
db dummy9_2fbc0[32]; // 24ed:acf0
db dummy9_2fbe0[32]; // 24ed:ad10
db dummy9_2fc00[32]; // 24ed:ad30
db dummy9_2fc20[32]; // 24ed:ad50
db dummy9_2fc40[32]; // 24ed:ad70
db dummy9_2fc60[32]; // 24ed:ad90
db dummy9_2fc80[32]; // 24ed:adb0
db dummy9_2fca0[32]; // 24ed:add0
db dummy9_2fcc0[32]; // 24ed:adf0
db dummy9_2fce0[32]; // 24ed:ae10
db dummy9_2fd00[32]; // 24ed:ae30
db dummy9_2fd20[32]; // 24ed:ae50
db dummy9_2fd40[32]; // 24ed:ae70
db dummy9_2fd60[32]; // 24ed:ae90
db dummy9_2fd80[32]; // 24ed:aeb0
db dummy9_2fda0[32]; // 24ed:aed0
db dummy9_2fdc0[32]; // 24ed:aef0
db dummy9_2fde0[32]; // 24ed:af10
db dummy9_2fe00[32]; // 24ed:af30
db dummy9_2fe20[32]; // 24ed:af50
db dummy9_2fe40[32]; // 24ed:af70
db dummy9_2fe60[32]; // 24ed:af90
db dummy9_2fe80[32]; // 24ed:afb0
db dummy9_2fea0[32]; // 24ed:afd0
db dummy9_2fec0[32]; // 24ed:aff0
db dummy9_2fee0[32]; // 24ed:b010
db dummy9_2ff00[32]; // 24ed:b030
db dummy9_2ff20[32]; // 24ed:b050
db dummy9_2ff40[32]; // 24ed:b070
db dummy9_2ff60[32]; // 24ed:b090
db dummy9_2ff80[32]; // 24ed:b0b0
db dummy9_2ffa0[32]; // 24ed:b0d0
db dummy9_2ffc0[32]; // 24ed:b0f0
db dummy9_2ffe0[32]; // 24ed:b110
db dummy9_30000[32]; // 24ed:b130
db dummy9_30020[32]; // 24ed:b150
db dummy9_30040[32]; // 24ed:b170
db dummy9_30060[32]; // 24ed:b190
db dummy9_30080[32]; // 24ed:b1b0
db dummy9_300a0[32]; // 24ed:b1d0
db dummy9_300c0[32]; // 24ed:b1f0
db dummy9_300e0[32]; // 24ed:b210
db dummy9_30100[32]; // 24ed:b230
db dummy9_30120[32]; // 24ed:b250
db dummy9_30140[32]; // 24ed:b270
db dummy9_30160[32]; // 24ed:b290
db dummy9_30180[32]; // 24ed:b2b0
db dummy9_301a0[32]; // 24ed:b2d0
db dummy9_301c0[32]; // 24ed:b2f0
db dummy9_301e0[32]; // 24ed:b310
db dummy9_30200[32]; // 24ed:b330
db dummy9_30220[32]; // 24ed:b350
db dummy9_30240[32]; // 24ed:b370
db dummy9_30260[32]; // 24ed:b390
db dummy9_30280[32]; // 24ed:b3b0
db dummy9_302a0[32]; // 24ed:b3d0
db dummy9_302c0[32]; // 24ed:b3f0
db dummy9_302e0[32]; // 24ed:b410
db dummy9_30300[32]; // 24ed:b430
db dummy9_30320[32]; // 24ed:b450
db dummy9_30340[32]; // 24ed:b470
db dummy9_30360[32]; // 24ed:b490
db dummy9_30380[32]; // 24ed:b4b0
db dummy9_303a0[32]; // 24ed:b4d0
db dummy9_303c0; // 24ed:b4f0
dw dummy9_303c1; // 24ed:b4f1
db dummy9_303c3[32]; // 24ed:b4f3
db dummy9_303e3[32]; // 24ed:b513
db dummy9_30403[32]; // 24ed:b533
db dummy9_30423[32]; // 24ed:b553
db dummy9_30443[32]; // 24ed:b573
db dummy9_30463[32]; // 24ed:b593
db dummy9_30483[32]; // 24ed:b5b3
db dummy9_304a3[32]; // 24ed:b5d3
db dummy9_304c3[32]; // 24ed:b5f3
db dummy9_304e3[32]; // 24ed:b613
db dummy9_30503[32]; // 24ed:b633
db dummy9_30523[32]; // 24ed:b653
db dummy9_30543[32]; // 24ed:b673
db dummy9_30563[32]; // 24ed:b693
db dummy9_30583[32]; // 24ed:b6b3
db dummy9_305a3[32]; // 24ed:b6d3
db dummy9_305c3[32]; // 24ed:b6f3
db dummy9_305e3[32]; // 24ed:b713
db dummy9_30603[32]; // 24ed:b733
db dummy9_30623[32]; // 24ed:b753
db dummy9_30643[32]; // 24ed:b773
db dummy9_30663[32]; // 24ed:b793
db dummy9_30683[32]; // 24ed:b7b3
db dummy9_306a3[32]; // 24ed:b7d3
db dummy9_306c3[32]; // 24ed:b7f3
db dummy9_306e3[32]; // 24ed:b813
db dummy9_30703[32]; // 24ed:b833
db dummy9_30723[32]; // 24ed:b853
db dummy9_30743[32]; // 24ed:b873
db dummy9_30763[32]; // 24ed:b893
db dummy9_30783[32]; // 24ed:b8b3
db dummy9_307a3[32]; // 24ed:b8d3
db dummy9_307c3[32]; // 24ed:b8f3
db dummy9_307e3[32]; // 24ed:b913
db dummy9_30803[32]; // 24ed:b933
db dummy9_30823[32]; // 24ed:b953
db dummy9_30843[32]; // 24ed:b973
db dummy9_30863[32]; // 24ed:b993
db dummy9_30883[32]; // 24ed:b9b3
db dummy9_308a3[32]; // 24ed:b9d3
db dummy9_308c3[32]; // 24ed:b9f3
db dummy9_308e3[32]; // 24ed:ba13
db dummy9_30903[32]; // 24ed:ba33
db dummy9_30923[32]; // 24ed:ba53
db dummy9_30943[32]; // 24ed:ba73
db dummy9_30963[32]; // 24ed:ba93
db dummy9_30983[32]; // 24ed:bab3
db dummy9_309a3[32]; // 24ed:bad3
db dummy9_309c3[32]; // 24ed:baf3
db dummy9_309e3[32]; // 24ed:bb13
db dummy9_30a03[32]; // 24ed:bb33
db dummy9_30a23[32]; // 24ed:bb53
db dummy9_30a43[32]; // 24ed:bb73
db dummy9_30a63[32]; // 24ed:bb93
db dummy9_30a83[32]; // 24ed:bbb3
db dummy9_30aa3[32]; // 24ed:bbd3
db dummy9_30ac3[32]; // 24ed:bbf3
db dummy9_30ae3[32]; // 24ed:bc13
db dummy9_30b03[32]; // 24ed:bc33
db dummy9_30b23[32]; // 24ed:bc53
db dummy9_30b43[32]; // 24ed:bc73
db dummy9_30b63[32]; // 24ed:bc93
db dummy9_30b83[32]; // 24ed:bcb3
db dummy9_30ba3[32]; // 24ed:bcd3
db dummy9_30bc3[32]; // 24ed:bcf3
db dummy9_30be3[32]; // 24ed:bd13
db dummy9_30c03[32]; // 24ed:bd33
db dummy9_30c23[32]; // 24ed:bd53
db dummy9_30c43[32]; // 24ed:bd73
db dummy9_30c63[32]; // 24ed:bd93
db dummy9_30c83[32]; // 24ed:bdb3
db dummy9_30ca3[32]; // 24ed:bdd3
db dummy9_30cc3[32]; // 24ed:bdf3
db dummy9_30ce3[32]; // 24ed:be13
db dummy9_30d03[32]; // 24ed:be33
db dummy9_30d23[32]; // 24ed:be53
db dummy9_30d43[32]; // 24ed:be73
db dummy9_30d63[32]; // 24ed:be93
db dummy9_30d83[32]; // 24ed:beb3
db dummy9_30da3[32]; // 24ed:bed3
db dummy9_30dc3[32]; // 24ed:bef3
db dummy9_30de3[32]; // 24ed:bf13
db dummy9_30e03[32]; // 24ed:bf33
db dummy9_30e23[32]; // 24ed:bf53
db dummy9_30e43[32]; // 24ed:bf73
db dummy9_30e63[32]; // 24ed:bf93
db dummy9_30e83[32]; // 24ed:bfb3
db dummy9_30ea3[32]; // 24ed:bfd3
db dummy9_30ec3[32]; // 24ed:bff3
db dummy9_30ee3[32]; // 24ed:c013
db dummy9_30f03[32]; // 24ed:c033
db dummy9_30f23[32]; // 24ed:c053
db dummy9_30f43[32]; // 24ed:c073
db dummy9_30f63[32]; // 24ed:c093
db dummy9_30f83[32]; // 24ed:c0b3
db dummy9_30fa3[32]; // 24ed:c0d3
db dummy9_30fc3[32]; // 24ed:c0f3
db dummy9_30fe3[32]; // 24ed:c113
db dummy9_31003[32]; // 24ed:c133
db dummy9_31023[32]; // 24ed:c153
db dummy9_31043[32]; // 24ed:c173
db dummy9_31063[32]; // 24ed:c193
db dummy9_31083[32]; // 24ed:c1b3
db dummy9_310a3[32]; // 24ed:c1d3
db dummy9_310c3[32]; // 24ed:c1f3
db dummy9_310e3[32]; // 24ed:c213
db dummy9_31103; // 24ed:c233
db dummy9_31104; // 24ed:c234
db dummy9_31105; // 24ed:c235
db dummy9_31106; // 24ed:c236
db dummy9_31107; // 24ed:c237
db dummy9_31108; // 24ed:c238
db dummy9_31109; // 24ed:c239
db dummy9_3110a; // 24ed:c23a
db dummy9_3110b; // 24ed:c23b
db dummy9_3110c; // 24ed:c23c
db dummy9_3110d; // 24ed:c23d
db dummy9_3110e; // 24ed:c23e
db dummy9_3110f; // 24ed:c23f
db dummy9_31110; // 24ed:c240
db dummy9_31111; // 24ed:c241
db dummy9_31112; // 24ed:c242
db dummy9_31113; // 24ed:c243
db dummy9_31114; // 24ed:c244
db dummy9_31115; // 24ed:c245
db dummy9_31116; // 24ed:c246
db dummy9_31117; // 24ed:c247
db dummy9_31118; // 24ed:c248
db dummy9_31119; // 24ed:c249
db dummy9_3111a; // 24ed:c24a
db dummy9_3111b; // 24ed:c24b
db dummy9_3111c; // 24ed:c24c
db dummy9_3111d; // 24ed:c24d
dw dummy9_3111e; // 24ed:c24e
db dummy9_31120; // 24ed:c250
db dummy9_31121; // 24ed:c251
db dummy9_31122; // 24ed:c252
db dummy9_31123; // 24ed:c253
db dummy9_31124; // 24ed:c254
db dummy9_31125; // 24ed:c255
db dummy9_31126; // 24ed:c256
db dummy9_31127; // 24ed:c257
db dummy9_31128; // 24ed:c258
db dummy9_31129; // 24ed:c259
dw dummy9_3112a; // 24ed:c25a
db dummy9_3112c[32]; // 24ed:c25c
db dummy9_3114c[32]; // 24ed:c27c
db dummy9_3116c[32]; // 24ed:c29c
db dummy9_3118c[32]; // 24ed:c2bc
db dummy9_311ac[32]; // 24ed:c2dc
db dummy9_311cc[32]; // 24ed:c2fc
db dummy9_311ec[32]; // 24ed:c31c
db dummy9_3120c[32]; // 24ed:c33c
db dummy9_3122c[32]; // 24ed:c35c
db dummy9_3124c[32]; // 24ed:c37c
db dummy9_3126c[32]; // 24ed:c39c
db dummy9_3128c[32]; // 24ed:c3bc
db dummy9_312ac[32]; // 24ed:c3dc
db dummy9_312cc[32]; // 24ed:c3fc
db dummy9_312ec[32]; // 24ed:c41c
db dummy9_3130c[32]; // 24ed:c43c
db dummy9_3132c[32]; // 24ed:c45c
db dummy9_3134c[32]; // 24ed:c47c
db dummy9_3136c[32]; // 24ed:c49c
db dummy9_3138c[32]; // 24ed:c4bc
db dummy9_313ac[32]; // 24ed:c4dc
db dummy9_313cc[32]; // 24ed:c4fc
db dummy9_313ec[32]; // 24ed:c51c
db dummy9_3140c[32]; // 24ed:c53c
db dummy9_3142c[32]; // 24ed:c55c
db dummy9_3144c[32]; // 24ed:c57c
db dummy9_3146c[32]; // 24ed:c59c
db dummy9_3148c[32]; // 24ed:c5bc
db dummy9_314ac[32]; // 24ed:c5dc
db dummy9_314cc[32]; // 24ed:c5fc
db dummy9_314ec[32]; // 24ed:c61c
db dummy9_3150c[32]; // 24ed:c63c
db dummy9_3152c[32]; // 24ed:c65c
db dummy9_3154c[32]; // 24ed:c67c
db dummy9_3156c[32]; // 24ed:c69c
db dummy9_3158c[32]; // 24ed:c6bc
db dummy9_315ac[32]; // 24ed:c6dc
db dummy9_315cc[32]; // 24ed:c6fc
db dummy9_315ec[32]; // 24ed:c71c
db dummy9_3160c[32]; // 24ed:c73c
db dummy9_3162c[32]; // 24ed:c75c
db dummy9_3164c[32]; // 24ed:c77c
db dummy9_3166c[32]; // 24ed:c79c
db dummy9_3168c[32]; // 24ed:c7bc
db dummy9_316ac[32]; // 24ed:c7dc
db dummy9_316cc[32]; // 24ed:c7fc
db dummy9_316ec[32]; // 24ed:c81c
db dummy9_3170c[32]; // 24ed:c83c
db dummy9_3172c[32]; // 24ed:c85c
db dummy9_3174c[32]; // 24ed:c87c
db dummy9_3176c[32]; // 24ed:c89c
db dummy9_3178c[32]; // 24ed:c8bc
db dummy9_317ac[32]; // 24ed:c8dc
db dummy9_317cc[32]; // 24ed:c8fc
db dummy9_317ec[32]; // 24ed:c91c
db dummy9_3180c[32]; // 24ed:c93c
db dummy9_3182c[32]; // 24ed:c95c
db dummy9_3184c[32]; // 24ed:c97c
db dummy9_3186c[32]; // 24ed:c99c
db dummy9_3188c[32]; // 24ed:c9bc
db dummy9_318ac[32]; // 24ed:c9dc
db dummy9_318cc[32]; // 24ed:c9fc
db dummy9_318ec[32]; // 24ed:ca1c
db dummy9_3190c[32]; // 24ed:ca3c
db dummy9_3192c[32]; // 24ed:ca5c
db dummy9_3194c[32]; // 24ed:ca7c
db dummy9_3196c[32]; // 24ed:ca9c
db dummy9_3198c[32]; // 24ed:cabc
db dummy9_319ac[32]; // 24ed:cadc
db dummy9_319cc[32]; // 24ed:cafc
db dummy9_319ec[32]; // 24ed:cb1c
db dummy9_31a0c; // 24ed:cb3c
db dummy9_31a0d; // 24ed:cb3d
db dummy9_31a0e; // 24ed:cb3e
db dummy9_31a0f; // 24ed:cb3f
db dummy9_31a10; // 24ed:cb40
db dummy9_31a11; // 24ed:cb41
db dummy9_31a12; // 24ed:cb42
db dummy9_31a13; // 24ed:cb43
db dummy9_31a14; // 24ed:cb44
db dummy9_31a15; // 24ed:cb45
db dummy9_31a16; // 24ed:cb46
db dummy9_31a17; // 24ed:cb47
db dummy9_31a18; // 24ed:cb48
db dummy9_31a19; // 24ed:cb49
db dummy9_31a1a; // 24ed:cb4a
db dummy9_31a1b; // 24ed:cb4b
db dummy9_31a1c; // 24ed:cb4c
db dummy9_31a1d; // 24ed:cb4d
db dummy9_31a1e; // 24ed:cb4e
db dummy9_31a1f; // 24ed:cb4f
db dummy9_31a20; // 24ed:cb50
db dummy9_31a21; // 24ed:cb51
db dummy9_31a22; // 24ed:cb52
db dummy9_31a23; // 24ed:cb53
db dummy9_31a24; // 24ed:cb54
db dummy9_31a25; // 24ed:cb55
db dummy9_31a26; // 24ed:cb56
db dummy9_31a27; // 24ed:cb57
db unk_40008; // 24ed:cb58
db dummy9_31a29[32]; // 24ed:cb59
db dummy9_31a49[32]; // 24ed:cb79
db dummy9_31a69[32]; // 24ed:cb99
db dummy9_31a89[32]; // 24ed:cbb9
db dummy9_31aa9[32]; // 24ed:cbd9
db dummy9_31ac9[32]; // 24ed:cbf9
db dummy9_31ae9[32]; // 24ed:cc19
db dummy9_31b09[32]; // 24ed:cc39
db dummy9_31b29[32]; // 24ed:cc59
db dummy9_31b49[32]; // 24ed:cc79
db dummy9_31b69[32]; // 24ed:cc99
db dummy9_31b89[32]; // 24ed:ccb9
db dummy9_31ba9[32]; // 24ed:ccd9
db dummy9_31bc9[32]; // 24ed:ccf9
db dummy9_31be9[32]; // 24ed:cd19
db dummy9_31c09[32]; // 24ed:cd39
db dummy9_31c29[32]; // 24ed:cd59
db dummy9_31c49[32]; // 24ed:cd79
db dummy9_31c69[32]; // 24ed:cd99
db dummy9_31c89[32]; // 24ed:cdb9
db dummy9_31ca9[32]; // 24ed:cdd9
db dummy9_31cc9[32]; // 24ed:cdf9
db dummy9_31ce9[32]; // 24ed:ce19
db dummy9_31d09[32]; // 24ed:ce39
db dummy9_31d29[32]; // 24ed:ce59
db dummy9_31d49[32]; // 24ed:ce79
db dummy9_31d69[32]; // 24ed:ce99
db dummy9_31d89[32]; // 24ed:ceb9
db dummy9_31da9[32]; // 24ed:ced9
db dummy9_31dc9[32]; // 24ed:cef9
db dummy9_31de9[32]; // 24ed:cf19
db dummy9_31e09[32]; // 24ed:cf39
db dummy9_31e29[32]; // 24ed:cf59
db dummy9_31e49; // 24ed:cf79
db dummy9_31e4a; // 24ed:cf7a
db dummy9_31e4b; // 24ed:cf7b
db dummy9_31e4c; // 24ed:cf7c
db dummy9_31e4d; // 24ed:cf7d
db dummy9_31e4e; // 24ed:cf7e
db dummy9_31e4f; // 24ed:cf7f
db dummy9_31e50; // 24ed:cf80
db dummy9_31e51; // 24ed:cf81
db dummy9_31e52; // 24ed:cf82
db dummy9_31e53; // 24ed:cf83
db dummy9_31e54; // 24ed:cf84
db dummy9_31e55; // 24ed:cf85
db dummy9_31e56; // 24ed:cf86
db dummy9_31e57; // 24ed:cf87
db dummy9_31e58; // 24ed:cf88
db dummy9_31e59; // 24ed:cf89
db dummy9_31e5a; // 24ed:cf8a
db dummy9_31e5b; // 24ed:cf8b
db dummy9_31e5c; // 24ed:cf8c
db dummy9_31e5d; // 24ed:cf8d
db dummy9_31e5e; // 24ed:cf8e
db dummy9_31e5f; // 24ed:cf8f
db unk_40440; // 24ed:cf90
db dummy9_31e61; // 24ed:cf91
db unk_40442; // 24ed:cf92
db dummy9_31e63[32]; // 24ed:cf93
db dummy9_31e83; // 24ed:cfb3
db dummy9_31e84; // 24ed:cfb4
db dummy9_31e85; // 24ed:cfb5
db dummy9_31e86; // 24ed:cfb6
db dummy9_31e87; // 24ed:cfb7
db dummy9_31e88; // 24ed:cfb8
db dummy9_31e89; // 24ed:cfb9
db unk_4046a; // 24ed:cfba
db dummy9_31e8b[32]; // 24ed:cfbb
db dummy9_31eab[32]; // 24ed:cfdb
db dummy9_31ecb[32]; // 24ed:cffb
db dummy9_31eeb[32]; // 24ed:d01b
db dummy9_31f0b[32]; // 24ed:d03b
db dummy9_31f2b[32]; // 24ed:d05b
db dummy9_31f4b[32]; // 24ed:d07b
db dummy9_31f6b[32]; // 24ed:d09b
db dummy9_31f8b[32]; // 24ed:d0bb
db dummy9_31fab[32]; // 24ed:d0db
db dummy9_31fcb[32]; // 24ed:d0fb
db dummy9_31feb[32]; // 24ed:d11b
db dummy9_3200b[32]; // 24ed:d13b
db dummy9_3202b[32]; // 24ed:d15b
db dummy9_3204b[32]; // 24ed:d17b
db dummy9_3206b[32]; // 24ed:d19b
db dummy9_3208b[32]; // 24ed:d1bb
db dummy9_320ab[32]; // 24ed:d1db
db dummy9_320cb[32]; // 24ed:d1fb
db dummy9_320eb[32]; // 24ed:d21b
db dummy9_3210b[32]; // 24ed:d23b
db dummy9_3212b[32]; // 24ed:d25b
db dummy9_3214b[32]; // 24ed:d27b
db dummy9_3216b[32]; // 24ed:d29b
db dummy9_3218b[32]; // 24ed:d2bb
db dummy9_321ab[32]; // 24ed:d2db
db dummy9_321cb[32]; // 24ed:d2fb
db dummy9_321eb[32]; // 24ed:d31b
db dummy9_3220b[32]; // 24ed:d33b
db dummy9_3222b[32]; // 24ed:d35b
db dummy9_3224b[32]; // 24ed:d37b
db dummy9_3226b[32]; // 24ed:d39b
db dummy9_3228b[32]; // 24ed:d3bb
db dummy9_322ab[32]; // 24ed:d3db
db dummy9_322cb[32]; // 24ed:d3fb
db dummy9_322eb[32]; // 24ed:d41b
db dummy9_3230b[32]; // 24ed:d43b
db dummy9_3232b[32]; // 24ed:d45b
db dummy9_3234b[32]; // 24ed:d47b
db dummy9_3236b[32]; // 24ed:d49b
db dummy9_3238b[32]; // 24ed:d4bb
db dummy9_323ab[32]; // 24ed:d4db
db dummy9_323cb[32]; // 24ed:d4fb
db dummy9_323eb[32]; // 24ed:d51b
db dummy9_3240b[32]; // 24ed:d53b
db dummy9_3242b[32]; // 24ed:d55b
db dummy9_3244b[32]; // 24ed:d57b
db dummy9_3246b[32]; // 24ed:d59b
db dummy9_3248b[32]; // 24ed:d5bb
db dummy9_324ab[32]; // 24ed:d5db
db dummy9_324cb[32]; // 24ed:d5fb
db dummy9_324eb[32]; // 24ed:d61b
db dummy9_3250b[32]; // 24ed:d63b
db dummy9_3252b[32]; // 24ed:d65b
db dummy9_3254b[32]; // 24ed:d67b
db dummy9_3256b[32]; // 24ed:d69b
db dummy9_3258b[32]; // 24ed:d6bb
db dummy9_325ab[32]; // 24ed:d6db
db dummy9_325cb[32]; // 24ed:d6fb
db dummy9_325eb[32]; // 24ed:d71b
db dummy9_3260b[32]; // 24ed:d73b
db dummy9_3262b[32]; // 24ed:d75b
db dummy9_3264b[32]; // 24ed:d77b
db dummy9_3266b[32]; // 24ed:d79b
db dummy9_3268b[32]; // 24ed:d7bb
db dummy9_326ab[32]; // 24ed:d7db
db dummy9_326cb[32]; // 24ed:d7fb
db dummy9_326eb[32]; // 24ed:d81b
db dummy9_3270b[32]; // 24ed:d83b
db dummy9_3272b[32]; // 24ed:d85b
db dummy9_3274b[32]; // 24ed:d87b
db dummy9_3276b[32]; // 24ed:d89b
db dummy9_3278b[32]; // 24ed:d8bb
db dummy9_327ab[32]; // 24ed:d8db
db dummy9_327cb[32]; // 24ed:d8fb
db dummy9_327eb[32]; // 24ed:d91b
db dummy9_3280b[32]; // 24ed:d93b
db dummy9_3282b[32]; // 24ed:d95b
db dummy9_3284b[32]; // 24ed:d97b
db dummy9_3286b[32]; // 24ed:d99b
db dummy9_3288b[32]; // 24ed:d9bb
db dummy9_328ab[32]; // 24ed:d9db
db dummy9_328cb[32]; // 24ed:d9fb
db dummy9_328eb[32]; // 24ed:da1b
db dummy9_3290b[32]; // 24ed:da3b
db dummy9_3292b[32]; // 24ed:da5b
db dummy9_3294b[32]; // 24ed:da7b
db dummy9_3296b[32]; // 24ed:da9b
db dummy9_3298b[32]; // 24ed:dabb
db dummy9_329ab[32]; // 24ed:dadb
db dummy9_329cb[32]; // 24ed:dafb
db dummy9_329eb[32]; // 24ed:db1b
db dummy9_32a0b[32]; // 24ed:db3b
db dummy9_32a2b[32]; // 24ed:db5b
db dummy9_32a4b[32]; // 24ed:db7b
db dummy9_32a6b[32]; // 24ed:db9b
db dummy9_32a8b[32]; // 24ed:dbbb
db dummy9_32aab[32]; // 24ed:dbdb
db dummy9_32acb[32]; // 24ed:dbfb
db dummy9_32aeb[32]; // 24ed:dc1b
db dummy9_32b0b[32]; // 24ed:dc3b
db dummy9_32b2b[32]; // 24ed:dc5b
db dummy9_32b4b[32]; // 24ed:dc7b
db dummy9_32b6b[32]; // 24ed:dc9b
db dummy9_32b8b[32]; // 24ed:dcbb
db dummy9_32bab[32]; // 24ed:dcdb
db dummy9_32bcb[32]; // 24ed:dcfb
db dummy9_32beb[32]; // 24ed:dd1b
db dummy9_32c0b[32]; // 24ed:dd3b
db dummy9_32c2b[32]; // 24ed:dd5b
db dummy9_32c4b[32]; // 24ed:dd7b
db dummy9_32c6b[32]; // 24ed:dd9b
db dummy9_32c8b[32]; // 24ed:ddbb
db dummy9_32cab[32]; // 24ed:dddb
db dummy9_32ccb[32]; // 24ed:ddfb
db dummy9_32ceb[32]; // 24ed:de1b
db dummy9_32d0b[32]; // 24ed:de3b
db dummy9_32d2b[32]; // 24ed:de5b
db dummy9_32d4b[32]; // 24ed:de7b
db dummy9_32d6b[32]; // 24ed:de9b
db dummy9_32d8b[32]; // 24ed:debb
db dummy9_32dab[32]; // 24ed:dedb
db dummy9_32dcb[32]; // 24ed:defb
db dummy9_32deb[32]; // 24ed:df1b
db dummy9_32e0b[32]; // 24ed:df3b
db dummy9_32e2b[32]; // 24ed:df5b
db dummy9_32e4b[32]; // 24ed:df7b
db dummy9_32e6b[32]; // 24ed:df9b
db dummy9_32e8b[32]; // 24ed:dfbb
db dummy9_32eab[32]; // 24ed:dfdb
db dummy9_32ecb[32]; // 24ed:dffb
db dummy9_32eeb[32]; // 24ed:e01b
db dummy9_32f0b[32]; // 24ed:e03b
db dummy9_32f2b[32]; // 24ed:e05b
db dummy9_32f4b[32]; // 24ed:e07b
db dummy9_32f6b[32]; // 24ed:e09b
db dummy9_32f8b[32]; // 24ed:e0bb
db dummy9_32fab[32]; // 24ed:e0db
db dummy9_32fcb[32]; // 24ed:e0fb
db dummy9_32feb[32]; // 24ed:e11b
db dummy9_3300b[32]; // 24ed:e13b
db dummy9_3302b[32]; // 24ed:e15b
db dummy9_3304b[32]; // 24ed:e17b
db dummy9_3306b[32]; // 24ed:e19b
db dummy9_3308b[32]; // 24ed:e1bb
db dummy9_330ab[32]; // 24ed:e1db
db dummy9_330cb[32]; // 24ed:e1fb
db dummy9_330eb[32]; // 24ed:e21b
db dummy9_3310b[32]; // 24ed:e23b
db dummy9_3312b[32]; // 24ed:e25b
db dummy9_3314b[32]; // 24ed:e27b
db dummy9_3316b[32]; // 24ed:e29b
db dummy9_3318b[32]; // 24ed:e2bb
db dummy9_331ab[32]; // 24ed:e2db
db dummy9_331cb[32]; // 24ed:e2fb
db dummy9_331eb[32]; // 24ed:e31b
db dummy9_3320b[32]; // 24ed:e33b
db dummy9_3322b[32]; // 24ed:e35b
db dummy9_3324b[32]; // 24ed:e37b
db dummy9_3326b[32]; // 24ed:e39b
db dummy9_3328b[32]; // 24ed:e3bb
db dummy9_332ab[32]; // 24ed:e3db
db dummy9_332cb[32]; // 24ed:e3fb
db dummy9_332eb[32]; // 24ed:e41b
db dummy9_3330b[32]; // 24ed:e43b
db dummy9_3332b[32]; // 24ed:e45b
db dummy9_3334b[32]; // 24ed:e47b
db dummy9_3336b[32]; // 24ed:e49b
db dummy9_3338b[32]; // 24ed:e4bb
db dummy9_333ab[32]; // 24ed:e4db
db dummy9_333cb[32]; // 24ed:e4fb
db dummy9_333eb[32]; // 24ed:e51b
db dummy9_3340b[32]; // 24ed:e53b
db dummy9_3342b[32]; // 24ed:e55b
db dummy9_3344b[32]; // 24ed:e57b
db dummy9_3346b[32]; // 24ed:e59b
db dummy9_3348b[32]; // 24ed:e5bb
db dummy9_334ab[32]; // 24ed:e5db
db dummy9_334cb[32]; // 24ed:e5fb
db dummy9_334eb[32]; // 24ed:e61b
db dummy9_3350b[32]; // 24ed:e63b
db dummy9_3352b[32]; // 24ed:e65b
db dummy9_3354b[32]; // 24ed:e67b
db dummy9_3356b[32]; // 24ed:e69b
db dummy9_3358b[32]; // 24ed:e6bb
db dummy9_335ab[32]; // 24ed:e6db
db dummy9_335cb[32]; // 24ed:e6fb
db dummy9_335eb[32]; // 24ed:e71b
db dummy9_3360b[32]; // 24ed:e73b
db dummy9_3362b[32]; // 24ed:e75b
db dummy9_3364b[32]; // 24ed:e77b
db dummy9_3366b[32]; // 24ed:e79b
db dummy9_3368b[32]; // 24ed:e7bb
db dummy9_336ab[32]; // 24ed:e7db
db dummy9_336cb[32]; // 24ed:e7fb
db dummy9_336eb[32]; // 24ed:e81b
db dummy9_3370b[32]; // 24ed:e83b
db dummy9_3372b[32]; // 24ed:e85b
db dummy9_3374b[32]; // 24ed:e87b
db dummy9_3376b[32]; // 24ed:e89b
db dummy9_3378b[32]; // 24ed:e8bb
db dummy9_337ab[32]; // 24ed:e8db
db dummy9_337cb[32]; // 24ed:e8fb
db dummy9_337eb[32]; // 24ed:e91b
db dummy9_3380b[32]; // 24ed:e93b
db dummy9_3382b[32]; // 24ed:e95b
db dummy9_3384b[32]; // 24ed:e97b
db dummy9_3386b[32]; // 24ed:e99b
db dummy9_3388b[32]; // 24ed:e9bb
db dummy9_338ab[32]; // 24ed:e9db
db dummy9_338cb[32]; // 24ed:e9fb
db dummy9_338eb[32]; // 24ed:ea1b
db dummy9_3390b[32]; // 24ed:ea3b
db dummy9_3392b[32]; // 24ed:ea5b
db dummy9_3394b[32]; // 24ed:ea7b
db dummy9_3396b[32]; // 24ed:ea9b
db dummy9_3398b[32]; // 24ed:eabb
db dummy9_339ab[32]; // 24ed:eadb
db dummy9_339cb[32]; // 24ed:eafb
db dummy9_339eb[32]; // 24ed:eb1b
db dummy9_33a0b[32]; // 24ed:eb3b
db dummy9_33a2b[32]; // 24ed:eb5b
db dummy9_33a4b[32]; // 24ed:eb7b
db dummy9_33a6b[32]; // 24ed:eb9b
db dummy9_33a8b[32]; // 24ed:ebbb
db dummy9_33aab[32]; // 24ed:ebdb
db dummy9_33acb[32]; // 24ed:ebfb
db dummy9_33aeb[32]; // 24ed:ec1b
db dummy9_33b0b[32]; // 24ed:ec3b
db dummy9_33b2b[32]; // 24ed:ec5b
db dummy9_33b4b[32]; // 24ed:ec7b
db dummy9_33b6b[32]; // 24ed:ec9b
db dummy9_33b8b[32]; // 24ed:ecbb
db dummy9_33bab[32]; // 24ed:ecdb
db dummy9_33bcb[32]; // 24ed:ecfb
db dummy9_33beb[32]; // 24ed:ed1b
db dummy9_33c0b[32]; // 24ed:ed3b
db dummy9_33c2b[32]; // 24ed:ed5b
db dummy9_33c4b[32]; // 24ed:ed7b
db dummy9_33c6b[32]; // 24ed:ed9b
db dummy9_33c8b[32]; // 24ed:edbb
db dummy9_33cab[32]; // 24ed:eddb
db dummy9_33ccb[32]; // 24ed:edfb
db dummy9_33ceb[32]; // 24ed:ee1b
db dummy9_33d0b[32]; // 24ed:ee3b
db dummy9_33d2b[32]; // 24ed:ee5b
db dummy9_33d4b[32]; // 24ed:ee7b
db dummy9_33d6b[32]; // 24ed:ee9b
db dummy9_33d8b[32]; // 24ed:eebb
db dummy9_33dab[32]; // 24ed:eedb
db dummy9_33dcb[32]; // 24ed:eefb
db dummy9_33deb[32]; // 24ed:ef1b
db dummy9_33e0b[32]; // 24ed:ef3b
db dummy9_33e2b[32]; // 24ed:ef5b
db dummy9_33e4b[32]; // 24ed:ef7b
db dummy9_33e6b[32]; // 24ed:ef9b
db dummy9_33e8b[32]; // 24ed:efbb
db dummy9_33eab[32]; // 24ed:efdb
db dummy9_33ecb[32]; // 24ed:effb
db dummy9_33eeb[32]; // 24ed:f01b
db dummy9_33f0b[32]; // 24ed:f03b
db dummy9_33f2b[32]; // 24ed:f05b
db dummy9_33f4b[32]; // 24ed:f07b
db dummy9_33f6b[32]; // 24ed:f09b
db dummy9_33f8b[32]; // 24ed:f0bb
db dummy9_33fab[32]; // 24ed:f0db
db dummy9_33fcb[32]; // 24ed:f0fb
db dummy9_33feb[32]; // 24ed:f11b
db dummy9_3400b[32]; // 24ed:f13b
db dummy9_3402b[32]; // 24ed:f15b
db dummy9_3404b[32]; // 24ed:f17b
db dummy9_3406b[32]; // 24ed:f19b
db dummy9_3408b[32]; // 24ed:f1bb
db dummy9_340ab[32]; // 24ed:f1db
db dummy9_340cb[32]; // 24ed:f1fb
db dummy9_340eb[32]; // 24ed:f21b
db dummy9_3410b[32]; // 24ed:f23b
db dummy9_3412b[32]; // 24ed:f25b
db dummy9_3414b[32]; // 24ed:f27b
db dummy9_3416b[32]; // 24ed:f29b
db dummy9_3418b[32]; // 24ed:f2bb
db dummy9_341ab[32]; // 24ed:f2db
db dummy9_341cb[32]; // 24ed:f2fb
db dummy9_341eb[32]; // 24ed:f31b
db dummy9_3420b[32]; // 24ed:f33b
db dummy9_3422b[32]; // 24ed:f35b
db dummy9_3424b[32]; // 24ed:f37b
db dummy9_3426b[32]; // 24ed:f39b
db dummy9_3428b[32]; // 24ed:f3bb
db dummy9_342ab[32]; // 24ed:f3db
db dummy9_342cb[32]; // 24ed:f3fb
db dummy9_342eb[32]; // 24ed:f41b
db dummy9_3430b[32]; // 24ed:f43b
db dummy9_3432b[32]; // 24ed:f45b
db dummy9_3434b[32]; // 24ed:f47b
db dummy9_3436b[32]; // 24ed:f49b
db dummy9_3438b[32]; // 24ed:f4bb
db dummy9_343ab[32]; // 24ed:f4db
db dummy9_343cb[32]; // 24ed:f4fb
db dummy9_343eb[32]; // 24ed:f51b
db dummy9_3440b[32]; // 24ed:f53b
db dummy9_3442b[32]; // 24ed:f55b
db dummy9_3444b[32]; // 24ed:f57b
db dummy9_3446b[32]; // 24ed:f59b
db dummy9_3448b[32]; // 24ed:f5bb
db dummy9_344ab[32]; // 24ed:f5db
db dummy9_344cb[32]; // 24ed:f5fb
db dummy9_344eb[32]; // 24ed:f61b
db dummy9_3450b[32]; // 24ed:f63b
db dummy9_3452b[32]; // 24ed:f65b
db dummy9_3454b[32]; // 24ed:f67b
db dummy9_3456b[32]; // 24ed:f69b
db dummy9_3458b[32]; // 24ed:f6bb
db dummy9_345ab[32]; // 24ed:f6db
db dummy9_345cb[32]; // 24ed:f6fb
db dummy9_345eb[32]; // 24ed:f71b
db dummy9_3460b[32]; // 24ed:f73b
db dummy9_3462b[32]; // 24ed:f75b
db dummy9_3464b[32]; // 24ed:f77b
db dummy9_3466b[32]; // 24ed:f79b
db dummy9_3468b[32]; // 24ed:f7bb
db dummy9_346ab[32]; // 24ed:f7db
db dummy9_346cb[32]; // 24ed:f7fb
db dummy9_346eb[32]; // 24ed:f81b
db dummy9_3470b[32]; // 24ed:f83b
db dummy9_3472b[32]; // 24ed:f85b
db dummy9_3474b[32]; // 24ed:f87b
db dummy9_3476b[32]; // 24ed:f89b
db dummy9_3478b[32]; // 24ed:f8bb
db dummy9_347ab[32]; // 24ed:f8db
db dummy9_347cb[32]; // 24ed:f8fb
db dummy9_347eb[32]; // 24ed:f91b
db dummy9_3480b[32]; // 24ed:f93b
db dummy9_3482b[32]; // 24ed:f95b
db dummy9_3484b[32]; // 24ed:f97b
db dummy9_3486b[32]; // 24ed:f99b
db dummy9_3488b[32]; // 24ed:f9bb
db dummy9_348ab[32]; // 24ed:f9db
db dummy9_348cb[32]; // 24ed:f9fb
db dummy9_348eb[32]; // 24ed:fa1b
db dummy9_3490b[32]; // 24ed:fa3b
db dummy9_3492b[32]; // 24ed:fa5b
db dummy9_3494b[32]; // 24ed:fa7b
db dummy9_3496b[32]; // 24ed:fa9b
db dummy9_3498b[32]; // 24ed:fabb
db dummy9_349ab[32]; // 24ed:fadb
db dummy9_349cb[32]; // 24ed:fafb
db dummy9_349eb[32]; // 24ed:fb1b
db dummy9_34a0b[32]; // 24ed:fb3b
db dummy9_34a2b[32]; // 24ed:fb5b
db dummy9_34a4b[32]; // 24ed:fb7b
db dummy9_34a6b[32]; // 24ed:fb9b
db dummy9_34a8b[32]; // 24ed:fbbb
db dummy9_34aab[32]; // 24ed:fbdb
db dummy9_34acb[32]; // 24ed:fbfb
db dummy9_34aeb[32]; // 24ed:fc1b
db dummy9_34b0b[32]; // 24ed:fc3b
db dummy9_34b2b[32]; // 24ed:fc5b
db dummy9_34b4b[32]; // 24ed:fc7b
db dummy9_34b6b[32]; // 24ed:fc9b
db dummy9_34b8b[32]; // 24ed:fcbb
db dummy9_34bab[32]; // 24ed:fcdb
db dummy9_34bcb[32]; // 24ed:fcfb
db dummy9_34beb[32]; // 24ed:fd1b
db dummy9_34c0b[32]; // 24ed:fd3b
db dummy9_34c2b[32]; // 24ed:fd5b
db dummy9_34c4b[32]; // 24ed:fd7b
db dummy9_34c6b[32]; // 24ed:fd9b
db dummy9_34c8b[32]; // 24ed:fdbb
db dummy9_34cab[32]; // 24ed:fddb
db dummy9_34ccb[32]; // 24ed:fdfb
db dummy9_34ceb[32]; // 24ed:fe1b
db dummy9_34d0b[32]; // 24ed:fe3b
db dummy9_34d2b[32]; // 24ed:fe5b
db dummy9_34d4b[32]; // 24ed:fe7b
db dummy9_34d6b[32]; // 24ed:fe9b
db dummy9_34d8b[32]; // 24ed:febb
db dummy9_34dab[32]; // 24ed:fedb
db dummy9_34dcb[32]; // 24ed:fefb
db dummy9_34deb[32]; // 24ed:ff1b
db dummy9_34e0b[32]; // 24ed:ff3b
db dummy9_34e2b[32]; // 24ed:ff5b
db dummy9_34e4b[32]; // 24ed:ff7b
db dummy9_34e6b[32]; // 24ed:ff9b
db dummy9_34e8b[32]; // 24ed:ffbb
db dummy9_34eab[32]; // 24ed:ffdb
db dummy9_34ecb; // 24ed:fffb
db dummy9_34ecc; // 24ed:fffc
db dummy9_34ecd; // 24ed:fffd
db dummy9_34ece; // 24ed:fffe
db dummy9_34ecf; // 24ed:ffff
db dummy9_34ed0[77488];
db unk_56360; // 47d8:0000
db dummy9_47d81[32]; // 47d8:0001
db dummy9_47da1[32]; // 47d8:0021
db dummy9_47dc1[32]; // 47d8:0041
db dummy9_47de1[32]; // 47d8:0061
db dummy9_47e01[32]; // 47d8:0081
db dummy9_47e21[32]; // 47d8:00a1
db dummy9_47e41[32]; // 47d8:00c1
db dummy9_47e61; // 47d8:00e1
db dummy9_47e62; // 47d8:00e2
db dummy9_47e63; // 47d8:00e3
db dummy9_47e64; // 47d8:00e4
db dummy9_47e65; // 47d8:00e5
db dummy9_47e66; // 47d8:00e6
db dummy9_47e67; // 47d8:00e7
db dummy9_47e68; // 47d8:00e8
db dummy9_47e69; // 47d8:00e9
db dummy9_47e6a; // 47d8:00ea
db dummy9_47e6b; // 47d8:00eb
db dummy9_47e6c; // 47d8:00ec
db dummy9_47e6d; // 47d8:00ed
db dummy9_47e6e; // 47d8:00ee
db dummy9_47e6f; // 47d8:00ef
db dummy9_47e70; // 47d8:00f0
db dummy9_47e71; // 47d8:00f1
db dummy9_47e72; // 47d8:00f2
db dummy9_47e73; // 47d8:00f3
db dummy9_47e74; // 47d8:00f4
db dummy9_47e75; // 47d8:00f5
db dummy9_47e76; // 47d8:00f6
db dummy9_47e77; // 47d8:00f7
db dummy9_47e78; // 47d8:00f8
db dummy9_47e79; // 47d8:00f9
db dummy9_47e7a; // 47d8:00fa
db dummy9_47e7b; // 47d8:00fb
db dummy9_47e7c; // 47d8:00fc
db dummy9_47e7d; // 47d8:00fd
db dummy9_47e7e; // 47d8:00fe
db dummy9_47e7f; // 47d8:00ff
db dummy9_47e80[24];
dw word_56478; // 47d8:0118
dw seg_5647a; // 47d8:011a
db unk_5647c; // 47d8:011c
db dummy9_47e9d; // 47d8:011d
dw seg_5647e; // 47d8:011e
db dummy9_47ea0[355];
dw word_565e3; // 47d8:0283
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
dd dword_565f3; // 47d8:0293
dw word_565f7; // 47d8:0297
dw word_565f9; // 47d8:0299
db byte_565fb; // 47d8:029b
db byte_565fc; // 47d8:029c
db byte_565fd; // 47d8:029d
dw word_565fe; // 47d8:029e
dw word_56600; // 47d8:02a0
dw word_56602; // 47d8:02a2
dw word_56604; // 47d8:02a4
db byte_56606; // 47d8:02a6
db byte_56607; // 47d8:02a7
dw word_56608; // 47d8:02a8
db byte_5660a; // 47d8:02aa
dw word_5660b; // 47d8:02ab
dw word_5660d; // 47d8:02ad
db dummy9_4802f[32]; // 47d8:02af
db dummy9_4804f; // 47d8:02cf
dw funcs_569cb; // 47d8:02d0
dw dummy9_48052; // 47d8:02d2
dw dummy9_48054; // 47d8:02d4
dw dummy9_48056; // 47d8:02d6
dw dummy9_48058; // 47d8:02d8
dw dummy9_4805a; // 47d8:02da
dw dummy9_4805c; // 47d8:02dc
dw dummy9_4805e; // 47d8:02de
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
db dummy9_48100[1554];
db dummy9_48712[32]; // 47d8:0992
db dummy9_48732[32]; // 47d8:09b2
db dummy9_48752[32]; // 47d8:09d2
db dummy9_48772[32]; // 47d8:09f2
db dummy9_48792[32]; // 47d8:0a12
db dummy9_487b2[32]; // 47d8:0a32
db dummy9_487d2[32]; // 47d8:0a52
db dummy9_487f2[32]; // 47d8:0a72
db dummy9_48812[32]; // 47d8:0a92
db dummy9_48832[32]; // 47d8:0ab2
db dummy9_48852[32]; // 47d8:0ad2
db dummy9_48872[32]; // 47d8:0af2
db dummy9_48892[32]; // 47d8:0b12
db dummy9_488b2[32]; // 47d8:0b32
db dummy9_488d2[32]; // 47d8:0b52
db dummy9_488f2[32]; // 47d8:0b72
db dummy9_48912[32]; // 47d8:0b92
db dummy9_48932[32]; // 47d8:0bb2
db dummy9_48952[32]; // 47d8:0bd2
db dummy9_48972[32]; // 47d8:0bf2
db dummy9_48992[32]; // 47d8:0c12
db dummy9_489b2[32]; // 47d8:0c32
db dummy9_489d2[32]; // 47d8:0c52
db dummy9_489f2[32]; // 47d8:0c72
db dummy9_48a12[32]; // 47d8:0c92
db dummy9_48a32[32]; // 47d8:0cb2
db dummy9_48a52[32]; // 47d8:0cd2
db dummy9_48a72[32]; // 47d8:0cf2
db dummy9_48a92[32]; // 47d8:0d12
db dummy9_48ab2[32]; // 47d8:0d32
db dummy9_48ad2[32]; // 47d8:0d52
db dummy9_48af2[32]; // 47d8:0d72
db dummy9_48b12[32]; // 47d8:0d92
db dummy9_48b32[32]; // 47d8:0db2
db dummy9_48b52[32]; // 47d8:0dd2
db dummy9_48b72[32]; // 47d8:0df2
db dummy9_48b92[32]; // 47d8:0e12
db dummy9_48bb2[32]; // 47d8:0e32
db dummy9_48bd2[32]; // 47d8:0e52
db dummy9_48bf2[32]; // 47d8:0e72
db dummy9_48c12[32]; // 47d8:0e92
db dummy9_48c32[32]; // 47d8:0eb2
db dummy9_48c52[32]; // 47d8:0ed2
db dummy9_48c72[32]; // 47d8:0ef2
db dummy9_48c92[32]; // 47d8:0f12
db dummy9_48cb2[32]; // 47d8:0f32
db dummy9_48cd2[32]; // 47d8:0f52
db dummy9_48cf2[32]; // 47d8:0f72
db dummy9_48d12[32]; // 47d8:0f92
db dummy9_48d32[32]; // 47d8:0fb2
db dummy9_48d52[32]; // 47d8:0fd2
db dummy9_48d72[32]; // 47d8:0ff2
db dummy9_48d92[32]; // 47d8:1012
db dummy9_48db2[32]; // 47d8:1032
db dummy9_48dd2[32]; // 47d8:1052
db dummy9_48df2[32]; // 47d8:1072
db dummy9_48e12[32]; // 47d8:1092
db dummy9_48e32[32]; // 47d8:10b2
db dummy9_48e52[32]; // 47d8:10d2
db dummy9_48e72[32]; // 47d8:10f2
db dummy9_48e92[32]; // 47d8:1112
db dummy9_48eb2[32]; // 47d8:1132
db dummy9_48ed2[32]; // 47d8:1152
db dummy9_48ef2[32]; // 47d8:1172
db dummy9_48f12[32]; // 47d8:1192
db dummy9_48f32[32]; // 47d8:11b2
db dummy9_48f52[32]; // 47d8:11d2
db dummy9_48f72[32]; // 47d8:11f2
db dummy9_48f92[32]; // 47d8:1212
db dummy9_48fb2[32]; // 47d8:1232
db dummy9_48fd2[32]; // 47d8:1252
db dummy9_48ff2[32]; // 47d8:1272
db dummy9_49012[32]; // 47d8:1292
db dummy9_49032[32]; // 47d8:12b2
db dummy9_49052[32]; // 47d8:12d2
db dummy9_49072[32]; // 47d8:12f2
db dummy9_49092[32]; // 47d8:1312
db dummy9_490b2[32]; // 47d8:1332
db dummy9_490d2[32]; // 47d8:1352
db dummy9_490f2[32]; // 47d8:1372
db dummy9_49112[32]; // 47d8:1392
db dummy9_49132[32]; // 47d8:13b2
db dummy9_49152[32]; // 47d8:13d2
db dummy9_49172[32]; // 47d8:13f2
db dummy9_49192[32]; // 47d8:1412
db dummy9_491b2[32]; // 47d8:1432
db dummy9_491d2[32]; // 47d8:1452
db dummy9_491f2[32]; // 47d8:1472
db dummy9_49212[32]; // 47d8:1492
db dummy9_49232[32]; // 47d8:14b2
db dummy9_49252[32]; // 47d8:14d2
db dummy9_49272[32]; // 47d8:14f2
db dummy9_49292[32]; // 47d8:1512
db dummy9_492b2[32]; // 47d8:1532
db dummy9_492d2[32]; // 47d8:1552
db dummy9_492f2[32]; // 47d8:1572
db dummy9_49312[32]; // 47d8:1592
db dummy9_49332[32]; // 47d8:15b2
db dummy9_49352[32]; // 47d8:15d2
db dummy9_49372[32]; // 47d8:15f2
db dummy9_49392[32]; // 47d8:1612
db dummy9_493b2[32]; // 47d8:1632
db dummy9_493d2[32]; // 47d8:1652
db dummy9_493f2[32]; // 47d8:1672
db dummy9_49412[32]; // 47d8:1692
db dummy9_49432[32]; // 47d8:16b2
db dummy9_49452[32]; // 47d8:16d2
db dummy9_49472[32]; // 47d8:16f2
db dummy9_49492[32]; // 47d8:1712
db dummy9_494b2[32]; // 47d8:1732
db dummy9_494d2[32]; // 47d8:1752
db dummy9_494f2[32]; // 47d8:1772
db dummy9_49512[32]; // 47d8:1792
db dummy9_49532[32]; // 47d8:17b2
db dummy9_49552[32]; // 47d8:17d2
db dummy9_49572[32]; // 47d8:17f2
db dummy9_49592[32]; // 47d8:1812
db dummy9_495b2[32]; // 47d8:1832
db dummy9_495d2[32]; // 47d8:1852
db dummy9_495f2[32]; // 47d8:1872
db dummy9_49612[32]; // 47d8:1892
db dummy9_49632[32]; // 47d8:18b2
db dummy9_49652[32]; // 47d8:18d2
db dummy9_49672[32]; // 47d8:18f2
db dummy9_49692[32]; // 47d8:1912
db dummy9_496b2[32]; // 47d8:1932
db dummy9_496d2[32]; // 47d8:1952
db dummy9_496f2[32]; // 47d8:1972
db dummy9_49712[32]; // 47d8:1992
db dummy9_49732[32]; // 47d8:19b2
db dummy9_49752[32]; // 47d8:19d2
db dummy9_49772[32]; // 47d8:19f2
db dummy9_49792[32]; // 47d8:1a12
db dummy9_497b2[32]; // 47d8:1a32
db dummy9_497d2[32]; // 47d8:1a52
db dummy9_497f2[32]; // 47d8:1a72
db dummy9_49812[32]; // 47d8:1a92
db dummy9_49832[32]; // 47d8:1ab2
db dummy9_49852[32]; // 47d8:1ad2
db dummy9_49872[32]; // 47d8:1af2
db dummy9_49892[32]; // 47d8:1b12
db dummy9_498b2[32]; // 47d8:1b32
db dummy9_498d2[32]; // 47d8:1b52
db dummy9_498f2[32]; // 47d8:1b72
db dummy9_49912[32]; // 47d8:1b92
db dummy9_49932[32]; // 47d8:1bb2
db dummy9_49952[32]; // 47d8:1bd2
db dummy9_49972[32]; // 47d8:1bf2
db dummy9_49992[32]; // 47d8:1c12
db dummy9_499b2[32]; // 47d8:1c32
db dummy9_499d2[32]; // 47d8:1c52
db dummy9_499f2[32]; // 47d8:1c72
db dummy9_49a12[32]; // 47d8:1c92
db dummy9_49a32[32]; // 47d8:1cb2
db dummy9_49a52[32]; // 47d8:1cd2
db dummy9_49a72[32]; // 47d8:1cf2
db dummy9_49a92[32]; // 47d8:1d12
db dummy9_49ab2[32]; // 47d8:1d32
db dummy9_49ad2[32]; // 47d8:1d52
db dummy9_49af2[32]; // 47d8:1d72
db dummy9_49b12[32]; // 47d8:1d92
db dummy9_49b32[32]; // 47d8:1db2
db dummy9_49b52[32]; // 47d8:1dd2
db dummy9_49b72[32]; // 47d8:1df2
db dummy9_49b92[32]; // 47d8:1e12
db dummy9_49bb2[32]; // 47d8:1e32
db dummy9_49bd2[32]; // 47d8:1e52
db dummy9_49bf2[32]; // 47d8:1e72
db dummy9_49c12[32]; // 47d8:1e92
db dummy9_49c32[32]; // 47d8:1eb2
db dummy9_49c52[32]; // 47d8:1ed2
db dummy9_49c72[32]; // 47d8:1ef2
db dummy9_49c92[32]; // 47d8:1f12
db dummy9_49cb2[32]; // 47d8:1f32
db dummy9_49cd2[32]; // 47d8:1f52
db dummy9_49cf2[32]; // 47d8:1f72
db dummy9_49d12[32]; // 47d8:1f92
db dummy9_49d32[32]; // 47d8:1fb2
db dummy9_49d52[32]; // 47d8:1fd2
db dummy9_49d72[32]; // 47d8:1ff2
db dummy9_49d92[32]; // 47d8:2012
db dummy9_49db2[32]; // 47d8:2032
db dummy9_49dd2[32]; // 47d8:2052
db dummy9_49df2[32]; // 47d8:2072
db dummy9_49e12[32]; // 47d8:2092
db dummy9_49e32[32]; // 47d8:20b2
db dummy9_49e52[32]; // 47d8:20d2
db dummy9_49e72[32]; // 47d8:20f2
db dummy9_49e92[32]; // 47d8:2112
db dummy9_49eb2[32]; // 47d8:2132
db dummy9_49ed2[32]; // 47d8:2152
db dummy9_49ef2[32]; // 47d8:2172
db dummy9_49f12[32]; // 47d8:2192
db dummy9_49f32[32]; // 47d8:21b2
db dummy9_49f52[32]; // 47d8:21d2
db dummy9_49f72[32]; // 47d8:21f2
db dummy9_49f92[32]; // 47d8:2212
db dummy9_49fb2[32]; // 47d8:2232
db dummy9_49fd2[32]; // 47d8:2252
db dummy9_49ff2[32]; // 47d8:2272
db dummy9_4a012[32]; // 47d8:2292
db dummy9_4a032[32]; // 47d8:22b2
db dummy9_4a052[32]; // 47d8:22d2
db dummy9_4a072[32]; // 47d8:22f2
db dummy9_4a092[32]; // 47d8:2312
db dummy9_4a0b2[32]; // 47d8:2332
db dummy9_4a0d2[32]; // 47d8:2352
db dummy9_4a0f2[32]; // 47d8:2372
db dummy9_4a112[32]; // 47d8:2392
db dummy9_4a132[32]; // 47d8:23b2
db dummy9_4a152[32]; // 47d8:23d2
db dummy9_4a172[32]; // 47d8:23f2
db dummy9_4a192[32]; // 47d8:2412
db dummy9_4a1b2[32]; // 47d8:2432
db dummy9_4a1d2[32]; // 47d8:2452
db dummy9_4a1f2[32]; // 47d8:2472
db dummy9_4a212[32]; // 47d8:2492
db dummy9_4a232[32]; // 47d8:24b2
db dummy9_4a252[32]; // 47d8:24d2
db dummy9_4a272[32]; // 47d8:24f2
db dummy9_4a292[32]; // 47d8:2512
db dummy9_4a2b2[32]; // 47d8:2532
db dummy9_4a2d2[32]; // 47d8:2552
db dummy9_4a2f2[32]; // 47d8:2572
db dummy9_4a312[32]; // 47d8:2592
db dummy9_4a332[32]; // 47d8:25b2
db dummy9_4a352[32]; // 47d8:25d2
db dummy9_4a372[32]; // 47d8:25f2
db dummy9_4a392[32]; // 47d8:2612
db dummy9_4a3b2[32]; // 47d8:2632
db dummy9_4a3d2[32]; // 47d8:2652
db dummy9_4a3f2[32]; // 47d8:2672
db dummy9_4a412[32]; // 47d8:2692
db dummy9_4a432[32]; // 47d8:26b2
db dummy9_4a452[32]; // 47d8:26d2
db dummy9_4a472[32]; // 47d8:26f2
db dummy9_4a492[32]; // 47d8:2712
db dummy9_4a4b2[32]; // 47d8:2732
db dummy9_4a4d2[32]; // 47d8:2752
db dummy9_4a4f2[32]; // 47d8:2772
db dummy9_4a512[32]; // 47d8:2792
db dummy9_4a532[32]; // 47d8:27b2
db dummy9_4a552[32]; // 47d8:27d2
db dummy9_4a572[32]; // 47d8:27f2
db dummy9_4a592[32]; // 47d8:2812
db dummy9_4a5b2[32]; // 47d8:2832
db dummy9_4a5d2[32]; // 47d8:2852
db dummy9_4a5f2[32]; // 47d8:2872
db dummy9_4a612[32]; // 47d8:2892
db dummy9_4a632[32]; // 47d8:28b2
db dummy9_4a652[32]; // 47d8:28d2
db dummy9_4a672[32]; // 47d8:28f2
db dummy9_4a692[32]; // 47d8:2912
db dummy9_4a6b2[32]; // 47d8:2932
db dummy9_4a6d2[32]; // 47d8:2952
db dummy9_4a6f2[32]; // 47d8:2972
db dummy9_4a712[32]; // 47d8:2992
db dummy9_4a732[32]; // 47d8:29b2
db dummy9_4a752[32]; // 47d8:29d2
db dummy9_4a772[32]; // 47d8:29f2
db dummy9_4a792[32]; // 47d8:2a12
db dummy9_4a7b2[32]; // 47d8:2a32
db dummy9_4a7d2[32]; // 47d8:2a52
db dummy9_4a7f2[32]; // 47d8:2a72
db dummy9_4a812[32]; // 47d8:2a92
db dummy9_4a832[32]; // 47d8:2ab2
db dummy9_4a852[32]; // 47d8:2ad2
db dummy9_4a872[32]; // 47d8:2af2
db dummy9_4a892[32]; // 47d8:2b12
db dummy9_4a8b2[32]; // 47d8:2b32
db dummy9_4a8d2[32]; // 47d8:2b52
db dummy9_4a8f2[32]; // 47d8:2b72
db dummy9_4a912[32]; // 47d8:2b92
db dummy9_4a932[32]; // 47d8:2bb2
db dummy9_4a952[32]; // 47d8:2bd2
db dummy9_4a972[32]; // 47d8:2bf2
db dummy9_4a992[32]; // 47d8:2c12
db dummy9_4a9b2; // 47d8:2c32
db dummy9_4a9b3; // 47d8:2c33
db dummy9_4a9b4; // 47d8:2c34
db dummy9_4a9b5; // 47d8:2c35
db dummy9_4a9b6; // 47d8:2c36
db dummy9_4a9b7; // 47d8:2c37
db dummy9_4a9b8; // 47d8:2c38
db dummy9_4a9b9; // 47d8:2c39
db dummy9_4a9ba; // 47d8:2c3a
db dummy9_4a9bb; // 47d8:2c3b
db dummy9_4a9bc; // 47d8:2c3c
db dummy9_4a9bd; // 47d8:2c3d
db dummy9_4a9be; // 47d8:2c3e
db dummy9_4a9bf; // 47d8:2c3f
db dummy9_4a9c0; // 47d8:2c40
db dummy9_4a9c1; // 47d8:2c41
db dummy9_4a9c2; // 47d8:2c42
db dummy9_4a9c3; // 47d8:2c43
db dummy9_4a9c4; // 47d8:2c44
db dummy9_4a9c5; // 47d8:2c45
db dummy9_4a9c6; // 47d8:2c46
db dummy9_4a9c7; // 47d8:2c47
db dummy9_4a9c8; // 47d8:2c48
db dummy9_4a9c9; // 47d8:2c49
db dummy9_4a9ca; // 47d8:2c4a
db dummy9_4a9cb; // 47d8:2c4b
db dummy9_4a9cc; // 47d8:2c4c
db unk_58fad; // 47d8:2c4d
db dummy9_4a9ce[32]; // 47d8:2c4e
db dummy9_4a9ee[32]; // 47d8:2c6e
db dummy9_4aa0e[32]; // 47d8:2c8e
db dummy9_4aa2e[32]; // 47d8:2cae
db dummy9_4aa4e[32]; // 47d8:2cce
db dummy9_4aa6e[32]; // 47d8:2cee
db dummy9_4aa8e[32]; // 47d8:2d0e
db dummy9_4aaae[32]; // 47d8:2d2e
db dummy9_4aace[32]; // 47d8:2d4e
db dummy9_4aaee[32]; // 47d8:2d6e
db dummy9_4ab0e[32]; // 47d8:2d8e
db dummy9_4ab2e[32]; // 47d8:2dae
db dummy9_4ab4e[32]; // 47d8:2dce
db dummy9_4ab6e[32]; // 47d8:2dee
db dummy9_4ab8e[32]; // 47d8:2e0e
db dummy9_4abae[32]; // 47d8:2e2e
db dummy9_4abce[32]; // 47d8:2e4e
db dummy9_4abee[32]; // 47d8:2e6e
db dummy9_4ac0e[32]; // 47d8:2e8e
db dummy9_4ac2e[32]; // 47d8:2eae
db dummy9_4ac4e[32]; // 47d8:2ece
db dummy9_4ac6e[32]; // 47d8:2eee
db dummy9_4ac8e[32]; // 47d8:2f0e
db dummy9_4acae[32]; // 47d8:2f2e
db dummy9_4acce[32]; // 47d8:2f4e
db dummy9_4acee[32]; // 47d8:2f6e
db dummy9_4ad0e[32]; // 47d8:2f8e
db dummy9_4ad2e[32]; // 47d8:2fae
db dummy9_4ad4e[32]; // 47d8:2fce
db dummy9_4ad6e[32]; // 47d8:2fee
db dummy9_4ad8e[32]; // 47d8:300e
db dummy9_4adae[32]; // 47d8:302e
db dummy9_4adce[32]; // 47d8:304e
db dummy9_4adee[32]; // 47d8:306e
db dummy9_4ae0e[32]; // 47d8:308e
db dummy9_4ae2e[32]; // 47d8:30ae
db dummy9_4ae4e[32]; // 47d8:30ce
db dummy9_4ae6e[32]; // 47d8:30ee
db dummy9_4ae8e[32]; // 47d8:310e
db dummy9_4aeae[32]; // 47d8:312e
db dummy9_4aece[32]; // 47d8:314e
db dummy9_4aeee[32]; // 47d8:316e
db dummy9_4af0e[32]; // 47d8:318e
db dummy9_4af2e[32]; // 47d8:31ae
db dummy9_4af4e[32]; // 47d8:31ce
db dummy9_4af6e[32]; // 47d8:31ee
db dummy9_4af8e[32]; // 47d8:320e
db dummy9_4afae[32]; // 47d8:322e
db dummy9_4afce[32]; // 47d8:324e
db dummy9_4afee[32]; // 47d8:326e
db dummy9_4b00e[32]; // 47d8:328e
db dummy9_4b02e[32]; // 47d8:32ae
db dummy9_4b04e[32]; // 47d8:32ce
db dummy9_4b06e[32]; // 47d8:32ee
db dummy9_4b08e[32]; // 47d8:330e
db dummy9_4b0ae[32]; // 47d8:332e
db dummy9_4b0ce[32]; // 47d8:334e
db dummy9_4b0ee[32]; // 47d8:336e
db dummy9_4b10e[32]; // 47d8:338e
db dummy9_4b12e[32]; // 47d8:33ae
db dummy9_4b14e[32]; // 47d8:33ce
db dummy9_4b16e[32]; // 47d8:33ee
db dummy9_4b18e[32]; // 47d8:340e
db dummy9_4b1ae[32]; // 47d8:342e
db dummy9_4b1ce[32]; // 47d8:344e
db dummy9_4b1ee[32]; // 47d8:346e
db dummy9_4b20e[32]; // 47d8:348e
db dummy9_4b22e[32]; // 47d8:34ae
db dummy9_4b24e[32]; // 47d8:34ce
db dummy9_4b26e[32]; // 47d8:34ee
db dummy9_4b28e[32]; // 47d8:350e
db dummy9_4b2ae[32]; // 47d8:352e
db dummy9_4b2ce[32]; // 47d8:354e
db dummy9_4b2ee[32]; // 47d8:356e
db dummy9_4b30e[32]; // 47d8:358e
db dummy9_4b32e[32]; // 47d8:35ae
db dummy9_4b34e[32]; // 47d8:35ce
db dummy9_4b36e[32]; // 47d8:35ee
db dummy9_4b38e[32]; // 47d8:360e
db dummy9_4b3ae[32]; // 47d8:362e
db dummy9_4b3ce[32]; // 47d8:364e
db dummy9_4b3ee[32]; // 47d8:366e
db dummy9_4b40e[32]; // 47d8:368e
db dummy9_4b42e[32]; // 47d8:36ae
db dummy9_4b44e[32]; // 47d8:36ce
db dummy9_4b46e[32]; // 47d8:36ee
db dummy9_4b48e[32]; // 47d8:370e
db dummy9_4b4ae[32]; // 47d8:372e
db dummy9_4b4ce[32]; // 47d8:374e
db dummy9_4b4ee[32]; // 47d8:376e
db dummy9_4b50e[32]; // 47d8:378e
db dummy9_4b52e[32]; // 47d8:37ae
db dummy9_4b54e[32]; // 47d8:37ce
db dummy9_4b56e[32]; // 47d8:37ee
db dummy9_4b58e[32]; // 47d8:380e
db dummy9_4b5ae[32]; // 47d8:382e
db dummy9_4b5ce[32]; // 47d8:384e
db dummy9_4b5ee[32]; // 47d8:386e
db dummy9_4b60e[32]; // 47d8:388e
db dummy9_4b62e[32]; // 47d8:38ae
db dummy9_4b64e[32]; // 47d8:38ce
db dummy9_4b66e[32]; // 47d8:38ee
db dummy9_4b68e[32]; // 47d8:390e
db dummy9_4b6ae[32]; // 47d8:392e
db dummy9_4b6ce[32]; // 47d8:394e
db dummy9_4b6ee[32]; // 47d8:396e
db dummy9_4b70e[32]; // 47d8:398e
db dummy9_4b72e[32]; // 47d8:39ae
db dummy9_4b74e[32]; // 47d8:39ce
db dummy9_4b76e[32]; // 47d8:39ee
db dummy9_4b78e[32]; // 47d8:3a0e
db dummy9_4b7ae[32]; // 47d8:3a2e
db dummy9_4b7ce[32]; // 47d8:3a4e
db dummy9_4b7ee[32]; // 47d8:3a6e
db dummy9_4b80e[32]; // 47d8:3a8e
db dummy9_4b82e[32]; // 47d8:3aae
db dummy9_4b84e[32]; // 47d8:3ace
db dummy9_4b86e[32]; // 47d8:3aee
db dummy9_4b88e[32]; // 47d8:3b0e
db dummy9_4b8ae[32]; // 47d8:3b2e
db dummy9_4b8ce[32]; // 47d8:3b4e
db dummy9_4b8ee[32]; // 47d8:3b6e
db dummy9_4b90e[32]; // 47d8:3b8e
db dummy9_4b92e[32]; // 47d8:3bae
db dummy9_4b94e[32]; // 47d8:3bce
db dummy9_4b96e[32]; // 47d8:3bee
db dummy9_4b98e[32]; // 47d8:3c0e
db dummy9_4b9ae[32]; // 47d8:3c2e
db dummy9_4b9ce[32]; // 47d8:3c4e
db dummy9_4b9ee[32]; // 47d8:3c6e
db dummy9_4ba0e[32]; // 47d8:3c8e
db dummy9_4ba2e[32]; // 47d8:3cae
db dummy9_4ba4e[32]; // 47d8:3cce
db dummy9_4ba6e[32]; // 47d8:3cee
db dummy9_4ba8e[32]; // 47d8:3d0e
db dummy9_4baae[32]; // 47d8:3d2e
db dummy9_4bace[32]; // 47d8:3d4e
db dummy9_4baee[32]; // 47d8:3d6e
db dummy9_4bb0e[32]; // 47d8:3d8e
db dummy9_4bb2e[32]; // 47d8:3dae
db dummy9_4bb4e[32]; // 47d8:3dce
db dummy9_4bb6e[32]; // 47d8:3dee
db dummy9_4bb8e[32]; // 47d8:3e0e
db dummy9_4bbae[32]; // 47d8:3e2e
db dummy9_4bbce[32]; // 47d8:3e4e
db dummy9_4bbee[32]; // 47d8:3e6e
db dummy9_4bc0e[32]; // 47d8:3e8e
db dummy9_4bc2e[32]; // 47d8:3eae
db dummy9_4bc4e[32]; // 47d8:3ece
db dummy9_4bc6e[32]; // 47d8:3eee
db dummy9_4bc8e[32]; // 47d8:3f0e
db dummy9_4bcae[32]; // 47d8:3f2e
db dummy9_4bcce[32]; // 47d8:3f4e
db dummy9_4bcee[32]; // 47d8:3f6e
db dummy9_4bd0e[32]; // 47d8:3f8e
db dummy9_4bd2e[32]; // 47d8:3fae
db dummy9_4bd4e[32]; // 47d8:3fce
db dummy9_4bd6e[32]; // 47d8:3fee
db dummy9_4bd8e[32]; // 47d8:400e
db dummy9_4bdae[32]; // 47d8:402e
db dummy9_4bdce[32]; // 47d8:404e
db dummy9_4bdee[32]; // 47d8:406e
db dummy9_4be0e[32]; // 47d8:408e
db dummy9_4be2e[32]; // 47d8:40ae
db dummy9_4be4e[32]; // 47d8:40ce
db dummy9_4be6e[32]; // 47d8:40ee
db dummy9_4be8e[32]; // 47d8:410e
db dummy9_4beae[32]; // 47d8:412e
db dummy9_4bece[32]; // 47d8:414e
db dummy9_4beee[32]; // 47d8:416e
db dummy9_4bf0e[32]; // 47d8:418e
db dummy9_4bf2e[32]; // 47d8:41ae
db dummy9_4bf4e[32]; // 47d8:41ce
db dummy9_4bf6e[32]; // 47d8:41ee
db dummy9_4bf8e[32]; // 47d8:420e
db dummy9_4bfae[32]; // 47d8:422e
db dummy9_4bfce[32]; // 47d8:424e
db dummy9_4bfee[32]; // 47d8:426e
db dummy9_4c00e[32]; // 47d8:428e
db dummy9_4c02e[32]; // 47d8:42ae
db dummy9_4c04e[32]; // 47d8:42ce
db dummy9_4c06e[32]; // 47d8:42ee
db dummy9_4c08e[32]; // 47d8:430e
db dummy9_4c0ae[32]; // 47d8:432e
db dummy9_4c0ce[32]; // 47d8:434e
db dummy9_4c0ee[32]; // 47d8:436e
db dummy9_4c10e[32]; // 47d8:438e
db dummy9_4c12e[32]; // 47d8:43ae
db dummy9_4c14e[32]; // 47d8:43ce
db dummy9_4c16e[32]; // 47d8:43ee
db dummy9_4c18e[32]; // 47d8:440e
db dummy9_4c1ae[32]; // 47d8:442e
db dummy9_4c1ce[32]; // 47d8:444e
db dummy9_4c1ee[32]; // 47d8:446e
db dummy9_4c20e[32]; // 47d8:448e
db dummy9_4c22e[32]; // 47d8:44ae
db dummy9_4c24e[32]; // 47d8:44ce
db dummy9_4c26e[32]; // 47d8:44ee
db dummy9_4c28e[32]; // 47d8:450e
db dummy9_4c2ae[32]; // 47d8:452e
db dummy9_4c2ce[32]; // 47d8:454e
db dummy9_4c2ee[32]; // 47d8:456e
db dummy9_4c30e[32]; // 47d8:458e
db dummy9_4c32e[32]; // 47d8:45ae
db dummy9_4c34e[32]; // 47d8:45ce
db dummy9_4c36e[32]; // 47d8:45ee
db dummy9_4c38e[32]; // 47d8:460e
db dummy9_4c3ae[32]; // 47d8:462e
db dummy9_4c3ce[32]; // 47d8:464e
db dummy9_4c3ee[32]; // 47d8:466e
db dummy9_4c40e[32]; // 47d8:468e
db dummy9_4c42e[32]; // 47d8:46ae
db dummy9_4c44e[32]; // 47d8:46ce
db dummy9_4c46e[32]; // 47d8:46ee
db dummy9_4c48e[32]; // 47d8:470e
db dummy9_4c4ae[32]; // 47d8:472e
db dummy9_4c4ce[32]; // 47d8:474e
db dummy9_4c4ee[32]; // 47d8:476e
db dummy9_4c50e[32]; // 47d8:478e
db dummy9_4c52e[32]; // 47d8:47ae
db dummy9_4c54e[32]; // 47d8:47ce
db dummy9_4c56e[32]; // 47d8:47ee
db dummy9_4c58e[32]; // 47d8:480e
db dummy9_4c5ae[32]; // 47d8:482e
db dummy9_4c5ce[32]; // 47d8:484e
db dummy9_4c5ee[32]; // 47d8:486e
db dummy9_4c60e[32]; // 47d8:488e
db dummy9_4c62e[32]; // 47d8:48ae
db dummy9_4c64e[32]; // 47d8:48ce
db dummy9_4c66e[32]; // 47d8:48ee
db dummy9_4c68e[32]; // 47d8:490e
db dummy9_4c6ae[32]; // 47d8:492e
db dummy9_4c6ce[32]; // 47d8:494e
db dummy9_4c6ee[32]; // 47d8:496e
db dummy9_4c70e[32]; // 47d8:498e
db dummy9_4c72e[32]; // 47d8:49ae
db dummy9_4c74e[32]; // 47d8:49ce
db dummy9_4c76e[32]; // 47d8:49ee
db dummy9_4c78e[32]; // 47d8:4a0e
db dummy9_4c7ae[32]; // 47d8:4a2e
db dummy9_4c7ce[32]; // 47d8:4a4e
db dummy9_4c7ee[32]; // 47d8:4a6e
db dummy9_4c80e[32]; // 47d8:4a8e
db dummy9_4c82e[32]; // 47d8:4aae
db dummy9_4c84e[32]; // 47d8:4ace
db dummy9_4c86e[32]; // 47d8:4aee
db dummy9_4c88e[32]; // 47d8:4b0e
db dummy9_4c8ae[32]; // 47d8:4b2e
db dummy9_4c8ce[32]; // 47d8:4b4e
db dummy9_4c8ee[32]; // 47d8:4b6e
db dummy9_4c90e[32]; // 47d8:4b8e
db dummy9_4c92e[32]; // 47d8:4bae
db dummy9_4c94e[32]; // 47d8:4bce
db dummy9_4c96e[32]; // 47d8:4bee
db dummy9_4c98e[32]; // 47d8:4c0e
db dummy9_4c9ae[32]; // 47d8:4c2e
db dummy9_4c9ce[32]; // 47d8:4c4e
db dummy9_4c9ee[32]; // 47d8:4c6e
db dummy9_4ca0e[32]; // 47d8:4c8e
db dummy9_4ca2e[32]; // 47d8:4cae
db dummy9_4ca4e[32]; // 47d8:4cce
db dummy9_4ca6e[32]; // 47d8:4cee
db dummy9_4ca8e[32]; // 47d8:4d0e
db dummy9_4caae[32]; // 47d8:4d2e
db dummy9_4cace[32]; // 47d8:4d4e
db dummy9_4caee[32]; // 47d8:4d6e
db dummy9_4cb0e[32]; // 47d8:4d8e
db dummy9_4cb2e[32]; // 47d8:4dae
db dummy9_4cb4e[32]; // 47d8:4dce
db dummy9_4cb6e[32]; // 47d8:4dee
db dummy9_4cb8e[32]; // 47d8:4e0e
db dummy9_4cbae[32]; // 47d8:4e2e
db dummy9_4cbce[32]; // 47d8:4e4e
db dummy9_4cbee[32]; // 47d8:4e6e
db dummy9_4cc0e[32]; // 47d8:4e8e
db dummy9_4cc2e[32]; // 47d8:4eae
db dummy9_4cc4e[32]; // 47d8:4ece
db dummy9_4cc6e[32]; // 47d8:4eee
db dummy9_4cc8e[32]; // 47d8:4f0e
db dummy9_4ccae; // 47d8:4f2e
db dummy9_4ccaf; // 47d8:4f2f
db dummy9_4ccb0; // 47d8:4f30
db dummy9_4ccb1; // 47d8:4f31
db dummy9_4ccb2; // 47d8:4f32
db dummy9_4ccb3; // 47d8:4f33
db dummy9_4ccb4; // 47d8:4f34
db dummy9_4ccb5; // 47d8:4f35
db dummy9_4ccb6; // 47d8:4f36
db dummy9_4ccb7; // 47d8:4f37
db dummy9_4ccb8; // 47d8:4f38
db dummy9_4ccb9; // 47d8:4f39
db dummy9_4ccba; // 47d8:4f3a
db dummy9_4ccbb; // 47d8:4f3b
db dummy9_4ccbc; // 47d8:4f3c
db dummy9_4ccbd; // 47d8:4f3d
db dummy9_4ccbe; // 47d8:4f3e
db dummy9_4ccbf; // 47d8:4f3f
db dummy9_4ccc0; // 47d8:4f40
db dummy9_4ccc1; // 47d8:4f41
db dummy9_4ccc2; // 47d8:4f42
db dummy9_4ccc3; // 47d8:4f43
db dummy9_4ccc4; // 47d8:4f44
db dummy9_4ccc5; // 47d8:4f45
db dummy9_4ccc6; // 47d8:4f46
db dummy9_4ccc7; // 47d8:4f47
db dummy9_4ccc8; // 47d8:4f48
db dummy9_4ccc9; // 47d8:4f49
db dummy9_4ccca; // 47d8:4f4a
db dummy9_4cccb; // 47d8:4f4b
db dummy9_4cccc[1908];
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
db dummy9_4d540[21];
dd dword_5bb35; // 4d44:0115
dw word_5bb39; // 4d44:0119
dw word_5bb3b; // 4d44:011b
dw word_5bb3d; // 4d44:011d
dw word_5bb3f; // 4d44:011f
dw word_5bb41; // 4d44:0121
dw word_5bb43; // 4d44:0123
dw word_5bb45; // 4d44:0125
dw word_5bb47; // 4d44:0127
dw off_5bb49; // 4d44:0129
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
db unk_5bc66; // 4d44:0246
db dummy9_4d687;
db dummy9_4d688; // 4d44:0248
db dummy9_4d689; // 4d44:0249
db unk_5bc6a; // 4d44:024a
db dummy9_4d68b; // 4d44:024b
db unk_5bc6c; // 4d44:024c
db dummy9_4d68d; // 4d44:024d
dw word_5bc6e; // 4d44:024e

#ifdef DOSBOX_CUSTOM
    db filll[1024*1024*16];
#endif
                        db stack[STACK_SIZE];
                        db heap[HEAP_SIZE];
                };
}
#pragma pack(pop)

#endif
