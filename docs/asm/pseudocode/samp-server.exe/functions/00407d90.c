/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00407d90
 * Name: FUN_00407d90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00407d90(void)

{
  if (DAT_004ed46c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00407d99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_004ed46c)();
    return;
  }
  return;
}


/* END FUNCTION 0x00407d90 */
