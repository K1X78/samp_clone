/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0043b030
 * Name: FUN_0043b030
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0043b030(int *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  uint *puVar3;
  char cVar4;
  ushort uVar5;
  uint *this;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  byte bVar10;
  byte bVar11;
  undefined1 uVar12;
  bool bVar13;
  ushort uVar14;
  int iVar15;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint uVar16;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  int *piVar17;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  byte *pbVar18;
  undefined4 *puVar19;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  char *pcVar20;
  undefined3 extraout_var_08;
  undefined4 *puVar21;
  undefined3 extraout_var_09;
  undefined4 uVar22;
  uint uVar23;
  byte bVar24;
  void *this_00;
  uint uVar25;
  int iVar26;
  int extraout_ECX;
  void *pvVar27;
  uint *puVar28;
  int *piVar29;
  int iVar30;
  int iVar31;
  int extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  undefined8 *puVar32;
  float10 fVar33;
  longlong lVar34;
  undefined8 uVar35;
  ulonglong uVar36;
  undefined4 *local_118;
  int local_110;
  int local_10c;
  uint *local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  uint *puStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  undefined4 *puStack_c4;
  uint uStack_c0;
  undefined4 *puStack_bc;
  int iStack_b8;
  uint uStack_b4;
  int iStack_b0;
  byte *pbStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  byte *pbStack_98;
  byte *pbStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  int iStack_80;
  uint local_3c;
  uint *puStack_38;
  char local_31;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint uStack_20;
  uint local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  longlong lStack_10;
  
  local_28 = param_1[5];
  this = (uint *)*param_1;
  local_110 = param_1[0x13];
  local_3c = CONCAT31(local_3c._1_3_,*(undefined1 *)(*(int *)(this[2] + 0xc) + 0x49));
  local_118 = (undefined4 *)0x0;
  local_31 = '\0';
  local_30 = 0;
  local_108 = (uint *)0x0;
  local_2c = 0;
  local_24 = 0;
  FUN_0040d860();
  if (param_1[0x16] == 7) {
LAB_0043b52e:
    *(undefined1 *)((int)this + 0x1e) = 1;
    FUN_0041db50((undefined **)"out of memory");
    local_118 = (undefined4 *)0x7;
  }
  else {
    param_1[0x16] = 0;
    param_1[0xb] = 0;
    this[0x6a] = 0;
    if (this[0x38] == 0) {
      local_10c = param_1[0x15];
      local_1c = (uint)(this[0x42] != 0);
LAB_0043b0d7:
      if (*(char *)((int)this + 0x1e) != '\0') goto LAB_0043b52e;
      pbVar18 = (byte *)(local_28 + local_10c * 0x14);
      if (local_1c != 0) {
        if (this[0x44] == local_30) {
          iVar15 = (*(code *)this[0x42])();
          if (iVar15 != 0) {
            local_118 = (undefined4 *)0x9;
            goto LAB_0043b387;
          }
          local_30 = 0;
        }
        local_30 = local_30 + 1;
      }
      if ((pbVar18[2] & 2) != 0) {
        local_108 = (uint *)(local_110 + *(int *)(pbVar18 + 8) * 0x28);
        FUN_0040d1e0();
        *(undefined2 *)(local_108 + 7) = 4;
      }
      iVar15 = local_24;
      uVar36 = uStack_100;
      if (0x90 < *pbVar18 - 1) goto LAB_0043fa8c;
      uVar23 = (uint)(uint *)uStack_100;
      bVar10 = (byte)local_3c;
      switch(*pbVar18) {
      case 1:
        if (this[0x38] == 0) {
          local_10c = *(int *)(pbVar18 + 8) + -1;
          break;
        }
        goto LAB_0043fc71;
      case 2:
        piVar17 = (int *)(local_110 + *(int *)(pbVar18 + 4) * 0x28);
        *piVar17 = local_10c;
        *(undefined2 *)(piVar17 + 7) = 4;
        piVar17[1] = local_10c >> 0x1f;
        local_10c = *(int *)(pbVar18 + 8) + -1;
        break;
      case 3:
        local_10c = *(int *)(local_110 + *(int *)(pbVar18 + 4) * 0x28);
        break;
      case 4:
        iVar15 = *(int *)(local_110 + *(int *)(pbVar18 + 4) * 0x28);
        piVar17 = (int *)(local_110 + *(int *)(pbVar18 + 4) * 0x28);
        *(undefined2 *)(piVar17 + 7) = 4;
        uStack_100 = CONCAT44(uStack_100._4_4_,iVar15);
        *piVar17 = local_10c;
        piVar17[1] = local_10c >> 0x1f;
        local_10c = iVar15;
        uVar36 = uStack_100;
        break;
      case 5:
        if ((*(byte *)(local_110 + 0x1c + *(int *)(pbVar18 + 0xc) * 0x28) & 1) != 0)
        goto LAB_0043b21a;
        break;
      case 6:
LAB_0043b21a:
        if ((*(int *)(pbVar18 + 4) != 0) || (param_1[0x37] == 0)) {
          param_1[0x16] = *(int *)(pbVar18 + 4);
          *(byte *)(param_1 + 0xe) = pbVar18[8];
          param_1[0x15] = local_10c;
          if (*(int *)(pbVar18 + 0x10) == 0) {
            if (param_1[0x16] != 0) {
              FUN_00418ab0(*(undefined4 *)(pbVar18 + 4),
                           (undefined **)"constraint failed at %d in [%s]");
            }
          }
          else {
            FUN_0041db50((undefined **)&DAT_004b23ac);
            FUN_00418ab0(*(undefined4 *)(pbVar18 + 4),(undefined **)"abort at %d in [%s]: %s");
          }
          iVar15 = FUN_0042dd20(param_1);
          if (iVar15 == 5) {
LAB_0043fbf0:
            iVar15 = 5;
            param_1[0x16] = 5;
          }
          else {
            iVar15 = (-(uint)(param_1[0x16] != 0) & 0xffffff9c) + 0x65;
          }
          goto LAB_0043b3e3;
        }
        param_1[0x37] = *(int *)(param_1[0x37] + 0x3c);
        param_1[0x38] = param_1[0x38] + -1;
        FUN_0040dcb0(param_1[0x1b]);
        local_10c = FUN_0040d7f0();
        if (*(int *)(pbVar18 + 8) == 4) {
          local_10c = *(int *)(param_1[5] + 8 + local_10c * 0x14) + -1;
        }
        local_28 = param_1[5];
        local_110 = param_1[0x13];
        uVar36 = uStack_100;
        break;
      case 7:
        uVar23 = *(uint *)(pbVar18 + 4);
        *local_108 = uVar23;
        local_108[1] = (int)uVar23 >> 0x1f;
        break;
      case 8:
        puVar28 = *(uint **)(pbVar18 + 0x10);
        *local_108 = *puVar28;
        local_108[1] = puVar28[1];
        break;
      case 9:
        goto LAB_0043b401;
      case 10:
LAB_0043e211:
        *(undefined2 *)(local_108 + 7) = 1;
        uVar36 = uStack_100;
        break;
      case 0xb:
        FUN_0042e460(*(void **)(pbVar18 + 0x10),*(void **)(pbVar18 + 4),'\0');
        *(char *)((int)local_108 + 0x1f) = (char)local_3c;
        uVar36 = uStack_100;
        break;
      case 0xc:
        piVar17 = (int *)(param_1[0xf] + -0x28 + *(int *)(pbVar18 + 4) * 0x28);
        uStack_100 = CONCAT44(uStack_100._4_4_,piVar17);
        bVar13 = FUN_0040d390(piVar17);
        if (CONCAT31(extraout_var_00,bVar13) != 0) goto LAB_0043b368;
        FUN_0040d3c0(piVar17,0x800);
        uVar36 = uStack_100;
        break;
      case 0xd:
        uStack_100 = uStack_100 & 0xffffffff;
        uStack_f8 = *(ulonglong *)(pbVar18 + 4);
        iVar15 = local_110 + (int)*(ulonglong *)(pbVar18 + 4) * 0x28;
        local_108 = (uint *)(local_110 + *(int *)(pbVar18 + 8) * 0x28);
        iVar30 = *(int *)(pbVar18 + 0xc);
        while (iVar30 != 0) {
          uStack_100 = CONCAT44(iVar30 + -1,local_108[9]);
          local_108[9] = 0;
          FUN_0040d400();
          *(uint **)(iVar15 + 0x24) = (uint *)uStack_100;
          iVar15 = iVar15 + 0x28;
          local_108 = local_108 + 10;
          iVar30 = (int)uStack_100._4_4_;
        }
        uStack_100 = CONCAT44(0xffffffff,(uint *)uStack_100);
        uVar36 = uStack_100;
        break;
      case 0xe:
        local_108 = (uint *)(local_110 + *(int *)(pbVar18 + 8) * 0x28);
        FUN_0040d3c0((undefined4 *)(local_110 + *(int *)(pbVar18 + 4) * 0x28),0x1000);
        uVar36 = uStack_100;
        if (((*(byte *)((int)local_108 + 0x1d) & 0x10) != 0) &&
           (iVar15 = FUN_004196b0(), uVar36 = uStack_100, iVar15 != 0)) goto LAB_0043b52e;
        break;
      case 0xf:
        local_108 = (uint *)(local_110 + *(int *)(pbVar18 + 8) * 0x28);
        FUN_0040d3c0((undefined4 *)(local_110 + *(int *)(pbVar18 + 4) * 0x28),0x1000);
        uVar36 = uStack_100;
        break;
      case 0x10:
        local_118 = (undefined4 *)FUN_0041ff10(param_1,0);
        uVar36 = uStack_100;
        if ((local_118 != (undefined4 *)0x0) ||
           (local_118 = (undefined4 *)FUN_00426690(param_1,1), uVar36 = uStack_100,
           local_118 != (undefined4 *)0x0)) break;
        param_1[0x14] = param_1[0x14] + 2U | 1;
        uVar23 = local_110 + *(int *)(pbVar18 + 4) * 0x28;
        param_1[0xb] = uVar23;
        uStack_100 = (ulonglong)uVar23;
        if (0 < *(int *)(pbVar18 + 8)) {
          do {
            FUN_00414cb0();
            FUN_0040e150((int)(uint *)uStack_100 + (int)uStack_100._4_4_ * 0x28);
            iVar15 = (int)uStack_100._4_4_ + 1;
            uStack_100 = CONCAT44(iVar15,(uint *)uStack_100);
          } while (iVar15 < *(int *)(pbVar18 + 8));
        }
        if (*(char *)((int)this + 0x1e) == '\0') {
          param_1[0x15] = local_10c + 1;
          iVar15 = 100;
          goto LAB_0043b3e3;
        }
        goto LAB_0043b52e;
      case 0x12:
        uStack_b4 = (uint)pbVar18[3];
        iStack_b8 = param_1[9];
        iVar15 = 0;
        uStack_100 = (ulonglong)(uint)(local_110 + *(int *)(pbVar18 + 8) * 0x28) << 0x20;
        if (uStack_b4 != 0) {
          do {
            *(ulonglong **)(iStack_b8 + iVar15 * 4) = uStack_100._4_4_;
            FUN_0040e150((int)uStack_100._4_4_);
            iVar15 = (int)(uint *)uStack_100 + 1;
            uStack_100 = CONCAT44((int)uStack_100._4_4_ + 0x28,iVar15);
          } while (iVar15 < (int)uStack_b4);
        }
        puVar21 = *(undefined4 **)(pbVar18 + 0x10);
        if (pbVar18[1] == 0xfb) {
          uStack_f8 = ZEXT48(puVar21);
        }
        else {
          uStack_f8 = CONCAT44(puVar21,*puVar21);
        }
        local_108 = (uint *)(local_110 + *(int *)(pbVar18 + 0xc) * 0x28);
        uStack_d4._0_2_ = 1;
        uStack_e0 = (double)CONCAT44(uStack_e0._4_4_,this);
        uStack_d0 = 0;
        FUN_0040d400();
        uStack_d4 = (uint *)(CONCAT22(uStack_d4._2_2_,(undefined2)uStack_d4) & 0xffffbf01 | 1);
        puStack_c4 = (undefined4 *)0x0;
        if ((*(byte *)((int)(int *)uStack_f8 + 3) & 8) != 0) {
          uStack_c0 = *(uint *)(pbVar18 + -4);
        }
        (**(code **)((int)(int *)uStack_f8 + 0xc))();
        if (*(char *)((int)this + 0x1e) == '\0') {
          if (uStack_f8._4_4_ != (uint *)0x0) {
            FUN_0040d880(*(uint *)(pbVar18 + 4));
            *(uint **)(pbVar18 + 0x10) = uStack_f8._4_4_;
            pbVar18[1] = 0xf9;
          }
          if (puStack_c4 != (undefined4 *)0x0) {
            FUN_0041ffb0();
            FUN_0041db50((undefined **)&DAT_004b23ac);
            local_118 = puStack_c4;
          }
          FUN_0041fbf0(local_3c & 0xff);
          FUN_0040d400();
          bVar13 = FUN_0040d390((int *)local_108);
          iVar15 = CONCAT31(extraout_var_02,bVar13);
          goto joined_r0x0043f83b;
        }
        FUN_0040d250((int)&uStack_f0);
        goto LAB_0043b52e;
      case 0x13:
        local_108 = (uint *)(local_110 + *(int *)(pbVar18 + 8) * 0x28);
        if ((*(byte *)(local_110 + *(int *)(pbVar18 + 4) * 0x28 + 0x1c) & 1) == 0) {
          uVar36 = FUN_0041fc90();
          if (uVar36 == 0) {
            FUN_0040d360(1,0);
            uVar36 = uStack_100;
          }
          else {
            FUN_0040d360(0,0);
            uVar36 = uStack_100;
          }
        }
        else {
          FUN_0042e3e0((int)local_108);
          uVar36 = uStack_100;
        }
        break;
      case 0x14:
        puVar28 = (uint *)(local_110 + *(int *)(pbVar18 + 4) * 0x28);
        FUN_0041fda0();
        uVar23 = *(uint *)(pbVar18 + 8);
        uVar25 = *puVar28;
        *puVar28 = uVar25 + uVar23;
        puVar28[1] = puVar28[1] + ((int)uVar23 >> 0x1f) + (uint)CARRY4(uVar25,uVar23);
        uVar36 = uStack_100;
        break;
      case 0x15:
        pvVar27 = (void *)(local_110 + *(int *)(pbVar18 + 4) * 0x28);
        FUN_00430070(pvVar27,bVar10);
        uVar36 = uStack_100;
        if ((*(ushort *)((int)pvVar27 + 0x1c) & 4) == 0) {
          if (*(int *)(pbVar18 + 8) == 0) {
            local_118 = (undefined4 *)0x14;
            goto LAB_0043fc2a;
          }
          local_10c = *(int *)(pbVar18 + 8) + -1;
        }
        else {
          *(ushort *)((int)pvVar27 + 0x1c) = *(ushort *)((int)pvVar27 + 0x1c) & 0xbf04 | 4;
        }
        break;
      case 0x16:
        if ((*(byte *)(local_110 + *(int *)(pbVar18 + 4) * 0x28 + 0x1c) & 4) != 0) {
          FUN_0041fdd0();
          uVar36 = uStack_100;
        }
        break;
      case 0x17:
        local_24 = *(int *)(pbVar18 + 0x10);
        break;
      case 0x18:
        iVar30 = *(int *)(pbVar18 + 0x10);
        uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar30);
        uStack_f8 = *(ulonglong *)(pbVar18 + 4);
        iVar26 = 0;
        uStack_100 = (ulonglong)*(uint *)(pbVar18 + 0xc);
        if ((int)*(uint *)(pbVar18 + 0xc) < 1) {
LAB_0043c0e6:
          local_24 = 0;
          uVar36 = uStack_100;
        }
        else {
          while( true ) {
            iVar31 = iVar26;
            if (iVar15 != 0) {
              iVar31 = *(int *)(iVar15 + iVar26 * 4);
            }
            uStack_f0 = CONCAT44(iVar31,(uint *)uStack_f0);
            uStack_e8 = (double)(ulonglong)
                                CONCAT14(*(undefined1 *)(*(int *)(iVar30 + 8) + iVar26),
                                         *(undefined4 *)(iVar30 + 0xc + iVar26 * 4));
            local_2c = FUN_00423c70((uint *)(local_110 + ((int)uStack_f8._4_4_ + iVar31) * 0x28),
                                    (uint *)(local_110 + (iVar31 + (int)(int *)uStack_f8) * 0x28));
            if (local_2c != 0) {
              if (uStack_e8._4_4_ != (byte *)0x0) {
                local_2c = -local_2c;
              }
              goto LAB_0043c0e6;
            }
            iVar26 = (int)uStack_100._4_4_ + 1;
            uStack_100 = CONCAT44(iVar26,(uint *)uStack_100);
            if ((int)(uint *)uStack_100 <= iVar26) break;
            iVar30 = (int)(uint *)uStack_f0;
          }
          local_24 = 0;
          uVar36 = uStack_100;
        }
        break;
      case 0x19:
        if (local_2c < 0) {
          local_10c = *(int *)(pbVar18 + 4) + -1;
        }
        else if (local_2c == 0) {
          local_10c = *(int *)(pbVar18 + 8) + -1;
        }
        else {
          local_10c = *(int *)(pbVar18 + 0xc) + -1;
        }
        break;
      case 0x1a:
      case 0x1b:
        if ((*(byte *)(local_110 + *(int *)(pbVar18 + 4) * 0x28 + 0x1c) & 1) == 0) {
          fVar33 = FUN_0041fd20();
          uVar23 = (uint)((float10)0.0 != fVar33);
          uStack_100 = CONCAT44(uStack_100._4_4_,uVar23);
          if (*pbVar18 == 0x1b) {
            uVar23 = (uint)(uVar23 == 0);
            goto LAB_0043c2db;
          }
        }
        else {
          uVar23 = *(uint *)(pbVar18 + 0xc);
LAB_0043c2db:
          uStack_100 = CONCAT44(uStack_100._4_4_,uVar23);
        }
        uVar36 = uStack_100;
        if (uVar23 != 0) {
          local_10c = *(int *)(pbVar18 + 8) + -1;
        }
        break;
      case 0x1c:
        uVar36 = *(ulonglong *)(pbVar18 + 4);
        uStack_f0 = *(ulonglong *)(pbVar18 + 4);
        uStack_c0 = 0;
        puStack_bc = (undefined4 *)0x0;
        iStack_b8 = 0;
        uStack_b4 = 0;
        iStack_b0 = 0;
        pbStack_ac = (byte *)0x0;
        uStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        iStack_9c = 0;
        puStack_c4 = (undefined4 *)(local_110 + *(int *)(pbVar18 + 0xc) * 0x28);
        *(ushort *)(puStack_c4 + 7) = *(ushort *)(puStack_c4 + 7) & 0xbf01 | 1;
        piVar17 = *(int **)(param_1[0xd] + (int)uVar36 * 4);
        uStack_e8 = (double)ZEXT48(piVar17);
        uStack_e0 = (double)CONCAT44(uStack_e0._4_4_,*piVar17);
        if (*piVar17 == 0) {
          if (piVar17[9] < 1) {
LAB_0043d7aa:
            uStack_100 = uStack_100 & 0xffffffff00000000;
            uVar36 = uStack_100;
          }
          else {
            iStack_80 = local_110 + piVar17[9] * 0x28;
            uStack_100 = CONCAT44(uStack_100._4_4_,*(undefined4 *)(iStack_80 + 0x18));
            uStack_e8 = (double)CONCAT44(*(undefined4 *)(iStack_80 + 0x14),piVar17);
            if ((pbVar18[3] & 0x20) == 0) {
              iVar15 = param_1[0x14];
            }
            else {
              iVar15 = 0;
            }
            piVar17[0x11] = iVar15;
LAB_0043c476:
            iVar15 = (int)(int *)uStack_e8;
LAB_0043c47a:
            uVar36 = uStack_100;
            if ((uint *)uStack_100 == (uint *)0x0) break;
            if (this[0x12] < (uint *)uStack_100) goto LAB_0043b368;
            uStack_d4 = *(uint **)(iVar15 + 0x2c);
            uStack_e0 = (double)CONCAT44(*(int *)(iVar15 + 0x4c),(uint)uStack_e0);
            if (*(int *)(iVar15 + 0x44) == param_1[0x14]) {
              puStack_d8 = *(uint **)(iVar15 + 0x50);
LAB_0043c735:
              if (puStack_d8[(int)uStack_f0._4_4_] == 0) {
                if (pbVar18[1] == 0xf8) {
                  FUN_0040d3c0(*(undefined4 **)(pbVar18 + 0x10),0x800);
                }
              }
              else {
                if (uStack_e8._4_4_ == (byte *)0x0) {
                  uVar23 = FUN_0040d9a0();
                  uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar23);
                  FUN_0040d400();
                  local_118 = (undefined4 *)
                              FUN_0042db80(SUB84(uStack_e0,0),puStack_d8[(int)uStack_f0._4_4_],
                                           (uint)*(byte *)((int)(int *)uStack_e8 + 0x17));
                  uVar36 = uStack_100;
                  if (local_118 != (undefined4 *)0x0) break;
                  pbStack_c8 = pbStack_ac;
                  pbVar18 = pbStack_ac;
                }
                else {
                  FUN_0040d1e0();
                  pbVar18 = (byte *)(puStack_d8[(int)uStack_f0._4_4_] + (int)uStack_e8._4_4_);
                }
                FUN_0040da70((char *)pbVar18);
                *(char *)((int)puStack_c4 + 0x1f) = (char)local_3c;
              }
              if (iStack_9c != 0) {
                *(byte *)((int)puStack_c4 + 0x1dU) = *(byte *)((int)puStack_c4 + 0x1dU) & 0xe7;
                *(byte *)((int)puStack_c4 + 0x1dU) = *(byte *)((int)puStack_c4 + 0x1dU) | 2;
                puStack_c4[5] = pbStack_ac;
                puStack_c4[9] = iStack_9c;
              }
              local_118 = (undefined4 *)FUN_004196b0();
              uVar36 = uStack_100;
            }
            else {
              puStack_d8 = (uint *)(*(int *)(iVar15 + 0x4c) + (int)uStack_d4 * 4);
              uStack_84 = 0;
              *(uint **)(iVar15 + 0x50) = puStack_d8;
              *(uint **)((int)(int *)uStack_e8 + 0x48) = (uint *)uStack_100;
              *(int *)((int)(int *)uStack_e8 + 0x44) = param_1[0x14];
              if (uStack_e8._4_4_ == (byte *)0x0) {
                if (*(char *)((int)(int *)uStack_e8 + 0x17) == '\0') {
                  pbStack_c8 = (byte *)FUN_0040cf00();
                }
                else {
                  pbStack_c8 = (byte *)FUN_0040cee0();
                }
                if (uStack_84 < (uint *)uStack_100) {
                  *(undefined4 *)((int)(int *)uStack_e8 + 0x54) = 0;
                }
                else {
                  uStack_e8 = (double)CONCAT44(pbStack_c8,(int *)uStack_e8);
                  *(byte **)((int)(int *)uStack_e8 + 0x54) = pbStack_c8;
                }
              }
              else {
                pbStack_c8 = uStack_e8._4_4_;
              }
              if (*pbStack_c8 < 0x80) {
                uStack_90 = (uint)*pbStack_c8;
                uStack_88 = 1;
              }
              else {
                uStack_88 = FUN_00408ed0(pbStack_c8);
                uStack_88 = uStack_88 & 0xff;
              }
              if (uStack_90 < 0x18004) {
                uVar23 = (int)uStack_d4 * 5 + 3;
                if ((int)uStack_90 < (int)uVar23) {
                  uVar23 = uStack_90;
                }
                uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar23);
                if ((uStack_e8._4_4_ == (byte *)0x0) && ((int)uStack_84 < (int)uVar23)) {
                  uStack_a4 = uStack_a4 & 0xffff0000;
                  iStack_b0 = 0;
                  local_118 = (undefined4 *)
                              FUN_0042db80(SUB84(uStack_e0,0),0,
                                           (uint)*(byte *)((int)(int *)uStack_e8 + 0x17));
                  uVar36 = uStack_100;
                  if (local_118 != (undefined4 *)0x0) break;
                  pbStack_c8 = pbStack_ac;
                  uVar23 = (uint)(uint *)uStack_d0;
                }
                pbStack_94 = pbStack_c8 + uVar23;
                pbStack_98 = pbStack_c8 + uStack_88;
                iVar15 = 0;
                uStack_d0 = uStack_d0 & 0xffffffff;
                if (0 < (int)uStack_d4) {
                  do {
                    if (pbStack_98 < pbStack_94) {
                      puStack_d8[iVar15] = uStack_90;
                      if (*pbStack_98 < 0x80) {
                        *(uint *)(uStack_e0._4_4_ + uStack_d0._4_4_ * 4) = (uint)*pbStack_98;
                        uVar23 = 1;
                      }
                      else {
                        uVar23 = FUN_00408ed0(pbStack_98);
                        uVar23 = uVar23 & 0xff;
                      }
                      pbStack_98 = pbStack_98 + uVar23;
                      uStack_8c = FUN_0040d9a0();
                      uStack_90 = uStack_90 + uStack_8c;
                      iVar15 = extraout_ECX;
                      if (uStack_90 < uStack_8c) {
                        pbStack_98 = pbStack_94 + 1;
                        break;
                      }
                    }
                    else {
                      puStack_d8[iVar15] = 0;
                      iVar15 = uStack_d0._4_4_;
                    }
                    iVar15 = iVar15 + 1;
                    uStack_d0 = CONCAT44(iVar15,(uint *)uStack_d0);
                  } while (iVar15 < (int)uStack_d4);
                }
                FUN_0040d250((int)&uStack_c0);
                uStack_a4 = CONCAT22(uStack_a4._2_2_,1);
                if (((pbStack_98 <= pbStack_94) && (uStack_90 <= (uint *)uStack_100)) &&
                   ((pbStack_98 != pbStack_94 || ((uint *)uStack_90 == (uint *)uStack_100))))
                goto LAB_0043c735;
                local_118 = (undefined4 *)FUN_0041d790();
                uVar36 = uStack_100;
              }
              else {
                local_118 = (undefined4 *)FUN_0041d790();
                uVar36 = uStack_100;
              }
            }
          }
        }
        else {
          local_118 = (undefined4 *)FUN_0042dfb0();
          if (local_118 != (undefined4 *)0x0) goto LAB_0043fc2a;
          if (*(char *)((int)(int *)uStack_e8 + 0x14) == '\0') {
            if (*(int *)((int)(int *)uStack_e8 + 0x44) != param_1[0x14]) {
              if (*(char *)((int)(int *)uStack_e8 + 0x17) == '\0') {
                local_118 = (undefined4 *)FUN_0040ce60((undefined4 *)&uStack_100);
              }
              else {
                local_118 = (undefined4 *)FUN_0040ce30();
                uStack_100 = CONCAT44(uStack_100._4_4_,(int *)uStack_f8);
              }
              goto LAB_0043c476;
            }
            uStack_100 = CONCAT44(uStack_100._4_4_,*(undefined4 *)((int)(int *)uStack_e8 + 0x48));
            uStack_e8 = (double)CONCAT44(*(undefined4 *)((int)(int *)uStack_e8 + 0x54),
                                         (int *)uStack_e8);
            iVar15 = (int)(int *)uStack_e8;
            goto LAB_0043c47a;
          }
          uStack_100 = ZEXT48(uStack_100._4_4_) << 0x20;
          uVar36 = uStack_100;
        }
        break;
      case 0x1d:
        pvVar27 = (void *)(local_110 + *(int *)(pbVar18 + 4) * 0x28);
        cVar4 = **(char **)(pbVar18 + 0x10);
        uVar22 = CONCAT31(uStack_100._5_3_,cVar4);
        uStack_100._0_4_ = (uint *)*(char **)(pbVar18 + 0x10);
        while (cVar4 != '\0') {
          uStack_100 = CONCAT44(uVar22,(char *)((int)(uint *)uStack_100 + 1));
          if ((*(byte *)((int)pvVar27 + 0x1d) & 0x40) != 0) {
            FUN_00414c50();
          }
          FUN_00430070(pvVar27,(byte)local_3c);
          cVar4 = *(char *)(uint *)uStack_100;
          pvVar27 = (void *)((int)pvVar27 + 0x28);
          uVar22 = CONCAT31(uStack_100._5_3_,cVar4);
        }
        uStack_100 = CONCAT44(uVar22,(char *)((int)(uint *)uStack_100 + 1));
        uVar36 = uStack_100;
        break;
      case 0x1e:
        uStack_f8 = 0;
        uStack_f0._0_4_ = (uint *)0x0;
        uStack_e8 = 0.0;
        uStack_e0 = (double)((ulonglong)uStack_e0._4_4_ << 0x20);
        pbStack_c8 = *(byte **)(pbVar18 + 0x10);
        puVar28 = (uint *)(local_110 + *(int *)(pbVar18 + 4) * 0x28);
        puStack_c4 = (undefined4 *)(uint)*(byte *)(param_1 + 0x19);
        uStack_d0 = CONCAT44(*(int *)(pbVar18 + 8),puVar28 + *(int *)(pbVar18 + 8) * 10 + -10);
        uStack_100 = CONCAT44(puVar28,(uint *)uStack_100);
        uStack_d4 = puVar28;
        if (puVar28 <= puVar28 + *(int *)(pbVar18 + 8) * 10 + -10) {
          do {
            if (pbStack_c8 != (byte *)0x0) {
              FUN_00430070(puVar28,(byte)local_3c);
              puVar28 = (uint *)uStack_100._4_4_;
            }
            if (((*(byte *)((int)puVar28 + 0x1d) & 0x40) != 0) && (0 < (int)puVar28[6])) {
              FUN_00414c50();
              puVar28 = (uint *)uStack_100._4_4_;
            }
            puStack_d8 = (uint *)FUN_0040d8d0(puVar28,(int)puStack_c4);
            puStack_bc = (undefined4 *)FUN_0040d9a0();
            uStack_f8 = CONCAT44((int)uStack_f8._4_4_ + ((int)puStack_bc >> 0x1f) +
                                 (uint)CARRY4((uint)(int *)uStack_f8,(uint)puStack_bc),
                                 (int)(int *)uStack_f8 + (int)puStack_bc);
            iVar15 = FUN_00408f50((uint)puStack_d8,0);
            uStack_f0._0_4_ = (uint *)((int)(uint *)uStack_f0 + iVar15);
            if ((*(byte *)((int)puVar28 + 0x1d) & 0x40) == 0) {
              if (puStack_bc != (undefined4 *)0x0) {
                uStack_e0 = (double)((ulonglong)uStack_e0._4_4_ << 0x20);
              }
            }
            else {
              uStack_e0 = (double)CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 + *puVar28);
            }
            puVar28 = puVar28 + 10;
            uStack_100 = CONCAT44(puVar28,(uint *)uStack_100);
          } while (puVar28 <= (uint *)uStack_d0);
        }
        uVar23 = (uint)(uint *)uStack_f0;
        iVar15 = FUN_00408f50((uint)(uint *)uStack_f0,(int)(uint *)uStack_f0 >> 0x1f);
        uVar23 = uVar23 + iVar15;
        uStack_e0 = (double)CONCAT44(iVar15,(uint)uStack_e0);
        uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar23);
        iVar30 = FUN_00408f50(uVar23,(int)uVar23 >> 0x1f);
        if (iVar15 < iVar30) {
          uVar23 = uVar23 + 1;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar23);
        }
        pvVar27 = (void *)((uVar23 - (uint)uStack_e0) + (int)(int *)uStack_f8);
        iVar30 = ((((int)uVar23 >> 0x1f) - ((int)(uint)uStack_e0 >> 0x1f)) -
                 (uint)(uVar23 < (uint)uStack_e0)) + (int)uStack_f8._4_4_ +
                 (uint)CARRY4(uVar23 - (uint)uStack_e0,(uint)(int *)uStack_f8);
        uStack_e8 = (double)CONCAT44(iVar30,pvVar27);
        iVar15 = (int)this[0x12] >> 0x1f;
        if ((iVar15 < iVar30) || ((iVar15 <= iVar30 && ((void *)this[0x12] < pvVar27))))
        goto LAB_0043b368;
        local_108 = (uint *)(local_110 + *(int *)(pbVar18 + 0xc) * 0x28);
        bVar10 = FUN_00414b80(pvVar27,(int)local_108);
        if (CONCAT31(extraout_var_03,bVar10) != 0) goto LAB_0043b52e;
        puVar8 = (undefined1 *)local_108[5];
        uStack_100 = CONCAT44(uStack_100._4_4_,puVar8);
        if ((uint *)uStack_f0 < 0x80) {
          *puVar8 = (char)uStack_f0;
          uVar23 = 1;
        }
        else {
          uVar35 = FUN_00408d20(puVar8);
          uVar23 = (uint)uVar35;
        }
        uVar23 = uVar23 & 0xff;
        uStack_100 = CONCAT44(uStack_d4,(uint *)uStack_100);
        puVar28 = uStack_d4;
        if (uStack_d4 <= (uint *)uStack_d0) {
          do {
            uStack_c0 = uVar23;
            puStack_d8 = (uint *)FUN_0040d8d0(puVar28,(int)puStack_c4);
            if (puStack_d8 < (uint *)0x80) {
              *(char *)(uVar23 + (int)(uint *)uStack_100) = (char)puStack_d8;
              uVar23 = 1;
            }
            else {
              uVar35 = FUN_00408d20((undefined1 *)((int)(uint *)uStack_100 + uVar23));
              uVar23 = (uint)uVar35;
            }
            uVar23 = uStack_c0 + (uVar23 & 0xff);
            puVar28 = (uint *)((int)uStack_100._4_4_ + 0x28);
            uStack_100 = CONCAT44(puVar28,(uint *)uStack_100);
          } while (puVar28 <= (uint *)uStack_d0);
        }
        uStack_100 = CONCAT44(uStack_d4,(uint *)uStack_100);
        uStack_c0 = uVar23;
        if (uStack_d4 <= (uint *)uStack_d0) {
          do {
            uVar23 = FUN_0040d9c0((int)(int *)uStack_e8 - uStack_c0,(int)puStack_c4,
                                  (undefined4 *)(uStack_c0 + (int)(uint *)uStack_100),
                                  (int)(int *)uStack_e8 - uStack_c0);
            uStack_c0 = uStack_c0 + uVar23;
            uVar23 = (int)uStack_100._4_4_ + 0x28;
            uStack_100 = CONCAT44(uVar23,(uint *)uStack_100);
          } while (uVar23 <= (uint *)uStack_d0);
        }
        local_108[6] = (uint)(int *)uStack_e8;
        *(undefined2 *)(local_108 + 7) = 0x410;
        local_108[8] = 0;
        if ((uint)uStack_e0 != 0) {
          *local_108 = (uint)uStack_e0;
          *(undefined2 *)(local_108 + 7) = 0x4410;
        }
        *(undefined1 *)((int)local_108 + 0x1f) = 1;
        uVar36 = uStack_100;
        break;
      case 0x1f:
        iVar15 = **(int **)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        uStack_f8 = CONCAT44(uStack_f8._4_4_,iVar15);
        if (iVar15 == 0) {
          uStack_100 = 0;
          *local_108 = 0;
          local_108[1] = 0;
          uVar36 = uStack_100;
        }
        else {
          local_118 = (undefined4 *)FUN_0042c3d0((uint *)&uStack_100);
          *local_108 = (uint)(uint *)uStack_100;
          local_108[1] = (uint)uStack_100._4_4_;
          uVar36 = uStack_100;
        }
        break;
      case 0x20:
        pbVar9 = *(byte **)(pbVar18 + 0x10);
        uStack_100 = CONCAT44(pbVar9,*(int *)(pbVar18 + 4));
        if (*(int *)(pbVar18 + 4) == 0) {
          if (0 < (int)this[0x24]) {
            pcVar20 = "cannot open savepoint - SQL statements in progress";
            goto LAB_0043cfad;
          }
          uVar23 = FUN_00408380((char *)pbVar9);
          uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar23);
          piVar17 = FUN_00412930(uVar23 + 0x19);
          uStack_f8 = CONCAT44(piVar17,(int *)uStack_f8);
          uVar36 = uStack_100;
          if (piVar17 != (int *)0x0) {
            *piVar17 = (int)(piVar17 + 6);
            puVar21 = (undefined4 *)uStack_100._4_4_;
            puVar19 = (undefined4 *)*piVar17;
            for (uVar23 = (int)(int *)uStack_f8 + 1U >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
              *puVar19 = *puVar21;
              puVar21 = puVar21 + 1;
              puVar19 = puVar19 + 1;
            }
            for (uVar23 = (int)(int *)uStack_f8 + 1U & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
              *(undefined1 *)puVar19 = *(undefined1 *)puVar21;
              puVar21 = (undefined4 *)((int)puVar21 + 1);
              puVar19 = (undefined4 *)((int)puVar19 + 1);
            }
            if ((char)this[7] == '\0') {
              this[0x75] = this[0x75] + 1;
            }
            else {
              *(undefined1 *)(this + 7) = 0;
              *(undefined1 *)(this + 0x77) = 1;
            }
            piVar17[4] = this[0x74];
            this[0x74] = (uint)piVar17;
            piVar17[2] = this[0x78];
            piVar17[3] = this[0x79];
          }
        }
        else {
          uStack_e8 = (double)((ulonglong)uStack_e8 & 0xffffffff00000000);
          puVar21 = (undefined4 *)this[0x74];
          uStack_f0 = CONCAT44(uStack_f0._4_4_,puVar21);
          while (puVar21 != (undefined4 *)0x0) {
            iVar15 = FUN_00408450((byte *)*puVar21,pbVar9);
            if (iVar15 == 0) {
              if ((0 < (int)this[0x24]) ||
                 (((uint *)uStack_100 == (uint *)0x2 && (1 < (int)this[0x23])))) {
                FUN_0041db50((undefined **)"cannot %s savepoint - SQL statements in progress");
                local_118 = (undefined4 *)0x5;
                uVar36 = uStack_100;
                goto LAB_0043fa8c;
              }
              if ((puVar21[4] == 0) && ((char)this[0x77] != '\0')) {
                puStack_38 = (uint *)0x1;
                if ((uint *)uStack_100 == (uint *)0x1) {
                  iVar15 = FUN_0041ff10(param_1,1);
                  if (iVar15 != 0) goto LAB_0043b3e3;
                  *(undefined1 *)(this + 7) = 1;
                  iVar15 = FUN_0042dd20(param_1);
                  if (iVar15 != 5) {
                    *(undefined1 *)(this + 0x77) = 0;
                    local_118 = (undefined4 *)param_1[0x16];
                    puVar21 = (uint *)uStack_f0;
                    goto LAB_0043cdc4;
                  }
                  param_1[0x15] = local_10c;
                  iVar15 = 5;
                  *(undefined1 *)(this + 7) = 0;
                  param_1[0x16] = 5;
                  goto LAB_0043b3e3;
                }
              }
              else {
                puStack_38 = (uint *)0x0;
              }
              uVar23 = (this[0x75] - (int)(int *)uStack_e8) - 1;
              iVar15 = 0;
              uStack_e8 = (double)(ulonglong)uVar23;
              if ((int)this[1] < 1) goto LAB_0043cebb;
              goto LAB_0043ce80;
            }
            uStack_e8 = (double)CONCAT44(uStack_e8._4_4_,(int)(int *)uStack_e8 + 1);
            puVar21 = (undefined4 *)puVar21[4];
            uStack_f0 = CONCAT44(uStack_f0._4_4_,puVar21);
          }
          FUN_0041db50((undefined **)"no such savepoint: %s");
          local_118 = (undefined4 *)0x1;
          uVar36 = uStack_100;
        }
        break;
      case 0x21:
        uVar23 = (uint)*(ulonglong *)(pbVar18 + 4);
        iVar15 = *(int *)(pbVar18 + 8);
        uStack_100 = *(ulonglong *)(pbVar18 + 4);
        if ((uVar23 == 0) || ((char)this[7] != '\0')) {
          uStack_f8 = ZEXT48(uStack_f8._4_4_) << 0x20;
LAB_0043cf87:
          if (uVar23 == (byte)this[7]) {
            if (uVar23 == 0) {
              pcVar20 = "cannot start a transaction within a transaction";
            }
            else {
              pcVar20 = "cannot rollback - no transaction is active";
              if (iVar15 == 0) {
                pcVar20 = "cannot commit - no transaction is active";
              }
            }
            FUN_0041db50((undefined **)pcVar20);
            local_118 = (undefined4 *)0x1;
            uVar36 = uStack_100;
            break;
          }
          if (iVar15 == 0) {
            iVar15 = FUN_0041ff10(param_1,1);
            if (iVar15 == 0) {
              *(char *)(this + 7) = (char)uStack_100;
              iVar15 = FUN_0042dd20(param_1);
              if (iVar15 != 5) goto LAB_0043fb93;
              param_1[0x15] = local_10c;
              *(char *)(this + 7) = '\x01' - (char)uStack_100;
              goto LAB_0043fbf0;
            }
          }
          else {
            FUN_0042d1f0();
            *(undefined1 *)(this + 7) = 1;
LAB_0043fb93:
            FUN_004114f0();
            iVar15 = (-(uint)(param_1[0x16] != 0) & 0xffffff9c) + 0x65;
          }
          goto LAB_0043b3e3;
        }
        uStack_f8 = CONCAT44(uStack_f8._4_4_,1);
        if (iVar15 == 0) {
          if ((int)this[0x24] < 1) goto LAB_0043cf87;
          pcVar20 = "cannot commit transaction - SQL statements in progress";
        }
        else {
          if ((int)this[0x23] < 2) goto LAB_0043cf87;
          pcVar20 = "cannot rollback transaction - SQL statements in progress";
        }
