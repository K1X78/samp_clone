/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065200
 * Name: FUN_10065200
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10065200(void)

{
  if (DAT_1016c394 == (code *)0x0) {
    DAT_1016c394 = (code *)FUN_100650f0(&DAT_1011bb58);
  }
                    /* WARNING: Could not recover jumptable at 0x10065222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1016c394)();
  return;
}


/* END FUNCTION 0x10065200 */
