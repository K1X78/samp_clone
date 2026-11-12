/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049ece0
 * Name: FUN_0049ece0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0049ece0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = -1;
  piVar3 = (int *)(param_1 + 0x1dc94);
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
    if (piVar3[3] != 0) {
      iVar4 = iVar2 + 2;
    }
    iVar1 = iVar2 + 3;
    piVar3 = piVar3 + 5;
    iVar2 = iVar2 + 5;
  } while (iVar1 < 2000);
  *(int *)(param_1 + 130000) = iVar4 + 1;
  return;
}


/* END FUNCTION 0x0049ece0 */
