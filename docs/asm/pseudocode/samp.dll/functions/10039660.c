/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10039660
 * Name: FUN_10039660
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10039660(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar2 = (int *)(param_1 + 8);
  while( true ) {
    iVar1 = piVar2[-2];
    piVar2[-2] = iVar1 + -1;
    if (iVar1 != 0) {
      return;
    }
    iVar1 = piVar2[-1];
    piVar2[-1] = iVar1 + -1;
    if (iVar1 != 0) {
      return;
    }
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    if (iVar1 != 0) {
      return;
    }
    iVar1 = piVar2[1];
    piVar2[1] = iVar1 + -1;
    if (iVar1 != 0) break;
    uVar3 = uVar3 + 4;
    piVar2 = piVar2 + 4;
    if (0xf < uVar3) {
      return;
    }
  }
  return;
}


/* END FUNCTION 0x10039660 */
