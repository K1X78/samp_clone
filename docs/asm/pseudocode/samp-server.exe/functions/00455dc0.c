/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00455dc0
 * Name: FUN_00455dc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00455dc0(void *this,undefined4 *param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  int local_128;
  int local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b0dbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d930(local_120,param_1,4,'\0');
  local_4 = 0;
  FUN_0044da70(local_120,(byte *)&local_128,0x20,'\x01');
  iVar1 = FUN_00453a50(this,param_2,param_3);
  local_128 = local_128 - iVar1;
  FUN_0044dd10(local_120,0);
  local_124 = local_128;
  FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00455dc0 */
