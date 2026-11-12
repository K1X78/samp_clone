/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d0fa0
 * Name: FUN_100d0fa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d0fa0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(int *)(*(int *)(param_1 + 800) + 0x18) != 0)) {
    *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x100d0fd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(param_1 + 800) + 0x18))();
    return uVar1;
  }
  *param_2 = 1;
  return 0;
}


/* END FUNCTION 0x100d0fa0 */