LAB_0043cfad:
        FUN_0041db50((undefined **)pcVar20);
        local_118 = (undefined4 *)0x5;
        uVar36 = uStack_100;
        break;
      case 0x22:
        piVar17 = *(int **)(*(int *)(pbVar18 + 4) * 0x10 + 4 + this[2]);
        uStack_100 = CONCAT44(uStack_100._4_4_,piVar17);
        uVar36 = uStack_100;
        if (piVar17 != (int *)0x0) {
          local_118 = (undefined4 *)FUN_00427d80(piVar17,*(int *)(pbVar18 + 8));
          if (local_118 == (undefined4 *)0x5) {
            iVar15 = 5;
            param_1[0x15] = local_10c;
            param_1[0x16] = 5;
            goto LAB_0043b3e3;
          }
          if (local_118 != (undefined4 *)0x0) goto LAB_0043fc2a;
          uVar36 = uStack_100;
          if (((*(int *)(pbVar18 + 8) != 0) && (*(char *)((int)param_1 + 0x66) != '\0')) &&
             (((char)this[7] == '\0' || (1 < (int)this[0x23])))) {
            if (param_1[0x36] == 0) {
              uVar23 = this[0x76];
              this[0x76] = uVar23 + 1;
              param_1[0x36] = this[0x75] + uVar23 + 1;
            }
            local_118 = (undefined4 *)FUN_00414ac0(param_1[0x36]);
            param_1[0x34] = this[0x78];
            param_1[0x35] = this[0x79];
            uVar36 = uStack_100;
          }
        }
        break;
      case 0x23:
        uStack_100 = CONCAT44(*(undefined4 *)(pbVar18 + 4),(uint *)uStack_100);
        uStack_f8 = CONCAT44(uStack_f8._4_4_,*(undefined4 *)(pbVar18 + 0xc));
        FUN_0040cff0(*(undefined4 *)(pbVar18 + 0xc),(undefined4 *)&uStack_100);
        *local_108 = (uint)(uint *)uStack_100;
        local_108[1] = (int)(uint *)uStack_100 >> 0x1f;
        uVar36 = uStack_100;
        break;
      case 0x24:
        uStack_100 = CONCAT44(uStack_100._4_4_,*(int *)(pbVar18 + 4) * 0x10 + this[2]);
        puVar21 = (undefined4 *)(local_110 + *(int *)(pbVar18 + 0xc) * 0x28);
        FUN_0041fda0();
        local_118 = (undefined4 *)FUN_00423a20(*(int *)(pbVar18 + 8));
        if (*(int *)(pbVar18 + 8) == 1) {
          **(undefined4 **)((int)(uint *)uStack_100 + 0xc) = *puVar21;
          this[3] = this[3] | 0x200;
        }
        else if (*(int *)(pbVar18 + 8) == 2) {
          *(undefined1 *)(*(int *)((int)(uint *)uStack_100 + 0xc) + 0x48) = *(undefined1 *)puVar21;
        }
        uVar36 = uStack_100;
        if (*(int *)(pbVar18 + 4) == 1) {
          FUN_0040dcd0();
          *(undefined1 *)((int)param_1 + 0x62) = 0;
          uVar36 = uStack_100;
        }
        break;
      case 0x25:
        iVar15 = *(int *)(*(int *)(pbVar18 + 4) * 0x10 + 4 + this[2]);
        uStack_100 = CONCAT44(iVar15,(uint *)uStack_100);
        if (iVar15 == 0) {
          uStack_100 = 0;
        }
        else {
          FUN_0040cff0(1,(undefined4 *)&uStack_100);
        }
        uVar36 = uStack_100;
        if ((uint *)uStack_100 != (uint *)*(uint *)(pbVar18 + 8)) {
          FUN_00408130((int)this);
          pcVar20 = FUN_00412a70();
          param_1[0x17] = (int)pcVar20;
          if ((uint *)**(uint **)(*(int *)(pbVar18 + 4) * 0x10 + 0xc + this[2]) !=
              (uint *)uStack_100) {
            FUN_00420a50(*(int *)(pbVar18 + 4));
          }
          FUN_0040dcd0();
          local_118 = (undefined4 *)0x11;
          uVar36 = uStack_100;
        }
        break;
      case 0x26:
      case 0x27:
        if (*(char *)((int)param_1 + 0x62) == '\0') {
          uStack_100 = 0;
          uVar36 = *(ulonglong *)(pbVar18 + 8);
          uStack_f8 = *(ulonglong *)(pbVar18 + 8);
          iVar15 = *(int *)(pbVar18 + 0xc) * 0x10 + this[2];
          uStack_e8 = (double)CONCAT44(iVar15,(int *)uStack_e8);
          if (*pbVar18 == 0x27) {
            uStack_f0 = CONCAT44(*(uint *)(iVar15 + 4),1);
            bVar10 = *(byte *)(*(int *)(iVar15 + 0xc) + 0x48);
            if (bVar10 < *(byte *)(param_1 + 0x19)) {
              *(byte *)(param_1 + 0x19) = bVar10;
            }
          }
          else {
            uStack_f0 = (ulonglong)*(uint *)(iVar15 + 4) << 0x20;
          }
          uVar23 = 0;
          if (pbVar18[3] != 0) {
            FUN_0041fda0();
            iVar15 = *(int *)(local_110 + (int)uVar36 * 0x28);
            uStack_f8 = CONCAT44(uStack_f8._4_4_,iVar15);
            if (iVar15 < 2) {
              local_118 = (undefined4 *)FUN_0041d790();
              goto LAB_0043fc2a;
            }
            uVar23 = (uint)(uint *)uStack_100;
          }
          if (pbVar18[1] == 0xfa) {
            uVar23 = *(uint *)(pbVar18 + 0x10);
            uStack_100 = (ulonglong)uVar23 << 0x20;
            *(undefined1 *)(uVar23 + 4) =
                 *(undefined1 *)(*(int *)(*(int *)(*param_1 + 8) + 0xc) + 0x49);
            uVar23 = *(ushort *)(uVar23 + 6) + 1;
LAB_0043d2f8:
            uStack_100 = CONCAT44(uStack_100._4_4_,uVar23);
          }
          else if (pbVar18[1] == 0xf2) {
            uVar23 = *(uint *)(pbVar18 + 0x10);
            goto LAB_0043d2f8;
          }
          puVar21 = FUN_0042e240(uVar23,uStack_f8._4_4_,1);
          uStack_e8 = (double)CONCAT44(uStack_e8._4_4_,puVar21);
          if (puVar21 == (undefined4 *)0x0) goto LAB_0043b52e;
          *(undefined1 *)(puVar21 + 5) = 1;
          local_118 = (undefined4 *)
                      FUN_0040cd70((int)uStack_f8,(int)uStack_100._4_4_,(void *)*puVar21);
          ((int *)uStack_e8)[10] = (int)uStack_100._4_4_;
          if (local_118 == (undefined4 *)0x10) {
            *(int *)uStack_e8 = 0;
            local_118 = (undefined4 *)0x0;
          }
          *(bool *)((int)(int *)uStack_e8 + 0x16) = pbVar18[1] != 0xfa;
          *(bool *)((int)(int *)uStack_e8 + 0x17) = *(char *)((int)(int *)uStack_e8 + 0x16) == '\0';
          uVar36 = uStack_100;
        }
        else {
          local_118 = (undefined4 *)0x4;
        }
        break;
      case 0x28:
      case 0x29:
        puVar21 = FUN_0042e240(*(int *)(pbVar18 + 8),0xffffffff,1);
        uStack_100 = CONCAT44(uStack_100._4_4_,puVar21);
        if (puVar21 == (undefined4 *)0x0) goto LAB_0043b52e;
        *(undefined1 *)(puVar21 + 5) = 1;
        local_118 = (undefined4 *)FUN_0042a6a0(this,0x41e,(char *)0x0,500,puVar21 + 8);
        if (local_118 == (undefined4 *)0x0) {
          local_118 = (undefined4 *)FUN_00427d80(*(int **)((int)(uint *)uStack_100 + 0x20),1);
          if (local_118 == (undefined4 *)0x0) {
            if (*(int *)(pbVar18 + 0x10) != 0) {
              local_118 = FUN_00429a60(&uStack_20,2);
              if (local_118 == (undefined4 *)0x0) {
                local_118 = (undefined4 *)
                            FUN_0040cd70(uStack_20,*(int *)(pbVar18 + 0x10),
                                         (void *)*(uint *)uStack_100);
                *(undefined4 *)((int)(uint *)uStack_100 + 0x28) = *(undefined4 *)(pbVar18 + 0x10);
                *(undefined1 *)(*(int *)((int)(uint *)uStack_100 + 0x28) + 4) =
                     *(undefined1 *)(*(int *)(*(int *)(*param_1 + 8) + 0xc) + 0x49);
              }
              *(undefined1 *)((int)(uint *)uStack_100 + 0x16) = 0;
              *(bool *)((int)(uint *)uStack_100 + 0x17) =
                   *(char *)((int)(uint *)uStack_100 + 0x16) == '\0';
              uVar36 = uStack_100;
              break;
            }
            local_118 = (undefined4 *)FUN_0040cd70(1,0,(void *)*(uint *)uStack_100);
            *(undefined1 *)((int)(uint *)uStack_100 + 0x16) = 1;
          }
        }
        *(bool *)((int)(uint *)uStack_100 + 0x17) =
             *(char *)((int)(uint *)uStack_100 + 0x16) == '\0';
        uVar36 = uStack_100;
        break;
      case 0x2a:
        puVar21 = FUN_0042e240(*(int *)(pbVar18 + 0xc),0xffffffff,0);
        uStack_100 = CONCAT44(uStack_100._4_4_,puVar21);
        if (puVar21 == (undefined4 *)0x0) goto LAB_0043b52e;
        *(undefined1 *)(puVar21 + 5) = 1;
        puVar21[9] = *(undefined4 *)(pbVar18 + 8);
        *(undefined1 *)((int)puVar21 + 0x16) = 1;
        *(undefined1 *)((int)puVar21 + 0x17) = 0;
        uVar36 = uStack_100;
        break;
      case 0x2b:
        FUN_0042dc50();
        *(undefined4 *)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4) = 0;
        uVar36 = uStack_100;
        break;
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
        piVar17 = *(int **)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        uStack_f8 = CONCAT44(uStack_f8._4_4_,piVar17);
        if (*piVar17 == 0) {
LAB_0043ef4c:
          local_10c = *(int *)(pbVar18 + 8) + -1;
        }
        else {
          bVar10 = *pbVar18;
          uStack_100 = (ulonglong)CONCAT14(bVar10,(uint *)uStack_100);
          *(undefined1 *)(piVar17 + 5) = 0;
          if (*(char *)((int)piVar17 + 0x16) == '\0') {
            puStack_d8 = *(uint **)(pbVar18 + 0x10);
            uStack_f0._0_6_ = CONCAT24((short)puStack_d8,piVar17[10]);
            uStack_f0 = CONCAT26((bVar10 & 1) << 3,(uint6)uStack_f0);
            iVar15 = local_110 + *(int *)(pbVar18 + 0xc) * 0x28;
            uStack_e0 = (double)CONCAT44(uStack_e0._4_4_,iVar15);
            if ((*(byte *)(iVar15 + 0x1d) & 0x40) != 0) {
              FUN_00414c50();
              piVar17 = (int *)uStack_f8;
            }
            local_118 = (undefined4 *)
                        FUN_0042b0b0((void *)*piVar17,(int *)&uStack_f0,0,0,0,(int *)&uStack_100);
            if (local_118 != (undefined4 *)0x0) goto LAB_0043fc2a;
            *(undefined1 *)((int)(int *)uStack_f8 + 0x11) = 0;
          }
          else {
            iVar15 = local_110 + *(int *)(pbVar18 + 0xc) * 0x28;
            FUN_0042ff90();
            uVar36 = FUN_0041fc90();
            *(undefined1 *)((int)(int *)uStack_f8 + 0x11) = 0;
            if ((*(ushort *)(iVar15 + 0x1c) & 4) == 0) {
              uStack_d0 = uVar36;
              if ((*(ushort *)(iVar15 + 0x1c) & 8) == 0) {
                local_10c = *(int *)(pbVar18 + 8) + -1;
                uVar36 = uStack_100;
                break;
              }
              uStack_d0._0_4_ = (uint *)uVar36;
              uStack_d0._4_4_ = (int)(uVar36 >> 0x20);
              if (((uint *)uStack_d0 == (uint *)0x0) && (uStack_d0._4_4_ == -0x80000000)) {
                uStack_14 = 0x80000000;
                uStack_18 = 0;
                if ((*(double *)(iVar15 + 8) < -9.223372036854776e+18) ||
                   (0.0 < *(double *)(iVar15 + 8))) {
                  uStack_100 = CONCAT44(uStack_100._4_4_,1);
                  if (0.0 <= *(double *)(iVar15 + 8)) {
                    if ((int)uStack_100._4_4_ < 0x2e) {
                      local_118 = (undefined4 *)FUN_0042b070();
                      goto LAB_0043d62e;
                    }
                  }
                  else if (0x2d < (int)uStack_100._4_4_) {
                    local_118 = (undefined4 *)FUN_0042b040();
LAB_0043d62e:
                    if (local_118 != (undefined4 *)0x0) goto LAB_0043fc2a;
                    uVar36 = uStack_100;
                    if ((uint *)uStack_100 == (uint *)0x0) break;
                  }
                  local_10c = *(int *)(pbVar18 + 8) + -1;
                  uVar36 = uStack_100;
                  break;
                }
              }
              if ((uStack_100._4_4_ == (ulonglong *)0x2c) || (uStack_100._4_4_ == (ulonglong *)0x2e)
                 ) {
                if ((double)(longlong)uVar36 < *(double *)(iVar15 + 8)) {
                  uStack_d0 = CONCAT44(uStack_d0._4_4_ + (uint)(0xfffffffe < (uint *)uStack_d0),
                                       (int)(uint *)uStack_d0 + 1);
                  uVar36 = uStack_d0;
                }
              }
              else if (*(double *)(iVar15 + 8) < (double)(longlong)uVar36) {
                uStack_d0 = CONCAT44(uStack_d0._4_4_ + -1 + (uint)((uint *)uStack_d0 != (uint *)0x0)
                                     ,(int)(uint *)uStack_d0 - 1);
                uVar36 = uStack_d0;
              }
            }
            uStack_d0 = uVar36;
            local_118 = (undefined4 *)
                        FUN_0042b0b0((void *)*(int *)uStack_f8,(int *)0x0,(uint)(uint *)uStack_d0,
                                     (int)(uStack_d0 >> 0x20),0,(int *)&uStack_100);
            if (local_118 != (undefined4 *)0x0) goto LAB_0043fc2a;
            if ((uint *)uStack_100 == (uint *)0x0) {
              *(undefined1 *)((int)(int *)uStack_f8 + 0x11) = 1;
              *(uint **)((int)(int *)uStack_f8 + 8) = (uint *)uStack_d0;
              *(int *)((int)(int *)uStack_f8 + 0xc) = uStack_d0._4_4_;
            }
          }
          *(undefined1 *)((int)(int *)uStack_f8 + 0x15) = 0;
          ((int *)uStack_f8)[0x11] = 0;
          if ((int)uStack_100._4_4_ < 0x2e) {
            if (((int)(uint *)uStack_100 < 1) &&
               (((uint *)uStack_100 != (uint *)0x0 || (uStack_100._4_4_ != (ulonglong *)0x2c)))) {
              bVar13 = FUN_0040cf20(*(int *)uStack_f8);
              uStack_100 = CONCAT44(uStack_100._4_4_,CONCAT31(extraout_var_04,bVar13));
            }
            else {
              local_118 = (undefined4 *)FUN_0042d5d0(*(int *)uStack_f8,(undefined4 *)&uStack_100);
              if (local_118 != (undefined4 *)0x0) goto LAB_0043fc2a;
              *(undefined1 *)((int)(int *)uStack_f8 + 0x11) = 0;
            }
          }
          else {
            if ((-1 < (int)(uint *)uStack_100) &&
               (((uint *)uStack_100 != (uint *)0x0 || (uStack_100._4_4_ != (ulonglong *)0x2f))))
            goto LAB_0043d7aa;
            local_118 = (undefined4 *)FUN_0042d4b0(*(int *)uStack_f8,(undefined4 *)&uStack_100);
            if (local_118 != (undefined4 *)0x0) goto LAB_0043fc2a;
            *(undefined1 *)((int)(int *)uStack_f8 + 0x11) = 0;
          }
          uVar36 = uStack_100;
          if ((uint *)uStack_100 != (uint *)0x0) {
            local_10c = *(int *)(pbVar18 + 8) + -1;
          }
        }
        break;
      case 0x30:
        piVar17 = *(int **)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        uStack_100 = CONCAT44(uStack_100._4_4_,piVar17);
        uVar36 = uStack_100;
        if (*piVar17 != 0) {
          *(undefined1 *)(piVar17 + 5) = 0;
          uVar36 = FUN_0041fc90();
          *(ulonglong *)((int)(uint *)uStack_100 + 0x18) = uVar36;
          *(undefined1 *)((int)(uint *)uStack_100 + 0x11) = 0;
          *(undefined1 *)((int)(uint *)uStack_100 + 0x15) = 1;
          uVar36 = uStack_100;
        }
        break;
      case 0x31:
      case 0x32:
        uVar23 = 0;
        piVar17 = *(int **)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        uStack_100 = ZEXT48(piVar17) << 0x20;
        iVar15 = local_110 + *(int *)(pbVar18 + 0xc) * 0x28;
        if (*piVar17 != 0) {
          if (*(int *)(pbVar18 + 0x10) < 1) {
            if ((*(byte *)(iVar15 + 0x1d) & 0x40) != 0) {
              FUN_00414c50();
              piVar17 = (int *)uStack_100._4_4_;
            }
            iVar15 = FUN_004152f0(*(undefined4 *)(iVar15 + 0x14),0x97,(undefined4 *)piVar17[10],
                                  *(int *)(iVar15 + 0x18),(byte *)*(undefined4 *)(iVar15 + 0x14));
            uStack_f8 = CONCAT44(iVar15,(int *)uStack_f8);
            if (iVar15 == 0) goto LAB_0043b52e;
            *(byte *)(iVar15 + 6) = *(byte *)(iVar15 + 6) | 0x10;
            piVar17 = (int *)uStack_100._4_4_;
          }
          else {
            uStack_f0._0_6_ = CONCAT24(*(undefined2 *)(pbVar18 + 0x10),piVar17[10]);
            uStack_e0 = (double)CONCAT44(uStack_e0._4_4_,iVar15);
            uStack_f0 = CONCAT26(0x10,(uint6)uStack_f0);
            uStack_f8 = CONCAT44(&uStack_f0,(int *)uStack_f8);
          }
          local_118 = (undefined4 *)
                      FUN_0042b0b0((void *)*piVar17,(int *)uStack_f8._4_4_,0,0,0,(int *)&uStack_f8);
          if (*(int *)(pbVar18 + 0x10) == 0) {
            FUN_0040dc60();
          }
          uVar36 = uStack_100;
          if (local_118 != (undefined4 *)0x0) break;
          uVar23 = (uint)((int *)uStack_f8 == (int *)0x0);
          uStack_100 = CONCAT44(uStack_100._4_4_,uVar23);
          *(undefined1 *)((int)uStack_100._4_4_ + 0x15) = 0;
          *(undefined4 *)((int)uStack_100._4_4_ + 0x44) = 0;
        }
        uVar36 = uStack_100;
        if (*pbVar18 == 0x32) {
          if (uVar23 != 0) {
            local_10c = *(int *)(pbVar18 + 8) + -1;
          }
        }
        else if (uVar23 == 0) {
          local_10c = *(int *)(pbVar18 + 8) + -1;
        }
        break;
      case 0x33:
        puVar1 = (ulonglong *)(local_110 + *(int *)(pbVar18 + 0xc) * 0x28);
        puVar28 = (uint *)(local_110 + *(int *)(pbVar18 + 0x10) * 0x28);
        uStack_f0 = CONCAT44(uStack_f0._4_4_,puVar28);
        piVar17 = *(int **)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        uStack_100 = CONCAT44(piVar17,(uint *)uStack_100);
        piVar17[0x10] = 0;
        piVar17[0x11] = 0;
        uVar5 = *(ushort *)(piVar17[10] + 6);
        uVar14 = 0;
        uStack_f8._0_6_ = CONCAT24(uVar5,*piVar17);
        uStack_100 = uStack_100 & 0xffffffffffff0000;
        if (uVar5 != 0) {
          do {
            if ((puVar28[(uint)uVar14 * 10 + 7] & 1) != 0) {
              uStack_f8 = uStack_f8 & 0xffffffff00000000;
              local_10c = *(int *)(pbVar18 + 8) + -1;
              uVar36 = uStack_100;
              goto LAB_0043fa8c;
            }
            uVar14 = uVar14 + 1;
            uStack_100 = CONCAT62(uStack_100._2_6_,uVar14);
          } while (uVar14 < uVar5);
        }
        uVar36 = uStack_100;
        if (*piVar17 != 0) {
          uStack_e8 = (double)CONCAT26(0x20,CONCAT24(uVar5 + 1,piVar17[10]));
          puStack_d8 = puVar28;
          FUN_0041fda0();
          uStack_d0 = *puVar1;
          local_118 = (undefined4 *)
                      FUN_0042b0b0((int *)uStack_f8,(int *)&uStack_e8,0,0,0,
                                   (int *)((int)uStack_100._4_4_ + 0x40));
          uVar36 = uStack_100;
          if (((ulonglong)uStack_e8 & 0x20000000000000) == 0) {
            if (((uint *)(uint)uStack_e0 != (uint *)uStack_d0) ||
               (uStack_e0._4_4_ != uStack_d0._4_4_)) {
              *(uint *)puVar1 = (uint)uStack_e0;
              *(uint *)((int)puVar1 + 4) = uStack_e0._4_4_;
              break;
            }
          }
          local_10c = *(int *)(pbVar18 + 8) + -1;
        }
        break;
      case 0x34:
        puVar1 = (ulonglong *)(local_110 + *(int *)(pbVar18 + 0xc) * 0x28);
        puVar21 = *(undefined4 **)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        pvVar27 = (void *)*puVar21;
        uStack_100 = CONCAT44(pvVar27,puVar21);
        if (pvVar27 == (void *)0x0) {
          iVar15 = *(int *)(pbVar18 + 8);
          puVar21[0x10] = 0;
          local_10c = iVar15 + -1;
          uVar36 = uStack_100;
        }
        else {
          uStack_f8 = ZEXT48(uStack_f8._4_4_) << 0x20;
          uStack_f0 = *puVar1;
          local_118 = (undefined4 *)
                      FUN_0042b0b0(pvVar27,(int *)0x0,(uint)*puVar1,*(uint *)((int)puVar1 + 4),0,
                                   (int *)&uStack_f8);
          *(uint *)((int)(uint *)uStack_100 + 8) = (uint)*puVar1;
          *(uint *)((int)(uint *)uStack_100 + 0xc) = *(uint *)((int)puVar1 + 4);
          *(bool *)((int)(uint *)uStack_100 + 0x11) = (int *)uStack_f8 == (int *)0x0;
          *(undefined1 *)((int)(uint *)uStack_100 + 0x14) = 0;
          *(undefined4 *)((int)(uint *)uStack_100 + 0x44) = 0;
          *(undefined1 *)((int)(uint *)uStack_100 + 0x15) = 0;
          if ((int *)uStack_f8 != (int *)0x0) {
            local_10c = *(int *)(pbVar18 + 8) + -1;
          }
          *(int **)((int)(uint *)uStack_100 + 0x40) = (int *)uStack_f8;
          uVar36 = uStack_100;
        }
        break;
      case 0x35:
        iVar15 = *(int *)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        *local_108 = *(uint *)(iVar15 + 0x30);
        local_108[1] = *(uint *)(iVar15 + 0x34);
        iVar15 = *(int *)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        uVar23 = *(uint *)(iVar15 + 0x30);
        *(uint *)(iVar15 + 0x30) = uVar23 + 1;
        *(uint *)(iVar15 + 0x34) = *(int *)(iVar15 + 0x34) + (uint)(0xfffffffe < uVar23);
        break;
      case 0x36:
        uStack_100 = 0;
        piVar17 = *(int **)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        uStack_f8 = ZEXT48(piVar17);
        if (*piVar17 != 0) {
          uStack_f0 = ZEXT48(uStack_f0._4_4_) << 0x20;
          if (*(char *)((int)piVar17 + 0x13) == '\0') {
            uVar36 = FUN_0040cdf0(*piVar17);
            uStack_100 = uVar36;
            if (uVar36 == 0) {
              local_118 = (undefined4 *)FUN_0042b070();
              if (local_118 != (undefined4 *)0x0) goto LAB_0043fc2a;
              if (uStack_f8._4_4_ == (uint *)0x0) {
                local_118 = (undefined4 *)FUN_0040ce30();
                if (((uint *)uStack_100 != (uint *)0xffffffff) ||
                   (uStack_100._4_4_ != (ulonglong *)0x7fffffff)) {
                  iVar15 = (int)(uint *)uStack_100 + 1;
                  iVar30 = (int)uStack_100._4_4_ + (uint)(0xfffffffe < (uint *)uStack_100);
                  goto LAB_0043dc91;
                }
                *(undefined1 *)((int)(int *)uStack_f8 + 0x13) = 1;
                iVar15 = -1;
                iVar30 = 0x7fffffff;
              }
              else {
                iVar15 = 1;
                iVar30 = 0;
LAB_0043dc91:
                uStack_100 = CONCAT44(iVar30,iVar15);
              }
              uVar36 = CONCAT44(iVar30,iVar15);
            }
            if (*(int *)(pbVar18 + 0xc) == 0) {
LAB_0043dd4e:
              if (((longlong)uVar36 < 0x7fffffff00000000) || ((int)uVar36 != -1)) {
                lVar34 = uVar36 + 1;
              }
              else {
                lVar34 = 0;
              }
              FUN_0040cdc0((int)lVar34,(int)((ulonglong)lVar34 >> 0x20));
              goto LAB_0043dd79;
            }
            iVar15 = param_1[0x37];
            if (iVar15 == 0) {
              iVar15 = local_110 + *(int *)(pbVar18 + 0xc) * 0x28;
            }
            else {
              uStack_e8 = (double)CONCAT44(uStack_e8._4_4_,iVar15);
              for (iVar30 = *(int *)(iVar15 + 0x3c); iVar30 != 0; iVar30 = *(int *)(iVar30 + 0x3c))
              {
                uStack_e8._4_4_ = (byte *)((ulonglong)uStack_e8 >> 0x20);
                uStack_e8 = (double)CONCAT44(uStack_e8._4_4_,iVar30);
                iVar15 = iVar30;
              }
              iVar15 = *(int *)(iVar15 + 0x10) + *(int *)(pbVar18 + 0xc) * 0x28;
            }
            uStack_f0 = CONCAT44(iVar15,(uint *)uStack_f0);
            FUN_0041fda0();
            uVar23 = *uStack_f0._4_4_;
            if (((uVar23 != 0xffffffff) || (uStack_f0._4_4_[1] != 0x7fffffff)) &&
               (*(char *)((int)(int *)uStack_f8 + 0x13) == '\0')) {
              iVar15 = uStack_f0._4_4_[1] + (uint)(0xfffffffe < uVar23);
              if (((int)uStack_100._4_4_ <= iVar15) &&
                 (((int)uStack_100._4_4_ < iVar15 || ((uint *)uStack_100 < uVar23 + 1)))) {
                uStack_100 = CONCAT44(iVar15,uVar23 + 1);
              }
              *uStack_f0._4_4_ = (uint)(uint *)uStack_100;
              uStack_f0._4_4_[1] = (uint)uStack_100._4_4_;
              uVar36 = uStack_100;
              goto LAB_0043dd4e;
            }
LAB_0043fc22:
            local_118 = (undefined4 *)0xd;
            goto LAB_0043fc2a;
          }
LAB_0043dd79:
          if (*(char *)((int)(int *)uStack_f8 + 0x13) != '\0') {
            uStack_100 = *(ulonglong *)(this + 0xc);
            iVar15 = 0;
            uStack_f0 = uStack_f0 & 0xffffffff00000000;
            do {
              if (((iVar15 == 0) &&
                  ((uint *)((uint)(uint *)uStack_100 & 0xffffff) == (uint *)uStack_100)) &&
                 (uStack_100._4_4_ == (ulonglong *)0x0)) {
                uStack_100 = (ulonglong)
                             CONCAT14(0xfffffffe < (uint *)uStack_100,(int)(uint *)uStack_100 + 1);
              }
              else {
                FUN_00412de0(8,(undefined1 *)&uStack_100);
                if ((int)(uint *)uStack_f0 < 5) {
                  uStack_100 = (ulonglong)((uint)(uint *)uStack_100 & 0xffffff);
                }
              }
              local_118 = (undefined4 *)
                          FUN_0042b0b0((void *)*(int *)uStack_f8,(int *)0x0,(uint)(uint *)uStack_100
                                       ,(int)(uStack_100 >> 0x20),0,(int *)((int)&uStack_f8 + 4));
              iVar15 = (int)(uint *)uStack_f0 + 1;
              uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar15);
              if (99 < iVar15) break;
              if (local_118 != (undefined4 *)0x0) goto LAB_0043de40;
            } while (uStack_f8._4_4_ == (uint *)0x0);
            if ((local_118 == (undefined4 *)0x0) && (uStack_f8._4_4_ == (uint *)0x0))
            goto LAB_0043fc22;
          }
