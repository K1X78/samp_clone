/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00421f10
 * Name: FUN_00421f10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_00421f10(void *param_1,int param_2,int *param_3,undefined4 param_4,char *param_5,int *param_6,
            int param_7,char *param_8,undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int extraout_EDX;
  int iVar4;
  char *local_14;
  
  uVar1 = *(undefined4 *)(param_8 + 4);
  cVar2 = *param_8;
  if (*(int *)((int)param_1 + 0xc) == 0) {
    return;
  }
  if ((param_6 == (int *)0x0) && (-1 >= param_7)) {
    FUN_00416b80();
  }
  if ((int)param_5 < 1) {
    local_14 = (char *)*param_3;
  }
  else {
    local_14 = param_5;
  }
  if (*(int *)(param_8 + 8) == 0) {
    *(int *)(param_8 + 8) = *(int *)((int)param_1 + 0x48) + 1;
    *(char **)(param_8 + 0xc) = local_14;
    *(int *)((int)param_1 + 0x48) = (int)(local_14 + *(int *)((int)param_1 + 0x48));
  }
  iVar3 = *(int *)(param_8 + 8);
  if ((int)param_5 < 1) {
    if (cVar2 != '\x03') {
      FUN_0040eb00();
      FUN_00420330(param_1,iVar3,(uint)(cVar2 == '\x05'));
    }
  }
  else {
    iVar4 = 0;
    if (0 < (int)param_5) {
      do {
        FUN_00414dd0(0x1c,param_4,iVar4,iVar4 + iVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_5);
    }
  }
  if ((-1 < param_7) && (FUN_0041c200(param_7,param_9,local_14,iVar3), param_6 == (int *)0x0)) {
    FUN_00416b80();
  }
  iVar4 = FUN_0041c260(*param_3);
  if (iVar4 != 0) {
    return;
  }
  switch(cVar2) {
  case '\x01':
    iVar4 = FUN_0040ec00();
    FUN_00414dd0(0x1e,iVar3,local_14,iVar4);
    FUN_00414e70(uVar1,0x46);
    FUN_0040ec20(extraout_ECX,(int)param_1);
    break;
  case '\x02':
    FUN_00414dd0(0x47,uVar1,iVar3,local_14);
    break;
  case '\x03':
    FUN_00414e70(1,7);
    break;
  case '\x05':
  case '\n':
    if (param_6 == (int *)0x0) {
      if (cVar2 == '\n') {
        FUN_00414e50(4);
      }
      else {
        FUN_00414e70(iVar3,0x10);
        thunk_FUN_0040ea60((int)local_14);
      }
    }
    else {
      iVar4 = FUN_0040ec00();
      FUN_00414dd0(0x1e,iVar3,local_14,iVar4);
      FUN_00421dd0(param_6,param_2);
      FUN_0040ec20(extraout_ECX_05,(int)param_1);
    }
    break;
  case '\x06':
    if (param_6 == (int *)0x0) {
      FUN_00415c30(1);
      break;
    }
    goto LAB_004221f1;
  case '\a':
    cVar2 = FUN_00415810();
    *(char *)(param_2 + 5) = cVar2;
    if (param_6 == (int *)0x0) {
      FUN_0040ec00();
      FUN_004197c0(1,iVar3,0x1e,(char *)(param_2 + 5),1);
      thunk_FUN_0040ea60(1);
      FUN_00414e70(uVar1,0x46);
      FUN_0040ec20(extraout_ECX_04,(int)param_1);
      break;
    }
LAB_004221f1:
    FUN_00421dd0(param_6,param_2);
    break;
  case '\b':
  case '\t':
    iVar4 = FUN_0040ec00();
    FUN_00414dd0(0x1e,iVar3,local_14,iVar4);
    if (param_6 == (int *)0x0) {
      iVar3 = FUN_0040ec00();
      FUN_00414e70(uVar1,0x36);
      FUN_00414dd0(0x37,uVar1,iVar4,iVar3);
      FUN_0040d660(extraout_ECX_01,8);
      FUN_0040ec20(extraout_ECX_02,(int)param_1);
      FUN_0040ec20(extraout_ECX_03,extraout_EDX);
    }
    else {
      FUN_00421dd0(param_6,param_2);
      FUN_0040ec20(extraout_ECX_00,(int)param_1);
    }
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    FUN_00414dd0(0x73,*(int *)(param_2 + 0x30),param_10,0xffffffff);
  }
  return;
}


/* END FUNCTION 0x00421f10 */
