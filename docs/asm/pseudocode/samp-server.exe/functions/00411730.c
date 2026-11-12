/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00411730
 * Name: FUN_00411730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00411730(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_00407e50(*(int *)(param_1 + 0x44));
  uVar1 = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x9c) = param_2;
  *(undefined4 *)(param_1 + 0xa0) = param_3;
  FUN_00407e90(*(int *)(param_1 + 0x44));
  return uVar1;
}


/* END FUNCTION 0x00411730 */
