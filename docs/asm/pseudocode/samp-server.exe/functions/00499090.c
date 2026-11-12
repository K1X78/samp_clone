/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00499090
 * Name: FUN_00499090
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00499090(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 uStack_138;
  undefined2 uStack_134;
  undefined4 local_130;
  undefined2 local_12c;
  undefined1 auStack_128 [8];
  undefined4 local_120 [67];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1c6b;
  pvStack_c = ExceptionList;
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar8 = *(undefined2 *)(param_1 + 0xc);
  uVar9 = 0x49;
  ExceptionList = &pvStack_c;
  local_130 = uVar4;
  local_12c = uVar8;
  FUN_0044d8a0(local_120);
  this = *(void **)(DAT_004fc438 + 8);
  local_4 = 0;
  uVar3 = (**(code **)(*DAT_0051c18c + 0xe4))(uVar4,CONCAT22(uVar9,uVar8));
  if (DAT_004fc438 != 0) {
    uVar7 = thunk_FUN_0044e910();
    if ((uVar3 < 1000) && (uVar6 = (uint)uVar3, *(int *)((int)this + uVar6 * 4 + 0x24de4) != 0)) {
      uVar4 = FUN_00466120(this,uVar3);
      if (((char)uVar4 != '\0') && (1999 < (int)uVar7 - *(int *)((int)this + uVar6 * 4 + 0x4274))) {
        *(int *)((int)this + uVar6 * 4 + 0x4274) = (int)uVar7;
        iVar1 = *(int *)((int)this + 0x30d50);
        uVar3 = 0;
        if (-1 < iVar1) {
          uVar6 = 0;
          do {
            if ((uVar3 < 1000) && (*(int *)((int)this + uVar6 * 4 + 0x24de4) != 0)) {
              FUN_0044df40(auStack_128,&stack0xfffffec0,0x10,'\x01');
              FUN_0044df40(auStack_128,&stack0xfffffec0,0x20,'\x01');
              iVar2 = *DAT_0051c18c;
              uVar8 = 0x49;
              puVar5 = (undefined4 *)(**(code **)(iVar2 + 0xe8))((int)&local_130 + 2,uVar6);
              (**(code **)(iVar2 + 0x4c))(*puVar5,CONCAT22(uVar8,*(undefined2 *)(puVar5 + 1)));
              FUN_0044df40(auStack_128,&stack0xfffffec0,0x20,'\x01');
            }
            uVar3 = uVar3 + 1;
            uVar6 = (uint)uVar3;
          } while ((int)uVar6 <= iVar1);
        }
        FUN_0044df40(auStack_128,&stack0xfffffec4,0x10,'\x01');
        (**(code **)(*DAT_0051c18c + 0x80))
                  (&DAT_004c00c4,auStack_128,1,8,0,uStack_138,uStack_134,0,0);
      }
    }
  }
  pvStack_c = (void *)0xffffffff;
  FUN_0044d9b0((int)auStack_128);
  ExceptionList = pvStack_14;
  return;
}


/* END FUNCTION 0x00499090 */
