/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00487a50
 * Name: FUN_00487a50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00487a50(void *this,float param_1)

{
  ulonglong uVar1;
  byte local_124 [4];
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b183b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(float *)((int)this + 0x30a8) = param_1 + *(float *)((int)this + 0x30a8);
  if (*(int **)((int)this + 0x30cf) != (int *)0x0) {
    FUN_004884a0(*(int **)((int)this + 0x30cf));
  }
  if ((*(char *)((int)this + 0x2f95) != '\0') && (*(char *)((int)this + 0x2f95) != '\t')) {
    if (*(int *)((int)this + 0x2d55) != 0) {
      FUN_004868a0(this);
      *(undefined4 *)((int)this + 0x2d55) = 0;
    }
    if ((*(char *)((int)this + 0x30a7) != '\0') &&
       (300.0 <= *(float *)((int)this + 0x30a8) - _DAT_004fc414)) {
      if (1440.0 <= *(float *)((int)this + 0x30a8)) {
        *(float *)((int)this + 0x30a8) = *(float *)((int)this + 0x30a8) - 1440.0;
      }
      _DAT_004fc414 = *(float *)((int)this + 0x30a8);
      uVar1 = FUN_004a0540();
      FUN_0044d8a0(local_120);
      uVar1 = (ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff;
      local_4 = 0;
      local_124[0] = (byte)((longlong)uVar1 / 0x3c);
      FUN_0044df40(local_120,local_124,8,'\x01');
      local_124[0] = (byte)((longlong)uVar1 % 0x3c);
      FUN_0044df40(local_120,local_124,8,'\x01');
      FUN_00493c10(DAT_004fc438,&DAT_004bef64,local_120,*(ushort *)((int)this + 0x2d53),2);
      local_4 = 0xffffffff;
      FUN_0044d9b0((int)local_120);
    }
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00487a50 */
