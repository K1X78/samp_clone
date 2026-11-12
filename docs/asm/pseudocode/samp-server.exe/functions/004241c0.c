/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004241c0
 * Name: FUN_004241c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl
FUN_004241c0(int *param_1,byte *param_2,byte *param_3,byte *param_4,int param_5,char *param_6)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined3 extraout_var;
  uint uVar8;
  undefined3 extraout_var_00;
  short sVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  undefined2 uVar13;
  int iVar14;
  short *psVar15;
  short *psVar16;
  undefined4 *puVar17;
  longlong lVar18;
  int local_24;
  int local_20;
  int local_1c;
  short *local_18;
  
  iVar3 = param_5;
  iVar1 = *param_1;
  local_24 = 0;
  local_1c = 0;
  local_18 = (short *)0x0;
  bVar4 = false;
  param_6[0x18] = -1;
  param_6[0x19] = -1;
  param_6[0x1a] = -1;
  param_6[0x1b] = -1;
  param_6[0x28] = '\0';
  param_6[0x29] = '\0';
  param_6[0x2a] = '\0';
  param_6[0x2b] = '\0';
  if (param_5 == 0) {
LAB_004245ab:
    if ((param_3 == (byte *)0x0) && ((param_6[2] & 0x40U) != 0)) {
      *param_6 = '^';
      param_6[0x28] = '\0';
      param_6[0x29] = '\0';
      param_6[0x2a] = '\0';
      param_6[0x2b] = '\0';
      return 1;
    }
  }
  else {
    do {
      if (local_24 != 0) goto LAB_0042463a;
      psVar2 = *(short **)(param_5 + 4);
      if (psVar2 != (short *)0x0) {
        local_20 = 0;
        psVar15 = psVar2 + 4;
        if (0 < *psVar2) {
LAB_00424244:
          iVar12 = *(int *)(psVar15 + 6);
          psVar16 = psVar15;
          if (param_3 == (byte *)0x0) {
LAB_0042429e:
            iVar6 = local_1c + 1;
            if (local_1c == 0) {
              *(undefined4 *)(param_6 + 0x18) = *(undefined4 *)(psVar15 + 0xc);
              *(int *)(param_6 + 0x28) = iVar12;
              local_18 = psVar15;
            }
            puVar17 = *(undefined4 **)(iVar12 + 0x10);
            iVar14 = 0;
            local_1c = iVar6;
            if (0 < *(int *)(iVar12 + 0xc)) {
              do {
                iVar6 = FUN_00408450((byte *)*puVar17,param_4);
                if (iVar6 == 0) {
                  local_24 = local_24 + 1;
                  *(undefined4 *)(param_6 + 0x18) = *(undefined4 *)(psVar15 + 0xc);
                  *(int *)(param_6 + 0x28) = iVar12;
                  if (iVar14 == *(int *)(iVar12 + 8)) {
                    uVar13 = 0xffff;
                  }
                  else {
                    uVar13 = (undefined2)iVar14;
                  }
                  *(undefined2 *)(param_6 + 0x1c) = uVar13;
                  local_18 = psVar15;
                  if (local_20 < *psVar2 + -1) {
                    if ((*(byte *)((int)psVar15 + 0x4d) & 4) != 0) goto LAB_00424369;
                    puVar17 = *(undefined4 **)(psVar15 + 0x2c);
                    if (puVar17 != (undefined4 *)0x0) {
                      iVar12 = puVar17[1];
                      iVar6 = 0;
                      if (0 < iVar12) {
                        puVar17 = (undefined4 *)*puVar17;
                        goto LAB_00424350;
                      }
                    }
                  }
                  break;
                }
                iVar14 = iVar14 + 1;
                puVar17 = puVar17 + 6;
              } while (iVar14 < *(int *)(iVar12 + 0xc));
            }
          }
          else {
            pbVar10 = *(byte **)(psVar15 + 4);
            pbVar11 = param_3;
            if (pbVar10 == (byte *)0x0) {
              if ((*(byte **)(iVar12 + 4) != (byte *)0x0) &&
                 (iVar6 = FUN_00408450(*(byte **)(iVar12 + 4),param_3), iVar6 == 0)) {
                if (param_2 == (byte *)0x0) goto LAB_0042429e;
                iVar6 = FUN_0040fc30(iVar1);
                pbVar10 = *(byte **)(iVar6 * 0x10 + *(int *)(iVar1 + 8));
                pbVar11 = param_2;
                goto LAB_00424291;
              }
            }
            else {
LAB_00424291:
              iVar6 = FUN_00408450(pbVar10,pbVar11);
              if (iVar6 == 0) goto LAB_0042429e;
            }
          }
          goto LAB_00424375;
        }
      }
LAB_00424390:
      if ((param_2 == (byte *)0x0) && (param_3 != (byte *)0x0)) {
        if (local_24 == 0) {
          iVar12 = 0;
          if (param_1[0x6b] != 0) {
            iVar6 = param_1[0x6e];
            if (((char)iVar6 == 'j') || (iVar14 = FUN_00408450(&DAT_004b765c,param_3), iVar14 != 0))
            {
              if (((char)iVar6 == 'i') || (iVar6 = FUN_00408450(&DAT_004b7660,param_3), iVar6 != 0))
              goto LAB_0042450a;
              param_6[0x18] = '\0';
              param_6[0x19] = '\0';
              param_6[0x1a] = '\0';
              param_6[0x1b] = '\0';
            }
            else {
              param_6[0x18] = '\x01';
              param_6[0x19] = '\0';
              param_6[0x1a] = '\0';
              param_6[0x1b] = '\0';
            }
            iVar6 = param_1[0x6b];
            if (iVar6 != 0) {
              iVar14 = *(int *)(iVar6 + 0xc);
              local_1c = local_1c + 1;
              if (iVar14 < 1) {
LAB_00424466:
                bVar5 = FUN_0040e880();
                if (CONCAT31(extraout_var,bVar5) != 0) {
                  iVar12 = -1;
                }
                if (iVar14 <= iVar12) goto LAB_0042450a;
              }
              else {
                puVar17 = *(undefined4 **)(iVar6 + 0x10);
                do {
                  iVar7 = FUN_00408450((byte *)*puVar17,param_4);
                  if (iVar7 == 0) {
                    if (iVar12 == *(int *)(iVar6 + 8)) {
                      iVar12 = -1;
                    }
                    break;
                  }
                  iVar12 = iVar12 + 1;
                  puVar17 = puVar17 + 6;
                } while (iVar12 < iVar14);
                if (iVar14 <= iVar12) goto LAB_00424466;
              }
              local_24 = 1;
              uVar13 = (undefined2)iVar12;
              if (iVar12 < 0) {
                param_6[1] = 'd';
                *(undefined2 *)(param_6 + 0x1c) = uVar13;
                *(int *)(param_6 + 0x28) = iVar6;
                bVar4 = true;
              }
              else if (*(int *)(param_6 + 0x18) == 0) {
                if (iVar12 < 0x20) {
                  uVar8 = 1 << ((byte)iVar12 & 0x1f);
                }
                else {
                  uVar8 = 0xffffffff;
                }
                param_1[0x6c] = param_1[0x6c] | uVar8;
                *(undefined2 *)(param_6 + 0x1c) = uVar13;
                *(int *)(param_6 + 0x28) = iVar6;
                bVar4 = true;
              }
              else {
                if (iVar12 < 0x20) {
                  uVar8 = 1 << ((byte)iVar12 & 0x1f);
                }
                else {
                  uVar8 = 0xffffffff;
                }
                param_1[0x6d] = param_1[0x6d] | uVar8;
                *(undefined2 *)(param_6 + 0x1c) = uVar13;
                *(int *)(param_6 + 0x28) = iVar6;
                bVar4 = true;
              }
              goto LAB_00424593;
            }
          }
LAB_0042450a:
          if ((local_1c == 1) && (bVar5 = FUN_0040e880(), CONCAT31(extraout_var_00,bVar5) != 0)) {
            local_24 = 1;
            param_6[0x1c] = -1;
            param_6[0x1d] = -1;
            param_6[1] = 'd';
          }
          else {
            if ((*(int *)(param_5 + 8) != 0) && (param_3 == (byte *)0x0)) {
              iVar12 = **(int **)(param_5 + 8);
              iVar6 = 0;
              if (0 < iVar12) {
                puVar17 = (undefined4 *)(*(int *)(*(int *)(param_5 + 8) + 0xc) + 4);
                do {
                  if (((byte *)*puVar17 != (byte *)0x0) &&
                     (iVar14 = FUN_00408450((byte *)*puVar17,param_4), iVar14 == 0)) {
                    if ((*(char *)(param_5 + 0x14) == '\0') &&
                       ((*(byte *)(*(int *)(*(int *)(*(int *)(param_5 + 8) + 0xc) + iVar6 * 0x14) +
                                  2) & 2) != 0)) {
                      FUN_00418b00((undefined **)"misuse of aliased aggregate %s");
                      return 2;
                    }
                    FUN_004240a0(param_1,"",*(int *)(param_5 + 8),(undefined4 *)param_6);
                    goto LAB_00424743;
                  }
                  iVar6 = iVar6 + 1;
                  puVar17 = puVar17 + 5;
                } while (iVar6 < iVar12);
                if (local_24 != 0) goto LAB_00424593;
              }
            }
            param_5 = *(int *)(param_5 + 0x20);
          }
        }
      }
      else if (local_24 == 0) goto LAB_0042450a;
LAB_00424593:
    } while (param_5 != 0);
    if (local_24 == 0) goto LAB_004245ab;
LAB_0042463a:
    if (local_24 == 1) goto LAB_004246b6;
  }
  if (param_2 == (byte *)0x0) {
    if (param_3 == (byte *)0x0) {
      FUN_00418b00((undefined **)"%s: %s");
    }
    else {
      FUN_00418b00((undefined **)"%s: %s.%s");
    }
  }
  else {
    FUN_00418b00((undefined **)"%s: %s.%s.%s");
  }
  *(undefined1 *)((int)param_1 + 0x12) = 1;
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
LAB_004246b6:
  sVar9 = *(short *)(param_6 + 0x1c);
  if ((-1 < sVar9) && (local_18 != (short *)0x0)) {
    if (0x3f < sVar9) {
      sVar9 = 0x3f;
    }
    lVar18 = __allshl((byte)sVar9,0);
    *(uint *)(local_18 + 0x14) = *(uint *)(local_18 + 0x14) | (uint)lVar18;
    *(uint *)(local_18 + 0x16) = *(uint *)(local_18 + 0x16) | (uint)((ulonglong)lVar18 >> 0x20);
  }
  FUN_004158d0(iVar1,*(int *)(param_6 + 8));
  iVar12 = *(int *)(param_6 + 0xc);
  param_6[8] = '\0';
  param_6[9] = '\0';
  param_6[10] = '\0';
  param_6[0xb] = '\0';
  FUN_004158d0(iVar1,iVar12);
  param_6[0xc] = '\0';
  param_6[0xd] = '\0';
  param_6[0xe] = '\0';
  param_6[0xf] = '\0';
  *param_6 = (!bVar4 - 1U & 0xa4) + 0x98;
  if (local_24 != 1) {
    return 2;
  }
LAB_00424743:
  FUN_0041aaa0(param_1,param_6,*(short **)(param_5 + 4));
  *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
  while (iVar3 != param_5) {
    iVar3 = *(int *)(iVar3 + 0x20);
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
  }
  return 1;
  while( true ) {
    iVar6 = iVar6 + 1;
    puVar17 = puVar17 + 2;
    if (iVar12 <= iVar6) break;
LAB_00424350:
    iVar14 = FUN_00408450((byte *)*puVar17,param_4);
    if (iVar14 == 0) goto LAB_00424369;
  }
LAB_00424375:
  local_20 = local_20 + 1;
  psVar15 = psVar16 + 0x1c;
  if (*psVar2 <= local_20) goto LAB_00424390;
  goto LAB_00424244;
LAB_00424369:
  local_20 = local_20 + 1;
  psVar16 = psVar15 + 0x1c;
  goto LAB_00424375;
}


/* END FUNCTION 0x004241c0 */
