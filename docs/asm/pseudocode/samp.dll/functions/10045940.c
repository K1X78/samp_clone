/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10045940
 * Name: FUN_10045940
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_10045940(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_100458b0(param_2,&param_2);
  if ((char)param_2 != '\0') {
    return 0xffffffff;
  }
  if (*(uint *)(param_1 + 4) <= uVar1) {
    FUN_10044710(*param_3);
    return *(int *)(param_1 + 4) - 1;
  }
  FUN_10044780(*param_3,uVar1);
  return uVar1;
}


/* END FUNCTION 0x10045940 */
