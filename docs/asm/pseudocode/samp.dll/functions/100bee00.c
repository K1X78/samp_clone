/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bee00
 * Name: FUN_100bee00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100bee00(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  uVar1 = param_1[4];
  if (uVar1 < 4) {
    FUN_100be960();
    return 0;
  }
  pbVar2 = (byte *)*param_1;
  iVar5 = param_1[1];
  uVar4 = (uint)pbVar2[1] ^ param_1[*pbVar2 + 0x18] ^ (uint)pbVar2[2] << 8;
  uVar9 = ((uint)pbVar2[1] ^ param_1[*pbVar2 + 0x18]) & 0x3ff;
  uVar7 = (param_1[pbVar2[3] + 0x18] << 5 ^ uVar4) & param_1[0xb];
  iVar11 = param_1[9];
  uVar8 = iVar5 - *(int *)(iVar11 + uVar9 * 4);
  uVar4 = uVar4 & 0xffff;
  uVar10 = iVar5 - *(int *)(iVar11 + 0x1000 + uVar4 * 4);
  uVar3 = *(undefined4 *)(iVar11 + 0x41000 + uVar7 * 4);
  *(int *)(iVar11 + uVar9 * 4) = iVar5;
  *(int *)(iVar11 + 0x1000 + uVar4 * 4) = iVar5;
  *(int *)(iVar11 + 0x41000 + uVar7 * 4) = iVar5;
  iVar5 = 0;
  iVar11 = 0;
  if ((uVar8 < (uint)param_1[6]) && (pbVar2[-uVar8] == *pbVar2)) {
    iVar5 = 2;
    *param_2 = 2;
    param_2[1] = uVar8 - 1;
    iVar11 = 2;
  }
  if (((uVar8 != uVar10) && (uVar10 < (uint)param_1[6])) && (pbVar2[-uVar10] == *pbVar2)) {
    param_2[iVar11 + 1] = uVar10 - 1;
    iVar5 = 3;
    iVar11 = iVar11 + 2;
    uVar8 = uVar10;
  }
  if (iVar11 != 0) {
    for (pbVar6 = pbVar2 + iVar5; (pbVar6 != pbVar2 + uVar1 && (pbVar6[-uVar8] == *pbVar6));
        pbVar6 = pbVar6 + 1) {
    }
    param_2[iVar11 + -2] = (int)pbVar6 - (int)pbVar2;
    if ((int)pbVar6 - (int)pbVar2 == uVar1) {
      *(undefined4 *)(param_1[10] + param_1[5] * 4) = uVar3;
      goto LAB_100bef7c;
    }
  }
  iVar5 = FUN_100be5c0(uVar1,uVar3,param_1[1],*param_1,param_1[10],param_1[5],param_1[6],
                       param_1[0xc],param_2 + iVar11);
  iVar11 = iVar5 - (int)param_2 >> 2;
LAB_100bef7c:
  iVar5 = param_1[1];
  param_1[1] = iVar5 + 1;
  param_1[5] = param_1[5] + 1;
  *param_1 = *param_1 + 1;
  if (iVar5 + 1 == param_1[2]) {
    FUN_100be570();
  }
  return iVar11;
}


/* END FUNCTION 0x100bee00 */
