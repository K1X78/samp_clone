/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10076200
 * Name: FUN_10076200
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10076200(HKEY param_1,DWORD param_2)

{
  HKEY lpData;
  DWORD DVar1;
  LPBYTE pBVar2;
  LSTATUS LVar3;
  int iVar4;
  int iVar5;
  LPBYTE pBVar6;
  DWORD local_8;
  DWORD local_4;
  
  DVar1 = param_2;
  lpData = param_1;
  if ((param_1 == (HKEY)0x0) || ((int)param_2 < 1)) {
    return 0x80070057;
  }
  lstrcpyA((LPSTR)param_1,"");
  LVar3 = RegOpenKeyExA((HKEY)0x80000002,"Software\\Microsoft\\DirectX SDK",0,0x20019,&param_1);
  if (LVar3 != 0) {
    return 0x80004005;
  }
  local_8 = DVar1;
  LVar3 = RegQueryValueExA(param_1,"DX9S4SDK Samples Path",(LPDWORD)0x0,&local_4,(LPBYTE)lpData,
                           &local_8);
  *(BYTE *)((int)lpData + (DVar1 - 1)) = '\0';
  RegCloseKey(param_1);
  if (LVar3 != 0) {
    return 0x80004005;
  }
  iVar4 = lstrlenA((LPCSTR)lpData);
  iVar5 = lstrlenA("\\Media\\");
  if (iVar4 + iVar5 < (int)DVar1) {
    pBVar2 = (LPBYTE)((int)&lpData[-1].unused + 3);
    do {
      pBVar6 = pBVar2;
      pBVar2 = pBVar6 + 1;
    } while (pBVar6[1] != '\0');
    builtin_memcpy(pBVar6 + 1,"\\Media\\",8);
    return 0;
  }
  return 0x80070057;
}


/* END FUNCTION 0x10076200 */
