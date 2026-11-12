/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10084880
 * Name: FUN_10084880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10084880(void)

{
  if (DAT_10180610 != (int *)0x0) {
    (**(code **)(*DAT_10180610 + 0x24))();
    DAT_10180610 = (int *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x10084899. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseCapture();
  return;
}


/* END FUNCTION 0x10084880 */
