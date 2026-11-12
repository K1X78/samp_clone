/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10111ab0
 * Name: FUN_10111ab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * FUN_10111ab0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10133148;
  puStack_10 = &LAB_100f93a4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (param_3 != (int *)0x0) {
    ExceptionList = &local_14;
    *param_3 = 0;
  }
  puVar2 = (uint *)FUN_101118c0(param_1);
  local_8 = 0;
  if ((*puVar2 < 0x30) || (puVar2[1] != 0x727444)) {
    SetLastError(0xbf);
  }
  else {
    uVar1 = puVar2[3];
    for (local_24 = (int *)((int)puVar2 + puVar2[2]); local_24 < (int *)((int)puVar2 + uVar1);
        local_24 = (int *)((int)local_24 + *local_24)) {
      iVar3 = _IsEqualGUID(local_24 + 2,param_2);
      if ((iVar3 != 0) && (param_3 != (int *)0x0)) {
        *param_3 = *local_24 + -0x18;
        SetLastError(0);
        ExceptionList = local_14;
        return local_24 + 6;
      }
    }
    local_8 = 0xffffffff;
    SetLastError(6);
  }
  ExceptionList = local_14;
  return (int *)0x0;
}


/* END FUNCTION 0x10111ab0 */
