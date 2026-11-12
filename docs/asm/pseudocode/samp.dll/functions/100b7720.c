/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7720
 * Name: FUN_100b7720
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_100b7720(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar1 = FUN_100b5d20(*(int *)(param_1 + 0x4c));
    if (uVar1 == 1) {
      return CONCAT31((int3)((uint)*(int *)(param_1 + 0x4c) >> 8),
                      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x5b0));
    }
  }
  return uVar1 & 0xffffff00;
}


/* END FUNCTION 0x100b7720 */
