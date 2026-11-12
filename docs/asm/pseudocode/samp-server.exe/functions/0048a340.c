/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048a340
 * Name: FUN_0048a340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0048a340(void *this,void *param_1,byte param_2)

{
  ushort uVar1;
  void **ppvVar2;
  int iVar3;
  uint uVar4;
  void *local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b18bb;
  local_c = ExceptionList;
  ppvVar2 = &local_c;
  if ((ushort)param_1 != 0xffff) {
    local_124 = (void *)DAT_004fc438[1];
    if ((void *)*DAT_004fc438 == (void *)0x0) {
      return;
    }
    if (local_124 == (void *)0x0) {
      return;
    }
    ExceptionList = &local_c;
    iVar3 = FUN_0046e9b0((void *)*DAT_004fc438,(uint)param_1 & 0xffff,
                         (uint)*(ushort *)((int)this + 100),(uint)param_2);
    if (iVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
    uVar4 = FUN_0046bd40(local_124,(uint)param_1 & 0xffff,(uint)*(ushort *)((int)this + 100),
                         (uint)param_2);
    ppvVar2 = ExceptionList;
    if (uVar4 == 0) {
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = ppvVar2;
  *(byte *)((int)this + 0xc5) = param_2 + 1;
  FUN_0044d8a0(local_120);
  uVar1 = *(ushort *)((int)this + 100);
  local_4 = 0;
  local_124 = param_1;
  FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
  local_124 = (void *)0x1;
  FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
  local_124 = (void *)(uint)uVar1;
  FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
  local_124 = (void *)(uint)param_2;
  FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
  local_124 = (void *)0x0;
  FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
  FUN_00493b20(DAT_004fc438,&DAT_004bef6c,local_120,(uint)*(ushort *)((int)this + 100),
               (ushort)param_1);
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x0048a340 */
