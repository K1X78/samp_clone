/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004103b0
 * Name: FUN_004103b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004103b0(int param_1)

{
  int *piVar1;
  int in_EAX;
  
  for (piVar1 = *(int **)(in_EAX + 0x34); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[4]) {
  }
  return;
}


/* END FUNCTION 0x004103b0 */
