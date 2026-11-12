/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6ef0
 * Name: FUN_100b6ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100b6ef0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    return 0;
  }
  uVar1 = FUN_100b1f10(&DAT_1011f678,*(undefined4 *)(param_1 + 0x44));
  return uVar1;
}


/* END FUNCTION 0x100b6ef0 */
