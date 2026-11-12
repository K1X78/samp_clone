/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045b290
 * Name: FUN_0045b290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0045b290(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x2d8) * 3;
  if (uVar1 < 0x1e) {
    *(undefined4 *)(param_1 + 0x700) = 30000;
    *(undefined4 *)(param_1 + 0x704) = 0;
    return;
  }
  *(ulonglong *)(param_1 + 0x700) = (ulonglong)uVar1 * 1000;
  return;
}


/* END FUNCTION 0x0045b290 */
