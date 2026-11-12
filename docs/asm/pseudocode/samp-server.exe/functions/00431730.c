/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00431730
 * Name: FUN_00431730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_00431730(int *param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6,int param_7
            ,int param_8,int param_9)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar8;
  int iVar9;
  int iVar10;
  
  piVar1 = (int *)FUN_0041c720();
  iVar2 = param_1[0x11] + -1;
  iVar3 = FUN_00414e90(extraout_ECX);
  if (param_8 < 0) {
    FUN_00414e70((uint)*(byte *)(param_5 + 6),0x6f);
  }
  iVar8 = 0;
  if (0 < param_5[5]) {
    do {
      FUN_00414e70(param_6[iVar8] + 1 + param_7,0x49);
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_5[5]);
  }
  if (param_9 == 0) {
    if (param_4 == (int *)0x0) {
      iVar8 = FUN_0040ec00();
      FUN_00414e70(*param_6 + 1 + param_7,0xf);
      FUN_00414e70(iVar8,0x15);
      if ((param_3 == *param_5) && (param_8 == 1)) {
        FUN_00414dd0(0x4c,param_7,iVar3,iVar8);
      }
      FUN_004215c0(iVar2,param_2,0x26);
      FUN_00414dd0(0x34,iVar2,0,iVar8);
      FUN_00414e70(0,1);
      FUN_0040d5c0();
      FUN_0040d680(piVar1);
      FUN_0040d680(piVar1);
      FUN_0040ec20(extraout_ECX_00,(int)param_1);
    }
    else {
      iVar8 = param_5[5];
      iVar4 = FUN_0040ec60((int)param_1);
      iVar5 = FUN_0040ec00();
      piVar6 = FUN_00430960(param_1,param_4);
      FUN_00414dd0(0x26,iVar2,param_4[5],param_2);
      FUN_00415110(-0x10,(char *)piVar6,piVar1);
      iVar9 = 0;
      if (0 < iVar8) {
        do {
          FUN_00414e70(param_6[iVar9] + 1 + param_7,0xf);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar8);
      }
      if ((param_3 == *param_5) && (param_8 == 1)) {
        iVar9 = FUN_0040d5c0();
        iVar10 = 0;
        if (0 < iVar8) {
          do {
            FUN_00414dd0(0x4b,param_6[iVar10] + 1 + param_7,iVar9 + 1 + iVar8,
                         *(int *)(param_4[2] + iVar10 * 4) + 1 + param_7);
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar8);
        }
        FUN_00414e70(0,1);
      }
      FUN_00414dd0(0x1e,iVar4,iVar8,iVar5);
      pcVar7 = (char *)FUN_004169f0();
      FUN_00415110(0,pcVar7,piVar1);
      FUN_004197f0(iVar3,iVar2,0x32,(char *)0x0);
      FUN_0040ec20(extraout_ECX_01,(int)param_1);
      FUN_0040ec90(iVar4);
    }
  }
  if ((((char)param_5[6] == '\0') && (param_1[0x6a] == 0)) && ((char)param_1[0x56] == '\0')) {
    FUN_00420ee0("foreign key constraint failed",-2);
  }
  else {
    if ((0 < param_8) && ((char)param_5[6] == '\0')) {
      if ((int *)param_1[0x6a] != (int *)0x0) {
        param_1 = (int *)param_1[0x6a];
      }
      *(undefined1 *)((int)param_1 + 0x159) = 1;
    }
    FUN_00414e70((uint)*(byte *)(param_5 + 6),0x6e);
  }
  FUN_0040d4e0((int)piVar1,iVar3);
  FUN_00414e50(0x2b);
  return;
}


/* END FUNCTION 0x00431730 */
