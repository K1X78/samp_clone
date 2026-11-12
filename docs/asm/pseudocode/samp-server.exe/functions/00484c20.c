/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00484c20
 * Name: FUN_00484c20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00484c20(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  char extraout_DL;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte local_140 [4];
  uint local_13c;
  uint local_138;
  int local_134;
  int local_130;
  float local_12c;
  int local_128;
  undefined4 local_124;
  uint local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b183b;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)DAT_004fc438 + 8);
  if ((*(int *)((int)DAT_004fc438 + 0x54) == 1) && (iVar2 != 0)) {
    if (*(ushort *)(param_1 + 0x2d53) < 1000) {
      local_130 = *(int *)(iVar2 + (uint)*(ushort *)(param_1 + 0x2d53) * 4);
    }
    else {
      local_130 = 0;
    }
    ExceptionList = &local_c;
    local_134 = param_1;
    uVar9 = thunk_FUN_0044e910();
    if (0x9c4 < (int)uVar9 - *(int *)(param_1 + 0x2fe5)) {
      uVar9 = thunk_FUN_0044e910();
      *(int *)(param_1 + 0x2fe5) = (int)uVar9;
      FUN_0044d8a0(local_120);
      local_4 = 0;
      iVar4 = FUN_00466b10(iVar2);
      local_140[0] = 0xd0;
      FUN_0044df40(local_120,local_140,8,'\x01');
      local_138 = iVar4 - 1;
      FUN_0044df40(local_120,(byte *)&local_138,0x20,'\x01');
      local_128 = *(int *)(iVar2 + 0x30d50);
      local_12c = *(float *)((int)DAT_004fc438 + 0x7a) * *(float *)((int)DAT_004fc438 + 0x7a);
      local_138 = 0;
      if (-1 < local_128) {
        uVar7 = 0;
        do {
          uVar6 = local_138;
          if (((((ushort)local_138 != *(ushort *)(local_134 + 0x2d53)) && ((ushort)local_138 < 1000)
               ) && (*(int *)(iVar2 + 0x24de4 + uVar7 * 4) != 0)) &&
             (*(int *)(iVar2 + 0x2de6c + uVar7 * 4) == 0)) {
            iVar4 = *(int *)(iVar2 + 0x25d84 + uVar7 * 4);
            local_13c = local_138;
            FUN_0044df40(local_120,(byte *)&local_13c,0x10,'\x01');
            iVar3 = *(int *)(iVar2 + uVar7 * 4);
            cVar5 = '\0';
            if ((*(char *)((int)DAT_004fc438 + 0x79) != '\0') &&
               (fVar8 = FUN_00484170(iVar4,*(float *)(local_134 + 0x2cfd),
                                     *(float *)(local_134 + 0x2d01)), cVar5 = extraout_DL,
               (float10)local_12c < fVar8)) {
              cVar5 = '\x01';
            }
            cVar1 = *(char *)(iVar4 + 0x2f95);
            if (((cVar1 == '\0') || (cVar1 == '\t')) || ((iVar3 != local_130 || (cVar5 != '\0')))) {
              FUN_0044de70(local_120);
            }
            else {
              FUN_0044de90(local_120);
              uVar10 = FUN_004a0540();
              uVar11 = FUN_004a0540();
              uVar12 = FUN_004a0540();
              local_13c = (uint)uVar10;
              FUN_0044df40(local_120,(byte *)&local_13c,0x10,'\x01');
              local_13c = (uint)uVar11;
              FUN_0044df40(local_120,(byte *)&local_13c,0x10,'\x01');
              local_124 = (int)uVar12;
              FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
              uVar6 = local_138;
            }
          }
          local_138 = uVar6 + 1;
          uVar7 = local_138 & 0xffff;
          param_1 = local_134;
        } while ((int)uVar7 <= local_128);
      }
      FUN_00493ca0(DAT_004fc438,local_120,*(undefined2 *)(param_1 + 0x2d53));
      local_4 = 0xffffffff;
      FUN_0044d9b0((int)local_120);
    }
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00484c20 */
