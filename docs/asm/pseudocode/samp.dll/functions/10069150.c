/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10069150
 * Name: FUN_10069150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10069150(int param_1,char *param_2)

{
  int iVar1;
  char *_Str2;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x14dc) != 0) {
    _Str2 = (char *)(param_1 + 0x24c);
    do {
      iVar1 = __stricmp(param_2,_Str2);
      if (iVar1 == 0) {
        return *(undefined4 *)(param_1 + 0xc + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
      _Str2 = _Str2 + 0x21;
    } while (iVar2 != *(int *)(param_1 + 0x14dc));
  }
  return 0;
}


/* END FUNCTION 0x10069150 */
