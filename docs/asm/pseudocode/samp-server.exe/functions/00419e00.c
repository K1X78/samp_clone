/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00419e00
 * Name: FUN_00419e00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00419e00(void)

{
  int in_EAX;
  undefined4 uVar1;
  
  if (in_EAX == 0) {
    FUN_00418ab0(0x15,(undefined **)"API called with NULL prepared statement");
    return 1;
  }
  uVar1 = FUN_00419de0();
  return uVar1;
}


/* END FUNCTION 0x00419e00 */
