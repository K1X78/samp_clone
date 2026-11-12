/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100985d0
 * Name: FUN_100985d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100985d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar2 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x110 + iVar2);
      (**(code **)(*piVar1 + 0x118))(piVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x114;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar2 = 0;
    do {
      piVar1 = *(int **)(iVar2 + 0x38 + *(int *)(param_1 + 0x18));
      (**(code **)(*piVar1 + 0x44))(piVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x3c;
    } while (iVar3 < *(int *)(param_1 + 0x1c));
  }
  return 0;
}


/* END FUNCTION 0x100985d0 */
