/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a6d0
 * Name: FUN_0040a6d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040a6d0(void)

{
  int in_EAX;
  
  if (in_EAX != 0) {
    if (*(int *)(*(int *)(in_EAX + 8) + 4) != 0) {
      DAT_004ed2f8 = DAT_004ed2f8 + -1;
    }
    FUN_0040a680();
  }
  return;
}


/* END FUNCTION 0x0040a6d0 */
