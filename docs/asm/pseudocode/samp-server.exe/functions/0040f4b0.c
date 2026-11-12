/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040f4b0
 * Name: FUN_0040f4b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall FUN_0040f4b0(void *this,byte *param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  void *pvVar13;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  void *extraout_ECX;
  void *pvVar14;
  void *extraout_ECX_00;
  undefined4 extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  undefined4 extraout_ECX_07;
  void *extraout_ECX_08;
  void *extraout_ECX_09;
  void *extraout_ECX_10;
  void *extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 uVar15;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  bool bVar16;
  bool bVar17;
  
  bVar2 = param_3[1];
  bVar3 = param_3[2];
  bVar4 = *param_3;
  bVar5 = param_3[3];
  bVar8 = false;
  bVar7 = false;
  pvVar9 = (void *)FUN_00408240(CONCAT31((int3)((uint)this >> 8),bVar4),param_1);
  pvVar14 = extraout_ECX;
joined_r0x0040f4ed:
  if (pvVar9 == (void *)0x0) {
    return *param_2 == 0;
  }
  if (bVar8) {
LAB_0040f529:
    if (pvVar9 == (void *)(uint)bVar3) {
      uVar10 = 0;
      uVar11 = FUN_00408240(pvVar14,param_2);
      if (uVar11 == 0) {
        return false;
      }
      uVar12 = FUN_00408240(extraout_ECX_01,param_1);
      bVar16 = uVar12 == 0x5e;
      pvVar14 = extraout_ECX_02;
      if (bVar16) {
        uVar12 = FUN_00408240(extraout_ECX_02,param_1);
        pvVar14 = extraout_ECX_03;
      }
      bVar17 = uVar12 == 0x5d;
      if (bVar17) {
        uVar12 = FUN_00408240(pvVar14,param_1);
        pvVar14 = extraout_ECX_04;
      }
      bVar17 = bVar17 && uVar11 == 0x5d;
      if (uVar12 == 0) {
        return false;
      }
      while (uVar12 != 0x5d) {
        if (uVar12 == 0x2d) {
          bVar6 = *param_1;
          pvVar14 = (void *)CONCAT31((int3)((uint)pvVar14 >> 8),bVar6);
          if (((bVar6 == 0x5d) || (bVar6 == 0)) || ((int)uVar10 < 1)) goto LAB_0040f5db;
          uVar12 = FUN_00408240(pvVar14,param_1);
          if (((int)uVar10 <= (int)uVar11) && ((int)uVar11 <= (int)uVar12)) {
            bVar17 = true;
          }
          pvVar14 = extraout_ECX_05;
          uVar10 = 0;
        }
        else {
LAB_0040f5db:
          uVar10 = uVar12;
          if (uVar11 == uVar12) {
            bVar17 = true;
          }
        }
        uVar12 = FUN_00408240(pvVar14,param_1);
        pvVar14 = extraout_ECX_06;
        if (uVar12 == 0) {
          return false;
        }
      }
      bVar8 = bVar7;
      if (bVar16 == bVar17) {
        return false;
      }
    }
    else if (((void *)param_4 != pvVar9) || (bVar8)) {
      pvVar13 = (void *)FUN_00408240(pvVar14,param_2);
      pvVar14 = (void *)CONCAT31((int3)((uint)extraout_ECX_07 >> 8),bVar5);
      if (bVar5 != 0) {
        if ((int)pvVar9 < 0x80) {
          pvVar9 = (void *)(uint)*(byte *)((int)pvVar9 + 0x4b28c8);
        }
        if ((int)pvVar13 < 0x80) {
          pvVar13 = (void *)(uint)*(byte *)((int)pvVar13 + 0x4b28c8);
        }
      }
      if (pvVar9 != pvVar13) {
        return false;
      }
      bVar7 = false;
      bVar8 = bVar7;
    }
    else {
      bVar7 = true;
      bVar8 = bVar7;
    }
  }
  else {
    pvVar14 = (void *)(uint)bVar4;
    if (pvVar9 == pvVar14) {
      while ((pvVar9 = (void *)FUN_00408240(pvVar14,param_1), pvVar14 = extraout_ECX_09,
             pvVar9 == (void *)(uint)bVar4 || (pvVar14 = (void *)(uint)bVar2, pvVar9 == pvVar14))) {
        if ((pvVar9 == (void *)(uint)bVar2) &&
           (uVar10 = FUN_00408240(pvVar14,param_2), pvVar14 = extraout_ECX_10, uVar10 == 0)) {
          return false;
        }
      }
      if (pvVar9 == (void *)0x0) {
        return true;
      }
      if (pvVar9 == (void *)param_4) {
        pvVar9 = (void *)FUN_00408240(pvVar14,param_1);
        pvVar14 = extraout_ECX_11;
        if (pvVar9 == (void *)0x0) {
          return false;
        }
      }
      else if (pvVar9 == (void *)(uint)bVar3) {
        if (*param_2 != 0) {
          do {
            bVar8 = FUN_0040f4b0(pvVar14,param_1 + -1,param_2,param_3,param_4);
            if (CONCAT31(extraout_var,bVar8) != 0) break;
            bVar2 = *param_2;
            pvVar14 = (void *)CONCAT31((int3)((uint)extraout_ECX_12 >> 8),bVar2);
            param_2 = param_2 + 1;
            if (0xbf < bVar2) {
              bVar2 = *param_2;
              while ((bVar2 & 0xc0) == 0x80) {
                pbVar1 = param_2 + 1;
                param_2 = param_2 + 1;
                bVar2 = *pbVar1;
              }
            }
          } while (*param_2 != 0);
        }
        return *param_2 != 0;
      }
      pvVar14 = (void *)FUN_00408240(pvVar14,param_2);
      uVar15 = extraout_ECX_13;
      if (pvVar14 != (void *)0x0) {
        while( true ) {
          uVar15 = CONCAT31((int3)((uint)uVar15 >> 8),bVar5);
          if (bVar5 == 0) {
            while (pvVar14 != pvVar9) {
              pvVar14 = (void *)FUN_00408240(uVar15,param_2);
              uVar15 = extraout_ECX_15;
              if (pvVar14 == (void *)0x0) {
                return false;
              }
            }
          }
          else {
            if ((int)pvVar14 < 0x80) {
              pvVar14 = (void *)(uint)*(byte *)((int)pvVar14 + 0x4b28c8);
            }
            if ((int)pvVar9 < 0x80) {
              pvVar9 = (void *)(uint)*(byte *)((int)pvVar9 + 0x4b28c8);
            }
            if (pvVar14 == (void *)0x0) {
              return false;
            }
            while (pvVar14 != pvVar9) {
              pvVar14 = (void *)FUN_00408240(uVar15,param_2);
              if ((int)pvVar14 < 0x80) {
                pvVar14 = (void *)(uint)*(byte *)((int)pvVar14 + 0x4b28c8);
              }
              uVar15 = extraout_ECX_14;
              if (pvVar14 == (void *)0x0) {
                return false;
              }
            }
          }
          if (pvVar14 == (void *)0x0) break;
          bVar8 = FUN_0040f4b0((void *)param_4,param_1,param_2,param_3,param_4);
          if (CONCAT31(extraout_var_00,bVar8) != 0) {
            return true;
          }
          pvVar14 = (void *)FUN_00408240(extraout_ECX_16,param_2);
          uVar15 = extraout_ECX_17;
          if (pvVar14 == (void *)0x0) {
            return false;
          }
        }
      }
      return false;
    }
    if (pvVar9 != (void *)(uint)bVar2) goto LAB_0040f529;
    uVar10 = FUN_00408240(pvVar14,param_2);
    if (uVar10 == 0) {
      return false;
    }
    pvVar14 = extraout_ECX_00;
    bVar8 = false;
  }
  pvVar9 = (void *)FUN_00408240(pvVar14,param_1);
  pvVar14 = extraout_ECX_08;
  goto joined_r0x0040f4ed;
}


/* END FUNCTION 0x0040f4b0 */
