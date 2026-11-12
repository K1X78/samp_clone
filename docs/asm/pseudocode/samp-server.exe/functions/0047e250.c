/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047e250
 * Name: FUN_0047e250
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0047e250(undefined4 param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_124;
  uint local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b15db;
  local_c = ExceptionList;
  iVar3 = *(int *)((int)DAT_004fc438 + 8);
  if (iVar3 != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if (((uVar1 < 1000) && (iVar4 = *(int *)(iVar3 + 0x24de4 + (uint)uVar1 * 4), iVar4 != 0)) &&
       (*(int *)((int)DAT_004fc438 + 0x14) != 0)) {
      uVar2 = *(ushort *)(param_2 + 8);
      if (uVar2 < 2000) {
        iVar5 = *(int *)(*(int *)((int)DAT_004fc438 + 0x14) + 0xf46280 + (uint)uVar2 * 4);
      }
      else {
        iVar5 = 0;
      }
      if (((uVar1 < 1000) && (iVar3 = *(int *)(iVar3 + 0x25d84 + (uint)uVar1 * 4), iVar3 != 0)) &&
         (iVar5 != 0)) {
        ExceptionList = &local_c;
        FUN_0044d8a0(local_120);
        local_4 = 0;
        FUN_0044de70(local_120);
        local_124 = CONCAT22((short)((uint)iVar4 >> 0x10),uVar2);
        FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
        FUN_00493c10(DAT_004fc438,&DAT_004be960,local_120,*(ushort *)(param_2 + 4),2);
        *(undefined4 *)(iVar3 + 0x2d3d) = 1;
        local_4 = 0xffffffff;
        FUN_0044d9b0((int)local_120);
      }
      ExceptionList = local_c;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x0047e250 */
