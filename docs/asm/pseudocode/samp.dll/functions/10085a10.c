/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10085a10
 * Name: FUN_10085a10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10085a10(int param_1,char param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (DAT_1017f695 != '\0') {
    iVar1 = lstrlenW(DAT_1018062c);
    iVar2 = 0;
    if (iVar1 != DAT_1017f690 && -1 < iVar1 - DAT_1017f690) {
      do {
        SendMessageA(_DAT_00c97c1c,0x100,0x27,0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1 - DAT_1017f690);
    }
    SendMessageA(_DAT_00c97c1c,0x101,0x27,0);
    if ((param_2 != '\0') || (*(char *)(param_1 + 0x11d) != '\0')) {
      param_3 = 0;
    }
    if (param_3 < iVar1) {
      iVar1 = iVar1 - param_3;
      if (0 < iVar1) {
        do {
          SendMessageA(_DAT_00c97c1c,0x100,8,0);
          SendMessageW(_DAT_00c97c1c,0x102,8,0);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      SendMessageA(_DAT_00c97c1c,0x101,8,0);
      iVar1 = param_3;
    }
    if (0 < iVar1) {
      do {
        SendMessageA(_DAT_00c97c1c,0x100,0x25,0);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    SendMessageA(_DAT_00c97c1c,0x101,0x25,0);
  }
  return;
}


/* END FUNCTION 0x10085a10 */
