/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00486130
 * Name: FUN_00486130
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00486130(void *this,uint param_1,byte *param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  uint local_124;
  uint local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b183b;
  local_c = ExceptionList;
  if ((-1 < (int)param_1) && ((int)param_1 < 10)) {
    pbVar2 = param_2;
    puVar3 = (undefined4 *)(param_1 * 0x34 + 0x2d59 + (int)this);
    ExceptionList = &local_c;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *(undefined4 *)pbVar2;
      pbVar2 = pbVar2 + 4;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 0x2f61) = 1;
    FUN_0044d8a0(local_120);
    local_124 = (uint)*(ushort *)((int)this + 0x2d53);
    local_4 = 0;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    local_124 = param_1;
    FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    FUN_0044de90(local_120);
    FUN_0044dff0(local_120,param_2,0x34);
    FUN_00493a40(DAT_004fc438,&DAT_004bef74,local_120,*(ushort *)((int)this + 0x2d53));
    FUN_00493c10(DAT_004fc438,&DAT_004bef74,local_120,*(ushort *)((int)this + 0x2d53),2);
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00486130 */
