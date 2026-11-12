/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047a380
 * Name: FUN_0047a380
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0047a380(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  byte local_124 [4];
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
    ExceptionList = &local_c;
    if ((uVar1 < 1000) &&
       (iVar2 = *(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x25d84 + (uint)uVar1 * 4),
       ExceptionList = &local_c, iVar2 != 0)) {
      ExceptionList = &local_c;
      *(undefined4 *)(iVar2 + 0x2cf5) = 1;
    }
    FUN_0044d8a0(local_120);
    local_4 = 0;
    local_124[0] = 2;
    local_124[1] = 0;
    local_124[2] = 0;
    local_124[3] = 0;
    FUN_0044df40(local_120,local_124,0x20,'\x01');
    FUN_00493c10(DAT_004fc438,&DAT_004be888,local_120,*(ushort *)(param_2 + 4),2);
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
    ExceptionList = local_c;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x0047a380 */
