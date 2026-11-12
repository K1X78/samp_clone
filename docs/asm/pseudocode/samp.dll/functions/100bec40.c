/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bec40
 * Name: FUN_100bec40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100bec40(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
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
  iVar11 = param_1[1];
  uVar5 = (uint)pbVar2[1] ^ param_1[*pbVar2 + 0x18] ^ (uint)pbVar2[2] << 8;
  uVar9 = ((uint)pbVar2[1] ^ param_1[*pbVar2 + 0x18]) & 0x3ff;
  uVar7 = (param_1[pbVar2[3] + 0x18] << 5 ^ uVar5) & param_1[0xb];
  iVar3 = param_1[9];
  uVar8 = iVar11 - *(int *)(iVar3 + uVar9 * 4);
  uVar5 = uVar5 & 0xffff;
  uVar10 = iVar11 - *(int *)(iVar3 + 0x1000 + uVar5 * 4);
  uVar4 = *(undefined4 *)(iVar3 + 0x41000 + uVar7 * 4);
  *(int *)(iVar3 + uVar9 * 4) = iVar11;
  *(int *)(iVar3 + 0x1000 + uVar5 * 4) = iVar11;
  *(int *)(iVar3 + 0x41000 + uVar7 * 4) = iVar11;
  uVar5 = 0;
  iVar11 = 0;
  if ((uVar8 < (uint)param_1[6]) && (pbVar2[-uVar8] == *pbVar2)) {
    uVar5 = 2;
    *param_2 = 2;
    param_2[1] = uVar8 - 1;
    iVar11 = 2;
  }
  if (((uVar8 != uVar10) && (uVar10 < (uint)param_1[6])) && (pbVar2[-uVar10] == *pbVar2)) {
    param_2[iVar11 + 1] = uVar10 - 1;
    uVar5 = 3;
    iVar11 = iVar11 + 2;
    uVar8 = uVar10;
  }
  if (iVar11 != 0) {
    for (pbVar6 = pbVar2 + uVar5; (pbVar6 != pbVar2 + uVar1 && (pbVar6[-uVar8] == *pbVar6));
        pbVar6 = pbVar6 + 1) {
    }
    uVar5 = (int)pbVar6 - (int)pbVar2;
    param_2[iVar11 + -2] = uVar5;
    if (uVar5 == uVar1) {
      FUN_100be830(uVar1,uVar4,param_1[1],*param_1,param_1[10],param_1[5],param_1[6],param_1[0xc]);
      goto LAB_100bedd1;
    }
  }
  if (uVar5 < 3) {
    uVar5 = 3;
  }
  iVar11 = FUN_100be6b0(uVar1,uVar4,param_1[1],*param_1,param_1[10],param_1[5],param_1[6],
                        param_1[0xc],param_2 + iVar11,uVar5);
  iVar11 = iVar11 - (int)param_2 >> 2;
LAB_100bedd1:
  iVar3 = param_1[1];
  param_1[1] = iVar3 + 1;
  param_1[5] = param_1[5] + 1;
  *param_1 = *param_1 + 1;
  if (iVar3 + 1 == param_1[2]) {
    FUN_100be570();
  }
  return iVar11;
}


/* END FUNCTION 0x100bec40 */
