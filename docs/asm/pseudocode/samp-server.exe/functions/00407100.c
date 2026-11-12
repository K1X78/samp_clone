/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00407100
 * Name: FUN_00407100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00407100(undefined4 param_1,int param_2)

{
  _SYSTEMTIME local_10;
  
  GetLocalTime(&local_10);
  if (*(int *)(param_2 + 4) != 0) {
    local_10.wYear = (WORD)*(int *)(param_2 + 4);
  }
  if (*(int *)(param_2 + 8) != 0) {
    local_10.wMonth = (WORD)*(int *)(param_2 + 8);
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    local_10.wDay = (WORD)*(int *)(param_2 + 0xc);
  }
  SetLocalTime(&local_10);
  return 0;
}


/* END FUNCTION 0x00407100 */
