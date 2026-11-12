/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dddc0
 * Name: FUN_100dddc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100dddc0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_2 != 0) {
    iVar1 = (*(code *)PTR___strdup_101554c4)(param_2);
    *(int *)(param_1 + 0x30) = iVar1;
    if (iVar1 == 0) {
      return 0x1b;
    }
  }
  return 0;
}


/* END FUNCTION 0x100dddc0 */