LAB_0043de40:
          *(undefined1 *)((int)(int *)uStack_f8 + 0x11) = 0;
          *(undefined1 *)((int)(int *)uStack_f8 + 0x15) = 0;
          *(undefined4 *)((int)(int *)uStack_f8 + 0x44) = 0;
        }
        *local_108 = (uint)(uint *)uStack_100;
        local_108[1] = (uint)uStack_100._4_4_;
        uVar36 = uStack_100;
        break;
      case 0x37:
      case 0x38:
        puVar21 = (undefined4 *)(local_110 + *(int *)(pbVar18 + 8) * 0x28);
        uVar23 = *(uint *)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        uVar25 = *(uint *)(pbVar18 + 0xc);
        if (*pbVar18 == 0x37) {
          uStack_100._4_4_ = (ulonglong *)(local_110 + uVar25 * 0x28);
          uVar25 = (uint)*uStack_100._4_4_;
          uStack_f8 = *uStack_100._4_4_;
        }
        else {
          uStack_f8 = (ulonglong)(int)uVar25;
        }
        uStack_100 = CONCAT44(uStack_100._4_4_,puVar21);
        if ((pbVar18[3] & 1) != 0) {
          param_1[0x1b] = param_1[0x1b] + 1;
        }
        if ((pbVar18[3] & 2) != 0) {
          this[0xc] = uVar25;
          this[0xd] = (uint)uStack_f8._4_4_;
        }
        if ((*(byte *)(puVar21 + 7) & 1) != 0) {
          puVar21[5] = 0;
          puVar21[6] = 0;
        }
        if ((pbVar18[3] & 0x10) == 0) {
          uStack_e8 = (double)(ZEXT48(uStack_e8._4_4_) << 0x20);
        }
        else {
          uStack_e8 = (double)CONCAT44(uStack_e8._4_4_,*(undefined4 *)(uVar23 + 0x40));
        }
        if ((*(byte *)((int)puVar21 + 0x1d) & 0x40) == 0) {
          uStack_f0 = (ulonglong)uVar23;
        }
        else {
          uStack_f0 = CONCAT44(*puVar21,uVar23);
        }
        FUN_0040cdc0(0,0);
        local_118 = (undefined4 *)
                    FUN_0042d700((int *)*(uint *)uStack_f0,(undefined4 *)0x0,(uint)(int *)uStack_f8,
                                 (uint)uStack_f8._4_4_,
                                 *(undefined4 **)((int)(uint *)uStack_100 + 0x14),
                                 *(uint *)((int)(uint *)uStack_100 + 0x18),(uint)uStack_f0._4_4_,
                                 (void *)(pbVar18[3] & 8));
        *(undefined1 *)((int)(uint *)uStack_f0 + 0x11) = 0;
        *(undefined1 *)((int)(uint *)uStack_f0 + 0x15) = 0;
        *(undefined4 *)((int)(uint *)uStack_f0 + 0x44) = 0;
        uVar36 = uStack_100;
        if (((local_118 == (undefined4 *)0x0) && (this[0x2e] != 0)) &&
           (*(int *)(pbVar18 + 0x10) != 0)) {
          uVar22 = *(undefined4 *)(*(int *)((int)(uint *)uStack_f0 + 4) * 0x10 + this[2]);
          uStack_e8 = (double)CONCAT44(uVar22,(int *)uStack_e8);
          iVar15 = (-(uint)((pbVar18[3] & 4) != 0) & 5) + 0x12;
          uStack_e0 = (double)CONCAT44(iVar15,*(undefined4 *)(pbVar18 + 0x10));
          (*(code *)this[0x2e])
                    (this[0x2d],iVar15,uVar22,*(undefined4 *)(pbVar18 + 0x10),(int *)uStack_f8);
          uVar36 = uStack_100;
        }
        break;
      case 0x39:
        uStack_100 = 0;
        iVar15 = *(int *)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        uStack_f8 = CONCAT44(uStack_f8._4_4_,iVar15);
        if ((this[0x2e] != 0) && (*(int *)(pbVar18 + 0x10) != 0)) {
          uStack_100 = *(ulonglong *)(iVar15 + 8);
        }
        local_118 = (undefined4 *)FUN_0042dfb0();
        if (local_118 != (undefined4 *)0x0) {
LAB_0043fc2a:
          if (*(char *)((int)this + 0x1e) == '\0') {
            if (local_118 == (undefined4 *)0xc0a) goto LAB_0043b387;
          }
          else {
            local_118 = (undefined4 *)0x7;
          }
          FUN_00411540();
          FUN_0041db50((undefined **)&DAT_004b23ac);
          goto LAB_0043b387;
        }
        FUN_0040cdc0(0,0);
        local_118 = (undefined4 *)FUN_0042d900();
        *(undefined4 *)((int)(int *)uStack_f8 + 0x44) = 0;
        if (((local_118 == (undefined4 *)0x0) && ((code *)this[0x2e] != (code *)0x0)) &&
           (*(int *)(pbVar18 + 0x10) != 0)) {
          (*(code *)this[0x2e])
                    (this[0x2d],9,
                     *(undefined4 *)(*(int *)((int)(int *)uStack_f8 + 4) * 0x10 + this[2]),
                     *(int *)(pbVar18 + 0x10),(uint *)uStack_100);
        }
        uVar36 = uStack_100;
        if ((pbVar18[8] & 1) != 0) {
          param_1[0x1b] = param_1[0x1b] + 1;
        }
        break;
      case 0x3a:
        FUN_0040dcb0(param_1[0x1b]);
        param_1[0x1b] = 0;
        uVar36 = uStack_100;
        break;
      case 0x3b:
      case 0x3c:
        local_108 = (uint *)(local_110 + *(int *)(pbVar18 + 8) * 0x28);
        puVar21 = *(undefined4 **)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        uStack_100 = CONCAT44(*puVar21,puVar21);
        local_118 = (undefined4 *)FUN_0042dfb0();
        if (local_118 != (undefined4 *)0x0) goto LAB_0043fc2a;
        if (*(char *)((int)(uint *)uStack_100 + 0x17) == '\0') {
          FUN_0040ce60((undefined4 *)&uStack_f8);
          pvVar27 = (int *)uStack_f8;
          if ((void *)this[0x12] < (int *)uStack_f8) goto LAB_0043b368;
LAB_0043e17e:
          bVar10 = FUN_00414b80(pvVar27,(int)local_108);
          if (CONCAT31(extraout_var_05,bVar10) == 0) {
            local_108[6] = (uint)(int *)uStack_f8;
            *(ushort *)(local_108 + 7) = (ushort)local_108[7] & 0xbf10 | 0x10;
            if (*(char *)((int)(uint *)uStack_100 + 0x17) == '\0') {
              local_118 = (undefined4 *)
                          FUN_0042d470(uStack_100._4_4_,0,(int *)uStack_f8,
                                       (undefined4 *)local_108[5]);
              *(undefined1 *)((int)local_108 + 0x1f) = 1;
              uVar36 = uStack_100;
            }
            else {
              local_118 = (undefined4 *)FUN_004286c0((int *)uStack_f8,uStack_100._4_4_);
              *(undefined1 *)((int)local_108 + 0x1f) = 1;
              uVar36 = uStack_100;
            }
            break;
          }
          goto LAB_0043b52e;
        }
        FUN_0040ce30();
        iVar15 = (int)this[0x12] >> 0x1f;
        if (((int)uStack_f0._4_4_ <= iVar15) &&
           (((int)uStack_f0._4_4_ < iVar15 || ((uint *)uStack_f0 <= (void *)this[0x12])))) {
          uStack_f8 = CONCAT44(uStack_f8._4_4_,(uint *)uStack_f0);
          pvVar27 = (uint *)uStack_f0;
          goto LAB_0043e17e;
        }
