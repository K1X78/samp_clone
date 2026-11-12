/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00464290
 * Name: FUN_00464290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00464290(void *this,uint param_1,ushort param_2)

{
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b138b;
  local_c = ExceptionList;
  if (*(int *)((int)this + (param_1 & 0xffff) * 4) != 0) {
    ExceptionList = &local_c;
    FUN_0044d8a0(local_120);
    local_4 = 0;
    local_124 = param_1;
    FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
    FUN_00493c10(DAT_004fc438,&DAT_004b9fc0,local_120,param_2,2);
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00464290 */
