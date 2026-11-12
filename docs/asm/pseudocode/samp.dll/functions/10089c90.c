/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10089c90
 * Name: FUN_10089c90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10089c90(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10086cc0(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x38))(param_2);
  }
  return;
}


/* END FUNCTION 0x10089c90 */