LAB_0043b368:
        FUN_0041db50((undefined **)"string or blob too big");
        local_118 = (undefined4 *)0x12;
        goto LAB_0043b387;
      case 0x3d:
        iVar15 = *(int *)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        uStack_100 = CONCAT44(uStack_100._4_4_,iVar15);
        if (*(char *)(iVar15 + 0x14) != '\0') goto LAB_0043e211;
        if (*(char *)(iVar15 + 0x15) == '\0') {
          if (*(undefined4 **)(iVar15 + 0x38) == (undefined4 *)0x0) {
            local_118 = (undefined4 *)FUN_0042dfb0();
            if (local_118 != (undefined4 *)0x0) goto LAB_0043fc2a;
            if (*(char *)((int)(uint *)uStack_100 + 0x11) == '\0') {
              local_118 = (undefined4 *)FUN_0040ce30();
            }
            else {
              uStack_f8 = *(ulonglong *)((int)(uint *)uStack_100 + 8);
            }
          }
          else {
            piVar17 = (int *)**(undefined4 **)(iVar15 + 0x38);
            iVar30 = *piVar17;
            uStack_f0 = CONCAT44(iVar30,piVar17);
            local_118 = (undefined4 *)(**(code **)(iVar30 + 0x30))(*(undefined4 *)(iVar15 + 0x38));
            FUN_00408130((int)this);
            param_1[0x17] = *(int *)((int)(uint *)uStack_f0 + 8);
            *(undefined4 *)((int)(uint *)uStack_f0 + 8) = 0;
          }
        }
        else {
          uStack_f8 = *(ulonglong *)(iVar15 + 0x18);
        }
        *local_108 = (uint)(int *)uStack_f8;
        local_108[1] = (uint)uStack_f8._4_4_;
        uVar36 = uStack_100;
        break;
      case 0x3e:
        piVar17 = *(int **)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        uStack_100 = CONCAT44(uStack_100._4_4_,piVar17);
        *(undefined1 *)(piVar17 + 5) = 1;
        *(undefined1 *)((int)piVar17 + 0x11) = 0;
        uVar36 = uStack_100;
        if (*piVar17 != 0) {
          FUN_0040c720();
          uVar36 = uStack_100;
        }
        break;
      case 0x3f:
        piVar17 = *(int **)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        uStack_100 = CONCAT44(*piVar17,piVar17);
        if (*piVar17 == 0) {
          uStack_f8 = CONCAT44(uStack_f8._4_4_,1);
        }
        else {
          local_118 = (undefined4 *)FUN_0042b070();
          piVar17 = (int *)(uint *)uStack_100;
        }
        *(undefined1 *)(piVar17 + 5) = (undefined1)uStack_f8;
        *(undefined1 *)((int)(uint *)uStack_100 + 0x15) = 0;
        *(undefined1 *)((int)(uint *)uStack_100 + 0x11) = 0;
        *(undefined4 *)((int)(uint *)uStack_100 + 0x44) = 0;
        uVar36 = uStack_100;
        if ((0 < *(int *)(pbVar18 + 8)) && ((int *)uStack_f8 != (int *)0x0)) {
          local_10c = *(int *)(pbVar18 + 8) + -1;
        }
        break;
      case 0x40:
        param_1[0x2d] = param_1[0x2d] + 1;
        goto LAB_0043e394;
      case 0x41:
