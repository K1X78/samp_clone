/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10084da0
 * Name: FUN_10084da0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10084da0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x92);
  iVar3 = *(int *)(param_1 + 0x9a) - *(int *)(param_1 + 0x96);
  if (iVar2 < iVar3) {
    if (((*(int *)(param_1 + 0x7a) - *(int *)(param_1 + 0x72)) * iVar2) / iVar3 < 9) {
      iVar1 = 8;
    }
    else {
      iVar1 = ((*(int *)(param_1 + 0x7a) - *(int *)(param_1 + 0x72)) * iVar2) / iVar3;
    }
    *(undefined1 *)(param_1 + 0x4d) = 1;
    iVar2 = (((*(int *)(param_1 + 0x7a) - *(int *)(param_1 + 0x72)) - iVar1) *
            (*(int *)(param_1 + 0x8e) - *(int *)(param_1 + 0x96))) / (iVar3 - iVar2) +
            *(int *)(param_1 + 0x72);
    *(int *)(param_1 + 0x82) = iVar2;
    *(int *)(param_1 + 0x8a) = iVar2 + iVar1;
    return;
  }
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)(param_1 + 0x8a) = *(undefined4 *)(param_1 + 0x82);
  return;
}


/* END FUNCTION 0x10084da0 */
