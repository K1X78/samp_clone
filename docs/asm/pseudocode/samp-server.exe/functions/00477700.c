/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00477700
 * Name: FUN_00477700
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00477700(undefined4 param_1,int param_2)

{
  uint local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b15db;
  local_c = ExceptionList;
  if ((*(ushort *)(param_2 + 4) < 1000) &&
     (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)*(ushort *)(param_2 + 4) * 4) != 0)
     ) {
    ExceptionList = &local_c;
    if (*(int *)(param_2 + 8) != 1) {
      ExceptionList = &local_c;
      *(undefined4 *)(param_2 + 8) = 0;
    }
    FUN_0044d8a0(local_120);
    local_4 = 0;
    if (*(int *)(param_2 + 8) == 0) {
      FUN_0044de70(local_120);
    }
    else {
      FUN_0044de90(local_120);
    }
    FUN_00493c10(DAT_004fc438,&DAT_004be800,local_120,*(ushort *)(param_2 + 4),2);
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
    ExceptionList = local_c;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00477700 */
