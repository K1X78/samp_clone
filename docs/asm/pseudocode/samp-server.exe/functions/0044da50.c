/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044da50
 * Name: FUN_0044da50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0044da50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 8) = (iVar1 - (iVar1 - 1U & 7)) + 7;
  }
  return;
}


/* END FUNCTION 0x0044da50 */
