/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465a10
 * Name: FUN_00465a10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00465a10(void *this,int param_1,ushort param_2)

{
  int local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b146b;
  local_c = ExceptionList;
  if ((param_1 < 0x1000) && (*(int *)((int)this + param_1 * 4 + 0x14000) != 0)) {
    ExceptionList = &local_c;
    FUN_0044d8a0(local_120);
    local_4 = 0;
    local_124 = param_1;
    FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
    FUN_0044dff0(local_120,(byte *)((int)this + param_1 * 0x14),0x14);
    FUN_00493c10(DAT_004fc438,&DAT_004bb260,local_120,param_2,2);
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00465a10 */
