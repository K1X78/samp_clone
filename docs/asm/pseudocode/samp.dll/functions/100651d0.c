/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100651d0
 * Name: FUN_100651d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100651d0(void)

{
  if (DAT_1016c390 == (code *)0x0) {
    DAT_1016c390 = (code *)FUN_100650f0(&DAT_1011bb48);
  }
                    /* WARNING: Could not recover jumptable at 0x100651f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1016c390)();
  return;
}


/* END FUNCTION 0x100651d0 */
