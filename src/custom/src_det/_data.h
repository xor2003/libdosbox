
#ifndef ___DATA_H__
#define ___DATA_H__
#include "../asm.h"

#pragma pack(push, 1)
struct find_t {
  db reserved;
  db attrib;
  dw wr_time;
  dw wr_date;
  dd _size_;
  db _name_;
  db dummyf_0;
};

struct time_ {
  db ti_min;
  db ti_hour;
  db ti_hund;
  db ti_sec;
};

#pragma pack(pop)


#pragma pack(push, 1)
namespace m2c{
struct Memory{
db dummyf_0[6688];
db dummyf_1a20[657];
dw __dgrouparb; // 01a2:0291
db dummyf_1cb3[4268];
db __jpt_10f7d; // 01a2:133f
db dummyf_2d60[32]; // 01a2:1340
db dummyf_2d80; // 01a2:1360
db dummyf_2d81; // 01a2:1361
db dummyf_2d82; // 01a2:1362
db dummyf_2d83; // 01a2:1363
db dummyf_2d84; // 01a2:1364
db dummyf_2d85; // 01a2:1365
db dummyf_2d86; // 01a2:1366
db dummyf_2d87; // 01a2:1367
db dummyf_2d88; // 01a2:1368
db dummyf_2d89; // 01a2:1369
db dummyf_2d8a; // 01a2:136a
db dummyf_2d8b; // 01a2:136b
db dummyf_2d8c; // 01a2:136c
db dummyf_2d8d; // 01a2:136d
db dummyf_2d8e; // 01a2:136e
db dummyf_2d8f[544];
db __jpt_114aa; // 01a2:158f
db dummyf_2fb0; // 01a2:1590
db dummyf_2fb1; // 01a2:1591
db dummyf_2fb2; // 01a2:1592
db dummyf_2fb3; // 01a2:1593
db dummyf_2fb4; // 01a2:1594
db dummyf_2fb5; // 01a2:1595
db dummyf_2fb6; // 01a2:1596
db dummyf_2fb7; // 01a2:1597
db dummyf_2fb8; // 01a2:1598
db dummyf_2fb9; // 01a2:1599
db dummyf_2fba; // 01a2:159a
db dummyf_2fbb; // 01a2:159b
db dummyf_2fbc; // 01a2:159c
db dummyf_2fbd[480];
db dummyf_319d[32]; // 01a2:177d
db dummyf_31bd[32]; // 01a2:179d
db dummyf_31dd[32]; // 01a2:17bd
db dummyf_31fd[32]; // 01a2:17dd
db dummyf_321d;
db dummyf_321e;
db dummyf_321f;
db dummyf_3220;
db dummyf_3221;
db dummyf_3222;
db dummyf_3223;
db dummyf_3224;
db dummyf_3225;
db dummyf_3226;
db dummyf_3227;
db dummyf_3228;
db dummyf_3229;
db dummyf_322a;
db dummyf_322b;
db byte_1180c; // 01a2:180c
db dummyf_322d[32]; // 01a2:180d
db dummyf_324d[32]; // 01a2:182d
db dummyf_326d;
db dummyf_326e;
db dummyf_326f;
db dummyf_3270;
db dummyf_3271;
db dummyf_3272;
db dummyf_3273;
db dummyf_3274;
db dummyf_3275;
db dummyf_3276;
db dummyf_3277;
db dummyf_3278;
db dummyf_3279;
db dummyf_327a;
db dummyf_327b;
db dummyf_327c;
db dummyf_327d;
db byte_1185e; // 01a2:185e
db byte_1185f; // 01a2:185f
db dummyf_3280[32]; // 01a2:1860
db dummyf_32a0[32]; // 01a2:1880
db dummyf_32c0[32]; // 01a2:18a0
db dummyf_32e0; // 01a2:18c0
db dummyf_32e1;
db dummyf_32e2; // 01a2:18c2
db dummyf_32e3; // 01a2:18c3
db dummyf_32e4; // 01a2:18c4
db dummyf_32e5; // 01a2:18c5
db dummyf_32e6;
db dummyf_32e7; // 01a2:18c7
db dummyf_32e8; // 01a2:18c8
db dummyf_32e9; // 01a2:18c9
db dummyf_32ea; // 01a2:18ca
db dummyf_32eb;
db dummyf_32ec; // 01a2:18cc
db dummyf_32ed; // 01a2:18cd
db dummyf_32ee; // 01a2:18ce
db dummyf_32ef; // 01a2:18cf
db dummyf_32f0;
db dummyf_32f1; // 01a2:18d1
db dummyf_32f2; // 01a2:18d2
db dummyf_32f3;
db dummyf_32f4; // 01a2:18d4
db dummyf_32f5; // 01a2:18d5
db dummyf_32f6; // 01a2:18d6
db dummyf_32f7; // 01a2:18d7
db dummyf_32f8; // 01a2:18d8
db dummyf_32f9; // 01a2:18d9
db dummyf_32fa; // 01a2:18da
db dummyf_32fb; // 01a2:18db
db dummyf_32fc; // 01a2:18dc
db byte_118dd; // 01a2:18dd
db dummyf_32fe;
db byte_118df; // 01a2:18df
db dummyf_3300;
db byte_118e1; // 01a2:18e1
db dummyf_3302;
db byte_118e3; // 01a2:18e3
db dummyf_3304[592];
dw _____first; // 01a2:1b34
dw _____last; // 01a2:1b36
dw _____rover; // 01a2:1b38
dw word_11b3a; // 01a2:1b3a
db byte_11b3c; // 01a2:1b3c
db dummyf_355d;
db __nbytes; // 01a2:1b3e
db dummyf_355f;
db dummyf_3560[8626];
db byte_13cf2; // 01a2:3cf2
db dummyf_5713;
db dummyf_5714; // 01a2:3cf4
db dummyf_5715;
db dummyf_5716; // 01a2:3cf6
db dummyf_5717;
db dummyf_5718; // 01a2:3cf8
db dummyf_5719;
db __jpt_13cd7; // 01a2:3cfa
db dummyf_571b; // 01a2:3cfb
db dummyf_571c; // 01a2:3cfc
db dummyf_571d; // 01a2:3cfd
db dummyf_571e; // 01a2:3cfe
db dummyf_571f; // 01a2:3cff
db dummyf_5720; // 01a2:3d00
db dummyf_5721; // 01a2:3d01
db dummyf_5722[474];
dw word_13edc; // 01a2:3edc
dw dummyf_58fe; // 01a2:3ede
dw dummyf_5900; // 01a2:3ee0
dw dummyf_5902; // 01a2:3ee2
dw dummyf_5904; // 01a2:3ee4
dw dummyf_5906; // 01a2:3ee6
dw dummyf_5908; // 01a2:3ee8
dw __jpt_13dc1; // 01a2:3eea
dw dummyf_590c; // 01a2:3eec
dw dummyf_590e; // 01a2:3eee
dw dummyf_5910; // 01a2:3ef0
dw dummyf_5912; // 01a2:3ef2
dw dummyf_5914; // 01a2:3ef4
dw dummyf_5916; // 01a2:3ef6
db dummyf_5918[728];
db dummyf_5bf0[4128];
db dummyf_6c10[1344];
db dummyf_7150[13];
db dummyf_715d;
dw word_1573e; // 0715:000e
dw word_15740; // 0715:0010
db dummyf_7162[32]; // 0715:0012
db dummyf_7182[32]; // 0715:0032
db byte_15782; // 0715:0052
db dummyf_71a3;
db byte_15784; // 0715:0054
db dummyf_71a5[32]; // 0715:0055
db dummyf_71c5[32]; // 0715:0075
db dummyf_71e5;
db dummyf_71e6;
db dummyf_71e7;
db byte_157c8; // 0715:0098
db dummyf_71e9[32]; // 0715:0099
db dummyf_7209[32]; // 0715:00b9
db dummyf_7229[32]; // 0715:00d9
db dummyf_7249[32]; // 0715:00f9
db dummyf_7269;
db dummyf_726a;
db dummyf_726b;
db dummyf_726c;
db dummyf_726d;
db dummyf_726e;
db dummyf_726f;
db dummyf_7270;
db dummyf_7271;
db byte_15852; // 0715:0122
db dummyf_7273;
db byte_15854; // 0715:0124
db dummyf_7275;
db byte_15856; // 0715:0126
db dummyf_7277;
db byte_15858; // 0715:0128
db dummyf_7279;
db byte_1585a; // 0715:012a
db dummyf_727b;
db byte_1585c; // 0715:012c
db dummyf_727d;
db byte_1585e; // 0715:012e
db dummyf_727f;
db byte_15860; // 0715:0130
db dummyf_7281;
db dummyf_7282[132]; // 0715:0132
dw word_158e6; // 0715:01b6
db dummyf_7308;
db dummyf_7309;
db dummyf_730a;
db dummyf_730b;
db byte_158ec; // 0715:01bc
db dummyf_730d;
db __atest; // 0715:01be
db dummyf_730f; // 0715:01bf
db byte_158f0; // 0715:01c0
db dummyf_7311; // 0715:01c1
db dummyf_7312;
db byte_158f3; // 0715:01c3
db dummyf_7314[32]; // 0715:01c4
db dummyf_7334[32]; // 0715:01e4
db dummyf_7354[32]; // 0715:0204
db dummyf_7374[32]; // 0715:0224
db dummyf_7394[32]; // 0715:0244
db dummyf_73b4[32]; // 0715:0264
db dummyf_73d4[32]; // 0715:0284
db dummyf_73f4[32]; // 0715:02a4
db dummyf_7414[32]; // 0715:02c4
db dummyf_7434[32]; // 0715:02e4
db dummyf_7454[32]; // 0715:0304
db dummyf_7474[32]; // 0715:0324
db dummyf_7494[32]; // 0715:0344
db dummyf_74b4[32]; // 0715:0364
db dummyf_74d4[32]; // 0715:0384
db dummyf_74f4;
db dummyf_74f5;
db dummyf_74f6;
db dummyf_74f7;
db dummyf_74f8;
db dummyf_74f9;
db dummyf_74fa;
db dummyf_74fb;
db dummyf_74fc;
db dummyf_74fd;
db dummyf_74fe;
db dummyf_74ff;
db dummyf_7500;
db dummyf_7501;
db dummyf_7502;
db dummyf_7503;
db dummyf_7504;
db dummyf_7505;
db dummyf_7506;
db dummyf_7507;
db dummyf_7508;
db dummyf_7509;
db dummyf_750a;
db dummyf_750b;
db dummyf_750c;
db dummyf_750d;
db dummyf_750e;
db dummyf_750f;
db dummyf_7510;
db dummyf_7511;
db byte_15af2; // 0715:03c2
db dummyf_7513;
db byte_15af4; // 0715:03c4
db dummyf_7515;
db byte_15af6; // 0715:03c6
db dummyf_7517;
db dummyf_7518[1309];
db dummyf_7a35; // 0715:08e5
db dummyf_7a36; // 0715:08e6
db dummyf_7a37; // 0715:08e7
db dummyf_7a38; // 0715:08e8
db dummyf_7a39; // 0715:08e9
db dummyf_7a3a; // 0715:08ea
db dummyf_7a3b; // 0715:08eb
db dummyf_7a3c;
db dummyf_7a3d; // 0715:08ed
db dummyf_7a3e; // 0715:08ee
db dummyf_7a3f; // 0715:08ef
db dummyf_7a40; // 0715:08f0
db dummyf_7a41; // 0715:08f1
db dummyf_7a42; // 0715:08f2
db dummyf_7a43; // 0715:08f3
db dummyf_7a44; // 0715:08f4
db dummyf_7a45; // 0715:08f5
db dummyf_7a46; // 0715:08f6
db dummyf_7a47; // 0715:08f7
db dummyf_7a48; // 0715:08f8
db dummyf_7a49; // 0715:08f9
db dummyf_7a4a;
db dummyf_7a4b; // 0715:08fb
db dummyf_7a4c; // 0715:08fc
db dummyf_7a4d; // 0715:08fd
db dummyf_7a4e; // 0715:08fe
db dummyf_7a4f; // 0715:08ff
db dummyf_7a50; // 0715:0900
db dummyf_7a51; // 0715:0901
db dummyf_7a52; // 0715:0902
db dummyf_7a53[40];
db dummyf_7a7b; // 0715:092b
db dummyf_7a7c; // 0715:092c
db dummyf_7a7d; // 0715:092d
db dummyf_7a7e; // 0715:092e
db dummyf_7a7f; // 0715:092f
db dummyf_7a80; // 0715:0930
db dummyf_7a81; // 0715:0931
db dummyf_7a82;
db dummyf_7a83; // 0715:0933
db dummyf_7a84; // 0715:0934
db dummyf_7a85; // 0715:0935
db dummyf_7a86; // 0715:0936
db dummyf_7a87; // 0715:0937
db dummyf_7a88; // 0715:0938
db dummyf_7a89; // 0715:0939
db dummyf_7a8a; // 0715:093a
db dummyf_7a8b; // 0715:093b
db dummyf_7a8c; // 0715:093c
db dummyf_7a8d; // 0715:093d
db dummyf_7a8e; // 0715:093e
db dummyf_7a8f; // 0715:093f
db dummyf_7a90;
db dummyf_7a91; // 0715:0941
db dummyf_7a92; // 0715:0942
db dummyf_7a93; // 0715:0943
db dummyf_7a94; // 0715:0944
db dummyf_7a95; // 0715:0945
db dummyf_7a96; // 0715:0946
db dummyf_7a97; // 0715:0947
db dummyf_7a98; // 0715:0948
db dummyf_7a99[1089];
db byte_164ba; // 0715:0d8a
db dummyf_7edb[32]; // 0715:0d8b
db dummyf_7efb;
db dummyf_7efc; // 0715:0dac
db dummyf_7efd; // 0715:0dad
db dummyf_7efe; // 0715:0dae
db dummyf_7eff;
db dummyf_7f00; // 0715:0db0
db dummyf_7f01; // 0715:0db1
db dummyf_7f02; // 0715:0db2
db dummyf_7f03;
db dummyf_7f04; // 0715:0db4
db dummyf_7f05; // 0715:0db5
db dummyf_7f06; // 0715:0db6
db dummyf_7f07;
db dummyf_7f08; // 0715:0db8
db dummyf_7f09; // 0715:0db9
db dummyf_7f0a; // 0715:0dba
db dummyf_7f0b;
db dummyf_7f0c; // 0715:0dbc
db dummyf_7f0d; // 0715:0dbd
db dummyf_7f0e; // 0715:0dbe
db dummyf_7f0f; // 0715:0dbf
db dummyf_7f10; // 0715:0dc0
db dummyf_7f11;
db dummyf_7f12; // 0715:0dc2
db dummyf_7f13;
db dummyf_7f14; // 0715:0dc4
db dummyf_7f15; // 0715:0dc5
db dummyf_7f16; // 0715:0dc6
db dummyf_7f17;
db dummyf_7f18; // 0715:0dc8
db dummyf_7f19; // 0715:0dc9
db byte_164fa; // 0715:0dca
db dummyf_7f1b;
db dummyf_7f1c; // 0715:0dcc
db dummyf_7f1d; // 0715:0dcd
db dummyf_7f1e; // 0715:0dce
db dummyf_7f1f; // 0715:0dcf
db dummyf_7f20; // 0715:0dd0
db dummyf_7f21; // 0715:0dd1
db dummyf_7f22; // 0715:0dd2
db dummyf_7f23; // 0715:0dd3
db byte_16504; // 0715:0dd4
db dummyf_7f25[32]; // 0715:0dd5
db dummyf_7f45[32]; // 0715:0df5
db dummyf_7f65;
db dummyf_7f66;
db dummyf_7f67;
db dummyf_7f68;
db dummyf_7f69;
db dummyf_7f6a;
db dummyf_7f6b;
db dummyf_7f6c;
db dummyf_7f6d;
db dummyf_7f6e;
db dummyf_7f6f;
db dummyf_7f70;
db dummyf_7f71;
db dummyf_7f72;
db dummyf_7f73;
db dummyf_7f74;
db dummyf_7f75;
db dummyf_7f76;
db dummyf_7f77;
db byte_16558; // 0715:0e28
db dummyf_7f79;
db byte_1655a; // 0715:0e2a
db dummyf_7f7b;
db byte_1655c; // 0715:0e2c
db dummyf_7f7d;
dw word_1655e; // 0715:0e2e
db byte_16560; // 0715:0e30
db dummyf_7f81;
db byte_16562; // 0715:0e32
db dummyf_7f83;
db byte_16564; // 0715:0e34
db dummyf_7f85;
db byte_16566; // 0715:0e36
db dummyf_7f87;
db byte_16568; // 0715:0e38
db dummyf_7f89;
db byte_1656a; // 0715:0e3a
db dummyf_7f8b;
db byte_1656c; // 0715:0e3c
db dummyf_7f8d;
db byte_1656e; // 0715:0e3e
db dummyf_7f8f;
db byte_16570; // 0715:0e40
db dummyf_7f91;
db byte_16572; // 0715:0e42
db dummyf_7f93;
db byte_16574; // 0715:0e44
db dummyf_7f95;
db byte_16576; // 0715:0e46
db dummyf_7f97;
db byte_16578; // 0715:0e48
db dummyf_7f99;
db byte_1657a; // 0715:0e4a
db dummyf_7f9b;
db byte_1657c; // 0715:0e4c
db dummyf_7f9d;
db byte_1657e; // 0715:0e4e
db dummyf_7f9f;
db dummyf_7fa0;
db dummyf_7fa1;
db dummyf_7fa2;
db dummyf_7fa3;
db dummyf_7fa4;
db dummyf_7fa5;
db dummyf_7fa6;
db dummyf_7fa7;
db dummyf_7fa8;
db dummyf_7fa9;
db dummyf_7faa;
db dummyf_7fab;
db dummyf_7fac;
db dummyf_7fad;
db dummyf_7fae;
db dummyf_7faf;
db dummyf_7fb0;
db dummyf_7fb1;
db dummyf_7fb2;
db dummyf_7fb3;
db byte_16594; // 0715:0e64
db dummyf_7fb5;
db byte_16596; // 0715:0e66
db dummyf_7fb7;
db byte_16598; // 0715:0e68
db dummyf_7fb9;
db byte_1659a; // 0715:0e6a
db dummyf_7fbb;
db byte_1659c; // 0715:0e6c
db dummyf_7fbd;
db byte_1659e; // 0715:0e6e
db dummyf_7fbf;
db byte_165a0; // 0715:0e70
db dummyf_7fc1;
db byte_165a2; // 0715:0e72
db dummyf_7fc3;
db byte_165a4; // 0715:0e74
db dummyf_7fc5;
db byte_165a6; // 0715:0e76
db dummyf_7fc7;
db byte_165a8; // 0715:0e78
db dummyf_7fc9;
db byte_165aa; // 0715:0e7a
db dummyf_7fcb;
db byte_165ac; // 0715:0e7c
db dummyf_7fcd;
db byte_165ae; // 0715:0e7e
db dummyf_7fcf;
db dummyf_7fd0;
db dummyf_7fd1;
db byte_165b2; // 0715:0e82
db dummyf_7fd3;
db byte_165b4; // 0715:0e84
db dummyf_7fd5;
db byte_165b6; // 0715:0e86
db dummyf_7fd7;
db dummyf_7fd8[2696];
db dummyf_8a60[313];
db dummyf_8b99; // 08a6:0139
db byte_1717a; // 08a6:013a
db dummyf_8b9b;
db byte_1717c; // 08a6:013c
db dummyf_8b9d;
db byte_1717e; // 08a6:013e
db dummyf_8b9f;
db byte_17180; // 08a6:0140
db dummyf_8ba1;
db byte_17182; // 08a6:0142
db dummyf_8ba3;
db byte_17184; // 08a6:0144
db dummyf_8ba5;
db byte_17186; // 08a6:0146
db dummyf_8ba7;
db byte_17188; // 08a6:0148
db dummyf_8ba9;
db byte_1718a; // 08a6:014a
db dummyf_8bab;
db byte_1718c; // 08a6:014c
db dummyf_8bad;
db byte_1718e; // 08a6:014e
db dummyf_8baf;
db dummyf_8bb0[1433];
db dummyf_9149; // 08a6:06e9
db dummyf_914a[14];
db dummyf_9158; // 08a6:06f8
db dummyf_9159[257];
db dummyf_925a; // 08a6:07fa
db dummyf_925b[14];
db dummyf_9269; // 08a6:0809
db dummyf_926a[255];
db dummyf_9369; // 08a6:0909
db dummyf_936a[14];
db dummyf_9378; // 08a6:0918
db dummyf_9379[1399];
db dummyf_98f0[13];
db dummyf_98fd;
db byte_17ede; // 098f:000e
db dummyf_98ff;
db byte_17ee0; // 098f:0010
db dummyf_9901;
db byte_17ee2; // 098f:0012
db dummyf_9903;
db byte_17ee4; // 098f:0014
db dummyf_9905;
db byte_17ee6; // 098f:0016
db dummyf_9907;
db byte_17ee8; // 098f:0018
db dummyf_9909;
db byte_17eea; // 098f:001a
db dummyf_990b;
db byte_17eec; // 098f:001c
db dummyf_990d;
db byte_17eee; // 098f:001e
db dummyf_990f;
db byte_17ef0; // 098f:0020
db dummyf_9911;
db dummyf_9912[942];
db dummyf_9cc0[1588];
db dummyf_a2f4;
db dummyf_a2f5;
db dummyf_a2f6;
db dummyf_a2f7;
db dummyf_a2f8;
db dummyf_a2f9;
db dummyf_a2fa;
db dummyf_a2fb;
db dummyf_a2fc;
db dummyf_a2fd;
db dummyf_a2fe;
db dummyf_a2ff;
db byte_188e0; // 0a30:0000
db dummyf_a301;
db byte_188e2; // 0a30:0002
db dummyf_a303;
db byte_188e4; // 0a30:0004
db dummyf_a305; // 0a30:0005
db byte_188e6; // 0a30:0006
db dummyf_a307; // 0a30:0007
db byte_188e8; // 0a30:0008
db dummyf_a309; // 0a30:0009
db dummyf_a30a; // 0a30:000a
db dummyf_a30b; // 0a30:000b
db dummyf_a30c; // 0a30:000c
db dummyf_a30d; // 0a30:000d
db __off_188ee; // 0a30:000e
db dummyf_a30f; // 0a30:000f
db dummyf_a310; // 0a30:0010
db dummyf_a311; // 0a30:0011
db __acopyright1991b; // 0a30:0012
db dummyf_a313[32]; // 0a30:0013
db dummyf_a333; // 0a30:0033
db dummyf_a334; // 0a30:0034
db dummyf_a335; // 0a30:0035
db dummyf_a336; // 0a30:0036
db dummyf_a337; // 0a30:0037
db dummyf_a338; // 0a30:0038
db dummyf_a339; // 0a30:0039
db dummyf_a33a; // 0a30:003a
db dummyf_a33b; // 0a30:003b
db dummyf_a33c; // 0a30:003c
db __unk_1891d; // 0a30:003d
db dummyf_a33e; // 0a30:003e
db dummyf_a33f; // 0a30:003f
db dummyf_a340; // 0a30:0040
db dummyf_a341; // 0a30:0041
db dummyf_a342; // 0a30:0042
db dummyf_a343; // 0a30:0043
db dummyf_a344; // 0a30:0044
db dummyf_a345; // 0a30:0045
db dummyf_a346; // 0a30:0046
db dummyf_a347; // 0a30:0047
db dummyf_a348; // 0a30:0048
db dummyf_a349; // 0a30:0049
db dummyf_a34a; // 0a30:004a
db dummyf_a34b; // 0a30:004b
db dummyf_a34c; // 0a30:004c
db dummyf_a34d; // 0a30:004d
db dummyf_a34e; // 0a30:004e
db dummyf_a34f; // 0a30:004f
db dummyf_a350; // 0a30:0050
db dummyf_a351; // 0a30:0051
db dummyf_a352; // 0a30:0052
db dummyf_a353; // 0a30:0053
db dummyf_a354; // 0a30:0054
db dummyf_a355; // 0a30:0055
db dummyf_a356; // 0a30:0056
db dummyf_a357; // 0a30:0057
db dummyf_a358; // 0a30:0058
db dummyf_a359; // 0a30:0059
db dummyf_a35a; // 0a30:005a
dd dword_1893b; // 0a30:005b
dd dword_1893f; // 0a30:005f
dd dword_18943; // 0a30:0063
dd dword_18947; // 0a30:0067
dw __argc; // 0a30:006b
dw __argv; // 0a30:006d
dw word_1894f; // 0a30:006f
dw __envp; // 0a30:0071
dw word_18953; // 0a30:0073
dw word_18955; // 0a30:0075
dw word_18957; // 0a30:0077
dw _size; // 0a30:0079
dw __segx; // 0a30:007b
dw word_1895d; // 0a30:007d
db byte_1895f; // 0a30:007f
db dummyf_a380;
dw word_18961; // 0a30:0081
dw word_18963; // 0a30:0083
db dummyf_a385; // 0a30:0085
db dummyf_a386; // 0a30:0086
dw word_18967; // 0a30:0087
dw word_18969; // 0a30:0089
dw word_1896b; // 0a30:008b
dw word_1896d; // 0a30:008d
dw word_1896f; // 0a30:008f
dw word_18971; // 0a30:0091
db dummyf_a393;
db __path; // 0a30:0094
db dummyf_a395; // 0a30:0095
db dummyf_a396; // 0a30:0096
db dummyf_a397; // 0a30:0097
db dummyf_a398; // 0a30:0098
db dummyf_a399; // 0a30:0099
db dummyf_a39a; // 0a30:009a
db dummyf_a39b; // 0a30:009b
db dummyf_a39c; // 0a30:009c
db dummyf_a39d;
db __arg0; // 0a30:009e
db dummyf_a39f; // 0a30:009f
db dummyf_a3a0; // 0a30:00a0
db dummyf_a3a1; // 0a30:00a1
db dummyf_a3a2; // 0a30:00a2
db dummyf_a3a3; // 0a30:00a3
db dummyf_a3a4; // 0a30:00a4
db dummyf_a3a5; // 0a30:00a5
db dummyf_a3a6; // 0a30:00a6
db dummyf_a3a7;
db __a255; // 0a30:00a8
db dummyf_a3a9; // 0a30:00a9
db dummyf_a3aa; // 0a30:00aa
db dummyf_a3ab;
char __aloadingpleasew[24]; // 0a30:00ac
db __aintpal0scr; // 0a30:00c4
db dummyf_a3c5; // 0a30:00c5
db dummyf_a3c6; // 0a30:00c6
db dummyf_a3c7; // 0a30:00c7
db dummyf_a3c8; // 0a30:00c8
db dummyf_a3c9; // 0a30:00c9
db dummyf_a3ca; // 0a30:00ca
db dummyf_a3cb; // 0a30:00cb
db dummyf_a3cc; // 0a30:00cc
db dummyf_a3cd; // 0a30:00cd
db dummyf_a3ce; // 0a30:00ce
db dummyf_a3cf;
db __adetttlscr; // 0a30:00d0
db dummyf_a3d1; // 0a30:00d1
db dummyf_a3d2; // 0a30:00d2
db dummyf_a3d3; // 0a30:00d3
db dummyf_a3d4; // 0a30:00d4
db dummyf_a3d5; // 0a30:00d5
db dummyf_a3d6; // 0a30:00d6
db dummyf_a3d7; // 0a30:00d7
db dummyf_a3d8; // 0a30:00d8
db dummyf_a3d9; // 0a30:00d9
db dummyf_a3da;
db __aintpal1scr; // 0a30:00db
db dummyf_a3dc; // 0a30:00dc
db dummyf_a3dd; // 0a30:00dd
db dummyf_a3de; // 0a30:00de
db dummyf_a3df; // 0a30:00df
db dummyf_a3e0; // 0a30:00e0
db dummyf_a3e1; // 0a30:00e1
db dummyf_a3e2; // 0a30:00e2
db dummyf_a3e3; // 0a30:00e3
db dummyf_a3e4; // 0a30:00e4
db dummyf_a3e5; // 0a30:00e5
db dummyf_a3e6;
db __aintcar; // 0a30:00e7
db dummyf_a3e8; // 0a30:00e8
db dummyf_a3e9; // 0a30:00e9
db dummyf_a3ea; // 0a30:00ea
db dummyf_a3eb; // 0a30:00eb
db dummyf_a3ec; // 0a30:00ec
db dummyf_a3ed;
db __ascr; // 0a30:00ee
db dummyf_a3ef; // 0a30:00ef
db dummyf_a3f0; // 0a30:00f0
db dummyf_a3f1; // 0a30:00f1
db dummyf_a3f2;
db __aintrofntscr; // 0a30:00f3
db dummyf_a3f4; // 0a30:00f4
db dummyf_a3f5; // 0a30:00f5
db dummyf_a3f6; // 0a30:00f6
db dummyf_a3f7; // 0a30:00f7
db dummyf_a3f8; // 0a30:00f8
db dummyf_a3f9; // 0a30:00f9
db dummyf_a3fa; // 0a30:00fa
db dummyf_a3fb; // 0a30:00fb
db dummyf_a3fc; // 0a30:00fc
db dummyf_a3fd; // 0a30:00fd
db dummyf_a3fe; // 0a30:00fe
db dummyf_a3ff;
db __adesign; // 0a30:0100
db dummyf_a401; // 0a30:0101
db dummyf_a402; // 0a30:0102
db dummyf_a403; // 0a30:0103
db dummyf_a404; // 0a30:0104
db dummyf_a405; // 0a30:0105
db dummyf_a406;
db __adavidlester; // 0a30:0107
db dummyf_a408; // 0a30:0108
db dummyf_a409; // 0a30:0109
db dummyf_a40a; // 0a30:010a
db dummyf_a40b; // 0a30:010b
db dummyf_a40c; // 0a30:010c
db dummyf_a40d; // 0a30:010d
db dummyf_a40e; // 0a30:010e
db dummyf_a40f; // 0a30:010f
db dummyf_a410; // 0a30:0110
db dummyf_a411; // 0a30:0111
db dummyf_a412; // 0a30:0112
db dummyf_a413;
db __aproduction; // 0a30:0114
db dummyf_a415; // 0a30:0115
db dummyf_a416; // 0a30:0116
db dummyf_a417; // 0a30:0117
db dummyf_a418; // 0a30:0118
db dummyf_a419; // 0a30:0119
db dummyf_a41a; // 0a30:011a
db dummyf_a41b; // 0a30:011b
db dummyf_a41c; // 0a30:011c
db dummyf_a41d; // 0a30:011d
db dummyf_a41e;
db __achrisbamford; // 0a30:011f
db dummyf_a420; // 0a30:0120
db dummyf_a421; // 0a30:0121
db dummyf_a422; // 0a30:0122
db dummyf_a423; // 0a30:0123
db dummyf_a424; // 0a30:0124
db dummyf_a425; // 0a30:0125
db dummyf_a426; // 0a30:0126
db dummyf_a427; // 0a30:0127
db dummyf_a428; // 0a30:0128
db dummyf_a429; // 0a30:0129
db dummyf_a42a; // 0a30:012a
db dummyf_a42b; // 0a30:012b
db dummyf_a42c;
db __aprogramming; // 0a30:012d
db dummyf_a42e; // 0a30:012e
db dummyf_a42f; // 0a30:012f
db dummyf_a430; // 0a30:0130
db dummyf_a431; // 0a30:0131
db dummyf_a432; // 0a30:0132
db dummyf_a433; // 0a30:0133
db dummyf_a434; // 0a30:0134
db dummyf_a435; // 0a30:0135
db dummyf_a436; // 0a30:0136
db dummyf_a437; // 0a30:0137
db dummyf_a438;
db __adalecampbell; // 0a30:0139
db dummyf_a43a; // 0a30:013a
db dummyf_a43b; // 0a30:013b
db dummyf_a43c; // 0a30:013c
db dummyf_a43d; // 0a30:013d
db dummyf_a43e; // 0a30:013e
db dummyf_a43f; // 0a30:013f
db dummyf_a440; // 0a30:0140
db dummyf_a441; // 0a30:0141
db dummyf_a442; // 0a30:0142
db dummyf_a443; // 0a30:0143
db dummyf_a444; // 0a30:0144
db dummyf_a445; // 0a30:0145
db dummyf_a446;
db __aadditional; // 0a30:0147
db dummyf_a448; // 0a30:0148
db dummyf_a449; // 0a30:0149
db dummyf_a44a; // 0a30:014a
db dummyf_a44b; // 0a30:014b
db dummyf_a44c; // 0a30:014c
db dummyf_a44d; // 0a30:014d
db dummyf_a44e; // 0a30:014e
db dummyf_a44f; // 0a30:014f
db dummyf_a450; // 0a30:0150
db dummyf_a451;
db __aprogramming_0; // 0a30:0152
db dummyf_a453; // 0a30:0153
db dummyf_a454; // 0a30:0154
db dummyf_a455; // 0a30:0155
db dummyf_a456; // 0a30:0156
db dummyf_a457; // 0a30:0157
db dummyf_a458; // 0a30:0158
db dummyf_a459; // 0a30:0159
db dummyf_a45a; // 0a30:015a
db dummyf_a45b; // 0a30:015b
db dummyf_a45c; // 0a30:015c
db dummyf_a45d;
db __achrisgurski; // 0a30:015e
db dummyf_a45f; // 0a30:015f
db dummyf_a460; // 0a30:0160
db dummyf_a461; // 0a30:0161
db dummyf_a462; // 0a30:0162
db dummyf_a463; // 0a30:0163
db dummyf_a464; // 0a30:0164
db dummyf_a465; // 0a30:0165
db dummyf_a466; // 0a30:0166
db dummyf_a467; // 0a30:0167
db dummyf_a468; // 0a30:0168
db dummyf_a469; // 0a30:0169
db dummyf_a46a;
db __ascottwoodrick; // 0a30:016b
db dummyf_a46c; // 0a30:016c
db dummyf_a46d; // 0a30:016d
db dummyf_a46e; // 0a30:016e
db dummyf_a46f; // 0a30:016f
db dummyf_a470; // 0a30:0170
db dummyf_a471; // 0a30:0171
db dummyf_a472; // 0a30:0172
db dummyf_a473; // 0a30:0173
db dummyf_a474; // 0a30:0174
db dummyf_a475; // 0a30:0175
db dummyf_a476; // 0a30:0176
db dummyf_a477; // 0a30:0177
db dummyf_a478; // 0a30:0178
db dummyf_a479;
db __amikebellantoni; // 0a30:017a
db dummyf_a47b; // 0a30:017b
db dummyf_a47c; // 0a30:017c
db dummyf_a47d; // 0a30:017d
db dummyf_a47e; // 0a30:017e
db dummyf_a47f; // 0a30:017f
db dummyf_a480; // 0a30:0180
db dummyf_a481; // 0a30:0181
db dummyf_a482; // 0a30:0182
db dummyf_a483; // 0a30:0183
db dummyf_a484; // 0a30:0184
db dummyf_a485; // 0a30:0185
db dummyf_a486; // 0a30:0186
db dummyf_a487; // 0a30:0187
db dummyf_a488; // 0a30:0188
db dummyf_a489;
db __agraphics; // 0a30:018a
db dummyf_a48b; // 0a30:018b
db dummyf_a48c; // 0a30:018c
db dummyf_a48d; // 0a30:018d
db dummyf_a48e; // 0a30:018e
db dummyf_a48f; // 0a30:018f
db dummyf_a490; // 0a30:0190
db dummyf_a491; // 0a30:0191
db dummyf_a492;
db __ascotforbes; // 0a30:0193
db dummyf_a494; // 0a30:0194
db dummyf_a495; // 0a30:0195
db dummyf_a496; // 0a30:0196
db dummyf_a497; // 0a30:0197
db dummyf_a498; // 0a30:0198
db dummyf_a499; // 0a30:0199
db dummyf_a49a; // 0a30:019a
db dummyf_a49b; // 0a30:019b
db dummyf_a49c; // 0a30:019c
db dummyf_a49d; // 0a30:019d
db dummyf_a49e;
db __aandreamuzeroll; // 0a30:019f
db dummyf_a4a0; // 0a30:01a0
db dummyf_a4a1; // 0a30:01a1
db dummyf_a4a2; // 0a30:01a2
db dummyf_a4a3; // 0a30:01a3
db dummyf_a4a4; // 0a30:01a4
db dummyf_a4a5; // 0a30:01a5
db dummyf_a4a6; // 0a30:01a6
db dummyf_a4a7; // 0a30:01a7
db dummyf_a4a8; // 0a30:01a8
db dummyf_a4a9; // 0a30:01a9
db dummyf_a4aa; // 0a30:01aa
db dummyf_a4ab; // 0a30:01ab
db dummyf_a4ac; // 0a30:01ac
db dummyf_a4ad; // 0a30:01ad
db dummyf_a4ae;
db __ajulieairoldi; // 0a30:01af
db dummyf_a4b0; // 0a30:01b0
db dummyf_a4b1; // 0a30:01b1
db dummyf_a4b2; // 0a30:01b2
db dummyf_a4b3; // 0a30:01b3
db dummyf_a4b4; // 0a30:01b4
db dummyf_a4b5; // 0a30:01b5
db dummyf_a4b6; // 0a30:01b6
db dummyf_a4b7; // 0a30:01b7
db dummyf_a4b8; // 0a30:01b8
db dummyf_a4b9; // 0a30:01b9
db dummyf_a4ba; // 0a30:01ba
db dummyf_a4bb; // 0a30:01bb
db dummyf_a4bc;
db __achinmeiyu; // 0a30:01bd
db dummyf_a4be; // 0a30:01be
db dummyf_a4bf; // 0a30:01bf
db dummyf_a4c0; // 0a30:01c0
db dummyf_a4c1; // 0a30:01c1
db dummyf_a4c2; // 0a30:01c2
db dummyf_a4c3; // 0a30:01c3
db dummyf_a4c4; // 0a30:01c4
db dummyf_a4c5; // 0a30:01c5
db dummyf_a4c6; // 0a30:01c6
db dummyf_a4c7; // 0a30:01c7
db dummyf_a4c8;
db __aerikcasey; // 0a30:01c9
db dummyf_a4ca; // 0a30:01ca
db dummyf_a4cb; // 0a30:01cb
db dummyf_a4cc; // 0a30:01cc
db dummyf_a4cd; // 0a30:01cd
db dummyf_a4ce; // 0a30:01ce
db dummyf_a4cf; // 0a30:01cf
db dummyf_a4d0; // 0a30:01d0
db dummyf_a4d1; // 0a30:01d1
db dummyf_a4d2; // 0a30:01d2
db dummyf_a4d3;
db __achrisbeatrice; // 0a30:01d4
db dummyf_a4d5; // 0a30:01d5
db dummyf_a4d6; // 0a30:01d6
db dummyf_a4d7; // 0a30:01d7
db dummyf_a4d8; // 0a30:01d8
db dummyf_a4d9; // 0a30:01d9
db dummyf_a4da; // 0a30:01da
db dummyf_a4db; // 0a30:01db
db dummyf_a4dc; // 0a30:01dc
db dummyf_a4dd; // 0a30:01dd
db dummyf_a4de; // 0a30:01de
db dummyf_a4df; // 0a30:01df
db dummyf_a4e0; // 0a30:01e0
db dummyf_a4e1; // 0a30:01e1
db dummyf_a4e2;
db __aheidimann; // 0a30:01e3
db dummyf_a4e4; // 0a30:01e4
db dummyf_a4e5; // 0a30:01e5
db dummyf_a4e6; // 0a30:01e6
db dummyf_a4e7; // 0a30:01e7
db dummyf_a4e8; // 0a30:01e8
db dummyf_a4e9; // 0a30:01e9
db dummyf_a4ea; // 0a30:01ea
db dummyf_a4eb; // 0a30:01eb
db dummyf_a4ec; // 0a30:01ec
db dummyf_a4ed;
db __alilgangster; // 0a30:01ee
db dummyf_a4ef; // 0a30:01ef
db dummyf_a4f0; // 0a30:01f0
db dummyf_a4f1; // 0a30:01f1
db dummyf_a4f2; // 0a30:01f2
db dummyf_a4f3; // 0a30:01f3
db dummyf_a4f4; // 0a30:01f4
db dummyf_a4f5; // 0a30:01f5
db dummyf_a4f6; // 0a30:01f6
db dummyf_a4f7; // 0a30:01f7
db dummyf_a4f8; // 0a30:01f8
db dummyf_a4f9; // 0a30:01f9
db dummyf_a4fa;
db __asoundandmusic; // 0a30:01fb
db dummyf_a4fc; // 0a30:01fc
db dummyf_a4fd; // 0a30:01fd
db dummyf_a4fe; // 0a30:01fe
db dummyf_a4ff; // 0a30:01ff
db dummyf_a500; // 0a30:0200
db dummyf_a501; // 0a30:0201
db dummyf_a502; // 0a30:0202
db dummyf_a503; // 0a30:0203
db dummyf_a504; // 0a30:0204
db dummyf_a505; // 0a30:0205
db dummyf_a506; // 0a30:0206
db dummyf_a507; // 0a30:0207
db dummyf_a508; // 0a30:0208
db dummyf_a509; // 0a30:0209
db dummyf_a50a;
db __achrisdenman; // 0a30:020b
db dummyf_a50c; // 0a30:020c
db dummyf_a50d; // 0a30:020d
db dummyf_a50e; // 0a30:020e
db dummyf_a50f; // 0a30:020f
db dummyf_a510; // 0a30:0210
db dummyf_a511; // 0a30:0211
db dummyf_a512; // 0a30:0212
db dummyf_a513; // 0a30:0213
db dummyf_a514; // 0a30:0214
db dummyf_a515; // 0a30:0215
db dummyf_a516; // 0a30:0216
db dummyf_a517;
db __ajasonprinaldi; // 0a30:0218
db dummyf_a519; // 0a30:0219
db dummyf_a51a; // 0a30:021a
db dummyf_a51b; // 0a30:021b
db dummyf_a51c; // 0a30:021c
db dummyf_a51d; // 0a30:021d
db dummyf_a51e; // 0a30:021e
db dummyf_a51f; // 0a30:021f
db dummyf_a520; // 0a30:0220
db dummyf_a521; // 0a30:0221
db dummyf_a522; // 0a30:0222
db dummyf_a523; // 0a30:0223
db dummyf_a524; // 0a30:0224
db dummyf_a525; // 0a30:0225
db dummyf_a526; // 0a30:0226
db dummyf_a527;
db __adocumentation; // 0a30:0228
db dummyf_a529; // 0a30:0229
db dummyf_a52a; // 0a30:022a
db dummyf_a52b; // 0a30:022b
db dummyf_a52c; // 0a30:022c
db dummyf_a52d; // 0a30:022d
db dummyf_a52e; // 0a30:022e
db dummyf_a52f; // 0a30:022f
db dummyf_a530; // 0a30:0230
db dummyf_a531; // 0a30:0231
db dummyf_a532; // 0a30:0232
db dummyf_a533; // 0a30:0233
db dummyf_a534; // 0a30:0234
db dummyf_a535;
db __ajenniferhawtho; // 0a30:0236
db dummyf_a537; // 0a30:0237
db dummyf_a538; // 0a30:0238
db dummyf_a539; // 0a30:0239
db dummyf_a53a; // 0a30:023a
db dummyf_a53b; // 0a30:023b
db dummyf_a53c; // 0a30:023c
db dummyf_a53d; // 0a30:023d
db dummyf_a53e; // 0a30:023e
db dummyf_a53f; // 0a30:023f
db dummyf_a540; // 0a30:0240
db dummyf_a541; // 0a30:0241
db dummyf_a542; // 0a30:0242
db dummyf_a543; // 0a30:0243
db dummyf_a544; // 0a30:0244
db dummyf_a545; // 0a30:0245
db dummyf_a546; // 0a30:0246
db dummyf_a547; // 0a30:0247
db dummyf_a548;
db __aresearch; // 0a30:0249
db dummyf_a54a; // 0a30:024a
db dummyf_a54b; // 0a30:024b
db dummyf_a54c; // 0a30:024c
db dummyf_a54d; // 0a30:024d
db dummyf_a54e; // 0a30:024e
db dummyf_a54f; // 0a30:024f
db dummyf_a550; // 0a30:0250
db dummyf_a551;
db __asteveserafino; // 0a30:0252
db dummyf_a553; // 0a30:0253
db dummyf_a554; // 0a30:0254
db dummyf_a555; // 0a30:0255
db dummyf_a556; // 0a30:0256
db dummyf_a557; // 0a30:0257
db dummyf_a558; // 0a30:0258
db dummyf_a559; // 0a30:0259
db dummyf_a55a; // 0a30:025a
db dummyf_a55b; // 0a30:025b
db dummyf_a55c; // 0a30:025c
db dummyf_a55d; // 0a30:025d
db dummyf_a55e; // 0a30:025e
db dummyf_a55f; // 0a30:025f
db dummyf_a560;
db __achrisfoster; // 0a30:0261
db dummyf_a562; // 0a30:0262
db dummyf_a563; // 0a30:0263
db dummyf_a564; // 0a30:0264
db dummyf_a565; // 0a30:0265
db dummyf_a566; // 0a30:0266
db dummyf_a567; // 0a30:0267
db dummyf_a568; // 0a30:0268
db dummyf_a569; // 0a30:0269
db dummyf_a56a; // 0a30:026a
db dummyf_a56b; // 0a30:026b
db dummyf_a56c; // 0a30:026c
db dummyf_a56d;
db __amarksaunders; // 0a30:026e
db dummyf_a56f; // 0a30:026f
db dummyf_a570; // 0a30:0270
db dummyf_a571; // 0a30:0271
db dummyf_a572; // 0a30:0272
db dummyf_a573; // 0a30:0273
db dummyf_a574; // 0a30:0274
db dummyf_a575; // 0a30:0275
db dummyf_a576; // 0a30:0276
db dummyf_a577; // 0a30:0277
db dummyf_a578; // 0a30:0278
db dummyf_a579; // 0a30:0279
db dummyf_a57a; // 0a30:027a
db dummyf_a57b;
db __alaurelduff; // 0a30:027c
db dummyf_a57d; // 0a30:027d
db dummyf_a57e; // 0a30:027e
db dummyf_a57f; // 0a30:027f
db dummyf_a580; // 0a30:0280
db dummyf_a581; // 0a30:0281
db dummyf_a582; // 0a30:0282
db dummyf_a583; // 0a30:0283
db dummyf_a584; // 0a30:0284
db dummyf_a585; // 0a30:0285
db dummyf_a586; // 0a30:0286
db dummyf_a587;
db __atesting; // 0a30:0288
db dummyf_a589; // 0a30:0289
db dummyf_a58a; // 0a30:028a
db dummyf_a58b; // 0a30:028b
db dummyf_a58c; // 0a30:028c
db dummyf_a58d; // 0a30:028d
db dummyf_a58e; // 0a30:028e
db dummyf_a58f;
db __aedwardpugsley; // 0a30:0290
db dummyf_a591; // 0a30:0291
db dummyf_a592; // 0a30:0292
db dummyf_a593; // 0a30:0293
db dummyf_a594; // 0a30:0294
db dummyf_a595; // 0a30:0295
db dummyf_a596; // 0a30:0296
db dummyf_a597; // 0a30:0297
db dummyf_a598; // 0a30:0298
db dummyf_a599; // 0a30:0299
db dummyf_a59a; // 0a30:029a
db dummyf_a59b; // 0a30:029b
db dummyf_a59c; // 0a30:029c
db dummyf_a59d; // 0a30:029d
db dummyf_a59e;
db __asteveserafino_0; // 0a30:029f
db dummyf_a5a0; // 0a30:02a0
db dummyf_a5a1; // 0a30:02a1
db dummyf_a5a2; // 0a30:02a2
db dummyf_a5a3; // 0a30:02a3
db dummyf_a5a4; // 0a30:02a4
db dummyf_a5a5; // 0a30:02a5
db dummyf_a5a6; // 0a30:02a6
db dummyf_a5a7; // 0a30:02a7
db dummyf_a5a8; // 0a30:02a8
db dummyf_a5a9; // 0a30:02a9
db dummyf_a5aa; // 0a30:02aa
db dummyf_a5ab; // 0a30:02ab
db dummyf_a5ac; // 0a30:02ac
db dummyf_a5ad;
db __agregorkoomey; // 0a30:02ae
db dummyf_a5af; // 0a30:02af
db dummyf_a5b0; // 0a30:02b0
db dummyf_a5b1; // 0a30:02b1
db dummyf_a5b2; // 0a30:02b2
db dummyf_a5b3; // 0a30:02b3
db dummyf_a5b4; // 0a30:02b4
db dummyf_a5b5; // 0a30:02b5
db dummyf_a5b6; // 0a30:02b6
db dummyf_a5b7; // 0a30:02b7
db dummyf_a5b8; // 0a30:02b8
db dummyf_a5b9; // 0a30:02b9
db dummyf_a5ba; // 0a30:02ba
db dummyf_a5bb;
db __aglennoliver; // 0a30:02bc
db dummyf_a5bd; // 0a30:02bd
db dummyf_a5be; // 0a30:02be
db dummyf_a5bf; // 0a30:02bf
db dummyf_a5c0; // 0a30:02c0
db dummyf_a5c1; // 0a30:02c1
db dummyf_a5c2; // 0a30:02c2
db dummyf_a5c3; // 0a30:02c3
db dummyf_a5c4; // 0a30:02c4
db dummyf_a5c5; // 0a30:02c5
db dummyf_a5c6; // 0a30:02c6
db dummyf_a5c7; // 0a30:02c7
db dummyf_a5c8;
db __awilliambarnard; // 0a30:02c9
db dummyf_a5ca; // 0a30:02ca
db dummyf_a5cb; // 0a30:02cb
db dummyf_a5cc; // 0a30:02cc
db dummyf_a5cd; // 0a30:02cd
db dummyf_a5ce; // 0a30:02ce
db dummyf_a5cf; // 0a30:02cf
db dummyf_a5d0; // 0a30:02d0
db dummyf_a5d1; // 0a30:02d1
db dummyf_a5d2; // 0a30:02d2
db dummyf_a5d3; // 0a30:02d3
db dummyf_a5d4; // 0a30:02d4
db dummyf_a5d5; // 0a30:02d5
db dummyf_a5d6; // 0a30:02d6
db dummyf_a5d7; // 0a30:02d7
db dummyf_a5d8;
db __ahoseabattles; // 0a30:02d9
db dummyf_a5da; // 0a30:02da
db dummyf_a5db; // 0a30:02db
db dummyf_a5dc; // 0a30:02dc
db dummyf_a5dd; // 0a30:02dd
db dummyf_a5de; // 0a30:02de
db dummyf_a5df; // 0a30:02df
db dummyf_a5e0; // 0a30:02e0
db dummyf_a5e1; // 0a30:02e1
db dummyf_a5e2; // 0a30:02e2
db dummyf_a5e3; // 0a30:02e3
db dummyf_a5e4; // 0a30:02e4
db dummyf_a5e5; // 0a30:02e5
db dummyf_a5e6;
db __alouisely; // 0a30:02e7
db dummyf_a5e8; // 0a30:02e8
db dummyf_a5e9; // 0a30:02e9
db dummyf_a5ea; // 0a30:02ea
db dummyf_a5eb; // 0a30:02eb
db dummyf_a5ec; // 0a30:02ec
db dummyf_a5ed; // 0a30:02ed
db dummyf_a5ee; // 0a30:02ee
db dummyf_a5ef; // 0a30:02ef
db dummyf_a5f0;
db __achrisfoster_0; // 0a30:02f1
db dummyf_a5f2; // 0a30:02f2
db dummyf_a5f3; // 0a30:02f3
db dummyf_a5f4; // 0a30:02f4
db dummyf_a5f5; // 0a30:02f5
db dummyf_a5f6; // 0a30:02f6
db dummyf_a5f7; // 0a30:02f7
db dummyf_a5f8; // 0a30:02f8
db dummyf_a5f9; // 0a30:02f9
db dummyf_a5fa; // 0a30:02fa
db dummyf_a5fb; // 0a30:02fb
db dummyf_a5fc; // 0a30:02fc
db dummyf_a5fd;
db __adavidhamilton; // 0a30:02fe
db dummyf_a5ff; // 0a30:02ff
db dummyf_a600; // 0a30:0300
db dummyf_a601; // 0a30:0301
db dummyf_a602; // 0a30:0302
db dummyf_a603; // 0a30:0303
db dummyf_a604; // 0a30:0304
db dummyf_a605; // 0a30:0305
db dummyf_a606; // 0a30:0306
db dummyf_a607; // 0a30:0307
db dummyf_a608; // 0a30:0308
db dummyf_a609; // 0a30:0309
db dummyf_a60a; // 0a30:030a
db dummyf_a60b; // 0a30:030b
db dummyf_a60c;
db __aarlonharris; // 0a30:030d
db dummyf_a60e; // 0a30:030e
db dummyf_a60f; // 0a30:030f
db dummyf_a610; // 0a30:0310
db dummyf_a611; // 0a30:0311
db dummyf_a612; // 0a30:0312
db dummyf_a613; // 0a30:0313
db dummyf_a614; // 0a30:0314
db dummyf_a615; // 0a30:0315
db dummyf_a616; // 0a30:0316
db dummyf_a617; // 0a30:0317
db dummyf_a618; // 0a30:0318
db dummyf_a619;
db __ajenniferhawtho_0; // 0a30:031a
db dummyf_a61b; // 0a30:031b
db dummyf_a61c; // 0a30:031c
db dummyf_a61d; // 0a30:031d
db dummyf_a61e; // 0a30:031e
db dummyf_a61f; // 0a30:031f
db dummyf_a620; // 0a30:0320
db dummyf_a621; // 0a30:0321
db dummyf_a622; // 0a30:0322
db dummyf_a623; // 0a30:0323
db dummyf_a624; // 0a30:0324
db dummyf_a625; // 0a30:0325
db dummyf_a626; // 0a30:0326
db dummyf_a627; // 0a30:0327
db dummyf_a628; // 0a30:0328
db dummyf_a629; // 0a30:0329
db dummyf_a62a; // 0a30:032a
db dummyf_a62b; // 0a30:032b
db dummyf_a62c;
db __amatthewkarl; // 0a30:032d
db dummyf_a62e; // 0a30:032e
db dummyf_a62f; // 0a30:032f
db dummyf_a630; // 0a30:0330
db dummyf_a631; // 0a30:0331
db dummyf_a632; // 0a30:0332
db dummyf_a633; // 0a30:0333
db dummyf_a634; // 0a30:0334
db dummyf_a635; // 0a30:0335
db dummyf_a636; // 0a30:0336
db dummyf_a637; // 0a30:0337
db dummyf_a638; // 0a30:0338
db dummyf_a639;
db __arobland; // 0a30:033a
db dummyf_a63b; // 0a30:033b
db dummyf_a63c; // 0a30:033c
db dummyf_a63d; // 0a30:033d
db dummyf_a63e; // 0a30:033e
db dummyf_a63f; // 0a30:033f
db dummyf_a640; // 0a30:0340
db dummyf_a641; // 0a30:0341
db dummyf_a642;
db __alarrymangum; // 0a30:0343
db dummyf_a644; // 0a30:0344
db dummyf_a645; // 0a30:0345
db dummyf_a646; // 0a30:0346
db dummyf_a647; // 0a30:0347
db dummyf_a648; // 0a30:0348
db dummyf_a649; // 0a30:0349
db dummyf_a64a; // 0a30:034a
db dummyf_a64b; // 0a30:034b
db dummyf_a64c; // 0a30:034c
db dummyf_a64d; // 0a30:034d
db dummyf_a64e; // 0a30:034e
db dummyf_a64f;
db __ablakephillips; // 0a30:0350
db dummyf_a651; // 0a30:0351
db dummyf_a652; // 0a30:0352
db dummyf_a653; // 0a30:0353
db dummyf_a654; // 0a30:0354
db dummyf_a655; // 0a30:0355
db dummyf_a656; // 0a30:0356
db dummyf_a657; // 0a30:0357
db dummyf_a658; // 0a30:0358
db dummyf_a659; // 0a30:0359
db dummyf_a65a; // 0a30:035a
db dummyf_a65b; // 0a30:035b
db dummyf_a65c; // 0a30:035c
db dummyf_a65d; // 0a30:035d
db dummyf_a65e;
db __acharlespugsley; // 0a30:035f
db dummyf_a660; // 0a30:0360
db dummyf_a661; // 0a30:0361
db dummyf_a662; // 0a30:0362
db dummyf_a663; // 0a30:0363
db dummyf_a664; // 0a30:0364
db dummyf_a665; // 0a30:0365
db dummyf_a666; // 0a30:0366
db dummyf_a667; // 0a30:0367
db dummyf_a668; // 0a30:0368
db dummyf_a669; // 0a30:0369
db dummyf_a66a; // 0a30:036a
db dummyf_a66b; // 0a30:036b
db dummyf_a66c; // 0a30:036c
db dummyf_a66d; // 0a30:036d
db dummyf_a66e;
db __ajamespugsley; // 0a30:036f
db dummyf_a670; // 0a30:0370
db dummyf_a671; // 0a30:0371
db dummyf_a672; // 0a30:0372
db dummyf_a673; // 0a30:0373
db dummyf_a674; // 0a30:0374
db dummyf_a675; // 0a30:0375
db dummyf_a676; // 0a30:0376
db dummyf_a677; // 0a30:0377
db dummyf_a678; // 0a30:0378
db dummyf_a679; // 0a30:0379
db dummyf_a67a; // 0a30:037a
db dummyf_a67b; // 0a30:037b
db dummyf_a67c;
db __ajennifer; // 0a30:037d
db dummyf_a67e; // 0a30:037e
db dummyf_a67f; // 0a30:037f
db dummyf_a680; // 0a30:0380
db dummyf_a681; // 0a30:0381
db dummyf_a682; // 0a30:0382
db dummyf_a683; // 0a30:0383
db dummyf_a684; // 0a30:0384
db dummyf_a685;
db __aschlickbernd; // 0a30:0386
db dummyf_a687; // 0a30:0387
db dummyf_a688; // 0a30:0388
db dummyf_a689; // 0a30:0389
db dummyf_a68a; // 0a30:038a
db dummyf_a68b; // 0a30:038b
db dummyf_a68c; // 0a30:038c
db dummyf_a68d; // 0a30:038d
db dummyf_a68e; // 0a30:038e
db dummyf_a68f; // 0a30:038f
db dummyf_a690; // 0a30:0390
db dummyf_a691; // 0a30:0391
db dummyf_a692;
db __arobertsnowden; // 0a30:0393
db dummyf_a694; // 0a30:0394
db dummyf_a695; // 0a30:0395
db dummyf_a696; // 0a30:0396
db dummyf_a697; // 0a30:0397
db dummyf_a698; // 0a30:0398
db dummyf_a699; // 0a30:0399
db dummyf_a69a; // 0a30:039a
db dummyf_a69b; // 0a30:039b
db dummyf_a69c; // 0a30:039c
db dummyf_a69d; // 0a30:039d
db dummyf_a69e; // 0a30:039e
db dummyf_a69f; // 0a30:039f
db dummyf_a6a0; // 0a30:03a0
db dummyf_a6a1;
db __amarkspiro; // 0a30:03a2
db dummyf_a6a3; // 0a30:03a3
db dummyf_a6a4; // 0a30:03a4
db dummyf_a6a5; // 0a30:03a5
db dummyf_a6a6; // 0a30:03a6
db dummyf_a6a7; // 0a30:03a7
db dummyf_a6a8; // 0a30:03a8
db dummyf_a6a9; // 0a30:03a9
db dummyf_a6aa; // 0a30:03aa
db dummyf_a6ab; // 0a30:03ab
db dummyf_a6ac;
db __adetttlscr_0; // 0a30:03ad
db dummyf_a6ae; // 0a30:03ae
db dummyf_a6af; // 0a30:03af
db dummyf_a6b0; // 0a30:03b0
db dummyf_a6b1; // 0a30:03b1
db dummyf_a6b2; // 0a30:03b2
db dummyf_a6b3; // 0a30:03b3
db dummyf_a6b4; // 0a30:03b4
db dummyf_a6b5; // 0a30:03b5
db dummyf_a6b6; // 0a30:03b6
db dummyf_a6b7;
db __aintcar1scr; // 0a30:03b8
db dummyf_a6b9; // 0a30:03b9
db dummyf_a6ba; // 0a30:03ba
db dummyf_a6bb; // 0a30:03bb
db dummyf_a6bc; // 0a30:03bc
db dummyf_a6bd; // 0a30:03bd
db dummyf_a6be; // 0a30:03be
db dummyf_a6bf; // 0a30:03bf
db dummyf_a6c0; // 0a30:03c0
db dummyf_a6c1; // 0a30:03c1
db dummyf_a6c2; // 0a30:03c2
db dummyf_a6c3;
db __aintpal1scr_0; // 0a30:03c4
db dummyf_a6c5; // 0a30:03c5
db dummyf_a6c6; // 0a30:03c6
db dummyf_a6c7; // 0a30:03c7
db dummyf_a6c8; // 0a30:03c8
db dummyf_a6c9; // 0a30:03c9
db dummyf_a6ca; // 0a30:03ca
db dummyf_a6cb; // 0a30:03cb
db dummyf_a6cc; // 0a30:03cc
db dummyf_a6cd; // 0a30:03cd
db dummyf_a6ce; // 0a30:03ce
db dummyf_a6cf;
db __adet001exe; // 0a30:03d0
db dummyf_a6d1; // 0a30:03d1
db dummyf_a6d2; // 0a30:03d2
db dummyf_a6d3; // 0a30:03d3
db dummyf_a6d4; // 0a30:03d4
db dummyf_a6d5; // 0a30:03d5
db dummyf_a6d6; // 0a30:03d6
db dummyf_a6d7; // 0a30:03d7
db dummyf_a6d8; // 0a30:03d8
db dummyf_a6d9; // 0a30:03d9
db dummyf_a6da;
db __format; // 0a30:03db
db dummyf_a6dc; // 0a30:03dc
db dummyf_a6dd; // 0a30:03dd
db dummyf_a6de;
db __acannotfarmallo; // 0a30:03df
db dummyf_a6e0[32]; // 0a30:03e0
db dummyf_a700; // 0a30:0400
db dummyf_a701; // 0a30:0401
db dummyf_a702; // 0a30:0402
db dummyf_a703; // 0a30:0403
db dummyf_a704; // 0a30:0404
db dummyf_a705; // 0a30:0405
db dummyf_a706; // 0a30:0406
db dummyf_a707;
db __acannotfarmallo_0; // 0a30:0408
db dummyf_a709[32]; // 0a30:0409
db dummyf_a729; // 0a30:0429
db dummyf_a72a; // 0a30:042a
db dummyf_a72b; // 0a30:042b
db dummyf_a72c; // 0a30:042c
db dummyf_a72d; // 0a30:042d
db dummyf_a72e; // 0a30:042e
db dummyf_a72f; // 0a30:042f
db dummyf_a730; // 0a30:0430
db dummyf_a731;
db __acannotfarmallo_1; // 0a30:0432
db dummyf_a733; // 0a30:0433
db dummyf_a734; // 0a30:0434
db dummyf_a735; // 0a30:0435
db dummyf_a736; // 0a30:0436
db dummyf_a737; // 0a30:0437
db dummyf_a738; // 0a30:0438
db dummyf_a739; // 0a30:0439
db dummyf_a73a; // 0a30:043a
db dummyf_a73b; // 0a30:043b
db dummyf_a73c; // 0a30:043c
db dummyf_a73d; // 0a30:043d
db dummyf_a73e; // 0a30:043e
db dummyf_a73f; // 0a30:043f
db dummyf_a740; // 0a30:0440
db dummyf_a741; // 0a30:0441
db dummyf_a742; // 0a30:0442
db dummyf_a743; // 0a30:0443
db dummyf_a744; // 0a30:0444
db dummyf_a745; // 0a30:0445
db dummyf_a746; // 0a30:0446
db dummyf_a747; // 0a30:0447
db dummyf_a748; // 0a30:0448
db dummyf_a749; // 0a30:0449
db dummyf_a74a; // 0a30:044a
db dummyf_a74b;
db __acannotfarmallo_2; // 0a30:044c
db dummyf_a74d; // 0a30:044d
db dummyf_a74e; // 0a30:044e
db dummyf_a74f; // 0a30:044f
db dummyf_a750; // 0a30:0450
db dummyf_a751; // 0a30:0451
db dummyf_a752; // 0a30:0452
db dummyf_a753; // 0a30:0453
db dummyf_a754; // 0a30:0454
db dummyf_a755; // 0a30:0455
db dummyf_a756; // 0a30:0456
db dummyf_a757; // 0a30:0457
db dummyf_a758; // 0a30:0458
db dummyf_a759; // 0a30:0459
db dummyf_a75a; // 0a30:045a
db dummyf_a75b; // 0a30:045b
db dummyf_a75c; // 0a30:045c
db dummyf_a75d; // 0a30:045d
db dummyf_a75e; // 0a30:045e
db dummyf_a75f; // 0a30:045f
db dummyf_a760; // 0a30:0460
db dummyf_a761; // 0a30:0461
db dummyf_a762; // 0a30:0462
db dummyf_a763; // 0a30:0463
db dummyf_a764; // 0a30:0464
db dummyf_a765; // 0a30:0465
db dummyf_a766;
db __acannotopenfile; // 0a30:0467
db dummyf_a768; // 0a30:0468
db dummyf_a769; // 0a30:0469
db dummyf_a76a; // 0a30:046a
db dummyf_a76b; // 0a30:046b
db dummyf_a76c; // 0a30:046c
db dummyf_a76d; // 0a30:046d
db dummyf_a76e; // 0a30:046e
db dummyf_a76f; // 0a30:046f
db dummyf_a770; // 0a30:0470
db dummyf_a771; // 0a30:0471
db dummyf_a772; // 0a30:0472
db dummyf_a773; // 0a30:0473
db dummyf_a774; // 0a30:0474
db dummyf_a775; // 0a30:0475
db dummyf_a776; // 0a30:0476
db dummyf_a777; // 0a30:0477
db dummyf_a778; // 0a30:0478
db dummyf_a779;
db __acannotfseekint; // 0a30:047a
db dummyf_a77b; // 0a30:047b
db dummyf_a77c; // 0a30:047c
db dummyf_a77d; // 0a30:047d
db dummyf_a77e; // 0a30:047e
db dummyf_a77f; // 0a30:047f
db dummyf_a780; // 0a30:0480
db dummyf_a781; // 0a30:0481
db dummyf_a782; // 0a30:0482
db dummyf_a783; // 0a30:0483
db dummyf_a784; // 0a30:0484
db dummyf_a785; // 0a30:0485
db dummyf_a786; // 0a30:0486
db dummyf_a787; // 0a30:0487
db dummyf_a788; // 0a30:0488
db dummyf_a789; // 0a30:0489
db dummyf_a78a; // 0a30:048a
db dummyf_a78b; // 0a30:048b
db dummyf_a78c; // 0a30:048c
db dummyf_a78d; // 0a30:048d
db dummyf_a78e; // 0a30:048e
db dummyf_a78f; // 0a30:048f
db dummyf_a790; // 0a30:0490
db dummyf_a791;
db __acannotwritetof; // 0a30:0492
db dummyf_a793; // 0a30:0493
db dummyf_a794; // 0a30:0494
db dummyf_a795; // 0a30:0495
db dummyf_a796; // 0a30:0496
db dummyf_a797; // 0a30:0497
db dummyf_a798; // 0a30:0498
db dummyf_a799; // 0a30:0499
db dummyf_a79a; // 0a30:049a
db dummyf_a79b; // 0a30:049b
db dummyf_a79c; // 0a30:049c
db dummyf_a79d; // 0a30:049d
db dummyf_a79e; // 0a30:049e
db dummyf_a79f; // 0a30:049f
db dummyf_a7a0; // 0a30:04a0
db dummyf_a7a1; // 0a30:04a1
db dummyf_a7a2; // 0a30:04a2
db dummyf_a7a3; // 0a30:04a3
db dummyf_a7a4; // 0a30:04a4
db dummyf_a7a5; // 0a30:04a5
db dummyf_a7a6; // 0a30:04a6
db dummyf_a7a7; // 0a30:04a7
db dummyf_a7a8;
db __acannotreadfrom; // 0a30:04a9
db dummyf_a7aa; // 0a30:04aa
db dummyf_a7ab; // 0a30:04ab
db dummyf_a7ac; // 0a30:04ac
db dummyf_a7ad; // 0a30:04ad
db dummyf_a7ae; // 0a30:04ae
db dummyf_a7af; // 0a30:04af
db dummyf_a7b0; // 0a30:04b0
db dummyf_a7b1; // 0a30:04b1
db dummyf_a7b2; // 0a30:04b2
db dummyf_a7b3; // 0a30:04b3
db dummyf_a7b4; // 0a30:04b4
db dummyf_a7b5; // 0a30:04b5
db dummyf_a7b6; // 0a30:04b6
db dummyf_a7b7; // 0a30:04b7
db dummyf_a7b8; // 0a30:04b8
db dummyf_a7b9; // 0a30:04b9
db dummyf_a7ba; // 0a30:04ba
db dummyf_a7bb; // 0a30:04bb
db dummyf_a7bc; // 0a30:04bc
db dummyf_a7bd; // 0a30:04bd
db dummyf_a7be; // 0a30:04be
db dummyf_a7bf; // 0a30:04bf
db dummyf_a7c0;
db __acannotclosefil; // 0a30:04c1
db dummyf_a7c2; // 0a30:04c2
db dummyf_a7c3; // 0a30:04c3
db dummyf_a7c4; // 0a30:04c4
db dummyf_a7c5; // 0a30:04c5
db dummyf_a7c6; // 0a30:04c6
db dummyf_a7c7; // 0a30:04c7
db dummyf_a7c8; // 0a30:04c8
db dummyf_a7c9; // 0a30:04c9
db dummyf_a7ca; // 0a30:04ca
db dummyf_a7cb; // 0a30:04cb
db dummyf_a7cc; // 0a30:04cc
db dummyf_a7cd; // 0a30:04cd
db dummyf_a7ce; // 0a30:04ce
db dummyf_a7cf; // 0a30:04cf
db dummyf_a7d0; // 0a30:04d0
db dummyf_a7d1; // 0a30:04d1
db dummyf_a7d2; // 0a30:04d2
db dummyf_a7d3; // 0a30:04d3
db dummyf_a7d4;
db __arb; // 0a30:04d5
db dummyf_a7d6; // 0a30:04d6
db dummyf_a7d7;
db __arb_2; // 0a30:04d8
db dummyf_a7d9; // 0a30:04d9
db dummyf_a7da;
db __arb_4; // 0a30:04db
db dummyf_a7dc; // 0a30:04dc
db dummyf_a7dd;
db __adetcfg00bin; // 0a30:04de
db dummyf_a7df; // 0a30:04df
db dummyf_a7e0; // 0a30:04e0
db dummyf_a7e1; // 0a30:04e1
db dummyf_a7e2; // 0a30:04e2
db dummyf_a7e3; // 0a30:04e3
db dummyf_a7e4; // 0a30:04e4
db dummyf_a7e5; // 0a30:04e5
db dummyf_a7e6; // 0a30:04e6
db dummyf_a7e7; // 0a30:04e7
db dummyf_a7e8; // 0a30:04e8
db dummyf_a7e9; // 0a30:04e9
db dummyf_a7ea;
char __arb_5[3]; // 0a30:04eb
db __adetcfg00bin_0; // 0a30:04ee
db dummyf_a7ef; // 0a30:04ef
db dummyf_a7f0; // 0a30:04f0
db dummyf_a7f1; // 0a30:04f1
db dummyf_a7f2; // 0a30:04f2
db dummyf_a7f3; // 0a30:04f3
db dummyf_a7f4; // 0a30:04f4
db dummyf_a7f5; // 0a30:04f5
db dummyf_a7f6; // 0a30:04f6
db dummyf_a7f7; // 0a30:04f7
db dummyf_a7f8; // 0a30:04f8
db dummyf_a7f9; // 0a30:04f9
db dummyf_a7fa;
db __awb; // 0a30:04fb
db dummyf_a7fc; // 0a30:04fc
db dummyf_a7fd;
db __aspark003bin; // 0a30:04fe
db dummyf_a7ff; // 0a30:04ff
db dummyf_a800; // 0a30:0500
db dummyf_a801; // 0a30:0501
db dummyf_a802; // 0a30:0502
db dummyf_a803; // 0a30:0503
db dummyf_a804; // 0a30:0504
db dummyf_a805; // 0a30:0505
db dummyf_a806; // 0a30:0506
db dummyf_a807; // 0a30:0507
db dummyf_a808; // 0a30:0508
db dummyf_a809; // 0a30:0509
db dummyf_a80a;
db __mode; // 0a30:050b
db dummyf_a80c; // 0a30:050c
db dummyf_a80d;
db __aintro01scr; // 0a30:050e
db dummyf_a80f; // 0a30:050f
db dummyf_a810; // 0a30:0510
db dummyf_a811; // 0a30:0511
db dummyf_a812; // 0a30:0512
db dummyf_a813; // 0a30:0513
db dummyf_a814; // 0a30:0514
db dummyf_a815; // 0a30:0515
db dummyf_a816; // 0a30:0516
db dummyf_a817; // 0a30:0517
db dummyf_a818; // 0a30:0518
db dummyf_a819;
db __acannotfindmusi; // 0a30:051a
db dummyf_a81b; // 0a30:051b
db dummyf_a81c; // 0a30:051c
db dummyf_a81d; // 0a30:051d
db dummyf_a81e; // 0a30:051e
db dummyf_a81f; // 0a30:051f
db dummyf_a820; // 0a30:0520
db dummyf_a821; // 0a30:0521
db dummyf_a822; // 0a30:0522
db dummyf_a823; // 0a30:0523
db dummyf_a824; // 0a30:0524
db dummyf_a825; // 0a30:0525
db dummyf_a826; // 0a30:0526
db dummyf_a827; // 0a30:0527
db dummyf_a828; // 0a30:0528
db dummyf_a829; // 0a30:0529
db dummyf_a82a; // 0a30:052a
db dummyf_a82b; // 0a30:052b
db dummyf_a82c; // 0a30:052c
db dummyf_a82d; // 0a30:052d
db dummyf_a82e; // 0a30:052e
db dummyf_a82f; // 0a30:052f
db dummyf_a830; // 0a30:0530
db dummyf_a831; // 0a30:0531
db dummyf_a832; // 0a30:0532
db dummyf_a833; // 0a30:0533
db dummyf_a834;
db __acannotfarmallo_3; // 0a30:0535
db dummyf_a836[32]; // 0a30:0536
db dummyf_a856; // 0a30:0556
db dummyf_a857; // 0a30:0557
db dummyf_a858; // 0a30:0558
db dummyf_a859;
db __adet0; // 0a30:055a
db dummyf_a85b; // 0a30:055b
db dummyf_a85c; // 0a30:055c
db dummyf_a85d; // 0a30:055d
db dummyf_a85e;
db __a0; // 0a30:055f
db dummyf_a860;
db __axmi; // 0a30:0561
db dummyf_a862; // 0a30:0562
db dummyf_a863; // 0a30:0563
db dummyf_a864; // 0a30:0564
db dummyf_a865;
db __arb_0; // 0a30:0566
db dummyf_a867; // 0a30:0567
db dummyf_a868;
db __asamplead; // 0a30:0569
db dummyf_a86a; // 0a30:056a
db dummyf_a86b; // 0a30:056b
db dummyf_a86c; // 0a30:056c
db dummyf_a86d; // 0a30:056d
db dummyf_a86e; // 0a30:056e
db dummyf_a86f; // 0a30:056f
db dummyf_a870; // 0a30:0570
db dummyf_a871; // 0a30:0571
db dummyf_a872;
db __arb_1; // 0a30:0573
db dummyf_a874; // 0a30:0574
db dummyf_a875;
db __acannotfindmusi_0; // 0a30:0576
db dummyf_a877; // 0a30:0577
db dummyf_a878; // 0a30:0578
db dummyf_a879; // 0a30:0579
db dummyf_a87a; // 0a30:057a
db dummyf_a87b; // 0a30:057b
db dummyf_a87c; // 0a30:057c
db dummyf_a87d; // 0a30:057d
db dummyf_a87e; // 0a30:057e
db dummyf_a87f; // 0a30:057f
db dummyf_a880; // 0a30:0580
db dummyf_a881; // 0a30:0581
db dummyf_a882; // 0a30:0582
db dummyf_a883; // 0a30:0583
db dummyf_a884; // 0a30:0584
db dummyf_a885; // 0a30:0585
db dummyf_a886; // 0a30:0586
db dummyf_a887; // 0a30:0587
db dummyf_a888; // 0a30:0588
db dummyf_a889; // 0a30:0589
db dummyf_a88a; // 0a30:058a
db dummyf_a88b; // 0a30:058b
db dummyf_a88c; // 0a30:058c
db dummyf_a88d; // 0a30:058d
db dummyf_a88e; // 0a30:058e
db dummyf_a88f; // 0a30:058f
db dummyf_a890;
db __arb_3; // 0a30:0591
db dummyf_a892; // 0a30:0592
db dummyf_a893;
db byte_18e74; // 0a30:0594
db byte_18e75; // 0a30:0595
db dummyf_a896;
db byte_18e77; // 0a30:0597
db dummyf_a898;
db byte_18e79; // 0a30:0599
db dummyf_a89a;
db byte_18e7b; // 0a30:059b
db byte_18e7c; // 0a30:059c
db dummyf_a89d;
db byte_18e7e; // 0a30:059e
db dummyf_a89f;
db byte_18e80; // 0a30:05a0
db dummyf_a8a1;
db byte_18e82; // 0a30:05a2
db dummyf_a8a3;
db byte_18e84; // 0a30:05a4
db dummyf_a8a5;
db byte_18e86; // 0a30:05a6
db dummyf_a8a7;
db byte_18e88; // 0a30:05a8
db dummyf_a8a9;
dw word_18e8a; // 0a30:05aa
db byte_18e8c; // 0a30:05ac
db dummyf_a8ad;
db __a0123456789abcd; // 0a30:05ae
db dummyf_a8af; // 0a30:05af
db dummyf_a8b0; // 0a30:05b0
db dummyf_a8b1; // 0a30:05b1
db dummyf_a8b2; // 0a30:05b2
db dummyf_a8b3; // 0a30:05b3
db dummyf_a8b4; // 0a30:05b4
db dummyf_a8b5; // 0a30:05b5
db dummyf_a8b6; // 0a30:05b6
db dummyf_a8b7; // 0a30:05b7
db dummyf_a8b8; // 0a30:05b8
db dummyf_a8b9; // 0a30:05b9
db dummyf_a8ba; // 0a30:05ba
db dummyf_a8bb; // 0a30:05bb
db dummyf_a8bc; // 0a30:05bc
db dummyf_a8bd; // 0a30:05bd
db dummyf_a8be;
db dummyf_a8bf;
db byte_18ea0; // 0a30:05c0
db dummyf_a8c1;
db ____ctype; // 0a30:05c2
db byte_18ea3; // 0a30:05c3
db dummyf_a8c4[32]; // 0a30:05c4
db dummyf_a8e4[32]; // 0a30:05e4
db dummyf_a904[32]; // 0a30:0604
db dummyf_a924[32]; // 0a30:0624
db dummyf_a944[32]; // 0a30:0644
db dummyf_a964[32]; // 0a30:0664
db dummyf_a984[32]; // 0a30:0684
db dummyf_a9a4[32]; // 0a30:06a4
dd __off_18fa4; // 0a30:06c4
dd __off_18fa8; // 0a30:06c8
db __off_18fac; // 0a30:06cc
db dummyf_a9cd; // 0a30:06cd
db dummyf_a9ce;
db dummyf_a9cf; // 0a30:06cf
db dummyf_a9d0;
db dummyf_a9d1;
dw word_18fb2; // 0a30:06d2
db byte_18fb4; // 0a30:06d4
db dummyf_a9d5;
db dummyf_a9d6;
db dummyf_a9d7;
db dummyf_a9d8;
db dummyf_a9d9;
db dummyf_a9da;
db dummyf_a9db;
db dummyf_a9dc;
db dummyf_a9dd;
db dummyf_a9de;
db dummyf_a9df;
db dummyf_a9e0;
db dummyf_a9e1;
db dummyf_a9e2; // 0a30:06e2
db dummyf_a9e3; // 0a30:06e3
db dummyf_a9e4;
db dummyf_a9e5;
dw word_18fc6; // 0a30:06e6
db byte_18fc8; // 0a30:06e8
db dummyf_a9e9[32]; // 0a30:06e9
db dummyf_aa09[32]; // 0a30:0709
db dummyf_aa29[32]; // 0a30:0729
db dummyf_aa49[32]; // 0a30:0749
db dummyf_aa69[32]; // 0a30:0769
db dummyf_aa89[32]; // 0a30:0789
db dummyf_aaa9[32]; // 0a30:07a9
db dummyf_aac9[32]; // 0a30:07c9
db dummyf_aae9[32]; // 0a30:07e9
db dummyf_ab09[32]; // 0a30:0809
db dummyf_ab29[32]; // 0a30:0829
db dummyf_ab49;
db dummyf_ab4a;
db dummyf_ab4b;
db dummyf_ab4c;
db dummyf_ab4d;
db dummyf_ab4e;
db dummyf_ab4f;
db dummyf_ab50;
db dummyf_ab51;
db dummyf_ab52;
db dummyf_ab53;
db dummyf_ab54;
db dummyf_ab55;
db dummyf_ab56;
db dummyf_ab57;
db dummyf_ab58;
db dummyf_ab59;
db dummyf_ab5a;
db dummyf_ab5b;
db dummyf_ab5c;
db dummyf_ab5d;
db dummyf_ab5e;
db dummyf_ab5f;
dw word_19140; // 0a30:0860
db dummyf_ab62[32]; // 0a30:0862
db dummyf_ab82;
db dummyf_ab83;
db dummyf_ab84;
db dummyf_ab85;
db dummyf_ab86;
db dummyf_ab87;
db dummyf_ab88;
db dummyf_ab89;
db byte_1916a; // 0a30:088a
db dummyf_ab8b; // 0a30:088b
db byte_1916c; // 0a30:088c
db dummyf_ab8d; // 0a30:088d
db byte_1916e; // 0a30:088e
db dummyf_ab8f[32]; // 0a30:088f
db dummyf_abaf[32]; // 0a30:08af
db dummyf_abcf[32]; // 0a30:08cf
db dummyf_abef; // 0a30:08ef
db dummyf_abf0; // 0a30:08f0
db dummyf_abf1; // 0a30:08f1
db dummyf_abf2;
db dummyf_abf3;
db dummyf_abf4; // 0a30:08f4
db dummyf_abf5; // 0a30:08f5
db dummyf_abf6; // 0a30:08f6
db dummyf_abf7; // 0a30:08f7
db dummyf_abf8;
db dummyf_abf9; // 0a30:08f9
db dummyf_abfa; // 0a30:08fa
db dummyf_abfb; // 0a30:08fb
db dummyf_abfc; // 0a30:08fc
db dummyf_abfd;
db dummyf_abfe; // 0a30:08fe
db dummyf_abff; // 0a30:08ff
db dummyf_ac00; // 0a30:0900
db dummyf_ac01; // 0a30:0901
db dummyf_ac02;
db dummyf_ac03;
dw word_191e4; // 0a30:0904
db __anull; // 0a30:0906
db dummyf_ac07[32]; // 0a30:0907
db dummyf_ac27[32]; // 0a30:0927
db dummyf_ac47[32]; // 0a30:0947
db dummyf_ac67; // 0a30:0967
db dummyf_ac68; // 0a30:0968
db dummyf_ac69; // 0a30:0969
db dummyf_ac6a; // 0a30:096a
db dummyf_ac6b; // 0a30:096b
db dummyf_ac6c; // 0a30:096c
db dummyf_ac6d;
db byte_1924e; // 0a30:096e
db dummyf_ac6f;
db byte_19250; // 0a30:0970
db byte_19251; // 0a30:0971
db byte_19252; // 0a30:0972
db byte_19253; // 0a30:0973
db byte_19254; // 0a30:0974
db byte_19255; // 0a30:0975
db byte_19256; // 0a30:0976
db byte_19257; // 0a30:0977
db byte_19258; // 0a30:0978
db byte_19259; // 0a30:0979
db byte_1925a; // 0a30:097a
dw word_1925b; // 0a30:097b
dw word_1925d; // 0a30:097d
dw word_1925f; // 0a30:097f
char __acompaq[7]; // 0a30:0981
db __aprintscanffloa; // 0a30:0988
db dummyf_ac89[32]; // 0a30:0989
db dummyf_aca9; // 0a30:09a9
db dummyf_acaa; // 0a30:09aa
db dummyf_acab; // 0a30:09ab
db dummyf_acac; // 0a30:09ac
db dummyf_acad; // 0a30:09ad
db dummyf_acae; // 0a30:09ae
db dummyf_acaf; // 0a30:09af
db dummyf_acb0; // 0a30:09b0
db dummyf_acb1; // 0a30:09b1
db dummyf_acb2; // 0a30:09b2
db dummyf_acb3; // 0a30:09b3
db dummyf_acb4; // 0a30:09b4
db dummyf_acb5; // 0a30:09b5
db dummyf_acb6; // 0a30:09b6
db dummyf_acb7; // 0a30:09b7
db dummyf_acb8; // 0a30:09b8
db dummyf_acb9;
dw word_1929a; // 0a30:09ba
db byte_1929c; // 0a30:09bc
db byte_1929d; // 0a30:09bd
dd dword_1929e; // 0a30:09be
db dummyf_acc2; // 0a30:09c2
db dummyf_acc3;
dw word_192a4; // 0a30:09c4
dw word_192a6; // 0a30:09c6
db __off_192a8; // 0a30:09c8
db dummyf_acc9; // 0a30:09c9
db dummyf_acca; // 0a30:09ca
db dummyf_accb; // 0a30:09cb
db dummyf_accc; // 0a30:09cc
db dummyf_accd; // 0a30:09cd
db dummyf_acce; // 0a30:09ce
db dummyf_accf; // 0a30:09cf
db dummyf_acd0;
db dummyf_acd1; // 0a30:09d1
db dummyf_acd2; // 0a30:09d2
db dummyf_acd3; // 0a30:09d3
db dummyf_acd4;
db dummyf_acd5;
db dummyf_acd6;
db dummyf_acd7; // 0a30:09d7
db dummyf_acd8; // 0a30:09d8
db dummyf_acd9; // 0a30:09d9
db dummyf_acda;
db dummyf_acdb;
db dummyf_acdc;
db dummyf_acdd; // 0a30:09dd
db dummyf_acde; // 0a30:09de
db dummyf_acdf; // 0a30:09df
db dummyf_ace0;
db dummyf_ace1;
dw word_192c2; // 0a30:09e2
dw word_192c4; // 0a30:09e4
dw word_192c6; // 0a30:09e6
dw word_192c8; // 0a30:09e8
dw nbytes_; // 0a30:09ea
dw word_192cc; // 0a30:09ec
dw word_192ce; // 0a30:09ee
dw word_192d0; // 0a30:09f0
dw word_192d2; // 0a30:09f2
dw word_192d4; // 0a30:09f4
dw word_192d6; // 0a30:09f6
dw word_192d8; // 0a30:09f8
dw word_192da; // 0a30:09fa
dw word_192dc; // 0a30:09fc
dw word_192de; // 0a30:09fe
dw word_192e0; // 0a30:0a00
dw word_192e2; // 0a30:0a02
dw word_192e4; // 0a30:0a04
dw word_192e6; // 0a30:0a06
dw block_; // 0a30:0a08
dw word_192ea; // 0a30:0a0a
dw word_192ec; // 0a30:0a0c
dw word_192ee; // 0a30:0a0e
dw word_192f0; // 0a30:0a10
db byte_192f2; // 0a30:0a12
dw word_192f3; // 0a30:0a13
dw isr_; // 0a30:0a15
dw word_192f7; // 0a30:0a17
db dummyf_ad19[32]; // 0a30:0a19
db dummyf_ad39[32]; // 0a30:0a39
db dummyf_ad59[32]; // 0a30:0a59
db dummyf_ad79;
db dummyf_ad7a;
db dummyf_ad7b;
db dummyf_ad7c;
db dummyf_ad7d;
db dummyf_ad7e;
db dummyf_ad7f;
db dummyf_ad80;
dd __ptr; // 0a30:0a81
dw __block; // 0a30:0a85
dw word_19367; // 0a30:0a87
dw __src; // 0a30:0a89
dw word_1936b; // 0a30:0a8b
dd __s; // 0a30:0a8d
dd dword_19371; // 0a30:0a91
db dummyf_ad95[1];
dw ptr_; // 0a30:0a96
db byte_19378; // 0a30:0a98
db byte_19379; // 0a30:0a99
dw __offset; // 0a30:0a9a
dw word_1937c; // 0a30:0a9c
dd dword_1937e; // 0a30:0a9e
dd dword_19382; // 0a30:0aa2
dd dword_19386; // 0a30:0aa6
dw word_1938a; // 0a30:0aaa
dw word_1938c; // 0a30:0aac
db dummyf_adae[32]; // 0a30:0aae
db dummyf_adce[32]; // 0a30:0ace
db dummyf_adee[32]; // 0a30:0aee
db dummyf_ae0e[32]; // 0a30:0b0e
db dummyf_ae2e;
db dummyf_ae2f;
db dummyf_ae30;
db dummyf_ae31;
db dummyf_ae32;
db dummyf_ae33;
db dummyf_ae34;
db dummyf_ae35;
db dummyf_ae36;
db dummyf_ae37;
db dummyf_ae38;
db dummyf_ae39;
db dummyf_ae3a;
db dummyf_ae3b;
db dummyf_ae3c;
db dummyf_ae3d;
db dummyf_ae3e;
db dummyf_ae3f;
db dummyf_ae40;
db dummyf_ae41;
db dummyf_ae42;
db dummyf_ae43;
db dummyf_ae44;
db dummyf_ae45;
db dummyf_ae46;
db dummyf_ae47;
db dummyf_ae48;
db dummyf_ae49;
db dummyf_ae4a;
db dummyf_ae4b;
db byte_1942c; // 0a30:0b4c
db byte_1942d; // 0a30:0b4d
db dummyf_ae4e[32]; // 0a30:0b4e
db dummyf_ae6e[32]; // 0a30:0b6e
db dummyf_ae8e[32]; // 0a30:0b8e
db dummyf_aeae[32]; // 0a30:0bae
db dummyf_aece;
db dummyf_aecf;
db dummyf_aed0;
db dummyf_aed1;
db dummyf_aed2;
db dummyf_aed3;
db dummyf_aed4;
db dummyf_aed5;
db dummyf_aed6;
db dummyf_aed7;
db dummyf_aed8;
db dummyf_aed9;
db dummyf_aeda;
db dummyf_aedb;
db dummyf_aedc;
db dummyf_aedd;
db dummyf_aede;
db dummyf_aedf;
db dummyf_aee0;
db dummyf_aee1;
db dummyf_aee2;
db dummyf_aee3;
db byte_194c4; // 0a30:0be4
db dummyf_aee5[1];
db byte_194c6; // 0a30:0be6
db dummyf_aee7[9];
db dummyf_aef0[128]; // 0aef:0000

#ifdef DOSBOX_CUSTOM
    db filll[1024*1024*16];
#endif
                        db stack[STACK_SIZE];
                        db heap[HEAP_SIZE];
                };
}
#pragma pack(pop)

#endif
