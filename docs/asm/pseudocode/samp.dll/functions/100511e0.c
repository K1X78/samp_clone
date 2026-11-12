/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100511e0
 * Name: FUN_100511e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100511e0(int param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  
  puVar1 = (uint *)(param_1 + 0x74);
  puVar25 = puVar1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar25 = *param_3;
    param_3 = param_3 + 1;
    puVar25 = puVar25 + 1;
  }
  uVar23 = *puVar1;
  uVar21 = param_2[1];
  uVar22 = *param_2;
  uVar3 = uVar23 << 0x18 | uVar23 >> 8 & 0xff00ff00 | (uVar23 & 0xff00) << 8 | uVar23 >> 0x18;
  uVar20 = *(uint *)(param_1 + 0x78);
  uVar23 = param_2[4] + 0x5a827999 +
           ((param_2[3] ^ param_2[2]) & uVar21 ^ param_2[3]) +
           (uVar22 >> 0x1b | uVar22 << 5) + uVar3;
  uVar7 = uVar21 << 0x1e | uVar21 >> 2;
  uVar4 = uVar20 << 0x18 | uVar20 >> 8 & 0xff00ff00 | (uVar20 & 0xff00) << 8 | uVar20 >> 0x18;
  uVar21 = param_2[3] + 0x5a827999 +
           ((param_2[2] ^ uVar7) & uVar22 ^ param_2[2]) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar4;
  uVar8 = uVar22 << 0x1e | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0x7c);
  uVar5 = uVar22 << 0x18 | uVar22 >> 8 & 0xff00ff00 | (uVar22 & 0xff00) << 8 | uVar22 >> 0x18;
  uVar20 = *(uint *)(param_1 + 0x80);
  uVar22 = param_2[2] + 0x5a827999 +
           ((uVar7 ^ uVar8) & uVar23 ^ uVar7) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar5;
  uVar9 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar6 = uVar20 << 0x18 | uVar20 >> 8 & 0xff00ff00 | (uVar20 & 0xff00) << 8 | uVar20 >> 0x18;
  uVar23 = uVar7 + 0x5a827999 +
           ((uVar9 ^ uVar8) & uVar21 ^ uVar8) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar6;
  uVar10 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0x84);
  uVar7 = uVar21 << 0x18 | uVar21 >> 8 & 0xff00ff00 | (uVar21 & 0xff00) << 8 | uVar21 >> 0x18;
  uVar20 = *(uint *)(param_1 + 0x88);
  uVar21 = uVar8 + 0x5a827999 +
           ((uVar9 ^ uVar10) & uVar22 ^ uVar9) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar7;
  uVar11 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar8 = uVar20 << 0x18 | uVar20 >> 8 & 0xff00ff00 | (uVar20 & 0xff00) << 8 | uVar20 >> 0x18;
  uVar22 = uVar9 + 0x5a827999 +
           ((uVar10 ^ uVar11) & uVar23 ^ uVar10) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar8;
  uVar12 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0x8c);
  uVar9 = uVar23 << 0x18 | uVar23 >> 8 & 0xff00ff00 | (uVar23 & 0xff00) << 8 | uVar23 >> 0x18;
  uVar23 = uVar10 + 0x5a827999 +
           ((uVar11 ^ uVar12) & uVar21 ^ uVar11) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar9;
  uVar20 = *(uint *)(param_1 + 0x90);
  uVar13 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar10 = uVar20 << 0x18 | uVar20 >> 8 & 0xff00ff00 | (uVar20 & 0xff00) << 8 | uVar20 >> 0x18;
  uVar21 = uVar11 + 0x5a827999 +
           ((uVar12 ^ uVar13) & uVar22 ^ uVar12) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar10;
  uVar14 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0x94);
  uVar11 = uVar22 << 0x18 | uVar22 >> 8 & 0xff00ff00 | (uVar22 & 0xff00) << 8 | uVar22 >> 0x18;
  uVar22 = uVar12 + 0x5a827999 +
           ((uVar14 ^ uVar13) & uVar23 ^ uVar13) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar11;
  uVar20 = *(uint *)(param_1 + 0x98);
  uVar15 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar12 = uVar20 << 0x18 | uVar20 >> 8 & 0xff00ff00 | (uVar20 & 0xff00) << 8 | uVar20 >> 0x18;
  uVar23 = uVar13 + 0x5a827999 +
           ((uVar14 ^ uVar15) & uVar21 ^ uVar14) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar12;
  uVar16 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0x9c);
  uVar13 = uVar21 << 0x18 | uVar21 >> 8 & 0xff00ff00 | (uVar21 & 0xff00) << 8 | uVar21 >> 0x18;
  uVar20 = *(uint *)(param_1 + 0xa0);
  uVar21 = uVar14 + 0x5a827999 +
           ((uVar15 ^ uVar16) & uVar22 ^ uVar15) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar13;
  uVar17 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar14 = uVar20 << 0x18 | uVar20 >> 8 & 0xff00ff00 | (uVar20 & 0xff00) << 8 | uVar20 >> 0x18;
  uVar22 = uVar15 + 0x5a827999 +
           ((uVar16 ^ uVar17) & uVar23 ^ uVar16) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar14;
  uVar18 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0xa4);
  uVar15 = uVar23 << 0x18 | uVar23 >> 8 & 0xff00ff00 | (uVar23 & 0xff00) << 8 | uVar23 >> 0x18;
  uVar20 = *(uint *)(param_1 + 0xa8);
  uVar23 = uVar16 + 0x5a827999 +
           ((uVar17 ^ uVar18) & uVar21 ^ uVar17) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar15;
  uVar19 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar16 = uVar20 << 0x18 | uVar20 >> 8 & 0xff00ff00 | (uVar20 & 0xff00) << 8 | uVar20 >> 0x18;
  uVar21 = uVar17 + 0x5a827999 +
           ((uVar19 ^ uVar18) & uVar22 ^ uVar18) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar16;
  uVar20 = *(uint *)(param_1 + 0xac);
  uVar17 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar24 = uVar20 << 0x18 | uVar20 >> 8 & 0xff00ff00 | (uVar20 & 0xff00) << 8 | uVar20 >> 0x18;
  uVar22 = uVar18 + 0x5a827999 +
           ((uVar19 ^ uVar17) & uVar23 ^ uVar19) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar24;
  uVar18 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0xb0);
  uVar26 = uVar23 << 0x18 | uVar23 >> 8 & 0xff00ff00 | (uVar23 & 0xff00) << 8 | uVar23 >> 0x18;
  uVar23 = uVar19 + 0x5a827999 +
           ((uVar17 ^ uVar18) & uVar21 ^ uVar17) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar26;
  uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar3 = uVar16 ^ uVar11 ^ uVar5 ^ uVar3;
  uVar21 = uVar3 >> 0x1f | uVar3 * 2;
  *puVar1 = uVar21;
  uVar21 = uVar17 + 0x5a827999 +
           ((uVar18 ^ uVar20) & uVar22 ^ uVar18) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar21;
  uVar3 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar4 = uVar24 ^ uVar12 ^ uVar6 ^ uVar4;
  uVar22 = uVar4 >> 0x1f | uVar4 * 2;
  *(uint *)(param_1 + 0x78) = uVar22;
  uVar22 = uVar18 + 0x5a827999 +
           ((uVar20 ^ uVar3) & uVar23 ^ uVar20) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar22;
  uVar4 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar5 = uVar26 ^ uVar13 ^ uVar7 ^ uVar5;
  uVar23 = uVar5 >> 0x1f | uVar5 * 2;
  *(uint *)(param_1 + 0x7c) = uVar23;
  uVar23 = uVar20 + 0x5a827999 +
           ((uVar4 ^ uVar3) & uVar21 ^ uVar3) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = uVar14 ^ uVar8 ^ uVar6 ^ *puVar1;
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0x80) = uVar21;
  uVar21 = uVar3 + 0x5a827999 +
           ((uVar4 ^ uVar20) & uVar22 ^ uVar4) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar21;
  uVar3 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = uVar15 ^ uVar9 ^ uVar7 ^ *(uint *)(param_1 + 0x78);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0x84) = uVar22;
  uVar22 = uVar4 + 0x6ed9eba1 +
           (uVar20 ^ uVar3 ^ uVar23) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar22;
  uVar4 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar8 = *(uint *)(param_1 + 0x7c) ^ uVar16 ^ uVar10 ^ uVar8;
  uVar23 = uVar8 >> 0x1f | uVar8 * 2;
  *(uint *)(param_1 + 0x88) = uVar23;
  uVar23 = uVar20 + 0x6ed9eba1 +
           (uVar3 ^ uVar4 ^ uVar21) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar9 = *(uint *)(param_1 + 0x80) ^ uVar24 ^ uVar11 ^ uVar9;
  uVar21 = uVar9 >> 0x1f | uVar9 * 2;
  *(uint *)(param_1 + 0x8c) = uVar21;
  uVar21 = uVar3 + 0x6ed9eba1 +
           (uVar22 ^ uVar4 ^ uVar20) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar21;
  uVar3 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = uVar26 ^ uVar12 ^ uVar10 ^ *(uint *)(param_1 + 0x84);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0x90) = uVar22;
  uVar22 = uVar4 + 0x6ed9eba1 +
           (uVar3 ^ uVar23 ^ uVar20) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar22;
  uVar4 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = uVar13 ^ uVar11 ^ *(uint *)(param_1 + 0x88) ^ *puVar1;
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0x94) = uVar23;
  uVar23 = uVar20 + 0x6ed9eba1 +
           (uVar3 ^ uVar4 ^ uVar21) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = uVar14 ^ uVar12 ^ *(uint *)(param_1 + 0x78) ^ *(uint *)(param_1 + 0x8c);
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0x98) = uVar21;
  uVar21 = uVar3 + 0x6ed9eba1 +
           (uVar4 ^ uVar20 ^ uVar22) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar21;
  uVar3 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0x90) ^ uVar15 ^ uVar13 ^ *(uint *)(param_1 + 0x7c);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0x9c) = uVar22;
  uVar22 = uVar4 + 0x6ed9eba1 +
           (uVar20 ^ uVar3 ^ uVar23) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar22;
  uVar4 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0x80) ^ uVar16 ^ uVar14 ^ *(uint *)(param_1 + 0x94);
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0xa0) = uVar23;
  uVar23 = uVar20 + 0x6ed9eba1 +
           (uVar21 ^ uVar3 ^ uVar4) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = uVar24 ^ uVar15 ^ *(uint *)(param_1 + 0x98) ^ *(uint *)(param_1 + 0x84);
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0xa4) = uVar21;
  uVar21 = uVar3 + 0x6ed9eba1 +
           (uVar20 ^ uVar22 ^ uVar4) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar21;
  uVar5 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = uVar26 ^ uVar16 ^ *(uint *)(param_1 + 0x88) ^ *(uint *)(param_1 + 0x9c);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0xa8) = uVar22;
  uVar22 = uVar4 + 0x6ed9eba1 +
           (uVar20 ^ uVar5 ^ uVar23) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar22;
  uVar4 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0xa0) ^ uVar24 ^ *puVar1 ^ *(uint *)(param_1 + 0x8c);
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0xac) = uVar23;
  uVar23 = uVar20 + 0x6ed9eba1 +
           (uVar5 ^ uVar4 ^ uVar21) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0x90) ^ uVar26 ^ *(uint *)(param_1 + 0xa4) ^
           *(uint *)(param_1 + 0x78);
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0xb0) = uVar21;
  uVar3 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar21 = uVar5 + 0x6ed9eba1 +
           (uVar4 ^ uVar20 ^ uVar22) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar21;
  uVar22 = *(uint *)(param_1 + 0x94) ^ *(uint *)(param_1 + 0x7c) ^ *(uint *)(param_1 + 0xa8) ^
           *puVar1;
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *puVar1 = uVar22;
  uVar22 = uVar4 + 0x6ed9eba1 +
           (uVar23 ^ uVar20 ^ uVar3) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar22;
  uVar4 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0x80) ^ *(uint *)(param_1 + 0x98) ^ *(uint *)(param_1 + 0x78) ^
           *(uint *)(param_1 + 0xac);
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0x78) = uVar23;
  uVar23 = uVar20 + 0x6ed9eba1 +
           (uVar4 ^ uVar21 ^ uVar3) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0xb0) ^ *(uint *)(param_1 + 0x7c) ^ *(uint *)(param_1 + 0x9c) ^
           *(uint *)(param_1 + 0x84);
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0x7c) = uVar21;
  uVar21 = uVar3 + 0x6ed9eba1 +
           (uVar4 ^ uVar20 ^ uVar22) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar21;
  uVar3 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0xa0) ^ *(uint *)(param_1 + 0x80) ^ *(uint *)(param_1 + 0x88) ^
           *puVar1;
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0x80) = uVar22;
  uVar22 = uVar4 + 0x6ed9eba1 +
           (uVar20 ^ uVar3 ^ uVar23) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar22;
  uVar4 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0xa4) ^ *(uint *)(param_1 + 0x78) ^ *(uint *)(param_1 + 0x8c) ^
           *(uint *)(param_1 + 0x84);
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0x84) = uVar23;
  uVar23 = uVar20 + 0x6ed9eba1 +
           (uVar3 ^ uVar4 ^ uVar21) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0x90) ^ *(uint *)(param_1 + 0x7c) ^ *(uint *)(param_1 + 0xa8) ^
           *(uint *)(param_1 + 0x88);
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0x88) = uVar21;
  uVar21 = uVar3 + 0x6ed9eba1 +
           (uVar22 ^ uVar4 ^ uVar20) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar21;
  uVar5 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0x80) ^ *(uint *)(param_1 + 0x94) ^ *(uint *)(param_1 + 0xac) ^
           *(uint *)(param_1 + 0x8c);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0x8c) = uVar22;
  uVar22 = uVar4 + 0x6ed9eba1 +
           (uVar5 ^ uVar23 ^ uVar20) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar22;
  uVar3 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0xb0) ^ *(uint *)(param_1 + 0x90) ^ *(uint *)(param_1 + 0x98) ^
           *(uint *)(param_1 + 0x84);
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0x90) = uVar23;
  uVar23 = uVar20 + 0x6ed9eba1 +
           (uVar5 ^ uVar3 ^ uVar21) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0x94) ^ *(uint *)(param_1 + 0x88) ^ *puVar1 ^
           *(uint *)(param_1 + 0x9c);
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0x94) = uVar21;
  uVar21 = uVar5 + 0x8f1bbcdc +
           (uVar23 >> 0x1b | uVar23 * 0x20) + ((uVar20 | uVar22) & uVar3 | uVar20 & uVar22) + uVar21
  ;
  uVar4 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0xa0) ^ *(uint *)(param_1 + 0x98) ^ *(uint *)(param_1 + 0x78) ^
           *(uint *)(param_1 + 0x8c);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0x98) = uVar22;
  uVar22 = uVar3 + 0x8f1bbcdc +
           (uVar21 >> 0x1b | uVar21 * 0x20) + ((uVar4 | uVar23) & uVar20 | uVar4 & uVar23) + uVar22;
  uVar3 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0x90) ^ *(uint *)(param_1 + 0xa4) ^ *(uint *)(param_1 + 0x7c) ^
           *(uint *)(param_1 + 0x9c);
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0x9c) = uVar23;
  uVar23 = uVar20 + 0x8f1bbcdc +
           (uVar22 >> 0x1b | uVar22 * 0x20) + ((uVar21 | uVar3) & uVar4 | uVar21 & uVar3) + uVar23;
  uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0xa0) ^ *(uint *)(param_1 + 0x80) ^ *(uint *)(param_1 + 0x94) ^
           *(uint *)(param_1 + 0xa8);
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0xa0) = uVar21;
  uVar21 = uVar4 + 0x8f1bbcdc +
           (uVar23 >> 0x1b | uVar23 * 0x20) + ((uVar20 | uVar22) & uVar3 | uVar20 & uVar22) + uVar21
  ;
  uVar4 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0xa4) ^ *(uint *)(param_1 + 0x98) ^ *(uint *)(param_1 + 0xac) ^
           *(uint *)(param_1 + 0x84);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0xa4) = uVar22;
  uVar22 = uVar3 + 0x8f1bbcdc +
           (uVar21 >> 0x1b | uVar21 * 0x20) + ((uVar4 | uVar23) & uVar20 | uVar4 & uVar23) + uVar22;
  uVar3 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0xb0) ^ *(uint *)(param_1 + 0xa8) ^ *(uint *)(param_1 + 0x88) ^
           *(uint *)(param_1 + 0x9c);
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0xa8) = uVar23;
  uVar23 = uVar20 + 0x8f1bbcdc +
           (uVar22 >> 0x1b | uVar22 * 0x20) + ((uVar3 | uVar21) & uVar4 | uVar3 & uVar21) + uVar23;
  uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0xa0) ^ *puVar1 ^ *(uint *)(param_1 + 0xac) ^
           *(uint *)(param_1 + 0x8c);
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0xac) = uVar21;
  uVar21 = uVar4 + 0x8f1bbcdc +
           (uVar23 >> 0x1b | uVar23 * 0x20) + ((uVar20 | uVar22) & uVar3 | uVar20 & uVar22) + uVar21
  ;
  uVar4 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0xb0) ^ *(uint *)(param_1 + 0x90) ^ *(uint *)(param_1 + 0xa4) ^
           *(uint *)(param_1 + 0x78);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0xb0) = uVar22;
  uVar22 = uVar3 + 0x8f1bbcdc +
           (uVar21 >> 0x1b | uVar21 * 0x20) + ((uVar23 | uVar4) & uVar20 | uVar23 & uVar4) + uVar22;
  uVar3 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0x94) ^ *(uint *)(param_1 + 0x7c) ^ *(uint *)(param_1 + 0xa8) ^
           *puVar1;
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *puVar1 = uVar23;
  uVar23 = uVar20 + 0x8f1bbcdc +
           (uVar22 >> 0x1b | uVar22 * 0x20) + ((uVar3 | uVar21) & uVar4 | uVar3 & uVar21) + uVar23;
  uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0x80) ^ *(uint *)(param_1 + 0x98) ^ *(uint *)(param_1 + 0x78) ^
           *(uint *)(param_1 + 0xac);
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0x78) = uVar21;
  uVar21 = uVar4 + 0x8f1bbcdc +
           (uVar23 >> 0x1b | uVar23 * 0x20) + ((uVar20 | uVar22) & uVar3 | uVar20 & uVar22) + uVar21
  ;
  uVar4 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0xb0) ^ *(uint *)(param_1 + 0x7c) ^ *(uint *)(param_1 + 0x9c) ^
           *(uint *)(param_1 + 0x84);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0x7c) = uVar22;
  uVar22 = uVar3 + 0x8f1bbcdc +
           (uVar21 >> 0x1b | uVar21 * 0x20) + ((uVar4 | uVar23) & uVar20 | uVar4 & uVar23) + uVar22;
  uVar3 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0xa0) ^ *(uint *)(param_1 + 0x80) ^ *(uint *)(param_1 + 0x88) ^
           *puVar1;
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0x80) = uVar23;
  uVar23 = uVar20 + 0x8f1bbcdc +
           (uVar22 >> 0x1b | uVar22 * 0x20) + ((uVar3 | uVar21) & uVar4 | uVar3 & uVar21) + uVar23;
  uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0xa4) ^ *(uint *)(param_1 + 0x78) ^ *(uint *)(param_1 + 0x8c) ^
           *(uint *)(param_1 + 0x84);
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0x84) = uVar21;
  uVar21 = uVar4 + 0x8f1bbcdc +
           (uVar23 >> 0x1b | uVar23 * 0x20) + ((uVar22 | uVar20) & uVar3 | uVar22 & uVar20) + uVar21
  ;
  uVar4 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0x90) ^ *(uint *)(param_1 + 0x7c) ^ *(uint *)(param_1 + 0xa8) ^
           *(uint *)(param_1 + 0x88);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0x88) = uVar22;
  uVar22 = uVar3 + 0x8f1bbcdc +
           (uVar21 >> 0x1b | uVar21 * 0x20) + ((uVar4 | uVar23) & uVar20 | uVar4 & uVar23) + uVar22;
  uVar3 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0x80) ^ *(uint *)(param_1 + 0x94) ^ *(uint *)(param_1 + 0xac) ^
           *(uint *)(param_1 + 0x8c);
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0x8c) = uVar23;
  uVar23 = uVar20 + 0x8f1bbcdc +
           (uVar22 >> 0x1b | uVar22 * 0x20) + ((uVar3 | uVar21) & uVar4 | uVar3 & uVar21) + uVar23;
  uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0xb0) ^ *(uint *)(param_1 + 0x90) ^ *(uint *)(param_1 + 0x98) ^
           *(uint *)(param_1 + 0x84);
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0x90) = uVar21;
  uVar21 = uVar4 + 0x8f1bbcdc +
           (uVar23 >> 0x1b | uVar23 * 0x20) + ((uVar20 | uVar22) & uVar3 | uVar20 & uVar22) + uVar21
  ;
  uVar4 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0x94) ^ *(uint *)(param_1 + 0x88) ^ *puVar1 ^
           *(uint *)(param_1 + 0x9c);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0x94) = uVar22;
  uVar22 = uVar3 + 0x8f1bbcdc +
           (uVar21 >> 0x1b | uVar21 * 0x20) + ((uVar4 | uVar23) & uVar20 | uVar4 & uVar23) + uVar22;
  uVar3 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0xa0) ^ *(uint *)(param_1 + 0x98) ^ *(uint *)(param_1 + 0x78) ^
           *(uint *)(param_1 + 0x8c);
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0x98) = uVar23;
  uVar23 = uVar20 + 0x8f1bbcdc +
           (uVar22 >> 0x1b | uVar22 * 0x20) + ((uVar21 | uVar3) & uVar4 | uVar21 & uVar3) + uVar23;
  uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0x90) ^ *(uint *)(param_1 + 0xa4) ^ *(uint *)(param_1 + 0x7c) ^
           *(uint *)(param_1 + 0x9c);
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0x9c) = uVar21;
  uVar21 = uVar4 + 0x8f1bbcdc +
           (uVar23 >> 0x1b | uVar23 * 0x20) + ((uVar20 | uVar22) & uVar3 | uVar20 & uVar22) + uVar21
  ;
  uVar4 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0xa0) ^ *(uint *)(param_1 + 0x80) ^ *(uint *)(param_1 + 0x94) ^
           *(uint *)(param_1 + 0xa8);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0xa0) = uVar22;
  uVar22 = uVar3 + 0x8f1bbcdc +
           (uVar21 >> 0x1b | uVar21 * 0x20) + ((uVar4 | uVar23) & uVar20 | uVar4 & uVar23) + uVar22;
  uVar3 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0xa4) ^ *(uint *)(param_1 + 0x98) ^ *(uint *)(param_1 + 0xac) ^
           *(uint *)(param_1 + 0x84);
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0xa4) = uVar23;
  uVar23 = uVar20 + 0xca62c1d6 +
           (uVar4 ^ uVar3 ^ uVar21) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar5 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0xb0) ^ *(uint *)(param_1 + 0xa8) ^ *(uint *)(param_1 + 0x88) ^
           *(uint *)(param_1 + 0x9c);
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0xa8) = uVar21;
  uVar21 = uVar4 + 0xca62c1d6 + (uVar3 ^ uVar5 ^ uVar22) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar21
  ;
  uVar20 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0xa0) ^ *puVar1 ^ *(uint *)(param_1 + 0xac) ^
           *(uint *)(param_1 + 0x8c);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0xac) = uVar22;
  uVar22 = uVar3 + 0xca62c1d6 +
           (uVar23 ^ uVar5 ^ uVar20) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar22;
  uVar3 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0xb0) ^ *(uint *)(param_1 + 0x90) ^ *(uint *)(param_1 + 0xa4) ^
           *(uint *)(param_1 + 0x78);
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0xb0) = uVar23;
  uVar23 = uVar5 + 0xca62c1d6 +
           (uVar3 ^ uVar21 ^ uVar20) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar4 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0x94) ^ *(uint *)(param_1 + 0x7c) ^ *(uint *)(param_1 + 0xa8) ^
           *puVar1;
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *puVar1 = uVar21;
  uVar21 = uVar20 + 0xca62c1d6 +
           (uVar3 ^ uVar4 ^ uVar22) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar21;
  uVar5 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0x80) ^ *(uint *)(param_1 + 0x98) ^ *(uint *)(param_1 + 0x78) ^
           *(uint *)(param_1 + 0xac);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0x78) = uVar22;
  uVar22 = uVar3 + 0xca62c1d6 + (uVar4 ^ uVar5 ^ uVar23) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar22
  ;
  uVar3 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0xb0) ^ *(uint *)(param_1 + 0x7c) ^ *(uint *)(param_1 + 0x9c) ^
           *(uint *)(param_1 + 0x84);
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0x7c) = uVar23;
  uVar23 = uVar4 + 0xca62c1d6 + (uVar5 ^ uVar3 ^ uVar21) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23
  ;
  uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0xa0) ^ *(uint *)(param_1 + 0x80) ^ *(uint *)(param_1 + 0x88) ^
           *puVar1;
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0x80) = uVar21;
  uVar21 = uVar5 + 0xca62c1d6 +
           (uVar22 ^ uVar3 ^ uVar20) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar21;
  uVar4 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0xa4) ^ *(uint *)(param_1 + 0x78) ^ *(uint *)(param_1 + 0x8c) ^
           *(uint *)(param_1 + 0x84);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0x84) = uVar22;
  uVar22 = uVar3 + 0xca62c1d6 +
           (uVar4 ^ uVar23 ^ uVar20) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar22;
  uVar3 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0x90) ^ *(uint *)(param_1 + 0x7c) ^ *(uint *)(param_1 + 0xa8) ^
           *(uint *)(param_1 + 0x88);
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0x88) = uVar23;
  uVar23 = uVar20 + 0xca62c1d6 +
           (uVar4 ^ uVar3 ^ uVar21) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar5 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0x80) ^ *(uint *)(param_1 + 0x94) ^ *(uint *)(param_1 + 0xac) ^
           *(uint *)(param_1 + 0x8c);
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0x8c) = uVar21;
  uVar21 = uVar4 + 0xca62c1d6 + (uVar3 ^ uVar5 ^ uVar22) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar21
  ;
  uVar4 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0xb0) ^ *(uint *)(param_1 + 0x90) ^ *(uint *)(param_1 + 0x98) ^
           *(uint *)(param_1 + 0x84);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0x90) = uVar22;
  uVar22 = uVar3 + 0xca62c1d6 + (uVar5 ^ uVar4 ^ uVar23) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar22
  ;
  uVar20 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0x94) ^ *(uint *)(param_1 + 0x88) ^ *puVar1 ^
           *(uint *)(param_1 + 0x9c);
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0x94) = uVar23;
  uVar23 = uVar5 + 0xca62c1d6 +
           (uVar21 ^ uVar4 ^ uVar20) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar3 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0xa0) ^ *(uint *)(param_1 + 0x98) ^ *(uint *)(param_1 + 0x78) ^
           *(uint *)(param_1 + 0x8c);
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0x98) = uVar21;
  uVar21 = uVar4 + 0xca62c1d6 +
           (uVar3 ^ uVar22 ^ uVar20) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar21;
  uVar4 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0x90) ^ *(uint *)(param_1 + 0xa4) ^ *(uint *)(param_1 + 0x7c) ^
           *(uint *)(param_1 + 0x9c);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0x9c) = uVar22;
  uVar22 = uVar20 + 0xca62c1d6 +
           (uVar3 ^ uVar4 ^ uVar23) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar22;
  uVar5 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0xa0) ^ *(uint *)(param_1 + 0x80) ^ *(uint *)(param_1 + 0x94) ^
           *(uint *)(param_1 + 0xa8);
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0xa0) = uVar23;
  uVar23 = uVar3 + 0xca62c1d6 + (uVar4 ^ uVar5 ^ uVar21) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23
  ;
  uVar3 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0xa4) ^ *(uint *)(param_1 + 0x98) ^ *(uint *)(param_1 + 0xac) ^
           *(uint *)(param_1 + 0x84);
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0xa4) = uVar21;
  uVar21 = uVar4 + 0xca62c1d6 + (uVar5 ^ uVar3 ^ uVar22) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar21
  ;
  uVar20 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = *(uint *)(param_1 + 0xb0) ^ *(uint *)(param_1 + 0xa8) ^ *(uint *)(param_1 + 0x88) ^
           *(uint *)(param_1 + 0x9c);
  uVar22 = uVar22 >> 0x1f | uVar22 * 2;
  *(uint *)(param_1 + 0xa8) = uVar22;
  uVar22 = uVar5 + 0xca62c1d6 +
           (uVar23 ^ uVar3 ^ uVar20) + (uVar21 >> 0x1b | uVar21 * 0x20) + uVar22;
  uVar4 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar23 = *(uint *)(param_1 + 0xa0) ^ *puVar1 ^ *(uint *)(param_1 + 0xac) ^
           *(uint *)(param_1 + 0x8c);
  uVar23 = uVar23 >> 0x1f | uVar23 * 2;
  *(uint *)(param_1 + 0xac) = uVar23;
  uVar23 = uVar3 + 0xca62c1d6 +
           (uVar4 ^ uVar21 ^ uVar20) + (uVar22 >> 0x1b | uVar22 * 0x20) + uVar23;
  uVar3 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = *(uint *)(param_1 + 0xb0) ^ *(uint *)(param_1 + 0x90) ^ *(uint *)(param_1 + 0xa4) ^
           *(uint *)(param_1 + 0x78);
  uVar21 = uVar21 >> 0x1f | uVar21 * 2;
  *(uint *)(param_1 + 0xb0) = uVar21;
  *param_2 = *param_2 +
             uVar20 + 0xca62c1d6 +
             (uVar4 ^ uVar3 ^ uVar22) + (uVar23 >> 0x1b | uVar23 * 0x20) + uVar21;
  param_2[1] = param_2[1] + uVar23;
  param_2[3] = param_2[3] + uVar3;
  param_2[2] = param_2[2] + (uVar22 * 0x40000000 | uVar22 >> 2);
  param_2[4] = param_2[4] + uVar4;
  return;
}


/* END FUNCTION 0x100511e0 */
