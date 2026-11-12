/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b5ea0
 * Name: FUN_100b5ea0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 FUN_100b5ea0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_100a7630(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_100a7630(param_1);
    if (*(int *)(iVar1 + 0x14) != 0) {
      return (float10)*(float *)(*(int *)(iVar1 + 0x14) + 0x24);
    }
  }
  return (float10)0.0;
}


/* END FUNCTION 0x100b5ea0 */
