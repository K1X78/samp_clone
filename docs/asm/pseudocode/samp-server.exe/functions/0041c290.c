/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041c290
 * Name: FUN_0041c290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_0041c290(void *this,int param_1,int param_2,int param_3,int param_4,char *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 uVar7;
  undefined4 extraout_ECX_07;
  int extraout_EDX;
  int extraout_EDX_00;
  int local_24;
  int local_14;
  
  iVar4 = FUN_00414e90(this);
  iVar5 = FUN_00414e90(extraout_ECX);
  piVar2 = *(int **)(param_2 + 0x18);
  cVar1 = *param_5;
  uVar7 = *(undefined4 *)(param_5 + 4);
  iVar3 = piVar2[2];
  local_14 = 0;
  iVar6 = FUN_0040ec00();
  if ((extraout_EDX == 5) || (extraout_EDX == 10)) {
    local_14 = *(int *)(param_1 + 0x44);
    *(int *)(param_1 + 0x44) = local_14 + 1;
    FUN_00414dd0(0x2a,local_14,iVar6,param_4);
    local_24 = 0;
  }
  else {
    local_24 = FUN_0040ec00();
  }
  FUN_00414e70(iVar3,0x40);
  FUN_00416b80();
  FUN_00414dd0(0x1c,iVar3,*piVar2 + 1,iVar6);
  switch(cVar1) {
  case '\x06':
    FUN_00415c30(1);
    uVar7 = extraout_ECX_03;
    break;
  case '\a':
    FUN_004197c0(1,iVar6,0x1e,(char *)(param_2 + 5),1);
    thunk_FUN_0040ea60(1);
    FUN_00414e70(uVar7,0x46);
    uVar7 = extraout_ECX_02;
    break;
  case '\b':
  case '\t':
    FUN_00414e70(uVar7,0x36);
    FUN_00414dd0(0x37,uVar7,iVar6,local_24);
    FUN_0040d660(extraout_ECX_00,8);
    uVar7 = extraout_ECX_01;
    break;
  default:
    iVar6 = 0;
    if (0 < param_4) {
      do {
        FUN_00414dd0(0x1c,local_14,iVar6,*(int *)(param_5 + 8) + iVar6);
        if (iVar6 == 0) {
          FUN_0040d660(extraout_ECX_04,0x20);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_4);
    }
    if (cVar1 == '\x05') {
      FUN_00414e70(*(undefined4 *)(param_5 + 8),0x10);
      thunk_FUN_0040ea60(param_4);
      uVar7 = extraout_ECX_05;
    }
    else {
      FUN_00414e50(4);
      uVar7 = extraout_ECX_06;
    }
  }
  FUN_0040ec20(uVar7,param_1);
  FUN_0040ec20(extraout_ECX_07,extraout_EDX_00);
  FUN_0040d4e0(param_3,iVar5);
  FUN_00414e70(iVar3,0x43);
  FUN_0040d4e0(param_3,iVar4);
  if ((cVar1 == '\x05') || (cVar1 == '\n')) {
    FUN_00414e70(local_14,0x2b);
  }
  return;
}


/* END FUNCTION 0x0041c290 */
