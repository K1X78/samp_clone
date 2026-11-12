/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10043b30
 * Name: FUN_10043b30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10043b30(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x2cd) * 3;
  if (uVar1 < 0x1e) {
    *(undefined4 *)(param_1 + 0x6cd) = 30000;
    *(undefined4 *)(param_1 + 0x6d1) = 0;
    return;
  }
  *(ulonglong *)(param_1 + 0x6cd) = (ulonglong)uVar1 * 1000;
  return;
}


/* END FUNCTION 0x10043b30 */
