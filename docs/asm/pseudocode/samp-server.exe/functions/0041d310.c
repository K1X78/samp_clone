/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041d310
 * Name: FUN_0041d310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __cdecl FUN_0041d310(int param_1,undefined4 *param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  char *in_EAX;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  local_c = 0;
  local_8 = 0;
  if ((((in_EAX == (char *)0x0) || (*in_EAX != -0x68)) || (*(int *)(in_EAX + 0x28) == 0)) ||
     ((*(byte *)(*(int *)(in_EAX + 0x28) + 0x22) & 0x10) == 0)) {
    return param_2;
  }
  uVar14 = FUN_004103b0(param_1);
  piVar3 = *(int **)((int)uVar14 + 8);
  local_4 = *piVar3;
  if (*(int *)(local_4 + 0x48) == (int)((ulonglong)uVar14 >> 0x20)) {
    return param_2;
  }
  pbVar4 = (byte *)FUN_00412a70();
  if (pbVar4 != (byte *)0x0) {
    bVar2 = *pbVar4;
    pbVar5 = pbVar4;
    while (bVar2 != 0) {
      *pbVar5 = (&DAT_004b28c8)[*pbVar5];
      pbVar1 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
      bVar2 = *pbVar1;
    }
    iVar6 = (**(code **)(local_4 + 0x48))(piVar3,param_3,pbVar4,&local_c,&local_8);
    FUN_00408130(param_1);
    if (iVar6 != 0) {
      FUN_00408380((char *)param_2[6]);
      puVar7 = FUN_00417b70();
      if (puVar7 != (undefined4 *)0x0) {
        puVar10 = param_2;
        puVar12 = puVar7;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar7[6] = puVar7 + 8;
        pcVar11 = (char *)param_2[6];
        uVar8 = FUN_00408380(pcVar11);
        pcVar13 = (char *)(puVar7 + 8);
        for (uVar9 = uVar8 + 1 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar8 = uVar8 + 1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        puVar7[3] = local_c;
        *(byte *)((int)puVar7 + 3) = *(byte *)((int)puVar7 + 3) | 4;
        puVar7[1] = local_8;
        return puVar7;
      }
      return param_2;
    }
  }
  return param_2;
}


/* END FUNCTION 0x0041d310 */
