/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a5964
 * Name: __mtinit
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl __mtinit(void)

{
  int iVar1;
  HMODULE hModule;
  DWORD *pDVar2;
  DWORD DVar3;
  
  iVar1 = __mtinitlocks();
  if (iVar1 == 0) {
    __mtterm();
    return 0;
  }
  hModule = GetModuleHandleA("kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_0051c3ac = GetProcAddress(hModule,"FlsAlloc");
    DAT_0051c3b0 = GetProcAddress(hModule,"FlsGetValue");
    DAT_0051c3b4 = GetProcAddress(hModule,"FlsSetValue");
    DAT_0051c3b8 = GetProcAddress(hModule,"FlsFree");
    if (DAT_0051c3b0 == (FARPROC)0x0) {
      DAT_0051c3b0 = TlsGetValue_exref;
      DAT_0051c3b4 = TlsSetValue_exref;
      DAT_0051c3ac = FUN_004a5744;
      DAT_0051c3b8 = TlsFree_exref;
    }
  }
  DAT_004ec4d4 = (*DAT_0051c3ac)(__freefls_4);
  if (((DAT_004ec4d4 != -1) && (pDVar2 = _calloc(1,0x8c), pDVar2 != (DWORD *)0x0)) &&
     (iVar1 = (*DAT_0051c3b4)(DAT_004ec4d4,pDVar2), iVar1 != 0)) {
    pDVar2[0x15] = (DWORD)&DAT_004ec7c0;
    pDVar2[5] = 1;
    DVar3 = GetCurrentThreadId();
    pDVar2[1] = 0xffffffff;
    *pDVar2 = DVar3;
    return 1;
  }
  __mtterm();
  return 0;
}


/* END FUNCTION 0x004a5964 */
