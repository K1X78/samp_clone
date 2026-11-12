/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00411630
 * Name: FUN_00411630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00411630(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00407e50(*(int *)(param_1 + 0x44));
  if (0 < param_2) {
    *(int *)(param_1 + 0x110) = param_2;
    *(undefined4 *)(param_1 + 0x10c) = param_4;
    *(undefined4 *)(param_1 + 0x108) = param_3;
    FUN_00407e90(*(int *)(param_1 + 0x44));
    return;
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  FUN_00407e90(*(int *)(param_1 + 0x44));
  return;
}


/* END FUNCTION 0x00411630 */
