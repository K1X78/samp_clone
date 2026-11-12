/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048b3a0
 * Name: FUN_0048b3a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0048b3a0(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar1 = param_1[4];
  if (uVar1 < 4) {
    FUN_0048b160();
    return 0;
  }
  pbVar2 = (byte *)*param_1;
  iVar12 = param_1[1];
  uVar5 = (uint)pbVar2[1] ^ param_1[*pbVar2 + 0x18] ^ (uint)pbVar2[2] << 8;
  uVar10 = ((uint)pbVar2[1] ^ param_1[*pbVar2 + 0x18]) & 0x3ff;
  uVar8 = (param_1[pbVar2[3] + 0x18] << 5 ^ uVar5) & param_1[0xb];
  iVar3 = param_1[9];
  uVar9 = iVar12 - *(int *)(iVar3 + uVar10 * 4);
  uVar5 = uVar5 & 0xffff;
  uVar11 = iVar12 - *(int *)(iVar3 + 0x1000 + uVar5 * 4);
  iVar4 = *(int *)(iVar3 + 0x41000 + uVar8 * 4);
  *(int *)(iVar3 + uVar10 * 4) = iVar12;
  *(int *)(iVar3 + 0x1000 + uVar5 * 4) = iVar12;
  *(int *)(iVar3 + 0x41000 + uVar8 * 4) = iVar12;
  uVar5 = 0;
  iVar12 = 0;
  if ((uVar9 < (uint)param_1[6]) && (pbVar2[-uVar9] == *pbVar2)) {
    uVar5 = 2;
    *param_2 = 2;
    param_2[1] = uVar9 - 1;
    iVar12 = 2;
  }
  if (((uVar9 != uVar11) && (uVar11 < (uint)param_1[6])) && (pbVar2[-uVar11] == *pbVar2)) {
    param_2[iVar12 + 1] = uVar11 - 1;
    uVar5 = 3;
    iVar12 = iVar12 + 2;
    uVar9 = uVar11;
  }
  if (iVar12 != 0) {
    for (pbVar6 = pbVar2 + uVar5; (pbVar6 != pbVar2 + uVar1 && (pbVar6[-uVar9] == *pbVar6));
        pbVar6 = pbVar6 + 1) {
    }
    uVar5 = (int)pbVar6 - (int)pbVar2;
    param_2[iVar12 + -2] = uVar5;
    if (uVar5 == uVar1) {
      FUN_0048b030(uVar1,iVar4,param_1[1],*param_1,param_1[10],param_1[5],param_1[6],param_1[0xc]);
      goto LAB_0048b531;
    }
  }
  if (uVar5 < 3) {
    uVar5 = 3;
  }
  puVar7 = FUN_0048aeb0(uVar1,iVar4,param_1[1],*param_1,param_1[10],param_1[5],param_1[6],
                        param_1[0xc],param_2 + iVar12,uVar5);
  iVar12 = (int)puVar7 - (int)param_2 >> 2;
LAB_0048b531:
  iVar3 = param_1[1];
  param_1[1] = iVar3 + 1;
  param_1[5] = param_1[5] + 1;
  *param_1 = *param_1 + 1;
  if (iVar3 + 1 == param_1[2]) {
    FUN_0048ad70();
  }
  return iVar12;
}


/* END FUNCTION 0x0048b3a0 */
