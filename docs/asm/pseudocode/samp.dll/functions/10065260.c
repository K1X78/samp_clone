/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065260
 * Name: FUN_10065260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10065260(void)

{
  if (DAT_1016c39c == (code *)0x0) {
    DAT_1016c39c = (code *)FUN_100650f0(&DAT_1011bb80);
  }
                    /* WARNING: Could not recover jumptable at 0x10065282. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1016c39c)();
  return;
}


/* END FUNCTION 0x10065260 */
