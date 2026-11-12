/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00466550
 * Name: FUN_00466550
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00466550(void *this,uint param_1,byte param_2)

{
  void *pvVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte local_12c [4];
  uint local_128;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b14bb;
  local_c = ExceptionList;
  uVar2 = (ushort)param_1;
  if (uVar2 < 1000) {
    uVar5 = param_1 & 0xffff;
    iVar3 = 0;
    if ((*(int *)((int)this + uVar5 * 4 + 0x24de4) != 0) &&
       (*(int *)((int)this + uVar5 * 4 + 0x25d84) != 0)) {
      uVar4 = (uint)param_2;
      ExceptionList = &local_c;
      local_128 = uVar4;
      FUN_0046ae90((void *)DAT_004fc438[1],uVar5,uVar4);
      if ((void *)*DAT_004fc438 != (void *)0x0) {
        FUN_0046dc50((void *)*DAT_004fc438,uVar5,uVar4);
      }
      pvVar1 = *(void **)((int)this + uVar5 * 4 + 0x25d84);
      *(undefined4 *)((int)this + uVar5 * 4 + 0x24de4) = 0;
      if (pvVar1 != (void *)0x0) {
        FUN_00484b00((int)pvVar1);
        _free(pvVar1);
      }
      *(undefined4 *)((int)this + uVar5 * 4 + 0x25d84) = 0;
      *(undefined4 *)((int)this + uVar5 * 4 + 0x2cecc) = 0;
      *(undefined4 *)((int)this + uVar5 * 4 + 0x23e44) = 0;
      FUN_0044d8a0(local_120);
      local_4 = 0;
      local_124 = param_1;
      FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
      local_12c[0] = param_2;
      FUN_0044df40(local_120,local_12c,8,'\x01');
      FUN_00493960(DAT_004fc438,&DAT_004bb310,local_120,uVar2);
      pvVar1 = (void *)DAT_004fc438[5];
      if (pvVar1 != (void *)0x0) {
        do {
          FUN_004656c0(pvVar1,uVar2,(ushort)iVar3);
          iVar3 = iVar3 + 1;
        } while (iVar3 < 2000);
      }
      if (*(int *)((int)this + uVar5 * 4 + 0x2de6c) == 0) {
        FUN_00491fa0("[part] %s has left the server (%u:%u)");
      }
      else {
        FUN_00491fa0("[npc:part] %s has left the server (%u:%u)");
        *(undefined4 *)((int)this + uVar5 * 4 + 0x2de6c) = 0;
      }
      *(int *)((int)this + 0x30d4c) = *(int *)((int)this + 0x30d4c) + -1;
      FUN_00466080((int)this);
      FUN_00465c50((int)this);
      local_4 = 0xffffffff;
      FUN_0044d9b0((int)local_120);
      ExceptionList = local_c;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00466550 */
