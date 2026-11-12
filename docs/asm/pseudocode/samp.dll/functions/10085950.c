/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10085950
 * Name: FUN_10085950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085950(void)

{
  int iVar1;
  undefined1 *puStack_114;
  undefined4 uStack_110;
  undefined1 local_108 [264];
  
  uStack_110 = 0x104;
  puStack_114 = local_108;
  PTR_FUN_10140c68 = (undefined *)0x0;
  PTR_FUN_10140c6c = (undefined *)0x0;
  iVar1 = (*(code *)PTR_FUN_10140c50)(_DAT_10180600);
  if (iVar1 != 0) {
    if (DAT_1017f6b4 != (HMODULE)0x0) {
      FreeLibrary(DAT_1017f6b4);
    }
    DAT_1017f6b4 = LoadLibraryA((LPCSTR)&puStack_114);
    if (DAT_1017f6b4 != (HMODULE)0x0) {
      PTR_FUN_10140c68 = GetProcAddress(DAT_1017f6b4,"GetReadingString");
      PTR_FUN_10140c6c = GetProcAddress(DAT_1017f6b4,"ShowReadingWindow");
    }
  }
  return;
}


/* END FUNCTION 0x10085950 */
