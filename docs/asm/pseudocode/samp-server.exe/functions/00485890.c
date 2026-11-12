/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00485890
 * Name: FUN_00485890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00485890(void *this,uint param_1)

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
  local_124 = (uint)*(ushort *)((int)this + 0x2d53);
  local_4 = 0;
  *(uint *)((int)this + 0x3024) = param_1;
  FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
  local_124 = param_1;
  FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
  FUN_00493960(DAT_004fc438,&DAT_004be930,local_120,0xffff);
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00485890 */
