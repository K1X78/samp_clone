/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483790
 * Name: FUN_00483790
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00483790(void *this,int param_1)

{
  uint local_234 [69];
  uint local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b17d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  local_4 = 0;
  if (param_1 == 0) {
    if (*(int *)((int)this + 0x2cf1) != 0) {
      *(undefined2 *)((int)this + 0x1f) = 0xffff;
      *(undefined2 *)((int)this + 0x21) = 0xffff;
      *(undefined2 *)((int)this + 0x23) = 0xffff;
      *(undefined2 *)((int)this + 0x25) = 0xffff;
      *(undefined4 *)((int)this + 0x2cf1) = 0;
      FUN_0044d8a0(local_234);
      local_4._0_1_ = 1;
      FUN_0044de70(local_234);
      FUN_00493c10(DAT_004fc438,&DAT_004bee24,local_234,*(ushort *)((int)this + 0x2d53),2);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0044d9b0((int)local_234);
    }
  }
  else if (*(int *)((int)this + 0x2cf1) == 0) {
    *(undefined4 *)((int)this + 0x2cf1) = 1;
    FUN_0044de90(local_120);
    FUN_00493c10(DAT_004fc438,&DAT_004bee24,local_120,*(ushort *)((int)this + 0x2d53),2);
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00483790 */
