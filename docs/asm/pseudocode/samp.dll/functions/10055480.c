/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10055480
 * Name: FUN_10055480
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10055480(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar1 + 0x16) == *(int *)(param_1 + 8)) ||
     (*(char *)(*(int *)(iVar1 + 0x16) + 0x15) == '\x01')) {
    uVar2 = *(undefined4 *)(iVar1 + 0x16);
    pvVar3 = operator_new(0x1a);
    *(void **)(*(int *)(param_1 + 4) + 0x16) = pvVar3;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x16) + 0x16) = uVar2;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x16);
  return;
}


/* END FUNCTION 0x10055480 */
