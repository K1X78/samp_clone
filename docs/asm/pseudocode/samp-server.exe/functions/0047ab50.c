/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047ab50
 * Name: FUN_0047ab50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0047ab50(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  void *this;
  byte local_128 [4];
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b15db;
  local_c = ExceptionList;
  uVar1 = *(ushort *)(param_2 + 4);
  iVar2 = *(int *)((int)DAT_004fc438 + 8);
  if ((((uVar1 < 1000) && (*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) != 0)) &&
      (*(ushort *)(param_2 + 8) < 1000)) &&
     (*(int *)(iVar2 + 0x24de4 + (uint)*(ushort *)(param_2 + 8) * 4) != 0)) {
    if (uVar1 < 1000) {
      this = *(void **)(iVar2 + 0x25d84 + (uint)uVar1 * 4);
    }
    else {
      this = (void *)0x0;
    }
    ExceptionList = &local_c;
    *(uint *)((int)this + 0x30ad) = (uint)*(ushort *)(param_2 + 8);
    *(undefined1 *)((int)this + 0x30ac) = 1;
    if (*(ushort *)(param_2 + 8) < 1000) {
      iVar2 = *(int *)(*(int *)((int)DAT_004fc438 + 8) + 0x25d84 +
                      (uint)*(ushort *)(param_2 + 8) * 4);
    }
    else {
      iVar2 = 0;
    }
    FUN_00486620(this,*(undefined4 *)(iVar2 + 0x2cfd),*(undefined4 *)(iVar2 + 0x2d01),
                 *(undefined4 *)(iVar2 + 0x2d05),'\x01');
    FUN_00483ee0(this,*(undefined4 *)(iVar2 + 0x2cfd),*(undefined4 *)(iVar2 + 0x2d01),
                 *(undefined4 *)(iVar2 + 0x2d05));
    FUN_00483630(this,9);
    FUN_0044d8a0(local_120);
    local_124 = (uint)*(ushort *)(param_2 + 8);
    local_4 = 0;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    local_128[0] = *(byte *)(param_2 + 0xc);
    FUN_0044df40(local_120,local_128,8,'\x01');
    FUN_00493c10(DAT_004fc438,&DAT_004be8c8,local_120,*(ushort *)(param_2 + 4),2);
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
    ExceptionList = local_c;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x0047ab50 */
