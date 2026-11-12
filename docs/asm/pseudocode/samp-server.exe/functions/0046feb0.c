/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046feb0
 * Name: FUN_0046feb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0046feb0(void)

{
  int iVar1;
  
  iVar1 = FUN_00493520(DAT_004fc438,0);
  if (iVar1 != 0) {
    DAT_004fc454 = 1;
    return 0;
  }
  FUN_00491fa0("The gamemode finished and I couldn\'t start another script.");
  __fcloseall();
                    /* WARNING: Subroutine does not return */
  _exit(1);
}


/* END FUNCTION 0x0046feb0 */
