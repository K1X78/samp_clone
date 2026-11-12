/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002e400
 * Name: FUN_1002e400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1002e400(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1[3] == 0) {
    puVar2 = operator_new(0x40);
    *param_1 = (int)puVar2;
    param_1[1] = 0;
    param_1[2] = 1;
    *puVar2 = *param_2;
    param_1[3] = 0x10;
    return;
  }
  *(undefined4 *)(*param_1 + param_1[2] * 4) = *param_2;
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 1;
  if (iVar1 + 1 == param_1[3]) {
    param_1[2] = 0;
  }
  if (param_1[2] == param_1[1]) {
    pvVar3 = operator_new(param_1[3] * 8);
    uVar5 = 0;
    if (param_1[3] != 0) {
      do {
        uVar4 = param_1[1] + uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((int)pvVar3 + uVar5 * 4 + -4) =
             *(undefined4 *)(*param_1 + (uVar4 % (uint)param_1[3]) * 4);
      } while (uVar5 < (uint)param_1[3]);
    }
    param_1[2] = param_1[3];
    param_1[1] = 0;
    param_1[3] = param_1[3] * 2;
    _free((void *)*param_1);
    *param_1 = (int)pvVar3;
  }
  return;
}


/* END FUNCTION 0x1002e400 */
