/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008bcc0
 * Name: FUN_1008bcc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008bcc0(void)

{
  UINT UVar1;
  char *pcVar2;
  FARPROC pFVar3;
  int iVar4;
  CHAR local_108 [260];
  undefined1 auStack_4 [4];
  
  if (DAT_10180604 == (HMODULE)0x0) {
    _DAT_1017f698 = GetTickCount();
    FUN_1009b240(0x100);
    UVar1 = GetSystemDirectoryA(local_108,0x105);
    if (UVar1 != 0) {
      iVar4 = 0x104;
      pcVar2 = local_108;
      do {
        if (*pcVar2 == '\0') {
          if (iVar4 != 0) {
            FUN_10077b90(auStack_4 + -iVar4,0x104 - (-iVar4 + 0x104),"\\imm32.dll");
          }
          break;
        }
        pcVar2 = pcVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      DAT_10180604 = LoadLibraryA(local_108);
      if (DAT_10180604 != (HMODULE)0x0) {
        pFVar3 = GetProcAddress(DAT_10180604,"ImmLockIMC");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_FUN_10140c18 = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmUnlockIMC");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_FUN_10140c1c = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmLockIMCC");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_FUN_10140c20 = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmUnlockIMCC");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_FUN_10140c24 = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmDisableTextFrameService");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_FUN_10140c28 = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmGetCompositionStringW");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_FUN_10140c2c = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmGetCandidateListW");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_FUN_10140c30 = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmGetContext");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_FUN_10140c34 = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmReleaseContext");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_FUN_10140c38 = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmAssociateContext");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_FUN_10140c3c = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmGetOpenStatus");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_FUN_10140c40 = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmSetOpenStatus");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_DAT_10140c44 = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmGetConversionStatus");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_FUN_10140c48 = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmGetDefaultIMEWnd");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_LAB_10140c4c = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmGetIMEFileNameA");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_FUN_10140c50 = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmGetVirtualKey");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_LAB_10140c54 = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmNotifyIME");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_FUN_10140c58 = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmSetConversionStatus");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_LAB_10140c5c = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmSimulateHotKey");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_LAB_10140c60 = pFVar3;
        }
        pFVar3 = GetProcAddress(DAT_10180604,"ImmIsIME");
        if (pFVar3 != (FARPROC)0x0) {
          PTR_FUN_10140c64 = pFVar3;
        }
      }
      UVar1 = GetSystemDirectoryA(local_108,0x105);
      if (UVar1 != 0) {
        pcVar2 = local_108;
        iVar4 = 0x104;
        do {
          if (*pcVar2 == '\0') {
            if (iVar4 != 0) {
              FUN_10077b90(auStack_4 + -iVar4,0x104 - (-iVar4 + 0x104),"\\version.dll");
            }
            break;
          }
          pcVar2 = pcVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        DAT_1017f6a4 = LoadLibraryA(local_108);
        if (DAT_1017f6a4 != (HMODULE)0x0) {
          pFVar3 = GetProcAddress(DAT_1017f6a4,"VerQueryValueA");
          if (pFVar3 != (FARPROC)0x0) {
            PTR_FUN_10140c70 = pFVar3;
          }
          pFVar3 = GetProcAddress(DAT_1017f6a4,"GetFileVersionInfoA");
          if (pFVar3 != (FARPROC)0x0) {
            PTR_FUN_10140c74 = pFVar3;
          }
          pFVar3 = GetProcAddress(DAT_1017f6a4,"GetFileVersionInfoSizeA");
          if (pFVar3 != (FARPROC)0x0) {
            PTR_FUN_10140c78 = pFVar3;
          }
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x1008bcc0 */
