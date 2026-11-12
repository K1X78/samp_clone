/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002f1f0
 * Name: FUN_1002f1f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1002f1f0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  void *_Src;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011483b;
  local_c = ExceptionList;
  iVar2 = param_1[2];
  ExceptionList = &local_c;
  if (param_1[1] == iVar2) {
    if (iVar2 == 0) {
      ExceptionList = &local_c;
      param_1[2] = 0x10;
    }
    else {
      ExceptionList = &local_c;
      param_1[2] = iVar2 * 2;
    }
    iVar2 = param_1[2];
    puVar1 = operator_new(iVar2 * 8);
    local_4 = 0;
    puVar3 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_1002c8a0(puVar1,8,iVar2,&LAB_1002efe0);
      puVar3 = puVar1;
    }
    puVar1 = (undefined4 *)*param_1;
    puVar4 = puVar3;
    for (iVar2 = (param_1[1] & 0x1fffffffU) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar1;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    local_4 = 0xffffffff;
    _free((void *)*param_1);
    *param_1 = (int)puVar3;
  }
  _Src = (void *)(*param_1 + param_4 * 8);
  _memmove((void *)((int)_Src + 8),_Src,(param_1[1] - param_4) * 8);
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + param_4 * 8) = param_2;
  *(undefined4 *)(iVar2 + 4 + param_4 * 8) = param_3;
  param_1[1] = param_1[1] + 1;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1002f1f0 */
