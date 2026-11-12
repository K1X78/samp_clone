/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10085320
 * Name: FUN_10085320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10085320(int param_1)

{
  char cVar1;
  BOOL BVar2;
  HANDLE hMem;
  LPCWSTR lpString;
  int iVar3;
  
  FUN_100850e0();
  BVar2 = OpenClipboard((HWND)0x0);
  if (BVar2 == 0) {
    return;
  }
  hMem = GetClipboardData(0xd);
  if ((hMem != (HANDLE)0x0) && (lpString = GlobalLock(hMem), lpString != (LPCWSTR)0x0)) {
    cVar1 = FUN_1009b630(*(undefined4 *)(param_1 + 0x119),lpString,0xffffffff);
    if (cVar1 != '\0') {
      iVar3 = lstrlenW(lpString);
      FUN_10084ef0(iVar3 + *(int *)(param_1 + 0x119));
    }
    *(undefined4 *)(param_1 + 0x11e) = *(undefined4 *)(param_1 + 0x119);
    GlobalUnlock(hMem);
  }
                    /* WARNING: Could not recover jumptable at 0x10085392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseClipboard();
  return;
}


/* END FUNCTION 0x10085320 */
