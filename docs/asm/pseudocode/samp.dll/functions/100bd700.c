/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bd700
 * Name: FUN_100bd700
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100bd700(int param_1,int param_2,undefined4 param_3)

{
  size_t _Count;
  int iVar1;
  char cVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0;
  FUN_100bc1d0(&local_4,2);
  *(undefined2 *)(param_1 + 10) = (undefined2)local_4;
  param_2 = 0;
  FUN_100bc1d0(&param_2,2);
  *(undefined2 *)(param_1 + 0xc) = (undefined2)param_2;
  param_2 = 0;
  FUN_100bc1d0(&param_2,4);
  *(int *)(param_1 + 0xe) = param_2;
  param_2 = 0;
  FUN_100bc1d0(&param_2,4);
  *(int *)(param_1 + 0x12) = param_2;
  param_2 = 0;
  FUN_100bc1d0(&param_2,4);
  *(int *)(param_1 + 0x16) = param_2;
  if ((ushort)(((ushort)param_3 >> 6) + 0x300) < 0x340) {
    param_3 = 0;
    FUN_100bc1d0(&param_3,4);
    param_3 = 0;
    FUN_100bc1d0(&param_3,4);
    param_3 = 0;
    FUN_100bc1d0(&param_3,4);
  }
  if (*(char *)(iVar1 + 0xc) != '\0') {
    if (*(int *)(param_1 + 2) == 0) {
      *(undefined4 *)(param_1 + 2) = 0xabe1;
    }
    return 0;
  }
  if ((*(int *)(param_1 + 0xe) < 0) || (100000 < *(int *)(param_1 + 0xe))) {
    if (*(int *)(param_1 + 2) == 0) {
      *(undefined4 *)(param_1 + 2) = 0xabe5;
    }
    return 0;
  }
  _Count = *(size_t *)(param_1 + 0x12);
  if (((int)_Count < 0) || (200000 < (int)_Count)) {
    if (*(int *)(param_1 + 2) == 0) {
      *(undefined4 *)(param_1 + 2) = 0xabe4;
    }
    return 0;
  }
  if ((*(byte *)(param_1 + 10) & 8) != 0) {
    *(undefined1 *)(param_1 + 0x1a) = 1;
    pvVar3 = _calloc(_Count,4);
    *(void **)(param_1 + 0x1c) = pvVar3;
    if ((pvVar3 == (void *)0x0) ||
       (uVar5 = *(int *)(param_1 + 0x12) << 2,
       (uint)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) < uVar5)) goto LAB_100bd994;
    FUN_100bc1d0(pvVar3,uVar5);
  }
  if ((*(byte *)(param_1 + 10) & 0x84) != 0) {
    pvVar3 = _calloc(*(size_t *)(param_1 + 0x12),8);
    *(void **)(param_1 + 0x24) = pvVar3;
    if ((pvVar3 == (void *)0x0) ||
       (uVar5 = *(int *)(param_1 + 0x12) << 3,
       (uint)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) < uVar5)) goto LAB_100bd994;
    FUN_100bc1d0(pvVar3,uVar5);
  }
  pvVar3 = _calloc(*(size_t *)(param_1 + 0xe),8);
  *(void **)(param_1 + 0x28) = pvVar3;
  if (((pvVar3 != (void *)0x0) &&
      (uVar5 = *(int *)(param_1 + 0xe) << 3,
      uVar5 <= (uint)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)))) &&
     (FUN_100bc1d0(pvVar3,uVar5), *(char *)(iVar1 + 0xc) == '\0')) {
    FUN_100bc1d0(param_1 + 0x2c,0x10);
    uVar4 = FUN_100bc470();
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    uVar4 = FUN_100bc470();
    *(undefined4 *)(param_1 + 0x40) = uVar4;
    if (*(int *)(param_1 + 0x3c) != 0) {
      pvVar3 = _calloc(*(size_t *)(param_1 + 0x12),0xc);
      *(void **)(param_1 + 0x44) = pvVar3;
      if ((pvVar3 == (void *)0x0) ||
         (uVar5 = *(int *)(param_1 + 0x12) * 0xc,
         (uint)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) < uVar5)) goto LAB_100bd994;
      FUN_100bc1d0(pvVar3,uVar5);
    }
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      pvVar3 = _calloc(*(size_t *)(param_1 + 0x12),0xc);
      *(void **)(param_1 + 0x48) = pvVar3;
      if ((pvVar3 == (void *)0x0) ||
         (uVar5 = *(int *)(param_1 + 0x12) * 0xc,
         (uint)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) < uVar5)) goto LAB_100bd994;
      FUN_100bc1d0(pvVar3,uVar5);
    }
    cVar2 = FUN_100bd5f0(iVar1);
    if (cVar2 == '\0') {
      if (*(int *)(param_1 + 2) != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 2) = 0xabea;
      return 0;
    }
    cVar2 = FUN_100bce70(iVar1);
    if (cVar2 != '\0') {
      return 1;
    }
    if (*(int *)(param_1 + 2) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 2) = 0xabeb;
    return 0;
  }
LAB_100bd994:
  if (*(int *)(param_1 + 2) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 2) = 0xabe1;
  return 0;
}


/* END FUNCTION 0x100bd700 */
