/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049b130
 * Name: FUN_0049b130
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_0049b130(void *this,int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1c88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  exception(this,param_1);
  *(undefined ***)this = &PTR_FUN_004c0214;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  FUN_00469d40((void *)((int)this + 0xc),(void *)(param_1 + 0xc),0,0xffffffff);
  ExceptionList = local_c;
  return this;
}


/* END FUNCTION 0x0049b130 */
