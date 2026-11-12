/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00437710
 * Name: FUN_00437710
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00437710(int *param_1,char *param_2,int param_3)

{
  undefined1 uVar1;
  int *piVar2;
  byte *pbVar3;
  void *this;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  int extraout_ECX_11;
  int extraout_ECX_12;
  int extraout_ECX_13;
  int extraout_ECX_14;
  int extraout_ECX_15;
  int extraout_ECX_16;
  int extraout_ECX_17;
  int extraout_ECX_18;
  int extraout_ECX_19;
  undefined4 extraout_ECX_20;
  int extraout_ECX_21;
  int extraout_ECX_22;
  int extraout_ECX_23;
  undefined4 extraout_ECX_24;
  undefined4 extraout_ECX_25;
  undefined4 extraout_ECX_26;
  undefined4 extraout_ECX_27;
  int extraout_ECX_28;
  int extraout_ECX_29;
  int extraout_ECX_30;
  int extraout_ECX_31;
  int extraout_ECX_32;
  int extraout_ECX_33;
  int iVar12;
  undefined4 *extraout_ECX_34;
  undefined4 *puVar13;
  int extraout_ECX_35;
  undefined4 extraout_ECX_36;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar14;
  undefined4 *puVar15;
  byte bVar16;
  short *local_8c;
  char *local_84;
  int local_7c;
  int local_78;
  int *local_74;
  int local_70 [2];
  int *local_68;
  uint local_64;
  undefined4 local_60 [6];
  int local_48;
  char local_30 [8];
  undefined4 *local_28;
  undefined4 local_24;
  
  iVar10 = *param_1;
  iVar11 = 0;
  piVar2 = (int *)param_1[3];
  local_7c = param_3;
  local_70[0] = 0;
  local_70[1] = 0;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  cVar5 = 'b';
  if (param_2 != (char *)0x0) {
    cVar5 = *param_2;
  }
  switch(cVar5) {
  case '\x13':
  case ']':
    iVar11 = FUN_00415d80(*(undefined4 *)(param_2 + 8),local_70);
    FUN_00414e70(iVar11,cVar5);
    iVar11 = extraout_ECX_15;
    break;
  case '\x14':
  case 't':
    local_7c = FUN_00430230(param_2,0,0);
    iVar11 = extraout_ECX_23;
    break;
  default:
    local_64 = (*(int **)(param_2 + 0x10))[3];
    iVar10 = **(int **)(param_2 + 0x10);
    local_84 = (char *)0x0;
    iVar11 = FUN_00414e90(0);
    puVar4 = *(undefined4 **)(param_2 + 8);
    if (puVar4 != (undefined4 *)0x0) {
      puVar13 = puVar4;
      puVar15 = local_60;
      for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar15 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar15 = puVar15 + 1;
      }
      local_48 = FUN_00415d80(puVar4,local_70);
      local_28 = local_60;
      local_84 = local_30;
      local_60[0]._0_1_ = 0x84;
      local_30[0] = 'L';
    }
    if (0 < iVar10) {
      local_74 = (int *)((iVar10 - 1U >> 1) + 1);
      do {
        FUN_0040ea90();
        if (puVar4 == (undefined4 *)0x0) {
          local_84 = (char *)*extraout_ECX_34;
          puVar13 = extraout_ECX_34;
        }
        else {
          puVar13 = (undefined4 *)*extraout_ECX_34;
          local_24 = puVar13;
        }
        iVar10 = FUN_00414e90(puVar13);
        FUN_004351c0(param_1,local_84,iVar10,8);
        FUN_00415dc0();
        FUN_00414e70(0,1);
        FUN_0040eaa0(1);
        FUN_0040d4e0((int)piVar2,iVar10);
        local_74 = (int *)((int)local_74 + -1);
      } while (local_74 != (int *)0x0);
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      FUN_00414e70(0,10);
    }
    else {
      FUN_0040ea90();
      FUN_00415dc0();
      FUN_0040eaa0(1);
    }
    goto LAB_00438211;
  case '\x18':
    local_7c = FUN_0040eb70(*(undefined4 *)(param_2 + 8),param_1);
    iVar11 = extraout_ECX_08;
    break;
  case '%':
    local_7c = FUN_00437710(param_1,*(char **)(param_2 + 8),param_3);
    cVar5 = FUN_0040efb0();
    if (local_7c != param_3) {
      FUN_00414e70(local_7c,0xf);
      local_7c = param_3;
    }
    FUN_00414e50(cVar5 + ',');
    thunk_FUN_0040ea60(1);
    iVar11 = extraout_ECX_09;
    break;
  case '8':
    if (param_1[0x6b] == 0) {
      FUN_00418b00((undefined **)"RAISE() may only be used within a trigger-program");
      return 0;
    }
    if (param_2[1] == '\x02') {
      FUN_0040f330((int)param_1);
    }
    if (param_2[1] == '\x04') {
      FUN_004197c0(4,0,6,*(char **)(param_2 + 4),0);
      iVar11 = extraout_ECX_32;
    }
    else {
      FUN_00420ee0(*(char **)(param_2 + 4),0);
      iVar11 = extraout_ECX_33;
    }
    break;
  case '<':
    local_64 = *(uint *)(param_2 + 0x28);
    FUN_00414e70((*(int *)(local_64 + 0xc) + 1) * *(int *)(param_2 + 0x18) + 1 +
                 (int)*(short *)(param_2 + 0x1c),0x6d);
    iVar11 = extraout_ECX_30;
    if ((-1 < *(short *)(param_2 + 0x1c)) &&
       (iVar11 = *(int *)(local_64 + 0x10),
       *(char *)(iVar11 + 0x16 + *(short *)(param_2 + 0x1c) * 0x18) == 'e')) {
      FUN_00414e50(0x16);
      iVar11 = extraout_ECX_31;
    }
    break;
  case 'D':
  case 'E':
  case 'R':
  case 'S':
  case 'T':
  case 'U':
  case 'V':
  case 'W':
  case 'X':
  case 'Y':
  case 'Z':
  case '[':
    iVar11 = FUN_00415d80(*(undefined4 *)(param_2 + 8),local_70);
    iVar10 = FUN_00415d80(*(undefined4 *)(param_2 + 0xc),local_70 + 1);
    FUN_00414dd0(cVar5,iVar10,iVar11,param_3);
    iVar11 = extraout_ECX_11;
    break;
  case 'F':
  case -0x6e:
    iVar11 = FUN_00415d80(*(undefined4 *)(param_2 + 8),local_70);
    iVar10 = FUN_00415d80(*(undefined4 *)(param_2 + 0xc),local_70 + 1);
    bVar16 = 0x90;
    cVar5 = (cVar5 == 'F') + 'K';
    goto LAB_00437a00;
  case 'G':
    this = *(void **)(param_2 + 8);
    puVar4 = *(undefined4 **)(*(int *)(param_2 + 0x10) + 0xc);
    uVar7 = *puVar4;
    iVar11 = FUN_00415d80(this,local_70);
    FUN_00415d80(uVar7,local_70 + 1);
    iVar10 = FUN_0040ec00();
    local_64 = FUN_0040ec00();
    FUN_004301d0(this,param_1,0x50,iVar11,extraout_EDX,iVar10,0x10);
    uVar7 = puVar4[5];
    FUN_0040ec20(extraout_ECX_25,(int)param_1);
    iVar12 = FUN_00415d80(uVar7,local_70 + 1);
    uVar6 = local_64;
    FUN_004301d0(this,param_1,0x4e,iVar11,iVar12,local_64,0x10);
    FUN_00414dd0(0x45,iVar10,uVar6,param_3);
    FUN_0040ec20(extraout_ECX_26,(int)param_1);
    FUN_0040ec20(extraout_ECX_27,extraout_EDX_00);
    iVar11 = extraout_ECX_28;
    break;
  case 'H':
    iVar10 = FUN_00414e90(0);
    iVar11 = FUN_00414e90(extraout_ECX_24);
    FUN_00414e70(0,10);
    FUN_00434cf0((int)param_1,param_2,iVar10,iVar11);
    FUN_00414e70(1,7);
    FUN_0040d4e0((int)piVar2,iVar10);
    FUN_00414e70(param_3,0x14);
    goto LAB_00438211;
  case 'I':
  case 'J':
    FUN_00414e70(1,7);
    FUN_00415d80(*(undefined4 *)(param_2 + 8),local_70);
    FUN_00414e50(cVar5);
    FUN_00414e70(param_3,0x14);
    FUN_0040d680(piVar2);
    iVar11 = extraout_ECX_16;
    break;
  case 'K':
  case 'L':
  case 'M':
  case 'N':
  case 'O':
  case 'P':
    iVar11 = FUN_00415d80(*(undefined4 *)(param_2 + 8),local_70);
    iVar10 = FUN_00415d80(*(undefined4 *)(param_2 + 0xc),local_70 + 1);
    bVar16 = 0x10;
LAB_00437a00:
    FUN_004301d0(*(void **)(param_2 + 8),param_1,cVar5,iVar11,iVar10,param_3,bVar16);
    iVar11 = extraout_ECX_10;
    break;
  case '^':
    FUN_004197c0(param_3,0,0x5e,*(char **)(param_2 + 4),0);
    iVar11 = extraout_ECX_03;
    break;
  case 'b':
    FUN_00414e70(0,10);
    iVar11 = extraout_ECX_04;
    break;
  case -0x7f:
    FUN_0041a680(param_1,param_3);
    iVar11 = extraout_ECX_01;
    break;
  case -0x7e:
    FUN_0041a630(0,param_3);
    iVar11 = extraout_ECX_02;
    break;
  case -0x7d:
    uVar6 = FUN_00408380((char *)(*(int *)(param_2 + 4) + 2));
    iVar11 = uVar6 - 1;
    uVar7 = FUN_0040b9a0();
    pcVar8 = (char *)FUN_00412e20(uVar7,iVar11);
    FUN_004197c0(param_3,(int)(uVar6 - 1) / 2,0xb,pcVar8,-1);
    iVar11 = extraout_ECX_05;
    break;
  case -0x7c:
    local_7c = *(int *)(param_2 + 0x18);
    break;
  case -0x7b:
    FUN_00414e70((int)*(short *)(param_2 + 0x1c),0xc);
    iVar11 = extraout_ECX_06;
    if ((*(char **)(param_2 + 4))[1] != '\0') {
      FUN_00415110(0,*(char **)(param_2 + 4),piVar2);
      iVar11 = extraout_ECX_07;
    }
    break;
  case -0x69:
  case -0x65:
    uVar1 = *(undefined1 *)(*(int *)(*(int *)(iVar10 + 8) + 0xc) + 0x49);
    local_84 = (char *)0x0;
    local_74 = (int *)0x0;
    if ((param_2[3] & 0x20U) == 0) {
      local_68 = *(int **)(param_2 + 0x10);
      if (local_68 == (int *)0x0) goto LAB_00437bee;
      local_78 = *local_68;
    }
    else {
      local_68 = (int *)0x0;
LAB_00437bee:
      local_78 = 0;
    }
    iVar12 = local_78;
    pbVar3 = *(byte **)(param_2 + 4);
    local_64 = FUN_00408380((char *)pbVar3);
    local_8c = FUN_0041b710(iVar10,pbVar3,local_64,local_78,uVar1,0);
    if (local_8c == (short *)0x0) {
      FUN_00418b00((undefined **)"unknown function: %.*s()");
      iVar11 = extraout_ECX_18;
      break;
    }
    if ((*(byte *)((int)local_8c + 3) & 0x40) == 0) {
      if (local_68 == (int *)0x0) {
        local_78 = 0;
      }
      else {
        local_78 = FUN_0040ec60((int)param_1);
        FUN_0040ea90();
        FUN_00420330(param_1,extraout_ECX_19,1);
        FUN_0040eaa0(1);
      }
      if (((1 < iVar12) && (param_2[2] < '\0')) || (0 < iVar12)) {
        local_8c = (short *)FUN_0041d310(iVar10,(undefined4 *)local_8c,iVar12);
      }
      iVar11 = 0;
      if (0 < iVar12) {
        iVar14 = 0;
        do {
          if ((iVar14 < 0x280) && (iVar9 = FUN_00415ba0(*(int *)(local_68[3] + iVar14)), iVar9 != 0)
             ) {
            local_84 = (char *)((uint)local_84 | 1 << ((byte)iVar11 & 0x1f));
          }
          if (((*(byte *)((int)local_8c + 3) & 8) != 0) && (local_74 == (int *)0x0)) {
            local_74 = FUN_004300f0(*(char **)(local_68[3] + iVar14));
          }
          iVar11 = iVar11 + 1;
          iVar14 = iVar14 + 0x14;
        } while (iVar11 < iVar12);
      }
      if ((*(byte *)((int)local_8c + 3) & 8) != 0) {
        if (local_74 == (int *)0x0) {
          local_74 = *(int **)(iVar10 + 0x2c);
        }
        FUN_004197c0(0,0,0x11,(char *)local_74,-4);
      }
      FUN_004197c0(local_78,local_84,0x12,(char *)local_8c,-5);
      FUN_0040d660(extraout_ECX_20,(char)iVar12);
      iVar11 = extraout_ECX_21;
      if (iVar12 != 0) {
        FUN_0040ec90(local_78);
        iVar11 = extraout_ECX_22;
      }
      break;
    }
    iVar11 = FUN_00414e90(local_8c);
    FUN_00415dc0();
    if (1 < local_78) {
      local_84 = (char *)(local_78 + -1);
      do {
        FUN_00414e70(param_3,0x4a);
        FUN_0040ea60(1);
        FUN_0040ea90();
        FUN_00415dc0();
        FUN_0040eaa0(1);
        local_84 = (char *)((int)local_84 + -1);
      } while (local_84 != (char *)0x0);
    }
LAB_00438211:
    FUN_0040d4e0((int)piVar2,iVar11);
    iVar11 = extraout_ECX_35;
    break;
  case -0x68:
    goto switchD_00437781_caseD_98;
  case -0x67:
    if (*(int *)(param_2 + 0x24) == 0) {
      FUN_00418b00((undefined **)"misuse of aggregate: %s()");
      iVar11 = extraout_ECX_17;
    }
    else {
      iVar11 = *(short *)(param_2 + 0x1e) * 0x10;
      local_7c = *(int *)(iVar11 + 8 + *(int *)(*(int *)(param_2 + 0x24) + 0x20));
    }
    break;
  case -0x66:
    pcVar8 = *(char **)(param_2 + 0x24);
    iVar11 = *(int *)(pcVar8 + 0x10) + *(short *)(param_2 + 0x1e) * 0x18;
    if (*pcVar8 == '\0') {
      local_7c = *(int *)(iVar11 + 0x10);
      break;
    }
    if (pcVar8[1] != '\0') {
      FUN_00414dd0(0x1c,*(undefined4 *)(pcVar8 + 4),*(undefined4 *)(iVar11 + 0xc),param_3);
      iVar11 = extraout_ECX;
      break;
    }
    goto switchD_00437781_caseD_98;
  case -100:
    if (**(char **)(param_2 + 8) == -0x7f) {
      FUN_0041a680(param_1,param_3);
      iVar11 = extraout_ECX_12;
    }
    else if (**(char **)(param_2 + 8) == -0x7e) {
      FUN_0041a630(1,param_3);
      iVar11 = extraout_ECX_13;
    }
    else {
      local_70[0] = FUN_0040ec00();
      FUN_00414e70(0,7);
      iVar11 = FUN_00415d80(*(undefined4 *)(param_2 + 8),local_70 + 1);
      FUN_00414dd0(0x57,iVar11,local_70[0],param_3);
      iVar11 = extraout_ECX_14;
    }
    break;
  case -99:
    local_7c = FUN_00437710(param_1,*(char **)(param_2 + 8),param_3);
    iVar11 = extraout_ECX_29;
  }
LAB_00438216:
  FUN_0040ec20(iVar11,(int)param_1);
  FUN_0040ec20(extraout_ECX_36,extraout_EDX_01);
  return local_7c;
switchD_00437781_caseD_98:
  iVar11 = 0;
  if ((int)*(void **)(param_2 + 0x18) < 0) {
    local_7c = (int)*(short *)(param_2 + 0x1c) + param_1[0x14];
  }
  else {
    local_7c = FUN_00437690(*(undefined4 *)(param_2 + 0x28),(int)*(short *)(param_2 + 0x1c),
                            *(void **)(param_2 + 0x18),param_3);
    iVar11 = extraout_ECX_00;
  }
  goto LAB_00438216;
}


/* END FUNCTION 0x00437710 */
