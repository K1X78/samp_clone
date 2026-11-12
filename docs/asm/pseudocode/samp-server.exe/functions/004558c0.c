/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004558c0
 * Name: FUN_004558c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004558c0(void *this,int param_1,undefined4 *param_2,char param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  byte local_23c [4];
  byte *local_238;
  int local_234 [3];
  byte *local_228;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b0e66;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8d0(local_120,0xf);
  local_4 = 0;
  local_23c[0] = 0x22;
  FUN_0044df40(local_120,local_23c,8,'\x01');
  local_238 = *(byte **)(param_1 + 1);
  FUN_0044df40(local_120,(byte *)&local_238,0x20,'\x01');
  local_238 = (byte *)(uint)*(ushort *)(param_1 + 5);
  uVar6 = 0;
  FUN_0044df40(local_120,(byte *)&local_238,0x10,'\x01');
  local_238 = (byte *)FUN_004538a0(this,*(undefined4 *)(param_1 + 1),
                                   CONCAT22(uVar6,*(undefined2 *)(param_1 + 5)),'\x01');
  FUN_0044df40(local_120,(byte *)&local_238,0x10,'\x01');
  local_238 = DAT_004fc470;
  FUN_0044df40(local_120,(byte *)&local_238,0x20,'\x01');
  uVar2 = _rand();
  *(char *)(param_1 + 0xcb4) = (char)uVar2;
  FUN_0044d8a0(local_234);
  iVar3 = (uVar2 & 0xff) * 0x60;
  local_238 = &DAT_004e4838 + iVar3;
  local_4._0_1_ = 1;
  pbVar4 = local_238;
  do {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  bVar1 = ((char)pbVar4 - ((char)iVar3 + '9')) + 1;
  local_23c[0] = 0xc;
  FUN_0044df40(local_234,local_23c,8,'\x01');
  local_23c[0] = bVar1;
  FUN_0044df40(local_234,local_23c,8,'\x01');
  FUN_0044dff0(local_234,local_238,(uint)bVar1);
  local_238 = local_228;
  uVar5 = FUN_0044e910();
  FUN_00453ac0(this,(int)local_238,local_234[0],0,8,0,*(undefined4 *)(param_1 + 1),
               *(undefined2 *)(param_1 + 5),'\0','\0',(int)uVar5,0);
  *(char *)(param_1 + 0x8ac) = param_3;
  if (param_3 != '\0') {
    *(undefined4 *)(param_1 + 0x89c) = *param_2;
    *(undefined4 *)(param_1 + 0x8a0) = param_2[1];
    *(undefined4 *)(param_1 + 0x8a4) = param_2[2];
    *(undefined4 *)(param_1 + 0x8a8) = param_2[3];
    *(undefined4 *)(param_1 + 0xcb0) = 7;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0044d9b0((int)local_234);
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x004558c0 */
