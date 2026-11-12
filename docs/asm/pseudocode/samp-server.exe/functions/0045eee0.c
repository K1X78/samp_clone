/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045eee0
 * Name: FUN_0045eee0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined2 * __thiscall FUN_0045eee0(void *this,void *param_1,uint param_2,undefined4 param_3)

{
  void *this_00;
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 local_d;
  undefined2 *local_c;
  int *local_8;
  void *local_4;
  
  this_00 = (void *)((int)this + 0xa8);
  local_4 = this;
  uVar1 = FUN_0045c620(this_00,(ushort *)&param_1,&local_d);
  piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
  piVar2 = (int *)FUN_0045b2f0((void *)(*piVar2 + 8),0);
  piVar3 = (int *)FUN_0045b2f0(this_00,uVar1);
  iVar4 = FUN_0045b300(*piVar3 + 8);
  if (iVar4 != *(int *)(*piVar2 + 0x1c)) {
    return (undefined2 *)0x0;
  }
  piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
  uVar10 = 0;
  puVar5 = (undefined4 *)FUN_0045b2f0((void *)(*piVar2 + 8),0);
  puVar6 = FUN_0045c3d0(this,(undefined2 *)*puVar5,0,0,param_2,param_3);
  *(undefined4 *)(puVar6 + 0x18) = 0;
  param_1 = (void *)0x0;
  local_c = puVar6;
  piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
  iVar4 = FUN_0045b300(*piVar2 + 8);
  if (iVar4 != 0) {
    do {
      piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
      piVar2 = (int *)FUN_0045b2f0((void *)(*piVar2 + 8),uVar10);
      *(int *)(puVar6 + 0x18) = *(int *)(puVar6 + 0x18) + *(int *)(*piVar2 + 0x30);
      piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
      piVar2 = (int *)FUN_0045b2f0((void *)(*piVar2 + 8),uVar10);
      param_1 = (void *)((int)param_1 + (*(int *)(*piVar2 + 0x30) + 7U >> 3));
      uVar10 = uVar10 + 1;
      piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
      uVar7 = FUN_0045b300(*piVar2 + 8);
    } while (uVar10 < uVar7);
  }
  pvVar8 = operator_new((uint)param_1);
  *(void **)(puVar6 + 0x1a) = pvVar8;
  param_1 = (void *)0x0;
  param_2 = 0;
  piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
  iVar4 = FUN_0045b300(*piVar2 + 8);
  uVar10 = 0;
  if (iVar4 != 0) {
    do {
      piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
      local_8 = (int *)FUN_0045b2f0((void *)(*piVar2 + 8),uVar10);
      piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
      piVar2 = (int *)FUN_0045b2f0((void *)(*piVar2 + 8),uVar10);
      uVar10 = *(int *)(*local_8 + 0x30) + 7;
      puVar5 = *(undefined4 **)(*piVar2 + 0x34);
      puVar11 = (undefined4 *)(*(int *)(puVar6 + 0x1a) + (int)param_1);
      for (uVar7 = uVar10 >> 5; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar10 = uVar10 >> 3 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
      uVar7 = param_2;
      piVar2 = (int *)FUN_0045b2f0((void *)(*piVar2 + 8),param_2);
      param_1 = (void *)((int)param_1 + (*(int *)(*piVar2 + 0x30) + 7U >> 3));
      param_2 = uVar7 + 1;
      piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
      uVar9 = FUN_0045b300(*piVar2 + 8);
      uVar10 = param_2;
      puVar6 = local_c;
    } while (uVar7 + 1 < uVar9);
  }
  uVar10 = 0;
  piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
  iVar4 = FUN_0045b300(*piVar2 + 8);
  if (iVar4 != 0) {
    param_1 = (void *)((int)local_4 + 0x728);
    do {
      piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
      piVar2 = (int *)FUN_0045b2f0((void *)(*piVar2 + 8),uVar10);
      _free(*(void **)(*piVar2 + 0x34));
      piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
      piVar2 = (int *)FUN_0045b2f0((void *)(*piVar2 + 8),uVar10);
      FUN_0044eb60(param_1,*piVar2);
      uVar10 = uVar10 + 1;
      piVar2 = (int *)FUN_0045b2f0(this_00,uVar1);
      uVar7 = FUN_0045b300(*piVar2 + 8);
    } while (uVar10 < uVar7);
  }
  puVar5 = (undefined4 *)FUN_0045b2f0(this_00,uVar1);
  pvVar8 = (void *)*puVar5;
  if (pvVar8 != (void *)0x0) {
    FUN_0045dee0((int)pvVar8);
    _free(pvVar8);
  }
  thunk_FUN_0045c920(this_00,uVar1);
  return puVar6;
}


/* END FUNCTION 0x0045eee0 */
