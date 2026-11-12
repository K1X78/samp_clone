/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004102f0
 * Name: FUN_004102f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004102f0(int param_1)

{
  int *in_EAX;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    *(int *)(param_1 + 8) = in_EAX[2];
    *(int *)(param_1 + 0x40) = in_EAX[0x10];
    return;
  }
  FUN_00408130(*in_EAX);
  return;
}


/* END FUNCTION 0x004102f0 */
