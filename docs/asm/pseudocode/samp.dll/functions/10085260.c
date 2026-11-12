/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10085260
 * Name: FUN_10085260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10085260(int param_1)

{
  BOOL BVar1;
  int iVar2;
  HGLOBAL hMem;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar6;
  
  if ((*(int *)(param_1 + 0x119) != *(int *)(param_1 + 0x11e)) &&
     (BVar1 = OpenClipboard((HWND)0x0), BVar1 != 0)) {
    EmptyClipboard();
    iVar2 = lstrlenW(*(LPCWSTR *)(param_1 + 0x4d));
    hMem = GlobalAlloc(2,iVar2 * 2 + 2);
    if (hMem != (HGLOBAL)0x0) {
      puVar3 = GlobalLock(hMem);
      if (puVar3 != (undefined4 *)0x0) {
        iVar2 = *(int *)(param_1 + 0x119);
        iVar6 = *(int *)(param_1 + 0x11e);
        iVar7 = iVar2;
        if ((iVar6 <= iVar2) && (iVar7 = iVar6, iVar6 < iVar2)) {
          iVar6 = iVar2;
        }
        uVar5 = iVar6 - iVar7;
        if (0 < (int)uVar5) {
          puVar8 = (undefined4 *)(*(int *)(param_1 + 0x4d) + iVar7 * 2);
          puVar9 = puVar3;
          for (uVar4 = (uVar5 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar4 = uVar5 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
        }
        *(undefined2 *)((int)puVar3 + uVar5 * 2) = 0;
        GlobalUnlock(hMem);
      }
      SetClipboardData(0xd,hMem);
    }
    CloseClipboard();
    if (hMem != (HGLOBAL)0x0) {
      GlobalFree(hMem);
    }
  }
  return;
}


/* END FUNCTION 0x10085260 */
