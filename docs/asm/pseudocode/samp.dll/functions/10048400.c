/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10048400
 * Name: FUN_10048400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_10048400(uint param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 local_d;
  int local_c;
  int *local_8;
  int local_4;
  
  uVar1 = FUN_100458b0(&param_1,&local_d);
  FUN_100459a0(uVar1);
  piVar2 = (int *)FUN_10043cd0(0);
  FUN_100459a0(uVar1);
  iVar3 = FUN_10043ce0();
  if (iVar3 != *(int *)(*piVar2 + 0x17)) {
    return 0;
  }
  FUN_100459a0(uVar1);
  uVar9 = 0;
  puVar4 = (undefined4 *)FUN_10043cd0(0);
  iVar3 = FUN_10045570(*puVar4,0,0,param_2,param_3);
  *(undefined4 *)(iVar3 + 0x2b) = 0;
  param_1 = 0;
  local_c = iVar3;
  FUN_100459a0(uVar1);
  iVar5 = FUN_10043ce0();
  if (iVar5 != 0) {
    do {
      FUN_100459a0(uVar1);
      piVar2 = (int *)FUN_10043cd0(uVar9);
      *(int *)(iVar3 + 0x2b) = *(int *)(iVar3 + 0x2b) + *(int *)(*piVar2 + 0x2b);
      FUN_100459a0(uVar1);
      piVar2 = (int *)FUN_10043cd0(uVar9);
      param_1 = param_1 + (*(int *)(*piVar2 + 0x2b) + 7U >> 3);
      uVar9 = uVar9 + 1;
      FUN_100459a0(uVar1);
      uVar6 = FUN_10043ce0();
    } while (uVar9 < uVar6);
  }
  pvVar7 = operator_new(param_1);
  *(void **)(iVar3 + 0x2f) = pvVar7;
  param_1 = 0;
  param_2 = 0;
  FUN_100459a0(uVar1);
  iVar5 = FUN_10043ce0();
  uVar9 = 0;
  if (iVar5 != 0) {
    do {
      FUN_100459a0(uVar1);
      local_8 = (int *)FUN_10043cd0(uVar9);
      FUN_100459a0(uVar1);
      piVar2 = (int *)FUN_10043cd0(uVar9);
      uVar9 = *(int *)(*local_8 + 0x2b) + 7;
      puVar4 = *(undefined4 **)(*piVar2 + 0x2f);
      puVar10 = (undefined4 *)(*(int *)(iVar3 + 0x2f) + param_1);
      for (uVar6 = uVar9 >> 5; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar9 = uVar9 >> 3 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      FUN_100459a0(uVar1);
      uVar6 = param_2;
      piVar2 = (int *)FUN_10043cd0(param_2);
      param_1 = param_1 + (*(int *)(*piVar2 + 0x2b) + 7U >> 3);
      param_2 = uVar6 + 1;
      FUN_100459a0(uVar1);
      uVar8 = FUN_10043ce0();
      uVar9 = param_2;
      iVar3 = local_c;
    } while (uVar6 + 1 < uVar8);
  }
  uVar9 = 0;
  FUN_100459a0(uVar1);
  iVar5 = FUN_10043ce0();
  if (iVar5 != 0) {
    param_1 = local_4 + 0x6f2;
    do {
      FUN_100459a0(uVar1);
      piVar2 = (int *)FUN_10043cd0(uVar9);
      _free(*(void **)(*piVar2 + 0x2f));
      FUN_100459a0(uVar1);
      puVar4 = (undefined4 *)FUN_10043cd0(uVar9);
      FUN_1002e630(*puVar4);
      uVar9 = uVar9 + 1;
      FUN_100459a0(uVar1);
      uVar6 = FUN_10043ce0();
    } while (uVar9 < uVar6);
  }
  puVar4 = (undefined4 *)FUN_100459a0(uVar1);
  pvVar7 = (void *)*puVar4;
  if (pvVar7 != (void *)0x0) {
    FUN_100473e0();
    _free(pvVar7);
  }
  thunk_FUN_10045bf0(uVar1);
  return iVar3;
}


/* END FUNCTION 0x10048400 */
