/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100481e0
 * Name: FUN_100481e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_100481e0(int param_1,int param_2,int *param_3,uint param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  char local_9;
  void *local_8;
  int local_4;
  
  iVar9 = param_2 + 0x11;
  local_4 = param_1;
  uVar2 = FUN_100458b0(iVar9,&local_9);
  if (local_9 == '\0') {
    local_8 = operator_new(0x14);
    if (local_8 == (void *)0x0) {
      local_8 = (void *)0x0;
    }
    else {
      FUN_100457d0();
    }
    uVar2 = FUN_10045940(iVar9,&local_8);
  }
  FUN_100459a0(uVar2);
  FUN_100457e0(param_2 + 0x13,&param_2);
  piVar3 = (int *)FUN_100459a0(uVar2);
  puVar1 = (uint *)*piVar3;
  *puVar1 = (uint)param_3;
  puVar1[1] = param_4;
  uVar10 = *(uint *)(param_1 + 0x30);
  uVar4 = (uint)param_3;
  if (uVar10 != 0) {
    FUN_100459a0(uVar2);
    piVar3 = (int *)FUN_10043cd0(0);
    uVar4 = *(uint *)(*piVar3 + 0x13);
    if (uVar4 == 0) {
      FUN_100459a0(uVar2);
      param_3 = (int *)FUN_10043cd0(0);
      FUN_100459a0(uVar2);
      uVar4 = FUN_10043ce0();
      if (uVar4 != *(uint *)(*param_3 + 0x17)) {
        FUN_100459a0(uVar2);
        uVar5 = FUN_10043ce0();
        uVar4 = uVar5 / uVar10;
        if (uVar5 % uVar10 == 0) {
          iVar9 = FUN_10044ec0();
          param_3 = (int *)iVar9;
          FUN_100459a0(uVar2);
          piVar3 = (int *)FUN_10043cd0(0);
          uVar10 = (*(int *)(*piVar3 + 0x2b) + 7U >> 3) + 0xd;
          pvVar6 = operator_new(uVar10);
          *(void **)(iVar9 + 0x2f) = pvVar6;
          *(uint *)(iVar9 + 0x2b) = uVar10 * 8;
          **(undefined1 **)(iVar9 + 0x2f) = 0x5c;
          FUN_100459a0(uVar2);
          uVar7 = FUN_10043ce0();
          *(undefined4 *)(*(int *)(iVar9 + 0x2f) + 1) = uVar7;
          *(undefined4 *)(*(int *)(iVar9 + 0x2f) + 5) = *(undefined4 *)(param_2 + 0x17);
          FUN_100459a0(uVar2);
          piVar3 = (int *)FUN_10043cd0(0);
          *(uint *)(*(int *)(iVar9 + 0x2f) + 9) = *(int *)(*piVar3 + 0x2b) + 7U >> 3;
          FUN_100459a0(uVar2);
          piVar3 = (int *)FUN_10043cd0(0);
          FUN_100459a0(uVar2);
          piVar8 = (int *)FUN_10043cd0(0);
          uVar10 = *(int *)(*piVar3 + 0x2b) + 7;
          puVar11 = *(undefined4 **)(*piVar8 + 0x2f);
          puVar12 = (undefined4 *)(*(int *)(iVar9 + 0x2f) + 0xd);
          for (uVar4 = uVar10 >> 5; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar10 = uVar10 >> 3 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          uVar4 = FUN_1002e400(&param_3);
        }
      }
    }
  }
  return uVar4;
}


/* END FUNCTION 0x100481e0 */
