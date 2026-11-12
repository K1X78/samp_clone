/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003cef0
 * Name: FUN_1003cef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003cef0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_c0 [8];
  undefined4 local_a0 [8];
  undefined1 local_80 [32];
  int local_60 [8];
  undefined4 local_40 [8];
  undefined4 local_20 [8];
  
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[6] = 0;
  local_a0[0] = 1;
  local_a0[7] = 0;
  FUN_1003c860(param_1,local_c0);
  FUN_1003b8b0(param_1,local_c0,local_80,local_60);
  uVar1 = 0;
  while (local_60[uVar1] == 0) {
    uVar1 = uVar1 + 1;
    if (7 < uVar1) {
LAB_1003cf5e:
      puVar3 = local_a0;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_2 = *puVar3;
        puVar3 = puVar3 + 1;
        param_2 = param_2 + 1;
      }
      return;
    }
  }
  puVar3 = param_1;
  puVar4 = local_40;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_10039b40(local_40,local_80);
  FUN_1003b8b0(local_c0,local_60,local_80,local_c0);
  uVar1 = 0;
  do {
    if (local_c0[uVar1] != 0) {
      do {
        FUN_1003bbb0(local_80,local_40,local_a0,param_1,local_20);
        FUN_1003b8b0(local_60,local_c0,local_80,local_60);
        uVar1 = 0;
        while (local_60[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (7 < uVar1) goto LAB_1003d02e;
        }
        FUN_1003bbb0(local_80,local_20,local_40,param_1,local_a0);
        FUN_1003b8b0(local_c0,local_60,local_80,local_c0);
        uVar1 = 0;
        while (local_c0[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (7 < uVar1) goto LAB_1003cf5e;
        }
        FUN_1003bbb0(local_80,local_a0,local_20,param_1,local_40);
        FUN_1003b8b0(local_60,local_c0,local_80,local_60);
        uVar1 = 0;
        while (local_60[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (7 < uVar1) goto LAB_1003cfc4;
        }
        FUN_1003bbb0(local_80,local_40,local_a0,param_1,local_20);
        FUN_1003b8b0(local_c0,local_60,local_80,local_c0);
        uVar1 = 0;
        while (local_c0[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (7 < uVar1) {
LAB_1003d02e:
            puVar3 = local_20;
            for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
              *param_2 = *puVar3;
              puVar3 = puVar3 + 1;
              param_2 = param_2 + 1;
            }
            return;
          }
        }
        FUN_1003bbb0(local_80,local_20,local_40,param_1,local_a0);
        FUN_1003b8b0(local_60,local_c0,local_80,local_60);
        uVar1 = 0;
        while (local_60[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (7 < uVar1) goto LAB_1003cf5e;
        }
        FUN_1003bbb0(local_80,local_a0,local_20,param_1,local_40);
        FUN_1003b8b0(local_c0,local_60,local_80,local_c0);
        uVar1 = 0;
        while (local_c0[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (7 < uVar1) goto LAB_1003cfc4;
        }
      } while( true );
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
LAB_1003cfc4:
  puVar3 = local_40;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


/* END FUNCTION 0x1003cef0 */
