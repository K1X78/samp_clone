/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00445a10
 * Name: FUN_00445a10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __cdecl
FUN_00445a10(int *param_1,undefined4 param_2,int param_3,short *param_4,int *param_5,int param_6,
            int param_7,undefined4 param_8,undefined1 param_9,int param_10)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int extraout_ECX;
  uint uVar14;
  byte *extraout_ECX_00;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  bool bVar19;
  int local_3c;
  int local_38;
  int local_34;
  byte *local_30;
  char *local_2c;
  byte *local_28;
  char *local_24;
  int local_20;
  int *local_1c;
  char *local_18;
  uint local_14;
  undefined1 local_10 [16];
  
  iVar2 = *param_1;
  local_1c = (int *)0x0;
  local_2c = (char *)0x0;
  local_38 = 0;
  local_34 = 0;
  if (((*(char *)(iVar2 + 0x1e) != '\0') || ((char)param_1[0x85] != '\0')) ||
     (uVar4 = FUN_00442130(), uVar4 != 0)) goto LAB_00445ff1;
  if (param_4 == (short *)0x0) {
    iVar5 = param_1[0x80];
    if (iVar5 == 0) goto LAB_00445ff1;
    local_3c = FUN_0040fc30(iVar2);
  }
  else {
    local_3c = FUN_0041ad60(param_1,&local_38);
    if (local_3c < 0) goto LAB_00445ff1;
    if (((*(char *)(iVar2 + 0x7c) == '\0') && (iVar5 = FUN_00442e70(), *(int *)(param_3 + 4) == 0))
       && ((iVar5 != 0 && (*(int *)(iVar5 + 0x44) == *(int *)(*(int *)(iVar2 + 8) + 0x1c))))) {
      local_3c = 1;
    }
    iVar5 = FUN_0040ecb0(local_10,"index",local_38);
    if (iVar5 != 0) {
      FUN_00420930(extraout_ECX,param_4);
    }
    iVar5 = FUN_00442730();
    if ((iVar5 == 0) || (*(char *)(iVar2 + 0x1e) != '\0')) goto LAB_00445ff1;
  }
  pbVar16 = *(byte **)(iVar5 + 4);
  local_20 = local_3c * 0x10;
  local_28 = (byte *)(*(int *)(iVar2 + 8) + local_20);
  local_30 = pbVar16;
  iVar6 = FUN_004084a0(pbVar16,(byte *)"sqlite_",7);
  if (iVar6 == 0) {
    iVar6 = 9;
    bVar19 = true;
    pbVar16 = pbVar16 + 7;
    pbVar17 = (byte *)"altertab_";
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar19 = *pbVar16 == *pbVar17;
      pbVar16 = pbVar16 + 1;
      pbVar17 = pbVar17 + 1;
    } while (bVar19);
    if (!bVar19) {
      FUN_00418b00((undefined **)"table %s may not be indexed");
      goto LAB_00445ff1;
    }
  }
  if (*(int *)(iVar5 + 0x1c) != 0) {
    FUN_00418b00((undefined **)"views may not be indexed");
    goto LAB_00445ff1;
  }
  if ((*(byte *)(iVar5 + 0x22) & 0x10) != 0) {
    FUN_00418b00((undefined **)"virtual tables may not be indexed");
    goto LAB_00445ff1;
  }
  if (local_38 == 0) {
    for (iVar6 = *(int *)(iVar5 + 0x14); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x20)) {
    }
    pcVar7 = (char *)FUN_00418920((undefined **)"sqlite_autoindex_%s_%d");
    local_2c = pcVar7;
    if (pcVar7 == (char *)0x0) goto LAB_00445ff1;
  }
  else {
    pcVar7 = (char *)FUN_00416430();
    local_2c = pcVar7;
    if ((pcVar7 == (char *)0x0) || (iVar6 = FUN_0041add0(), iVar6 != 0)) goto LAB_00445ff1;
    if ((*(char *)(iVar2 + 0x7c) == '\0') &&
       (iVar6 = FUN_0040edd0(iVar2,pcVar7,(byte *)0x0), iVar6 != 0)) {
      FUN_00418b00((undefined **)"there is already a table named %s");
      goto LAB_00445ff1;
    }
    iVar6 = FUN_0040ee60(pcVar7,*(byte **)local_28);
    if (iVar6 != 0) {
      if (param_10 == 0) {
        FUN_00418b00((undefined **)"index %s already exists");
      }
      goto LAB_00445ff1;
    }
  }
  uVar3 = *(undefined4 *)local_28;
  pcVar8 = "sqlite_temp_master";
  if (local_3c != 1) {
    pcVar8 = "sqlite_master";
  }
  iVar6 = FUN_0041ab60(0x12,pcVar8,0,uVar3);
  if (iVar6 != 0) goto LAB_00445ff1;
  uVar9 = 1;
  if (local_3c == 1) {
    uVar9 = 3;
  }
  iVar6 = FUN_0041ab60(uVar9,pcVar7,*(undefined4 *)(iVar5 + 4),uVar3);
  if (iVar6 != 0) goto LAB_00445ff1;
  if (param_5 == (int *)0x0) {
    local_18 = *(char **)(*(int *)(iVar5 + 0x10) + -0x18 + *(int *)(iVar5 + 0xc) * 0x18);
    local_14 = FUN_00408380(local_18);
    param_5 = FUN_0041a560((int *)0x0);
    if (param_5 == (int *)0x0) goto LAB_00445ff1;
    FUN_00415af0(param_5,param_1,0);
    *(undefined1 *)(param_5[3] + 0xc) = param_9;
  }
  iVar11 = *param_5;
  iVar6 = local_34;
  if (0 < iVar11) {
    piVar10 = (int *)param_5[3];
    iVar15 = iVar11;
    do {
      if ((*piVar10 != 0) &&
         (puVar18 = *(undefined4 **)(*piVar10 + 0x14), puVar18 != (undefined4 *)0x0)) {
        uVar4 = FUN_00408380((char *)*puVar18);
        iVar6 = uVar4 + 1 + iVar6;
      }
      piVar10 = piVar10 + 5;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  local_34 = iVar6;
  pcVar7 = local_2c;
  uVar4 = FUN_00408380(local_2c);
  piVar10 = FUN_00417b70();
  if (*(char *)(iVar2 + 0x1e) == '\0') {
    piVar12 = piVar10 + 0xd;
    piVar10[0xb] = (int)piVar12;
    piVar12 = piVar12 + iVar11;
    piVar10[2] = (int)piVar12;
    piVar12 = piVar12 + iVar11;
    piVar10[3] = (int)piVar12;
    pcVar8 = (char *)(iVar11 + (int)(piVar12 + iVar11 + 1));
    local_24 = pcVar8 + uVar4 + 1;
    piVar10[10] = (int)(piVar12 + iVar11 + 1);
    *piVar10 = (int)pcVar8;
    for (uVar14 = uVar4 + 1 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 + 1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    piVar10[4] = iVar5;
    piVar10[1] = *param_5;
    *(undefined1 *)(piVar10 + 6) = (undefined1)param_6;
    *(bool *)((int)piVar10 + 0x19) = local_38 == 0;
    piVar10[9] = *(int *)(local_20 + 0xc + *(int *)(iVar2 + 8));
    local_30 = (byte *)param_5[3];
    bVar1 = *(byte *)(*(int *)(local_28 + 0xc) + 0x48);
    iVar6 = *param_5;
    local_34 = 0;
    if (0 < iVar6) {
      do {
        local_28 = *(byte **)(local_30 + 4);
        puVar18 = *(undefined4 **)(iVar5 + 0x10);
        local_18 = *(char **)(iVar5 + 0xc);
        iVar6 = 0;
        if (0 < (int)local_18) {
          do {
            iVar11 = FUN_00408450(local_28,(byte *)*puVar18);
            if (iVar11 == 0) break;
            iVar6 = iVar6 + 1;
            puVar18 = puVar18 + 6;
          } while (iVar6 < *(int *)(iVar5 + 0xc));
        }
        if ((int)local_18 <= iVar6) {
          FUN_00418b00((undefined **)"table %s has no column named %s");
          *(undefined1 *)((int)param_1 + 0x12) = 1;
          goto LAB_00445fd6;
        }
        *(int *)(piVar10[2] + local_34 * 4) = iVar6;
        if ((*(int *)local_30 == 0) ||
           (puVar18 = *(undefined4 **)(*(int *)local_30 + 0x14), puVar18 == (undefined4 *)0x0)) {
          pcVar7 = *(char **)(*(int *)(iVar5 + 0x10) + 0x10 + iVar6 * 0x18);
          if (pcVar7 == (char *)0x0) {
            pcVar7 = (char *)**(undefined4 **)(iVar2 + 0x2c);
          }
        }
        else {
          pcVar7 = (char *)*puVar18;
          uVar4 = FUN_00408380(pcVar7);
          uVar4 = uVar4 + 1;
          pcVar8 = local_24;
          for (uVar14 = uVar4 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar14 = uVar4 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar8 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
          }
          pcVar7 = local_24;
          local_24 = local_24 + uVar4;
        }
        if ((*(char *)(iVar2 + 0x7c) == '\0') &&
           (piVar12 = FUN_004308f0(param_1), piVar12 == (int *)0x0)) goto LAB_00445fd6;
        *(char **)(piVar10[0xb] + local_34 * 4) = pcVar7;
        *(byte *)(local_34 + piVar10[10]) = local_30[0xc] & (bVar1 < 4) - 1U;
        iVar6 = *param_5;
        local_34 = local_34 + 1;
        local_30 = local_30 + 0x14;
      } while (local_34 < iVar6);
    }
    FUN_0040f100(iVar6,(int)piVar10);
    if (iVar5 == param_1[0x80]) {
      for (iVar6 = *(int *)(iVar5 + 0x14); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x20)) {
        if (*(int *)(iVar6 + 4) == piVar10[1]) {
          iVar11 = 0;
          if (0 < *(int *)(iVar6 + 4)) {
            iVar15 = piVar10[2];
            local_18 = (char *)(*(int *)(iVar6 + 8) - iVar15);
            while (piVar12 = (int *)(iVar15 + iVar11 * 4),
                  *(int *)((int)piVar12 + (int)local_18) == *piVar12) {
              pbVar16 = *(byte **)(*(int *)(iVar6 + 0x2c) + iVar11 * 4);
              pbVar17 = *(byte **)(piVar10[0xb] + iVar11 * 4);
              if (((pbVar16 != pbVar17) && (iVar13 = FUN_00408450(pbVar16,pbVar17), iVar13 != 0)) ||
                 (iVar11 = iVar11 + 1, *(int *)(iVar6 + 4) <= iVar11)) break;
            }
          }
          if (iVar11 == *(int *)(iVar6 + 4)) {
            if (*(char *)(iVar6 + 0x18) != (char)piVar10[6]) {
              if ((*(char *)(iVar6 + 0x18) != 'c') && ((char)piVar10[6] != 'c')) {
                FUN_00418b00((undefined **)"conflicting ON CONFLICT clauses specified");
              }
              if (*(char *)(iVar6 + 0x18) == 'c') {
                *(char *)(iVar6 + 0x18) = (char)piVar10[6];
              }
            }
            goto LAB_00445fd6;
          }
        }
      }
    }
    if (*(char *)(iVar2 + 0x7c) == '\0') {
      local_24 = (char *)(param_1[0x12] + 1);
      param_1[0x12] = (int)local_24;
      local_18 = (char *)FUN_0041c720();
      if (local_18 != (char *)0x0) {
        FUN_0042cdb0((byte)local_3c,1);
        FUN_00414e70(local_3c,0x61);
        if (param_7 != 0) {
          FUN_00418920((undefined **)"CREATE%s INDEX %.*s");
        }
        FUN_0041abf0((undefined **)"INSERT INTO %Q.%s VALUES(\'index\',%Q,%Q,#%d,%Q);");
        FUN_00408130(iVar2);
        if (param_4 != (short *)0x0) {
          FUN_0043fff0(piVar10,(int)local_24);
          FUN_004164c0(local_3c);
          iVar6 = -1;
          pcVar7 = (char *)FUN_00418920((undefined **)"name=\'%q\'");
          FUN_004197c0(0,local_3c,99,pcVar7,iVar6);
          FUN_00414e50(0x7a);
        }
        goto LAB_00446230;
      }
    }
    else {
      piVar12 = piVar10;
      FUN_00408380((char *)*piVar10);
      iVar6 = FUN_00412f40((void *)(piVar10[9] + 0x14),extraout_ECX_00,(int)piVar12);
      if (iVar6 == 0) {
        *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x200;
        if (param_4 != (short *)0x0) {
          piVar10[5] = *(int *)(iVar2 + 0x78);
        }
LAB_00446230:
        if ((*(char *)(iVar2 + 0x7c) != '\0') || (param_4 == (short *)0x0)) {
          local_1c = piVar10;
          if ((param_6 == 5) &&
             ((iVar6 = *(int *)(iVar5 + 0x14), iVar6 != 0 && (*(char *)(iVar6 + 0x18) != '\x05'))))
          {
            iVar5 = *(int *)(iVar6 + 0x20);
            while ((iVar5 != 0 &&
                   (iVar11 = *(int *)(iVar6 + 0x20), *(char *)(iVar11 + 0x18) != '\x05'))) {
              iVar5 = *(int *)(iVar11 + 0x20);
              iVar6 = iVar11;
            }
            piVar10[8] = *(int *)(iVar6 + 0x20);
            *(int **)(iVar6 + 0x20) = piVar10;
          }
          else {
            piVar10[8] = *(int *)(iVar5 + 0x14);
            *(int **)(iVar5 + 0x14) = piVar10;
          }
          goto LAB_00445ff1;
        }
      }
      else {
        *(undefined1 *)(iVar2 + 0x1e) = 1;
      }
    }
  }
LAB_00445fd6:
  if (piVar10 != (int *)0x0) {
    FUN_004080d0(piVar10[7]);
    FUN_00408130(iVar2);
  }
LAB_00445ff1:
  FUN_0040e580();
  FUN_0040f240(param_4);
  FUN_00408130(iVar2);
  return local_1c;
}


/* END FUNCTION 0x00445a10 */
