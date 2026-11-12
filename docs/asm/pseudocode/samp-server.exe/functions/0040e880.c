/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040e880
 * Name: FUN_0040e880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_0040e880(void)

{
  int iVar1;
  byte *unaff_ESI;
  
  iVar1 = FUN_00408450(unaff_ESI,(byte *)"_ROWID_");
  if (iVar1 != 0) {
    iVar1 = FUN_00408450(unaff_ESI,(byte *)"ROWID");
    if (iVar1 != 0) {
      iVar1 = FUN_00408450(unaff_ESI,&DAT_004b6a98);
      return (bool)('\x01' - (iVar1 != 0));
    }
  }
  return true;
}


/* END FUNCTION 0x0040e880 */
