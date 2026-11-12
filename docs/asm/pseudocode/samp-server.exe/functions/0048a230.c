/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048a230
 * Name: FUN_0048a230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0048a230(void *this,ushort param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b18bb;
  local_c = ExceptionList;
  if ((999 < (ushort)param_2) && ((ushort)param_2 < 0x4aa)) {
    uVar3 = (uint)(byte)((char)param_2 + 0x18);
    pbVar1 = (byte *)((byte)(&DAT_004befa0)[uVar3] + 0xb7 + (int)this);
    bVar2 = *pbVar1;
    if ((bVar2 != 0) && (bVar2 - 1 == uVar3)) {
      ExceptionList = &local_c;
      FUN_0044d8a0(local_120);
      local_124 = (uint)*(ushort *)((int)this + 100);
      local_4 = 0;
      FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
      local_124 = param_2;
      FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
      FUN_00493b20(DAT_004fc438,&DAT_004bf138,local_120,(uint)*(ushort *)((int)this + 100),param_1);
      *pbVar1 = 0;
      local_4 = 0xffffffff;
      FUN_0044d9b0((int)local_120);
    }
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x0048a230 */
