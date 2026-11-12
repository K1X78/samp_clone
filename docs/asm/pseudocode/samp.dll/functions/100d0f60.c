/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d0f60
 * Name: FUN_100d0f60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d0f60(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 800) + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100d0f75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


/* END FUNCTION 0x100d0f60 */
