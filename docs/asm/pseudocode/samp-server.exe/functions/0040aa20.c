/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040aa20
 * Name: FUN_0040aa20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040aa20(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00407e50(DAT_004ed2ec);
    DAT_004ed2f0 = DAT_004ed2f0 + (param_2 - *(int *)(param_1 + 0xc));
    *(int *)(param_1 + 0xc) = param_2;
    FUN_0040a8a0();
    FUN_00407e90(DAT_004ed2ec);
  }
  return;
}


/* END FUNCTION 0x0040aa20 */
