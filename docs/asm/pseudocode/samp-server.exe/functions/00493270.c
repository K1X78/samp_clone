/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00493270
 * Name: FUN_00493270
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00493270(void *this,ushort param_1)

{
  byte local_124 [4];
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1a3b;
  local_c = ExceptionList;
  if (param_1 < 1000) {
    ExceptionList = &local_c;
    FUN_0044d8a0(local_120);
    local_124[0] = *(byte *)this;
    local_4 = 0;
    FUN_0044df40(local_120,local_124,8,'\x01');
    FUN_00493c10(DAT_004fc438,&DAT_004bf9c0,local_120,param_1,2);
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00493270 */
