/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10043e80
 * Name: FUN_10043e80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10043e80(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1[3] != 0) {
    iVar1 = param_1[2];
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + iVar1 * 8) = *param_2;
    *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = param_2[1];
    iVar1 = param_1[2];
    param_1[2] = iVar1 + 1;
    if (iVar1 + 1 == param_1[3]) {
      param_1[2] = 0;
    }
    if (param_1[2] == param_1[1]) {
      pvVar4 = operator_new(param_1[3] << 4);
      if (param_1[3] != 0) {
        uVar5 = 0;
        do {
          uVar6 = (param_1[1] + uVar5) % (uint)param_1[3];
          iVar1 = *param_1;
          uVar5 = uVar5 + 1;
          *(undefined4 *)((int)pvVar4 + uVar5 * 8 + -8) = *(undefined4 *)(iVar1 + uVar6 * 8);
          *(undefined4 *)((int)pvVar4 + uVar5 * 8 + -4) = *(undefined4 *)(iVar1 + 4 + uVar6 * 8);
        } while (uVar5 < (uint)param_1[3]);
      }
      param_1[2] = param_1[3];
      param_1[1] = 0;
      param_1[3] = param_1[3] * 2;
      _free((void *)*param_1);
      *param_1 = (int)pvVar4;
    }
    return;
  }
  puVar3 = operator_new(0x80);
  *param_1 = (int)puVar3;
  param_1[1] = 0;
  param_1[2] = 1;
  *puVar3 = *param_2;
  puVar3[1] = param_2[1];
  param_1[3] = 0x10;
  return;
}


/* END FUNCTION 0x10043e80 */
