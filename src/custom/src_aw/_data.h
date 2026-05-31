
#ifndef ___DATA_H__
#define ___DATA_H__
#include "../asm.h"

#pragma pack(push, 1)
struct ffblk {
  db ff_reserved;
  db ff_attrib;
  dw ff_ftime;
  dw ff_fdate;
  dd ff_fsize;
  db ff_name;
  db dummy3_0;
};

#pragma pack(pop)


#pragma pack(push, 1)
namespace m2c{
struct Memory{
db dummy3_0[6688];
db dummy3_1a20[442];
dw dgrouparb; // 01a2:01ba
db dummy3_1bdc[552];
dw dummy3_1e04; // 01a2:03e4
dw dummy3_1e06; // 01a2:03e6
dw dummy3_1e08; // 01a2:03e8
dw dummy3_1e0a; // 01a2:03ea
dw dummy3_1e0c; // 01a2:03ec
dw dummy3_1e0e; // 01a2:03ee
dw dummy3_1e10; // 01a2:03f0
dw dummy3_1e12; // 01a2:03f2
dw dummy3_1e14; // 01a2:03f4
dw dummy3_1e16; // 01a2:03f6
dw dummy3_1e18; // 01a2:03f8
dw dummy3_1e1a; // 01a2:03fa
dw dummy3_1e1c; // 01a2:03fc
dw dummy3_1e1e; // 01a2:03fe
dw dummy3_1e20; // 01a2:0400
dw dummy3_1e22; // 01a2:0402
dw dummy3_1e24; // 01a2:0404
dw dummy3_1e26; // 01a2:0406
dw dummy3_1e28; // 01a2:0408
dw dummy3_1e2a; // 01a2:040a
dw dummy3_1e2c; // 01a2:040c
dw dummy3_1e2e; // 01a2:040e
dw dummy3_1e30; // 01a2:0410
dw dummy3_1e32; // 01a2:0412
dw dummy3_1e34; // 01a2:0414
dw dummy3_1e36; // 01a2:0416
dw dummy3_1e38; // 01a2:0418
dw dummy3_1e3a; // 01a2:041a
db dummy3_1e3c[8973];
dw word_12729; // 01a2:2729
db dummy3_414b[146];
db dummy3_41dd;
db dummy3_41de; // 01a2:27be
db dummy3_41df; // 01a2:27bf
db dummy3_41e0; // 01a2:27c0
db dummy3_41e1; // 01a2:27c1
db dummy3_41e2; // 01a2:27c2
db dummy3_41e3; // 01a2:27c3
db dummy3_41e4; // 01a2:27c4
db dummy3_41e5; // 01a2:27c5
db dummy3_41e6[1097];
db dummy3_462f;
db dummy3_4630[4681];
db dummy3_5879; // 01a2:3e59
db dummy3_587a[15];
db dummy3_5889; // 01a2:3e69
db dummy3_588a[15];
db dummy3_5899; // 01a2:3e79
db dummy3_589a[15];
db dummy3_58a9; // 01a2:3e89
db dummy3_58aa[15];
db dummy3_58b9; // 01a2:3e99
db dummy3_58ba[15];
db dummy3_58c9; // 01a2:3ea9
db dummy3_58ca[15];
db dummy3_58d9; // 01a2:3eb9
db dummy3_58da[15];
db dummy3_58e9; // 01a2:3ec9
db dummy3_58ea[15];
db dummy3_58f9; // 01a2:3ed9
db dummy3_58fa[15];
db dummy3_5909; // 01a2:3ee9
db dummy3_590a[15];
db dummy3_5919; // 01a2:3ef9
db dummy3_591a[15];
db dummy3_5929; // 01a2:3f09
db dummy3_592a[15];
db dummy3_5939; // 01a2:3f19
db dummy3_593a[15];
db dummy3_5949; // 01a2:3f29
db dummy3_594a[15];
db dummy3_5959; // 01a2:3f39
db dummy3_595a[15];
db dummy3_5969; // 01a2:3f49
db dummy3_596a[15];
db dummy3_5979; // 01a2:3f59
db dummy3_597a[15];
db dummy3_5989; // 01a2:3f69
db dummy3_598a[15];
db dummy3_5999; // 01a2:3f79
db dummy3_599a[15];
db dummy3_59a9; // 01a2:3f89
db dummy3_59aa[15];
db dummy3_59b9; // 01a2:3f99
db dummy3_59ba[15];
db dummy3_59c9; // 01a2:3fa9
db dummy3_59ca[15];
db dummy3_59d9; // 01a2:3fb9
db dummy3_59da[15];
db dummy3_59e9; // 01a2:3fc9
db dummy3_59ea[15];
db dummy3_59f9; // 01a2:3fd9
db dummy3_59fa[15];
db dummy3_5a09; // 01a2:3fe9
db dummy3_5a0a[15];
db dummy3_5a19; // 01a2:3ff9
db dummy3_5a1a[15];
db dummy3_5a29; // 01a2:4009
db dummy3_5a2a[15];
db dummy3_5a39; // 01a2:4019
db dummy3_5a3a[15];
db dummy3_5a49; // 01a2:4029
db dummy3_5a4a[9];
db dummy3_5a53; // 01a2:4033
db dummy3_5a54[31];
db dummy3_5a73; // 01a2:4053
db dummy3_5a74[15];
db dummy3_5a83; // 01a2:4063
db dummy3_5a84[15];
db dummy3_5a93; // 01a2:4073
db dummy3_5a94[15];
db dummy3_5aa3; // 01a2:4083
db dummy3_5aa4[15];
db dummy3_5ab3; // 01a2:4093
db dummy3_5ab4[15];
db dummy3_5ac3; // 01a2:40a3
db dummy3_5ac4[15];
db dummy3_5ad3; // 01a2:40b3
db dummy3_5ad4[15];
db dummy3_5ae3; // 01a2:40c3
db dummy3_5ae4[40];
db dummy3_5b0c;
db dummy3_5b0d;
dw dummy3_5b0e; // 01a2:40ee
dw dummy3_5b10; // 01a2:40f0
dw dummy3_5b12; // 01a2:40f2
dw dummy3_5b14; // 01a2:40f4
dw dummy3_5b16; // 01a2:40f6
dw dummy3_5b18; // 01a2:40f8
dw dummy3_5b1a; // 01a2:40fa
dw dummy3_5b1c; // 01a2:40fc
dw dummy3_5b1e; // 01a2:40fe
dw dummy3_5b20; // 01a2:4100
dw dummy3_5b22; // 01a2:4102
dw dummy3_5b24; // 01a2:4104
dw dummy3_5b26; // 01a2:4106
dw dummy3_5b28; // 01a2:4108
dw dummy3_5b2a; // 01a2:410a
dw dummy3_5b2c; // 01a2:410c
dw dummy3_5b2e; // 01a2:410e
dw dummy3_5b30; // 01a2:4110
dw dummy3_5b32; // 01a2:4112
dw dummy3_5b34; // 01a2:4114
dw dummy3_5b36; // 01a2:4116
dw dummy3_5b38; // 01a2:4118
dw dummy3_5b3a; // 01a2:411a
dw dummy3_5b3c; // 01a2:411c
dw dummy3_5b3e; // 01a2:411e
dw dummy3_5b40; // 01a2:4120
dw dummy3_5b42; // 01a2:4122
dw dummy3_5b44; // 01a2:4124
dw dummy3_5b46; // 01a2:4126
dw dummy3_5b48; // 01a2:4128
dw dummy3_5b4a; // 01a2:412a
dw dummy3_5b4c; // 01a2:412c
dw dummy3_5b4e; // 01a2:412e
dw dummy3_5b50; // 01a2:4130
dw dummy3_5b52; // 01a2:4132
dw dummy3_5b54; // 01a2:4134
dw dummy3_5b56; // 01a2:4136
dw dummy3_5b58; // 01a2:4138
dw dummy3_5b5a; // 01a2:413a
dw dummy3_5b5c; // 01a2:413c
dw dummy3_5b5e; // 01a2:413e
dw dummy3_5b60; // 01a2:4140
dw dummy3_5b62; // 01a2:4142
dw dummy3_5b64; // 01a2:4144
dw dummy3_5b66; // 01a2:4146
dw dummy3_5b68; // 01a2:4148
dw dummy3_5b6a; // 01a2:414a
db dummy3_5b6c[15];
db dummy3_5b7b; // 01a2:415b
db dummy3_5b7c[15];
db dummy3_5b8b; // 01a2:416b
db dummy3_5b8c[15];
db dummy3_5b9b; // 01a2:417b
db dummy3_5b9c[15];
db dummy3_5bab; // 01a2:418b
db dummy3_5bac[15];
db dummy3_5bbb; // 01a2:419b
db dummy3_5bbc[15];
db dummy3_5bcb; // 01a2:41ab
db dummy3_5bcc[15];
db dummy3_5bdb; // 01a2:41bb
db dummy3_5bdc[15];
db dummy3_5beb; // 01a2:41cb
db dummy3_5bec[15];
db dummy3_5bfb; // 01a2:41db
db dummy3_5bfc[15];
db dummy3_5c0b; // 01a2:41eb
db dummy3_5c0c[15];
db dummy3_5c1b; // 01a2:41fb
db dummy3_5c1c[15];
db dummy3_5c2b; // 01a2:420b
db dummy3_5c2c[15];
db dummy3_5c3b; // 01a2:421b
db dummy3_5c3c[15];
db dummy3_5c4b; // 01a2:422b
db dummy3_5c4c[15];
db dummy3_5c5b; // 01a2:423b
db dummy3_5c5c[15];
db dummy3_5c6b; // 01a2:424b
db dummy3_5c6c[15];
db dummy3_5c7b; // 01a2:425b
db dummy3_5c7c[15];
db dummy3_5c8b; // 01a2:426b
db dummy3_5c8c[15];
db dummy3_5c9b; // 01a2:427b
db dummy3_5c9c[15];
db dummy3_5cab; // 01a2:428b
db dummy3_5cac[15];
db dummy3_5cbb; // 01a2:429b
db dummy3_5cbc[15];
db dummy3_5ccb; // 01a2:42ab
db dummy3_5ccc[15];
db dummy3_5cdb; // 01a2:42bb
db dummy3_5cdc[15];
db dummy3_5ceb; // 01a2:42cb
db dummy3_5cec[15];
db dummy3_5cfb; // 01a2:42db
db dummy3_5cfc[15];
db dummy3_5d0b; // 01a2:42eb
db dummy3_5d0c[15];
db dummy3_5d1b; // 01a2:42fb
db dummy3_5d1c[15];
db dummy3_5d2b; // 01a2:430b
db dummy3_5d2c[15];
db dummy3_5d3b; // 01a2:431b
db dummy3_5d3c[15];
db dummy3_5d4b; // 01a2:432b
db dummy3_5d4c[15];
db dummy3_5d5b; // 01a2:433b
db dummy3_5d5c[15];
db dummy3_5d6b; // 01a2:434b
db dummy3_5d6c[15];
db dummy3_5d7b; // 01a2:435b
db dummy3_5d7c[15];
db dummy3_5d8b; // 01a2:436b
db dummy3_5d8c[15];
db dummy3_5d9b; // 01a2:437b
db dummy3_5d9c[15];
db dummy3_5dab;
db dummy3_5dac;
dw dummy3_5dad; // 01a2:438d
dw dummy3_5daf; // 01a2:438f
dw dummy3_5db1; // 01a2:4391
dw dummy3_5db3; // 01a2:4393
dw dummy3_5db5; // 01a2:4395
dw dummy3_5db7; // 01a2:4397
dw dummy3_5db9; // 01a2:4399
dw dummy3_5dbb; // 01a2:439b
dw dummy3_5dbd; // 01a2:439d
dw dummy3_5dbf; // 01a2:439f
dw dummy3_5dc1; // 01a2:43a1
dw dummy3_5dc3; // 01a2:43a3
dw dummy3_5dc5; // 01a2:43a5
dw dummy3_5dc7; // 01a2:43a7
dw dummy3_5dc9; // 01a2:43a9
dw dummy3_5dcb; // 01a2:43ab
dw dummy3_5dcd; // 01a2:43ad
dw dummy3_5dcf; // 01a2:43af
dw dummy3_5dd1; // 01a2:43b1
dw dummy3_5dd3; // 01a2:43b3
dw dummy3_5dd5; // 01a2:43b5
dw dummy3_5dd7; // 01a2:43b7
dw dummy3_5dd9; // 01a2:43b9
dw dummy3_5ddb; // 01a2:43bb
dw dummy3_5ddd; // 01a2:43bd
dw dummy3_5ddf; // 01a2:43bf
dw dummy3_5de1; // 01a2:43c1
dw dummy3_5de3; // 01a2:43c3
dw dummy3_5de5; // 01a2:43c5
dw dummy3_5de7; // 01a2:43c7
dw dummy3_5de9; // 01a2:43c9
dw dummy3_5deb; // 01a2:43cb
dw dummy3_5ded; // 01a2:43cd
dw dummy3_5def; // 01a2:43cf
dw dummy3_5df1; // 01a2:43d1
dw dummy3_5df3; // 01a2:43d3
dw dummy3_5df5; // 01a2:43d5
dw dummy3_5df7; // 01a2:43d7
dw dummy3_5df9; // 01a2:43d9
dw dummy3_5dfb; // 01a2:43db
dw dummy3_5dfd; // 01a2:43dd
dw dummy3_5dff; // 01a2:43df
dw dummy3_5e01; // 01a2:43e1
dw dummy3_5e03; // 01a2:43e3
dw dummy3_5e05; // 01a2:43e5
dw dummy3_5e07; // 01a2:43e7
dw dummy3_5e09; // 01a2:43e9
db dummy3_5e0b;
db dummy3_5e0c[108];
db dummy3_5e78; // 01a2:4458
db dummy3_5e79; // 01a2:4459
db dummy3_5e7a; // 01a2:445a
db dummy3_5e7b; // 01a2:445b
db byte_1445c; // 01a2:445c
db dummy3_5e7d;
db byte_1445e; // 01a2:445e
db dummy3_5e7f;
db dummy3_5e80[42]; // 01a2:4460
db dummy3_5eaa[1029];
db dummy3_62af;
db dummy3_62b0[229];
db dummy3_6395; // 01a2:4975
db dummy3_6396[99];
db dummy3_63f9; // 01a2:49d9
db dummy3_63fa[247];
db dummy3_64f1; // 01a2:4ad1
db dummy3_64f2[500];
db dummy3_66e6[8]; // 01a2:4cc6
dw word_14cce; // 01a2:4cce
dw word_14cd0; // 01a2:4cd0
db dummy3_66f2[9]; // 01a2:4cd2
db dummy3_66fb[6]; // 01a2:4cd2
db dummy3_6701[825];
db dummy3_6a3a[8]; // 01a2:501a
db dummy3_6a42[1279];
db dummy3_6f41;
db dummy3_6f42[6069];
dw jpt_16cd2; // 01a2:6cd7
dw dummy3_86f9; // 01a2:6cd7
dw dummy3_86fb; // 01a2:6cd7
dw dummy3_86fd; // 01a2:6cd7
db dummy3_86ff[1241];
dw jpt_171b3; // 01a2:71b8
dw dummy3_8bda; // 01a2:71ba
dw dummy3_8bdc; // 01a2:71bc
dw dummy3_8bde; // 01a2:71be
dw dummy3_8be0; // 01a2:71c0
dw dummy3_8be2; // 01a2:71c2
db dummy3_8be4[555];
dw jpt_173ea; // 01a2:73ef
dw dummy3_8e11; // 01a2:73f1
dw dummy3_8e13; // 01a2:73f3
dw dummy3_8e15; // 01a2:73f5
dw dummy3_8e17; // 01a2:73f7
dw dummy3_8e19; // 01a2:73f9
db dummy3_8e1b[238];
dw jpt_174e4; // 01a2:74e9
dw dummy3_8f0b; // 01a2:74eb
dw dummy3_8f0d; // 01a2:74ed
dw dummy3_8f0f; // 01a2:74ef
dw dummy3_8f11; // 01a2:74f1
dw dummy3_8f13; // 01a2:74f3
dw dummy3_8f15; // 01a2:74f5
dw dummy3_8f17; // 01a2:74f7
db dummy3_8f19[255];
dw jpt_175f3; // 01a2:75f8
dw dummy3_901a; // 01a2:75fa
dw dummy3_901c; // 01a2:75fc
dw dummy3_901e; // 01a2:75fe
dw dummy3_9020; // 01a2:7600
db dummy3_9022[162];
dw jpt_1769f; // 01a2:76a4
dw dummy3_90c6; // 01a2:76a6
dw dummy3_90c8; // 01a2:76a8
dw dummy3_90ca; // 01a2:76aa
dw dummy3_90cc; // 01a2:76ac
dw dummy3_90ce; // 01a2:76ae
db dummy3_90d0[1135];
dw jpt_17b1a; // 01a2:7b1f
dw dummy3_9541; // 01a2:7b21
dw dummy3_9543; // 01a2:7b23
dw dummy3_9545; // 01a2:7b25
dw dummy3_9547; // 01a2:7b27
db dummy3_9549[60];
dw jpt_17b60; // 01a2:7b65
dw dummy3_9587; // 01a2:7b67
dw dummy3_9589; // 01a2:7b69
dw dummy3_958b; // 01a2:7b6b
dw dummy3_958d; // 01a2:7b6d
dw dummy3_958f; // 01a2:7b6f
dw dummy3_9591; // 01a2:7b71
db dummy3_9593[151];
dw jpt_17c05; // 01a2:7c0a
dw dummy3_962c; // 01a2:7c0c
dw dummy3_962e; // 01a2:7c0e
dw dummy3_9630; // 01a2:7c10
dw dummy3_9632; // 01a2:7c12
dw dummy3_9634; // 01a2:7c14
db dummy3_9636[10836];
dw word_1a66a; // 01a2:a66a
dw word_1a66c; // 01a2:a66c
db dummy3_c08e;
db dummy3_c08f;
db dummy3_c090[1475];
db dummy3_c653; // 01a2:ac33
db dummy3_c654[754];
dw word_1af26; // 01a2:af26
dw word_1af28; // 01a2:af28
db dummy3_c94a[1493];
db dummy3_cf1f;
db byte_1b500; // 01a2:b500
db byte_1b501; // 01a2:b501
db dummy3_cf22;
db byte_1b503; // 01a2:b503
db dummy3_cf24;
db dummy3_cf25[1428];
db dummy3_d4b9;
db byte_1ba9a; // 01a2:ba9a
db byte_1ba9b; // 01a2:ba9b
dw word_1ba9c; // 01a2:ba9c
db dummy3_d4be;
db dummy3_d4bf;
db dummy3_d4c0;
db dummy3_d4c1;
dw word_1baa2; // 01a2:baa2
dd dword_1baa4; // 01a2:baa4
db dummy3_d4c8[2];
db dummy3_d4ca; // 01a2:baaa
db dummy3_d4cb[454];
db dummy3_d691;
dw word_1bc72; // 01a2:bc72
dd dword_1bc74; // 01a2:bc74
dw word_1bc78; // 01a2:bc78
db asc_1bc7a[26]; // 01a2:bc7a
db dummy3_d6b4[58];
db dummy3_d6ee; // 01a2:bcce
db dummy3_d6ef[112];
db byte_1bd3f; // 01a2:bd3f
db dummy3_d760[353];
db dummy3_d8c1;
db dummy3_d8c2[35];
db dummy3_d8e5;
db dummy3_d8e6[220];
db dummy3_d9c2[32]; // 01a2:bfa2
db dummy3_d9e2; // 01a2:bfc2
db dummy3_d9e3; // 01a2:bfc3
db dummy3_d9e4;
db dummy3_d9e5; // 01a2:bfc5
db dummy3_d9e6; // 01a2:bfc6
db dummy3_d9e7; // 01a2:bfc7
db dummy3_d9e8; // 01a2:bfc8
db dummy3_d9e9; // 01a2:bfc9
db dummy3_d9ea; // 01a2:bfca
db dummy3_d9eb; // 01a2:bfcb
db byte_1bfcc; // 01a2:bfcc
db dummy3_d9ed;
db byte_1bfce; // 01a2:bfce
db dummy3_d9ef;
db byte_1bfd0; // 01a2:bfd0
db dummy3_d9f1;
db byte_1bfd2; // 01a2:bfd2
db dummy3_d9f3; // 01a2:bfd3
db byte_1bfd4; // 01a2:bfd4
db dummy3_d9f5;
db byte_1bfd6; // 01a2:bfd6
db dummy3_d9f7;
db byte_1bfd8; // 01a2:bfd8
db dummy3_d9f9;
db byte_1bfda; // 01a2:bfda
db byte_1bfdb; // 01a2:bfdb
db byte_1bfdc; // 01a2:bfdc
db dummy3_d9fd;
db byte_1bfde; // 01a2:bfde
db dummy3_d9ff;
db byte_1bfe0; // 01a2:bfe0
db dummy3_da01;
db dummy3_da02[3086];
db dummy3_e610; // 01a2:cbf0
db dummy3_e611[138];
db byte_1cc7b; // 01a2:cc7b
db byte_1cc7c; // 01a2:cc7c
db dummy3_e69d;
db byte_1cc7e; // 01a2:cc7e
db dummy3_e69f;
db byte_1cc80; // 01a2:cc80
db dummy3_e6a1;
db byte_1cc82; // 01a2:cc82
db dummy3_e6a3;
db byte_1cc84; // 01a2:cc84
db dummy3_e6a5;
db byte_1cc86; // 01a2:cc86
db dummy3_e6a7; // 01a2:cc87
db byte_1cc88; // 01a2:cc88
db dummy3_e6a9;
db byte_1cc8a; // 01a2:cc8a
db dummy3_e6ab;
db byte_1cc8c; // 01a2:cc8c
db dummy3_e6ad;
db byte_1cc8e; // 01a2:cc8e
db dummy3_e6af;
db byte_1cc90; // 01a2:cc90
db dummy3_e6b1; // 01a2:cc91
dw seg_1cc92; // 01a2:cc92
db byte_1cc94; // 01a2:cc94
db dummy3_e6b5; // 01a2:cc95
db dummy3_e6b6;
db dummy3_e6b7; // 01a2:cc97
db dummy3_e6b8; // 01a2:cc98
db dummy3_e6b9; // 01a2:cc99
db dummy3_e6ba; // 01a2:cc9a
db dummy3_e6bb; // 01a2:cc9b
db dummy3_e6bc; // 01a2:cc9c
db dummy3_e6bd; // 01a2:cc9d
db dummy3_e6be; // 01a2:cc9e
db dummy3_e6bf; // 01a2:cc9f
db dummy3_e6c0; // 01a2:cca0
db dummy3_e6c1; // 01a2:cca1
db dummy3_e6c2; // 01a2:cca2
db dummy3_e6c3; // 01a2:cca3
db dummy3_e6c4; // 01a2:cca4
db dummy3_e6c5;
db dummy3_e6c6; // 01a2:cca6
db dummy3_e6c7;
db dummy3_e6c8; // 01a2:cca8
db dummy3_e6c9; // 01a2:cca9
db dummy3_e6ca; // 01a2:ccaa
db dummy3_e6cb; // 01a2:ccab
db dummy3_e6cc; // 01a2:ccac
db dummy3_e6cd; // 01a2:ccad
db dummy3_e6ce; // 01a2:ccae
db dummy3_e6cf[707];
db dummy3_e992; // 01a2:cf72
db dummy3_e993[200];
db byte_1d03b; // 01a2:d03b
db dummy3_ea5c;
db byte_1d03d; // 01a2:d03d
db dummy3_ea5e;
db byte_1d03f; // 01a2:d03f
db dummy3_ea60;
db byte_1d041; // 01a2:d041
db dummy3_ea62;
db dummy3_ea63[194];
db dummy3_eb25;
db dummy3_eb26[8]; // 01a2:d106
db byte_1d10e; // 01a2:d10e
db dummy3_eb2f;
db byte_1d110; // 01a2:d110
db dummy3_eb31;
db dummy3_eb32; // 01a2:d112
db dummy3_eb33; // 01a2:d113
db dummy3_eb34; // 01a2:d114
db dummy3_eb35; // 01a2:d115
db dummy3_eb36; // 01a2:d116
db dummy3_eb37; // 01a2:d117
db dummy3_eb38; // 01a2:d118
db dummy3_eb39; // 01a2:d119
db dummy3_eb3a; // 01a2:d11a
db dummy3_eb3b; // 01a2:d11b
db dummy3_eb3c; // 01a2:d11c
db dummy3_eb3d; // 01a2:d11d
db dummy3_eb3e; // 01a2:d11e
db dummy3_eb3f; // 01a2:d11f
db dummy3_eb40; // 01a2:d120
db dummy3_eb41[53];
db dummy3_eb76; // 01a2:d156
db dummy3_eb77[1049];
db dummy3_ef90[9]; // 01a2:d570
db dummy3_ef99[6]; // 01a2:d570
db dummy3_ef9f[493];
db dummy3_f18c;
db dummy3_f18d;
db dummy3_f18e;
db dummy3_f18f;
db dummy3_f190[32]; // 0f19:0000
db dummy3_f1b0; // 0f19:0020
db dummy3_f1b1; // 0f19:0021
db dummy3_f1b2; // 0f19:0022
db dummy3_f1b3; // 0f19:0023
db dummy3_f1b4; // 0f19:0024
db dummy3_f1b5; // 0f19:0025
db dummy3_f1b6; // 0f19:0026
db dummy3_f1b7; // 0f19:0027
db dummy3_f1b8; // 0f19:0028
db dummy3_f1b9; // 0f19:0029
db dummy3_f1ba; // 0f19:002a
db dummy3_f1bb; // 0f19:002b
db dummy3_f1bc; // 0f19:002c
db dummy3_f1bd; // 0f19:002d
db dummy3_f1be;
db dummy3_f1bf; // 0f19:002f
db dummy3_f1c0; // 0f19:0030
db dummy3_f1c1; // 0f19:0031
db dummy3_f1c2; // 0f19:0032
db dummy3_f1c3; // 0f19:0033
db dummy3_f1c4; // 0f19:0034
db dummy3_f1c5; // 0f19:0035
db dummy3_f1c6; // 0f19:0036
db dummy3_f1c7; // 0f19:0037
db dummy3_f1c8; // 0f19:0038
db dummy3_f1c9; // 0f19:0039
db dummy3_f1ca; // 0f19:003a
db dummy3_f1cb; // 0f19:003b
db dummy3_f1cc; // 0f19:003c
db byte_1d7ad; // 0f19:003d
db dummy3_f1ce; // 0f19:003e
db dummy3_f1cf; // 0f19:003f
db dummy3_f1d0; // 0f19:0040
db dummy3_f1d1; // 0f19:0041
db dummy3_f1d2; // 0f19:0042
db dummy3_f1d3; // 0f19:0043
db dummy3_f1d4; // 0f19:0044
db dummy3_f1d5; // 0f19:0045
db dummy3_f1d6; // 0f19:0046
db dummy3_f1d7; // 0f19:0047
db dummy3_f1d8; // 0f19:0048
db dummy3_f1d9; // 0f19:0049
db dummy3_f1da; // 0f19:004a
db dummy3_f1db; // 0f19:004b
db dummy3_f1dc; // 0f19:004c
db dummy3_f1dd; // 0f19:004d
db dummy3_f1de; // 0f19:004e
db dummy3_f1df; // 0f19:004f
db dummy3_f1e0; // 0f19:0050
db dummy3_f1e1; // 0f19:0051
db dummy3_f1e2; // 0f19:0052
db dummy3_f1e3; // 0f19:0053
db dummy3_f1e4; // 0f19:0054
db dummy3_f1e5; // 0f19:0055
db dummy3_f1e6; // 0f19:0056
db dummy3_f1e7; // 0f19:0057
db dummy3_f1e8; // 0f19:0058
db dummy3_f1e9; // 0f19:0059
db dummy3_f1ea; // 0f19:005a
dd dword_1d7cb; // 0f19:005b
dd dword_1d7cf; // 0f19:005f
dd dword_1d7d3; // 0f19:0063
dd dword_1d7d7; // 0f19:0067
dw argc; // 0f19:006b
dw argv; // 0f19:006d
dw word_1d7df; // 0f19:006f
dw envp; // 0f19:0071
dw word_1d7e3; // 0f19:0073
dd dword_1d7e5; // 0f19:0075
dw _size; // 0f19:0079
dw segx; // 0f19:007b
dw word_1d7ed; // 0f19:007d
db byte_1d7ef; // 0f19:007f
db dummy3_f210;
dw word_1d7f1; // 0f19:0081
dw word_1d7f3; // 0f19:0083
dw word_1d7f5; // 0f19:0085
dw word_1d7f7; // 0f19:0087
dw word_1d7f9; // 0f19:0089
dd dword_1d7fb; // 0f19:008b
dw word_1d7ff; // 0f19:008f
dw word_1d801; // 0f19:0091
db dummy3_f223;
db dummy3_f224;
db dummy3_f225;
dw word_1d806; // 0f19:0096
db dummy3_f228[32]; // 0f19:0098
db dummy3_f248;
db dummy3_f249;
db dummy3_f24a;
db dummy3_f24b;
db dummy3_f24c;
db dummy3_f24d;
db dummy3_f24e;
db dummy3_f24f;
db dummy3_f250;
char ascore00000000[16]; // 0f19:00c1
char a000000[9]; // 0f19:00d1
dw word_1d84a; // 0f19:00da
db unk_1d84c; // 0f19:00dc
db dummy3_f26d; // 0f19:00dd
dw word_1d84e; // 0f19:00de
dw word_1d850; // 0f19:00e0
dw word_1d852; // 0f19:00e2
dw word_1d854; // 0f19:00e4
db byte_1d856; // 0f19:00e6
db dummy3_f277;
db byte_1d858; // 0f19:00e8
db dummy3_f279;
db byte_1d85a; // 0f19:00ea
db dummy3_f27b;
dw word_1d85c; // 0f19:00ec
dw word_1d85e; // 0f19:00ee
dw word_1d860; // 0f19:00f0
dw word_1d862; // 0f19:00f2
dw word_1d864; // 0f19:00f4
dw word_1d866; // 0f19:00f6
dw word_1d868; // 0f19:00f8
dw word_1d86a; // 0f19:00fa
dw word_1d86c; // 0f19:00fc
dw word_1d86e; // 0f19:00fe
db byte_1d870; // 0f19:0100
db dummy3_f291;
db byte_1d872; // 0f19:0102
db dummy3_f293;
db dummy3_f294;
db dummy3_f295;
dw word_1d876; // 0f19:0106
dw word_1d878; // 0f19:0108
dw word_1d87a; // 0f19:010a
dw word_1d87c; // 0f19:010c
dw word_1d87e; // 0f19:010e
dw word_1d880; // 0f19:0110
dw word_1d882; // 0f19:0112
dw word_1d884; // 0f19:0114
dw word_1d886; // 0f19:0116
dw word_1d888; // 0f19:0118
dw word_1d88a; // 0f19:011a
dw word_1d88c; // 0f19:011c
dw word_1d88e; // 0f19:011e
dw word_1d890; // 0f19:0120
dw word_1d892; // 0f19:0122
dw word_1d894; // 0f19:0124
dw word_1d896; // 0f19:0126
dw word_1d898; // 0f19:0128
dw word_1d89a; // 0f19:012a
db dummy3_f2bc;
db dummy3_f2bd;
db dummy3_f2be;
db dummy3_f2bf;
db dummy3_f2c0;
db dummy3_f2c1;
dw word_1d8a2; // 0f19:0132
db dummy3_f2c4;
db dummy3_f2c5;
db dummy3_f2c6;
db dummy3_f2c7;
dw word_1d8a8; // 0f19:0138
dw word_1d8aa; // 0f19:013a
dw word_1d8ac; // 0f19:013c
dw word_1d8ae; // 0f19:013e
dw word_1d8b0; // 0f19:0140
db dummy3_f2d2[32]; // 0f19:0142
db dummy3_f2f2[32]; // 0f19:0162
db dummy3_f312;
db dummy3_f313;
db dummy3_f314;
db dummy3_f315;
db dummy3_f316;
db dummy3_f317;
db dummy3_f318;
db dummy3_f319;
db dummy3_f31a;
db dummy3_f31b;
db dummy3_f31c;
db dummy3_f31d;
db dummy3_f31e;
db dummy3_f31f;
dw dummy3_f320;
db dummy3_f322;
db dummy3_f323;
db dummy3_f324;
db dummy3_f325;
db dummy3_f326;
db dummy3_f327;
db dummy3_f328;
db dummy3_f329;
db dummy3_f32a;
db dummy3_f32b;
db dummy3_f32c;
db dummy3_f32d;
db dummy3_f32e;
db dummy3_f32f;
db dummy3_f330;
db dummy3_f331;
dw word_1d912; // 0f19:01a2
db dummy3_f334;
db dummy3_f335;
dw word_1d916; // 0f19:01a6
dw word_1d918; // 0f19:01a8
dw word_1d91a; // 0f19:01aa
dw word_1d91c; // 0f19:01ac
dw word_1d91e; // 0f19:01ae
dw word_1d920; // 0f19:01b0
dw word_1d922; // 0f19:01b2
dw word_1d924; // 0f19:01b4
db dummy3_f346[2];
dw word_1d928; // 0f19:01b8
dw word_1d92a; // 0f19:01ba
dw word_1d92c; // 0f19:01bc
dw word_1d92e; // 0f19:01be
dw word_1d930; // 0f19:01c0
dw word_1d932; // 0f19:01c2
dw word_1d934; // 0f19:01c4
dw word_1d936; // 0f19:01c6
dw word_1d938; // 0f19:01c8
dw word_1d93a; // 0f19:01ca
dw word_1d93c; // 0f19:01cc
dw word_1d93e; // 0f19:01ce
dw word_1d940; // 0f19:01d0
dw word_1d942; // 0f19:01d2
dw word_1d944; // 0f19:01d4
dw word_1d946; // 0f19:01d6
dw word_1d948; // 0f19:01d8
dw word_1d94a; // 0f19:01da
dw word_1d94c; // 0f19:01dc
dw word_1d94e; // 0f19:01de
dw word_1d950; // 0f19:01e0
dw word_1d952; // 0f19:01e2
dw word_1d954; // 0f19:01e4
dw word_1d956; // 0f19:01e6
dw word_1d958; // 0f19:01e8
dw word_1d95a; // 0f19:01ea
dw word_1d95c; // 0f19:01ec
dw word_1d95e; // 0f19:01ee
dw word_1d960; // 0f19:01f0
dw word_1d962; // 0f19:01f2
dw word_1d964; // 0f19:01f4
db byte_1d966; // 0f19:01f6
db dummy3_f387;
db byte_1d968; // 0f19:01f8
db dummy3_f389;
db byte_1d96a; // 0f19:01fa
db dummy3_f38b;
db byte_1d96c; // 0f19:01fc
db dummy3_f38d;
db byte_1d96e; // 0f19:01fe
db dummy3_f38f;
db byte_1d970; // 0f19:0200
db dummy3_f391[32]; // 0f19:0201
db dummy3_f3b1[32]; // 0f19:0221
db dummy3_f3d1[32]; // 0f19:0241
db dummy3_f3f1[32]; // 0f19:0261
db dummy3_f411[32]; // 0f19:0281
db dummy3_f431[32]; // 0f19:02a1
db dummy3_f451[32]; // 0f19:02c1
db dummy3_f471[32]; // 0f19:02e1
db dummy3_f491[32]; // 0f19:0301
db dummy3_f4b1[32]; // 0f19:0321
db dummy3_f4d1[32]; // 0f19:0341
db dummy3_f4f1[32]; // 0f19:0361
db dummy3_f511[32]; // 0f19:0381
db dummy3_f531[32]; // 0f19:03a1
db dummy3_f551[32]; // 0f19:03c1
db dummy3_f571[32]; // 0f19:03e1
db dummy3_f591[32]; // 0f19:0401
db dummy3_f5b1[32]; // 0f19:0421
db dummy3_f5d1[32]; // 0f19:0441
db dummy3_f5f1[32]; // 0f19:0461
db dummy3_f611[32]; // 0f19:0481
db dummy3_f631[32]; // 0f19:04a1
db dummy3_f651[32]; // 0f19:04c1
db dummy3_f671[32]; // 0f19:04e1
db dummy3_f691[32]; // 0f19:0501
db dummy3_f6b1[32]; // 0f19:0521
db dummy3_f6d1[32]; // 0f19:0541
db dummy3_f6f1[32]; // 0f19:0561
db dummy3_f711[32]; // 0f19:0581
db dummy3_f731[32]; // 0f19:05a1
db dummy3_f751[32]; // 0f19:05c1
db dummy3_f771[32]; // 0f19:05e1
db dummy3_f791[32]; // 0f19:0601
db dummy3_f7b1[32]; // 0f19:0621
db dummy3_f7d1[32]; // 0f19:0641
db dummy3_f7f1[32]; // 0f19:0661
db dummy3_f811[32]; // 0f19:0681
db dummy3_f831[32]; // 0f19:06a1
db dummy3_f851[32]; // 0f19:06c1
db dummy3_f871[32]; // 0f19:06e1
db dummy3_f891[32]; // 0f19:0701
db dummy3_f8b1[32]; // 0f19:0721
db dummy3_f8d1[32]; // 0f19:0741
db dummy3_f8f1[32]; // 0f19:0761
db dummy3_f911[32]; // 0f19:0781
db dummy3_f931[32]; // 0f19:07a1
db dummy3_f951[32]; // 0f19:07c1
db dummy3_f971[32]; // 0f19:07e1
db dummy3_f991[32]; // 0f19:0801
db dummy3_f9b1[32]; // 0f19:0821
db dummy3_f9d1[32]; // 0f19:0841
db dummy3_f9f1[32]; // 0f19:0861
db dummy3_fa11[32]; // 0f19:0881
db dummy3_fa31[32]; // 0f19:08a1
db dummy3_fa51[32]; // 0f19:08c1
db dummy3_fa71[32]; // 0f19:08e1
db dummy3_fa91[32]; // 0f19:0901
db dummy3_fab1[32]; // 0f19:0921
db dummy3_fad1[32]; // 0f19:0941
db dummy3_faf1[32]; // 0f19:0961
db dummy3_fb11[32]; // 0f19:0981
db dummy3_fb31[32]; // 0f19:09a1
db dummy3_fb51[32]; // 0f19:09c1
db dummy3_fb71[32]; // 0f19:09e1
db dummy3_fb91[32]; // 0f19:0a01
db dummy3_fbb1[32]; // 0f19:0a21
db dummy3_fbd1[32]; // 0f19:0a41
db dummy3_fbf1[32]; // 0f19:0a61
db dummy3_fc11[32]; // 0f19:0a81
db dummy3_fc31[32]; // 0f19:0aa1
db dummy3_fc51[32]; // 0f19:0ac1
db dummy3_fc71[32]; // 0f19:0ae1
db dummy3_fc91[32]; // 0f19:0b01
db dummy3_fcb1[32]; // 0f19:0b21
db dummy3_fcd1[32]; // 0f19:0b41
db dummy3_fcf1[32]; // 0f19:0b61
db dummy3_fd11[32]; // 0f19:0b81
db dummy3_fd31[32]; // 0f19:0ba1
db dummy3_fd51[32]; // 0f19:0bc1
db dummy3_fd71[32]; // 0f19:0be1
db dummy3_fd91[32]; // 0f19:0c01
db dummy3_fdb1[32]; // 0f19:0c21
db dummy3_fdd1[32]; // 0f19:0c41
db dummy3_fdf1[32]; // 0f19:0c61
db dummy3_fe11[32]; // 0f19:0c81
db dummy3_fe31[32]; // 0f19:0ca1
db dummy3_fe51[32]; // 0f19:0cc1
db dummy3_fe71[32]; // 0f19:0ce1
db dummy3_fe91[32]; // 0f19:0d01
db dummy3_feb1[32]; // 0f19:0d21
db dummy3_fed1[32]; // 0f19:0d41
db dummy3_fef1[32]; // 0f19:0d61
db dummy3_ff11[32]; // 0f19:0d81
db dummy3_ff31[32]; // 0f19:0da1
db dummy3_ff51[32]; // 0f19:0dc1
db dummy3_ff71[32]; // 0f19:0de1
db dummy3_ff91[32]; // 0f19:0e01
db dummy3_ffb1[32]; // 0f19:0e21
db dummy3_ffd1[32]; // 0f19:0e41
db dummy3_fff1[32]; // 0f19:0e61
db dummy3_10011[32]; // 0f19:0e81
db dummy3_10031[32]; // 0f19:0ea1
db dummy3_10051[32]; // 0f19:0ec1
db dummy3_10071[32]; // 0f19:0ee1
db dummy3_10091[32]; // 0f19:0f01
db dummy3_100b1[32]; // 0f19:0f21
db dummy3_100d1[32]; // 0f19:0f41
db dummy3_100f1[32]; // 0f19:0f61
db dummy3_10111[32]; // 0f19:0f81
db dummy3_10131[32]; // 0f19:0fa1
db dummy3_10151[32]; // 0f19:0fc1
db dummy3_10171[32]; // 0f19:0fe1
db dummy3_10191[32]; // 0f19:1001
db dummy3_101b1[32]; // 0f19:1021
db dummy3_101d1[32]; // 0f19:1041
db dummy3_101f1[32]; // 0f19:1061
db dummy3_10211[32]; // 0f19:1081
db dummy3_10231[32]; // 0f19:10a1
db dummy3_10251[32]; // 0f19:10c1
db dummy3_10271[32]; // 0f19:10e1
db dummy3_10291[32]; // 0f19:1101
db dummy3_102b1[32]; // 0f19:1121
db dummy3_102d1[32]; // 0f19:1141
db dummy3_102f1[32]; // 0f19:1161
db dummy3_10311[32]; // 0f19:1181
db dummy3_10331[32]; // 0f19:11a1
db dummy3_10351[32]; // 0f19:11c1
db dummy3_10371[32]; // 0f19:11e1
db dummy3_10391[32]; // 0f19:1201
db dummy3_103b1[32]; // 0f19:1221
db dummy3_103d1[32]; // 0f19:1241
db dummy3_103f1[32]; // 0f19:1261
db dummy3_10411[32]; // 0f19:1281
db dummy3_10431[32]; // 0f19:12a1
db dummy3_10451[32]; // 0f19:12c1
db dummy3_10471[32]; // 0f19:12e1
db dummy3_10491[32]; // 0f19:1301
db dummy3_104b1[32]; // 0f19:1321
db dummy3_104d1[32]; // 0f19:1341
db dummy3_104f1[32]; // 0f19:1361
db dummy3_10511[32]; // 0f19:1381
db dummy3_10531[32]; // 0f19:13a1
db dummy3_10551[32]; // 0f19:13c1
db dummy3_10571[32]; // 0f19:13e1
db dummy3_10591[32]; // 0f19:1401
db dummy3_105b1[32]; // 0f19:1421
db dummy3_105d1[32]; // 0f19:1441
db dummy3_105f1[32]; // 0f19:1461
db dummy3_10611[32]; // 0f19:1481
db dummy3_10631[32]; // 0f19:14a1
db dummy3_10651[32]; // 0f19:14c1
db dummy3_10671[32]; // 0f19:14e1
db dummy3_10691[32]; // 0f19:1501
db dummy3_106b1[32]; // 0f19:1521
db dummy3_106d1[32]; // 0f19:1541
db dummy3_106f1[32]; // 0f19:1561
db dummy3_10711[32]; // 0f19:1581
db dummy3_10731[32]; // 0f19:15a1
db dummy3_10751[32]; // 0f19:15c1
db dummy3_10771[32]; // 0f19:15e1
db dummy3_10791[32]; // 0f19:1601
db dummy3_107b1[32]; // 0f19:1621
db dummy3_107d1[32]; // 0f19:1641
db dummy3_107f1[32]; // 0f19:1661
db dummy3_10811[32]; // 0f19:1681
db dummy3_10831[32]; // 0f19:16a1
db dummy3_10851[32]; // 0f19:16c1
db dummy3_10871[32]; // 0f19:16e1
db dummy3_10891[32]; // 0f19:1701
db dummy3_108b1[32]; // 0f19:1721
db dummy3_108d1[32]; // 0f19:1741
db dummy3_108f1[32]; // 0f19:1761
db dummy3_10911[32]; // 0f19:1781
db dummy3_10931[32]; // 0f19:17a1
db dummy3_10951[32]; // 0f19:17c1
db dummy3_10971[32]; // 0f19:17e1
db dummy3_10991[32]; // 0f19:1801
db dummy3_109b1[32]; // 0f19:1821
db dummy3_109d1[32]; // 0f19:1841
db dummy3_109f1[32]; // 0f19:1861
db dummy3_10a11[32]; // 0f19:1881
db dummy3_10a31[32]; // 0f19:18a1
db dummy3_10a51[32]; // 0f19:18c1
db dummy3_10a71[32]; // 0f19:18e1
db dummy3_10a91[32]; // 0f19:1901
db dummy3_10ab1[32]; // 0f19:1921
db dummy3_10ad1[32]; // 0f19:1941
db dummy3_10af1[32]; // 0f19:1961
db dummy3_10b11[32]; // 0f19:1981
db dummy3_10b31[32]; // 0f19:19a1
db dummy3_10b51[32]; // 0f19:19c1
db dummy3_10b71[32]; // 0f19:19e1
db dummy3_10b91[32]; // 0f19:1a01
db dummy3_10bb1[32]; // 0f19:1a21
db dummy3_10bd1[32]; // 0f19:1a41
db dummy3_10bf1[32]; // 0f19:1a61
db dummy3_10c11[32]; // 0f19:1a81
db dummy3_10c31[32]; // 0f19:1aa1
db dummy3_10c51[32]; // 0f19:1ac1
db dummy3_10c71[32]; // 0f19:1ae1
db dummy3_10c91[32]; // 0f19:1b01
db dummy3_10cb1[32]; // 0f19:1b21
db dummy3_10cd1[32]; // 0f19:1b41
db dummy3_10cf1[32]; // 0f19:1b61
db dummy3_10d11[32]; // 0f19:1b81
db dummy3_10d31[32]; // 0f19:1ba1
db dummy3_10d51[32]; // 0f19:1bc1
db dummy3_10d71[32]; // 0f19:1be1
db dummy3_10d91[32]; // 0f19:1c01
db dummy3_10db1[32]; // 0f19:1c21
db dummy3_10dd1[32]; // 0f19:1c41
db dummy3_10df1[32]; // 0f19:1c61
db dummy3_10e11[32]; // 0f19:1c81
db dummy3_10e31[32]; // 0f19:1ca1
db dummy3_10e51[32]; // 0f19:1cc1
db dummy3_10e71[32]; // 0f19:1ce1
db dummy3_10e91[32]; // 0f19:1d01
db dummy3_10eb1[32]; // 0f19:1d21
db dummy3_10ed1[32]; // 0f19:1d41
db dummy3_10ef1[32]; // 0f19:1d61
db dummy3_10f11[32]; // 0f19:1d81
db dummy3_10f31[32]; // 0f19:1da1
db dummy3_10f51[32]; // 0f19:1dc1
db dummy3_10f71[32]; // 0f19:1de1
db dummy3_10f91[32]; // 0f19:1e01
db dummy3_10fb1[32]; // 0f19:1e21
db dummy3_10fd1[32]; // 0f19:1e41
db dummy3_10ff1[32]; // 0f19:1e61
db dummy3_11011[32]; // 0f19:1e81
db dummy3_11031[32]; // 0f19:1ea1
db dummy3_11051[32]; // 0f19:1ec1
db dummy3_11071[32]; // 0f19:1ee1
db dummy3_11091[32]; // 0f19:1f01
db dummy3_110b1[32]; // 0f19:1f21
db dummy3_110d1[32]; // 0f19:1f41
db dummy3_110f1[32]; // 0f19:1f61
db dummy3_11111[32]; // 0f19:1f81
db dummy3_11131[32]; // 0f19:1fa1
db dummy3_11151[32]; // 0f19:1fc1
db dummy3_11171[32]; // 0f19:1fe1
db dummy3_11191[32]; // 0f19:2001
db dummy3_111b1[32]; // 0f19:2021
db dummy3_111d1[32]; // 0f19:2041
db dummy3_111f1[32]; // 0f19:2061
db dummy3_11211[32]; // 0f19:2081
db dummy3_11231[32]; // 0f19:20a1
db dummy3_11251[32]; // 0f19:20c1
db dummy3_11271[32]; // 0f19:20e1
db dummy3_11291[32]; // 0f19:2101
db dummy3_112b1[32]; // 0f19:2121
db dummy3_112d1[32]; // 0f19:2141
db dummy3_112f1[32]; // 0f19:2161
db dummy3_11311[32]; // 0f19:2181
db dummy3_11331[32]; // 0f19:21a1
db dummy3_11351[32]; // 0f19:21c1
db dummy3_11371[32]; // 0f19:21e1
db dummy3_11391[32]; // 0f19:2201
db dummy3_113b1[32]; // 0f19:2221
db dummy3_113d1[32]; // 0f19:2241
db dummy3_113f1[32]; // 0f19:2261
db dummy3_11411[32]; // 0f19:2281
db dummy3_11431[32]; // 0f19:22a1
db dummy3_11451[32]; // 0f19:22c1
db dummy3_11471[32]; // 0f19:22e1
db dummy3_11491[32]; // 0f19:2301
db dummy3_114b1[32]; // 0f19:2321
db dummy3_114d1[32]; // 0f19:2341
db dummy3_114f1[32]; // 0f19:2361
db dummy3_11511[32]; // 0f19:2381
db dummy3_11531[32]; // 0f19:23a1
db dummy3_11551[32]; // 0f19:23c1
db dummy3_11571[32]; // 0f19:23e1
db dummy3_11591[32]; // 0f19:2401
db dummy3_115b1[32]; // 0f19:2421
db dummy3_115d1[32]; // 0f19:2441
db dummy3_115f1[32]; // 0f19:2461
db dummy3_11611[32]; // 0f19:2481
db dummy3_11631[32]; // 0f19:24a1
db dummy3_11651[32]; // 0f19:24c1
db dummy3_11671[32]; // 0f19:24e1
db dummy3_11691[32]; // 0f19:2501
db dummy3_116b1[32]; // 0f19:2521
db dummy3_116d1[32]; // 0f19:2541
db dummy3_116f1[32]; // 0f19:2561
db dummy3_11711[32]; // 0f19:2581
db dummy3_11731[32]; // 0f19:25a1
db dummy3_11751[32]; // 0f19:25c1
db dummy3_11771[32]; // 0f19:25e1
db dummy3_11791[32]; // 0f19:2601
db dummy3_117b1[32]; // 0f19:2621
db dummy3_117d1[32]; // 0f19:2641
db dummy3_117f1[32]; // 0f19:2661
db dummy3_11811[32]; // 0f19:2681
db dummy3_11831[32]; // 0f19:26a1
db dummy3_11851[32]; // 0f19:26c1
db dummy3_11871[32]; // 0f19:26e1
db dummy3_11891[32]; // 0f19:2701
db dummy3_118b1[32]; // 0f19:2721
db dummy3_118d1[32]; // 0f19:2741
db dummy3_118f1[32]; // 0f19:2761
db dummy3_11911[32]; // 0f19:2781
db dummy3_11931[32]; // 0f19:27a1
db dummy3_11951[32]; // 0f19:27c1
db dummy3_11971[32]; // 0f19:27e1
db dummy3_11991[32]; // 0f19:2801
db dummy3_119b1; // 0f19:2821
db dummy3_119b2; // 0f19:2822
db dummy3_119b3; // 0f19:2823
db dummy3_119b4; // 0f19:2824
db dummy3_119b5; // 0f19:2825
db dummy3_119b6; // 0f19:2826
db dummy3_119b7; // 0f19:2827
db dummy3_119b8; // 0f19:2828
db dummy3_119b9; // 0f19:2829
db dummy3_119ba; // 0f19:282a
db dummy3_119bb; // 0f19:282b
db dummy3_119bc; // 0f19:282c
db dummy3_119bd; // 0f19:282d
db dummy3_119be; // 0f19:282e
db dummy3_119bf; // 0f19:282f
db dummy3_119c0; // 0f19:2830
db dummy3_119c1; // 0f19:2831
db dummy3_119c2; // 0f19:2832
db dummy3_119c3; // 0f19:2833
db dummy3_119c4; // 0f19:2834
db dummy3_119c5;
db dummy3_119c6; // 0f19:2836
db dummy3_119c7; // 0f19:2837
dw word_1ffa8; // 0f19:2838
db dummy3_119ca[32]; // 0f19:283a
db dummy3_119ea[32]; // 0f19:285a
db dummy3_11a0a[32]; // 0f19:287a
db dummy3_11a2a[32]; // 0f19:289a
db dummy3_11a4a[32]; // 0f19:28ba
db dummy3_11a6a[32]; // 0f19:28da
db dummy3_11a8a[32]; // 0f19:28fa
db dummy3_11aaa[32]; // 0f19:291a
db dummy3_11aca; // 0f19:293a
db byte_200ab; // 0f19:293b
db dummy3_11acc; // 0f19:293c
db dummy3_11acd; // 0f19:293d
db dummy3_11ace; // 0f19:293e
db dummy3_11acf; // 0f19:293f
db dummy3_11ad0;
db dummy3_11ad1; // 0f19:2941
db dummy3_11ad2; // 0f19:2942
db dummy3_11ad3; // 0f19:2943
db dummy3_11ad4; // 0f19:2944
db dummy3_11ad5; // 0f19:2945
db dummy3_11ad6;
db dummy3_11ad7; // 0f19:2947
db byte_200b8; // 0f19:2948
db dummy3_11ad9[32]; // 0f19:2949
db dummy3_11af9; // 0f19:2969
db dummy3_11afa; // 0f19:296a
db dummy3_11afb; // 0f19:296b
db dummy3_11afc; // 0f19:296c
db dummy3_11afd;
db dummy3_11afe; // 0f19:296e
db dummy3_11aff;
db dummy3_11b00; // 0f19:2970
db dummy3_11b01; // 0f19:2971
db dummy3_11b02; // 0f19:2972
db byte_200e3; // 0f19:2973
db dummy3_11b04; // 0f19:2974
db dummy3_11b05; // 0f19:2975
db dummy3_11b06;
db dummy3_11b07; // 0f19:2977
db dummy3_11b08; // 0f19:2978
db dummy3_11b09; // 0f19:2979
db dummy3_11b0a; // 0f19:297a
db dummy3_11b0b; // 0f19:297b
db dummy3_11b0c;
db dummy3_11b0d; // 0f19:297d
db dummy3_11b0e; // 0f19:297e
db dummy3_11b0f; // 0f19:297f
db dummy3_11b10; // 0f19:2980
db dummy3_11b11; // 0f19:2981
db dummy3_11b12;
db dummy3_11b13; // 0f19:2983
db dummy3_11b14; // 0f19:2984
db dummy3_11b15; // 0f19:2985
db dummy3_11b16; // 0f19:2986
db dummy3_11b17; // 0f19:2987
db dummy3_11b18;
db dummy3_11b19; // 0f19:2989
db dummy3_11b1a; // 0f19:298a
db dummy3_11b1b; // 0f19:298b
db dummy3_11b1c; // 0f19:298c
db dummy3_11b1d; // 0f19:298d
db dummy3_11b1e;
db dummy3_11b1f; // 0f19:298f
db byte_20100; // 0f19:2990
db dummy3_11b21; // 0f19:2991
db dummy3_11b22; // 0f19:2992
db dummy3_11b23; // 0f19:2993
db dummy3_11b24;
db dummy3_11b25; // 0f19:2995
db byte_20106; // 0f19:2996
db dummy3_11b27[32]; // 0f19:2997
db dummy3_11b47; // 0f19:29b7
db dummy3_11b48;
db dummy3_11b49; // 0f19:29b9
db dummy3_11b4a; // 0f19:29ba
db dummy3_11b4b;
db dummy3_11b4c; // 0f19:29bc
db byte_2012d; // 0f19:29bd
db dummy3_11b4e; // 0f19:29be
db dummy3_11b4f; // 0f19:29bf
db dummy3_11b50; // 0f19:29c0
db dummy3_11b51;
db dummy3_11b52; // 0f19:29c2
db byte_20133; // 0f19:29c3
db dummy3_11b54[32]; // 0f19:29c4
db dummy3_11b74[32]; // 0f19:29e4
db dummy3_11b94; // 0f19:2a04
db dummy3_11b95; // 0f19:2a05
db dummy3_11b96; // 0f19:2a06
db dummy3_11b97; // 0f19:2a07
db dummy3_11b98; // 0f19:2a08
db dummy3_11b99; // 0f19:2a09
db dummy3_11b9a; // 0f19:2a0a
db dummy3_11b9b; // 0f19:2a0b
db dummy3_11b9c; // 0f19:2a0c
db dummy3_11b9d;
db dummy3_11b9e; // 0f19:2a0e
db dummy3_11b9f;
db dummy3_11ba0; // 0f19:2a10
db dummy3_11ba1; // 0f19:2a11
db dummy3_11ba2;
db dummy3_11ba3; // 0f19:2a13
db dummy3_11ba4; // 0f19:2a14
db dummy3_11ba5; // 0f19:2a15
db dummy3_11ba6; // 0f19:2a16
db dummy3_11ba7; // 0f19:2a17
db dummy3_11ba8;
db dummy3_11ba9; // 0f19:2a19
db dummy3_11baa; // 0f19:2a1a
db dummy3_11bab; // 0f19:2a1b
db dummy3_11bac; // 0f19:2a1c
db dummy3_11bad; // 0f19:2a1d
db dummy3_11bae;
db dummy3_11baf; // 0f19:2a1f
db byte_20190; // 0f19:2a20
db dummy3_11bb1[32]; // 0f19:2a21
db dummy3_11bd1[32]; // 0f19:2a41
db dummy3_11bf1; // 0f19:2a61
db dummy3_11bf2; // 0f19:2a62
db dummy3_11bf3; // 0f19:2a63
db dummy3_11bf4; // 0f19:2a64
db dummy3_11bf5; // 0f19:2a65
db dummy3_11bf6;
db dummy3_11bf7; // 0f19:2a67
db dummy3_11bf8; // 0f19:2a68
db dummy3_11bf9; // 0f19:2a69
db dummy3_11bfa; // 0f19:2a6a
db dummy3_11bfb; // 0f19:2a6b
db dummy3_11bfc;
db dummy3_11bfd; // 0f19:2a6d
db dummy3_11bfe; // 0f19:2a6e
db dummy3_11bff; // 0f19:2a6f
db dummy3_11c00; // 0f19:2a70
db dummy3_11c01; // 0f19:2a71
db dummy3_11c02;
db dummy3_11c03; // 0f19:2a73
db byte_201e4; // 0f19:2a74
db dummy3_11c05[32]; // 0f19:2a75
db dummy3_11c25; // 0f19:2a95
db dummy3_11c26; // 0f19:2a96
db dummy3_11c27; // 0f19:2a97
db dummy3_11c28; // 0f19:2a98
db dummy3_11c29; // 0f19:2a99
db dummy3_11c2a; // 0f19:2a9a
db dummy3_11c2b; // 0f19:2a9b
db dummy3_11c2c; // 0f19:2a9c
db dummy3_11c2d; // 0f19:2a9d
db dummy3_11c2e; // 0f19:2a9e
db dummy3_11c2f; // 0f19:2a9f
db dummy3_11c30; // 0f19:2aa0
db dummy3_11c31;
db dummy3_11c32; // 0f19:2aa2
db dummy3_11c33; // 0f19:2aa3
db dummy3_11c34; // 0f19:2aa4
db dummy3_11c35; // 0f19:2aa5
db dummy3_11c36;
db dummy3_11c37; // 0f19:2aa7
db dummy3_11c38; // 0f19:2aa8
db dummy3_11c39; // 0f19:2aa9
db dummy3_11c3a; // 0f19:2aaa
db dummy3_11c3b; // 0f19:2aab
db dummy3_11c3c; // 0f19:2aac
db dummy3_11c3d;
db dummy3_11c3e; // 0f19:2aae
db byte_2021f; // 0f19:2aaf
db dummy3_11c40; // 0f19:2ab0
db dummy3_11c41; // 0f19:2ab1
db dummy3_11c42; // 0f19:2ab2
db dummy3_11c43; // 0f19:2ab3
db dummy3_11c44;
db dummy3_11c45; // 0f19:2ab5
db dummy3_11c46; // 0f19:2ab6
db dummy3_11c47; // 0f19:2ab7
db dummy3_11c48; // 0f19:2ab8
db dummy3_11c49; // 0f19:2ab9
db dummy3_11c4a;
db dummy3_11c4b; // 0f19:2abb
db dummy3_11c4c; // 0f19:2abc
db dummy3_11c4d; // 0f19:2abd
db dummy3_11c4e; // 0f19:2abe
db dummy3_11c4f; // 0f19:2abf
db dummy3_11c50;
db dummy3_11c51; // 0f19:2ac1
db byte_20232; // 0f19:2ac2
db dummy3_11c53[32]; // 0f19:2ac3
db dummy3_11c73[32]; // 0f19:2ae3
db dummy3_11c93[32]; // 0f19:2b03
db dummy3_11cb3; // 0f19:2b23
db dummy3_11cb4;
db dummy3_11cb5; // 0f19:2b25
db dummy3_11cb6; // 0f19:2b26
db dummy3_11cb7; // 0f19:2b27
db dummy3_11cb8; // 0f19:2b28
db dummy3_11cb9; // 0f19:2b29
db dummy3_11cba; // 0f19:2b2a
db dummy3_11cbb; // 0f19:2b2b
db dummy3_11cbc; // 0f19:2b2c
db dummy3_11cbd; // 0f19:2b2d
db dummy3_11cbe; // 0f19:2b2e
db dummy3_11cbf; // 0f19:2b2f
db dummy3_11cc0; // 0f19:2b30
db dummy3_11cc1; // 0f19:2b31
db dummy3_11cc2;
db dummy3_11cc3; // 0f19:2b33
db dummy3_11cc4;
db dummy3_11cc5; // 0f19:2b35
db dummy3_11cc6; // 0f19:2b36
db dummy3_11cc7;
db dummy3_11cc8; // 0f19:2b38
db byte_202a9; // 0f19:2b39
db dummy3_11cca; // 0f19:2b3a
db dummy3_11ccb; // 0f19:2b3b
db dummy3_11ccc; // 0f19:2b3c
db dummy3_11ccd;
db dummy3_11cce; // 0f19:2b3e
db dummy3_11ccf; // 0f19:2b3f
db dummy3_11cd0; // 0f19:2b40
db dummy3_11cd1; // 0f19:2b41
db dummy3_11cd2; // 0f19:2b42
db dummy3_11cd3;
db dummy3_11cd4; // 0f19:2b44
db dummy3_11cd5; // 0f19:2b45
db dummy3_11cd6; // 0f19:2b46
db dummy3_11cd7; // 0f19:2b47
db dummy3_11cd8; // 0f19:2b48
db dummy3_11cd9;
db dummy3_11cda; // 0f19:2b4a
db byte_202bb; // 0f19:2b4b
db dummy3_11cdc[32]; // 0f19:2b4c
db dummy3_11cfc[32]; // 0f19:2b6c
db dummy3_11d1c[32]; // 0f19:2b8c
db dummy3_11d3c[32]; // 0f19:2bac
db dummy3_11d5c[32]; // 0f19:2bcc
db dummy3_11d7c[32]; // 0f19:2bec
db dummy3_11d9c[32]; // 0f19:2c0c
db dummy3_11dbc[32]; // 0f19:2c2c
db dummy3_11ddc[32]; // 0f19:2c4c
db dummy3_11dfc[32]; // 0f19:2c6c
db dummy3_11e1c[32]; // 0f19:2c8c
db dummy3_11e3c[32]; // 0f19:2cac
db dummy3_11e5c[32]; // 0f19:2ccc
db dummy3_11e7c[32]; // 0f19:2cec
db dummy3_11e9c[32]; // 0f19:2d0c
db dummy3_11ebc[32]; // 0f19:2d2c
db dummy3_11edc[32]; // 0f19:2d4c
db dummy3_11efc[32]; // 0f19:2d6c
db dummy3_11f1c[32]; // 0f19:2d8c
db dummy3_11f3c[32]; // 0f19:2dac
db dummy3_11f5c[32]; // 0f19:2dcc
db dummy3_11f7c[32]; // 0f19:2dec
db dummy3_11f9c[32]; // 0f19:2e0c
db dummy3_11fbc[32]; // 0f19:2e2c
db dummy3_11fdc[32]; // 0f19:2e4c
db dummy3_11ffc[32]; // 0f19:2e6c
db dummy3_1201c[32]; // 0f19:2e8c
db dummy3_1203c; // 0f19:2eac
db dummy3_1203d; // 0f19:2ead
db dummy3_1203e; // 0f19:2eae
db dummy3_1203f; // 0f19:2eaf
db dummy3_12040; // 0f19:2eb0
db dummy3_12041;
db dummy3_12042; // 0f19:2eb2
db dummy3_12043;
db dummy3_12044; // 0f19:2eb4
db dummy3_12045; // 0f19:2eb5
db dummy3_12046; // 0f19:2eb6
db dummy3_12047; // 0f19:2eb7
db byte_20628; // 0f19:2eb8
db dummy3_12049[32]; // 0f19:2eb9
db dummy3_12069[32]; // 0f19:2ed9
db dummy3_12089[32]; // 0f19:2ef9
db dummy3_120a9[32]; // 0f19:2f19
db dummy3_120c9[32]; // 0f19:2f39
db dummy3_120e9[32]; // 0f19:2f59
db dummy3_12109[32]; // 0f19:2f79
db dummy3_12129[32]; // 0f19:2f99
db dummy3_12149[32]; // 0f19:2fb9
db dummy3_12169[32]; // 0f19:2fd9
db dummy3_12189[32]; // 0f19:2ff9
db dummy3_121a9[32]; // 0f19:3019
db dummy3_121c9[32]; // 0f19:3039
db dummy3_121e9[32]; // 0f19:3059
db dummy3_12209[32]; // 0f19:3079
db dummy3_12229[32]; // 0f19:3099
db dummy3_12249[32]; // 0f19:30b9
db dummy3_12269[32]; // 0f19:30d9
db dummy3_12289[32]; // 0f19:30f9
db dummy3_122a9[32]; // 0f19:3119
db dummy3_122c9[32]; // 0f19:3139
db dummy3_122e9[32]; // 0f19:3159
db dummy3_12309[32]; // 0f19:3179
db dummy3_12329[32]; // 0f19:3199
db dummy3_12349[32]; // 0f19:31b9
db dummy3_12369[32]; // 0f19:31d9
db dummy3_12389[32]; // 0f19:31f9
db dummy3_123a9[32]; // 0f19:3219
db dummy3_123c9[32]; // 0f19:3239
db dummy3_123e9[32]; // 0f19:3259
db dummy3_12409[32]; // 0f19:3279
db dummy3_12429[32]; // 0f19:3299
db dummy3_12449[32]; // 0f19:32b9
db dummy3_12469[32]; // 0f19:32d9
db dummy3_12489[32]; // 0f19:32f9
db dummy3_124a9[32]; // 0f19:3319
db dummy3_124c9[32]; // 0f19:3339
db dummy3_124e9[32]; // 0f19:3359
db dummy3_12509[32]; // 0f19:3379
db dummy3_12529[32]; // 0f19:3399
db dummy3_12549[32]; // 0f19:33b9
db dummy3_12569[32]; // 0f19:33d9
db dummy3_12589[32]; // 0f19:33f9
db dummy3_125a9[32]; // 0f19:3419
db dummy3_125c9[32]; // 0f19:3439
db dummy3_125e9[32]; // 0f19:3459
db dummy3_12609[32]; // 0f19:3479
db dummy3_12629[32]; // 0f19:3499
db dummy3_12649[32]; // 0f19:34b9
db dummy3_12669[32]; // 0f19:34d9
db dummy3_12689[32]; // 0f19:34f9
db dummy3_126a9[32]; // 0f19:3519
db dummy3_126c9[32]; // 0f19:3539
db dummy3_126e9[32]; // 0f19:3559
db dummy3_12709[32]; // 0f19:3579
db dummy3_12729[32]; // 0f19:3599
db dummy3_12749[32]; // 0f19:35b9
db dummy3_12769[32]; // 0f19:35d9
db dummy3_12789[32]; // 0f19:35f9
db dummy3_127a9[32]; // 0f19:3619
db dummy3_127c9[32]; // 0f19:3639
db dummy3_127e9[32]; // 0f19:3659
db dummy3_12809[32]; // 0f19:3679
db dummy3_12829[32]; // 0f19:3699
db dummy3_12849[32]; // 0f19:36b9
db dummy3_12869[32]; // 0f19:36d9
db dummy3_12889[32]; // 0f19:36f9
db dummy3_128a9[32]; // 0f19:3719
db dummy3_128c9[32]; // 0f19:3739
db dummy3_128e9[32]; // 0f19:3759
db dummy3_12909[32]; // 0f19:3779
db dummy3_12929[32]; // 0f19:3799
db dummy3_12949[32]; // 0f19:37b9
db dummy3_12969[32]; // 0f19:37d9
db dummy3_12989[32]; // 0f19:37f9
db dummy3_129a9[32]; // 0f19:3819
db dummy3_129c9[32]; // 0f19:3839
db dummy3_129e9[32]; // 0f19:3859
db dummy3_12a09[32]; // 0f19:3879
db dummy3_12a29[32]; // 0f19:3899
db dummy3_12a49[32]; // 0f19:38b9
db dummy3_12a69[32]; // 0f19:38d9
db dummy3_12a89[32]; // 0f19:38f9
db dummy3_12aa9[32]; // 0f19:3919
db dummy3_12ac9[32]; // 0f19:3939
db dummy3_12ae9[32]; // 0f19:3959
db dummy3_12b09[32]; // 0f19:3979
db dummy3_12b29[32]; // 0f19:3999
db dummy3_12b49[32]; // 0f19:39b9
db dummy3_12b69[32]; // 0f19:39d9
db dummy3_12b89[32]; // 0f19:39f9
db dummy3_12ba9[32]; // 0f19:3a19
db dummy3_12bc9[32]; // 0f19:3a39
db dummy3_12be9[32]; // 0f19:3a59
db dummy3_12c09[32]; // 0f19:3a79
db dummy3_12c29[32]; // 0f19:3a99
db dummy3_12c49[32]; // 0f19:3ab9
db dummy3_12c69[32]; // 0f19:3ad9
db dummy3_12c89[32]; // 0f19:3af9
db dummy3_12ca9[32]; // 0f19:3b19
db dummy3_12cc9[32]; // 0f19:3b39
db dummy3_12ce9[32]; // 0f19:3b59
db dummy3_12d09[32]; // 0f19:3b79
db dummy3_12d29[32]; // 0f19:3b99
db dummy3_12d49[32]; // 0f19:3bb9
db dummy3_12d69[32]; // 0f19:3bd9
db dummy3_12d89[32]; // 0f19:3bf9
db dummy3_12da9[32]; // 0f19:3c19
db dummy3_12dc9[32]; // 0f19:3c39
db dummy3_12de9[32]; // 0f19:3c59
db dummy3_12e09[32]; // 0f19:3c79
db dummy3_12e29[32]; // 0f19:3c99
db dummy3_12e49[32]; // 0f19:3cb9
db dummy3_12e69[32]; // 0f19:3cd9
db dummy3_12e89[32]; // 0f19:3cf9
db dummy3_12ea9[32]; // 0f19:3d19
db dummy3_12ec9[32]; // 0f19:3d39
db dummy3_12ee9; // 0f19:3d59
db dummy3_12eea;
db dummy3_12eeb; // 0f19:3d5b
db dummy3_12eec; // 0f19:3d5c
db dummy3_12eed; // 0f19:3d5d
db dummy3_12eee; // 0f19:3d5e
db dummy3_12eef; // 0f19:3d5f
db dummy3_12ef0;
db dummy3_12ef1; // 0f19:3d61
db dummy3_12ef2; // 0f19:3d62
db dummy3_12ef3; // 0f19:3d63
db dummy3_12ef4; // 0f19:3d64
db dummy3_12ef5; // 0f19:3d65
db dummy3_12ef6;
db dummy3_12ef7; // 0f19:3d67
db dummy3_12ef8; // 0f19:3d68
db dummy3_12ef9; // 0f19:3d69
db dummy3_12efa; // 0f19:3d6a
db dummy3_12efb; // 0f19:3d6b
db dummy3_12efc;
db dummy3_12efd; // 0f19:3d6d
db dummy3_12efe; // 0f19:3d6e
db dummy3_12eff; // 0f19:3d6f
db dummy3_12f00; // 0f19:3d70
db dummy3_12f01; // 0f19:3d71
dw word_214e2; // 0f19:3d72
db dummy3_12f04[32]; // 0f19:3d74
db dummy3_12f24[32]; // 0f19:3d94
db dummy3_12f44[32]; // 0f19:3db4
db dummy3_12f64[32]; // 0f19:3dd4
db dummy3_12f84[32]; // 0f19:3df4
db dummy3_12fa4[32]; // 0f19:3e14
db dummy3_12fc4[32]; // 0f19:3e34
db dummy3_12fe4[32]; // 0f19:3e54
db dummy3_13004[32]; // 0f19:3e74
db dummy3_13024; // 0f19:3e94
db dummy3_13025; // 0f19:3e95
db dummy3_13026; // 0f19:3e96
db dummy3_13027; // 0f19:3e97
db dummy3_13028; // 0f19:3e98
db dummy3_13029;
db dummy3_1302a; // 0f19:3e9a
db dummy3_1302b;
db dummy3_1302c; // 0f19:3e9c
db dummy3_1302d; // 0f19:3e9d
db dummy3_1302e; // 0f19:3e9e
db dummy3_1302f; // 0f19:3e9f
db dummy3_13030; // 0f19:3ea0
db dummy3_13031; // 0f19:3ea1
db dummy3_13032; // 0f19:3ea2
db dummy3_13033;
db dummy3_13034; // 0f19:3ea4
db dummy3_13035;
db dummy3_13036; // 0f19:3ea6
db dummy3_13037; // 0f19:3ea7
db dummy3_13038; // 0f19:3ea8
db dummy3_13039; // 0f19:3ea9
db dummy3_1303a; // 0f19:3eaa
db dummy3_1303b; // 0f19:3eab
db unk_2161c; // 0f19:3eac
db dummy3_1303d;
db unk_2161e; // 0f19:3eae
db dummy3_1303f;
db unk_21620; // 0f19:3eb0
db dummy3_13041;
dw word_21622; // 0f19:3eb2
db dummy3_13044[32]; // 0f19:3eb4
db dummy3_13064[32]; // 0f19:3ed4
db dummy3_13084[32]; // 0f19:3ef4
db dummy3_130a4[32]; // 0f19:3f14
db dummy3_130c4[32]; // 0f19:3f34
db dummy3_130e4[32]; // 0f19:3f54
db dummy3_13104[32]; // 0f19:3f74
db dummy3_13124[32]; // 0f19:3f94
db dummy3_13144[32]; // 0f19:3fb4
db dummy3_13164[32]; // 0f19:3fd4
db dummy3_13184[32]; // 0f19:3ff4
db dummy3_131a4[32]; // 0f19:4014
db dummy3_131c4[32]; // 0f19:4034
db dummy3_131e4[32]; // 0f19:4054
db dummy3_13204[32]; // 0f19:4074
db dummy3_13224[32]; // 0f19:4094
db dummy3_13244[32]; // 0f19:40b4
db dummy3_13264[32]; // 0f19:40d4
db dummy3_13284[32]; // 0f19:40f4
db dummy3_132a4[32]; // 0f19:4114
db dummy3_132c4[32]; // 0f19:4134
db dummy3_132e4[32]; // 0f19:4154
db dummy3_13304[32]; // 0f19:4174
db dummy3_13324[32]; // 0f19:4194
db dummy3_13344[32]; // 0f19:41b4
db dummy3_13364[32]; // 0f19:41d4
db dummy3_13384[32]; // 0f19:41f4
db dummy3_133a4[32]; // 0f19:4214
db dummy3_133c4[32]; // 0f19:4234
db dummy3_133e4[32]; // 0f19:4254
db dummy3_13404[32]; // 0f19:4274
db dummy3_13424[32]; // 0f19:4294
db dummy3_13444[32]; // 0f19:42b4
db dummy3_13464[32]; // 0f19:42d4
db dummy3_13484[32]; // 0f19:42f4
db dummy3_134a4[32]; // 0f19:4314
db dummy3_134c4[32]; // 0f19:4334
db dummy3_134e4[32]; // 0f19:4354
db dummy3_13504[32]; // 0f19:4374
db dummy3_13524[32]; // 0f19:4394
db dummy3_13544[32]; // 0f19:43b4
db dummy3_13564[32]; // 0f19:43d4
db dummy3_13584[32]; // 0f19:43f4
db dummy3_135a4[32]; // 0f19:4414
db dummy3_135c4[32]; // 0f19:4434
db dummy3_135e4[32]; // 0f19:4454
db dummy3_13604[32]; // 0f19:4474
db dummy3_13624[32]; // 0f19:4494
db dummy3_13644[32]; // 0f19:44b4
db dummy3_13664[32]; // 0f19:44d4
db dummy3_13684[32]; // 0f19:44f4
db dummy3_136a4[32]; // 0f19:4514
db dummy3_136c4[32]; // 0f19:4534
db dummy3_136e4[32]; // 0f19:4554
db dummy3_13704[32]; // 0f19:4574
db dummy3_13724[32]; // 0f19:4594
db byte_21d24; // 0f19:45b4
db dummy3_13745;
db byte_21d26; // 0f19:45b6
db dummy3_13747[32]; // 0f19:45b7
db dummy3_13767[32]; // 0f19:45d7
db dummy3_13787[32]; // 0f19:45f7
db dummy3_137a7[32]; // 0f19:4617
db dummy3_137c7[32]; // 0f19:4637
db dummy3_137e7[32]; // 0f19:4657
db dummy3_13807[32]; // 0f19:4677
db dummy3_13827[32]; // 0f19:4697
db dummy3_13847[32]; // 0f19:46b7
db dummy3_13867[32]; // 0f19:46d7
db dummy3_13887[32]; // 0f19:46f7
db dummy3_138a7[32]; // 0f19:4717
db dummy3_138c7[32]; // 0f19:4737
db dummy3_138e7; // 0f19:4757
db dummy3_138e8; // 0f19:4758
db dummy3_138e9; // 0f19:4759
db dummy3_138ea; // 0f19:475a
db dummy3_138eb; // 0f19:475b
db dummy3_138ec; // 0f19:475c
db dummy3_138ed; // 0f19:475d
db dummy3_138ee; // 0f19:475e
db dummy3_138ef; // 0f19:475f
db dummy3_138f0; // 0f19:4760
db dummy3_138f1; // 0f19:4761
db dummy3_138f2; // 0f19:4762
db dummy3_138f3; // 0f19:4763
dw word_21ed4; // 0f19:4764
dw word_21ed6; // 0f19:4766
dw word_21ed8; // 0f19:4768
dw word_21eda; // 0f19:476a
db dummy3_138fc[32]; // 0f19:476c
db dummy3_1391c[32]; // 0f19:478c
db dummy3_1393c[32]; // 0f19:47ac
db dummy3_1395c[32]; // 0f19:47cc
db dummy3_1397c[32]; // 0f19:47ec
db dummy3_1399c[32]; // 0f19:480c
db dummy3_139bc[32]; // 0f19:482c
db dummy3_139dc[32]; // 0f19:484c
db dummy3_139fc[32]; // 0f19:486c
db dummy3_13a1c[32]; // 0f19:488c
db dummy3_13a3c[32]; // 0f19:48ac
db dummy3_13a5c; // 0f19:48cc
db dummy3_13a5d;
db dummy3_13a5e; // 0f19:48ce
db dummy3_13a5f;
db dummy3_13a60; // 0f19:48d0
db dummy3_13a61; // 0f19:48d1
db dummy3_13a62; // 0f19:48d2
db dummy3_13a63; // 0f19:48d3
db dummy3_13a64; // 0f19:48d4
db dummy3_13a65; // 0f19:48d5
db dummy3_13a66; // 0f19:48d6
db dummy3_13a67; // 0f19:48d7
db dummy3_13a68; // 0f19:48d8
db dummy3_13a69;
db dummy3_13a6a; // 0f19:48da
db dummy3_13a6b;
db dummy3_13a6c; // 0f19:48dc
db dummy3_13a6d;
dw off_2204e; // 0f19:48de
db dummy3_13a70[32]; // 0f19:48e0
db dummy3_13a90[32]; // 0f19:4900
db dummy3_13ab0[32]; // 0f19:4920
db dummy3_13ad0[32]; // 0f19:4940
db dummy3_13af0; // 0f19:4960
db dummy3_13af1; // 0f19:4961
db dummy3_13af2; // 0f19:4962
db dummy3_13af3;
db dummy3_13af4; // 0f19:4964
db dummy3_13af5; // 0f19:4965
db dummy3_13af6; // 0f19:4966
db dummy3_13af7;
db dummy3_13af8; // 0f19:4968
db dummy3_13af9; // 0f19:4969
db dummy3_13afa; // 0f19:496a
db dummy3_13afb;
db dummy3_13afc; // 0f19:496c
db dummy3_13afd; // 0f19:496d
db dummy3_13afe; // 0f19:496e
db dummy3_13aff;
db dummy3_13b00; // 0f19:4970
db dummy3_13b01; // 0f19:4971
db dummy3_13b02;
db dummy3_13b03; // 0f19:4973
db dummy3_13b04;
db dummy3_13b05;
db dummy3_13b06;
db dummy3_13b07;
dw word_220e8; // 0f19:4978
db dummy3_13b0a;
db dummy3_13b0b;
db dummy3_13b0c;
db dummy3_13b0d;
dw word_220ee; // 0f19:497e
db dummy3_13b10[32]; // 0f19:4980
db dummy3_13b30[32]; // 0f19:49a0
db dummy3_13b50[32]; // 0f19:49c0
db dummy3_13b70[32]; // 0f19:49e0
db dummy3_13b90[32]; // 0f19:4a00
db dummy3_13bb0[32]; // 0f19:4a20
db dummy3_13bd0[32]; // 0f19:4a40
db dummy3_13bf0[32]; // 0f19:4a60
db dummy3_13c10[32]; // 0f19:4a80
db dummy3_13c30[32]; // 0f19:4aa0
db dummy3_13c50[32]; // 0f19:4ac0
db dummy3_13c70[32]; // 0f19:4ae0
db dummy3_13c90[32]; // 0f19:4b00
db dummy3_13cb0[32]; // 0f19:4b20
db dummy3_13cd0[32]; // 0f19:4b40
db dummy3_13cf0[32]; // 0f19:4b60
db dummy3_13d10[32]; // 0f19:4b80
db dummy3_13d30[32]; // 0f19:4ba0
db dummy3_13d50[32]; // 0f19:4bc0
db dummy3_13d70[32]; // 0f19:4be0
db dummy3_13d90[32]; // 0f19:4c00
db dummy3_13db0[32]; // 0f19:4c20
db dummy3_13dd0[32]; // 0f19:4c40
db dummy3_13df0[32]; // 0f19:4c60
db dummy3_13e10[32]; // 0f19:4c80
db dummy3_13e30[32]; // 0f19:4ca0
db dummy3_13e50[32]; // 0f19:4cc0
db dummy3_13e70[32]; // 0f19:4ce0
db dummy3_13e90[32]; // 0f19:4d00
db dummy3_13eb0[32]; // 0f19:4d20
db dummy3_13ed0[32]; // 0f19:4d40
db dummy3_13ef0[32]; // 0f19:4d60
db dummy3_13f10[32]; // 0f19:4d80
db dummy3_13f30[32]; // 0f19:4da0
db dummy3_13f50[32]; // 0f19:4dc0
db dummy3_13f70[32]; // 0f19:4de0
db dummy3_13f90[32]; // 0f19:4e00
db dummy3_13fb0[32]; // 0f19:4e20
db dummy3_13fd0[32]; // 0f19:4e40
db dummy3_13ff0[32]; // 0f19:4e60
db dummy3_14010[32]; // 0f19:4e80
db dummy3_14030[32]; // 0f19:4ea0
db dummy3_14050[32]; // 0f19:4ec0
db dummy3_14070[32]; // 0f19:4ee0
db dummy3_14090[32]; // 0f19:4f00
db dummy3_140b0[32]; // 0f19:4f20
db dummy3_140d0[32]; // 0f19:4f40
db dummy3_140f0[32]; // 0f19:4f60
db dummy3_14110[32]; // 0f19:4f80
db dummy3_14130[32]; // 0f19:4fa0
db dummy3_14150[32]; // 0f19:4fc0
db dummy3_14170[32]; // 0f19:4fe0
db dummy3_14190[32]; // 0f19:5000
db dummy3_141b0[32]; // 0f19:5020
db dummy3_141d0[32]; // 0f19:5040
db dummy3_141f0[32]; // 0f19:5060
db dummy3_14210[32]; // 0f19:5080
db dummy3_14230[32]; // 0f19:50a0
db dummy3_14250[32]; // 0f19:50c0
db dummy3_14270[32]; // 0f19:50e0
db dummy3_14290[32]; // 0f19:5100
db dummy3_142b0[32]; // 0f19:5120
db dummy3_142d0[32]; // 0f19:5140
db dummy3_142f0[32]; // 0f19:5160
db dummy3_14310[32]; // 0f19:5180
db dummy3_14330[32]; // 0f19:51a0
db dummy3_14350[32]; // 0f19:51c0
db dummy3_14370[32]; // 0f19:51e0
db dummy3_14390[32]; // 0f19:5200
db dummy3_143b0[32]; // 0f19:5220
db dummy3_143d0[32]; // 0f19:5240
db dummy3_143f0[32]; // 0f19:5260
db dummy3_14410[32]; // 0f19:5280
db dummy3_14430[32]; // 0f19:52a0
db dummy3_14450[32]; // 0f19:52c0
db dummy3_14470[32]; // 0f19:52e0
db dummy3_14490[32]; // 0f19:5300
db dummy3_144b0[32]; // 0f19:5320
db dummy3_144d0[32]; // 0f19:5340
db dummy3_144f0[32]; // 0f19:5360
db dummy3_14510[32]; // 0f19:5380
db dummy3_14530[32]; // 0f19:53a0
db dummy3_14550[32]; // 0f19:53c0
db dummy3_14570[32]; // 0f19:53e0
db dummy3_14590[32]; // 0f19:5400
db dummy3_145b0[32]; // 0f19:5420
db dummy3_145d0[32]; // 0f19:5440
db dummy3_145f0[32]; // 0f19:5460
db dummy3_14610[32]; // 0f19:5480
db dummy3_14630[32]; // 0f19:54a0
db dummy3_14650[32]; // 0f19:54c0
db dummy3_14670[32]; // 0f19:54e0
db dummy3_14690[32]; // 0f19:5500
db dummy3_146b0[32]; // 0f19:5520
db dummy3_146d0[32]; // 0f19:5540
db dummy3_146f0[32]; // 0f19:5560
db dummy3_14710[32]; // 0f19:5580
db dummy3_14730[32]; // 0f19:55a0
db dummy3_14750[32]; // 0f19:55c0
db dummy3_14770[32]; // 0f19:55e0
db dummy3_14790[32]; // 0f19:5600
db dummy3_147b0[32]; // 0f19:5620
db dummy3_147d0[32]; // 0f19:5640
db dummy3_147f0[32]; // 0f19:5660
db dummy3_14810[32]; // 0f19:5680
db dummy3_14830[32]; // 0f19:56a0
db dummy3_14850[32]; // 0f19:56c0
db dummy3_14870[32]; // 0f19:56e0
db dummy3_14890[32]; // 0f19:5700
db dummy3_148b0[32]; // 0f19:5720
db dummy3_148d0[32]; // 0f19:5740
db dummy3_148f0[32]; // 0f19:5760
db dummy3_14910[32]; // 0f19:5780
db dummy3_14930[32]; // 0f19:57a0
db dummy3_14950[32]; // 0f19:57c0
db dummy3_14970[32]; // 0f19:57e0
db dummy3_14990[32]; // 0f19:5800
db dummy3_149b0[32]; // 0f19:5820
db dummy3_149d0[32]; // 0f19:5840
db dummy3_149f0[32]; // 0f19:5860
db dummy3_14a10[32]; // 0f19:5880
db dummy3_14a30[32]; // 0f19:58a0
db dummy3_14a50[32]; // 0f19:58c0
db dummy3_14a70[32]; // 0f19:58e0
db dummy3_14a90[32]; // 0f19:5900
db dummy3_14ab0[32]; // 0f19:5920
db dummy3_14ad0[32]; // 0f19:5940
db dummy3_14af0[32]; // 0f19:5960
db dummy3_14b10[32]; // 0f19:5980
db dummy3_14b30[32]; // 0f19:59a0
db dummy3_14b50[32]; // 0f19:59c0
db dummy3_14b70[32]; // 0f19:59e0
db dummy3_14b90[32]; // 0f19:5a00
db dummy3_14bb0[32]; // 0f19:5a20
db dummy3_14bd0;
db dummy3_14bd1;
db dummy3_14bd2;
db dummy3_14bd3;
db dummy3_14bd4;
db dummy3_14bd5;
db dummy3_14bd6;
db dummy3_14bd7;
db dummy3_14bd8;
db dummy3_14bd9;
db dummy3_14bda;
db dummy3_14bdb;
dw word_231bc; // 0f19:5a4c
db dummy3_14bde; // 0f19:5a4e
db dummy3_14bdf;
db dummy3_14be0; // 0f19:5a50
db dummy3_14be1;
dw word_231c2; // 0f19:5a52
db dummy3_14be4[32]; // 0f19:5a54
db dummy3_14c04[32]; // 0f19:5a74
db dummy3_14c24[32]; // 0f19:5a94
db dummy3_14c44[32]; // 0f19:5ab4
db dummy3_14c64[32]; // 0f19:5ad4
db dummy3_14c84[32]; // 0f19:5af4
db dummy3_14ca4[32]; // 0f19:5b14
db dummy3_14cc4[32]; // 0f19:5b34
db dummy3_14ce4[32]; // 0f19:5b54
db dummy3_14d04[32]; // 0f19:5b74
db dummy3_14d24[32]; // 0f19:5b94
db dummy3_14d44[32]; // 0f19:5bb4
db dummy3_14d64[32]; // 0f19:5bd4
db dummy3_14d84[32]; // 0f19:5bf4
db dummy3_14da4[32]; // 0f19:5c14
db dummy3_14dc4[32]; // 0f19:5c34
db dummy3_14de4[32]; // 0f19:5c54
db dummy3_14e04[32]; // 0f19:5c74
db dummy3_14e24[32]; // 0f19:5c94
db dummy3_14e44[32]; // 0f19:5cb4
db dummy3_14e64[32]; // 0f19:5cd4
db dummy3_14e84[32]; // 0f19:5cf4
db dummy3_14ea4[32]; // 0f19:5d14
db dummy3_14ec4[32]; // 0f19:5d34
db dummy3_14ee4[32]; // 0f19:5d54
db dummy3_14f04[32]; // 0f19:5d74
db dummy3_14f24[32]; // 0f19:5d94
db dummy3_14f44[32]; // 0f19:5db4
db dummy3_14f64[32]; // 0f19:5dd4
db dummy3_14f84[32]; // 0f19:5df4
db dummy3_14fa4[32]; // 0f19:5e14
db dummy3_14fc4[32]; // 0f19:5e34
db dummy3_14fe4[32]; // 0f19:5e54
db dummy3_15004[32]; // 0f19:5e74
db dummy3_15024[32]; // 0f19:5e94
db dummy3_15044[32]; // 0f19:5eb4
db dummy3_15064[32]; // 0f19:5ed4
db dummy3_15084[32]; // 0f19:5ef4
db dummy3_150a4[32]; // 0f19:5f14
db dummy3_150c4[32]; // 0f19:5f34
db dummy3_150e4[32]; // 0f19:5f54
db dummy3_15104[32]; // 0f19:5f74
db dummy3_15124[32]; // 0f19:5f94
db dummy3_15144[32]; // 0f19:5fb4
db dummy3_15164[32]; // 0f19:5fd4
db dummy3_15184[32]; // 0f19:5ff4
db dummy3_151a4[32]; // 0f19:6014
db dummy3_151c4[32]; // 0f19:6034
db dummy3_151e4[32]; // 0f19:6054
db dummy3_15204[32]; // 0f19:6074
db dummy3_15224[32]; // 0f19:6094
db dummy3_15244[32]; // 0f19:60b4
db dummy3_15264[32]; // 0f19:60d4
db dummy3_15284[32]; // 0f19:60f4
db dummy3_152a4[32]; // 0f19:6114
db dummy3_152c4[32]; // 0f19:6134
db dummy3_152e4[32]; // 0f19:6154
db dummy3_15304[32]; // 0f19:6174
db dummy3_15324[32]; // 0f19:6194
db dummy3_15344[32]; // 0f19:61b4
db dummy3_15364[32]; // 0f19:61d4
db dummy3_15384[32]; // 0f19:61f4
db dummy3_153a4[32]; // 0f19:6214
db dummy3_153c4[32]; // 0f19:6234
db dummy3_153e4[32]; // 0f19:6254
db dummy3_15404[32]; // 0f19:6274
db dummy3_15424[32]; // 0f19:6294
db dummy3_15444[32]; // 0f19:62b4
db dummy3_15464[32]; // 0f19:62d4
db dummy3_15484[32]; // 0f19:62f4
db dummy3_154a4[32]; // 0f19:6314
db dummy3_154c4[32]; // 0f19:6334
db dummy3_154e4[32]; // 0f19:6354
db dummy3_15504[32]; // 0f19:6374
db dummy3_15524[32]; // 0f19:6394
db dummy3_15544[32]; // 0f19:63b4
db dummy3_15564[32]; // 0f19:63d4
db dummy3_15584[32]; // 0f19:63f4
db dummy3_155a4[32]; // 0f19:6414
db dummy3_155c4[32]; // 0f19:6434
db dummy3_155e4[32]; // 0f19:6454
db dummy3_15604[32]; // 0f19:6474
db dummy3_15624[32]; // 0f19:6494
db dummy3_15644[32]; // 0f19:64b4
db dummy3_15664[32]; // 0f19:64d4
db dummy3_15684[32]; // 0f19:64f4
db dummy3_156a4[32]; // 0f19:6514
db dummy3_156c4[32]; // 0f19:6534
db dummy3_156e4[32]; // 0f19:6554
db dummy3_15704[32]; // 0f19:6574
db dummy3_15724[32]; // 0f19:6594
db dummy3_15744[32]; // 0f19:65b4
db dummy3_15764[32]; // 0f19:65d4
db dummy3_15784[32]; // 0f19:65f4
db dummy3_157a4[32]; // 0f19:6614
db dummy3_157c4[32]; // 0f19:6634
db dummy3_157e4[32]; // 0f19:6654
db dummy3_15804[32]; // 0f19:6674
db dummy3_15824[32]; // 0f19:6694
db dummy3_15844[32]; // 0f19:66b4
db dummy3_15864[32]; // 0f19:66d4
db dummy3_15884[32]; // 0f19:66f4
db dummy3_158a4[32]; // 0f19:6714
db dummy3_158c4[32]; // 0f19:6734
db dummy3_158e4[32]; // 0f19:6754
db dummy3_15904[32]; // 0f19:6774
db dummy3_15924[32]; // 0f19:6794
db dummy3_15944[32]; // 0f19:67b4
db dummy3_15964[32]; // 0f19:67d4
db dummy3_15984[32]; // 0f19:67f4
db dummy3_159a4[32]; // 0f19:6814
db dummy3_159c4[32]; // 0f19:6834
db dummy3_159e4[32]; // 0f19:6854
db dummy3_15a04[32]; // 0f19:6874
db dummy3_15a24[32]; // 0f19:6894
db dummy3_15a44[32]; // 0f19:68b4
db dummy3_15a64[32]; // 0f19:68d4
db dummy3_15a84[32]; // 0f19:68f4
db dummy3_15aa4[32]; // 0f19:6914
db dummy3_15ac4[32]; // 0f19:6934
db dummy3_15ae4[32]; // 0f19:6954
db dummy3_15b04[32]; // 0f19:6974
db dummy3_15b24[32]; // 0f19:6994
db dummy3_15b44[32]; // 0f19:69b4
db dummy3_15b64[32]; // 0f19:69d4
db dummy3_15b84[32]; // 0f19:69f4
db dummy3_15ba4[32]; // 0f19:6a14
db dummy3_15bc4[32]; // 0f19:6a34
db dummy3_15be4[32]; // 0f19:6a54
db dummy3_15c04[32]; // 0f19:6a74
db dummy3_15c24[32]; // 0f19:6a94
db dummy3_15c44[32]; // 0f19:6ab4
db dummy3_15c64[32]; // 0f19:6ad4
db dummy3_15c84[32]; // 0f19:6af4
db dummy3_15ca4[32]; // 0f19:6b14
db dummy3_15cc4[32]; // 0f19:6b34
db dummy3_15ce4[32]; // 0f19:6b54
db dummy3_15d04[32]; // 0f19:6b74
db dummy3_15d24[32]; // 0f19:6b94
db dummy3_15d44[32]; // 0f19:6bb4
db dummy3_15d64[32]; // 0f19:6bd4
db dummy3_15d84[32]; // 0f19:6bf4
db dummy3_15da4[32]; // 0f19:6c14
db dummy3_15dc4[32]; // 0f19:6c34
db dummy3_15de4[32]; // 0f19:6c54
db dummy3_15e04[32]; // 0f19:6c74
db dummy3_15e24[32]; // 0f19:6c94
db dummy3_15e44[32]; // 0f19:6cb4
db dummy3_15e64[32]; // 0f19:6cd4
db dummy3_15e84[32]; // 0f19:6cf4
db dummy3_15ea4[32]; // 0f19:6d14
db dummy3_15ec4[32]; // 0f19:6d34
db dummy3_15ee4[32]; // 0f19:6d54
db dummy3_15f04[32]; // 0f19:6d74
db dummy3_15f24[32]; // 0f19:6d94
db dummy3_15f44[32]; // 0f19:6db4
db dummy3_15f64[32]; // 0f19:6dd4
db dummy3_15f84[32]; // 0f19:6df4
db dummy3_15fa4[32]; // 0f19:6e14
db dummy3_15fc4[32]; // 0f19:6e34
db dummy3_15fe4[32]; // 0f19:6e54
db dummy3_16004[32]; // 0f19:6e74
db dummy3_16024[32]; // 0f19:6e94
db dummy3_16044[32]; // 0f19:6eb4
db dummy3_16064[32]; // 0f19:6ed4
db dummy3_16084[32]; // 0f19:6ef4
db dummy3_160a4[32]; // 0f19:6f14
db dummy3_160c4[32]; // 0f19:6f34
db dummy3_160e4[32]; // 0f19:6f54
db dummy3_16104[32]; // 0f19:6f74
db dummy3_16124[32]; // 0f19:6f94
db dummy3_16144[32]; // 0f19:6fb4
db dummy3_16164[32]; // 0f19:6fd4
db dummy3_16184[32]; // 0f19:6ff4
db dummy3_161a4[32]; // 0f19:7014
db dummy3_161c4[32]; // 0f19:7034
db dummy3_161e4[32]; // 0f19:7054
db dummy3_16204[32]; // 0f19:7074
db dummy3_16224[32]; // 0f19:7094
db dummy3_16244[32]; // 0f19:70b4
db dummy3_16264[32]; // 0f19:70d4
db dummy3_16284[32]; // 0f19:70f4
db dummy3_162a4[32]; // 0f19:7114
db dummy3_162c4[32]; // 0f19:7134
db dummy3_162e4[32]; // 0f19:7154
db dummy3_16304[32]; // 0f19:7174
db dummy3_16324[32]; // 0f19:7194
db dummy3_16344[32]; // 0f19:71b4
db dummy3_16364[32]; // 0f19:71d4
db dummy3_16384[32]; // 0f19:71f4
db dummy3_163a4[32]; // 0f19:7214
db dummy3_163c4[32]; // 0f19:7234
db dummy3_163e4[32]; // 0f19:7254
db dummy3_16404[32]; // 0f19:7274
db dummy3_16424[32]; // 0f19:7294
db dummy3_16444[32]; // 0f19:72b4
db dummy3_16464[32]; // 0f19:72d4
db dummy3_16484[32]; // 0f19:72f4
db dummy3_164a4; // 0f19:7314
db dummy3_164a5; // 0f19:7315
db dummy3_164a6; // 0f19:7316
db dummy3_164a7; // 0f19:7317
db dummy3_164a8; // 0f19:7318
db dummy3_164a9; // 0f19:7319
db dummy3_164aa; // 0f19:731a
db dummy3_164ab; // 0f19:731b
db dummy3_164ac; // 0f19:731c
db dummy3_164ad; // 0f19:731d
db dummy3_164ae; // 0f19:731e
db dummy3_164af; // 0f19:731f
dw word_24a90; // 0f19:7320
dw word_24a92; // 0f19:7322
dw word_24a94; // 0f19:7324
dw word_24a96; // 0f19:7326
db dummy3_164b8[32]; // 0f19:7328
db dummy3_164d8[32]; // 0f19:7348
db dummy3_164f8[32]; // 0f19:7368
db dummy3_16518[32]; // 0f19:7388
db dummy3_16538[32]; // 0f19:73a8
db dummy3_16558[32]; // 0f19:73c8
db dummy3_16578[32]; // 0f19:73e8
db dummy3_16598[32]; // 0f19:7408
db dummy3_165b8[32]; // 0f19:7428
db dummy3_165d8[32]; // 0f19:7448
db dummy3_165f8[32]; // 0f19:7468
db dummy3_16618[32]; // 0f19:7488
db dummy3_16638[32]; // 0f19:74a8
db dummy3_16658[32]; // 0f19:74c8
db dummy3_16678[32]; // 0f19:74e8
db dummy3_16698[32]; // 0f19:7508
db dummy3_166b8[32]; // 0f19:7528
db dummy3_166d8[32]; // 0f19:7548
db dummy3_166f8[32]; // 0f19:7568
db dummy3_16718[32]; // 0f19:7588
db dummy3_16738[32]; // 0f19:75a8
db dummy3_16758[32]; // 0f19:75c8
db dummy3_16778[32]; // 0f19:75e8
db dummy3_16798[32]; // 0f19:7608
db dummy3_167b8[32]; // 0f19:7628
db dummy3_167d8[32]; // 0f19:7648
db dummy3_167f8[32]; // 0f19:7668
db dummy3_16818[32]; // 0f19:7688
db dummy3_16838[32]; // 0f19:76a8
db dummy3_16858[32]; // 0f19:76c8
db dummy3_16878[32]; // 0f19:76e8
db dummy3_16898[32]; // 0f19:7708
db dummy3_168b8[32]; // 0f19:7728
db dummy3_168d8[32]; // 0f19:7748
db dummy3_168f8[32]; // 0f19:7768
db dummy3_16918[32]; // 0f19:7788
db dummy3_16938[32]; // 0f19:77a8
db dummy3_16958;
db dummy3_16959;
db dummy3_1695a;
db dummy3_1695b;
db dummy3_1695c;
db dummy3_1695d;
db dummy3_1695e;
db dummy3_1695f;
db dummy3_16960;
db dummy3_16961;
db dummy3_16962;
db dummy3_16963;
db dummy3_16964;
db dummy3_16965;
db dummy3_16966;
db dummy3_16967;
dw word_24f48; // 0f19:77d8
dw word_24f4a; // 0f19:77da
dw word_24f4c; // 0f19:77dc
dw word_24f4e; // 0f19:77de
dw word_24f50; // 0f19:77e0
db dummy3_16972; // 0f19:77e2
db dummy3_16973; // 0f19:77e3
db dummy3_16974; // 0f19:77e4
db dummy3_16975; // 0f19:77e5
db dummy3_16976; // 0f19:77e6
db dummy3_16977; // 0f19:77e7
db dummy3_16978; // 0f19:77e8
db dummy3_16979; // 0f19:77e9
db dummy3_1697a; // 0f19:77ea
db dummy3_1697b; // 0f19:77eb
db dummy3_1697c; // 0f19:77ec
db dummy3_1697d; // 0f19:77ed
db dummy3_1697e; // 0f19:77ee
db dummy3_1697f; // 0f19:77ef
db dummy3_16980; // 0f19:77f0
db dummy3_16981;
dw word_24f62; // 0f19:77f2
db dummy3_16984;
db dummy3_16985;
dd dword_24f66; // 0f19:77f6
dd dword_24f6a; // 0f19:77fa
db byte_24f6e; // 0f19:77fe
db dummy3_1698f;
dw word_24f70; // 0f19:7800
dw word_24f72; // 0f19:7802
db dummy3_16994;
db dummy3_16995;
dw word_24f76; // 0f19:7806
db byte_24f78; // 0f19:7808
db dummy3_16999; // 0f19:7809
dw seg_24f7a; // 0f19:780a
db byte_24f7c; // 0f19:780c
db dummy3_1699d; // 0f19:780d
dw seg_24f7e; // 0f19:780e
db dummy3_169a0[32]; // 0f19:7810
db dummy3_169c0[32]; // 0f19:7830
db dummy3_169e0; // 0f19:7850
db dummy3_169e1;
db dummy3_169e2;
db dummy3_169e3;
dw word_24fc4; // 0f19:7854
dw word_24fc6; // 0f19:7856
db byte_24fc8; // 0f19:7858
db dummy3_169e9;
dw word_24fca; // 0f19:785a
db dummy3_169ec[32]; // 0f19:785c
db dummy3_16a0c[32]; // 0f19:787c
db dummy3_16a2c[32]; // 0f19:789c
db dummy3_16a4c[32]; // 0f19:78bc
db dummy3_16a6c[32]; // 0f19:78dc
db dummy3_16a8c[32]; // 0f19:78fc
db dummy3_16aac[32]; // 0f19:791c
db dummy3_16acc[32]; // 0f19:793c
db dummy3_16aec[32]; // 0f19:795c
db dummy3_16b0c[32]; // 0f19:797c
db dummy3_16b2c[32]; // 0f19:799c
db dummy3_16b4c[32]; // 0f19:79bc
db dummy3_16b6c[32]; // 0f19:79dc
db dummy3_16b8c[32]; // 0f19:79fc
db dummy3_16bac[32]; // 0f19:7a1c
db dummy3_16bcc[32]; // 0f19:7a3c
db dummy3_16bec[32]; // 0f19:7a5c
db dummy3_16c0c[32]; // 0f19:7a7c
db dummy3_16c2c[32]; // 0f19:7a9c
db dummy3_16c4c[32]; // 0f19:7abc
db dummy3_16c6c[32]; // 0f19:7adc
db dummy3_16c8c[32]; // 0f19:7afc
db dummy3_16cac[32]; // 0f19:7b1c
db dummy3_16ccc[32]; // 0f19:7b3c
db dummy3_16cec[32]; // 0f19:7b5c
db dummy3_16d0c[32]; // 0f19:7b7c
db dummy3_16d2c[32]; // 0f19:7b9c
db dummy3_16d4c[32]; // 0f19:7bbc
db dummy3_16d6c[32]; // 0f19:7bdc
db dummy3_16d8c[32]; // 0f19:7bfc
db dummy3_16dac[32]; // 0f19:7c1c
db dummy3_16dcc[32]; // 0f19:7c3c
db dummy3_16dec[32]; // 0f19:7c5c
db dummy3_16e0c[32]; // 0f19:7c7c
db dummy3_16e2c[32]; // 0f19:7c9c
db dummy3_16e4c[32]; // 0f19:7cbc
db dummy3_16e6c[32]; // 0f19:7cdc
db dummy3_16e8c[32]; // 0f19:7cfc
db dummy3_16eac[32]; // 0f19:7d1c
db dummy3_16ecc[32]; // 0f19:7d3c
db dummy3_16eec[32]; // 0f19:7d5c
db dummy3_16f0c[32]; // 0f19:7d7c
db dummy3_16f2c[32]; // 0f19:7d9c
db dummy3_16f4c[32]; // 0f19:7dbc
db dummy3_16f6c[32]; // 0f19:7ddc
db dummy3_16f8c; // 0f19:7dfc
db dummy3_16f8d; // 0f19:7dfd
db dummy3_16f8e; // 0f19:7dfe
db dummy3_16f8f; // 0f19:7dff
db dummy3_16f90; // 0f19:7e00
db dummy3_16f91; // 0f19:7e01
db dummy3_16f92; // 0f19:7e02
db dummy3_16f93; // 0f19:7e03
db dummy3_16f94; // 0f19:7e04
db dummy3_16f95; // 0f19:7e05
db dummy3_16f96; // 0f19:7e06
db dummy3_16f97; // 0f19:7e07
db dummy3_16f98; // 0f19:7e08
db dummy3_16f99; // 0f19:7e09
db dummy3_16f9a; // 0f19:7e0a
db dummy3_16f9b; // 0f19:7e0b
db dummy3_16f9c; // 0f19:7e0c
db dummy3_16f9d; // 0f19:7e0d
db dummy3_16f9e; // 0f19:7e0e
db dummy3_16f9f; // 0f19:7e0f
db dummy3_16fa0; // 0f19:7e10
db dummy3_16fa1; // 0f19:7e11
db dummy3_16fa2; // 0f19:7e12
db dummy3_16fa3; // 0f19:7e13
db dummy3_16fa4; // 0f19:7e14
db dummy3_16fa5; // 0f19:7e15
dw word_25586; // 0f19:7e16
dw word_25588; // 0f19:7e18
dw word_2558a; // 0f19:7e1a
dw word_2558c; // 0f19:7e1c
dw word_2558e; // 0f19:7e1e
dw word_25590; // 0f19:7e20
dw word_25592; // 0f19:7e22
db dummy3_16fb4[32]; // 0f19:7e24
db dummy3_16fd4[32]; // 0f19:7e44
db dummy3_16ff4[32]; // 0f19:7e64
db dummy3_17014[32]; // 0f19:7e84
db dummy3_17034[32]; // 0f19:7ea4
db dummy3_17054[32]; // 0f19:7ec4
db dummy3_17074[32]; // 0f19:7ee4
db dummy3_17094[32]; // 0f19:7f04
db dummy3_170b4; // 0f19:7f24
db dummy3_170b5;
db dummy3_170b6;
db dummy3_170b7;
db dummy3_170b8;
db dummy3_170b9;
db dummy3_170ba;
db dummy3_170bb;
db dummy3_170bc;
db dummy3_170bd;
db dummy3_170be;
db dummy3_170bf;
db dummy3_170c0;
db dummy3_170c1;
db byte_256a2; // 0f19:7f32
db dummy3_170c3;
db dummy3_170c4;
db dummy3_170c5;
db dummy3_170c6;
db dummy3_170c7;
db dummy3_170c8;
db dummy3_170c9;
db dummy3_170ca;
db dummy3_170cb;
dw word_256ac; // 0f19:7f3c
db afrancaisqb; // 0f19:7f3e
db dummy3_170cf; // 0f19:7f3f
db dummy3_170d0; // 0f19:7f40
db dummy3_170d1; // 0f19:7f41
db dummy3_170d2; // 0f19:7f42
db dummy3_170d3; // 0f19:7f43
db dummy3_170d4; // 0f19:7f44
db dummy3_170d5; // 0f19:7f45
db dummy3_170d6; // 0f19:7f46
db dummy3_170d7; // 0f19:7f47
db dummy3_170d8; // 0f19:7f48
db dummy3_170d9;
db aanglaisqb; // 0f19:7f4a
db dummy3_170db; // 0f19:7f4b
db dummy3_170dc; // 0f19:7f4c
db dummy3_170dd; // 0f19:7f4d
db dummy3_170de; // 0f19:7f4e
db dummy3_170df; // 0f19:7f4f
db dummy3_170e0; // 0f19:7f50
db dummy3_170e1; // 0f19:7f51
db dummy3_170e2; // 0f19:7f52
db dummy3_170e3; // 0f19:7f53
db dummy3_170e4;
db aespagnolqb; // 0f19:7f55
db dummy3_170e6; // 0f19:7f56
db dummy3_170e7; // 0f19:7f57
db dummy3_170e8; // 0f19:7f58
db dummy3_170e9; // 0f19:7f59
db dummy3_170ea; // 0f19:7f5a
db dummy3_170eb; // 0f19:7f5b
db dummy3_170ec; // 0f19:7f5c
db dummy3_170ed; // 0f19:7f5d
db dummy3_170ee; // 0f19:7f5e
db dummy3_170ef; // 0f19:7f5f
db dummy3_170f0;
db adeutshqb; // 0f19:7f61
db dummy3_170f2; // 0f19:7f62
db dummy3_170f3; // 0f19:7f63
db dummy3_170f4; // 0f19:7f64
db dummy3_170f5; // 0f19:7f65
db dummy3_170f6; // 0f19:7f66
db dummy3_170f7; // 0f19:7f67
db dummy3_170f8; // 0f19:7f68
db dummy3_170f9; // 0f19:7f69
db dummy3_170fa;
db aitalienqb; // 0f19:7f6b
db dummy3_170fc; // 0f19:7f6c
db dummy3_170fd; // 0f19:7f6d
db dummy3_170fe; // 0f19:7f6e
db dummy3_170ff; // 0f19:7f6f
db dummy3_17100; // 0f19:7f70
db dummy3_17101; // 0f19:7f71
db dummy3_17102; // 0f19:7f72
db dummy3_17103; // 0f19:7f73
db dummy3_17104; // 0f19:7f74
db dummy3_17105;
db anamefranqb; // 0f19:7f76
db dummy3_17107; // 0f19:7f77
db dummy3_17108; // 0f19:7f78
db dummy3_17109; // 0f19:7f79
db dummy3_1710a; // 0f19:7f7a
db dummy3_1710b; // 0f19:7f7b
db dummy3_1710c; // 0f19:7f7c
db dummy3_1710d; // 0f19:7f7d
db dummy3_1710e; // 0f19:7f7e
db dummy3_1710f; // 0f19:7f7f
db dummy3_17110; // 0f19:7f80
db dummy3_17111;
db anameanglqb; // 0f19:7f82
db dummy3_17113; // 0f19:7f83
db dummy3_17114; // 0f19:7f84
db dummy3_17115; // 0f19:7f85
db dummy3_17116; // 0f19:7f86
db dummy3_17117; // 0f19:7f87
db dummy3_17118; // 0f19:7f88
db dummy3_17119; // 0f19:7f89
db dummy3_1711a; // 0f19:7f8a
db dummy3_1711b; // 0f19:7f8b
db dummy3_1711c; // 0f19:7f8c
db dummy3_1711d;
db anameespaqb; // 0f19:7f8e
db dummy3_1711f; // 0f19:7f8f
db dummy3_17120; // 0f19:7f90
db dummy3_17121; // 0f19:7f91
db dummy3_17122; // 0f19:7f92
db dummy3_17123; // 0f19:7f93
db dummy3_17124; // 0f19:7f94
db dummy3_17125; // 0f19:7f95
db dummy3_17126; // 0f19:7f96
db dummy3_17127; // 0f19:7f97
db dummy3_17128; // 0f19:7f98
db dummy3_17129;
db anamealleqb; // 0f19:7f9a
db dummy3_1712b; // 0f19:7f9b
db dummy3_1712c; // 0f19:7f9c
db dummy3_1712d; // 0f19:7f9d
db dummy3_1712e; // 0f19:7f9e
db dummy3_1712f; // 0f19:7f9f
db dummy3_17130; // 0f19:7fa0
db dummy3_17131; // 0f19:7fa1
db dummy3_17132; // 0f19:7fa2
db dummy3_17133; // 0f19:7fa3
db dummy3_17134; // 0f19:7fa4
db dummy3_17135;
db anameitalqb; // 0f19:7fa6
db dummy3_17137; // 0f19:7fa7
db dummy3_17138; // 0f19:7fa8
db dummy3_17139; // 0f19:7fa9
db dummy3_1713a; // 0f19:7faa
db dummy3_1713b; // 0f19:7fab
db dummy3_1713c; // 0f19:7fac
db dummy3_1713d; // 0f19:7fad
db dummy3_1713e; // 0f19:7fae
db dummy3_1713f; // 0f19:7faf
db dummy3_17140; // 0f19:7fb0
db dummy3_17141;
db amusicacc1; // 0f19:7fb2
db dummy3_17143; // 0f19:7fb3
db dummy3_17144; // 0f19:7fb4
db dummy3_17145; // 0f19:7fb5
db dummy3_17146; // 0f19:7fb6
db dummy3_17147; // 0f19:7fb7
db dummy3_17148; // 0f19:7fb8
db dummy3_17149; // 0f19:7fb9
db dummy3_1714a; // 0f19:7fba
db dummy3_1714b; // 0f19:7fbb
db dummy3_1714c; // 0f19:7fbc
db dummy3_1714d;
db aqbs; // 0f19:7fbe
db dummy3_1714f; // 0f19:7fbf
db dummy3_17150; // 0f19:7fc0
db dummy3_17151; // 0f19:7fc1
db dummy3_17152;
db aqbs_0; // 0f19:7fc3
db dummy3_17154; // 0f19:7fc4
db dummy3_17155; // 0f19:7fc5
db dummy3_17156; // 0f19:7fc6
db dummy3_17157; // 0f19:7fc7
db dummy3_17158;
db dummy3_17159;
db byte_2573a; // 0f19:7fca
db dummy3_1715b[32]; // 0f19:7fcb
db dummy3_1717b[32]; // 0f19:7feb
db dummy3_1719b[32]; // 0f19:800b
db dummy3_171bb[32]; // 0f19:802b
db dummy3_171db[32]; // 0f19:804b
db dummy3_171fb[32]; // 0f19:806b
db dummy3_1721b; // 0f19:808b
db dummy3_1721c; // 0f19:808c
db dummy3_1721d; // 0f19:808d
db dummy3_1721e; // 0f19:808e
db dummy3_1721f; // 0f19:808f
db dummy3_17220; // 0f19:8090
db dummy3_17221; // 0f19:8091
db dummy3_17222;
db dummy3_17223; // 0f19:8093
db dummy3_17224; // 0f19:8094
db dummy3_17225; // 0f19:8095
db dummy3_17226; // 0f19:8096
db dummy3_17227; // 0f19:8097
db dummy3_17228; // 0f19:8098
db dummy3_17229; // 0f19:8099
db dummy3_1722a; // 0f19:809a
db dummy3_1722b; // 0f19:809b
db dummy3_1722c; // 0f19:809c
db dummy3_1722d; // 0f19:809d
db dummy3_1722e;
db dummy3_1722f;
db byte_25810; // 0f19:80a0
db dummy3_17231[32]; // 0f19:80a1
db dummy3_17251[32]; // 0f19:80c1
db dummy3_17271; // 0f19:80e1
db dummy3_17272; // 0f19:80e2
db dummy3_17273; // 0f19:80e3
db dummy3_17274; // 0f19:80e4
db dummy3_17275; // 0f19:80e5
db dummy3_17276; // 0f19:80e6
db dummy3_17277; // 0f19:80e7
db dummy3_17278; // 0f19:80e8
db dummy3_17279; // 0f19:80e9
db dummy3_1727a; // 0f19:80ea
db dummy3_1727b; // 0f19:80eb
db dummy3_1727c; // 0f19:80ec
db dummy3_1727d; // 0f19:80ed
db dummy3_1727e; // 0f19:80ee
db dummy3_1727f; // 0f19:80ef
db dummy3_17280; // 0f19:80f0
db dummy3_17281; // 0f19:80f1
db dummy3_17282; // 0f19:80f2
db dummy3_17283; // 0f19:80f3
db dummy3_17284; // 0f19:80f4
db dummy3_17285; // 0f19:80f5
db dummy3_17286; // 0f19:80f6
db dummy3_17287; // 0f19:80f7
db dummy3_17288; // 0f19:80f8
db dummy3_17289; // 0f19:80f9
db dummy3_1728a; // 0f19:80fa
db dummy3_1728b;
dw off_2586c; // 0f19:80fc
dw off_2586e; // 0f19:80fe
dw off_25870; // 0f19:8100
dw word_25872; // 0f19:8102
dw word_25874; // 0f19:8104
dw word_25876; // 0f19:8106
dw word_25878; // 0f19:8108
dw word_2587a; // 0f19:810a
dw word_2587c; // 0f19:810c
db byte_2587e; // 0f19:810e
db dummy3_1729f;
db byte_25880; // 0f19:8110
db dummy3_172a1;
dw word_25882; // 0f19:8112
dw word_25884; // 0f19:8114
dd dword_25886; // 0f19:8116
db byte_2588a; // 0f19:811a
db dummy3_172ab;
char acc1[5]; // 0f19:811c
db acc1_0; // 0f19:8121
db dummy3_172b2; // 0f19:8122
db dummy3_172b3; // 0f19:8123
db dummy3_172b4; // 0f19:8124
db dummy3_172b5;
db unk_25896; // 0f19:8126
db dummy3_172b7;
db dummy3_172b8;
db dummy3_172b9;
db dummy3_172ba; // 0f19:812a
db dummy3_172bb; // 0f19:812b
db dummy3_172bc; // 0f19:812c
db dummy3_172bd;
db dummy3_172be; // 0f19:812e
db dummy3_172bf; // 0f19:812f
db dummy3_172c0; // 0f19:8130
db dummy3_172c1;
db dummy3_172c2;
db dummy3_172c3;
db dummy3_172c4;
db dummy3_172c5;
db dummy3_172c6;
db unk_258a7; // 0f19:8137
db dummy3_172c8[32]; // 0f19:8138
db byte_258c8; // 0f19:8158
db byte_258c9; // 0f19:8159
db dummy3_172ea[32]; // 0f19:815a
db dummy3_1730a[32]; // 0f19:817a
db dummy3_1732a[32]; // 0f19:819a
db dummy3_1734a; // 0f19:81ba
db dummy3_1734b; // 0f19:81bb
db dummy3_1734c; // 0f19:81bc
db dummy3_1734d; // 0f19:81bd
db dummy3_1734e; // 0f19:81be
db dummy3_1734f; // 0f19:81bf
db dummy3_17350; // 0f19:81c0
db dummy3_17351; // 0f19:81c1
db dummy3_17352; // 0f19:81c2
db dummy3_17353; // 0f19:81c3
db dummy3_17354; // 0f19:81c4
db dummy3_17355; // 0f19:81c5
db dummy3_17356; // 0f19:81c6
db dummy3_17357; // 0f19:81c7
db dummy3_17358; // 0f19:81c8
db dummy3_17359; // 0f19:81c9
db dummy3_1735a; // 0f19:81ca
db dummy3_1735b; // 0f19:81cb
db dummy3_1735c; // 0f19:81cc
db dummy3_1735d; // 0f19:81cd
db dummy3_1735e; // 0f19:81ce
db dummy3_1735f; // 0f19:81cf
db dummy3_17360; // 0f19:81d0
db dummy3_17361; // 0f19:81d1
db dummy3_17362; // 0f19:81d2
db dummy3_17363; // 0f19:81d3
db dummy3_17364; // 0f19:81d4
db dummy3_17365; // 0f19:81d5
db dummy3_17366; // 0f19:81d6
db dummy3_17367; // 0f19:81d7
db dummy3_17368; // 0f19:81d8
db unk_25949; // 0f19:81d9
db dummy3_1736a[32]; // 0f19:81da
db dummy3_1738a; // 0f19:81fa
db dummy3_1738b; // 0f19:81fb
db dummy3_1738c; // 0f19:81fc
db dummy3_1738d; // 0f19:81fd
db dummy3_1738e; // 0f19:81fe
db dummy3_1738f; // 0f19:81ff
db dummy3_17390; // 0f19:8200
db dummy3_17391; // 0f19:8201
db dummy3_17392; // 0f19:8202
db dummy3_17393; // 0f19:8203
db dummy3_17394; // 0f19:8204
db dummy3_17395; // 0f19:8205
db dummy3_17396; // 0f19:8206
db dummy3_17397; // 0f19:8207
db dummy3_17398; // 0f19:8208
db dummy3_17399; // 0f19:8209
db dummy3_1739a; // 0f19:820a
db dummy3_1739b; // 0f19:820b
db dummy3_1739c; // 0f19:820c
db dummy3_1739d; // 0f19:820d
db dummy3_1739e; // 0f19:820e
db dummy3_1739f; // 0f19:820f
db dummy3_173a0; // 0f19:8210
db dummy3_173a1; // 0f19:8211
db dummy3_173a2; // 0f19:8212
db dummy3_173a3; // 0f19:8213
db dummy3_173a4; // 0f19:8214
db dummy3_173a5; // 0f19:8215
db dummy3_173a6; // 0f19:8216
db dummy3_173a7;
db byte_25988; // 0f19:8218
db byte_25989; // 0f19:8219
db byte_2598a; // 0f19:821a
db dummy3_173ab;
dw word_2598c; // 0f19:821c
db byte_2598e; // 0f19:821e
db dummy3_173af;
dw word_25990; // 0f19:8220
dw word_25992; // 0f19:8222
dw word_25994; // 0f19:8224
dw word_25996; // 0f19:8226
dw word_25998; // 0f19:8228
db byte_2599a; // 0f19:822a
db dummy3_173bb;
db byte_2599c; // 0f19:822c
db dummy3_173bd; // 0f19:822d
db byte_2599e; // 0f19:822e
db dummy3_173bf; // 0f19:822f
db byte_259a0; // 0f19:8230
db dummy3_173c1; // 0f19:8231
db dummy3_173c2;
db dummy3_173c3;
dd dword_259a4; // 0f19:8234
dw word_259a8; // 0f19:8238
dd dword_259aa; // 0f19:823a
db byte_259ae; // 0f19:823e
db dummy3_173cf;
dw word_259b0; // 0f19:8240
dw word_259b2; // 0f19:8242
dw word_259b4; // 0f19:8244
dw word_259b6; // 0f19:8246
dw word_259b8; // 0f19:8248
dd off_259ba; // 0f19:824a
dw word_259be; // 0f19:824e
dw word_259c0; // 0f19:8250
db dummy3_173e2[32]; // 0f19:8252
db dummy3_17402[32]; // 0f19:8272
db dummy3_17422[32]; // 0f19:8292
db dummy3_17442[32]; // 0f19:82b2
db dummy3_17462[32]; // 0f19:82d2
db dummy3_17482[32]; // 0f19:82f2
db dummy3_174a2[32]; // 0f19:8312
db dummy3_174c2[32]; // 0f19:8332
db dummy3_174e2[32]; // 0f19:8352
db dummy3_17502[32]; // 0f19:8372
db dummy3_17522[32]; // 0f19:8392
db dummy3_17542[32]; // 0f19:83b2
db dummy3_17562[32]; // 0f19:83d2
db dummy3_17582[32]; // 0f19:83f2
db dummy3_175a2[32]; // 0f19:8412
db dummy3_175c2[32]; // 0f19:8432
db dummy3_175e2[32]; // 0f19:8452
db dummy3_17602[32]; // 0f19:8472
db dummy3_17622[32]; // 0f19:8492
db dummy3_17642[32]; // 0f19:84b2
db dummy3_17662[32]; // 0f19:84d2
db dummy3_17682[32]; // 0f19:84f2
db dummy3_176a2[32]; // 0f19:8512
db dummy3_176c2[32]; // 0f19:8532
db dummy3_176e2[32]; // 0f19:8552
db dummy3_17702[32]; // 0f19:8572
db byte_25d02; // 0f19:8592
db dummy3_17723[32]; // 0f19:8593
db dummy3_17743; // 0f19:85b3
db dummy3_17744; // 0f19:85b4
db dummy3_17745; // 0f19:85b5
dw off_25d26; // 0f19:85b6
dw off_25d28; // 0f19:85b8
dw off_25d2a; // 0f19:85ba
db dummy3_1774c[32]; // 0f19:85bc
db dummy3_1776c[32]; // 0f19:85dc
db dummy3_1778c[32]; // 0f19:85fc
db dummy3_177ac[32]; // 0f19:861c
db dummy3_177cc[32]; // 0f19:863c
db dummy3_177ec[32]; // 0f19:865c
db dummy3_1780c[32]; // 0f19:867c
db dummy3_1782c[32]; // 0f19:869c
db dummy3_1784c[32]; // 0f19:86bc
db dummy3_1786c[32]; // 0f19:86dc
db dummy3_1788c[32]; // 0f19:86fc
db dummy3_178ac[32]; // 0f19:871c
db dummy3_178cc[32]; // 0f19:873c
db dummy3_178ec[32]; // 0f19:875c
db dummy3_1790c[32]; // 0f19:877c
db dummy3_1792c[32]; // 0f19:879c
db dummy3_1794c[32]; // 0f19:87bc
db dummy3_1796c[32]; // 0f19:87dc
db dummy3_1798c;
db dummy3_1798d;
db dummy3_1798e;
db dummy3_1798f;
db dummy3_17990;
db dummy3_17991;
db dummy3_17992;
db dummy3_17993;
db dummy3_17994;
db dummy3_17995;
db dummy3_17996;
db dummy3_17997;
db dummy3_17998;
db dummy3_17999;
db dummy3_1799a;
db dummy3_1799b;
db dummy3_1799c;
db dummy3_1799d;
db dummy3_1799e;
db dummy3_1799f;
db dummy3_179a0;
db dummy3_179a1;
db dummy3_179a2;
db dummy3_179a3;
dw word_25f84; // 0f19:8814
dw word_25f86; // 0f19:8816
dw word_25f88; // 0f19:8818
db dummy3_179aa;
db dummy3_179ab;
db dummy3_179ac;
db dummy3_179ad;
dw word_25f8e; // 0f19:881e
dw word_25f90; // 0f19:8820
dd dword_25f92; // 0f19:8822
dw word_25f96; // 0f19:8826
dw word_25f98; // 0f19:8828
dw word_25f9a; // 0f19:882a
db dummy3_179bc;
db byte_25f9d; // 0f19:882d
db dummy3_179be;
db dummy3_179bf;
db dummy3_179c0;
db dummy3_179c1;
db dummy3_179c2;
db dummy3_179c3;
db dummy3_179c4;
db dummy3_179c5;
db dummy3_179c6;
db dummy3_179c7;
dw word_25fa8; // 0f19:8838
dw word_25faa; // 0f19:883a
dw word_25fac; // 0f19:883c
dd dword_25fae; // 0f19:883e
dw word_25fb2; // 0f19:8842
dw word_25fb4; // 0f19:8844
dw word_25fb6; // 0f19:8846
db dummy3_179d8[32]; // 0f19:8848
db dummy3_179f8[32]; // 0f19:8868
db dummy3_17a18;
db dummy3_17a19;
db dummy3_17a1a;
db dummy3_17a1b;
db dummy3_17a1c;
db dummy3_17a1d;
db dummy3_17a1e;
db dummy3_17a1f;
db dummy3_17a20;
db dummy3_17a21;
db dummy3_17a22;
db dummy3_17a23;
db dummy3_17a24;
db dummy3_17a25;
db dummy3_17a26;
db dummy3_17a27;
db dummy3_17a28;
db dummy3_17a29;
dw word_2600a; // 0f19:889a
dw word_2600c; // 0f19:889c
dw word_2600e; // 0f19:889e
dw word_26010; // 0f19:88a0
dw word_26012; // 0f19:88a2
dw word_26014; // 0f19:88a4
dw word_26016; // 0f19:88a6
dw word_26018; // 0f19:88a8
dw word_2601a; // 0f19:88aa
db dummy3_17a3c[32]; // 0f19:88ac
db dummy3_17a5c[32]; // 0f19:88cc
db dummy3_17a7c[32]; // 0f19:88ec
db dummy3_17a9c[32]; // 0f19:890c
db dummy3_17abc[32]; // 0f19:892c
db dummy3_17adc[32]; // 0f19:894c
db dummy3_17afc[32]; // 0f19:896c
db dummy3_17b1c[32]; // 0f19:898c
db dummy3_17b3c[32]; // 0f19:89ac
db dummy3_17b5c[32]; // 0f19:89cc
db dummy3_17b7c[32]; // 0f19:89ec
db dummy3_17b9c[32]; // 0f19:8a0c
db dummy3_17bbc[32]; // 0f19:8a2c
db dummy3_17bdc[32]; // 0f19:8a4c
db dummy3_17bfc[32]; // 0f19:8a6c
db dummy3_17c1c[32]; // 0f19:8a8c
db dummy3_17c3c[32]; // 0f19:8aac
db dummy3_17c5c[32]; // 0f19:8acc
db dummy3_17c7c[32]; // 0f19:8aec
db dummy3_17c9c[32]; // 0f19:8b0c
db dummy3_17cbc;
db dummy3_17cbd;
db dummy3_17cbe;
db dummy3_17cbf;
db dummy3_17cc0;
db dummy3_17cc1;
db dummy3_17cc2;
db dummy3_17cc3;
db dummy3_17cc4;
db dummy3_17cc5;
dw word_262a6; // 0f19:8b36
dw word_262a8; // 0f19:8b38
dw word_262aa; // 0f19:8b3a
db dummy3_17ccc;
db dummy3_17ccd;
db dummy3_17cce;
db dummy3_17ccf;
db dummy3_17cd0;
db dummy3_17cd1;
db dummy3_17cd2;
db dummy3_17cd3;
db dummy3_17cd4;
db dummy3_17cd5;
db dummy3_17cd6;
db dummy3_17cd7;
db dummy3_17cd8;
db dummy3_17cd9;
db dummy3_17cda;
db dummy3_17cdb;
dw word_262bc; // 0f19:8b4c
db dummy3_17cde[2];
dw word_262c0; // 0f19:8b50
dw word_262c2; // 0f19:8b52
dw word_262c4; // 0f19:8b54
dw word_262c6; // 0f19:8b56
dw word_262c8; // 0f19:8b58
dw s; // 0f19:8b5a
dw word_262cc; // 0f19:8b5c
dd dword_262ce; // 0f19:8b5e
dd dword_262d2; // 0f19:8b62
dw word_262d6; // 0f19:8b66
dw word_262d8; // 0f19:8b68
dw word_262da; // 0f19:8b6a
dw word_262dc; // 0f19:8b6c
dw word_262de; // 0f19:8b6e
dw word_262e0; // 0f19:8b70
dw word_262e2; // 0f19:8b72
dw word_262e4; // 0f19:8b74
dd dword_262e6; // 0f19:8b76
db dummy3_17d0a[32]; // 0f19:8b7a
db dummy3_17d2a[32]; // 0f19:8b9a
db dummy3_17d4a[32]; // 0f19:8bba
db dummy3_17d6a[32]; // 0f19:8bda
db dummy3_17d8a[32]; // 0f19:8bfa
db dummy3_17daa[32]; // 0f19:8c1a
db dummy3_17dca[32]; // 0f19:8c3a
db dummy3_17dea[32]; // 0f19:8c5a
db dummy3_17e0a[32]; // 0f19:8c7a
db dummy3_17e2a[32]; // 0f19:8c9a
db dummy3_17e4a[32]; // 0f19:8cba
db dummy3_17e6a[32]; // 0f19:8cda
db dummy3_17e8a;
db dummy3_17e8b;
db dummy3_17e8c;
db dummy3_17e8d;
db dummy3_17e8e;
db dummy3_17e8f;
db dummy3_17e90;
db dummy3_17e91;
db dummy3_17e92;
db dummy3_17e93;
db dummy3_17e94;
db dummy3_17e95;
db dummy3_17e96;
db dummy3_17e97;
db dummy3_17e98;
db dummy3_17e99;
db dummy3_17e9a;
db dummy3_17e9b;
db dummy3_17e9c;
db dummy3_17e9d;
db dummy3_17e9e;
db dummy3_17e9f;
db dummy3_17ea0;
db dummy3_17ea1;
db dummy3_17ea2;
db dummy3_17ea3;
db dummy3_17ea4;
db dummy3_17ea5;
dw word_26486; // 0f19:8d16
dw word_26488; // 0f19:8d18
dw word_2648a; // 0f19:8d1a
dw word_2648c; // 0f19:8d1c
dw word_2648e; // 0f19:8d1e
db byte_26490; // 0f19:8d20
db byte_26491; // 0f19:8d21
db byte_26492; // 0f19:8d22
db dummy3_17eb3[32]; // 0f19:8d23
db dummy3_17ed3;
db dummy3_17ed4;
db dummy3_17ed5;
db dummy3_17ed6;
db dummy3_17ed7;
db dummy3_17ed8;
db dummy3_17ed9;
db dummy3_17eda;
db dummy3_17edb;
db dummy3_17edc;
db dummy3_17edd;
db dummy3_17ede;
db dummy3_17edf;
dd dword_264c0; // 0f19:8d50
dd dword_264c4; // 0f19:8d54
dd dword_264c8; // 0f19:8d58
dw word_264cc; // 0f19:8d5c
db dummy3_17eee[32]; // 0f19:8d5e
db dummy3_17f0e[32]; // 0f19:8d7e
db dummy3_17f2e;
db dummy3_17f2f;
db byte_26510[1112]; // 17f3:0000

#ifdef DOSBOX_CUSTOM
    db filll[1024*1024*16];
#endif
                        db stack[STACK_SIZE];
                        db heap[HEAP_SIZE];
                };
}
#pragma pack(pop)

#endif
