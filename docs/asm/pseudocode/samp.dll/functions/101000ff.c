/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101000ff
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
    DAT_102ace54 = GetProcAddress(hModule,"FlsAlloc");
    DAT_102ace58 = GetProcAddress(hModule,"FlsGetValue");
    DAT_102ace5c = GetProcAddress(hModule,"FlsSetValue");
    DAT_102ace60 = GetProcAddress(hModule,"FlsFree");
    if (DAT_102ace58 == (FARPROC)0x0) {
      DAT_102ace58 = TlsGetValue_exref;
      DAT_102ace5c = TlsSetValue_exref;
      DAT_102ace54 = FUN_100ffed3;
      DAT_102ace60 = TlsFree_exref;
    }
  }
  DAT_10155bc8 = (*DAT_102ace54)(__freefls_4);
  if (((DAT_10155bc8 != -1) && (pDVar2 = _calloc(1,0x8c), pDVar2 != (DWORD *)0x0)) &&
     (iVar1 = (*DAT_102ace5c)(DAT_10155bc8,pDVar2), iVar1 != 0)) {
    pDVar2[0x15] = (DWORD)&DAT_10155f08;
    pDVar2[5] = 1;
    DVar3 = GetCurrentThreadId();
    pDVar2[1] = 0xffffffff;
    *pDVar2 = DVar3;
    return 1;
  }
  __mtterm();
  return 0;
}


/* END FUNCTION 0x101000ff */
