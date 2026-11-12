/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e40d0
 * Name: FUN_100e40d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_100e40d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)PTR__malloc_101554b8)(8);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar2 = (*(code *)PTR__malloc_101554b8)(param_1[3]);
  puVar1[1] = iVar2;
  if (iVar2 == 0) {
    (*(code *)PTR__free_101554bc)(puVar1);
    return (undefined4 *)0x0;
  }
  *puVar1 = param_1;
  (*(code *)*param_1)(iVar2);
  return puVar1;
}


/* END FUNCTION 0x100e40d0 */
