/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101118c0
 * Name: FUN_101118c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint * FUN_101118c0(HMODULE param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint local_2c;
  HMODULE local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10133138;
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
    piVar3 = (int *)((int)&local_20->unused + local_20[0xf].unused);
    if (*piVar3 == 0x4550) {
      if ((short)piVar3[5] == 0) {
        SetLastError(0xc0);
      }
      else {
        uVar1 = (uint)*(ushort *)(piVar3 + 5);
        for (local_2c = 0; local_2c < *(ushort *)((int)piVar3 + 6); local_2c = local_2c + 1) {
          iVar2 = _strcmp((char *)((int)piVar3 + local_2c * 0x28 + uVar1 + 0x18),s__detour_10156974)
          ;
          if (iVar2 == 0) {
            if ((((*(int *)((int)piVar3 + local_2c * 0x28 + uVar1 + 0x24) != 0) &&
                 (*(int *)((int)piVar3 + local_2c * 0x28 + uVar1 + 0x28) != 0)) &&
                (puVar4 = (uint *)((int)&local_20->unused +
                                  *(int *)((int)piVar3 + local_2c * 0x28 + uVar1 + 0x24)),
                0x2f < *puVar4)) && (puVar4[1] == 0x727444)) {
              if (puVar4[2] == 0) {
                puVar4[2] = *puVar4;
              }
              SetLastError(0);
              ExceptionList = local_14;
              return puVar4;
            }
            break;
          }
        }
        local_8 = 0xffffffff;
        SetLastError(0xc0);
      }
    }
    else {
      SetLastError(0xbf);
    }
  }
  else {
    SetLastError(0xc1);
  }
  ExceptionList = local_14;
  return (uint *)0x0;
}


/* END FUNCTION 0x101118c0 */
