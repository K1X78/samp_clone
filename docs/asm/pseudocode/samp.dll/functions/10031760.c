/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10031760
 * Name: FUN_10031760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10031760(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xd) != 0) {
    do {
      _free(*(void **)(*(int *)(*(int *)(param_1 + 9) + uVar1 * 4) + 0x15));
      _free(*(void **)(*(int *)(param_1 + 9) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xd));
  }
  FUN_10031530(0);
  return;
}


/* END FUNCTION 0x10031760 */
