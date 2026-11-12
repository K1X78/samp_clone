/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10061970
 * Name: FUN_10061970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10061970(void)

{
  HWND hWnd;
  HWND hWnd_00;
  DWORD DVar1;
  
  hWnd = _DAT_00c97c1c;
  if (_DAT_00c97c1c != (HWND)0x0) {
    DVar1 = GetClassLongA(_DAT_00c97c1c,-0x1a);
    SetClassLongA(hWnd,-0x1a,DVar1 | 8);
    hWnd_00 = _DAT_00c97c1c;
    if (_DAT_00c97c1c != (HWND)0x0) {
      DAT_1016be78 = (undefined *)GetWindowLongA(_DAT_00c97c1c,-4);
      if (DAT_1016be78 != &DAT_100610d0) {
        SetWindowLongA(hWnd_00,-4,0x100610d0);
      }
    }
    SetWindowTextA(hWnd,"GTA:SA:MP");
    IsWindowUnicode(hWnd);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x10061970 */
