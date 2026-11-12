/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045c120
 * Name: FUN_0045c120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall FUN_0045c120(void *this,undefined4 *param_1,int param_2)

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
  undefined4 *puVar11;
  uint uVar12;
  uint local_1c;
  int local_18;
  undefined4 *local_8;
  
  param_1[7] = 1;
  iVar3 = FUN_0045b1f0(this,(int)param_1);
  local_1c = param_1[0xc] + 7 >> 3;
  iVar8 = param_2 + -0x1c;
  cVar2 = FUN_00463810((int)this + 0x484);
  if (cVar2 != '\0') {
    iVar8 = param_2 + -0x24;
  }
  uVar9 = iVar8 - (iVar3 + 7 >> 3);
  iVar3 = (int)(local_1c - 1) / (int)uVar9 + 1;
  param_1[7] = iVar3;
  *(int *)((int)this + 0x394) = *(int *)((int)this + 0x394) + iVar3;
  uVar4 = param_1[7] * 4;
  if (0xfffff < uVar4) {
    local_8 = operator_new(uVar4);
  }
  else {
    local_8 = (undefined4 *)&stack0xffffffd4;
  }
  iVar3 = 0;
  if (0 < (int)param_1[7]) {
    do {
      uVar10 = *(uint *)((int)this + 0x72c);
      if (*(uint *)((int)this + 0x730) < uVar10) {
        iVar8 = *(int *)((int)this + 0x734) - uVar10;
      }
      else {
        iVar8 = -uVar10;
      }
      if (*(uint *)((int)this + 0x730) + iVar8 == 0) {
        puVar5 = operator_new(0x40);
      }
      else {
        iVar1 = *(int *)((int)this + 0x734);
        iVar8 = uVar10 + 1;
        *(int *)((int)this + 0x72c) = iVar8;
        if (iVar8 == iVar1) {
          *(undefined4 *)((int)this + 0x72c) = 0;
          puVar5 = *(undefined4 **)(*(int *)((int)this + 0x728) + -4 + iVar1 * 4);
        }
        else if (iVar8 == 0) {
          puVar5 = *(undefined4 **)(*(int *)((int)this + 0x728) + -4 + iVar1 * 4);
        }
        else {
          puVar5 = *(undefined4 **)(*(int *)((int)this + 0x728) + -4 + iVar8 * 4);
        }
      }
      local_8[iVar3] = puVar5;
      puVar11 = param_1;
      for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar5 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar5 = puVar5 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[7]);
  }
  uVar10 = 0;
  local_18 = 0;
  do {
    uVar12 = local_1c;
    if ((int)uVar9 < (int)local_1c) {
      uVar12 = uVar9;
    }
    pvVar6 = operator_new(uVar12);
    *(void **)(local_8[uVar10] + 0x34) = pvVar6;
    puVar5 = (undefined4 *)(param_1[0xd] + local_18);
    puVar11 = *(undefined4 **)(local_8[uVar10] + 0x34);
    for (uVar7 = uVar12 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar7 = uVar12 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    if (uVar12 == uVar9) {
      *(uint *)(local_8[uVar10] + 0x30) = uVar12 << 3;
    }
    else {
      *(uint *)(local_8[uVar10] + 0x30) = param_1[0xc] - uVar9 * 8 * uVar10;
    }
    *(uint *)(local_8[uVar10] + 0x18) = uVar10;
    *(undefined2 *)(local_8[uVar10] + 0x14) = *(undefined2 *)((int)this + 0x2dc);
    *(undefined4 *)(local_8[uVar10] + 0x1c) = param_1[7];
    if (uVar10 != 0) {
      *(undefined2 *)local_8[uVar10] = *(undefined2 *)((int)this + 0xb4);
      *(short *)((int)this + 0xb4) = *(short *)((int)this + 0xb4) + 1;
    }
    local_18 = local_18 + uVar9;
    local_1c = local_1c - uVar9;
    uVar10 = uVar10 + 1;
  } while (uVar10 < (uint)param_1[7]);
  *(short *)((int)this + 0x2dc) = *(short *)((int)this + 0x2dc) + 1;
  iVar3 = 0;
  puVar5 = local_8;
  if (0 < (int)param_1[7]) {
    do {
      FUN_0044e2a0((void *)(param_1[2] * 0x10 + 0x68 + (int)this),puVar5);
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar3 < (int)param_1[7]);
  }
  _free((void *)param_1[0xd]);
  FUN_0044eb60((void *)((int)this + 0x728),(int)param_1);
  if (0xfffff < uVar4) {
    _free(local_8);
  }
  return;
}


/* END FUNCTION 0x0045c120 */
