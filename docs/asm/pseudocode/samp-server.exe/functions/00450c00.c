/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450c00
 * Name: FUN_00450c00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00450c00(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x30);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 != *(int *)(param_1 + 4)) {
    do {
      iVar1 = *(int *)((int)*(void **)(param_1 + 8) + 0x30);
      _free(*(void **)(param_1 + 8));
      *(int *)(param_1 + 8) = iVar1;
    } while (iVar1 != *(int *)(param_1 + 4));
  }
  _free(*(void **)(param_1 + 8));
  return;
}


/* END FUNCTION 0x00450c00 */
