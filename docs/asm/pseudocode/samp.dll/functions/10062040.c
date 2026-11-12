/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10062040
 * Name: FUN_10062040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_10062040(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_1016bf60;
  while (((&DAT_1016be98)[iVar1] != 1 || (*piVar2 != param_1))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 5;
    if (iVar1 == 0x32) {
      return -1;
    }
  }
  return iVar1;
}


/* END FUNCTION 0x10062040 */
