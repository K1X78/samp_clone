/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004881a0
 * Name: FUN_004881a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004881a0(int param_1)

{
  byte local_124 [4];
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b187b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  local_4 = 0;
  local_124[0] = 0;
  FUN_0044df40(local_120,local_124,8,'\x01');
  if (DAT_004fc438 != (void *)0x0) {
    FUN_00493c10(DAT_004fc438,&DAT_004bef9c,local_120,*(ushort *)(param_1 + 0x11),5);
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x004881a0 */
