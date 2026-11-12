/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d9990
 * Name: FUN_100d9990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d9990(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR__realloc_101554c0)(param_1,param_2);
  if ((param_2 != 0) && (iVar1 == 0)) {
    (*(code *)PTR__free_101554bc)(param_1);
  }
  return iVar1;
}


/* END FUNCTION 0x100d9990 */
