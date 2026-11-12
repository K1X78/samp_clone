/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009ba60
 * Name: FUN_1009ba60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009ba60(void)

{
  UINT UVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  FARPROC pFVar5;
  CHAR local_108 [260];
  undefined1 auStack_4 [4];
  
  if (DAT_10180618 == (HMODULE)0x0) {
    UVar1 = GetSystemDirectoryA(local_108,0x105);
    if (UVar1 != 0) {
      iVar2 = lstrlenA(local_108);
      iVar3 = lstrlenA("\\usp10.dll");
      if (iVar3 + iVar2 < 0x105) {
        iVar2 = 0x104;
        pcVar4 = local_108;
        do {
          if (*pcVar4 == '\0') {
            if (iVar2 != 0) {
              FUN_10077b90(auStack_4 + -iVar2,0x104 - (-iVar2 + 0x104),"\\usp10.dll");
            }
            break;
          }
          pcVar4 = pcVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        DAT_10180618 = LoadLibraryA(local_108);
        if (DAT_10180618 != (HMODULE)0x0) {
          pFVar5 = GetProcAddress(DAT_10180618,"ScriptApplyDigitSubstitution");
          if (pFVar5 != (FARPROC)0x0) {
            PTR_FUN_10140bfc = pFVar5;
          }
          pFVar5 = GetProcAddress(DAT_10180618,"ScriptStringAnalyse");
          if (pFVar5 != (FARPROC)0x0) {
            PTR_FUN_10140c00 = pFVar5;
          }
          pFVar5 = GetProcAddress(DAT_10180618,"ScriptStringCPtoX");
          if (pFVar5 != (FARPROC)0x0) {
            PTR_FUN_10140c04 = pFVar5;
          }
          pFVar5 = GetProcAddress(DAT_10180618,"ScriptStringXtoCP");
          if (pFVar5 != (FARPROC)0x0) {
            PTR_FUN_10140c08 = pFVar5;
          }
          pFVar5 = GetProcAddress(DAT_10180618,"ScriptStringFree");
          if (pFVar5 != (FARPROC)0x0) {
            PTR_FUN_10140c0c = pFVar5;
          }
          pFVar5 = GetProcAddress(DAT_10180618,"ScriptString_pLogAttr");
          if (pFVar5 != (FARPROC)0x0) {
            PTR_FUN_10140c10 = pFVar5;
          }
          pFVar5 = GetProcAddress(DAT_10180618,"ScriptString_pcOutChars");
          if (pFVar5 != (FARPROC)0x0) {
            PTR_FUN_10140c14 = pFVar5;
          }
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x1009ba60 */
