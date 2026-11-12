/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00472b70
 * Name: FUN_00472b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00472b70(undefined4 param_1,int param_2)

{
  ushort uVar1;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b15db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  uVar1 = *(ushort *)(param_2 + 4);
  local_4 = 0;
  if (uVar1 < 1000) {
    if (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0) {
      *(undefined4 *)(*(int *)((int)DAT_004fc438 + 8) + 0x2334 + (uint)uVar1 * 4) = 0;
      FUN_00493c10(DAT_004fc438,&DAT_004be528,local_120,uVar1,2);
      local_4 = 0xffffffff;
      FUN_0044d9b0((int)local_120);
      ExceptionList = local_c;
      return 1;
    }
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x00472b70 */
