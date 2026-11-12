/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047e690
 * Name: FUN_0047e690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0047e690(undefined4 param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  void *this;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b15db;
  local_c = ExceptionList;
  uVar1 = *(ushort *)(param_2 + 4);
  if ((uVar1 < 1000) && (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0)
     ) {
    uVar2 = *(ushort *)(param_2 + 8);
    if ((uVar2 < 0x7d1) &&
       (((uVar1 < 0x3e9 &&
         (*(int *)(*(int *)((int)DAT_004fc438 + 0x14) + 8000000 + (uint)uVar2 * 4) != 0)) &&
        (*(int *)(*(int *)((int)DAT_004fc438 + 0x14) + ((uint)uVar1 * 2000 + (uint)uVar2) * 4) != 0)
        ))) {
      local_12c = *(uint *)(param_2 + 0xc);
      local_128 = *(uint *)(param_2 + 0x10);
      local_124 = *(uint *)(param_2 + 0x14);
      ExceptionList = &local_c;
      FUN_0044d8a0(local_120);
      local_130 = (uint)*(ushort *)(param_2 + 8);
      local_4 = 0;
      FUN_0044df40(local_120,(byte *)&local_130,0x10,'\x01');
      local_130 = local_12c;
      FUN_0044df40(local_120,(byte *)&local_130,0x20,'\x01');
      local_130 = local_128;
      FUN_0044df40(local_120,(byte *)&local_130,0x20,'\x01');
      local_130 = local_124;
      FUN_0044df40(local_120,(byte *)&local_130,0x20,'\x01');
      FUN_00493c10(DAT_004fc438,&DAT_004b6c84,local_120,*(ushort *)(param_2 + 4),2);
      if (((*(ushort *)(param_2 + 8) < 2000) && (*(ushort *)(param_2 + 4) < 1000)) &&
         (this = *(void **)(*(int *)((int)DAT_004fc438 + 0x14) +
                           ((*(ushort *)(param_2 + 4) + 0x3e9) * 2000 +
                           (uint)*(ushort *)(param_2 + 8)) * 4), this != (void *)0x0)) {
        FUN_0049d8a0(this,&local_12c);
      }
      local_4 = 0xffffffff;
      FUN_0044d9b0((int)local_120);
      ExceptionList = local_c;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x0047e690 */
