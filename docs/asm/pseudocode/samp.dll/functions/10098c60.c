/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10098c60
 * Name: FUN_10098c60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10098c60(void)

{
  UINT UVar1;
  char *pcVar2;
  int iVar3;
  CHAR local_108 [260];
  undefined1 auStack_4 [4];
  
  if (DAT_10181aa4 != (HMODULE)0x0) {
    return 1;
  }
  pcVar2 = local_108;
  UVar1 = GetSystemDirectoryA(local_108,0x105);
  if (UVar1 != 0) {
    iVar3 = 0x104;
    do {
      if (*pcVar2 == '\0') {
        if (iVar3 != 0) {
          FUN_10077b90(auStack_4 + -iVar3,0x104 - (-iVar3 + 0x104),"\\d3d9.dll");
        }
        break;
      }
      pcVar2 = pcVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    DAT_10181aa4 = LoadLibraryA(local_108);
    if (DAT_10181aa4 != (HMODULE)0x0) {
      DAT_10181aa8 = GetProcAddress(DAT_10181aa4,"Direct3DCreate9");
      _DAT_10181aac = GetProcAddress(DAT_10181aa4,"D3DPERF_BeginEvent");
      _DAT_10181ab0 = GetProcAddress(DAT_10181aa4,"D3DPERF_EndEvent");
      _DAT_10181ab4 = GetProcAddress(DAT_10181aa4,"D3DPERF_SetMarker");
      _DAT_10181ab8 = GetProcAddress(DAT_10181aa4,"D3DPERF_SetRegion");
      _DAT_10181abc = GetProcAddress(DAT_10181aa4,"D3DPERF_QueryRepeatFrame");
      _DAT_10181ac0 = GetProcAddress(DAT_10181aa4,"D3DPERF_SetOptions");
      _DAT_10181ac4 = GetProcAddress(DAT_10181aa4,"D3DPERF_GetStatus");
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x10098c60 */
