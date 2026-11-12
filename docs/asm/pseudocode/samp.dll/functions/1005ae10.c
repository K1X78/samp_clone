/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005ae10
 * Name: FUN_1005ae10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1005ae10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_3c;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined1 local_30 [48];
  
  iVar5 = param_5;
  uVar4 = param_4;
  uVar2 = param_2;
  FUN_1005a9c0(param_2,param_4,param_5);
  uVar3 = param_3;
  FUN_1005a9c0(param_1,param_3,iVar5 + 8);
  iVar5 = FUN_10058700(uVar2,param_1,1,1,&param_2);
  iVar6 = FUN_10058700(uVar4,uVar3,1,1,&param_4);
  FUN_1005a9c0(&param_2,&param_4,&local_3c);
  local_34 = 0;
  if (iVar5 != 0) {
    iVar7 = FUN_10058700(local_38,&param_4,2,1,local_38);
    if (iVar7 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_101383ec);
    }
  }
  if (iVar6 != 0) {
    iVar7 = FUN_10058700(local_38,&param_2,2,1,local_38);
    if (iVar7 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_101383ec);
    }
  }
  if ((iVar5 != 0) && (iVar6 != 0)) {
    uVar8 = 2;
    do {
      piVar1 = &local_3c + uVar8;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      uVar8 = uVar8 + 1;
    } while (uVar8 < 3);
  }
  iVar6 = FUN_10058780(&local_3c,param_5 + 8,3,2,&local_3c);
  iVar5 = param_5;
  if (iVar6 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  iVar6 = FUN_10058780(&local_3c,param_5,3,2,&local_3c);
  if (iVar6 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  iVar5 = FUN_10058700(iVar5 + 4,&local_3c,5,3,iVar5 + 4);
  if (iVar5 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x55e);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  return;
}


/* END FUNCTION 0x1005ae10 */
