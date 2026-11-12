/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10020a30
 * Name: FUN_10020a30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10020a30(int *param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = param_1[2];
  if (param_1[1] == iVar1) {
    if (iVar1 == 0) {
      param_1[2] = 0x10;
    }
    else {
      param_1[2] = iVar1 * 2;
    }
    puVar2 = operator_new(param_1[2]);
    uVar4 = param_1[1];
    puVar5 = (undefined4 *)*param_1;
    puVar6 = puVar2;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    _free((void *)*param_1);
    *param_1 = (int)puVar2;
  }
  *(undefined1 *)(param_1[1] + *param_1) = param_2;
  param_1[1] = param_1[1] + 1;
  return;
}


/* END FUNCTION 0x10020a30 */
