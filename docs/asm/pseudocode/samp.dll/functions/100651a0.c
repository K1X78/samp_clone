/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100651a0
 * Name: FUN_100651a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100651a0(void)

{
  if (DAT_1016c38c == (code *)0x0) {
    DAT_1016c38c = (code *)FUN_100650f0(&DAT_1011bb30);
  }
                    /* WARNING: Could not recover jumptable at 0x100651c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1016c38c)();
  return;
}


/* END FUNCTION 0x100651a0 */
