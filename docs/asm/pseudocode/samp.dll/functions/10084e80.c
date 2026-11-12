/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10084e80
 * Name: FUN_10084e80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10084e80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x96);
  if (iVar1 <= *(int *)(param_1 + 0x8e)) {
    iVar2 = *(int *)(param_1 + 0x9a);
    iVar3 = *(int *)(param_1 + 0x92);
    if (iVar3 < iVar2 - iVar1) {
      if (iVar3 + *(int *)(param_1 + 0x8e) <= iVar2) {
        return;
      }
      *(int *)(param_1 + 0x8e) = iVar2 - iVar3;
      return;
    }
  }
  *(int *)(param_1 + 0x8e) = iVar1;
  return;
}


/* END FUNCTION 0x10084e80 */
