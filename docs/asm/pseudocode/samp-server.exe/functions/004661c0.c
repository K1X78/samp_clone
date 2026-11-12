/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004661c0
 * Name: FUN_004661c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_004661c0(void *this,undefined4 *param_1,byte *param_2,char *param_3,char *param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  _union_1226 in;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  ushort uVar9;
  uint uVar10;
  undefined2 uVar11;
  _union_1226 local_130;
  undefined4 *local_12c;
  undefined1 local_128 [8];
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1499;
  local_c = ExceptionList;
  uVar9 = (ushort)param_1;
  if (uVar9 < 0x3e9) {
    pbVar4 = param_2;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    if ((uint)((int)pbVar4 - (int)(param_2 + 1)) < 0x19) {
      ExceptionList = &local_c;
      local_12c = operator_new(0x30d3);
      local_4 = 0;
      if (local_12c == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = FUN_004849f0(local_12c);
      }
      uVar10 = (uint)param_1 & 0xffff;
      local_4 = 0xffffffff;
      *(undefined4 **)((int)this + uVar10 * 4 + 0x25d84) = puVar5;
      if (puVar5 != (undefined4 *)0x0) {
        local_12c = (undefined4 *)(uVar10 * 0x19 + (int)this);
        pbVar4 = param_2;
        do {
          bVar1 = *pbVar4;
          pbVar4[(int)local_12c + (0x26d24 - (int)param_2)] = bVar1;
          pbVar4 = pbVar4 + 1;
        } while (bVar1 != 0);
        puVar5 = (undefined4 *)(uVar10 * 0x65 + 0x5214 + (int)this);
        for (iVar7 = 0x19; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        *(undefined1 *)puVar5 = 0;
        *(undefined4 *)((int)this + uVar10 * 0x19 + 0x1dc9c) = 0;
        *(undefined4 *)((int)this + uVar10 * 0x19 + 0x1dca0) = 0;
        *(undefined4 *)((int)this + uVar10 * 0x19 + 0x1dca4) = 0;
        *(undefined4 *)((int)this + uVar10 * 0x19 + 0x1dca8) = 0;
        *(undefined4 *)((int)this + uVar10 * 0x19 + 0x1dcac) = 0;
        *(undefined4 *)((int)this + uVar10 * 0x19 + 0x1dcb0) = 0;
        *(undefined1 *)((int)this + uVar10 * 0x19 + 0x1dcb4) = 0;
        if (param_3 != (char *)0x0) {
          pcVar8 = param_3;
          do {
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
          if (99 < (uint)((int)pcVar8 - (int)(param_3 + 1))) {
            ExceptionList = local_c;
            return 0;
          }
          iVar7 = uVar10 * 0x65 - (int)param_3;
          do {
            cVar2 = *param_3;
            param_3[iVar7 + 0x5214 + (int)this] = cVar2;
            param_3 = param_3 + 1;
          } while (cVar2 != '\0');
        }
        if (param_4 != (char *)0x0) {
          pcVar8 = param_4;
          do {
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
          if (0x17 < (uint)((int)pcVar8 - (int)(param_4 + 1))) {
            ExceptionList = local_c;
            return 0;
          }
          iVar7 = 0x1dc9c - (int)param_4;
          do {
            cVar2 = *param_4;
            param_4[(int)local_12c + iVar7] = cVar2;
            param_4 = param_4 + 1;
          } while (cVar2 != '\0');
        }
        FUN_00465bf0(*(void **)((int)this + uVar10 * 4 + 0x25d84),uVar9);
        *(undefined4 *)((int)this + uVar10 * 4 + 0x24de4) = 1;
        *(undefined4 *)((int)this + uVar10 * 4 + 0x1394) = 0;
        *(undefined4 *)((int)this + uVar10 * 4 + 0x2334) = 0;
        *(undefined4 *)((int)this + uVar10 * 4 + 0x2cecc) = 0;
        *(undefined4 *)((int)this + uVar10 * 4) = 0;
        *(undefined4 *)((int)this + uVar10 * 4 + 0x32d4) = 0;
        if (param_5 == 0) {
          *(undefined4 *)((int)this + uVar10 * 4 + 0x2de6c) = 0;
        }
        else {
          *(undefined4 *)((int)this + uVar10 * 4 + 0x2de6c) = 1;
        }
        FUN_0044d8a0(local_120);
        local_4 = 1;
        local_12c = param_1;
        FUN_0044df40(local_120,(byte *)&local_12c,0x10,'\x01');
        local_12c = (undefined4 *)0x0;
        FUN_0044df40(local_120,(byte *)&local_12c,0x20,'\x01');
        local_130.S_un_b.s_b1 = param_5 != 0;
        FUN_0044df40(local_120,(byte *)&local_130.S_addr,8,'\x01');
        pbVar4 = param_2;
        do {
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar1 != 0);
        local_130.S_un_b.s_b1 = (char)((int)pbVar4 - (int)(param_2 + 1));
        FUN_0044df40(local_120,(byte *)&local_130.S_addr,8,'\x01');
        FUN_0044dff0(local_120,param_2,(int)pbVar4 - (int)(param_2 + 1) & 0xff);
        FUN_00493960(DAT_004fc438,&DAT_004bb2b8,local_120,uVar9);
        piVar3 = (int *)DAT_004fc438[0x10];
        uVar11 = 0x46;
        (**(code **)(*piVar3 + 0xe8))(local_128,uVar10);
        in = local_130;
        uVar6 = (**(code **)(*piVar3 + 0x90))(local_130.S_addr,CONCAT22(uVar11,local_12c._0_2_));
        *(undefined4 *)((int)this + uVar10 * 4 + 0x23e44) = uVar6;
        if (*(int *)((int)this + uVar10 * 4 + 0x2de6c) == 0) {
          inet_ntoa((in_addr)in.S_un_b);
          pcVar8 = "[join] %s has joined the server (%u:%s)";
        }
        else {
          inet_ntoa((in_addr)in.S_un_b);
          pcVar8 = "[npc:join] %s has joined the server (%u:%s)";
        }
        FUN_00491fa0(pcVar8);
        FUN_00484b70(*(int *)((int)this + uVar10 * 4 + 0x25d84));
        FUN_0046ae10((void *)DAT_004fc438[1],uVar10);
        if ((void *)*DAT_004fc438 != (void *)0x0) {
          FUN_0046dbf0((void *)*DAT_004fc438,uVar10);
        }
        *(int *)((int)this + 0x30d4c) = *(int *)((int)this + 0x30d4c) + 1;
        FUN_00466080((int)this);
        FUN_00465c50((int)this);
        local_4 = 0xffffffff;
        FUN_0044d9b0((int)local_120);
        ExceptionList = local_c;
        return 1;
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x004661c0 */
