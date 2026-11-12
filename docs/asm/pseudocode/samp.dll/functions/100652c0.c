/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100652c0
 * Name: FUN_100652c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100652c0(void)

{
  if (DAT_1016c3a4 == (code *)0x0) {
    DAT_1016c3a4 = (code *)FUN_100650f0(&DAT_1011bba0);
  }
                    /* WARNING: Could not recover jumptable at 0x100652e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1016c3a4)();
  return;
}


/* END FUNCTION 0x100652c0 */
