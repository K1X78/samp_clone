/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010ecae
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
  if (DAT_102ad284 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if ((hModule == (HMODULE)0x0) ||
       (DAT_102ad284 = GetProcAddress(hModule,"MessageBoxA"), DAT_102ad284 == (FARPROC)0x0)) {
      return 0;
    }
    DAT_102ad288 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_102ad28c = GetProcAddress(hModule,"GetLastActivePopup");
    if ((DAT_102acd44 == 2) &&
       (DAT_102ad294 = GetProcAddress(hModule,"GetUserObjectInformationA"),
       DAT_102ad294 != (FARPROC)0x0)) {
      DAT_102ad290 = GetProcAddress(hModule,"GetProcessWindowStation");
    }
  }
  if ((DAT_102ad290 == (FARPROC)0x0) ||
     (((iVar1 = (*DAT_102ad290)(), iVar1 != 0 &&
       (iVar1 = (*DAT_102ad294)(iVar1,1,local_14,0xc,local_8), iVar1 != 0)) && ((local_c & 1) != 0))
     )) {
    if (((DAT_102ad288 != (FARPROC)0x0) && (iVar2 = (*DAT_102ad288)(), iVar2 != 0)) &&
       (DAT_102ad28c != (FARPROC)0x0)) {
      iVar2 = (*DAT_102ad28c)(iVar2);
    }
  }
  else if (DAT_102acd50 < 4) {
    _UType = _UType | 0x40000;
  }
  else {
    _UType = _UType | 0x200000;
  }
  iVar2 = (*DAT_102ad284)(iVar2,_LpText,_LpCaption,_UType);
  return iVar2;
}


/* END FUNCTION 0x1010ecae */
