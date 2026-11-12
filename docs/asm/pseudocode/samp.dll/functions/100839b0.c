/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100839b0
 * Name: FUN_100839b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100839b0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  uint unaff_ESI;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iStack_c4;
  uint *puStack_bc;
  undefined4 local_b8;
  uint local_b4;
  uint local_b0;
  uint *puStack_ac;
  uint uStack_a8;
  undefined1 auStack_a4 [4];
  undefined4 auStack_a0 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_74 [4];
  char acStack_70 [100];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011635b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((param_2 == (int *)0x0) &&
     (ExceptionList = &local_c, param_2 = (int *)FUN_1007d360(), param_2 == (int *)0x0)) {
    iVar5 = -0x7ffbf6ff;
  }
  else {
    param_1[2] = param_4;
    *param_1 = param_2;
    param_1[1] = param_3;
    FUN_10083900();
    local_b8 = 0;
    local_b4 = 0;
    local_b0 = 0;
    local_4 = 0;
    local_90 = 0x16;
    local_8c = 0x18;
    local_88 = 0x17;
    local_84 = 0x23;
    uStack_a8 = (**(code **)(*param_2 + 0x10))(param_2);
    uVar9 = 0;
    if (uStack_a8 != 0) {
      do {
        puStack_bc = operator_new(0x568);
        if (puStack_bc == (uint *)0x0) {
          puStack_bc = (uint *)0x0;
        }
        else {
          puStack_bc[0x154] = 0;
          puStack_bc[0x155] = 0;
          puStack_bc[0x156] = 0;
          puStack_bc[0x157] = 0;
          puStack_bc[0x158] = 0;
          puStack_bc[0x159] = 0;
        }
        puStack_ac = puStack_bc;
        if (puStack_bc == (uint *)0x0) {
          thunk_FUN_100824e0(0);
          ExceptionList = local_c;
          return -0x7ff8fff2;
        }
        *puStack_bc = uVar9;
        (**(code **)(*param_2 + 0x14))(param_2,uVar9,0,puStack_bc + 1);
        thunk_FUN_100824e0(0);
        uVar12 = 0;
        do {
          uVar2 = auStack_a0[uVar12];
          local_b4 = (**(code **)(*param_2 + 0x18))(param_2,uVar9,uVar2);
          uVar9 = 0;
          if (local_b4 != 0) {
            do {
              (**(code **)(*param_2 + 0x1c))(param_2,unaff_ESI,uVar2,uVar9,&local_b0);
              if (((((*(uint *)((int)param_1 + 0x35) <= local_b0) &&
                    (*(uint **)((int)param_1 + 0x3d) <= puStack_ac)) &&
                   (local_b0 <= *(uint *)((int)param_1 + 0x39))) &&
                  ((puStack_ac <= *(uint **)((int)param_1 + 0x41) &&
                   (*(uint *)((int)param_1 + 0x45) <= uStack_a8)))) &&
                 ((uStack_a8 <= *(uint *)((int)param_1 + 0x49) &&
                  ((FUN_10082bd0(&local_b0), iStack_c4 < 1 ||
                   (iVar5 = FUN_1007ba20(auStack_a4,0,iStack_c4), iVar5 == -1)))))) {
                FUN_10082ad0(auStack_a4);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < local_b4);
          }
          uVar12 = uVar12 + 1;
          uVar9 = unaff_ESI;
        } while (uVar12 < 4);
        (**(code **)(*param_2 + 0x20))(param_2,unaff_ESI,&local_90);
        if (((int)local_b4 < 1) || (iVar5 = FUN_1007ba20(auStack_74,0,local_b4), iVar5 == -1)) {
          FUN_10082ad0(auStack_74);
        }
        _qsort((void *)puStack_bc[0x154],puStack_bc[0x155],0x10,(_PtFuncCompare *)&LAB_100822f0);
        iVar5 = FUN_10083810(puStack_bc,&local_b8);
        if ((iVar5 < 0) || ((int)puStack_bc[0x158] < 1)) {
          FUN_10083750();
          _free(puStack_bc);
        }
        else {
          iVar5 = FUN_10082b90(&puStack_ac);
          if (iVar5 < 0) {
            thunk_FUN_100824e0(0);
            ExceptionList = local_c;
            return iVar5;
          }
        }
        uVar9 = unaff_ESI + 1;
      } while (uVar9 < uStack_a8);
    }
    iVar5 = 1;
    bVar4 = true;
    iStack_c4 = 0;
    if (0 < *(int *)((int)param_1 + 0x55)) {
      do {
        iVar11 = *(int *)(*(int *)((int)param_1 + 0x51) + iStack_c4 * 4);
        if (iVar5 < *(int *)((int)param_1 + 0x55)) {
          iVar10 = iVar5;
          do {
            iVar6 = __stricmp((char *)(iVar11 + 0x204),
                              (char *)(*(int *)(*(int *)((int)param_1 + 0x51) + iVar10 * 4) + 0x204)
                             );
            if (iVar6 == 0) {
              bVar4 = false;
              goto LAB_10083cc7;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)((int)param_1 + 0x55));
        }
        iStack_c4 = iStack_c4 + 1;
        iVar5 = iVar5 + 1;
      } while (iStack_c4 < *(int *)((int)param_1 + 0x55));
    }
LAB_10083cc7:
    iVar5 = 0;
    if (0 < *(int *)((int)param_1 + 0x55)) {
LAB_10083cd4:
      puVar3 = *(undefined4 **)(*(int *)((int)param_1 + 0x51) + iVar5 * 4);
      pcVar8 = (char *)(puVar3 + 0x114);
      pcVar7 = (char *)(puVar3 + 0x81);
      iVar11 = (int)pcVar8 - (int)pcVar7;
      do {
        cVar1 = *pcVar7;
        pcVar7[iVar11] = cVar1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      *(undefined1 *)(puVar3 + 0x12d) = 0;
      if (!bVar4) {
        FUN_1007bc80(acStack_70,100," (#%d)",*puVar3);
        iVar11 = 0x100;
        pcVar7 = pcVar8;
        do {
          if (*pcVar7 == '\0') {
            if (iVar11 != 0) {
              iVar10 = 0x100 - (0x100 - iVar11);
              pcVar8 = pcVar8 + (0x100 - iVar11);
              if (iVar10 != 0) {
                iVar11 = -(int)pcVar8;
                goto LAB_10083d50;
              }
            }
            break;
          }
          pcVar7 = pcVar7 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      goto LAB_10083d67;
    }
LAB_10083d73:
    thunk_FUN_100824e0(0);
    iVar5 = 0;
  }
  ExceptionList = local_c;
  return iVar5;
  while( true ) {
    *pcVar8 = pcVar8[(int)(acStack_70 + iVar11)];
    pcVar8 = pcVar8 + 1;
    iVar10 = iVar10 + -1;
    if (iVar10 == 0) break;
LAB_10083d50:
    if (pcVar8[(int)(acStack_70 + iVar11)] == '\0') {
      if (iVar10 != 0) goto LAB_10083d64;
      break;
    }
  }
  pcVar8 = pcVar8 + -1;
LAB_10083d64:
  *pcVar8 = '\0';
LAB_10083d67:
  iVar5 = iVar5 + 1;
  if (*(int *)((int)param_1 + 0x55) <= iVar5) goto LAB_10083d73;
  goto LAB_10083cd4;
}


/* END FUNCTION 0x100839b0 */
