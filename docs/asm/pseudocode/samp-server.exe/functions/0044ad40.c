/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044ad40
 * Name: FUN_0044ad40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0044ad40(int *param_1,short *param_2,byte *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  void *this;
  undefined3 extraout_var;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar10;
  undefined4 extraout_ECX_02;
  int iVar11;
  void *this_00;
  bool bVar12;
  int local_40;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  short *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_2c = 0;
  local_28 = 0;
  iVar1 = *param_1;
  local_40 = -1;
  if (((param_1[0x10] == 0) && (*(char *)(iVar1 + 0x1e) == '\0')) &&
     (iVar3 = FUN_00442e70(), iVar3 != 0)) {
    piVar4 = (int *)FUN_00410290(param_1,0x6a,0,(uint *)0x0);
    bVar12 = *(int *)(iVar3 + 0x1c) != 0;
    iVar5 = FUN_00446950(param_1,iVar3);
    if ((iVar5 == 0) &&
       (iVar5 = FUN_0041b9d0(extraout_ECX,iVar3,(uint)(piVar4 != (int *)0x0)), iVar5 == 0)) {
      iVar5 = FUN_0040fc30(iVar1);
      iVar6 = FUN_0041ab60(9,*(undefined4 *)(iVar3 + 4),0,
                           *(undefined4 *)(iVar5 * 0x10 + *(int *)(iVar1 + 8)));
      if (iVar6 != 1) {
        this_00 = (void *)param_1[0x11];
        *(void **)(param_2 + 0x10) = this_00;
        iVar11 = param_1[0x11] + 1;
        param_1[0x11] = iVar11;
        for (iVar8 = *(int *)(iVar3 + 0x14); iVar8 != 0; iVar8 = *(int *)(iVar8 + 0x20)) {
          iVar11 = iVar11 + 1;
          param_1[0x11] = iVar11;
        }
        if (bVar12) {
          FUN_0040ed70(&local_2c,*(undefined4 *)(iVar3 + 4));
        }
        this = (void *)FUN_0041c720();
        if (this != (void *)0x0) {
          if (*(char *)((int)param_1 + 0x13) == '\0') {
            FUN_0040dcc0();
          }
          FUN_0042cdb0((byte)iVar5,1);
          uVar10 = extraout_ECX_00;
          if (bVar12) {
            FUN_004462b0(param_1,iVar3,(undefined4 *)param_3,this_00);
            uVar10 = extraout_ECX_01;
          }
          local_1c = 0;
          local_18 = 0;
          local_14 = 0;
          local_10 = 0;
          local_c = 0;
          local_8 = 0;
          local_4 = 0;
          local_24 = param_1;
          local_20 = param_2;
          bVar2 = FUN_00424ba0(uVar10);
          if (CONCAT31(extraout_var,bVar2) == 0) {
            if ((*(uint *)(iVar1 + 0xc) & 0x1000) != 0) {
              local_40 = param_1[0x12] + 1;
              param_1[0x12] = local_40;
              FUN_00414e70(0,7);
            }
            if (((iVar6 == 0) && (param_3 == (byte *)0x0)) &&
               ((piVar4 == (int *)0x0 &&
                (((*(byte *)(iVar3 + 0x22) & 0x10) == 0 &&
                 (iVar6 = FUN_0040f860(iVar3,0,0), iVar6 == 0)))))) {
              FUN_004197c0(iVar5,*(undefined4 *)(iVar3 + 0x18),0x60,*(char **)(iVar3 + 4),-2);
              for (iVar3 = *(int *)(iVar3 + 0x14); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
                FUN_00414e70(*(undefined4 *)(iVar3 + 0x14),0x60);
              }
            }
            else {
              iVar6 = param_1[0x12] + 1;
              iVar5 = param_1[0x12] + 2;
              param_1[0x12] = iVar5;
              FUN_00414e70(0,10);
              piVar7 = FUN_00440af0(param_1,param_2,param_3,(undefined4 *)0x0,8);
              if (piVar7 == (int *)0x0) goto LAB_0044b1ac;
              FUN_00437690(iVar3,-1,this_00,iVar5);
              FUN_00414e70(iVar6,0x69);
              if ((*(uint *)(iVar1 + 0xc) & 0x1000) != 0) {
                FUN_00414e70(local_40,0x14);
              }
              FUN_004174c0(piVar7);
              iVar8 = FUN_00414e90(extraout_ECX_02);
              if (!bVar12) {
                FUN_00431a70(param_1,iVar3,(int)this_00,0x27);
              }
              FUN_00414dd0(0x6a,iVar6,iVar8,iVar5);
              if ((*(byte *)(iVar3 + 0x22) & 0x10) == 0) {
                FUN_0044ab70(this_00,param_1,iVar3,this_00,iVar5,
                             (uint)(*(char *)((int)param_1 + 0x13) == '\0'),piVar4,99);
              }
              else {
                pcVar9 = (char *)FUN_004103b0(iVar1);
                FUN_00416ed0();
                FUN_004197c0(1,0,0x85,pcVar9,-10);
                FUN_0040f330((int)param_1);
              }
              FUN_00414e70(0,1);
              FUN_0040d4e0((int)this,iVar8);
              if ((!bVar12) && ((*(byte *)(iVar3 + 0x22) & 0x10) == 0)) {
                for (iVar3 = *(int *)(iVar3 + 0x14); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
                  this_00 = (void *)((int)this_00 + 1);
                  FUN_00414e70(this_00,0x2b);
                }
                FUN_00414e50(0x2b);
              }
            }
            if ((*(char *)((int)param_1 + 0x13) == '\0') && (param_1[0x6b] == 0)) {
              FUN_004217f0((int)param_1);
            }
            if ((((*(uint *)(iVar1 + 0xc) & 0x1000) != 0) &&
                (*(char *)((int)param_1 + 0x13) == '\0')) && (param_1[0x6b] == 0)) {
              FUN_00414e70(local_40,0x10);
              FUN_00419d70(1);
              FUN_0042e910(this,0,0,"rows deleted");
            }
          }
        }
      }
    }
  }
LAB_0044b1ac:
  FUN_0040ed90();
  FUN_0040f240(param_2);
  FUN_004158d0(iVar1,(int)param_3);
  return;
}


/* END FUNCTION 0x0044ad40 */
