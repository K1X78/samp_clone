/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047e140
 * Name: FUN_0047e140
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0047e140(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b15db;
  local_c = ExceptionList;
  if (*(int *)((int)DAT_004fc438 + 0x14) == 0) {
    return 0;
  }
  uVar1 = *(ushort *)(param_2 + 4);
  if (((uVar1 < 2000) &&
      (iVar2 = *(int *)(*(int *)((int)DAT_004fc438 + 0x14) + 0xf46280 + (uint)uVar1 * 4), iVar2 != 0
      )) && ((*(byte *)(iVar2 + 0x96) & 1) != 0)) {
    ExceptionList = &local_c;
    *(byte *)(iVar2 + 0x96) = *(byte *)(iVar2 + 0x96) & 0xfe;
    FUN_0044d8a0(local_120);
    local_4 = 0;
    local_124 = CONCAT22((short)((uint)unaff_ESI >> 0x10),uVar1);
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    FUN_00493960(DAT_004fc438,&DAT_004be95c,local_120,0xffff);
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
    ExceptionList = local_c;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x0047e140 */
