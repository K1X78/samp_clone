/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10055640
 * Name: FUN_10055640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10055640(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar1 + 7) == *(int *)(param_1 + 8)) ||
     (*(char *)(*(int *)(iVar1 + 7) + 6) == '\x01')) {
    uVar2 = *(undefined4 *)(iVar1 + 7);
    pvVar3 = operator_new(0xb);
    *(void **)(*(int *)(param_1 + 4) + 7) = pvVar3;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 7) + 7) = uVar2;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(param_1 + 4) + 7);
  return;
}


/* END FUNCTION 0x10055640 */
