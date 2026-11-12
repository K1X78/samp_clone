/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dda10
 * Name: FUN_100dda10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_100dda10(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(*(code *)PTR__malloc_101554b8)(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar2 = (undefined4 *)(*(code *)PTR__malloc_101554b8)(0x29);
    puVar1[4] = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      (*(code *)PTR__free_101554bc)(puVar1);
      return (undefined4 *)0x0;
    }
    *puVar2 = 0x2d2d2d2d;
    puVar2[1] = 0x2d2d2d2d;
    puVar2[2] = 0x2d2d2d2d;
    puVar2[3] = 0x2d2d2d2d;
    puVar2[4] = 0x2d2d2d2d;
    puVar2[5] = 0x2d2d2d2d;
    FUN_100ef170(param_1,puVar1[4] + 0x18,0x11);
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return puVar1;
}


/* END FUNCTION 0x100dda10 */
