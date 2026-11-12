/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d4e0
 * Name: FUN_0040d4e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040d4e0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x20) - (param_2 * 4 + 4)) = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}


/* END FUNCTION 0x0040d4e0 */
