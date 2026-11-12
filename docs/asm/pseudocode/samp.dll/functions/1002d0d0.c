/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002d0d0
 * Name: FUN_1002d0d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1002d0d0(int *param_1,undefined4 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *_Src;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011467b;
  local_c = ExceptionList;
  iVar1 = param_1[2];
  ExceptionList = &local_c;
  if (param_1[1] == iVar1) {
    if (iVar1 == 0) {
      ExceptionList = &local_c;
      param_1[2] = 0x10;
    }
    else {
      ExceptionList = &local_c;
      param_1[2] = iVar1 * 2;
    }
    iVar1 = param_1[2];
    puVar2 = operator_new(iVar1 * 6);
    local_4 = 0;
    puVar4 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_1002c8a0(puVar2,6,iVar1,&LAB_1002c8d0);
      puVar4 = puVar2;
    }
    iVar1 = param_1[1];
    puVar2 = (undefined4 *)*param_1;
    puVar5 = puVar4;
    for (uVar3 = (uint)(iVar1 * 6) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = iVar1 * 6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    local_4 = 0xffffffff;
    _free((void *)*param_1);
    *param_1 = (int)puVar4;
  }
  _Src = (void *)(*param_1 + param_4 * 6);
  _memmove((void *)((int)_Src + 6),_Src,(param_1[1] - param_4) * 6);
  puVar4 = (undefined4 *)(*param_1 + param_4 * 6);
  *puVar4 = param_2;
  *(undefined2 *)(puVar4 + 1) = param_3;
  param_1[1] = param_1[1] + 1;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1002d0d0 */
