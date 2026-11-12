/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c780
 * Name: FUN_0048c780
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl FUN_0048c780(int *param_1,uint param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  int *this;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint *puVar11;
  int *piVar12;
  char *pcVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  char *pcVar17;
  uint uVar18;
  ushort *puVar19;
  ushort *puVar20;
  int *piVar21;
  uint *puVar22;
  int iVar23;
  ushort *puVar24;
  int *local_68;
  int *piStack_64;
  uint uStack_60;
  int *local_5c;
  ushort *puStack_58;
  int *piStack_54;
  ushort *local_50;
  char *pcStack_4c;
  int *piStack_48;
  int *piStack_44;
  char *pcStack_40;
  ushort *puStack_3c;
  ushort *puStack_38;
  int iStack_34;
  int *piStack_30;
  int *piStack_2c;
  ushort *puStack_28;
  int iStack_24;
  int *piStack_20;
  uint auStack_1c [7];
  
  this = param_1;
  iVar5 = param_1[7];
  if (param_1[6] != iVar5) {
    iVar10 = param_1[iVar5 * 0xc + 0x153];
    *param_3 = param_1[iVar5 * 0xc + 0x154];
    param_1[7] = param_1[iVar5 * 0xc + 0x153];
    return (char *)(iVar10 - iVar5);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_1[0xc] == 0) {
    local_5c = (int *)FUN_0048c4f0((int *)&local_68);
  }
  else {
    local_5c = (int *)param_1[8];
    local_68 = (int *)param_1[9];
  }
  local_50 = (ushort *)param_1[10];
  if (local_50 < (ushort *)0x2) {
    *param_3 = -1;
    return (char *)0x1;
  }
  if ((ushort *)0x111 < local_50) {
    local_50 = (ushort *)0x111;
  }
  pcVar3 = (char *)(*(code *)param_1[3])(*param_1);
  piVar21 = local_5c;
  bVar1 = pcVar3[-1];
  pcVar17 = pcVar3 + -1;
  puStack_58 = (ushort *)(param_1 + 0xd);
  piStack_48 = (int *)0x0;
  piStack_54 = (int *)0x0;
  piVar4 = (int *)0x0;
  piStack_44 = (int *)0x0;
  do {
    pcVar9 = pcVar17 + -*(int *)puStack_58;
    *(int *)((int)&piStack_20 + (int)piVar4) = *(int *)puStack_58;
    if ((bVar1 == pcVar9[-1]) && (*pcVar3 == *pcVar9)) {
      puVar20 = (ushort *)0x2;
      if ((ushort *)0x2 < local_50) {
        pcVar13 = pcVar3;
        do {
          pcVar13 = pcVar13 + 1;
          if (*pcVar13 != pcVar13[(int)(pcVar9 + -1) - (int)pcVar17]) break;
          puVar20 = (ushort *)((int)puVar20 + 1);
        } while (puVar20 < local_50);
      }
      *(ushort **)((int)(auStack_1c + 3) + (int)piVar4) = puVar20;
      if (*(ushort **)((int)(auStack_1c + 3) + (int)piStack_44) < puVar20) {
        piStack_48 = piStack_54;
        piStack_44 = piVar4;
      }
    }
    else {
      *(undefined4 *)((int)(auStack_1c + 3) + (int)piVar4) = 0;
    }
    piStack_54 = (int *)((int)piStack_54 + 1);
    piVar4 = piVar4 + 1;
    puStack_58 = puStack_58 + 2;
  } while (piVar4 < (int *)0x10);
  piVar4 = (int *)auStack_1c[(int)piStack_48 + 3];
  puStack_38 = (ushort *)piVar4;
  if ((int *)param_1[0xb] <= piVar4) {
    *param_3 = (int)piStack_48;
    FUN_0048c4d0((int)((int)piVar4 + -1));
    return (char *)piVar4;
  }
  if ((int *)param_1[0xb] <= local_5c) {
    *param_3 = param_1[(int)(local_68 + 0x30f3)] + 4;
    FUN_0048c4d0((int)((int)local_5c + -1));
    return (char *)piVar21;
  }
  bVar2 = pcVar17[-1 - (int)piStack_20];
  if (((local_5c < (int *)0x2) && (bVar1 != bVar2)) && (piVar4 < (int *)0x2)) {
    *param_3 = -1;
    return (char *)0x1;
  }
  uVar14 = param_1[0x11];
  uStack_60 = param_2 & param_1[0x16];
  param_1[0x14e] = uVar14;
  if (uVar14 < 7) {
    iVar5 = FUN_0048c070((uint)bVar1,(int)(param_1 + 0xc34d));
  }
  else {
    iVar5 = FUN_0048c0b0((void *)(uint)bVar1,
                         ((uint)((byte)pcVar3[-2] >> (8 - (byte)param_1[0x12] & 0x1f)) +
                         ((param_1[0x15] & param_2) << ((byte)param_1[0x12] & 0x1f))) * 0x600 +
                         param_1[0x18]);
  }
  iVar10 = uVar14 * 0x10 + uStack_60;
  param_1[0x159] = param_1[(*(ushort *)((int)param_1 + iVar10 * 2 + 0x32408) >> 4) + 0xc34d] + iVar5
  ;
  param_1[0x160] = -1;
  param_1[0x15b] = 0;
  pcStack_40 = (char *)param_1[((*(ushort *)((int)param_1 + iVar10 * 2 + 0x32408) ^ 0x7f0) >> 4) +
                               0xc34d];
  puVar20 = (ushort *)
            (pcStack_40 +
            param_1[((*(ushort *)((int)param_1 + uVar14 * 2 + 0x32588) ^ 0x7f0) >> 4) + 0xc34d]);
  puStack_3c = puVar20;
  if (bVar2 == bVar1) {
    iVar5 = FUN_0048c570(param_1,uStack_60);
    if ((char *)(iVar5 + (int)puVar20) < (char *)param_1[0x159]) {
      param_1[0x159] = iVar5 + (int)puVar20;
      param_1[0x160] = 0;
      param_1[0x15b] = 0;
    }
  }
  piStack_64 = (int *)puStack_38;
  if (puStack_38 <= local_5c) {
    piStack_64 = local_5c;
  }
  if (piStack_64 < (int *)0x2) {
    *param_3 = param_1[0x160];
    return (char *)0x1;
  }
  param_1[0x15f] = 0;
  param_1[0x155] = (int)piStack_20;
  param_1[0x157] = auStack_1c[1];
  param_1[0x156] = auStack_1c[0];
  param_1[0x158] = auStack_1c[2];
  piVar21 = param_1 + (int)piStack_64 * 0xc + 0x14d;
  piVar4 = piStack_64;
  do {
    *piVar21 = 0x40000000;
    piVar4 = (int *)((int)piVar4 + -1);
    piVar21 = piVar21 + -0xc;
  } while ((int *)0x1 < piVar4);
  uVar14 = 0;
  do {
    uVar18 = auStack_1c[uVar14 + 3];
    if (1 < uVar18) {
      iVar5 = FUN_0048c5b0((int)param_1,param_1[0x11],uStack_60);
      piVar21 = param_1 + uStack_60 * 0x110 + uVar18 + 0xddad;
      puVar11 = (uint *)(param_1 + uVar18 * 0xc + 0x154);
      do {
        pcVar3 = (char *)((int)puStack_3c + *piVar21 + iVar5);
        if (pcVar3 < (char *)puVar11[-7]) {
          puVar11[-7] = (uint)pcVar3;
          puVar11[-1] = 0;
          *puVar11 = uVar14;
          puVar11[-5] = 0;
        }
        uVar18 = uVar18 - 1;
        piVar21 = piVar21 + -1;
        puVar11 = puVar11 + -0xc;
      } while (1 < uVar18);
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 < 4);
  puStack_38 = (ushort *)
               (pcStack_40 +
               param_1[(*(ushort *)((int)param_1 + param_1[0x11] * 2 + 0x32588) >> 4) + 0xc34d]);
  piVar21 = (int *)(auStack_1c[3] + 1);
  if (auStack_1c[3] < 2) {
    piVar21 = (int *)0x2;
  }
  if (piVar21 <= local_5c) {
    piVar12 = (int *)0x0;
    piVar4 = (int *)param_1[0xc3cd];
    while (piVar4 < piVar21) {
      iVar5 = (int)piVar12 + 0xc3cf;
      piVar12 = (int *)((int)piVar12 + 2);
      piVar4 = (int *)param_1[iVar5];
    }
    local_50 = (ushort *)(param_1 + (int)((int)piVar21 + uStack_60 * 0x110 + 0xcb9b));
    piStack_44 = param_1 + (int)piVar21 * 0xc + 0x154;
    param_1 = piVar12;
    while( true ) {
      uVar14 = this[(int)piVar12 + 0xc3ce];
      pcVar3 = (char *)((int)piVar21 + -2);
      if ((int *)0x4 < piVar21) {
        pcVar3 = (char *)0x3;
      }
      if (uVar14 < 0x80) {
        iVar5 = this[(int)pcVar3 * 0x80 + uVar14 + 0xc6f2];
      }
      else {
        iVar5 = (-(uint)(uVar14 < 0x20000) & 0xfffffff6) + 0x10;
        iVar5 = this[*(byte *)((uVar14 >> ((byte)iVar5 & 0x1f)) + 0x30534 + (int)this) + 0xc5f2 +
                     ((int)pcVar3 * 0x20 + iVar5) * 2] + this[(uVar14 & 0xf) + 0xc8f2];
        piVar12 = param_1;
      }
      pcVar3 = (char *)((int)puStack_38 + iVar5 + *(int *)local_50);
      if (pcVar3 < (char *)piStack_44[-7]) {
        piStack_44[-7] = (int)pcVar3;
        piStack_44[-1] = 0;
        *piStack_44 = uVar14 + 4;
        piStack_44[-5] = 0;
      }
      if ((piVar21 == (int *)this[(int)piVar12 + 0xc3cd]) &&
         (piVar12 = (int *)((int)piVar12 + 2), param_1 = piVar12, piVar12 == local_68)) break;
      piVar21 = (int *)((int)piVar21 + 1);
      local_50 = local_50 + 2;
      piStack_44 = piStack_44 + 0xc;
    }
  }
  local_68 = (int *)0x1;
  if (piStack_64 != (int *)0x1) {
    do {
      puStack_28 = (ushort *)FUN_0048c4f0((int *)&piStack_44);
      piVar21 = local_68;
      if ((ushort *)this[0xb] <= puStack_28) {
        this[9] = (int)piStack_44;
        this[8] = (int)puStack_28;
        break;
      }
      uVar14 = param_2 + 1;
      pcVar3 = (char *)this[(int)local_68 * 0xc + 0x153];
      if (this[(int)local_68 * 0xc + 0x14f] == 0) {
        iVar5 = this[(int)pcVar3 * 0xc + 0x14e];
      }
      else {
        pcVar3 = pcVar3 + -1;
        if (this[(int)local_68 * 0xc + 0x150] == 0) {
          iVar5 = *(int *)(&DAT_004bf13c + this[(int)pcVar3 * 0xc + 0x14e] * 4);
        }
        else if ((uint)this[(int)local_68 * 0xc + 0x152] < 4) {
          iVar5 = *(int *)(&DAT_004bf13c +
                          *(int *)(&DAT_004bf19c +
                                  this[this[(int)local_68 * 0xc + 0x151] * 0xc + 0x14e] * 4) * 4);
        }
        else {
          iVar5 = *(int *)(&DAT_004bf13c +
                          *(int *)(&DAT_004bf16c +
                                  this[this[(int)local_68 * 0xc + 0x151] * 0xc + 0x14e] * 4) * 4);
        }
      }
      if (pcVar3 == (char *)((int)local_68 + -1)) {
        if (this[(int)local_68 * 0xc + 0x154] == 0) {
          uStack_60 = *(uint *)(&DAT_004bf1cc + iVar5 * 4);
        }
        else {
          uStack_60 = *(uint *)(&DAT_004bf13c + iVar5 * 4);
        }
      }
      else {
        if ((this[(int)local_68 * 0xc + 0x14f] == 0) || (this[(int)local_68 * 0xc + 0x150] == 0)) {
          param_1 = (int *)this[(int)local_68 * 0xc + 0x154];
          if (param_1 < (int *)0x4) {
            uStack_60 = *(uint *)(&DAT_004bf19c + iVar5 * 4);
          }
          else {
            uStack_60 = *(uint *)(&DAT_004bf16c + iVar5 * 4);
          }
        }
        else {
          param_1 = (int *)this[(int)local_68 * 0xc + 0x152];
          pcVar3 = (char *)this[(int)local_68 * 0xc + 0x151];
          uStack_60 = *(uint *)(&DAT_004bf19c + iVar5 * 4);
        }
        if (param_1 < (int *)0x4) {
          piStack_20 = (int *)this[(int)param_1 + (int)pcVar3 * 0xc + 0x155];
          uVar18 = 1;
          if (param_1 != (int *)0x0) {
            uVar18 = (int)param_1 + 1;
            puVar11 = (uint *)(this + (int)pcVar3 * 0xc + 0x155);
            puVar22 = auStack_1c;
            for (; param_1 != (int *)0x0; param_1 = (int *)((int)param_1 + -1)) {
              *puVar22 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar22 = puVar22 + 1;
            }
            if (3 < uVar18) goto LAB_0048cea3;
          }
          puVar11 = (uint *)(this + (int)pcVar3 * 0xc + uVar18 + 0x155);
          puVar22 = auStack_1c + (uVar18 - 1);
          for (iVar5 = 4 - uVar18; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar22 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar22 = puVar22 + 1;
          }
        }
        else {
          auStack_1c[1] = this[(int)pcVar3 * 0xc + 0x156];
          piStack_20 = param_1 + -1;
          auStack_1c[0] = this[(int)pcVar3 * 0xc + 0x155];
          auStack_1c[2] = this[(int)pcVar3 * 0xc + 0x157];
        }
      }
LAB_0048cea3:
      piVar4 = piStack_20;
      this[(int)local_68 * 0xc + 0x14e] = uStack_60;
      this[(int)local_68 * 0xc + 0x156] = auStack_1c[0];
      local_50 = (ushort *)this[(int)local_68 * 0xc + 0x14d];
      this[(int)local_68 * 0xc + 0x155] = (int)piStack_20;
      this[(int)local_68 * 0xc + 0x157] = auStack_1c[1];
      this[(int)local_68 * 0xc + 0x158] = auStack_1c[2];
      pcStack_4c = (char *)0x0;
      iVar5 = (*(code *)this[3])(*this);
      bVar1 = *(byte *)(iVar5 + -1);
      local_5c = (int *)(iVar5 + -1);
      bVar2 = *(byte *)((int)local_5c + (-1 - (int)piVar4));
      puStack_3c = (ushort *)((int)local_5c + (-1 - (int)piVar4));
      piVar4 = (int *)(uVar14 & this[0x16]);
      puStack_38 = (ushort *)((int)this + (int)(piVar4 + uStack_60 * 4) * 2 + 0x32408);
      piStack_48 = (int *)(this[(*puStack_38 >> 4) + 0xc34d] + (int)local_50);
      piStack_54 = piVar4;
      if (uStack_60 < 7) {
        iVar5 = FUN_0048c070((uint)bVar1,(int)(this + 0xc34d));
        piVar4 = piStack_54;
      }
      else {
        iVar5 = FUN_0048c0b0((void *)(uint)bVar1,
                             ((uint)(*(byte *)(iVar5 + -2) >> (8 - (byte)this[0x12] & 0x1f)) +
                             ((this[0x15] & uVar14) << ((byte)this[0x12] & 0x1f))) * 0x600 +
                             this[0x18]);
      }
      piStack_48 = (int *)((int)piStack_48 + iVar5);
      if (piStack_48 < (int *)this[(int)piVar21 * 0xc + 0x159]) {
        this[(int)piVar21 * 0xc + 0x159] = (int)piStack_48;
        this[(int)piVar21 * 0xc + 0x15f] = (int)local_68;
        this[(int)piVar21 * 0xc + 0x160] = -1;
        this[(int)piVar21 * 0xc + 0x15b] = 0;
        pcStack_4c = (char *)0x1;
      }
      iStack_24 = this[((*puStack_38 ^ 0x7f0) >> 4) + 0xc34d] + (int)local_50;
      iVar5 = this[((*(ushort *)((int)this + uStack_60 * 2 + 0x32588) ^ 0x7f0) >> 4) + 0xc34d] +
              iStack_24;
      iStack_34 = iVar5;
      if ((bVar2 == bVar1) &&
         ((local_68 <= (int *)this[(int)piVar21 * 0xc + 0x15f] ||
          (this[(int)piVar21 * 0xc + 0x160] != 0)))) {
        iVar10 = FUN_0048c570(this,(int)piVar4);
        if ((uint)(iVar10 + iVar5) <= (uint)this[(int)piVar21 * 0xc + 0x159]) {
          this[(int)piVar21 * 0xc + 0x159] = iVar10 + iVar5;
          this[(int)piVar21 * 0xc + 0x15f] = (int)local_68;
          this[(int)piVar21 * 0xc + 0x160] = 0;
          this[(int)piVar21 * 0xc + 0x15b] = 0;
          pcStack_4c = (char *)0x1;
        }
      }
      piVar21 = piStack_48;
      local_50 = (ushort *)this[10];
      if ((ushort *)(0xfff - (int)local_68) < (ushort *)this[10]) {
        local_50 = (ushort *)(0xfff - (int)local_68);
      }
      if ((ushort *)0x1 < local_50) {
        puVar20 = (ushort *)this[0xb];
        puStack_58 = local_50;
        if (puVar20 < local_50) {
          puStack_58 = puVar20;
        }
        if ((pcStack_4c == (char *)0x0) && (bVar2 != bVar1)) {
          puVar15 = (ushort *)((int)puVar20 + 1);
          if (local_50 < (ushort *)((int)puVar20 + 1)) {
            puVar15 = local_50;
          }
          puVar20 = (ushort *)0x1;
          if ((ushort *)0x1 < puVar15) {
            piVar4 = local_5c;
            do {
              piVar4 = (int *)((int)piVar4 + 1);
              if (*(char *)piVar4 != *(char *)((int)piVar4 + ((int)puStack_3c - (int)local_5c)))
              break;
              puVar20 = (ushort *)((int)puVar20 + 1);
            } while (puVar20 < puVar15);
          }
          puStack_38 = (ushort *)((int)puVar20 + -1);
          if ((ushort *)0x1 < puStack_38) {
            iVar5 = *(int *)(&DAT_004bf13c + uStack_60 * 4);
            uVar18 = param_2 + 2 & this[0x16];
            iVar10 = this[((*(ushort *)((int)this + (iVar5 * 0x10 + uVar18) * 2 + 0x32408) ^ 0x7f0)
                          >> 4) + 0xc34d];
            iVar7 = this[((*(ushort *)((int)this + iVar5 * 2 + 0x32588) ^ 0x7f0) >> 4) + 0xc34d];
            piVar4 = (int *)((int)puVar20 + (int)local_68);
            if (piStack_64 < piVar4) {
              piVar12 = this + (int)piStack_64 * 0xc + 0x14d;
              iVar23 = (int)piVar4 - (int)piStack_64;
              piStack_64 = (int *)((int)piStack_64 + iVar23);
              do {
                piVar12 = piVar12 + 0xc;
                iVar23 = iVar23 + -1;
                *piVar12 = 0x40000000;
              } while (iVar23 != 0);
            }
            iVar5 = FUN_0048c670((int)this,iVar5,(int)puStack_38,uVar18);
            puVar11 = (uint *)(this + (int)piVar4 * 0xc + 0x14d);
            uVar18 = (int)piVar21 + iVar5 + iVar10 + iVar7;
            if (uVar18 < *puVar11) {
              *puVar11 = uVar18;
              puVar11[6] = (uint)((int)local_68 + 1);
              puVar11[7] = 0;
              puVar11[2] = 1;
              puVar11[3] = 0;
            }
          }
        }
        param_1 = (int *)0x0;
        puStack_3c = (ushort *)0x2;
        do {
          pcVar3 = (char *)((int)local_5c - auStack_1c[(int)param_1 + -1]);
          pcStack_4c = pcVar3 + -1;
          if (((char)*local_5c == pcVar3[-1]) && (*(char *)((int)local_5c + 1) == *pcVar3)) {
            puVar20 = (ushort *)0x2;
            if ((ushort *)0x2 < puStack_58) {
              pcVar3 = (char *)((int)local_5c + 2);
              do {
                if (*pcVar3 != pcVar3[(int)pcStack_4c - (int)local_5c]) break;
                puVar20 = (ushort *)((int)puVar20 + 1);
                pcVar3 = pcVar3 + 1;
              } while (puVar20 < puStack_58);
            }
            piVar21 = (int *)((int)puVar20 + (int)local_68);
            if (piStack_64 < piVar21) {
              iVar5 = (int)piVar21 - (int)piStack_64;
              piVar12 = (int *)((int)piStack_64 + iVar5);
              piVar4 = this + (int)piStack_64 * 0xc + 0x14d;
              do {
                piVar4 = piVar4 + 0xc;
                iVar5 = iVar5 + -1;
                *piVar4 = 0x40000000;
                piStack_64 = piVar12;
              } while (iVar5 != 0);
            }
            iVar5 = FUN_0048c5b0((int)this,uStack_60,(int)piStack_54);
            piStack_30 = (int *)((int)piStack_54 * 0x110);
            piStack_2c = (int *)(iVar5 + iStack_34);
            piStack_48 = this + (int)((int)((int)piStack_30 + (int)puVar20) + 0xddad);
            piVar21 = this + (int)piVar21 * 0xc + 0x154;
            puVar15 = puVar20;
            do {
              if ((char *)((int)piStack_2c + *piStack_48) < (char *)piVar21[-7]) {
                piVar21[-7] = (int)piStack_2c + *piStack_48;
                piVar21[-1] = (int)local_68;
                *piVar21 = (int)param_1;
                piVar21[-5] = 0;
              }
              puVar15 = (ushort *)((int)puVar15 + -1);
              piStack_48 = piStack_48 + -1;
              piVar21 = piVar21 + -0xc;
            } while ((ushort *)0x1 < puVar15);
            if (param_1 == (int *)0x0) {
              puStack_3c = (ushort *)((int)puVar20 + 1);
            }
            puVar15 = (ushort *)((int)puVar20 + 1);
            puVar24 = (ushort *)(this[0xb] + (int)puVar15);
            if (local_50 < (ushort *)(this[0xb] + (int)puVar15)) {
              puVar24 = local_50;
            }
            if (puVar15 < puVar24) {
              pcVar3 = (char *)((int)puVar15 + (int)local_5c);
              do {
                if (*pcVar3 != pcVar3[(int)pcStack_4c - (int)local_5c]) break;
                puVar15 = (ushort *)((int)puVar15 + 1);
                pcVar3 = pcVar3 + 1;
              } while (puVar15 < puVar24);
            }
            pcStack_40 = (char *)((int)puVar15 + (-1 - (int)puVar20));
            if ((char *)0x1 < pcStack_40) {
              puStack_38 = (ushort *)(uint)*(byte *)((int)puVar20 + (int)local_5c);
              piStack_48 = (int *)(uint)((byte)((char *)((int)local_5c + -1))[(int)puVar20] >>
                                        (8U - (char)this[0x12] & 0x1f));
              iVar6 = FUN_0048c0b0(puStack_38,
                                   ((int)piStack_48 +
                                   (((int)puVar20 + uVar14 & this[0x15]) <<
                                   ((byte)this[0x12] & 0x1f))) * 0x600 + this[0x18]);
              piVar4 = piStack_2c;
              iVar5 = this[(*(ushort *)
                             ((int)this +
                             (((uint)((int)puVar20 + uVar14) & this[0x16]) +
                             *(int *)(&DAT_004bf19c + uStack_60 * 4) * 0x10) * 2 + 0x32408) >> 4) +
                           0xc34d];
              iVar10 = this[(int)((char *)((int)piStack_30 + (int)puVar20) + 0xddad)];
              iVar7 = *(int *)(&DAT_004bf13c + *(int *)(&DAT_004bf19c + uStack_60 * 4) * 4);
              uVar18 = (uint)((int)puVar20 + param_2 + 2) & this[0x16];
              iVar23 = this[((*(ushort *)((int)this + (iVar7 * 0x10 + uVar18) * 2 + 0x32408) ^ 0x7f0
                             ) >> 4) + 0xc34d];
              iVar8 = this[((*(ushort *)((int)this + iVar7 * 2 + 0x32588) ^ 0x7f0) >> 4) + 0xc34d];
              piVar21 = (int *)((int)local_68 + (int)((int)puVar20 + (int)(pcStack_40 + 1)));
              if (piStack_64 < piVar21) {
                piStack_2c = this + (int)piStack_64 * 0xc + 0x14d;
                iVar16 = (int)piVar21 - (int)piStack_64;
                piStack_64 = (int *)((int)piStack_64 + iVar16);
                piVar12 = piStack_2c;
                do {
                  piVar12 = piVar12 + 0xc;
                  iVar16 = iVar16 + -1;
                  *piVar12 = 0x40000000;
                } while (iVar16 != 0);
              }
              piStack_30 = piVar21;
              iVar7 = FUN_0048c670((int)this,iVar7,(int)pcStack_40,uVar18);
              piVar21 = this + (int)piVar21 * 0xc + 0x14d;
              pcVar3 = (char *)((int)piVar4 + iVar7 + iVar23 + iVar8 + iVar6 + iVar5 + iVar10);
              if (pcVar3 < (char *)*piVar21) {
                *piVar21 = (int)pcVar3;
                piVar21[6] = (int)((int)local_68 + (int)((int)puVar20 + 1));
                piVar21[4] = (int)local_68;
                piVar21[7] = 0;
                piVar21[2] = 1;
                piVar21[3] = 1;
                piVar21[5] = (int)param_1;
              }
            }
          }
          param_1 = (int *)((int)param_1 + 1);
        } while (param_1 < (int *)0x4);
        puVar20 = puStack_28;
        if (puStack_58 < puStack_28) {
          iVar5 = 0;
          puVar20 = (ushort *)this[0xc3cd];
          while (puVar20 < puStack_58) {
            iVar10 = iVar5 + 0xc3cf;
            iVar5 = iVar5 + 2;
            puVar20 = (ushort *)this[iVar10];
          }
          this[iVar5 + 0xc3cd] = (int)puStack_58;
          piStack_44 = (int *)(iVar5 + 2);
          puVar20 = puStack_58;
        }
        if (puStack_3c <= puVar20) {
          iStack_24 = this[(*(ushort *)((int)this + uStack_60 * 2 + 0x32588) >> 4) + 0xc34d] +
                      iStack_24;
          if (piStack_64 < (int *)((int)puVar20 + (int)local_68)) {
            iVar5 = ((int)puVar20 + (int)local_68) - (int)piStack_64;
            piVar4 = (int *)((int)piStack_64 + iVar5);
            piVar21 = this + (int)piStack_64 * 0xc + 0x14d;
            do {
              piVar21 = piVar21 + 0xc;
              iVar5 = iVar5 + -1;
              *piVar21 = 0x40000000;
              piStack_64 = piVar4;
            } while (iVar5 != 0);
          }
          param_1 = (int *)0x0;
          puVar20 = (ushort *)this[0xc3cd];
          while (puVar20 < puStack_3c) {
            iVar5 = (int)param_1 + 0xc3cf;
            param_1 = (int *)((int)param_1 + 2);
            puVar20 = (ushort *)this[iVar5];
          }
          pcVar3 = (char *)this[(int)param_1 + 0xc3ce];
          iVar5 = (-(uint)(pcVar3 < (char *)0x20000) & 0xfffffff6) + 0x10;
          puStack_58 = (ushort *)
                       ((uint)*(byte *)(((uint)pcVar3 >> ((byte)iVar5 & 0x1f)) + 0x30534 + (int)this
                                       ) + iVar5 * 2);
          piStack_48 = this + (int)((int)(puStack_3c + (int)piStack_54 * 0x88) + 0xcb9b);
          piStack_54 = this + (int)((int)puStack_3c + (int)local_68) * 0xc + 0x154;
          piVar21 = local_5c;
          puVar20 = puStack_3c;
          pcStack_4c = pcVar3;
          do {
            puVar24 = (ushort *)((int)puVar20 + 1);
            puVar15 = puVar20 + -1;
            if ((ushort *)0x4 < puVar20) {
              puVar15 = (ushort *)0x3;
            }
            if (pcVar3 < (char *)0x80) {
              iVar5 = this[(int)(pcVar3 + (int)puVar15 * 0x80 + 0xc6f2)];
            }
            else {
              iVar5 = this[(int)(puStack_58 + (int)puVar15 * 0x20 + 0x62f9)] +
                      this[((uint)pcVar3 & 0xf) + 0xc8f2];
            }
            puStack_3c = (ushort *)(*piStack_48 + iStack_24 + iVar5);
            if (puStack_3c < (ushort *)piStack_54[-7]) {
              piStack_54[-7] = (int)puStack_3c;
              piStack_54[-1] = (int)local_68;
              *piStack_54 = (int)(pcVar3 + 4);
              piStack_54[-5] = 0;
            }
            if (puVar20 == (ushort *)this[(int)param_1 + 0xc3cd]) {
              pcVar3 = (char *)((int)piVar21 + (-1 - (int)pcVar3));
              puVar15 = (ushort *)(this[0xb] + (int)puVar24);
              if (local_50 < (ushort *)(this[0xb] + (int)puVar24)) {
                puVar15 = local_50;
              }
              puVar19 = puVar24;
              if (puVar24 < puVar15) {
                puStack_28 = (ushort *)((int)piVar21 - (int)pcVar3);
                pcVar3 = pcVar3 + (int)puVar24;
                do {
                  piVar21 = local_5c;
                  if (*(char *)((int)puStack_28 + (int)pcVar3) != *pcVar3) break;
                  puVar19 = (ushort *)((int)puVar19 + 1);
                  pcVar3 = pcVar3 + 1;
                } while (puVar19 < puVar15);
              }
              pcStack_40 = (char *)((int)puVar19 + (-1 - (int)puVar20));
              puStack_38 = puVar24;
              if ((char *)0x1 < pcStack_40) {
                piStack_2c = (int *)(param_2 + (int)puVar24 & this[0x16]);
                puStack_28 = (ushort *)(uint)(byte)((char *)((int)piVar21 + -1))[(int)puVar24];
                iVar8 = FUN_0048c0b0(puStack_28,
                                     ((uint)((byte)((char *)((int)piVar21 + -2))[(int)puVar24] >>
                                            (8 - (byte)this[0x12] & 0x1f)) +
                                     (((uint)(param_2 + (int)puVar24) & this[0x15]) <<
                                     ((byte)this[0x12] & 0x1f))) * 0x600 + this[0x18]);
                puVar24 = puStack_38;
                puVar20 = puStack_3c;
                iVar5 = this[(*(ushort *)
                               ((int)this +
                               (*(int *)(&DAT_004bf16c + uStack_60 * 4) * 0x10 + (int)piStack_2c) *
                               2 + 0x32408) >> 4) + 0xc34d];
                iVar10 = *(int *)(&DAT_004bf13c + *(int *)(&DAT_004bf16c + uStack_60 * 4) * 4);
                uVar18 = (int)piStack_2c + 1U & this[0x16];
                iVar7 = this[((*(ushort *)((int)this + (iVar10 * 0x10 + uVar18) * 2 + 0x32408) ^
                              0x7f0) >> 4) + 0xc34d];
                iVar23 = this[((*(ushort *)((int)this + iVar10 * 2 + 0x32588) ^ 0x7f0) >> 4) +
                              0xc34d];
                piVar21 = (int *)((int)local_68 + (int)((int)puStack_38 + (int)pcStack_40));
                if (piStack_64 < piVar21) {
                  puStack_28 = (ushort *)(this + (int)piStack_64 * 0xc + 0x14d);
                  iVar6 = (int)piVar21 - (int)piStack_64;
                  piStack_64 = (int *)((int)piStack_64 + iVar6);
                  puVar15 = puStack_28;
                  do {
                    puVar15 = puVar15 + 0x18;
                    iVar6 = iVar6 + -1;
                    puVar15[0] = 0;
                    puVar15[1] = 0x4000;
                  } while (iVar6 != 0);
                }
                piStack_2c = piVar21;
                iVar10 = FUN_0048c670((int)this,iVar10,(int)pcStack_40,uVar18);
                piVar4 = this + (int)piVar21 * 0xc + 0x14d;
                pcVar3 = (char *)((int)puVar20 + iVar10 + iVar7 + iVar23 + iVar8 + iVar5);
                piVar21 = local_5c;
                if (pcVar3 < (char *)*piVar4) {
                  *piVar4 = (int)pcVar3;
                  piVar4[4] = (int)local_68;
                  piVar4[6] = (int)((int)puVar24 + (int)local_68);
                  piVar4[7] = 0;
                  piVar4[2] = 1;
                  piVar4[3] = 1;
                  piVar4[5] = (int)(pcStack_4c + 4);
                }
              }
              piVar4 = (int *)((int)param_1 + 2);
              if (piVar4 == piStack_44) break;
              pcVar3 = (char *)this[(int)(param_1 + 0x30f4)];
              param_1 = piVar4;
              pcStack_4c = pcVar3;
              if ((char *)0x7f < pcVar3) {
                iVar5 = (-(uint)(pcVar3 < (char *)0x20000) & 0xfffffff6) + 0x10;
                puStack_58 = (ushort *)
                             ((uint)*(byte *)(((uint)pcVar3 >> ((byte)iVar5 & 0x1f)) + 0x30534 +
                                             (int)this) + iVar5 * 2);
              }
            }
            piStack_48 = piStack_48 + 1;
            piStack_54 = piStack_54 + 0xc;
            puVar20 = puVar24;
          } while( true );
        }
      }
      local_68 = (int *)((int)local_68 + 1);
      param_2 = uVar14;
    } while (local_68 != piStack_64);
  }
  pcVar3 = (char *)FUN_0048c6a0(this,param_3);
  return pcVar3;
}


/* END FUNCTION 0x0048c780 */
