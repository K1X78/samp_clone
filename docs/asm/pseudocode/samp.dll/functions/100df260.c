/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100df260
 * Name: FUN_100df260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100df260(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x100df279. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_2 + 0xc))();
  return uVar1;
}


/* END FUNCTION 0x100df260 */
