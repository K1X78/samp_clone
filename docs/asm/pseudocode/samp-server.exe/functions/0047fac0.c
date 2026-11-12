/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047fac0
 * Name: FUN_0047fac0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0047fac0(undefined4 param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined4 unaff_EDI;
  byte local_128 [4];
  undefined4 local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b15db;
  local_c = ExceptionList;
  bVar1 = *(byte *)(param_2 + 8);
  uVar2 = *(ushort *)(param_2 + 4);
  if ((*(int *)((int)DAT_004fc438 + 8) != 0) &&
     ((((bVar1 == 4 || (bVar1 == 5)) || (bVar1 == 6)) ||
      (((bVar1 == 7 || (bVar1 == 0xf)) || (bVar1 == 0x10)))))) {
    if (uVar2 < 1000) {
      if (*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x24de4 + (uint)uVar2 * 4) != 0) {
        ExceptionList = &local_c;
        *(byte *)(*(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x25d84 + (uint)uVar2 * 4) + 0x3020) =
             bVar1;
        FUN_0044d8a0(local_120);
        local_4 = 0;
        local_124 = CONCAT22((short)((uint)unaff_EDI >> 0x10),uVar2);
        FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
        local_128[0] = bVar1;
        FUN_0044df40(local_120,local_128,8,'\x01');
        FUN_00493a40(DAT_004fc438,&DAT_004be97c,local_120,*(ushort *)(param_2 + 4));
        FUN_00493c10(DAT_004fc438,&DAT_004be97c,local_120,*(ushort *)(param_2 + 4),2);
        local_4 = 0xffffffff;
        FUN_0044d9b0((int)local_120);
      }
    }
    ExceptionList = local_c;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x0047fac0 */
