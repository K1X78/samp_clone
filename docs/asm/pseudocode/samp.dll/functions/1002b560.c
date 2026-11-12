/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002b560
 * Name: FUN_1002b560
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_1002b560(int *param_1,byte *param_2,char *param_3,uint param_4,int param_5,undefined1 param_6)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  void *pvVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  char *pcVar11;
  bool bVar12;
  
  if (param_2 == (byte *)0x0) {
    return;
  }
  uVar8 = 0;
  if (param_1[1] != 0) {
    puVar2 = (undefined4 *)*param_1;
    puVar10 = puVar2;
    do {
      pbVar3 = (byte *)*puVar10;
      pbVar9 = param_2;
      do {
        bVar1 = *pbVar3;
        bVar12 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_1002b5b4:
          iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_1002b5b9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar12 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_1002b5b4;
        pbVar3 = pbVar3 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_1002b5b9:
      if (iVar4 == 0) {
        iVar4 = uVar8 * 0x11;
        if ((*(int *)((int)puVar2 + iVar4 + 0xc) != param_5) ||
           (*(uint *)((int)puVar2 + iVar4 + 8) != param_4)) goto LAB_1002b649;
        if (param_4 == 0) {
          return;
        }
        bVar12 = true;
        uVar7 = param_4;
        pcVar6 = *(char **)((int)puVar2 + iVar4 + 4);
        pcVar11 = param_3;
        goto code_r0x1002b641;
      }
      uVar8 = uVar8 + 1;
      puVar10 = (undefined4 *)((int)puVar10 + 0x11);
    } while (uVar8 < (uint)param_1[1]);
  }
  goto LAB_1002b5c9;
  while( true ) {
    uVar7 = uVar7 - 1;
    bVar12 = *pcVar6 == *pcVar11;
    pcVar6 = pcVar6 + 1;
    pcVar11 = pcVar11 + 1;
    if (!bVar12) break;
code_r0x1002b641:
    if (uVar7 == 0) break;
  }
  if (bVar12) {
    return;
  }
LAB_1002b649:
  _free(*(void **)((int)puVar2 + iVar4 + 4));
  _free(*(void **)(iVar4 + *param_1));
  FUN_1002b4d0(uVar8);
LAB_1002b5c9:
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  pvVar5 = operator_new((uint)(pbVar3 + (1 - (int)(param_2 + 1))));
  if (param_4 == 0) {
    pcVar6 = (char *)0x0;
  }
  else {
    pcVar6 = operator_new(param_4);
    pcVar11 = pcVar6;
    for (uVar8 = param_4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = param_4 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *param_3;
      param_3 = param_3 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  iVar4 = (int)pvVar5 - (int)param_2;
  do {
    bVar1 = *param_2;
    param_2[iVar4] = bVar1;
    param_2 = param_2 + 1;
  } while (bVar1 != 0);
  FUN_1002acc0(pvVar5,pcVar6,param_4,param_5,param_6);
  return;
}


/* END FUNCTION 0x1002b560 */
