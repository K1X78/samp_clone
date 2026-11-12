/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00434ef0
 * Name: FUN_00434ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00434ef0(void *this,void *param_1,char *param_2,int param_3,uint param_4)

{
  char cVar1;
  void *this_00;
  char *pcVar2;
  uint uVar3;
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
  undefined4 extraout_ECX_07;
  undefined4 uVar7;
  undefined4 extraout_ECX_08;
  int extraout_EDX;
  int local_4;
  
  uVar3 = param_4;
  iVar4 = param_3;
  pcVar2 = param_2;
  this_00 = param_1;
  iVar6 = *(int *)((int)param_1 + 0xc);
  param_1 = (void *)0x0;
  local_4 = 0;
  if ((iVar6 != 0) && (param_2 != (char *)0x0)) {
    cVar1 = *param_2;
    switch(cVar1) {
    case '\x13':
      FUN_004351c0(this_00,*(char **)(param_2 + 8),param_3,param_4);
      uVar7 = extraout_ECX_01;
      break;
    default:
      iVar6 = FUN_00415d80(param_2,(int *)&param_1);
      FUN_00414dd0(0x1a,iVar6,param_3,(uint)(param_4 != 0));
      uVar7 = extraout_ECX_07;
      break;
    case 'D':
      FUN_00434ef0(this,this_00,*(char **)(param_2 + 8),param_3,param_4);
      FUN_00434ef0(*(void **)(pcVar2 + 0xc),this_00,*(void **)(pcVar2 + 0xc),iVar4,uVar3);
      uVar7 = extraout_ECX_00;
      break;
    case 'E':
      iVar4 = FUN_00414e90(this);
      FUN_0040ea90();
      FUN_004351c0(this_00,*(char **)(pcVar2 + 8),iVar4,param_4 ^ 8);
      FUN_00434ef0((void *)param_3,this_00,*(char **)(pcVar2 + 0xc),param_3,param_4);
      FUN_0040d4e0(iVar6,iVar4);
      FUN_0040eaa0(1);
      uVar7 = extraout_ECX;
      break;
    case 'F':
    case -0x6e:
      iVar6 = FUN_00415d80(*(undefined4 *)(param_2 + 8),(int *)&param_1);
      iVar4 = FUN_00415d80(*(undefined4 *)(pcVar2 + 0xc),&local_4);
      FUN_004301d0(*(void **)(pcVar2 + 8),this_00,(cVar1 == 'F') + 'K',iVar6,iVar4,param_3,0x80);
      uVar7 = extraout_ECX_03;
      break;
    case 'G':
      FUN_00415ef0(this_00,param_3,1,param_4);
      uVar7 = extraout_ECX_05;
      break;
    case 'H':
      iVar5 = FUN_00414e90(this);
      iVar4 = param_3;
      if (param_4 == 0) {
        iVar4 = iVar5;
      }
      FUN_00434cf0((int)this_00,pcVar2,iVar5,iVar4);
      FUN_00414e70(0,1);
      FUN_0040d4e0(iVar6,iVar5);
      uVar7 = extraout_ECX_06;
      break;
    case 'I':
    case 'J':
      iVar6 = FUN_00415d80(*(undefined4 *)(param_2 + 8),(int *)&param_1);
      FUN_00414e70(iVar6,cVar1);
      uVar7 = extraout_ECX_04;
      break;
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
      iVar6 = FUN_00415d80(*(undefined4 *)(param_2 + 8),(int *)&param_1);
      iVar4 = FUN_00415d80(*(undefined4 *)(pcVar2 + 0xc),&local_4);
      FUN_004301d0(*(void **)(pcVar2 + 8),this_00,cVar1,iVar6,iVar4,param_3,(byte)param_4);
      uVar7 = extraout_ECX_02;
    }
    FUN_0040ec20(uVar7,(int)this_00);
    FUN_0040ec20(extraout_ECX_08,extraout_EDX);
  }
  return;
}


/* END FUNCTION 0x00434ef0 */
