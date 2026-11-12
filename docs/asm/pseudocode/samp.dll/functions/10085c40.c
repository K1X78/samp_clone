/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10085c40
 * Name: FUN_10085c40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10085c40(void)

{
  BOOL BVar1;
  tagMSG local_1c;
  
  BVar1 = PeekMessageW(&local_1c,(HWND)0x0,0,0,0);
  if (BVar1 != 0) {
    while (BVar1 = GetMessageW(&local_1c,(HWND)0x0,0,0), BVar1 != 0) {
      TranslateMessage(&local_1c);
      DispatchMessageA(&local_1c);
      BVar1 = PeekMessageW(&local_1c,(HWND)0x0,0,0,0);
      if (BVar1 == 0) {
        return;
      }
    }
    PostQuitMessage(local_1c.wParam);
  }
  return;
}


/* END FUNCTION 0x10085c40 */
