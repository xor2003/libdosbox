
#ifndef ___DATA_H__
#define ___DATA_H__
#include "../asm.h"

#pragma pack(push, 1)
struct struct_0 {
  dw word_244b7;
  dw anonymous_0;
  dw anonymous_1;
  dw anonymous_2;
  dw anonymous_3;
};

#pragma pack(pop)


#pragma pack(push, 1)
namespace m2c{
struct Memory{
db dummya_0[6688];
db dummya_1a20[1420];
db asc_1058c[5]; // 01a2:058c
db dummya_1fb1[6]; // 01a2:058c
db dummya_1fb7[831];
db _s3mtable_108d6[11]; // 01a2:08d6
db dummya_2301[13]; // 01a2:08d6
db dummya_230e[2]; // 01a2:08d6
db _s3mtable_108f0[13]; // 01a2:08f0
db dummya_231d[3]; // 01a2:08f0
db dummya_2320[4905];
db byte_11c29; // 01a2:1c29
db dummya_364a[7]; // 01a2:1c2a
db dummya_3651[8227];
db byte_13c54[11]; // 01a2:3c54
db dummya_567f[5]; // 01a2:3c54
db dummya_5684[607];
db _table_13ec3[16]; // 01a2:3ec3
db dummya_58f3[388];
db _table_14057[11]; // 01a2:4057
db dummya_5a82[5]; // 01a2:4057
db dummya_5a87[751];
db dummya_5d76[2]; // 01a2:4356
db dummya_5d78[1269];
dw _wss_freq_table; // 01a2:484d
dw _wss_freq_table2[10]; // 01a2:484f
dw dummya_6283[11]; // 01a2:484f
dw dummya_6299[6]; // 01a2:484f
db dummya_62a5[141];
db dummya_6332; // 01a2:4912
dw word_14913; // 01a2:4913
db dummya_6335[677];
db dummya_65da; // 01a2:4bba
dw word_14bbb; // 01a2:4bbb
db dummya_65dd[301];
db dummya_670a; // 01a2:4cea
dw word_14ceb; // 01a2:4ceb
db dummya_670d[255];
db dummya_680c; // 01a2:4dec
dw word_14ded; // 01a2:4ded
db dummya_680f[377];
dd _int8addr; // 01a2:4f68
dw word_14f6c; // 01a2:4f6c
dw _timer_word_14f6e; // 01a2:4f6e
db byte_14f70; // 01a2:4f70
db byte_14f71; // 01a2:4f71
db byte_14f72; // 01a2:4f72
db byte_14f73; // 01a2:4f73
db dummya_6994[75];
db dummya_69df; // 01a2:4fbf
dw covox_au_buf_seg; // 01a2:4fc0
db dummya_69e2[2];
db dummya_69e4; // 01a2:4fc4
db covox_au_buf_off; // 01a2:4fc5
db dummya_69e6; // 01a2:4fc6
db dummya_69e7; // 01a2:4fc7
dw covox_port; // 01a2:4fc8
db dummya_69ea[130];
db dummya_6a6c; // 01a2:504c
dw word_1504d; // 01a2:504d
db dummya_6a6f[6];
db dummya_6a75; // 01a2:5055
dw word_15056; // 01a2:5056
db dummya_6a78[205];
db dummya_6b45; // 01a2:5125
dw word_15126; // 01a2:5126
db dummya_6b48[114];
db dummya_6bba; // 01a2:519a
dw word_1519b; // 01a2:519b
db dummya_6bbd[4];
db dummya_6bc1[2]; // 01a2:51a1
dw word_151a3; // 01a2:51a3
db dummya_6bc5[67];
db _pc_timer_tbl[41]; // 01a2:51e8
db dummya_6c31[40]; // 01a2:51e8
db dummya_6c59[24]; // 01a2:51e8
db dummya_6c71[9]; // 01a2:51e8
db dummya_6c7a[11]; // 01a2:51e8
db dummya_6c85[6]; // 01a2:51e8
db dummya_6c8b[11]; // 01a2:526b
db dummya_6c96[9]; // 01a2:526b
db dummya_6c9f[25]; // 01a2:526b
db dummya_6cb8[50]; // 01a2:526b
db dummya_6cea[30]; // 01a2:526b
db dummya_6d08[1482];
db dummya_72d2[2]; // 01a2:58b2
db byte_158b4; // 01a2:58b4
db dummya_72d5[44];
db dummya_7301[2]; // 01a2:58e1
db byte_158e3; // 01a2:58e3
db dummya_7304[44];
db dummya_7330[2]; // 01a2:5910
db byte_15912; // 01a2:5912
db dummya_7333[44];
db dummya_735f[2]; // 01a2:593f
db byte_15941; // 01a2:5941
db dummya_7362[44];
db dummya_738e[2]; // 01a2:596e
db byte_15970; // 01a2:5970
db dummya_7391[44];
db dummya_73bd[2]; // 01a2:599d
db byte_1599f; // 01a2:599f
db dummya_73c0[44];
db dummya_73ec[2]; // 01a2:59cc
db byte_159ce; // 01a2:59ce
db dummya_73ef[44];
db dummya_741b[2]; // 01a2:59fb
db byte_159fd; // 01a2:59fd
db dummya_741e[44];
db dummya_744a[2]; // 01a2:5a2a
db byte_15a2c; // 01a2:5a2c
db dummya_744d[44];
db dummya_7479[2]; // 01a2:5a59
db byte_15a5b; // 01a2:5a5b
db dummya_747c[44];
db dummya_74a8[2]; // 01a2:5a88
db byte_15a8a; // 01a2:5a8a
db dummya_74ab[44];
db dummya_74d7[2]; // 01a2:5ab7
db byte_15ab9; // 01a2:5ab9
db dummya_74da[44];
db dummya_7506[2]; // 01a2:5ae6
db byte_15ae8; // 01a2:5ae8
db dummya_7509[44];
db dummya_7535[2]; // 01a2:5b15
db byte_15b17; // 01a2:5b17
db dummya_7538[44];
db dummya_7564[2]; // 01a2:5b44
db byte_15b46; // 01a2:5b46
db dummya_7567[56];
db dummya_759f[2]; // 01a2:5b7f
db byte_15b81; // 01a2:5b81
db dummya_75a2[41];
db dummya_75cb[2]; // 01a2:5bab
db byte_15bad; // 01a2:5bad
db dummya_75ce[42];
db dummya_75f8[2]; // 01a2:5bd8
db byte_15bda; // 01a2:5bda
db dummya_75fb[42];
db dummya_7625[2]; // 01a2:5c05
db byte_15c07; // 01a2:5c07
db dummya_7628[42];
db dummya_7652[2]; // 01a2:5c32
db byte_15c34; // 01a2:5c34
db dummya_7655[42];
db dummya_767f[2]; // 01a2:5c5f
db byte_15c61; // 01a2:5c61
db dummya_7682[42];
db dummya_76ac[2]; // 01a2:5c8c
db byte_15c8e; // 01a2:5c8e
db dummya_76af[42];
db dummya_76d9[2]; // 01a2:5cb9
db byte_15cbb; // 01a2:5cbb
db dummya_76dc[42];
db dummya_7706[2]; // 01a2:5ce6
db byte_15ce8; // 01a2:5ce8
db dummya_7709[42];
db dummya_7733[2]; // 01a2:5d13
db byte_15d15; // 01a2:5d15
db dummya_7736[42];
db dummya_7760[2]; // 01a2:5d40
db byte_15d42; // 01a2:5d42
db dummya_7763[42];
db dummya_778d[2]; // 01a2:5d6d
db byte_15d6f; // 01a2:5d6f
db dummya_7790[42];
db dummya_77ba[2]; // 01a2:5d9a
db byte_15d9c; // 01a2:5d9c
db dummya_77bd[42];
db dummya_77e7[2]; // 01a2:5dc7
db byte_15dc9; // 01a2:5dc9
db dummya_77ea[42];
db dummya_7814[2]; // 01a2:5df4
db byte_15df6; // 01a2:5df6
db dummya_7817[42];
db dummya_7841[2]; // 01a2:5e21
db byte_15e23; // 01a2:5e23
db dummya_7844[1363];
db dummya_7d97[2]; // 01a2:6377
db byte_16379; // 01a2:6379
db dummya_7d9a[44];
db dummya_7dc6[2]; // 01a2:63a6
db byte_163a8; // 01a2:63a8
db dummya_7dc9[44];
db dummya_7df5[2]; // 01a2:63d5
db byte_163d7; // 01a2:63d7
db dummya_7df8[44];
db dummya_7e24[2]; // 01a2:6404
db byte_16406; // 01a2:6406
db dummya_7e27[44];
db dummya_7e53[2]; // 01a2:6433
db byte_16435; // 01a2:6435
db dummya_7e56[44];
db dummya_7e82; // 01a2:6462
db dummya_7e83; // 01a2:6463
db byte_16464; // 01a2:6464
db dummya_7e85[44];
db dummya_7eb1[2]; // 01a2:6491
db byte_16493; // 01a2:6493
db dummya_7eb4[44];
db dummya_7ee0[2]; // 01a2:64c0
db byte_164c2; // 01a2:64c2
db dummya_7ee3[44];
db dummya_7f0f[2]; // 01a2:64ef
db byte_164f1; // 01a2:64f1
db dummya_7f12[44];
db dummya_7f3e[2]; // 01a2:651e
db byte_16520; // 01a2:6520
db dummya_7f41[44];
db dummya_7f6d[2]; // 01a2:654d
db byte_1654f; // 01a2:654f
db dummya_7f70[44];
db dummya_7f9c[2]; // 01a2:657c
db byte_1657e; // 01a2:657e
db dummya_7f9f[44];
db dummya_7fcb; // 01a2:65ab
db dummya_7fcc; // 01a2:65ac
db byte_165ad; // 01a2:65ad
db dummya_7fce[44];
db dummya_7ffa[2]; // 01a2:65da
db byte_165dc; // 01a2:65dc
db dummya_7ffd[44];
db dummya_8029[2]; // 01a2:6609
db byte_1660b; // 01a2:660b
db dummya_802c[56];
db dummya_8064[2]; // 01a2:6644
db byte_16646; // 01a2:6646
db dummya_8067[41];
db dummya_8090[2]; // 01a2:6670
db byte_16672; // 01a2:6672
db dummya_8093[42];
db dummya_80bd[2]; // 01a2:669d
db byte_1669f; // 01a2:669f
db dummya_80c0[42];
db dummya_80ea[2]; // 01a2:66ca
db byte_166cc; // 01a2:66cc
db dummya_80ed[42];
db dummya_8117[2]; // 01a2:66f7
db byte_166f9; // 01a2:66f9
db dummya_811a[42];
db dummya_8144[2]; // 01a2:6724
db byte_16726; // 01a2:6726
db dummya_8147[42];
db dummya_8171[2]; // 01a2:6751
db byte_16753; // 01a2:6753
db dummya_8174[42];
db dummya_819e[2]; // 01a2:677e
db byte_16780; // 01a2:6780
db dummya_81a1[42];
db dummya_81cb[2]; // 01a2:67ab
db byte_167ad; // 01a2:67ad
db dummya_81ce[42];
db dummya_81f8[2]; // 01a2:67d8
db byte_167da; // 01a2:67da
db dummya_81fb[42];
db dummya_8225[2]; // 01a2:6805
db byte_16807; // 01a2:6807
db dummya_8228[42];
db dummya_8252[2]; // 01a2:6832
db byte_16834; // 01a2:6834
db dummya_8255[42];
db dummya_827f[2]; // 01a2:685f
db byte_16861; // 01a2:6861
db dummya_8282[42];
db dummya_82ac[2]; // 01a2:688c
db byte_1688e; // 01a2:688e
db dummya_82af[42];
db dummya_82d9[2]; // 01a2:68b9
db byte_168bb; // 01a2:68bb
db dummya_82dc[42];
db dummya_8306[2]; // 01a2:68e6
db byte_168e8; // 01a2:68e8
db dummya_8309[6618];
db asc_182c3[16]; // 01a2:82c3
db asc_182d3[8]; // 01a2:82d3
db dummya_9cfb[2467];
dw _asmprintf_tbl; // 01a2:8c7e
dw dummya_a6a0; // 01a2:8c80
dw dummya_a6a2; // 01a2:8c82
dw dummya_a6a4; // 01a2:8c84
dw dummya_a6a6; // 01a2:8c86
dw dummya_a6a8; // 01a2:8c88
dw dummya_a6aa; // 01a2:8c8a
dw dummya_a6ac; // 01a2:8c8c
dw dummya_a6ae; // 01a2:8c8e
dw dummya_a6b0; // 01a2:8c90
dw dummya_a6b2; // 01a2:8c92
dw dummya_a6b4; // 01a2:8c94
dw dummya_a6b6; // 01a2:8c96
db dummya_a6b8[296];
dw _offs_noninterp2; // 01a2:8dc0
dw dummya_a7e2; // 01a2:8dc2
dw dummya_a7e4; // 01a2:8dc4
dw dummya_a7e6; // 01a2:8dc6
dw dummya_a7e8; // 01a2:8dc8
dw dummya_a7ea; // 01a2:8dca
dw dummya_a7ec; // 01a2:8dcc
dw dummya_a7ee; // 01a2:8dce
dw dummya_a7f0; // 01a2:8dd0
dw dummya_a7f2; // 01a2:8dd2
dw dummya_a7f4; // 01a2:8dd4
dw dummya_a7f6; // 01a2:8dd6
dw dummya_a7f8; // 01a2:8dd8
dw dummya_a7fa; // 01a2:8dda
dw dummya_a7fc; // 01a2:8ddc
dw dummya_a7fe; // 01a2:8dde
dw _offs_interpol2; // 01a2:8de0
dw dummya_a802; // 01a2:8de2
dw dummya_a804; // 01a2:8de4
dw dummya_a806; // 01a2:8de6
dw dummya_a808; // 01a2:8de8
dw dummya_a80a; // 01a2:8dea
dw dummya_a80c; // 01a2:8dec
dw dummya_a80e; // 01a2:8dee
dw dummya_a810; // 01a2:8df0
dw dummya_a812; // 01a2:8df2
dw dummya_a814; // 01a2:8df4
dw dummya_a816; // 01a2:8df6
dw dummya_a818; // 01a2:8df8
dw dummya_a81a; // 01a2:8dfa
dw dummya_a81c; // 01a2:8dfc
dw dummya_a81e; // 01a2:8dfe
dw off_18e00; // 01a2:8e00
dw dummya_a822; // 01a2:8e02
dw dummya_a824; // 01a2:8e04
dw dummya_a826; // 01a2:8e06
dw dummya_a828; // 01a2:8e08
dw dummya_a82a; // 01a2:8e0a
dw dummya_a82c; // 01a2:8e0c
dw dummya_a82e; // 01a2:8e0e
dw dummya_a830; // 01a2:8e10
dw dummya_a832; // 01a2:8e12
dw dummya_a834; // 01a2:8e14
dw dummya_a836; // 01a2:8e16
dw dummya_a838; // 01a2:8e18
dw dummya_a83a; // 01a2:8e1a
dw dummya_a83c; // 01a2:8e1c
dw dummya_a83e; // 01a2:8e1e
dw _offs_noninterp; // 01a2:8e20
dw dummya_a842; // 01a2:8e22
dw dummya_a844; // 01a2:8e24
dw dummya_a846; // 01a2:8e26
dw dummya_a848; // 01a2:8e28
dw dummya_a84a; // 01a2:8e2a
dw dummya_a84c; // 01a2:8e2c
dw dummya_a84e; // 01a2:8e2e
dw dummya_a850; // 01a2:8e30
dw dummya_a852; // 01a2:8e32
dw dummya_a854; // 01a2:8e34
dw dummya_a856; // 01a2:8e36
dw dummya_a858; // 01a2:8e38
dw dummya_a85a; // 01a2:8e3a
dw dummya_a85c; // 01a2:8e3c
dw dummya_a85e; // 01a2:8e3e
dw _offs_interpol; // 01a2:8e40
dw dummya_a862; // 01a2:8e42
dw dummya_a864; // 01a2:8e44
dw dummya_a866; // 01a2:8e46
dw dummya_a868; // 01a2:8e48
dw dummya_a86a; // 01a2:8e4a
dw dummya_a86c; // 01a2:8e4c
dw dummya_a86e; // 01a2:8e4e
dw dummya_a870; // 01a2:8e50
dw dummya_a872; // 01a2:8e52
dw dummya_a874; // 01a2:8e54
dw dummya_a876; // 01a2:8e56
dw dummya_a878; // 01a2:8e58
dw dummya_a87a; // 01a2:8e5a
dw dummya_a87c; // 01a2:8e5c
dw dummya_a87e; // 01a2:8e5e
dw off_18e60; // 01a2:8e60
dw dummya_a882; // 01a2:8e62
dw dummya_a884; // 01a2:8e64
dw dummya_a886; // 01a2:8e66
dw dummya_a888; // 01a2:8e68
dw dummya_a88a; // 01a2:8e6a
dw dummya_a88c; // 01a2:8e6c
dw dummya_a88e; // 01a2:8e6e
dw dummya_a890; // 01a2:8e70
dw dummya_a892; // 01a2:8e72
dw dummya_a894; // 01a2:8e74
dw dummya_a896; // 01a2:8e76
dw dummya_a898; // 01a2:8e78
dw dummya_a89a; // 01a2:8e7a
dw dummya_a89c; // 01a2:8e7c
dw dummya_a89e; // 01a2:8e7e
dw off_18e80; // 01a2:8e80
dw dummya_a8a2; // 01a2:8e82
dw dummya_a8a4; // 01a2:8e84
dw dummya_a8a6; // 01a2:8e86
dw dummya_a8a8; // 01a2:8e88
dw dummya_a8aa; // 01a2:8e8a
dw dummya_a8ac; // 01a2:8e8c
dw dummya_a8ae; // 01a2:8e8e
dw dummya_a8b0; // 01a2:8e90
dw dummya_a8b2; // 01a2:8e92
dw dummya_a8b4; // 01a2:8e94
dw dummya_a8b6; // 01a2:8e96
dw dummya_a8b8; // 01a2:8e98
dw dummya_a8ba; // 01a2:8e9a
dw dummya_a8bc; // 01a2:8e9c
dw dummya_a8be; // 01a2:8e9e
dw off_18ea0; // 01a2:8ea0
dw dummya_a8c2; // 01a2:8ea2
dw dummya_a8c4; // 01a2:8ea4
dw dummya_a8c6; // 01a2:8ea6
dw dummya_a8c8; // 01a2:8ea8
dw dummya_a8ca; // 01a2:8eaa
dw dummya_a8cc; // 01a2:8eac
dw dummya_a8ce; // 01a2:8eae
dw dummya_a8d0; // 01a2:8eb0
dw dummya_a8d2; // 01a2:8eb2
dw dummya_a8d4; // 01a2:8eb4
dw dummya_a8d6; // 01a2:8eb6
dw dummya_a8d8; // 01a2:8eb8
dw dummya_a8da; // 01a2:8eba
dw dummya_a8dc; // 01a2:8ebc
dw dummya_a8de; // 01a2:8ebe
dw off_18ec0; // 01a2:8ec0
dw dummya_a8e2; // 01a2:8ec2
dw dummya_a8e4; // 01a2:8ec4
dw dummya_a8e6; // 01a2:8ec6
dw dummya_a8e8; // 01a2:8ec8
dw dummya_a8ea; // 01a2:8eca
dw dummya_a8ec; // 01a2:8ecc
dw dummya_a8ee; // 01a2:8ece
dw dummya_a8f0; // 01a2:8ed0
dw dummya_a8f2; // 01a2:8ed2
dw dummya_a8f4; // 01a2:8ed4
dw dummya_a8f6; // 01a2:8ed6
dw dummya_a8f8; // 01a2:8ed8
dw dummya_a8fa; // 01a2:8eda
dw dummya_a8fc; // 01a2:8edc
dw dummya_a8fe; // 01a2:8ede
dw off_18ee0; // 01a2:8ee0
dw dummya_a902; // 01a2:8ee2
dw dummya_a904; // 01a2:8ee4
dw dummya_a906; // 01a2:8ee6
dw dummya_a908; // 01a2:8ee8
dw dummya_a90a; // 01a2:8eea
dw dummya_a90c; // 01a2:8eec
dw dummya_a90e; // 01a2:8eee
dw dummya_a910; // 01a2:8ef0
dw dummya_a912; // 01a2:8ef2
dw dummya_a914; // 01a2:8ef4
dw dummya_a916; // 01a2:8ef6
dw dummya_a918; // 01a2:8ef8
dw dummya_a91a; // 01a2:8efa
dw dummya_a91c; // 01a2:8efc
dw dummya_a91e; // 01a2:8efe
dw off_18f00; // 01a2:8f00
dw dummya_a922; // 01a2:8f02
dw dummya_a924; // 01a2:8f04
dw dummya_a926; // 01a2:8f06
dw dummya_a928; // 01a2:8f08
dw dummya_a92a; // 01a2:8f0a
dw dummya_a92c; // 01a2:8f0c
dw dummya_a92e; // 01a2:8f0e
dw dummya_a930; // 01a2:8f10
dw dummya_a932; // 01a2:8f12
dw dummya_a934; // 01a2:8f14
dw dummya_a936; // 01a2:8f16
dw dummya_a938; // 01a2:8f18
dw dummya_a93a; // 01a2:8f1a
dw dummya_a93c; // 01a2:8f1c
dw dummya_a93e; // 01a2:8f1e
dw off_18f20; // 01a2:8f20
dw dummya_a942; // 01a2:8f22
dw dummya_a944; // 01a2:8f24
dw dummya_a946; // 01a2:8f26
dw dummya_a948; // 01a2:8f28
dw dummya_a94a; // 01a2:8f2a
dw dummya_a94c; // 01a2:8f2c
dw dummya_a94e; // 01a2:8f2e
dw dummya_a950; // 01a2:8f30
dw dummya_a952; // 01a2:8f32
dw dummya_a954; // 01a2:8f34
dw dummya_a956; // 01a2:8f36
dw dummya_a958; // 01a2:8f38
dw dummya_a95a; // 01a2:8f3a
dw dummya_a95c; // 01a2:8f3c
dw dummya_a95e; // 01a2:8f3e
dw off_18f40; // 01a2:8f40
dw dummya_a962; // 01a2:8f42
dw dummya_a964; // 01a2:8f44
dw dummya_a966; // 01a2:8f46
dw dummya_a968; // 01a2:8f48
dw dummya_a96a; // 01a2:8f4a
dw dummya_a96c; // 01a2:8f4c
dw dummya_a96e; // 01a2:8f4e
dw dummya_a970; // 01a2:8f50
dw dummya_a972; // 01a2:8f52
dw dummya_a974; // 01a2:8f54
dw dummya_a976; // 01a2:8f56
dw dummya_a978; // 01a2:8f58
dw dummya_a97a; // 01a2:8f5a
dw dummya_a97c; // 01a2:8f5c
dw dummya_a97e; // 01a2:8f5e
dw _effoff_18f60; // 01a2:8f60
dw dummya_a982; // 01a2:8f62
dw dummya_a984; // 01a2:8f64
dw dummya_a986; // 01a2:8f66
dw dummya_a988; // 01a2:8f68
dw dummya_a98a; // 01a2:8f6a
dw dummya_a98c; // 01a2:8f6c
dw dummya_a98e; // 01a2:8f6e
dw dummya_a990; // 01a2:8f70
dw dummya_a992; // 01a2:8f72
dw dummya_a994; // 01a2:8f74
dw dummya_a996; // 01a2:8f76
dw dummya_a998; // 01a2:8f78
dw dummya_a99a; // 01a2:8f7a
dw dummya_a99c; // 01a2:8f7c
dw dummya_a99e; // 01a2:8f7e
dw dummya_a9a0; // 01a2:8f80
dw dummya_a9a2; // 01a2:8f82
dw dummya_a9a4; // 01a2:8f84
dw dummya_a9a6; // 01a2:8f86
dw dummya_a9a8; // 01a2:8f88
dw dummya_a9aa; // 01a2:8f8a
dw dummya_a9ac; // 01a2:8f8c
dw dummya_a9ae; // 01a2:8f8e
dw dummya_a9b0; // 01a2:8f90
dw dummya_a9b2; // 01a2:8f92
dw dummya_a9b4; // 01a2:8f94
dw dummya_a9b6; // 01a2:8f96
dw dummya_a9b8; // 01a2:8f98
dw dummya_a9ba; // 01a2:8f9a
dw dummya_a9bc; // 01a2:8f9c
dw dummya_a9be; // 01a2:8f9e
dw dummya_a9c0; // 01a2:8fa0
dw _effoff_18fa2; // 01a2:8fa2
dw dummya_a9c4; // 01a2:8fa4
dw dummya_a9c6; // 01a2:8fa6
dw dummya_a9c8; // 01a2:8fa8
dw dummya_a9ca; // 01a2:8faa
dw dummya_a9cc; // 01a2:8fac
dw dummya_a9ce; // 01a2:8fae
dw dummya_a9d0; // 01a2:8fb0
dw dummya_a9d2; // 01a2:8fb2
dw dummya_a9d4; // 01a2:8fb4
dw dummya_a9d6; // 01a2:8fb6
dw dummya_a9d8; // 01a2:8fb8
dw dummya_a9da; // 01a2:8fba
dw dummya_a9dc; // 01a2:8fbc
dw dummya_a9de; // 01a2:8fbe
dw dummya_a9e0; // 01a2:8fc0
dw dummya_a9e2; // 01a2:8fc2
dw dummya_a9e4; // 01a2:8fc4
dw dummya_a9e6; // 01a2:8fc6
dw dummya_a9e8; // 01a2:8fc8
dw dummya_a9ea; // 01a2:8fca
dw dummya_a9ec; // 01a2:8fcc
dw dummya_a9ee; // 01a2:8fce
dw dummya_a9f0; // 01a2:8fd0
dw dummya_a9f2; // 01a2:8fd2
dw dummya_a9f4; // 01a2:8fd4
dw dummya_a9f6; // 01a2:8fd6
dw dummya_a9f8; // 01a2:8fd8
dw dummya_a9fa; // 01a2:8fda
dw dummya_a9fc; // 01a2:8fdc
dw dummya_a9fe; // 01a2:8fde
dw dummya_aa00; // 01a2:8fe0
dw dummya_aa02; // 01a2:8fe2
dw _effoff_18fe4; // 01a2:8fe4
dw dummya_aa06; // 01a2:8fe6
dw dummya_aa08; // 01a2:8fe8
dw dummya_aa0a; // 01a2:8fea
dw dummya_aa0c; // 01a2:8fec
dw dummya_aa0e; // 01a2:8fee
dw dummya_aa10; // 01a2:8ff0
dw dummya_aa12; // 01a2:8ff2
dw dummya_aa14; // 01a2:8ff4
dw dummya_aa16; // 01a2:8ff6
dw dummya_aa18; // 01a2:8ff8
dw dummya_aa1a; // 01a2:8ffa
dw dummya_aa1c; // 01a2:8ffc
dw dummya_aa1e; // 01a2:8ffe
dw dummya_aa20; // 01a2:9000
dw dummya_aa22; // 01a2:9002
dw dummya_aa24; // 01a2:9004
dw dummya_aa26; // 01a2:9006
dw dummya_aa28; // 01a2:9008
dw dummya_aa2a; // 01a2:900a
dw dummya_aa2c; // 01a2:900c
dw dummya_aa2e; // 01a2:900e
dw dummya_aa30; // 01a2:9010
dw dummya_aa32; // 01a2:9012
dw dummya_aa34; // 01a2:9014
dw dummya_aa36; // 01a2:9016
dw dummya_aa38; // 01a2:9018
dw dummya_aa3a; // 01a2:901a
dw dummya_aa3c; // 01a2:901c
dw dummya_aa3e; // 01a2:901e
dw dummya_aa40; // 01a2:9020
dw dummya_aa42; // 01a2:9022
dw dummya_aa44; // 01a2:9024
dw _effoff_19026; // 01a2:9026
dw dummya_aa48; // 01a2:9028
dw dummya_aa4a; // 01a2:902a
dw dummya_aa4c; // 01a2:902c
dw dummya_aa4e; // 01a2:902e
dw dummya_aa50; // 01a2:9030
dw dummya_aa52; // 01a2:9032
dw dummya_aa54; // 01a2:9034
dw dummya_aa56; // 01a2:9036
dw dummya_aa58; // 01a2:9038
dw dummya_aa5a; // 01a2:903a
dw dummya_aa5c; // 01a2:903c
dw dummya_aa5e; // 01a2:903e
dw dummya_aa60; // 01a2:9040
dw dummya_aa62; // 01a2:9042
dw dummya_aa64; // 01a2:9044
db dummya_aa66[10];
db dummya_aa70[12195];
char _aconfigfilenotf[42]; // 0aa7:2fa3
char dummya_da3d[3]; // 0aa7:2fcd
db dummya_da40[292];
dw _key_code; // 0aa7:30f4
dw _keyb_switches; // 0aa7:30f6
db _prev_scan_code; // 0aa7:30f8
db dummya_db69[91];
dd _oint9_1c1a4; // 0aa7:3154
dd _int1avect; // 0aa7:3158
dd _oint24_1c1ac; // 0aa7:315c
db dummya_dbd0[4]; // 0aa7:3160
dd _oint2f_1c1b4; // 0aa7:3164
db byte_1c1b8; // 0aa7:3168
db dummya_dbd9[989];
dw off_1c596; // 0aa7:3546
dw dummya_dfb8; // 0aa7:3548
dw dummya_dfba; // 0aa7:354a
dw dummya_dfbc; // 0aa7:354c
dw dummya_dfbe; // 0aa7:354e
dw dummya_dfc0; // 0aa7:3550
dw dummya_dfc2; // 0aa7:3552
dw dummya_dfc4; // 0aa7:3554
dw dummya_dfc6; // 0aa7:3556
dw dummya_dfc8; // 0aa7:3558
dw dummya_dfca; // 0aa7:355a
dw dummya_dfcc; // 0aa7:355c
dw dummya_dfce; // 0aa7:355e
db dummya_dfd0[571];
db dummya_e20b[5]; // 0aa7:379b
char _ainertiaplayerv1_[65]; // 0e21:0000
db dummya_e251[2]; // 0e21:0000
db dummya_e253; // 0e21:0000
char dummya_e254[54]; // 0e21:0000
db dummya_e28a; // 0e21:0000
char dummya_e28b[11]; // 0e21:0000
char dummya_e296[23]; // 0e21:0000
char dummya_e2ad[34]; // 0e21:0000
char dummya_e2cf[41]; // 0e21:0000
char dummya_e2f8[33]; // 0e21:0000
char dummya_e319[29]; // 0e21:0000
char dummya_e336[40]; // 0e21:0000
char dummya_e35e[42]; // 0e21:0000
char dummya_e388[42]; // 0e21:0000
char dummya_e3b2[24]; // 0e21:0000
char dummya_e3ca[24]; // 0e21:0000
char dummya_e3e2[64]; // 0e21:0000
db dummya_e422; // 0e21:0000
char dummya_e423[58]; // 0e21:0000
char dummya_e45d[46]; // 0e21:0000
char _acurrentsoundcard[30]; // 0e21:027b
char dummya_e4a9[2]; // 0e21:027b
char _myendl[3]; // 0e21:029b
dw off_1ca8e; // 0e21:029e
dw dummya_e4b0; // 0e21:02a0
dw dummya_e4b2; // 0e21:02a2
dw dummya_e4b4; // 0e21:02a4
dw dummya_e4b6; // 0e21:02a6
dw dummya_e4b8; // 0e21:02a8
dw _table_sndcrdname; // 0e21:02aa
dw dummya_e4bc; // 0e21:02ac
dw dummya_e4be; // 0e21:02ae
dw dummya_e4c0; // 0e21:02b0
dw dummya_e4c2; // 0e21:02b2
dw dummya_e4c4; // 0e21:02b4
dw dummya_e4c6; // 0e21:02b6
dw dummya_e4c8; // 0e21:02b8
dw dummya_e4ca; // 0e21:02ba
dw dummya_e4cc; // 0e21:02bc
dw dummya_e4ce; // 0e21:02be
char _agravisultrasou[18]; // 0e21:02c0
char _agravismaxcodec[17]; // 0e21:02d2
char _aproaudiospectr[22]; // 0e21:02e3
char _awindowssoundsy[21]; // 0e21:02f9
char _asoundblaster16[23]; // 0e21:030e
char _asoundblasterpr[18]; // 0e21:0325
char _asoundblaster[14]; // 0e21:0337
char _acovox[6]; // 0e21:0345
char _astereoon1[12]; // 0e21:034b
char _aadlibsoundcard[16]; // 0e21:0357
char _apchonker[10]; // 0e21:0367
char _ageneralmidi[13]; // 0e21:0371
dw _atop_title; // 0e21:037e
db dummya_e590; // 0e21:0380
char _ainertiaplayerv1_22a[59]; // 0e21:0381
char dummya_e5cc[4]; // 0e21:0381
db dummya_e5d0; // 0e21:03c0
db dummya_e5d1; // 0e21:03c1
db dummya_e5d2; // 0e21:03c2
char _acopyrightc1994[61]; // 0e21:03c3
db dummya_e610; // 0e21:0400
db dummya_e611; // 0e21:0401
db dummya_e612; // 0e21:0402
db dummya_e613; // 0e21:0403
db dummya_e614; // 0e21:0404
char _ashell130295211[24]; // 0e21:0405
db dummya_e62d; // 0e21:041d
db dummya_e62e; // 0e21:041e
db dummya_e62f; // 0e21:041f
char _aplayer13029521[8]; // 0e21:0420
char _a130295211558[18]; // 0e21:0428
dw _bottom_menu; // 0e21:043a
db dummya_e64c; // 0e21:043c
char asc_1cc2d[30]; // 0e21:043d
db dummya_e66b; // 0e21:045b
dw dummya_e66c; // 0e21:045c
db dummya_e66e; // 0e21:045e
db dummya_e66f; // 0e21:045f
char _afilename_0[16]; // 0e21:0460
db dummya_e680; // 0e21:0470
db dummya_e681; // 0e21:0471
char _afilename_ext[12]; // 0e21:0472
db dummya_e68e; // 0e21:047e
dw dummya_e68f; // 0e21:047f
db dummya_e691; // 0e21:0481
db dummya_e692; // 0e21:0482
char _amoduletype_0[16]; // 0e21:0483
db dummya_e6a3; // 0e21:0493
db dummya_e6a4; // 0e21:0494
char _module_type_txt[4]; // 0e21:0495
db dummya_e6a9; // 0e21:0499
db dummya_e6aa; // 0e21:049a
db dummya_e6ab; // 0e21:049b
dw dummya_e6ac; // 0e21:049c
char _achannels[15]; // 0e21:049e
db dummya_e6bd; // 0e21:04ad
dw dummya_e6be; // 0e21:04ae
char _asamplesused[15]; // 0e21:04b0
db dummya_e6cf; // 0e21:04bf
dw dummya_e6d0; // 0e21:04c0
char _acurrenttrack[15]; // 0e21:04c2
db dummya_e6e1; // 0e21:04d1
dw dummya_e6e2; // 0e21:04d2
char _atrackposition[15]; // 0e21:04d4
db dummya_e6f3; // 0e21:04e3
dw dummya_e6f4; // 0e21:04e4
char _aspeed[5]; // 0e21:04e6
db dummya_e6fb; // 0e21:04eb
dw dummya_e6fc; // 0e21:04ec
char dummya_e6fe[1]; // 0e21:04ee
db dummya_e6ff; // 0e21:04ef
db dummya_e700; // 0e21:04f0
db dummya_e701; // 0e21:04f1
dw dummya_e702; // 0e21:04f2
char _atab[3]; // 0e21:04f4
db dummya_e707; // 0e21:04f7
dw dummya_e708; // 0e21:04f8
db dummya_e70a; // 0e21:04fa
db byte_1cceb; // 0e21:04fb
db dummya_e70c; // 0e21:04fc
db dummya_e70d; // 0e21:04fd
db dummya_e70e; // 0e21:04fe
char _aplayinginstereofree[25]; // 0e21:04ff
db dummya_e728; // 0e21:0518
dw dummya_e729; // 0e21:0519
db dummya_e72b; // 0e21:051b
db dummya_e72c; // 0e21:051c
db dummya_e72d; // 0e21:051d
db dummya_e72e; // 0e21:051e
db dummya_e72f; // 0e21:051f
char _aprotracker1_0_0[15]; // 0e21:0520
db dummya_e73f; // 0e21:052f
dw dummya_e740; // 0e21:0530
db dummya_e742; // 0e21:0532
db dummya_e743; // 0e21:0533
char _af9_4[3]; // 0e21:0534
db dummya_e747; // 0e21:0537
dw dummya_e748; // 0e21:0538
db dummya_e74a; // 0e21:053a
db dummya_e74b; // 0e21:053b
db dummya_e74c; // 0e21:053c
db dummya_e74d; // 0e21:053d
db dummya_e74e; // 0e21:053e
char _aignorebpmchanges[19]; // 0e21:053f
db dummya_e762; // 0e21:0552
dw dummya_e763; // 0e21:0553
db dummya_e765; // 0e21:0555
db dummya_e766; // 0e21:0556
char _af10_1[4]; // 0e21:0557
db dummya_e76b; // 0e21:055b
db dummya_e76c; // 0e21:055c
db dummya_e76d; // 0e21:055d
dw dummya_e76e; // 0e21:055e
db dummya_e770; // 0e21:0560
db dummya_e771; // 0e21:0561
db dummya_e772; // 0e21:0562
db dummya_e773; // 0e21:0563
db dummya_e774; // 0e21:0564
char _aloopmodulewhendone[22]; // 0e21:0565
db dummya_e78b; // 0e21:057b
dw dummya_e78c; // 0e21:057c
db dummya_e78e; // 0e21:057e
db dummya_e78f; // 0e21:057f
char _af11_1[4]; // 0e21:0580
db dummya_e794; // 0e21:0584
db dummya_e795; // 0e21:0585
db dummya_e796; // 0e21:0586
dw dummya_e797; // 0e21:0587
db dummya_e799; // 0e21:0589
db dummya_e79a; // 0e21:058a
db dummya_e79b; // 0e21:058b
db dummya_e79c; // 0e21:058c
db dummya_e79d; // 0e21:058d
char _a24bitinterpolation[20]; // 0e21:058e
db dummya_e7b2; // 0e21:05a2
dw dummya_e7b3; // 0e21:05a3
db dummya_e7b5; // 0e21:05a5
db dummya_e7b6; // 0e21:05a6
char _af12_1[4]; // 0e21:05a7
db dummya_e7bb; // 0e21:05ab
db dummya_e7bc; // 0e21:05ac
db dummya_e7bd; // 0e21:05ad
dw dummya_e7be; // 0e21:05ae
char _amainvolume[15]; // 0e21:05b0
db dummya_e7cf; // 0e21:05bf
dw dummya_e7d0; // 0e21:05c0
db dummya_e7d2; // 0e21:05c2
db dummya_e7d3; // 0e21:05c3
char dummya_e7d4[3]; // 0e21:05c4
db dummya_e7d7; // 0e21:05c7
db dummya_e7d8; // 0e21:05c8
db dummya_e7d9; // 0e21:05c9
dw dummya_e7da; // 0e21:05ca
char _avolumeamplify[15]; // 0e21:05cc
db dummya_e7eb; // 0e21:05db
dw dummya_e7ec; // 0e21:05dc
db dummya_e7ee; // 0e21:05de
db dummya_e7ef; // 0e21:05df
char dummya_e7f0[4]; // 0e21:05e0
dw _f1_help_text; // 0e21:05e4
db dummya_e7f6; // 0e21:05e6
char _asoyouwantedsomehelp[24]; // 0e21:05e7
db dummya_e80f; // 0e21:05ff
dw dummya_e810; // 0e21:0600
db dummya_e812; // 0e21:0602
db dummya_e813; // 0e21:0603
char _af2_0[3]; // 0e21:0604
db dummya_e817; // 0e21:0607
db dummya_e818; // 0e21:0608
char _agraphicalscopesonef[40]; // 0e21:0609
db dummya_e841; // 0e21:0631
dw dummya_e842; // 0e21:0632
db dummya_e844; // 0e21:0634
db dummya_e845; // 0e21:0635
char _af3_0[3]; // 0e21:0636
db dummya_e849; // 0e21:0639
db dummya_e84a; // 0e21:063a
char _arealtimevumeters[20]; // 0e21:063b
db dummya_e85f; // 0e21:064f
dw dummya_e860; // 0e21:0650
db dummya_e862; // 0e21:0652
db dummya_e863; // 0e21:0653
char _af4_0[3]; // 0e21:0654
db dummya_e867; // 0e21:0657
db dummya_e868; // 0e21:0658
char _aviewsamplenamestwic[36]; // 0e21:0659
db dummya_e88d; // 0e21:067d
dw dummya_e88e; // 0e21:067e
db dummya_e890; // 0e21:0680
db dummya_e891; // 0e21:0681
char _af5_0[3]; // 0e21:0682
db dummya_e895; // 0e21:0685
db dummya_e896; // 0e21:0686
char _afastfourierfrequenc[32]; // 0e21:0687
db dummya_e8b7; // 0e21:06a7
dw dummya_e8b8; // 0e21:06a8
db dummya_e8ba; // 0e21:06aa
db dummya_e8bb; // 0e21:06ab
char _af8_0[3]; // 0e21:06ac
db dummya_e8bf; // 0e21:06af
db _adosshelltypeex; // 0e21:06b0
char _adosshelltypeexittor[33]; // 0e21:06b1
db dummya_e8e2; // 0e21:06d2
dw dummya_e8e3; // 0e21:06d3
db dummya_e8e5; // 0e21:06d5
db _af9_1; // 0e21:06d6
char _af9_2[3]; // 0e21:06d7
db dummya_e8ea; // 0e21:06da
db _aprotracker1_0c; // 0e21:06db
char _aprotracker1_0compat[37]; // 0e21:06dc
db dummya_e911; // 0e21:0701
dw dummya_e912; // 0e21:0702
db dummya_e914; // 0e21:0704
db _af10; // 0e21:0705
char _af10_0[4]; // 0e21:0706
db dummya_e91a; // 0e21:070a
db _adisablebpmonof; // 0e21:070b
char _adisablebpmonoff[19]; // 0e21:070c
db dummya_e92f; // 0e21:071f
dw dummya_e930; // 0e21:0720
db dummya_e932; // 0e21:0722
db _af11; // 0e21:0723
char _af11_0[4]; // 0e21:0724
db dummya_e938; // 0e21:0728
db _aloopmodule; // 0e21:0729
char _aloopmodule_0[12]; // 0e21:072a
db dummya_e946; // 0e21:0736
dw dummya_e947; // 0e21:0737
db dummya_e949; // 0e21:0739
db _af12; // 0e21:073a
char _af12_0[4]; // 0e21:073b
db dummya_e94f; // 0e21:073f
db _atoggle24bitint; // 0e21:0740
char _atoggle24bitinterpol[27]; // 0e21:0741
db dummya_e96c; // 0e21:075c
dw dummya_e96d; // 0e21:075d
db dummya_e96f; // 0e21:075f
db _agray; // 0e21:0760
char _agray_0[8]; // 0e21:0761
db dummya_e979; // 0e21:0769
db _adecincvolume; // 0e21:076a
char _adecincvolume_0[16]; // 0e21:076b
db dummya_e98b; // 0e21:077b
dw dummya_e98c; // 0e21:077c
db dummya_e98e; // 0e21:077e
db dummya_e98f; // 0e21:077f
char dummya_e990[3]; // 0e21:0780
db dummya_e993; // 0e21:0783
db _adecincamplify; // 0e21:0784
char _adecincamplify_0[17]; // 0e21:0785
db dummya_e9a6; // 0e21:0796
dw dummya_e9a7; // 0e21:0797
db dummya_e9a9; // 0e21:0799
db _acursor; // 0e21:079a
char _acursor_1[7]; // 0e21:079b
db dummya_e9b2; // 0e21:07a2
char dummya_e9b3[1]; // 0e21:07a3
db dummya_e9b4; // 0e21:07a4
db dummya_e9b5; // 0e21:07a5
db dummya_e9b6; // 0e21:07a6
char _afasterforward[18]; // 0e21:07a7
db dummya_e9c9; // 0e21:07b9
dw dummya_e9ca; // 0e21:07ba
db dummya_e9cc; // 0e21:07bc
db dummya_e9cd; // 0e21:07bd
char _acursor_0[9]; // 0e21:07be
db dummya_e9d7; // 0e21:07c7
db dummya_e9d8; // 0e21:07c8
db dummya_e9d9; // 0e21:07c9
char _afasterrewind[17]; // 0e21:07ca
db dummya_e9eb; // 0e21:07db
dw dummya_e9ec; // 0e21:07dc
db dummya_e9ee; // 0e21:07de
db dummya_e9ef; // 0e21:07df
char _a1thru0[8]; // 0e21:07e0
db dummya_e9f8; // 0e21:07e8
db dummya_e9f9; // 0e21:07e9
char _amutechannel[14]; // 0e21:07ea
db dummya_ea08; // 0e21:07f8
dw dummya_ea09; // 0e21:07f9
db dummya_ea0b; // 0e21:07fb
db dummya_ea0c; // 0e21:07fc
char _ascrolllock[10]; // 0e21:07fd
db dummya_ea17; // 0e21:0807
db dummya_ea18; // 0e21:0808
char _alooppattern[14]; // 0e21:0809
db dummya_ea27; // 0e21:0817
dw dummya_ea28; // 0e21:0818
db dummya_ea2a; // 0e21:081a
db dummya_ea2b; // 0e21:081b
char _apause[5]; // 0e21:081c
db dummya_ea31; // 0e21:0821
db dummya_ea32; // 0e21:0822
char _aguess___[10]; // 0e21:0823
db dummya_ea3d; // 0e21:082d
dw dummya_ea3e; // 0e21:082e
db dummya_ea40; // 0e21:0830
db dummya_ea41; // 0e21:0831
char _aend[3]; // 0e21:0832
db dummya_ea45; // 0e21:0835
db dummya_ea46; // 0e21:0836
char _aendpattern[13]; // 0e21:0837
db dummya_ea54; // 0e21:0844
dw dummya_ea55; // 0e21:0845
db dummya_ea57; // 0e21:0847
db dummya_ea58; // 0e21:0848
char _atab_0[3]; // 0e21:0849
db dummya_ea5c; // 0e21:084c
db dummya_ea5d; // 0e21:084d
char _atogglepalntsc[18]; // 0e21:084e
dw _hopeyoulike; // 0e21:0860
db dummya_ea72; // 0e21:0862
char _ahopeyoulikedusingth[25]; // 0e21:0863
db dummya_ea8c; // 0e21:087c
db dummya_ea8d; // 0e21:087d
char _ainertiaplayer[14]; // 0e21:087e
db dummya_ea9c; // 0e21:088c
db dummya_ea9d; // 0e21:088d
char _awhichiswrittenin[21]; // 0e21:088e
db dummya_eab3; // 0e21:08a3
db dummya_eab4; // 0e21:08a4
char _a100assembler[15]; // 0e21:08a5
db dummya_eac4; // 0e21:08b4
db dummya_eac5; // 0e21:08b5
db dummya_eac6; // 0e21:08b6
dw dummya_eac7; // 0e21:08b7
char _aifyouhavebugreports[65]; // 0e21:08b9
char dummya_eb0a[2]; // 0e21:08b9
db dummya_eb0c; // 0e21:08fc
dw dummya_eb0d; // 0e21:08fd
char _ainternet[11]; // 0e21:08ff
db dummya_eb1a; // 0e21:090a
db dummya_eb1b; // 0e21:090b
char _asdanesarbmarvels_hack[25]; // 0e21:090c
db dummya_eb35; // 0e21:0925
db dummya_eb36; // 0e21:0926
db dummya_eb37; // 0e21:0927
dw dummya_eb38; // 0e21:0928
char _afidonet[11]; // 0e21:092a
db dummya_eb45; // 0e21:0935
db dummya_eb46; // 0e21:0936
char _a2284116_8[11]; // 0e21:0937
db dummya_eb52; // 0e21:0942
db dummya_eb53; // 0e21:0943
db dummya_eb54; // 0e21:0944
dw dummya_eb55; // 0e21:0945
char _asendemailto[14]; // 0e21:0947
db dummya_eb65; // 0e21:0955
db dummya_eb66; // 0e21:0956
char _alistserverarboliver_s[27]; // 0e21:0957
db dummya_eb82; // 0e21:0972
db dummya_eb83; // 0e21:0973
char _atosubscribetooneorb[31]; // 0e21:0974
db dummya_eba3; // 0e21:0993
dw dummya_eba4; // 0e21:0994
char _athe[4]; // 0e21:0996
db dummya_ebaa; // 0e21:099a
db dummya_ebab; // 0e21:099b
char _ainertiamailinglists[20]; // 0e21:099c
db dummya_ebc0; // 0e21:09b0
db dummya_ebc1; // 0e21:09b1
char _aandwritefollowingte[42]; // 0e21:09b2
db dummya_ebec; // 0e21:09dc
dw dummya_ebed; // 0e21:09dd
char _atoconnecttobinaryin[39]; // 0e21:09df
db dummya_ec16; // 0e21:0a06
db dummya_ec17; // 0e21:0a07
char _asubscribeinertialis[35]; // 0e21:0a08
db dummya_ec3b; // 0e21:0a2b
db dummya_ec3c; // 0e21:0a2c
db dummya_ec3d; // 0e21:0a2d
dw dummya_ec3e; // 0e21:0a2e
char _atoconnecttodiscussi[39]; // 0e21:0a30
db dummya_ec67; // 0e21:0a57
db dummya_ec68; // 0e21:0a58
char _asubscribeinertiatal[36]; // 0e21:0a59
dw word_1d26d; // 0e21:0a7d
db dummya_ec8f; // 0e21:0a7f
char _ashellingtooperating[31]; // 0e21:0a80
db dummya_ecaf; // 0e21:0a9f
dw dummya_ecb0; // 0e21:0aa0
char _atype[5]; // 0e21:0aa2
db dummya_ecb7; // 0e21:0aa7
db dummya_ecb8; // 0e21:0aa8
char _aexit[4]; // 0e21:0aa9
db dummya_ecbd; // 0e21:0aad
db dummya_ecbe; // 0e21:0aae
char _atoreturnto[14]; // 0e21:0aaf
db dummya_eccd; // 0e21:0abd
db dummya_ecce; // 0e21:0abe
char _ainertiaplayer_0[15]; // 0e21:0abf
char _msg[34]; // 0e21:0ace
char _aloadingmodule[15]; // 0e21:0af0
char _amoduleiscorrupt[19]; // 0e21:0aff
char _anotenoughdram_0[56]; // 0e21:0b12
char _anotenoughmemo_0[49]; // 0e21:0b4a
char _adeletemarkedfil[27]; // 0e21:0b7b
char _adeletingfile[15]; // 0e21:0b96
char _afile[4]; // 0e21:0ba5
char _aname[4]; // 0e21:0ba9
char _a_ext[4]; // 0e21:0bad
db dummya_edc1;
char _apal[7]; // 0e21:0bb2
char _antsc[7]; // 0e21:0bb9
dw str_; // 0e21:0bc0
db dummya_edd2; // 0e21:0bc2
char _afileselectorhelp[18]; // 0e21:0bc3
db dummya_ede5; // 0e21:0bd5
dw dummya_ede6; // 0e21:0bd6
db dummya_ede8; // 0e21:0bd8
db dummya_ede9; // 0e21:0bd9
char _ause[4]; // 0e21:0bda
db dummya_edee; // 0e21:0bde
db dummya_edef; // 0e21:0bdf
char _ahome[4]; // 0e21:0be0
db dummya_edf4; // 0e21:0be4
db dummya_edf5; // 0e21:0be5
char dummya_edf6[1]; // 0e21:0be6
db dummya_edf7; // 0e21:0be7
db dummya_edf8; // 0e21:0be8
char _aend_0[3]; // 0e21:0be9
db dummya_edfc; // 0e21:0bec
db dummya_edfd; // 0e21:0bed
char dummya_edfe[1]; // 0e21:0bee
db dummya_edff; // 0e21:0bef
db dummya_ee00; // 0e21:0bf0
char _apgup[4]; // 0e21:0bf1
db dummya_ee05; // 0e21:0bf5
db dummya_ee06; // 0e21:0bf6
char dummya_ee07[1]; // 0e21:0bf7
db dummya_ee08; // 0e21:0bf8
db dummya_ee09; // 0e21:0bf9
char _apgdn[4]; // 0e21:0bfa
db dummya_ee0e; // 0e21:0bfe
db dummya_ee0f; // 0e21:0bff
char dummya_ee10[1]; // 0e21:0c00
db dummya_ee11; // 0e21:0c01
db dummya_ee12; // 0e21:0c02
db dummya_ee13; // 0e21:0c03
db dummya_ee14; // 0e21:0c04
db dummya_ee15; // 0e21:0c05
char _aand[5]; // 0e21:0c06
db dummya_ee1b; // 0e21:0c0b
db dummya_ee1c; // 0e21:0c0c
db dummya_ee1d; // 0e21:0c0d
db dummya_ee1e; // 0e21:0c0e
db dummya_ee1f; // 0e21:0c0f
char _atomovethehighlighte[28]; // 0e21:0c10
db dummya_ee3c; // 0e21:0c2c
dw dummya_ee3d; // 0e21:0c2d
char _apress[6]; // 0e21:0c2f
db dummya_ee45; // 0e21:0c35
db dummya_ee46; // 0e21:0c36
char _aenter[5]; // 0e21:0c37
db dummya_ee4c; // 0e21:0c3c
db dummya_ee4d; // 0e21:0c3d
char _atoplaythemoduleorse[49]; // 0e21:0c3e
db dummya_ee7f; // 0e21:0c6f
dw dummya_ee80; // 0e21:0c70
db dummya_ee82; // 0e21:0c72
db dummya_ee83; // 0e21:0c73
char _aesc[3]; // 0e21:0c74
db dummya_ee87; // 0e21:0c77
db dummya_ee88; // 0e21:0c78
db dummya_ee89; // 0e21:0c79
dw dummya_ee8a; // 0e21:0c7a
char _aquitiplay[10]; // 0e21:0c7c
db dummya_ee96; // 0e21:0c86
dw dummya_ee97; // 0e21:0c87
db dummya_ee99; // 0e21:0c89
db dummya_ee9a; // 0e21:0c8a
char _af1[3]; // 0e21:0c8b
db dummya_ee9e; // 0e21:0c8e
db dummya_ee9f; // 0e21:0c8f
db dummya_eea0; // 0e21:0c90
dw dummya_eea1; // 0e21:0c91
char _athishelpscreenbutig[53]; // 0e21:0c93
db dummya_eed8; // 0e21:0cc8
dw dummya_eed9; // 0e21:0cc9
db dummya_eedb; // 0e21:0ccb
db dummya_eedc; // 0e21:0ccc
char _af8_1[3]; // 0e21:0ccd
db dummya_eee0; // 0e21:0cd0
db dummya_eee1; // 0e21:0cd1
db dummya_eee2; // 0e21:0cd2
dw dummya_eee3; // 0e21:0cd3
char _adosshelltypeexitt_0[31]; // 0e21:0cd5
db dummya_ef04; // 0e21:0cf4
dw dummya_ef05; // 0e21:0cf5
db dummya_ef07; // 0e21:0cf7
db dummya_ef08; // 0e21:0cf8
char _af9_3[3]; // 0e21:0cf9
db dummya_ef0c; // 0e21:0cfc
db dummya_ef0d; // 0e21:0cfd
db dummya_ef0e; // 0e21:0cfe
dw dummya_ef0f; // 0e21:0cff
char _atogglequickreadingo[34]; // 0e21:0d01
db dummya_ef33; // 0e21:0d23
dw dummya_ef34; // 0e21:0d24
db dummya_ef36; // 0e21:0d26
db dummya_ef37; // 0e21:0d27
char _adel[3]; // 0e21:0d28
db dummya_ef3b; // 0e21:0d2b
db dummya_ef3c; // 0e21:0d2c
db dummya_ef3d; // 0e21:0d2d
dw dummya_ef3e; // 0e21:0d2e
char _amarkfiletodelete[19]; // 0e21:0d30
db dummya_ef53; // 0e21:0d43
dw dummya_ef54; // 0e21:0d44
db dummya_ef56; // 0e21:0d46
db dummya_ef57; // 0e21:0d47
char _actrldel[8]; // 0e21:0d48
db dummya_ef60; // 0e21:0d50
db dummya_ef61; // 0e21:0d51
db dummya_ef62; // 0e21:0d52
dw dummya_ef63; // 0e21:0d53
char _adeleteallfileswhich[43]; // 0e21:0d55
db dummya_ef90; // 0e21:0d80
dw dummya_ef91; // 0e21:0d81
db dummya_ef93; // 0e21:0d83
db dummya_ef94; // 0e21:0d84
char _abackspace[9]; // 0e21:0d85
db dummya_ef9e; // 0e21:0d8e
db dummya_ef9f; // 0e21:0d8f
db dummya_efa0; // 0e21:0d90
dw dummya_efa1; // 0e21:0d91
char _areturntoplaymodeonl[49]; // 0e21:0d93
db dummya_efd4; // 0e21:0dc4
dw dummya_efd5; // 0e21:0dc5
db dummya_efd7; // 0e21:0dc7
db dummya_efd8; // 0e21:0dc8
char _apressanykeytoreturn[44]; // 0e21:0dc9
char _apressf1forhelpqu[47]; // 0e21:0df5
dw word_1d614; // 0e21:0e24
db byte_1d616; // 0e21:0e26
char _af9[21]; // 0e21:0e27
char _ahitbackspacetore[61]; // 0e21:0e3c
dw word_1d669; // 0e21:0e79
db byte_1d66b; // 0e21:0e7b
char _af9_0[7]; // 0e21:0e7c
char _asamplename[15]; // 0e21:0e83
db dummya_f0a2; // 0e21:0e92
char _axpressf4formor[19]; // 0e21:0e93
db dummya_f0b6; // 0e21:0ea6
char _asizevolmodec2t[44]; // 0e21:0ea7
db unk_1d6c3; // 0e21:0ed3
char _aunused256[8]; // 0e21:0ed4
char _a256[4]; // 0e21:0edc
char _a512[4]; // 0e21:0ee0
char _a768[4]; // 0e21:0ee4
char _a1024[5]; // 0e21:0ee8
char _akb[3]; // 0e21:0eed
char asc_1d6e0[16]; // 0e21:0ef0
char _aportamentoup[16]; // 0e21:0f00
char _aportamentodown[16]; // 0e21:0f10
char _atoneportamento[16]; // 0e21:0f20
char _avibrato[16]; // 0e21:0f30
char _aportvolslide[16]; // 0e21:0f40
char _avibrvolslide[16]; // 0e21:0f50
char _atremolo[16]; // 0e21:0f60
char _afinepanning[16]; // 0e21:0f70
char _asetsampleofs[16]; // 0e21:0f80
char _avolumesliding[16]; // 0e21:0f90
char _apositionjump[16]; // 0e21:0fa0
char _avolumechange[16]; // 0e21:0fb0
char _apatternbreak[16]; // 0e21:0fc0
char _ae_command[16]; // 0e21:0fd0
char _asetspeedbpm[16]; // 0e21:0fe0
char _asetspeed[16]; // 0e21:0ff0
char _afineportaup[16]; // 0e21:1000
char _afineportadown[16]; // 0e21:1010
char _afinetoneporta[16]; // 0e21:1020
char _afinevibrato[16]; // 0e21:1030
char _afinevolslide[16]; // 0e21:1040
char _afineportvolsl[16]; // 0e21:1050
char _afinevibrvolsl[16]; // 0e21:1060
char _asetstmspeed[16]; // 0e21:1070
char _aautotoneporta[16]; // 0e21:1080
char _atriller[16]; // 0e21:1090
char _atremor[16]; // 0e21:10a0
char _aretrigvolume[16]; // 0e21:10b0
char _aarpeggio[16]; // 0e21:10c0
char _asetamplify[16]; // 0e21:10d0
char _afartempo[16]; // 0e21:10e0
char _afarfinetempo[16]; // 0e21:10f0
char _asetfilter[16]; // 0e21:1100
char _afineslideup[16]; // 0e21:1110
char _afineslidedown[16]; // 0e21:1120
char _aglissandoctrl[16]; // 0e21:1130
char _avibratocontrol[16]; // 0e21:1140
char _asetfinetune[16]; // 0e21:1150
char _ajumptoloop[16]; // 0e21:1160
char _atremolocontrol[16]; // 0e21:1170
char _asetpanning[16]; // 0e21:1180
char _aretriggernote[16]; // 0e21:1190
char _afinevolumeup[16]; // 0e21:11a0
char _afinevolumedown[16]; // 0e21:11b0
char _anotecut[16]; // 0e21:11c0
char _anotedelay[16]; // 0e21:11d0
char _apatterndelay[16]; // 0e21:11e0
char _ainvertloop[16]; // 0e21:11f0
char _asetlooppoint[16]; // 0e21:1200
char asc_1da00[23]; // 0e21:1210
char _amute[23]; // 0e21:1227
char _amarkedtodelete[23]; // 0e21:123e
char _notes[26]; // 0e21:1255
char _slider[8]; // 0e21:126f
char _amodulenotfound[20]; // 0e21:1277
char _amoduleloaderro[21]; // 0e21:128b
char _anotenoughmemor[21]; // 0e21:12a0
char _alistfilenotfou[23]; // 0e21:12b5
db _acriticalerrort[2]; // 0e21:12cc
db dummya_f4de; // 0e21:12cc
char dummya_f4df[65]; // 0e21:12cc
char dummya_f520[11]; // 0e21:12cc
char dummya_f52b[55]; // 0e21:12cc
db dummya_f562; // 0e21:12cc
char dummya_f563[28]; // 0e21:12cc
char _siplay_cfg[13]; // 0e21:136f
db _buffer_1db6c[128]; // 0e21:137c
db _buffer_1dbec; // 0e21:13fc
db dummya_f60d;
db dummya_f60e;
db dummya_f60f;
db dummya_f610;
db dummya_f611;
db dummya_f612;
db dummya_f613;
db dummya_f614;
db dummya_f615;
db dummya_f616;
db dummya_f617;
db dummya_f618;
db dummya_f619;
db dummya_f61a;
db dummya_f61b;
db dummya_f61c;
db dummya_f61d;
db dummya_f61e;
db dummya_f61f;
db dummya_f620;
db byte_1dc01; // 0e21:1411
db dummya_f622;
db dummya_f623;
db dummya_f624;
db dummya_f625;
db dummya_f626;
db dummya_f627;
db dummya_f628;
db dummya_f629;
db byte_1dc0a[98]; // 0e21:141a
dd _buffer_1dc6c; // 0e21:147c
db unk_1dc70; // 0e21:1480
db dummya_f691;
db dummya_f692;
db dummya_f693;
db dummya_f694;
db dummya_f695;
db dummya_f696;
db dummya_f697;
db dummya_f698;
db dummya_f699;
db dummya_f69a;
db unk_1dc7b; // 0e21:148b
db byte_1dc7c[112]; // 0e21:148c
dd dword_1dcec; // 0e21:14fc
db _cfg_buffer; // 0e21:1500
db _snd_card_type; // 0e21:1501
dw _snd_base_port_0; // 0e21:1502
db _irq_number_1; // 0e21:1504
db _dma_channel_1; // 0e21:1505
db _freq_1dcf6; // 0e21:1506
db byte_1dcf7; // 0e21:1507
db byte_1dcf8; // 0e21:1508
dw _configword; // 0e21:1509
db byte_1dcfb; // 0e21:150b
db dummya_f71c;
db _mystr[66]; // 0e21:150d
db byte_1dd3f[69]; // 0e21:154f
char _a_mod_nst_669_s[56]; // 0e21:1594
char _aplaypausloop[12]; // 0e21:15cc
char _ajanfebmaraprmayj[39]; // 0e21:15d8
char _frameborder[37]; // 0e21:15ff
dw _oint8off_1de14; // 0e21:1624
dw _oint8seg_1de16; // 0e21:1626
dw _critsectpoint_off; // 0e21:1628
dw _critsectpoint_seg; // 0e21:162a
dw _swapdata_off; // 0e21:162c
dw _swapdata_seg; // 0e21:162e
dd _videomempointer; // 0e21:1630
dd _videopoint_shiftd; // 0e21:1634
dd _segfsbx_1de28; // 0e21:1638
dd dword_1de2c; // 0e21:163c
dd _messagepointer; // 0e21:1640
dd _volume_1de34; // 0e21:1644
dw _outp_freq; // 0e21:1648
dw _esseg_atstart; // 0e21:164a
dw off_1de3c; // 0e21:164c
dw _offs_draw; // 0e21:164e
dw _offs_draw2; // 0e21:1650
dw off_1de42; // 0e21:1652
dw _amount_of_x; // 0e21:1654
dw word_1de46; // 0e21:1656
dw _current_patterns; // 0e21:1658
dw word_1de4a; // 0e21:165a
dw word_1de4c; // 0e21:165c
dw word_1de4e; // 0e21:165e
dw word_1de50; // 0e21:1660
dw word_1de52; // 0e21:1662
dw word_1de54; // 0e21:1664
dw word_1de56; // 0e21:1666
dw word_1de58; // 0e21:1668
dw word_1de5a; // 0e21:166a
dw word_1de5c; // 0e21:166c
dw word_1de5e; // 0e21:166e
dw word_1de60; // 0e21:1670
dw word_1de62; // 0e21:1672
dw word_1de64; // 0e21:1674
dw word_1de66; // 0e21:1676
dw _fhandle_1de68; // 0e21:1678
dw word_1de6a; // 0e21:167a
dw word_1de6c; // 0e21:167c
dw word_1de6e; // 0e21:167e
db byte_1de70; // 0e21:1680
db byte_1de71; // 0e21:1681
db byte_1de72; // 0e21:1682
db byte_1de73; // 0e21:1683
db byte_1de74; // 0e21:1684
db byte_1de75; // 0e21:1685
db byte_1de76; // 0e21:1686
db _flg_play_settings; // 0e21:1687
db byte_1de78; // 0e21:1688
db byte_1de79; // 0e21:1689
db byte_1de7a; // 0e21:168a
db byte_1de7b; // 0e21:168b
db byte_1de7c; // 0e21:168c
db byte_1de7d; // 0e21:168d
db byte_1de7e; // 0e21:168e
db byte_1de7f; // 0e21:168f
db dummya_f8a0; // 0e21:1690
db byte_1de81; // 0e21:1691
db byte_1de82; // 0e21:1692
db byte_1de83; // 0e21:1693
db byte_1de84; // 0e21:1694
db byte_1de85; // 0e21:1695
db byte_1de86; // 0e21:1696
db dummya_f8a7;
dd dword_1de88; // 0e21:1698
dw _mousecolumn; // 0e21:169c
dw _mouserow; // 0e21:169e
db byte_1de90; // 0e21:16a0
db _mouse_exist_flag; // 0e21:16a1
db _mouse_visible[10]; // 0e21:16a2
dw _x_storage[33]; // 0e21:16ac
db dummya_f8fe[2];
db _buffer_1[512]; // 0e21:16f0
db byte_1e0e0[1979]; // 0e21:18f0
db dummya_102bb[7748]; // 0e21:20ab
db dummya_120ff[1];
db _buffer_2[10240]; // 0e21:3ef0
dw _buffer_1seg; // 0e21:66f0
dw _buffer_2seg; // 0e21:66f2
db byte_22ee4[4096]; // 0e21:66f4
db unk_23ee4; // 0e21:76f4
db byte_23ee5[99]; // 0e21:76f5
db byte_23f48[300]; // 0e21:7758
db unk_24074; // 0e21:7884
db byte_24075[99]; // 0e21:7885
db byte_240d8[300]; // 0e21:78e8
db byte_24204[512]; // 0e21:7a14
db _palette_24404; // 0e21:7c14
db dummya_15e25; // 0e21:7c15
db dummya_15e26; // 0e21:7c16
db dummya_15e27; // 0e21:7c17
db dummya_15e28; // 0e21:7c18
db dummya_15e29; // 0e21:7c19
db dummya_15e2a; // 0e21:7c1a
db dummya_15e2b; // 0e21:7c1b
db dummya_15e2c; // 0e21:7c1c
db dummya_15e2d; // 0e21:7c1d
db dummya_15e2e; // 0e21:7c1e
db dummya_15e2f; // 0e21:7c1f
db dummya_15e30; // 0e21:7c20
db dummya_15e31; // 0e21:7c21
db dummya_15e32; // 0e21:7c22
db dummya_15e33; // 0e21:7c23
db dummya_15e34;
db _vga_palette[14]; // 0e21:7c25
db dummya_15e43[11]; // 0e21:7c25
db dummya_15e4e[11]; // 0e21:7c25
db dummya_15e59[12]; // 0e21:7c25
dw word_24445; // 0e21:7c55
dd dummya_15e67; // 0e21:7c57
dd dummya_15e6b; // 0e21:7c5b
dd dummya_15e6f; // 0e21:7c5f
db unk_24453; // 0e21:7c63
db dummya_15e74; // 0e21:7c64
db dummya_15e75; // 0e21:7c65
db unk_24456; // 0e21:7c66
db dummya_15e77; // 0e21:7c67
db dummya_15e78; // 0e21:7c68
db dummya_15e79; // 0e21:7c69
db dummya_15e7a; // 0e21:7c6a
db dummya_15e7b; // 0e21:7c6b
db dummya_15e7c; // 0e21:7c6c
db dummya_15e7d; // 0e21:7c6d
db dummya_15e7e; // 0e21:7c6e
db dummya_15e7f; // 0e21:7c6f
db dummya_15e80; // 0e21:7c70
struct_0 _str_24461;
struct_0 dummya_15e8b;
struct_0 dummya_15e95;
struct_0 dummya_15e9f;
dw dummya_15ea9; // 0e21:7c99
struct_0 mystr;
struct_0 dummya_15eb5;
struct_0 dummya_15ebf;
dw dummya_15ec9; // 0e21:7cb9
struct_0 stru_244ab;
dw dummya_15ed5; // 0e21:7cc5
struct_0 stru_244b7;
dw dummya_15ee1; // 0e21:7cd1
db dummya_15ee3[1];
dd dword_244c4; // 0e21:7cd4
dd dword_244c8; // 0e21:7cd8
dd _multip_244cc; // 0e21:7cdc
dd _multip_244d0; // 0e21:7ce0
dd dword_244d4; // 0e21:7ce4
db dummya_15ef8;
db dummya_15ef9;
db dummya_15efa;
db dummya_15efb;
db dummya_15efc;
db dummya_15efd;
db dummya_15efe;
db dummya_15eff;
db dummya_15f00;
db dummya_15f01;
db dummya_15f02;
db dummya_15f03;
dd dword_244e4; // 0e21:7cf4
dd dword_244e8; // 0e21:7cf8
dd dword_244ec; // 0e21:7cfc
dd dword_244f0; // 0e21:7d00
dd dword_244f4; // 0e21:7d04
dd dword_244f8; // 0e21:7d08
dd dword_244fc; // 0e21:7d0c
dd dword_24500; // 0e21:7d10
dd dword_24504; // 0e21:7d14
dd dword_24508; // 0e21:7d18
dw word_2450c; // 0e21:7d1c
dw word_2450e; // 0e21:7d1e
db dummya_15f30;
db dummya_15f31;
db dummya_15f32;
db dummya_15f33;
dw word_24514; // 0e21:7d24
dw word_24516; // 0e21:7d26
dw word_24518; // 0e21:7d28
dw word_2451a; // 0e21:7d2a
dw word_2451c; // 0e21:7d2c
dw word_2451e; // 0e21:7d2e
dw word_24520; // 0e21:7d30
dw word_24522; // 0e21:7d32
dw word_24524; // 0e21:7d34
dd _tabledword_24526[9]; // 0e21:7d36
dd dummya_15f6a[6]; // 0e21:7d36
dd _tabledword_24562[5]; // 0e21:7d72
dd dummya_15f96[5]; // 0e21:7d72
dd dummya_15faa[5]; // 0e21:7d72
db dummya_15fbe[2];
char _a070295122642[18]; // 15fc:0000
db dummya_15fd2[2]; // 15fc:0012
dd _pointer_245b4; // 15fc:0014
dd _audio_buf_pointer; // 15fc:0018
dd dword_245bc; // 15fc:001c
dd dword_245c0; // 15fc:0020
dd dword_245c4; // 15fc:0024
dw off_245c8; // 15fc:0028
dw off_245ca; // 15fc:002a
dw off_245cc; // 15fc:002c
dw off_245ce; // 15fc:002e
dw _savesp_245d0; // 15fc:0030
dw word_245d2; // 15fc:0032
dw word_245d4; // 15fc:0034
dw word_245d6; // 15fc:0036
dw word_245d8; // 15fc:0038
dw word_245da; // 15fc:003a
dw word_245dc; // 15fc:003c
dw _freq_245de; // 15fc:003e
dw off_245e0; // 15fc:0040
dw off_245e2; // 15fc:0042
dw word_245e4; // 15fc:0044
db dummya_16006[2]; // 15fc:0046
dw word_245e8; // 15fc:0048
dw word_245ea; // 15fc:004a
dw word_245ec; // 15fc:004c
dw word_245ee; // 15fc:004e
dw word_245f0; // 15fc:0050
dw word_245f2; // 15fc:0052
dw _my_seg_index; // 15fc:0054
dw word_245f6; // 15fc:0056
dw word_245f8; // 15fc:0058
dw word_245fa; // 15fc:005a
dw _volume_245fc; // 15fc:005c
dw _amplification; // 15fc:005e
dw word_24600; // 15fc:0060
dw word_24602; // 15fc:0062
dw _interrupt_mask; // 15fc:0064
dw _old_intprocoffset; // 15fc:0066
dw _old_intprocseg; // 15fc:0068
dw _intvectoffset; // 15fc:006a
dw word_2460c; // 15fc:006c
dw word_2460e; // 15fc:006e
dw word_24610; // 15fc:0070
dw _my_size; // 15fc:0072
dw word_24614; // 15fc:0074
db byte_24616; // 15fc:0076
db byte_24617; // 15fc:0077
db byte_24618; // 15fc:0078
db byte_24619; // 15fc:0079
db byte_2461a; // 15fc:007a
db byte_2461b; // 15fc:007b
db byte_2461c; // 15fc:007c
db byte_2461d; // 15fc:007d
db byte_2461e; // 15fc:007e
db byte_2461f; // 15fc:007f
db byte_24620; // 15fc:0080
db byte_24621; // 15fc:0081
db _sndflags_24622; // 15fc:0082
db byte_24623; // 15fc:0083
db _bit_mode; // 15fc:0084
db byte_24625; // 15fc:0085
dw _gravis_port; // 15fc:0086
db byte_24628; // 15fc:0088
db byte_24629; // 15fc:0089
db _irq_number_0; // 15fc:008a
db byte_2462b; // 15fc:008b
db _dma_channel_0; // 15fc:008c
db byte_2462d; // 15fc:008d
dw off_2462e; // 15fc:008e
dw word_24630; // 15fc:0090
dw word_24632; // 15fc:0092
dw word_24634; // 15fc:0094
dw word_24636; // 15fc:0096
dw _freq2; // 15fc:0098
db dummya_1605a;
db byte_2463b; // 15fc:009b
dd dword_2463c; // 15fc:009c
dd dword_24640; // 15fc:00a0
db dummya_16064;
db byte_24645; // 15fc:00a5
dw word_24646; // 15fc:00a6
dw _sound_port; // 15fc:00a8
db byte_2464a; // 15fc:00aa
db byte_2464b; // 15fc:00ab
dw _base_port2; // 15fc:00ac
db _dma_channel2; // 15fc:00ae
db _irq_number2; // 15fc:00af
db byte_24650; // 15fc:00b0
db byte_24651; // 15fc:00b1
dw _sb_base_port; // 15fc:00b2
dw word_24654; // 15fc:00b4
dw off_24656; // 15fc:00b6
db _dma_chn_mask; // 15fc:00b8
db _sb_irq_number; // 15fc:00b9
db _sb_timeconst; // 15fc:00ba
db dummya_1607b[1];
dw word_2465c; // 15fc:00bc
dw _freq1; // 15fc:00be
dw _fhandle_module; // 15fc:00c0
dw word_24662; // 15fc:00c2
db byte_24664; // 15fc:00c4
db byte_24665; // 15fc:00c5
db byte_24666; // 15fc:00c6
db byte_24667; // 15fc:00c7
db byte_24668; // 15fc:00c8
db byte_24669; // 15fc:00c9
db byte_2466a; // 15fc:00ca
db byte_2466b; // 15fc:00cb
db byte_2466c; // 15fc:00cc
db byte_2466d; // 15fc:00cd
db byte_2466e; // 15fc:00ce
db _dma_mode; // 15fc:00cf
db _sb_int_counter; // 15fc:00d0
db byte_24671; // 15fc:00d1
db _flag_playsetttings; // 15fc:00d2
db byte_24673; // 15fc:00d3
db byte_24674; // 15fc:00d4
db byte_24675; // 15fc:00d5
db byte_24676; // 15fc:00d6
db byte_24677; // 15fc:00d7
db byte_24678; // 15fc:00d8
db byte_24679; // 15fc:00d9
db byte_2467a; // 15fc:00da
db byte_2467b; // 15fc:00db
db byte_2467c; // 15fc:00dc
db byte_2467d; // 15fc:00dd
db byte_2467e; // 15fc:00de
db _play_state; // 15fc:00df
db _snd_init; // 15fc:00e0
db _snd_set_flag; // 15fc:00e1
db byte_24682; // 15fc:00e2
db byte_24683; // 15fc:00e3
dd dword_24684; // 15fc:00e4
db dummya_160a8;
db dummya_160a9[3]; // 15fc:00e9
dw word_2468c; // 15fc:00ec
db dummya_160ae[2]; // 15fc:00ee
db dummya_160b0;
db dummya_160b1[3]; // 15fc:00f1
dd dword_24694; // 15fc:00f4
dw _myseg_24698; // 15fc:00f8
db _memflg_2469a; // 15fc:00fa
db byte_2469b; // 15fc:00fb
db byte_2469c; // 15fc:00fc
db dummya_160bd;
dw _ems_pageframe; // 15fc:00fe
dw _ems_handle; // 15fc:0100
dw _ems_log_pagenum; // 15fc:0102
db _ems_enabled; // 15fc:0104
db byte_246a5; // 15fc:0105
dw word_246a6; // 15fc:0106
db byte_246a8; // 15fc:0108
dw word_246a9; // 15fc:0109
db dummya_160cb[1];
dd _module_type_text; // 15fc:010c
char out_[32]; // 15fc:0110
dw _moduleflag_246d0; // 15fc:0130
db _sndcard_type; // 15fc:0132
dw _snd_base_port; // 15fc:0133
db _irq_number; // 15fc:0135
db _dma_channel; // 15fc:0136
db _freq_246d7; // 15fc:0137
db byte_246d8; // 15fc:0138
db byte_246d9; // 15fc:0139
dw _config_word; // 15fc:013a
db byte_246dc; // 15fc:013c
db dummya_160fd[1];
dw word_246de[8]; // 15fc:013e
dw dummya_1610e[4]; // 15fc:013e
dw _table_246f6[9]; // 15fc:0156
dw dummya_16128[7]; // 15fc:0156
dw _table_24716[7]; // 15fc:0176
dw dummya_16144[7]; // 15fc:0176
dw dummya_16152[7]; // 15fc:0176
dw dummya_16160[7]; // 15fc:0176
dw dummya_1616e[7]; // 15fc:0176
dw dummya_1617c[7]; // 15fc:0176
dw dummya_1618a[7]; // 15fc:0176
dw dummya_16198[7]; // 15fc:0176
dw dummya_161a6[7]; // 15fc:0176
dw dummya_161b4[2]; // 15fc:0176
dw _table_24798[7]; // 15fc:01f8
dw dummya_161c6[7]; // 15fc:01f8
dw dummya_161d4[7]; // 15fc:01f8
dw dummya_161e2[7]; // 15fc:01f8
dw dummya_161f0[7]; // 15fc:01f8
dw dummya_161fe[7]; // 15fc:01f8
dw dummya_1620c[7]; // 15fc:01f8
dw dummya_1621a[7]; // 15fc:01f8
dw dummya_16228[7]; // 15fc:01f8
dw dummya_16236; // 15fc:01f8
dw _table_24818[7]; // 15fc:0278
dw dummya_16246[7]; // 15fc:0278
dw dummya_16254[7]; // 15fc:0278
dw dummya_16262[7]; // 15fc:0278
dw dummya_16270[7]; // 15fc:0278
dw dummya_1627e[7]; // 15fc:0278
dw dummya_1628c[7]; // 15fc:0278
dw dummya_1629a[7]; // 15fc:0278
dw dummya_162a8[7]; // 15fc:0278
dw dummya_162b6; // 15fc:0278
db _table_24898[89]; // 15fc:02f8
db dummya_16311[26]; // 15fc:02f8
db dummya_1632b[11]; // 15fc:02f8
db dummya_16336[10]; // 15fc:02f8
db dummya_16340[15]; // 15fc:02f8
db dummya_1634f[74]; // 15fc:02f8
db dummya_16399[31]; // 15fc:02f8
dw word_24998[8]; // 15fc:03f8
dw dummya_163c8[8]; // 15fc:03f8
dw dummya_163d8[8]; // 15fc:03f8
dw dummya_163e8[8]; // 15fc:03f8
dw dummya_163f8[8]; // 15fc:03f8
dw dummya_16408[9]; // 15fc:03f8
dw dummya_1641a[9]; // 15fc:03f8
dw dummya_1642c[8]; // 15fc:03f8
dw dummya_1643c[8]; // 15fc:03f8
dw dummya_1644c[8]; // 15fc:03f8
dw dummya_1645c[8]; // 15fc:03f8
dw dummya_1646c[8]; // 15fc:03f8
dw dummya_1647c[9]; // 15fc:03f8
dw dummya_1648e[9]; // 15fc:03f8
dw dummya_164a0[8]; // 15fc:03f8
dw dummya_164b0[8]; // 15fc:03f8
dw dummya_164c0[8]; // 15fc:03f8
dw dummya_164d0[8]; // 15fc:03f8
dw dummya_164e0[8]; // 15fc:03f8
dw dummya_164f0[8]; // 15fc:03f8
dw dummya_16500[9]; // 15fc:03f8
dw dummya_16512[9]; // 15fc:03f8
dw dummya_16524[8]; // 15fc:03f8
dw dummya_16534[8]; // 15fc:03f8
dw dummya_16544[8]; // 15fc:03f8
dw dummya_16554[8]; // 15fc:03f8
dw dummya_16564[8]; // 15fc:03f8
dw dummya_16574[9]; // 15fc:03f8
dw dummya_16586[9]; // 15fc:03f8
dw dummya_16598[8]; // 15fc:03f8
dw dummya_165a8[8]; // 15fc:03f8
dw dummya_165b8[8]; // 15fc:03f8
dw dummya_165c8[8]; // 15fc:03f8
dw dummya_165d8[8]; // 15fc:03f8
dw dummya_165e8[9]; // 15fc:03f8
dw dummya_165fa[9]; // 15fc:03f8
dw dummya_1660c[8]; // 15fc:03f8
dw dummya_1661c[8]; // 15fc:03f8
dw dummya_1662c[8]; // 15fc:03f8
dw dummya_1663c[8]; // 15fc:03f8
dw dummya_1664c[8]; // 15fc:03f8
dw dummya_1665c[9]; // 15fc:03f8
dw dummya_1666e[9]; // 15fc:03f8
dw dummya_16680[8]; // 15fc:03f8
dw dummya_16690[8]; // 15fc:03f8
dw dummya_166a0[8]; // 15fc:03f8
dw dummya_166b0[8]; // 15fc:03f8
dw dummya_166c0[8]; // 15fc:03f8
dw dummya_166d0[8]; // 15fc:03f8
dw dummya_166e0[9]; // 15fc:03f8
dw dummya_166f2[9]; // 15fc:03f8
dw dummya_16704[8]; // 15fc:03f8
dw dummya_16714[8]; // 15fc:03f8
dw dummya_16724[8]; // 15fc:03f8
dw dummya_16734[8]; // 15fc:03f8
dw dummya_16744[8]; // 15fc:03f8
dw dummya_16754[9]; // 15fc:03f8
dw dummya_16766[9]; // 15fc:03f8
dw dummya_16778[8]; // 15fc:03f8
dw dummya_16788[8]; // 15fc:03f8
dw dummya_16798[8]; // 15fc:03f8
dw dummya_167a8[8]; // 15fc:03f8
dw dummya_167b8[8]; // 15fc:03f8
dw dummya_167c8[9]; // 15fc:03f8
dw dummya_167da[9]; // 15fc:03f8
dw dummya_167ec[8]; // 15fc:03f8
dw dummya_167fc[8]; // 15fc:03f8
dw dummya_1680c[8]; // 15fc:03f8
dw dummya_1681c[8]; // 15fc:03f8
dw dummya_1682c[8]; // 15fc:03f8
dw dummya_1683c[8]; // 15fc:03f8
dw dummya_1684c[9]; // 15fc:03f8
dw dummya_1685e[9]; // 15fc:03f8
dw dummya_16870[8]; // 15fc:03f8
dw dummya_16880[8]; // 15fc:03f8
dw dummya_16890[8]; // 15fc:03f8
dw dummya_168a0[8]; // 15fc:03f8
dw dummya_168b0[8]; // 15fc:03f8
dw dummya_168c0[9]; // 15fc:03f8
dw dummya_168d2[9]; // 15fc:03f8
dw dummya_168e4[8]; // 15fc:03f8
dw dummya_168f4[8]; // 15fc:03f8
dw dummya_16904[8]; // 15fc:03f8
dw dummya_16914[8]; // 15fc:03f8
dw dummya_16924[8]; // 15fc:03f8
dw dummya_16934[9]; // 15fc:03f8
dw dummya_16946[9]; // 15fc:03f8
dw dummya_16958[8]; // 15fc:03f8
dw dummya_16968[8]; // 15fc:03f8
dw dummya_16978[8]; // 15fc:03f8
dw dummya_16988[8]; // 15fc:03f8
dw dummya_16998[8]; // 15fc:03f8
dw dummya_169a8[9]; // 15fc:03f8
dw dummya_169ba[9]; // 15fc:03f8
dw dummya_169cc[8]; // 15fc:03f8
dw dummya_169dc[8]; // 15fc:03f8
dw dummya_169ec[8]; // 15fc:03f8
dw dummya_169fc[8]; // 15fc:03f8
dw dummya_16a0c[8]; // 15fc:03f8
dw dummya_16a1c[8]; // 15fc:03f8
dw dummya_16a2c[9]; // 15fc:03f8
dw dummya_16a3e[9]; // 15fc:03f8
dw dummya_16a50[8]; // 15fc:03f8
dw dummya_16a60[8]; // 15fc:03f8
dw dummya_16a70[8]; // 15fc:03f8
dw dummya_16a80[8]; // 15fc:03f8
dw dummya_16a90[8]; // 15fc:03f8
dw dummya_16aa0[9]; // 15fc:03f8
dw dummya_16ab2[9]; // 15fc:03f8
dw dummya_16ac4[8]; // 15fc:03f8
dw dummya_16ad4[8]; // 15fc:03f8
dw dummya_16ae4[8]; // 15fc:03f8
dw dummya_16af4[8]; // 15fc:03f8
dw dummya_16b04[8]; // 15fc:03f8
dw dummya_16b14[9]; // 15fc:03f8
dw dummya_16b26[9]; // 15fc:03f8
dw _table_25118[9]; // 15fc:0b78
dw dummya_16b4a[11]; // 15fc:0b78
dw dummya_16b60[11]; // 15fc:0b78
dw dummya_16b76[11]; // 15fc:0b78
dw dummya_16b8c[11]; // 15fc:0b78
dw dummya_16ba2[13]; // 15fc:0b78
dw dummya_16bbc[13]; // 15fc:0b78
dw dummya_16bd6[5]; // 15fc:0b78
db _table_251c0[11]; // 15fc:0c20
db dummya_16beb[9]; // 15fc:0c20
db dummya_16bf4[10]; // 15fc:0c20
db dummya_16bfe[2]; // 15fc:0c20
db _table_251e0[11]; // 15fc:0c40
db dummya_16c0b[11]; // 15fc:0c40
db dummya_16c16[10]; // 15fc:0c40
db dummya_16c20[9]; // 15fc:0c40
db dummya_16c29[9]; // 15fc:0c40
db dummya_16c32[9]; // 15fc:0c40
db dummya_16c3b[6]; // 15fc:0c40
db _table_25221[12]; // 15fc:0c81
db dummya_16c4d[11]; // 15fc:0c81
db dummya_16c58[11]; // 15fc:0c81
db dummya_16c63[10]; // 15fc:0c81
db dummya_16c6d[9]; // 15fc:0c81
db dummya_16c76[9]; // 15fc:0c81
db dummya_16c7f[2]; // 15fc:0c81
db _table_25261[12]; // 15fc:0cc1
db dummya_16c8d[11]; // 15fc:0cc1
db dummya_16c98[11]; // 15fc:0cc1
db dummya_16ca3[10]; // 15fc:0cc1
db dummya_16cad[9]; // 15fc:0cc1
db dummya_16cb6[9]; // 15fc:0cc1
db dummya_16cbf[3]; // 15fc:0cc1
dw _snd_init_offs; // 15fc:0d02
dw dummya_16cc4; // 15fc:0d04
dw dummya_16cc6; // 15fc:0d06
dw dummya_16cc8; // 15fc:0d08
dw dummya_16cca; // 15fc:0d0a
dw dummya_16ccc; // 15fc:0d0c
dw dummya_16cce; // 15fc:0d0e
dw dummya_16cd0; // 15fc:0d10
dw dummya_16cd2; // 15fc:0d12
dw dummya_16cd4; // 15fc:0d14
dw dummya_16cd6; // 15fc:0d16
dw _snd_on_offs; // 15fc:0d18
dw dummya_16cda; // 15fc:0d1a
dw dummya_16cdc; // 15fc:0d1c
dw dummya_16cde; // 15fc:0d1e
dw dummya_16ce0; // 15fc:0d20
dw dummya_16ce2; // 15fc:0d22
dw dummya_16ce4; // 15fc:0d24
dw dummya_16ce6; // 15fc:0d26
dw dummya_16ce8; // 15fc:0d28
dw dummya_16cea; // 15fc:0d2a
dw dummya_16cec; // 15fc:0d2c
dw _snd_off_offs; // 15fc:0d2e
dw dummya_16cf0; // 15fc:0d30
dw dummya_16cf2; // 15fc:0d32
dw dummya_16cf4; // 15fc:0d34
dw dummya_16cf6; // 15fc:0d36
dw dummya_16cf8; // 15fc:0d38
dw dummya_16cfa; // 15fc:0d3a
dw dummya_16cfc; // 15fc:0d3c
dw dummya_16cfe; // 15fc:0d3e
dw dummya_16d00; // 15fc:0d40
dw dummya_16d02; // 15fc:0d42
dw _snd_deinit_offs; // 15fc:0d44
dw dummya_16d06; // 15fc:0d46
dw dummya_16d08; // 15fc:0d48
dw dummya_16d0a; // 15fc:0d4a
dw dummya_16d0c; // 15fc:0d4c
dw dummya_16d0e; // 15fc:0d4e
dw dummya_16d10; // 15fc:0d50
dw dummya_16d12; // 15fc:0d52
dw dummya_16d14; // 15fc:0d54
dw dummya_16d16; // 15fc:0d56
dw dummya_16d18; // 15fc:0d58
dw _snd_cards_offs; // 15fc:0d5a
dw dummya_16d1c; // 15fc:0d5c
dw dummya_16d1e; // 15fc:0d5e
dw dummya_16d20; // 15fc:0d60
dw dummya_16d22; // 15fc:0d62
dw dummya_16d24; // 15fc:0d64
dw dummya_16d26; // 15fc:0d66
dw dummya_16d28; // 15fc:0d68
dw dummya_16d2a; // 15fc:0d6a
dw dummya_16d2c; // 15fc:0d6c
dw dummya_16d2e; // 15fc:0d6e
dw _sndcards_text_tbl; // 15fc:0d70
dw dummya_16d32; // 15fc:0d72
dw dummya_16d34; // 15fc:0d74
dw dummya_16d36; // 15fc:0d76
dw dummya_16d38; // 15fc:0d78
dw dummya_16d3a; // 15fc:0d7a
dw dummya_16d3c; // 15fc:0d7c
dw dummya_16d3e; // 15fc:0d7e
dw dummya_16d40; // 15fc:0d80
dw dummya_16d42; // 15fc:0d82
dw dummya_16d44; // 15fc:0d84
dw off_25326; // 15fc:0d86
db dummya_16d48;
db dummya_16d49;
db dummya_16d4a; // 15fc:0d8a
char _ainertiamodule_1[16]; // 15fc:0d8b
dw dummya_16d5b; // 15fc:0d9b
db dummya_16d5d; // 15fc:0d9d
db dummya_16d5e; // 15fc:0d9e
db dummya_16d5f; // 15fc:0d9f
char _am_k_[4]; // 15fc:0da0
dw dummya_16d64; // 15fc:0da4
db dummya_16d66; // 15fc:0da6
db dummya_16d67; // 15fc:0da7
db dummya_16d68; // 15fc:0da8
char _a_m_k[4]; // 15fc:0da9
dw dummya_16d6d; // 15fc:0dad
db dummya_16d6f; // 15fc:0daf
db dummya_16d70; // 15fc:0db0
db dummya_16d71; // 15fc:0db1
char _amk[4]; // 15fc:0db2
dw dummya_16d76; // 15fc:0db6
db dummya_16d78; // 15fc:0db8
db dummya_16d79; // 15fc:0db9
db dummya_16d7a; // 15fc:0dba
char _amk_0[4]; // 15fc:0dbb
dw dummya_16d7f; // 15fc:0dbf
db dummya_16d81; // 15fc:0dc1
db dummya_16d82; // 15fc:0dc2
db dummya_16d83; // 15fc:0dc3
char _agsft[4]; // 15fc:0dc4
dw dummya_16d88; // 15fc:0dc8
db dummya_16d8a; // 15fc:0dca
db dummya_16d8b; // 15fc:0dcb
db dummya_16d8c; // 15fc:0dcc
char _ae_g_[4]; // 15fc:0dcd
dw dummya_16d91; // 15fc:0dd1
db dummya_16d93; // 15fc:0dd3
db dummya_16d94; // 15fc:0dd4
db dummya_16d95; // 15fc:0dd5
char _aflt4[4]; // 15fc:0dd6
dw dummya_16d9a; // 15fc:0dda
db dummya_16d9c; // 15fc:0ddc
db dummya_16d9d; // 15fc:0ddd
db dummya_16d9e; // 15fc:0dde
char _aflt8[4]; // 15fc:0ddf
dw dummya_16da3; // 15fc:0de3
db dummya_16da5; // 15fc:0de5
db dummya_16da6; // 15fc:0de6
db dummya_16da7; // 15fc:0de7
char _acd81[4]; // 15fc:0de8
dw dummya_16dac; // 15fc:0dec
db dummya_16dae; // 15fc:0dee
db dummya_16daf; // 15fc:0def
db dummya_16db0; // 15fc:0df0
char _aocta[4]; // 15fc:0df1
dw dummya_16db5; // 15fc:0df5
db dummya_16db7; // 15fc:0df7
db dummya_16db8; // 15fc:0df8
db dummya_16db9; // 15fc:0df9
char _achn[3]; // 15fc:0dfa
dw dummya_16dbd; // 15fc:0dfd
db dummya_16dbf; // 15fc:0dff
db dummya_16dc0; // 15fc:0e00
db dummya_16dc1; // 15fc:0e01
char _ach[2]; // 15fc:0e02
dw dummya_16dc4; // 15fc:0e04
db dummya_16dc6; // 15fc:0e06
db dummya_16dc7; // 15fc:0e07
db dummya_16dc8; // 15fc:0e08
char _atdz[3]; // 15fc:0e09
dw dummya_16dcc; // 15fc:0e0c
db dummya_16dce; // 15fc:0e0e
db dummya_16dcf;
db dummya_16dd0; // 15fc:0e10
char _ascream[8]; // 15fc:0e11
dw dummya_16dd9; // 15fc:0e19
db dummya_16ddb; // 15fc:0e1b
db dummya_16ddc;
db dummya_16ddd; // 15fc:0e1d
char _abmod2stm[8]; // 15fc:0e1e
dw dummya_16de6; // 15fc:0e26
db dummya_16de8; // 15fc:0e28
db dummya_16de9;
db dummya_16dea; // 15fc:0e2a
char _ascrm[4]; // 15fc:0e2b
dw dummya_16def; // 15fc:0e2f
db dummya_16df1;
db dummya_16df2;
db dummya_16df3; // 15fc:0e33
char _amtm[3]; // 15fc:0e34
dw dummya_16df7; // 15fc:0e37
db dummya_16df9;
db dummya_16dfa;
db dummya_16dfb; // 15fc:0e3b
char _apsm[4]; // 15fc:0e3c
dw dummya_16e00; // 15fc:0e40
db dummya_16e02[2];
db dummya_16e04; // 15fc:0e44
char _afar[4]; // 15fc:0e45
dw dummya_16e09; // 15fc:0e49
db dummya_16e0b;
db dummya_16e0c;
db dummya_16e0d; // 15fc:0e4d
char _amas_utrack_v[12]; // 15fc:0e4e
dw dummya_16e1a; // 15fc:0e5a
db dummya_16e1c;
db dummya_16e1d;
db dummya_16e1e; // 15fc:0e5e
char _aif[2]; // 15fc:0e5f
dw dummya_16e21; // 15fc:0e61
db dummya_16e23;
db dummya_16e24;
db dummya_16e25; // 15fc:0e65
char _ajn[2]; // 15fc:0e66
char _emodulenotfound[19]; // 15fc:0e68
char _anotenoughmemory[30]; // 15fc:0e7b
char _anotenoughdramon[32]; // 15fc:0e99
char _asomefunctionsof[47]; // 15fc:0eb9
db dummya_16ea8; // 15fc:0eb9
char dummya_16ea9[46]; // 15fc:0eb9
char dummya_16ed7[51]; // 15fc:0eb9
char _acouldnotfindthe[49]; // 15fc:0f4a
char _acouldnotfindt_0[65]; // 15fc:0f7b
char dummya_16f7c[4]; // 15fc:0f7b
char _athisprogramrequ[54]; // 15fc:0fc0
char _aerrorsoundcardn[30]; // 15fc:0ff6
char _aerrorcouldnotfi[33]; // 15fc:1014
char _aerrorcouldnot_0[29]; // 15fc:1035
char _aerrorcouldnot_1[29]; // 15fc:1052
char _adevicenotiniti[24]; // 15fc:106f
char _aat[4]; // 15fc:1087
char _abaseport[12]; // 15fc:108b
char _amixedat[12]; // 15fc:1097
char _akhz[4]; // 15fc:10a3
char _agravisultrasoun[18]; // 15fc:10a7
db _gravis_txt; // 15fc:10b9
db dummya_1707a;
dw dummya_1707b; // 15fc:10bb
db dummya_1707d; // 15fc:10bd
db dummya_1707e;
dw dummya_1707f; // 15fc:10bf
db dummya_17081; // 15fc:10c1
db dummya_17082;
dw dummya_17083; // 15fc:10c3
db dummya_17085; // 15fc:10c5
db dummya_17086;
dw dummya_17087; // 15fc:10c7
char _ahgf1irq[11]; // 15fc:10c9
db dummya_17094; // 15fc:10d4
db dummya_17095;
dw dummya_17096; // 15fc:10d6
char _adramdma[11]; // 15fc:10d8
db dummya_170a3; // 15fc:10e3
db dummya_170a4;
dw dummya_170a5; // 15fc:10e5
db dummya_170a7[1];
char _aproaudiospectrum[22]; // 15fc:10e8
char _awindowssoundsyst[21]; // 15fc:10fe
char _asoundblaster1616[23]; // 15fc:1113
char _asoundblasterpro[18]; // 15fc:112a
char _asoundblaster_0[14]; // 15fc:113c
db _sb16_txt; // 15fc:114a
db dummya_1710b;
dw dummya_1710c; // 15fc:114c
dw dummya_1710e; // 15fc:114e
db dummya_17110; // 15fc:1150
db dummya_17111;
dw dummya_17112; // 15fc:1152
db dummya_17114; // 15fc:1154
db dummya_17115;
dw dummya_17116; // 15fc:1156
db dummya_17118; // 15fc:1158
db dummya_17119[1];
dw dummya_1711a; // 15fc:115a
char _ahirq[7]; // 15fc:115c
db dummya_17123; // 15fc:1163
db dummya_17124;
dw dummya_17125; // 15fc:1165
char _adma[6]; // 15fc:1167
db dummya_1712d; // 15fc:116d
db dummya_1712e;
dw dummya_1712f; // 15fc:116f
db dummya_17131; // 15fc:1171
db dummya_17132;
dw dummya_17133; // 15fc:1173
db dummya_17135; // 15fc:1175
db dummya_17136;
dw dummya_17137; // 15fc:1177
db dummya_17139; // 15fc:1179
db dummya_1713a;
dw dummya_1713b; // 15fc:117b
db dummya_1713d[1];
char _acovox_0[6]; // 15fc:117e
char _astereoon1_0[12]; // 15fc:1184
db _covox_txt; // 15fc:1190
db dummya_17151;
dw dummya_17152; // 15fc:1192
dw dummya_17154; // 15fc:1194
db dummya_17156; // 15fc:1196
db dummya_17157;
dw dummya_17158; // 15fc:1198
db dummya_1715a; // 15fc:119a
db dummya_1715b;
dw dummya_1715c; // 15fc:119c
db dummya_1715e; // 15fc:119e
db dummya_1715f;
dw dummya_17160; // 15fc:11a0
char dummya_17162[1]; // 15fc:11a2
db dummya_17163; // 15fc:11a3
db dummya_17164;
dw dummya_17165; // 15fc:11a5
db dummya_17167; // 15fc:11a7
db dummya_17168;
dw dummya_17169; // 15fc:11a9
db dummya_1716b; // 15fc:11ab
db dummya_1716c;
dw dummya_1716d; // 15fc:11ad
db dummya_1716f[1];
char _aadlibsoundcard_0[16]; // 15fc:11b0
char _apchonker_0[10]; // 15fc:11c0
db _pcspeaker_text; // 15fc:11ca
db dummya_1718b;
dw dummya_1718c; // 15fc:11cc
dw dummya_1718e; // 15fc:11ce
db dummya_17190; // 15fc:11d0
db dummya_17191;
dw dummya_17192; // 15fc:11d2
db dummya_17194; // 15fc:11d4
db dummya_17195;
dw dummya_17196; // 15fc:11d6
db dummya_17198; // 15fc:11d8
db dummya_17199;
dw dummya_1719a; // 15fc:11da
db dummya_1719c;
char _ageneralmidi_0[13]; // 15fc:11dd
db _midi_txt; // 15fc:11ea
db dummya_171ab;
dw dummya_171ac; // 15fc:11ec
dw dummya_171ae; // 15fc:11ee
db dummya_171b0; // 15fc:11f0
db dummya_171b1;
dw dummya_171b2; // 15fc:11f2
db dummya_171b4; // 15fc:11f4
db dummya_171b5;
dw dummya_171b6; // 15fc:11f6
db dummya_171b8; // 15fc:11f8
db dummya_171b9;
dw dummya_171ba; // 15fc:11fa
char dummya_171bc[1]; // 15fc:11fc
db dummya_171bd[3];
dd dword_257a0; // 15fc:1200
dw word_257a4; // 15fc:1204
char _ainertiamodule[17]; // 15fc:1206
db dummya_171d7[32]; // 15fc:1217
db dummya_171f7; // 15fc:1237
db dummya_171f8; // 15fc:1238
db dummya_171f9;
db byte_257da; // 15fc:123a
db byte_257db; // 15fc:123b
db byte_257dc; // 15fc:123c
db dummya_171fd;
db dummya_171fe;
db dummya_171ff;
db dummya_17200;
db dummya_17201;
db dummya_17202;
db dummya_17203;
db dummya_17204;
db dummya_17205;
dw word_257e6; // 15fc:1246
dw word_257e8; // 15fc:1248
dw word_257ea; // 15fc:124a
dw word_257ec; // 15fc:124c
dw word_257ee; // 15fc:124e
dw word_257f0; // 15fc:1250
db byte_257f2; // 15fc:1252
db byte_257f3; // 15fc:1253
db dummya_17214;
db dummya_17215;
char _ainertiamodule_0[17]; // 15fc:1256
db dummya_17227[31]; // 15fc:1267
db dummya_17246[32]; // 15fc:1286
char _ainertiasample[16]; // 15fc:12a6
char asc_25856[35]; // 15fc:12b6
db dummya_17299;
db dummya_1729a;
db dummya_1729b;
db dummya_1729c;
db dummya_1729d;
db dummya_1729e;
db dummya_1729f;
db dummya_172a0;
db dummya_172a1;
db dummya_172a2;
db dummya_172a3;
db dummya_172a4;
db dummya_172a5;
dd dword_25886; // 15fc:12e6
db dummya_172aa; // 15fc:12ea
db byte_2588b; // 15fc:12eb
db byte_2588c; // 15fc:12ec
db byte_2588d; // 15fc:12ed
dw word_2588e; // 15fc:12ee
db dummya_172b0;
db dummya_172b1;
dd dword_25892; // 15fc:12f2
dd dword_25896; // 15fc:12f6
db dummya_172ba;
db dummya_172bb;
db dummya_172bc;
db dummya_172bd;
db dummya_172be;
db dummya_172bf;
db dummya_172c0;
db dummya_172c1;
db dummya_172c2;
db dummya_172c3;
db dummya_172c4;
db dummya_172c5;
char ainertiasample[50]; // 15fc:1306
db dummya_172f8[2]; // 15fc:1306
db dummya_172fa[32]; // 15fc:133a
db dummya_1731a;
db dummya_1731b;
db dummya_1731c;
db dummya_1731d;
db dummya_1731e;
db dummya_1731f;
db dummya_17320;
db dummya_17321;
db dummya_17322;
db dummya_17323;
db dummya_17324;
db dummya_17325;
db dummya_17326;
db dummya_17327;
db _volume_25908[2560]; // 15fc:1368
db _myout[6336]; // 15fc:1d68
dd dword_27bc8; // 15fc:3628
dd dword_27bcc; // 15fc:362c
db dummya_195f0[24]; // 15fc:3630
dw _segs_table[256]; // 15fc:3648
dw _myseg_size[256]; // 15fc:3848
db byte_27fe8[255]; // 15fc:3a48
db byte_280e7; // 15fc:3b47
db byte_280e8[256]; // 15fc:3b48
db byte_281e8[256]; // 15fc:3c48
db byte_282e8[32]; // 15fc:3d48
db _vlm_byte_table[33280]; // 15fc:3d68
dd _chrin; // 15fc:bf68
dd _myin; // 15fc:bf6c
db dummya_21f30;
db dummya_21f31;
db dummya_21f32;
db dummya_21f33;
db dummya_21f34;
dw word_30515; // 15fc:bf75
db _myin_0; // 15fc:bf77
dd dword_30518; // 15fc:bf78
db dummya_21f3c[4];
dw word_30520; // 15fc:bf80
db byte_30522; // 15fc:bf82
db byte_30523; // 15fc:bf83
dw word_30524; // 15fc:bf84
db byte_30526; // 15fc:bf86
db dummya_21f47[1];
db unk_30528; // 15fc:bf88
db byte_30529; // 15fc:bf89
dw word_3052a; // 15fc:bf8a
dw word_3052c; // 15fc:bf8c
db dummya_21f4e;
db dummya_21f4f;
db dummya_21f50;
db dummya_21f51;
dw word_30532; // 15fc:bf92
db dummya_21f54;
db dummya_21f55;
db dummya_21f56;
db byte_30537; // 15fc:bf97
db _my_in; // 15fc:bf98
db byte_30539; // 15fc:bf99
db byte_3053a; // 15fc:bf9a
db byte_3053b; // 15fc:bf9b
db dummya_21f5c;
db dummya_21f5d;
db dummya_21f5e;
db dummya_21f5f;
db dummya_21f60;
db dummya_21f61;
db dummya_21f62;
db dummya_21f63;
db dummya_21f64;
db dummya_21f65;
db dummya_21f66;
db dummya_21f67;
db byte_30548; // 15fc:bfa8
db dummya_21f69[1];
db unk_3054a; // 15fc:bfaa
db byte_3054b; // 15fc:bfab
db byte_3054c; // 15fc:bfac
db dummya_21f6d[3];
db byte_30550; // 15fc:bfb0
db dummya_21f71[1];
dw word_30552; // 15fc:bfb2
dw word_30554; // 15fc:bfb4
dw word_30556; // 15fc:bfb6
db dummya_21f78;
db dummya_21f79;
dd dword_3055a; // 15fc:bfba
db dummya_21f7e;
db dummya_21f7f;
db dummya_21f80;
db dummya_21f81;
dw word_30562; // 15fc:bfc2
dw word_30564; // 15fc:bfc4
dd dword_30566; // 15fc:bfc6
db dummya_21f8a;
db dummya_21f8b;
db dummya_21f8c;
db dummya_21f8d;
db dummya_21f8e;
db dummya_21f8f;
db dummya_21f90;
db dummya_21f91;
db dummya_21f92;
db dummya_21f93;
db dummya_21f94;
db dummya_21f95;
db byte_30576; // 15fc:bfd6
db byte_30577; // 15fc:bfd7
db dummya_21f98;
db byte_30579[33]; // 15fc:bfd9
db byte_3059a[95]; // 15fc:bffa
db byte_305f9[64]; // 15fc:c059
db byte_30639; // 15fc:c099
db byte_3063a; // 15fc:c09a
dw word_3063b; // 15fc:c09b
dd dword_3063d; // 15fc:c09d
db byte_30641[40]; // 15fc:c0a1
db byte_30669; // 15fc:c0c9
db byte_3066a; // 15fc:c0ca
db byte_3066b[14]; // 15fc:c0cb
db byte_30679[101]; // 15fc:c0d9
db byte_306de[480]; // 15fc:c13e
db byte_308be[74]; // 15fc:c31e
db byte_30908[56]; // 15fc:c368
db byte_30940; // 15fc:c3a0
db unk_30941; // 15fc:c3a1
db dummya_22362;
db byte_30943; // 15fc:c3a3
db dummya_22364[3012]; // 15fc:c3a4
dw in_; // 15fc:cf68
db byte_3150a; // 15fc:cf6a
db dummya_22f2b[1];
db byte_3150c[2044]; // 15fc:cf6c
db byte_31d08[6144]; // 15fc:d768
db byte_33508[4104]; // 15fc:ef68
db dummya_25f30[4096]; // 25f3:0000

#ifdef DOSBOX_CUSTOM
    db filll[1024*1024*16];
#endif
                        db stack[STACK_SIZE];
                        db heap[HEAP_SIZE];
                };
}
#pragma pack(pop)

#endif
