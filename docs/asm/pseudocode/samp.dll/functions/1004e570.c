/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004e570
 * Name: FUN_1004e570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1004e570(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
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
      puVar4 = operator_new(param_1[3] << 4);
      uVar5 = 0;
      puVar3 = puVar4;
      if (param_1[3] != 0) {
        do {
          uVar6 = (param_1[1] + uVar5) % (uint)param_1[3];
          iVar1 = *param_1;
          uVar5 = uVar5 + 1;
          *puVar3 = *(undefined4 *)(iVar1 + uVar6 * 8);
          puVar3[1] = *(undefined4 *)(iVar1 + 4 + uVar6 * 8);
          puVar3 = puVar3 + 2;
        } while (uVar5 < (uint)param_1[3]);
      }
      param_1[2] = param_1[3];
      param_1[1] = 0;
      param_1[3] = param_1[3] * 2;
      _free((void *)*param_1);
      *param_1 = (int)puVar4;
    }
    return;
  }
  puVar3 = operator_new(0x80);
  param_1[1] = 0;
  *param_1 = (int)puVar3;
  param_1[2] = 1;
  *puVar3 = *param_2;
  puVar3[1] = param_2[1];
  param_1[3] = 0x10;
  return;
}


/* END FUNCTION 0x1004e570 */
