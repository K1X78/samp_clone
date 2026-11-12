/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a79c0
 * Name: FUN_100a79c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100a79c0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if ((((piVar1 != (int *)0x0) && (*piVar1 != 0x863c40)) && (piVar1[6] != 0)) &&
     (*(char *)(param_1 + 0x48) != '\0')) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100a79c0 */
