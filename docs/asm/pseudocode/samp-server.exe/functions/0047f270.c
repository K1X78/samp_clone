/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047f270
 * Name: FUN_0047f270
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_0047f270(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  void *pvVar16;
  undefined4 uStackY_170;
  undefined4 auStack_14c [69];
  int iStack_38;
  char *pcStack_34;
  void *pvStack_30;
  int iStack_2c;
  int iStack_28;
  uint *puStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  iVar8 = param_2;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_004b169b;
  pvStack_10 = ExceptionList;
  if (((*(ushort *)(param_2 + 4) < 1000) &&
      (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)*(ushort *)(param_2 + 4) * 4) != 0
      )) && (pvStack_30 = *(void **)((int)DAT_004fc438 + 0x14), pvStack_30 != (void *)0x0)) {
    piVar1 = (int *)(param_2 + 0xc);
    param_2 = CONCAT22(param_2._2_2_,*(undefined2 *)(param_2 + 8));
    ExceptionList = &pvStack_10;
    FUN_00403100(param_1,*piVar1,(int *)&puStack_24);
    uStackY_170 = 0x47f2f3;
    FUN_004031d0(puStack_24,&iStack_38);
    if (0 < iStack_38) {
      puVar10 = (undefined1 *)(iStack_38 + 4U & 0xfffffffc);
      iVar6 = -(int)puVar10;
      pcVar11 = (char *)((int)auStack_14c + iVar6 + -0xc);
      pcVar12 = (char *)((int)auStack_14c + iVar6 + -0xc);
      pcStack_34 = (char *)((int)auStack_14c + iVar6 + -0xc);
      if (&stack0xfffffea8 != puVar10) {
        *(int *)((int)auStack_14c + iVar6 + -0x10) = iStack_38 + 1;
        *(undefined4 *)((int)auStack_14c + iVar6 + -0x14) = 0;
        *(uint **)((int)auStack_14c + iVar6 + -0x18) = puStack_24;
        *(int *)((int)auStack_14c + iVar6 + -0x1c) = (int)auStack_14c + iVar6 + -0xc;
        *(undefined4 *)((int)auStack_14c + iVar6 + -0x20) = 0x47f329;
        FUN_00403350(*(int *)((int)auStack_14c + iVar6 + -0x1c),
                     *(uint **)((int)auStack_14c + iVar6 + -0x18),
                     *(int *)((int)auStack_14c + iVar6 + -0x14),
                     *(uint *)((int)auStack_14c + iVar6 + -0x10));
        do {
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        iStack_1c = (int)pcVar11 - ((int)auStack_14c + iVar6 + -0xb);
        if (iStack_1c != 0) {
          do {
            cVar2 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar2 != '\0');
          if ((uint)((int)pcVar12 - ((int)auStack_14c + iVar6 + -0xb)) < 0x801) {
            uVar3 = *(undefined1 *)(iVar8 + 0x14);
            uStack_15 = *(undefined1 *)(iVar8 + 0x10);
            uVar5 = *(undefined4 *)(iVar8 + 0x18);
            *(undefined4 **)((int)auStack_14c + iVar6 + -0x10) = &uStack_20;
            uStack_13 = uVar3;
            *(undefined4 *)((int)auStack_14c + iVar6 + -0x14) = uVar5;
            *(int **)((int)auStack_14c + iVar6 + -0x18) = param_1;
            *(undefined4 *)((int)auStack_14c + iVar6 + -0x1c) = 0x47f379;
            FUN_00403100(*(int **)((int)auStack_14c + iVar6 + -0x18),
                         *(int *)((int)auStack_14c + iVar6 + -0x14),
                         *(int **)((int)auStack_14c + iVar6 + -0x10));
            uVar5 = uStack_20;
            *(int **)((int)auStack_14c + iVar6 + -0x1c) = &iStack_2c;
            *(undefined4 *)((int)auStack_14c + iVar6 + -0x20) = uVar5;
            *(undefined4 *)((int)&uStackY_170 + iVar6) = 0x47f386;
            FUN_004031d0(*(uint **)((int)auStack_14c + iVar6 + -0x20),
                         *(int **)((int)auStack_14c + iVar6 + -0x1c));
            if (0 < iStack_2c) {
              puVar10 = (undefined1 *)(iStack_2c + 4U & 0xfffffffc);
              *(undefined4 *)((int)auStack_14c + iVar6 + -0x10) = 0x47f3a2;
              iVar7 = -(int)puVar10;
              pcVar11 = (char *)((int)auStack_14c + iVar7 + iVar6 + -0xc);
              pcVar12 = (char *)((int)auStack_14c + iVar7 + iVar6 + -0xc);
              pcVar14 = (char *)((int)auStack_14c + iVar7 + iVar6 + -0xc);
              if ((undefined1 *)((int)auStack_14c + iVar6 + -0xc) != puVar10) {
                *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x10) = iStack_2c + 1;
                *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x14) = 0;
                *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x18) = uStack_20;
                *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x1c) =
                     (int)auStack_14c + iVar7 + iVar6 + -0xc;
                *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x20) = 0x47f3b9;
                FUN_00403350(*(int *)((int)auStack_14c + iVar7 + iVar6 + -0x1c),
                             *(uint **)((int)auStack_14c + iVar7 + iVar6 + -0x18),
                             *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x14),
                             *(uint *)((int)auStack_14c + iVar7 + iVar6 + -0x10));
                iVar9 = param_2;
                do {
                  cVar2 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                } while (cVar2 != '\0');
                iStack_1c = (int)pcVar11 - ((int)auStack_14c + iVar7 + iVar6 + -0xb);
                if (iStack_1c != 0) {
                  do {
                    cVar2 = *pcVar12;
                    pcVar12 = pcVar12 + 1;
                  } while (cVar2 != '\0');
                  if ((uint)((int)pcVar12 - ((int)auStack_14c + iVar7 + iVar6 + -0xb)) < 0x21) {
                    iStack_28 = *(int *)(iVar8 + 0x24);
                    uVar4 = *(ushort *)(iVar8 + 4);
                    uStack_11 = *(undefined1 *)(iVar8 + 0x1c);
                    iVar13 = *(int *)(iVar8 + 0x28);
                    uStack_12 = *(undefined1 *)(iVar8 + 0x20);
                    uVar3 = *(undefined1 *)(iVar8 + 0x2c);
                    *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x10) = param_2;
                    pvVar16 = pvStack_30;
                    iStack_1c = iVar13;
                    *(uint *)((int)auStack_14c + iVar7 + iVar6 + -0x14) = (uint)uVar4;
                    uStack_14 = uVar3;
                    *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x18) = 0x47f41b;
                    iVar13 = FUN_0046fe30(pvVar16,*(ushort *)
                                                   ((int)auStack_14c + iVar7 + iVar6 + -0x14),
                                          *(ushort *)((int)auStack_14c + iVar7 + iVar6 + -0x10));
                    if (iVar13 != 0) {
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x10) = 0x47f42e;
                      FUN_0044d8a0(auStack_14c);
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x10) = 1;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x14) = 0x10;
                      *(int **)((int)auStack_14c + iVar7 + iVar6 + -0x18) = &param_2;
                      uStack_8 = 0;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x1c) = 0x47f44b;
                      param_2 = iVar9;
                      FUN_0044df40(auStack_14c,*(byte **)((int)auStack_14c + iVar7 + iVar6 + -0x18),
                                   *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x14),
                                   *(char *)((int)auStack_14c + iVar7 + iVar6 + -0x10));
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x10) = 1;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x14) = 8;
                      *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x18) = (int)&param_2 + 3;
                      param_2 = CONCAT13(2,(undefined3)param_2);
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x1c) = 0x47f462;
                      FUN_0044df40(auStack_14c,*(byte **)((int)auStack_14c + iVar7 + iVar6 + -0x18),
                                   *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x14),
                                   *(char *)((int)auStack_14c + iVar7 + iVar6 + -0x10));
                      uVar3 = uStack_15;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x10) = 1;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x14) = 8;
                      *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x18) = (int)&param_2 + 3;
                      param_2 = CONCAT13(uVar3,(undefined3)param_2);
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x1c) = 0x47f47b;
                      FUN_0044df40(auStack_14c,*(byte **)((int)auStack_14c + iVar7 + iVar6 + -0x18),
                                   *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x14),
                                   *(char *)((int)auStack_14c + iVar7 + iVar6 + -0x10));
                      uVar3 = uStack_13;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x10) = 1;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x14) = 8;
                      *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x18) = (int)&param_2 + 3;
                      param_2 = CONCAT13(uVar3,(undefined3)param_2);
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x1c) = 0x47f494;
                      FUN_0044df40(auStack_14c,*(byte **)((int)auStack_14c + iVar7 + iVar6 + -0x18),
                                   *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x14),
                                   *(char *)((int)auStack_14c + iVar7 + iVar6 + -0x10));
                      do {
                        cVar2 = *pcVar14;
                        pcVar14 = pcVar14 + 1;
                      } while (cVar2 != '\0');
                      uVar15 = (int)pcVar14 - ((int)auStack_14c + iVar7 + iVar6 + -0xb);
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x10) = 1;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x14) = 8;
                      *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x18) = (int)&param_2 + 3;
                      param_2 = CONCAT13((char)uVar15,(undefined3)param_2);
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x1c) = 0x47f4c1;
                      FUN_0044df40(auStack_14c,*(byte **)((int)auStack_14c + iVar7 + iVar6 + -0x18),
                                   *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x14),
                                   *(char *)((int)auStack_14c + iVar7 + iVar6 + -0x10));
                      *(uint *)((int)auStack_14c + iVar7 + iVar6 + -0x10) = uVar15 & 0xff;
                      *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x14) =
                           (int)auStack_14c + iVar7 + iVar6 + -0xc;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x18) = 0x47f4d1;
                      FUN_0044dff0(auStack_14c,*(byte **)((int)auStack_14c + iVar7 + iVar6 + -0x14),
                                   *(uint *)((int)auStack_14c + iVar7 + iVar6 + -0x10));
                      uVar3 = uStack_11;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x10) = 1;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x14) = 8;
                      *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x18) = (int)&param_2 + 3;
                      param_2 = CONCAT13(uVar3,(undefined3)param_2);
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x1c) = 0x47f4ea;
                      FUN_0044df40(auStack_14c,*(byte **)((int)auStack_14c + iVar7 + iVar6 + -0x18),
                                   *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x14),
                                   *(char *)((int)auStack_14c + iVar7 + iVar6 + -0x10));
                      uVar3 = uStack_12;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x10) = 1;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x14) = 8;
                      *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x18) = (int)&param_2 + 3;
                      param_2 = CONCAT13(uVar3,(undefined3)param_2);
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x1c) = 0x47f503;
                      FUN_0044df40(auStack_14c,*(byte **)((int)auStack_14c + iVar7 + iVar6 + -0x18),
                                   *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x14),
                                   *(char *)((int)auStack_14c + iVar7 + iVar6 + -0x10));
                      param_2 = iStack_28;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x10) = 1;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x14) = 0x20;
                      *(int **)((int)auStack_14c + iVar7 + iVar6 + -0x18) = &param_2;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x1c) = 0x47f51c;
                      FUN_0044df40(auStack_14c,*(byte **)((int)auStack_14c + iVar7 + iVar6 + -0x18),
                                   *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x14),
                                   *(char *)((int)auStack_14c + iVar7 + iVar6 + -0x10));
                      param_2 = iStack_1c;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x10) = 1;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x14) = 0x20;
                      *(int **)((int)auStack_14c + iVar7 + iVar6 + -0x18) = &param_2;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x1c) = 0x47f535;
                      FUN_0044df40(auStack_14c,*(byte **)((int)auStack_14c + iVar7 + iVar6 + -0x18),
                                   *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x14),
                                   *(char *)((int)auStack_14c + iVar7 + iVar6 + -0x10));
                      uVar3 = uStack_14;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x10) = 1;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x14) = 8;
                      *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x18) = (int)&param_2 + 3;
                      param_2 = CONCAT13(uVar3,(undefined3)param_2);
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x1c) = 0x47f54e;
                      FUN_0044df40(auStack_14c,*(byte **)((int)auStack_14c + iVar7 + iVar6 + -0x18),
                                   *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x14),
                                   *(char *)((int)auStack_14c + iVar7 + iVar6 + -0x10));
                      pcVar12 = pcStack_34;
                      pcVar11 = pcStack_34 + 1;
                      pcVar14 = pcStack_34;
                      do {
                        cVar2 = *pcVar14;
                        pcVar14 = pcVar14 + 1;
                      } while (cVar2 != '\0');
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x10) = 0;
                      *(undefined4 **)((int)auStack_14c + iVar7 + iVar6 + -0x14) = auStack_14c;
                      *(char **)((int)auStack_14c + iVar7 + iVar6 + -0x18) =
                           pcVar14 + (1 - (int)pcVar11);
                      *(char **)((int)auStack_14c + iVar7 + iVar6 + -0x1c) = pcVar12;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x20) = 0x47f570;
                      pvVar16 = (void *)FUN_00462dd0();
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x20) = 0x47f577;
                      FUN_00463220(pvVar16,*(char **)((int)auStack_14c + iVar7 + iVar6 + -0x1c),
                                   *(int *)((int)auStack_14c + iVar7 + iVar6 + -0x18),
                                   *(void **)((int)auStack_14c + iVar7 + iVar6 + -0x14));
                      uVar4 = *(ushort *)(iVar8 + 4);
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x10) = 2;
                      *(uint *)((int)auStack_14c + iVar7 + iVar6 + -0x14) = (uint)uVar4;
                      *(undefined4 **)((int)auStack_14c + iVar7 + iVar6 + -0x18) = auStack_14c;
                      *(undefined **)((int)auStack_14c + iVar7 + iVar6 + -0x1c) = &DAT_004be96c;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x20) = 0x47f597;
                      FUN_00493c10(DAT_004fc438,
                                   *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x1c),
                                   *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x18),
                                   *(ushort *)((int)auStack_14c + iVar7 + iVar6 + -0x14),
                                   *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x10));
                      uStack_8 = 0xffffffff;
                      *(undefined4 *)((int)auStack_14c + iVar7 + iVar6 + -0x10) = 0x47f5a9;
                      FUN_0044d9b0((int)auStack_14c);
                      ExceptionList = pvStack_10;
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


/* END FUNCTION 0x0047f270 */
