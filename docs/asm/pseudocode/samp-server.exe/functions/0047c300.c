/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0047c300
 * Name: FUN_0047c300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0047c300(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_140;
  byte local_13c [4];
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
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
    FUN_0044d8a0(local_120);
    local_138 = *(undefined4 *)(param_2 + 8);
    local_134 = *(undefined4 *)(param_2 + 0xc);
    local_130 = *(undefined4 *)(param_2 + 0x10);
    local_13c[0] = *(byte *)(param_2 + 0x24);
    uVar1 = *(undefined4 *)(param_2 + 0x20);
    local_12c = *(undefined4 *)(param_2 + 0x14);
    local_128 = *(undefined4 *)(param_2 + 0x18);
    local_124 = *(undefined4 *)(param_2 + 0x1c);
    local_4 = 0;
    if ((local_13c[0] == 0) || (2 < local_13c[0])) {
      local_13c[0] = 2;
    }
    FUN_0044de70(local_120);
    local_140 = local_138;
    FUN_0044df40(local_120,(byte *)&local_140,0x20,'\x01');
    local_140 = local_134;
    FUN_0044df40(local_120,(byte *)&local_140,0x20,'\x01');
    local_140 = local_130;
    FUN_0044df40(local_120,(byte *)&local_140,0x20,'\x01');
    local_140 = local_12c;
    FUN_0044df40(local_120,(byte *)&local_140,0x20,'\x01');
    local_140 = local_128;
    FUN_0044df40(local_120,(byte *)&local_140,0x20,'\x01');
    local_140 = local_124;
    FUN_0044df40(local_120,(byte *)&local_140,0x20,'\x01');
    local_140 = uVar1;
    FUN_0044df40(local_120,(byte *)&local_140,0x20,'\x01');
    FUN_0044df40(local_120,local_13c,8,'\x01');
    FUN_00493c10(DAT_004fc438,&DAT_004be900,local_120,*(ushort *)(param_2 + 4),2);
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
    ExceptionList = local_c;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x0047c300 */
