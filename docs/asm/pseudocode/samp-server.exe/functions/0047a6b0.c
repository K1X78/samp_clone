/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047a6b0
 * Name: FUN_0047a6b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0047a6b0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b15db;
  local_c = ExceptionList;
  iVar4 = *(int *)((int)DAT_004fc438 + 8);
  if (iVar4 == 0) {
    return 0;
  }
  uVar1 = *(ushort *)(param_2 + 4);
  if ((999 < uVar1) || (*(int *)(iVar4 + 0x24de4 + (uint)uVar1 * 4) == 0)) {
    return 0;
  }
  if (uVar1 < 1000) {
    iVar4 = *(int *)(iVar4 + 0x25d84 + (uint)uVar1 * 4);
  }
  else {
    iVar4 = 0;
  }
  iVar2 = *(int *)(param_2 + 8);
  ExceptionList = &local_c;
  if ((DAT_004fc444 != (void *)0x0) && (ExceptionList = &local_c, 20000 < iVar2)) {
    ExceptionList = &local_c;
    iVar3 = FUN_00497120(DAT_004fc444,iVar2);
    if (iVar3 != -1) {
      *(int *)(iVar4 + 0x2fea) = iVar3;
      *(int *)(iVar4 + 0x2fee) = iVar2;
      goto LAB_0047a76a;
    }
  }
  *(int *)(iVar4 + 0x2fea) = iVar2;
  *(undefined4 *)(iVar4 + 0x2fee) = 0;
LAB_0047a76a:
  if (*(int *)(iVar4 + 0x301b) != 0) {
    FUN_0044d8a0(local_120);
    local_124 = (uint)*(ushort *)(param_2 + 4);
    local_4 = 0;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    local_124 = *(uint *)(iVar4 + 0x2fea);
    FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    local_124 = *(uint *)(iVar4 + 0x2fee);
    FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    FUN_00493a40(DAT_004fc438,&DAT_004be8bc,local_120,*(ushort *)(param_2 + 4));
    FUN_00493c10(DAT_004fc438,&DAT_004be8bc,local_120,*(ushort *)(param_2 + 4),2);
    FUN_0044d9d0(local_120);
    FUN_0044dff0(local_120,(byte *)(iVar4 + 0x2fe9),0x32);
    FUN_00493c10(DAT_004fc438,&DAT_004be4ec,local_120,*(ushort *)(param_2 + 4),2);
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return 1;
}


/* END FUNCTION 0x0047a6b0 */
