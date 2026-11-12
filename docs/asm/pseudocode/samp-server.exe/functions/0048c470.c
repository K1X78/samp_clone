/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c470
 * Name: FUN_0048c470
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0048c470(void)

{
  uint unaff_EBX;
  uint uVar1;
  
  uVar1 = 0;
  if (unaff_EBX != 0) {
    do {
      FUN_0048c430();
      uVar1 = uVar1 + 1;
    } while (uVar1 < unaff_EBX);
  }
  return;
}


/* END FUNCTION 0x0048c470 */
