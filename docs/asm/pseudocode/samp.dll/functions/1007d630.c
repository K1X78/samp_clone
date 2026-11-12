/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007d630
 * Name: FUN_1007d630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007d630(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_48 [18];
  
  FUN_1007cbc0();
  puVar1 = (undefined4 *)FUN_10078460();
  iVar2 = 0x12;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = local_48;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    puVar1 = local_48;
    for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = *puVar1;
      puVar1 = puVar1 + 1;
      param_1 = param_1 + 1;
    }
    return;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


/* END FUNCTION 0x1007d630 */
