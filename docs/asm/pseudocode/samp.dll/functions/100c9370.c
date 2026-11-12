/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c9370
 * Name: FUN_100c9370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100c9370(int *param_1,int param_2)

{
  int iVar1;
  
  (*(code *)PTR__free_101554bc)(*param_1);
  *param_1 = 0;
  if (param_2 != 0) {
    iVar1 = (*(code *)PTR___strdup_101554c4)(param_2);
    if (iVar1 == 0) {
      return 0x1b;
    }
    *param_1 = iVar1;
  }
  return 0;
}


/* END FUNCTION 0x100c9370 */