LAB_0043e394:
        piVar17 = *(int **)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        uStack_f8 = CONCAT44(uStack_f8._4_4_,1);
        uStack_100 = CONCAT44(*piVar17,piVar17);
        if (*piVar17 != 0) {
          local_118 = (undefined4 *)FUN_0042b040();
          *(bool *)((int)(uint *)uStack_100 + 0x12) = (int *)uStack_f8 == (int *)0x0;
          *(undefined1 *)((int)(uint *)uStack_100 + 0x15) = 0;
          ((uint *)uStack_100)[0x11] = 0;
          *(undefined1 *)((int)(uint *)uStack_100 + 0x11) = 0;
          piVar17 = (int *)(uint *)uStack_100;
        }
        *(undefined1 *)(piVar17 + 5) = (undefined1)uStack_f8;
        uVar36 = uStack_100;
        if ((int *)uStack_f8 != (int *)0x0) {
          local_10c = *(int *)(pbVar18 + 8) + -1;
        }
        break;
      case 0x42:
      case 0x43:
        if (this[0x38] != 0) goto LAB_0043fc71;
        piVar17 = *(int **)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        uStack_100 = CONCAT44(uStack_100._4_4_,piVar17);
        uVar36 = uStack_100;
        if (piVar17 != (int *)0x0) {
          iVar15 = *piVar17;
          uStack_100 = CONCAT44(iVar15,piVar17);
          if (iVar15 == 0) {
            *(undefined1 *)(piVar17 + 5) = 1;
            uVar36 = uStack_100;
          }
          else {
            uStack_f8 = CONCAT44(uStack_f8._4_4_,1);
            if (*pbVar18 == 0x43) {
              local_118 = (undefined4 *)FUN_0042d4b0(iVar15,(undefined4 *)&uStack_f8);
            }
            else {
              local_118 = (undefined4 *)FUN_0042d5d0(iVar15,(undefined4 *)&uStack_f8);
            }
            *(undefined1 *)((int)(uint *)uStack_100 + 0x14) = (undefined1)uStack_f8;
            *(undefined4 *)((int)(uint *)uStack_100 + 0x44) = 0;
            if ((int *)uStack_f8 == (int *)0x0) {
              local_10c = *(int *)(pbVar18 + 8) + -1;
              bVar10 = pbVar18[3];
              if (bVar10 != 0) {
                param_1[bVar10 + 0x2b] = param_1[bVar10 + 0x2b] + 1;
              }
            }
            *(undefined1 *)((int)(uint *)uStack_100 + 0x11) = 0;
            uVar36 = uStack_100;
          }
        }
        break;
      case 0x44:
      case 0x45:
        if ((*(byte *)(local_110 + *(int *)(pbVar18 + 4) * 0x28 + 0x1c) & 1) == 0) {
          uVar36 = FUN_0041fc90();
          if (uVar36 == 0) {
            uVar23 = 0;
          }
          else {
            uVar23 = 1;
          }
        }
        else {
          uVar23 = 2;
        }
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar23);
        if ((*(byte *)(local_110 + *(int *)(pbVar18 + 8) * 0x28 + 0x1c) & 1) == 0) {
          uVar36 = FUN_0041fc90();
          if (uVar36 == 0) {
            iVar15 = 0;
          }
          else {
            iVar15 = 1;
          }
        }
        else {
          iVar15 = 2;
          uStack_100._0_4_ = (uint *)uVar23;
        }
        if (*pbVar18 == 0x45) {
          bVar10 = (&UNK_004b3050)[iVar15 + (int)(uint *)uStack_100 * 3];
        }
        else {
          bVar10 = (&UNK_004b305c)[iVar15 + (int)(uint *)uStack_100 * 3];
        }
        uVar23 = (uint)bVar10;
        uStack_100 = CONCAT44(iVar15,uVar23);
        local_108 = (uint *)(local_110 + *(int *)(pbVar18 + 0xc) * 0x28);
        uVar36 = uStack_100;
        if (uVar23 == 2) {
          *(ushort *)(local_108 + 7) = (ushort)local_108[7] & 0xbf01 | 1;
        }
        else {
          *local_108 = uVar23;
          local_108[1] = 0;
          *(ushort *)(local_108 + 7) = (ushort)local_108[7] & 0xbf04 | 4;
        }
        break;
      case 0x46:
        piVar17 = *(int **)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        iVar15 = local_110 + *(int *)(pbVar18 + 8) * 0x28;
        piVar29 = (int *)*piVar17;
        uStack_100 = CONCAT44(piVar29,piVar17);
        uVar36 = uStack_100;
        if (piVar29 != (int *)0x0) {
          if ((*(byte *)(iVar15 + 0x1d) & 0x40) != 0) {
            local_118 = (undefined4 *)FUN_00414c50();
            uVar36 = uStack_100;
            if (local_118 != (undefined4 *)0x0) break;
            piVar29 = (int *)uStack_100._4_4_;
          }
          uVar23 = *(uint *)(iVar15 + 0x18);
          uStack_f8 = CONCAT44(*(undefined4 **)(iVar15 + 0x14),uVar23);
          local_118 = (undefined4 *)
                      FUN_0042d700(piVar29,*(undefined4 **)(iVar15 + 0x14),uVar23,
                                   (int)uVar23 >> 0x1f,(undefined4 *)&DAT_004b6404,0,0,
                                   *(void **)(pbVar18 + 0xc));
          *(undefined4 *)((int)(uint *)uStack_100 + 0x44) = 0;
          uVar36 = uStack_100;
        }
        break;
      case 0x47:
        puVar21 = *(undefined4 **)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        pvVar27 = (void *)*puVar21;
        uStack_100 = CONCAT44(pvVar27,puVar21);
        uVar36 = uStack_100;
        if (pvVar27 != (void *)0x0) {
          uStack_f0._0_6_ = CONCAT24(*(undefined2 *)(pbVar18 + 0xc),puVar21[10]);
          uStack_f0 = (ulonglong)(uint6)uStack_f0;
          uStack_e0 = (double)CONCAT44(uStack_e0._4_4_,local_110 + *(int *)(pbVar18 + 8) * 0x28);
          local_118 = (undefined4 *)FUN_0042b0b0(pvVar27,(int *)&uStack_f0,0,0,0,(int *)&uStack_f8);
          if ((local_118 == (undefined4 *)0x0) && ((int *)uStack_f8 == (int *)0x0)) {
            local_118 = (undefined4 *)FUN_0042d900();
          }
          *(undefined4 *)((int)(uint *)uStack_100 + 0x44) = 0;
          uVar36 = uStack_100;
        }
        break;
      case 0x48:
        piVar17 = *(int **)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        iVar15 = *piVar17;
        uStack_100 = CONCAT44(piVar17,iVar15);
        *(undefined2 *)(local_108 + 7) = 1;
        uVar36 = uStack_100;
        if (iVar15 != 0) {
          local_118 = (undefined4 *)FUN_0042dfb0();
          if (local_118 != (undefined4 *)0x0) goto LAB_0043fc2a;
          uVar36 = uStack_100;
          if (*(char *)((int)uStack_100._4_4_ + 0x14) == '\0') {
            local_118 = (undefined4 *)FUN_0042e040((undefined4 *)&uStack_f8);
            if (local_118 != (undefined4 *)0x0) goto LAB_0043fc2a;
            *local_108 = (uint)(int *)uStack_f8;
            local_108[1] = (uint)uStack_f8._4_4_;
            *(undefined2 *)(local_108 + 7) = 4;
            uVar36 = uStack_100;
          }
        }
        break;
      case 0x49:
        if ((*(byte *)(local_110 + 0x1c + *(int *)(pbVar18 + 4) * 0x28) & 1) != 0) {
          local_10c = *(int *)(pbVar18 + 8) + -1;
        }
        break;
      case 0x4a:
        if ((*(byte *)(local_110 + 0x1c + *(int *)(pbVar18 + 4) * 0x28) & 1) == 0) {
          local_10c = *(int *)(pbVar18 + 8) + -1;
        }
        break;
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
        puVar28 = (uint *)(local_110 + *(int *)(pbVar18 + 4) * 0x28);
        puVar3 = (uint *)(local_110 + *(int *)(pbVar18 + 0xc) * 0x28);
        uStack_100 = CONCAT26((short)puVar28[7],(undefined6)uStack_100);
        uStack_f8 = CONCAT62(uStack_f8._2_6_,(short)puVar3[7]);
        bVar11 = (byte)(short)puVar3[7];
        bVar24 = (byte)(short)puVar28[7];
        if (((bVar11 | bVar24) & 1) == 0) {
          uStack_100 = CONCAT35(uStack_100._5_3_,CONCAT14(pbVar18[3],uVar23)) & 0xffffff67ffffffff;
          if ((pbVar18[3] & 0x67) != 0) {
            FUN_00430070(puVar28,bVar10);
            FUN_00430070(puVar3,(byte)local_3c);
            if (*(char *)((int)this + 0x1e) != '\0') goto LAB_0043b52e;
          }
          if ((*(byte *)((int)puVar28 + 0x1d) & 0x40) != 0) {
            FUN_00414c50();
          }
          if ((*(byte *)((int)puVar3 + 0x1d) & 0x40) != 0) {
            FUN_00414c50();
          }
          uVar23 = FUN_00423c70(puVar28,puVar3);
        }
        else {
          bVar10 = pbVar18[3];
          if (-1 < (char)bVar10) {
            uVar36 = uStack_100;
            if ((bVar10 & 0x10) == 0) {
              if ((bVar10 & 8) != 0) {
                local_10c = *(int *)(pbVar18 + 8) + -1;
              }
            }
            else {
              local_108 = (uint *)(local_110 + *(int *)(pbVar18 + 8) * 0x28);
              *(ushort *)(local_108 + 7) = (ushort)local_108[7] & 0xbf01 | 1;
            }
            break;
          }
          uVar23 = (uint)((bVar11 & bVar24 & 1) == 0);
        }
        uVar12 = (undefined1)(uStack_100 >> 0x30);
        switch(*pbVar18) {
        case 0x4b:
          uVar23 = (uint)(uVar23 != 0);
          break;
        case 0x4c:
          uVar23 = (uint)(uVar23 == 0);
          break;
        case 0x4d:
          uVar23 = (uint)(0 < (int)uVar23);
          break;
        case 0x4e:
          uVar23 = (uint)((int)uVar23 < 1);
          break;
        case 0x4f:
          uVar23 = (uint)((int)uVar23 < 0);
          break;
        default:
          uVar23 = (uint)(-1 < (int)uVar23);
        }
        uVar36 = CONCAT44((int)(uStack_100 >> 0x20),uVar23);
        if ((pbVar18[3] & 0x10) == 0) {
          if (uVar23 != 0) {
            local_10c = *(int *)(pbVar18 + 8) + -1;
          }
          *(undefined1 *)(puVar28 + 7) = uVar12;
          *(undefined1 *)(puVar3 + 7) = (undefined1)uStack_f8;
        }
        else {
          local_108 = (uint *)(local_110 + *(int *)(pbVar18 + 8) * 0x28);
          *(ushort *)(local_108 + 7) = (ushort)local_108[7] & 0xbf04 | 4;
          *local_108 = uVar23;
          local_108[1] = 0;
          *(undefined1 *)(puVar28 + 7) = uVar12;
          *(undefined1 *)(puVar3 + 7) = (undefined1)uStack_f8;
        }
        break;
      case 0x51:
      case 0x5c:
        piVar17 = *(int **)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        uStack_100 = CONCAT44(uStack_100._4_4_,piVar17);
        uVar36 = uStack_100;
        if (*piVar17 != 0) {
          uStack_f8._0_6_ = CONCAT24(*(undefined2 *)(pbVar18 + 0x10),piVar17[10]);
          uStack_f8 = CONCAT26((ushort)(pbVar18[3] != 0) * 8 + 4,(undefined6)uStack_f8);
          uStack_e8 = (double)CONCAT44(uStack_e8._4_4_,local_110 + *(int *)(pbVar18 + 0xc) * 0x28);
          local_118 = (undefined4 *)FUN_0042e160((int *)&uStack_f8,(int *)((int)&uStack_100 + 4));
          if (*pbVar18 == 0x51) {
            iVar15 = -(int)uStack_100._4_4_;
          }
          else {
            iVar15 = (int)uStack_100._4_4_ + 1;
          }
          uStack_100 = CONCAT44(iVar15,(uint *)uStack_100);
          uVar36 = uStack_100;
          if (0 < iVar15) {
            local_10c = *(int *)(pbVar18 + 8) + -1;
          }
        }
        break;
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
        local_108 = (uint *)(local_110 + *(int *)(pbVar18 + 0xc) * 0x28);
        if (((*(byte *)(local_110 + *(int *)(pbVar18 + 8) * 0x28 + 0x1c) |
             *(byte *)(local_110 + *(int *)(pbVar18 + 4) * 0x28 + 0x1c)) & 1) == 0) {
          uStack_100 = FUN_0041fc90();
          uStack_f8 = FUN_0041fc90();
          uVar23 = (uint)(uStack_f8 >> 0x20);
          bVar10 = *pbVar18;
          if (bVar10 == 0x52) {
            uVar25 = (uint)(uint *)uStack_100 & (uint)uStack_f8;
            uVar23 = (uint)uStack_100._4_4_ & uVar23;
LAB_0043bc6f:
            uStack_100 = CONCAT44(uVar23,uVar25);
          }
          else {
            if (bVar10 == 0x53) {
              uVar25 = (uint)(uint *)uStack_100 | (uint)uStack_f8;
              uVar23 = (uint)uStack_100._4_4_ | uVar23;
              goto LAB_0043bc6f;
            }
            if (bVar10 == 0x54) {
              uStack_100 = __allshl((byte)uStack_f8,(int)uStack_100._4_4_);
            }
            else {
              uStack_100 = __allshr((byte)uStack_f8,(int)uStack_100._4_4_);
            }
          }
          *local_108 = (uint)(uint *)uStack_100;
          local_108[1] = (uint)uStack_100._4_4_;
          *(ushort *)(local_108 + 7) = (ushort)local_108[7] & 0xbf04 | 4;
          uVar36 = uStack_100;
        }
        else {
          FUN_0042e3e0((int)local_108);
          uVar36 = uStack_100;
        }
        break;
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
        puVar1 = (ulonglong *)(local_110 + *(int *)(pbVar18 + 4) * 0x28);
        FUN_0042ff90();
        puVar2 = (ulonglong *)(local_110 + *(int *)(pbVar18 + 8) * 0x28);
        FUN_0042ff90();
        local_108 = (uint *)(local_110 + *(int *)(pbVar18 + 0xc) * 0x28);
        uVar5 = *(ushort *)((int)puVar2 + 0x1c) | *(ushort *)((int)puVar1 + 0x1c);
        uStack_100 = CONCAT44(uStack_100._4_4_,(uint)uVar5);
        if ((uVar5 & 1) != 0) goto LAB_0043b9f7;
        if ((*(byte *)((int)puVar2 + 0x1c) & *(byte *)((int)puVar1 + 0x1c) & 4) == 0) {
          fVar33 = FUN_0041fd20();
          uStack_e8 = (double)fVar33;
          fVar33 = FUN_0041fd20();
          uStack_e0 = (double)fVar33;
          switch(*pbVar18) {
          case 0x56:
            uStack_e0 = uStack_e0 + uStack_e8;
            break;
          case 0x57:
            uStack_e0 = uStack_e0 - uStack_e8;
            break;
          case 0x58:
            uStack_e0 = uStack_e0 * uStack_e8;
            break;
          case 0x59:
            if (uStack_e8 == 0.0) goto LAB_0043b9f7;
            uStack_e0 = uStack_e0 / uStack_e8;
            break;
          default:
            uVar36 = FUN_004a0540();
            uStack_f8 = uVar36;
            uStack_f0 = FUN_004a0540();
            if (uVar36 == 0) goto LAB_0043b9f7;
            if (uVar36 == 0xffffffffffffffff) {
              uVar36 = 1;
              uStack_f8 = 1;
            }
            lStack_10 = __allrem((uint)uStack_f0,(uint)(uStack_f0 >> 0x20),(uint)uVar36,
                                 (uint)(uVar36 >> 0x20));
            uStack_e0 = (double)lStack_10;
          }
          iVar15 = FUN_00408340();
          if (iVar15 != 0) goto LAB_0043b9f7;
          *(double *)(local_108 + 2) = uStack_e0;
          *(ushort *)(local_108 + 7) = (ushort)local_108[7] & 0xbf08 | 8;
          uVar36 = uStack_100;
          if ((uStack_100 & 8) == 0) {
            FUN_0040d2d0();
            uVar36 = uStack_100;
          }
          break;
        }
        uVar23 = (uint)*puVar1;
        uVar25 = *(uint *)((int)puVar1 + 4);
        uStack_f8 = *puVar1;
        uVar6 = (uint)*puVar2;
        uVar7 = *(uint *)((int)puVar2 + 4);
        uStack_f0 = *puVar2;
        switch(*pbVar18) {
        case 0x56:
          uVar16 = uVar6 + uVar23;
          uStack_f0._4_4_ = (uint *)(uVar7 + uVar25 + (uint)CARRY4(uVar6,uVar23));
          goto LAB_0043b8e2;
        case 0x57:
          uVar16 = uVar6 - uVar23;
          uStack_f0._4_4_ = (uint *)((uVar7 - uVar25) - (uint)(uVar6 < uVar23));
          goto LAB_0043b8e2;
        case 0x58:
          lVar34 = __allmul(uVar6,uVar7,uVar23,uVar25);
          break;
        case 0x59:
          if (uVar23 == 0 && uVar25 == 0) {
LAB_0043b9f7:
            FUN_0042e3e0((int)local_108);
            uVar36 = uStack_100;
            goto LAB_0043fa8c;
          }
          if ((((uVar23 & uVar25) == 0xffffffff) && (uVar6 == 0)) && (uVar7 == 0x80000000)) {
            uVar23 = 1;
            uVar25 = 0;
            uStack_f8 = 1;
          }
          lVar34 = __alldiv(uVar6,uVar7,uVar23,uVar25);
          break;
        default:
          if (uVar23 == 0 && uVar25 == 0) goto LAB_0043b9f7;
          if ((uVar23 & uVar25) == 0xffffffff) {
            uVar23 = 1;
            uVar25 = 0;
            uStack_f8 = 1;
          }
          lVar34 = __allrem(uVar6,uVar7,uVar23,uVar25);
        }
        uVar16 = (uint)lVar34;
        uStack_f0._4_4_ = (uint *)((ulonglong)lVar34 >> 0x20);
