/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6f30
 * Name: FUN_100b6f30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100b6f30(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_100b3860();
    if (*(int *)(*(int *)(param_1 + 0x4c) + 0x460) == iVar1) {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x100b6f30 */
