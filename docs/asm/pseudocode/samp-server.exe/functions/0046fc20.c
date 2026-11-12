/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046fc20
 * Name: FUN_0046fc20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0046fc20(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    FUN_00407de0();
    _free((void *)*param_1);
    for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x0046fc20 */
