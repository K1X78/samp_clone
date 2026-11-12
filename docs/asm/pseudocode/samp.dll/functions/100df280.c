/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100df280
 * Name: FUN_100df280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100df280(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = *(int **)(iVar1 + 0xfc);
  while (piVar2 != (int *)0x0) {
    *(int *)(iVar1 + 0xfc) = piVar2[1];
    (**(code **)(*piVar2 + 0x10))(param_1,piVar2);
    (*(code *)PTR__free_101554bc)(piVar2);
    piVar2 = *(int **)(iVar1 + 0xfc);
  }
  return;
}


/* END FUNCTION 0x100df280 */
