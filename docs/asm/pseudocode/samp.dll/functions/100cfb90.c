/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cfb90
 * Name: FUN_100cfb90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100cfb90(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) != 2) {
    return 0;
  }
  uVar1 = FUN_100e4690(2,*(int *)(param_1 + 0x18) + 4,param_2,param_3);
  return uVar1;
}


/* END FUNCTION 0x100cfb90 */
