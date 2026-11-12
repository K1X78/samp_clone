/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00442ed0
 * Name: FUN_00442ed0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00442ed0(int *param_1,int param_2,int param_3,int param_4)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  uint uVar7;
  int *local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  int local_10;
  uint local_c;
  byte *local_8;
  int local_4;
  
  local_c = (uint)*(byte *)((int)param_1 + 0x1ba);
  iVar2 = *param_1;
  if ((*(uint *)(iVar2 + 0xc) & 0x4000000) != 0) {
    FUN_0041c720();
    local_18 = FUN_0040fc30(iVar2);
    local_8 = *(byte **)(local_18 * 0x10 + *(int *)(iVar2 + 8));
    for (piVar5 = *(int **)(param_2 + 0x24); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
      uVar7 = 0;
      local_1c = (int *)0x0;
      local_14 = (int *)0x0;
      if (*(char *)((int)param_1 + 0x1ba) == '\0') {
        iVar3 = FUN_00442730();
      }
      else {
        iVar3 = FUN_0040edd0(iVar2,(char *)piVar5[2],local_8);
      }
      if ((iVar3 == 0) ||
         (iVar4 = FUN_0041bb30(param_1,iVar3,(int)piVar5,(int *)&local_1c,&local_14), iVar4 != 0)) {
        if (local_c == 0) {
          return;
        }
        if (*(char *)(iVar2 + 0x1e) != '\0') {
          return;
        }
      }
      else {
        if (local_14 == (int *)0x0) {
          local_4 = piVar5[9];
          local_20 = &local_4;
        }
        else {
          local_20 = local_14;
        }
        local_10 = 0;
        if (0 < piVar5[5]) {
          do {
            if (local_20[local_10] == *(int *)(param_2 + 8)) {
              local_20[local_10] = -1;
            }
            if (*(int *)(iVar2 + 0x100) != 0) {
              if (local_1c == (int *)0x0) {
                iVar4 = *(int *)(iVar3 + 8);
              }
              else {
                iVar4 = *(int *)(local_1c[2] + local_10 * 4);
              }
              iVar4 = FUN_0041a9f0(*(undefined4 *)(iVar3 + 4),
                                   *(undefined4 *)(*(int *)(iVar3 + 0x10) + iVar4 * 0x18),local_18);
              uVar7 = (uint)(iVar4 == 2);
            }
            local_10 = local_10 + 1;
          } while (local_10 < piVar5[5]);
        }
        FUN_00416230(local_18,*(int *)(iVar3 + 0x18),'\0',*(int *)(iVar3 + 4));
        param_1[0x11] = param_1[0x11] + 1;
        if (param_3 != 0) {
          FUN_00431730(param_1,local_18,iVar3,local_1c,piVar5,local_20,param_3,-1,uVar7);
        }
        if (param_4 != 0) {
          FUN_00431730(param_1,local_18,iVar3,local_1c,piVar5,local_20,param_4,1,uVar7);
        }
        FUN_00408130(iVar2);
      }
    }
    for (piVar5 = (int *)FUN_0040f840(); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[3]) {
      local_10 = 0;
      local_18 = 0;
      if ((((char)piVar5[6] != '\0') || (param_1[0x6a] != 0)) || ((char)param_1[0x56] != '\0')) {
        iVar3 = FUN_0041bb30(param_1,param_2,(int)piVar5,&local_10,&local_18);
        if (iVar3 == 0) {
          psVar6 = FUN_0041b4e0();
          iVar3 = local_10;
          if (psVar6 != (short *)0x0) {
            iVar4 = *piVar5;
            *(int *)(psVar6 + 10) = iVar4;
            *(undefined4 *)(psVar6 + 6) = *(undefined4 *)(*piVar5 + 4);
            psVar1 = (short *)(iVar4 + 0x20);
            *psVar1 = *psVar1 + 1;
            *(int *)(psVar6 + 0x10) = param_1[0x11];
            param_1[0x11] = param_1[0x11] + 1;
            if (param_4 != 0) {
              FUN_004417d0(psVar6,param_2,local_10,piVar5,local_18,param_4,-1);
            }
            if (param_3 != 0) {
              FUN_004417d0(psVar6,param_2,iVar3,piVar5,local_18,param_3,1);
            }
            psVar6[6] = 0;
            psVar6[7] = 0;
            FUN_0040f240(psVar6);
          }
          FUN_00408130(iVar2);
        }
        else {
          if (local_c == 0) {
            return;
          }
          if (*(char *)(iVar2 + 0x1e) != '\0') {
            return;
          }
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x00442ed0 */
