/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004115f0
 * Name: FUN_004115f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004115f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00407e50(*(int *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x1a0) = param_2;
  *(undefined4 *)(param_1 + 0x1a4) = param_3;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  FUN_00407e90(*(int *)(param_1 + 0x44));
  return 0;
}


/* END FUNCTION 0x004115f0 */
