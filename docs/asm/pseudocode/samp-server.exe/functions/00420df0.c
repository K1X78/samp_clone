/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00420df0
 * Name: FUN_00420df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00420df0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041ab60(0x16,"COMMIT",0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0041c720();
    if (iVar1 != 0) {
      FUN_00414e70(1,0x21);
    }
  }
  return;
}


/* END FUNCTION 0x00420df0 */
