/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008c270
 * Name: FUN_1008c270
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1008c270(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x150)) {
    do {
      _free(*(void **)(*(int *)(param_1 + 0x14c) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x150));
  }
  thunk_FUN_100866e0(0);
  FUN_100886d0(0,1);
  return;
}


/* END FUNCTION 0x1008c270 */
