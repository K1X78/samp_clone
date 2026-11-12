/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10010dc0
 * Name: FUN_10010dc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10010dc0(undefined4 *param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  ushort uVar8;
  undefined1 *puVar9;
  uint local_168;
  int local_164;
  undefined1 local_160 [48];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011312b;
  local_c = ExceptionList;
  iVar5 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  if (iVar5 == 0) {
    local_4 = 0xffffffff;
    FUN_1001f390();
    ExceptionList = local_c;
    return;
  }
  FUN_1001f470(&local_168,0x10,1);
  if (((ushort)local_168 < 2000) && (*(int *)(iVar5 + 0x3074 + (local_168 & 0xffff) * 4) != 0)) {
    local_164 = *(int *)(iVar5 + 0x1134 + (local_168 & 0xffff) * 4);
  }
  else {
    local_164 = 0;
  }
  iVar6 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  if ((local_164 != 0) && (iVar6 != 0)) {
    iVar1 = *(int *)(iVar6 + 0x1e);
    FUN_10001010();
    iVar3 = FUN_100aba90();
    if (iVar3 != 0) {
      FUN_10001010();
      uVar4 = FUN_100abc20();
      sVar2 = FUN_1001e650(uVar4);
      if (sVar2 == (ushort)local_168) {
        puVar9 = local_160;
        FUN_10001010(puVar9);
        FUN_1009e950(puVar9);
        FUN_10001010(local_130,local_12c,local_128);
        FUN_100ac190(local_130,local_12c,local_128);
        DAT_102aca68 = 1;
      }
    }
    if ((iVar1 != 0) &&
       (iVar1 = *(int *)(iVar1 + 0x2de), iVar3 = FUN_10001120(local_168), iVar1 == iVar3)) {
      FUN_1000e2b0();
    }
    uVar8 = 0;
    piVar7 = (int *)(iVar6 + 0x26);
    do {
      if ((uVar8 < 0x3ec) && (piVar7[0x3ec] != 0)) {
        if (*piVar7 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(*piVar7 + 8);
        }
        if (((*(int *)(iVar6 + 4) != 0) && (*(char *)(iVar6 + 0x1a) != '\0')) &&
           (*(int *)(iVar6 + 8) == local_164)) {
          FUN_10014730();
        }
      }
      uVar8 = uVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar8 != 0x3ec);
    uVar8 = 1;
    piVar7 = (int *)(iVar5 + 0x3078);
    do {
      if (((uVar8 < 2000) && (*piVar7 != 0)) && (uVar8 != (ushort)local_168)) {
        if (*piVar7 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = piVar7[-2000];
        }
        if (*(int *)(iVar5 + 0x48) == local_164) {
          FUN_100b7770();
          FUN_100b77c0(0);
        }
      }
      uVar8 = uVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar8 != 2000);
    iVar5 = FUN_1009ee70();
    FUN_1001e540(local_168);
    if ((iVar5 == 0x219) || (iVar5 == 0x21a)) {
      FUN_1001e540(local_168 + 1);
      FUN_1001e540(local_168 + 2);
      FUN_1001e540(local_168 + 3);
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10010dc0 */
