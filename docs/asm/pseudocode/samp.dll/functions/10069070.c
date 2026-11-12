/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10069070
 * Name: FUN_10069070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10069070(int param_1)

{
  char *_Source;
  int iVar1;
  size_t _Count;
  
  if (*(int *)(param_1 + 0x1af0) < *(int *)(param_1 + 0x1af4) + -1) {
    if (*(int *)(param_1 + 0x1af0) == -1) {
      _Count = 0x80;
      _Source = (char *)FUN_100850d0();
      _strncpy((char *)(param_1 + 0x1a6f),_Source,_Count);
      *(undefined1 *)(param_1 + 0x1aef) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x1af0) + 1;
    *(int *)(param_1 + 0x1af0) = iVar1;
    FUN_10085000(iVar1 * 0x81 + 0x1565 + param_1,0);
  }
  return;
}


/* END FUNCTION 0x10069070 */
