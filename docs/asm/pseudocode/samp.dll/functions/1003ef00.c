/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003ef00
 * Name: FUN_1003ef00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003ef00(undefined4 *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  uint unaff_EBX;
  undefined4 unaff_EBP;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  undefined8 uVar11;
  char *unaff_retaddr;
  undefined4 in_stack_fffffc70;
  undefined2 uVar12;
  undefined2 uVar13;
  char cStack_365;
  undefined4 *local_364;
  undefined4 *local_360;
  undefined1 local_359;
  undefined4 uStack_358;
  int iStack_354;
  undefined4 uStack_348;
  undefined4 uStack_240;
  undefined4 uStack_234;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10115161;
  pvStack_c = ExceptionList;
  iVar5 = *param_5;
  local_360 = (undefined4 *)CONCAT22(local_360._2_2_,param_2);
  local_364 = param_1;
  local_359 = 0;
  ExceptionList = &pvStack_c;
  uVar3 = (**(code **)(iVar5 + 0xb8))(param_1,param_2);
  cVar1 = (**(code **)(iVar5 + 0x70))(uVar3);
  uVar2 = (undefined2)((uint)in_stack_fffffc70 >> 0x10);
  uVar13 = (undefined2)unaff_EBX;
  if (cVar1 != '\0') {
    uVar8 = 0;
    if (*(int *)((int)param_5 + 0x3b1) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)param_5 + 0x3ad) + uVar8 * 4) + 0x20))
                  (unaff_retaddr,(int)param_1 << 3,unaff_EBP,unaff_EBX & 0xffff);
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)((int)param_5 + 0x3b1));
    }
    uVar8 = 0;
    if (*(int *)((int)param_5 + 0x3b1) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)param_5 + 0x3ad) + uVar8 * 4) + 0x1c))
                  (&stack0xfffffc8c,0x10,unaff_EBP,unaff_EBX & 0xffff);
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)((int)param_5 + 0x3b1));
    }
    goto LAB_1003f50f;
  }
  cVar1 = *unaff_retaddr;
  if ((cVar1 == '\x19') && (param_1 < (undefined4 *)0x3)) {
    uVar8 = 0;
    if (*(int *)((int)param_5 + 0x3b1) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)param_5 + 0x3ad) + uVar8 * 4) + 0x20))
                  (unaff_retaddr,(int)param_1 * 8,unaff_EBP,unaff_EBX & 0xffff);
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)((int)param_5 + 0x3b1));
    }
    puVar4 = (undefined4 *)FUN_10038d90();
    puVar6 = puVar4;
    local_364 = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      ExceptionList = pvStack_18;
      return;
    }
    do {
      cVar1 = FUN_100331a0(&stack0xfffffc90);
      if (cVar1 == '\0') {
LAB_1003f1e6:
        puVar6 = (undefined4 *)FUN_10038d90();
      }
      else {
        uVar12 = 0;
        uVar2 = 0x1003;
        iVar5 = FUN_1003c2a0(unaff_EBP,unaff_EBX & 0xffff,1,1);
        if ((iVar5 != 0) || (iVar5 = FUN_1003e510(unaff_EBP,CONCAT22(uVar12,uVar13),6), iVar5 != 0))
        {
          uVar11 = FUN_1002e310();
          uStack_358 = (undefined4)((ulonglong)uVar11 >> 0x20);
          *(undefined4 *)(iVar5 + 0xc62) = 4;
          *(undefined1 *)(iVar5 + 0x70f) = 1;
          FUN_1001f1f0();
          uStack_10 = 0;
          FUN_1001faa0(&stack0xfffffc8c,8,1);
          if (*(char *)((int)puVar6 + 0x111) != '\0') {
            FUN_1001fb50((int)puVar6 + 0x11,*(char *)((int)puVar6 + 0x111));
          }
          FUN_1003c410(uStack_234,uStack_240,0,8,0,unaff_EBP,CONCAT22(uVar2,uVar13),0,0,(int)uVar11,
                       uStack_358);
          uStack_10 = 0xffffffff;
          FUN_1001f390();
          puVar4 = local_364;
        }
        if (puVar6 != puVar4) {
          *puVar6 = DAT_1013c7cc;
          *(undefined2 *)(puVar6 + 1) = DAT_1013c7d0;
          goto LAB_1003f1e6;
        }
        FUN_10038dc0();
        puVar4 = (undefined4 *)FUN_10038d90();
        puVar6 = puVar4;
        local_364 = puVar4;
      }
      if (puVar6 == (undefined4 *)0x0) {
        if (puVar4 == (undefined4 *)0x0) {
          ExceptionList = pvStack_18;
          return;
        }
        FUN_10038db0(puVar4);
        ExceptionList = pvStack_18;
        return;
      }
    } while( true );
  }
  if ((((cVar1 == '\x1d') || (cVar1 == '\x1f')) || (cVar1 == '$')) && (param_1 < (undefined4 *)0x3))
  {
    puVar6 = (undefined4 *)FUN_10038d90();
    uVar2 = (undefined2)((uint)in_stack_fffffc70 >> 0x10);
    bVar10 = false;
    puVar4 = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      do {
        if ((*(int *)((int)puVar4 + 0x112) == 1) &&
           (cVar1 = FUN_100331a0(&stack0xfffffc90), cVar1 != '\0')) {
          bVar10 = true;
          if (puVar4 != puVar6) {
            *puVar4 = DAT_1013c7cc;
            *(undefined2 *)(puVar4 + 1) = DAT_1013c7d0;
            goto LAB_1003f29c;
          }
          FUN_10038dc0();
          puVar6 = (undefined4 *)FUN_10038d90();
          puVar4 = puVar6;
        }
        else {
LAB_1003f29c:
          puVar4 = (undefined4 *)FUN_10038d90();
        }
        uVar2 = (undefined2)((uint)in_stack_fffffc70 >> 0x10);
      } while (puVar4 != (undefined4 *)0x0);
      if (puVar6 != (undefined4 *)0x0) {
        FUN_10038db0(puVar6);
      }
      if (bVar10) {
        puVar7 = (undefined2 *)FUN_10037d90(1);
        **(char **)(puVar7 + 8) = *unaff_retaddr;
        *(undefined4 *)(puVar7 + 6) = 8;
        *(undefined4 *)(puVar7 + 1) = unaff_EBP;
        puVar7[3] = uVar13;
        *puVar7 = 0xffff;
        puVar4 = (undefined4 *)FUN_100390c0();
        *puVar4 = puVar7;
        FUN_10039100();
      }
    }
  }
  else if ((cVar1 == '\x18') && (param_1 == (undefined4 *)0x3)) {
    uVar12 = 0;
    uVar3 = CONCAT22(uVar2,uVar13);
    iVar5 = FUN_1003c2a0(unaff_EBP,uVar3,1,1);
    uVar2 = (undefined2)((uint)uVar3 >> 0x10);
    if (iVar5 == 0) {
      FUN_1003e510(unaff_EBP,CONCAT22(uVar12,uVar13),6);
    }
    else if (*(char *)(iVar5 + 0x70f) != '\x01') {
      iVar5 = *(int *)(iVar5 + 0xc62);
      if (((iVar5 == 8) || (iVar5 == 1)) || (iVar5 == 2)) {
        uVar2 = 0;
        FUN_10053570(*(undefined4 *)((int)param_5 + 0xc0a),&stack0xfffffc8c,2,unaff_EBP,unaff_EBX);
      }
      goto LAB_1003f30e;
    }
LAB_1003f50f:
    FUN_10053570(*(undefined4 *)((int)param_5 + 0xc0a),&stack0xfffffc8c,2,unaff_EBP,unaff_EBX);
    ExceptionList = pvStack_18;
    return;
  }
