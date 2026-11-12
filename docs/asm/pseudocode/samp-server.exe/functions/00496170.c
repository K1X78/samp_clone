/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00496170
 * Name: FUN_00496170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00496170(void *this,byte param_1)

{
  byte local_224 [4];
  undefined4 local_220 [69];
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1b4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_220);
  *(byte *)((int)this + 0x59) = param_1;
  local_224[0] = param_1;
  local_4 = 0;
  FUN_0044df40(local_220,local_224,8,'\x01');
  FUN_00493960(this,&DAT_004bff34,local_220,0xffff);
  _sprintf(local_10c,"%02d:%02d",(uint)*(byte *)((int)this + 0x59),0);
  FUN_00490bc0(DAT_004fc43c,"worldtime",local_10c);
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_220);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00496170 */
