/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450c40
 * Name: FUN_00450c40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00450c40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar1 + 0x30) == *(int *)(param_1 + 8)) ||
     (*(char *)(*(int *)(iVar1 + 0x30) + 0x2c) == '\x01')) {
    uVar2 = *(undefined4 *)(iVar1 + 0x30);
    pvVar3 = operator_new(0x34);
    *(void **)(*(int *)(param_1 + 4) + 0x30) = pvVar3;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x30) + 0x30) = uVar2;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x30);
  return;
}


/* END FUNCTION 0x00450c40 */
