/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00418d50
 * Name: FUN_00418d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00418d50(int param_1,undefined4 param_2)

{
  bool bVar1;
  DWORD DVar2;
  undefined3 extraout_var;
  LPSTR _Memory;
  LPCSTR local_4;
  
  DVar2 = GetLastError();
  _Memory = (LPSTR)0x0;
  bVar1 = FUN_004091c0();
  local_4 = (LPCSTR)0x0;
  if (CONCAT31(extraout_var,bVar1) == 0) {
    DVar2 = FormatMessageA(0x1300,(LPCVOID)0x0,DVar2,0,(LPSTR)&local_4,0,(va_list *)0x0);
    bVar1 = true;
    if (DVar2 == 0) goto LAB_00418dc8;
    _Memory = FUN_004093b0(local_4);
  }
  else {
    DVar2 = FormatMessageW(0x1300,(LPCVOID)0x0,DVar2,0,(LPWSTR)&local_4,0,(va_list *)0x0);
    bVar1 = true;
    if (DVar2 == 0) goto LAB_00418dc8;
    _Memory = FUN_00409270();
  }
  LocalFree(local_4);
  bVar1 = DVar2 == 0;
LAB_00418dc8:
  if (bVar1) {
    FUN_004189f0(param_1,param_2,(undefined **)"OsError 0x%x (%u)");
    return 0;
  }
  FUN_004189f0(param_1,param_2,(undefined **)&DAT_004b23ac);
  _free(_Memory);
  return 0;
}


/* END FUNCTION 0x00418d50 */
