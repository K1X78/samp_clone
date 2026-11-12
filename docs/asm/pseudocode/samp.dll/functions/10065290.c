/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065290
 * Name: FUN_10065290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10065290(void)

{
  if (DAT_1016c3a0 == (code *)0x0) {
    DAT_1016c3a0 = (code *)FUN_100650f0(&DAT_1011bb90);
  }
                    /* WARNING: Could not recover jumptable at 0x100652b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1016c3a0)();
  return;
}


/* END FUNCTION 0x10065290 */
