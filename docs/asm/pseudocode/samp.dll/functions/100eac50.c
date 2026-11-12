/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100eac50
 * Name: FUN_100eac50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100eac50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 0x628);
  if (iVar2 != 0) {
    (*(code *)PTR__free_101554bc)(iVar2);
    *(undefined4 *)(iVar1 + 0x628) = 0;
  }
  return;
}


/* END FUNCTION 0x100eac50 */
