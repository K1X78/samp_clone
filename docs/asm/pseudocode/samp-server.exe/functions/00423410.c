/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00423410
 * Name: FUN_00423410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00423410(void)

{
  int iVar1;
  int unaff_EBX;
  uint local_4;
  
  local_4 = 0;
  FUN_0040c120();
  iVar1 = FUN_0041ebb0();
  if (iVar1 == 0) {
    if (local_4 != 0) {
      FUN_00413a30();
    }
    FUN_00414010(&local_4);
  }
  *(undefined1 *)(unaff_EBX + 0xe) = 1;
  return;
}


/* END FUNCTION 0x00423410 */
