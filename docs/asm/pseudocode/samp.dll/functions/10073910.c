/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10073910
 * Name: FUN_10073910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10073910(void)

{
  int *piStack00000004;
  
  piStack00000004 = DAT_10174d30;
                    /* WARNING: Could not recover jumptable at 0x1007391b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_10174d30 + 0x28))();
  return;
}


/* END FUNCTION 0x10073910 */
