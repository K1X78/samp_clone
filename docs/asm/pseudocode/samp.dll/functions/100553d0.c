/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100553d0
 * Name: FUN_100553d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_100553d0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = operator_new(0x1a);
  param_1[2] = pvVar2;
  param_1[3] = pvVar2;
  pvVar2 = operator_new(0x1a);
  *(void **)(param_1[2] + 0x16) = pvVar2;
  iVar3 = 6;
  do {
    param_1[2] = *(undefined4 *)(param_1[2] + 0x16);
    pvVar2 = operator_new(0x1a);
    iVar3 = iVar3 + -1;
    *(void **)(param_1[2] + 0x16) = pvVar2;
  } while (iVar3 != 0);
  *(undefined4 *)(*(int *)(param_1[2] + 0x16) + 0x16) = param_1[3];
  uVar1 = param_1[3];
  param_1[2] = uVar1;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[5] = 0;
  param_1[4] = 0;
  return param_1;
}


/* END FUNCTION 0x100553d0 */
