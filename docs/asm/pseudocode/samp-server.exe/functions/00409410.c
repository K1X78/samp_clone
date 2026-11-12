/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409410
 * Name: FUN_00409410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte __cdecl FUN_00409410(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = CloseHandle(*(HANDLE *)(param_1 + 8));
  while ((iVar1 == 0 && (iVar2 = iVar2 + 1, iVar2 < 3))) {
    Sleep(100);
    iVar1 = CloseHandle(*(HANDLE *)(param_1 + 8));
  }
  return (iVar1 != 0) - 1U & 10;
}


/* END FUNCTION 0x00409410 */
