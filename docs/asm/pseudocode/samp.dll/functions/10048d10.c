/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10048d10
 * Name: FUN_10048d10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x1004925f) */

char __thiscall
FUN_10048d10(int param_1,int param_2,int param_3,undefined4 param_4,undefined2 param_5,int *param_6,
            undefined4 param_7,undefined1 *param_8)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  short *psVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  short *psVar11;
  int *piVar12;
  int *piVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  char local_155;
  short *local_154;
  longlong local_150;
  undefined4 local_13c;
  undefined4 uStack_138;
  int local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101155c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_8 = 0;
  if ((1 < param_3) && (uVar16 = 0, param_2 != 0)) {
    local_155 = '\0';
    local_134 = FUN_1002e2b0();
    FUN_10043b70();
    cVar7 = FUN_10056450();
    if ((cVar7 != '\0') && (cVar7 = FUN_100568a0(param_2,param_3,param_2,&param_3), cVar7 == '\0'))
    {
      uVar16 = *(uint *)(param_1 + 0x3bb);
      uVar8 = param_3 * 8;
      *(int *)(param_1 + 0x3af) = *(int *)(param_1 + 0x3af) + 1;
      *(uint *)(param_1 + 0x3bb) = uVar16 + uVar8;
      *(uint *)(param_1 + 0x3bf) =
           *(int *)(param_1 + 0x3bf) + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar16,uVar8);
      ExceptionList = local_c;
      return '\0';
    }
    uVar3 = *(uint *)(param_1 + 0x3b3);
    uVar8 = param_3 * 8;
    *(uint *)(param_1 + 0x3b3) = uVar3 + uVar8;
    *(uint *)(param_1 + 0x3b7) =
         *(int *)(param_1 + 0x3b7) + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar3,uVar8);
    *(int *)(param_1 + 0x3ab) = *(int *)(param_1 + 0x3ab) + 1;
    FUN_1001f280(param_2,param_3,0);
    local_4 = 0;
    local_150 = FUN_1002e310();
    iVar15 = (int)((ulonglong)local_150 >> 0x20);
    FUN_10048800();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_10008110(&local_155);
    if (local_155 != '\0') {
      cVar7 = FUN_100477e0(local_120);
      if (cVar7 == '\0') {
LAB_10048fe1:
        local_4 = local_4 & 0xffffff00;
        FUN_10048830();
        local_4 = 0xffffffff;
        FUN_1001f390();
        ExceptionList = local_c;
        return '\0';
      }
      iVar9 = FUN_10045850();
      if (iVar9 != 0) {
        do {
          puVar10 = (ushort *)FUN_10045840(uVar16);
          iVar9 = FUN_10045840(uVar16);
          if (*(ushort *)(iVar9 + 2) < *puVar10) goto LAB_10048fe1;
          puVar10 = (ushort *)FUN_10045840(uVar16);
          iVar9 = FUN_10045840(uVar16);
          *(int *)(param_1 + 0x3c3) =
               *(int *)(param_1 + 0x3c3) + ((uint)*(ushort *)(iVar9 + 2) - (uint)*puVar10);
          puVar10 = (ushort *)FUN_10045840(uVar16);
          uVar14 = *puVar10;
          puVar10 = (ushort *)FUN_10045840(uVar16);
          if (*puVar10 <= uVar14) {
            do {
              iVar9 = FUN_10045840(uVar16);
              if (*(ushort *)(iVar9 + 2) < uVar14) break;
              *(int *)(param_1 + 0x3fb) = *(int *)(param_1 + 0x3fb) + 1;
              local_155 = '\x01';
              iVar9 = FUN_10048170(uVar14,(uint)local_150,iVar15);
              if ((*(int *)(param_1 + 0x42e) <= iVar15) &&
                 ((((*(int *)(param_1 + 0x42e) < iVar15 ||
                    (*(uint *)(param_1 + 0x42a) <= (uint)local_150)) && (iVar9 != -1)) &&
                  (iVar9 == *(int *)(param_1 + 0x432))))) {
                *(int *)(param_1 + 0x43e) = *(int *)(param_1 + 0x43e) + 1;
              }
              cVar7 = FUN_10043e20();
              if (cVar7 == '\0') {
                *(uint *)(param_1 + 0xb2) = (uint)local_150;
                *(int *)(param_1 + 0xb6) = iVar15;
              }
              else {
                *(undefined4 *)(param_1 + 0xb2) = 0;
                *(undefined4 *)(param_1 + 0xb6) = 0;
              }
              uVar14 = uVar14 + 1;
              puVar10 = (ushort *)FUN_10045840(uVar16);
            } while (*puVar10 <= uVar14);
          }
          uVar16 = uVar16 + 1;
          uVar8 = FUN_10045850();
        } while (uVar16 < uVar8);
      }
    }
    psVar11 = (short *)FUN_10045110(local_120,(uint)local_150,iVar15);
    if (psVar11 == (short *)0x0) {
      local_4 = local_4 & 0xffffff00;
      local_154 = psVar11;
      FUN_10048830();
      local_4 = 0xffffffff;
      FUN_1001f390();
      ExceptionList = local_c;
      return local_155;
    }
    do {
      uVar16 = 0;
      local_154 = psVar11;
      if (param_6[1] != 0) {
        local_13c = __alldiv(local_150,1000,0);
        do {
          (**(code **)(**(int **)(*param_6 + uVar16 * 4) + 0x24))
                    (psVar11,*(undefined4 *)(param_1 + 0x6c9),param_4,param_5,local_13c,0);
          uVar16 = uVar16 + 1;
        } while (uVar16 < (uint)param_6[1]);
      }
      iVar15 = *(int *)(psVar11 + 5);
      if (((iVar15 == 10) || (iVar15 == 9)) || (iVar15 == 8)) {
        FUN_100481c0(*psVar11,local_150);
      }
      if (*(char *)(param_1 + 0x419) != '\0') {
        FUN_100440c0(0x200);
        *(undefined2 *)(param_1 + 0x417) = 0;
        *(undefined1 *)(param_1 + 0x419) = 0;
      }
      uVar14 = *psVar11 - *(short *)(param_1 + 0x417);
      if (uVar14 == 0) {
        uVar16 = *(uint *)(param_1 + 0x40b);
        if (*(uint *)(param_1 + 0x40f) < uVar16) {
          iVar15 = *(int *)(param_1 + 0x413) - uVar16;
        }
        else {
          iVar15 = -uVar16;
        }
        if ((*(uint *)(param_1 + 0x40f) + iVar15 != 0) &&
           (iVar15 = *(int *)(param_1 + 0x40b) + 1, *(int *)(param_1 + 0x40b) = iVar15,
           iVar15 == *(int *)(param_1 + 0x413))) {
          *(undefined4 *)(param_1 + 0x40b) = 0;
        }
        *(short *)(param_1 + 0x417) = *(short *)(param_1 + 0x417) + 1;
LAB_10049230:
        while( true ) {
          uVar16 = *(uint *)(param_1 + 0x40b);
          if (*(uint *)(param_1 + 0x40f) < uVar16) {
            iVar15 = *(int *)(param_1 + 0x413) - uVar16;
          }
          else {
            iVar15 = -uVar16;
          }
          if ((*(uint *)(param_1 + 0x40f) + iVar15 == 0) ||
             (local_150 <=
              CONCAT44(*(undefined4 *)
                        (*(int *)(param_1 + 0x407) + 4 + *(int *)(param_1 + 0x40b) * 8),
                       *(undefined4 *)(*(int *)(param_1 + 0x407) + *(int *)(param_1 + 0x40b) * 8))))
          break;
          iVar15 = *(int *)(param_1 + 0x40b) + 1;
          *(int *)(param_1 + 0x40b) = iVar15;
          if (iVar15 == *(int *)(param_1 + 0x413)) {
            *(undefined4 *)(param_1 + 0x40b) = 0;
          }
          *(short *)(param_1 + 0x417) = *(short *)(param_1 + 0x417) + 1;
        }
        *(int *)(param_1 + 0x3cb) = *(int *)(param_1 + 0x3cb) + 1;
        iVar15 = *(int *)(param_1 + 0x3ef) + 1;
        *(int *)(param_1 + 0x3ef) = iVar15;
        if (1000 < (uint)(local_134 - *(int *)(param_1 + 0x3eb))) {
          *(int *)(param_1 + 0x3eb) = local_134;
          *(int *)(param_1 + 0x3f3) = iVar15;
          *(undefined4 *)(param_1 + 0x3ef) = 0;
        }
        lVar5 = local_150;
        if (0x200 < *(uint *)(param_1 + 0x413)) {
          uVar16 = *(uint *)(param_1 + 0x40b);
          if (*(uint *)(param_1 + 0x40f) < uVar16) {
            iVar15 = *(int *)(param_1 + 0x413) - uVar16;
          }
          else {
            iVar15 = -uVar16;
          }
          if ((*(uint *)(param_1 + 0x40f) + iVar15) * 3 < *(uint *)(param_1 + 0x413)) {
            FUN_10044010();
            lVar5 = local_150;
          }
        }
        local_150 = lVar5;
        if (*(int *)((int)psVar11 + 0x17) != 0) {
          FUN_100486b0(lVar5);
        }
        iVar15 = *(int *)(psVar11 + 5);
        if ((iVar15 == 10) || (iVar15 == 7)) {
          if (*(byte *)(psVar11 + 7) < 0x20) {
            cVar7 = FUN_10043ac0(*(undefined2 *)((int)psVar11 + 0xf),
                                 *(undefined2 *)(param_1 + 0x28b + (uint)*(byte *)(psVar11 + 7) * 2)
                                );
            if (cVar7 == '\0') {
              *(int *)(param_1 + 0x39f) = *(int *)(param_1 + 0x39f) + 1;
              if (*(int *)((int)psVar11 + 0x17) == 0) {
                *(short *)(param_1 + 0x28b + (uint)*(byte *)(psVar11 + 7) * 2) =
                     *(short *)((int)psVar11 + 0xf) + 1;
                FUN_1002e400(&local_154);
              }
              else {
                FUN_100481e0(psVar11,lVar5);
                local_154 = (short *)FUN_10048400(*(undefined2 *)((int)psVar11 + 0x11),lVar5);
                if (local_154 != (short *)0x0) {
                  *(short *)(param_1 + 0x28b + (uint)*(byte *)(local_154 + 7) * 2) =
                       *(short *)((int)local_154 + 0xf) + 1;
                  FUN_1002e400(&local_154);
                }
              }
              goto LAB_1004952d;
            }
            *(int *)(param_1 + 0x39b) = *(int *)(param_1 + 0x39b) + 1;
          }
          goto LAB_10049515;
        }
        if (*(int *)((int)psVar11 + 0x17) == 0) {
LAB_10049363:
          if (*(int *)(psVar11 + 5) == 9) {
            bVar2 = *(byte *)(psVar11 + 7);
            if (0x1f < bVar2) goto LAB_10049515;
            if (*(short *)(param_1 + 0x24b + (uint)bVar2 * 2) == *(short *)((int)psVar11 + 0xf)) {
              uStack_138 = CONCAT31(uStack_138._1_3_,bVar2);
              *(int *)(param_1 + 0x3a7) = *(int *)(param_1 + 0x3a7) + 1;
              FUN_1002e400(&local_154);
              psVar11 = (short *)(param_1 + 0x24b + (uint)bVar2 * 2);
              *psVar11 = *psVar11 + 1;
              psVar11 = (short *)(param_1 + 0x24b + (uint)bVar2 * 2);
              piVar13 = (int *)FUN_10045610(uStack_138);
              if ((piVar13 != (int *)0x0) && (*piVar13 != 0)) {
                while( true ) {
                  if (piVar13[1] != 0) {
                    piVar13[2] = piVar13[1];
                  }
                  bVar4 = false;
                  psVar6 = (short *)*piVar13;
                  if (*piVar13 < 1) break;
                  do {
                    local_154 = psVar6;
                    if (*(short *)(*(int *)piVar13[2] + 0xf) == *psVar11) {
                      local_13c = FUN_100459e0();
                      FUN_1002e400(&local_13c);
                      *psVar11 = *psVar11 + 1;
                      bVar4 = true;
                    }
                    else {
                      FUN_10045a40(0);
                    }
                    psVar6 = (short *)((int)local_154 + -1);
                  } while ((short *)((int)local_154 + -1) != (short *)0x0);
                  local_154 = (short *)0x0;
                  if ((!bVar4) || (*piVar13 == 0)) break;
                }
              }
            }
            else {
              *(int *)(param_1 + 0x3a3) = *(int *)(param_1 + 0x3a3) + 1;
              FUN_10047400(psVar11);
            }
          }
          else {
            FUN_1002e400(&local_154);
          }
        }
        else {
          if (iVar15 != 9) {
            *(undefined1 *)(psVar11 + 7) = 0xff;
          }
          FUN_100481e0(psVar11,lVar5);
          psVar11 = (short *)FUN_10048400(*(undefined2 *)((int)psVar11 + 0x11),lVar5);
          local_154 = psVar11;
          if (psVar11 != (short *)0x0) goto LAB_10049363;
        }
      }
      else {
        if (uVar14 < 0x8001) {
          uVar16 = *(uint *)(param_1 + 0x40b);
          piVar13 = (int *)(param_1 + 0x407);
          if (*(uint *)(param_1 + 0x40f) < uVar16) {
            iVar15 = *(int *)(param_1 + 0x413) - uVar16;
          }
          else {
            iVar15 = -uVar16;
          }
          uVar16 = (uint)uVar14;
          if (uVar16 < *(uint *)(param_1 + 0x40f) + iVar15) {
            uVar8 = uVar16 + *(int *)(param_1 + 0x40b);
            if (uVar8 < *(uint *)(param_1 + 0x413)) {
              piVar12 = (int *)(*piVar13 + uVar8 * 8);
            }
            else {
              piVar12 = (int *)(*piVar13 +
                               ((uVar16 - *(uint *)(param_1 + 0x413)) + *(int *)(param_1 + 0x40b)) *
                               8);
            }
            if (*piVar12 == 0 && piVar12[1] == 0) goto LAB_10049137;
            uVar8 = uVar16 + *(int *)(param_1 + 0x40b);
            if (uVar8 < *(uint *)(param_1 + 0x413)) {
              puVar1 = (undefined4 *)(*piVar13 + uVar8 * 8);
              *puVar1 = 0;
              puVar1[1] = 0;
            }
            else {
              puVar1 = (undefined4 *)
                       (*piVar13 +
                       ((uVar16 - *(uint *)(param_1 + 0x413)) + *(int *)(param_1 + 0x40b)) * 8);
              *puVar1 = 0;
              puVar1[1] = 0;
            }
          }
          else {
            while( true ) {
              uVar8 = *(uint *)(param_1 + 0x40b);
              if (*(uint *)(param_1 + 0x40f) < uVar8) {
                iVar15 = *(int *)(param_1 + 0x413) - uVar8;
              }
              else {
                iVar15 = -uVar8;
              }
              if (uVar16 <= *(uint *)(param_1 + 0x40f) + iVar15) break;
              uStack_128 = (ulonglong)*(uint *)(param_1 + 0x2d3) * 1000 + local_150;
              FUN_10043e80(&uStack_128);
            }
            uStack_130 = 0;
            uStack_12c = 0;
            FUN_10043e80(&uStack_130);
          }
          goto LAB_10049230;
        }
LAB_10049137:
        *(int *)(param_1 + 0x3d3) = *(int *)(param_1 + 0x3d3) + 1;
LAB_10049515:
        _free(*(void **)((int)psVar11 + 0x2f));
        FUN_1002e630(psVar11);
      }
LAB_1004952d:
      psVar11 = (short *)FUN_10045110(local_120,local_150);
    } while (psVar11 != (short *)0x0);
    *(int *)(param_1 + 0x6c9) = *(int *)(param_1 + 0x6c9) + 1;
    local_4 = local_4 & 0xffffff00;
    local_154 = psVar11;
    FUN_10048830();
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return '\x01';
}


/* END FUNCTION 0x10048d10 */
