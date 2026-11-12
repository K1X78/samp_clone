/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10043b90
 * Name: FUN_10043b90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10043b90(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  
  if (param_1[3] != 0) {
    if (param_1[1] == 0) {
      param_1[1] = param_1[3] + -1;
    }
    else {
      param_1[1] = param_1[1] + -1;
    }
    uVar2 = 0;
    if (param_3 != 0) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (param_1[1] + uVar2) * 4);
        uVar2 = uVar2 + 1;
        *puVar1 = puVar1[1];
      } while (uVar2 < param_3);
    }
    *(undefined4 *)(*param_1 + (param_1[1] + uVar2) * 4) = *param_2;
    if (param_1[2] == param_1[1]) {
      pvVar3 = operator_new(param_1[3] << 3);
      uVar2 = 0;
      if (param_1[3] != 0) {
        do {
          uVar4 = param_1[1] + uVar2;
          uVar2 = uVar2 + 1;
          *(undefined4 *)((int)pvVar3 + uVar2 * 4 + -4) =
               *(undefined4 *)(*param_1 + (uVar4 % (uint)param_1[3]) * 4);
        } while (uVar2 < (uint)param_1[3]);
      }
      param_1[2] = param_1[3];
      param_1[1] = 0;
      param_1[3] = param_1[3] * 2;
      _free((void *)*param_1);
      *param_1 = (int)pvVar3;
    }
    return;
  }
  puVar1 = operator_new(0x40);
  *param_1 = (int)puVar1;
  param_1[1] = 0;
  param_1[2] = 1;
  *puVar1 = *param_2;
  param_1[3] = 0x10;
  return;
}


/* END FUNCTION 0x10043b90 */
