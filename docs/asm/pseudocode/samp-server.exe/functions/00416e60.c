/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00416e60
 * Name: FUN_00416e60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00416e60(int param_1)

{
  int iVar1;
  code *pcVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 300);
  iVar3 = 0;
  if ((0 < iVar1) && (*(int *)(param_1 + 0x128) == 0)) {
    return 6;
  }
  if (in_EAX == 0) {
    return 0;
  }
  pcVar2 = *(code **)(**(int **)(in_EAX + 8) + 0x38);
  if (pcVar2 != (code *)0x0) {
    iVar3 = 0;
    if (0 < iVar1) {
      piVar4 = *(int **)(param_1 + 0x128);
      do {
        if (*piVar4 == in_EAX) {
          return 0;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < iVar1);
    }
    iVar3 = (*pcVar2)(*(int **)(in_EAX + 8));
    if (iVar3 == 0) {
      iVar3 = FUN_00416de0();
    }
  }
  return iVar3;
}


/* END FUNCTION 0x00416e60 */