LAB_0043b8e2:
        uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar16);
        *local_108 = uVar16;
        local_108[1] = (uint)uStack_f0._4_4_;
        *(ushort *)(local_108 + 7) = (ushort)local_108[7] & 0xbf04 | 4;
        uVar36 = uStack_100;
        break;
      case 0x5b:
        iVar15 = local_110 + *(int *)(pbVar18 + 4) * 0x28;
        puVar28 = (uint *)(local_110 + *(int *)(pbVar18 + 8) * 0x28);
        local_108 = (uint *)(local_110 + *(int *)(pbVar18 + 0xc) * 0x28);
        puStack_38 = puVar28;
        if ((((byte)puVar28[7] | (byte)*(ushort *)(iVar15 + 0x1c)) & 1) == 0) {
          if ((((((*(ushort *)(iVar15 + 0x1c) & 0x4000) != 0) &&
                (iVar30 = FUN_00414c50(), iVar30 != 0)) ||
               (((*(byte *)((int)puVar28 + 0x1d) & 0x40) != 0 &&
                (iVar30 = FUN_00414c50(), iVar30 != 0)))) ||
              (((*(byte *)(iVar15 + 0x1c) & 0x12) == 0 &&
               (iVar30 = FUN_0041fc10(local_3c & 0xff), iVar30 != 0)))) ||
             (((puVar28[7] & 0x12) == 0 && (iVar30 = FUN_0041fc10(local_3c & 0xff), iVar30 != 0))))
          goto LAB_0043b52e;
          puVar3 = puStack_38;
          uVar23 = puVar28[6] + *(int *)(iVar15 + 0x18);
          uStack_100 = (ulonglong)(int)uVar23;
          iVar30 = (int)this[0x12] >> 0x1f;
          if ((iVar30 < (int)uVar23 >> 0x1f) ||
             ((iVar30 <= (int)uVar23 >> 0x1f && (this[0x12] < uVar23)))) goto LAB_0043b368;
          *(ushort *)(local_108 + 7) = (ushort)local_108[7] & 0xbf02 | 2;
          bVar10 = FUN_00414b80((void *)(uVar23 + 2),(int)local_108);
          if (CONCAT31(extraout_var_01,bVar10) != 0) goto LAB_0043b52e;
          if (local_108 != puVar3) {
            uVar23 = puVar3[6];
            puVar21 = (undefined4 *)puVar3[5];
            puVar19 = (undefined4 *)local_108[5];
            for (uVar25 = uVar23 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
              *puVar19 = *puVar21;
              puVar21 = puVar21 + 1;
              puVar19 = puVar19 + 1;
            }
            for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
              *(undefined1 *)puVar19 = *(undefined1 *)puVar21;
              puVar21 = (undefined4 *)((int)puVar21 + 1);
              puVar19 = (undefined4 *)((int)puVar19 + 1);
            }
          }
          uVar23 = *(uint *)(iVar15 + 0x18);
          puVar21 = *(undefined4 **)(iVar15 + 0x14);
          puVar19 = (undefined4 *)(puVar3[6] + local_108[5]);
          for (uVar25 = uVar23 >> 2; uVar25 != 0; uVar25 = uVar25 - 1) {
            *puVar19 = *puVar21;
            puVar21 = puVar21 + 1;
            puVar19 = puVar19 + 1;
          }
          for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
            *(undefined1 *)puVar19 = *(undefined1 *)puVar21;
            puVar21 = (undefined4 *)((int)puVar21 + 1);
            puVar19 = (undefined4 *)((int)puVar19 + 1);
          }
          *(undefined1 *)((int)(uint *)uStack_100 + local_108[5]) = 0;
          *(undefined1 *)(local_108[5] + 1 + (int)(uint *)uStack_100) = 0;
          *(byte *)((int)local_108 + 0x1d) = *(byte *)((int)local_108 + 0x1d) | 2;
          local_108[6] = (uint)(uint *)uStack_100;
          *(char *)((int)local_108 + 0x1f) = (char)local_3c;
          uVar36 = uStack_100;
        }
        else {
          FUN_0042e3e0((int)local_108);
          uVar36 = uStack_100;
        }
        break;
      case 0x5d:
        local_108 = (uint *)(local_110 + *(int *)(pbVar18 + 8) * 0x28);
        if ((*(byte *)(local_110 + *(int *)(pbVar18 + 4) * 0x28 + 0x1c) & 1) == 0) {
          uVar36 = FUN_0041fc90();
          FUN_0040d360(~(uint)uVar36,~(uint)(uVar36 >> 0x20));
          uVar36 = uStack_100;
        }
        else {
          FUN_0042e3e0((int)local_108);
          uVar36 = uStack_100;
        }
        break;
      case 0x5e:
        *pbVar18 = 9;
        uVar23 = FUN_00408380(*(char **)(pbVar18 + 0x10));
        *(uint *)(pbVar18 + 4) = uVar23;
        if ((char)local_3c != '\x01') {
          bVar10 = FUN_0042e460(this_00,(void *)0xffffffff,'\x01');
          local_118 = (undefined4 *)CONCAT31(extraout_var,bVar10);
          if (local_118 == (undefined4 *)0x12) goto LAB_0043b368;
          iVar15 = FUN_0041fbf0(local_3c & 0xff);
          if (iVar15 != 0) goto LAB_0043b52e;
          local_108[9] = 0;
          *(ushort *)(local_108 + 7) = (ushort)local_108[7] & 0xfbff | 0x800;
          if (pbVar18[1] == 0xff) {
            FUN_00408130((int)this);
          }
          pbVar18[1] = 0xff;
          *(uint *)(pbVar18 + 0x10) = local_108[5];
          *(uint *)(pbVar18 + 4) = local_108[6];
        }
        if ((int)this[0x12] < *(int *)(pbVar18 + 4)) goto LAB_0043b368;
