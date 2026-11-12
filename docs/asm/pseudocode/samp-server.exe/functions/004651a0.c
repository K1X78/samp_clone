/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004651a0
 * Name: FUN_004651a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte __thiscall
FUN_004651a0(void *this,char *param_1,undefined4 param_2,undefined4 param_3,char param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *this_00;
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b140b;
  local_c = ExceptionList;
  uVar3 = 1;
  do {
    bVar2 = (byte)uVar3;
    if (*(int *)((int)this + uVar3 * 4 + 0x200) == 0) break;
    bVar2 = bVar2 + 1;
    uVar3 = (uint)bVar2;
  } while (bVar2 < 0x80);
  if (bVar2 != 0x80) {
    ExceptionList = &local_c;
    this_00 = operator_new(0x1354);
    local_4 = 0;
    if (this_00 != (void *)0x0) {
      pbVar1 = (byte *)FUN_00492e90(this_00,param_1,param_2,param_3,param_4,param_5,param_6);
      if (pbVar1 != (byte *)0x0) {
        *(undefined4 *)((int)this + (uint)bVar2 * 4 + 0x200) = 1;
        *pbVar1 = bVar2;
        *(byte **)((int)this + (uint)bVar2 * 4) = pbVar1;
        ExceptionList = local_c;
        return bVar2;
      }
    }
  }
  ExceptionList = local_c;
  return 0xff;
}


/* END FUNCTION 0x004651a0 */
