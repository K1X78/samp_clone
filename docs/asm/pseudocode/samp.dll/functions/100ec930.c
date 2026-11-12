/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ec930
 * Name: FUN_100ec930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ec930(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  if ((param_2 != 0) && (iVar1 = *(int *)(param_1 + 0x3e4), iVar1 != 0)) {
    if (*(int *)(param_1 + 0x3e0) == 2) {
      if (param_2 < iVar1) {
        return 1;
      }
      pcVar2 = "The requested document is not old enough\n";
    }
    else {
      if (iVar1 < param_2) {
        return 1;
      }
      pcVar2 = "The requested document is not new enough\n";
    }
    FUN_100d8ae0(param_1,pcVar2);
    *(undefined4 *)(param_1 + 0x4b60) = 1;
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x100ec930 */
