/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10111460
 * Name: FUN_10111460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_10111460(HMODULE param_1)

{
  int iVar1;
  int *piVar2;
  HMODULE local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10133108;
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
    piVar2 = (int *)((int)&local_20->unused + local_20[0xf].unused);
    if (*piVar2 == 0x4550) {
      if ((short)piVar2[5] == 0) {
        SetLastError(0xc0);
        iVar1 = 0;
      }
      else {
        SetLastError(0);
        iVar1 = piVar2[10] + piVar2[0xd];
      }
    }
    else {
      SetLastError(0xbf);
      iVar1 = 0;
    }
  }
  else {
    SetLastError(0xc1);
    iVar1 = 0;
  }
  ExceptionList = local_14;
  return iVar1;
}


/* END FUNCTION 0x10111460 */
