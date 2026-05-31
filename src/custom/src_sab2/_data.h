
#ifndef ___DATA_H__
#define ___DATA_H__
#include "../asm.h"


#pragma pack(push, 1)
namespace m2c{
struct Memory{
db dummy7_0[0x1920];
db dummy7_d00[0x12c];
db dummy7_e2c; // 00d0:012c
db dummy7_e2d[2091];
db dummy7_1658; // 00d0:0958
db dummy7_1659[1417];
db dummy7_1be2; // 00d0:0ee2
db dummy7_1be3[765];
db dummy7_1ee0; // 00d0:11e0
db dummy7_1ee1[71];
db dummy7_1f28; // 00d0:1228
db dummy7_1f29[303];
db dummy7_2058; // 00d0:1358
db dummy7_2059[2697];
db dummy7_2ae2; // 00d0:1de2
db dummy7_2ae3[25];
db dummy7_2afc; // 00d0:1dfc
db dummy7_2afd[225];
db dummy7_2bde; // 00d0:1ede
db dummy7_2bdf[1041];
db dummy7_2ff0; // 00d0:22f0
db dummy7_2ff1[39];
db dummy7_3018; // 00d0:2318
db dummy7_3019[175];
db dummy7_30c8; // 00d0:23c8
db dummy7_30c9[9];
db dummy7_30d2; // 00d0:23d2
db dummy7_30d3[221];
db dummy7_31b0; // 00d0:24b0
db dummy7_31b1[319];
db dummy7_32f0; // 00d0:25f0
db dummy7_32f1[43];
db dummy7_331c; // 00d0:261c
db dummy7_331d[803];
db dummy7_3640; // 00d0:2940
db dummy7_3641[1055];

db dummy7_3a60__[0x100];


db dummy7_3a60[4];
db dummy7_3a64[32]; // 03a6:0004
db dummy7_3a84[32]; // 03a6:0024
db dummy7_3aa4[32]; // 03a6:0044
db dummy7_3ac4[32]; // 03a6:0064
db dummy7_3ae4[32]; // 03a6:0084
db dummy7_3b04[32]; // 03a6:00a4
db dummy7_3b24[32]; // 03a6:00c4
db dummy7_3b44[32]; // 03a6:00e4
db dummy7_3b64[32]; // 03a6:0104
db dummy7_3b84[32]; // 03a6:0124
db dummy7_3ba4[32]; // 03a6:0144
db dummy7_3bc4[32]; // 03a6:0164
db dummy7_3be4[32]; // 03a6:0184
db dummy7_3c04[32]; // 03a6:01a4
db dummy7_3c24[32]; // 03a6:01c4
db dummy7_3c44[32]; // 03a6:01e4
db dummy7_3c64[32]; // 03a6:0204
db dummy7_3c84[32]; // 03a6:0224
db dummy7_3ca4[32]; // 03a6:0244
db dummy7_3cc4[32]; // 03a6:0264
db dummy7_3ce4[32]; // 03a6:0284
db dummy7_3d04[32]; // 03a6:02a4
db dummy7_3d24[32]; // 03a6:02c4
db dummy7_3d44[32]; // 03a6:02e4
db dummy7_3d64[32]; // 03a6:0304
db dummy7_3d84[32]; // 03a6:0324
db dummy7_3da4[32]; // 03a6:0344
db dummy7_3dc4[32]; // 03a6:0364
db dummy7_3de4[32]; // 03a6:0384
db dummy7_3e04[32]; // 03a6:03a4
db dummy7_3e24[32]; // 03a6:03c4
db dummy7_3e44[32]; // 03a6:03e4
db dummy7_3e64[32]; // 03a6:0404
db dummy7_3e84[32]; // 03a6:0424
db dummy7_3ea4[32]; // 03a6:0444
db dummy7_3ec4; // 03a6:0464
db dummy7_3ec5; // 03a6:0465
db dummy7_3ec6; // 03a6:0466
db dummy7_3ec7; // 03a6:0467
db dummy7_3ec8; // 03a6:0468
db byte_132c9; // 03a6:0469
db dummy7_3eca[32]; // 03a6:046a
db dummy7_3eea[32]; // 03a6:048a
db dummy7_3f0a[32]; // 03a6:04aa
db dummy7_3f2a[32]; // 03a6:04ca
db dummy7_3f4a[32]; // 03a6:04ea
db dummy7_3f6a[32]; // 03a6:050a
db dummy7_3f8a[32]; // 03a6:052a
db dummy7_3faa[32]; // 03a6:054a
db dummy7_3fca[32]; // 03a6:056a
db dummy7_3fea[32]; // 03a6:058a
db dummy7_400a[32]; // 03a6:05aa
db dummy7_402a[32]; // 03a6:05ca
db dummy7_404a[32]; // 03a6:05ea
db dummy7_406a[32]; // 03a6:060a
db dummy7_408a[32]; // 03a6:062a
db dummy7_40aa[32]; // 03a6:064a
db dummy7_40ca[32]; // 03a6:066a
db dummy7_40ea[32]; // 03a6:068a
db dummy7_410a; // 03a6:06aa
db dummy7_410b; // 03a6:06ab
db dummy7_410c; // 03a6:06ac
db dummy7_410d; // 03a6:06ad
db dummy7_410e; // 03a6:06ae
db dummy7_410f; // 03a6:06af
db dummy7_4110; // 03a6:06b0
db dummy7_4111; // 03a6:06b1
db dummy7_4112; // 03a6:06b2
db dummy7_4113; // 03a6:06b3
db dummy7_4114; // 03a6:06b4
db dummy7_4115; // 03a6:06b5
db dummy7_4116; // 03a6:06b6
db dummy7_4117; // 03a6:06b7
db dummy7_4118; // 03a6:06b8
db dummy7_4119; // 03a6:06b9
db dummy7_411a; // 03a6:06ba
db dummy7_411b; // 03a6:06bb
db dummy7_411c; // 03a6:06bc
db dummy7_411d; // 03a6:06bd
db dummy7_411e; // 03a6:06be
db dummy7_411f; // 03a6:06bf
db dummy7_4120; // 03a6:06c0
db dummy7_4121; // 03a6:06c1
db dummy7_4122; // 03a6:06c2
db dummy7_4123; // 03a6:06c3
dw dummy7_4124; // 03a6:06c4
db dummy7_4126[32]; // 03a6:06c6
db dummy7_4146[32]; // 03a6:06e6
db dummy7_4166[32]; // 03a6:0706
db dummy7_4186[32]; // 03a6:0726
db dummy7_41a6[32]; // 03a6:0746
db dummy7_41c6[32]; // 03a6:0766
db dummy7_41e6[32]; // 03a6:0786
db dummy7_4206[32]; // 03a6:07a6
db dummy7_4226[32]; // 03a6:07c6
db dummy7_4246[32]; // 03a6:07e6
db dummy7_4266[32]; // 03a6:0806
db dummy7_4286[32]; // 03a6:0826
db dummy7_42a6[32]; // 03a6:0846
db dummy7_42c6[32]; // 03a6:0866
db dummy7_42e6[32]; // 03a6:0886
db dummy7_4306[32]; // 03a6:08a6
db dummy7_4326[32]; // 03a6:08c6
db dummy7_4346[32]; // 03a6:08e6
db dummy7_4366[32]; // 03a6:0906
db dummy7_4386[32]; // 03a6:0926
db dummy7_43a6[32]; // 03a6:0946
db dummy7_43c6[32]; // 03a6:0966
db dummy7_43e6[32]; // 03a6:0986
db dummy7_4406[32]; // 03a6:09a6
db dummy7_4426[32]; // 03a6:09c6
db dummy7_4446[32]; // 03a6:09e6
db dummy7_4466[32]; // 03a6:0a06
db dummy7_4486[32]; // 03a6:0a26
db dummy7_44a6[32]; // 03a6:0a46
db dummy7_44c6[32]; // 03a6:0a66
db dummy7_44e6[32]; // 03a6:0a86
db dummy7_4506[32]; // 03a6:0aa6
db dummy7_4526[32]; // 03a6:0ac6
db dummy7_4546[32]; // 03a6:0ae6
db dummy7_4566[32]; // 03a6:0b06
db dummy7_4586[32]; // 03a6:0b26
db dummy7_45a6[32]; // 03a6:0b46
db dummy7_45c6[32]; // 03a6:0b66
db dummy7_45e6[32]; // 03a6:0b86
db dummy7_4606[32]; // 03a6:0ba6
db dummy7_4626[32]; // 03a6:0bc6
db dummy7_4646[32]; // 03a6:0be6
db dummy7_4666[32]; // 03a6:0c06
db dummy7_4686[32]; // 03a6:0c26
db dummy7_46a6[32]; // 03a6:0c46
db dummy7_46c6[32]; // 03a6:0c66
db dummy7_46e6[32]; // 03a6:0c86
db dummy7_4706[32]; // 03a6:0ca6
db dummy7_4726[32]; // 03a6:0cc6
db dummy7_4746[32]; // 03a6:0ce6
db dummy7_4766[32]; // 03a6:0d06
db dummy7_4786[32]; // 03a6:0d26
db dummy7_47a6[32]; // 03a6:0d46
db dummy7_47c6[32]; // 03a6:0d66
db dummy7_47e6;
db dummy7_47e7;
db dummy7_47e8;
db dummy7_47e9;
db dummy7_47ea;
db dummy7_47eb;
db dummy7_47ec;
db dummy7_47ed; // 03a6:0d8d
db dummy7_47ee; // 03a6:0d8e
db dummy7_47ef; // 03a6:0d8f
db dummy7_47f0; // 03a6:0d90
db dummy7_47f1; // 03a6:0d91
db dummy7_47f2; // 03a6:0d92
db dummy7_47f3; // 03a6:0d93
db dummy7_47f4; // 03a6:0d94
db dummy7_47f5; // 03a6:0d95
db dummy7_47f6; // 03a6:0d96
db dummy7_47f7; // 03a6:0d97
dw word_13bf8; // 03a6:0d98
dw dummy7_47fa;
dd dummy7_47fc;
dw dummy7_4800;
dw dummy7_4802;
db dummy7_4804;
db dummy7_4805;
db dummy7_4806;
db dummy7_4807;
db dummy7_4808;
db dummy7_4809;
db dummy7_480a;
db dummy7_480b;
db byte_13c0c; // 03a6:0dac
db dummy7_480d[32]; // 03a6:0dad
db dummy7_482d[32]; // 03a6:0dcd
db dummy7_484d[32]; // 03a6:0ded
db dummy7_486d[32]; // 03a6:0e0d
db dummy7_488d[32]; // 03a6:0e2d
db dummy7_48ad[32]; // 03a6:0e4d
db dummy7_48cd[32]; // 03a6:0e6d
db dummy7_48ed[32]; // 03a6:0e8d
db dummy7_490d[32]; // 03a6:0ead
db dummy7_492d[32]; // 03a6:0ecd
db dummy7_494d[32]; // 03a6:0eed
db dummy7_496d[32]; // 03a6:0f0d
db dummy7_498d[32]; // 03a6:0f2d
db dummy7_49ad[32]; // 03a6:0f4d
db dummy7_49cd[32]; // 03a6:0f6d
db dummy7_49ed[32]; // 03a6:0f8d
db dummy7_4a0d[32]; // 03a6:0fad
db dummy7_4a2d[32]; // 03a6:0fcd
db dummy7_4a4d[32]; // 03a6:0fed
db dummy7_4a6d[32]; // 03a6:100d
db dummy7_4a8d[32]; // 03a6:102d
db dummy7_4aad[32]; // 03a6:104d
db dummy7_4acd[32]; // 03a6:106d
db dummy7_4aed[32]; // 03a6:108d
db dummy7_4b0d[32]; // 03a6:10ad
db dummy7_4b2d[32]; // 03a6:10cd
db dummy7_4b4d[32]; // 03a6:10ed
db dummy7_4b6d[32]; // 03a6:110d
db dummy7_4b8d[32]; // 03a6:112d
db dummy7_4bad[32]; // 03a6:114d
db dummy7_4bcd[32]; // 03a6:116d
db dummy7_4bed[32]; // 03a6:118d
db dummy7_4c0d[32]; // 03a6:11ad
db dummy7_4c2d[32]; // 03a6:11cd
db dummy7_4c4d[32]; // 03a6:11ed
db dummy7_4c6d[32]; // 03a6:120d
db dummy7_4c8d[32]; // 03a6:122d
db dummy7_4cad[32]; // 03a6:124d
db dummy7_4ccd[32]; // 03a6:126d
db dummy7_4ced[32]; // 03a6:128d
db dummy7_4d0d[32]; // 03a6:12ad
db dummy7_4d2d[32]; // 03a6:12cd
db dummy7_4d4d[32]; // 03a6:12ed
db dummy7_4d6d[32]; // 03a6:130d
db dummy7_4d8d[32]; // 03a6:132d
db dummy7_4dad[32]; // 03a6:134d
db dummy7_4dcd[32]; // 03a6:136d
db dummy7_4ded[32]; // 03a6:138d
db dummy7_4e0d[32]; // 03a6:13ad
db dummy7_4e2d[32]; // 03a6:13cd
db dummy7_4e4d[32]; // 03a6:13ed
db dummy7_4e6d[32]; // 03a6:140d
db dummy7_4e8d[32]; // 03a6:142d
db dummy7_4ead[32]; // 03a6:144d
db dummy7_4ecd[32]; // 03a6:146d
db dummy7_4eed[32]; // 03a6:148d
db dummy7_4f0d[32]; // 03a6:14ad
db dummy7_4f2d[32]; // 03a6:14cd
db dummy7_4f4d[32]; // 03a6:14ed
db dummy7_4f6d[32]; // 03a6:150d
db dummy7_4f8d[32]; // 03a6:152d
db dummy7_4fad[32]; // 03a6:154d
db dummy7_4fcd[32]; // 03a6:156d
db dummy7_4fed[32]; // 03a6:158d
db dummy7_500d[32]; // 03a6:15ad
db dummy7_502d[32]; // 03a6:15cd
db dummy7_504d[32]; // 03a6:15ed
db dummy7_506d[32]; // 03a6:160d
db dummy7_508d[32]; // 03a6:162d
db dummy7_50ad[32]; // 03a6:164d
db dummy7_50cd[32]; // 03a6:166d
db dummy7_50ed[32]; // 03a6:168d
db dummy7_510d[32]; // 03a6:16ad
db dummy7_512d[32]; // 03a6:16cd
db dummy7_514d[32]; // 03a6:16ed
db dummy7_516d; // 03a6:170d
db dummy7_516e; // 03a6:170e
db dummy7_516f; // 03a6:170f
db dummy7_5170; // 03a6:1710
db dummy7_5171; // 03a6:1711
db dummy7_5172; // 03a6:1712
db dummy7_5173; // 03a6:1713
db dummy7_5174; // 03a6:1714
db dummy7_5175; // 03a6:1715
db dummy7_5176; // 03a6:1716
db dummy7_5177; // 03a6:1717
db dummy7_5178; // 03a6:1718
db dummy7_5179; // 03a6:1719
db dummy7_517a; // 03a6:171a
db dummy7_517b; // 03a6:171b
db dummy7_517c; // 03a6:171c
db dummy7_517d; // 03a6:171d
db dummy7_517e; // 03a6:171e
db dummy7_517f; // 03a6:171f
db dummy7_5180; // 03a6:1720
db dummy7_5181; // 03a6:1721
db dummy7_5182; // 03a6:1722
db dummy7_5183; // 03a6:1723
db byte_14584; // 03a6:1724
db dummy7_5185[32]; // 03a6:1725
db dummy7_51a5[32]; // 03a6:1745
db dummy7_51c5[32]; // 03a6:1765
db dummy7_51e5[32]; // 03a6:1785
db dummy7_5205; // 03a6:17a5
db dummy7_5206; // 03a6:17a6
db dummy7_5207; // 03a6:17a7
db dummy7_5208; // 03a6:17a8
db dummy7_5209; // 03a6:17a9
db dummy7_520a;
db dummy7_520b; // 03a6:17ab
db dummy7_520c; // 03a6:17ac
db dummy7_520d; // 03a6:17ad
db dummy7_520e; // 03a6:17ae
db dummy7_520f; // 03a6:17af
db dummy7_5210; // 03a6:17b0
db dummy7_5211; // 03a6:17b1
db dummy7_5212; // 03a6:17b2
db dummy7_5213; // 03a6:17b3
dw word_14614; // 03a6:17b4
db dummy7_5216[32]; // 03a6:17b6
db dummy7_5236[32]; // 03a6:17d6
db dummy7_5256[32]; // 03a6:17f6
db dummy7_5276[32]; // 03a6:1816
db dummy7_5296[32]; // 03a6:1836
db dummy7_52b6[32]; // 03a6:1856
db dummy7_52d6[32]; // 03a6:1876
db dummy7_52f6[32]; // 03a6:1896
db dummy7_5316[32]; // 03a6:18b6
db dummy7_5336[32]; // 03a6:18d6
db dummy7_5356[32]; // 03a6:18f6
db dummy7_5376[32]; // 03a6:1916
db dummy7_5396[32]; // 03a6:1936
db dummy7_53b6[32]; // 03a6:1956
db dummy7_53d6[32]; // 03a6:1976
db dummy7_53f6[32]; // 03a6:1996
db dummy7_5416[32]; // 03a6:19b6
db dummy7_5436[32]; // 03a6:19d6
db dummy7_5456[32]; // 03a6:19f6
db dummy7_5476[32]; // 03a6:1a16
db dummy7_5496[32]; // 03a6:1a36
db dummy7_54b6[32]; // 03a6:1a56
db dummy7_54d6[32]; // 03a6:1a76
db dummy7_54f6[32]; // 03a6:1a96
db dummy7_5516[32]; // 03a6:1ab6
db dummy7_5536[32]; // 03a6:1ad6
db dummy7_5556[32]; // 03a6:1af6
db dummy7_5576[32]; // 03a6:1b16
db dummy7_5596[32]; // 03a6:1b36
db dummy7_55b6[32]; // 03a6:1b56
db dummy7_55d6[32]; // 03a6:1b76
db dummy7_55f6; // 03a6:1b96
db dummy7_55f7; // 03a6:1b97
db dummy7_55f8; // 03a6:1b98
db dummy7_55f9; // 03a6:1b99
db dummy7_55fa; // 03a6:1b9a
db dummy7_55fb; // 03a6:1b9b
db dummy7_55fc; // 03a6:1b9c
db dummy7_55fd; // 03a6:1b9d
db dummy7_55fe; // 03a6:1b9e
db dummy7_55ff; // 03a6:1b9f
db dummy7_5600; // 03a6:1ba0
db dummy7_5601; // 03a6:1ba1
dw word_14a02; // 03a6:1ba2
dw word_14a04; // 03a6:1ba4
dw word_14a06; // 03a6:1ba6
dw word_14a08; // 03a6:1ba8
dw word_14a0a; // 03a6:1baa
dw word_14a0c; // 03a6:1bac
db dummy7_560e[2];
dw word_14a10; // 03a6:1bb0
db byte_14a12; // 03a6:1bb2
db byte_14a13; // 03a6:1bb3
dw word_14a14; // 03a6:1bb4
dw word_14a16; // 03a6:1bb6
dw word_14a18; // 03a6:1bb8
dw word_14a1a; // 03a6:1bba
dw word_14a1c; // 03a6:1bbc
dw word_14a1e; // 03a6:1bbe
dw word_14a20; // 03a6:1bc0
db byte_14a22; // 03a6:1bc2
db byte_14a23; // 03a6:1bc3
db byte_14a24; // 03a6:1bc4
db byte_14a25; // 03a6:1bc5
db byte_14a26; // 03a6:1bc6
db byte_14a27; // 03a6:1bc7
db byte_14a28; // 03a6:1bc8
db byte_14a29; // 03a6:1bc9
db byte_14a2a; // 03a6:1bca
db byte_14a2b; // 03a6:1bcb
db byte_14a2c; // 03a6:1bcc
db byte_14a2d; // 03a6:1bcd
db byte_14a2e; // 03a6:1bce
db byte_14a2f; // 03a6:1bcf
db byte_14a30; // 03a6:1bd0
db byte_14a31; // 03a6:1bd1
db byte_14a32; // 03a6:1bd2
db byte_14a33; // 03a6:1bd3
db byte_14a34; // 03a6:1bd4
db byte_14a35; // 03a6:1bd5
dw word_14a36; // 03a6:1bd6
db byte_14a38; // 03a6:1bd8
db byte_14a39; // 03a6:1bd9
db byte_14a3a; // 03a6:1bda
db byte_14a3b; // 03a6:1bdb
db byte_14a3c; // 03a6:1bdc
db byte_14a3d; // 03a6:1bdd
db byte_14a3e; // 03a6:1bde
db byte_14a3f; // 03a6:1bdf
db byte_14a40; // 03a6:1be0
db dummy7_5641[32]; // 03a6:1be1
db dummy7_5661[32]; // 03a6:1c01
db dummy7_5681[32]; // 03a6:1c21
db dummy7_56a1[32]; // 03a6:1c41
db dummy7_56c1[32]; // 03a6:1c61
db dummy7_56e1[32]; // 03a6:1c81
db dummy7_5701[32]; // 03a6:1ca1
db dummy7_5721[32]; // 03a6:1cc1
db dummy7_5741[32]; // 03a6:1ce1
db dummy7_5761[32]; // 03a6:1d01
db dummy7_5781[32]; // 03a6:1d21
db dummy7_57a1[32]; // 03a6:1d41
db dummy7_57c1[32]; // 03a6:1d61
db dummy7_57e1[32]; // 03a6:1d81
db dummy7_5801[32]; // 03a6:1da1
db dummy7_5821[32]; // 03a6:1dc1
db dummy7_5841[32]; // 03a6:1de1
db dummy7_5861[32]; // 03a6:1e01
db dummy7_5881[32]; // 03a6:1e21
db dummy7_58a1[32]; // 03a6:1e41
db dummy7_58c1; // 03a6:1e61
db dummy7_58c2; // 03a6:1e62
db dummy7_58c3; // 03a6:1e63
db dummy7_58c4; // 03a6:1e64
db dummy7_58c5; // 03a6:1e65
db dummy7_58c6; // 03a6:1e66
db dummy7_58c7; // 03a6:1e67
db dummy7_58c8; // 03a6:1e68
db dummy7_58c9; // 03a6:1e69
db dummy7_58ca; // 03a6:1e6a
db dummy7_58cb; // 03a6:1e6b
db dummy7_58cc; // 03a6:1e6c
db dummy7_58cd; // 03a6:1e6d
db dummy7_58ce; // 03a6:1e6e
db dummy7_58cf; // 03a6:1e6f
db dummy7_58d0; // 03a6:1e70
db dummy7_58d1; // 03a6:1e71
db dummy7_58d2; // 03a6:1e72
db dummy7_58d3; // 03a6:1e73
db byte_14cd4; // 03a6:1e74
db byte_14cd5; // 03a6:1e75
db byte_14cd6; // 03a6:1e76
db dummy7_58d7; // 03a6:1e77
db dummy7_58d8; // 03a6:1e78
db dummy7_58d9; // 03a6:1e79
db dummy7_58da; // 03a6:1e7a
db dummy7_58db; // 03a6:1e7b
db dummy7_58dc; // 03a6:1e7c
db dummy7_58dd; // 03a6:1e7d
db byte_14cde; // 03a6:1e7e
db dummy7_58df[32]; // 03a6:1e7f
db dummy7_58ff[32]; // 03a6:1e9f
db dummy7_591f[32]; // 03a6:1ebf
db dummy7_593f[32]; // 03a6:1edf
db dummy7_595f[32]; // 03a6:1eff
db dummy7_597f[32]; // 03a6:1f1f
db dummy7_599f[32]; // 03a6:1f3f
db dummy7_59bf[32]; // 03a6:1f5f
db dummy7_59df[32]; // 03a6:1f7f
db dummy7_59ff[32]; // 03a6:1f9f
db dummy7_5a1f[32]; // 03a6:1fbf
db dummy7_5a3f[32]; // 03a6:1fdf
db dummy7_5a5f[32]; // 03a6:1fff
db dummy7_5a7f[32]; // 03a6:201f
db dummy7_5a9f[32]; // 03a6:203f
db dummy7_5abf[32]; // 03a6:205f
db dummy7_5adf[32]; // 03a6:207f
db dummy7_5aff[32]; // 03a6:209f
db dummy7_5b1f[32]; // 03a6:20bf
db dummy7_5b3f[32]; // 03a6:20df
db dummy7_5b5f[32]; // 03a6:20ff
db dummy7_5b7f[32]; // 03a6:211f
db dummy7_5b9f[32]; // 03a6:213f
db dummy7_5bbf[32]; // 03a6:215f
db dummy7_5bdf[32]; // 03a6:217f
db dummy7_5bff[32]; // 03a6:219f
db dummy7_5c1f[32]; // 03a6:21bf
db dummy7_5c3f[32]; // 03a6:21df
db dummy7_5c5f[32]; // 03a6:21ff
db dummy7_5c7f[32]; // 03a6:221f
db dummy7_5c9f[32]; // 03a6:223f
db dummy7_5cbf[32]; // 03a6:225f
db dummy7_5cdf[32]; // 03a6:227f
db dummy7_5cff[32]; // 03a6:229f
db dummy7_5d1f[32]; // 03a6:22bf
db dummy7_5d3f[32]; // 03a6:22df
db dummy7_5d5f[32]; // 03a6:22ff
db dummy7_5d7f[32]; // 03a6:231f
db dummy7_5d9f[32]; // 03a6:233f
db dummy7_5dbf[32]; // 03a6:235f
db dummy7_5ddf[32]; // 03a6:237f
db dummy7_5dff[32]; // 03a6:239f
db dummy7_5e1f[32]; // 03a6:23bf
db dummy7_5e3f[32]; // 03a6:23df
db dummy7_5e5f[32]; // 03a6:23ff
db dummy7_5e7f[32]; // 03a6:241f
db dummy7_5e9f[32]; // 03a6:243f
db dummy7_5ebf[32]; // 03a6:245f
db dummy7_5edf[32]; // 03a6:247f
db dummy7_5eff[32]; // 03a6:249f
db dummy7_5f1f[32]; // 03a6:24bf
db dummy7_5f3f[32]; // 03a6:24df
db dummy7_5f5f[32]; // 03a6:24ff
db dummy7_5f7f[32]; // 03a6:251f
db dummy7_5f9f[32]; // 03a6:253f
db dummy7_5fbf[32]; // 03a6:255f
db dummy7_5fdf[32]; // 03a6:257f
db dummy7_5fff[32]; // 03a6:259f
db dummy7_601f[32]; // 03a6:25bf
db dummy7_603f[32]; // 03a6:25df
db dummy7_605f[32]; // 03a6:25ff
db dummy7_607f[32]; // 03a6:261f
db dummy7_609f[32]; // 03a6:263f
db dummy7_60bf[32]; // 03a6:265f
db dummy7_60df[32]; // 03a6:267f
db dummy7_60ff[32]; // 03a6:269f
db dummy7_611f[32]; // 03a6:26bf
db dummy7_613f[32]; // 03a6:26df
db dummy7_615f[32]; // 03a6:26ff
db dummy7_617f[32]; // 03a6:271f
db dummy7_619f[32]; // 03a6:273f
db dummy7_61bf[32]; // 03a6:275f
db dummy7_61df[32]; // 03a6:277f
db dummy7_61ff[32]; // 03a6:279f
db dummy7_621f[32]; // 03a6:27bf
db dummy7_623f[32]; // 03a6:27df
db dummy7_625f[32]; // 03a6:27ff
db dummy7_627f[32]; // 03a6:281f
db dummy7_629f[32]; // 03a6:283f
db dummy7_62bf[32]; // 03a6:285f
db dummy7_62df[32]; // 03a6:287f
db dummy7_62ff[32]; // 03a6:289f
db dummy7_631f[32]; // 03a6:28bf
db dummy7_633f[32]; // 03a6:28df
db dummy7_635f[32]; // 03a6:28ff
db dummy7_637f[32]; // 03a6:291f
db dummy7_639f[32]; // 03a6:293f
db dummy7_63bf[32]; // 03a6:295f
db dummy7_63df[32]; // 03a6:297f
db dummy7_63ff[32]; // 03a6:299f
db dummy7_641f[32]; // 03a6:29bf
db dummy7_643f[32]; // 03a6:29df
db dummy7_645f[32]; // 03a6:29ff
db dummy7_647f[32]; // 03a6:2a1f
db dummy7_649f[32]; // 03a6:2a3f
db dummy7_64bf[32]; // 03a6:2a5f
db dummy7_64df[32]; // 03a6:2a7f
db dummy7_64ff[32]; // 03a6:2a9f
db dummy7_651f[32]; // 03a6:2abf
db dummy7_653f[32]; // 03a6:2adf
db dummy7_655f[32]; // 03a6:2aff
db dummy7_657f; // 03a6:2b1f
db dummy7_6580; // 03a6:2b20
db dummy7_6581; // 03a6:2b21
db dummy7_6582; // 03a6:2b22
db dummy7_6583; // 03a6:2b23
db dummy7_6584; // 03a6:2b24
db dummy7_6585; // 03a6:2b25
db dummy7_6586; // 03a6:2b26
db dummy7_6587; // 03a6:2b27
db dummy7_6588; // 03a6:2b28
db dummy7_6589; // 03a6:2b29
db dummy7_658a; // 03a6:2b2a
db dummy7_658b; // 03a6:2b2b
db dummy7_658c; // 03a6:2b2c
db dummy7_658d; // 03a6:2b2d
db dummy7_658e; // 03a6:2b2e
db dummy7_658f; // 03a6:2b2f
db dummy7_6590; // 03a6:2b30
db dummy7_6591; // 03a6:2b31
db dummy7_6592; // 03a6:2b32
db dummy7_6593; // 03a6:2b33
db dummy7_6594; // 03a6:2b34
db dummy7_6595; // 03a6:2b35
db dummy7_6596; // 03a6:2b36
db dummy7_6597; // 03a6:2b37
db dummy7_6598; // 03a6:2b38
db dummy7_6599; // 03a6:2b39
db dummy7_659a; // 03a6:2b3a
db dummy7_659b; // 03a6:2b3b
db dummy7_659c; // 03a6:2b3c
db byte_1599d; // 03a6:2b3d
db dummy7_659e[32]; // 03a6:2b3e
db dummy7_65be; // 03a6:2b5e
db dummy7_65bf; // 03a6:2b5f
db dummy7_65c0; // 03a6:2b60
db dummy7_65c1; // 03a6:2b61
db dummy7_65c2;
db dummy7_65c3; // 03a6:2b63
db dummy7_65c4; // 03a6:2b64
db dummy7_65c5; // 03a6:2b65
db dummy7_65c6; // 03a6:2b66
db dummy7_65c7; // 03a6:2b67
db dummy7_65c8; // 03a6:2b68
db dummy7_65c9; // 03a6:2b69
db dummy7_65ca; // 03a6:2b6a
db dummy7_65cb; // 03a6:2b6b
db dummy7_65cc; // 03a6:2b6c
db dummy7_65cd; // 03a6:2b6d
db dummy7_65ce; // 03a6:2b6e
db dummy7_65cf; // 03a6:2b6f
db dummy7_65d0; // 03a6:2b70
db dummy7_65d1; // 03a6:2b71
db dummy7_65d2; // 03a6:2b72
db dummy7_65d3; // 03a6:2b73
db byte_159d4; // 03a6:2b74
db dummy7_65d5[32]; // 03a6:2b75
db dummy7_65f5[32]; // 03a6:2b95
db dummy7_6615[32]; // 03a6:2bb5
db dummy7_6635[32]; // 03a6:2bd5
db dummy7_6655[32]; // 03a6:2bf5
db dummy7_6675[32]; // 03a6:2c15
db dummy7_6695[32]; // 03a6:2c35
db dummy7_66b5[32]; // 03a6:2c55
db dummy7_66d5[32]; // 03a6:2c75
db dummy7_66f5[32]; // 03a6:2c95
db dummy7_6715[32]; // 03a6:2cb5
db dummy7_6735[32]; // 03a6:2cd5
db dummy7_6755[32]; // 03a6:2cf5
db dummy7_6775[32]; // 03a6:2d15
db dummy7_6795[32]; // 03a6:2d35
db dummy7_67b5[32]; // 03a6:2d55
db dummy7_67d5[32]; // 03a6:2d75
db dummy7_67f5[32]; // 03a6:2d95
db dummy7_6815[32]; // 03a6:2db5
db dummy7_6835[32]; // 03a6:2dd5
db dummy7_6855[32]; // 03a6:2df5
db dummy7_6875[32]; // 03a6:2e15
db dummy7_6895[32]; // 03a6:2e35
db dummy7_68b5[32]; // 03a6:2e55
db dummy7_68d5[32]; // 03a6:2e75
db dummy7_68f5[32]; // 03a6:2e95
db dummy7_6915[32]; // 03a6:2eb5
db dummy7_6935[32]; // 03a6:2ed5
db dummy7_6955[32]; // 03a6:2ef5
db dummy7_6975[32]; // 03a6:2f15
db dummy7_6995[32]; // 03a6:2f35
db dummy7_69b5[32]; // 03a6:2f55
db dummy7_69d5[32]; // 03a6:2f75
db dummy7_69f5[32]; // 03a6:2f95
db dummy7_6a15[32]; // 03a6:2fb5
db dummy7_6a35[32]; // 03a6:2fd5
db dummy7_6a55[32]; // 03a6:2ff5
db dummy7_6a75[32]; // 03a6:3015
db dummy7_6a95[32]; // 03a6:3035
db dummy7_6ab5[32]; // 03a6:3055
db dummy7_6ad5[32]; // 03a6:3075
db dummy7_6af5[32]; // 03a6:3095
db dummy7_6b15[32]; // 03a6:30b5
db dummy7_6b35[32]; // 03a6:30d5
db dummy7_6b55[32]; // 03a6:30f5
db dummy7_6b75[32]; // 03a6:3115
db dummy7_6b95[32]; // 03a6:3135
db dummy7_6bb5[32]; // 03a6:3155
db dummy7_6bd5[32]; // 03a6:3175
db dummy7_6bf5[32]; // 03a6:3195
db dummy7_6c15[32]; // 03a6:31b5
db dummy7_6c35[32]; // 03a6:31d5
db dummy7_6c55[32]; // 03a6:31f5
db dummy7_6c75[32]; // 03a6:3215
db dummy7_6c95[32]; // 03a6:3235
db dummy7_6cb5[32]; // 03a6:3255
db dummy7_6cd5[32]; // 03a6:3275
db dummy7_6cf5[32]; // 03a6:3295
db dummy7_6d15[32]; // 03a6:32b5
db dummy7_6d35[32]; // 03a6:32d5
db dummy7_6d55[32]; // 03a6:32f5
db dummy7_6d75[32]; // 03a6:3315
db dummy7_6d95[32]; // 03a6:3335
db dummy7_6db5[32]; // 03a6:3355
db dummy7_6dd5[32]; // 03a6:3375
db dummy7_6df5[32]; // 03a6:3395
db dummy7_6e15[32]; // 03a6:33b5
db dummy7_6e35[32]; // 03a6:33d5
db dummy7_6e55[32]; // 03a6:33f5
db dummy7_6e75[32]; // 03a6:3415
db dummy7_6e95[32]; // 03a6:3435
db dummy7_6eb5[32]; // 03a6:3455
db dummy7_6ed5[32]; // 03a6:3475
db dummy7_6ef5[32]; // 03a6:3495
db dummy7_6f15[32]; // 03a6:34b5
db dummy7_6f35[32]; // 03a6:34d5
db dummy7_6f55[32]; // 03a6:34f5
db dummy7_6f75[32]; // 03a6:3515
db dummy7_6f95[32]; // 03a6:3535
db dummy7_6fb5[32]; // 03a6:3555
db dummy7_6fd5[32]; // 03a6:3575
db dummy7_6ff5[32]; // 03a6:3595
db dummy7_7015[32]; // 03a6:35b5
db dummy7_7035[32]; // 03a6:35d5
db dummy7_7055[32]; // 03a6:35f5
db dummy7_7075[32]; // 03a6:3615
db dummy7_7095[32]; // 03a6:3635
db dummy7_70b5[32]; // 03a6:3655
db dummy7_70d5[32]; // 03a6:3675
db dummy7_70f5[32]; // 03a6:3695
db dummy7_7115[32]; // 03a6:36b5
db dummy7_7135[32]; // 03a6:36d5
db dummy7_7155[32]; // 03a6:36f5
db dummy7_7175[32]; // 03a6:3715
db dummy7_7195[32]; // 03a6:3735
db dummy7_71b5[32]; // 03a6:3755
db dummy7_71d5[32]; // 03a6:3775
db dummy7_71f5[32]; // 03a6:3795
db dummy7_7215[32]; // 03a6:37b5
db dummy7_7235[32]; // 03a6:37d5
db dummy7_7255[32]; // 03a6:37f5
db dummy7_7275[32]; // 03a6:3815
db dummy7_7295[32]; // 03a6:3835
db dummy7_72b5[32]; // 03a6:3855
db dummy7_72d5[32]; // 03a6:3875
db dummy7_72f5[32]; // 03a6:3895
db dummy7_7315[32]; // 03a6:38b5
db dummy7_7335[32]; // 03a6:38d5
db dummy7_7355[32]; // 03a6:38f5
db dummy7_7375[32]; // 03a6:3915
db dummy7_7395[32]; // 03a6:3935
db dummy7_73b5[32]; // 03a6:3955
db dummy7_73d5[32]; // 03a6:3975
db dummy7_73f5[32]; // 03a6:3995
db dummy7_7415[32]; // 03a6:39b5
db dummy7_7435[32]; // 03a6:39d5
db dummy7_7455[32]; // 03a6:39f5
db dummy7_7475[32]; // 03a6:3a15
db dummy7_7495[32]; // 03a6:3a35
db dummy7_74b5[32]; // 03a6:3a55
db dummy7_74d5; // 03a6:3a75
db dummy7_74d6; // 03a6:3a76
db dummy7_74d7; // 03a6:3a77
db dummy7_74d8; // 03a6:3a78
db dummy7_74d9; // 03a6:3a79
db dummy7_74da; // 03a6:3a7a
db dummy7_74db; // 03a6:3a7b
db dummy7_74dc; // 03a6:3a7c
db dummy7_74dd; // 03a6:3a7d
db dummy7_74de; // 03a6:3a7e
db dummy7_74df; // 03a6:3a7f
db dummy7_74e0; // 03a6:3a80
db dummy7_74e1; // 03a6:3a81
db dummy7_74e2; // 03a6:3a82
db dummy7_74e3; // 03a6:3a83
db dummy7_74e4; // 03a6:3a84
db dummy7_74e5; // 03a6:3a85
db dummy7_74e6; // 03a6:3a86
db dummy7_74e7; // 03a6:3a87
db dummy7_74e8; // 03a6:3a88
db dummy7_74e9; // 03a6:3a89
db dummy7_74ea; // 03a6:3a8a
db dummy7_74eb; // 03a6:3a8b
db dummy7_74ec; // 03a6:3a8c
db dummy7_74ed; // 03a6:3a8d
db dummy7_74ee; // 03a6:3a8e
db dummy7_74ef; // 03a6:3a8f
db dummy7_74f0; // 03a6:3a90
db dummy7_74f1; // 03a6:3a91
db byte_168f2; // 03a6:3a92
db dummy7_74f3[32]; // 03a6:3a93
db dummy7_7513[32]; // 03a6:3ab3
db dummy7_7533[32]; // 03a6:3ad3
db dummy7_7553[32]; // 03a6:3af3
db dummy7_7573[32]; // 03a6:3b13
db dummy7_7593[32]; // 03a6:3b33
db dummy7_75b3[32]; // 03a6:3b53
db dummy7_75d3[32]; // 03a6:3b73
db dummy7_75f3[32]; // 03a6:3b93
db dummy7_7613[32]; // 03a6:3bb3
db dummy7_7633[32]; // 03a6:3bd3
db dummy7_7653[32]; // 03a6:3bf3
db dummy7_7673[32]; // 03a6:3c13
db dummy7_7693[32]; // 03a6:3c33
db dummy7_76b3[32]; // 03a6:3c53
db dummy7_76d3[32]; // 03a6:3c73
db dummy7_76f3[32]; // 03a6:3c93
db dummy7_7713[32]; // 03a6:3cb3
db dummy7_7733[32]; // 03a6:3cd3
db dummy7_7753[32]; // 03a6:3cf3
db dummy7_7773[32]; // 03a6:3d13
db dummy7_7793; // 03a6:3d33
db dummy7_7794; // 03a6:3d34
db dummy7_7795; // 03a6:3d35
db dummy7_7796; // 03a6:3d36
db dummy7_7797; // 03a6:3d37
dw word_16b98; // 03a6:3d38
db byte_16b9a; // 03a6:3d3a
db byte_16b9b; // 03a6:3d3b
db byte_16b9c; // 03a6:3d3c
db dummy7_779d[1];
db dummy7_779e[32]; // 03a6:3d3e
db dummy7_77be[32]; // 03a6:3d5e
db dummy7_77de[32]; // 03a6:3d7e
db dummy7_77fe[32]; // 03a6:3d9e
db dummy7_781e[32]; // 03a6:3dbe
db dummy7_783e[32]; // 03a6:3dde
db dummy7_785e[32]; // 03a6:3dfe
db dummy7_787e[32]; // 03a6:3e1e
db dummy7_789e[32]; // 03a6:3e3e
db dummy7_78be[32]; // 03a6:3e5e
db dummy7_78de[32]; // 03a6:3e7e
db dummy7_78fe[32]; // 03a6:3e9e
db dummy7_791e[32]; // 03a6:3ebe
db dummy7_793e[32]; // 03a6:3ede
db dummy7_795e[32]; // 03a6:3efe
db dummy7_797e[32]; // 03a6:3f1e
db dummy7_799e[32]; // 03a6:3f3e
db dummy7_79be[32]; // 03a6:3f5e
db dummy7_79de[32]; // 03a6:3f7e
db dummy7_79fe[32]; // 03a6:3f9e
db dummy7_7a1e[32]; // 03a6:3fbe
db dummy7_7a3e[32]; // 03a6:3fde
db dummy7_7a5e[32]; // 03a6:3ffe
db dummy7_7a7e[32]; // 03a6:401e
db dummy7_7a9e[32]; // 03a6:403e
db dummy7_7abe[32]; // 03a6:405e
db dummy7_7ade[32]; // 03a6:407e
db dummy7_7afe[32]; // 03a6:409e
db dummy7_7b1e[32]; // 03a6:40be
db dummy7_7b3e[32]; // 03a6:40de
db dummy7_7b5e[32]; // 03a6:40fe
db dummy7_7b7e[32]; // 03a6:411e
db dummy7_7b9e[32]; // 03a6:413e
db dummy7_7bbe[32]; // 03a6:415e
db dummy7_7bde[32]; // 03a6:417e
db dummy7_7bfe[32]; // 03a6:419e
db dummy7_7c1e[32]; // 03a6:41be
db dummy7_7c3e[32]; // 03a6:41de
db dummy7_7c5e[32]; // 03a6:41fe
db dummy7_7c7e[32]; // 03a6:421e
db dummy7_7c9e[32]; // 03a6:423e
db dummy7_7cbe[32]; // 03a6:425e
db dummy7_7cde[32]; // 03a6:427e
db dummy7_7cfe[32]; // 03a6:429e
db dummy7_7d1e[32]; // 03a6:42be
db dummy7_7d3e[32]; // 03a6:42de
db dummy7_7d5e[32]; // 03a6:42fe
db dummy7_7d7e[32]; // 03a6:431e
db dummy7_7d9e[32]; // 03a6:433e
db dummy7_7dbe[32]; // 03a6:435e
db dummy7_7dde[32]; // 03a6:437e
db dummy7_7dfe[32]; // 03a6:439e
db dummy7_7e1e[32]; // 03a6:43be
db dummy7_7e3e[32]; // 03a6:43de
db dummy7_7e5e[32]; // 03a6:43fe
db dummy7_7e7e[32]; // 03a6:441e
db dummy7_7e9e[32]; // 03a6:443e
db dummy7_7ebe[32]; // 03a6:445e
db dummy7_7ede[32]; // 03a6:447e
db dummy7_7efe[32]; // 03a6:449e
db dummy7_7f1e[32]; // 03a6:44be
db dummy7_7f3e[32]; // 03a6:44de
db dummy7_7f5e[32]; // 03a6:44fe
db dummy7_7f7e[32]; // 03a6:451e
db dummy7_7f9e[32]; // 03a6:453e
db dummy7_7fbe[32]; // 03a6:455e
db dummy7_7fde[32]; // 03a6:457e
db dummy7_7ffe[32]; // 03a6:459e
db dummy7_801e[32]; // 03a6:45be
db dummy7_803e[32]; // 03a6:45de
db dummy7_805e[32]; // 03a6:45fe
db dummy7_807e[32]; // 03a6:461e
db dummy7_809e[32]; // 03a6:463e
db dummy7_80be[32]; // 03a6:465e
db dummy7_80de[32]; // 03a6:467e
db dummy7_80fe[32]; // 03a6:469e
db dummy7_811e[32]; // 03a6:46be
db dummy7_813e[32]; // 03a6:46de
db dummy7_815e[32]; // 03a6:46fe
db dummy7_817e[32]; // 03a6:471e
db dummy7_819e[32]; // 03a6:473e
db dummy7_81be[32]; // 03a6:475e
db dummy7_81de[32]; // 03a6:477e
db dummy7_81fe[32]; // 03a6:479e
db dummy7_821e[32]; // 03a6:47be
db dummy7_823e[32]; // 03a6:47de
db dummy7_825e[32]; // 03a6:47fe
db dummy7_827e[32]; // 03a6:481e
db dummy7_829e[32]; // 03a6:483e
db dummy7_82be[32]; // 03a6:485e
db dummy7_82de; // 03a6:487e
db dummy7_82df;
db dummy7_82e0; // 03a6:4880
db dummy7_82e1[1];
db dummy7_82e2[32]; // 03a6:4882
db dummy7_8302[32]; // 03a6:48a2
db dummy7_8322[32]; // 03a6:48c2
db dummy7_8342[32]; // 03a6:48e2
db dummy7_8362[32]; // 03a6:4902
db dummy7_8382[32]; // 03a6:4922
db dummy7_83a2[32]; // 03a6:4942
db dummy7_83c2[32]; // 03a6:4962
db dummy7_83e2[32]; // 03a6:4982
db dummy7_8402;
db dummy7_8403; // 03a6:49a3
db dummy7_8404;
db dummy7_8405; // 03a6:49a5
db dummy7_8406;
db dummy7_8407; // 03a6:49a7
db dummy7_8408;
db dummy7_8409; // 03a6:49a9
db dummy7_840a; // 03a6:49aa
db dummy7_840b;
db dummy7_840c;
db dummy7_840d;
db dummy7_840e; // 03a6:49ae
db dummy7_840f;
db dummy7_8410; // 03a6:49b0
db dummy7_8411;
db dummy7_8412; // 03a6:49b2
db dummy7_8413;
db dummy7_8414; // 03a6:49b4
db dummy7_8415;
db dummy7_8416; // 03a6:49b6
db dummy7_8417;
db dummy7_8418; // 03a6:49b8
db dummy7_8419;
db dummy7_841a; // 03a6:49ba
db byte_1781b; // 03a6:49bb
db dummy7_841c;
db dummy7_841d;
db dummy7_841e;
db dummy7_841f; // 03a6:49bf
db dummy7_8420;
db dummy7_8421; // 03a6:49c1
db dummy7_8422;
db dummy7_8423; // 03a6:49c3
db dummy7_8424;
db dummy7_8425; // 03a6:49c5
db dummy7_8426;
db dummy7_8427; // 03a6:49c7
db dummy7_8428;
db dummy7_8429; // 03a6:49c9
db dummy7_842a;
db dummy7_842b; // 03a6:49cb
db byte_1782c; // 03a6:49cc
db dummy7_842d[3];
db dummy7_8430; // 03a6:49d0
db dummy7_8431;
db dummy7_8432; // 03a6:49d2
db dummy7_8433;
db dummy7_8434; // 03a6:49d4
db dummy7_8435;
db dummy7_8436; // 03a6:49d6
db dummy7_8437;
db dummy7_8438; // 03a6:49d8
db dummy7_8439;
db dummy7_843a; // 03a6:49da
db dummy7_843b;
db dummy7_843c; // 03a6:49dc
db byte_1783d; // 03a6:49dd
db dummy7_843e[32]; // 03a6:49de
db dummy7_845e[32]; // 03a6:49fe
db dummy7_847e[32]; // 03a6:4a1e
db dummy7_849e[32]; // 03a6:4a3e
db dummy7_84be[32]; // 03a6:4a5e
db dummy7_84de[32]; // 03a6:4a7e
db dummy7_84fe[32]; // 03a6:4a9e
db dummy7_851e[32]; // 03a6:4abe
db dummy7_853e[32]; // 03a6:4ade
db dummy7_855e[32]; // 03a6:4afe
db dummy7_857e[32]; // 03a6:4b1e
db dummy7_859e[32]; // 03a6:4b3e
db dummy7_85be[32]; // 03a6:4b5e
db dummy7_85de[32]; // 03a6:4b7e
db dummy7_85fe[32]; // 03a6:4b9e
db dummy7_861e[32]; // 03a6:4bbe
db dummy7_863e[32]; // 03a6:4bde
db dummy7_865e[32]; // 03a6:4bfe
db dummy7_867e[32]; // 03a6:4c1e
db dummy7_869e[32]; // 03a6:4c3e
db dummy7_86be[32]; // 03a6:4c5e
db dummy7_86de[32]; // 03a6:4c7e
db dummy7_86fe[32]; // 03a6:4c9e
db dummy7_871e[32]; // 03a6:4cbe
db dummy7_873e[32]; // 03a6:4cde
db dummy7_875e[32]; // 03a6:4cfe
db dummy7_877e[32]; // 03a6:4d1e
db dummy7_879e[32]; // 03a6:4d3e
db dummy7_87be[32]; // 03a6:4d5e
db dummy7_87de[32]; // 03a6:4d7e
db dummy7_87fe[32]; // 03a6:4d9e
db dummy7_881e[32]; // 03a6:4dbe
db dummy7_883e[32]; // 03a6:4dde
db dummy7_885e[32]; // 03a6:4dfe
db dummy7_887e[32]; // 03a6:4e1e
db dummy7_889e[32]; // 03a6:4e3e
db dummy7_88be[32]; // 03a6:4e5e
db dummy7_88de[32]; // 03a6:4e7e
db dummy7_88fe[32]; // 03a6:4e9e
db dummy7_891e[32]; // 03a6:4ebe
db dummy7_893e[32]; // 03a6:4ede
db dummy7_895e[32]; // 03a6:4efe
db dummy7_897e[32]; // 03a6:4f1e
db dummy7_899e[32]; // 03a6:4f3e
db dummy7_89be[32]; // 03a6:4f5e
db dummy7_89de[32]; // 03a6:4f7e
db dummy7_89fe[32]; // 03a6:4f9e
db dummy7_8a1e[32]; // 03a6:4fbe
db dummy7_8a3e[32]; // 03a6:4fde
db dummy7_8a5e[32]; // 03a6:4ffe
db dummy7_8a7e[32]; // 03a6:501e
db dummy7_8a9e[32]; // 03a6:503e
db dummy7_8abe[32]; // 03a6:505e
db dummy7_8ade[32]; // 03a6:507e
db dummy7_8afe[32]; // 03a6:509e
db dummy7_8b1e[32]; // 03a6:50be
db dummy7_8b3e[32]; // 03a6:50de
db dummy7_8b5e[32]; // 03a6:50fe
db dummy7_8b7e[32]; // 03a6:511e
db dummy7_8b9e[32]; // 03a6:513e
db byte_17fbe; // 03a6:515e
db dummy7_8bbf[1];
db dummy7_8bc0; // 03a6:5160
db dummy7_8bc1;
db dummy7_8bc2; // 03a6:5162
db dummy7_8bc3;
db dummy7_8bc4;
db dummy7_8bc5;
db dummy7_8bc6; // 03a6:5166
db dummy7_8bc7;
db dummy7_8bc8; // 03a6:5168
db dummy7_8bc9;
db dummy7_8bca; // 03a6:516a
db dummy7_8bcb;
db dummy7_8bcc;
db dummy7_8bcd;
db dummy7_8bce; // 03a6:516e
db byte_17fcf; // 03a6:516f
db dummy7_8bd0;
db dummy7_8bd1; // 03a6:5171
db dummy7_8bd2;
db dummy7_8bd3; // 03a6:5173
db dummy7_8bd4;
db dummy7_8bd5; // 03a6:5175
db dummy7_8bd6;
db dummy7_8bd7; // 03a6:5177
db dummy7_8bd8;
db dummy7_8bd9; // 03a6:5179
db dummy7_8bda;
db dummy7_8bdb; // 03a6:517b
db dummy7_8bdc;
db dummy7_8bdd; // 03a6:517d
db dummy7_8bde;
db dummy7_8bdf; // 03a6:517f
db byte_17fe0; // 03a6:5180
db dummy7_8be1[32]; // 03a6:5181
db dummy7_8c01[32]; // 03a6:51a1
db dummy7_8c21[32]; // 03a6:51c1
db dummy7_8c41[32]; // 03a6:51e1
db dummy7_8c61[32]; // 03a6:5201
db dummy7_8c81[32]; // 03a6:5221
db dummy7_8ca1[32]; // 03a6:5241
db dummy7_8cc1[32]; // 03a6:5261
db dummy7_8ce1[32]; // 03a6:5281
db dummy7_8d01[32]; // 03a6:52a1
db dummy7_8d21[32]; // 03a6:52c1
db dummy7_8d41[32]; // 03a6:52e1
db dummy7_8d61[32]; // 03a6:5301
db dummy7_8d81[32]; // 03a6:5321
db dummy7_8da1[32]; // 03a6:5341
db dummy7_8dc1[32]; // 03a6:5361
db dummy7_8de1[32]; // 03a6:5381
db dummy7_8e01[32]; // 03a6:53a1
db dummy7_8e21[32]; // 03a6:53c1
db dummy7_8e41[32]; // 03a6:53e1
db dummy7_8e61[32]; // 03a6:5401
db dummy7_8e81[32]; // 03a6:5421
db dummy7_8ea1[32]; // 03a6:5441
db dummy7_8ec1[32]; // 03a6:5461
db dummy7_8ee1[32]; // 03a6:5481
db dummy7_8f01[32]; // 03a6:54a1
db dummy7_8f21[32]; // 03a6:54c1
db dummy7_8f41[32]; // 03a6:54e1
db dummy7_8f61[32]; // 03a6:5501
db dummy7_8f81[32]; // 03a6:5521
db dummy7_8fa1[32]; // 03a6:5541
db dummy7_8fc1[32]; // 03a6:5561
db dummy7_8fe1[32]; // 03a6:5581
db dummy7_9001[32]; // 03a6:55a1
db dummy7_9021[32]; // 03a6:55c1
db dummy7_9041[32]; // 03a6:55e1
db dummy7_9061[32]; // 03a6:5601
db dummy7_9081[32]; // 03a6:5621
db dummy7_90a1[32]; // 03a6:5641
db dummy7_90c1[32]; // 03a6:5661
db dummy7_90e1[32]; // 03a6:5681
db dummy7_9101[32]; // 03a6:56a1
db dummy7_9121[32]; // 03a6:56c1
db dummy7_9141[32]; // 03a6:56e1
db dummy7_9161[32]; // 03a6:5701
db dummy7_9181[32]; // 03a6:5721
db dummy7_91a1[32]; // 03a6:5741
db dummy7_91c1[32]; // 03a6:5761
db dummy7_91e1[32]; // 03a6:5781
db dummy7_9201[32]; // 03a6:57a1
db dummy7_9221; // 03a6:57c1
db dummy7_9222; // 03a6:57c2
dw word_18623; // 03a6:57c3
db dummy7_9225;
db dummy7_9226;
db dummy7_9227;
db dummy7_9228;
db dummy7_9229;
db dummy7_922a;
db dummy7_922b;
db dummy7_922c;
db dummy7_922d;
db dummy7_922e;
db dummy7_922f;
db dummy7_9230;
db dummy7_9231;
db dummy7_9232;
db dummy7_9233;
db dummy7_9234;
db dummy7_9235;
db byte_18636; // 03a6:57d6
db dummy7_9237[1];
dw word_18638; // 03a6:57d8
dw word_1863a; // 03a6:57da
db byte_1863c; // 03a6:57dc
db byte_1863d; // 03a6:57dd
db dummy7_923e[32]; // 03a6:57de
db dummy7_925e; // 03a6:57fe
db dummy7_925f; // 03a6:57ff
db dummy7_9260; // 03a6:5800
db dummy7_9261; // 03a6:5801
db dummy7_9262; // 03a6:5802
db dummy7_9263;
db dummy7_9264; // 03a6:5804
db dummy7_9265; // 03a6:5805
db dummy7_9266; // 03a6:5806
db dummy7_9267;
db dummy7_9268; // 03a6:5808
db dummy7_9269; // 03a6:5809
db dummy7_926a; // 03a6:580a
db dummy7_926b;
db dummy7_926c; // 03a6:580c
db dummy7_926d; // 03a6:580d
db dummy7_926e; // 03a6:580e
db dummy7_926f;
db dummy7_9270; // 03a6:5810
db dummy7_9271; // 03a6:5811
db dummy7_9272; // 03a6:5812
db dummy7_9273;
db dummy7_9274; // 03a6:5814
db dummy7_9275; // 03a6:5815
dw dummy7_9276; // 03a6:5816
db dummy7_9278[32]; // 03a6:5818
db dummy7_9298[32]; // 03a6:5838
db dummy7_92b8[32]; // 03a6:5858
db dummy7_92d8; // 03a6:5878
db dummy7_92d9; // 03a6:5879
db dummy7_92da; // 03a6:587a
db dummy7_92db; // 03a6:587b
db dummy7_92dc; // 03a6:587c
db dummy7_92dd; // 03a6:587d
db dummy7_92de;
db dummy7_92df; // 03a6:587f
db dummy7_92e0; // 03a6:5880
char ae[7]; // 03a6:5881
char arpooo[9]; // 03a6:5888
db dummy7_92f1[32]; // 03a6:5891
db dummy7_9311[32]; // 03a6:58b1
db dummy7_9331[32]; // 03a6:58d1
db dummy7_9351[32]; // 03a6:58f1
db dummy7_9371[32]; // 03a6:5911
db dummy7_9391[32]; // 03a6:5931
db dummy7_93b1[32]; // 03a6:5951
db dummy7_93d1[32]; // 03a6:5971
db dummy7_93f1[32]; // 03a6:5991
db dummy7_9411[32]; // 03a6:59b1
db dummy7_9431[32]; // 03a6:59d1
db dummy7_9451[32]; // 03a6:59f1
db dummy7_9471[32]; // 03a6:5a11
db dummy7_9491[32]; // 03a6:5a31
db dummy7_94b1[32]; // 03a6:5a51
db dummy7_94d1[32]; // 03a6:5a71
db dummy7_94f1[32]; // 03a6:5a91
db dummy7_9511[32]; // 03a6:5ab1
db dummy7_9531[32]; // 03a6:5ad1
db dummy7_9551[32]; // 03a6:5af1
db dummy7_9571; // 03a6:5b11
db dummy7_9572; // 03a6:5b12
db dummy7_9573; // 03a6:5b13
db dummy7_9574; // 03a6:5b14
db dummy7_9575; // 03a6:5b15
db dummy7_9576;
db dummy7_9577; // 03a6:5b17
dw word_18978; // 03a6:5b18
dw word_1897a; // 03a6:5b1a
dw word_1897c; // 03a6:5b1c
dw word_1897e; // 03a6:5b1e
dw word_18980; // 03a6:5b20
dw word_18982; // 03a6:5b22
dw word_18984; // 03a6:5b24
db dummy7_9586; // 03a6:5b26
db dummy7_9587; // 03a6:5b27
db dummy7_9588; // 03a6:5b28
db dummy7_9589; // 03a6:5b29
db dummy7_958a; // 03a6:5b2a
db dummy7_958b; // 03a6:5b2b
db dummy7_958c; // 03a6:5b2c
db dummy7_958d; // 03a6:5b2d
dw word_1898e; // 03a6:5b2e
db byte_18990; // 03a6:5b30
db byte_18991; // 03a6:5b31
db byte_18992; // 03a6:5b32
db byte_18993; // 03a6:5b33
db byte_18994; // 03a6:5b34
db byte_18995; // 03a6:5b35
db byte_18996; // 03a6:5b36
db byte_18997; // 03a6:5b37
db byte_18998; // 03a6:5b38
db byte_18999; // 03a6:5b39
db byte_1899a; // 03a6:5b3a
db byte_1899b; // 03a6:5b3b
db byte_1899c; // 03a6:5b3c
db byte_1899d; // 03a6:5b3d
db dummy7_959e[32]; // 03a6:5b3e
db dummy7_95be[32]; // 03a6:5b5e
db dummy7_95de[32]; // 03a6:5b7e
db dummy7_95fe[32]; // 03a6:5b9e
db dummy7_961e[32]; // 03a6:5bbe
db dummy7_963e[32]; // 03a6:5bde
db dummy7_965e[32]; // 03a6:5bfe
db dummy7_967e[32]; // 03a6:5c1e
db dummy7_969e[32]; // 03a6:5c3e
db dummy7_96be[32]; // 03a6:5c5e
db dummy7_96de[32]; // 03a6:5c7e
db dummy7_96fe[32]; // 03a6:5c9e
db dummy7_971e[32]; // 03a6:5cbe
db dummy7_973e; // 03a6:5cde
db dummy7_973f; // 03a6:5cdf
db dummy7_9740; // 03a6:5ce0
db dummy7_9741; // 03a6:5ce1
db dummy7_9742; // 03a6:5ce2
db dummy7_9743; // 03a6:5ce3
db dummy7_9744; // 03a6:5ce4
db dummy7_9745; // 03a6:5ce5
db dummy7_9746; // 03a6:5ce6
db dummy7_9747; // 03a6:5ce7
db dummy7_9748; // 03a6:5ce8
db dummy7_9749; // 03a6:5ce9
db dummy7_974a; // 03a6:5cea
db dummy7_974b; // 03a6:5ceb
db dummy7_974c; // 03a6:5cec
db dummy7_974d; // 03a6:5ced
db dummy7_974e; // 03a6:5cee
db dummy7_974f; // 03a6:5cef
db dummy7_9750; // 03a6:5cf0
db dummy7_9751; // 03a6:5cf1
db dummy7_9752; // 03a6:5cf2
db dummy7_9753; // 03a6:5cf3
db dummy7_9754; // 03a6:5cf4
db byte_18b55; // 03a6:5cf5
db dummy7_9756[32]; // 03a6:5cf6
db dummy7_9776[32]; // 03a6:5d16
db dummy7_9796[32]; // 03a6:5d36
db dummy7_97b6[32]; // 03a6:5d56
db dummy7_97d6[32]; // 03a6:5d76
db dummy7_97f6[32]; // 03a6:5d96
db dummy7_9816; // 03a6:5db6
db dummy7_9817; // 03a6:5db7
db dummy7_9818; // 03a6:5db8
db dummy7_9819; // 03a6:5db9
db dummy7_981a; // 03a6:5dba
db dummy7_981b; // 03a6:5dbb
db dummy7_981c; // 03a6:5dbc
db dummy7_981d; // 03a6:5dbd
db dummy7_981e; // 03a6:5dbe
db dummy7_981f; // 03a6:5dbf
db dummy7_9820; // 03a6:5dc0
db dummy7_9821; // 03a6:5dc1
db dummy7_9822; // 03a6:5dc2
db byte_18c23; // 03a6:5dc3
db dummy7_9824[32]; // 03a6:5dc4
db dummy7_9844[32]; // 03a6:5de4
db dummy7_9864[32]; // 03a6:5e04
db dummy7_9884[32]; // 03a6:5e24
db dummy7_98a4[32]; // 03a6:5e44
db dummy7_98c4[32]; // 03a6:5e64
db dummy7_98e4[32]; // 03a6:5e84
db dummy7_9904[32]; // 03a6:5ea4
db dummy7_9924[32]; // 03a6:5ec4
db dummy7_9944[32]; // 03a6:5ee4
db dummy7_9964[32]; // 03a6:5f04
db dummy7_9984[32]; // 03a6:5f24
db dummy7_99a4[32]; // 03a6:5f44
db dummy7_99c4[32]; // 03a6:5f64
db dummy7_99e4[32]; // 03a6:5f84
db dummy7_9a04; // 03a6:5fa4
db dummy7_9a05; // 03a6:5fa5
db dummy7_9a06; // 03a6:5fa6
db dummy7_9a07; // 03a6:5fa7
db byte_18e08; // 03a6:5fa8
db dummy7_9a09; // 03a6:5fa9
db byte_18e0a; // 03a6:5faa
db dummy7_9a0b; // 03a6:5fab
db byte_18e0c; // 03a6:5fac
db dummy7_9a0d; // 03a6:5fad
db dummy7_9a0e;
db dummy7_9a0f;
db dummy7_9a10;
db dummy7_9a11;
db dummy7_9a12;
db dummy7_9a13;
db dummy7_9a14;
db dummy7_9a15;
db dummy7_9a16;
db dummy7_9a17;
db dummy7_9a18;
db dummy7_9a19;
db dummy7_9a1a;
db dummy7_9a1b;
db dummy7_9a1c;
db dummy7_9a1d;
db dummy7_9a1e;
db dummy7_9a1f;
db dummy7_9a20;
db dummy7_9a21;
db dummy7_9a22;
db dummy7_9a23;
db dummy7_9a24;
db dummy7_9a25;
db dummy7_9a26;
db dummy7_9a27;
db byte_18e28; // 03a6:5fc8
db byte_18e29; // 03a6:5fc9
db dummy7_9a2a;
db byte_18e2b; // 03a6:5fcb
db dummy7_9a2c;
db dummy7_9a2d;
db byte_18e2e; // 03a6:5fce
db dummy7_9a2f;
db dummy7_9a30;
db dummy7_9a31;
db dummy7_9a32;
db byte_18e33; // 03a6:5fd3
db dummy7_9a34;
db dummy7_9a35;
db byte_18e36; // 03a6:5fd6
db dummy7_9a37[1];
db byte_18e38; // 03a6:5fd8
db byte_18e39; // 03a6:5fd9
db byte_18e3a; // 03a6:5fda
db dummy7_9a3b;
db dummy7_9a3c;
db dummy7_9a3d;
db dummy7_9a3e;
db dummy7_9a3f;
db dummy7_9a40;
db dummy7_9a41;
db dummy7_9a42;
db dummy7_9a43;
db dummy7_9a44;
db dummy7_9a45;
db byte_18e46; // 03a6:5fe6
db byte_18e47; // 03a6:5fe7
db byte_18e48; // 03a6:5fe8
db byte_18e49; // 03a6:5fe9
db dummy7_9a4a[2];
db byte_18e4c; // 03a6:5fec
db byte_18e4d; // 03a6:5fed
db byte_18e4e; // 03a6:5fee
db byte_18e4f; // 03a6:5fef
db byte_18e50; // 03a6:5ff0
db byte_18e51; // 03a6:5ff1
db dummy7_9a52[2];
db dummy7_9a54[32]; // 03a6:5ff4
db dummy7_9a74[32]; // 03a6:6014
db dummy7_9a94[32]; // 03a6:6034
db dummy7_9ab4[32]; // 03a6:6054
db dummy7_9ad4[32]; // 03a6:6074
db dummy7_9af4[32]; // 03a6:6094
db dummy7_9b14[32]; // 03a6:60b4
db dummy7_9b34[32]; // 03a6:60d4
db dummy7_9b54[32]; // 03a6:60f4
db dummy7_9b74[32]; // 03a6:6114
db dummy7_9b94[32]; // 03a6:6134
db dummy7_9bb4[32]; // 03a6:6154
db dummy7_9bd4[32]; // 03a6:6174
db dummy7_9bf4[32]; // 03a6:6194
db dummy7_9c14[32]; // 03a6:61b4
db dummy7_9c34[32]; // 03a6:61d4
db dummy7_9c54[32]; // 03a6:61f4
db dummy7_9c74[32]; // 03a6:6214
db dummy7_9c94[32]; // 03a6:6234
db dummy7_9cb4[32]; // 03a6:6254
db dummy7_9cd4[32]; // 03a6:6274
db dummy7_9cf4[32]; // 03a6:6294
db dummy7_9d14[32]; // 03a6:62b4
db dummy7_9d34[32]; // 03a6:62d4
db dummy7_9d54[32]; // 03a6:62f4
db dummy7_9d74[32]; // 03a6:6314
db dummy7_9d94[32]; // 03a6:6334
db dummy7_9db4[32]; // 03a6:6354
db dummy7_9dd4[32]; // 03a6:6374
db dummy7_9df4[32]; // 03a6:6394
db dummy7_9e14[32]; // 03a6:63b4
db dummy7_9e34[32]; // 03a6:63d4
db dummy7_9e54[32]; // 03a6:63f4
db dummy7_9e74[32]; // 03a6:6414
db dummy7_9e94[32]; // 03a6:6434
db dummy7_9eb4[32]; // 03a6:6454
db dummy7_9ed4[32]; // 03a6:6474
db dummy7_9ef4[32]; // 03a6:6494
db dummy7_9f14[32]; // 03a6:64b4
db dummy7_9f34[32]; // 03a6:64d4
db dummy7_9f54[32]; // 03a6:64f4
db dummy7_9f74[32]; // 03a6:6514
db dummy7_9f94[32]; // 03a6:6534
db dummy7_9fb4[32]; // 03a6:6554
db dummy7_9fd4[32]; // 03a6:6574
db dummy7_9ff4[32]; // 03a6:6594
db dummy7_a014[32]; // 03a6:65b4
db dummy7_a034[32]; // 03a6:65d4
db dummy7_a054[32]; // 03a6:65f4
db dummy7_a074[32]; // 03a6:6614
db dummy7_a094[32]; // 03a6:6634
db dummy7_a0b4[32]; // 03a6:6654
db dummy7_a0d4[32]; // 03a6:6674
db dummy7_a0f4[32]; // 03a6:6694
db dummy7_a114[32]; // 03a6:66b4
db dummy7_a134[32]; // 03a6:66d4
db dummy7_a154[32]; // 03a6:66f4
db dummy7_a174[32]; // 03a6:6714
db dummy7_a194[32]; // 03a6:6734
db dummy7_a1b4[32]; // 03a6:6754
db dummy7_a1d4[32]; // 03a6:6774
db dummy7_a1f4[32]; // 03a6:6794
db dummy7_a214[32]; // 03a6:67b4
db dummy7_a234[32]; // 03a6:67d4
db dummy7_a254[32]; // 03a6:67f4
db dummy7_a274[32]; // 03a6:6814
db dummy7_a294[32]; // 03a6:6834
db dummy7_a2b4[32]; // 03a6:6854
db dummy7_a2d4[32]; // 03a6:6874
db dummy7_a2f4[32]; // 03a6:6894
db dummy7_a314[32]; // 03a6:68b4
db dummy7_a334[32]; // 03a6:68d4
db dummy7_a354[32]; // 03a6:68f4
db dummy7_a374[32]; // 03a6:6914
db dummy7_a394[32]; // 03a6:6934
db dummy7_a3b4[32]; // 03a6:6954
db dummy7_a3d4[32]; // 03a6:6974
db dummy7_a3f4[32]; // 03a6:6994
db dummy7_a414[32]; // 03a6:69b4
db dummy7_a434[32]; // 03a6:69d4
db dummy7_a454[32]; // 03a6:69f4
db dummy7_a474[32]; // 03a6:6a14
db dummy7_a494[32]; // 03a6:6a34
db dummy7_a4b4[32]; // 03a6:6a54
db dummy7_a4d4[32]; // 03a6:6a74
db dummy7_a4f4[32]; // 03a6:6a94
db dummy7_a514[32]; // 03a6:6ab4
db dummy7_a534[32]; // 03a6:6ad4
db dummy7_a554[32]; // 03a6:6af4
db dummy7_a574[32]; // 03a6:6b14
db dummy7_a594[32]; // 03a6:6b34
db dummy7_a5b4[32]; // 03a6:6b54
db dummy7_a5d4[32]; // 03a6:6b74
db dummy7_a5f4[32]; // 03a6:6b94
db dummy7_a614[32]; // 03a6:6bb4
db dummy7_a634[32]; // 03a6:6bd4
db dummy7_a654[32]; // 03a6:6bf4
db dummy7_a674[32]; // 03a6:6c14
db dummy7_a694[32]; // 03a6:6c34
db dummy7_a6b4[32]; // 03a6:6c54
db dummy7_a6d4[32]; // 03a6:6c74
db dummy7_a6f4[32]; // 03a6:6c94
db dummy7_a714[32]; // 03a6:6cb4
db dummy7_a734[32]; // 03a6:6cd4
db dummy7_a754[32]; // 03a6:6cf4
db dummy7_a774[32]; // 03a6:6d14
db dummy7_a794[32]; // 03a6:6d34
db dummy7_a7b4[32]; // 03a6:6d54
db dummy7_a7d4[32]; // 03a6:6d74
db dummy7_a7f4[32]; // 03a6:6d94
db dummy7_a814[32]; // 03a6:6db4
db dummy7_a834[32]; // 03a6:6dd4
db dummy7_a854[32]; // 03a6:6df4
db dummy7_a874[32]; // 03a6:6e14
db dummy7_a894[32]; // 03a6:6e34
db dummy7_a8b4[32]; // 03a6:6e54
db dummy7_a8d4[32]; // 03a6:6e74
db dummy7_a8f4[32]; // 03a6:6e94
db dummy7_a914[32]; // 03a6:6eb4
db dummy7_a934[32]; // 03a6:6ed4
db dummy7_a954[32]; // 03a6:6ef4
db dummy7_a974[32]; // 03a6:6f14
db dummy7_a994[32]; // 03a6:6f34
db dummy7_a9b4[32]; // 03a6:6f54
db dummy7_a9d4; // 03a6:6f74
db dummy7_a9d5; // 03a6:6f75
db dummy7_a9d6; // 03a6:6f76
db dummy7_a9d7; // 03a6:6f77
db dummy7_a9d8; // 03a6:6f78
db dummy7_a9d9; // 03a6:6f79
db dummy7_a9da; // 03a6:6f7a
db dummy7_a9db; // 03a6:6f7b
db dummy7_a9dc; // 03a6:6f7c
db dummy7_a9dd; // 03a6:6f7d
db dummy7_a9de; // 03a6:6f7e
db dummy7_a9df; // 03a6:6f7f
db dummy7_a9e0; // 03a6:6f80
db dummy7_a9e1; // 03a6:6f81
db dummy7_a9e2; // 03a6:6f82
db dummy7_a9e3; // 03a6:6f83
db dummy7_a9e4; // 03a6:6f84
db dummy7_a9e5; // 03a6:6f85
db dummy7_a9e6; // 03a6:6f86
db dummy7_a9e7; // 03a6:6f87
db dummy7_a9e8; // 03a6:6f88
db dummy7_a9e9; // 03a6:6f89
db dummy7_a9ea; // 03a6:6f8a
db dummy7_a9eb; // 03a6:6f8b
db dummy7_a9ec; // 03a6:6f8c
db dummy7_a9ed; // 03a6:6f8d
db dummy7_a9ee; // 03a6:6f8e
db byte_19def; // 03a6:6f8f
dw word_19df0; // 03a6:6f90
db byte_19df2; // 03a6:6f92
db byte_19df3; // 03a6:6f93
dw word_19df4; // 03a6:6f94
db byte_19df6; // 03a6:6f96
db byte_19df7; // 03a6:6f97
db byte_19df8; // 03a6:6f98
db byte_19df9; // 03a6:6f99
db byte_19dfa; // 03a6:6f9a
db byte_19dfb; // 03a6:6f9b
db byte_19dfc; // 03a6:6f9c
dw word_19dfd; // 03a6:6f9d
dw word_19dff; // 03a6:6f9f
db byte_19e01; // 03a6:6fa1
dw word_19e02; // 03a6:6fa2
dw word_19e04; // 03a6:6fa4
db byte_19e06; // 03a6:6fa6
db byte_19e07; // 03a6:6fa7
db byte_19e08; // 03a6:6fa8
db dummy7_aa09[1];
db byte_19e0a; // 03a6:6faa
db byte_19e0b; // 03a6:6fab
db byte_19e0c; // 03a6:6fac
db byte_19e0d; // 03a6:6fad
dw word_19e0e; // 03a6:6fae
db byte_19e10; // 03a6:6fb0
db byte_19e11; // 03a6:6fb1
db byte_19e12; // 03a6:6fb2
db byte_19e13; // 03a6:6fb3
db byte_19e14; // 03a6:6fb4
dw word_19e15; // 03a6:6fb5
db byte_19e17; // 03a6:6fb7
db byte_19e18; // 03a6:6fb8
db dummy7_aa19[1];
db dummy7_aa1a[32]; // 03a6:6fba
db dummy7_aa3a[32]; // 03a6:6fda
db dummy7_aa5a[32]; // 03a6:6ffa
db dummy7_aa7a[32]; // 03a6:701a
db dummy7_aa9a[32]; // 03a6:703a
db dummy7_aaba[32]; // 03a6:705a
db dummy7_aada[32]; // 03a6:707a
db dummy7_aafa[32]; // 03a6:709a
db dummy7_ab1a[32]; // 03a6:70ba
db dummy7_ab3a[32]; // 03a6:70da
db dummy7_ab5a[32]; // 03a6:70fa
db dummy7_ab7a[32]; // 03a6:711a
db dummy7_ab9a[32]; // 03a6:713a
db dummy7_abba[32]; // 03a6:715a
db dummy7_abda[32]; // 03a6:717a
db dummy7_abfa[32]; // 03a6:719a
db dummy7_ac1a[32]; // 03a6:71ba
db dummy7_ac3a[32]; // 03a6:71da
db dummy7_ac5a[32]; // 03a6:71fa
db dummy7_ac7a[32]; // 03a6:721a
db dummy7_ac9a[32]; // 03a6:723a
db dummy7_acba[32]; // 03a6:725a
db dummy7_acda[32]; // 03a6:727a
db dummy7_acfa[32]; // 03a6:729a
db dummy7_ad1a[32]; // 03a6:72ba
db dummy7_ad3a[32]; // 03a6:72da
db dummy7_ad5a[32]; // 03a6:72fa
db dummy7_ad7a[32]; // 03a6:731a
db dummy7_ad9a[32]; // 03a6:733a
db dummy7_adba[32]; // 03a6:735a
db dummy7_adda[32]; // 03a6:737a
db dummy7_adfa[32]; // 03a6:739a
db dummy7_ae1a[32]; // 03a6:73ba
db dummy7_ae3a[32]; // 03a6:73da
db dummy7_ae5a[32]; // 03a6:73fa
db dummy7_ae7a[32]; // 03a6:741a
db dummy7_ae9a;
db dummy7_ae9b;
db dummy7_ae9c;
db dummy7_ae9d;
db dummy7_ae9e;
db dummy7_ae9f;
db dummy7_aea0;
db dummy7_aea1;
db dummy7_aea2;
db dummy7_aea3;
db dummy7_aea4;
db dummy7_aea5; // 03a6:7445
db dummy7_aea6; // 03a6:7446
db dummy7_aea7; // 03a6:7447
db byte_1a2a8; // 03a6:7448
db dummy7_aea9; // 03a6:7449
db byte_1a2aa; // 03a6:744a
db dummy7_aeab[32]; // 03a6:744b
db dummy7_aecb[32]; // 03a6:746b
db dummy7_aeeb[32]; // 03a6:748b
db dummy7_af0b[32]; // 03a6:74ab
db dummy7_af2b[32]; // 03a6:74cb
db dummy7_af4b[32]; // 03a6:74eb
db dummy7_af6b[32]; // 03a6:750b
db dummy7_af8b[32]; // 03a6:752b
db dummy7_afab[32]; // 03a6:754b
db dummy7_afcb[32]; // 03a6:756b
db dummy7_afeb[32]; // 03a6:758b
db dummy7_b00b[32]; // 03a6:75ab
db dummy7_b02b; // 03a6:75cb
db dummy7_b02c; // 03a6:75cc
db dummy7_b02d; // 03a6:75cd
db dummy7_b02e; // 03a6:75ce
db dummy7_b02f; // 03a6:75cf
db dummy7_b030; // 03a6:75d0
db dummy7_b031; // 03a6:75d1
db dummy7_b032; // 03a6:75d2
db dummy7_b033; // 03a6:75d3
db dummy7_b034; // 03a6:75d4
db dummy7_b035; // 03a6:75d5
db dummy7_b036; // 03a6:75d6
db dummy7_b037; // 03a6:75d7
db dummy7_b038; // 03a6:75d8
db dummy7_b039; // 03a6:75d9
db dummy7_b03a; // 03a6:75da
db dummy7_b03b; // 03a6:75db
db dummy7_b03c; // 03a6:75dc
db dummy7_b03d; // 03a6:75dd
db dummy7_b03e; // 03a6:75de
db dummy7_b03f; // 03a6:75df
db dummy7_b040; // 03a6:75e0
db dummy7_b041; // 03a6:75e1
db dummy7_b042; // 03a6:75e2
db dummy7_b043; // 03a6:75e3
db dummy7_b044; // 03a6:75e4
db dummy7_b045; // 03a6:75e5
db dummy7_b046; // 03a6:75e6
db dummy7_b047; // 03a6:75e7
db dummy7_b048; // 03a6:75e8
db byte_1a449; // 03a6:75e9
db dummy7_b04a[32]; // 03a6:75ea
db dummy7_b06a; // 03a6:760a
db byte_1a46b; // 03a6:760b
db dummy7_b06c; // 03a6:760c
db dummy7_b06d; // 03a6:760d
db dummy7_b06e; // 03a6:760e
db dummy7_b06f; // 03a6:760f
db dummy7_b070; // 03a6:7610
db dummy7_b071; // 03a6:7611
db dummy7_b072; // 03a6:7612
db dummy7_b073; // 03a6:7613
db dummy7_b074; // 03a6:7614
db dummy7_b075; // 03a6:7615
db dummy7_b076; // 03a6:7616
db dummy7_b077; // 03a6:7617
db dummy7_b078; // 03a6:7618
db dummy7_b079; // 03a6:7619
db dummy7_b07a; // 03a6:761a
db dummy7_b07b; // 03a6:761b
db byte_1a47c; // 03a6:761c
db dummy7_b07d[32]; // 03a6:761d
db dummy7_b09d[32]; // 03a6:763d
db dummy7_b0bd[32]; // 03a6:765d
db dummy7_b0dd; // 03a6:767d
db dummy7_b0de; // 03a6:767e
db dummy7_b0df; // 03a6:767f
db dummy7_b0e0; // 03a6:7680
db dummy7_b0e1; // 03a6:7681
db dummy7_b0e2; // 03a6:7682
db dummy7_b0e3; // 03a6:7683
db dummy7_b0e4; // 03a6:7684
db dummy7_b0e5; // 03a6:7685
db dummy7_b0e6; // 03a6:7686
db dummy7_b0e7; // 03a6:7687
db dummy7_b0e8; // 03a6:7688
db dummy7_b0e9; // 03a6:7689
db dummy7_b0ea; // 03a6:768a
db dummy7_b0eb; // 03a6:768b
db dummy7_b0ec; // 03a6:768c
db dummy7_b0ed; // 03a6:768d
db dummy7_b0ee; // 03a6:768e
db dummy7_b0ef; // 03a6:768f
db dummy7_b0f0; // 03a6:7690
db dummy7_b0f1; // 03a6:7691
db dummy7_b0f2; // 03a6:7692
db dummy7_b0f3; // 03a6:7693
db dummy7_b0f4; // 03a6:7694
db dummy7_b0f5; // 03a6:7695
db dummy7_b0f6; // 03a6:7696
db dummy7_b0f7; // 03a6:7697
db dummy7_b0f8; // 03a6:7698
db byte_1a4f9; // 03a6:7699
db dummy7_b0fa[32]; // 03a6:769a
db dummy7_b11a[32]; // 03a6:76ba
db dummy7_b13a[32]; // 03a6:76da
db dummy7_b15a[32]; // 03a6:76fa
db dummy7_b17a[32]; // 03a6:771a
db dummy7_b19a[32]; // 03a6:773a
db dummy7_b1ba[32]; // 03a6:775a
db dummy7_b1da[32]; // 03a6:777a
db dummy7_b1fa; // 03a6:779a
db dummy7_b1fb; // 03a6:779b
db dummy7_b1fc; // 03a6:779c
db dummy7_b1fd; // 03a6:779d
db dummy7_b1fe; // 03a6:779e
db dummy7_b1ff; // 03a6:779f
db dummy7_b200; // 03a6:77a0
db dummy7_b201; // 03a6:77a1
db dummy7_b202; // 03a6:77a2
db dummy7_b203; // 03a6:77a3
db dummy7_b204; // 03a6:77a4
db dummy7_b205; // 03a6:77a5
db dummy7_b206; // 03a6:77a6
db dummy7_b207; // 03a6:77a7
db dummy7_b208; // 03a6:77a8
db dummy7_b209; // 03a6:77a9
db dummy7_b20a; // 03a6:77aa
db dummy7_b20b; // 03a6:77ab
db dummy7_b20c; // 03a6:77ac
db byte_1a60d; // 03a6:77ad
char aparescorename[17]; // 03a6:77ae
db dummy7_b21f[32]; // 03a6:77bf
db dummy7_b23f[32]; // 03a6:77df
db dummy7_b25f[32]; // 03a6:77ff
db dummy7_b27f[32]; // 03a6:781f
db dummy7_b29f[32]; // 03a6:783f
db dummy7_b2bf; // 03a6:785f
db dummy7_b2c0; // 03a6:7860
db dummy7_b2c1; // 03a6:7861
db dummy7_b2c2; // 03a6:7862
db dummy7_b2c3; // 03a6:7863
db dummy7_b2c4; // 03a6:7864
db dummy7_b2c5; // 03a6:7865
db dummy7_b2c6; // 03a6:7866
db dummy7_b2c7; // 03a6:7867
db dummy7_b2c8; // 03a6:7868
db dummy7_b2c9; // 03a6:7869
db dummy7_b2ca; // 03a6:786a
db dummy7_b2cb; // 03a6:786b
db dummy7_b2cc; // 03a6:786c
db dummy7_b2cd; // 03a6:786d
db dummy7_b2ce; // 03a6:786e
db dummy7_b2cf; // 03a6:786f
db dummy7_b2d0; // 03a6:7870
db dummy7_b2d1; // 03a6:7871
db dummy7_b2d2; // 03a6:7872
db dummy7_b2d3; // 03a6:7873
db dummy7_b2d4; // 03a6:7874
db dummy7_b2d5; // 03a6:7875
db dummy7_b2d6; // 03a6:7876
db dummy7_b2d7; // 03a6:7877
db dummy7_b2d8; // 03a6:7878
db dummy7_b2d9; // 03a6:7879
db dummy7_b2da; // 03a6:787a
db byte_1a6db; // 03a6:787b
db dummy7_b2dc; // 03a6:787c
db dummy7_b2dd; // 03a6:787d
db dummy7_b2de; // 03a6:787e
db dummy7_b2df; // 03a6:787f
db dummy7_b2e0; // 03a6:7880
db dummy7_b2e1; // 03a6:7881
db dummy7_b2e2; // 03a6:7882
db dummy7_b2e3; // 03a6:7883
db dummy7_b2e4; // 03a6:7884
db dummy7_b2e5; // 03a6:7885
db dummy7_b2e6; // 03a6:7886
db dummy7_b2e7; // 03a6:7887
db dummy7_b2e8; // 03a6:7888
db dummy7_b2e9; // 03a6:7889
db dummy7_b2ea; // 03a6:788a
db dummy7_b2eb; // 03a6:788b
db dummy7_b2ec; // 03a6:788c
db dummy7_b2ed; // 03a6:788d
db dummy7_b2ee; // 03a6:788e
db dummy7_b2ef; // 03a6:788f
dw word_1a6f0; // 03a6:7890
dw word_1a6f2; // 03a6:7892
dw word_1a6f4; // 03a6:7894
dw word_1a6f6; // 03a6:7896
dw word_1a6f8; // 03a6:7898
dw word_1a6fa; // 03a6:789a
dw word_1a6fc; // 03a6:789c
dw word_1a6fe; // 03a6:789e
dw word_1a700; // 03a6:78a0
dw word_1a702; // 03a6:78a2
dw word_1a704; // 03a6:78a4
dw word_1a706; // 03a6:78a6
dw word_1a708; // 03a6:78a8
dw word_1a70a; // 03a6:78aa
db byte_1a70c; // 03a6:78ac
db byte_1a70d; // 03a6:78ad
db byte_1a70e; // 03a6:78ae
db byte_1a70f; // 03a6:78af
db byte_1a710; // 03a6:78b0
db byte_1a711; // 03a6:78b1
db byte_1a712; // 03a6:78b2
db byte_1a713; // 03a6:78b3
db byte_1a714; // 03a6:78b4
db byte_1a715; // 03a6:78b5
db byte_1a716; // 03a6:78b6
db byte_1a717; // 03a6:78b7
db byte_1a718; // 03a6:78b8
db byte_1a719; // 03a6:78b9
db byte_1a71a; // 03a6:78ba
db byte_1a71b; // 03a6:78bb
db byte_1a71c; // 03a6:78bc
db dummy7_b31d[32]; // 03a6:78bd
db dummy7_b33d[32]; // 03a6:78dd
db dummy7_b35d[32]; // 03a6:78fd
db dummy7_b37d[32]; // 03a6:791d
db dummy7_b39d[32]; // 03a6:793d
db dummy7_b3bd[32]; // 03a6:795d
db dummy7_b3dd[32]; // 03a6:797d
db dummy7_b3fd; // 03a6:799d
db dummy7_b3fe; // 03a6:799e
db dummy7_b3ff; // 03a6:799f
db dummy7_b400; // 03a6:79a0
db dummy7_b401; // 03a6:79a1
db dummy7_b402; // 03a6:79a2
db dummy7_b403; // 03a6:79a3
db dummy7_b404; // 03a6:79a4
db dummy7_b405; // 03a6:79a5
db dummy7_b406; // 03a6:79a6
db dummy7_b407; // 03a6:79a7
db dummy7_b408; // 03a6:79a8
db byte_1a809; // 03a6:79a9
db dummy7_b40a[32]; // 03a6:79aa
db dummy7_b42a[32]; // 03a6:79ca
db dummy7_b44a[32]; // 03a6:79ea
db dummy7_b46a[32]; // 03a6:7a0a

#ifdef DOSBOX_CUSTOM
    db filll[1024*1024*16];
#endif
                        db stack[STACK_SIZE];
                        db heap[HEAP_SIZE];
                };
}
#pragma pack(pop)

#endif
