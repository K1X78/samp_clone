/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00496240
 * Name: FUN_00496240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00496240(void *this,byte param_1)

{
  byte local_1a4 [4];
  char local_1a0 [128];
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1b8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  *(byte *)((int)this + 0x5d) = param_1;
  local_1a4[0] = param_1;
  local_4 = 0;
  FUN_0044df40(local_120,local_1a4,8,'\x01');
  FUN_00493960(this,&DAT_004be93c,local_120,0xffff);
  _sprintf(local_1a0,"%d",(uint)*(byte *)((int)this + 0x5d));
  FUN_00490bc0(DAT_004fc43c,"weather",local_1a0);
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00496240 */
