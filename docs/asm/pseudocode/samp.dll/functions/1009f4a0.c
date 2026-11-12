/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009f4a0
 * Name: FUN_1009f4a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte __fastcall FUN_1009f4a0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0x863c40)) {
    return *(byte *)(piVar1 + 7) & 1;
  }
  return 1;
}


/* END FUNCTION 0x1009f4a0 */
