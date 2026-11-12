/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00427620
 * Name: FUN_00427620
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl
FUN_00427620(char *param_1,uint *param_2,undefined4 *param_3,undefined4 param_4,uint param_5)

{
  ushort *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  byte *pbVar15;
  undefined4 extraout_ECX;
  int *piVar16;
  char *pcVar17;
  char *pcVar18;
  bool bVar19;
  byte local_7d;
  int local_7c;
  int local_6c;
  undefined4 local_64 [4];
  undefined1 local_54;
  undefined1 local_53;
  byte local_50;
  
  local_6c = 0;
  local_7c = 0;
  if (param_1 == (char *)0x0) {
LAB_00427657:
    bVar5 = false;
  }
  else {
    iVar14 = 9;
    bVar19 = true;
    pcVar17 = param_1;
    pcVar18 = ":memory:";
    do {
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      bVar19 = *pcVar17 == *pcVar18;
      pcVar17 = pcVar17 + 1;
      pcVar18 = pcVar18 + 1;
    } while (bVar19);
    bVar5 = true;
    if (!bVar19) goto LAB_00427657;
  }
  uVar3 = *param_2;
  puVar8 = FUN_00412900();
  if (puVar8 == (undefined4 *)0x0) {
    return 7;
  }
  *(undefined1 *)(puVar8 + 2) = 0;
  *puVar8 = param_2;
  puVar8[7] = puVar8;
  puVar8[8] = 1;
  if ((((bVar5) || (param_1 == (char *)0x0)) || (*param_1 == '\0')) || ((param_5 & 0x20000) == 0)) {
LAB_004277b8:
    piVar13 = FUN_00412900();
    if (piVar13 == (int *)0x0) {
      local_7c = 7;
    }
    else {
      local_7c = FUN_00425d20(uVar3,piVar13,param_1,0x4c,param_5,0x41f9d0);
      if ((local_7c == 0) &&
         (local_7c = FUN_0040b670(extraout_ECX,local_64,*piVar13), local_7c == 0)) {
        piVar13[1] = (int)param_2;
        FUN_0040b650(FUN_004149e0,piVar13);
        puVar8[1] = piVar13;
        piVar13[2] = 0;
        piVar13[3] = 0;
        uVar6 = FUN_0040b930();
        *(undefined1 *)(piVar13 + 4) = uVar6;
        puVar1 = (ushort *)((int)piVar13 + 0x16);
        uVar7 = CONCAT11(local_54,local_53);
        *puVar1 = uVar7;
        if ((uVar7 < 0x200) || ((0x8000 < uVar7 || ((uVar7 & uVar7 - 1) != 0)))) {
          *puVar1 = 0;
          if ((param_1 != (char *)0x0) && (!bVar5)) {
            *(undefined1 *)(piVar13 + 5) = 0;
            *(undefined1 *)((int)piVar13 + 0x15) = 0;
          }
          local_7d = 0;
        }
        else {
          local_7d = local_50;
          *(undefined1 *)((int)piVar13 + 0x11) = 1;
          iVar14 = FUN_00408f80();
          *(bool *)(piVar13 + 5) = iVar14 != 0;
          iVar14 = FUN_00408f80();
          *(bool *)((int)piVar13 + 0x15) = iVar14 != 0;
        }
        local_7c = FUN_00413f50(puVar1,(uint)local_7d);
        if (local_7c == 0) {
          *(ushort *)(piVar13 + 6) = *puVar1 - (ushort)local_7d;
          if (*(char *)((int)puVar8 + 9) == '\0') goto LAB_00427a30;
          piVar13[0xf] = 1;
          iVar14 = FUN_00407e10();
          if (DAT_004ca12c != 0) {
            iVar11 = FUN_00407e10();
            piVar13[0xd] = iVar11;
            if (iVar11 == 0) {
              local_7c = 7;
              *(undefined1 *)((int)param_2 + 0x1e) = 0;
              goto LAB_004277d4;
            }
          }
          FUN_00407e50(iVar14);
          piVar13[0x10] = (int)DAT_004ed558;
          DAT_004ed558 = piVar13;
          FUN_00407e90(iVar14);
          goto LAB_00427a30;
        }
      }
    }
LAB_004277d4:
    if ((piVar13 != (int *)0x0) && (*piVar13 != 0)) {
      FUN_00426f90(*piVar13);
    }
    FUN_004080d0((int)piVar13);
    FUN_004080d0((int)puVar8);
    *param_3 = 0;
  }
  else {
    iVar14 = *(int *)(uVar3 + 8) + 1;
    pbVar9 = (byte *)FUN_004125b0(iVar14);
    *(undefined1 *)((int)puVar8 + 9) = 1;
    if (pbVar9 == (byte *)0x0) {
      FUN_004080d0((int)puVar8);
      return 7;
    }
    FUN_00407c60(uVar3,param_1,iVar14);
    local_6c = FUN_00407e10();
    FUN_00407e50(local_6c);
    iVar14 = FUN_00407e10();
    FUN_00407e50(iVar14);
    piVar13 = DAT_004ed558;
    if (DAT_004ed558 != (int *)0x0) {
LAB_00427735:
      pbVar10 = (byte *)FUN_0040b970();
      pbVar15 = pbVar9;
      do {
        bVar2 = *pbVar15;
        bVar19 = bVar2 < *pbVar10;
        if (bVar2 != *pbVar10) {
LAB_00427766:
          iVar11 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
          goto LAB_0042776b;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar15[1];
        bVar19 = bVar2 < pbVar10[1];
        if (bVar2 != pbVar10[1]) goto LAB_00427766;
        pbVar15 = pbVar15 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar2 != 0);
      iVar11 = 0;
LAB_0042776b:
      if ((iVar11 != 0) || (uVar12 = FUN_0040b9a0(), uVar12 != uVar3)) goto LAB_00427780;
      iVar11 = param_2[1] - 1;
      if (-1 < iVar11) {
        piVar16 = (int *)(iVar11 * 0x10 + 4 + param_2[2]);
        do {
          if ((*piVar16 != 0) && (*(int **)(*piVar16 + 4) == piVar13)) {
            FUN_00407e90(iVar14);
            FUN_00407e90(local_6c);
            FUN_004080d0((int)pbVar9);
            FUN_004080d0((int)puVar8);
            return 0x13;
          }
          iVar11 = iVar11 + -1;
          piVar16 = piVar16 + -4;
        } while (-1 < iVar11);
      }
      puVar8[1] = piVar13;
      piVar13[0xf] = piVar13[0xf] + 1;
    }
LAB_00427792:
    FUN_00407e90(iVar14);
    FUN_004080d0((int)pbVar9);
    if (piVar13 == (int *)0x0) goto LAB_004277b8;
LAB_00427a30:
    if ((*(char *)((int)puVar8 + 9) != '\0') && (iVar14 = 0, 0 < (int)param_2[1])) {
      piVar13 = (int *)(param_2[2] + 4);
LAB_00427a50:
      iVar11 = *piVar13;
      if ((iVar11 == 0) || (*(char *)(iVar11 + 9) == '\0')) goto LAB_00427a5d;
      iVar14 = *(int *)(iVar11 + 0x18);
      while (iVar14 != 0) {
        iVar11 = *(int *)(iVar11 + 0x18);
        iVar14 = *(int *)(iVar11 + 0x18);
      }
      if ((uint)puVar8[1] < *(uint *)(iVar11 + 4)) {
        puVar8[5] = iVar11;
        puVar8[6] = 0;
        *(undefined4 **)(iVar11 + 0x18) = puVar8;
        *param_3 = puVar8;
        goto LAB_00427803;
      }
      iVar14 = *(int *)(iVar11 + 0x14);
      while ((iVar14 != 0 &&
             (iVar4 = *(int *)(iVar11 + 0x14), *(uint *)(iVar4 + 4) < (uint)puVar8[1]))) {
        iVar14 = *(int *)(iVar4 + 0x14);
        iVar11 = iVar4;
      }
      iVar14 = *(int *)(iVar11 + 0x14);
      puVar8[5] = iVar14;
      puVar8[6] = iVar11;
      if (iVar14 != 0) {
        *(undefined4 **)(iVar14 + 0x18) = puVar8;
      }
      *(undefined4 **)(iVar11 + 0x14) = puVar8;
    }
    *param_3 = puVar8;
  }
LAB_00427803:
  if (local_6c != 0) {
    FUN_00407e90(local_6c);
  }
  return local_7c;
LAB_00427780:
  piVar13 = (int *)piVar13[0x10];
  if (piVar13 == (int *)0x0) goto LAB_00427792;
  goto LAB_00427735;
LAB_00427a5d:
  iVar14 = iVar14 + 1;
  piVar13 = piVar13 + 4;
  if ((int)param_2[1] <= iVar14) goto code_r0x00427a68;
  goto LAB_00427a50;
code_r0x00427a68:
  *param_3 = puVar8;
  goto LAB_00427803;
}


/* END FUNCTION 0x00427620 */
