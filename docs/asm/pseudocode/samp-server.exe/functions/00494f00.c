/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00494f00
 * Name: FUN_00494f00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00494f00(void *this,ushort *param_1)

{
  void *this_00;
  byte local_141;
  byte local_140 [32];
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1b8b;
  local_c = ExceptionList;
  if (*param_1 < 1000) {
    this_00 = *(void **)(*(int *)((int)this + 8) + 0x25d84 + (uint)*param_1 * 4);
  }
  else {
    this_00 = (void *)0x0;
  }
  ExceptionList = &local_c;
  FUN_0044d930(local_120,*(undefined4 **)(param_1 + 8),*(uint *)(param_1 + 4),'\0');
  local_4 = 0;
  if (*(int *)((int)this + 0x5e) == 1) {
    local_141 = 0;
    FUN_0044da70(local_120,&local_141,8,'\x01');
    FUN_0044de00(local_120,local_140,0x1f);
    if (this_00 != (void *)0x0) {
      FUN_00483700(this_00,(undefined4 *)local_140);
    }
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00494f00 */
