/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d0450
 * Name: FUN_100d0450
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d0450(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x5a0);
  iVar1 = 0x3a;
  do {
    (*(code *)PTR__free_101554bc)(*puVar2);
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(param_1 + 0x70c) != 0) {
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x708));
    *(undefined4 *)(param_1 + 0x708) = 0;
    *(undefined4 *)(param_1 + 0x70c) = 0;
  }
  *(undefined4 *)(param_1 + 0x708) = 0;
  if (*(int *)(param_1 + 0x704) != 0) {
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x700));
    *(undefined4 *)(param_1 + 0x700) = 0;
    *(undefined4 *)(param_1 + 0x704) = 0;
  }
  *(undefined4 *)(param_1 + 0x700) = 0;
  return;
}


/* END FUNCTION 0x100d0450 */
