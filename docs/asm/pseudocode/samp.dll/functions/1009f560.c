/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009f560
 * Name: FUN_1009f560
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1009f560(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0x863c40)) {
    piVar1[7] = piVar1[7] | 0x80000000;
  }
  return;
}


/* END FUNCTION 0x1009f560 */
