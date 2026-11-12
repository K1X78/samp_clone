/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ba8b0
 * Name: FUN_100ba8b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100ba8b0(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  void *_Memory;
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int iVar6;
  int iVar7;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10116810;
  local_10 = ExceptionList;
  local_1c = param_4[1];
  local_20 = *param_4;
  iVar3 = *(int *)(param_1 + 4);
  local_14 = &stack0xffffffd4;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - iVar3 >> 3;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 8) - iVar3 >> 3;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffd4;
    if (0x1fffffffU - iVar6 < param_3) {
      ExceptionList = &local_10;
      uVar2 = FUN_100ba7d0();
      iVar3 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 8) - iVar3 >> 3;
    }
    if (uVar2 < iVar6 + param_3) {
      if (0x1fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 8) - iVar3 >> 3;
      }
      if (uVar2 < iVar6 + param_3) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 8) - iVar3 >> 3;
        }
        uVar2 = iVar3 + param_3;
      }
      pvVar4 = operator_new(uVar2 * 8);
      local_8 = 0;
      local_18 = pvVar4;
      iVar3 = FUN_100ba160(*(undefined4 *)(param_1 + 4),param_2,pvVar4,param_1,param_2);
      FUN_100ba1d0(iVar3,param_3,&local_20,param_1,param_2);
      FUN_100ba160(param_2,*(undefined4 *)(param_1 + 8),iVar3 + param_3 * 8,param_1,param_2);
      _Memory = *(void **)(param_1 + 4);
      if (_Memory == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 8) - (int)_Memory >> 3;
      }
      if (_Memory != (void *)0x0) {
        _free(_Memory);
      }
      *(void **)(param_1 + 0xc) = (void *)(uVar2 * 8 + (int)pvVar4);
      *(void **)(param_1 + 8) = (void *)((int)pvVar4 + (param_3 + iVar3) * 8);
      *(void **)(param_1 + 4) = pvVar4;
      ExceptionList = local_10;
      return;
    }
    iVar6 = *(int *)(param_1 + 8);
    iVar3 = param_3 * 8;
    if ((uint)(iVar6 - param_2 >> 3) < param_3) {
      FUN_100ba160(param_2,iVar6,iVar3 + param_2,param_1,iVar3);
      local_8 = 2;
      FUN_100ba600(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - param_2 >> 3),&local_20)
      ;
      iVar3 = *(int *)(param_1 + 8) + iVar3;
      *(int *)(param_1 + 8) = iVar3;
      FUN_100b9c50(param_2,iVar3 + param_3 * -8,&local_20);
      ExceptionList = local_10;
      return;
    }
    iVar7 = iVar6 + param_3 * -8;
    uVar5 = FUN_100ba160(iVar7,iVar6,iVar6,param_1,iVar3);
    *(undefined4 *)(param_1 + 8) = uVar5;
    FUN_100ba100(param_2,iVar7,iVar6);
    FUN_100b9c50(param_2,iVar3 + param_2,&local_20);
  }
  ExceptionList = local_10;
  return;
}


/* END FUNCTION 0x100ba8b0 */
