/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10036c40
 * Name: FUN_10036c40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10036c40(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1[3] != 0) {
    iVar2 = param_1[2];
    param_1[2] = iVar2 + 1;
    puVar3 = (undefined4 *)(*param_1 + iVar2 * 6);
    *puVar3 = *param_2;
    *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(param_2 + 1);
    if (param_1[2] == param_1[3]) {
      param_1[2] = 0;
    }
    if (param_1[2] == param_1[1]) {
      puVar4 = operator_new(param_1[3] * 0xc);
      uVar6 = 0;
      puVar3 = puVar4;
      if (param_1[3] != 0) {
        do {
          uVar5 = param_1[1] + uVar6;
          uVar6 = uVar6 + 1;
          puVar1 = (undefined4 *)(*param_1 + (uVar5 % (uint)param_1[3]) * 6);
          *puVar3 = *puVar1;
          *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(puVar1 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 6);
        } while (uVar6 < (uint)param_1[3]);
      }
      param_1[1] = 0;
      param_1[2] = param_1[3];
      param_1[3] = param_1[3] * 2;
      _free((void *)*param_1);
      *param_1 = (int)puVar4;
    }
    return;
  }
  puVar3 = operator_new(0x60);
  *param_1 = (int)puVar3;
  param_1[1] = 0;
  param_1[2] = 1;
  *puVar3 = *param_2;
  *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(param_2 + 1);
  param_1[3] = 0x10;
  return;
}


/* END FUNCTION 0x10036c40 */
