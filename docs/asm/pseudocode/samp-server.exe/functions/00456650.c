/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00456650
 * Name: FUN_00456650
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456650(uint param_1,ushort param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int *this;
  byte bVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  u_short unaff_BP;
  int unaff_ESI;
  uint uVar11;
  undefined2 unaff_DI;
  byte *pbVar12;
  bool bVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 uVar16;
  byte *unaff_retaddr;
  int in_stack_fffffc70;
  undefined2 uVar18;
  int iVar17;
  undefined4 local_368;
  undefined4 *local_364;
  undefined4 *puStack_360;
  undefined1 local_359;
  undefined4 uStack_358;
  int aiStack_354 [3];
  char *pcStack_348;
  int aiStack_240 [3];
  int iStack_234;
  undefined1 auStack_12c [276];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b0eb1;
  pvStack_c = ExceptionList;
  iVar17 = *param_5;
  local_364 = (undefined4 *)CONCAT22(local_364._2_2_,param_2);
  uVar11 = (uint)param_2;
  local_368 = param_1;
  local_359 = 0;
  ExceptionList = &pvStack_c;
  uVar4 = (**(code **)(iVar17 + 0xb8))(param_1,uVar11);
  cVar3 = (**(code **)(iVar17 + 0x70))(uVar4);
  uVar18 = (undefined2)((uint)in_stack_fffffc70 >> 0x10);
  if (cVar3 != '\0') {
    uVar11 = 0;
    if (param_5[0xef] != 0) {
      do {
        (**(code **)(**(int **)(param_5[0xee] + uVar11 * 4) + 0x20))
                  (unaff_retaddr,param_1 << 3,unaff_ESI,unaff_BP);
        uVar11 = uVar11 + 1;
      } while (uVar11 < (uint)param_5[0xef]);
    }
    uVar11 = 0;
    if (param_5[0xef] != 0) {
      do {
        (**(code **)(**(int **)(param_5[0xee] + uVar11 * 4) + 0x1c))
                  (&stack0xfffffc94,0x10,unaff_ESI,unaff_BP);
        uVar11 = uVar11 + 1;
      } while (uVar11 < (uint)param_5[0xef]);
    }
LAB_00456e90:
    iVar17 = 2;
LAB_00456e96:
    FUN_00462c60(param_5[0x306],&stack0xfffffc94,iVar17,unaff_ESI,unaff_BP);
    ExceptionList = pvStack_18;
    return;
  }
  bVar1 = *unaff_retaddr;
  if ((bVar1 == 0x19) && (param_1 < 3)) {
    uVar11 = 0;
    if (param_5[0xef] != 0) {
      do {
        in_stack_fffffc70 = param_1 * 8;
        (**(code **)(**(int **)(param_5[0xee] + uVar11 * 4) + 0x20))
                  (unaff_retaddr,param_1 * 8,unaff_ESI,unaff_BP);
        uVar11 = uVar11 + 1;
      } while (uVar11 < (uint)param_5[0xef]);
    }
    puVar5 = (undefined4 *)FUN_00450ae0(param_5 + 0xf1);
    puVar6 = puVar5;
    local_364 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      ExceptionList = pvStack_18;
      return;
    }
    do {
      uVar4 = FUN_0044eec0(puVar6,(int *)&stack0xfffffc8c);
      if ((char)uVar4 == '\0') {
LAB_00456947:
        puVar6 = (undefined4 *)FUN_00450ae0(param_5 + 0xf1);
      }
      else {
        iVar17 = FUN_00453950(param_5,unaff_ESI,
                              CONCAT22((short)((uint)in_stack_fffffc70 >> 0x10),unaff_BP),'\x01',
                              '\x01');
        if (iVar17 == 0) {
          in_stack_fffffc70 = unaff_ESI;
          uVar14 = FUN_00455c60(param_5,unaff_ESI,unaff_BP,6);
          iVar17 = (int)uVar14;
          if (iVar17 != 0) goto LAB_00456851;
        }
        else {
LAB_00456851:
          lVar15 = FUN_0044e970();
          uStack_358 = (undefined4)((ulonglong)lVar15 >> 0x20);
          *(undefined4 *)(iVar17 + 0xcb0) = 4;
          *(undefined1 *)(iVar17 + 0x748) = 1;
          FUN_0044d8a0(aiStack_240);
          uStack_10 = 0;
          FUN_0044df40(aiStack_240,&stack0xfffffc94,8,'\x01');
          if (*(byte *)((int)puVar6 + 0x116) != 0) {
            FUN_0044dff0(aiStack_240,(byte *)((int)puVar6 + 0x16),
                         (uint)*(byte *)((int)puVar6 + 0x116));
          }
          in_stack_fffffc70 = 0;
          FUN_00453ac0(param_5,iStack_234,aiStack_240[0],0,8,0,unaff_ESI,unaff_BP,'\0','\0',
                       (int)lVar15,uStack_358);
          uStack_10 = 0xffffffff;
          FUN_0044d9b0((int)aiStack_240);
          puVar5 = local_364;
        }
        if (puVar6 != puVar5) {
          *puVar6 = DAT_004cac3c;
          *(undefined2 *)(puVar6 + 1) = DAT_004cac40;
          goto LAB_00456947;
        }
        FUN_00450b00((int)(param_5 + 0xf1));
        puVar5 = (undefined4 *)FUN_00450ae0(param_5 + 0xf1);
        puVar6 = puVar5;
        local_364 = puVar5;
      }
      if (puVar6 == (undefined4 *)0x0) {
        if (puVar5 == (undefined4 *)0x0) {
          ExceptionList = pvStack_18;
          return;
        }
        FUN_0044dd10(param_5 + 0xf1,puVar5);
        ExceptionList = pvStack_18;
        return;
      }
    } while( true );
  }
  if ((((bVar1 == 0x1d) || (bVar1 == 0x1f)) || (bVar1 == 0x24)) && (param_1 < 3)) {
    this = param_5 + 0xf1;
    puVar6 = (undefined4 *)FUN_00450ae0(this);
    uVar18 = (undefined2)((uint)in_stack_fffffc70 >> 0x10);
    bVar13 = false;
    puVar5 = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      do {
        if ((puVar5[0x46] == 1) &&
           (uVar4 = FUN_0044eec0(puVar5,(int *)&stack0xfffffc8c), (char)uVar4 != '\0')) {
          bVar13 = true;
          if (puVar5 != puVar6) {
            *puVar5 = DAT_004cac3c;
            *(undefined2 *)(puVar5 + 1) = DAT_004cac40;
            goto LAB_004569f9;
          }
          FUN_00450b00((int)this);
          puVar6 = (undefined4 *)FUN_00450ae0(this);
          puVar5 = puVar6;
        }
        else {
LAB_004569f9:
          puVar5 = (undefined4 *)FUN_00450ae0(this);
        }
        uVar18 = (undefined2)((uint)in_stack_fffffc70 >> 0x10);
      } while (puVar5 != (undefined4 *)0x0);
      if (puVar6 != (undefined4 *)0x0) {
        FUN_0044dd10(this,puVar6);
      }
      if (bVar13) {
        puVar7 = (undefined2 *)FUN_0044fd50(1);
        **(byte **)(puVar7 + 8) = *unaff_retaddr;
        *(undefined4 *)(puVar7 + 6) = 8;
        *(int *)(puVar7 + 1) = unaff_ESI;
        puVar7[3] = unaff_BP;
        *puVar7 = 0xffff;
        puVar5 = (undefined4 *)FUN_00450e00((int)(param_5 + 0x374));
        *puVar5 = puVar7;
        FUN_00450e40((int)(param_5 + 0x374));
      }
    }
  }
  else if ((bVar1 == 0x18) && (param_1 == 3)) {
    uVar2 = *(ushort *)(unaff_retaddr + 1);
    iVar17 = FUN_00491e30();
    if ((iVar17 != 0) &&
       ((ushort)((ushort)DAT_004cac38 ^ uVar2) != (ushort)((ushort)DAT_004fc474 ^ 3))) {
      iVar17 = FUN_00491e40();
      if (iVar17 != 0) {
        FUN_0044ef80(&stack0xfffffc8c,'\x01');
        FUN_00491fa0("[connection] %s requests connection cookie.");
      }
      iVar17 = 3;
      goto LAB_00456e96;
    }
    uVar8 = FUN_00491e20();
    uVar16 = FUN_0044e910();
    iVar17 = (int)uVar16;
    if (((DAT_004ed71c != 0) && (0 < (int)uVar8)) && ((uint)(iVar17 - DAT_004ed71c) < uVar8)) {
      if ((DAT_004ed728 != 0) && ((uint)(iVar17 - DAT_004ed728) <= uVar8)) {
        _DAT_004ed718 = unaff_ESI;
        ExceptionList = pvStack_18;
        return;
      }
      FUN_0044ef80(&stack0xfffffc8c,'\x01');
      FUN_00491fa0(
                  "Warning: Minimum time between new connections (%u) exceeded for %s. Ignoring the request."
                  );
      _DAT_004ed718 = unaff_ESI;
      DAT_004ed728 = iVar17;
      ExceptionList = pvStack_18;
      return;
    }
    _DAT_004ed718 = 0;
    uVar4 = CONCAT22(uVar18,unaff_BP);
    DAT_004ed71c = iVar17;
    iVar17 = FUN_00453950(param_5,unaff_ESI,uVar4,'\x01','\x01');
    uVar18 = (undefined2)((uint)uVar4 >> 0x10);
    if ((iVar17 == 0) || (*(char *)(iVar17 + 0x748) == '\x01')) {
      uVar8 = FUN_004507c0(param_5,unaff_ESI);
      if (0x1e < (ushort)uVar8) {
        (**(code **)(*param_5 + 0xb8))(unaff_ESI,unaff_BP);
        pcVar10 = "Blocking %s due to a \'server full\' attack (1)";
LAB_00456dac:
        FUN_00491fa0(pcVar10);
        iVar17 = *param_5;
        uVar4 = (**(code **)(iVar17 + 0xb8))(uVar11,unaff_DI,120000);
        (**(code **)(iVar17 + 100))(uVar4);
        ExceptionList = pvStack_18;
        return;
      }
      if ((unaff_ESI == DAT_004ed724) &&
         (uVar16 = FUN_0044e910(), (uint)((int)uVar16 - _DAT_004ed720) < 30000)) {
        uVar8 = (**(code **)(*param_5 + 0x40))();
        uVar9 = FUN_00450780((int)param_5);
        if ((uVar9 & 0xffff) == (uVar8 & 0xffff) - 1) {
          (**(code **)(*param_5 + 0xb8))(unaff_ESI,unaff_BP);
          pcVar10 = "Blocking %s due to a \'server full\' attack (2)";
          goto LAB_00456dac;
        }
      }
      if ((iVar17 == 0) && (uVar14 = FUN_00455c60(param_5,unaff_ESI,unaff_BP,6), (int)uVar14 != 0))
      {
        DAT_004ed724 = unaff_ESI;
        uVar16 = FUN_0044e910();
        _DAT_004ed720 = (int)uVar16;
        uVar18 = 0x45;
        puVar7 = (undefined2 *)FUN_0044fd50(1);
        **(undefined1 **)(puVar7 + 8) = 0x18;
        *(undefined4 *)(puVar7 + 6) = 8;
        *(int *)(puVar7 + 1) = unaff_ESI;
        puVar7[3] = unaff_BP;
        uVar11 = FUN_004538a0(param_5,unaff_ESI,CONCAT22(uVar18,unaff_BP),'\x01');
        *puVar7 = (short)uVar11;
        FUN_00452280(param_5,puVar7);
      }
      goto LAB_00456e90;
    }
    iVar17 = *(int *)(iVar17 + 0xcb0);
    if ((iVar17 == 8) || ((iVar17 == 1 || (iVar17 == 2)))) {
      uVar18 = 0;
      FUN_00462c60(param_5[0x306],&stack0xfffffc94,2,unaff_ESI,unaff_BP);
    }
  }
  iVar17 = FUN_00453950(param_5,unaff_ESI,CONCAT22(uVar18,unaff_BP),'\x01','\x01');
  if (iVar17 == 0) {
    uVar11 = 0;
    if (param_5[0xef] != 0) {
      do {
        (**(code **)(**(int **)(param_5[0xee] + uVar11 * 4) + 0x20))
                  (unaff_retaddr,param_1 << 3,unaff_ESI,unaff_BP);
        uVar11 = uVar11 + 1;
      } while (uVar11 < (uint)param_5[0xef]);
    }
    if (0x200 < (int)param_1) {
      uVar4 = 10000;
      goto LAB_00456f2a;
    }
    bVar1 = *unaff_retaddr;
    if (((bVar1 == 8) || (bVar1 == 7)) && (param_1 == 5)) {
      if ((bVar1 != 7) && (bVar13 = FUN_00450940(param_5), !bVar13)) {
        ExceptionList = pvStack_18;
        return;
      }
      FUN_0044d930(auStack_12c,(undefined4 *)unaff_retaddr,5,'\0');
      uStack_10 = 1;
      FUN_0044dd00(auStack_12c,8);
      FUN_0044da70(auStack_12c,(byte *)&local_364,0x20,'\x01');
      FUN_0044d8a0(aiStack_354);
      uStack_10 = CONCAT31(uStack_10._1_3_,2);
      FUN_0044df40(aiStack_354,&stack0xfffffc94,8,'\x01');
      puStack_360 = local_364;
      FUN_0044df40(aiStack_354,(byte *)&puStack_360,0x20,'\x01');
      FUN_004629a0((LPCRITICAL_SECTION)(param_5 + 0xd3));
      pbVar12 = (byte *)param_5[0x4b];
      FUN_0044dff0(aiStack_354,pbVar12,param_5[0x48] + 7 >> 3);
      uVar18 = (undefined2)((uint)pbVar12 >> 0x10);
      FUN_004629b0((LPCRITICAL_SECTION)(param_5 + 0xd3));
      uVar11 = 0;
      if (param_5[0xef] != 0) {
        do {
          iVar17 = unaff_ESI;
          (**(code **)(**(int **)(param_5[0xee] + uVar11 * 4) + 0x1c))
                    (pcStack_348,aiStack_354[0] + 7 >> 3,unaff_ESI,unaff_BP);
          uVar18 = (undefined2)((uint)iVar17 >> 0x10);
          uVar11 = uVar11 + 1;
        } while (uVar11 < (uint)param_5[0xef]);
      }
      pcVar10 = (char *)(**(code **)(*param_5 + 0xb8))(unaff_ESI,CONCAT22(uVar18,unaff_BP));
      FUN_00462ce0(param_5[0x306],pcStack_348,aiStack_354[0] + 7 >> 3,pcVar10,unaff_BP);
      uStack_10 = CONCAT31(uStack_10._1_3_,1);
      FUN_0044d9b0((int)aiStack_354);
      uStack_10 = 0xffffffff;
      FUN_0044d9b0((int)auStack_12c);
      ExceptionList = pvStack_18;
      return;
    }
    if (((bVar1 == 0x27) && (4 < param_1)) && (param_1 < 0x195)) {
      uVar18 = 0x45;
      puVar7 = (undefined2 *)FUN_0044fd50(param_1);
      pbVar12 = *(byte **)(puVar7 + 8);
      for (uVar11 = param_1 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pbVar12 = *(undefined4 *)unaff_retaddr;
        unaff_retaddr = unaff_retaddr + 4;
        pbVar12 = pbVar12 + 4;
      }
      for (uVar11 = param_1 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar12 = *unaff_retaddr;
        unaff_retaddr = unaff_retaddr + 1;
        pbVar12 = pbVar12 + 1;
      }
      *(uint *)(puVar7 + 6) = param_1 * 8;
      *(int *)(puVar7 + 1) = unaff_ESI;
      puVar7[3] = unaff_BP;
    }
    else {
      if (bVar1 != 0x37) {
        ExceptionList = pvStack_18;
        return;
      }
      if ((int)param_1 < 2) {
        ExceptionList = pvStack_18;
        return;
      }
      if (0x191 < (int)param_1) {
        ExceptionList = pvStack_18;
        return;
      }
      uVar18 = 0x45;
      puVar7 = (undefined2 *)FUN_0044fd50(param_1);
      pbVar12 = *(byte **)(puVar7 + 8);
      for (uVar11 = param_1 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pbVar12 = *(undefined4 *)unaff_retaddr;
        unaff_retaddr = unaff_retaddr + 4;
        pbVar12 = pbVar12 + 4;
      }
      for (uVar11 = param_1 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar12 = *unaff_retaddr;
        unaff_retaddr = unaff_retaddr + 1;
        pbVar12 = pbVar12 + 1;
      }
      *(uint *)(puVar7 + 6) = param_1 * 8;
      *(int *)(puVar7 + 1) = unaff_ESI;
      puVar7[3] = unaff_BP;
    }
    uVar11 = FUN_004538a0(param_5,unaff_ESI,CONCAT22(uVar18,unaff_BP),'\x01');
    *puVar7 = (short)uVar11;
  }
  else {
    if ((*(int *)(iVar17 + 0xcb0) == 7) && (7 < (int)param_1)) {
      uVar11 = param_1 & 0x80000007;
      bVar13 = uVar11 == 0;
      if ((int)uVar11 < 0) {
        bVar13 = (uVar11 - 1 | 0xfffffff8) == 0xffffffff;
      }
      if (bVar13) {
        FUN_0045b030((void *)(iVar17 + 0x10),iVar17 + 0x89c);
      }
    }
    cVar3 = FUN_0045f7f0((void *)(iVar17 + 0x10),unaff_retaddr,param_1,unaff_ESI,unaff_BP,
                         param_5 + 0xee,param_5[0x303],(undefined1 *)((int)&local_368 + 3));
    if (cVar3 != '\0') {
      if (local_368._3_1_ == '\0') {
        ExceptionList = pvStack_18;
        return;
      }
      uVar4 = 60000;
LAB_00456f2a:
      iVar17 = *param_5;
      uVar4 = (**(code **)(iVar17 + 0xb8))(unaff_ESI,unaff_BP,uVar4);
      (**(code **)(iVar17 + 100))(uVar4);
      ExceptionList = pvStack_18;
      return;
    }
    bVar1 = *unaff_retaddr;
    if ((bVar1 == 0x18) && ((int)param_1 < 4)) {
      ExceptionList = pvStack_18;
      return;
    }
    if ((bVar1 == 0x1a) && ((int)param_1 < 4)) {
      ExceptionList = pvStack_18;
      return;
    }
    if ((bVar1 == 0x19) && ((int)param_1 < 3)) {
      ExceptionList = pvStack_18;
      return;
    }
    if ((bVar1 == 0x1d) && ((int)param_1 < 3)) {
      ExceptionList = pvStack_18;
      return;
    }
    if ((((bVar1 == 8) || (bVar1 == 7)) || (bVar1 == 0x27)) && (4 < param_1)) {
      ExceptionList = pvStack_18;
      return;
    }
    if ((bVar1 == 0x37) && ((int)param_1 < 400)) {
      ExceptionList = pvStack_18;
      return;
    }
    uVar18 = 0x45;
    puVar7 = (undefined2 *)FUN_0044fd50(1);
    **(undefined1 **)(puVar7 + 8) = 0x26;
    *(undefined4 *)(puVar7 + 6) = 8;
    *(int *)(puVar7 + 1) = unaff_ESI;
    puVar7[3] = unaff_BP;
    uVar11 = FUN_004538a0(param_5,unaff_ESI,CONCAT22(uVar18,unaff_BP),'\x01');
    *puVar7 = (short)uVar11;
  }
  FUN_00452280(param_5,puVar7);
  ExceptionList = pvStack_18;
  return;
}


/* END FUNCTION 0x00456650 */
