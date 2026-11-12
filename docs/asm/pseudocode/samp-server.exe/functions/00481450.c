/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00481450
 * Name: FUN_00481450
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_00481450(void *this,char *param_1)

{
  void *this_00;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_004b1731;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x44) = 0xf;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  local_4 = 1;
  uStack_3 = 0;
  this_00 = operator_new(0x7330);
  _local_4 = CONCAT31(uStack_3,2);
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00468230(this_00,param_1);
  }
  *(undefined4 **)this = puVar1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x48) = 1;
  *(undefined4 *)((int)this + 0x4d) = 0;
  *(undefined4 *)((int)this + 0x51) = 0;
  *(undefined4 *)((int)this + 0x55) = 0;
  *(undefined4 *)((int)this + 0x59) = 0;
  *(undefined4 *)((int)this + 0x5d) = 0;
  *(undefined4 *)((int)this + 0x61) = 0;
  *(undefined4 *)((int)this + 0x65) = 0;
  *(undefined4 *)((int)this + 0x69) = 0;
  *(undefined4 *)((int)this + 0x6d) = 0;
  *(undefined4 *)((int)this + 0x71) = 0;
  *(undefined4 *)((int)this + 0x75) = 0;
  *(undefined4 *)((int)this + 0x79) = 0;
  ExceptionList = local_c;
  return this;
}


/* END FUNCTION 0x00481450 */
