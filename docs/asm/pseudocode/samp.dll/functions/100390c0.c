/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100390c0
 * Name: FUN_100390c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100390c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar1 + 5) == *(int *)(param_1 + 8)) ||
     (*(char *)(*(int *)(iVar1 + 5) + 4) == '\x01')) {
    uVar2 = *(undefined4 *)(iVar1 + 5);
    pvVar3 = operator_new(9);
    *(void **)(*(int *)(param_1 + 4) + 5) = pvVar3;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 5) + 5) = uVar2;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(param_1 + 4) + 5);
  return;
}


/* END FUNCTION 0x100390c0 */
