/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00466880
 * Name: FUN_00466880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00466880(void *this,ushort param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte local_134 [4];
  uint local_130;
  int local_12c;
  int local_128;
  void *local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b14bb;
  local_c = ExceptionList;
  uVar7 = 0;
  uVar6 = 0;
  ExceptionList = &local_c;
  local_124 = this;
  FUN_0044d8a0(local_120);
  iVar8 = *(int *)((int)DAT_004fc438 + 8);
  iVar5 = *(int *)((int)this + 0x30d50);
  local_4 = 0;
  local_12c = iVar8;
  local_128 = iVar5;
  if (-1 < iVar5) {
    do {
      if ((((ushort)uVar6 < 1000) && (*(int *)((int)this + uVar7 * 4 + 0x24de4) == 1)) &&
         ((ushort)uVar6 != param_1)) {
        FUN_0044d9d0(local_120);
        local_134[0] = *(int *)(iVar8 + 0x2de6c + uVar7 * 4) != 0;
        uVar3 = *(uint *)(*(int *)(iVar8 + 0x25d84 + uVar7 * 4) + 0x3024);
        pbVar1 = (byte *)(uVar7 * 0x19 + 0x26d24 + (int)this);
        pbVar4 = pbVar1;
        do {
          bVar2 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar2 != 0);
        local_130 = uVar6;
        FUN_0044df40(local_120,(byte *)&local_130,0x10,'\x01');
        local_130 = uVar3;
        FUN_0044df40(local_120,(byte *)&local_130,0x20,'\x01');
        FUN_0044df40(local_120,local_134,8,'\x01');
        local_134[0] = (byte)((int)pbVar4 - (int)(pbVar1 + 1));
        FUN_0044df40(local_120,local_134,8,'\x01');
        FUN_0044dff0(local_120,pbVar1,(int)pbVar4 - (int)(pbVar1 + 1) & 0xff);
        FUN_00493c10(DAT_004fc438,&DAT_004bb2b8,local_120,param_1,2);
        iVar5 = local_128;
        this = local_124;
        iVar8 = local_12c;
      }
      uVar6 = uVar6 + 1;
      uVar7 = uVar6 & 0xffff;
    } while ((int)uVar7 <= iVar5);
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00466880 */
