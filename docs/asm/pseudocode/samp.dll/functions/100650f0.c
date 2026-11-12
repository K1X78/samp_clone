/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100650f0
 * Name: FUN_100650f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100650f0(char *param_1)

{
  char cVar1;
  LPCSTR lpModuleName;
  char *pcVar2;
  uint uVar3;
  byte *lpProcName;
  byte *pbVar4;
  HMODULE hModule;
  
  lpModuleName = operator_new(9);
  builtin_memcpy(lpModuleName,"advapi32",9);
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)(param_1 + 1);
  lpProcName = operator_new(uVar3);
  if (uVar3 != 0) {
    pbVar4 = lpProcName;
    do {
      *pbVar4 = pbVar4[(int)param_1 - (int)lpProcName] ^ 0x55;
      pbVar4 = pbVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  hModule = GetModuleHandleA(lpModuleName);
  GetProcAddress(hModule,(LPCSTR)lpProcName);
  return;
}


/* END FUNCTION 0x100650f0 */
