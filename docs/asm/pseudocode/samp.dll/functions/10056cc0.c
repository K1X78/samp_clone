/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10056cc0
 * Name: FUN_10056cc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10056cc0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_100559f0();
    uVar1 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      do {
        _free(*(void **)(*(int *)(param_1 + 8) + uVar1 * 4));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0xc));
    }
    FUN_10056c40(0);
  }
  return;
}


/* END FUNCTION 0x10056cc0 */