LAB_0043b401:
        *(undefined2 *)(local_108 + 7) = 0xa02;
        local_108[5] = *(uint *)(pbVar18 + 0x10);
        local_108[6] = *(uint *)(pbVar18 + 4);
        *(char *)((int)local_108 + 0x1f) = (char)local_3c;
        uVar36 = uStack_100;
        break;
      case 0x5f:
        uStack_100 = uStack_100 & 0xffffffff;
        uVar23 = this[0x22];
        uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar23);
        uVar36 = uStack_100;
        while (uStack_100._4_4_ = (ulonglong *)(uVar36 >> 0x20), uVar23 != 0) {
          if (((*(int *)(uVar23 + 0x44) == -0x420df25d) && (*(byte *)(uVar23 + 0x65) < 2)) &&
             (-1 < *(int *)(uVar23 + 0x54))) {
            uStack_100._0_4_ = (uint *)uVar36;
            uStack_100 = CONCAT44((int)uStack_100._4_4_ + 1,(uint *)uStack_100);
            uVar36 = uStack_100;
          }
          uStack_100 = uVar36;
          uVar23 = *(uint *)(uVar23 + 8);
          uStack_f8._4_4_ = (uint *)(uStack_f8 >> 0x20);
          uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar23);
          uVar36 = uStack_100;
        }
        *(undefined2 *)(local_108 + 7) = 1;
        if ((int)uStack_100._4_4_ < 2) {
          uStack_f8 = CONCAT44(*(undefined4 *)(pbVar18 + 0xc),(int *)uStack_f8);
          uStack_100 = uVar36;
          local_118 = (undefined4 *)
                      FUN_0042c3a0(*(undefined4 *)(pbVar18 + 4),(undefined4 *)&uStack_100);
          *(undefined2 *)(local_108 + 7) = 4;
          *local_108 = (uint)(uint *)uStack_100;
          local_108[1] = (int)(uint *)uStack_100 >> 0x1f;
          uVar36 = uStack_100;
          if ((local_118 == (undefined4 *)0x0) && ((uint *)uStack_100 != (uint *)0x0)) {
            FUN_0040f090(this,(int)(uint *)uStack_100);
            local_31 = '\x01';
            uVar36 = uStack_100;
          }
        }
        else {
          local_118 = (undefined4 *)0x6;
          *(undefined1 *)(param_1 + 0xe) = 2;
        }
        break;
      case 0x60:
        uStack_100 = ZEXT48(uStack_100._4_4_) << 0x20;
        local_118 = (undefined4 *)
                    FUN_0042c150(*(void **)(pbVar18 + 4),
                                 (int *)(-(uint)(*(int *)(pbVar18 + 0xc) != 0) & (uint)&uStack_100))
        ;
        uVar36 = uStack_100;
        if (*(int *)(pbVar18 + 0xc) != 0) {
          param_1[0x1b] = param_1[0x1b] + (int)(uint *)uStack_100;
          iVar15 = *(int *)(pbVar18 + 0xc);
          if (0 < iVar15) {
            uVar23 = *(uint *)(local_110 + iVar15 * 0x28);
            piVar17 = (int *)(local_110 + iVar15 * 0x28);
            *piVar17 = uVar23 + (int)(uint *)uStack_100;
            piVar17[1] = piVar17[1] + ((int)(uint *)uStack_100 >> 0x1f) +
                         (uint)CARRY4(uVar23,(uint)(uint *)uStack_100);
          }
        }
        break;
      case 0x61:
      case 0x62:
        uStack_f8 = CONCAT44(uStack_f8._4_4_,*(int *)(pbVar18 + 4) * 0x10 + this[2]);
        uVar23 = ((*pbVar18 != 0x62) - 1 & 3) + 2;
        uStack_100 = (ulonglong)uVar23 << 0x20;
        local_118 = FUN_00429a60((uint *)&uStack_100,uVar23);
        *local_108 = (uint)(uint *)uStack_100;
        local_108[1] = (int)(uint *)uStack_100 >> 0x1f;
        uVar36 = uStack_100;
        break;
      case 99:
        uStack_100 = CONCAT44(uStack_100._4_4_,*(undefined4 *)(pbVar18 + 4));
        FUN_0040c380((int)this);
        if ((*(int *)(pbVar18 + 8) != 0) ||
           ((*(byte *)(*(int *)((int)(uint *)uStack_100 * 0x10 + 0xc + this[2]) + 0x4a) & 1) != 0))
        {
          pcVar20 = "sqlite_temp_master";
          if ((uint *)uStack_100 != (uint *)0x1) {
            pcVar20 = "sqlite_master";
          }
          uStack_100 = CONCAT44(pcVar20,(uint *)uStack_100);
          uStack_f0 = CONCAT44(param_1 + 0x17,*(undefined4 *)(pbVar18 + 4));
          uStack_f8._4_4_ = this;
          pbVar18 = (byte *)FUN_00418920((undefined **)
                                         "SELECT name, rootpage, sql FROM \'%q\'.%s WHERE %s ORDER BY rowid"
                                        );
          uStack_f8 = CONCAT44(uStack_f8._4_4_,pbVar18);
          if (pbVar18 == (byte *)0x0) {
            local_118 = (undefined4 *)0x7;
          }
          else {
            *(undefined1 *)(this + 0x1f) = 1;
            uStack_e8 = (double)((ulonglong)uStack_e8 & 0xffffffff00000000);
            local_118 = (undefined4 *)
                        FUN_00441a30((int)this,pbVar18,FUN_00438640,(int)&uStack_f8 + 4,(int *)0x0);
            if (local_118 == (undefined4 *)0x0) {
              local_118 = (int *)uStack_e8;
            }
            FUN_00408130((int)this);
            *(undefined1 *)(this + 0x1f) = 0;
          }
        }
        FUN_0040c430();
        uVar36 = uStack_100;
        if (local_118 == (undefined4 *)0x7) goto LAB_0043b52e;
        break;
      case 100:
        local_118 = (undefined4 *)FUN_0041a850((int)this);
        uVar36 = uStack_100;
        break;
      case 0x65:
        FUN_0041ad20(*(char **)(pbVar18 + 0x10));
        uVar36 = uStack_100;
        break;
      case 0x66:
        FUN_00416330(*(char **)(pbVar18 + 0x10));
        uVar36 = uStack_100;
        break;
      case 0x67:
        FUN_00416c80(*(char **)(pbVar18 + 0x10));
        uVar36 = uStack_100;
        break;
      case 0x68:
        uStack_100 = CONCAT44(uStack_100._4_4_,*(int *)(pbVar18 + 8));
        puVar21 = FUN_00412930(*(int *)(pbVar18 + 8) * 4 + 4);
        uStack_100 = CONCAT44(puVar21,(uint *)uStack_100);
        if (puVar21 == (undefined4 *)0x0) goto LAB_0043b52e;
        piVar17 = (int *)(local_110 + *(int *)(pbVar18 + 0xc) * 0x28);
        iVar15 = *(int *)(pbVar18 + 4);
        iVar30 = 0;
        uStack_f8 = uStack_f8 & 0xffffffff00000000;
        uStack_f0._4_4_ = (uint *)piVar17;
        if (0 < (int)(uint *)uStack_100) {
          do {
            uVar36 = FUN_0041fc90();
            *(int *)((int)uStack_100._4_4_ + (int *)uStack_f8 * 4) = (int)uVar36;
            iVar30 = (int)(int *)uStack_f8 + 1;
            uStack_f8 = CONCAT44(uStack_f8._4_4_,iVar30);
            puVar21 = (undefined4 *)uStack_100._4_4_;
          } while (iVar30 < (int)(uint *)uStack_100);
        }
        puVar21[iVar30] = 0;
        uVar22 = FUN_0042a350(*(int *)((uint)pbVar18[3] * 0x10 + 4 + this[2]),(int)uStack_100,
                              *uStack_f0._4_4_,(int *)((int)&uStack_f8 + 4));
        uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar22);
        FUN_00408130((int)this);
        uVar23 = *uStack_f0._4_4_;
        *uStack_f0._4_4_ = uVar23 - (int)uStack_f8._4_4_;
        uStack_f0._4_4_[1] =
             (uStack_f0._4_4_[1] - ((int)uStack_f8._4_4_ >> 0x1f)) -
             (uint)(uVar23 < uStack_f8._4_4_);
        FUN_0042e3e0(local_110 + iVar15 * 0x28);
        if (uStack_f8._4_4_ != (uint *)0x0) {
          if ((uint *)uStack_f0 == (void *)0x0) goto LAB_0043b52e;
          FUN_0042e460((uint *)uStack_f0,(void *)0xffffffff,'\x01');
        }
        FUN_0041fbf0(local_3c & 0xff);
        uVar36 = uStack_100;
        break;
      case 0x69:
        iVar15 = local_110 + *(int *)(pbVar18 + 4) * 0x28;
        puVar28 = (uint *)(local_110 + *(int *)(pbVar18 + 8) * 0x28);
        if (((*(byte *)(iVar15 + 0x1c) & 0x20) == 0) &&
           (FUN_00414d00(), (*(byte *)(iVar15 + 0x1c) & 0x20) == 0)) goto LAB_0043b52e;
        FUN_00413860(*puVar28,puVar28[1]);
        uVar36 = uStack_100;
        break;
      case 0x6a:
        if (this[0x38] != 0) goto LAB_0043fc71;
        piVar17 = (int *)(local_110 + *(int *)(pbVar18 + 4) * 0x28);
        if (((*(byte *)(local_110 + 0x1c + *(int *)(pbVar18 + 4) * 0x28) & 0x20) == 0) ||
           (iVar15 = FUN_0040af40(*piVar17), iVar15 == 0)) {
          FUN_0042e3e0((int)piVar17);
          local_10c = *(int *)(pbVar18 + 8) + -1;
          uVar36 = uStack_100;
        }
        else {
          FUN_0040d360((uint *)uStack_100,(int)(uStack_100 >> 0x20));
          uVar36 = uStack_100;
        }
        break;
      case 0x6b:
        iVar15 = local_110 + *(int *)(pbVar18 + 4) * 0x28;
        puStack_38 = (uint *)(local_110 + *(int *)(pbVar18 + 0xc) * 0x28);
        uStack_100 = CONCAT44(uStack_100._4_4_,*(uint *)(pbVar18 + 0x10));
        uVar23 = *(uint *)(pbVar18 + 0x10);
        if ((*(byte *)(iVar15 + 0x1c) & 0x20) == 0) {
          FUN_00414d00();
          if ((*(byte *)(iVar15 + 0x1c) & 0x20) == 0) goto LAB_0043b52e;
          uVar23 = (uint)(uint *)uStack_100;
        }
        if (uVar23 == 0) {
LAB_0043ec48:
          FUN_00413860(*puStack_38,puStack_38[1]);
          uVar36 = uStack_100;
        }
        else {
          iVar15 = FUN_0040af80(*puStack_38,puStack_38[1]);
          uStack_100 = CONCAT44(iVar15,(uint *)uStack_100);
          uVar36 = uStack_100;
          if (iVar15 == 0) {
            if (-1 < (int)(uint *)uStack_100) goto LAB_0043ec48;
          }
          else {
            local_10c = *(int *)(pbVar18 + 8) + -1;
          }
        }
        break;
      case 0x6c:
        iVar15 = *(int *)(pbVar18 + 0x10);
        uStack_e8 = (double)CONCAT44(uStack_e8._4_4_,iVar15);
        piVar17 = (int *)(local_110 + *(int *)(pbVar18 + 0xc) * 0x28);
        uStack_f8 = CONCAT44(uStack_f8._4_4_,piVar17);
        if (pbVar18[3] != 0) {
          iVar30 = param_1[0x37];
          uStack_e8 = (double)CONCAT44(*(int *)(iVar15 + 0x14),iVar15);
          uStack_f0 = CONCAT44(iVar30,(uint *)uStack_f0);
          while (iVar30 != 0) {
            if (*(int *)(iVar30 + 0x20) == *(int *)(iVar15 + 0x14)) goto LAB_0043fa8c;
            iVar30 = *(int *)(iVar30 + 0x3c);
            uStack_f0 = CONCAT44(iVar30,(uint *)uStack_f0);
          }
        }
        if (param_1[0x38] < (int)this[0x1c]) {
          if ((*(byte *)(piVar17 + 7) & 0x40) == 0) {
            iVar30 = *(int *)(iVar15 + 8) + *(int *)(iVar15 + 0xc);
            uStack_100 = CONCAT44((*(int *)(iVar15 + 0xc) + iVar30 * 10) * 4 + 0x40,iVar30);
            puVar21 = FUN_00417b70();
            uStack_f0 = CONCAT44(puVar21,(uint *)uStack_f0);
            if (puVar21 == (undefined4 *)0x0) goto LAB_0043b52e;
            FUN_0040d250((int)uStack_f8);
            *(undefined2 *)((int *)uStack_f8 + 7) = 0x40;
            *(int *)uStack_f8 = (int)uStack_f0._4_4_;
            *uStack_f0._4_4_ = (uint)param_1;
            uStack_f0._4_4_[9] = (uint)(uint *)uStack_100;
            uStack_f0._4_4_[10] = *(undefined4 *)((int)(int *)uStack_e8 + 0xc);
            uStack_f0._4_4_[1] = local_10c;
            uStack_f0._4_4_[4] = param_1[0x13];
            uStack_f0._4_4_[5] = param_1[0x12];
            uStack_f0._4_4_[6] = param_1[0xd];
            *(undefined2 *)(uStack_f0._4_4_ + 7) = *(undefined2 *)((int)param_1 + 0x32);
            uStack_f0._4_4_[2] = param_1[5];
            uStack_f0._4_4_[3] = param_1[3];
            uStack_f0._4_4_[8] = *(undefined4 *)((int)(int *)uStack_e8 + 0x14);
            iVar15 = uStack_f0._4_4_[9];
            puVar19 = uStack_f0._4_4_ + 0x10;
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uStack_f0._4_4_ + iVar15 * 10 + 0x10);
            uStack_f8 = CONCAT44(puVar19,(int *)uStack_f8);
            uVar36 = uStack_f8;
            while (puVar21 = uStack_f0._4_4_, uStack_f8 = uVar36,
                  puVar19 != uStack_f0._4_4_ + iVar15 * 10 + 0x10) {
              *(undefined2 *)(puVar19 + 7) = 1;
              uStack_f8._4_4_ = (uint *)(uVar36 >> 0x20);
              *(uint **)((int)uStack_f8._4_4_ + 0x10) = this;
              puVar19 = (undefined4 *)((int)uStack_f8._4_4_ + 0x28);
              uStack_f8._0_4_ = (int *)uVar36;
              uStack_f8 = CONCAT44(puVar19,(int *)uStack_f8);
              uVar36 = uStack_f8;
            }
          }
          else {
            puVar21 = (undefined4 *)*piVar17;
            uStack_f0 = CONCAT44(puVar21,(uint *)uStack_f0);
          }
          param_1[0x38] = param_1[0x38] + 1;
          puVar21[0xf] = param_1[0x37];
          *(uint *)((int)uStack_f0._4_4_ + 0x30) = this[0xc];
          *(uint *)((int)uStack_f0._4_4_ + 0x34) = this[0xd];
          *(int *)((int)uStack_f0._4_4_ + 0x38) = param_1[0x1b];
          local_110 = (int)uStack_f0._4_4_ + 0x18;
          param_1[0x37] = (int)uStack_f0._4_4_;
          param_1[0x13] = local_110;
          param_1[0x1b] = 0;
          iVar15 = *(int *)((int)uStack_f0._4_4_ + 0x24);
          param_1[0x12] = iVar15;
          *(undefined2 *)((int)param_1 + 0x32) = *(undefined2 *)((int)uStack_f0._4_4_ + 0x28);
          param_1[0xd] = local_110 + (iVar15 + 1) * 0x28;
          local_28 = *(int *)uStack_e8;
          param_1[5] = local_28;
          param_1[3] = ((int *)uStack_e8)[1];
          local_10c = -1;
          uVar36 = uStack_100;
        }
        else {
          local_118 = (undefined4 *)0x1;
          FUN_0041db50((undefined **)"too many levels of trigger recursion");
          uVar36 = uStack_100;
        }
        break;
      case 0x6d:
        iVar15 = param_1[0x37];
        puVar21 = (undefined4 *)
                  (*(int *)(iVar15 + 0x10) +
                  (*(int *)(*(int *)(iVar15 + 8) + 4 + *(int *)(iVar15 + 4) * 0x14) +
                  *(int *)(pbVar18 + 4)) * 0x28);
        uStack_100 = CONCAT44(puVar21,iVar15);
        FUN_0040d3c0(puVar21,0x1000);
        uVar36 = uStack_100;
        break;
      case 0x6e:
        uVar23 = *(uint *)(pbVar18 + 8);
        if (*(int *)(pbVar18 + 4) == 0) {
          uVar25 = param_1[0x32];
          param_1[0x32] = uVar25 + uVar23;
          param_1[0x33] = param_1[0x33] + ((int)uVar23 >> 0x1f) + (uint)CARRY4(uVar25,uVar23);
        }
        else {
          uVar25 = this[0x78];
          this[0x78] = uVar25 + uVar23;
          this[0x79] = this[0x79] + ((int)uVar23 >> 0x1f) + (uint)CARRY4(uVar25,uVar23);
        }
        break;
      case 0x6f:
        if (*(int *)(pbVar18 + 4) == 0) {
          if (param_1[0x32] == 0 && param_1[0x33] == 0) {
            local_10c = *(int *)(pbVar18 + 8) + -1;
          }
        }
        else if (this[0x78] == 0 && this[0x79] == 0) goto LAB_0043ef4c;
        break;
      case 0x70:
        uVar23 = param_1[0x37];
        if (uVar23 == 0) {
          iVar15 = local_110 + *(int *)(pbVar18 + 4) * 0x28;
        }
        else {
          for (uVar25 = *(uint *)(uVar23 + 0x3c); uVar25 != 0; uVar25 = *(uint *)(uVar25 + 0x3c)) {
            uVar23 = uVar25;
          }
          uStack_100 = (ulonglong)uVar23 << 0x20;
          iVar15 = *(int *)(uVar23 + 0x10) + *(int *)(pbVar18 + 4) * 0x28;
        }
        uStack_100 = CONCAT44(uStack_100._4_4_,iVar15);
        FUN_0041fda0();
        puVar28 = (uint *)(local_110 + *(int *)(pbVar18 + 8) * 0x28);
        FUN_0041fda0();
        uVar23 = *puVar28;
        uVar25 = puVar28[1];
        uVar36 = uStack_100;
        if (((int)((uint *)uStack_100)[1] <= (int)uVar25) &&
           (((int)((uint *)uStack_100)[1] < (int)uVar25 || (*(uint *)uStack_100 < uVar23)))) {
          *(uint *)uStack_100 = uVar23;
          ((uint *)uStack_100)[1] = uVar25;
        }
        break;
      case 0x71:
        iVar15 = *(int *)(local_110 + 4 + *(int *)(pbVar18 + 4) * 0x28);
        if ((-1 < iVar15) &&
           ((0 < iVar15 || (*(int *)(local_110 + *(int *)(pbVar18 + 4) * 0x28) != 0)))) {
          local_10c = *(int *)(pbVar18 + 8) + -1;
        }
        break;
      case 0x72:
        iVar15 = *(int *)(local_110 + 4 + *(int *)(pbVar18 + 4) * 0x28);
        if ((iVar15 < 1) && (iVar15 < 0)) {
          local_10c = *(int *)(pbVar18 + 8) + -1;
        }
        break;
      case 0x73:
        iVar15 = *(int *)(pbVar18 + 4);
        uVar23 = *(uint *)(local_110 + iVar15 * 0x28);
        piVar17 = (int *)(local_110 + iVar15 * 0x28);
        uVar25 = *(uint *)(pbVar18 + 0xc);
        iVar30 = uVar23 + uVar25;
        iVar15 = *(int *)(local_110 + 4 + iVar15 * 0x28) + ((int)uVar25 >> 0x1f) +
                 (uint)CARRY4(uVar23,uVar25);
        *piVar17 = iVar30;
        piVar17[1] = iVar15;
        if (iVar30 == 0 && iVar15 == 0) {
          local_10c = *(int *)(pbVar18 + 8) + -1;
        }
        break;
      case 0x74:
        uStack_f8._4_4_ = (uint *)(local_110 + *(int *)(pbVar18 + 8) * 0x28);
        iStack_b0 = param_1[9];
        iVar15 = 0;
        uStack_100 = (ulonglong)(uint)pbVar18[3];
        if (pbVar18[3] != 0) {
          do {
            *(uint **)(iStack_b0 + iVar15 * 4) = uStack_f8._4_4_;
            FUN_0040e150((int)uStack_f8._4_4_);
            iVar15 = (int)uStack_100._4_4_ + 1;
            uStack_f8._4_4_ = (uint *)((int)uStack_f8._4_4_ + 0x28);
            uStack_100 = CONCAT44(iVar15,(uint *)uStack_100);
          } while (iVar15 < (int)(uint *)uStack_100);
        }
        iVar15 = *(int *)(pbVar18 + 0x10);
        uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar15);
        uStack_c0 = local_110 + *(int *)(pbVar18 + 0xc) * 0x28;
        uStack_f8 = CONCAT44(uStack_f8._4_4_,uStack_c0);
        *(int *)(uStack_c0 + 0x18) = *(int *)(uStack_c0 + 0x18) + 1;
        uStack_d0._0_6_ = CONCAT24(1,(uint *)uStack_d0);
        uStack_d4 = (uint *)0x0;
        puStack_c4 = (undefined4 *)0x0;
        pbStack_c8 = (byte *)0x0;
        puStack_bc = (undefined4 *)0x0;
        iStack_b8 = 0;
        if ((*(byte *)(iVar15 + 3) & 8) != 0) {
          iStack_b8 = *(int *)(pbVar18 + -4);
        }
        puStack_d8 = this;
        (**(code **)(iVar15 + 0x10))();
        if (puStack_bc != (undefined4 *)0x0) {
          FUN_0041ffb0();
          FUN_0041db50((undefined **)&DAT_004b23ac);
          local_118 = puStack_bc;
        }
        FUN_0040d250((int)&uStack_e8);
        uVar36 = uStack_100;
        break;
      case 0x75:
        uStack_100 = CONCAT44(uStack_100._4_4_,local_110 + *(int *)(pbVar18 + 4) * 0x28);
        local_118 = (undefined4 *)FUN_0040d170(local_110,*(int *)(pbVar18 + 0x10));
        if (local_118 != (undefined4 *)0x0) {
          FUN_0041ffb0();
          FUN_0041db50((undefined **)&DAT_004b23ac);
        }
        FUN_0041fbf0(local_3c & 0xff);
        bVar13 = FUN_0040d390((int *)(uint *)uStack_100);
        iVar15 = CONCAT31(extraout_var_06,bVar13);
joined_r0x0043f83b:
        uVar36 = uStack_100;
        if (iVar15 != 0) goto LAB_0043b368;
        break;
      case 0x76:
        local_118 = (undefined4 *)FUN_004251b0(*(int *)(pbVar18 + 4));
        uVar36 = uStack_100;
        break;
      case 0x77:
        uStack_f8 = CONCAT44(uStack_f8._4_4_,*(undefined4 *)(pbVar18 + 0xc));
        if (param_1[0x20] == 0) {
          FUN_0040d720(*(int *)(pbVar18 + 4));
          FUN_0040d860();
        }
        uStack_100 = CONCAT44(uStack_100._4_4_,
                              *(undefined4 *)(*(int *)(pbVar18 + 4) * 0x10 + 4 + this[2]));
        uVar22 = FUN_0040d020();
        uStack_100 = CONCAT44(uVar22,(uint *)uStack_100);
        uVar12 = FUN_0040b9e0();
        uVar23 = CONCAT31(extraout_var_07,uVar12);
        if (extraout_EDX == -1) {
          uStack_f8._0_4_ = (int *)uVar23;
        }
        uStack_f8 = CONCAT44(uVar23,(int *)uStack_f8);
        iVar15 = FUN_0040b9f0();
        if (iVar15 == 0) {
          uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar23);
        }
        pcVar20 = (char *)FUN_0040b970();
        uStack_f0 = CONCAT44(uStack_f0._4_4_,pcVar20);
        uVar25 = extraout_EDX_00;
        if ((extraout_EDX_00 == 5) &&
           ((*pcVar20 == '\0' || (iVar15 = FUN_0040ba60(), uVar25 = extraout_EDX_01, iVar15 == 0))))
        {
          uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar23);
          uVar25 = uVar23;
