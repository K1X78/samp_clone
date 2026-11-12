/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047cbd0
 * Name: FUN_0047cbd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0047cbd0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b15db;
  local_c = ExceptionList;
  if (*(int *)((int)DAT_004fc438 + 0xc) == 0) {
    return 0;
  }
  if ((*(ushort *)(param_2 + 4) < 2000) &&
     (iVar1 = *(int *)(*(int *)((int)DAT_004fc438 + 0xc) + 0x3f54 +
                      (uint)*(ushort *)(param_2 + 4) * 4), iVar1 != 0)) {
    if (*(short *)(iVar1 + 0x6a) != -1) {
      ExceptionList = &local_c;
      FUN_0044d8a0(local_120);
      local_124 = (uint)*(ushort *)(param_2 + 4);
      local_4 = 0;
      FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
      local_124 = *(uint *)(param_2 + 8);
      FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
      FUN_00493c10(DAT_004fc438,&DAT_004be920,local_120,*(ushort *)(iVar1 + 0x6a),2);
      local_4 = 0xffffffff;
      FUN_0044d9b0((int)local_120);
    }
    ExceptionList = local_c;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x0047cbd0 */
