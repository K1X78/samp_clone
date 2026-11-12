/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002fb20
 * Name: FUN_1002fb20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1002fb20(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  char local_16c [4];
  undefined1 local_168 [4];
  undefined1 *local_164;
  byte local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011489b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f1f0();
  local_4 = 0;
  FUN_1001f7b0(8);
  uVar13 = 0;
  puVar9 = local_140;
  uVar10 = 0x20;
  uVar11 = param_1;
  FUN_100536f0(puVar9,0x20,param_1,0);
  FUN_10053d90(puVar9,uVar10,uVar11,uVar13);
  local_164 = local_140;
  piVar4 = (int *)FUN_1002f4d0(&local_164);
  iVar2 = *piVar4;
  if (iVar2 == 0) {
    uVar12 = 0;
    local_16c[0] = 'Z';
    FUN_1001faa0(local_16c,8,1);
    (**(code **)(*param_2 + 0x30))
              (local_120,1,9,0,*(undefined4 *)(param_3 + 2),
               CONCAT22(uVar12,*(undefined2 *)(param_3 + 6)),0);
  }
  else {
    if (param_4 == 0) {
      pbVar7 = (byte *)(iVar2 + 0x23);
    }
    else {
      pbVar7 = (byte *)(iVar2 + 3);
      if (param_4 != 1) {
        pbVar7 = (byte *)(iVar2 + 0x43);
      }
    }
    FUN_10008110(local_16c);
    if (local_16c[0] == '\0') {
      if (*pbVar7 == 0) goto LAB_1002fd5f;
      uVar12 = 0;
      local_168[0] = 0x5b;
      FUN_1001faa0(local_168,8,1);
      (**(code **)(*param_2 + 0x30))
                (local_120,1,9,0,*(undefined4 *)(param_3 + 2),
                 CONCAT22(uVar12,*(undefined2 *)(param_3 + 6)),0);
    }
    else {
      uVar10 = 0;
      pbVar5 = local_160;
      uVar11 = 0x20;
      FUN_100536f0(pbVar5,0x20,param_1,0);
      cVar3 = FUN_10053d90(pbVar5,uVar11,param_1,uVar10);
      if (cVar3 != '\0') {
        if (*(char *)(iVar2 + 0x23) != '\0') {
          pbVar5 = local_160;
          do {
            bVar1 = *pbVar5;
            bVar8 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_1002fc67:
              iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_1002fc6c;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar8 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_1002fc67;
            pbVar5 = pbVar5 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_1002fc6c:
          if (iVar6 != 0) {
            uVar12 = 0;
            local_16c[0] = '[';
            FUN_1001faa0(local_16c,8,1);
            (**(code **)(*param_2 + 0x30))
                      (local_120,1,9,0,*(undefined4 *)(param_3 + 2),
                       CONCAT22(uVar12,*(undefined2 *)(param_3 + 6)),0);
            iVar2 = *param_2;
            uVar10 = 1000;
            uVar11 = FUN_10033260(0);
            (**(code **)(iVar2 + 100))(uVar11,uVar10);
            (**(code **)(*param_2 + 0x58))
                      (*(undefined4 *)(param_3 + 2),*(undefined2 *)(param_3 + 6),0,0);
            goto LAB_1002fd47;
          }
        }
LAB_1002fd5f:
        local_4 = 0xffffffff;
        FUN_1001f390();
        ExceptionList = local_c;
        return iVar2;
      }
    }
  }
LAB_1002fd47:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x1002fb20 */
