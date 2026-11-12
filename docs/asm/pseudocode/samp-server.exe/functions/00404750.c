/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404750
 * Name: FUN_00404750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00404750(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 8) < *(int *)(param_2 + 4)) {
    iVar1 = *(int *)(param_2 + 8);
  }
  return iVar1;
}


/* END FUNCTION 0x00404750 */
