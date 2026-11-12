/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d130
 * Name: FUN_0040d130
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040d130(void)

{
  int *piVar1;
  int extraout_EDX;
  
  FUN_0040d020();
  piVar1 = (int *)FUN_0040ba50();
  *(int *)(extraout_EDX + 0x2c) = *piVar1;
  *piVar1 = extraout_EDX;
  *(undefined4 *)(extraout_EDX + 0x28) = 1;
  return;
}


/* END FUNCTION 0x0040d130 */
