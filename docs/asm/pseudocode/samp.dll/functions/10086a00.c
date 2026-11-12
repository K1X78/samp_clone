/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10086a00
 * Name: FUN_10086a00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10086a00(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x14) + iVar2 * 4) + 0x104);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x44))(piVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(piVar1);
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 0xec))(*(int **)(param_1 + 0x20),1,param_1);
  return 0;
}


/* END FUNCTION 0x10086a00 */
