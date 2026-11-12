/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00427080
 * Name: FUN_00427080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00427080(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    FUN_0040a300();
    FUN_00427040(iVar1);
  }
  return;
}


/* END FUNCTION 0x00427080 */
