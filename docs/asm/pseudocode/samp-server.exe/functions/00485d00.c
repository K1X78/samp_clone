/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00485d00
 * Name: FUN_00485d00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00485d00(void *this,byte param_1)

{
  byte local_124 [4];
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b183b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(byte *)((int)this + 0x30a7) = param_1;
  FUN_0044d8a0(local_120);
  local_4 = 0;
  local_124[0] = param_1;
  FUN_0044df40(local_120,local_124,8,'\x01');
  FUN_00493c10(DAT_004fc438,&DAT_004bef68,local_120,*(ushort *)((int)this + 0x2d53),2);
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00485d00 */
