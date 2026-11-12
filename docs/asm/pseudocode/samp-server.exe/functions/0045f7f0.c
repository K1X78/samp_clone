/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045f7f0
 * Name: FUN_0045f7f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char __thiscall
FUN_0045f7f0(void *this,byte *param_1,uint param_2,undefined4 param_3,undefined2 param_4,
            int *param_5,undefined4 param_6,undefined1 *param_7)

{
  void *this_00;
  short *psVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  char local_15d;
  ushort *local_15c;
  undefined8 local_158;
  int local_150 [3];
  uint local_144;
  undefined4 local_140;
  int local_13c;
  uint local_138;
  byte bStack_134;
  undefined3 uStack_133;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  int local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1276;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_7 = 0;
  if ((1 < (int)param_2) && (param_1 != (byte *)0x0)) {
    local_15d = '\0';
    local_144 = FUN_00491de0();
    local_138 = FUN_00491df0();
    local_15c = (ushort *)FUN_00491e00();
    uVar15 = FUN_0044e910();
    local_13c = (int)uVar15;
    FUN_0045b2d0((int)this);
    cVar3 = FUN_00463810((int)this + 0x484);
    if ((cVar3 != '\0') &&
       (uVar6 = FUN_00463c60((void *)((int)this + 0x484),param_1,param_2,param_1,&param_2),
       (char)uVar6 == '\0')) {
      uVar14 = *(uint *)((int)this + 0x3d0);
      uVar7 = param_2 * 8;
      *(int *)((int)this + 0x3c4) = *(int *)((int)this + 0x3c4) + 1;
      *(uint *)((int)this + 0x3d0) = uVar14 + uVar7;
      *(uint *)((int)this + 0x3d4) =
           *(int *)((int)this + 0x3d4) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar14,uVar7);
      ExceptionList = local_c;
      return '\0';
    }
    uVar7 = *(uint *)((int)this + 0x3c8);
    uVar14 = param_2 * 8;
    *(uint *)((int)this + 0x3c8) = uVar7 + uVar14;
    *(uint *)((int)this + 0x3cc) =
         *(int *)((int)this + 0x3cc) + ((int)uVar14 >> 0x1f) + (uint)CARRY4(uVar7,uVar14);
    *(int *)((int)this + 0x3c0) = *(int *)((int)this + 0x3c0) + 1;
    FUN_0044d930(local_120,(undefined4 *)param_1,param_2,'\0');
    local_4 = 0;
    local_158 = FUN_0044e970();
    iVar13 = (int)((ulonglong)local_158 >> 0x20);
    FUN_0045f2e0(local_150);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_0044d840(local_120,&local_15d);
    if (local_15d != '\0') {
      uVar6 = FUN_0045e2e0(local_150,local_120);
      if ((char)uVar6 == '\0') {
LAB_0045fb58:
        local_4 = local_4 & 0xffffff00;
        FUN_0045f310(local_150);
        local_4 = 0xffffffff;
        FUN_0044d9b0((int)local_120);
        ExceptionList = local_c;
        return '\0';
      }
      uVar14 = 0;
      iVar8 = FUN_0045b300((int)local_150);
      if (iVar8 != 0) {
        do {
          puVar9 = (ushort *)FUN_0045b2f0(local_150,uVar14);
          iVar8 = FUN_0045b2f0(local_150,uVar14);
          if (*(ushort *)(iVar8 + 2) < *puVar9) goto LAB_0045fb58;
          puVar9 = (ushort *)FUN_0045b2f0(local_150,uVar14);
          iVar8 = FUN_0045b2f0(local_150,uVar14);
          *(int *)((int)this + 0x3d8) =
               *(int *)((int)this + 0x3d8) + ((uint)*(ushort *)(iVar8 + 2) - (uint)*puVar9);
          puVar9 = (ushort *)FUN_0045b2f0(local_150,uVar14);
          iVar8 = FUN_0045b2f0(local_150,uVar14);
          uVar7 = local_144;
          if ((int)local_144 < (int)((uint)*(ushort *)(iVar8 + 2) - (uint)*puVar9)) {
            FUN_0045b2f0(local_150,uVar14);
            FUN_0045b2f0(local_150,uVar14);
            FUN_0044ef80(&param_3,'\x01');
            FUN_00491fa0("[warning] client exceeded \'messageholelimit\' (1) %s (%d) Limit: %d");
            *param_7 = 1;
            goto LAB_00460154;
          }
          puVar9 = (ushort *)FUN_0045b2f0(local_150,uVar14);
          uVar5 = *puVar9;
          uVar7 = CONCAT22((short)(uVar7 >> 0x10),uVar5);
          puVar9 = (ushort *)FUN_0045b2f0(local_150,uVar14);
          if (*puVar9 <= uVar5) {
            do {
              iVar8 = FUN_0045b2f0(local_150,uVar14);
              if (*(ushort *)(iVar8 + 2) < (ushort)uVar7) break;
              local_15d = '\x01';
              *(int *)((int)this + 0x414) = *(int *)((int)this + 0x414) + 1;
              iVar8 = FUN_0045ec50(this,uVar7);
              if ((*(int *)((int)this + 0x44c) <= iVar13) &&
                 ((((*(int *)((int)this + 0x44c) < iVar13 ||
                    (*(uint *)((int)this + 0x448) <= (int *)local_158)) && (iVar8 != -1)) &&
                  (iVar8 == *(int *)((int)this + 0x450))))) {
                *(int *)((int)this + 0x45c) = *(int *)((int)this + 0x45c) + 1;
              }
              bVar4 = FUN_0045b3b0((int)this + 0x40);
              if (bVar4) {
                *(undefined4 *)((int)this + 0xbc) = 0;
                uVar6 = 0;
              }
              else {
                *(int *)((int)this + 0xbc) = iVar13;
                uVar6 = (int *)local_158;
              }
              *(undefined4 *)((int)this + 0xb8) = uVar6;
              uVar7 = uVar7 + 1;
              puVar9 = (ushort *)FUN_0045b2f0(local_150,uVar14);
            } while (*puVar9 <= (ushort)uVar7);
          }
          if (1000 < (uint)(local_13c - *(int *)((int)this + 0x410))) {
            *(int *)((int)this + 0x410) = local_13c;
            *(undefined4 *)((int)this + 0x418) = *(undefined4 *)((int)this + 0x414);
            *(undefined4 *)((int)this + 0x414) = 0;
          }
          if (local_15c < *(ushort **)((int)this + 0x418)) {
            FUN_0044ef80(&param_3,'\x01');
            FUN_00491fa0("[warning] client exceeded \'ackslimit\' %s (%d) Limit: %d/sec");
            *param_7 = 1;
            goto LAB_00460154;
          }
          uVar14 = uVar14 + 1;
          uVar7 = FUN_0045b300((int)local_150);
        } while (uVar14 < uVar7);
      }
    }
    puVar9 = (ushort *)FUN_0045bfb0(this,local_120,(uint)(int *)local_158,iVar13);
    if (puVar9 == (ushort *)0x0) {
      local_4 = local_4 & 0xffffff00;
      local_15c = puVar9;
      FUN_0045f310(local_150);
      local_4 = 0xffffffff;
      FUN_0044d9b0((int)local_120);
      ExceptionList = local_c;
      return local_15d;
    }
    do {
      uVar14 = 0;
      local_15c = puVar9;
      if (param_5[1] != 0) {
        uVar15 = __alldiv((uint)(int *)local_158,local_158._4_4_,1000,0);
        local_140 = (undefined4)uVar15;
        do {
          (**(code **)(**(int **)(*param_5 + uVar14 * 4) + 0x24))
                    (puVar9,*(undefined4 *)((int)this + 0x6fc),param_3,param_4,local_140,0);
          uVar14 = uVar14 + 1;
        } while (uVar14 < (uint)param_5[1]);
      }
      iVar13 = *(int *)(puVar9 + 6);
      if (((iVar13 == 10) || (iVar13 == 9)) || (iVar13 == 8)) {
        FUN_0045eca0(this,*puVar9);
      }
      if (*(char *)((int)this + 0x436) != '\0') {
        FUN_0045b5b0((void *)((int)this + 0x424),0x200);
        *(undefined2 *)((int)this + 0x434) = 0;
        *(undefined1 *)((int)this + 0x436) = 0;
      }
      uVar5 = *puVar9 - *(short *)((int)this + 0x434);
      if (((int)local_144 < (int)(short)uVar5) || ((int)(short)uVar5 < (int)-local_144)) {
        FUN_0044ef80(&param_3,'\x01');
        FUN_00491fa0("[warning] client exceeded \'messageholelimit\' (2) %s (%d) Limit: %d");
        *param_7 = 1;
        goto LAB_00460154;
      }
      if (uVar5 == 0) {
        uVar14 = *(uint *)((int)this + 0x428);
        if (*(uint *)((int)this + 0x42c) < uVar14) {
          iVar13 = *(int *)((int)this + 0x430) - uVar14;
        }
        else {
          iVar13 = -uVar14;
        }
        if ((*(uint *)((int)this + 0x42c) + iVar13 != 0) &&
           (iVar13 = *(int *)((int)this + 0x428) + 1, *(int *)((int)this + 0x428) = iVar13,
           iVar13 == *(int *)((int)this + 0x430))) {
          *(undefined4 *)((int)this + 0x428) = 0;
        }
        *(short *)((int)this + 0x434) = *(short *)((int)this + 0x434) + 1;
LAB_0045fe00:
        while( true ) {
          uVar14 = *(uint *)((int)this + 0x428);
          if (*(uint *)((int)this + 0x42c) < uVar14) {
            iVar13 = *(int *)((int)this + 0x430) - uVar14;
          }
          else {
            iVar13 = -uVar14;
          }
          if (*(uint *)((int)this + 0x42c) + iVar13 == 0) break;
          iVar13 = *(int *)((int)this + 0x424);
          iVar8 = *(int *)(iVar13 + 4 + *(int *)((int)this + 0x428) * 8);
          if (((int)local_158._4_4_ < iVar8) ||
             (((int)local_158._4_4_ <= iVar8 &&
              ((int *)local_158 <= *(uint *)(iVar13 + *(int *)((int)this + 0x428) * 8))))) break;
          iVar13 = *(int *)((int)this + 0x428) + 1;
          *(int *)((int)this + 0x428) = iVar13;
          if (iVar13 == *(int *)((int)this + 0x430)) {
            *(undefined4 *)((int)this + 0x428) = 0;
          }
          *(short *)((int)this + 0x434) = *(short *)((int)this + 0x434) + 1;
        }
        *(int *)((int)this + 0x3e0) = *(int *)((int)this + 0x3e0) + 1;
        iVar13 = *(int *)((int)this + 0x408) + 1;
        *(int *)((int)this + 0x408) = iVar13;
        if (1000 < (uint)(local_13c - *(int *)((int)this + 0x404))) {
          *(int *)((int)this + 0x404) = local_13c;
          *(int *)((int)this + 0x40c) = iVar13;
          *(undefined4 *)((int)this + 0x408) = 0;
        }
        if (local_138 < *(uint *)((int)this + 0x40c)) {
          FUN_0044ef80(&param_3,'\x01');
          FUN_00491fa0("[warning] client exceeded \'messageslimit\' %s (%d) Limit: %d/sec");
          *param_7 = 1;
          goto LAB_00460154;
        }
        if (0x200 < *(uint *)((int)this + 0x430)) {
          uVar14 = *(uint *)((int)this + 0x428);
          if (*(uint *)((int)this + 0x42c) < uVar14) {
            iVar13 = *(int *)((int)this + 0x430) - uVar14;
          }
          else {
            iVar13 = -uVar14;
          }
          if ((*(uint *)((int)this + 0x42c) + iVar13) * 3 < *(uint *)((int)this + 0x430)) {
            FUN_0045b500((int *)((int)this + 0x424));
          }
        }
        piVar11 = (int *)local_158;
        uVar14 = local_158._4_4_;
        if (*(int *)(puVar9 + 0xe) != 0) {
          FUN_0045f190(this,(uint)(int *)local_158,local_158._4_4_);
        }
        iVar13 = *(int *)(puVar9 + 6);
        if ((iVar13 == 10) || (iVar13 == 7)) {
          if ((byte)puVar9[8] < 0x20) {
            uVar6 = FUN_0045b230(puVar9[9],
                                 *(ushort *)((int)this + (uint)(byte)puVar9[8] * 2 + 0x294));
            if ((char)uVar6 == '\0') {
              *(int *)((int)this + 0x3b4) = *(int *)((int)this + 0x3b4) + 1;
              if (*(int *)(puVar9 + 0xe) == 0) {
                *(ushort *)((int)this + (uint)(byte)puVar9[8] * 2 + 0x294) = puVar9[9] + 1;
                FUN_0044e2a0((void *)((int)this + 0xc),&local_15c);
              }
              else {
                FUN_0045ecc0(this,(int)puVar9,piVar11,uVar14);
                local_15c = FUN_0045eee0(this,(void *)(uint)puVar9[10],(uint)piVar11,uVar14);
                if (local_15c != (ushort *)0x0) {
                  *(ushort *)((int)this + (uint)(byte)local_15c[8] * 2 + 0x294) = local_15c[9] + 1;
                  FUN_0044e2a0((void *)((int)this + 0xc),&local_15c);
                }
              }
              goto LAB_0046012a;
            }
            *(int *)((int)this + 0x3b0) = *(int *)((int)this + 0x3b0) + 1;
          }
          goto LAB_00460112;
        }
        if (*(int *)(puVar9 + 0xe) == 0) {
LAB_0045ff43:
          if (*(int *)(puVar9 + 6) == 9) {
            bVar2 = (byte)puVar9[8];
            if (0x1f < bVar2) goto LAB_00460112;
            if (*(ushort *)((int)this + (uint)bVar2 * 2 + 0x254) == puVar9[9]) {
              _bStack_134 = CONCAT31(uStack_133,bVar2);
              *(int *)((int)this + 0x3bc) = *(int *)((int)this + 0x3bc) + 1;
              FUN_0044e2a0((void *)((int)this + 0xc),&local_15c);
              psVar1 = (short *)((int)this + (uint)bVar2 * 2 + 0x254);
              *psVar1 = *psVar1 + 1;
              psVar1 = (short *)((int)this + (uint)bVar2 * 2 + 0x254);
              piVar11 = (int *)FUN_0045c470(this,(byte)_bStack_134);
              if ((piVar11 != (int *)0x0) && (*piVar11 != 0)) {
                while( true ) {
                  if (piVar11[1] != 0) {
                    piVar11[2] = piVar11[1];
                  }
                  bVar4 = false;
                  puVar9 = (ushort *)*piVar11;
                  if (*piVar11 < 1) break;
                  do {
                    local_15c = puVar9;
                    if (*(short *)(*(int *)piVar11[2] + 0x12) == *psVar1) {
                      local_140 = FUN_0045c720(piVar11);
                      FUN_0044e2a0((void *)((int)this + 0xc),&local_140);
                      *psVar1 = *psVar1 + 1;
                      bVar4 = true;
                    }
                    else {
                      FUN_0045c780(piVar11);
                    }
                    puVar9 = (ushort *)((int)local_15c + -1);
                  } while ((ushort *)((int)local_15c + -1) != (ushort *)0x0);
                  local_15c = (ushort *)0x0;
                  if ((!bVar4) || (*piVar11 == 0)) break;
                }
              }
            }
            else {
              *(int *)((int)this + 0x3b8) = *(int *)((int)this + 0x3b8) + 1;
              puVar12 = (uint *)FUN_0045c470(this,(byte)puVar9[8]);
              if ((puVar12 != (uint *)0x0) && (local_144 < *puVar12)) {
                FUN_0044ef80(&param_3,'\x01');
                FUN_00491fa0(
                            "[warning] Too many out-of-order messages from player %s (%d) Limit: %u (messageholelimit)"
                            );
                *param_7 = 1;
                goto LAB_00460154;
              }
              FUN_0045def0(this,(int)puVar9);
            }
          }
          else {
            FUN_0044e2a0((void *)((int)this + 0xc),&local_15c);
          }
        }
        else {
          if (iVar13 != 9) {
            *(undefined1 *)(puVar9 + 8) = 0xff;
          }
          FUN_0045ecc0(this,(int)puVar9,piVar11,uVar14);
          puVar9 = FUN_0045eee0(this,(void *)(uint)puVar9[10],(uint)piVar11,uVar14);
          local_15c = puVar9;
          if (puVar9 != (ushort *)0x0) goto LAB_0045ff43;
        }
      }
      else {
        if (uVar5 < 0x8001) {
          uVar14 = *(uint *)((int)this + 0x428);
          this_00 = (void *)((int)this + 0x424);
          if (*(uint *)((int)this + 0x42c) < uVar14) {
            iVar13 = *(int *)((int)this + 0x430) - uVar14;
          }
          else {
            iVar13 = -uVar14;
          }
          uVar14 = (uint)uVar5;
          if (uVar14 < *(uint *)((int)this + 0x42c) + iVar13) {
            piVar11 = (int *)FUN_0045b4d0(this_00,uVar14);
            if (*piVar11 == 0 && piVar11[1] == 0) goto LAB_0045fd41;
            puVar10 = (undefined4 *)FUN_0045b4d0(this_00,uVar14);
            *puVar10 = 0;
            puVar10[1] = 0;
          }
          else {
            while( true ) {
              uVar7 = *(uint *)((int)this + 0x428);
              if (*(uint *)((int)this + 0x42c) < uVar7) {
                iVar13 = *(int *)((int)this + 0x430) - uVar7;
              }
              else {
                iVar13 = -uVar7;
              }
              if (uVar14 <= *(uint *)((int)this + 0x42c) + iVar13) break;
              uStack_128 = (ulonglong)*(uint *)((int)this + 0x2e0) * 1000 + local_158;
              FUN_0045b3f0(this_00,(undefined4 *)&uStack_128);
            }
            uStack_130 = 0;
            uStack_12c = 0;
            FUN_0045b3f0(this_00,&uStack_130);
          }
          goto LAB_0045fe00;
        }
LAB_0045fd41:
        *(int *)((int)this + 1000) = *(int *)((int)this + 1000) + 1;
LAB_00460112:
        _free(*(void **)(puVar9 + 0x1a));
        FUN_0044eb60((void *)((int)this + 0x728),(int)puVar9);
      }
LAB_0046012a:
      puVar9 = (ushort *)FUN_0045bfb0(this,local_120,(uint)(int *)local_158,local_158._4_4_);
    } while (puVar9 != (ushort *)0x0);
    *(int *)((int)this + 0x6fc) = *(int *)((int)this + 0x6fc) + 1;
    local_15c = puVar9;
LAB_00460154:
    local_4 = local_4 & 0xffffff00;
    FUN_0045f310(local_150);
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return '\x01';
}


/* END FUNCTION 0x0045f7f0 */
