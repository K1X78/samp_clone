/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048a4c0
 * Name: FUN_0048a4c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0048a4c0(void *this,void *param_1,uint param_2,uint param_3)

{
  void **ppvVar1;
  int iVar2;
  uint uVar3;
  uint local_128;
  void *local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b18bb;
  local_c = ExceptionList;
  ppvVar1 = &local_c;
  if ((ushort)param_1 != 0xffff) {
    local_124 = (void *)DAT_004fc438[1];
    if ((void *)*DAT_004fc438 == (void *)0x0) {
      return;
    }
    if (local_124 == (void *)0x0) {
      return;
    }
    ExceptionList = &local_c;
    iVar2 = FUN_0046e830((void *)*DAT_004fc438,(uint)param_1 & 0xffff,
                         (uint)*(ushort *)((int)this + 100),param_2,param_3);
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return;
    }
    uVar3 = FUN_0046bb60(local_124,(uint)param_1 & 0xffff,(uint)*(ushort *)((int)this + 100),param_2
                         ,param_3);
    ppvVar1 = ExceptionList;
    if (uVar3 == 0) {
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = ppvVar1;
  *(uint *)((int)this + 0xc6) = param_2;
  *(uint *)((int)this + 0xca) = param_3;
  FUN_0044d8a0(local_120);
  local_128 = (uint)*(ushort *)((int)this + 100);
  local_4 = 0;
  local_124 = param_1;
  FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
  local_124 = (void *)0x3;
  FUN_0044df40(local_120,(byte *)&local_124,0x20,'\x01');
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_128 = param_2;
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  local_128 = param_3;
  FUN_0044df40(local_120,(byte *)&local_128,0x20,'\x01');
  FUN_00493b20(DAT_004fc438,&DAT_004bef6c,local_120,(uint)*(ushort *)((int)this + 100),
               (ushort)param_1);
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x0048a4c0 */
