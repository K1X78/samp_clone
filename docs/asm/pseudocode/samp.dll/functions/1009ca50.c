/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009ca50
 * Name: FUN_1009ca50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1009ca50(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = &DAT_101871a8 + iVar2;
    iVar2 = iVar2 + 1;
    if (*piVar1 == param_1) {
      return iVar2;
    }
  } while (iVar2 != 0x714);
  return 0xffff;
}


/* END FUNCTION 0x1009ca50 */
