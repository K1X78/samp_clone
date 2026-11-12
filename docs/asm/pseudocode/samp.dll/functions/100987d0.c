/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100987d0
 * Name: FUN_100987d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_100987d0(int param_1,undefined4 *param_2,int param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,float param_7,undefined1 param_8)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *_Memory;
  void *pvVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  undefined4 *local_1c;
  int local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011648b;
  local_c = ExceptionList;
  if ((param_3 == 0) || (param_4 == 0)) {
    return 0x80070057;
  }
  ExceptionList = &local_c;
  local_18 = param_1;
  _Memory = operator_new(0x19);
  if (_Memory != (undefined4 *)0x0) {
    *_Memory = 0;
    _Memory[1] = 0;
    _Memory[2] = 0;
    _Memory[3] = 0;
    _Memory[4] = 0;
    _Memory[5] = 0;
    *(undefined1 *)(_Memory + 6) = 0;
    *_Memory = *(undefined4 *)(param_1 + 4);
    _Memory[1] = param_5;
    _Memory[2] = param_6;
    *(undefined1 *)(_Memory + 3) = param_8;
    *(uint *)((int)_Memory + 0x15) = param_4;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *_Memory;
    }
    local_1c = _Memory;
    pvVar4 = operator_new(param_4 * 8);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      FUN_1002c8a0(pvVar4,8,param_4,&LAB_100715b0);
    }
    local_4 = 0xffffffff;
    *(void **)((int)_Memory + 0x11) = pvVar4;
    if (pvVar4 != (void *)0x0) {
      uVar7 = 0;
      if (3 < (int)param_4) {
        iVar3 = -param_3;
        iVar6 = (param_4 - 4 >> 2) + 1;
        uVar7 = iVar6 * 4;
        pfVar5 = (float *)(param_3 + 0x14);
        do {
          iVar2 = *(int *)((int)_Memory + 0x11);
          fVar1 = pfVar5[-4];
          *(float *)((int)pfVar5 + iVar2 + iVar3 + -0x14) = param_7 * pfVar5[-5];
          *(float *)((int)pfVar5 + iVar2 + iVar3 + -0x10) = param_7 * fVar1;
          iVar2 = *(int *)((int)_Memory + 0x11);
          fVar1 = pfVar5[-2];
          *(float *)((int)pfVar5 + iVar2 + iVar3 + -0xc) = param_7 * pfVar5[-3];
          *(float *)((int)pfVar5 + iVar2 + iVar3 + -8) = param_7 * fVar1;
          iVar2 = *(int *)((int)_Memory + 0x11);
          fVar1 = *pfVar5;
          *(float *)((int)pfVar5 + iVar2 + -param_3 + -4) = param_7 * pfVar5[-1];
          *(float *)((int)pfVar5 + iVar2 + -param_3) = param_7 * fVar1;
          local_14 = param_7 * pfVar5[1];
          iVar2 = *(int *)((int)_Memory + 0x11);
          iVar6 = iVar6 + -1;
          local_10 = param_7 * pfVar5[2];
          *(float *)((int)pfVar5 + iVar2 + -param_3 + 4) = local_14;
          *(float *)((int)pfVar5 + iVar2 + -param_3 + 8) = local_10;
          pfVar5 = pfVar5 + 8;
        } while (iVar6 != 0);
      }
      while (uVar7 < param_4) {
        iVar3 = *(int *)((int)_Memory + 0x11);
        local_14 = param_7 * *(float *)(param_3 + uVar7 * 8);
        uVar7 = uVar7 + 1;
        local_10 = param_7 * *(float *)(param_3 + -4 + uVar7 * 8);
        *(float *)(iVar3 + -8 + uVar7 * 8) = local_14;
        *(float *)(iVar3 + -4 + uVar7 * 8) = local_10;
      }
      FUN_100971b0(&local_1c);
      ExceptionList = local_c;
      return 0;
    }
    _free(_Memory);
  }
  ExceptionList = local_c;
  return 0x8007000e;
}


/* END FUNCTION 0x100987d0 */
