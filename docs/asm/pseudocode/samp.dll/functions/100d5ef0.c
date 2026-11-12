/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d5ef0
 * Name: FUN_100d5ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d5ef0(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int local_2c;
  int *local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18 [6];
  
  local_18[1] = 0xffffffff;
  local_18[2] = 0xffffffff;
  local_18[3] = 0xffffffff;
  local_18[4] = 0xffffffff;
  local_18[5] = 0xffffffff;
  uVar2 = FUN_100d5970();
  local_2c = 0;
  local_20 = uVar2;
  do {
    uVar8 = 1 << ((byte)local_2c + 0x10 & 0x1f);
    uVar7 = 1 << ((byte)local_2c & 0x1f);
    local_2c = local_2c;
    if ((uVar2 & (uVar7 | uVar8)) == 0) break;
    iVar6 = local_18[local_2c + 1];
    local_1c = iVar6;
    if (iVar6 == -1) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_100e43c0(param_1 + 0x60,&local_1c,4);
      uVar2 = local_20;
    }
    local_28 = (int *)(uint)((uVar2 & uVar7) != 0);
    if ((uVar2 & uVar8) != 0) {
      local_28 = (int *)((uint)local_28 | 2);
    }
    if (piVar3 == (int *)0x0) {
      local_24 = iVar6;
      local_18[0] = iVar6;
      if ((iVar6 == -1) ||
         (piVar3 = (int *)FUN_100e43c0(param_1 + 0x60,local_18,4), piVar3 == (int *)0x0)) {
        piVar3 = (int *)(*(code *)PTR__calloc_101554c8)(1,0x10);
        if (piVar3 == (int *)0x0) {
          return;
        }
        *piVar3 = param_2;
        piVar3[2] = local_24;
        iVar4 = FUN_100e4280(param_1 + 0x60,&local_24,4,piVar3);
        if (iVar4 == 0) {
          (*(code *)PTR__free_101554bc)(piVar3);
          return;
        }
      }
      if (piVar3 == (int *)0x0) {
        return;
      }
LAB_100d6021:
      if (*(code **)(param_1 + 0x34) != (code *)0x0) {
        (**(code **)(param_1 + 0x34))
                  (param_2,iVar6,local_28,*(undefined4 *)(param_1 + 0x38),piVar3[3]);
      }
      piVar3[1] = (int)local_28;
      uVar2 = local_20;
    }
    else if ((int *)piVar3[1] != local_28) goto LAB_100d6021;
    local_2c = local_2c + 1;
  } while (local_2c < 5);
  local_20 = local_2c;
  local_2c = 0;
  if (0 < *(int *)(param_2 + 0x58)) {
    local_28 = (int *)(param_2 + 0x44);
    do {
      iVar6 = *local_28;
      iVar4 = 0;
      if (0 < (int)local_20) {
        do {
          if (iVar6 == local_18[iVar4 + 1]) {
            iVar6 = -1;
            break;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)local_20);
      }
      if ((iVar6 != -1) &&
         (local_18[0] = iVar6, piVar3 = (int *)FUN_100e43c0(param_1 + 0x60,local_18,4),
         piVar3 != (int *)0x0)) {
        iVar4 = *(int *)(param_2 + 8);
        bVar1 = true;
        if (iVar4 == 0) {
LAB_100d6169:
          if (*(code **)(param_1 + 0x34) != (code *)0x0) {
            (**(code **)(param_1 + 0x34))(param_2,iVar6,4,*(undefined4 *)(param_1 + 0x38),piVar3[3])
            ;
          }
          local_18[0] = iVar6;
          FUN_100e4340(param_1 + 0x60,local_18,4);
        }
        else {
          if ((1 < *(uint *)(iVar4 + 0x3b4)) && (bVar1 = false, *piVar3 == param_2)) {
            iVar5 = FUN_100e8f10(param_2,iVar4);
            if (iVar5 == 0) {
              *piVar3 = **(int **)(iVar4 + 0x3a8);
            }
            else {
              *piVar3 = *(int *)(*(int **)(iVar4 + 0x3a8))[2];
            }
          }
          if (*(uint *)(iVar4 + 0x3a4) < 2) {
            if (bVar1) goto LAB_100d6169;
          }
          else if (*piVar3 == param_2) {
            iVar6 = FUN_100e8f40(param_2,iVar4);
            if (iVar6 == 0) {
              *piVar3 = **(int **)(iVar4 + 0x398);
            }
            else {
              *piVar3 = *(int *)(*(int **)(iVar4 + 0x398))[2];
            }
          }
        }
      }
      local_28 = local_28 + 1;
      local_2c = local_2c + 1;
    } while (local_2c < *(int *)(param_2 + 0x58));
  }
  piVar3 = local_18;
  piVar9 = (int *)(param_2 + 0x44);
  for (iVar6 = local_20; piVar3 = piVar3 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar9 = *piVar3;
    piVar9 = piVar9 + 1;
  }
  *(uint *)(param_2 + 0x58) = local_20;
  return;
}


/* END FUNCTION 0x100d5ef0 */
