/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004356f0
 * Name: FUN_004356f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004356f0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int in_EAX;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar7;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_34;
  int local_1c;
  
  iVar8 = in_EAX + 2;
  iVar9 = in_EAX + 5;
  iVar1 = *param_1;
  iVar10 = in_EAX + 7;
  pvVar3 = (void *)FUN_0041c720();
  if (((pvVar3 != (void *)0x0) && (param_2 != 0)) && (*(int *)(param_2 + 0x14) != 0)) {
    iVar4 = FUN_0040fc30(iVar1);
    iVar5 = FUN_0041ab60(0x1c,*(undefined4 *)(param_2 + 4),0,
                         *(undefined4 *)(iVar4 * 0x10 + *(int *)(iVar1 + 8)));
    if (iVar5 == 0) {
      FUN_00416230(iVar4,*(int *)(param_2 + 0x18),'\0',*(int *)(param_2 + 4));
      iVar4 = param_1[0x11];
      param_1[0x11] = iVar4 + 1;
      for (piVar2 = *(int **)(param_2 + 0x14); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[8]) {
        local_1c = piVar2[1];
        piVar6 = FUN_00430960(param_1,piVar2);
        iVar5 = in_EAX + 8 + local_1c * 2;
        if (param_1[0x12] < iVar5) {
          param_1[0x12] = iVar5;
        }
        FUN_004197c0(piVar2[5],iVar4,0x26,(char *)piVar6,-0x10);
        if (*(int **)(param_2 + 0x14) == piVar2) {
          FUN_004197c0(in_EAX,0,0x5e,*(char **)(param_2 + 4),0);
        }
        FUN_004197c0(in_EAX + 1,0,0x5e,(char *)*piVar2,0);
        local_34 = 0;
        uVar7 = extraout_ECX;
        if (-1 < local_1c) {
          do {
            FUN_00414e70(0,7);
            local_34 = local_34 + 1;
            uVar7 = extraout_ECX_00;
          } while (local_34 <= local_1c);
        }
        local_34 = 0;
        if (0 < local_1c) {
          do {
            FUN_00414e70(0,10);
            local_34 = local_34 + 1;
            uVar7 = extraout_ECX_01;
          } while (local_34 < local_1c);
        }
        iVar5 = FUN_00414e90(uVar7);
        FUN_00414e70(iVar4,0x41);
        FUN_0040d5c0();
        FUN_00414e70(iVar10,0x14);
        local_34 = 0;
        if (0 < local_1c) {
          do {
            FUN_00414dd0(0x1c,iVar4,local_34,in_EAX + 3);
            FUN_00414dd0(0x4b,in_EAX + 3,0,local_1c + 1 + iVar10 + local_34);
            FUN_0040d660(extraout_ECX_02,8);
            local_34 = local_34 + 1;
          } while (local_34 < local_1c);
        }
        if (*(char *)(iVar1 + 0x1e) != '\0') {
          return;
        }
        FUN_00414e70(0,1);
        local_34 = 0;
        if (0 < local_1c) {
          do {
            FUN_0040d5c0();
            FUN_0040d680(pvVar3);
            FUN_00414e70(in_EAX + 8 + local_34,0x14);
            FUN_00414dd0(0x1c,iVar4,local_34,local_1c + 1 + iVar10 + local_34);
            local_34 = local_34 + 1;
          } while (local_34 < local_1c);
        }
        FUN_0040d4e0((int)pvVar3,iVar5);
        FUN_00414e70(iVar4,0x43);
        FUN_00414e50(0x2b);
        FUN_00414e50(0x1b);
        FUN_00414e70(iVar10,0xf);
        if (0 < local_1c) {
          local_34 = in_EAX + 8;
          do {
            FUN_004197c0(iVar9,0,0x5e," ",0);
            FUN_00414dd0(0x5b,iVar9,iVar8,iVar8);
            FUN_00414dd0(0x56,iVar10,local_34,iVar9);
            FUN_00414e70(iVar9,0x14);
            FUN_00414dd0(0x59,local_34,iVar9,iVar9);
            FUN_00414e50(0x90);
            FUN_00414dd0(0x5b,iVar9,iVar8,iVar8);
            local_34 = local_34 + 1;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
        FUN_004197c0(3,in_EAX,0x1e,"aaa",0);
        FUN_00414e70(param_3,0x36);
        FUN_00414dd0(0x37,param_3,in_EAX + 4,in_EAX + 6);
        FUN_0040d660(extraout_ECX_03,8);
        FUN_0040d680(pvVar3);
      }
    }
  }
  return;
}


/* END FUNCTION 0x004356f0 */
