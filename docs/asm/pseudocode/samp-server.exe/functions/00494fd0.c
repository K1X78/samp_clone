/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00494fd0
 * Name: FUN_00494fd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00494fd0(void *this,ushort *param_1)

{
  void *this_00;
  ushort uVar1;
  uint uVar2;
  int iVar3;
  void *this_01;
  byte local_161;
  ushort local_160 [12];
  float local_148 [3];
  float local_13c [7];
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
    local_161 = 0;
    FUN_0044da70(local_120,&local_161,8,'\x01');
    FUN_0044de00(local_120,(byte *)local_160,0x3f);
    if (this_01 != (void *)0x0) {
      if ((local_160[0] == 0xffff) || (2000 < local_160[0])) {
        FUN_00494040(this,(uint)*param_1);
      }
      else {
        uVar1 = FUN_0048edc0(local_13c);
        if (((char)uVar1 != '\0') && (uVar1 = FUN_0048ed50(local_148), (char)uVar1 != '\0')) {
          FUN_004872a0(this_01,local_160,0);
          this_00 = *(void **)this;
          if (((*(void **)((int)this + 4) != (void *)0x0) && (this_00 != (void *)0x0)) &&
             (((uVar2 = FUN_0046bf30(*(void **)((int)this + 4),(uint)*param_1), uVar2 == 0 ||
               (iVar3 = FUN_0046eb60(this_00,(uint)*param_1), iVar3 == 0)) &&
              (iVar3 = FUN_00463da0(*(void **)((int)this + 8),*param_1), iVar3 != 0)))) {
            *(undefined4 *)((int)this_01 + 0x2d55) = 0;
          }
        }
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00494fd0 */
