/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00469140
 * Name: FUN_00469140
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00469140(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint local_114;
  uint local_110 [4];
  uint auStack_100 [64];
  
  puVar3 = (undefined1 *)(param_2 + 1);
  uVar4 = 0;
  do {
    uVar11 = uVar4;
    uVar4 = uVar11 + 4;
    local_110[uVar4] = CONCAT31(CONCAT21(CONCAT11(puVar3[-1],*puVar3),puVar3[1]),puVar3[2]);
    uVar1 = puVar3[9];
    local_110[uVar11 + 5] = CONCAT31(CONCAT21(CONCAT11(puVar3[3],puVar3[4]),puVar3[5]),puVar3[6]);
    uVar2 = puVar3[0xd];
    local_110[uVar11 + 6] = CONCAT31(CONCAT21(CONCAT11(puVar3[7],puVar3[8]),uVar1),puVar3[10]);
    local_110[uVar11 + 7] = CONCAT31(CONCAT21(CONCAT11(puVar3[0xb],puVar3[0xc]),uVar2),puVar3[0xe]);
    puVar3 = puVar3 + 0x10;
  } while (uVar4 < 0x10);
  if (uVar4 < 0x40) {
    puVar7 = local_110 + uVar11 + 6;
    iVar12 = 0x40 - uVar4;
    do {
      uVar4 = puVar7[-0xd];
      uVar11 = *puVar7;
      puVar7[2] = ((uVar4 >> 0x12 | uVar4 << 0xe) ^ (uVar4 << 0x19 | uVar4 >> 7) ^ uVar4 >> 3) +
                  ((uVar11 >> 0x11 | uVar11 << 0xf) ^ (uVar11 >> 0x13 | uVar11 << 0xd) ^
                  uVar11 >> 10) + puVar7[-0xe] + puVar7[-5];
      puVar7 = puVar7 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  uVar4 = *(uint *)(param_1 + 0x4c);
  uVar11 = *(uint *)(param_1 + 0x68);
  local_110[2] = *(uint *)(param_1 + 0x54);
  local_110[1] = *(uint *)(param_1 + 0x60);
  local_110[3] = *(uint *)(param_1 + 0x58);
  uVar6 = *(uint *)(param_1 + 0x5c);
  local_110[0] = *(uint *)(param_1 + 100);
  uVar13 = 0;
  local_114 = *(uint *)(param_1 + 0x50);
  do {
    uVar5 = local_110[2];
    uVar10 = local_110[1];
    uVar8 = local_110[0];
    iVar12 = ((uVar6 << 0x15 | uVar6 >> 0xb) ^ (uVar6 << 0x1a | uVar6 >> 6) ^
             (uVar6 >> 0x19 | uVar6 << 7)) + (~uVar6 & local_110[0] ^ local_110[1] & uVar6) +
             *(int *)((int)&DAT_004ceb60 + uVar13) + *(int *)((int)local_110 + uVar13 + 0x10) +
             uVar11;
    local_110[1] = uVar6;
    local_110[0] = uVar10;
    uVar11 = iVar12 + local_110[3];
    local_110[3] = local_110[2];
    uVar9 = ((uVar4 << 0x13 | uVar4 >> 0xd) ^ (uVar4 >> 0x16 | uVar4 << 10) ^
            (uVar4 << 0x1e | uVar4 >> 2)) + ((local_114 ^ uVar4) & local_110[2] ^ local_114 & uVar4)
            + iVar12;
    local_110[2] = local_114;
    iVar12 = ((uVar11 * 0x200000 | uVar11 >> 0xb) ^ (uVar11 * 0x4000000 | uVar11 >> 6) ^
             (uVar11 >> 0x19 | uVar11 * 0x80)) + (~uVar11 & uVar10 ^ uVar6 & uVar11) +
             *(int *)((int)&DAT_004ceb64 + uVar13) + *(int *)((int)local_110 + uVar13 + 0x14) +
             uVar8;
    local_110[1] = uVar11;
    local_110[0] = uVar6;
    local_110[3] = local_114;
    uVar5 = uVar5 + iVar12;
    local_110[2] = uVar4;
    uVar8 = ((uVar9 * 0x80000 | uVar9 >> 0xd) ^ (uVar9 >> 0x16 | uVar9 * 0x400) ^
            (uVar9 * 0x40000000 | uVar9 >> 2)) + ((uVar4 ^ uVar9) & local_114 ^ uVar4 & uVar9) +
            iVar12;
    iVar12 = ((uVar5 * 0x200000 | uVar5 >> 0xb) ^ (uVar5 * 0x4000000 | uVar5 >> 6) ^
             (uVar5 >> 0x19 | uVar5 * 0x80)) + (~uVar5 & uVar6 ^ uVar11 & uVar5) +
             *(int *)((int)&DAT_004ceb68 + uVar13) + *(int *)((int)local_110 + uVar13 + 0x18) +
             uVar10;
    local_110[1] = uVar5;
    uVar10 = ((uVar8 * 0x80000 | uVar8 >> 0xd) ^ (uVar8 >> 0x16 | uVar8 * 0x400) ^
             (uVar8 * 0x40000000 | uVar8 >> 2)) + ((uVar9 ^ uVar8) & uVar4 ^ uVar9 & uVar8) + iVar12
    ;
    local_110[0] = uVar11;
    uVar11 = local_110[0];
    local_110[1] = iVar12 + local_114;
    local_110[3] = uVar4;
    local_110[2] = uVar9;
    iVar12 = ((local_110[1] * 0x200000 | local_110[1] >> 0xb) ^
              (local_110[1] * 0x4000000 | local_110[1] >> 6) ^
             (local_110[1] >> 0x19 | local_110[1] * 0x80)) +
             (~local_110[1] & uVar11 ^ uVar5 & local_110[1]) + *(int *)((int)&DAT_004ceb6c + uVar13)
             + *(int *)((int)local_110 + uVar13 + 0x1c) + uVar6;
    local_110[0] = uVar5;
    local_110[3] = uVar9;
    uVar13 = uVar13 + 0x10;
    uVar6 = uVar4 + iVar12;
    uVar4 = ((uVar10 * 0x80000 | uVar10 >> 0xd) ^ (uVar10 >> 0x16 | uVar10 * 0x400) ^
            (uVar10 * 0x40000000 | uVar10 >> 2)) + ((uVar8 ^ uVar10) & uVar9 ^ uVar8 & uVar10) +
            iVar12;
    local_110[2] = uVar8;
    local_114 = uVar10;
  } while (uVar13 < 0x100);
  *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + uVar10;
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar8;
  *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar4;
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar9;
  *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + uVar6;
  *(uint *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + local_110[1];
  *(uint *)(param_1 + 100) = *(int *)(param_1 + 100) + uVar5;
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar11;
  return;
}


/* END FUNCTION 0x00469140 */
