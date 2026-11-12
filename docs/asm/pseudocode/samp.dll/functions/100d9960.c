/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d9960
 * Name: FUN_100d9960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d9960(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)(*(code *)PTR__malloc_101554b8)(param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined1 *)puVar1 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  return;
}


/* END FUNCTION 0x100d9960 */
