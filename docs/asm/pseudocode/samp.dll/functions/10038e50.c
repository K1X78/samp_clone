/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10038e50
 * Name: FUN_10038e50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_10038e50(undefined4 *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = operator_new(0x2e);
  param_1[2] = pvVar2;
  param_1[3] = pvVar2;
  pvVar2 = operator_new(0x2e);
  *(void **)(param_1[2] + 0x2a) = pvVar2;
  iVar3 = 6;
  do {
    param_1[2] = *(undefined4 *)(param_1[2] + 0x2a);
    pvVar2 = operator_new(0x2e);
    iVar3 = iVar3 + -1;
    *(void **)(param_1[2] + 0x2a) = pvVar2;
  } while (iVar3 != 0);
  *(undefined4 *)(*(int *)(param_1[2] + 0x2a) + 0x2a) = param_1[3];
  uVar1 = param_1[3];
  param_1[2] = uVar1;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[5] = 0;
  param_1[4] = 0;
  return param_1;
}


/* END FUNCTION 0x10038e50 */
