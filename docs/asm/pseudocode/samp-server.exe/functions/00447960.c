/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00447960
 * Name: FUN_00447960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00447960(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  undefined2 uVar6;
  int *this;
  int iVar7;
  byte *pbVar8;
  byte *_Str;
  uint uVar9;
  long lVar10;
  undefined2 extraout_var_02;
  int iVar11;
  int3 extraout_var;
  undefined3 extraout_var_00;
  void *pvVar12;
  undefined3 extraout_var_01;
  char *pcVar13;
  int *piVar14;
  char *pcVar15;
  char *pcVar16;
  undefined4 extraout_ECX;
  uint uVar17;
  undefined4 *puVar18;
  int *piVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined **ppuVar22;
  undefined8 uVar23;
  int local_28;
  byte *local_24;
  char *local_18;
  uint local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  piVar19 = param_1;
  iVar2 = *param_1;
  this = (int *)FUN_00419780();
  piVar19[3] = (int)this;
  if (this == (int *)0x0) {
    return;
  }
  FUN_0040d500();
  piVar19[0x12] = 2;
  local_28 = FUN_0041ad60(piVar19,(int *)&local_18);
  if (local_28 < 0) {
    return;
  }
  puVar20 = (undefined4 *)(local_28 * 0x10 + *(int *)(iVar2 + 8));
  if ((local_28 == 1) && (iVar7 = FUN_0042cca0(), iVar7 != 0)) {
    return;
  }
  pbVar8 = (byte *)FUN_00416430();
  if (pbVar8 == (byte *)0x0) {
    return;
  }
  if (param_5 == 0) {
    _Str = (byte *)FUN_00416430();
  }
  else {
    _Str = (byte *)FUN_00418920((undefined **)&DAT_004b9a10);
  }
  if (param_3[1] == 0) {
    local_24 = (byte *)0x0;
  }
  else {
    local_24 = (byte *)*puVar20;
  }
  iVar7 = FUN_0041ab60(0x13,pbVar8,_Str,local_24);
  if (iVar7 != 0) goto LAB_00449489;
  iVar7 = FUN_00408450(pbVar8,(byte *)"default_cache_size");
  if (iVar7 == 0) {
    uVar9 = FUN_00442130();
    if (uVar9 != 0) goto LAB_00449489;
    FUN_0040d720(local_28);
    if (_Str == (byte *)0x0) {
      FUN_00419d70(1);
      FUN_0042e910(this,0,0,"cache_size");
      piVar19[0x12] = piVar19[0x12] + 2;
      FUN_00414ef0(8,0x4b3498);
      FUN_0040d600(this,local_28);
      FUN_0040d600(this,local_28);
      FUN_0040d600(this,2000);
    }
    else {
      lVar10 = _atol((char *)_Str);
      if (lVar10 < 0) {
        lVar10 = -lVar10;
      }
      FUN_0042cdb0((byte)local_28,0);
      FUN_00414e70(lVar10,7);
      FUN_00414dd0(0x24,local_28,3,1);
      *(long *)(puVar20[3] + 0x4c) = lVar10;
      FUN_0040cb50(*(undefined4 *)(puVar20[3] + 0x4c));
    }
  }
  else {
    iVar7 = FUN_00408450(pbVar8,(byte *)"page_size");
    if (iVar7 == 0) {
      iVar7 = puVar20[1];
      if (_Str == (byte *)0x0) {
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          uVar6 = FUN_0040cbe0();
          iVar7 = CONCAT22(extraout_var_02,uVar6);
        }
        FUN_0042f4d0("page_size",iVar7,iVar7 >> 0x1f);
      }
      else {
        lVar10 = _atol((char *)_Str);
        *(long *)(iVar2 + 0x24) = lVar10;
        iVar7 = FUN_00414a20(iVar7,-1,0);
        if (iVar7 == 7) {
          *(undefined1 *)(iVar2 + 0x1e) = 1;
        }
      }
    }
    else {
      iVar7 = FUN_00408450(pbVar8,(byte *)"max_page_count");
      if (iVar7 == 0) {
        iVar7 = puVar20[1];
        iVar11 = 0;
        if (_Str != (byte *)0x0) {
          iVar11 = _atol((char *)_Str);
        }
        if (iVar7 != 0) {
          iVar11 = FUN_004195b0();
        }
        FUN_0042f4d0("max_page_count",iVar11,iVar11 >> 0x1f);
      }
      else {
        iVar7 = FUN_00408450(pbVar8,(byte *)"secure_delete");
        if (iVar7 == 0) {
          param_1 = (int *)puVar20[1];
          uVar9 = 0xffffffff;
          if (_Str != (byte *)0x0) {
            uVar9 = FUN_0040fb00();
            uVar9 = uVar9 & 0xff;
          }
          if (((param_3[1] == 0) && (-1 < (int)uVar9)) && (iVar7 = 0, 0 < *(int *)(iVar2 + 4))) {
            iVar11 = 0;
            do {
              FUN_0040cc20(*(int *)(iVar11 + 4 + *(int *)(iVar2 + 8)));
              iVar7 = iVar7 + 1;
              iVar11 = iVar11 + 0x10;
            } while (iVar7 < *(int *)(iVar2 + 4));
          }
          uVar4 = FUN_0040cc20((int)param_1);
          FUN_0042f4d0("secure_delete",CONCAT31(extraout_var,uVar4),(int)extraout_var >> 0x17);
        }
        else {
          iVar7 = FUN_00408450(pbVar8,(byte *)"page_count");
          if (iVar7 == 0) {
            uVar9 = FUN_00442130();
            if (uVar9 != 0) goto LAB_00449489;
            FUN_0042cd30();
            iVar7 = piVar19[0x12];
            piVar19[0x12] = iVar7 + 1;
            FUN_00414e70(local_28,0x86);
            FUN_00414e70(iVar7 + 1,0x10);
            FUN_00419d70(1);
            FUN_0042e910(this,0,0,"page_count");
          }
          else {
            iVar7 = FUN_00408450(pbVar8,(byte *)"locking_mode");
            if (iVar7 == 0) {
              local_18 = "normal";
              param_1 = (int *)FUN_0040fb10();
              if (param_3[1] == 0) {
                if (param_1 != (int *)0xffffffff) {
                  iVar7 = 2;
                  if (2 < *(int *)(iVar2 + 4)) {
                    do {
                      FUN_0040d020();
                      FUN_0040b9c0((int)param_1);
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < *(int *)(iVar2 + 4));
                  }
                  *(undefined1 *)(iVar2 + 0x1f) = param_1._0_1_;
                  goto LAB_00447d97;
                }
                uVar9 = (uint)*(byte *)(iVar2 + 0x1f);
              }
              else {
LAB_00447d97:
                FUN_0040d020();
                uVar4 = FUN_0040b9c0((int)param_1);
                uVar9 = CONCAT31(extraout_var_00,uVar4);
              }
              if (uVar9 == 1) {
                local_18 = "exclusive";
              }
              FUN_00419d70(1);
              FUN_0042e910(this,0,0,"locking_mode");
              pcVar13 = local_18;
LAB_0044826c:
              FUN_004197c0(1,0,0x5e,pcVar13,0);
              FUN_00414e70(1,0x10);
            }
            else {
              iVar7 = FUN_00408450(pbVar8,(byte *)"journal_mode");
              if (iVar7 == 0) {
                uVar9 = FUN_00442130();
                if (uVar9 != 0) goto LAB_00449489;
                FUN_00419d70(1);
                FUN_0042e910(this,0,0,"journal_mode");
                if (_Str == (byte *)0x0) {
                  param_1 = (int *)0xffffffff;
                }
                else {
                  local_18 = (char *)FUN_00408380((char *)_Str);
                  piVar19 = (int *)0x0;
                  param_1 = (int *)0x0;
                  pbVar8 = FUN_0040fc20();
                  if (pbVar8 == (byte *)0x0) {
LAB_00447e88:
                    param_1 = (int *)0xffffffff;
                  }
                  else {
                    do {
                      iVar7 = FUN_004084a0(_Str,pbVar8,(int)local_18);
                      if (iVar7 == 0) {
                        if (pbVar8 == (byte *)0x0) goto LAB_00447e88;
                        param_1 = piVar19;
                        if (piVar19 == (int *)0xffffffff) goto LAB_00447e97;
                        goto LAB_00447eb1;
                      }
                      piVar19 = (int *)((int)piVar19 + 1);
                      pbVar8 = FUN_0040fc20();
                    } while (pbVar8 != (byte *)0x0);
                    param_1 = (int *)0xffffffff;
                  }
                }
LAB_00447e97:
                if (param_3[1] == 0) {
                  local_28 = 0;
                  param_3[1] = 1;
                }
LAB_00447eb1:
                iVar7 = *(int *)(iVar2 + 4) + -1;
                if (-1 < iVar7) {
                  iVar11 = iVar7 * 0x10;
                  do {
                    if ((*(int *)(*(int *)(iVar2 + 8) + 4 + iVar11) != 0) &&
                       ((iVar7 == local_28 || (param_3[1] == 0)))) {
                      FUN_0040d720(iVar7);
                      FUN_00414dd0(0x77,iVar7,1,param_1);
                    }
                    iVar7 = iVar7 + -1;
                    iVar11 = iVar11 + -0x10;
                  } while (-1 < iVar7);
                }
                FUN_00414e70(1,0x10);
              }
              else {
                iVar7 = FUN_00408450(pbVar8,(byte *)"journal_size_limit");
                if (iVar7 != 0) {
                  iVar7 = FUN_00408450(pbVar8,(byte *)"auto_vacuum");
                  if (iVar7 == 0) {
                    local_18 = (char *)puVar20[1];
                    uVar9 = FUN_00442130();
                    if (uVar9 != 0) goto LAB_00449489;
                    if (_Str == (byte *)0x0) {
                      if (local_18 == (char *)0x0) {
                        iVar7 = 0;
                      }
                      else {
                        cVar5 = FUN_0040ccc0();
                        iVar7 = CONCAT31(extraout_var_01,cVar5);
                      }
                      FUN_0042f4d0("auto_vacuum",iVar7,iVar7 >> 0x1f);
                    }
                    else {
                      param_1 = (int *)FUN_0040fb40();
                      *(char *)(iVar2 + 0x20) = (char)param_1;
                      if (((-1 < (int)param_1) && (iVar7 = FUN_0040cc60((char)param_1), iVar7 == 0))
                         && ((param_1 == (int *)0x1 || (param_1 == (int *)0x2)))) {
                        iVar7 = FUN_00414ef0(6,0x4b34b8);
                        FUN_0040d600(this,local_28);
                        FUN_0040d600(this,local_28);
                        FUN_0040d620(this,iVar7 + 4);
                        FUN_0040d600(this,(int)param_1 + -1);
                        FUN_0040d600(this,local_28);
                        FUN_0040d720(local_28);
                      }
                    }
                    goto LAB_0044945e;
                  }
                  iVar7 = FUN_00408450(pbVar8,(byte *)"incremental_vacuum");
                  if (iVar7 == 0) {
                    uVar9 = FUN_00442130();
                    if (uVar9 != 0) goto LAB_00449489;
                    if (((_Str == (byte *)0x0) ||
                        (iVar7 = FUN_00408b60((char *)_Str,(uint *)&param_1), iVar7 == 0)) ||
                       (piVar19 = param_1, (int)param_1 < 1)) {
                      piVar19 = (int *)0x7fffffff;
                    }
                    FUN_0042cdb0((byte)local_28,0);
                    FUN_00414e70(piVar19,7);
                    FUN_00414e50(0x79);
                    FUN_00414e50(0x10);
                    FUN_00414e70(1,0x14);
                    FUN_00414e70(1,0x71);
                    FUN_0040d680(this);
                    goto LAB_0044945e;
                  }
                  iVar7 = FUN_00408450(pbVar8,(byte *)"cache_size");
                  if (iVar7 == 0) {
                    uVar9 = FUN_00442130();
                    if (uVar9 != 0) goto LAB_00449489;
                    if (_Str == (byte *)0x0) {
                      FUN_0042f4d0("cache_size",*(int *)(puVar20[3] + 0x4c),
                                   *(int *)(puVar20[3] + 0x4c) >> 0x1f);
                    }
                    else {
                      lVar10 = _atol((char *)_Str);
                      if (lVar10 < 0) {
                        lVar10 = -lVar10;
                      }
                      *(long *)(puVar20[3] + 0x4c) = lVar10;
                      FUN_0040cb50(*(undefined4 *)(puVar20[3] + 0x4c));
                    }
                    goto LAB_0044945e;
                  }
                  iVar7 = FUN_00408450(pbVar8,(byte *)"temp_store");
                  if (iVar7 == 0) {
                    if (_Str == (byte *)0x0) {
                      FUN_0042f4d0("temp_store",(uint)*(byte *)(iVar2 + 0x1d),0);
                    }
                    else {
                      FUN_0042e360();
                    }
                    goto LAB_0044945e;
                  }
                  iVar7 = FUN_00408450(pbVar8,(byte *)"temp_store_directory");
                  if (iVar7 != 0) {
                    iVar7 = FUN_00408450(pbVar8,(byte *)"synchronous");
                    if (iVar7 == 0) {
                      uVar9 = FUN_00442130();
                      if (uVar9 != 0) goto LAB_00449489;
                      if (_Str == (byte *)0x0) {
                        iVar7 = *(byte *)((int)puVar20 + 9) - 1;
                        FUN_0042f4d0("synchronous",iVar7,iVar7 >> 0x1f);
                      }
                      else if (*(char *)(iVar2 + 0x1c) == '\0') {
                        FUN_00418b00((undefined **)
                                     "Safety level may not be changed inside a transaction");
                      }
                      else {
                        uVar9 = FUN_0040faa0();
                        *(char *)((int)puVar20 + 9) = (char)uVar9 + '\x01';
                      }
                    }
                    else {
                      iVar7 = FUN_0042f550(piVar19,(int)_Str);
                      if (iVar7 == 0) {
                        iVar7 = FUN_00408450(pbVar8,(byte *)"table_info");
                        if ((iVar7 == 0) && (_Str != (byte *)0x0)) {
                          uVar9 = FUN_00442130();
                          if (uVar9 != 0) goto LAB_00449489;
                          local_18 = (char *)FUN_0040edd0(iVar2,(char *)_Str,local_24);
                          if (local_18 != (char *)0x0) {
                            param_1 = (int *)0x0;
                            FUN_00419d70(6);
                            piVar19[0x12] = 6;
                            FUN_0042e910(this,0,0,&DAT_004b98d0);
                            FUN_0042e910(this,1,0,&DAT_004b98c8);
                            FUN_0042e910(this,2,0,&DAT_004b98c0);
                            FUN_0042e910(this,3,0,"notnull");
                            FUN_0042e910(this,4,0,"dflt_value");
                            FUN_0042e910(this,5,0,&DAT_004b98a8);
                            pcVar13 = local_18;
                            FUN_00446950(piVar19,(int)local_18);
                            puVar18 = *(undefined4 **)(pcVar13 + 0x10);
                            iVar7 = 0;
                            if (0 < *(int *)(pcVar13 + 0xc)) {
                              do {
                                if (*(char *)((int)puVar18 + 0x17) == '\0') {
                                  FUN_00414e70(iVar7 - (int)param_1,7);
                                  FUN_004197c0(2,0,0x5e,(char *)*puVar18,0);
                                  pcVar13 = (char *)puVar18[3];
                                  if (pcVar13 == (char *)0x0) {
                                    pcVar13 = "";
                                  }
                                  FUN_004197c0(3,0,0x5e,pcVar13,0);
                                  FUN_00414e70((uint)(*(char *)(puVar18 + 5) != '\0'),7);
                                  if ((char *)puVar18[2] == (char *)0x0) {
                                    FUN_00414e70(0,10);
                                  }
                                  else {
                                    FUN_004197c0(5,0,0x5e,(char *)puVar18[2],0);
                                  }
                                  FUN_00414e70((uint)*(byte *)((int)puVar18 + 0x15),7);
                                  FUN_00414e70(1,0x10);
                                }
                                else {
                                  param_1 = (int *)((int)param_1 + 1);
                                }
                                iVar7 = iVar7 + 1;
                                puVar18 = puVar18 + 6;
                              } while (iVar7 < *(int *)(local_18 + 0xc));
                            }
                          }
                        }
                        else {
                          iVar7 = FUN_00408450(pbVar8,(byte *)"index_info");
                          if ((iVar7 == 0) && (_Str != (byte *)0x0)) {
                            uVar9 = FUN_00442130();
                            if (uVar9 != 0) goto LAB_00449489;
                            piVar14 = (int *)FUN_0040ee60((char *)_Str,local_24);
                            param_1 = piVar14;
                            if (piVar14 != (int *)0x0) {
                              local_18 = (char *)piVar14[4];
                              FUN_00419d70(3);
                              piVar19[0x12] = 3;
                              FUN_0042e910(this,0,0,"seqno");
                              FUN_0042e910(this,1,0,&DAT_004b98d0);
                              FUN_0042e910(this,2,0,&DAT_004b98c8);
                              iVar7 = 0;
                              if (0 < piVar14[1]) {
                                do {
                                  iVar11 = *(int *)(piVar14[2] + iVar7 * 4);
                                  FUN_00414e70(iVar7,7);
                                  FUN_00414e70(iVar11,7);
                                  FUN_004197c0(3,0,0x5e,*(char **)(*(int *)(local_18 + 0x10) +
                                                                  iVar11 * 0x18),0);
                                  FUN_00414e70(1,0x10);
                                  iVar7 = iVar7 + 1;
                                } while (iVar7 < piVar14[1]);
                              }
                            }
                          }
                          else {
                            iVar7 = FUN_00408450(pbVar8,(byte *)"index_list");
                            if ((iVar7 == 0) && (_Str != (byte *)0x0)) {
                              uVar9 = FUN_00442130();
                              if (uVar9 != 0) goto LAB_00449489;
                              iVar7 = FUN_0040edd0(iVar2,(char *)_Str,local_24);
                              if (iVar7 != 0) {
                                pvVar12 = (void *)FUN_0041c720();
                                puVar18 = *(undefined4 **)(iVar7 + 0x14);
                                if (puVar18 != (undefined4 *)0x0) {
                                  param_1 = (int *)0x0;
                                  FUN_00419d70(3);
                                  piVar19[0x12] = 3;
                                  FUN_0042e910(pvVar12,0,0,&DAT_004b9884);
                                  FUN_0042e910(pvVar12,1,0,&DAT_004b98c8);
                                  FUN_0042e910(pvVar12,2,0,"unique");
                                  piVar19 = param_1;
                                  do {
                                    FUN_00414e70(piVar19,7);
                                    FUN_004197c0(2,0,0x5e,(char *)*puVar18,0);
                                    FUN_00414e70((uint)(*(char *)(puVar18 + 6) != '\0'),7);
                                    FUN_00414e70(1,0x10);
                                    puVar18 = (undefined4 *)puVar18[8];
                                    piVar19 = (int *)((int)piVar19 + 1);
                                  } while (puVar18 != (undefined4 *)0x0);
                                }
                              }
                            }
                            else {
                              iVar7 = FUN_00408450(pbVar8,(byte *)"database_list");
                              if (iVar7 == 0) {
                                uVar9 = FUN_00442130();
                                if (uVar9 != 0) goto LAB_00449489;
                                FUN_00419d70(3);
                                piVar19[0x12] = 3;
                                FUN_0042e910(this,0,0,&DAT_004b9884);
                                FUN_0042e910(this,1,0,&DAT_004b98c8);
                                FUN_0042e910(this,2,0,&DAT_004b6adc);
                                param_1 = (int *)0x0;
                                if (0 < *(int *)(iVar2 + 4)) {
                                  iVar7 = 0;
                                  do {
                                    if (*(int *)(iVar7 + 4 + *(int *)(iVar2 + 8)) != 0) {
                                      FUN_00414e70(param_1,7);
                                      FUN_004197c0(2,0,0x5e,*(char **)(iVar7 + *(int *)(iVar2 + 8)),
                                                   0);
                                      iVar11 = 0;
                                      pcVar13 = (char *)FUN_0040d030();
                                      FUN_004197c0(3,0,0x5e,pcVar13,iVar11);
                                      FUN_00414e70(1,0x10);
                                    }
                                    param_1 = (int *)((int)param_1 + 1);
                                    iVar7 = iVar7 + 0x10;
                                  } while ((int)param_1 < *(int *)(iVar2 + 4));
                                }
                              }
                              else {
                                piVar14 = (int *)FUN_00408450(pbVar8,(byte *)"collation_list");
                                if (piVar14 == (int *)0x0) {
                                  param_1 = piVar14;
                                  FUN_00419d70(2);
                                  piVar19[0x12] = 2;
                                  FUN_0042e910(this,0,0,&DAT_004b9884);
                                  FUN_0042e910(this,1,0,&DAT_004b98c8);
                                  piVar19 = param_1;
                                  for (puVar18 = *(undefined4 **)(iVar2 + 0x198);
                                      puVar18 != (undefined4 *)0x0; puVar18 = (undefined4 *)*puVar18
                                      ) {
                                    puVar21 = (undefined4 *)puVar18[2];
                                    FUN_00414e70(piVar19,7);
                                    piVar19 = (int *)((int)piVar19 + 1);
                                    FUN_004197c0(2,0,0x5e,(char *)*puVar21,0);
                                    FUN_00414e70(1,0x10);
                                  }
                                }
                                else {
                                  iVar7 = FUN_00408450(pbVar8,(byte *)"foreign_key_list");
                                  if ((iVar7 == 0) && (_Str != (byte *)0x0)) {
                                    uVar9 = FUN_00442130();
                                    if (uVar9 != 0) goto LAB_00449489;
                                    pcVar13 = (char *)FUN_0040edd0(iVar2,(char *)_Str,local_24);
                                    local_18 = pcVar13;
                                    if (pcVar13 != (char *)0x0) {
                                      pvVar12 = (void *)FUN_0041c720();
                                      iVar7 = *(int *)(pcVar13 + 0x24);
                                      if (iVar7 != 0) {
                                        local_24 = (byte *)0x0;
                                        FUN_00419d70(8);
                                        piVar19[0x12] = 8;
                                        FUN_0042e910(pvVar12,0,0,&DAT_004b9844);
                                        FUN_0042e910(pvVar12,1,0,&DAT_004b9884);
                                        FUN_0042e910(pvVar12,2,0,"table");
                                        FUN_0042e910(pvVar12,3,0,&DAT_004b601c);
                                        FUN_0042e910(pvVar12,4,0,&DAT_004b9840);
                                        FUN_0042e910(pvVar12,5,0,"on_update");
                                        FUN_0042e910(pvVar12,6,0,"on_delete");
                                        FUN_0042e910(pvVar12,7,0,"match");
                                        do {
                                          iVar11 = 0;
                                          if (0 < *(int *)(iVar7 + 0x14)) {
                                            param_1 = (int *)(iVar7 + 0x24);
                                            do {
                                              pcVar13 = (char *)param_1[1];
                                              pcVar15 = FUN_0040fbe0();
                                              pcVar16 = FUN_0040fbe0();
                                              FUN_00414e70(local_24,7);
                                              FUN_00414e70(iVar11,7);
                                              FUN_004197c0(3,0,0x5e,*(char **)(iVar7 + 8),0);
                                              FUN_004197c0(4,0,0x5e,*(char **)(*(int *)(local_18 +
                                                                                       0x10) +
                                                                              *param_1 * 0x18),0);
                                              FUN_004197c0(5,0,(-(pcVar13 != (char *)0x0) & 0x54U) +
                                                               10,pcVar13,0);
                                              FUN_004197c0(6,0,0x5e,pcVar16,0);
                                              FUN_004197c0(7,0,0x5e,pcVar15,0);
                                              FUN_004197c0(8,0,0x5e,"NONE",0);
                                              FUN_00414e70(1,0x10);
                                              iVar11 = iVar11 + 1;
                                              param_1 = param_1 + 2;
                                            } while (iVar11 < *(int *)(iVar7 + 0x14));
                                          }
                                          iVar7 = *(int *)(iVar7 + 4);
                                          local_24 = (byte *)((int)local_24 + 1);
                                        } while (iVar7 != 0);
                                      }
                                    }
                                  }
                                  else {
                                    iVar7 = FUN_00408450(pbVar8,(byte *)"case_sensitive_like");
                                    if (iVar7 == 0) {
                                      if (_Str != (byte *)0x0) {
                                        FUN_0040fb00();
                                        FUN_00435c90();
                                      }
                                    }
                                    else {
                                      iVar7 = FUN_00408450(pbVar8,(byte *)"integrity_check");
                                      if ((iVar7 == 0) ||
                                         (iVar7 = FUN_00408450(pbVar8,(byte *)"quick_check"),
                                         iVar7 == 0)) {
                                        local_14 = (uint)(*pbVar8 == 0x71);
                                        uVar9 = FUN_00442130();
                                        if (uVar9 != 0) goto LAB_00449489;
                                        piVar19[0x12] = 6;
                                        FUN_00419d70(1);
                                        FUN_0042e910(this,0,0,"integrity_check");
                                        local_18 = (char *)0x64;
                                        if ((_Str != (byte *)0x0) &&
                                           (local_18 = (char *)_atol((char *)_Str),
                                           (int)local_18 < 1)) {
                                          local_18 = (char *)0x64;
                                        }
                                        FUN_00414e70(local_18,7);
                                        local_24 = (byte *)0x0;
                                        if (0 < *(int *)(iVar2 + 4)) {
                                          local_28 = 0;
                                          do {
                                            iVar11 = 0;
                                            FUN_0042cd30();
                                            FUN_00414e50(0x71);
                                            FUN_00414e70(0,6);
                                            FUN_0040d680(this);
                                            iVar7 = *(int *)(local_28 + 0xc + *(int *)(iVar2 + 8));
                                            for (puVar18 = *(undefined4 **)(iVar7 + 0xc);
                                                puVar18 != (undefined4 *)0x0;
                                                puVar18 = (undefined4 *)*puVar18) {
                                              iVar3 = puVar18[2];
                                              FUN_00414e70(*(undefined4 *)(iVar3 + 0x18),7);
                                              for (iVar3 = *(int *)(iVar3 + 0x14);
                                                  iVar11 = iVar11 + 1, iVar3 != 0;
                                                  iVar3 = *(int *)(iVar3 + 0x20)) {
                                                FUN_00414e70(*(undefined4 *)(iVar3 + 0x14),7);
                                              }
                                            }
                                            if (param_1[0x12] < iVar11 + 4) {
                                              param_1[0x12] = iVar11 + 4;
                                            }
                                            FUN_00414dd0(0x68,2,iVar11,1);
                                            FUN_0040d660(extraout_ECX,local_24._0_1_);
                                            FUN_00414e50(0x49);
                                            iVar11 = -1;
                                            pcVar13 = (char *)FUN_00418920((undefined **)
                                                                                                                                                      
                                                  "*** in database %s ***\n");
                                            FUN_004197c0(3,0,0x5e,pcVar13,iVar11);
                                            FUN_00414dd0(0xd,2,4,1);
                                            FUN_00414dd0(0x5b,4,3,2);
                                            FUN_00414e70(2,0x10);
                                            FUN_0040d680(this);
                                            puVar18 = *(undefined4 **)(iVar7 + 0xc);
                                            while ((puVar18 != (undefined4 *)0x0 && (local_14 == 0))
                                                  ) {
                                              uVar9 = puVar18[2];
                                              local_8 = uVar9;
                                              if (*(int *)(uVar9 + 0x14) != 0) {
                                                FUN_00414e50(0x71);
                                                FUN_00414e70(0,6);
                                                FUN_0040d680(this);
                                                FUN_00431a70(param_1,uVar9,1,0x26);
                                                FUN_00414e70(0,7);
                                                local_c = FUN_00414e70(1,0x41);
                                                FUN_00414e70(2,0x14);
                                                puVar21 = *(undefined4 **)(uVar9 + 0x14);
                                                if (puVar21 != (undefined4 *)0x0) {
                                                  iVar7 = 2;
                                                  do {
                                                    FUN_00438460((int)param_1,(int)puVar21,1,3,0);
                                                    local_10 = FUN_004197f0(0,iVar7,0x32,
                                                                            (char *)(puVar21[1] + 1)
                                                                           );
                                                    FUN_00414ef0(0xb,0x4b34e0);
                                                    FUN_00415110(-2,"rowid ",this);
                                                    FUN_00415110(-2," missing from index ",this);
                                                    FUN_00415110(-2,(char *)*puVar21,this);
                                                    FUN_0040d680(this);
                                                    FUN_0040d680(this);
                                                    puVar21 = (undefined4 *)puVar21[8];
                                                    iVar7 = iVar7 + 1;
                                                  } while (puVar21 != (undefined4 *)0x0);
                                                }
                                                FUN_00414e70(1,0x43);
                                                FUN_0040d680(this);
                                                puVar21 = *(undefined4 **)(local_8 + 0x14);
                                                if (puVar21 != (undefined4 *)0x0) {
                                                  iVar7 = 2;
                                                  do {
                                                    FUN_00414e50(0x71);
                                                    FUN_00414e70(0,6);
                                                    FUN_0040d680(this);
                                                    iVar11 = FUN_00414ef0(10,0x4b350c);
                                                    FUN_0040d600(this,iVar7);
                                                    FUN_0040d620(this,iVar11 + 4);
                                                    FUN_0040d600(this,iVar7);
                                                    FUN_0040d620(this,iVar11 + 2);
                                                    FUN_0040d680(this);
                                                    FUN_00415110(-2,"wrong # of entries in index ",
                                                                 this);
                                                    FUN_00415110(-2,(char *)*puVar21,this);
                                                    puVar21 = (undefined4 *)puVar21[8];
                                                    iVar7 = iVar7 + 1;
                                                  } while (puVar21 != (undefined4 *)0x0);
                                                }
                                              }
                                              puVar18 = (undefined4 *)*puVar18;
                                            }
                                            local_24 = (byte *)((int)local_24 + 1);
                                            local_28 = local_28 + 0x10;
                                          } while ((int)local_24 < *(int *)(iVar2 + 4));
                                        }
                                        FUN_00414ef0(4,0x4b34d0);
                                        FUN_0040d620(this,-(int)local_18);
                                        FUN_0040d680(this);
                                        FUN_00415110(-2,"ok",this);
                                      }
                                      else {
                                        iVar7 = FUN_00408450(pbVar8,(byte *)"encoding");
                                        if (iVar7 == 0) {
                                          if (_Str == (byte *)0x0) {
                                            uVar9 = FUN_00442130();
                                            if (uVar9 != 0) goto LAB_00449489;
                                            FUN_00419d70(1);
                                            FUN_0042e910(this,0,0,"encoding");
                                            FUN_00414e70(0,0x5e);
                                            FUN_00415110(-2,(&PTR_DAT_004b3538)
                                                            [(uint)*(byte *)(*(int *)(*(int *)(*
                                                  piVar19 + 8) + 0xc) + 0x49) * 2],this);
                                            FUN_00414e70(1,0x10);
                                          }
                                          else {
                                            uVar1 = *(ushort *)
                                                     (*(int *)(*(int *)(iVar2 + 8) + 0xc) + 0x4a);
                                            if (((uVar1 & 1) == 0) || ((uVar1 & 4) != 0)) {
                                              pbVar8 = &DAT_004b6098;
                                              ppuVar22 = &PTR_DAT_004b3538;
                                              do {
                                                iVar7 = FUN_00408450(_Str,pbVar8);
                                                if (iVar7 == 0) {
                                                  cVar5 = *(char *)(ppuVar22 + 1);
                                                  if (cVar5 == '\0') {
                                                    cVar5 = '\x02';
                                                  }
                                                  *(char *)(*(int *)(*(int *)(*piVar19 + 8) + 0xc) +
                                                           0x49) = cVar5;
                                                  if (*ppuVar22 != (undefined *)0x0)
                                                  goto LAB_0044945e;
                                                  break;
                                                }
                                                pbVar8 = ppuVar22[2];
                                                ppuVar22 = ppuVar22 + 2;
                                              } while (pbVar8 != (byte *)0x0);
                                              FUN_00418b00((undefined **)"unsupported encoding: %s")
                                              ;
                                            }
                                          }
                                        }
                                        else {
                                          iVar7 = FUN_00408450(pbVar8,(byte *)"schema_version");
                                          if (((iVar7 == 0) ||
                                              (iVar7 = FUN_00408450(pbVar8,(byte *)"user_version"),
                                              iVar7 == 0)) ||
                                             (iVar7 = FUN_00408450(pbVar8,(byte *)"freelist_count"),
                                             iVar7 == 0)) {
                                            FUN_0040d720(local_28);
                                            switch(*pbVar8) {
                                            case 0x46:
                                            case 0x66:
                                              param_1 = (int *)0x0;
                                              break;
                                            default:
                                              param_1 = (int *)0x6;
                                              break;
                                            case 0x53:
                                            case 0x73:
                                              param_1 = (int *)0x1;
                                            }
                                            if ((_Str == (byte *)0x0) || (param_1 == (int *)0x0)) {
                                              FUN_00414ef0(3,0x4b358c);
                                              FUN_0040d600(this,local_28);
                                              FUN_0040d600(this,local_28);
                                              FUN_0040d640(this,param_1);
                                              FUN_00419d70(1);
                                              FUN_0042e910(this,0,0,pbVar8);
                                            }
                                            else {
                                              FUN_00414ef0(3,0x4b3580);
                                              FUN_0040d600(this,local_28);
                                              lVar10 = _atol((char *)_Str);
                                              FUN_0040d600(this,lVar10);
                                              FUN_0040d600(this,local_28);
                                              FUN_0040d620(this,param_1);
                                            }
                                          }
                                          else {
                                            piVar14 = (int *)FUN_00408450(pbVar8,(byte *)
                                                  "compile_options");
                                            if (piVar14 == (int *)0x0) {
                                              param_1 = piVar14;
                                              FUN_00419d70(1);
                                              piVar19[0x12] = 1;
                                              FUN_0042e910(this,0,0,"compile_option");
                                              pcVar13 = FUN_00407370(0);
                                              piVar19 = param_1;
                                              while (pcVar13 != (char *)0x0) {
                                                piVar19 = (int *)((int)piVar19 + 1);
                                                FUN_004197c0(1,0,0x5e,pcVar13,0);
                                                FUN_00414e70(1,0x10);
                                                pcVar13 = FUN_00407370((int)piVar19);
                                              }
                                            }
                                            else {
                                              iVar7 = FUN_00408450(pbVar8,(byte *)"wal_checkpoint");
                                              if (iVar7 == 0) {
                                                uVar9 = FUN_00442130();
                                                if (uVar9 != 0) goto LAB_00449489;
                                                if (*param_3 == 0) {
                                                  local_28 = 10;
                                                }
                                                FUN_00414dd0(0x76,local_28,0,0);
                                              }
                                              else {
                                                iVar7 = FUN_00408450(pbVar8,(byte *)
                                                  "wal_autocheckpoint");
                                                if (iVar7 == 0) {
                                                  if (_Str != (byte *)0x0) {
                                                    lVar10 = _atol((char *)_Str);
                                                    FUN_0043a5b0(iVar2,lVar10);
                                                  }
                                                  if (*(undefined1 **)(iVar2 + 0xbc) ==
                                                      &LAB_0043a580) {
                                                    iVar7 = *(int *)(iVar2 + 0xc0);
                                                  }
                                                  else {
                                                    iVar7 = 0;
                                                  }
                                                  FUN_0042f4d0("wal_autocheckpoint",iVar7,
                                                               iVar7 >> 0x1f);
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
                            }
                          }
                        }
                      }
                    }
                    goto LAB_0044945e;
                  }
                  if (_Str != (byte *)0x0) {
                    if ((*_Str != 0) &&
                       ((iVar7 = FUN_00407c50(), iVar7 != 0 || (param_1 == (int *)0x0)))) {
                      FUN_00418b00((undefined **)"not a writable directory");
                      goto LAB_00449489;
                    }
                    if (*(byte *)(iVar2 + 0x1d) < 2) {
                      FUN_0042e300();
                    }
                    FUN_004080d0((int)DAT_004ed564);
                    if (*_Str == 0) {
                      DAT_004ed564 = (char *)0x0;
                    }
                    else {
                      DAT_004ed564 = FUN_00412a70();
                    }
                    goto LAB_0044945e;
                  }
                  if (DAT_004ed564 == (char *)0x0) goto LAB_0044945e;
                  FUN_00419d70(1);
                  FUN_0042e910(this,0,0,"temp_store_directory");
                  pcVar13 = DAT_004ed564;
                  goto LAB_0044826c;
                }
                pvVar12 = (void *)FUN_0040d020();
                local_8 = 0xfffffffe;
                local_4 = 0xffffffff;
                uVar9 = 0xfffffffe;
                uVar17 = 0xffffffff;
                if (((_Str != (byte *)0x0) &&
                    (FUN_00408a20(&local_8), uVar9 = local_8, uVar17 = local_4, 0x7fffffff < local_4
                    )) && (((int)local_4 < -1 || (local_8 != 0xffffffff)))) {
                  uVar9 = 0xffffffff;
                  uVar17 = 0xffffffff;
                }
                uVar23 = FUN_0040ba20(pvVar12,uVar9,uVar17);
                FUN_0042f4d0("journal_size_limit",(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
              }
            }
          }
        }
      }
    }
  }
LAB_0044945e:
  if (*(char *)(iVar2 + 0x1c) != '\0') {
    FUN_0040cb80((void *)(uint)*(byte *)((int)puVar20 + 9),*(uint *)(iVar2 + 0xc) >> 0x15 & 1);
  }
LAB_00449489:
  FUN_00408130(iVar2);
  FUN_00408130(iVar2);
  return;
}


/* END FUNCTION 0x00447960 */
