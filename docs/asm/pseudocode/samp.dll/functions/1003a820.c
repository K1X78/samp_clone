/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003a820
 * Name: FUN_1003a820
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1003a820(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = FUN_10038c00(param_2);
    if (iVar2 != -1) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x3ad) + iVar2 * 4) + 4))(param_1);
      iVar1 = *(int *)(param_1 + 0x3ad);
      *(undefined4 *)(iVar1 + iVar2 * 4) =
           *(undefined4 *)(iVar1 + -4 + *(int *)(param_1 + 0x3b1) * 4);
      *(int *)(param_1 + 0x3b1) = *(int *)(param_1 + 0x3b1) + -1;
    }
  }
  return;
}


/* END FUNCTION 0x1003a820 */
