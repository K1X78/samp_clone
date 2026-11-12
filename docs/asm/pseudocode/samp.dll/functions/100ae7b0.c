/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ae7b0
 * Name: FUN_100ae7b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


longlong __fastcall FUN_100ae7b0(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x2a4);
  if (((piVar1 != (int *)0x0) && (*piVar1 != 0x863c40)) && (iVar2 = piVar1[6], iVar2 != 0)) {
    iVar3 = (*(code *)0x734a40)();
    return CONCAT44(iVar2,*(int *)(*(int *)(iVar3 + 0x20) + 0x24) * param_3 + 0x4c +
                          *(int *)(iVar3 + 0x20));
  }
  return (ulonglong)param_2 << 0x20;
}


/* END FUNCTION 0x100ae7b0 */