LAB_0043f2ce:
          if (local_118 != (undefined4 *)0x0) goto LAB_0043f3af;
        }
        else {
          if ((uVar25 == uVar23) || ((uVar23 != 5 && (uVar25 != 5)))) goto LAB_0043f2ce;
          if (((char)this[7] == '\0') || (1 < (int)this[0x23])) {
            local_118 = (undefined4 *)0x1;
            pcVar20 = "cannot change %s wal mode from within a transaction";
            goto LAB_0043f4d0;
          }
          if (uVar23 == 5) {
            local_118 = (undefined4 *)FUN_00426540();
            if (local_118 == (undefined4 *)0x0) {
              FUN_00426480((uint)uStack_f8);
LAB_0043f343:
              uVar23 = (uint)uStack_f8._4_4_;
              goto LAB_0043f352;
            }
            uVar23 = (uint)uStack_f8._4_4_;
          }
          else {
            if (uVar23 == 4) {
              FUN_00426480(2);
              goto LAB_0043f343;
            }
LAB_0043f352:
            if (local_118 == (undefined4 *)0x0) {
              local_118 = (undefined4 *)FUN_0042a5f0();
              uVar25 = (uint)(int *)uStack_f8;
              uVar23 = (uint)uStack_f8._4_4_;
              goto LAB_0043f2ce;
            }
          }
LAB_0043f3af:
          uVar25 = uVar23;
          uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar25);
        }
        uVar12 = FUN_00426480(uVar25);
        uStack_f8 = CONCAT44(uStack_f8._4_4_,CONCAT31(extraout_var_08,uVar12));
        local_108 = (uint *)(local_110 + *(int *)(pbVar18 + 8) * 0x28);
        *(undefined2 *)(local_108 + 7) = 0xa02;
        pcVar20 = FUN_0040fc20();
        local_108[5] = (uint)pcVar20;
        uVar23 = FUN_00408380(pcVar20);
        local_108[6] = uVar23;
        *(undefined1 *)((int)local_108 + 0x1f) = 1;
        FUN_0041fbf0(local_3c & 0xff);
        uVar36 = uStack_100;
        break;
      case 0x78:
        local_118 = (undefined4 *)FUN_00436ae0((int)this);
        uVar36 = uStack_100;
        break;
      case 0x79:
        uStack_100 = CONCAT44(uStack_100._4_4_,
                              *(undefined4 *)(*(int *)(pbVar18 + 4) * 0x10 + 4 + this[2]));
        local_118 = (undefined4 *)FUN_0042aa60();
        uVar36 = uStack_100;
        if (local_118 == (undefined4 *)0x65) {
          local_118 = (undefined4 *)0x0;
          local_10c = *(int *)(pbVar18 + 8) + -1;
        }
        break;
      case 0x7a:
        if (*(int *)(pbVar18 + 4) == 0) {
          FUN_0040dcd0();
          uVar36 = uStack_100;
        }
        else {
          *(undefined1 *)((int)param_1 + 0x62) = 1;
        }
        break;
      case 0x7b:
        if (((pbVar18[0xc] != 0) || ((this[3] & 0x80000) == 0)) &&
           (local_118 = (undefined4 *)FUN_00414b30(pbVar18[0xc],*(int *)(pbVar18 + 8)),
           uVar36 = uStack_100, (char)local_118 == '\x06')) {
          pcVar20 = "database table is locked: %s";
LAB_0043f4d0:
          FUN_0041db50((undefined **)pcVar20);
          uVar36 = uStack_100;
        }
        break;
      case 0x7c:
        uStack_100 = CONCAT44(uStack_100._4_4_,*(undefined4 *)(pbVar18 + 0x10));
        local_118 = (undefined4 *)FUN_00416e60((int)this);
        uVar36 = uStack_100;
        if ((uint *)uStack_100 != (uint *)0x0) {
          FUN_00408130((int)this);
          param_1[0x17] = *(int *)(*(int *)((int)(uint *)uStack_100 + 8) + 8);
          *(undefined4 *)(*(int *)((int)(uint *)uStack_100 + 8) + 8) = 0;
          uVar36 = uStack_100;
        }
        break;
      case 0x7d:
        local_118 = (undefined4 *)FUN_0041d270(*(char **)(pbVar18 + 0x10),param_1 + 0x17);
        uVar36 = uStack_100;
        break;
      case 0x7e:
        *(undefined1 *)((int)param_1 + 0x65) = 2;
        local_118 = (undefined4 *)FUN_00410510(this,*(char **)(pbVar18 + 0x10));
        *(undefined1 *)((int)param_1 + 0x65) = 0;
        uVar36 = uStack_100;
        break;
      case 0x7f:
        uStack_100 = 0;
        piVar17 = *(int **)(*(int *)(pbVar18 + 0x10) + 8);
        uStack_f8 = CONCAT44(*piVar17,piVar17);
        local_118 = (undefined4 *)(**(code **)(*piVar17 + 0x18))(piVar17);
        FUN_00408130((int)this);
        param_1[0x17] = *(int *)((int)(int *)uStack_f8 + 8);
        *(undefined4 *)((int)(int *)uStack_f8 + 8) = 0;
        uVar36 = uStack_100;
        if (local_118 == (undefined4 *)0x0) {
          *(int **)uStack_100._4_4_ = (int *)uStack_f8;
          puVar21 = FUN_0042e240(0,0xffffffff,0);
          uStack_100 = CONCAT44(uStack_100._4_4_,puVar21);
          if (puVar21 == (undefined4 *)0x0) {
            *(undefined1 *)((int)this + 0x1e) = 1;
            (**(code **)((int)uStack_f8._4_4_ + 0x1c))();
            uVar36 = uStack_100;
          }
          else {
            puVar21[0xe] = uStack_100._4_4_;
            puVar21[0xf] = **(undefined4 **)uStack_100._4_4_;
            uVar36 = uStack_100;
          }
        }
        break;
      case 0x80:
        puVar21 = (undefined4 *)(local_110 + *(int *)(pbVar18 + 0xc) * 0x28);
        puStack_d8 = (uint *)param_1[9];
        puVar28 = puVar21 + 10;
        iVar15 = *(int *)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        puVar19 = *(undefined4 **)(iVar15 + 0x38);
        uStack_f0 = CONCAT44(puVar19,puVar28);
        uStack_e8 = (double)CONCAT44(iVar15,(undefined4 *)*puVar19);
        uStack_f8 = CONCAT44(puVar21,*(undefined4 *)*puVar19);
        uVar23 = *puVar28;
        uStack_100 = CONCAT44(*puVar21,uVar23);
        iVar15 = 0;
        uStack_e0 = 0.0;
        if (0 < (int)uVar23) {
          while( true ) {
            puStack_d8[iVar15] = (uint)(puVar28 + (iVar15 * 5 + 5) * 2);
            FUN_0040e150(puStack_d8[uStack_e0._4_4_]);
            iVar15 = uStack_e0._4_4_ + 1;
            uStack_e0 = (double)CONCAT44(iVar15,(uint)uStack_e0);
            if ((int)(uint *)uStack_100 <= iVar15) break;
            puVar28 = (uint *)uStack_f0;
          }
          uVar23 = (uint)(uint *)uStack_100;
          puVar19 = uStack_f0._4_4_;
        }
        *(undefined1 *)((int)param_1 + 0x65) = 1;
        local_118 = (undefined4 *)
                    (**(code **)((int)(int *)uStack_f8 + 0x20))
                              (puVar19,uStack_100._4_4_,*(undefined4 *)(pbVar18 + 0x10),uVar23);
        *(undefined1 *)((int)param_1 + 0x65) = 0;
        FUN_00408130((int)this);
        param_1[0x17] = *(int *)((int)(int *)uStack_e8 + 8);
        *(undefined4 *)((int)(int *)uStack_e8 + 8) = 0;
        if (local_118 == (undefined4 *)0x0) {
          uVar22 = (**(code **)((int)(int *)uStack_f8 + 0x28))();
          uStack_e0 = (double)CONCAT44(uStack_e0._4_4_,uVar22);
        }
        if ((uint)uStack_e0 != 0) {
          local_10c = *(int *)(pbVar18 + 8) + -1;
        }
        *(undefined1 *)((int)uStack_e8._4_4_ + 0x14) = 0;
        uVar36 = uStack_100;
        break;
      case 0x81:
        puStack_38 = *(uint **)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        iVar15 = local_110 + *(int *)(pbVar18 + 0xc) * 0x28;
        uStack_f8 = CONCAT44(uStack_f8._4_4_,iVar15);
        if ((char)puStack_38[5] == '\0') {
          uStack_100 = CONCAT44(**(undefined4 **)puStack_38[0xe],*(undefined4 **)puStack_38[0xe]);
          puVar32 = &uStack_f0;
          for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
            *(undefined4 *)puVar32 = 0;
            puVar32 = (undefined8 *)((int)puVar32 + 4);
          }
          FUN_0040d400();
          uStack_d0 = uStack_d0 & 0xffffbf01ffffffff | 0x100000000;
          local_118 = (undefined4 *)(**(code **)((int)uStack_100._4_4_ + 0x2c))();
          FUN_00408130((int)this);
          param_1[0x17] = *(int *)((int)(uint *)uStack_100 + 8);
          *(undefined4 *)((int)(uint *)uStack_100 + 8) = 0;
          if (puStack_bc != (undefined4 *)0x0) {
            local_118 = puStack_bc;
          }
          FUN_0041fbf0(local_3c & 0xff);
          FUN_0040d400();
          bVar13 = FUN_0040d390((int *)uStack_f8);
          iVar15 = CONCAT31(extraout_var_09,bVar13);
          goto joined_r0x0043f83b;
        }
        FUN_0042e3e0(iVar15);
        uVar36 = uStack_100;
        break;
      case 0x82:
        *(undefined2 *)(local_108 + 7) = 8;
        *(undefined8 *)(local_108 + 2) = **(undefined8 **)(pbVar18 + 0x10);
        break;
      case 0x83:
        uVar23 = *(uint *)(param_1[0xd] + *(int *)(pbVar18 + 4) * 4);
        uStack_f8 = (ulonglong)uVar23 << 0x20;
        if (*(char *)(uVar23 + 0x14) == '\0') {
          iVar15 = *(int *)**(undefined4 **)(uVar23 + 0x38);
          uStack_100 = CONCAT44(iVar15,(int *)**(undefined4 **)(uVar23 + 0x38));
          *(undefined1 *)((int)param_1 + 0x65) = 1;
          local_118 = (undefined4 *)(**(code **)(iVar15 + 0x24))();
          *(undefined1 *)((int)param_1 + 0x65) = 0;
          FUN_00408130((int)this);
          param_1[0x17] = *(int *)((int)(uint *)uStack_100 + 8);
          *(undefined4 *)((int)(uint *)uStack_100 + 8) = 0;
          if (local_118 == (undefined4 *)0x0) {
            uVar22 = (**(code **)((int)uStack_100._4_4_ + 0x28))();
            uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar22);
          }
          uVar36 = uStack_100;
          if ((int *)uStack_f8 == (int *)0x0) {
            local_10c = *(int *)(pbVar18 + 8) + -1;
          }
        }
        break;
      case 0x84:
        piVar17 = *(int **)(*(int *)(pbVar18 + 0x10) + 8);
        uStack_100 = CONCAT44(local_110 + *(int *)(pbVar18 + 4) * 0x28,piVar17);
        local_118 = (undefined4 *)(**(code **)(*piVar17 + 0x4c))(piVar17);
        FUN_00408130((int)this);
        param_1[0x17] = *(int *)((int)(uint *)uStack_100 + 8);
        *(undefined4 *)((int)(uint *)uStack_100 + 8) = 0;
        uVar36 = uStack_100;
        break;
      case 0x85:
        iVar15 = **(int **)(*(int *)(pbVar18 + 0x10) + 8);
        uStack_100 = CONCAT44(iVar15,*(int **)(*(int *)(pbVar18 + 0x10) + 8));
        uVar23 = *(uint *)(pbVar18 + 8);
        uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar23);
        uVar36 = uStack_100;
        if (*(int *)(iVar15 + 0x34) != 0) {
          iVar30 = local_110 + *(int *)(pbVar18 + 0xc) * 0x28;
          uStack_e8 = (double)CONCAT44(iVar30,param_1[9]);
          uStack_f8 = (ulonglong)uVar23;
          if (0 < (int)uVar23) {
            do {
              FUN_0040e150(iVar30);
              *(byte **)((int)(int *)uStack_e8 + (int)uStack_f8._4_4_ * 4) = uStack_e8._4_4_;
              iVar30 = (int)uStack_e8._4_4_ + 0x28;
              iVar15 = (int)uStack_f8._4_4_ + 1;
              uStack_e8 = (double)CONCAT44(iVar30,(int *)uStack_e8);
              uStack_f8 = CONCAT44(iVar15,(int *)uStack_f8);
            } while (iVar15 < (int)(int *)uStack_f8);
            uVar23 = (uint)(int *)uStack_f8;
            iVar15 = (int)uStack_100._4_4_;
          }
          local_118 = (undefined4 *)
                      (**(code **)(iVar15 + 0x34))((uint *)uStack_100,uVar23,(int *)uStack_e8);
          FUN_00408130((int)this);
          param_1[0x17] = *(int *)((int)(uint *)uStack_100 + 8);
          *(undefined4 *)((int)(uint *)uStack_100 + 8) = 0;
          if ((local_118 == (undefined4 *)0x0) && (*(int *)(pbVar18 + 4) != 0)) {
            this[0xc] = (uint)(uint *)uStack_f0;
            this[0xd] = (uint)uStack_f0._4_4_;
          }
          param_1[0x1b] = param_1[0x1b] + 1;
          uVar36 = uStack_100;
        }
        break;
      case 0x86:
        uVar23 = FUN_0040caa0();
        *local_108 = uVar23;
        local_108[1] = 0;
        uVar36 = uStack_100;
        break;
      case 0x87:
        pcVar20 = *(char **)(pbVar18 + 0x10);
        if (pcVar20 == (char *)0x0) {
          pcVar20 = (char *)param_1[0x2f];
        }
        uStack_100 = CONCAT44(uStack_100._4_4_,pcVar20);
        uVar36 = uStack_100;
        if ((pcVar20 != (char *)0x0) && (this[0x25] != 0)) {
          FUN_0042eaa0(param_1,pcVar20);
          (*(code *)this[0x25])(this[0x26]);
          FUN_00408130((int)this);
          uVar36 = uStack_100;
        }
        break;
      case 0x8d:
        pvVar27 = (void *)(local_110 + *(int *)(pbVar18 + 4) * 0x28);
        uVar5 = *(ushort *)((int)pvVar27 + 0x1c);
        if ((uVar5 & 1) == 0) {
          *(ushort *)((int)pvVar27 + 0x1c) = uVar5 >> 3 & 2 | uVar5;
          FUN_00430070(pvVar27,bVar10);
          if ((*(byte *)((int)pvVar27 + 0x1d) & 0x40) == 0) {
            *(ushort *)((int)pvVar27 + 0x1c) = *(ushort *)((int)pvVar27 + 0x1c) & 0xbfe3;
            local_118 = (undefined4 *)0x0;
            uVar36 = uStack_100;
          }
          else {
            local_118 = (undefined4 *)FUN_00414c50();
            *(ushort *)((int)pvVar27 + 0x1c) = *(ushort *)((int)pvVar27 + 0x1c) & 0xbfe3;
            uVar36 = uStack_100;
          }
        }
        break;
      case 0x8e:
        pvVar27 = (void *)(local_110 + *(int *)(pbVar18 + 4) * 0x28);
        uVar5 = *(ushort *)((int)pvVar27 + 0x1c);
        if ((uVar5 & 1) == 0) {
          if ((uVar5 & 0x10) == 0) {
            FUN_00430070(pvVar27,bVar10);
            *(ushort *)((int)pvVar27 + 0x1c) = *(ushort *)((int)pvVar27 + 0x1c) & 0xbf10 | 0x10;
            uVar36 = uStack_100;
          }
          else {
            *(ushort *)((int)pvVar27 + 0x1c) = uVar5 & 0xff10;
          }
        }
        break;
      case 0x8f:
        if ((*(byte *)(local_110 + *(int *)(pbVar18 + 4) * 0x28 + 0x1c) & 0xd) == 0) {
          FUN_0041fdf0();
          uVar36 = uStack_100;
        }
        break;
      case 0x90:
        if ((*(byte *)(local_110 + *(int *)(pbVar18 + 4) * 0x28 + 0x1c) & 1) == 0) {
          FUN_0041fda0();
          uVar36 = uStack_100;
        }
        break;
      case 0x91:
        if ((*(byte *)(local_110 + *(int *)(pbVar18 + 4) * 0x28 + 0x1c) & 1) == 0) {
          FUN_0041fdd0();
          uVar36 = uStack_100;
        }
      }
LAB_0043fa8c:
      uStack_100 = uVar36;
      local_10c = local_10c + 1;
      if (local_118 != (undefined4 *)0x0) goto LAB_0043b387;
      goto LAB_0043b0d7;
    }
LAB_0043fc71:
    local_118 = (undefined4 *)0x9;
    param_1[0x16] = 9;
    FUN_00411540();
    FUN_0041db50((undefined **)&DAT_004b23ac);
  }
LAB_0043b387:
  param_1[0x16] = (int)local_118;
  FUN_00418ab0(local_118,(undefined **)"statement aborts at %d: [%s] %s");
  FUN_0042dd20(param_1);
  if (local_118 == (undefined4 *)0xc0a) {
    *(undefined1 *)((int)this + 0x1e) = 1;
  }
  iVar15 = 1;
  if (local_31 != '\0') {
    FUN_00420a50(0);
  }
LAB_0043b3e3:
  FUN_0040c520(param_1 + 0x20);
  return iVar15;
  while( true ) {
    iVar15 = (int)uStack_e8._4_4_ + 1;
    uStack_e8 = (double)CONCAT44(iVar15,(int *)uStack_e8);
    uVar23 = (uint)(int *)uStack_e8;
    if ((int)this[1] <= iVar15) break;
LAB_0043ce80:
    local_118 = (undefined4 *)
                FUN_00426610(*(int *)(iVar15 * 0x10 + 4 + this[2]),(int)(uint *)uStack_100,uVar23);
    if (local_118 != (undefined4 *)0x0) goto LAB_0043fc2a;
  }
  puVar21 = (uint *)uStack_f0;
LAB_0043cebb:
  if (((uint *)uStack_100 == (uint *)0x2) && ((this[3] & 0x200) != 0)) {
    FUN_0040dcd0();
    FUN_00420a50(0);
    puVar21 = (uint *)uStack_f0;
  }
LAB_0043cdc4:
  if ((undefined4 *)this[0x74] != puVar21) {
    do {
      uStack_f0 = CONCAT44(this[0x74],(uint *)uStack_f0);
      this[0x74] = *(uint *)(this[0x74] + 0x10);
      FUN_00408130((int)this);
      this[0x75] = this[0x75] - 1;
      puVar21 = (uint *)uStack_f0;
    } while ((undefined4 *)this[0x74] != (uint *)uStack_f0);
  }
  if ((uint *)uStack_100 == (uint *)0x1) {
    this[0x74] = puVar21[4];
    FUN_00408130((int)this);
    uVar36 = uStack_100;
    if (puStack_38 == (uint *)0x0) {
      this[0x75] = this[0x75] - 1;
    }
  }
  else {
    this[0x78] = puVar21[2];
    this[0x79] = puVar21[3];
    uVar36 = uStack_100;
  }
  goto LAB_0043fa8c;
}


/* END FUNCTION 0x0043b030 */
