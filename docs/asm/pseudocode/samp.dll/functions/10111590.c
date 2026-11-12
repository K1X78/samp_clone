/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10111590
 * Name: FUN_10111590
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10111590(HMODULE param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_58;
  uint local_34;
  HMODULE local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10133118;
  puStack_10 = &LAB_100f93a4;
  local_14 = ExceptionList;
  local_20 = param_1;
  ExceptionList = &local_14;
  if (param_1 == (HMODULE)0x0) {
    ExceptionList = &local_14;
    local_20 = GetModuleHandleA((LPCSTR)0x0);
  }
  local_8 = 0;
  if ((short)local_20->unused == 0x5a4d) {
    piVar7 = (int *)((int)&local_20->unused + local_20[0xf].unused);
    if (*piVar7 == 0x4550) {
      if ((short)piVar7[5] == 0) {
        SetLastError(0xc0);
        uVar5 = 0;
      }
      else {
        iVar1 = FUN_101117e0(param_1,piVar7[0x1e]);
        if (iVar1 == 0) {
          SetLastError(0xc0);
          uVar5 = 0;
        }
        else {
          iVar2 = FUN_101117e0(param_1,*(undefined4 *)(iVar1 + 0x1c));
          iVar3 = FUN_101117e0(param_1,*(undefined4 *)(iVar1 + 0x20));
          iVar4 = FUN_101117e0(param_1,*(undefined4 *)(iVar1 + 0x24));
          for (local_34 = 0; local_34 < *(uint *)(iVar1 + 0x14); local_34 = local_34 + 1) {
            uVar5 = FUN_101117e0(param_1,*(undefined4 *)(iVar2 + local_34 * 4));
            if (local_34 < *(uint *)(iVar1 + 0x18)) {
              local_58 = FUN_101117e0(param_1,*(undefined4 *)(iVar3 + local_34 * 4));
            }
            else {
              local_58 = 0;
            }
            iVar6 = (*param_3)(param_2,*(int *)(iVar1 + 0x10) +
                                       (uint)*(ushort *)(iVar4 + local_34 * 2),local_58,uVar5);
            if (iVar6 == 0) break;
          }
          SetLastError(0);
          uVar5 = 1;
        }
      }
    }
    else {
      SetLastError(0xbf);
      uVar5 = 0;
    }
  }
  else {
    SetLastError(0xc1);
    uVar5 = 0;
  }
  ExceptionList = local_14;
  return uVar5;
}


/* END FUNCTION 0x10111590 */
