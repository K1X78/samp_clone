/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009b840
 * Name: FUN_1009b840
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1009b840(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  *param_3 = param_2;
  if ((((*(char *)(param_1 + 0xd) == '\0') || (iVar1 = FUN_1009b310(), -1 < iVar1)) &&
      (iVar1 = (*(code *)PTR_FUN_10140c10)(*(undefined4 *)(param_1 + 0xe)), iVar1 != 0)) &&
     (iVar2 = (*(code *)PTR_FUN_10140c14)(*(undefined4 *)(param_1 + 0xe)), iVar2 != 0)) {
    piVar3 = (int *)(*(code *)PTR_FUN_10140c14)(*(undefined4 *)(param_1 + 0xe));
    iVar2 = *piVar3;
    if (param_2 + -1 < *piVar3) {
      iVar2 = param_2 + -1;
    }
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      if (((*(byte *)(iVar2 + iVar1) & 8) != 0) ||
         (((*(byte *)(iVar2 + iVar1) & 2) == 0 && ((*(byte *)(iVar2 + -1 + iVar1) & 2) != 0)))) {
        *param_3 = iVar2;
        return;
      }
    }
    *param_3 = 0;
  }
  return;
}


/* END FUNCTION 0x1009b840 */
