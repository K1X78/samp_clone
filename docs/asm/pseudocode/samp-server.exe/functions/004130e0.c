/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004130e0
 * Name: FUN_004130e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004130e0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_4;
  
  iVar2 = param_1;
  bVar1 = *(byte *)(param_1 + 0xc);
  iVar3 = 1;
  local_4 = 0;
  if (param_2 <= (int)(uint)bVar1) {
    return 0;
  }
  if (bVar1 == 0) {
LAB_00413124:
    iVar4 = 3;
    do {
      iVar4 = iVar4 + -1;
      iVar3 = LockFile(*(HANDLE *)(param_1 + 8),DAT_004ca204,0,1,0);
      if (iVar3 != 0) break;
      Sleep(1);
    } while (0 < iVar4);
    iVar4 = iVar3;
    if (iVar3 == 0) {
      local_4 = GetLastError();
    }
LAB_00413165:
    if (param_2 == 1) {
      if (iVar3 != 0) {
        iVar3 = FUN_00413040();
        if (iVar3 == 0) {
LAB_004131ea:
          local_4 = GetLastError();
        }
        else {
          param_1._0_1_ = 1;
          bVar1 = (byte)param_1;
        }
      }
    }
    else if (param_2 == 2) {
      if (iVar3 != 0) {
        iVar3 = LockFile(*(HANDLE *)(param_1 + 8),DAT_004ca204 + 1,0,1,0);
        if (iVar3 == 0) goto LAB_004131ea;
        param_1._0_1_ = 2;
        bVar1 = (byte)param_1;
      }
    }
    else if ((param_2 == 4) && (iVar3 != 0)) goto LAB_004131ff;
    param_1._0_1_ = bVar1;
    if ((iVar4 != 0) && (param_2 == 1)) {
      UnlockFile(*(HANDLE *)(iVar2 + 8),DAT_004ca204,0,1,0);
    }
  }
  else {
    iVar4 = 0;
    if (param_2 != 4) goto LAB_00413165;
    if (bVar1 == 2) goto LAB_00413124;
LAB_004131ff:
    param_1._0_1_ = 3;
    FUN_00409700();
    iVar3 = LockFile(*(HANDLE *)(iVar2 + 8),DAT_004ca204 + 2,0,0x1fe,0);
    if (iVar3 == 0) {
      local_4 = GetLastError();
      FUN_00413040();
      goto LAB_00413249;
    }
    param_1._0_1_ = 4;
  }
  if (iVar3 != 0) {
    *(byte *)(iVar2 + 0xc) = (byte)param_1;
    return 0;
  }
LAB_00413249:
  *(DWORD *)(iVar2 + 0x10) = local_4;
  *(byte *)(iVar2 + 0xc) = (byte)param_1;
  return 5;
}


/* END FUNCTION 0x004130e0 */
