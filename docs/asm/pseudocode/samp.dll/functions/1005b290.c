/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005b290
 * Name: FUN_1005b290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1005b290(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_34 [4];
  undefined1 local_30 [48];
  
  uVar4 = param_5;
  uVar3 = param_4;
  uVar1 = param_2;
  FUN_1005b290(param_2,param_2,param_4,param_4,param_5);
  uVar2 = param_3;
  FUN_1005b290(param_1,param_1,param_3,param_3,uVar4);
  iVar5 = FUN_10058700(uVar1,param_1,0,0,local_34);
  iVar6 = FUN_10058700(uVar3,uVar2,0,0,&param_2);
  FUN_1005b290(local_34,local_34,&param_2,&param_2,&param_4);
  if (iVar5 != 0) {
    iVar5 = FUN_10058700(&param_4,&param_2,0,0,&param_4);
    if (iVar5 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_101383ec);
    }
  }
  if (iVar6 != 0) {
    iVar5 = FUN_10058700(&param_4,local_34,0,0,&param_4);
    if (iVar5 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_101383ec);
    }
  }
  uVar1 = param_5;
  iVar5 = FUN_10058780(&param_4,param_5,0,0,&param_4);
  if (iVar5 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  iVar5 = FUN_10058780(&param_4,uVar1,0,0,&param_4);
  if (iVar5 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  iVar5 = FUN_10058700(uVar1,&param_4,0,0,uVar1);
  if (iVar5 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x55e);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  return;
}


/* END FUNCTION 0x1005b290 */
