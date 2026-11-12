/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00436300
 * Name: FUN_00436300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00436300(int *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *this;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int *piVar14;
  undefined4 extraout_ECX;
  undefined4 uVar15;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  void *extraout_EDX;
  int local_38;
  int *local_30;
  char *local_2c;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_10 [4];
  int local_c;
  
  piVar4 = param_2;
  piVar3 = param_1;
  local_20 = *param_3;
  piVar14 = (int *)param_2[7];
  iVar6 = *param_1;
  local_1c = param_3[1];
  local_18 = param_3[2];
  local_14 = param_3[3];
  local_38 = 0;
  if (piVar14[6] != 0) {
    FUN_0040ffb0();
    FUN_00418b00((undefined **)"ORDER BY clause should come after %s not before");
    param_2 = (int *)0x1;
    piVar9 = param_2;
    goto LAB_0043692a;
  }
  if (piVar14[10] != 0) {
    FUN_0040ffb0();
    FUN_00418b00((undefined **)"LIMIT clause should come after %s not before");
    param_2 = (int *)0x1;
    piVar9 = param_2;
    goto LAB_0043692a;
  }
  this = (int *)FUN_0041c720();
  uVar15 = CONCAT31((int3)((uint)extraout_ECX >> 8),(byte)local_20);
  if ((byte)local_20 == 9) {
    FUN_00414e70(local_1c,0x29);
    uVar15 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),8);
    local_20 = CONCAT31(local_20._1_3_,8);
  }
  if (*(int *)*param_2 != *(int *)*piVar14) {
    FUN_0040ffb0();
    FUN_00418b00((undefined **)
                 "SELECTs to the left and right of %s do not have the same number of result columns"
                );
    param_2 = (int *)0x1;
    piVar9 = param_2;
    goto LAB_0043692a;
  }
  if (param_2[6] != 0) {
    iVar6 = FUN_00431da0(param_3,param_2,(char *)param_3);
    return iVar6;
  }
  cVar1 = (char)param_2[1];
  if (cVar1 == 'p') {
LAB_00436687:
    if ((((char)uVar15 == '\x01') && (param_2[10] == 0)) && (param_2[0xb] == 0)) {
      local_30 = (int *)local_1c;
    }
    else {
      local_30 = (int *)param_1[0x11];
      param_1[0x11] = (int)local_30 + 1;
      iVar12 = FUN_00414e70(local_30,0x29);
      param_2[0xe] = iVar12;
      *(byte *)(param_2[9] + 6) = *(byte *)(param_2[9] + 6) | 8;
      uVar15 = extraout_ECX_05;
    }
    pbVar8 = (byte *)FUN_0040fcc0(uVar15,local_30,1);
    piVar9 = (int *)FUN_00443d60(param_1,piVar14,pbVar8);
    if (piVar9 != (int *)0x0) goto LAB_0043692a;
    iVar12 = param_2[10];
    local_10[0] = ((char)param_2[1] == 'r') + 1;
    iVar7 = param_2[0xb];
    param_2[7] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    piVar9 = (int *)FUN_00443d60(param_1,param_2,local_10);
    FUN_0040e580();
    local_38 = param_2[7];
    param_2[7] = (int)piVar14;
    param_2[6] = 0;
    FUN_004158d0(iVar6,param_2[10]);
    param_2[0xb] = iVar7;
    param_2[10] = iVar12;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    if ((byte)local_20 != 1) {
      uVar15 = extraout_ECX_06;
      if ((byte)local_20 == 5) {
        piVar5 = (int *)param_2[7];
        piVar14 = param_2;
        while (piVar2 = piVar5, piVar2 != (int *)0x0) {
          piVar14 = piVar2;
          piVar5 = (int *)piVar2[7];
        }
        FUN_0042f670(param_1,(short *)0x0,(int *)*piVar14);
        uVar15 = extraout_ECX_07;
      }
      iVar12 = FUN_00414e90(uVar15);
      iVar7 = FUN_00414e90(extraout_ECX_08);
      FUN_0041c750((int)param_2);
      FUN_00414e70(local_30,0x41);
      FUN_0040d5c0();
      FUN_00421f10(param_1,(int)param_2,(int *)*param_2,local_30,*(char **)*param_2,(int *)0x0,-1,
                   (char *)&local_20,iVar7,iVar12);
      FUN_0040d4e0((int)this,iVar7);
      FUN_00414e70(local_30,0x43);
      FUN_0040d4e0((int)this,iVar12);
      FUN_00414e70(local_30,0x2b);
    }
  }
  else if (cVar1 == 'q') {
    piVar14[10] = param_2[10];
    param_1 = (int *)0x0;
    piVar14[0xb] = param_2[0xb];
    piVar9 = (int *)FUN_00443d60(piVar3,piVar14,(byte *)&local_20);
    param_2[10] = 0;
    param_2[0xb] = 0;
    if (piVar9 != (int *)0x0) goto LAB_0043692a;
    param_2[7] = 0;
    iVar12 = piVar14[0xc];
    param_2[0xc] = iVar12;
    param_2[0xd] = piVar14[0xd];
    if (iVar12 != 0) {
      param_1 = (int *)FUN_00414e50(0x73);
    }
    piVar9 = (int *)FUN_00443d60(piVar3,param_2,(byte *)&local_20);
    local_38 = param_2[7];
    param_2[7] = (int)piVar14;
    if (param_1 != (int *)0x0) {
      FUN_0040d680(this);
    }
  }
  else {
    if (cVar1 == 'r') goto LAB_00436687;
    iVar12 = param_1[0x11];
    param_1[0x11] = iVar12 + 2;
    iVar7 = FUN_00414e70(iVar12,0x29);
    param_2[0xe] = iVar7;
    *(byte *)(param_2[9] + 6) = *(byte *)(param_2[9] + 6) | 8;
    pbVar8 = (byte *)FUN_0040fcc0(extraout_ECX_01,iVar12,1);
    piVar9 = (int *)FUN_00443d60(param_1,piVar14,pbVar8);
    if (piVar9 != (int *)0x0) goto LAB_0043692a;
    iVar10 = FUN_00414e70(iVar12 + 1,0x29);
    iVar7 = param_2[10];
    iVar11 = param_2[0xb];
    param_2[0xf] = iVar10;
    param_2[7] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    local_c = iVar12 + 1;
    piVar9 = (int *)FUN_00443d60(param_1,param_2,local_10);
    local_38 = param_2[7];
    param_2[7] = (int)piVar14;
    FUN_004158d0(iVar6,param_2[10]);
    param_2[10] = iVar7;
    param_2[0xb] = iVar11;
    if ((byte)local_20 == 5) {
      piVar5 = (int *)param_2[7];
      piVar14 = param_2;
      while (piVar2 = piVar5, piVar2 != (int *)0x0) {
        piVar14 = piVar2;
        piVar5 = (int *)piVar2[7];
      }
      FUN_0042f670(param_1,(short *)0x0,(int *)*piVar14);
      iVar7 = extraout_ECX_02;
    }
    iVar7 = FUN_00414e90(iVar7);
    iVar11 = FUN_00414e90(extraout_ECX_03);
    FUN_0041c750((int)param_2);
    FUN_00414e70(iVar12,0x41);
    FUN_0040ec00();
    FUN_00414e70(iVar12,0x3b);
    FUN_004197f0(iVar11,iVar12 + 1,0x31,(char *)0x0);
    FUN_0040ec20(extraout_ECX_04,(int)param_1);
    FUN_00421f10(extraout_EDX,(int)param_2,(int *)*param_2,iVar12,*(char **)*param_2,(int *)0x0,-1,
                 (char *)&local_20,iVar11,iVar7);
    FUN_0040d4e0((int)this,iVar11);
    FUN_00414e70(iVar12,0x43);
    FUN_0040d4e0((int)this,iVar7);
    FUN_00414e70(iVar12 + 1,0x2b);
    FUN_00414e70(iVar12,0x2b);
  }
  param_2 = piVar9;
  piVar9 = param_2;
  if ((*(byte *)((int)piVar4 + 6) & 8) != 0) {
    iVar12 = *(int *)*piVar4;
    pcVar13 = (char *)FUN_00417b70();
    if (pcVar13 == (char *)0x0) {
      param_2 = (int *)0x7;
      piVar9 = param_2;
    }
    else {
      cVar1 = *(char *)(*(int *)(*(int *)(iVar6 + 8) + 0xc) + 0x49);
      *(short *)(pcVar13 + 6) = (short)iVar12;
      pcVar13[4] = cVar1;
      local_2c = pcVar13 + 0xc;
      iVar7 = 0;
      if (0 < iVar12) {
        do {
          piVar14 = FUN_00431d50(piVar3,piVar4,iVar7);
          *(int **)local_2c = piVar14;
          if (piVar14 == (int *)0x0) {
            *(undefined4 *)local_2c = *(undefined4 *)(iVar6 + 0x2c);
          }
          iVar7 = iVar7 + 1;
          local_2c = local_2c + 4;
        } while (iVar7 < iVar12);
      }
      local_30 = piVar4;
      do {
        iVar7 = 0;
        piVar14 = local_30 + 0xe;
        do {
          if (*piVar14 < 0) break;
          FUN_0040d620(this,iVar12);
          FUN_00415110(-6,pcVar13,this);
          *piVar14 = -1;
          iVar7 = iVar7 + 1;
          piVar14 = piVar14 + 1;
        } while (iVar7 < 2);
        local_30 = (int *)local_30[7];
      } while (local_30 != (int *)0x0);
      FUN_00408130(iVar6);
    }
  }
LAB_0043692a:
  param_2 = piVar9;
  param_3[2] = local_18;
  param_3[3] = local_14;
  FUN_0040fce0(iVar6,local_38);
  return (int)param_2;
}


/* END FUNCTION 0x00436300 */
