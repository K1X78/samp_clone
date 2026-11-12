/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c3f50
 * Name: FUN_100c3f50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c3f50(void)

{
  int unaff_EBX;
  
  *(undefined4 *)(unaff_EBX + 0x6c) = 1;
  if (*(int *)(unaff_EBX + 0x68) != 0) {
    FUN_100c3e50();
  }
  FUN_100c20c0();
  FUN_100c1fe0();
  FUN_100c3f00();
  return;
}


/* END FUNCTION 0x100c3f50 */
