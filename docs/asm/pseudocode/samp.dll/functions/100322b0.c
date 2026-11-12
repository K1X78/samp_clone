/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100322b0
 * Name: FUN_100322b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100322b0(int param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xd) != 0) {
    do {
      cVar1 = FUN_100331a0(&stack0x00000004);
      if (cVar1 != '\0') {
        _free(*(void **)(*(int *)(*(int *)(param_1 + 9) + uVar2 * 4) + 0x15));
        _free(*(void **)(*(int *)(param_1 + 9) + uVar2 * 4));
        FUN_10031be0(uVar2);
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0xd));
  }
  return 0;
}


/* END FUNCTION 0x100322b0 */
