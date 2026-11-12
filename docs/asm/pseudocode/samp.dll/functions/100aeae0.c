/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100aeae0
 * Name: FUN_100aeae0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100aeae0(int param_1,int param_2)

{
  float *pfVar1;
  
  FUN_100ae680(param_2,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2a4) + 0x490) + 0x14));
  pfVar1 = (float *)FUN_1009c400();
  *(float *)(param_2 + 0x30) = *pfVar1 * 0.04 + *(float *)(param_2 + 0x30);
  *(float *)(param_2 + 0x34) = pfVar1[1] * 0.04 + *(float *)(param_2 + 0x34);
  *(float *)(param_2 + 0x38) = *(float *)(param_2 + 0x38) + 0.08;
  return;
}


/* END FUNCTION 0x100aeae0 */
