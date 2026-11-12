/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10086d80
 * Name: FUN_10086d80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10086d80(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1c) + -1;
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = iVar2;
  if (iVar4 < 0) {
    do {
      piVar1 = (int *)(iVar3 + 0x1e6);
      iVar3 = *piVar1;
      if (*piVar1 == 0) {
        iVar3 = iVar2;
      }
      iVar4 = *(int *)(iVar3 + 0x162) + -1;
    } while (iVar4 < 0);
    return *(undefined4 *)(*(int *)(iVar3 + 0x15e) + iVar4 * 4);
  }
  return *(undefined4 *)(*(int *)(iVar2 + 0x15e) + iVar4 * 4);
}


/* END FUNCTION 0x10086d80 */
