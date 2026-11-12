/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00407010
 * Name: FUN_00407010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00407010(undefined4 param_1,int param_2)

{
  _SYSTEMTIME local_10;
  
  GetLocalTime(&local_10);
  if (-1 < *(int *)(param_2 + 4)) {
    local_10.wHour = (WORD)*(int *)(param_2 + 4);
  }
  if (-1 < *(int *)(param_2 + 8)) {
    local_10.wMinute = (WORD)*(int *)(param_2 + 8);
  }
  if (-1 < *(int *)(param_2 + 0xc)) {
    local_10.wSecond = (WORD)*(int *)(param_2 + 0xc);
  }
  SetLocalTime(&local_10);
  return 0;
}


/* END FUNCTION 0x00407010 */
