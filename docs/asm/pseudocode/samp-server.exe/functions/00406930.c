/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00406930
 * Name: FUN_00406930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00406930(int *param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint *extraout_ECX_03;
  uint *puVar7;
  int extraout_EDX;
  int iVar8;
  uint *local_c;
  uint *local_8;
  int local_4;
  
  uVar1 = param_2;
  FUN_00403100(param_1,*(int *)(param_2 + 4),(int *)&local_c);
  FUN_00403100(param_1,*(int *)(uVar1 + 8),(int *)&local_8);
  FUN_004031d0(local_c,&local_4);
  FUN_004031d0(local_8,(int *)&param_2);
  iVar8 = *(int *)(uVar1 + 0xc);
  if (iVar8 <= local_4) {
    if (*local_c < 0x1000000) {
      iVar3 = *(int *)(uVar1 + 4) + 3 + (param_2 + local_4) * 4;
    }
    else {
      iVar3 = *(int *)(uVar1 + 4) + -1 + (param_2 + 4 + local_4 & 0xfffffffc);
    }
    iVar3 = FUN_004061c0(iVar3);
    if (iVar3 == 0) {
      if (*local_c == 0) {
        if (0xffffff < *local_8) {
          FUN_00405f60(local_c,0,param_2);
          return 1;
        }
        FUN_00406100(extraout_ECX,local_c);
        return 1;
      }
      if (*local_c < 0x1000000) {
        puVar7 = extraout_ECX;
        for (local_4 = param_2 + local_4; iVar8 < local_4; local_4 = local_4 + -1) {
          puVar7 = (uint *)(local_4 - param_2);
          local_c[local_4] = local_c[(int)puVar7];
        }
        iVar3 = 0;
        if (0 < (int)param_2) {
          iVar8 = iVar8 * 4;
          do {
            uVar4 = FUN_00406190(puVar7,local_8,0);
            *(undefined4 *)(iVar8 + (int)local_c) = uVar4;
            iVar3 = iVar3 + 1;
            iVar8 = iVar8 + 4;
            puVar7 = local_c;
          } while (iVar3 < (int)param_2);
        }
      }
      else {
        puVar7 = extraout_ECX;
        for (iVar3 = param_2 + local_4; iVar8 < iVar3; iVar3 = iVar3 + -1) {
          puVar5 = (undefined1 *)FUN_00406170(puVar7,(int)local_c);
          puVar6 = (undefined1 *)FUN_00406170(extraout_ECX_00,extraout_EDX);
          puVar7 = (uint *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),*puVar5);
          *puVar6 = *puVar5;
        }
        iVar8 = 0;
        if (0 < (int)param_2) {
          do {
            uVar2 = FUN_00406190(puVar7,local_8,0);
            puVar5 = (undefined1 *)FUN_00406170(extraout_ECX_02,(int)local_c);
            *puVar5 = uVar2;
            iVar8 = iVar8 + 1;
            puVar7 = extraout_ECX_03;
          } while (iVar8 < (int)param_2);
          return 1;
        }
      }
      return 1;
    }
  }
  uVar4 = FUN_004030f0((int)param_1,10);
  return uVar4;
}


/* END FUNCTION 0x00406930 */
