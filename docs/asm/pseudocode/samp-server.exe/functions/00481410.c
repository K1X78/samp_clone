/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00481410
 * Name: FUN_00481410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00481410(LPVOID param_1)

{
  HANDLE hObject;
  DWORD local_4;
  
  local_4 = 0;
  hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_004813a0,param_1,0,&local_4);
  if ((hObject != (HANDLE)0x0) && (hObject != (HANDLE)0xffffffff)) {
    CloseHandle(hObject);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00481410 */
