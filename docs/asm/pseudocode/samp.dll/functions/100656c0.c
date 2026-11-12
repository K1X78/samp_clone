/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100656c0
 * Name: FUN_100656c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100656c0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = (int *)(param_1 + 0x7a04);
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
  } while (iVar1 < 0x200);
  *(int *)(param_1 + 0x8305) = iVar4 + 1;
  return;
}


/* END FUNCTION 0x100656c0 */
