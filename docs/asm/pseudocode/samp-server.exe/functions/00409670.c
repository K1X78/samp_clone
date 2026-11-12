/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409670
 * Name: FUN_00409670
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00409670(int param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = FlushFileBuffers(*(HANDLE *)(param_1 + 8));
  if (BVar1 != 0) {
    return 0;
  }
  DVar2 = GetLastError();
  *(DWORD *)(param_1 + 0x10) = DVar2;
  return 10;
}


/* END FUNCTION 0x00409670 */
