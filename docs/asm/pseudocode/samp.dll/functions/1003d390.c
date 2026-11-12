/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003d390
 * Name: FUN_1003d390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003d390(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [32];
  int local_80 [8];
  int local_60 [8];
  undefined4 local_40 [8];
  undefined4 local_20 [8];
  
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_c0 = 1;
  local_a4 = 0;
  FUN_1003b8b0(param_2,param_1,local_a0,local_60);
  puVar3 = param_2;
  puVar4 = local_40;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_10039b40(local_40,local_a0);
  piVar5 = local_80;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *param_1;
    param_1 = param_1 + 1;
    piVar5 = piVar5 + 1;
  }
  do {
    FUN_1003b8b0(local_80,local_60,local_a0,local_80);
    uVar1 = 0;
    while (local_80[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
        puVar3 = local_40;
        goto LAB_1003d4f2;
      }
    }
    FUN_1003bbb0(local_40,local_a0,&local_c0,param_2,local_20);
    FUN_1003b8b0(local_60,local_80,local_a0,local_60);
    uVar1 = 0;
    while (local_60[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
        puVar3 = local_20;
        goto LAB_1003d4f2;
      }
    }
    FUN_1003bbb0(local_20,local_a0,local_40,param_2,&local_c0);
    FUN_1003b8b0(local_80,local_60,local_a0,local_80);
    uVar1 = 0;
    while (local_80[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) goto LAB_1003d4ee;
    }
    FUN_1003bbb0(&local_c0,local_a0,local_20,param_2,local_40);
    FUN_1003b8b0(local_60,local_80,local_a0,local_60);
    uVar1 = 0;
    while (local_60[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
        puVar3 = local_40;
        goto LAB_1003d4f2;
      }
    }
    FUN_1003bbb0(local_40,local_a0,&local_c0,param_2,local_20);
    FUN_1003b8b0(local_80,local_60,local_a0,local_80);
    uVar1 = 0;
    while (local_80[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
        puVar3 = local_20;
        goto LAB_1003d4f2;
      }
    }
    FUN_1003bbb0(local_20,local_a0,local_40,param_2,&local_c0);
    FUN_1003b8b0(local_60,local_80,local_a0,local_60);
    uVar1 = 0;
    while (local_60[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
LAB_1003d4ee:
        puVar3 = &local_c0;
LAB_1003d4f2:
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *param_3 = *puVar3;
          puVar3 = puVar3 + 1;
          param_3 = param_3 + 1;
        }
        return;
      }
    }
    FUN_1003bbb0(&local_c0,local_a0,local_20,param_2,local_40);
  } while( true );
}


/* END FUNCTION 0x1003d390 */
