/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7de0
 * Name: FUN_100b7de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall FUN_100b7de0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_100b37d0(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 != 0) {
      return (float10)*(float *)(*(int *)(param_1 + 0x4c) + 0x648);
    }
  }
  return (float10)0.0;
}


/* END FUNCTION 0x100b7de0 */
