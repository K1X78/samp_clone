/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013650
 * Name: FUN_10013650
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10013650(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = (int *)(param_1 + 0xfda);
  iVar2 = 2;
  do {
    if (piVar3[-1] != 0) {
      iVar4 = iVar2 + -2;
    }
    if (*piVar3 != 0) {
      iVar4 = iVar2 + -1;
    }
    if (piVar3[1] != 0) {
      iVar4 = iVar2;
    }
    if (piVar3[2] != 0) {
      iVar4 = iVar2 + 1;
    }
    iVar1 = iVar2 + 2;
    piVar3 = piVar3 + 4;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x3ec);
  *(int *)(param_1 + 0x22) = iVar4;
  return;
}


/* END FUNCTION 0x10013650 */
