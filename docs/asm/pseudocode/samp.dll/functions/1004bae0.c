/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004bae0
 * Name: FUN_1004bae0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1004bae0(int *param_1)

{
  void *_Memory;
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  bool bVar10;
  undefined4 *puVar11;
  undefined2 uVar13;
  undefined4 *puVar12;
  int **ppiVar14;
  undefined1 *puVar15;
  undefined2 uVar17;
  undefined4 uVar16;
  undefined *puVar18;
  undefined4 uVar19;
  byte local_2d4 [4];
  undefined4 uStack_2d0;
  int local_2cc;
  undefined4 *local_2c8;
  uint local_2c4;
  undefined4 uStack_2c0;
  undefined4 *local_2bc;
  undefined4 *local_2b8;
  int *local_2b4;
  uint uStack_2b0;
  uint local_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  int *piStack_2a0;
  undefined1 uStack_29c;
  undefined4 uStack_29b;
  int *local_294;
  undefined1 local_290;
  undefined4 local_28f;
  undefined3 uStack_28b;
  undefined2 uStack_284;
  undefined2 uStack_282;
  undefined2 uStack_280;
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [4];
  undefined1 auStack_25c [12];
  undefined1 auStack_250 [4];
  undefined1 auStack_24c [4];
  undefined1 local_248 [276];
  undefined4 uStack_134;
  undefined4 local_130 [71];
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10115756;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar2 = FUN_1004ade0();
  if (iVar2 != 0) {
    FUN_1001f1f0();
    local_c = 0;
    FUN_1001f1f0();
    local_c = CONCAT31(local_c._1_3_,1);
    local_2b8 = (undefined4 *)0x0;
    local_2ac = 0;
    iVar2 = FUN_1004ade0();
    if (iVar2 != 0) {
      do {
        piVar3 = (int *)FUN_1004adc0(local_2ac);
        puVar8 = (undefined4 *)*piVar3;
        uVar9 = 0;
        local_2c4 = 0;
        iVar2 = FUN_1004aa00();
        if (iVar2 != 0) {
          do {
            if (local_2b8 == (undefined4 *)0x0) {
              local_2b8 = (undefined4 *)FUN_1002e2b0();
            }
            puVar4 = (undefined4 *)FUN_1004a9f0(uVar9);
            piVar3 = (int *)*puVar4;
            local_2b4 = piVar3;
            iVar2 = FUN_1004a9f0(uVar9);
            local_2d4[0] = *(byte *)(iVar2 + 4);
            ppiVar14 = &local_2b4;
            uVar13 = 0x1004;
            local_2bc = (undefined4 *)FUN_1004ab60(ppiVar14,(int)&uStack_2c0 + 3);
            uVar17 = (undefined2)((uint)ppiVar14 >> 0x10);
            if ((local_2d4[0] & 1) == 0) {
              if ((local_2d4[0] & 2) != 0) {
                iVar2 = FUN_1004a9f0(uVar9);
                *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) & 0xfd;
                local_290 = *(undefined1 *)(local_2cc + 0x2a);
                ppiVar14 = &local_294;
                local_28f = 0;
                local_294 = piVar3;
LAB_1004bdc8:
                FUN_1004aac0(ppiVar14,ppiVar14);
                uVar17 = (undefined2)((uint)ppiVar14 >> 0x10);
              }
LAB_1004bdd0:
              if (*(char *)((int)puVar8 + 6) != '\0') {
                local_2c8 = (undefined4 *)0x0;
                iVar2 = FUN_1004aa00();
                if (iVar2 != 0) {
                  do {
                    uVar17 = 0x1004;
                    iVar2 = FUN_1004a9f0(local_2c8);
                    if ((*(byte *)(iVar2 + 4) & 1) != 0) goto LAB_1004bef0;
                    local_2c8 = (undefined4 *)((int)local_2c8 + 1);
                    puVar4 = (undefined4 *)FUN_1004aa00();
                  } while (local_2c8 < puVar4);
                }
                FUN_1001f3b0();
                if (*(int *)(local_2cc + 0x20) != 0) {
                  iVar2 = (**(code **)(local_2cc + 0x20))
                                    (local_130,local_2b8,*puVar8,
                                     CONCAT22(uVar17,*(undefined2 *)(puVar8 + 1)),local_2cc);
                  if (iVar2 == 1) {
                    FUN_1001f3b0();
                    local_2d4[0] = 0x43;
                    FUN_1001faa0(local_2d4,8,1);
                    FUN_1001f880(local_130,local_130[0]);
                    (**(code **)(*param_1 + 0x30))
                              (local_248,1,9,*(undefined1 *)(local_2cc + 0x28),*puVar8,
                               *(undefined2 *)(puVar8 + 1),0);
                    uVar9 = local_2c4;
                  }
                  else if (iVar2 != 2) goto LAB_1004bef0;
                }
                *(undefined1 *)((int)puVar8 + 6) = 0;
              }
LAB_1004bef0:
              local_2c8 = (undefined4 *)FUN_1004aa20(&local_2b4,(int)&uStack_2c0 + 3);
              if (uStack_2c0._3_1_ != '\0') {
                iVar2 = FUN_1004a9f0(uVar9);
                local_2d4[0] = *(byte *)(iVar2 + 4);
                if ((local_2d4[0] & 0xc) != 0) {
                  puVar18 = &DAT_1013c808;
                  (**(code **)(*piVar3 + 4))(auStack_270,&DAT_1013c808);
                  cVar1 = FUN_10033320(puVar18);
                  if (cVar1 != '\0') goto LAB_1004c335;
                  iVar2 = FUN_1004ac80(local_2bc);
                  if ((*(byte *)(iVar2 + 8) & 0x20) == 0) {
                    iVar2 = FUN_1004a9f0(uVar9);
                    *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) & 0xf3;
                    local_2d4[0] = local_2d4[0] >> 2 & 1;
                    iVar2 = FUN_1004ab40(local_2c8);
                    *(byte *)(iVar2 + 4) = local_2d4[0];
                  }
                  else {
                    uStack_2b0 = CONCAT31(uStack_2b0._1_3_,local_2d4[0] >> 2) & 0xffffff01;
                    iVar2 = FUN_1004ab40(local_2c8);
                    if (*(char *)(iVar2 + 4) != (char)uStack_2b0) {
                      uVar13 = 0x1004;
                      FUN_1001f3b0();
                      iVar2 = (**(code **)(*piVar3 + 0x28))
                                        (uStack_2b0,local_130,local_2b8,*puVar8,
                                         CONCAT22(uVar13,*(undefined2 *)(puVar8 + 1)));
                      if (iVar2 == 1) {
                        FUN_1001f3b0();
                        local_2d4[0] = 0x41;
                        FUN_1001faa0(local_2d4,8,1);
                        puVar4 = (undefined4 *)(**(code **)(*piVar3 + 4))(auStack_260);
                        FUN_1004a820(*puVar4,puVar4[1]);
                        FUN_1001f880(&uStack_134,uStack_134);
                        (**(code **)(*param_1 + 0x30))
                                  (auStack_24c,1,9,*(undefined1 *)(uStack_2d0 + 0x28),*puVar8,
                                   *(undefined2 *)(puVar8 + 1),0);
                        iVar2 = FUN_1004ab40(local_2c8);
                        uVar9 = local_2c4;
                        *(char *)(iVar2 + 4) = (char)uStack_2b0;
                        iVar2 = FUN_1004a9f0(local_2c4);
                        *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) | 0x10;
                      }
                      else {
                        uVar9 = local_2c4;
                        if (iVar2 != 2) {
                          if ((char)uStack_2b0 == '\0') goto LAB_1004c335;
                          goto LAB_1004c0f7;
                        }
                      }
                      iVar2 = FUN_1004a9f0(uVar9);
                      *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) & 0xf3;
                    }
                  }
                }
LAB_1004c0f7:
                iVar2 = FUN_1004a9f0(uVar9);
                if ((*(byte *)(iVar2 + 4) & 0x10) != 0) {
                  puVar18 = &DAT_1013c808;
                  (**(code **)(*piVar3 + 4))(auStack_278,&DAT_1013c808);
                  cVar1 = FUN_10033320(puVar18);
                  if (cVar1 == '\0') {
                    iVar2 = FUN_1004ab40(local_2c8);
                    if ((*(char *)(iVar2 + 4) == '\0') ||
                       (iVar2 = FUN_1004ac80(local_2bc), (*(byte *)(iVar2 + 8) & 0x40) == 0)) {
LAB_1004c394:
                      iVar2 = FUN_1004a9f0(uVar9);
                      *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) & 0xef;
                    }
                    else {
                      do {
                        uVar13 = 0x1004;
                        FUN_1001f3b0();
                        uStack_2a8 = 1;
                        uStack_2a4 = 9;
                        uStack_2d0 = uStack_2d0 & 0xffffff;
                        iVar2 = *piVar3;
                        uVar16 = *puVar8;
                        uVar19 = CONCAT22(uVar13,*(undefined2 *)(puVar8 + 1));
                        puVar4 = &uStack_2a4;
                        puVar11 = &uStack_2a8;
                        puVar12 = local_2b8;
                        iVar5 = FUN_1004ab40(local_2c8);
                        local_2b4 = (int *)(**(code **)(iVar2 + 0x30))
                                                     ((int)&uStack_2d0 + 3,local_130,
                                                      *(undefined4 *)(iVar5 + 5),puVar11,puVar4,
                                                      puVar12,uVar16,uVar19);
                        if ((local_2b4 == (int *)0x1) || (local_2b4 == (int *)0x3)) {
                          iVar2 = FUN_1004ab40(local_2c8);
                          puVar4 = local_2b8;
                          *(undefined4 **)(iVar2 + 5) = local_2b8;
                          FUN_1001f3b0();
                          if (uStack_2d0._3_1_ != '\0') {
                            local_2d4[0] = 0x28;
                            FUN_1001faa0(local_2d4,8,1);
                            local_2bc = puVar4;
                            FUN_1001faa0(&local_2bc,0x20,1);
                          }
                          local_2d4[0] = 0x42;
                          FUN_1001faa0(local_2d4,8,1);
                          puVar4 = (undefined4 *)(**(code **)(*piVar3 + 4))(auStack_250);
                          uVar16 = *puVar4;
                          uStack_284 = (undefined2)puVar4[1];
                          uStack_282 = (undefined2)((uint)puVar4[1] >> 0x10);
                          cVar1 = FUN_10033480();
                          if (cVar1 != '\0') {
                            uStack_2c0 = uVar16;
                            FUN_1001faa0(&uStack_2c0,0x20,1);
                            uStack_2c0 = CONCAT22(uStack_282,uStack_284);
                            FUN_1001faa0(&uStack_2c0,0x10,1);
                          }
                          local_28f._3_1_ = (undefined1)uStack_282;
                          uStack_28b = (undefined3)(CONCAT22(uStack_280,uStack_282) >> 8);
                          FUN_1001faa0((int)&local_28f + 3,0x10,1);
                          FUN_1001f880(&uStack_134,uStack_134);
                          (**(code **)(*param_1 + 0x30))
                                    (auStack_24c,local_2ac,uStack_2a8,
                                     *(undefined1 *)(uStack_2d0 + 0x28),*puVar8,
                                     *(undefined2 *)(puVar8 + 1),0);
                          bVar10 = local_2b4 == (int *)0x1;
                        }
                        else {
                          bVar10 = local_2b4 == (int *)0x2;
                        }
                        uVar9 = local_2c4;
                        if (bVar10) goto LAB_1004c394;
                      } while (local_2b4 == (int *)0x3);
                    }
                  }
                }
              }
            }
            else {
              iVar2 = FUN_1004ac80(local_2bc);
              if ((*(byte *)(iVar2 + 8) & 8) == 0) {
LAB_1004bd81:
                uVar17 = 0x1004;
                iVar2 = FUN_1004a9f0(uVar9);
                *(undefined1 *)(iVar2 + 4) = 0;
                goto LAB_1004bdd0;
              }
              FUN_1001f3b0();
              puVar4 = local_2b8;
              uStack_2d0 = uStack_2d0 & 0xffffff;
              iVar2 = (**(code **)(*piVar3 + 0x1c))
                                (local_2b8,*puVar8,CONCAT22(uVar13,*(undefined2 *)(puVar8 + 1)),
                                 local_130,(int)&uStack_2d0 + 3);
              if (iVar2 == 1) {
                FUN_1001f3b0();
                if (uStack_2d0._3_1_ != '\0') {
                  local_2d4[0] = 0x28;
                  FUN_1001faa0(local_2d4,8,1);
                  local_2c8 = puVar4;
                  FUN_1001faa0(&local_2c8,0x20,1);
                }
                local_2d4[0] = 0x3f;
                FUN_1001faa0(local_2d4,8,1);
                puVar15 = auStack_268;
                (**(code **)(*piVar3 + 4))(puVar15,&DAT_1013c808);
                cVar1 = FUN_10033370(puVar15);
                if (cVar1 == '\0') {
                  FUN_1001f9d0();
                }
                else {
                  FUN_1001f9f0();
                  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 4))(auStack_25c);
                  FUN_1004a820(*puVar4,puVar4[1]);
                }
                FUN_1001f880(&uStack_134,uStack_134);
                (**(code **)(*param_1 + 0x30))
                          (auStack_24c,1,9,*(undefined1 *)(uStack_2d0 + 0x28),*puVar8,
                           *(undefined2 *)(puVar8 + 1),0);
                uVar9 = local_2c4;
                iVar2 = FUN_1004a9f0(local_2c4);
                *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) & 0xfe;
                uStack_29c = *(undefined1 *)(local_2cc + 0x2a);
                ppiVar14 = &piStack_2a0;
                uStack_29b = 0;
                piStack_2a0 = piVar3;
                goto LAB_1004bdc8;
              }
              uVar9 = local_2c4;
              if (iVar2 != 0) goto LAB_1004bd81;
            }
