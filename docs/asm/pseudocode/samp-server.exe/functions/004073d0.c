/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004073d0
 * Name: FUN_004073d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004073d0(int param_1)

{
  int in_EAX;
  
  *(int *)(&DAT_004ed420 + param_1 * 4) = in_EAX;
  if (*(int *)(&DAT_004ed444 + param_1 * 4) < in_EAX) {
    *(int *)(&DAT_004ed444 + param_1 * 4) = in_EAX;
  }
  return;
}


/* END FUNCTION 0x004073d0 */
