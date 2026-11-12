/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ce7d0
 * Name: FUN_100ce7d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ce7d0(void)

{
  undefined4 uVar1;
  
  if (DAT_102acce0 != 0) {
    return 1;
  }
  DAT_102acce0 = 1;
                    /* WARNING: Could not recover jumptable at 0x100ce7ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_DAT_10155510 + 0x10))();
  return uVar1;
}


/* END FUNCTION 0x100ce7d0 */
