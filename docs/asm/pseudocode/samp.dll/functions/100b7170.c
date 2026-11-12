/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7170
 * Name: FUN_100b7170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100b7170(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_100b5d20(*(int *)(param_1 + 0x4c));
    if (iVar1 == 5) {
      if (*(float *)(*(int *)(param_1 + 0x4c) + 0x9cc) != 0.0) {
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100b7170 */
