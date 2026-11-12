/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10038ec0
 * Name: FUN_10038ec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10038ec0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x2a);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 != *(int *)(param_1 + 4)) {
    do {
      iVar1 = *(int *)((int)*(void **)(param_1 + 8) + 0x2a);
      _free(*(void **)(param_1 + 8));
      *(int *)(param_1 + 8) = iVar1;
    } while (iVar1 != *(int *)(param_1 + 4));
  }
  _free(*(void **)(param_1 + 8));
  return;
}


/* END FUNCTION 0x10038ec0 */
