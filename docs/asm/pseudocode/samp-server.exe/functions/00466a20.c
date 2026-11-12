/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00466a20
 * Name: FUN_00466a20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00466a20(void *this,ushort param_1,int param_2)

{
  uint uVar1;
  void **ppvVar2;
  int iVar3;
  int local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b14bb;
  local_c = ExceptionList;
  if ((param_1 < 1000) && (uVar1 = (uint)param_1, *(int *)((int)this + uVar1 * 4 + 0x24de4) != 0)) {
    ppvVar2 = &local_c;
    if ((DAT_004fc444 != 0) && (ppvVar2 = &local_c, param_2 != 0)) {
      if (*(int *)((int)this + uVar1 * 4) == param_2) {
        return;
      }
      ExceptionList = &local_c;
      iVar3 = FUN_00463d80(this,param_1);
      *(undefined1 *)(iVar3 + 0x30b5) = 1;
      ppvVar2 = ExceptionList;
    }
    ExceptionList = ppvVar2;
    if (*(int *)((int)this + uVar1 * 4) != param_2) {
      *(int *)((int)this + uVar1 * 4) = param_2;
      FUN_0044d8a0(local_120);
      local_4 = 0;
      local_124 = param_2;
      FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
      FUN_00493c10(DAT_004fc438,&DAT_004b69fc,local_120,param_1,2);
      local_4 = 0xffffffff;
      FUN_0044d9b0((int)local_120);
    }
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00466a20 */
