/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dfea0
 * Name: FUN_100dfea0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100dfea0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int *param_6)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  bool bVar11;
  int local_820;
  byte local_818;
  undefined4 local_817 [255];
  undefined1 local_418;
  byte local_410;
  undefined4 local_40f [258];
  
  local_818 = 0;
  puVar9 = local_817;
  for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_410 = 0;
  puVar9 = local_40f;
  for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_820 = 0;
  pbVar10 = &local_410;
  _strncpy((char *)&local_818,param_1,0x400);
  local_418 = 0;
  iVar6 = FUN_100dfdb0(param_1,param_2,param_3,param_4,pbVar10,param_6);
  pbVar2 = &local_818;
  if (iVar6 == 0) {
    while (pbVar7 = pbVar2, *param_6 == 0) {
      pbVar2 = pbVar10;
      do {
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
      } while (bVar1 != 0);
      pbVar3 = pbVar7;
      pbVar8 = pbVar10;
      if (pbVar2 == pbVar10 + 1) {
        return 0x2afb;
      }
      do {
        bVar1 = *pbVar3;
        bVar11 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_100dff78:
          iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_100dff7d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar11 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_100dff78;
        pbVar3 = pbVar3 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_100dff7d:
      if (iVar6 == 0) {
        return 0x2afb;
      }
      local_820 = local_820 + 1;
      if (local_820 == 0x10) {
        return 0x2afb;
      }
      iVar4 = FUN_100dfdb0(param_1,param_2,param_3,param_4,pbVar7,param_6);
      iVar6 = 0;
      pbVar2 = pbVar10;
      pbVar10 = pbVar7;
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    if ((iVar6 == 0) && (param_5 != 0)) {
      uVar5 = FUN_100dfca0(pbVar10);
      *(undefined4 *)(*param_6 + 0x14) = uVar5;
      if (*(int *)(*param_6 + 0x14) == 0) {
        return 8;
      }
    }
  }
  return iVar6;
}


/* END FUNCTION 0x100dfea0 */
