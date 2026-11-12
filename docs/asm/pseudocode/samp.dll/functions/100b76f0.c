/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b76f0
 * Name: FUN_100b76f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100b76f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_100b5d20(*(int *)(param_1 + 0x4c));
    if (iVar1 == 1) {
      return *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x5a9);
    }
  }
  return 0;
}


/* END FUNCTION 0x100b76f0 */
