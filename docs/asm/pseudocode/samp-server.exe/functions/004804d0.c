/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004804d0
 * Name: FUN_004804d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004804d0(undefined4 param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint local_12c;
  uint local_128;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b15db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  local_124 = *(uint *)(param_2 + 0xc);
  local_4 = 0;
  if ((((DAT_004fc438 != (void *)0x0) &&
       (pvVar4 = *(void **)((int)DAT_004fc438 + 8), pvVar4 != (void *)0x0)) &&
      (*(ushort *)(param_2 + 4) < 1000)) &&
     (*(int *)((int)pvVar4 + (uint)*(ushort *)(param_2 + 4) * 4 + 0x24de4) != 0)) {
    uVar2 = *(ushort *)(param_2 + 8);
    if (((uVar2 < 1000) && (*(int *)((int)pvVar4 + (uint)uVar2 * 4 + 0x24de4) != 0)) &&
       (iVar6 = FUN_00463d80(pvVar4,uVar2), iVar6 != 0)) {
      cVar1 = *(char *)(iVar6 + 0x2f95);
      if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
        pvVar4 = *(void **)((int)DAT_004fc438 + 0xc);
        if (pvVar4 != (void *)0x0) {
          uVar3 = *(ushort *)(iVar6 + 0x3022);
          iVar6 = FUN_00463dc0(pvVar4,uVar3);
          if ((iVar6 != 0) && (puVar7 = (uint *)FUN_00467470(pvVar4,uVar3), puVar7 != (uint *)0x0))
          {
            uVar8 = *(uint *)((int)puVar7 + 0xc6);
            uVar5 = *(uint *)((int)puVar7 + 0x82);
            if (uVar8 == 0xffffffff) {
              uVar8 = *(uint *)((int)puVar7 + 0x96);
            }
            local_128 = (uint)uVar2;
            FUN_0044df40(local_120,(byte *)&local_128,0x10,'\x01');
            local_128 = 1;
            FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
            local_128 = uVar5;
            FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
            local_128 = uVar8;
            FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
            local_128 = local_124;
            FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
            local_128 = *puVar7;
            FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
            local_128 = puVar7[1];
            FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
            local_128 = puVar7[2];
            FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
            uVar2 = *(ushort *)(param_2 + 4);
            goto LAB_00480668;
          }
        }
      }
      else if (cVar1 == '\x01') {
        local_12c = (uint)uVar2;
        FUN_0044df40(local_120,(byte *)&local_12c,0x10,'\x01');
        local_12c = 0;
        FUN_0044df40(local_120,(byte *)&local_12c,0x20,'\x01');
        local_12c = 0;
        FUN_0044df40(local_120,(byte *)&local_12c,0x20,'\x01');
        local_12c = 0;
        FUN_0044df40(local_120,(byte *)&local_12c,0x20,'\x01');
        local_12c = local_124;
        FUN_0044df40(local_120,(byte *)&local_12c,0x20,'\x01');
        local_12c = *(uint *)(iVar6 + 0x2cfd);
        FUN_0044df40(local_120,(byte *)&local_12c,0x20,'\x01');
        local_12c = *(uint *)(iVar6 + 0x2d01);
        FUN_0044df40(local_120,(byte *)&local_12c,0x20,'\x01');
        local_12c = *(uint *)(iVar6 + 0x2d05);
        FUN_0044df40(local_120,(byte *)&local_12c,0x20,'\x01');
        uVar2 = *(ushort *)(param_2 + 4);
LAB_00480668:
        FUN_00493c10(DAT_004fc438,&DAT_004be994,local_120,uVar2,2);
        local_4 = 0xffffffff;
        FUN_0044d9b0((int)local_120);
        ExceptionList = local_c;
        return 1;
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x004804d0 */
