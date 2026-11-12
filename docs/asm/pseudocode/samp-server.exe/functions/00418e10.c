/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00418e10
 * Name: FUN_00418e10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl
FUN_00418e10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  LPCWSTR lpFileName;
  undefined3 extraout_var;
  DWORD DVar2;
  LPWSTR lpBuffer;
  LPSTR _Memory;
  LPCSTR lpBuffer_00;
  
  lpFileName = (LPCWSTR)FUN_00409ab0();
  bVar1 = FUN_004091c0();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    DVar2 = GetFullPathNameA((LPCSTR)lpFileName,0,(LPSTR)0x0,(LPSTR *)0x0);
    lpBuffer_00 = _malloc(DVar2 + 3);
    if (lpBuffer_00 == (LPCSTR)0x0) goto LAB_00418e89;
    GetFullPathNameA((LPCSTR)lpFileName,DVar2 + 3,lpBuffer_00,(LPSTR *)0x0);
    _free(lpFileName);
    _Memory = FUN_004093b0(lpBuffer_00);
    _free(lpBuffer_00);
  }
  else {
    DVar2 = GetFullPathNameW(lpFileName,0,(LPWSTR)0x0,(LPWSTR *)0x0);
    lpBuffer = _malloc((DVar2 + 3) * 2);
    if (lpBuffer == (LPWSTR)0x0) {
LAB_00418e89:
      _free(lpFileName);
      return 7;
    }
    GetFullPathNameW(lpFileName,DVar2 + 3,lpBuffer,(LPWSTR *)0x0);
    _free(lpFileName);
    _Memory = FUN_00409270();
    _free(lpBuffer);
  }
  if (_Memory == (LPSTR)0x0) {
    return 7;
  }
  FUN_004189f0(*(int *)(param_1 + 8),param_4,(undefined **)&DAT_004b23ac);
  _free(_Memory);
  return 0;
}


/* END FUNCTION 0x00418e10 */
