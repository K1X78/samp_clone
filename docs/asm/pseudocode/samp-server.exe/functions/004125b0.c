/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004125b0
 * Name: FUN_004125b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004125b0(int param_1)

{
  int iVar1;
  
  if ((0 < param_1) && (param_1 < 0x7fffff00)) {
    if (DAT_004ca128 != 0) {
      FUN_00407e50(DAT_004ed530);
      FUN_00412510();
      FUN_00407e90(DAT_004ed530);
      return param_1;
    }
    iVar1 = (*DAT_004ca140)(param_1);
    return iVar1;
  }
  return 0;
}


/* END FUNCTION 0x004125b0 */
