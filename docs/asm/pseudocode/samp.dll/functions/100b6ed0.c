/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6ed0
 * Name: FUN_100b6ed0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100b6ed0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar1 = FUN_100b5d20(*(int *)(param_1 + 0x4c));
    return uVar1;
  }
  return 0;
}


/* END FUNCTION 0x100b6ed0 */
