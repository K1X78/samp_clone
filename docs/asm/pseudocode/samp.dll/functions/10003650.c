/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10003650
 * Name: FUN_10003650
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10003650(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  undefined4 uVar5;
  float10 fVar6;
  int local_4;
  
  iVar2 = FUN_100ac630();
  iVar3 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  uVar1 = 0xffff;
  uVar5 = 0xffff;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar1 = FUN_1001e650(iVar2);
    if ((uVar1 == 0) || (uVar1 == 0xffff)) {
      uVar5 = FUN_10012910(iVar2);
      if (((short)uVar5 != 0) && ((short)uVar5 != -1)) {
        iVar3 = FUN_10002e10(uVar5);
        if (iVar3 != 0) {
          iVar3 = FUN_100a80b0();
          if (iVar3 != 0) {
            local_4 = 2;
          }
        }
      }
    }
    else if (uVar1 < 2000) {
      if ((*(int *)(iVar3 + 0x3074 + (uint)uVar1 * 4) != 0) &&
         (*(int *)(iVar3 + 0x1134 + (uint)uVar1 * 4) != 0)) {
        iVar3 = FUN_100b6c20();
        if (iVar3 == 0) {
          iVar3 = FUN_1009ee70();
          if (iVar3 != 0x239) {
            iVar3 = FUN_1009ee70();
            if (iVar3 != 0x23a) goto LAB_10003750;
          }
        }
        fVar6 = (float10)FUN_1009ef00();
        if (fVar6 < (float10)30.0) {
          local_4 = 1;
        }
      }
    }
  }
LAB_10003750:
  iVar3 = FUN_100ac8b0();
  if (iVar3 != 0) {
LAB_1000394f:
    *(undefined4 *)(param_1 + 0x2fa) = 0;
    *(undefined4 *)(param_1 + 0x2de) = 0;
    *(undefined4 *)(param_1 + 0x2e2) = 0;
    return;
  }
  iVar3 = FUN_100ac260();
  if (iVar3 != 0) goto LAB_1000394f;
  iVar3 = FUN_100ac1f0();
  if (iVar3 != 0) goto LAB_1000394f;
  if (local_4 == 0) {
    if (*(int *)(param_1 + 0x2e6) == 0) {
      *(undefined4 *)(param_1 + 0x2fa) = 0;
      *(undefined4 *)(param_1 + 0x2de) = 0;
      *(undefined4 *)(param_1 + 0x2e2) = 0;
      return;
    }
    if (*(int *)(param_1 + 0x2e6) == 1) {
      DVar4 = GetTickCount();
      if (1999 < DVar4 - *(int *)(param_1 + 0x2da)) {
        *(undefined4 *)(param_1 + 0x2e6) = 0;
        *(undefined4 *)(param_1 + 0x2ea) = 0;
        *(undefined4 *)(param_1 + 0x2ee) = 0;
        *(undefined4 *)(param_1 + 0x2f2) = 0;
        *(undefined2 *)(param_1 + 0x2d8) = 0xffff;
        *(undefined4 *)(param_1 + 0x2de) = 0;
        *(undefined4 *)(param_1 + 0x2e2) = 0;
        *(undefined4 *)(param_1 + 0x2fa) = 0;
      }
    }
    if (*(int *)(param_1 + 0x2e6) == 1) {
      DVar4 = GetTickCount();
      if (DVar4 - *(int *)(param_1 + 0x2da) < 2000) {
        uVar1 = *(ushort *)(param_1 + 0x2d8);
        if (uVar1 < 2000) {
          iVar3 = FUN_10001120((uint)uVar1);
        }
        else {
          iVar3 = FUN_10002e10(uVar1 - 2000);
        }
        if (iVar3 != 0) {
          *(int *)(param_1 + 0x2de) = iVar3;
          *(undefined4 *)(param_1 + 0x2e2) = 1;
        }
        *(undefined4 *)(param_1 + 0x2fa) = 1;
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x2fa) = 0xffffffff;
    return;
  }
  if (local_4 == 1) {
    *(ushort *)(param_1 + 0x2d8) = uVar1;
    DVar4 = GetTickCount();
    *(DWORD *)(param_1 + 0x2da) = DVar4;
    uVar5 = FUN_10001120(*(undefined2 *)(param_1 + 0x2d8));
    if (*(int *)(param_1 + 0x2e6) == 0) {
      *(undefined4 *)(param_1 + 0x2de) = uVar5;
      *(undefined4 *)(param_1 + 0x2e2) = 0;
      FUN_100034b0();
    }
    *(undefined4 *)(param_1 + 0x2de) = uVar5;
  }
  else {
    if (local_4 != 2) goto LAB_1000392b;
    *(short *)(param_1 + 0x2d8) = (short)uVar5 + 2000;
    DVar4 = GetTickCount();
    *(DWORD *)(param_1 + 0x2da) = DVar4;
    iVar3 = FUN_10002e10(*(short *)(param_1 + 0x2d8) + -2000);
    if (iVar3 == 0) goto LAB_1000392b;
    if (*(int *)(param_1 + 0x2e6) == 0) {
      *(int *)(param_1 + 0x2de) = iVar3;
      *(undefined4 *)(param_1 + 0x2e2) = 0;
      FUN_100034b0();
    }
    *(int *)(param_1 + 0x2de) = iVar3;
  }
  *(undefined4 *)(param_1 + 0x2e6) = 1;
  *(undefined4 *)(param_1 + 0x2e2) = 1;
LAB_1000392b:
  *(undefined4 *)(param_1 + 0x2fa) = 2;
  return;
}


/* END FUNCTION 0x10003650 */
