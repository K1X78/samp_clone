/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041c8b0
 * Name: FUN_0041c8b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl
FUN_0041c8b0(int *param_1,int param_2,int param_3,undefined1 *param_4,undefined4 param_5,
            char *param_6,int param_7,undefined4 param_8)

{
  void *pvVar1;
  char cVar2;
  int in_EAX;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int extraout_EDX;
  
  pvVar1 = (void *)param_1[3];
  uVar3 = FUN_0040d5c0();
  iVar4 = FUN_00414e90(extraout_ECX);
  if (in_EAX != 0) {
    FUN_00414e50(0x1b);
    iVar5 = FUN_004197c0(in_EAX + 1,*(undefined4 *)(param_3 + 8),0x18,param_6,param_7);
    FUN_00414dd0(0x19,iVar5 + 2,iVar4,iVar5 + 2);
    FUN_0040d680(pvVar1);
    FUN_00415d40(in_EAX + 1,*(int *)(param_3 + 8));
    FUN_00414e70(1,7);
  }
  if (*(char *)(*param_1 + 0x1e) == '\0') {
    FUN_00416b80();
    switch(*param_4) {
    case 6:
      FUN_00415c30(1);
      break;
    case 7:
      cVar2 = FUN_00415810();
      *(char *)(param_2 + 5) = cVar2;
      FUN_0040ec00();
      FUN_004197c0(1,*(undefined4 *)(param_3 + 8),0x1e,(char *)(param_2 + 5),1);
      thunk_FUN_0040ea60(1);
      FUN_00414e70(*(undefined4 *)(param_4 + 4),0x46);
      FUN_0040ec20(extraout_ECX_03,(int)param_1);
      break;
    case 8:
    case 9:
      iVar5 = FUN_0040ec00();
      iVar6 = FUN_0040ec00();
      FUN_00414dd0(0x1e,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc),iVar5);
      FUN_00414e70(*(undefined4 *)(param_4 + 4),0x36);
      FUN_00414dd0(0x37,*(undefined4 *)(param_4 + 4),iVar5,iVar6);
      FUN_0040d660(extraout_ECX_00,8);
      FUN_0040ec20(extraout_ECX_01,(int)param_1);
      FUN_0040ec20(extraout_ECX_02,extraout_EDX);
      break;
    case 10:
      if (*(int *)(param_4 + 8) == 0) {
        iVar5 = FUN_0040ec60((int)param_1);
        *(int *)(param_4 + 8) = iVar5;
        *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_3 + 0xc);
      }
      FUN_00415c30(*(int *)(param_4 + 0xc));
      FUN_00414e50(4);
      break;
    default:
      FUN_00414e70(*(undefined4 *)(param_3 + 8),0x10);
      thunk_FUN_0040ea60(*(int *)(param_3 + 0xc));
    }
    if (*(int *)(param_2 + 0x30) != 0) {
      FUN_00414dd0(0x73,*(int *)(param_2 + 0x30),param_8,0xffffffff);
    }
    FUN_0040d4e0((int)pvVar1,iVar4);
    FUN_00414e50(3);
    return uVar3;
  }
  return 0;
}


/* END FUNCTION 0x0041c8b0 */
