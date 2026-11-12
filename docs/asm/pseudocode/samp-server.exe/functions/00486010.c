/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00486010
 * Name: FUN_00486010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00486010(void *this,uint param_1,uint param_2)

{
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b183b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  local_4 = 0;
  if ((int)param_1 < 0xb) {
    *(short *)((int)this + param_1 * 2 + 0x2fcf) = (short)param_2;
    local_124 = (uint)*(ushort *)((int)this + 0x2d53);
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    local_124 = param_1;
    FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    local_124 = param_2;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    FUN_00493c10(DAT_004fc438,&DAT_004bef70,local_120,*(ushort *)((int)this + 0x2d53),2);
    if ((*(char *)((int)this + 0x2f95) != '\0') && (*(char *)((int)this + 0x2f95) != '\t')) {
      FUN_00493a40(DAT_004fc438,&DAT_004bef70,local_120,*(ushort *)((int)this + 0x2d53));
    }
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00486010 */
