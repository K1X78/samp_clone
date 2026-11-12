/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100868b0
 * Name: FUN_100868b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100868b0(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (0x7fffffff < param_2) {
    return 0x80070057;
  }
  uVar1 = FUN_10084000(param_1,param_2,param_3,&stack0x00000010);
  return uVar1;
}


/* END FUNCTION 0x100868b0 */
