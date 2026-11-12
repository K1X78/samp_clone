/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100beab0
 * Name: FUN_100beab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100beab0(int *param_1,uint *param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  
  uVar1 = param_1[4];
  if (uVar1 < 3) {
    FUN_100be960();
    return 0;
  }
  pbVar2 = (byte *)*param_1;
  uVar8 = ((uint)pbVar2[1] ^ param_1[*pbVar2 + 0x18]) & 0x3ff;
  iVar7 = param_1[9];
  uVar5 = ((uint)pbVar2[2] << 8 ^ (uint)pbVar2[1] ^ param_1[*pbVar2 + 0x18]) & param_1[0xb];
  iVar4 = param_1[1];
  uVar3 = *(undefined4 *)(iVar7 + 0x1000 + uVar5 * 4);
  uVar6 = iVar4 - *(int *)(iVar7 + uVar8 * 4);
  *(int *)(iVar7 + uVar8 * 4) = iVar4;
  *(int *)(iVar7 + 0x1000 + uVar5 * 4) = iVar4;
  iVar7 = 0;
  uVar5 = 2;
  if ((uVar6 < (uint)param_1[6]) && (pbVar2[-uVar6] == *pbVar2)) {
    for (pbVar9 = pbVar2 + 2; (pbVar9 != pbVar2 + uVar1 && (pbVar9[-uVar6] == *pbVar9));
        pbVar9 = pbVar9 + 1) {
    }
    uVar5 = (int)pbVar9 - (int)pbVar2;
    *param_2 = uVar5;
    param_2[1] = uVar6 - 1;
    iVar7 = 2;
    if (uVar5 == uVar1) {
      FUN_100be830(uVar1,uVar3,param_1[1],*param_1,param_1[10],param_1[5],param_1[6],param_1[0xc]);
      iVar7 = param_1[1];
      param_1[5] = param_1[5] + 1;
      *param_1 = *param_1 + 1;
      param_1[1] = iVar7 + 1;
      if (iVar7 + 1 == param_1[2]) {
        FUN_100be570();
      }
      return 2;
    }
  }
  iVar4 = FUN_100be6b0(uVar1,uVar3,param_1[1],*param_1,param_1[10],param_1[5],param_1[6],
                       param_1[0xc],param_2 + iVar7,uVar5);
  iVar7 = param_1[1];
  param_1[5] = param_1[5] + 1;
  *param_1 = *param_1 + 1;
  param_1[1] = iVar7 + 1;
  if (iVar7 + 1 == param_1[2]) {
    FUN_100be570();
  }
  return iVar4 - (int)param_2 >> 2;
}


/* END FUNCTION 0x100beab0 */
