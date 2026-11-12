/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10062b60
 * Name: FUN_10062b60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10062b60(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar4 = param_1[3];
  uVar6 = param_1[2];
  uVar5 = param_1[1];
  uVar1 = *param_1 + -0x28955b88 + ((uVar4 ^ uVar6) & uVar5 ^ uVar4) + *param_2;
  uVar3 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar5;
  uVar1 = uVar4 + 0xe8c7b756 + ((uVar6 ^ uVar5) & uVar3 ^ uVar6) + param_2[1];
  uVar4 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar3;
  uVar1 = uVar6 + 0x242070db + ((uVar5 ^ uVar3) & uVar4 ^ uVar5) + param_2[2];
  uVar6 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar4;
  uVar1 = uVar5 + 0xc1bdceee + ((uVar4 ^ uVar3) & uVar6 ^ uVar3) + param_2[3];
  uVar7 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar6;
  uVar1 = uVar3 + 0xf57c0faf + ((uVar4 ^ uVar6) & uVar7 ^ uVar4) + param_2[4];
  uVar5 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar7;
  uVar1 = uVar4 + 0x4787c62a + ((uVar6 ^ uVar7) & uVar5 ^ uVar6) + param_2[5];
  uVar4 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar5;
  uVar1 = uVar6 + 0xa8304613 + ((uVar7 ^ uVar5) & uVar4 ^ uVar7) + param_2[6];
  uVar6 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar4;
  uVar1 = uVar7 + 0xfd469501 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + param_2[7];
  uVar3 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar6;
  uVar1 = uVar5 + 0x698098d8 + ((uVar4 ^ uVar6) & uVar3 ^ uVar4) + param_2[8];
  uVar7 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar3;
  uVar1 = uVar4 + 0x8b44f7af + ((uVar6 ^ uVar3) & uVar7 ^ uVar6) + param_2[9];
  uVar4 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar7;
  uVar1 = (uVar6 - 0xa44f) + ((uVar3 ^ uVar7) & uVar4 ^ uVar3) + param_2[10];
  uVar6 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar4;
  uVar1 = uVar3 + 0x895cd7be + ((uVar4 ^ uVar7) & uVar6 ^ uVar7) + param_2[0xb];
  uVar5 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar6;
  uVar1 = uVar7 + 0x6b901122 + ((uVar4 ^ uVar6) & uVar5 ^ uVar4) + param_2[0xc];
  uVar3 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar5;
  uVar1 = uVar4 + 0xfd987193 + ((uVar6 ^ uVar5) & uVar3 ^ uVar6) + param_2[0xd];
  uVar4 = (uVar1 >> 0x14 | uVar1 * 0x1000) + uVar3;
  uVar1 = uVar6 + 0xa679438e + ((uVar5 ^ uVar3) & uVar4 ^ uVar5) + param_2[0xe];
  uVar8 = (uVar1 >> 0xf | uVar1 * 0x20000) + uVar4;
  uVar1 = uVar5 + 0x49b40821 + ((uVar4 ^ uVar3) & uVar8 ^ uVar3) + param_2[0xf];
  uVar6 = (uVar1 * 0x400000 | uVar1 >> 10) + uVar8;
  uVar1 = uVar3 + 0xf61e2562 + ((uVar8 ^ uVar6) & uVar4 ^ uVar8) + param_2[1];
  uVar5 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar6;
  uVar4 = ((uVar6 ^ uVar5) & uVar8 ^ uVar6) + param_2[6] + -0x3fbf4cc0 + uVar4;
  uVar7 = (uVar4 >> 0x17 | uVar4 * 0x200) + uVar5;
  uVar1 = uVar8 + 0x265e5a51 + ((uVar7 ^ uVar5) & uVar6 ^ uVar5) + param_2[0xb];
  uVar3 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar7;
  uVar1 = uVar6 + 0xe9b6c7aa + ((uVar7 ^ uVar3) & uVar5 ^ uVar7) + *param_2;
  uVar8 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar3;
  uVar1 = uVar5 + 0xd62f105d + ((uVar3 ^ uVar8) & uVar7 ^ uVar3) + param_2[5];
  uVar4 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar8;
  uVar1 = uVar7 + 0x2441453 + ((uVar8 ^ uVar4) & uVar3 ^ uVar8) + param_2[10];
  uVar6 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar4;
  uVar1 = uVar3 + 0xd8a1e681 + ((uVar6 ^ uVar4) & uVar8 ^ uVar4) + param_2[0xf];
  uVar3 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar6;
  uVar1 = uVar8 + 0xe7d3fbc8 + ((uVar6 ^ uVar3) & uVar4 ^ uVar6) + param_2[4];
  uVar5 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar3;
  uVar1 = uVar4 + 0x21e1cde6 + ((uVar3 ^ uVar5) & uVar6 ^ uVar3) + param_2[9];
  uVar7 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar5;
  uVar1 = uVar6 + 0xc33707d6 + ((uVar5 ^ uVar7) & uVar3 ^ uVar5) + param_2[0xe];
  uVar4 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar7;
  uVar1 = uVar3 + 0xf4d50d87 + ((uVar4 ^ uVar7) & uVar5 ^ uVar7) + param_2[3];
  uVar6 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar4;
  uVar1 = uVar5 + 0x455a14ed + ((uVar4 ^ uVar6) & uVar7 ^ uVar4) + param_2[8];
  uVar3 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar6;
  uVar1 = uVar7 + 0xa9e3e905 + ((uVar6 ^ uVar3) & uVar4 ^ uVar6) + param_2[0xd];
  iVar2 = param_2[2];
  uVar5 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar3;
  uVar1 = uVar4 + 0xfcefa3f8 + ((uVar3 ^ uVar5) & uVar6 ^ uVar3) + iVar2;
  uVar7 = (uVar1 >> 0x17 | uVar1 * 0x200) + uVar5;
  uVar1 = uVar6 + 0x676f02d9 + ((uVar7 ^ uVar5) & uVar3 ^ uVar5) + param_2[7];
  uVar4 = (uVar1 >> 0x12 | uVar1 * 0x4000) + uVar7;
  uVar1 = uVar3 + 0x8d2a4c8a + ((uVar7 ^ uVar4) & uVar5 ^ uVar7) + param_2[0xc];
  uVar6 = (uVar1 * 0x100000 | uVar1 >> 0xc) + uVar4;
  uVar1 = (uVar5 - 0x5c6be) + (uVar7 ^ uVar4 ^ uVar6) + param_2[5];
  uVar5 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar6;
  uVar1 = uVar7 + 0x8771f681 + (uVar4 ^ uVar6 ^ uVar5) + param_2[8];
  uVar3 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar5;
  uVar4 = (uVar3 ^ uVar6 ^ uVar5) + param_2[0xb] + 0x6d9d6122 + uVar4;
  uVar7 = (uVar4 >> 0x10 | uVar4 * 0x10000) + uVar3;
  uVar1 = uVar6 + 0xfde5380c + (uVar3 ^ uVar7 ^ uVar5) + param_2[0xe];
  uVar4 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar7;
  uVar1 = uVar5 + 0xa4beea44 + (uVar3 ^ uVar7 ^ uVar4) + param_2[1];
  uVar6 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar1 = uVar3 + 0x4bdecfa9 + (uVar7 ^ uVar4 ^ uVar6) + param_2[4];
  uVar5 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar6;
  uVar1 = uVar7 + 0xf6bb4b60 + (uVar5 ^ uVar4 ^ uVar6) + param_2[7];
  uVar3 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar5;
  uVar1 = uVar4 + 0xbebfbc70 + (uVar5 ^ uVar3 ^ uVar6) + param_2[10];
  uVar4 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar3;
  uVar1 = uVar6 + 0x289b7ec6 + (uVar5 ^ uVar3 ^ uVar4) + param_2[0xd];
  uVar6 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar1 = uVar5 + 0xeaa127fa + (uVar3 ^ uVar4 ^ uVar6) + *param_2;
  uVar7 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar6;
  uVar1 = uVar3 + 0xd4ef3085 + (uVar7 ^ uVar4 ^ uVar6) + param_2[3];
  uVar5 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar7;
  uVar1 = uVar4 + 0x4881d05 + (uVar7 ^ uVar5 ^ uVar6) + param_2[6];
  uVar4 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar5;
  uVar1 = uVar6 + 0xd9d4d039 + (uVar7 ^ uVar5 ^ uVar4) + param_2[9];
  uVar6 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar1 = uVar7 + 0xe6db99e5 + (uVar5 ^ uVar4 ^ uVar6) + param_2[0xc];
  uVar3 = (uVar1 >> 0x15 | uVar1 * 0x800) + uVar6;
  uVar1 = uVar5 + 0x1fa27cf8 + (uVar3 ^ uVar4 ^ uVar6) + param_2[0xf];
  uVar5 = (uVar1 >> 0x10 | uVar1 * 0x10000) + uVar3;
  uVar1 = uVar4 + 0xc4ac5665 + (uVar3 ^ uVar5 ^ uVar6) + iVar2;
  uVar4 = (uVar1 * 0x800000 | uVar1 >> 9) + uVar5;
  uVar1 = uVar6 + 0xf4292244 + ((~uVar3 | uVar4) ^ uVar5) + *param_2;
  uVar6 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar1 = uVar3 + 0x432aff97 + ((~uVar5 | uVar6) ^ uVar4) + param_2[7];
  uVar3 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar6;
  uVar1 = uVar5 + 0xab9423a7 + ((~uVar4 | uVar3) ^ uVar6) + param_2[0xe];
  uVar7 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar3;
  uVar1 = uVar4 + 0xfc93a039 + ((~uVar6 | uVar7) ^ uVar3) + param_2[5];
  uVar4 = (uVar1 * 0x200000 | uVar1 >> 0xb) + uVar7;
  uVar1 = uVar6 + 0x655b59c3 + ((~uVar3 | uVar4) ^ uVar7) + param_2[0xc];
  uVar5 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar1 = uVar3 + 0x8f0ccc92 + ((~uVar7 | uVar5) ^ uVar4) + param_2[3];
  uVar3 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar5;
  uVar1 = (uVar7 - 0x100b83) + ((~uVar4 | uVar3) ^ uVar5) + param_2[10];
  uVar7 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar3;
  uVar1 = uVar4 + 0x85845dd1 + ((~uVar5 | uVar7) ^ uVar3) + param_2[1];
  uVar6 = (uVar1 * 0x200000 | uVar1 >> 0xb) + uVar7;
  uVar1 = uVar5 + 0x6fa87e4f + ((~uVar3 | uVar6) ^ uVar7) + param_2[8];
  uVar5 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar6;
  uVar1 = uVar3 + 0xfe2ce6e0 + ((~uVar7 | uVar5) ^ uVar6) + param_2[0xf];
  uVar4 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar5;
  uVar1 = uVar7 + 0xa3014314 + ((~uVar6 | uVar4) ^ uVar5) + param_2[6];
  uVar3 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar4;
  uVar1 = uVar6 + 0x4e0811a1 + ((~uVar5 | uVar3) ^ uVar4) + param_2[0xd];
  uVar6 = (uVar1 * 0x200000 | uVar1 >> 0xb) + uVar3;
  uVar1 = uVar5 + 0xf7537e82 + ((~uVar4 | uVar6) ^ uVar3) + param_2[4];
  uVar5 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar6;
  uVar1 = uVar4 + 0xbd3af235 + ((~uVar3 | uVar5) ^ uVar6) + param_2[0xb];
  uVar7 = (uVar1 >> 0x16 | uVar1 * 0x400) + uVar5;
  uVar1 = uVar3 + 0x2ad7d2bb + ((~uVar6 | uVar7) ^ uVar5) + iVar2;
  uVar4 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar7;
  uVar1 = uVar6 + 0xeb86d391 + ((~uVar5 | uVar4) ^ uVar7) + param_2[9];
  *param_1 = *param_1 + uVar5;
  param_1[2] = param_1[2] + uVar4;
  param_1[1] = (uVar1 * 0x200000 | uVar1 >> 0xb) + param_1[1] + uVar4;
  param_1[3] = param_1[3] + uVar7;
  return;
}


/* END FUNCTION 0x10062b60 */
