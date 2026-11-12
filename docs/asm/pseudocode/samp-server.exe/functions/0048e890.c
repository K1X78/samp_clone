/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048e890
 * Name: FUN_0048e890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048e890(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 100) == 0) {
    FUN_0048dde0(param_1);
    FUN_0048dd90(param_1);
  }
  iVar1 = *(int *)(param_1 + 0x2c) + -1;
  *(int *)(param_1 + 0x376b8) = iVar1;
  *(int *)(param_1 + 0x32e70) = iVar1;
  FUN_0048c470();
  FUN_0048c470();
  return;
}


/* END FUNCTION 0x0048e890 */
