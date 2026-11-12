/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00424cc0
 * Name: FUN_00424cc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_00424cc0(void *this,undefined4 param_1,short *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  void *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  iVar1 = *(int *)this;
  local_8 = 0;
  local_4 = 0;
  local_24 = this;
  iVar2 = FUN_00424c70(&local_24);
  if (((iVar2 == 0) && (iVar2 = FUN_00424c70(&local_24), iVar2 == 0)) &&
     (iVar2 = FUN_00424c70(&local_24), iVar2 == 0)) {
    if ((in_EAX == 0) ||
       ((*(int *)(in_EAX + 4) != 0 &&
        (iVar2 = FUN_0041ab60(param_1,*(int *)(in_EAX + 4),0,0), iVar2 == 0)))) {
      piVar3 = (int *)FUN_0041c720();
      iVar2 = FUN_0040ec60((int)this);
      FUN_00415dc0();
      FUN_00415dc0();
      FUN_00415dc0();
      if (piVar3 != (int *)0x0) {
        FUN_00414dd0(0x12,0,(iVar2 - *param_2) + 3,iVar2 + 3);
        FUN_0040d660(extraout_ECX,(char)*param_2);
        FUN_00415110(-5,(char *)param_2,piVar3);
        FUN_00414e50(0x7a);
      }
    }
  }
  else {
    *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 1;
  }
  FUN_004158d0(iVar1,param_3);
  FUN_004158d0(iVar1,param_4);
  FUN_004158d0(iVar1,param_5);
  return;
}


/* END FUNCTION 0x00424cc0 */
