/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040fb10
 * Name: FUN_0040fb10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0040fb10(void)

{
  int iVar1;
  byte *unaff_ESI;
  
  if (unaff_ESI != (byte *)0x0) {
    iVar1 = FUN_00408450(unaff_ESI,(byte *)"exclusive");
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = FUN_00408450(unaff_ESI,(byte *)"normal");
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0xffffffff;
}


/* END FUNCTION 0x0040fb10 */
