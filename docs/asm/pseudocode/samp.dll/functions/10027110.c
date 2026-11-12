/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10027110
 * Name: FUN_10027110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_10027110(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_2[1] == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    return param_1;
  }
  puVar2 = operator_new(param_2[1] << 2);
  *param_1 = puVar2;
  puVar5 = (undefined4 *)*param_2;
  for (uVar3 = param_2[1] & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar2 = puVar2 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  uVar1 = param_2[1];
  param_1[2] = uVar1;
  param_1[1] = uVar1;
  return param_1;
}


/* END FUNCTION 0x10027110 */
