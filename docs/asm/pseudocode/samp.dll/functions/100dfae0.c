/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dfae0
 * Name: FUN_100dfae0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


HMODULE FUN_100dfae0(char *param_1)

{
  char cVar1;
  int iVar2;
  HMODULE pHVar3;
  FARPROC pFVar4;
  char *pcVar5;
  FARPROC pFVar6;
  UINT UVar7;
  LPSTR lpBuffer;
  LPSTR pCVar8;
  HMODULE pHVar9;
  
  pHVar9 = (HMODULE)0x0;
  pHVar3 = GetModuleHandleA("kernel32");
  if (pHVar3 == (HMODULE)0x0) {
    return (HMODULE)0x0;
  }
  pFVar4 = GetProcAddress(pHVar3,"LoadLibraryExA");
  pcVar5 = _strpbrk(param_1,"\\/");
  if (pcVar5 != (char *)0x0) {
    if (pFVar4 != (FARPROC)0x0) {
      pHVar3 = (HMODULE)(*pFVar4)(param_1,0,8);
      return pHVar3;
    }
    pHVar3 = LoadLibraryA(param_1);
    return pHVar3;
  }
  if (pFVar4 != (FARPROC)0x0) {
    pFVar6 = GetProcAddress(pHVar3,"AddDllDirectory");
    if (pFVar6 != (FARPROC)0x0) {
      pHVar3 = (HMODULE)(*pFVar4)(param_1,0,0x800);
      return pHVar3;
    }
  }
  UVar7 = GetSystemDirectoryA((LPSTR)0x0,0);
  if (UVar7 != 0) {
    pcVar5 = param_1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    lpBuffer = (LPSTR)(*(code *)PTR__malloc_101554b8)(pcVar5 + UVar7 + (1 - (int)(param_1 + 1)));
    if (lpBuffer != (LPSTR)0x0) {
      UVar7 = GetSystemDirectoryA(lpBuffer,UVar7);
      if (UVar7 != 0) {
        pCVar8 = lpBuffer;
        do {
          cVar1 = *pCVar8;
          pCVar8 = pCVar8 + 1;
        } while (cVar1 != '\0');
        (lpBuffer + ((int)pCVar8 - (int)(lpBuffer + 1)))[0] = '\\';
        (lpBuffer + ((int)pCVar8 - (int)(lpBuffer + 1)))[1] = '\0';
        pCVar8 = lpBuffer;
        do {
          cVar1 = *pCVar8;
          pCVar8 = pCVar8 + 1;
        } while (cVar1 != '\0');
        iVar2 = -(int)param_1;
        do {
          cVar1 = *param_1;
          param_1[(int)(lpBuffer + (int)(pCVar8 + (iVar2 - (int)(lpBuffer + 1))))] = cVar1;
          param_1 = param_1 + 1;
        } while (cVar1 != '\0');
        if (pFVar4 != (FARPROC)0x0) {
          pHVar3 = (HMODULE)(*pFVar4)(lpBuffer,0,8);
          (*(code *)PTR__free_101554bc)(lpBuffer);
          return pHVar3;
        }
        pHVar9 = LoadLibraryA(lpBuffer);
      }
    }
    (*(code *)PTR__free_101554bc)(lpBuffer);
  }
  return pHVar9;
}


/* END FUNCTION 0x100dfae0 */
