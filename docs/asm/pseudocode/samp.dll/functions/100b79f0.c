/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b79f0
 * Name: FUN_100b79f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_100b79f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_100b37d0(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 != 0) {
      return CONCAT31((int3)((uint)iVar1 >> 8),*(byte *)(*(int *)(param_1 + 0x4c) + 0x4a8) >> 3) &
             0xffffff01;
    }
  }
  return 1;
}


/* END FUNCTION 0x100b79f0 */
