/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00407da0
 * Name: FUN_00407da0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00407da0(void)

{
  if (DAT_004ed470 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00407da9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004ed470)();
    return;
  }
  return;
}


/* END FUNCTION 0x00407da0 */
