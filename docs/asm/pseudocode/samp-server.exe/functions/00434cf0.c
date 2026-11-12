/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00434cf0
 * Name: FUN_00434cf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00434cf0(int param_1,char *param_2,int param_3,int param_4)

{
  void *pvVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar6;
  int local_c;
  int local_8;
  int local_4;
  
  pcVar2 = param_2;
  pvVar1 = *(void **)(param_1 + 0xc);
  local_c = 0;
  local_4 = FUN_004349d0(param_2,&local_c);
  cVar4 = FUN_00415840();
  param_2 = (char *)CONCAT31(param_2._1_3_,cVar4);
  FUN_0040ea90();
  iVar5 = FUN_0040ec00();
  FUN_00415dc0();
  iVar3 = param_3;
  if (param_4 == param_3) {
    FUN_00414e70(iVar5,0x49);
  }
  else {
    local_8 = FUN_00414e50(0x4a);
    FUN_00414e70(*(undefined4 *)(pcVar2 + 0x18),0x41);
    FUN_00414e70(0,1);
    FUN_0040d680(pvVar1);
  }
  if (local_4 == 1) {
    FUN_00414e70(iVar5,0x15);
    FUN_00414dd0(0x34,*(undefined4 *)(pcVar2 + 0x18),iVar3,iVar5);
    uVar6 = extraout_ECX;
  }
  else {
    FUN_004197c0(1,iVar5,0x1d,(char *)&param_2,1);
    iVar3 = local_c;
    if ((local_c == 0) || (param_3 == param_4)) {
      FUN_004197f0(param_3,*(undefined4 *)(pcVar2 + 0x18),0x31,(char *)0x1);
      uVar6 = extraout_ECX_01;
    }
    else {
      local_8 = FUN_004197f0(0,*(undefined4 *)(pcVar2 + 0x18),0x32,(char *)0x1);
      local_4 = FUN_00414e50(0x4a);
      FUN_004197f0(0,*(undefined4 *)(pcVar2 + 0x18),0x32,(char *)0x1);
      FUN_00414e70(0xffffffff,7);
      FUN_0040d680(pvVar1);
      FUN_00414e70(iVar3,0x14);
      FUN_0040d680(pvVar1);
      FUN_00414e70(iVar3,0x1a);
      FUN_00414e70(0,1);
      FUN_0040d680(pvVar1);
      uVar6 = extraout_ECX_00;
    }
  }
  FUN_0040ec20(uVar6,param_1);
  FUN_0040eaa0(1);
  return;
}


/* END FUNCTION 0x00434cf0 */
