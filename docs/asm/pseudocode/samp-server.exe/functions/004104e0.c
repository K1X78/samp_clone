/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004104e0
 * Name: FUN_004104e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004104e0(int param_1)

{
  int *in_EAX;
  
  if (*(int *)(param_1 + 0x20c) == 0) {
    *(int *)(param_1 + 0x20c) = *in_EAX;
    *(int *)(param_1 + 0x210) = in_EAX[1];
    return;
  }
  *(int *)(param_1 + 0x210) = (in_EAX[1] - *(int *)(param_1 + 0x20c)) + *in_EAX;
  return;
}


/* END FUNCTION 0x004104e0 */
