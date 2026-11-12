/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004351c0
 * Name: FUN_004351c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004351c0(void *param_1,char *param_2,int param_3,uint param_4)

{
  void *this;
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 uVar5;
  undefined4 extraout_ECX_09;
  char cVar6;
  int extraout_EDX;
  int local_4;
  
  uVar2 = param_4;
  iVar3 = param_3;
  pcVar1 = param_2;
  this = param_1;
  iVar4 = *(int *)((int)param_1 + 0xc);
  param_1 = (void *)0x0;
  local_4 = 0;
  if ((iVar4 != 0) && (param_2 != (char *)0x0)) {
    cVar6 = (*param_2 + 1U ^ 1) - 1;
    switch(*param_2) {
    case '\x13':
      FUN_00434ef0(*(void **)(param_2 + 8),this,*(void **)(param_2 + 8),param_3,param_4);
      uVar5 = extraout_ECX_01;
      break;
    default:
      iVar4 = FUN_00415d80(param_2,(int *)&param_1);
      FUN_00414dd0(0x1b,iVar4,param_3,(uint)(param_4 != 0));
      uVar5 = extraout_ECX_08;
      break;
    case 'D':
      iVar3 = FUN_00414e90(0);
      FUN_0040ea90();
      FUN_00434ef0(*(void **)(pcVar1 + 8),this,*(void **)(pcVar1 + 8),iVar3,param_4 ^ 8);
      FUN_004351c0(this,*(char **)(pcVar1 + 0xc),param_3,param_4);
      FUN_0040d4e0(iVar4,iVar3);
      FUN_0040eaa0(1);
      uVar5 = extraout_ECX_00;
      break;
    case 'E':
      FUN_004351c0(this,*(char **)(param_2 + 8),param_3,param_4);
      FUN_004351c0(this,*(char **)(pcVar1 + 0xc),iVar3,uVar2);
      uVar5 = extraout_ECX;
      break;
    case 'F':
    case -0x6e:
      iVar4 = FUN_00415d80(*(undefined4 *)(param_2 + 8),(int *)&param_1);
      iVar3 = FUN_00415d80(*(undefined4 *)(pcVar1 + 0xc),&local_4);
      FUN_004301d0(*(void **)(pcVar1 + 8),this,(*pcVar1 != 'F') + 'K',iVar4,iVar3,param_3,0x80);
      uVar5 = extraout_ECX_03;
      break;
    case 'G':
      FUN_00415ef0(this,param_3,0,param_4);
      uVar5 = extraout_ECX_05;
      break;
    case 'H':
      if (param_4 == 0) {
        iVar3 = FUN_00414e90(0);
        FUN_00434cf0((int)this,pcVar1,param_3,iVar3);
        FUN_0040d4e0(iVar4,iVar3);
        uVar5 = extraout_ECX_07;
      }
      else {
        FUN_00434cf0((int)this,param_2,param_3,param_3);
        uVar5 = extraout_ECX_06;
      }
      break;
    case 'I':
    case 'J':
      iVar4 = FUN_00415d80(*(undefined4 *)(param_2 + 8),(int *)&param_1);
      FUN_00414e70(iVar4,cVar6);
      uVar5 = extraout_ECX_04;
      break;
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
      iVar4 = FUN_00415d80(*(undefined4 *)(param_2 + 8),(int *)&param_1);
      iVar3 = FUN_00415d80(*(undefined4 *)(pcVar1 + 0xc),&local_4);
      FUN_004301d0(*(void **)(pcVar1 + 8),this,cVar6,iVar4,iVar3,param_3,(byte)param_4);
      uVar5 = extraout_ECX_02;
    }
    FUN_0040ec20(uVar5,(int)this);
    FUN_0040ec20(extraout_ECX_09,extraout_EDX);
  }
  return;
}


/* END FUNCTION 0x004351c0 */
