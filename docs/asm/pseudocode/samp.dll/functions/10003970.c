/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10003970
 * Name: FUN_10003970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10003970(int param_1,char *param_2,char *param_3,int param_4)

{
  DWORD DVar1;
  bool bVar2;
  
  DVar1 = GetTickCount();
  if (DVar1 - *(int *)(param_1 + 0x128) < 0x1f5) {
    bVar2 = true;
    do {
      if (param_4 == 0) break;
      param_4 = param_4 + -1;
      bVar2 = *param_2 == *param_3;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    } while (bVar2);
    if (bVar2) {
      return 0;
    }
  }
  DVar1 = GetTickCount();
  *(DWORD *)(param_1 + 0x128) = DVar1;
  return 1;
}


/* END FUNCTION 0x10003970 */