LAB_1004c335:
            uVar9 = uVar9 + 1;
            local_2c4 = uVar9;
            uVar6 = FUN_1004aa00();
          } while (uVar9 < uVar6);
        }
        iVar2 = FUN_1004aa00();
        iVar5 = iVar2;
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          iVar5 = iVar5 + -1;
          iVar7 = FUN_1004a9f0(iVar5);
          if (*(char *)(iVar7 + 4) == '\0') {
            thunk_FUN_1004ae00(iVar5);
          }
        }
        while( true ) {
          uVar9 = *(uint *)((int)puVar8 + 0x23);
          if (*(uint *)((int)puVar8 + 0x27) < uVar9) {
            iVar2 = *(int *)((int)puVar8 + 0x2b) - uVar9;
          }
          else {
            iVar2 = -uVar9;
          }
          if (*(uint *)((int)puVar8 + 0x27) + iVar2 == 0) goto LAB_1004c456;
          iVar2 = *(int *)((int)puVar8 + 0x23) + 1;
          *(int *)((int)puVar8 + 0x23) = iVar2;
          if (iVar2 == *(int *)((int)puVar8 + 0x2b)) {
            *(undefined4 *)((int)puVar8 + 0x23) = 0;
          }
          if (*(int *)((int)puVar8 + 0x23) == 0) {
            puVar4 = *(undefined4 **)
                      (*(int *)((int)puVar8 + 0x1f) + -4 + *(int *)((int)puVar8 + 0x2b) * 4);
          }
          else {
            puVar4 = *(undefined4 **)
                      (*(int *)((int)puVar8 + 0x1f) + -4 + *(int *)((int)puVar8 + 0x23) * 4);
          }
          local_2bc = puVar4;
          puVar8 = (undefined4 *)FUN_1004af40(*puVar4,*(undefined2 *)(puVar4 + 1));
          if ((puVar8 != (undefined4 *)0x0) && (iVar2 = FUN_1004af80(puVar8,puVar4), iVar2 == 0))
          break;
          _Memory = *(void **)((int)puVar4 + 0x16);
          if (_Memory != (void *)0x0) {
            FUN_1001f390();
            _free(_Memory);
          }
          _free(puVar4);
        }
        FUN_1004a010(&local_2bc,0);
LAB_1004c456:
        uVar6 = local_2ac + 1;
        local_2ac = uVar6;
        uVar9 = FUN_1004ade0();
      } while (uVar6 < uVar9);
    }
    local_c = local_c & 0xffffff00;
    FUN_1001f390();
    local_c = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x1004bae0 */
