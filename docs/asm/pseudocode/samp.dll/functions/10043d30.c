/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10043d30
 * Name: FUN_10043d30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10043d30(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1[1] != 0) && (param_4 < (uint)param_1[1])) {
    *(undefined4 *)(*param_1 + param_4 * 4) = param_2;
    return;
  }
  if ((uint)param_1[2] <= param_4) {
    param_1[2] = param_4 + 1;
    puVar1 = operator_new((param_4 + 1) * 4);
    puVar4 = (undefined4 *)*param_1;
    puVar5 = puVar1;
    for (uVar2 = param_1[1] & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    _free((void *)*param_1);
    *param_1 = (int)puVar1;
  }
  uVar2 = param_1[1];
  while (uVar2 < param_4) {
    *(undefined4 *)(*param_1 + param_1[1] * 4) = param_3;
    uVar2 = param_1[1] + 1;
    param_1[1] = uVar2;
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = param_2;
  param_1[1] = param_1[1] + 1;
  return;
}


/* END FUNCTION 0x10043d30 */
