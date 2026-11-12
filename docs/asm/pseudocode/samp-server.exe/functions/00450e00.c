/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450e00
 * Name: FUN_00450e00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00450e00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar1 + 8) == *(int *)(param_1 + 8)) ||
     (*(char *)(*(int *)(iVar1 + 8) + 4) == '\x01')) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
    pvVar3 = operator_new(0xc);
    *(void **)(*(int *)(param_1 + 4) + 8) = pvVar3;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 8) + 8) = uVar2;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  return;
}


/* END FUNCTION 0x00450e00 */
