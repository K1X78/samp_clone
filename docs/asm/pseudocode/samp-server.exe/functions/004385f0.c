/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004385f0
 * Name: FUN_004385f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004385f0(void)

{
  uint uVar1;
  int unaff_ESI;
  
  uVar1 = FUN_00437430(unaff_ESI,(byte *)"MATCH",2);
  if (uVar1 == 7) {
    *(undefined1 *)(unaff_ESI + 0x1e) = 1;
  }
  return;
}


/* END FUNCTION 0x004385f0 */
