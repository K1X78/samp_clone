/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00418ef0
 * Name: FUN_00418ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_00418ef0(undefined4 param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  WCHAR WVar3;
  bool bVar4;
  int iVar5;
  LPCWSTR lpRootPathName;
  undefined3 extraout_var;
  WCHAR *pWVar6;
  LPCWSTR pWVar7;
  DWORD local_110;
  DWORD local_10c;
  undefined1 local_108 [264];
  
  local_10c = 0x200;
  iVar5 = FUN_00418e10(param_2,param_1,0x104,local_108);
  if (iVar5 != 0) {
    return local_10c;
  }
  lpRootPathName = (LPCWSTR)FUN_00409ab0();
  if (lpRootPathName != (LPCWSTR)0x0) {
    bVar4 = FUN_004091c0();
    if (CONCAT31(extraout_var,bVar4) == 0) {
      cVar2 = (char)*lpRootPathName;
      pWVar7 = lpRootPathName;
      while (cVar2 != '\0') {
        if ((char)*pWVar7 == '\\') {
          *(char *)pWVar7 = '\0';
          break;
        }
        pcVar1 = (char *)((int)pWVar7 + 1);
        pWVar7 = (LPCWSTR)((int)pWVar7 + 1);
        cVar2 = *pcVar1;
      }
      iVar5 = GetDiskFreeSpaceA((LPCSTR)lpRootPathName,&local_110,&local_10c,&local_110,&local_110);
    }
    else {
      WVar3 = *lpRootPathName;
      pWVar6 = lpRootPathName;
      while (WVar3 != L'\0') {
        if (*pWVar6 == L'\\') {
          *pWVar6 = L'\0';
          break;
        }
        pWVar6 = pWVar6 + 1;
        WVar3 = *pWVar6;
      }
      iVar5 = GetDiskFreeSpaceW(lpRootPathName,&local_110,&local_10c,&local_110,&local_110);
    }
    _free(lpRootPathName);
    if (iVar5 != 0) {
      return local_10c;
    }
  }
  return 0x200;
}


/* END FUNCTION 0x00418ef0 */
