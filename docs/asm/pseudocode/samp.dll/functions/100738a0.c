/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100738a0
 * Name: FUN_100738a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100738a0(void)

{
  int *piStack00000004;
  
  piStack00000004 = DAT_10174d30;
                    /* WARNING: Could not recover jumptable at 0x100738ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_10174d30 + 8))();
  return;
}


/* END FUNCTION 0x100738a0 */
