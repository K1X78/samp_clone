/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10011930
 * Name: FUN_10011930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10011930(undefined4 *param_1)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint local_134;
  uint local_12d;
  char local_129;
  undefined4 local_128;
  uint local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011322b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  local_129 = '\0';
  local_124[0] = 0;
  local_128 = 0;
  local_12d = local_12d & 0xffffff00;
  local_134 = 0;
  FUN_1001f470(&local_129,8,1);
  FUN_1001f470(&local_134,0x20,1);
  FUN_1001f470(local_124,0x10,1);
  FUN_1001f470(&local_128,0x10,1);
  uVar5 = local_134;
  if (((0x100 < (ushort)local_124[0]) || (0x100 < (ushort)local_128)) || ((ushort)local_128 < 2))
  goto LAB_10011aea;
  if (local_129 == 'F') {
    iVar3 = FUN_100b39b0(local_134);
    if ((iVar3 != 0) && (iVar3 = FUN_100a7630(local_134), iVar3 != 0)) {
      uVar1 = FUN_1000e910((local_124[0] & 0xffff) + iVar3,local_128);
      local_12d = CONCAT31(local_12d._1_3_,uVar1);
    }
    uVar6 = 0x46;
  }
  else {
    if (local_129 != '\x02') {
      if (local_129 == 'G') {
        iVar3 = FUN_100b39b0(local_134);
        if (iVar3 != 0) {
          iVar3 = 0;
          iVar4 = FUN_100a07b0(local_134);
          if (iVar4 == 0) {
            FUN_100a0780(local_134,2);
            FUN_100a07a0();
            iVar4 = FUN_100a07b0(local_134);
            while ((iVar4 == 0 && (iVar3 = iVar3 + 1, iVar3 < 0x3e9))) {
              Sleep(1);
              iVar4 = FUN_100a07b0(local_134);
            }
          }
          iVar3 = FUN_100a07b0(local_134);
          if (iVar3 != 0) {
            iVar3 = FUN_100b42d0(local_134);
            if (iVar3 != 0) {
              uVar1 = FUN_1000e910((local_124[0] & 0xffff) + iVar3,local_128);
              local_12d = CONCAT31(local_12d._1_3_,uVar1);
            }
            sVar2 = FUN_100b4300(local_134);
            if (sVar2 == 0) {
              FUN_100a07e0(local_134,0);
            }
          }
        }
        uVar6 = 0x47;
        uVar5 = local_134;
        uVar7 = local_12d;
      }
      else if (local_129 == '\x05') {
        if ((local_134 < 0x400000) || (0x856e00 < local_134)) goto LAB_10011c11;
        if (local_134 != 0) {
          uVar1 = FUN_1000e910((local_124[0] & 0xffff) + local_134,local_128);
          local_12d = CONCAT31(local_12d._1_3_,uVar1);
        }
        uVar6 = 5;
        uVar7 = local_12d;
      }
      else if (local_129 == 'E') {
        if (800000 < local_134) goto LAB_10011c11;
        if (DAT_102ac9c8 + local_134 != 0) {
          uVar1 = FUN_1000e910((local_124[0] & 0xffff) + DAT_102ac9c8 + local_134,local_128);
          local_12d = CONCAT31(local_12d._1_3_,uVar1);
        }
        uVar6 = 0x45;
        uVar7 = local_12d;
      }
      else {
        if (local_129 != 'H') goto LAB_10011c11;
        uVar7 = 0;
        uVar5 = FUN_1002e2b0(0);
        uVar6 = 0x48;
      }
      FUN_10011860(uVar6,uVar5,uVar7);
LAB_10011c11:
      local_4 = 0xffffffff;
      FUN_1001f390();
      ExceptionList = local_c;
      return;
    }
    iVar3 = FUN_10001010();
    if (iVar3 != 0) {
      FUN_10001010();
      iVar3 = FUN_100aba90();
      if (iVar3 != 0) {
        FUN_10001010();
        iVar3 = FUN_100abbe0();
        if (iVar3 == 0) {
          iVar3 = FUN_10001010();
          iVar3 = *(int *)(*(int *)(iVar3 + 0x2a4) + 0x58c);
          if (iVar3 != 0) {
            local_134 = *(uint *)(iVar3 + 0x40);
            local_12d = CONCAT31(local_12d._1_3_,2);
          }
          goto LAB_10011ad6;
        }
      }
      iVar3 = FUN_10001010();
      if (*(int *)(iVar3 + 0x2a4) != 0) {
        local_134 = *(uint *)(*(int *)(iVar3 + 0x2a4) + 0x40);
        local_12d = CONCAT31(local_12d._1_3_,1);
      }
    }
LAB_10011ad6:
    uVar6 = 2;
  }
  FUN_10011860(uVar6,local_134,local_12d);
LAB_10011aea:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10011930 */
