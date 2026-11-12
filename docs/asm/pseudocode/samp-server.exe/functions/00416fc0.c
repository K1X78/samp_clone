/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416fc0
 * Name: FUN_00416fc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00416fc0(undefined4 *param_1,int param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if ((int)param_1[6] <= (int)param_1[5]) {
    iVar2 = *(int *)*param_1;
    puVar3 = (undefined4 *)param_1[7];
    puVar4 = FUN_00412930(param_1[6] * 0x50);
    param_1[7] = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      if ((param_3 & 1) != 0) {
        FUN_004158d0(iVar2,param_2);
      }
      param_1[7] = puVar3;
      return 0;
    }
    puVar7 = puVar3;
    for (iVar6 = (param_1[5] * 5 & 0x1fffffffU) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    if (puVar3 != param_1 + 8) {
      FUN_00408130(iVar2);
    }
    uVar5 = FUN_004080b0(iVar2);
    param_1[6] = uVar5 / 0x28;
  }
  iVar2 = param_1[5];
  piVar1 = (int *)(param_1[7] + iVar2 * 0x28);
  param_1[5] = iVar2 + 1;
  *piVar1 = param_2;
  piVar1[5] = (int)param_1;
  *(byte *)((int)piVar1 + 0x12) = param_3;
  piVar1[1] = -1;
  return iVar2;
}


/* END FUNCTION 0x00416fc0 */
