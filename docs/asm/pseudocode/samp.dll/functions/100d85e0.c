/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d85e0
 * Name: FUN_100d85e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_100d85e0(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar4 = (in_EAX + 0x1c) * 0x10;
  iVar1 = *(int *)(iVar4 + param_1);
  puVar5 = (undefined4 *)(iVar4 + param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = puVar5[3];
  if (uVar3 < (uint)puVar5[2]) {
    uVar2 = puVar5[2] - uVar3;
    if (uVar2 <= param_3) {
      param_3 = uVar2;
    }
    puVar6 = (undefined4 *)(uVar3 + iVar1);
    for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_2 = *puVar6;
      puVar6 = puVar6 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)param_2 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    puVar5[3] = puVar5[3] + param_3;
  }
  else {
    param_3 = 0;
  }
  if (puVar5[3] == puVar5[2]) {
    (*(code *)PTR__free_101554bc)(*puVar5);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
  }
  return param_3;
}


/* END FUNCTION 0x100d85e0 */
