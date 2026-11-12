/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10073900
 * Name: FUN_10073900
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10073900(void)

{
  int *piStack00000004;
  
  piStack00000004 = DAT_10174d30;
                    /* WARNING: Could not recover jumptable at 0x1007390b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_10174d30 + 0x20))();
  return;
}


/* END FUNCTION 0x10073900 */
