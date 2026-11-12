/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00454a20
 * Name: FUN_00454a20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00454a20(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_c0 [16];
  uint local_80 [8];
  uint local_60 [8];
  uint local_40 [8];
  uint local_20 [8];
  
  local_c0[1] = 0;
  local_c0[2] = 0;
  local_c0[3] = 0;
  local_c0[4] = 0;
  local_c0[5] = 0;
  local_c0[6] = 0;
  local_c0[0] = 1;
  local_c0[7] = 0;
  FUN_00452f60(param_2,param_1,local_c0 + 8,local_60);
  puVar3 = param_2;
  puVar4 = local_40;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00451340(local_40,local_c0 + 8);
  puVar3 = local_80;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  do {
    FUN_00452f60(local_80,local_60,local_c0 + 8,local_80);
    uVar1 = 0;
    while (local_80[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
        puVar3 = local_40;
        goto LAB_00454b82;
      }
    }
    FUN_00453260(local_40,(int)(local_c0 + 8),local_c0,param_2,local_20);
    FUN_00452f60(local_60,local_80,local_c0 + 8,local_60);
    uVar1 = 0;
    while (local_60[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
        puVar3 = local_20;
        goto LAB_00454b82;
      }
    }
    FUN_00453260(local_20,(int)(local_c0 + 8),local_40,param_2,local_c0);
    FUN_00452f60(local_80,local_60,local_c0 + 8,local_80);
    uVar1 = 0;
    while (local_80[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) goto LAB_00454b7e;
    }
    FUN_00453260(local_c0,(int)(local_c0 + 8),local_20,param_2,local_40);
    FUN_00452f60(local_60,local_80,local_c0 + 8,local_60);
    uVar1 = 0;
    while (local_60[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
        puVar3 = local_40;
        goto LAB_00454b82;
      }
    }
    FUN_00453260(local_40,(int)(local_c0 + 8),local_c0,param_2,local_20);
    FUN_00452f60(local_80,local_60,local_c0 + 8,local_80);
    uVar1 = 0;
    while (local_80[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
        puVar3 = local_20;
        goto LAB_00454b82;
      }
    }
    FUN_00453260(local_20,(int)(local_c0 + 8),local_40,param_2,local_c0);
    FUN_00452f60(local_60,local_80,local_c0 + 8,local_60);
    uVar1 = 0;
    while (local_60[uVar1] == 0) {
      uVar1 = uVar1 + 1;
      if (7 < uVar1) {
LAB_00454b7e:
        puVar3 = local_c0;
LAB_00454b82:
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *param_3 = *puVar3;
          puVar3 = puVar3 + 1;
          param_3 = param_3 + 1;
        }
        return;
      }
    }
    FUN_00453260(local_c0,(int)(local_c0 + 8),local_20,param_2,local_40);
  } while( true );
}


/* END FUNCTION 0x00454a20 */
