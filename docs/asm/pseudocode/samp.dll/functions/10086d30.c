/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10086d30
 * Name: FUN_10086d30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10086d30(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c) + 1;
  if (iVar2 < *(int *)(iVar1 + 0x162)) {
    return *(undefined4 *)(*(int *)(iVar1 + 0x15e) + iVar2 * 4);
  }
  do {
    iVar1 = *(int *)(iVar1 + 0x1e2);
  } while (*(int *)(iVar1 + 0x162) < 1);
  return **(undefined4 **)(iVar1 + 0x15e);
}


/* END FUNCTION 0x10086d30 */
