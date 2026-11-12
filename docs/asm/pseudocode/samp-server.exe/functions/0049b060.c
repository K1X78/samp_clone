/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049b060
 * Name: FUN_0049b060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_0049b060(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1ca8;
  local_c = ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  ExceptionList = &local_c;
  FUN_00469e30(local_28,(undefined4 *)"internal error",0xe);
  local_4 = 0;
  FUN_0049b000(this,local_28);
  if (0xf < local_10) {
    _free(local_24);
  }
  *(undefined4 *)((int)this + 0x2c) = param_2;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined ***)this = &PTR_FUN_004c021c;
  ExceptionList = local_c;
  return this;
}


/* END FUNCTION 0x0049b060 */
