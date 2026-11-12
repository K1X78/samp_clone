/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004fa40
 * Name: FUN_1004fa40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1004fa40(int param_1,undefined4 param_2,undefined2 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 uVar10;
  char local_3ac [7];
  byte local_3a5;
  uint local_3a4;
  char local_39d;
  int local_39c;
  int local_398;
  ushort local_394 [2];
  uint local_390;
  undefined2 local_38c;
  uint local_388;
  undefined2 local_384 [2];
  uint local_380;
  undefined2 local_37c [2];
  undefined4 local_378;
  uint local_374;
  uint local_370;
  uint local_36c;
  int local_368;
  int local_364;
  int local_360;
  uint local_35c;
  undefined1 local_358 [4];
  undefined1 local_354 [8];
  uint local_34c;
  int local_348 [3];
  int local_33c;
  int local_234 [2];
  uint local_22c;
  int local_228;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115951;
  local_c = ExceptionList;
  cVar1 = **(char **)(param_3 + 8);
  if ((cVar1 == 'D') ||
     (((5 < *(uint *)(param_3 + 4) && (cVar1 == '(')) && ((*(char **)(param_3 + 8))[5] == 'D')))) {
    ExceptionList = &local_c;
    local_364 = param_1;
    FUN_1001f1f0();
    uVar6 = 0;
    local_4 = 0;
    FUN_1001f280(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 4),0);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_1001f7b0(8);
    if (**(char **)(param_3 + 8) == '(') {
      FUN_1001f470(&local_368,0x20,1);
      local_3ac[0] = '(';
      FUN_1001faa0(local_3ac,8,1);
      local_398 = local_368;
      FUN_1001faa0(&local_398,0x20,1);
    }
    FUN_1001f530(&local_3a5,8,1);
    local_370 = (uint)local_3a5;
    FUN_1001f530(&local_3a5,8,1);
    local_36c = (uint)local_3a5;
    FUN_1001f530(&local_378,8,1);
    FUN_1001f470(&local_39c,0x20,1);
    local_3ac[0] = 'D';
    FUN_1001faa0(local_3ac,8,1);
    local_3ac[0] = (char)local_370;
    FUN_1001fbf0(local_3ac,8,1);
    local_3ac[0] = (char)local_36c;
    FUN_1001fbf0(local_3ac,8,1);
    local_3ac[0] = (char)local_378;
    FUN_1001fbf0(local_3ac,8,1);
    local_398 = local_39c;
    FUN_1001faa0(&local_398,0x20,1);
    FUN_1001f420();
    FUN_1001f440();
    iVar7 = local_348[0] + 7 >> 3;
    local_398 = iVar7;
    FUN_1001f880(local_234,local_39c);
    if (*(char *)(param_1 + 0xc) == '\0') {
LAB_1004fcff:
      FUN_1001f470(&local_380,0x20,1);
      FUN_1001f470(local_37c,0x10,1);
      local_3a4 = local_380;
      local_35c = CONCAT22(local_35c._2_2_,local_37c[0]);
      FUN_1001faa0(&local_3a4,0x20,1);
      local_3a4 = local_35c;
      FUN_1001faa0(&local_3a4,0x10,1);
      local_360 = local_348[0];
      FUN_10008110(&local_39d);
      FUN_1001f470(local_358,0x20,1);
      FUN_1001f470(local_354,0x10,1);
      cVar1 = FUN_1001f530(local_394,0x10,1);
      if (cVar1 != '\0') {
        iVar7 = 0;
        local_390 = DAT_1013fda0;
        local_38c = DAT_1013fda4;
        if (local_394[0] != 0) {
          do {
            do {
              uVar5 = local_22c + 1;
              if ((int)uVar5 <= local_234[0]) {
                uVar4 = local_22c & 0x80000007;
                if ((int)uVar4 < 0) {
                  uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
                }
                iVar3 = (int)local_22c >> 3;
                local_3ac[0] = '\x01';
                local_22c = uVar5;
                if ((*(byte *)(iVar3 + local_228) & (byte)(0x80 >> ((byte)uVar4 & 0x1f))) == 0) {
                  local_3ac[0] = '\0';
                }
              }
              FUN_1001f470(&local_388,0x20,1);
              FUN_1001f470(local_384,0x10,1);
              cVar1 = FUN_1001f530(&local_374,0x10,1);
              if (cVar1 == '\0') goto LAB_1004fcb5;
              cVar1 = FUN_100331a0(&DAT_1013fda0);
              if (cVar1 != '\0') {
                local_390 = local_388;
                local_38c = local_384[0];
              }
              iVar7 = iVar7 + -1 + (local_374 & 0xffff);
              if (local_3ac[0] == '\0') {
                FUN_1001f9d0();
              }
              else {
                FUN_1001f9f0();
              }
              local_34c = CONCAT22(local_34c._2_2_,local_384[0]);
              local_3a4 = local_388;
              FUN_1001faa0(&local_3a4,0x20,1);
              local_3a4 = local_34c;
              FUN_1001faa0(&local_3a4,0x10,1);
              uVar10 = 0;
              local_3a4 = local_374;
              FUN_1001fbf0(&local_3a4,0x10,1);
            } while (iVar7 != -1);
            (**(code **)(**(int **)(local_364 + 0x19) + 0x30))
                      (local_348,local_370,local_36c,local_378,local_390,CONCAT22(uVar10,local_38c),
                       0);
            FUN_1001f7c0(local_360);
            local_390 = DAT_1013fda0;
            local_38c = DAT_1013fda4;
            iVar7 = 0;
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_394[0]);
        }
        local_38c = DAT_1013fda4;
        local_390 = DAT_1013fda0;
        if (local_39d != '\0') {
          pcVar9 = *(char **)(param_3 + 8);
          uVar6 = local_39c + 7;
          if (*pcVar9 == '(') {
            pcVar8 = (char *)(local_33c + local_398);
            pcVar9 = pcVar9 + 5;
            for (uVar5 = uVar6 >> 5; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar6 = uVar6 >> 3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar9 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar9 = pcVar9 + 1;
            }
            local_39c = local_39c + 5;
          }
          else {
            pcVar8 = (char *)(local_33c + local_398);
            for (uVar5 = uVar6 >> 5; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar6 = uVar6 >> 3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar9 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar9 = pcVar9 + 1;
            }
          }
          *(int *)(param_3 + 6) = local_39c;
          *(uint *)(param_3 + 4) = local_39c + 7U >> 3;
          *param_3 = 0xffff;
          *(uint *)(param_3 + 1) = local_380;
          param_3[3] = local_37c[0];
          local_4 = local_4 & 0xffffff00;
          FUN_1001f390();
          local_4 = 0xffffffff;
          FUN_1001f390();
          goto LAB_10050041;
        }
      }
    }
    else {
      FUN_1001f280(local_33c + iVar7,1,0);
      local_4._0_1_ = 2;
      FUN_1001f470(local_3ac,8,1);
      cVar1 = FUN_10022280(local_3ac);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (cVar1 != '\0') {
        FUN_1001f390();
        goto LAB_1004fcff;
      }
      FUN_1001f390();
    }
LAB_1004fcb5:
    local_4 = local_4 & 0xffffff00;
    FUN_1001f390();
    local_4 = 0xffffffff;
    FUN_1001f390();
    uVar2 = 0;
  }
  else {
LAB_10050041:
    uVar2 = 1;
  }
  ExceptionList = local_c;
  return uVar2;
}


/* END FUNCTION 0x1004fa40 */
