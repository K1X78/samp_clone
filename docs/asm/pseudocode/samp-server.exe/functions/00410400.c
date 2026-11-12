/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00410400
 * Name: FUN_00410400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __cdecl FUN_00410400(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 0x34);
  *(undefined4 *)(unaff_EDI + 0x34) = 0;
  piVar4 = (int *)0x0;
  while (piVar3 = piVar1, piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    piVar1 = (int *)piVar3[4];
    if (iVar2 == param_1) {
      *(int **)(unaff_EDI + 0x34) = piVar3;
      piVar3[4] = 0;
      piVar4 = piVar3;
    }
    else {
      piVar3[4] = *(int *)(iVar2 + 0x130);
      *(int **)(iVar2 + 0x130) = piVar3;
    }
  }
  return piVar4;
}


/* END FUNCTION 0x00410400 */
