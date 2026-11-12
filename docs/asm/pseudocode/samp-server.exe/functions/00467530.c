/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00467530
 * Name: FUN_00467530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ushort __thiscall
FUN_00467530(void *this,int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  void *this_00;
  undefined4 *puVar2;
  uint uVar3;
  ushort uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b14fb;
  local_c = ExceptionList;
  if ((399 < param_1) && (param_1 < 0x264)) {
    uVar4 = 1;
    do {
      if (*(int *)((int)this + (uint)uVar4 * 4 + 0x2014) == 0) {
        if (uVar4 == 2000) {
          return 0xffff;
        }
        ExceptionList = &local_c;
        this_00 = operator_new(0x10b);
        local_4 = 0;
        if (this_00 == (void *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          puVar2 = FUN_00489360(this_00,param_1,param_2,param_3,param_4,param_5,param_6);
        }
        uVar3 = (uint)uVar4;
        *(undefined4 **)((int)this + uVar3 * 4 + 0x3f54) = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          ExceptionList = local_c;
          return 0xffff;
        }
        pcVar1 = (char *)((uint)(byte)((char)param_1 + 0x70) + (int)this);
        *pcVar1 = *pcVar1 + '\x01';
        *(ushort *)(*(int *)((int)this + uVar3 * 4 + 0x3f54) + 100) = uVar4;
        *(undefined4 *)((int)this + uVar3 * 4 + 0x2014) = 1;
        *(undefined4 *)((int)this + uVar3 * 4 + 0xd4) = 0;
        FUN_00467490((int)this);
        ExceptionList = local_c;
        return uVar4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 2000);
  }
  return 0xffff;
}


/* END FUNCTION 0x00467530 */
