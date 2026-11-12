/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100635f0
 * Name: FUN_100635f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100635f0(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_14c [83];
  
  puVar3 = (undefined1 *)(param_1 + 0x21);
  iVar6 = 0;
  do {
    iVar7 = iVar6 + 4;
    local_14c[iVar6 + 3] = CONCAT31(CONCAT21(CONCAT11(puVar3[-1],*puVar3),puVar3[1]),puVar3[2]);
    uVar1 = puVar3[9];
    local_14c[iVar7] = CONCAT31(CONCAT21(CONCAT11(puVar3[3],puVar3[4]),puVar3[5]),puVar3[6]);
    uVar2 = puVar3[0xd];
    local_14c[iVar6 + 5] = CONCAT31(CONCAT21(CONCAT11(puVar3[7],puVar3[8]),uVar1),puVar3[10]);
    local_14c[iVar6 + 6] = CONCAT31(CONCAT21(CONCAT11(puVar3[0xb],puVar3[0xc]),uVar2),puVar3[0xe]);
    puVar3 = puVar3 + 0x10;
    iVar6 = iVar7;
  } while (iVar7 < 0x10);
  puVar4 = (uint *)(local_14c + 0xb);
  iVar6 = 0x10;
  do {
    uVar8 = puVar4[-8] ^ puVar4[5] ^ puVar4[-6] ^ *puVar4;
    puVar4[8] = uVar8 >> 0x1f | uVar8 * 2;
    uVar8 = puVar4[-7] ^ puVar4[6] ^ puVar4[1] ^ puVar4[-5];
    puVar4[9] = uVar8 >> 0x1f | uVar8 * 2;
    uVar8 = puVar4[7] ^ puVar4[-4] ^ puVar4[2] ^ puVar4[-6];
    puVar4[10] = uVar8 >> 0x1f | uVar8 * 2;
    uVar8 = puVar4[-3] ^ puVar4[3] ^ puVar4[-5] ^ puVar4[8];
    puVar4[0xb] = uVar8 >> 0x1f | uVar8 * 2;
    puVar4 = puVar4 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar9 = *(uint *)(param_1 + 4);
  uVar8 = *(uint *)(param_1 + 8);
  uVar5 = *(uint *)(param_1 + 0xc);
  uVar10 = *(uint *)(param_1 + 0x10);
  local_14c[1] = *(uint *)(param_1 + 0x14);
  local_14c[0] = 0;
  do {
    local_14c[1] = (~uVar8 & uVar10 | uVar5 & uVar8) + (uVar9 >> 0x1b | uVar9 << 5) +
                   local_14c[local_14c[0] + 3] + 0x5a827999 + local_14c[1];
    uVar8 = uVar8 << 0x1e | uVar8 >> 2;
    uVar10 = (~uVar9 & uVar5 | uVar8 & uVar9) + ((uint)local_14c[1] >> 0x1b | local_14c[1] * 0x20) +
             local_14c[local_14c[0] + 4] + 0x5a827999 + uVar10;
    uVar9 = uVar9 << 0x1e | uVar9 >> 2;
    uVar5 = (~local_14c[1] & uVar8 | uVar9 & local_14c[1]) + (uVar10 >> 0x1b | uVar10 * 0x20) +
            local_14c[local_14c[0] + 5] + 0x5a827999 + uVar5;
    local_14c[1] = local_14c[1] * 0x40000000 | (uint)local_14c[1] >> 2;
    uVar8 = (~uVar10 & uVar9 | local_14c[1] & uVar10) + (uVar5 >> 0x1b | uVar5 * 0x20) +
            local_14c[local_14c[0] + 6] + 0x5a827999 + uVar8;
    uVar10 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar9 = (~uVar5 & local_14c[1] | uVar10 & uVar5) + (uVar8 >> 0x1b | uVar8 * 0x20) +
            local_14c[local_14c[0] + 7] + 0x5a827999 + uVar9;
    uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
    local_14c[0] = local_14c[0] + 5;
  } while (local_14c[0] < 0x14);
  iVar6 = 0x14;
  do {
    local_14c[1] = (uVar9 >> 0x1b | uVar9 << 5) + (uVar10 ^ uVar5 ^ uVar8) + local_14c[iVar6 + 3] +
                   0x6ed9eba1 + local_14c[1];
    uVar8 = uVar8 << 0x1e | uVar8 >> 2;
    uVar10 = ((uint)local_14c[1] >> 0x1b | local_14c[1] * 0x20) + (uVar5 ^ uVar8 ^ uVar9) +
             local_14c[iVar6 + 4] + 0x6ed9eba1 + uVar10;
    uVar9 = uVar9 << 0x1e | uVar9 >> 2;
    uVar5 = (uVar10 >> 0x1b | uVar10 * 0x20) + (uVar8 ^ uVar9 ^ local_14c[1]) + local_14c[iVar6 + 5]
            + 0x6ed9eba1 + uVar5;
    local_14c[1] = local_14c[1] * 0x40000000 | (uint)local_14c[1] >> 2;
    uVar8 = uVar8 + 0x6ed9eba1 +
            (uVar5 >> 0x1b | uVar5 * 0x20) + (uVar9 ^ local_14c[1] ^ uVar10) + local_14c[iVar6 + 6];
    uVar10 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar9 = (uVar8 >> 0x1b | uVar8 * 0x20) + (local_14c[1] ^ uVar10 ^ uVar5) + local_14c[iVar6 + 7]
            + 0x6ed9eba1 + uVar9;
    uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
    iVar6 = iVar6 + 5;
  } while (iVar6 < 0x28);
  local_14c[0] = 0x28;
  do {
    local_14c[1] = ((uVar5 | uVar8) & uVar10 | uVar5 & uVar8) + (uVar9 >> 0x1b | uVar9 << 5) +
                   local_14c[local_14c[0] + 3] + -0x70e44324 + local_14c[1];
    uVar8 = uVar8 << 0x1e | uVar8 >> 2;
    uVar10 = ((uVar8 | uVar9) & uVar5 | uVar8 & uVar9) +
             ((uint)local_14c[1] >> 0x1b | local_14c[1] * 0x20) + local_14c[local_14c[0] + 4] +
             -0x70e44324 + uVar10;
    uVar9 = uVar9 << 0x1e | uVar9 >> 2;
    uVar5 = ((uVar9 | local_14c[1]) & uVar8 | uVar9 & local_14c[1]) +
            (uVar10 >> 0x1b | uVar10 * 0x20) + local_14c[local_14c[0] + 5] + -0x70e44324 + uVar5;
    local_14c[1] = local_14c[1] * 0x40000000 | (uint)local_14c[1] >> 2;
    uVar8 = ((local_14c[1] | uVar10) & uVar9 | local_14c[1] & uVar10) +
            (uVar5 >> 0x1b | uVar5 * 0x20) + local_14c[local_14c[0] + 6] + -0x70e44324 + uVar8;
    uVar10 = uVar10 * 0x40000000 | uVar10 >> 2;
    iVar6 = local_14c[0] + 7;
    local_14c[0] = local_14c[0] + 5;
    uVar9 = ((uVar10 | uVar5) & local_14c[1] | uVar10 & uVar5) + (uVar8 >> 0x1b | uVar8 * 0x20) +
            local_14c[iVar6] + -0x70e44324 + uVar9;
    uVar5 = uVar5 >> 2 | uVar5 * 0x40000000;
  } while (local_14c[0] < 0x3c);
  iVar6 = 0x3c;
  do {
    local_14c[1] = (uVar9 >> 0x1b | uVar9 << 5) + (uVar10 ^ uVar5 ^ uVar8) + local_14c[iVar6 + 3] +
                   -0x359d3e2a + local_14c[1];
    uVar8 = uVar8 << 0x1e | uVar8 >> 2;
    uVar10 = ((uint)local_14c[1] >> 0x1b | local_14c[1] * 0x20) + (uVar5 ^ uVar8 ^ uVar9) +
             local_14c[iVar6 + 4] + -0x359d3e2a + uVar10;
    uVar9 = uVar9 << 0x1e | uVar9 >> 2;
    uVar5 = (uVar10 >> 0x1b | uVar10 * 0x20) + (uVar8 ^ uVar9 ^ local_14c[1]) + local_14c[iVar6 + 5]
            + -0x359d3e2a + uVar5;
    local_14c[1] = local_14c[1] * 0x40000000 | (uint)local_14c[1] >> 2;
    uVar8 = uVar8 + 0xca62c1d6 +
            (uVar5 >> 0x1b | uVar5 * 0x20) + (uVar9 ^ local_14c[1] ^ uVar10) + local_14c[iVar6 + 6];
    uVar10 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar9 = (uVar8 >> 0x1b | uVar8 * 0x20) + (local_14c[1] ^ uVar10 ^ uVar5) + local_14c[iVar6 + 7]
            + -0x359d3e2a + uVar9;
    uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
    iVar6 = iVar6 + 5;
  } while (iVar6 < 0x50);
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar5;
  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar10;
  *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + uVar9;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar8;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + local_14c[1];
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}


/* END FUNCTION 0x100635f0 */
