/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004402e0
 * Name: FUN_004402e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_004402e0(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7,
            uint param_8,undefined4 param_9,int *param_10)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *this;
  int *piVar5;
  void *this_00;
  int iVar6;
  undefined4 extraout_ECX;
  uint uVar7;
  uint uVar8;
  uint extraout_EDX;
  int *extraout_EDX_00;
  int iVar9;
  int iVar10;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_28;
  
  local_34 = 0;
  if ((param_6 == 0) || (local_28 = param_6, param_7 == 0)) {
    local_28 = param_4;
  }
  piVar1 = (int *)FUN_0041c720();
  iVar2 = *(int *)(param_2 + 0xc);
  local_30 = 0;
  local_38 = iVar2;
  if (0 < iVar2) {
    local_38 = 0;
    local_3c = param_4;
    do {
      local_3c = local_3c + 1;
      if (local_30 != *(int *)(param_2 + 8)) {
        uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0x10) + 0x14 + local_38);
        if (uVar7 != 0) {
          uVar8 = param_8;
          if (((param_8 == 99) && (uVar8 = uVar7, uVar7 == 99)) ||
             ((uVar8 == 5 && (*(int *)(*(int *)(param_2 + 0x10) + local_38 + 4) == 0)))) {
            uVar8 = 2;
          }
          switch(uVar8) {
          case 2:
            FUN_0040f330((int)param_1);
            uVar8 = extraout_EDX;
          case 1:
          case 3:
            FUN_00414dd0(5,0x13,uVar8,local_3c);
            pcVar3 = (char *)FUN_00418920((undefined **)"%s.%s may not be NULL");
            FUN_00415110(-1,pcVar3,piVar1);
            break;
          case 4:
            FUN_00414e70(local_3c,0x49);
            break;
          default:
            FUN_00414e50(0x4a);
            FUN_00415dc0();
            FUN_0040d680(piVar1);
          }
        }
      }
      local_30 = local_30 + 1;
      local_38 = local_38 + 0x18;
    } while (local_30 < iVar2);
  }
  if ((*(int *)(param_2 + 0x2c) != 0) && ((*(uint *)(*param_1 + 0xc) & 0x40000) == 0)) {
    iVar2 = FUN_00414e90(local_38);
    param_1[0x14] = param_4 + 1;
    FUN_00434ef0(this_00,param_1,*(char **)(param_2 + 0x2c),iVar2,8);
    if ((param_8 == 99) || (param_8 != 4)) {
      FUN_00420ee0((char *)0x0,0);
    }
    else {
      FUN_00414e70(0,1);
    }
    FUN_0040d4e0((int)piVar1,iVar2);
  }
  if (param_6 == 0) goto LAB_00440633;
  uVar7 = param_8;
  if ((param_8 == 99) && (uVar7 = (uint)*(byte *)(param_2 + 0x23), *(byte *)(param_2 + 0x23) == 99))
  {
    uVar7 = 2;
  }
  if (param_7 != 0) {
    FUN_00414dd0(0x4c,param_4,0,param_6);
  }
  FUN_00414dd0(0x34,param_3,0,param_4);
  switch(uVar7) {
  default:
    FUN_00420ee0("PRIMARY KEY must be unique",-2);
    break;
  case 4:
    FUN_00414e70(0,1);
    break;
  case 5:
    piVar5 = (int *)0x0;
    if ((((*(uint *)(*param_1 + 0xc) & 0x2000000) == 0) ||
        (piVar5 = (int *)FUN_00410290(param_1,0x6a,0,(uint *)0x0), piVar5 == (int *)0x0)) &&
       (iVar2 = FUN_0040f860(param_2,0,0), iVar2 == 0)) {
      if (*(int *)(param_2 + 0x14) != 0) {
        FUN_0040f310((int)param_1);
        FUN_00440280(param_3,(int *)0x0);
        local_34 = 1;
        break;
      }
    }
    else {
      FUN_0040f310((int)param_1);
      FUN_0044ab70((void *)param_4,param_1,param_2,(void *)param_3,param_4,0,piVar5,5);
    }
    local_34 = 1;
  }
  FUN_0040d680(piVar1);
  if (param_7 != 0) {
    FUN_0040d680(piVar1);
  }
