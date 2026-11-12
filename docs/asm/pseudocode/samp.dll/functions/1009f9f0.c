/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009f9f0
 * Name: FUN_1009f9f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1009f9f0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if ((piVar1 != (int *)0x0) && (piVar1[6] != 0)) {
    (**(code **)(*piVar1 + 0x20))();
  }
  return;
}


/* END FUNCTION 0x1009f9f0 */
