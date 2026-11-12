/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e2a90
 * Name: FUN_100e2a90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100e2a90(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = param_1[param_2 + 0x66];
  iVar5 = param_2 + 0x1e;
  uVar2 = *param_1;
  if (param_1[iVar5 * 4 + 1] == 2) {
    *param_4 = 1;
    return 0;
  }
  if (param_1[iVar5 * 4 + 2] == 0) {
    iVar3 = FUN_100db5d0(uVar2,0,1);
    if (iVar3 < 0) {
      FUN_100d8ba0(uVar2,"SSL/TLS connection timeout");
      return 0x1c;
    }
    iVar3 = FUN_100e0f90(param_1,param_2);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  do {
    iVar3 = param_1[iVar5 * 4 + 2];
    if (((iVar3 != 1) && (iVar3 != 2)) && (iVar3 != 3)) {
      if ((param_1[iVar5 * 4 + 2] == 4) && (iVar3 = FUN_100e1a70(param_2), iVar3 != 0)) {
        return iVar3;
      }
      if (param_1[iVar5 * 4 + 2] == 5) {
        param_1[iVar5 * 4 + 1] = 2;
        param_1[param_2 + 0x6c] = FUN_100e1fa0;
        param_1[param_2 + 0x6e] = FUN_100e1d00;
        *param_4 = 1;
        param_1[iVar5 * 4 + 2] = 0;
        return 0;
      }
      *param_4 = 0;
      param_1[iVar5 * 4 + 2] = 0;
      return 0;
    }
    uVar4 = FUN_100db5d0(uVar2,0,1);
    if ((int)uVar4 < 0) {
LAB_100e2c78:
      FUN_100d8ba0(uVar2,"SSL/TLS connection timeout");
      return 0x1c;
    }
    iVar3 = param_1[iVar5 * 4 + 2];
    if ((iVar3 == 2) || (iVar3 == 3)) {
      uVar7 = uVar1;
      if (iVar3 != 3) {
        uVar7 = 0xffffffff;
      }
      uVar6 = uVar1;
      if (iVar3 != 2) {
        uVar6 = 0xffffffff;
      }
      iVar3 = FUN_100cd750(uVar6,0xffffffff,uVar7,(param_3 != 0) - 1 & uVar4);
      if (iVar3 < 0) {
        iVar5 = WSAGetLastError();
        FUN_100d8ba0(uVar2,"select/poll on SSL/TLS socket, errno: %d",iVar5);
        return 0x23;
      }
      if (iVar3 == 0) {
        if (param_3 != 0) {
          *param_4 = 0;
          return 0;
        }
        goto LAB_100e2c78;
      }
    }
    iVar3 = FUN_100e14c0(param_1,param_2);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (param_3 != 0) {
      iVar3 = param_1[iVar5 * 4 + 2];
      if (iVar3 == 1) {
        return 0;
      }
      if (iVar3 == 2) {
        return 0;
      }
      if (iVar3 == 3) {
        return 0;
      }
    }
  } while( true );
}


/* END FUNCTION 0x100e2a90 */
