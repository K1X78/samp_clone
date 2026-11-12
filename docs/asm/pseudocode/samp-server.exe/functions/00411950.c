/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00411950
 * Name: FUN_00411950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00411950(int param_1,int param_2)

{
  FUN_00407e50(*(int *)(param_1 + 0x44));
  *(uint *)(param_1 + 0x18) = (-(uint)(param_2 != 0) & 0xffffff00) + 0xff;
  FUN_00407e90(*(int *)(param_1 + 0x44));
  return 0;
}


/* END FUNCTION 0x00411950 */
