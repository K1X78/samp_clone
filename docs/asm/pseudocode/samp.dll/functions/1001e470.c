/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001e470
 * Name: FUN_1001e470
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1001e470(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = param_1 + 0xc1e;
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
  *param_1 = iVar4;
  return;
}


/* END FUNCTION 0x1001e470 */
