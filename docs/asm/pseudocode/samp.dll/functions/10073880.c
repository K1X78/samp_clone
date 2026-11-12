/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10073880
 * Name: FUN_10073880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10073880(void)

{
  undefined4 *puStack00000004;
  
  puStack00000004 = DAT_10174d30;
                    /* WARNING: Could not recover jumptable at 0x1007388b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*DAT_10174d30)();
  return;
}


/* END FUNCTION 0x10073880 */
