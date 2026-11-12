/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00495280
 * Name: FUN_00495280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00495280(void *this,ushort *param_1)

{
  void *this_00;
  uint uVar1;
  int iVar2;
  void *this_01;
  byte local_135;
  byte local_134 [20];
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1b8b;
  local_c = ExceptionList;
  if (*param_1 < 1000) {
    this_01 = *(void **)(*(int *)((int)this + 8) + 0x25d84 + (uint)*param_1 * 4);
  }
  else {
    this_01 = (void *)0x0;
  }
  ExceptionList = &local_c;
  FUN_0044d930(local_120,*(undefined4 **)(param_1 + 8),*(uint *)(param_1 + 4),'\0');
  local_4 = 0;
  if (*(int *)((int)this + 0x5e) == 1) {
    local_135 = 0;
    FUN_0044da70(local_120,&local_135,8,'\x01');
    FUN_0044de00(local_120,local_134,0x12);
    if (this_01 != (void *)0x0) {
      FUN_004876a0(this_01,(undefined4 *)local_134);
      this_00 = *(void **)this;
      if ((((*(void **)((int)this + 4) != (void *)0x0) && (this_00 != (void *)0x0)) &&
          ((uVar1 = FUN_0046bf30(*(void **)((int)this + 4),(uint)*param_1), uVar1 == 0 ||
           (iVar2 = FUN_0046eb60(this_00,(uint)*param_1), iVar2 == 0)))) &&
         (iVar2 = FUN_00463da0(*(void **)((int)this + 8),*param_1), iVar2 != 0)) {
        *(undefined4 *)((int)this_01 + 0x2d55) = 0;
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00495280 */
