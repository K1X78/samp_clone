/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002f120
 * Name: FUN_1002f120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1002f120(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011481b;
  local_c = ExceptionList;
  iVar3 = param_1[2];
  if (param_1[1] == iVar3) {
    if (iVar3 == 0) {
      ExceptionList = &local_c;
      param_1[2] = 0x10;
    }
    else {
      ExceptionList = &local_c;
      param_1[2] = iVar3 * 2;
    }
    iVar3 = param_1[2];
    puVar2 = operator_new(iVar3 * 8);
    local_4 = 0;
    puVar4 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_1002c8a0(puVar2,8,iVar3,&LAB_1002efe0);
      puVar4 = puVar2;
    }
    puVar2 = (undefined4 *)*param_1;
    puVar5 = puVar4;
    for (iVar3 = (param_1[1] & 0x1fffffffU) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar2;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    local_4 = 0xffffffff;
    _free((void *)*param_1);
    *param_1 = (int)puVar4;
  }
  iVar3 = param_1[1];
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + iVar3 * 8) = param_2;
  *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = param_3;
  param_1[1] = param_1[1] + 1;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1002f120 */
