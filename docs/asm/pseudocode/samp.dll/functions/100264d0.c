/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100264d0
 * Name: FUN_100264d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100264d0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  if (*param_1 == 0) {
    puVar1 = operator_new(0xc);
    param_1[1] = (int)puVar1;
    *puVar1 = *param_2;
    *(int *)(param_1[1] + 8) = param_1[1];
    *(int *)(param_1[1] + 4) = param_1[1];
    *param_1 = 1;
    param_1[2] = param_1[1];
    return;
  }
  if (*param_1 == 1) {
    pvVar2 = operator_new(0xc);
    param_1[2] = (int)pvVar2;
    *(void **)(param_1[1] + 8) = pvVar2;
    *(int *)(param_1[1] + 4) = param_1[2];
    *(int *)(param_1[2] + 4) = param_1[1];
    *(int *)(param_1[2] + 8) = param_1[1];
    *(undefined4 *)param_1[2] = *param_2;
    param_1[1] = param_1[2];
    *param_1 = 2;
    return;
  }
  puVar1 = operator_new(0xc);
  *puVar1 = *param_2;
  *(undefined4 **)(*(int *)(param_1[2] + 4) + 8) = puVar1;
  puVar1[1] = *(undefined4 *)(param_1[2] + 4);
  *(undefined4 **)(param_1[2] + 4) = puVar1;
  puVar1[2] = param_1[2];
  if (param_1[2] == param_1[1]) {
    param_1[1] = (int)puVar1;
    param_1[2] = (int)puVar1;
  }
  *param_1 = *param_1 + 1;
  return;
}


/* END FUNCTION 0x100264d0 */
