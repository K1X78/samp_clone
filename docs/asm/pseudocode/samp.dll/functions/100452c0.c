/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100452c0
 * Name: FUN_100452c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall FUN_100452c0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint local_1c;
  int local_18;
  undefined1 *local_8;
  
  *(undefined4 *)((int)param_2 + 0x17) = 1;
  iVar3 = FUN_10043980(param_2);
  local_1c = *(int *)((int)param_2 + 0x2b) + 7U >> 3;
  iVar8 = param_3 + -0x1c;
  cVar2 = FUN_10056450();
  if (cVar2 != '\0') {
    iVar8 = param_3 + -0x24;
  }
  uVar9 = iVar8 - (iVar3 + 7 >> 3);
  iVar3 = (int)(local_1c - 1) / (int)uVar9 + 1;
  *(int *)((int)param_2 + 0x17) = iVar3;
  *(int *)(param_1 + 899) = *(int *)(param_1 + 899) + iVar3;
  uVar4 = *(int *)((int)param_2 + 0x17) * 4;
  if (0xfffff < uVar4) {
    local_8 = operator_new(uVar4);
  }
  else {
    local_8 = &stack0xffffffd4;
  }
  iVar3 = 0;
  if (0 < *(int *)((int)param_2 + 0x17)) {
    do {
      uVar10 = *(uint *)(param_1 + 0x6f6);
      if (*(uint *)(param_1 + 0x6fa) < uVar10) {
        iVar8 = *(int *)(param_1 + 0x6fe) - uVar10;
      }
      else {
        iVar8 = -uVar10;
      }
      if (*(uint *)(param_1 + 0x6fa) + iVar8 == 0) {
        puVar5 = operator_new(0x37);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x6fe);
        iVar8 = uVar10 + 1;
        *(int *)(param_1 + 0x6f6) = iVar8;
        if (iVar8 == iVar1) {
          *(undefined4 *)(param_1 + 0x6f6) = 0;
          puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x6f2) + -4 + iVar1 * 4);
        }
        else if (iVar8 == 0) {
          puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x6f2) + -4 + iVar1 * 4);
        }
        else {
          puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x6f2) + -4 + iVar8 * 4);
        }
      }
      *(undefined4 **)(local_8 + iVar3 * 4) = puVar5;
      puVar12 = param_2;
      for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar5 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = *(undefined2 *)puVar12;
      *(undefined1 *)((int)puVar5 + 2) = *(undefined1 *)((int)puVar12 + 2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)param_2 + 0x17));
  }
  uVar10 = 0;
  local_18 = 0;
  do {
    uVar13 = local_1c;
    if ((int)uVar9 < (int)local_1c) {
      uVar13 = uVar9;
    }
    pvVar6 = operator_new(uVar13);
    *(void **)(*(int *)(local_8 + uVar10 * 4) + 0x2f) = pvVar6;
    puVar5 = (undefined4 *)(*(int *)((int)param_2 + 0x2f) + local_18);
    puVar12 = *(undefined4 **)(*(int *)(local_8 + uVar10 * 4) + 0x2f);
    for (uVar7 = uVar13 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar12 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar7 = uVar13 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    if (uVar13 == uVar9) {
      *(uint *)(*(int *)(local_8 + uVar10 * 4) + 0x2b) = uVar13 << 3;
    }
    else {
      *(uint *)(*(int *)(local_8 + uVar10 * 4) + 0x2b) =
           *(int *)((int)param_2 + 0x2b) - uVar9 * 8 * uVar10;
    }
    *(uint *)(*(int *)(local_8 + uVar10 * 4) + 0x13) = uVar10;
    *(undefined2 *)(*(int *)(local_8 + uVar10 * 4) + 0x11) = *(undefined2 *)(param_1 + 0x2d1);
    *(undefined4 *)(*(int *)(local_8 + uVar10 * 4) + 0x17) = *(undefined4 *)((int)param_2 + 0x17);
    if (uVar10 != 0) {
      **(undefined2 **)(local_8 + uVar10 * 4) = *(undefined2 *)(param_1 + 0xb0);
      *(short *)(param_1 + 0xb0) = *(short *)(param_1 + 0xb0) + 1;
    }
    local_18 = local_18 + uVar9;
    local_1c = local_1c - uVar9;
    uVar10 = uVar10 + 1;
  } while (uVar10 < *(uint *)((int)param_2 + 0x17));
  *(short *)(param_1 + 0x2d1) = *(short *)(param_1 + 0x2d1) + 1;
  iVar3 = 0;
  puVar11 = local_8;
  if (0 < *(int *)((int)param_2 + 0x17)) {
    do {
      FUN_1002e400(puVar11);
      iVar3 = iVar3 + 1;
      puVar11 = puVar11 + 4;
    } while (iVar3 < *(int *)((int)param_2 + 0x17));
  }
  _free(*(void **)((int)param_2 + 0x2f));
  FUN_1002e630(param_2);
  if (0xfffff < uVar4) {
    _free(local_8);
  }
  return;
}


/* END FUNCTION 0x100452c0 */
