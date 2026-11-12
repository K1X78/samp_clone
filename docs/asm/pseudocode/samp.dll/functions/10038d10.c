/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10038d10
 * Name: FUN_10038d10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10038d10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar1 + 0x117) == *(int *)(param_1 + 8)) ||
     (*(char *)(*(int *)(iVar1 + 0x117) + 0x116) == '\x01')) {
    uVar2 = *(undefined4 *)(iVar1 + 0x117);
    pvVar3 = operator_new(0x11b);
    *(void **)(*(int *)(param_1 + 4) + 0x117) = pvVar3;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x117) + 0x117) = uVar2;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x117);
  return;
}


/* END FUNCTION 0x10038d10 */