LAB_1003f30e:
  uVar12 = 0;
  uVar3 = unaff_EBP;
  iVar5 = FUN_1003c2a0(unaff_EBP,CONCAT22(uVar2,uVar13),1,1);
  uVar2 = (undefined2)((uint)uVar3 >> 0x10);
  if (iVar5 == 0) {
    uVar8 = 0;
    if (*(int *)((int)param_5 + 0x3b1) != 0) {
      do {
        uVar3 = unaff_EBP;
        (**(code **)(**(int **)(*(int *)((int)param_5 + 0x3ad) + uVar8 * 4) + 0x20))
                  (unaff_retaddr,(int)param_1 * 8,unaff_EBP,unaff_EBX & 0xffff);
        uVar12 = (undefined2)((uint)uVar3 >> 0x10);
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)((int)param_5 + 0x3b1));
    }
    if ((int)param_1 < 0x201) {
      cVar1 = *unaff_retaddr;
      if (((cVar1 == '\b') || (cVar1 == '\a')) && (param_1 == (undefined4 *)0x5)) {
        if ((cVar1 != '\a') && (cVar1 = FUN_10038990(), cVar1 == '\0')) {
          ExceptionList = pvStack_18;
          return;
        }
        FUN_1001f280(unaff_retaddr,5,0);
        uStack_10 = 1;
        FUN_1001f7b0(8);
        FUN_1001f470(&local_364,0x20,1);
        FUN_1001f1f0();
        uStack_10 = CONCAT31(uStack_10._1_3_,2);
        FUN_1001faa0(&stack0xfffffc8c,8,1);
        local_360 = local_364;
        FUN_1001faa0(&local_360,0x20,1);
        FUN_100532c0();
        iVar5 = param_5[0x4a];
        FUN_1001fb50(iVar5,param_5[0x47] + 7 >> 3);
        uVar2 = (undefined2)((uint)iVar5 >> 0x10);
        FUN_100532d0();
        uVar8 = 0;
        if (*(int *)((int)param_5 + 0x3b1) != 0) {
          do {
            uVar3 = unaff_EBP;
            (**(code **)(**(int **)(*(int *)((int)param_5 + 0x3ad) + uVar8 * 4) + 0x1c))
                      (uStack_348,iStack_354 + 7 >> 3,unaff_EBP,unaff_EBX & 0xffff);
            uVar2 = (undefined2)((uint)uVar3 >> 0x10);
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)((int)param_5 + 0x3b1));
        }
        uVar3 = (**(code **)(*param_5 + 0xb8))(unaff_EBP,CONCAT22(uVar2,uVar13),unaff_EBX);
        FUN_10053600(*(undefined4 *)((int)param_5 + 0xc0a),uStack_348,iStack_354 + 7 >> 3,uVar3,
                     unaff_EBX);
        uStack_10 = CONCAT31(uStack_10._1_3_,1);
        FUN_1001f390();
        uStack_10 = 0xffffffff;
        FUN_1001f390();
        ExceptionList = pvStack_18;
        return;
      }
      if (((cVar1 == '\'') && ((undefined4 *)0x4 < param_1)) && (param_1 < (undefined4 *)0x195)) {
        uVar2 = 0x1003;
        puVar7 = (undefined2 *)FUN_10037d90(param_1);
        pcVar9 = *(char **)(puVar7 + 8);
        for (uVar8 = (uint)param_1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)unaff_retaddr;
          unaff_retaddr = unaff_retaddr + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar8 = (uint)param_1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar9 = *unaff_retaddr;
          unaff_retaddr = unaff_retaddr + 1;
          pcVar9 = pcVar9 + 1;
        }
        *(int *)(puVar7 + 6) = (int)param_1 * 8;
        *(undefined4 *)(puVar7 + 1) = unaff_EBP;
        puVar7[3] = uVar13;
      }
      else {
        if (((cVar1 != '7') || ((int)param_1 < 2)) || (0x191 < (int)param_1)) {
          if (cVar1 != '\x1a') {
            ExceptionList = pvStack_18;
            return;
          }
          if (param_1 != (undefined4 *)0x3) {
            ExceptionList = pvStack_18;
            return;
          }
          DAT_10156e38._0_2_ = *(undefined2 *)(unaff_retaddr + 1);
          ExceptionList = pvStack_18;
          return;
        }
        uVar2 = 0x1003;
        puVar7 = (undefined2 *)FUN_10037d90(param_1);
        pcVar9 = *(char **)(puVar7 + 8);
        for (uVar8 = (uint)param_1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)unaff_retaddr;
          unaff_retaddr = unaff_retaddr + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar8 = (uint)param_1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar9 = *unaff_retaddr;
          unaff_retaddr = unaff_retaddr + 1;
          pcVar9 = pcVar9 + 1;
        }
        *(int *)(puVar7 + 6) = (int)param_1 * 8;
        *(undefined4 *)(puVar7 + 1) = unaff_EBP;
        puVar7[3] = uVar13;
      }
      uVar2 = FUN_1003c1f0(unaff_EBP,CONCAT22(uVar2,uVar13),1);
      *puVar7 = uVar2;
      FUN_1003ab50(puVar7);
      ExceptionList = pvStack_18;
      return;
    }
    uVar3 = 10000;
  }
  else {
    if ((*(int *)(iVar5 + 0xc62) == 7) && (7 < (int)param_1)) {
      uVar8 = (uint)param_1 & 0x80000007;
      bVar10 = uVar8 == 0;
      if ((int)uVar8 < 0) {
        bVar10 = (uVar8 - 1 | 0xfffffff8) == 0xffffffff;
      }
      if (bVar10) {
        FUN_10043760(iVar5 + 0x851);
      }
    }
    uVar3 = *(undefined4 *)((int)param_5 + 0xc01);
    cVar1 = FUN_10048d10(unaff_retaddr,param_1,unaff_EBP,CONCAT22(uVar2,uVar13),(int)param_5 + 0x3ad
                         ,uVar3,&cStack_365);
    uVar12 = (undefined2)((uint)uVar3 >> 0x10);
    if (cVar1 == '\0') {
      cVar1 = *unaff_retaddr;
      if ((cVar1 == '\x18') && ((int)param_1 < 4)) {
        ExceptionList = pvStack_18;
        return;
      }
      if ((cVar1 == '\x1a') && ((int)param_1 < 4)) {
        ExceptionList = pvStack_18;
        return;
      }
      if ((cVar1 == '\x19') && ((int)param_1 < 3)) {
        ExceptionList = pvStack_18;
        return;
      }
      if ((cVar1 == '\x1d') && ((int)param_1 < 3)) {
        ExceptionList = pvStack_18;
        return;
      }
      if ((((cVar1 == '\b') || (cVar1 == '\a')) || (cVar1 == '\'')) && ((undefined4 *)0x4 < param_1)
         ) {
        ExceptionList = pvStack_18;
        return;
      }
      if ((cVar1 == '7') && ((int)param_1 < 400)) {
        ExceptionList = pvStack_18;
        return;
      }
      uVar2 = 0x1003;
      puVar7 = (undefined2 *)FUN_10037d90(1);
      **(undefined1 **)(puVar7 + 8) = 0x26;
      *(undefined4 *)(puVar7 + 6) = 8;
      *(undefined4 *)(puVar7 + 1) = unaff_EBP;
      puVar7[3] = uVar13;
      uVar2 = FUN_1003c1f0(unaff_EBP,CONCAT22(uVar2,uVar13),1);
      *puVar7 = uVar2;
      FUN_1003ab50(puVar7);
      ExceptionList = pvStack_18;
      return;
    }
    if (cStack_365 == '\0') {
      ExceptionList = pvStack_18;
      return;
    }
    uVar3 = 60000;
  }
  iVar5 = *param_5;
  uVar3 = (**(code **)(iVar5 + 0xb8))(unaff_EBP,CONCAT22(uVar12,uVar13),uVar3);
  (**(code **)(iVar5 + 100))(uVar3);
  ExceptionList = pvStack_18;
  return;
}


/* END FUNCTION 0x1003ef00 */
