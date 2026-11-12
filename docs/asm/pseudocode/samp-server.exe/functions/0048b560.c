/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048b560
 * Name: FUN_0048b560
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0048b560(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
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
  iVar5 = param_1[1];
  uVar4 = (uint)pbVar2[1] ^ param_1[*pbVar2 + 0x18] ^ (uint)pbVar2[2] << 8;
  uVar10 = ((uint)pbVar2[1] ^ param_1[*pbVar2 + 0x18]) & 0x3ff;
  uVar8 = (param_1[pbVar2[3] + 0x18] << 5 ^ uVar4) & param_1[0xb];
  iVar12 = param_1[9];
  uVar9 = iVar5 - *(int *)(iVar12 + uVar10 * 4);
  uVar4 = uVar4 & 0xffff;
  uVar11 = iVar5 - *(int *)(iVar12 + 0x1000 + uVar4 * 4);
  iVar3 = *(int *)(iVar12 + 0x41000 + uVar8 * 4);
  *(int *)(iVar12 + uVar10 * 4) = iVar5;
  *(int *)(iVar12 + 0x1000 + uVar4 * 4) = iVar5;
  *(int *)(iVar12 + 0x41000 + uVar8 * 4) = iVar5;
  iVar5 = 0;
  iVar12 = 0;
  if ((uVar9 < (uint)param_1[6]) && (pbVar2[-uVar9] == *pbVar2)) {
    iVar5 = 2;
    *param_2 = 2;
    param_2[1] = uVar9 - 1;
    iVar12 = 2;
  }
  if (((uVar9 != uVar11) && (uVar11 < (uint)param_1[6])) && (pbVar2[-uVar11] == *pbVar2)) {
    param_2[iVar12 + 1] = uVar11 - 1;
    iVar5 = 3;
    iVar12 = iVar12 + 2;
    uVar9 = uVar11;
  }
  if (iVar12 != 0) {
    for (pbVar6 = pbVar2 + iVar5; (pbVar6 != pbVar2 + uVar1 && (pbVar6[-uVar9] == *pbVar6));
        pbVar6 = pbVar6 + 1) {
    }
    param_2[iVar12 + -2] = (int)pbVar6 - (int)pbVar2;
    if ((int)pbVar6 - (int)pbVar2 == uVar1) {
      *(int *)(param_1[10] + param_1[5] * 4) = iVar3;
      goto LAB_0048b6dc;
    }
  }
  puVar7 = FUN_0048adc0(uVar1,iVar3,param_1[1],(char *)*param_1,param_1[10],param_1[5],param_1[6],
                        param_1[0xc],param_2 + iVar12);
  iVar12 = (int)puVar7 - (int)param_2 >> 2;
LAB_0048b6dc:
  iVar5 = param_1[1];
  param_1[1] = iVar5 + 1;
  param_1[5] = param_1[5] + 1;
  *param_1 = *param_1 + 1;
  if (iVar5 + 1 == param_1[2]) {
    FUN_0048ad70();
  }
  return iVar12;
}


/* END FUNCTION 0x0048b560 */
