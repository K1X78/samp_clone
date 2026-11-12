/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048b210
 * Name: FUN_0048b210
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0048b210(int *param_1,uint *param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  
  uVar1 = param_1[4];
  if (uVar1 < 3) {
    FUN_0048b160();
    return 0;
  }
  pbVar2 = (byte *)*param_1;
  uVar9 = ((uint)pbVar2[1] ^ param_1[*pbVar2 + 0x18]) & 0x3ff;
  iVar8 = param_1[9];
  uVar6 = ((uint)pbVar2[2] << 8 ^ (uint)pbVar2[1] ^ param_1[*pbVar2 + 0x18]) & param_1[0xb];
  iVar3 = param_1[1];
  iVar4 = *(int *)(iVar8 + 0x1000 + uVar6 * 4);
  uVar7 = iVar3 - *(int *)(iVar8 + uVar9 * 4);
  *(int *)(iVar8 + uVar9 * 4) = iVar3;
  *(int *)(iVar8 + 0x1000 + uVar6 * 4) = iVar3;
  iVar8 = 0;
  uVar6 = 2;
  if ((uVar7 < (uint)param_1[6]) && (pbVar2[-uVar7] == *pbVar2)) {
    for (pbVar10 = pbVar2 + 2; (pbVar10 != pbVar2 + uVar1 && (pbVar10[-uVar7] == *pbVar10));
        pbVar10 = pbVar10 + 1) {
    }
    uVar6 = (int)pbVar10 - (int)pbVar2;
    *param_2 = uVar6;
    param_2[1] = uVar7 - 1;
    iVar8 = 2;
    if (uVar6 == uVar1) {
      FUN_0048b030(uVar1,iVar4,param_1[1],*param_1,param_1[10],param_1[5],param_1[6],param_1[0xc]);
      iVar8 = param_1[1];
      param_1[5] = param_1[5] + 1;
      *param_1 = *param_1 + 1;
      param_1[1] = iVar8 + 1;
      if (iVar8 + 1 == param_1[2]) {
        FUN_0048ad70();
      }
      return 2;
    }
  }
  puVar5 = FUN_0048aeb0(uVar1,iVar4,param_1[1],*param_1,param_1[10],param_1[5],param_1[6],
                        param_1[0xc],param_2 + iVar8,uVar6);
  iVar8 = param_1[1];
  param_1[5] = param_1[5] + 1;
  *param_1 = *param_1 + 1;
  param_1[1] = iVar8 + 1;
  if (iVar8 + 1 == param_1[2]) {
    FUN_0048ad70();
  }
  return (int)puVar5 - (int)param_2 >> 2;
}


/* END FUNCTION 0x0048b210 */
