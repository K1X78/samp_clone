/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a7a29
 * Name: FUN_004a7a29
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_004a7a29(double param_1,int param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong lVar19;
  ulonglong uVar20;
  ulonglong in_XMM2_Qb;
  undefined1 auVar21 [16];
  longlong lVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar25 [16];
  ulonglong uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  
  dVar11 = (double)((ulonglong)param_1 >> 0x2c);
  uVar10 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar3 = (SUB82(dVar11,0) & 0xff) + 1 & 0x1fe;
  dVar33 = (double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) *
           *(double *)(&DAT_004c0be0 + uVar3 * 4);
  dVar29 = *(double *)(&DAT_004c0be0 + uVar3 * 4);
  dVar12 = *(double *)(&DAT_004c0ff0 + uVar3 * 8);
  dVar31 = *(double *)(&UNK_004c0ff8 + uVar3 * 8);
  uVar3 = 0x7fef - uVar10;
  iVar6 = SUB84(param_1,0);
  uVar7 = (uint)((ulonglong)param_1 >> 0x20);
  dVar30 = param_1;
  if ((uVar10 - 0x10 | uVar3) < 0x80000000) {
    uVar3 = 0;
    uVar8 = 0x3fe7f;
LAB_004a7aa6:
    uVar4 = ((ushort)((ulonglong)dVar33 >> 0x26) & 0xff) + 1 & 0x1fe;
    dVar27 = (double)((ulonglong)dVar30 & 0xfffffffffffff | DAT_004c4480);
    dVar13 = (double)((ulonglong)dVar27 & 0xfffffffff8000000);
    in_XMM3._8_8_ = in_XMM3._8_8_ >> 0x1f;
    dVar27 = dVar27 - dVar13;
    uVar5 = ((ushort)((ulonglong)(dVar33 * *(double *)(&DAT_004c1800 + uVar4 * 4)) >> 0x1f) & 0x1ff)
            + 1 & 0x3fe;
    dVar28 = dVar29 * *(double *)(&DAT_004c1800 + uVar4 * 4) *
             *(double *)(&DAT_004c2420 + uVar5 * 4);
    dVar33 = dVar33 * *(double *)(&DAT_004c1800 + uVar4 * 4) *
             *(double *)(&DAT_004c2420 + uVar5 * 4);
    dVar30 = dVar12 + *(double *)(&DAT_004c1c10 + uVar4 * 8) +
             (double)(int)((longlong)dVar11 - (ulonglong)uVar8 >> 8) +
             *(double *)(&DAT_004c2c30 + uVar5 * 8);
    dVar32 = dVar31 + *(double *)(&DAT_004c1c18 + uVar4 * 8) +
             *(double *)(&DAT_004c2c38 + uVar5 * 8);
    dVar12 = (double)((ulonglong)dVar28 & 0xfffffffff8000000);
    dVar28 = dVar28 - dVar12;
    dVar34 = dVar33 + -1.442694902420044;
    dVar31 = dVar30 + dVar34;
    dVar29 = (double)CONCAT44(param_3,param_2);
    uVar2 = (ushort)(param_3 >> 0x10);
    dVar30 = dVar30 - dVar31;
    in_XMM3._0_8_ = 0xfffffffff8000000;
    uVar4 = (uint)(ushort)((ulonglong)dVar31 >> 0x30);
    dVar12 = (((dVar33 - dVar12 * dVar13) - dVar13 * dVar28) - dVar12 * dVar27) - dVar27 * dVar28;
    dVar33 = dVar34 - dVar12;
    dVar11 = dVar31 - dVar12;
    uVar8 = uVar2 & 0x7ff0;
    if (uVar8 < 0x7ff0) {
      iVar6 = (uVar8 - 0x3ff0) + (uVar4 & 0x7ff0);
      if ((0x40a0U - iVar6 | iVar6 - 0x3c70U) < 0x80000000) {
LAB_004a7bf8:
        dVar13 = (double)((ulonglong)dVar29 & 0xfffffffff8000000);
        dVar27 = (double)((ulonglong)dVar11 & 0xfffffffff8000000);
        dVar12 = (dVar30 + dVar34) - (dVar12 - (dVar31 - dVar11));
        dVar31 = dVar13 * dVar27 * 128.0;
        uVar7 = (uint)ROUND(dVar31);
        dVar29 = dVar13 * (dVar11 - dVar27) + dVar27 * (dVar29 - dVar13) +
                 (dVar11 - dVar27) * (dVar29 - dVar13);
        if (0 < (int)(0x1ff7f - uVar7 | uVar7 + 0x1e1ff)) {
          iVar6 = (uVar7 & 0x7f) * 0x10;
          auVar14._0_8_ = (double)((ulonglong)((uVar3 + uVar7 & 0xffffff80) + 0x1ff80) << 0x2d);
          auVar14._8_4_ = 0;
          auVar14._12_4_ = (int)((ulonglong)auVar14._0_8_ >> 0x20);
          dVar30 = *(double *)(&DAT_004c3c60 + iVar6) * auVar14._0_8_;
          dVar29 = (dVar31 - ((dVar31 + 6755399441055744.0) - 6755399441055744.0)) * 0.0078125 +
                   dVar29 + ((dVar33 * 0.16015105075297303 + dVar33 * dVar33 * -0.08325619496072671)
                             * dVar33 * dVar33 +
                             dVar33 * 9.597935033233511e-08 + dVar33 * dVar33 * -0.3465736568077919
                            + dVar32 + dVar12) * (double)CONCAT44(param_3,param_2);
          return (float10)(dVar29 * dVar29 * dVar30 *
                           (dVar29 * 0.0013333558146428443 + 0.009618129107628477) * dVar29 * dVar29
                           + *(double *)(&UNK_004c3c68 + iVar6) * auVar14._8_8_ +
                           (dVar29 * 0.055504108664821576 + 0.2402265069591007) * dVar29 * dVar29 *
                           dVar30 + dVar29 * 0.6931471805599453 * dVar30 + dVar30);
        }
        if ((int)uVar7 < 1) {
          if ((int)uVar7 < -0x3fdff) {
LAB_004a848a:
            dVar29 = (double)((ulonglong)uVar3 << 0x2d);
            iVar9 = 0x19;
            goto LAB_004a8231;
          }
          uVar3 = uVar3 + 0x80;
          uVar8 = (uVar7 & 0xffffff80) + 0x3fe80;
          uVar10 = 0;
        }
        else {
          if (0x3ffff < uVar7) goto LAB_004a84ad;
          uVar3 = uVar3 + 0x3ff00;
          uVar8 = uVar7 - 0x80 & 0xffffff80;
          uVar10 = 0x3ff0;
        }
        iVar6 = (uVar7 & 0x7f) * 0x10;
        uVar7 = ((int)-(uVar8 - 0x1ff80) >> 7) + 2;
        auVar18._0_8_ = (double)((ulonglong)uVar8 << 0x2d);
        auVar18._8_4_ = 0;
        auVar18._12_4_ = (int)((ulonglong)auVar18._0_8_ >> 0x20);
        dVar11 = *(double *)(&DAT_004c3c60 + iVar6) * auVar18._0_8_;
        dVar12 = (dVar31 - ((dVar31 + 6755399441055744.0) - 6755399441055744.0)) * 0.0078125 +
                 dVar29 + ((dVar33 * 0.16015105075297303 + dVar33 * dVar33 * -0.08325619496072671) *
                           dVar33 * dVar33 +
                           dVar33 * 9.597935033233511e-08 + dVar33 * dVar33 * -0.3465736568077919 +
                          dVar32 + dVar12) * (double)CONCAT44(param_3,param_2);
        dVar29 = (double)((ulonglong)uVar3 << 0x2d);
        uVar26 = (ulonglong)(uVar7 + (uVar7 & 0x20));
        dVar31 = (double)(-1L << uVar26 & (ulonglong)dVar11);
        dVar12 = dVar12 * dVar12 * dVar11 *
                 (dVar12 * 0.0013333558146428443 + 0.009618129107628477) * dVar12 * dVar12 +
                 *(double *)(&UNK_004c3c68 + iVar6) * auVar18._8_8_ +
                 (dVar12 * 0.055504108664821576 + 0.2402265069591007) * dVar12 * dVar12 * dVar11 +
                 dVar12 * 0.6931471805599453 * dVar11;
        dVar30 = (double)((ulonglong)(dVar31 + dVar12) & -1L << uVar26);
        dVar12 = dVar12 + (dVar31 - dVar30) + (dVar11 - dVar31);
        if ((int)(uVar8 - 0x1ff80) < 1) {
          dVar29 = dVar12 * dVar29 + dVar30 * dVar29;
          dVar29 = dVar29 + (double)((ulonglong)uVar10 << 0x30) * dVar29;
          iVar9 = 0x18;
          if ((((ushort)((ulonglong)dVar29 >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (iVar9 = 0x19, ((ulonglong)dVar29 & 0x7ff0000000000000) != 0)) {
            return (float10)dVar29;
          }
        }
        else {
          dVar29 = (dVar12 + dVar30) * dVar29;
          dVar29 = dVar29 + (double)((ulonglong)uVar10 << 0x30) * dVar29;
          iVar9 = 0x18;
          if ((((ushort)((ulonglong)dVar29 >> 0x30) & 0x7ff0) != 0x7ff0) &&
             (iVar9 = 0x19, ((ulonglong)dVar29 & 0x7ff0000000000000) != 0)) {
            return (float10)dVar29;
          }
        }
      }
      else {
        dVar31 = dVar29 * dVar11;
        uVar7 = (ushort)((ulonglong)dVar31 >> 0x30) & 0x7ff0;
        uVar8 = uVar7 - 0x3c70;
        if ((0x40a0 - uVar7 | uVar8) < 0x80000000) goto LAB_004a7bf8;
        if (0x7fffffff < uVar8) {
          return (float10)(double)((ulonglong)(uVar3 | 0x1ff80) << 0x2d);
        }
        if (((uVar2 ^ (uVar10 & 0x7ff0) + 0xc010) & 0x8000) != 0) goto LAB_004a848a;
LAB_004a84ad:
        iVar9 = 0x18;
        if (uVar3 == 0) {
          dVar29 = INFINITY;
        }
        else {
          dVar29 = -INFINITY;
        }
      }
      goto LAB_004a8231;
    }
    dVar29 = (double)CONCAT44(param_3,param_2);
    auVar21._8_8_ = in_XMM2_Qb;
    auVar21._0_8_ = dVar29;
    dVar12 = (double)CONCAT44(uVar3,uVar4);
    if (iVar6 != 0) goto LAB_004a813c;
    if (uVar7 == 0x3ff00000) goto LAB_004a821a;
    dVar12 = (double)CONCAT44(uVar3,uVar7);
    if (uVar7 != 0xbff00000) goto LAB_004a813c;
    auVar16._0_4_ = -(uint)((int)((ulonglong)dVar29 & 0xfffffffffffff) == 0);
    auVar16._4_4_ = -(uint)((int)(((ulonglong)dVar29 & 0xfffffffffffff) >> 0x20) == 0);
    auVar16._8_4_ = -(uint)((int)(in_XMM3._8_8_ & in_XMM2_Qb) == 0);
    auVar16._12_4_ = -(uint)((int)((in_XMM3._8_8_ & in_XMM2_Qb) >> 0x20) == 0);
    if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                 (ushort)((byte)(auVar16._12_4_ >> 7) & 1) << 0xc |
                 (ushort)((byte)(auVar16._12_4_ >> 0xf) & 1) << 0xd |
                 (ushort)((byte)(auVar16._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar16._12_4_ >> 0x1f) << 0xf) == 0xff) {
      return (float10)1;
    }
  }
  else {
    auVar21._4_4_ = param_3;
    auVar21._0_4_ = param_2;
    in_XMM3._0_8_ = 0x7fffffffffffffff;
    auVar21._8_8_ = in_XMM2_Qb;
    uVar8 = param_3 & 0x7fffffff;
    if (uVar8 < 0x7ff00000) {
      if (param_2 == 0 && uVar8 == 0) {
        dVar29 = 1.0;
        iVar9 = 0x1a;
        if (iVar6 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          iVar9 = 0x1d;
          if (((uVar7 & 0x7fffffff) < 0x7ff00001) &&
             (((uVar7 & 0x7fffffff) < 0x7ff00000 || (iVar6 == 0)))) {
            return (float10)1.0;
          }
        }
        goto LAB_004a8231;
      }
      if ((int)uVar3 < 0) {
        auVar25._8_8_ = in_XMM3._8_8_ << 0x34;
        auVar25._0_8_ = 0xfff0000000000000;
        iVar9 = (uVar8 >> 0x14) - 0x3f3;
        in_XMM3 = (undefined1  [16])0x0;
        uVar26 = (ulonglong)
                 CONCAT22((ushort)(-1 < iVar9) * (short)((uint)iVar9 >> 0x10),
                          (ushort)(-1 < (short)iVar9) * (short)iVar9);
        lVar19 = SUB168(auVar21 | auVar25,0) << uVar26;
        lVar24 = SUB168(auVar21 | auVar25,8) << uVar26;
        auVar22._0_4_ = -(uint)((int)lVar19 == 0);
        auVar22._4_4_ = -(uint)((int)((ulonglong)lVar19 >> 0x20) == 0);
        auVar22._8_4_ = -(uint)((int)lVar24 == 0);
        auVar22._12_4_ = -(uint)((int)((ulonglong)lVar24 >> 0x20) == 0);
        bVar1 = SUB161(auVar22 >> 7,0) & 1 | (SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                (SUB161(auVar22 >> 0x17,0) & 1) << 2 | (SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                (SUB161(auVar22 >> 0x27,0) & 1) << 4 | (SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                (SUB161(auVar22 >> 0x37,0) & 1) << 6 | SUB161(auVar22 >> 0x3f,0) << 7;
        uVar8 = 0x7fef - uVar3 & 0x7fff;
        uVar26 = auVar22._8_8_;
        if (0x7fef < uVar8) {
          auVar15._0_4_ = -(uint)((int)((ulonglong)param_1 & 0xfffffffffffff) == 0);
          auVar15._4_4_ = -(uint)((int)(((ulonglong)param_1 & 0xfffffffffffff) >> 0x20) == 0);
          auVar15._8_4_ = 0xffffffff;
          auVar15._12_4_ = 0xffffffff;
          if ((byte)(SUB161(auVar15 >> 7,0) & 1 | (SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar15 >> 0x17,0) & 1) << 2 | (SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar15 >> 0x27,0) & 1) << 4 | (SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar15 >> 0x37,0) & 1) << 6 | SUB161(auVar15 >> 0x3f,0) << 7) == 0xff)
          {
            if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
              if ((bVar1 != 0xff) ||
                 (uVar20 = (ulonglong)(((param_3 & 0x7fffffff) >> 0x14) - 0x3f4),
                 lVar19 = CONCAT44(param_3,param_2) << uVar20, lVar24 = uVar26 << uVar20,
                 auVar23._0_4_ = -(uint)((int)lVar19 == 0),
                 auVar23._4_4_ = -(uint)((int)((ulonglong)lVar19 >> 0x20) == 0),
                 auVar23._8_4_ = -(uint)((int)lVar24 == 0),
                 auVar23._12_4_ = -(uint)((int)((ulonglong)lVar24 >> 0x20) == 0),
                 (byte)(SUB161(auVar23 >> 7,0) & 1 | (SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                        (SUB161(auVar23 >> 0x17,0) & 1) << 2 | (SUB161(auVar23 >> 0x1f,0) & 1) << 3
                        | (SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                        (SUB161(auVar23 >> 0x2f,0) & 1) << 5 | (SUB161(auVar23 >> 0x37,0) & 1) << 6
                       | SUB161(auVar23 >> 0x3f,0) << 7) == 0xff)) {
                if ((param_3 & 0x80000000) != 0) {
                  return (float10)0;
                }
                goto LAB_004a81ae;
              }
              if ((param_3 & 0x80000000) == 0) {
                return (float10)-INFINITY;
              }
              goto LAB_004a8049;
            }
            if ((param_3 & 0x80000000) != 0) {
              return (float10)0;
            }
            goto LAB_004a81ae;
          }
          goto LAB_004a808f;
        }
        if (bVar1 == 0xff) {
          uVar20 = (ulonglong)(((param_3 & 0x7fffffff) >> 0x14) - 0x3f4);
          in_XMM3 = ZEXT816(0x8000000000000000);
          lVar19 = CONCAT44(param_3,param_2) << uVar20;
          lVar24 = uVar26 << uVar20;
          auVar21._0_4_ = -(uint)((int)lVar19 == 0);
          auVar21._4_4_ = -(uint)((int)((ulonglong)lVar19 >> 0x20) == in_XMM3._4_4_);
          auVar21._8_4_ = -(uint)((int)lVar24 == 0);
          auVar21._12_4_ = -(uint)((int)((ulonglong)lVar24 >> 0x20) == 0);
          uVar3 = (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7) + 0x3ff01 & 0x40000;
          if (0xf < uVar8) {
            uVar8 = 0xbfe7f;
            in_XMM3 = ZEXT816(0xfffffffffffff);
            in_XMM2_Qb = auVar21._8_8_;
            goto LAB_004a7aa6;
          }
          goto LAB_004a7ec4;
        }
        uVar20 = (ulonglong)param_1 >> 0x20;
        in_XMM2_Qb = uVar26 >> 0x20;
        uVar3 = 0;
        uVar8 = 0;
        if (iVar6 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          dVar29 = -NAN;
          iVar9 = 0x1c;
          goto LAB_004a8231;
        }
LAB_004a7f4a:
        dVar30 = dVar11;
        if ((uVar8 & 0x7fffffff) == 0) {
          if ((param_3 & 0x80000000) == 0) {
            if ((uVar8 & uVar3 << 0xd) == 0) {
              return (float10)0;
            }
LAB_004a8049:
            return (float10)-0.0;
          }
          dVar29 = (double)((ulonglong)(uVar8 & uVar3 << 0xd | 0x7ff00000) << 0x20);
          iVar9 = 0x1b;
          goto LAB_004a8231;
        }
      }
      else {
        uVar3 = 0;
LAB_004a7ec4:
        dVar33 = 2.225073858507201e-308;
        in_XMM2_Qb = auVar21._8_8_;
        uVar20 = 0x3ff0000000000000;
        dVar11 = param_1 * 1.8446744073709552e+19;
        uVar8 = uVar7;
        dVar30 = dVar11;
        if (iVar6 == 0) goto LAB_004a7f4a;
      }
      dVar11 = (double)((ulonglong)ABS(dVar30) >> 0x2c);
      uVar8 = (SUB82(dVar11,0) & 0xff) + 1 & 0x1fe;
      dVar33 = (double)((ulonglong)dVar33 & (ulonglong)dVar30 | uVar20) *
               *(double *)(&DAT_004c0be0 + uVar8 * 4);
      dVar29 = *(double *)(&DAT_004c0be0 + uVar8 * 4);
      dVar12 = *(double *)(&DAT_004c0ff0 + uVar8 * 8);
      dVar31 = *(double *)(&UNK_004c0ff8 + uVar8 * 8);
      uVar8 = 0x43e7f;
      goto LAB_004a7aa6;
    }
    dVar12 = param_1;
    if ((0x7fefffff < (uVar7 & 0x7fffffff)) && ((0x7ff00000 < (uVar7 & 0x7fffffff) || (iVar6 != 0)))
       ) {
LAB_004a808f:
      dVar29 = param_1 + param_1;
      iVar9 = 0x3ee;
      goto LAB_004a8231;
    }
LAB_004a813c:
    dVar29 = auVar21._0_8_;
    uVar26 = in_XMM3._8_8_ & auVar21._8_8_;
    auVar17._0_4_ = -(uint)((int)((ulonglong)dVar29 & 0xfffffffffffff) == 0);
    auVar17._4_4_ = -(uint)((int)(((ulonglong)dVar29 & 0xfffffffffffff) >> 0x20) == 0);
    auVar17._8_4_ = -(uint)((int)uVar26 == 0);
    auVar17._12_4_ = -(uint)((int)(uVar26 >> 0x20) == 0);
    if ((byte)(SUB161(auVar17 >> 7,0) & 1 | (SUB161(auVar17 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar17 >> 0x17,0) & 1) << 2 | (SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar17 >> 0x27,0) & 1) << 4 | (SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
               (SUB161(auVar17 >> 0x37,0) & 1) << 6 | SUB161(auVar17 >> 0x3f,0) << 7) == 0xff) {
      if (dVar12 != -1.0) {
        if ((auVar21._6_2_ & 0x8000) == 0) {
          if ((uVar10 & 0x7ff0) < 0x3ff0) {
            return (float10)0;
          }
        }
        else if (0x3fef < (uVar10 & 0x7ff0)) {
          return (float10)0;
        }
LAB_004a81ae:
        return (float10)INFINITY;
      }
LAB_004a821a:
      dVar29 = (double)CONCAT44(param_3,param_2) + -NAN;
      iVar9 = 0x1c;
      goto LAB_004a8231;
    }
  }
  dVar29 = dVar29 + dVar29;
  iVar9 = 0x3ee;
LAB_004a8231:
  ___libm_error_support(&param_1,(undefined8 *)&param_2,(undefined8 *)&stack0xfffffff4,iVar9);
  return (float10)dVar29;
}


/* END FUNCTION 0x004a7a29 */
