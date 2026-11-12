/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e58c0
 * Name: FUN_100e58c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined * __thiscall FUN_100e58c0(int param_1,int param_2)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x4ac4) != 10) && (*(int *)(param_2 + 0x180) != 10)) &&
      ((iVar1 = *(int *)(param_1 + 0x3ec), iVar1 != 1 || (10 < *(int *)(param_2 + 0x180))))) &&
     ((iVar1 == 0 || (1 < iVar1)))) {
    return &DAT_10127120;
  }
  return &DAT_1012711c;
}


/* END FUNCTION 0x100e58c0 */
