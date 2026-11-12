/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00407e10
 * Name: FUN_00407e10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00407e10(void)

{
  undefined4 uVar1;
  
  if (DAT_004ca12c == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00407e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*DAT_004ca168)();
  return uVar1;
}


/* END FUNCTION 0x00407e10 */
