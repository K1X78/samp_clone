/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004956d0
 * Name: FUN_004956d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004956d0(void *this,ushort *param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  byte local_14d;
  void *local_14c;
  byte local_148;
  uint local_147;
  undefined4 local_12d [3];
  byte local_121;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1b8b;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x5e) == 1) {
    if (*param_1 < 1000) {
      local_14c = *(void **)(*(int *)((int)this + 8) + 0x25d84 + (uint)*param_1 * 4);
    }
    else {
      local_14c = (void *)0x0;
    }
    pvVar1 = local_14c;
    ExceptionList = &local_c;
    FUN_0044d930(local_120,*(undefined4 **)(param_1 + 8),*(uint *)(param_1 + 4),'\0');
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      local_14d = 0;
      FUN_0044da70(local_120,&local_14d,8,'\x01');
      FUN_0044de00(local_120,&local_148,0x28);
      if (local_148 == 3) {
        if (((ushort)local_147 < 2000) &&
           (*(int *)((int)*(void **)(DAT_004fc438 + 0x14) + (local_147 & 0xffff) * 4 + 0xf46280) !=
            0)) {
          local_148 = 3;
        }
        else {
          iVar3 = FUN_0046fe30(*(void **)(DAT_004fc438 + 0x14),*param_1,(ushort)local_147);
          if (iVar3 != 0) {
            local_148 = 4;
          }
        }
      }
      pbVar4 = &local_148;
      puVar5 = (undefined4 *)((int)pvVar1 + 0x307f);
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *(undefined4 *)pbVar4;
        pbVar4 = pbVar4 + 4;
        puVar5 = puVar5 + 1;
      }
      pvVar1 = *(void **)this;
      uVar2 = FUN_0046cdd0(*(void **)((int)this + 4),(uint)*param_1,(uint)local_121,(uint)local_148,
                           local_147 & 0xffff,local_12d);
      if (uVar2 != 0) {
        uVar2 = FUN_0046f640(pvVar1,(uint)*param_1,(uint)local_121,(uint)local_148,
                             local_147 & 0xffff,local_12d);
        if (uVar2 != 0) {
          FUN_00485db0(local_14c,&local_148);
        }
      }
    }
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x004956d0 */
