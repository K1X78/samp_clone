/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10033700
 * Name: FUN_10033700
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10033700(undefined4 param_1)

{
  int iVar1;
  int *extraout_ECX;
  
  iVar1 = FUN_10033640(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x10033714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*extraout_ECX + 0x3c))();
    return;
  }
  return;
}


/* END FUNCTION 0x10033700 */
