/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100590b0
 * Name: FUN_100590b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100590b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_30 [48];
  
  uVar3 = param_5;
  uVar2 = param_4;
  uVar1 = param_2;
  FUN_1005b270(param_2,param_4,param_5);
  FUN_1005b270(param_1,param_3,uVar3);
  iVar4 = FUN_10058700(uVar1,param_1,0,0,&param_2);
  iVar5 = FUN_10058700(uVar2,param_3,0,0,&param_4);
  FUN_1005b270(&param_2,&param_4,&param_5);
  if (iVar4 != 0) {
    iVar4 = FUN_10058700(&param_5,&param_4,0,0,&param_5);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_101383ec);
    }
  }
  if (iVar5 != 0) {
    iVar4 = FUN_10058700(&param_5,&param_2,0,0,&param_5);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_101383ec);
    }
  }
  iVar4 = FUN_10058780(&param_5,uVar3,0,0,&param_5);
  if (iVar4 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  iVar4 = FUN_10058780(&param_5,uVar3,0,0,&param_5);
  if (iVar4 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  iVar4 = FUN_10058700(uVar3,&param_5,2,0,uVar3);
  if (iVar4 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x55e);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  return;
}


/* END FUNCTION 0x100590b0 */
