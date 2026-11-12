/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040dcb0
 * Name: FUN_0040dcb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040dcb0(int param_1)

{
  int in_EAX;
  
  *(int *)(in_EAX + 0x3c) = param_1;
  *(int *)(in_EAX + 0x40) = *(int *)(in_EAX + 0x40) + param_1;
  return;
}


/* END FUNCTION 0x0040dcb0 */
