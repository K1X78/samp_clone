/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ed90
 * Name: FUN_0040ed90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040ed90(void)

{
  undefined4 *in_EAX;
  
  if (in_EAX[1] != 0) {
    *(undefined4 *)(in_EAX[1] + 0x208) = *in_EAX;
    in_EAX[1] = 0;
  }
  return;
}


/* END FUNCTION 0x0040ed90 */
