/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065460
 * Name: FUN_10065460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10065460(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  if ((void *)*param_1 != (void *)0x0) {
    _free((void *)*param_1);
  }
  param_1[1] = param_2;
  puVar1 = operator_new(param_2);
  uVar3 = param_1[1];
  *param_1 = puVar1;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar1 = *(undefined1 *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  return;
}


/* END FUNCTION 0x10065460 */
