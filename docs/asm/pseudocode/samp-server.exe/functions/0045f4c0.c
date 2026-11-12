/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045f4c0
 * Name: FUN_0045f4c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0045f4c0(int *param_1)

{
  void *_Memory;
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  
  piVar8 = param_1 + 0x2a;
  uVar6 = 0;
  iVar1 = FUN_0045b300((int)piVar8);
  if (iVar1 != 0) {
    do {
      uVar7 = 0;
      piVar2 = (int *)FUN_0045b2f0(piVar8,uVar6);
      iVar1 = FUN_0045b300(*piVar2 + 8);
      if (iVar1 != 0) {
        do {
          piVar2 = (int *)FUN_0045b2f0(piVar8,uVar6);
          piVar2 = (int *)FUN_0045b2f0((void *)(*piVar2 + 8),uVar7);
          _free(*(void **)(*piVar2 + 0x34));
          piVar2 = (int *)FUN_0045b2f0(piVar8,uVar6);
          piVar2 = (int *)FUN_0045b2f0((void *)(*piVar2 + 8),uVar7);
          FUN_0044eb60(param_1 + 0x1ca,*piVar2);
          uVar7 = uVar7 + 1;
          piVar2 = (int *)FUN_0045b2f0(piVar8,uVar6);
          uVar3 = FUN_0045b300(*piVar2 + 8);
        } while (uVar7 < uVar3);
      }
      puVar4 = (undefined4 *)FUN_0045b2f0(piVar8,uVar6);
      _Memory = (void *)*puVar4;
      if (_Memory != (void *)0x0) {
        FUN_0045dee0((int)_Memory);
        _free(_Memory);
      }
      uVar6 = uVar6 + 1;
      uVar7 = FUN_0045b300((int)piVar8);
    } while (uVar6 < uVar7);
  }
  FUN_00462ef0(piVar8);
  piVar8 = param_1 + 3;
  while( true ) {
    uVar6 = param_1[4];
    if ((uint)param_1[5] < uVar6) {
      iVar1 = param_1[6] - uVar6;
    }
    else {
      iVar1 = -uVar6;
    }
    uVar6 = 0;
    if (param_1[5] + iVar1 == 0) break;
    iVar1 = param_1[4];
    param_1[4] = iVar1 + 1;
    if (iVar1 + 1 == param_1[6]) {
      param_1[4] = 0;
    }
    if (param_1[4] == 0) {
      iVar1 = *(int *)(*piVar8 + -4 + param_1[6] * 4);
    }
    else {
      iVar1 = *(int *)(*piVar8 + -4 + param_1[4] * 4);
    }
    _free(*(void **)(iVar1 + 0x34));
    FUN_0044eb60(param_1 + 0x1ca,iVar1);
  }
  FUN_0044ea40(piVar8,0x20);
  if (param_1[1] != 0) {
    do {
      piVar8 = *(int **)(*param_1 + uVar6 * 4);
      if (piVar8 != (int *)0x0) {
        if (*piVar8 != 0) {
          do {
            iVar1 = FUN_0045c720(*(int **)(*param_1 + uVar6 * 4));
            _free(*(void **)(iVar1 + 0x34));
            FUN_0044eb60(param_1 + 0x1ca,iVar1);
          } while (*piVar8 != 0);
        }
        FUN_0045c730(piVar8);
        _free(piVar8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)param_1[1]);
  }
  FUN_00463630(param_1,'\0');
  FUN_0045e5a0(param_1 + 0x10);
  piVar8 = param_1 + 0x16;
  while( true ) {
    uVar6 = param_1[0x17];
    if ((uint)param_1[0x18] < uVar6) {
      iVar1 = param_1[0x19] - uVar6;
    }
    else {
      iVar1 = -uVar6;
    }
    if (param_1[0x18] + iVar1 == 0) break;
    iVar1 = param_1[0x17];
    param_1[0x17] = iVar1 + 1;
    if (iVar1 + 1 == param_1[0x19]) {
      param_1[0x17] = 0;
    }
    if (param_1[0x17] == 0) {
      iVar1 = *(int *)(*piVar8 + -4 + param_1[0x19] * 4);
    }
    else {
      iVar1 = *(int *)(*piVar8 + -4 + param_1[0x17] * 4);
    }
    if (iVar1 != 0) {
      _free(*(void **)(iVar1 + 0x34));
      FUN_0044eb60(param_1 + 0x1ca,iVar1);
    }
  }
  FUN_0044ea40(piVar8,0x200);
  piVar8 = param_1 + 0x1a;
  iVar1 = 4;
  do {
    uVar6 = 0;
    while( true ) {
      uVar7 = piVar8[1];
      if ((uint)piVar8[2] < uVar7) {
        iVar5 = piVar8[3] - uVar7;
      }
      else {
        iVar5 = -uVar7;
      }
      if ((uint)(piVar8[2] + iVar5) <= uVar6) break;
      uVar7 = piVar8[1] + uVar6;
      if (uVar7 < (uint)piVar8[3]) {
        piVar2 = (int *)(*piVar8 + uVar7 * 4);
      }
      else {
        piVar2 = (int *)(*piVar8 + ((piVar8[1] - piVar8[3]) + uVar6) * 4);
      }
      _free(*(void **)(*piVar2 + 0x34));
      uVar7 = piVar8[1] + uVar6;
      if (uVar7 < (uint)piVar8[3]) {
        FUN_0044eb60(param_1 + 0x1ca,*(int *)(*piVar8 + uVar7 * 4));
        uVar6 = uVar6 + 1;
      }
      else {
        FUN_0044eb60(param_1 + 0x1ca,*(int *)(*piVar8 + ((piVar8[1] - piVar8[3]) + uVar6) * 4));
        uVar6 = uVar6 + 1;
      }
    }
    FUN_0044ea40(piVar8,0x20);
    piVar8 = piVar8 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar6 = 0;
  if (param_1[0x1c4] != 0) {
    do {
      _free(*(void **)(param_1[0x1c3] + uVar6 * 4));
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)param_1[0x1c4]);
  }
  FUN_00463630(param_1 + 0x1c3,'\0');
  FUN_0044eaf0(param_1 + 0x1ca);
  thunk_FUN_0045d830();
  return;
}


/* END FUNCTION 0x0045f4c0 */
