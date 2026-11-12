/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00432d20
 * Name: FUN_00432d20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x00433187) */

void __cdecl
FUN_00432d20(int *param_1,int param_2,int param_3,uint param_4,uint param_5,int *param_6,
            uint *param_7)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int *piVar8;
  int iVar9;
  void *this;
  int iVar10;
  int extraout_EDX;
  uint *extraout_EDX_00;
  uint *extraout_EDX_01;
  uint *puVar11;
  uint uVar12;
  ushort *puVar13;
  uint uVar14;
  float10 fVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint local_b8;
  int *local_b4;
  double local_b0;
  int *local_a4;
  uint local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  uint local_8c;
  double local_88;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  uint local_40;
  int local_3c [2];
  undefined4 *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined1 local_24;
  int local_1c;
  
  iVar1 = *(int *)(param_3 + 0x18);
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  param_7[3] = 0;
  param_7[4] = 0;
  param_7[5] = 0;
  param_7[6] = 0;
  param_7[7] = 0;
  param_7[8] = 0;
  param_7[9] = 0;
  param_7[4] = 0xa2879f2e;
  param_7[5] = 0x547d42ae;
  local_b4 = *(int **)(param_3 + 0x34);
  local_4c = ((byte)~*(byte *)(param_3 + 0x15) & 8) << 4 | 3;
  local_58 = 0xffffffff;
  if (local_b4 == (int *)0x0) {
    piVar8 = local_3c;
    for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
      *piVar8 = 0;
      piVar8 = piVar8 + 1;
    }
    local_34 = &local_58;
    local_30 = &local_54;
    local_3c[1] = 1;
    local_50 = 1;
    local_2c = *(int *)(param_3 + 0xc);
    iVar10 = *(int *)(local_2c + 0x14);
    local_24 = 5;
    if (*(char *)(param_3 + 0x16) == '\0') {
      local_1c = iVar10;
    }
    if (iVar10 == 0) {
      local_54 = 1000000;
    }
    else {
      local_54 = **(undefined4 **)(iVar10 + 0xc);
    }
    local_a4 = local_3c;
    local_6c = 0xfff0ffff;
    local_74 = 3;
    local_b4 = (int *)0x0;
  }
  else {
    local_6c = 0xffffcfff;
    local_a4 = local_b4;
    local_74 = local_4c;
  }
  do {
    puVar11 = (uint *)local_a4[3];
    uVar12 = 0;
    local_b8 = 0;
    local_98 = 0;
    local_94 = 0;
    bVar6 = false;
    local_9c = 1;
    local_a0 = 0;
    bVar5 = false;
    bVar3 = false;
    local_70 = 0;
    uVar14 = 0;
    bVar7 = false;
    if (0 < local_a4[1]) {
      do {
        bVar6 = bVar7;
        piVar8 = (int *)FUN_00432a40(param_2,iVar1,*(int *)(local_a4[2] + uVar12 * 4),param_4,
                                     param_5,(ushort)local_74,(int)local_b4);
        local_b8 = uVar14;
        local_70 = uVar12;
        if (piVar8 == (int *)0x0) break;
        local_b8 = uVar14 | 0x11000;
        if ((*(ushort *)(piVar8 + 4) & 1) == 0) {
          if ((char)*(ushort *)(piVar8 + 4) < '\0') {
            local_b8 = uVar14 | 0x91000;
          }
        }
        else {
          local_b8 = uVar14 | 0x51000;
          if ((*(byte *)(*piVar8 + 3) & 8) == 0) {
            piVar2 = *(int **)(*piVar8 + 0x10);
            if (piVar2 != (int *)0x0) {
              local_9c = (*piVar2 + 1) * local_9c;
            }
          }
          else {
            local_9c = local_9c * 0x19;
            bVar6 = true;
          }
        }
        local_98 = local_98 | piVar8[6];
        local_94 = local_94 | piVar8[7];
        uVar12 = uVar12 + 1;
        uVar14 = local_b8;
        local_70 = uVar12;
        bVar7 = bVar6;
      } while ((int)uVar12 < local_a4[1]);
    }
    if ((int)local_70 < local_a4[1]) {
      iVar10 = *(int *)(local_a4[2] + local_70 * 4);
      iVar9 = FUN_00432a40(param_2,iVar1,iVar10,param_4,param_5,0x3c,(int)local_b4);
      if (iVar9 != 0) {
        iVar9 = FUN_00432a40(param_2,iVar1,iVar10,param_4,param_5,0x18,(int)local_b4);
        this = (void *)FUN_00432a40(param_2,iVar1,iVar10,param_4,param_5,0x24,(int)local_b4);
        FUN_00410860(this,iVar9);
        if (iVar9 != 0) {
          local_98 = local_98 | *(uint *)(iVar9 + 0x18);
          local_b8 = local_b8 | 0x100000;
          local_94 = local_94 | *(uint *)(iVar9 + 0x1c);
        }
        local_a0 = (uint)(iVar9 != 0);
        if (extraout_EDX != 0) {
          local_98 = local_98 | *(uint *)(extraout_EDX + 0x18);
          local_a0 = local_a0 + 1;
          local_b8 = local_b8 | 0x200000;
          local_94 = local_94 | *(uint *)(extraout_EDX + 0x1c);
        }
        local_b8 = local_b8 | 0x22000;
      }
    }
    else if (((char)local_a4[6] != '\0') && ((local_b8 & 0xc0000) == 0)) {
      local_b8 = local_b8 | 0x4000000;
    }
    if (param_6 != (int *)0x0) {
      if (((local_b8 & 0xc0000) == 0) &&
         (iVar10 = FUN_00432b70(param_1,*(int **)(param_2 + 4),local_a4,iVar1,param_6,local_70,
                                &local_40), iVar10 != 0)) {
        local_b8 = local_b8 | -(uint)(local_40 != 0) & 0x2000000 | 0x1022000;
      }
      else {
        bVar5 = true;
      }
    }
    if ((local_b4 != (int *)0x0) && (local_b8 != 0)) {
      uVar14 = *(uint *)(param_3 + 0x28);
      uVar12 = *(uint *)(param_3 + 0x2c);
      local_88._0_4_ = local_b4[1];
      if (0 < local_88._0_4_) {
        piVar8 = (int *)local_b4[2];
        do {
          if (*piVar8 < 0x3f) {
            lVar16 = __allshl((byte)*piVar8,0);
            uVar14 = uVar14 & ~(uint)lVar16;
            uVar12 = uVar12 & ~(uint)((ulonglong)lVar16 >> 0x20);
          }
          piVar8 = piVar8 + 1;
          local_88._0_4_ = local_88._0_4_ + -1;
        } while (local_88._0_4_ != 0);
      }
      bVar3 = uVar14 != 0 || uVar12 != 0;
      if (uVar14 == 0 && uVar12 == 0) {
        local_b8 = local_b8 | 0x800000;
      }
    }
    local_88 = (double)(int)(puVar11[local_70] * local_9c);
    if ((int)(puVar11[local_70] * local_9c) < 0) {
      local_88 = local_88 + 4294967296.0;
    }
    if (bVar6) {
      uVar14 = *puVar11;
      dVar4 = (double)(int)uVar14;
      if ((int)uVar14 < 0) {
        dVar4 = dVar4 + 4294967296.0;
      }
      if (dVar4 < local_88 + local_88) {
        local_88 = (double)(uVar14 >> 1);
        uVar17 = FUN_004a0540();
        local_9c = (int)uVar17;
      }
    }
    dVar4 = (double)(int)*puVar11;
    if ((int)*puVar11 < 0) {
      dVar4 = dVar4 + 4294967296.0;
    }
    fVar15 = FUN_00410820(dVar4);
    dVar4 = local_88 * 100.0 * 0.01;
    local_b0 = (double)(fVar15 * (float10)local_9c + (float10)local_88) * 100.0 * 0.01;
    puVar11 = extraout_EDX_00;
    if (bVar5) {
      fVar15 = FUN_00410820(local_b0);
      local_b0 = (double)((fVar15 + (float10)1.0) * (float10)local_b0);
      puVar11 = extraout_EDX_01;
    }
    if ((local_b4 != (int *)0x0) && (!bVar3)) {
      local_b0 = local_b0 * 0.5;
    }
    if (((2.0 < dVar4) &&
        (local_b0 < *(double *)(puVar11 + 4) != (local_b0 == *(double *)(puVar11 + 4)))) &&
       (uVar14 = (param_5 - 1) + (uint)(param_4 != 0) & param_5,
       (param_4 - 1 & param_4) != 0 || uVar14 != 0)) {
      lVar16 = FUN_004106c0(uVar14,*(int **)(param_2 + 4));
      iVar10 = *(int *)(param_2 + 0x14);
      puVar13 = (ushort *)(*(int *)(param_2 + 0x1c) + 0x10);
      local_8c = local_70;
      do {
        if (iVar10 == 0) break;
        if ((puVar13[1] & 2) == 0) {
          local_48._0_4_ = (uint)lVar16;
          if (((*(uint *)(puVar13 + 8) & param_4) == (uint)local_48) &&
             (local_48._4_4_ = (uint)((ulonglong)lVar16 >> 0x20),
             (*(uint *)(puVar13 + 10) & param_5) == local_48._4_4_)) {
            if ((*puVar13 & 0x83) == 0) {
              if ((*puVar13 & 0x3c) == 0) {
                dVar4 = dVar4 * 0.5;
              }
              else if (local_a0 == 0) {
                dVar4 = dVar4 * 0.3333333333333333;
              }
              else {
                local_a0 = local_a0 - 1;
              }
            }
            else if (local_8c == 0) {
              dVar4 = dVar4 * 0.1;
            }
            else {
              local_8c = local_8c - 1;
            }
          }
        }
        iVar10 = iVar10 + -1;
        puVar13 = puVar13 + 0x14;
      } while (2.0 < dVar4);
      puVar11 = param_7;
      local_48 = lVar16;
      if (dVar4 < 2.0) {
        dVar4 = 2.0;
      }
    }
    if (((local_b4 == (int *)0x0) || (local_b8 != 0)) &&
       ((local_b0 < *(double *)(puVar11 + 4) ||
        ((local_b0 < *(double *)(puVar11 + 4) != (local_b0 == *(double *)(puVar11 + 4)) &&
         (dVar4 < *(double *)(puVar11 + 6))))))) {
      puVar11[8] = local_98;
      *(double *)(puVar11 + 4) = local_b0;
      puVar11[9] = local_94;
      *(double *)(puVar11 + 6) = dVar4;
      *puVar11 = local_b8 & local_6c;
      puVar11[1] = local_70;
      puVar11[2] = (uint)local_b4;
    }
    if (*(int *)(param_3 + 0x34) != 0) break;
    local_b4 = (int *)local_a4[8];
    local_74 = local_4c;
    local_6c = 0xffffcfff;
    local_a4 = local_b4;
  } while (local_b4 != (int *)0x0);
  if ((param_6 == (int *)0x0) && ((*(uint *)(*param_1 + 0xc) & 0x1000000) != 0)) {
    *puVar11 = *puVar11 | 0x2000000;
  }
  FUN_00436f60((void *)param_2,param_1,(undefined4 *)param_2,param_3,param_4,param_5,(int)param_6,
               puVar11);
  FUN_004172b0(param_3,param_4,param_5,param_7);
  *param_7 = *param_7 | local_74;
  return;
}


/* END FUNCTION 0x00432d20 */
