/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002c910
 * Name: FUN_1002c910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1002c910(int *param_1,int *param_2,undefined1 **param_3,undefined2 param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,char param_8)

{
  undefined1 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint unaff_EBX;
  uint unaff_EBP;
  int iVar7;
  int unaff_ESI;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 unaff_retaddr;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined1 **local_c8c;
  undefined1 *local_c88;
  undefined1 *local_c70;
  uint local_c6c;
  uint local_c68;
  uint local_c64;
  undefined1 auStack_c54 [12];
  undefined4 *local_c48;
  int local_c44;
  undefined1 local_c38 [276];
  int local_b24;
  undefined4 *local_b18;
  uint local_a10 [634];
  void *pvStack_28;
  int iStack_20;
  int *piStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011463c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f1f0();
  iVar7 = 0;
  local_4 = 0;
  FUN_1001f1f0();
  local_4._0_1_ = 1;
  FUN_10026220();
  local_4._0_1_ = 2;
  FUN_1002c5b0();
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar11 = local_c64;
  if (param_8 != '\0') {
    puVar2 = local_a10;
    for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    uVar11 = param_1[1];
    uVar8 = 0;
    if (uVar11 != 0) {
      puVar2 = (uint *)(*param_1 + 8);
      do {
        uVar6 = 0;
        if (*puVar2 != 0) {
          do {
            local_a10[*(byte *)(puVar2[-1] + uVar6)] = local_a10[*(byte *)(puVar2[-1] + uVar6)] + 1;
            uVar6 = uVar6 + 1;
          } while (uVar6 < *puVar2);
        }
        uVar8 = uVar8 + 1;
        puVar2 = (uint *)((int)puVar2 + 0x11);
      } while (uVar8 < uVar11);
    }
    local_c88 = (undefined1 *)0x1002c9f8;
    FUN_10026a80();
    uVar11 = 0;
    local_c68 = 0;
    local_c6c = 0;
    if (param_1[1] != 0) {
      do {
        FUN_1001f3b0();
        local_c88 = *(undefined1 **)(*param_1 + iVar7 + 8);
        local_c8c = *(undefined1 ***)(*param_1 + iVar7 + 4);
        FUN_100268c0();
        local_c44 = local_b24;
        uVar8 = local_b24 + 7;
        local_c68 = local_c68 + (uVar8 >> 3);
        local_c64 = uVar11 + *(int *)(*param_1 + 0xc + iVar7);
        local_c88 = (undefined1 *)0x1002ca6a;
        local_c48 = operator_new(uVar8 >> 3);
        puVar9 = local_b18;
        puVar12 = local_c48;
        for (uVar11 = uVar8 >> 5; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar12 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar12 = puVar12 + 1;
        }
        for (uVar11 = uVar8 >> 3 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar12 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        local_c88 = (undefined1 *)0x1002ca9b;
        FUN_1002c600();
        local_c6c = local_c6c + 1;
        iVar7 = iVar7 + 0x11;
        uVar11 = local_c64;
      } while (local_c6c < (uint)param_1[1]);
    }
  }
  local_c88 = (undefined1 *)0x8;
  local_c8c = &local_c70;
  local_c70 = (undefined1 *)CONCAT31(local_c70._1_3_,0x2f);
  FUN_1001faa0();
  local_c88 = (undefined1 *)0x10;
  local_c8c = (undefined1 **)&local_c6c;
  local_c6c = param_5;
  FUN_1001faa0();
  if (param_1[1] == 0) {
    FUN_1001f9d0();
    local_c8c = param_3;
    local_c88 = (undefined1 *)CONCAT22(local_c88._2_2_,param_4);
    (**(code **)(*param_2 + 0x30))(local_c38,param_6,9,param_7);
  }
  else {
    FUN_1001f9f0();
    if (param_8 == '\0') {
      FUN_1001f9d0();
      local_c6c = param_1[1];
      local_c88 = (undefined1 *)0x20;
      local_c8c = (undefined1 **)&local_c6c;
      FUN_1001fbf0();
      local_c6c = uVar11;
    }
    else {
      FUN_1001f9f0();
      uVar8 = 0;
      do {
        local_c6c = local_a10[uVar8];
        local_c88 = (undefined1 *)0x20;
        local_c8c = (undefined1 **)&local_c6c;
        FUN_1001fbf0();
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x100);
      local_c6c = param_1[1];
      local_c88 = (undefined1 *)0x20;
      local_c8c = (undefined1 **)&local_c6c;
      FUN_1001fbf0();
      local_c88 = (undefined1 *)0x20;
      local_c8c = (undefined1 **)&local_c6c;
      local_c6c = uVar11;
      FUN_1001fbf0();
      local_c6c = local_c68;
    }
    local_c8c = (undefined1 **)&local_c6c;
    local_c88 = (undefined1 *)0x20;
    FUN_1001fbf0();
    local_c8c = param_3;
    local_c88 = (undefined1 *)CONCAT22(local_c88._2_2_,param_4);
    (**(code **)(*param_2 + 0x30))(local_c38,param_6,9,param_7);
    puVar1 = local_c70;
    puVar10 = (undefined1 *)0x0;
    iVar7 = unaff_EBP * 0x11 + unaff_ESI;
    iVar5 = 0;
    while( true ) {
      if (unaff_EBX < unaff_EBP) {
        iVar3 = (int)puVar1 - unaff_EBP;
      }
      else {
        iVar3 = -unaff_EBP;
      }
      if ((undefined1 *)(unaff_EBX + iVar3) <= puVar10) break;
      FUN_1001f3b0();
      local_c8c._0_1_ = 0x30;
      FUN_1001faa0(&local_c8c,8,1);
      local_c8c = (undefined1 **)CONCAT31(local_c8c._1_3_,*(undefined1 *)(iVar5 + 0x10 + *param_1));
      FUN_1001faa0(&local_c8c,8,1);
      local_c88 = puStack_8;
      FUN_1001faa0(&local_c88,0x10,1);
      local_c88 = puVar10;
      FUN_1001fbf0(&local_c88,0x20,1);
      local_c88 = *(undefined1 **)(iVar5 + 8 + *param_1);
      FUN_1001fbf0(&local_c88,0x20,1);
      if ((char)param_1 != '\0') {
        iVar3 = iVar7;
        if (puVar1 <= puVar10 + unaff_EBP) {
          iVar3 = (int)(puVar10 + (unaff_EBP - (int)puVar1)) * 0x11 + unaff_ESI;
        }
        local_c6c = *(uint *)(iVar3 + 8);
        FUN_1001fbf0(&local_c6c,0x20,1);
      }
      uVar16 = 0;
      puVar15 = auStack_c54;
      uVar13 = *(undefined4 *)(iVar5 + *param_1);
      uVar14 = 0x200;
      FUN_100536f0(uVar13,0x200,puVar15,0);
      FUN_10053c60(uVar13,uVar14,puVar15,uVar16);
      if ((char)param_1 == '\0') {
        FUN_1001faa0(*(undefined4 *)(iVar5 + *param_1 + 4),*(undefined4 *)(iVar5 + 8 + *param_1),1);
      }
      else {
        iVar3 = iVar7;
        if (puVar1 <= puVar10 + unaff_EBP) {
          iVar3 = (int)(puVar10 + (unaff_EBP - (int)puVar1)) * 0x11 + unaff_ESI;
        }
        iVar4 = iVar7;
        if (puVar1 <= puVar10 + unaff_EBP) {
          iVar4 = (int)(puVar10 + (unaff_EBP - (int)puVar1)) * 0x11 + unaff_ESI;
        }
        FUN_1001faa0(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar3 + 8),1);
        if (puVar10 + unaff_EBP < puVar1) {
          _free(*(void **)(iVar7 + 4));
        }
        else {
          _free(*(void **)((int)(puVar10 + (unaff_EBP - (int)puVar1)) * 0x11 + unaff_ESI + 4));
        }
      }
      (**(code **)(*piStack_14 + 0x30))
                (auStack_c54,local_4,9,unaff_retaddr,uStack_10,(uint)pvStack_c & 0xffff,0);
      iVar5 = iVar5 + 0x11;
      puVar10 = puVar10 + 1;
      iVar7 = iVar7 + 0x11;
    }
  }
  iStack_20._0_1_ = 2;
  FUN_1002c5e0();
  iStack_20._0_1_ = 1;
  FUN_10026a60();
  iStack_20 = (uint)iStack_20._1_3_ << 8;
  FUN_1001f390();
  iStack_20 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_28;
  return;
}


/* END FUNCTION 0x1002c910 */
