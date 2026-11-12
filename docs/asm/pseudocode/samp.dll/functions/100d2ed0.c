/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d2ed0
 * Name: FUN_100d2ed0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100d2ed0(int param_1,int param_2,int *param_3,undefined4 *param_4,undefined4 *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  int iVar14;
  int extraout_ECX;
  uint uVar15;
  byte *pbVar16;
  bool bVar17;
  uint local_24;
  int local_1c;
  uint local_c;
  
  local_1c = 0;
  bVar4 = false;
  local_24 = FUN_100d0b30();
  if (((*(byte *)(param_1 + 0x495c) & 0x28) == 0) ||
     (bVar2 = true, (*(byte *)(*(int *)(param_2 + 800) + 0x40) & 3) == 0)) {
    bVar2 = false;
  }
  if (((*(int *)(param_2 + 0x2a4) == 0) || ((*(byte *)(param_1 + 0x4974) & 0x28) == 0)) ||
     (bVar3 = true, (*(byte *)(*(int *)(param_2 + 800) + 0x40) & 3) == 0)) {
    bVar3 = false;
  }
  *param_4 = 0;
  *param_5 = 0;
  if (((local_24 & 1) != 0) && (iVar5 = FUN_100e8c80(param_1,param_2), iVar5 != 0)) {
    local_24 = local_24 & 0xfffffffe;
  }
  piVar6 = (int *)FUN_100ebaa0(param_2,*(undefined4 *)(param_1 + 0x838));
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  iVar5 = *piVar6;
  if ((iVar5 == 2) || (*(int *)(param_1 + 100) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(*(int *)(param_1 + 100) + 0xb8);
  }
  if (iVar5 == 1) {
    pcVar13 = "can pipeline";
  }
  else {
    pcVar13 = "can multiplex";
    if (iVar5 != 2) {
      pcVar13 = "serially";
    }
  }
  if (*(int *)(param_2 + 0x28c) == 0) {
    uVar8 = *(undefined4 *)(param_2 + 0xa0);
  }
  else {
    uVar8 = *(undefined4 *)(param_2 + 0xb4);
  }
  FUN_100d8ae0(param_1,"Found bundle for host %s: %p [%s]\n",uVar8,piVar6,pcVar13);
  if (local_24 != 0) {
    if (*piVar6 < 1) {
      if ((*piVar6 == 0) && (*(int *)(param_1 + 0x6e0) != 0)) {
        pcVar13 = "Server doesn\'t support multi-use yet, wait\n";
        goto LAB_100d3752;
      }
      FUN_100d8ae0(param_1,"Server doesn\'t support multi-use (yet)\n");
      local_24 = 0;
    }
    if ((*piVar6 == 1) && (iVar5 = FUN_100d5880(*(undefined4 *)(param_1 + 100),1), iVar5 == 0)) {
      pcVar13 = "Could pipeline, but not asked to!\n";
    }
    else {
      if ((*piVar6 != 2) || (iVar5 = FUN_100d5880(*(undefined4 *)(param_1 + 100),2), iVar5 != 0))
      goto LAB_100d3073;
      pcVar13 = "Could multiplex, but not asked to!\n";
    }
    FUN_100d8ae0(param_1,pcVar13);
    local_24 = 0;
  }
LAB_100d3073:
  piVar6 = (int *)piVar6[2];
  local_c = uVar7;
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  do {
    iVar5 = *piVar6;
    piVar6 = (int *)piVar6[2];
    iVar9 = FUN_100d2de0();
    if (iVar9 == 0) {
      uVar15 = *(int *)(iVar5 + 0x3b4) + *(int *)(iVar5 + 0x3a4);
      if (local_24 == 0) {
        if (uVar15 == 0) {
          if (*(char *)(iVar5 + 0x60) == '\0') {
            uVar15 = *(uint *)(iVar5 + 0x4c);
            pcVar13 = "Connection #%ld is still name resolving, can\'t reuse\n";
          }
          else {
            if (*(int *)(iVar5 + 0x198) == -1) {
              if (*(int *)(iVar5 + 0x284) == 0) {
                bVar4 = true;
              }
            }
            else if (*(int *)(iVar5 + 0x284) == 0) goto LAB_100d315e;
            uVar15 = *(uint *)(iVar5 + 0x4c);
            pcVar13 = "Connection #%ld isn\'t open enough, can\'t reuse\n";
          }
LAB_100d3707:
          FUN_100d8ae0(param_1,pcVar13,uVar15);
        }
      }
      else if ((*(int *)(iVar5 + 700) == 0) || (*(int *)(iVar5 + 0x284) == 0)) {
        if (*(int *)(iVar5 + 0x2f4) == 0) {
          if (*(int **)(iVar5 + 0x398) == (int *)0x0) {
            iVar9 = 0;
          }
          else {
            iVar9 = **(int **)(iVar5 + 0x398);
          }
          if (*(int **)(iVar5 + 0x3a8) == (int *)0x0) {
            iVar14 = 0;
          }
          else {
            iVar14 = **(int **)(iVar5 + 0x3a8);
          }
          if (iVar9 == 0) {
            if (iVar14 == 0) goto LAB_100d315e;
            uVar10 = FUN_100d0b30();
          }
          else {
            uVar10 = FUN_100d0b30();
          }
          if ((uVar10 & 1) == 0) goto LAB_100d370f;
        }
LAB_100d315e:
        if ((((((*(uint *)(*(int *)(iVar5 + 800) + 0x44) ^ *(uint *)(*(int *)(param_2 + 800) + 0x44)
                ) & 1) == 0) ||
             ((iVar9 = FUN_100d2950(), iVar9 == *(int *)(extraout_ECX + 0x40) &&
              (*(int *)(iVar5 + 0x280) != 0)))) &&
            (*(int *)(param_2 + 0x298) == *(int *)(iVar5 + 0x298))) &&
           ((*(int *)(param_2 + 0x29c) == *(int *)(iVar5 + 0x29c) &&
            ((((*(int *)(param_2 + 0x29c) == 0 || (iVar9 = FUN_100d0d10(), iVar9 != 0)) &&
              (*(int *)(param_2 + 0x28c) == *(int *)(iVar5 + 0x28c))) &&
             (*(int *)(param_2 + 0x290) == *(int *)(iVar5 + 0x290))))))) {
          if (*(int *)(param_2 + 0x298) == 0) {
LAB_100d329e:
            if ((local_24 != 0) || (*(int *)(iVar5 + 0x48) == 0)) {
              pbVar16 = *(byte **)(param_2 + 0x61c);
              if ((pbVar16 == (byte *)0x0) && (*(short *)(param_2 + 0x620) == 0)) {
LAB_100d3331:
                uVar10 = *(uint *)(*(int *)(param_2 + 800) + 0x44);
                if ((char)uVar10 < '\0') {
LAB_100d33c5:
                  if (((*(int *)(param_2 + 0x298) == 0) || ((uVar10 & 1) != 0)) ||
                     (*(int *)(param_2 + 0x2c4) != 0)) {
                    iVar9 = FUN_100de830(**(undefined4 **)(param_2 + 800),
                                         **(undefined4 **)(iVar5 + 800));
                    if ((((iVar9 != 0) ||
                         ((iVar9 = FUN_100d2950(), iVar9 == *(int *)(*(int *)(param_2 + 800) + 0x40)
                          && (*(int *)(iVar5 + 0x280) != 0)))) &&
                        ((*(int *)(param_2 + 0x28c) == 0 ||
                         (iVar9 = FUN_100de830(*(undefined4 *)(param_2 + 0xb4),
                                               *(undefined4 *)(iVar5 + 0xb4)), iVar9 != 0)))) &&
                       (((*(int *)(param_2 + 0x290) == 0 ||
                         (*(int *)(param_2 + 0x104) == *(int *)(iVar5 + 0x104))) &&
                        ((iVar9 = FUN_100de830(*(undefined4 *)(param_2 + 0xa0),
                                               *(undefined4 *)(iVar5 + 0xa0)), iVar9 != 0 &&
                         (*(int *)(param_2 + 0x100) == *(int *)(iVar5 + 0x100))))))) {
                      if ((*(byte *)(*(int *)(param_2 + 800) + 0x44) & 1) == 0) goto LAB_100d34df;
                      iVar9 = FUN_100ce5a0(param_2 + 0x220,iVar5 + 0x220);
                      if (iVar9 != 0) {
                        if (*(int *)(iVar5 + 0x1e4) == 2) goto LAB_100d34df;
                        bVar4 = true;
                      }
                    }
                  }
                  else {
LAB_100d34df:
                    if (bVar2) {
                      pbVar16 = *(byte **)(iVar5 + 0x170);
                      pbVar11 = *(byte **)(param_2 + 0x170);
                      do {
                        bVar1 = *pbVar11;
                        bVar17 = bVar1 < *pbVar16;
                        if (bVar1 != *pbVar16) {
LAB_100d351b:
                          iVar9 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                          goto LAB_100d3520;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar11[1];
                        bVar17 = bVar1 < pbVar16[1];
                        if (bVar1 != pbVar16[1]) goto LAB_100d351b;
                        pbVar11 = pbVar11 + 2;
                        pbVar16 = pbVar16 + 2;
                      } while (bVar1 != 0);
                      iVar9 = 0;
LAB_100d3520:
                      if (iVar9 != 0) goto LAB_100d370f;
                      pbVar16 = *(byte **)(iVar5 + 0x174);
                      pbVar11 = *(byte **)(param_2 + 0x174);
                      do {
                        bVar1 = *pbVar11;
                        bVar17 = bVar1 < *pbVar16;
                        if (bVar1 != *pbVar16) {
LAB_100d3558:
                          iVar9 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                          goto joined_r0x100d356e;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar11[1];
                        bVar17 = bVar1 < pbVar16[1];
                        if (bVar1 != pbVar16[1]) goto LAB_100d3558;
                        pbVar11 = pbVar11 + 2;
                        pbVar16 = pbVar16 + 2;
                      } while (bVar1 != 0);
                      iVar9 = 0;
                    }
                    else {
                      iVar9 = *(int *)(iVar5 + 0x3cc);
                    }
joined_r0x100d356e:
                    if (iVar9 == 0) {
                      if (bVar3) {
                        pbVar16 = *(byte **)(iVar5 + 0xf4);
                        if ((pbVar16 != (byte *)0x0) &&
                           (pbVar11 = *(byte **)(iVar5 + 0xf8), pbVar11 != (byte *)0x0)) {
                          pbVar12 = *(byte **)(param_2 + 0xf4);
                          do {
                            bVar1 = *pbVar12;
                            bVar17 = bVar1 < *pbVar16;
                            if (bVar1 != *pbVar16) {
LAB_100d35ca:
                              iVar9 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                              goto LAB_100d35cf;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar12[1];
                            bVar17 = bVar1 < pbVar16[1];
                            if (bVar1 != pbVar16[1]) goto LAB_100d35ca;
                            pbVar12 = pbVar12 + 2;
                            pbVar16 = pbVar16 + 2;
                          } while (bVar1 != 0);
                          iVar9 = 0;
LAB_100d35cf:
                          if (iVar9 == 0) {
                            pbVar16 = *(byte **)(param_2 + 0xf8);
                            do {
                              bVar1 = *pbVar16;
                              bVar17 = bVar1 < *pbVar11;
                              if (bVar1 != *pbVar11) {
LAB_100d3605:
                                iVar9 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                                goto joined_r0x100d361b;
                              }
                              if (bVar1 == 0) break;
                              bVar1 = pbVar16[1];
                              bVar17 = bVar1 < pbVar11[1];
                              if (bVar1 != pbVar11[1]) goto LAB_100d3605;
                              pbVar16 = pbVar16 + 2;
                              pbVar11 = pbVar11 + 2;
                            } while (bVar1 != 0);
                            iVar9 = 0;
                            goto joined_r0x100d361b;
                          }
                        }
                      }
                      else {
                        iVar9 = *(int *)(iVar5 + 0x408);
joined_r0x100d361b:
                        if (iVar9 == 0) {
                          if ((bVar2) || (bVar3)) {
                            if (((bVar2) && (*(int *)(iVar5 + 0x3cc) != 0)) ||
                               ((local_1c = iVar5, bVar3 && (*(int *)(iVar5 + 0x408) != 0)))) {
                              *param_4 = 1;
                              break;
                            }
                          }
                          else {
                            if ((local_24 == 0) || (uVar15 == 0)) break;
                            if ((uVar7 != 0) && (uVar7 <= uVar15)) {
                              pcVar13 = "Pipe is full, skip (%zu)\n";
                              goto LAB_100d3707;
                            }
                            iVar9 = FUN_100e8b70(param_1,iVar5);
                            if (iVar9 == 0) {
                              if (uVar7 == 0) {
                                FUN_100d8ae0(param_1,"Multiplexed connection found!\n");
                                break;
                              }
                              if (uVar15 < local_c) {
                                local_1c = iVar5;
                                local_c = uVar15;
                              }
                            }
                            else {
                              FUN_100d8ae0(param_1,"Penalized, skip\n");
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  pbVar16 = *(byte **)(iVar5 + 0x170);
                  pbVar11 = *(byte **)(param_2 + 0x170);
                  do {
                    bVar1 = *pbVar11;
                    bVar17 = bVar1 < *pbVar16;
                    if (bVar1 != *pbVar16) {
LAB_100d3374:
                      iVar9 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                      goto LAB_100d3379;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar11[1];
                    bVar17 = bVar1 < pbVar16[1];
                    if (bVar1 != pbVar16[1]) goto LAB_100d3374;
                    pbVar11 = pbVar11 + 2;
                    pbVar16 = pbVar16 + 2;
                  } while (bVar1 != 0);
                  iVar9 = 0;
LAB_100d3379:
                  if (iVar9 == 0) {
                    pbVar16 = *(byte **)(iVar5 + 0x174);
                    pbVar11 = *(byte **)(param_2 + 0x174);
                    do {
                      bVar1 = *pbVar11;
                      bVar17 = bVar1 < *pbVar16;
                      if (bVar1 != *pbVar16) {
LAB_100d33b4:
                        iVar9 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                        goto LAB_100d33b9;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar11[1];
                      bVar17 = bVar1 < pbVar16[1];
                      if (bVar1 != pbVar16[1]) goto LAB_100d33b4;
                      pbVar11 = pbVar11 + 2;
                      pbVar16 = pbVar16 + 2;
                    } while (bVar1 != 0);
                    iVar9 = 0;
LAB_100d33b9:
                    if (iVar9 == 0) goto LAB_100d33c5;
                  }
                }
              }
              else if ((*(short *)(iVar5 + 0x620) == *(short *)(param_2 + 0x620)) &&
                      (*(int *)(iVar5 + 0x624) == *(int *)(param_2 + 0x624))) {
                if (pbVar16 == (byte *)0x0) goto LAB_100d3331;
                pbVar11 = *(byte **)(iVar5 + 0x61c);
                if (pbVar11 != (byte *)0x0) {
                  do {
                    bVar1 = *pbVar11;
                    bVar17 = bVar1 < *pbVar16;
                    if (bVar1 != *pbVar16) {
LAB_100d3324:
                      iVar9 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                      goto LAB_100d3329;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar11[1];
                    bVar17 = bVar1 < pbVar16[1];
                    if (bVar1 != pbVar16[1]) goto LAB_100d3324;
                    pbVar11 = pbVar11 + 2;
                    pbVar16 = pbVar16 + 2;
                  } while (bVar1 != 0);
                  iVar9 = 0;
LAB_100d3329:
                  if (iVar9 == 0) goto LAB_100d3331;
                }
              }
            }
          }
          else {
            iVar9 = FUN_100d0d10();
            if ((iVar9 != 0) && (*(int *)(param_2 + 0x2c4) == *(int *)(iVar5 + 0x2c4))) {
              if (*(int *)(param_2 + 0xf0) != 2) goto LAB_100d329e;
              if ((*(byte *)(*(int *)(param_2 + 800) + 0x44) & 1) == 0) {
                iVar9 = FUN_100ce5a0(param_2 + 0x220,iVar5 + 0x220);
                if (iVar9 != 0) {
                  iVar9 = *(int *)(iVar5 + 0x1e4);
                  goto LAB_100d3295;
                }
              }
              else {
                iVar9 = FUN_100ce5a0(param_2 + 0x250,iVar5 + 0x250);
                if (iVar9 != 0) {
                  iVar9 = *(int *)(iVar5 + 0x204);
LAB_100d3295:
                  if (iVar9 == 2) goto LAB_100d329e;
                }
              }
            }
          }
        }
      }
    }
LAB_100d370f:
    iVar5 = local_1c;
  } while (piVar6 != (int *)0x0);
  if (iVar5 != 0) {
    *param_3 = iVar5;
    return 1;
  }
  if (!bVar4) {
    return 0;
  }
  if (*(int *)(param_1 + 0x6e0) == 0) {
    return 0;
  }
  pcVar13 = "Found pending candidate for reuse and CURLOPT_PIPEWAIT is set\n";
LAB_100d3752:
  FUN_100d8ae0(param_1,pcVar13);
  *param_5 = 1;
  return 0;
}


/* END FUNCTION 0x100d2ed0 */
