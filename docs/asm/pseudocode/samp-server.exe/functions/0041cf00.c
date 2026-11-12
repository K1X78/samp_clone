/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041cf00
 * Name: FUN_0041cf00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl
FUN_0041cf00(int param_1,int param_2,undefined4 *param_3,undefined *param_4,undefined4 *param_5)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iStack_18;
  int local_14;
  int iStack_10;
  int local_c;
  int local_8;
  uint uStack_4;
  
  local_8 = *(undefined4 *)(param_2 + 0x38);
  uVar5 = *(undefined4 *)(param_2 + 0x3c);
  local_14 = 0;
  local_c = FUN_00418920((undefined **)&DAT_004b23ac);
  if (local_c == 0) {
    return 7;
  }
  piVar4 = FUN_00417b70();
  if (piVar4 == (int *)0x0) {
    FUN_00408130(param_1);
    return 7;
  }
  *piVar4 = param_1;
  piVar4[1] = (int)param_3;
  *(int *)(param_1 + 0x124) = param_2;
  local_8 = (*(code *)param_4)(param_1,param_3[2],local_8,uVar5,piVar4 + 2,&local_14);
  if (local_8 == 7) {
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  else if (local_8 == 0) {
    puVar2 = (undefined4 *)piVar4[2];
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *param_3;
      piVar4[3] = 1;
      if (*(int *)(param_1 + 0x124) == 0) {
        piVar4[4] = *(int *)(param_2 + 0x34);
        *(int **)(param_2 + 0x34) = piVar4;
        iStack_10 = 0;
        if (0 < *(int *)(param_2 + 0xc)) {
          iStack_18 = 0;
          do {
            pbVar3 = *(byte **)(*(int *)(param_2 + 0x10) + 0xc + iStack_18);
            iVar9 = 0;
            if (pbVar3 != (byte *)0x0) {
              uVar6 = FUN_00408380((char *)pbVar3);
              uStack_4 = uVar6;
              iVar7 = FUN_004084a0((byte *)"hidden",pbVar3,6);
              if ((iVar7 == 0) && ((pbVar3[6] == 0 || (pbVar3[6] == 0x20)))) {
LAB_0041d112:
                if (iVar9 < (int)uVar6) {
                  pbVar1 = pbVar3 + iVar9;
                  iVar7 = (pbVar3[iVar9 + 6] != 0) + 6;
                  if (iVar7 + iVar9 <= (int)uVar6) {
                    pbVar8 = pbVar1;
                    do {
                      *pbVar8 = pbVar8[iVar7];
                      pbVar8 = pbVar8 + 1;
                    } while ((int)(pbVar8 + (iVar7 - (int)pbVar3)) <= (int)uStack_4);
                  }
                  if ((*pbVar1 == 0) && (0 < iVar9)) {
                    pbVar1[-1] = 0;
                  }
                  *(undefined1 *)(*(int *)(param_2 + 0x10) + 0x17 + iStack_18) = 1;
                }
              }
              else {
                iVar9 = 0;
                if (0 < (int)uVar6) {
                  do {
                    iVar7 = FUN_004084a0((byte *)" hidden",pbVar3 + iVar9,7);
                    if ((iVar7 == 0) && ((pbVar3[iVar9 + 7] == 0 || (pbVar3[iVar9 + 7] == 0x20)))) {
                      iVar9 = iVar9 + 1;
                      goto LAB_0041d112;
                    }
                    iVar9 = iVar9 + 1;
                  } while (iVar9 < (int)uVar6);
                }
              }
            }
            iStack_10 = iStack_10 + 1;
            iStack_18 = iStack_18 + 0x18;
          } while (iStack_10 < *(int *)(param_2 + 0xc));
        }
      }
      else {
        uVar5 = FUN_00418920((undefined **)"vtable constructor did not declare schema: %s");
        *param_5 = uVar5;
        FUN_004103d0();
        local_8 = 1;
      }
    }
    goto LAB_0041d185;
  }
  if (local_14 == 0) {
    uVar5 = FUN_00418920((undefined **)"vtable constructor failed: %s");
    *param_5 = uVar5;
    FUN_00408130(param_1);
  }
  else {
    uVar5 = FUN_00418920((undefined **)&DAT_004b23ac);
    *param_5 = uVar5;
    FUN_00408130(param_1);
    FUN_00408130(param_1);
  }
LAB_0041d185:
  FUN_00408130(param_1);
  *(undefined4 *)(param_1 + 0x124) = 0;
  return local_8;
}


/* END FUNCTION 0x0041cf00 */
