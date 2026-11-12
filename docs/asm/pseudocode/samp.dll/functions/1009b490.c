/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009b490
 * Name: FUN_1009b490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_1009b490(int *param_1,int param_2,undefined2 param_3)

{
  LPCWSTR lpString;
  uint in_EAX;
  int iVar1;
  LPCWSTR pWVar2;
  WCHAR *pWVar3;
  
  if ((-1 < param_2) && (in_EAX = lstrlenW((LPCWSTR)*param_1), param_2 <= (int)in_EAX)) {
    iVar1 = lstrlenW((LPCWSTR)*param_1);
    in_EAX = iVar1 + 1;
    if (((int)in_EAX < 0xffff) &&
       ((iVar1 = lstrlenW((LPCWSTR)*param_1), iVar1 + 1 < param_1[1] ||
        (in_EAX = FUN_1009b240(0xffffffff), (char)in_EAX != '\0')))) {
      lpString = (LPCWSTR)*param_1;
      iVar1 = lstrlenW(lpString);
      pWVar2 = lpString + iVar1 + 1;
      pWVar3 = pWVar2;
      for (; lpString + param_2 < pWVar2; pWVar2 = pWVar2 + -1) {
        pWVar3 = pWVar3 + -1;
        *pWVar2 = *pWVar3;
      }
      *(undefined2 *)(*param_1 + param_2 * 2) = param_3;
      *(undefined1 *)((int)param_1 + 0xd) = 1;
      return CONCAT31((int3)((uint)pWVar2 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


/* END FUNCTION 0x1009b490 */