LAB_00440633:
  iVar2 = *(int *)(param_2 + 0x14);
  local_38 = 0;
  do {
    if (iVar2 == 0) {
      if (param_10 != (int *)0x0) {
        *param_10 = local_34;
      }
      return;
    }
    if (*(int *)(param_5 + local_38 * 4) != 0) {
      pcVar3 = (char *)FUN_0040ec60((int)param_1);
      iVar9 = 0;
      if (0 < *(int *)(iVar2 + 4)) {
        do {
          iVar10 = *(int *)(*(int *)(iVar2 + 8) + iVar9 * 4);
          iVar6 = param_4;
          if (iVar10 != *(int *)(param_2 + 8)) {
            iVar6 = param_4 + 1 + iVar10;
          }
          FUN_00414e70(iVar6,0xf);
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(iVar2 + 4));
      }
      FUN_00414e70(param_4,0xf);
      FUN_00414dd0(0x1e,pcVar3,*(int *)(iVar2 + 4) + 1,*(undefined4 *)(param_5 + local_38 * 4));
      pcVar4 = (char *)FUN_004169f0();
      FUN_00415110(0,pcVar4,piVar1);
      thunk_FUN_0040ea60(*(int *)(iVar2 + 4) + 1);
      uVar7 = (uint)*(byte *)(iVar2 + 0x18);
      if (uVar7 == 0) {
        FUN_0040ec90(pcVar3);
      }
      else {
        param_6 = param_8;
        if ((param_8 == 99) && (param_6 = uVar7, uVar7 == 99)) {
          param_6 = 2;
        }
        if (local_34 != 0) {
          if (param_6 == 4) {
            param_6 = 5;
          }
          else if (param_6 == 3) {
            param_6 = 2;
          }
        }
        this = (void *)FUN_0040ec00();
        FUN_00414e70(local_28,0xf);
        FUN_004197c0(0,local_38 + 1 + param_3,0x33,pcVar3,-0xe);
        FUN_0040ec90(pcVar3);
        if ((int)param_6 < 1) {
LAB_004408a8:
          FUN_0040f310((int)param_1);
          piVar5 = extraout_EDX_00;
          if ((*(uint *)(*param_1 + 0xc) & 0x2000000) != 0) {
            piVar5 = (int *)FUN_00410290(param_1,0x6a,extraout_EDX_00,(uint *)extraout_EDX_00);
          }
          FUN_0044ab70(this,param_1,param_2,(void *)param_3,this,0,piVar5,5);
          local_34 = 1;
        }
        else if ((int)param_6 < 4) {
          FUN_004081c0(0,0,200);
          iVar9 = *param_1;
          pcVar3 = "columns ";
          if (*(int *)(iVar2 + 4) < 2) {
            pcVar3 = "column ";
          }
          iVar10 = 0;
          if (0 < *(int *)(iVar2 + 4)) {
            do {
              pcVar4 = *(char **)(*(int *)(param_2 + 0x10) +
                                 *(int *)(*(int *)(iVar2 + 8) + iVar10 * 4) * 0x18);
              FUN_00412af0(pcVar3,0xffffffff);
              pcVar3 = ", ";
              FUN_00412af0(pcVar4,0xffffffff);
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(iVar2 + 4));
          }
          pcVar3 = " are not unique";
          if (*(int *)(iVar2 + 4) < 2) {
            pcVar3 = " is not unique";
          }
          FUN_00412af0(pcVar3,0xffffffff);
          pcVar3 = (char *)FUN_00412be0();
          FUN_00420ee0(pcVar3,0);
          FUN_00408130(iVar9);
        }
        else {
          if (param_6 != 4) goto LAB_004408a8;
          FUN_00414e70(0,1);
        }
        FUN_0040d680(piVar1);
        FUN_0040ec20(extraout_ECX,(int)param_1);
      }
    }
    iVar2 = *(int *)(iVar2 + 0x20);
    local_38 = local_38 + 1;
  } while( true );
}


/* END FUNCTION 0x004402e0 */
