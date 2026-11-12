/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10038f00
 * Name: FUN_10038f00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10038f00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar1 + 0x2a) == *(int *)(param_1 + 8)) ||
     (*(char *)(*(int *)(iVar1 + 0x2a) + 0x29) == '\x01')) {
    uVar2 = *(undefined4 *)(iVar1 + 0x2a);
    pvVar3 = operator_new(0x2e);
    *(void **)(*(int *)(param_1 + 4) + 0x2a) = pvVar3;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x2a) + 0x2a) = uVar2;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x2a);
  return;
}


/* END FUNCTION 0x10038f00 */
