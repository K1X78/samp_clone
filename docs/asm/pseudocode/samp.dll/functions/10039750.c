/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10039750
 * Name: FUN_10039750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10039750(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + uVar2 * 4);
    *(int *)(param_1 + uVar2 * 4) = iVar1 + -1;
    if (iVar1 != 0) {
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  return;
}


/* END FUNCTION 0x10039750 */
