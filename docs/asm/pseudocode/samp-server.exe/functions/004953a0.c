/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004953a0
 * Name: FUN_004953a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004953a0(void *this,ushort *param_1)

{
  ushort uVar1;
  void *this_00;
  byte local_159;
  ushort local_158;
  float local_156 [7];
  float local_13a [6];
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
    local_159 = 0;
    FUN_0044da70(local_120,&local_159,8,'\x01');
    FUN_0044de00(local_120,(byte *)&local_158,0x36);
    if (this_00 != (void *)0x0) {
      uVar1 = FUN_0048edc0(local_13a);
      if ((char)uVar1 != '\0') {
        uVar1 = FUN_0048ed50(local_156);
        if ((char)uVar1 != '\0') {
          FUN_004838c0(this_00,&local_158);
        }
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x004953a0 */
