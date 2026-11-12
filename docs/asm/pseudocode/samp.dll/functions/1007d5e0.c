/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007d5e0
 * Name: FUN_1007d5e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007d5e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_38 [14];
  
  FUN_1007cbc0();
  iVar1 = FUN_10078460();
  iVar2 = 0xe;
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)(iVar1 + 0x10);
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = *puVar3;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
    }
    return;
  }
  puVar3 = local_38;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_38;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* END FUNCTION 0x1007d5e0 */
