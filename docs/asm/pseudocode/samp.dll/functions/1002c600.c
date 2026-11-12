/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002c600
 * Name: FUN_1002c600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1002c600(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (param_1[3] != 0) {
    puVar2 = (undefined4 *)(param_1[2] * 0x11 + *param_1);
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
    *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_2 + 4);
    iVar1 = param_1[2];
    param_1[2] = iVar1 + 1;
    if (iVar1 + 1 == param_1[3]) {
      param_1[2] = 0;
    }
    if (param_1[2] == param_1[1]) {
      puVar3 = operator_new(param_1[3] * 0x22);
      uVar5 = 0;
      puVar2 = puVar3;
      if (param_1[3] != 0) {
        do {
          puVar4 = (undefined4 *)(((param_1[1] + uVar5) % (uint)param_1[3]) * 0x11 + *param_1);
          *puVar2 = *puVar4;
          puVar2[1] = puVar4[1];
          puVar2[2] = puVar4[2];
          puVar2[3] = puVar4[3];
          *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar4 + 4);
          uVar5 = uVar5 + 1;
          puVar2 = (undefined4 *)((int)puVar2 + 0x11);
        } while (uVar5 < (uint)param_1[3]);
      }
      param_1[1] = 0;
      param_1[2] = param_1[3];
      param_1[3] = param_1[3] * 2;
      _free((void *)*param_1);
      *param_1 = (int)puVar3;
    }
    return;
  }
  puVar2 = operator_new(0x110);
  param_1[1] = 0;
  *param_1 = (int)puVar2;
  param_1[2] = 1;
  *puVar2 = *param_2;
  puVar2[1] = param_2[1];
  puVar2[2] = param_2[2];
  puVar2[3] = param_2[3];
  *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = 0x10;
  return;
}


/* END FUNCTION 0x1002c600 */
