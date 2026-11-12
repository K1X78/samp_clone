/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047f7e0
 * Name: FUN_0047f7e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0047f7e0(undefined4 param_1,int param_2)

{
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_128;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b15db;
  local_c = ExceptionList;
  if ((*(ushort *)(param_2 + 4) < 2000) &&
     (*(int *)(*(int *)((int)DAT_004fc438 + 0x14) + 0xf46280 + (uint)*(ushort *)(param_2 + 4) * 4)
      != 0)) {
    if ((*(ushort *)(param_2 + 8) < 1000) &&
       (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x25d84 + (uint)*(ushort *)(param_2 + 8) * 4) !=
        0)) {
      ExceptionList = &local_c;
      FUN_0044d8a0(local_120);
      local_13c = (uint)*(ushort *)(param_2 + 4);
      local_4 = 0;
      FUN_0044df40(local_120,(byte *)&local_13c,0x10,'\x01');
      local_13c = (uint)*(ushort *)(param_2 + 8);
      FUN_0044df40(local_120,(byte *)&local_13c,0x10,'\x01');
      local_13c = *(uint *)(param_2 + 0xc);
      local_128 = *(uint *)(param_2 + 0x10);
      local_138 = *(uint *)(param_2 + 0x18);
      local_124 = *(uint *)(param_2 + 0x14);
      local_134 = *(uint *)(param_2 + 0x1c);
      local_130 = *(uint *)(param_2 + 0x20);
      FUN_0044df40(local_120,(byte *)&local_13c,0x20,'\x01');
      local_13c = local_128;
      FUN_0044df40(local_120,(byte *)&local_13c,0x20,'\x01');
      local_13c = local_124;
      FUN_0044df40(local_120,(byte *)&local_13c,0x20,'\x01');
      local_13c = local_138;
      FUN_0044df40(local_120,(byte *)&local_13c,0x20,'\x01');
      local_13c = local_134;
      FUN_0044df40(local_120,(byte *)&local_13c,0x20,'\x01');
      local_13c = local_130;
      FUN_0044df40(local_120,(byte *)&local_13c,0x20,'\x01');
      FUN_00493a40(DAT_004fc438,&DAT_004be974,local_120,*(ushort *)(param_2 + 8));
      FUN_00493c10(DAT_004fc438,&DAT_004be974,local_120,*(ushort *)(param_2 + 8),2);
      local_4 = 0xffffffff;
      FUN_0044d9b0((int)local_120);
    }
  }
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x0047f7e0 */
