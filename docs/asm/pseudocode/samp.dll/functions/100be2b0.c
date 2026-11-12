/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100be2b0
 * Name: FUN_100be2b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100be2b0(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 & 0x3fffffff) != param_1) {
    return 0;
  }
  uVar1 = (*(code *)*param_2)(param_2,param_1 * 4);
  return uVar1;
}


/* END FUNCTION 0x100be2b0 */
