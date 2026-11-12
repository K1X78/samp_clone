/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d9b30
 * Name: FUN_100d9b30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_100d9b30(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(*(code *)PTR__malloc_101554b8)(8);
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = 0;
    *puVar4 = param_2;
    if (param_1 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)param_1[1];
      puVar2 = param_1;
      while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
        puVar2 = puVar1;
        puVar3 = (undefined4 *)puVar1[1];
      }
      puVar2[1] = puVar4;
      puVar4 = param_1;
    }
    return puVar4;
  }
  return (undefined4 *)0x0;
}


/* END FUNCTION 0x100d9b30 */
