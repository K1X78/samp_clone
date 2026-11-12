/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00496f60
 * Name: FUN_00496f60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00496f60(void *this,ushort param_1,byte param_2,int param_3)

{
  int iVar1;
  void *this_00;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *extraout_ECX;
  char local_108 [264];
  
  if (DAT_004fc438 == (undefined4 *)0x0) {
    return;
  }
  if (DAT_004fc438[2] == 0) {
    return;
  }
  if (999 < param_1) {
    return;
  }
  uVar3 = (uint)param_1;
  iVar1 = *(int *)(DAT_004fc438[2] + 0x25d84 + uVar3 * 4);
  if (iVar1 == 0) {
    return;
  }
  *(undefined1 *)(*(int *)(iVar1 + 0x30cf) + 0x1028) = 0;
  *(int *)(*(int *)(iVar1 + 0x30cf) + 0x1029) = param_3;
  *(byte *)(*(int *)(iVar1 + 0x30cf) + 0x102d) = param_2;
  this_00 = (void *)*DAT_004fc438;
  uVar2 = FUN_0046d0f0((void *)DAT_004fc438[1],uVar3,(uint)param_2,param_3);
  if (uVar2 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_0046f890(this_00,uVar3,(uint)param_2,param_3);
  }
  iVar1 = *(int *)(iVar1 + 0x30cf);
  if (*(char *)(iVar1 + 0x1028) != '\0') {
    return;
  }
  if ((uVar2 != 0) && (uVar3 != 0)) {
    if (param_2 == 2) {
      iVar4 = FUN_00496f20(this,param_3);
    }
    else {
      if (param_2 != 1) goto LAB_0049706f;
      iVar4 = FUN_00496ee0(this,param_3);
      this = extraout_ECX;
    }
    if (iVar4 != 0) {
      if (param_2 == 2) {
        _sprintf(local_108,"%s/%s",this,iVar4 + 0x112);
        FUN_00496b70(2,param_3,local_108,*(uint *)(iVar4 + 0x223),param_1);
        return;
      }
      if (param_2 != 1) {
        return;
      }
      _sprintf(local_108,"%s/%s",this,iVar4 + 0xd);
      FUN_00496b70(1,param_3,local_108,*(uint *)(iVar4 + 0x21f),param_1);
      return;
    }
  }
LAB_0049706f:
  FUN_004881a0(iVar1);
  return;
}


/* END FUNCTION 0x00496f60 */
