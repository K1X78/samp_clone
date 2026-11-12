/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bb990
 * Name: FUN_100bb990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100bb990(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  void *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  char local_17;
  undefined4 local_16;
  undefined4 local_12;
  undefined1 local_e;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101168c8;
  local_c = ExceptionList;
  local_24 = (void *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_18 = 0;
  local_17 = '\0';
  local_e = 0;
  local_12 = 0;
  local_16 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0xffff;
  local_26 = 0x1803;
  local_4 = 0;
  if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x40) != 0)) {
    ExceptionList = &local_c;
    iVar1 = FUN_100bc390(param_2);
    if (iVar1 == 0) {
      if ((local_17 != '\0') && (local_24 != (void *)0x0)) {
        _free(local_24);
      }
      ExceptionList = local_c;
      return 0xfffffffe;
    }
    local_2c = local_1c;
    local_30 = 0x253f2ff;
    uVar2 = FUN_100bb940(*(undefined4 *)(param_1 + 0x40),&local_30);
    if ((local_17 != '\0') && (local_24 != (void *)0x0)) {
      _free(local_24);
    }
    ExceptionList = local_c;
    return uVar2;
  }
  return 0xffffffff;
}


/* END FUNCTION 0x100bb990 */
