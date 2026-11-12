/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b0360
 * Name: FUN_100b0360
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b0360(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  float local_8;
  
  puVar5 = &DAT_1015529c;
  do {
    piVar2 = *(int **)(param_1 + 0x2a4);
    iVar4 = puVar5[-1];
    if (((piVar2 != (int *)0x0) && (*piVar2 != 0x863c40)) && (iVar3 = piVar2[6], iVar3 != 0)) {
      local_8 = 0.0;
      local_c = 0x734a40;
      local_10 = iVar3;
      local_8 = (float)(*(code *)0x734a40)(iVar3);
      puVar1 = (undefined4 *)
               (*(int *)(*(int *)((int)local_8 + 0x20) + 0x24) * iVar4 + 0x4c +
               *(int *)((int)local_8 + 0x20));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *puVar5;
        puVar1[1] = puVar5[1];
        puVar1[2] = puVar5[2];
        puVar1[3] = puVar5[3];
      }
    }
    puVar5 = puVar5 + 5;
  } while ((int)puVar5 < 0x10155350);
  piVar2 = *(int **)(param_1 + 0x2a4);
  if (((piVar2 == (int *)0x0) || (*piVar2 == 0x863c40)) || (iVar4 = piVar2[6], iVar4 == 0)) {
LAB_100b0422:
    local_8 = 0.0;
  }
  else {
    local_c = 0;
    local_10 = 0x734a40;
    local_14 = iVar4;
    local_c = (*(code *)0x734a40)(iVar4);
    iVar4 = *(int *)(local_c + 0x20) + 0x4c;
    if (iVar4 == 0) goto LAB_100b0422;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0.0;
    local_8 = 0.0;
    FUN_100b53e0(iVar4,&local_20,&local_8);
    local_8 = 1.0 - local_18;
  }
  if (*(int *)(param_1 + 0x2a4) == 0) {
LAB_100b0489:
    if (*(int *)(param_1 + 0x2a4) != 0) {
      iVar4 = FUN_100b3d00((int)*(short *)(*(int *)(param_1 + 0x2a4) + 0x22));
      if (iVar4 == 0x16) goto LAB_100b05be;
    }
    if (*(int *)(param_1 + 0x2a4) != 0) {
      iVar4 = FUN_100b3d80((int)*(short *)(*(int *)(param_1 + 0x2a4) + 0x22));
      if (iVar4 == 0x7c) {
        iVar4 = FUN_100ae7b0(9);
        if (iVar4 != 0) {
          FUN_100b5320(iVar4,1,0x41200000,1);
          FUN_100b5320(iVar4,0,0x41c80000,1);
        }
        iVar4 = FUN_100ae7b0(0xf);
        if (iVar4 == 0) goto LAB_100b068c;
        FUN_100b5320(iVar4,1,0xc1200000,1);
        uVar6 = 0xc1c80000;
        goto LAB_100b0681;
      }
    }
    local_8 = local_8 + 0.25;
    iVar4 = FUN_100ae7b0(9);
    if (iVar4 != 0) {
      FUN_100b5320(iVar4,1,local_8 * -5.0,1);
      FUN_100b5320(iVar4,0,local_8 * 25.0,1);
    }
    iVar4 = FUN_100ae7b0(0xf);
    if (iVar4 != 0) {
      FUN_100b5320(iVar4,1,local_8 * 5.0,1);
      FUN_100b5320(iVar4,0,local_8 * -25.0,1);
    }
  }
  else {
    iVar4 = FUN_100b3d00((int)*(short *)(*(int *)(param_1 + 0x2a4) + 0x22));
    if (iVar4 != 5) goto LAB_100b0489;
LAB_100b05be:
    piVar2 = *(int **)(param_1 + 0x2a4);
    if (((piVar2 != (int *)0x0) && (*piVar2 != 0x863c40)) && (iVar4 = piVar2[6], iVar4 != 0)) {
      local_c = 0;
      local_14 = 0x734a40;
      local_10 = iVar4;
      local_c = (*(code *)0x734a40)(iVar4);
      iVar4 = *(int *)(*(int *)(local_c + 0x20) + 0x24) * 9 + 0x4c + *(int *)(local_c + 0x20);
      if (iVar4 != 0) {
        FUN_100b5320(iVar4,1,0xc0c80000,1);
        FUN_100b5320(iVar4,0,0x41480000,1);
      }
    }
    piVar2 = *(int **)(param_1 + 0x2a4);
    if (((piVar2 == (int *)0x0) || (*piVar2 == 0x863c40)) || (iVar4 = piVar2[6], iVar4 == 0))
    goto LAB_100b068c;
    local_c = 0;
    local_14 = 0x734a40;
    local_10 = iVar4;
    local_c = (*(code *)0x734a40)(iVar4);
    iVar4 = *(int *)(*(int *)(local_c + 0x20) + 0x24) * 0xf + 0x4c + *(int *)(local_c + 0x20);
    if (iVar4 == 0) goto LAB_100b068c;
    FUN_100b5320(iVar4,1,0x40c80000,1);
    uVar6 = 0xc1480000;
LAB_100b0681:
    FUN_100b5320(iVar4,0,uVar6,1);
  }
LAB_100b068c:
  local_14 = *(int *)(param_1 + 0x2a4);
  if (local_14 != 0) {
    (*(code *)0x532b20)();
  }
  return;
}


/* END FUNCTION 0x100b0360 */
