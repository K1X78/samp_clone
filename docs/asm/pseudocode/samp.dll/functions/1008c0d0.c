/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008c0d0
 * Name: FUN_1008c0d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1008c0d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x162);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x16e)) {
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x16a) + iVar2 * 4);
        if (*piVar1 == *(int *)(param_2 + 0x30)) {
          FUN_10089d50(piVar1[1],piVar1 + 2);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x16e));
    }
    return 0;
  }
  return 0x80070057;
}


/* END FUNCTION 0x1008c0d0 */
