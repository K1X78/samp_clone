/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ed30
 * Name: FUN_0040ed30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0040ed30(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00407e50(*(int *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x100) = param_2;
  *(undefined4 *)(param_1 + 0x104) = param_3;
  FUN_0040dcd0();
  FUN_00407e90(*(int *)(param_1 + 0x44));
  return 0;
}


/* END FUNCTION 0x0040ed30 */
