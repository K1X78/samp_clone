/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004884a0
 * Name: FUN_004884a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004884a0(int *param_1)

{
  int iVar1;
  uint uVar2;
  byte abStack_128 [4];
  uint uStack_124;
  undefined4 local_120 [69];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b187b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0044d8a0(local_120);
  local_4 = 0;
  iVar1 = (**(code **)(**(int **)((int)DAT_004fc438 + 0x40) + 0x10c))();
  uVar2 = iVar1 - 0x28;
  if (*param_1 != 1) {
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
    ExceptionList = pvStack_c;
    return;
  }
  if ((char)param_1[2] == '\x02') {
    iVar1 = FUN_004880f0((int)param_1);
    if (iVar1 == -1) {
      FUN_0044d9d0(local_120);
      abStack_128[0] = 2;
      FUN_0044df40(local_120,abStack_128,8,'\x01');
      if (DAT_004fc438 != (void *)0x0) {
        FUN_00493c10(DAT_004fc438,&DAT_004bef9c,local_120,*(ushort *)((int)param_1 + 0x11),5);
      }
      *(undefined1 *)(param_1 + 2) = 0;
      *param_1 = 0;
      goto LAB_004886a2;
    }
    param_1[0x409] = param_1[0x409] + 1;
  }
  if ((char)param_1[2] == '\x01') {
    FUN_0044d9d0(local_120);
    abStack_128[0] = 1;
    FUN_0044df40(local_120,abStack_128,8,'\x01');
    if (*(uint *)((int)param_1 + 0x17) <= *(int *)((int)param_1 + 0x13) + uVar2) {
      uVar2 = *(uint *)((int)param_1 + 0x17) - *(int *)((int)param_1 + 0x13);
      *(undefined1 *)(param_1 + 2) = 2;
    }
    abStack_128[0] = *(byte *)(param_1 + 2);
    FUN_0044df40(local_120,abStack_128,8,'\x01');
    uStack_124 = *(uint *)((int)param_1 + 0x1b);
    FUN_0044df40(local_120,(byte *)&uStack_124,0x20,'\x01');
    uStack_124 = uVar2;
    FUN_0044df40(local_120,(byte *)&uStack_124,0x20,'\x01');
    FUN_0044dff0(local_120,(byte *)(*(int *)((int)param_1 + 0x13) + 0x20 + (int)param_1),uVar2);
    if (DAT_004fc438 != (void *)0x0) {
      FUN_00493c10(DAT_004fc438,&DAT_004bef9c,local_120,*(ushort *)((int)param_1 + 0x11),5);
    }
    *(int *)((int)param_1 + 0x13) = *(int *)((int)param_1 + 0x13) + uVar2;
  }
  if (((char)param_1[2] == '\x02') && ((uint)param_1[0x408] < (uint)param_1[0x409])) {
    FUN_0044d9d0(local_120);
    abStack_128[0] = 2;
    FUN_0044df40(local_120,abStack_128,8,'\x01');
    if (DAT_004fc438 != (void *)0x0) {
      FUN_00493c10(DAT_004fc438,&DAT_004bef9c,local_120,*(ushort *)((int)param_1 + 0x11),5);
    }
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = 0;
    _fclose((FILE *)param_1[1]);
    param_1[1] = 0;
  }
LAB_004886a2:
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x004884a0 */
