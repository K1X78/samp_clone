/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00454580
 * Name: FUN_00454580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00454580(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_c0 [8];
  uint local_a0 [16];
  uint local_60 [8];
  uint local_40 [8];
  uint local_20 [8];
  
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[6] = 0;
  local_a0[0] = 1;
  local_a0[7] = 0;
  FUN_00453ef0(param_1,local_c0);
  FUN_00452f60(param_1,local_c0,local_a0 + 8,local_60);
  uVar1 = 0;
  while (local_60[uVar1] == 0) {
    uVar1 = uVar1 + 1;
    if (7 < uVar1) {
LAB_004545ee:
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
  FUN_00451340(local_40,local_a0 + 8);
  FUN_00452f60(local_c0,local_60,local_a0 + 8,local_c0);
  uVar1 = 0;
  do {
    if (local_c0[uVar1] != 0) {
      do {
        FUN_00453260(local_a0 + 8,(int)local_40,local_a0,param_1,local_20);
        FUN_00452f60(local_60,local_c0,local_a0 + 8,local_60);
        uVar1 = 0;
        while (local_60[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (7 < uVar1) goto LAB_004546be;
        }
        FUN_00453260(local_a0 + 8,(int)local_20,local_40,param_1,local_a0);
        FUN_00452f60(local_c0,local_60,local_a0 + 8,local_c0);
        uVar1 = 0;
        while (local_c0[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (7 < uVar1) goto LAB_004545ee;
        }
        FUN_00453260(local_a0 + 8,(int)local_a0,local_20,param_1,local_40);
        FUN_00452f60(local_60,local_c0,local_a0 + 8,local_60);
        uVar1 = 0;
        while (local_60[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (7 < uVar1) goto LAB_00454654;
        }
        FUN_00453260(local_a0 + 8,(int)local_40,local_a0,param_1,local_20);
        FUN_00452f60(local_c0,local_60,local_a0 + 8,local_c0);
        uVar1 = 0;
        while (local_c0[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (7 < uVar1) {
LAB_004546be:
            puVar3 = local_20;
            for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
              *param_2 = *puVar3;
              puVar3 = puVar3 + 1;
              param_2 = param_2 + 1;
            }
            return;
          }
        }
        FUN_00453260(local_a0 + 8,(int)local_20,local_40,param_1,local_a0);
        FUN_00452f60(local_60,local_c0,local_a0 + 8,local_60);
        uVar1 = 0;
        while (local_60[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (7 < uVar1) goto LAB_004545ee;
        }
        FUN_00453260(local_a0 + 8,(int)local_a0,local_20,param_1,local_40);
        FUN_00452f60(local_c0,local_60,local_a0 + 8,local_c0);
        uVar1 = 0;
        while (local_c0[uVar1] == 0) {
          uVar1 = uVar1 + 1;
          if (7 < uVar1) goto LAB_00454654;
        }
      } while( true );
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
LAB_00454654:
  puVar3 = local_40;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


/* END FUNCTION 0x00454580 */
