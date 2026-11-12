/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00484b70
 * Name: FUN_00484b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00484b70(int param_1)

{
  undefined8 uVar1;
  undefined4 local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b183b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = thunk_FUN_0044e910();
  FUN_0044d8a0(local_120);
  local_4 = 0;
  local_124 = (int)uVar1;
  FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
  FUN_00493c10(DAT_004fc438,&DAT_004bef20,local_120,*(ushort *)(param_1 + 0x2d53),2);
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00484b70 */
