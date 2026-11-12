/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048a640
 * Name: FUN_0048a640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0048a640(void *this,undefined4 *param_1)

{
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b18bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xef) = *param_1;
  *(undefined4 *)((int)this + 0xf3) = param_1[1];
  *(undefined4 *)((int)this + 0xf7) = param_1[2];
  *(undefined4 *)((int)this + 0xfb) = param_1[3];
  FUN_0044d8a0(local_120);
  local_124 = (uint)*(ushort *)((int)this + 100);
  local_4 = 0;
  FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
  FUN_0044dff0(local_120,(byte *)((int)this + 0xef),0x10);
  FUN_00493b20(DAT_004fc438,&DAT_004bb32c,local_120,(uint)*(ushort *)((int)this + 100),0xffff);
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x0048a640 */
