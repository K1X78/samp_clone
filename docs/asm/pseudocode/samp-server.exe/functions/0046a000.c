/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046a000
 * Name: FUN_0046a000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_0046a000(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b15b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004a23c0(this);
  *(undefined ***)this = &PTR_FUN_004c534c;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xf;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  FUN_00469d40((void *)((int)this + 0xc),param_1,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}


/* END FUNCTION 0x0046a000 */
