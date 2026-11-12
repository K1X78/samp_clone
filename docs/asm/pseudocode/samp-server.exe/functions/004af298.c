/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004af298
 * Name: ___security_init_cookie
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  if ((DAT_004ec7b4 == 0) || (DAT_004ec7b4 == 0xbb40e64e)) {
    GetSystemTimeAsFileTime(&local_c);
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_004ec7b4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime ^ DVar1 ^ DVar2 ^ DVar3 ^
                   local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_004ec7b4 == 0) {
      DAT_004ec7b4 = 0xbb40e64e;
    }
  }
  return;
}


/* END FUNCTION 0x004af298 */
