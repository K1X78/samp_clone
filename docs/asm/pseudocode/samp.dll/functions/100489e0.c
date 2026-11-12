/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100489e0
 * Name: FUN_100489e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100489e0(int *param_1)

{
  void *_Memory;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 0;
  iVar1 = FUN_100459c0();
  if (iVar1 != 0) {
    do {
      uVar8 = 0;
      FUN_100459a0(uVar7);
      iVar1 = FUN_10043ce0();
      if (iVar1 != 0) {
        do {
          FUN_100459a0(uVar7);
          piVar2 = (int *)FUN_10043cd0(uVar8);
          _free(*(void **)(*piVar2 + 0x2f));
          FUN_100459a0(uVar7);
          puVar3 = (undefined4 *)FUN_10043cd0(uVar8);
          FUN_1002e630(*puVar3);
          uVar8 = uVar8 + 1;
          FUN_100459a0(uVar7);
          uVar4 = FUN_10043ce0();
        } while (uVar8 < uVar4);
      }
      puVar3 = (undefined4 *)FUN_100459a0(uVar7);
      _Memory = (void *)*puVar3;
      if (_Memory != (void *)0x0) {
        FUN_100473e0();
        _free(_Memory);
      }
      uVar7 = uVar7 + 1;
      uVar8 = FUN_100459c0();
    } while (uVar7 < uVar8);
  }
  FUN_100459b0();
  while( true ) {
    uVar7 = param_1[4];
    if ((uint)param_1[5] < uVar7) {
      iVar1 = param_1[6] - uVar7;
    }
    else {
      iVar1 = -uVar7;
    }
    uVar7 = 0;
    if (param_1[5] + iVar1 == 0) break;
    iVar1 = param_1[4];
    param_1[4] = iVar1 + 1;
    if (iVar1 + 1 == param_1[6]) {
      param_1[4] = 0;
    }
    if (param_1[4] == 0) {
      iVar1 = *(int *)(param_1[3] + -4 + param_1[6] * 4);
    }
    else {
      iVar1 = *(int *)(param_1[3] + -4 + param_1[4] * 4);
    }
    _free(*(void **)(iVar1 + 0x2f));
    FUN_1002e630(iVar1);
  }
  FUN_1002e510(0x20);
  if (param_1[1] != 0) {
    do {
      piVar2 = *(int **)(*param_1 + uVar7 * 4);
      if (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        while (iVar1 != 0) {
          iVar1 = FUN_100459e0();
          _free(*(void **)(iVar1 + 0x2f));
          FUN_1002e630(iVar1);
          iVar1 = *piVar2;
        }
        FUN_100459f0();
        _free(piVar2);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)param_1[1]);
  }
  FUN_10043de0(0);
  FUN_10047aa0();
  while( true ) {
    uVar7 = param_1[0x16];
    if ((uint)param_1[0x17] < uVar7) {
      iVar1 = param_1[0x18] - uVar7;
    }
    else {
      iVar1 = -uVar7;
    }
    if (param_1[0x17] + iVar1 == 0) break;
    iVar1 = param_1[0x16];
    param_1[0x16] = iVar1 + 1;
    if (iVar1 + 1 == param_1[0x18]) {
      param_1[0x16] = 0;
    }
    if (param_1[0x16] == 0) {
      iVar1 = *(int *)(param_1[0x15] + -4 + param_1[0x18] * 4);
    }
    else {
      iVar1 = *(int *)(param_1[0x15] + -4 + param_1[0x16] * 4);
    }
    if (iVar1 != 0) {
      _free(*(void **)(iVar1 + 0x2f));
      FUN_1002e630(iVar1);
    }
  }
  FUN_1002e510(0x200);
  piVar2 = param_1 + 0x19;
  iVar1 = 4;
  do {
    uVar7 = 0;
    while( true ) {
      uVar8 = piVar2[1];
      if ((uint)piVar2[2] < uVar8) {
        iVar5 = piVar2[3] - uVar8;
      }
      else {
        iVar5 = -uVar8;
      }
      if ((uint)(piVar2[2] + iVar5) <= uVar7) break;
      uVar8 = piVar2[1] + uVar7;
      if (uVar8 < (uint)piVar2[3]) {
        piVar6 = (int *)(*piVar2 + uVar8 * 4);
      }
      else {
        piVar6 = (int *)(*piVar2 + ((piVar2[1] - piVar2[3]) + uVar7) * 4);
      }
      _free(*(void **)(*piVar6 + 0x2f));
      uVar8 = piVar2[1] + uVar7;
      if (uVar8 < (uint)piVar2[3]) {
        FUN_1002e630(*(undefined4 *)(*piVar2 + uVar8 * 4));
        uVar7 = uVar7 + 1;
      }
      else {
        FUN_1002e630(*(undefined4 *)(*piVar2 + ((piVar2[1] - piVar2[3]) + uVar7) * 4));
        uVar7 = uVar7 + 1;
      }
    }
    FUN_1002e510(0x20);
    piVar2 = piVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar7 = 0;
  if (*(int *)((int)param_1 + 0x6da) != 0) {
    do {
      _free(*(void **)(*(int *)((int)param_1 + 0x6d6) + uVar7 * 4));
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)((int)param_1 + 0x6da));
  }
  FUN_100441d0(0);
  FUN_1002e5c0();
  thunk_FUN_10046d30();
  return;
}


/* END FUNCTION 0x100489e0 */
