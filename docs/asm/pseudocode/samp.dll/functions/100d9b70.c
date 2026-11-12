/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d9b70
 * Name: FUN_100d9b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d9b70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR___strdup_101554c4)(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_100d9b30(param_1,iVar1);
  if (iVar2 == 0) {
    (*(code *)PTR__free_101554bc)(iVar1);
  }
  return iVar2;
}


/* END FUNCTION 0x100d9b70 */
