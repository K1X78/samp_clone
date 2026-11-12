/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10111800
 * Name: FUN_10111800
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10111800(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10133128;
  puStack_10 = &LAB_100f93a4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  puVar1 = (uint *)FUN_101118c0(param_1);
  local_8 = 0;
  if ((*puVar1 < 0x30) || (puVar1[1] != 0x727444)) {
    SetLastError(6);
    uVar2 = 0;
  }
  else {
    SetLastError(0);
    uVar2 = puVar1[3];
  }
  ExceptionList = local_14;
  return uVar2;
}


/* END FUNCTION 0x10111800 */
