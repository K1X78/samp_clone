/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009f960
 * Name: FUN_1009f960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1009f960(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 0x40);
  iVar3 = *piVar2;
  if (piVar2 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = piVar2[6];
  }
  if (((399 < *(short *)((int)piVar2 + 0x22)) && (*(short *)((int)piVar2 + 0x22) < 0x264)) &&
     (iVar4 != 0)) {
    (*(code *)0x733160)(iVar4);
  }
  (**(code **)(iVar3 + 0x44))();
  sVar1 = *(short *)(*(int *)(param_1 + 0x40) + 0x22);
  if ((sVar1 < 400) || (0x263 < sVar1)) {
    if (iVar4 != 0) {
      (*(code *)0x553260)(piVar2);
    }
  }
  else if (iVar4 != 0) {
    (*(code *)0x553260)(piVar2);
    return;
  }
  return;
}


/* END FUNCTION 0x1009f960 */
