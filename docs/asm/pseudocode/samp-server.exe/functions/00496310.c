/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00496310
 * Name: FUN_00496310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00496310(void *this,undefined4 param_1)

{
  undefined4 local_1a4;
  char local_1a0 [128];
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1b8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x62) = param_1;
  FUN_0044d8a0(local_120);
  local_1a4 = *(undefined4 *)((int)this + 0x62);
  local_4 = 0;
  FUN_0044df40(local_120,(byte *)&local_1a4,0x20,'\x01');
  _sprintf(local_1a0,"%f",(double)*(float *)((int)this + 0x62));
  FUN_00490bc0(DAT_004fc43c,"gravity",local_1a0);
  FUN_00493960(this,&DAT_004bff38,local_120,0xffff);
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00496310 */
