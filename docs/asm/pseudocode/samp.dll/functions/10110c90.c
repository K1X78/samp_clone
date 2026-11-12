/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10110c90
 * Name: FUN_10110c90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10110c90(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (((*(int *)(param_1 + 0xc) == 0) || (*(int *)(param_1 + 4) == 0)) ||
     (*(int *)(param_1 + 8) == 0)) {
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    uVar1 = 1;
  }
  return uVar1;
}


/* END FUNCTION 0x10110c90 */
