/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004af531
 * Name: ___crtMessageBoxA
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  int iVar1;
  int iVar2;
  undefined1 local_14 [8];
  byte local_c;
  undefined1 local_8 [4];
  
  iVar2 = 0;
  if (DAT_0051c694 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if ((hModule == (HMODULE)0x0) ||
       (DAT_0051c694 = GetProcAddress(hModule,"MessageBoxA"), DAT_0051c694 == (FARPROC)0x0)) {
      return 0;
    }
    DAT_0051c698 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_0051c69c = GetProcAddress(hModule,"GetLastActivePopup");
    if ((DAT_0051c1f0 == 2) &&
       (DAT_0051c6a4 = GetProcAddress(hModule,"GetUserObjectInformationA"),
       DAT_0051c6a4 != (FARPROC)0x0)) {
      DAT_0051c6a0 = GetProcAddress(hModule,"GetProcessWindowStation");
    }
  }
  if ((DAT_0051c6a0 == (FARPROC)0x0) ||
     (((iVar1 = (*DAT_0051c6a0)(), iVar1 != 0 &&
       (iVar1 = (*DAT_0051c6a4)(iVar1,1,local_14,0xc,local_8), iVar1 != 0)) && ((local_c & 1) != 0))
     )) {
    if (((DAT_0051c698 != (FARPROC)0x0) && (iVar2 = (*DAT_0051c698)(), iVar2 != 0)) &&
       (DAT_0051c69c != (FARPROC)0x0)) {
      iVar2 = (*DAT_0051c69c)(iVar2);
    }
  }
  else if (DAT_0051c1fc < 4) {
    _UType = _UType | 0x40000;
  }
  else {
    _UType = _UType | 0x200000;
  }
  iVar2 = (*DAT_0051c694)(iVar2,_LpText,_LpCaption,_UType);
  return iVar2;
}


/* END FUNCTION 0x004af531 */
